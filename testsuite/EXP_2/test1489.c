
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

int32_t x4 = -1;
static int8_t x5 = -1;
static int16_t x6 = -1;
static int8_t x7 = INT8_MIN;
int32_t t2 = 742762;
volatile int8_t x18 = INT8_MIN;
volatile int64_t x21 = INT64_MIN;
int32_t x22 = -374732;
int32_t x33 = INT32_MIN;
int64_t x38 = INT64_MAX;
volatile int8_t x39 = -6;
uint8_t x42 = 102U;
int32_t x43 = -925;
static uint8_t x49 = 123U;
static int64_t x51 = INT64_MIN;
uint64_t x57 = 7LLU;
int16_t x67 = INT16_MAX;
volatile int32_t t16 = -54;
int32_t x69 = INT32_MIN;
static uint8_t x73 = 1U;
uint16_t x74 = 27U;
int32_t t18 = 7919716;
uint8_t x81 = 28U;
volatile int32_t x83 = INT32_MAX;
int64_t x91 = INT64_MIN;
int32_t t22 = 13863585;
uint8_t x101 = 105U;
volatile uint32_t t24 = 1086172U;
int64_t x105 = INT64_MIN;
volatile int32_t t25 = -10784;
int16_t x122 = INT16_MIN;
volatile uint32_t x124 = 886569905U;
volatile int32_t t32 = -62;
int16_t x145 = INT16_MIN;
uint64_t x159 = 3769063150967558799LLU;
int32_t x167 = 872;
static volatile int32_t t40 = -692756;
volatile int32_t x173 = INT32_MIN;
volatile int8_t x186 = INT8_MIN;
int32_t t43 = -62558841;
uint8_t x189 = 72U;
static uint32_t x190 = 0U;
volatile int64_t t45 = -164966408242LL;
uint8_t x200 = 13U;
static int64_t x206 = -1LL;
static volatile int32_t x208 = -58140;
volatile uint64_t x213 = 42638819811LLU;
int32_t x214 = -1;
int32_t t52 = -1;
int8_t x230 = -1;
static int64_t t55 = -432225038LL;
static int8_t x238 = -3;
int32_t t57 = -88969;
int8_t x253 = -1;
int32_t t60 = -111125747;
volatile int32_t x259 = INT32_MAX;
int64_t x262 = INT64_MIN;
uint8_t x264 = UINT8_MAX;
uint16_t x266 = UINT16_MAX;
uint64_t x267 = UINT64_MAX;
volatile int16_t x269 = -1;
uint16_t x270 = 9U;
uint64_t x271 = 521887309030491939LLU;
int32_t x279 = 19;
static int64_t x284 = INT64_MAX;
static volatile int32_t x285 = INT32_MIN;
static uint32_t x288 = 1063U;
int64_t x291 = -1LL;
uint32_t x299 = UINT32_MAX;
int64_t x308 = INT64_MIN;
int64_t x316 = -1LL;
volatile int64_t t75 = 42141179183LL;
int64_t x321 = INT64_MAX;
int64_t x328 = INT64_MIN;
int16_t x334 = INT16_MAX;
volatile uint16_t x340 = 4711U;
int64_t x345 = INT64_MIN;
volatile uint64_t t83 = 253LLU;
int32_t t84 = -164076;
static int8_t x355 = 3;
uint8_t x358 = 32U;
uint16_t x359 = UINT16_MAX;
uint8_t x361 = 11U;
volatile uint32_t t88 = 29480410U;
volatile uint32_t x371 = 2009273U;
volatile uint32_t x374 = 62808U;
int32_t x379 = -128286;
int32_t x383 = 2031585;
uint8_t x400 = UINT8_MAX;
int16_t x404 = -1;
int32_t t97 = 123;
uint32_t x405 = 12802143U;
int16_t x412 = -1;
static uint8_t x416 = UINT8_MAX;
int8_t x417 = -1;
uint16_t x418 = 5U;
int8_t x426 = INT8_MIN;
int8_t x427 = INT8_MAX;
int16_t x435 = -1;
volatile int32_t t105 = -53114;
int8_t x438 = 2;
int32_t t106 = -735904490;
static int16_t x442 = INT16_MIN;
volatile int32_t t107 = 6115;
int64_t x445 = INT64_MAX;
volatile int32_t t108 = -84;
uint64_t x457 = 742558561853LLU;
volatile int64_t x458 = -13291LL;
volatile int32_t t111 = 0;
uint32_t x465 = 1U;
volatile int8_t x468 = -1;
static volatile int8_t x469 = INT8_MIN;
uint8_t x470 = 4U;
int8_t x471 = -1;
volatile int8_t x472 = INT8_MIN;
uint8_t x475 = 0U;
uint32_t x479 = UINT32_MAX;
volatile int32_t x482 = 4004512;
int32_t x486 = INT32_MIN;
int8_t x487 = INT8_MAX;
int8_t x488 = INT8_MIN;
volatile int16_t x491 = 564;
uint32_t x494 = 218468U;
int32_t x503 = INT32_MIN;
static int8_t x508 = 47;
int32_t t122 = 265148965;
volatile int32_t t123 = -259222158;
int32_t x523 = INT32_MIN;
int32_t t126 = -1229;
uint64_t x533 = 69873248128569991LLU;
uint16_t x539 = 350U;
int32_t t130 = 5;
volatile uint64_t t131 = 16256388LLU;
uint32_t x545 = 123398U;
int32_t t132 = -140100;
static volatile uint16_t x552 = 2U;
int32_t x553 = INT32_MAX;
volatile int8_t x558 = -1;
uint8_t x562 = UINT8_MAX;
int64_t x567 = -1LL;
static int8_t x568 = INT8_MAX;
volatile int64_t x569 = -325231746766193435LL;
static int32_t x572 = INT32_MIN;
static int32_t t139 = -6769;
int16_t x578 = INT16_MIN;
volatile int32_t t140 = 53;
int16_t x589 = -1;
int64_t t144 = -961590398456LL;
static int32_t t146 = 1074257;
volatile uint32_t x615 = UINT32_MAX;
static int8_t x621 = 0;
static uint32_t x626 = 336910764U;
int32_t x628 = INT32_MIN;
uint32_t x631 = 139863U;
int8_t x632 = -1;
uint64_t x635 = UINT64_MAX;
int32_t x642 = INT32_MAX;
volatile int64_t t156 = 1781098LL;
uint64_t x649 = UINT64_MAX;
int32_t x651 = -1;
int8_t x652 = -1;
static uint16_t x657 = 1U;
int16_t x658 = -1;
static uint64_t x660 = UINT64_MAX;
static int8_t x668 = 14;
volatile int8_t x675 = -1;
uint16_t x679 = UINT16_MAX;
volatile int32_t t166 = 0;
uint8_t x686 = 1U;
uint16_t x688 = UINT16_MAX;
int32_t t167 = 117394;
volatile int8_t x690 = -1;
volatile int32_t x692 = 11;
uint8_t x693 = 64U;
static int32_t t169 = -2063;
volatile uint64_t t170 = 58LLU;
int16_t x702 = INT16_MIN;
int32_t t173 = 58;
int32_t x713 = INT32_MIN;
int8_t x716 = INT8_MAX;
static volatile int32_t t174 = 21776;
static volatile uint8_t x723 = 25U;
int32_t x725 = INT32_MAX;
int64_t x738 = INT64_MIN;
uint8_t x739 = 16U;
uint64_t x743 = UINT64_MAX;
int16_t x745 = -1;
int8_t x747 = INT8_MAX;
static uint16_t x757 = 4054U;
uint64_t x758 = 253LLU;
uint32_t x759 = UINT32_MAX;
volatile int8_t x764 = 1;
int8_t x771 = 0;
uint64_t x772 = UINT64_MAX;
volatile uint64_t t187 = 116530972397LLU;
int64_t x784 = 277017147058889056LL;
int8_t x788 = -2;
static volatile int64_t x794 = INT64_MIN;
volatile int32_t t195 = 0;
int32_t x809 = -1;
static int16_t x810 = INT16_MIN;


void f0(void) {
    	int16_t x1 = 7;
	volatile int64_t x2 = 334860LL;
	int16_t x3 = INT16_MIN;
	static volatile int32_t t0 = 1715824;

    t0 = ((x1>(x2==x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x8 = 22004U;
	int32_t t1 = 2172;

    t1 = ((x5>(x6==x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	static volatile int64_t x11 = INT64_MAX;
	volatile uint16_t x12 = 45U;

    t2 = ((x9>(x10==x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 402187029LLU;
	uint32_t x14 = UINT32_MAX;
	static int32_t x15 = -1;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = -1390852;

    t3 = ((x13>(x14==x15))%x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 1819129273925650LLU;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = -11;
	int32_t t4 = -2340;

    t4 = ((x17>(x18==x19))%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x23 = -1LL;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = -4480144;

    t5 = ((x21>(x22==x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 53U;
	uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 4656128U;
	int32_t x28 = 9;
	int32_t t6 = -208903238;

    t6 = ((x25>(x26==x27))%x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 110U;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = 464171180902948744LL;
	int16_t x32 = -3182;
	int32_t t7 = -198771905;

    t7 = ((x29>(x30==x31))%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = 1U;
	int8_t x35 = -13;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -7893952LL;

    t8 = ((x33>(x34==x35))%x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -1;
	volatile int32_t x40 = -307321;
	int32_t t9 = 2312179;

    t9 = ((x37>(x38==x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 0U;
	volatile uint64_t x44 = 58224426220854LLU;
	volatile uint64_t t10 = 242466842LLU;

    t10 = ((x41>(x42==x43))%x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	uint64_t x46 = 7837612774LLU;
	static int64_t x47 = 38LL;
	uint8_t x48 = 18U;
	static volatile int32_t t11 = -231;

    t11 = ((x45>(x46==x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = -10;
	int8_t x52 = -1;
	int32_t t12 = -2014;

    t12 = ((x49>(x50==x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 81U;
	int64_t x54 = -1LL;
	volatile uint32_t x55 = 17805810U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t13 = 8003LLU;

    t13 = ((x53>(x54==x55))%x56);

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x58 = UINT64_MAX;
	uint16_t x59 = 6054U;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 1111;

    t14 = ((x57>(x58==x59))%x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	int64_t x62 = -1LL;
	int32_t x63 = -1;
	volatile uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 14067LLU;

    t15 = ((x61>(x62==x63))%x64);

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint16_t x66 = 258U;
	int16_t x68 = INT16_MAX;

    t16 = ((x65>(x66==x67))%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = 36LLU;
	uint32_t x71 = 70546183U;
	static volatile uint16_t x72 = UINT16_MAX;
	static int32_t t17 = -67;

    t17 = ((x69>(x70==x71))%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = INT16_MIN;
	int8_t x76 = -1;

    t18 = ((x73>(x74==x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -1;
	volatile uint64_t x78 = 266861688830LLU;
	volatile int64_t x79 = INT64_MIN;
	int16_t x80 = -299;
	volatile int32_t t19 = -898508;

    t19 = ((x77>(x78==x79))%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	static int32_t x84 = INT32_MIN;
	static int32_t t20 = -1104;

    t20 = ((x81>(x82==x83))%x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 26;
	static int16_t x86 = INT16_MIN;
	volatile uint16_t x87 = 17171U;
	int32_t x88 = INT32_MIN;
	int32_t t21 = -2133;

    t21 = ((x85>(x86==x87))%x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 13;
	volatile uint16_t x90 = UINT16_MAX;
	int8_t x92 = -2;

    t22 = ((x89>(x90==x91))%x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x97 = 5823U;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 1U;
	volatile int64_t x100 = 1594821178937342LL;
	int64_t t23 = -1711632788LL;

    t23 = ((x97>(x98==x99))%x100);

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x102 = 29U;
	static uint8_t x103 = UINT8_MAX;
	volatile uint32_t x104 = 49336U;

    t24 = ((x101>(x102==x103))%x104);

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x106 = 138U;
	uint16_t x107 = 6U;
	int32_t x108 = 977;

    t25 = ((x105>(x106==x107))%x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	static uint8_t x110 = 1U;
	int8_t x111 = 19;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t26 = 0;

    t26 = ((x109>(x110==x111))%x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 3U;
	volatile int16_t x115 = INT16_MAX;
	uint16_t x116 = 1881U;
	int32_t t27 = -15424;

    t27 = ((x113>(x114==x115))%x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = INT8_MIN;
	int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	static uint8_t x120 = UINT8_MAX;
	int32_t t28 = 318;

    t28 = ((x117>(x118==x119))%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x123 = INT32_MIN;
	static volatile uint32_t t29 = 1652546494U;

    t29 = ((x121>(x122==x123))%x124);

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x129 = INT8_MIN;
	volatile uint32_t x130 = UINT32_MAX;
	static volatile uint32_t x131 = 1433U;
	uint32_t x132 = 310994869U;
	static volatile uint32_t t30 = 142656U;

    t30 = ((x129>(x130==x131))%x132);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = 1236;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = -24LL;
	volatile int64_t t31 = -703961966060467LL;

    t31 = ((x133>(x134==x135))%x136);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = 19321LL;
	static volatile int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = 2U;

    t32 = ((x137>(x138==x139))%x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x141 = 522266669287LL;
	int32_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	int32_t t33 = -90674;

    t33 = ((x141>(x142==x143))%x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x146 = -255947;
	static volatile int32_t x147 = INT32_MIN;
	uint16_t x148 = UINT16_MAX;
	int32_t t34 = -232014760;

    t34 = ((x145>(x146==x147))%x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x149 = 7U;
	int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t35 = -1403996;

    t35 = ((x149>(x150==x151))%x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x153 = 693U;
	static int16_t x154 = INT16_MIN;
	uint8_t x155 = 6U;
	static int16_t x156 = -81;
	volatile int32_t t36 = -61935;

    t36 = ((x153>(x154==x155))%x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	static int8_t x160 = 5;
	volatile int32_t t37 = 61172218;

    t37 = ((x157>(x158==x159))%x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x161 = 27U;
	volatile int8_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = UINT8_MAX;
	int32_t t38 = 53900680;

    t38 = ((x161>(x162==x163))%x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	volatile int16_t x166 = INT16_MIN;
	static int8_t x168 = -1;
	volatile int32_t t39 = 0;

    t39 = ((x165>(x166==x167))%x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -1LL;
	volatile int64_t x170 = 55249958913787LL;
	static uint16_t x171 = 15218U;
	volatile int16_t x172 = INT16_MIN;

    t40 = ((x169>(x170==x171))%x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x174 = INT64_MIN;
	static int16_t x175 = INT16_MIN;
	static int8_t x176 = -24;
	int32_t t41 = 435;

    t41 = ((x173>(x174==x175))%x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x177 = UINT64_MAX;
	uint32_t x178 = 13U;
	int32_t x179 = 39573490;
	int8_t x180 = INT8_MIN;
	volatile int32_t t42 = -7161236;

    t42 = ((x177>(x178==x179))%x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = 43;
	static uint16_t x187 = 13U;
	static int32_t x188 = INT32_MIN;

    t43 = ((x185>(x186==x187))%x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x191 = INT8_MIN;
	int32_t x192 = -1;
	int32_t t44 = -205;

    t44 = ((x189>(x190==x191))%x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x193 = INT64_MIN;
	static int64_t x194 = INT64_MAX;
	static int32_t x195 = -1;
	int64_t x196 = -139120552319LL;

    t45 = ((x193>(x194==x195))%x196);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = -8834802751894LL;
	uint32_t x198 = 173508U;
	static volatile int8_t x199 = -1;
	volatile int32_t t46 = -168529;

    t46 = ((x197>(x198==x199))%x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	volatile uint64_t x203 = 18233045LLU;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t47 = -2981;

    t47 = ((x201>(x202==x203))%x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x205 = 172674140935900LL;
	uint32_t x207 = UINT32_MAX;
	volatile int32_t t48 = -30448;

    t48 = ((x205>(x206==x207))%x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x209 = INT8_MAX;
	static int64_t x210 = -1LL;
	volatile int16_t x211 = -1;
	int32_t x212 = -75539518;
	int32_t t49 = 896313112;

    t49 = ((x209>(x210==x211))%x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x215 = INT32_MAX;
	static uint16_t x216 = UINT16_MAX;
	volatile int32_t t50 = 3470;

    t50 = ((x213>(x214==x215))%x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x217 = 39;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = INT8_MAX;
	int64_t x220 = -3984781916271048LL;
	int64_t t51 = 48871168071056171LL;

    t51 = ((x217>(x218==x219))%x220);

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = 183193;
	int8_t x222 = -1;
	volatile uint32_t x223 = 0U;
	int16_t x224 = -1861;

    t52 = ((x221>(x222==x223))%x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x225 = -1535;
	int32_t x226 = -30;
	volatile int8_t x227 = INT8_MIN;
	volatile int16_t x228 = 336;
	int32_t t53 = -234;

    t53 = ((x225>(x226==x227))%x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x229 = 1U;
	uint8_t x231 = UINT8_MAX;
	static int32_t x232 = INT32_MAX;
	int32_t t54 = 178;

    t54 = ((x229>(x230==x231))%x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = 0;
	uint32_t x234 = 282943569U;
	int16_t x235 = -1;
	int64_t x236 = INT64_MIN;

    t55 = ((x233>(x234==x235))%x236);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x237 = 52;
	int8_t x239 = 46;
	uint64_t x240 = 6LLU;
	uint64_t t56 = 31LLU;

    t56 = ((x237>(x238==x239))%x240);

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x241 = 7U;
	int32_t x242 = 8124;
	uint16_t x243 = UINT16_MAX;
	static int8_t x244 = INT8_MAX;

    t57 = ((x241>(x242==x243))%x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x245 = 144U;
	volatile uint8_t x246 = 32U;
	int32_t x247 = -1;
	static uint16_t x248 = 4088U;
	int32_t t58 = 4;

    t58 = ((x245>(x246==x247))%x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = INT32_MIN;
	uint8_t x250 = 1U;
	int32_t x251 = INT32_MIN;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t59 = 153727;

    t59 = ((x249>(x250==x251))%x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	static int32_t x256 = INT32_MIN;

    t60 = ((x253>(x254==x255))%x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	uint64_t x260 = 339724LLU;
	static uint64_t t61 = 3144236193078697888LLU;

    t61 = ((x257>(x258==x259))%x260);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = INT8_MIN;
	volatile int16_t x263 = 6;
	int32_t t62 = 23;

    t62 = ((x261>(x262==x263))%x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	static uint32_t t63 = 1767085254U;

    t63 = ((x265>(x266==x267))%x268);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x272 = 9654U;
	int32_t t64 = -48;

    t64 = ((x269>(x270==x271))%x272);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = INT32_MIN;
	static int16_t x274 = INT16_MIN;
	volatile int32_t x275 = 2;
	uint64_t x276 = 113045LLU;
	volatile uint64_t t65 = 4428107245947560393LLU;

    t65 = ((x273>(x274==x275))%x276);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = 23351;
	volatile int8_t x278 = INT8_MAX;
	volatile int16_t x280 = -1;
	int32_t t66 = 0;

    t66 = ((x277>(x278==x279))%x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int64_t x283 = -1LL;
	volatile int64_t t67 = 1LL;

    t67 = ((x281>(x282==x283))%x284);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x286 = 6266217409215186LLU;
	int32_t x287 = INT32_MIN;
	volatile uint32_t t68 = 1613U;

    t68 = ((x285>(x286==x287))%x288);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	volatile int16_t x290 = INT16_MIN;
	static uint8_t x292 = 116U;
	volatile int32_t t69 = 113;

    t69 = ((x289>(x290==x291))%x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MIN;
	static int16_t x296 = -1;
	int32_t t70 = -7422606;

    t70 = ((x293>(x294==x295))%x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x297 = INT16_MAX;
	static uint64_t x298 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	int64_t t71 = 4369777343637LL;

    t71 = ((x297>(x298==x299))%x300);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = INT32_MIN;
	static volatile int64_t x302 = 13545383998LL;
	volatile int8_t x303 = -1;
	int8_t x304 = -30;
	volatile int32_t t72 = 12;

    t72 = ((x301>(x302==x303))%x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x305 = 7257U;
	uint32_t x306 = 2298303U;
	static int64_t x307 = -1LL;
	static int64_t t73 = -293LL;

    t73 = ((x305>(x306==x307))%x308);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = INT8_MIN;
	volatile int64_t x310 = -13008LL;
	uint8_t x311 = 90U;
	int8_t x312 = INT8_MIN;
	volatile int32_t t74 = -14225481;

    t74 = ((x309>(x310==x311))%x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = 1;
	volatile uint32_t x314 = 29895U;
	static uint64_t x315 = 164LLU;

    t75 = ((x313>(x314==x315))%x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = INT32_MIN;
	static volatile int16_t x318 = 0;
	int8_t x319 = INT8_MAX;
	static uint16_t x320 = UINT16_MAX;
	int32_t t76 = -65803948;

    t76 = ((x317>(x318==x319))%x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x322 = INT16_MIN;
	uint64_t x323 = 991087390LLU;
	static volatile int16_t x324 = INT16_MAX;
	volatile int32_t t77 = 19;

    t77 = ((x321>(x322==x323))%x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = -1;
	int64_t x326 = INT64_MIN;
	volatile int8_t x327 = 7;
	int64_t t78 = 23LL;

    t78 = ((x325>(x326==x327))%x328);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x329 = 1U;
	uint16_t x330 = UINT16_MAX;
	static int8_t x331 = INT8_MIN;
	static int64_t x332 = INT64_MIN;
	int64_t t79 = 250821352LL;

    t79 = ((x329>(x330==x331))%x332);

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x333 = -608;
	uint32_t x335 = 87U;
	volatile int64_t x336 = 1LL;
	int64_t t80 = -275278577564464LL;

    t80 = ((x333>(x334==x335))%x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x337 = INT8_MIN;
	static int8_t x338 = 1;
	int16_t x339 = -220;
	int32_t t81 = -16044991;

    t81 = ((x337>(x338==x339))%x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x341 = INT8_MIN;
	int32_t x342 = -9944;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = INT8_MAX;
	volatile int32_t t82 = 350786983;

    t82 = ((x341>(x342==x343))%x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x346 = -1;
	static int16_t x347 = INT16_MIN;
	static volatile uint64_t x348 = 349069741429LLU;

    t83 = ((x345>(x346==x347))%x348);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = 11U;
	int8_t x350 = INT8_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 3668983;

    t84 = ((x349>(x350==x351))%x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MAX;
	static uint64_t x354 = UINT64_MAX;
	int32_t x356 = -53912;
	static volatile int32_t t85 = 378490055;

    t85 = ((x353>(x354==x355))%x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = -1;
	int64_t x360 = -1LL;
	volatile int64_t t86 = 0LL;

    t86 = ((x357>(x358==x359))%x360);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x362 = INT32_MIN;
	int16_t x363 = -29;
	volatile uint32_t x364 = 918882U;
	volatile uint32_t t87 = 928647857U;

    t87 = ((x361>(x362==x363))%x364);

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = INT8_MIN;
	int32_t x366 = -926010;
	static int64_t x367 = INT64_MAX;
	uint32_t x368 = 5507108U;

    t88 = ((x365>(x366==x367))%x368);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x369 = 71LLU;
	static uint8_t x370 = UINT8_MAX;
	volatile int32_t x372 = -7;
	static volatile int32_t t89 = 894329;

    t89 = ((x369>(x370==x371))%x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x373 = INT16_MIN;
	int16_t x375 = 336;
	int32_t x376 = -1;
	volatile int32_t t90 = 76531;

    t90 = ((x373>(x374==x375))%x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = -384;
	int16_t x378 = 15290;
	int64_t x380 = 528503110LL;
	volatile int64_t t91 = 50231LL;

    t91 = ((x377>(x378==x379))%x380);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x381 = 62U;
	uint16_t x382 = 13U;
	int8_t x384 = INT8_MAX;
	int32_t t92 = -217572;

    t92 = ((x381>(x382==x383))%x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MIN;
	int64_t x387 = -1LL;
	uint8_t x388 = 40U;
	volatile int32_t t93 = -1006996771;

    t93 = ((x385>(x386==x387))%x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = UINT32_MAX;
	int32_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	static uint8_t x392 = UINT8_MAX;
	int32_t t94 = -7713;

    t94 = ((x389>(x390==x391))%x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = -1;
	uint32_t x394 = 346019174U;
	uint8_t x395 = 0U;
	volatile int64_t x396 = 1613022046621LL;
	int64_t t95 = 2581LL;

    t95 = ((x393>(x394==x395))%x396);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x397 = -1;
	int64_t x398 = 19502071099291695LL;
	uint32_t x399 = UINT32_MAX;
	int32_t t96 = -3022;

    t96 = ((x397>(x398==x399))%x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MAX;
	volatile int64_t x403 = 1205LL;

    t97 = ((x401>(x402==x403))%x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x406 = -1;
	uint64_t x407 = UINT64_MAX;
	uint64_t x408 = 23586LLU;
	uint64_t t98 = 2920341688288LLU;

    t98 = ((x405>(x406==x407))%x408);

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x409 = 6920439187148158LLU;
	volatile int8_t x410 = INT8_MIN;
	volatile int8_t x411 = -1;
	static volatile int32_t t99 = 22620;

    t99 = ((x409>(x410==x411))%x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x413 = 714186555308258LLU;
	uint32_t x414 = 34923U;
	int16_t x415 = INT16_MIN;
	int32_t t100 = 0;

    t100 = ((x413>(x414==x415))%x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -1;
	volatile int32_t t101 = 3106012;

    t101 = ((x417>(x418==x419))%x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x421 = -1330LL;
	int32_t x422 = INT32_MAX;
	int32_t x423 = INT32_MAX;
	int8_t x424 = INT8_MIN;
	volatile int32_t t102 = -3918710;

    t102 = ((x421>(x422==x423))%x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x425 = INT8_MIN;
	static int16_t x428 = INT16_MAX;
	int32_t t103 = 17920;

    t103 = ((x425>(x426==x427))%x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x429 = 68716787682833765LL;
	uint64_t x430 = 13623844LLU;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	volatile int32_t t104 = 163842;

    t104 = ((x429>(x430==x431))%x432);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x433 = 1044;
	static int32_t x434 = INT32_MIN;
	static volatile int32_t x436 = INT32_MAX;

    t105 = ((x433>(x434==x435))%x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x437 = UINT16_MAX;
	volatile uint8_t x439 = 102U;
	int8_t x440 = -1;

    t106 = ((x437>(x438==x439))%x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MIN;
	static uint16_t x443 = 97U;
	uint16_t x444 = UINT16_MAX;

    t107 = ((x441>(x442==x443))%x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x446 = INT16_MAX;
	static int8_t x447 = -1;
	int16_t x448 = INT16_MIN;

    t108 = ((x445>(x446==x447))%x448);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x449 = INT32_MAX;
	volatile uint8_t x450 = 29U;
	volatile int32_t x451 = -1;
	int64_t x452 = 2612877571339LL;
	static int64_t t109 = 77153879707168LL;

    t109 = ((x449>(x450==x451))%x452);

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x459 = UINT64_MAX;
	volatile int64_t x460 = -122LL;
	volatile int64_t t110 = -51893370LL;

    t110 = ((x457>(x458==x459))%x460);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x461 = 6LLU;
	volatile int64_t x462 = INT64_MAX;
	volatile int8_t x463 = 7;
	static uint8_t x464 = 34U;

    t111 = ((x461>(x462==x463))%x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x466 = -1;
	uint64_t x467 = UINT64_MAX;
	volatile int32_t t112 = -82682542;

    t112 = ((x465>(x466==x467))%x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t t113 = -1025731;

    t113 = ((x469>(x470==x471))%x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x473 = 11;
	static int64_t x474 = INT64_MIN;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t114 = -36519432;

    t114 = ((x473>(x474==x475))%x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x477 = 59044LLU;
	static int16_t x478 = -1;
	volatile uint8_t x480 = 39U;
	int32_t t115 = -535;

    t115 = ((x477>(x478==x479))%x480);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x481 = INT64_MIN;
	int64_t x483 = INT64_MIN;
	int64_t x484 = -2LL;
	int64_t t116 = -8148334LL;

    t116 = ((x481>(x482==x483))%x484);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x485 = INT8_MIN;
	static volatile int32_t t117 = 28611;

    t117 = ((x485>(x486==x487))%x488);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x489 = INT16_MAX;
	int16_t x490 = 521;
	volatile int8_t x492 = INT8_MAX;
	volatile int32_t t118 = 27009;

    t118 = ((x489>(x490==x491))%x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x493 = 3384984;
	int16_t x495 = INT16_MIN;
	static int64_t x496 = INT64_MIN;
	int64_t t119 = -3100208LL;

    t119 = ((x493>(x494==x495))%x496);

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x497 = -1;
	volatile int32_t x498 = INT32_MAX;
	volatile int16_t x499 = INT16_MIN;
	volatile int64_t x500 = INT64_MIN;
	static volatile int64_t t120 = 301950LL;

    t120 = ((x497>(x498==x499))%x500);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x501 = 6U;
	int8_t x502 = 0;
	static int8_t x504 = -1;
	static volatile int32_t t121 = 36493995;

    t121 = ((x501>(x502==x503))%x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = -54;
	int16_t x506 = -1;
	int16_t x507 = INT16_MIN;

    t122 = ((x505>(x506==x507))%x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x509 = 336U;
	static uint8_t x510 = UINT8_MAX;
	volatile int8_t x511 = INT8_MIN;
	static int8_t x512 = INT8_MIN;

    t123 = ((x509>(x510==x511))%x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = 1;
	int64_t x514 = INT64_MAX;
	int16_t x515 = INT16_MIN;
	uint64_t x516 = 9737315LLU;
	static uint64_t t124 = 106163583516029LLU;

    t124 = ((x513>(x514==x515))%x516);

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MAX;
	int32_t x518 = INT32_MIN;
	int32_t x519 = 115830853;
	int8_t x520 = INT8_MIN;
	volatile int32_t t125 = -3;

    t125 = ((x517>(x518==x519))%x520);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = -1LL;
	int8_t x524 = INT8_MIN;

    t126 = ((x521>(x522==x523))%x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x525 = -1LL;
	static int64_t x526 = INT64_MIN;
	uint16_t x527 = 6237U;
	static volatile uint16_t x528 = 10284U;
	volatile int32_t t127 = 4;

    t127 = ((x525>(x526==x527))%x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x529 = -1;
	int32_t x530 = INT32_MIN;
	static int16_t x531 = -1;
	uint16_t x532 = 7U;
	int32_t t128 = 35937;

    t128 = ((x529>(x530==x531))%x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x534 = 406740LLU;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = 2149372U;
	volatile uint32_t t129 = 63515435U;

    t129 = ((x533>(x534==x535))%x536);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x537 = 21U;
	int64_t x538 = -1LL;
	int16_t x540 = INT16_MIN;

    t130 = ((x537>(x538==x539))%x540);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = INT16_MAX;
	volatile int64_t x542 = 1603869740842553LL;
	uint16_t x543 = UINT16_MAX;
	uint64_t x544 = 1941704LLU;

    t131 = ((x541>(x542==x543))%x544);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x546 = INT64_MIN;
	static int16_t x547 = INT16_MIN;
	volatile int32_t x548 = 4167681;

    t132 = ((x545>(x546==x547))%x548);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 4727U;
	volatile int8_t x551 = INT8_MIN;
	volatile int32_t t133 = 6;

    t133 = ((x549>(x550==x551))%x552);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x554 = INT32_MIN;
	int16_t x555 = -64;
	int32_t x556 = INT32_MIN;
	volatile int32_t t134 = -24610357;

    t134 = ((x553>(x554==x555))%x556);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x557 = UINT64_MAX;
	static uint32_t x559 = 13U;
	volatile uint16_t x560 = 1U;
	static volatile int32_t t135 = -6247428;

    t135 = ((x557>(x558==x559))%x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x563 = 57502535663066920LLU;
	int64_t x564 = -4249223333624LL;
	int64_t t136 = -188401112298048LL;

    t136 = ((x561>(x562==x563))%x564);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x565 = 23521081413072206LLU;
	static uint32_t x566 = UINT32_MAX;
	int32_t t137 = 59645182;

    t137 = ((x565>(x566==x567))%x568);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x570 = 14U;
	int64_t x571 = INT64_MIN;
	volatile int32_t t138 = 423599;

    t138 = ((x569>(x570==x571))%x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x573 = INT64_MIN;
	int8_t x574 = 0;
	int16_t x575 = -1;
	static int8_t x576 = -7;

    t139 = ((x573>(x574==x575))%x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x577 = -1;
	int16_t x579 = INT16_MIN;
	uint8_t x580 = 1U;

    t140 = ((x577>(x578==x579))%x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = INT64_MAX;
	uint32_t x582 = 10U;
	int16_t x583 = INT16_MIN;
	int32_t x584 = -8;
	volatile int32_t t141 = 877232;

    t141 = ((x581>(x582==x583))%x584);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x585 = -186588;
	int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MIN;
	int8_t x588 = 1;
	static volatile int32_t t142 = -1;

    t142 = ((x585>(x586==x587))%x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x590 = UINT32_MAX;
	int16_t x591 = -1;
	static volatile int32_t x592 = 165371322;
	int32_t t143 = 15798;

    t143 = ((x589>(x590==x591))%x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x593 = -1LL;
	volatile uint16_t x594 = UINT16_MAX;
	static volatile int32_t x595 = INT32_MIN;
	int64_t x596 = -1LL;

    t144 = ((x593>(x594==x595))%x596);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x597 = INT64_MIN;
	volatile uint16_t x598 = 17958U;
	int8_t x599 = -13;
	int64_t x600 = -1LL;
	volatile int64_t t145 = 920997403LL;

    t145 = ((x597>(x598==x599))%x600);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = -28;
	uint16_t x602 = 172U;
	int64_t x603 = INT64_MIN;
	static volatile int16_t x604 = INT16_MIN;

    t146 = ((x601>(x602==x603))%x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x605 = 3;
	volatile uint32_t x606 = 290U;
	int32_t x607 = INT32_MIN;
	int16_t x608 = INT16_MIN;
	volatile int32_t t147 = -156188;

    t147 = ((x605>(x606==x607))%x608);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = -1;
	int8_t x610 = -1;
	int8_t x611 = INT8_MIN;
	static int64_t x612 = INT64_MIN;
	volatile int64_t t148 = 657500LL;

    t148 = ((x609>(x610==x611))%x612);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x613 = INT64_MIN;
	static volatile uint64_t x614 = UINT64_MAX;
	int8_t x616 = -1;
	static volatile int32_t t149 = -46992237;

    t149 = ((x613>(x614==x615))%x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = INT32_MIN;
	static uint32_t x618 = UINT32_MAX;
	static int32_t x619 = INT32_MIN;
	int8_t x620 = INT8_MAX;
	volatile int32_t t150 = 5685;

    t150 = ((x617>(x618==x619))%x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x622 = -1;
	int32_t x623 = -216950;
	volatile int8_t x624 = INT8_MIN;
	volatile int32_t t151 = -120739;

    t151 = ((x621>(x622==x623))%x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x625 = -1LL;
	uint16_t x627 = UINT16_MAX;
	int32_t t152 = -656572356;

    t152 = ((x625>(x626==x627))%x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x629 = INT32_MIN;
	uint64_t x630 = UINT64_MAX;
	int32_t t153 = 6;

    t153 = ((x629>(x630==x631))%x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = INT16_MIN;
	volatile int64_t x636 = INT64_MAX;
	static int64_t t154 = 37781LL;

    t154 = ((x633>(x634==x635))%x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x637 = UINT64_MAX;
	int64_t x638 = 62322253377LL;
	int64_t x639 = INT64_MIN;
	static int16_t x640 = 6548;
	volatile int32_t t155 = -35456714;

    t155 = ((x637>(x638==x639))%x640);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x641 = 2;
	int64_t x643 = INT64_MAX;
	volatile int64_t x644 = 62301LL;

    t156 = ((x641>(x642==x643))%x644);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x645 = -1;
	volatile int64_t x646 = INT64_MAX;
	static uint32_t x647 = UINT32_MAX;
	int8_t x648 = -1;
	int32_t t157 = 6163;

    t157 = ((x645>(x646==x647))%x648);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x650 = 4258353159440405LLU;
	static int32_t t158 = -1;

    t158 = ((x649>(x650==x651))%x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x653 = INT16_MIN;
	uint16_t x654 = 0U;
	int32_t x655 = INT32_MIN;
	int8_t x656 = INT8_MIN;
	volatile int32_t t159 = -3;

    t159 = ((x653>(x654==x655))%x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x659 = INT16_MIN;
	volatile uint64_t t160 = 743LLU;

    t160 = ((x657>(x658==x659))%x660);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x661 = 5218LL;
	uint32_t x662 = 4064332U;
	uint32_t x663 = 1642U;
	int32_t x664 = INT32_MAX;
	static volatile int32_t t161 = 1911323;

    t161 = ((x661>(x662==x663))%x664);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x665 = 199997;
	int16_t x666 = -1;
	int32_t x667 = -1278;
	int32_t t162 = 637488357;

    t162 = ((x665>(x666==x667))%x668);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x669 = 0;
	uint8_t x670 = UINT8_MAX;
	uint16_t x671 = 25121U;
	static int32_t x672 = 1;
	static volatile int32_t t163 = -62679;

    t163 = ((x669>(x670==x671))%x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = INT64_MIN;
	int8_t x674 = -1;
	uint64_t x676 = 53803914572LLU;
	volatile uint64_t t164 = 7903124264LLU;

    t164 = ((x673>(x674==x675))%x676);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x677 = -1;
	uint64_t x678 = UINT64_MAX;
	static int32_t x680 = INT32_MAX;
	volatile int32_t t165 = -16647;

    t165 = ((x677>(x678==x679))%x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x681 = INT8_MIN;
	volatile uint8_t x682 = UINT8_MAX;
	static volatile uint16_t x683 = UINT16_MAX;
	int8_t x684 = INT8_MAX;

    t166 = ((x681>(x682==x683))%x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = -1;
	int8_t x687 = -1;

    t167 = ((x685>(x686==x687))%x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x689 = 464512LL;
	int32_t x691 = INT32_MIN;
	static volatile int32_t t168 = 0;

    t168 = ((x689>(x690==x691))%x692);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x694 = INT8_MIN;
	uint16_t x695 = UINT16_MAX;
	static uint8_t x696 = 2U;

    t169 = ((x693>(x694==x695))%x696);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x697 = -1LL;
	static int64_t x698 = -1LL;
	static int8_t x699 = INT8_MAX;
	uint64_t x700 = 366560716224LLU;

    t170 = ((x697>(x698==x699))%x700);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x701 = -346;
	int8_t x703 = 4;
	uint64_t x704 = UINT64_MAX;
	uint64_t t171 = 478LLU;

    t171 = ((x701>(x702==x703))%x704);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x705 = INT16_MAX;
	volatile uint32_t x706 = 458122076U;
	uint16_t x707 = 217U;
	volatile uint64_t x708 = UINT64_MAX;
	static uint64_t t172 = 14613482436LLU;

    t172 = ((x705>(x706==x707))%x708);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = -1;
	uint32_t x710 = UINT32_MAX;
	int16_t x711 = 3;
	int32_t x712 = -10794506;

    t173 = ((x709>(x710==x711))%x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x714 = INT16_MIN;
	int16_t x715 = -2017;

    t174 = ((x713>(x714==x715))%x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x721 = 377U;
	int16_t x722 = 2;
	volatile uint64_t x724 = 77961812146LLU;
	static uint64_t t175 = 3315703360LLU;

    t175 = ((x721>(x722==x723))%x724);

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x726 = -1;
	volatile int32_t x727 = INT32_MIN;
	static volatile int32_t x728 = INT32_MIN;
	int32_t t176 = 6978;

    t176 = ((x725>(x726==x727))%x728);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = 0;
	int64_t x730 = INT64_MIN;
	uint64_t x731 = UINT64_MAX;
	int8_t x732 = INT8_MAX;
	int32_t t177 = -24823;

    t177 = ((x729>(x730==x731))%x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = 1186462964931LL;
	int8_t x734 = INT8_MAX;
	int64_t x735 = INT64_MAX;
	uint32_t x736 = 57890283U;
	volatile uint32_t t178 = 25U;

    t178 = ((x733>(x734==x735))%x736);

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = INT64_MIN;
	volatile int32_t x740 = INT32_MIN;
	int32_t t179 = 496414;

    t179 = ((x737>(x738==x739))%x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x741 = 12U;
	int32_t x742 = 131933;
	static int8_t x744 = INT8_MIN;
	int32_t t180 = 43955139;

    t180 = ((x741>(x742==x743))%x744);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x746 = -1;
	volatile uint32_t x748 = 203U;
	uint32_t t181 = 380446433U;

    t181 = ((x745>(x746==x747))%x748);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x749 = 18516738LLU;
	static int8_t x750 = 3;
	int64_t x751 = 1329562866948027172LL;
	int64_t x752 = INT64_MIN;
	int64_t t182 = 21165653840402194LL;

    t182 = ((x749>(x750==x751))%x752);

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x753 = 0;
	volatile int32_t x754 = INT32_MIN;
	static int8_t x755 = INT8_MIN;
	uint64_t x756 = 256698962LLU;
	static uint64_t t183 = 63LLU;

    t183 = ((x753>(x754==x755))%x756);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x760 = INT8_MIN;
	volatile int32_t t184 = -2259662;

    t184 = ((x757>(x758==x759))%x760);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x761 = -47;
	uint8_t x762 = UINT8_MAX;
	uint16_t x763 = UINT16_MAX;
	volatile int32_t t185 = 9508;

    t185 = ((x761>(x762==x763))%x764);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x765 = 195U;
	volatile int8_t x766 = INT8_MIN;
	uint64_t x767 = UINT64_MAX;
	int8_t x768 = -1;
	static volatile int32_t t186 = -6;

    t186 = ((x765>(x766==x767))%x768);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x769 = INT8_MAX;
	int16_t x770 = INT16_MAX;

    t187 = ((x769>(x770==x771))%x772);

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = -1;
	uint8_t x774 = 14U;
	uint32_t x775 = 1U;
	static int64_t x776 = INT64_MIN;
	volatile int64_t t188 = 7LL;

    t188 = ((x773>(x774==x775))%x776);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x777 = 1106U;
	volatile int32_t x778 = INT32_MIN;
	static uint32_t x779 = 2U;
	volatile uint64_t x780 = UINT64_MAX;
	uint64_t t189 = 7791414440264545713LLU;

    t189 = ((x777>(x778==x779))%x780);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = INT64_MIN;
	int16_t x782 = INT16_MIN;
	uint32_t x783 = UINT32_MAX;
	volatile int64_t t190 = 2LL;

    t190 = ((x781>(x782==x783))%x784);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x785 = 77761427U;
	uint16_t x786 = UINT16_MAX;
	int8_t x787 = 1;
	static volatile int32_t t191 = -91665784;

    t191 = ((x785>(x786==x787))%x788);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x789 = 51U;
	volatile uint8_t x790 = 28U;
	volatile int64_t x791 = INT64_MAX;
	int8_t x792 = INT8_MIN;
	int32_t t192 = 1356060;

    t192 = ((x789>(x790==x791))%x792);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = -1;
	int32_t x795 = INT32_MIN;
	int8_t x796 = INT8_MAX;
	int32_t t193 = 7;

    t193 = ((x793>(x794==x795))%x796);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = 14;
	uint32_t x798 = 24107U;
	int16_t x799 = -3353;
	uint32_t x800 = 42850249U;
	uint32_t t194 = 30533058U;

    t194 = ((x797>(x798==x799))%x800);

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = -1;
	volatile uint64_t x802 = 10395031938942LLU;
	int8_t x803 = INT8_MAX;
	int16_t x804 = INT16_MIN;

    t195 = ((x801>(x802==x803))%x804);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x805 = 231U;
	volatile int64_t x806 = INT64_MIN;
	uint64_t x807 = 15177881265194281LLU;
	static int8_t x808 = 2;
	volatile int32_t t196 = -47;

    t196 = ((x805>(x806==x807))%x808);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x811 = INT64_MAX;
	int16_t x812 = INT16_MAX;
	static int32_t t197 = 5396759;

    t197 = ((x809>(x810==x811))%x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x813 = INT32_MAX;
	static volatile int16_t x814 = INT16_MIN;
	uint16_t x815 = 5U;
	int16_t x816 = -1;
	int32_t t198 = 2;

    t198 = ((x813>(x814==x815))%x816);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x817 = 61U;
	int8_t x818 = -7;
	static volatile int16_t x819 = 863;
	int16_t x820 = -50;
	volatile int32_t t199 = 0;

    t199 = ((x817>(x818==x819))%x820);

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

