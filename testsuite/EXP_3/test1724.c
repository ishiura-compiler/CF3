
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

uint32_t x3 = 60187U;
int32_t x9 = INT32_MIN;
volatile int32_t t1 = INT32_MIN;
int16_t x19 = INT16_MIN;
static uint64_t x22 = 978653LLU;
static int64_t x29 = 460434424532360LL;
static int64_t t6 = 71159LL;
uint8_t x33 = 6U;
static volatile int64_t x34 = INT64_MAX;
int16_t x38 = INT16_MIN;
volatile int64_t t9 = 24320LL;
uint32_t x45 = UINT32_MAX;
int8_t x50 = INT8_MAX;
uint32_t x51 = UINT32_MAX;
uint8_t x55 = UINT8_MAX;
static volatile int32_t x67 = -1;
static int32_t x68 = INT32_MAX;
static int64_t x74 = INT64_MIN;
volatile int32_t x76 = INT32_MIN;
static volatile int64_t t17 = INT64_MIN;
int32_t x85 = INT32_MIN;
uint64_t t20 = UINT64_MAX;
int8_t x93 = INT8_MIN;
int32_t x109 = -1;
uint64_t x120 = UINT64_MAX;
volatile int64_t x124 = INT64_MAX;
static int16_t x125 = -1;
int8_t x127 = 23;
volatile int32_t x132 = INT32_MAX;
int8_t x141 = INT8_MAX;
uint8_t x144 = 47U;
int16_t x149 = -79;
volatile int16_t x161 = INT16_MIN;
int64_t x163 = INT64_MIN;
int32_t t38 = -47289911;
static volatile uint64_t x165 = 4020916LLU;
int16_t x186 = INT16_MIN;
volatile int32_t x187 = -695902;
uint8_t x189 = 0U;
volatile int32_t t45 = -343;
uint16_t x201 = 0U;
uint8_t x204 = 60U;
uint32_t x210 = 450U;
int32_t t51 = 76;
int32_t t52 = -54436230;
int64_t t54 = 174787408LL;
int16_t x229 = -1;
static uint16_t x233 = 7573U;
uint16_t x246 = UINT16_MAX;
static int32_t x253 = INT32_MAX;
static volatile int32_t t61 = 167;
volatile int64_t x258 = 693333721888558LL;
uint8_t x259 = 7U;
volatile uint32_t x263 = UINT32_MAX;
volatile uint32_t t63 = 10U;
int8_t x271 = 2;
static int32_t x273 = INT32_MIN;
static int32_t x276 = 105084877;
uint64_t x279 = 251756900613332440LLU;
static volatile int32_t x280 = -1;
int32_t t68 = -107139;
int16_t x294 = INT16_MIN;
int16_t x299 = -7;
int32_t t73 = -4;
int8_t x309 = -13;
int8_t x315 = INT8_MIN;
static int32_t x316 = 11610379;
volatile int64_t t76 = 147LL;
int16_t x317 = INT16_MAX;
int16_t x319 = -1;
int32_t x321 = INT32_MAX;
volatile int32_t t79 = -131;
int16_t x332 = INT16_MIN;
uint32_t x334 = 48938091U;
static volatile int32_t x337 = -1;
int64_t t83 = -12545730LL;
uint16_t x348 = UINT16_MAX;
int8_t x354 = -4;
volatile int32_t x358 = -20290323;
static int8_t x360 = INT8_MIN;
volatile uint8_t x367 = 1U;
int64_t x379 = INT64_MIN;
int64_t x383 = 117844097520LL;
uint32_t x388 = 110473183U;
int32_t t94 = 4350;
uint8_t x394 = 14U;
static int32_t x396 = -1;
int16_t x399 = INT16_MAX;
uint16_t x404 = 2U;
int16_t x407 = -7;
int64_t x409 = -1LL;
static volatile int64_t t100 = -405282039592417214LL;
int32_t x413 = INT32_MIN;
int64_t x415 = 17433894706540LL;
uint32_t x418 = UINT32_MAX;
uint16_t x428 = UINT16_MAX;
int16_t x433 = INT16_MIN;
int32_t x438 = -1;
static int32_t t107 = 7;
volatile uint8_t x442 = 31U;
int32_t t108 = -24938146;
volatile int32_t t110 = -660374915;
static int64_t x457 = INT64_MAX;
uint8_t x459 = 2U;
uint64_t t112 = UINT64_MAX;
static int32_t x468 = INT32_MAX;
uint8_t x469 = UINT8_MAX;
int64_t x475 = -1LL;
static int64_t x479 = 102LL;
static int64_t x481 = INT64_MAX;
int8_t x485 = 0;
int8_t x489 = 1;
static int64_t x492 = 21492030929LL;
uint8_t x498 = UINT8_MAX;
uint16_t x500 = 27U;
int32_t t121 = 4089286;
int8_t x501 = INT8_MIN;
volatile int64_t x505 = -1LL;
int16_t x519 = -1;
static int8_t x521 = 7;
volatile int32_t x522 = INT32_MIN;
uint8_t x523 = UINT8_MAX;
int32_t x529 = INT32_MIN;
int64_t x533 = INT64_MIN;
volatile uint8_t x543 = UINT8_MAX;
static uint64_t x544 = UINT64_MAX;
volatile uint32_t t132 = 5804U;
int16_t x547 = INT16_MAX;
int32_t t133 = 0;
int64_t t134 = -11081719750784LL;
int8_t x554 = 44;
int16_t x556 = -1153;
int32_t t135 = 19;
int64_t x560 = -131LL;
volatile int64_t t136 = 2284855501LL;
int8_t x567 = 1;
int32_t x574 = INT32_MAX;
int64_t x575 = 12160461863117191LL;
volatile int16_t x576 = 3;
int16_t x582 = 0;
static uint8_t x585 = 113U;
int32_t x588 = INT32_MIN;
int16_t x589 = INT16_MAX;
static int32_t x593 = INT32_MIN;
int16_t x595 = -378;
static int16_t x604 = INT16_MIN;
volatile int32_t x605 = INT32_MIN;
static int32_t x611 = INT32_MAX;
static uint64_t x615 = 37251LLU;
uint32_t x627 = 5213U;
int8_t x636 = 0;
int16_t x645 = INT16_MIN;
uint32_t x647 = 0U;
int64_t x650 = 230976955LL;
static volatile uint16_t x652 = 71U;
int64_t t158 = -3793565LL;
uint64_t x653 = 1LLU;
static uint16_t x654 = UINT16_MAX;
static int8_t x663 = INT8_MAX;
static int16_t x674 = 0;
static int32_t x675 = INT32_MIN;
int8_t x677 = INT8_MIN;
int16_t x679 = -1;
volatile int32_t t165 = -610714;
int8_t x687 = INT8_MIN;
volatile int16_t x690 = INT16_MIN;
uint32_t x692 = 351795U;
int64_t x702 = -83218883256LL;
int64_t x711 = -1LL;
volatile int32_t x724 = INT32_MAX;
int64_t x728 = INT64_MAX;
volatile int32_t t174 = -84;
volatile int8_t x730 = -14;
volatile uint8_t x731 = UINT8_MAX;
uint8_t x733 = 12U;
volatile int32_t x735 = 1;
int32_t t176 = -50050;
volatile uint16_t x738 = 15U;
static volatile int64_t t178 = -181965640633LL;
int64_t x752 = INT64_MAX;
volatile int64_t t184 = -17126872877511163LL;
int8_t x778 = INT8_MIN;
volatile int32_t t186 = 18;
uint8_t x781 = 2U;
int32_t x783 = INT32_MAX;
uint64_t t188 = 185367949162LLU;
int16_t x789 = -1;
static int64_t x790 = -1LL;
volatile int16_t x792 = -3;
uint32_t x797 = UINT32_MAX;
volatile uint16_t x798 = UINT16_MAX;
int16_t x799 = -11212;
volatile uint32_t t191 = 893711624U;
static uint16_t x801 = UINT16_MAX;
uint32_t x810 = 318422U;
int64_t x814 = -1LL;
int8_t x830 = -1;
int32_t t199 = -83;


void f0(void) {
    	uint64_t x1 = 15586827LLU;
	int64_t x2 = INT64_MAX;
	int8_t x4 = 7;
	static volatile uint64_t t0 = 153321930845879354LLU;

    t0 = ((x1&x2)-(x3>x4));

    if (t0 != 15586826LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x10 = -1151752;
	volatile uint64_t x11 = 76704LLU;
	int64_t x12 = -22848738905LL;

    t1 = ((x9&x10)-(x11>x12));

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x13 = UINT32_MAX;
	int32_t x14 = -1;
	int64_t x15 = 8438298184767222LL;
	int8_t x16 = INT8_MIN;
	volatile uint32_t t2 = 1339125U;

    t2 = ((x13&x14)-(x15>x16));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x17 = -1;
	int16_t x18 = -1;
	static int16_t x20 = INT16_MAX;
	static volatile int32_t t3 = -2850;

    t3 = ((x17&x18)-(x19>x20));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 10U;
	int8_t x23 = -1;
	static int64_t x24 = -299LL;
	static uint64_t t4 = 37860LLU;

    t4 = ((x21&x22)-(x23>x24));

    if (t4 != 7LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = UINT16_MAX;
	int8_t x26 = INT8_MAX;
	int64_t x27 = INT64_MAX;
	int64_t x28 = -1LL;
	volatile int32_t t5 = -3390;

    t5 = ((x25&x26)-(x27>x28));

    if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = INT32_MAX;
	static volatile int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;

    t6 = ((x29&x30)-(x31>x32));

    if (t6 != 1045499272LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MAX;
	int64_t t7 = -11276895561016554LL;

    t7 = ((x33&x34)-(x35>x36));

    if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -1;
	static uint32_t x39 = 880396U;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = -81;

    t8 = ((x37&x38)-(x39>x40));

    if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = INT64_MAX;
	int16_t x42 = 25;
	int16_t x43 = INT16_MIN;
	static volatile int8_t x44 = INT8_MIN;

    t9 = ((x41&x42)-(x43>x44));

    if (t9 != 25LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = UINT64_MAX;
	int16_t x47 = -1;
	int64_t x48 = INT64_MAX;
	volatile uint64_t t10 = 26054175638935LLU;

    t10 = ((x45&x46)-(x47>x48));

    if (t10 != 4294967295LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	int64_t x52 = -639280LL;
	int64_t t11 = 184LL;

    t11 = ((x49&x50)-(x51>x52));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 6746U;
	uint32_t x54 = UINT32_MAX;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t12 = 63528U;

    t12 = ((x53&x54)-(x55>x56));

    if (t12 != 6745U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = 4;
	int16_t x58 = -1;
	uint32_t x59 = 1214281423U;
	volatile int32_t x60 = 301929740;
	static int32_t t13 = -366138;

    t13 = ((x57&x58)-(x59>x60));

    if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 704617LLU;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = 5018802LLU;
	int32_t x64 = 1043038266;
	uint64_t t14 = 51113940LLU;

    t14 = ((x61&x62)-(x63>x64));

    if (t14 != 704512LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 426788595U;
	int32_t x66 = INT32_MIN;
	uint32_t t15 = 17U;

    t15 = ((x65&x66)-(x67>x68));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -1;
	static int16_t x70 = -1;
	static volatile uint8_t x71 = 27U;
	int64_t x72 = INT64_MAX;
	int32_t t16 = 916340736;

    t16 = ((x69&x70)-(x71>x72));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x73 = -1LL;
	static volatile int32_t x75 = INT32_MIN;

    t17 = ((x73&x74)-(x75>x76));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x77 = INT32_MAX;
	static uint32_t x78 = 30097U;
	static volatile uint64_t x79 = UINT64_MAX;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t18 = 2727164U;

    t18 = ((x77&x78)-(x79>x80));

    if (t18 != 30096U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 797745;
	static uint64_t x82 = UINT64_MAX;
	int64_t x83 = -1LL;
	uint16_t x84 = 6629U;
	static uint64_t t19 = 108015555009368LLU;

    t19 = ((x81&x82)-(x83>x84));

    if (t19 != 797745LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint64_t x86 = 5LLU;
	int64_t x87 = 1509788LL;
	static int32_t x88 = INT32_MIN;

    t20 = ((x85&x86)-(x87>x88));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x89 = 17539517LLU;
	static volatile int8_t x90 = INT8_MAX;
	uint64_t x91 = 7405852LLU;
	uint8_t x92 = 0U;
	volatile uint64_t t21 = 4096223550322300LLU;

    t21 = ((x89&x90)-(x91>x92));

    if (t21 != 60LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x94 = -1;
	volatile int64_t x95 = -1LL;
	static int32_t x96 = -1;
	static int32_t t22 = 450;

    t22 = ((x93&x94)-(x95>x96));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = INT16_MIN;
	static volatile int8_t x98 = INT8_MAX;
	static int16_t x99 = INT16_MIN;
	static int64_t x100 = 111760169166452LL;
	volatile int32_t t23 = 2189569;

    t23 = ((x97&x98)-(x99>x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = INT64_MAX;
	uint16_t x102 = UINT16_MAX;
	static int8_t x103 = 0;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t24 = -220361531711885LL;

    t24 = ((x101&x102)-(x103>x104));

    if (t24 != 65534LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -1262;
	int8_t x106 = -3;
	int16_t x107 = 2286;
	static int32_t x108 = INT32_MAX;
	volatile int32_t t25 = -174714;

    t25 = ((x105&x106)-(x107>x108));

    if (t25 != -1264) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x110 = -25149LL;
	static int8_t x111 = INT8_MIN;
	uint8_t x112 = 29U;
	int64_t t26 = -2745028884429323989LL;

    t26 = ((x109&x110)-(x111>x112));

    if (t26 != -25149LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	static volatile uint16_t x114 = UINT16_MAX;
	int64_t x115 = -4083844780LL;
	int64_t x116 = 15738741591LL;
	int64_t t27 = 34949406620545222LL;

    t27 = ((x113&x114)-(x115>x116));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -1;
	int32_t t28 = -33723;

    t28 = ((x117&x118)-(x119>x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -1023300846LL;
	uint32_t x122 = UINT32_MAX;
	volatile int32_t x123 = INT32_MIN;
	int64_t t29 = -221619LL;

    t29 = ((x121&x122)-(x123>x124));

    if (t29 != 3271666450LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x126 = -1LL;
	int32_t x128 = INT32_MAX;
	volatile int64_t t30 = -31507LL;

    t30 = ((x125&x126)-(x127>x128));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x129 = 3;
	int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	static int32_t t31 = -683201;

    t31 = ((x129&x130)-(x131>x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 19U;
	static uint8_t x134 = 0U;
	int8_t x135 = 9;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 628182101;

    t32 = ((x133&x134)-(x135>x136));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	uint32_t x139 = 211004443U;
	int32_t x140 = INT32_MAX;
	int32_t t33 = INT32_MIN;

    t33 = ((x137&x138)-(x139>x140));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x142 = 414005U;
	volatile int64_t x143 = 6644291LL;
	volatile uint32_t t34 = 1153076257U;

    t34 = ((x141&x142)-(x143>x144));

    if (t34 != 52U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x150 = INT64_MAX;
	uint8_t x151 = 0U;
	int64_t x152 = INT64_MIN;
	int64_t t35 = 135289824359663LL;

    t35 = ((x149&x150)-(x151>x152));

    if (t35 != 9223372036854775728LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile int8_t x154 = 5;
	uint8_t x155 = 40U;
	int32_t x156 = INT32_MIN;
	volatile uint64_t t36 = 1410047713118803LLU;

    t36 = ((x153&x154)-(x155>x156));

    if (t36 != 4LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x157 = 582830U;
	int64_t x158 = -24073884317786883LL;
	static int16_t x159 = -1;
	int32_t x160 = INT32_MAX;
	static volatile int64_t t37 = 1124294593341920698LL;

    t37 = ((x157&x158)-(x159>x160));

    if (t37 != 574636LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = INT16_MIN;
	int16_t x164 = 3919;

    t38 = ((x161&x162)-(x163>x164));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x166 = INT64_MAX;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = -1LL;
	volatile uint64_t t39 = 31LLU;

    t39 = ((x165&x166)-(x167>x168));

    if (t39 != 4020915LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = 375;
	uint8_t x170 = 2U;
	int8_t x171 = -2;
	static uint16_t x172 = 23003U;
	int32_t t40 = 9;

    t40 = ((x169&x170)-(x171>x172));

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x173 = INT8_MAX;
	static volatile int16_t x174 = INT16_MIN;
	static int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t41 = -3;

    t41 = ((x173&x174)-(x175>x176));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x177 = -1LL;
	uint8_t x178 = UINT8_MAX;
	static uint16_t x179 = UINT16_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t42 = 22089LL;

    t42 = ((x177&x178)-(x179>x180));

    if (t42 != 254LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	int64_t x182 = -59870365925LL;
	volatile uint64_t x183 = UINT64_MAX;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t43 = 14559LLU;

    t43 = ((x181&x182)-(x183>x184));

    if (t43 != 18446744013839185690LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x185 = 453U;
	static volatile uint16_t x188 = 15929U;
	int32_t t44 = -2198030;

    t44 = ((x185&x186)-(x187>x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x190 = INT32_MIN;
	int64_t x191 = -1368202LL;
	int64_t x192 = -1LL;

    t45 = ((x189&x190)-(x191>x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x193 = 429555435945275787LLU;
	int16_t x194 = -1;
	uint16_t x195 = 2978U;
	int16_t x196 = 60;
	uint64_t t46 = 180736897181576LLU;

    t46 = ((x193&x194)-(x195>x196));

    if (t46 != 429555435945275786LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = 29624662434LLU;
	int32_t x198 = INT32_MIN;
	volatile int64_t x199 = INT64_MAX;
	int8_t x200 = -3;
	uint64_t t47 = 421907395723LLU;

    t47 = ((x197&x198)-(x199>x200));

    if (t47 != 27917287423LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x202 = -1810;
	int16_t x203 = INT16_MAX;
	int32_t t48 = 20302;

    t48 = ((x201&x202)-(x203>x204));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	int64_t x208 = -1LL;
	volatile uint64_t t49 = 1008540035680184190LLU;

    t49 = ((x205&x206)-(x207>x208));

    if (t49 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x209 = -22316300948253454LL;
	volatile int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;
	int64_t t50 = -2017001347LL;

    t50 = ((x209&x210)-(x211>x212));

    if (t50 != 194LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = -1;
	static int16_t x214 = -1;
	int64_t x215 = INT64_MIN;
	uint64_t x216 = UINT64_MAX;

    t51 = ((x213&x214)-(x215>x216));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MAX;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MAX;

    t52 = ((x217&x218)-(x219>x220));

    if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = INT16_MIN;
	static int64_t x223 = -1LL;
	volatile int8_t x224 = -1;
	volatile int32_t t53 = -7358200;

    t53 = ((x221&x222)-(x223>x224));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x225 = -1LL;
	uint32_t x226 = 175222061U;
	volatile uint16_t x227 = UINT16_MAX;
	int8_t x228 = -12;

    t54 = ((x225&x226)-(x227>x228));

    if (t54 != 175222060LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x230 = -1;
	uint16_t x231 = 10U;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t55 = -4601;

    t55 = ((x229&x230)-(x231>x232));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x234 = 103U;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 370182974LLU;
	uint32_t t56 = 0U;

    t56 = ((x233&x234)-(x235>x236));

    if (t56 != 4U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = -51408153LL;
	int16_t x239 = -294;
	uint32_t x240 = 38586352U;
	volatile int64_t t57 = 3229415208LL;

    t57 = ((x237&x238)-(x239>x240));

    if (t57 != -2147483649LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x241 = 122;
	int8_t x242 = 1;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = UINT8_MAX;
	int32_t t58 = -3849065;

    t58 = ((x241&x242)-(x243>x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = -8352710718LL;
	static int64_t x247 = -1LL;
	static uint32_t x248 = 5U;
	volatile int64_t t59 = 70436LL;

    t59 = ((x245&x246)-(x247>x248));

    if (t59 != 49090LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	static int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t60 = 58;

    t60 = ((x249&x250)-(x251>x252));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x254 = 47;
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;

    t61 = ((x253&x254)-(x255>x256));

    if (t61 != 46) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x260 = 1;
	int64_t t62 = 0LL;

    t62 = ((x257&x258)-(x259>x260));

    if (t62 != 693333721888511LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x261 = UINT32_MAX;
	uint32_t x262 = 1914465U;
	static uint16_t x264 = UINT16_MAX;

    t63 = ((x261&x262)-(x263>x264));

    if (t63 != 1914464U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x265 = INT8_MIN;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;
	volatile int64_t t64 = INT64_MIN;

    t64 = ((x265&x266)-(x267>x268));

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x269 = 13;
	int64_t x270 = 453049822631070169LL;
	static int8_t x272 = -3;
	int64_t t65 = 51278557LL;

    t65 = ((x269&x270)-(x271>x272));

    if (t65 != 8LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x274 = 41811U;
	int8_t x275 = INT8_MAX;
	static uint32_t t66 = 133827206U;

    t66 = ((x273&x274)-(x275>x276));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x277 = INT32_MIN;
	static int32_t x278 = -2919;
	volatile int32_t t67 = INT32_MIN;

    t67 = ((x277&x278)-(x279>x280));

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = INT8_MIN;
	static volatile int8_t x282 = -1;
	static volatile int32_t x283 = -2093;
	int8_t x284 = INT8_MIN;

    t68 = ((x281&x282)-(x283>x284));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x285 = INT8_MAX;
	int16_t x286 = -1;
	static int32_t x287 = INT32_MIN;
	volatile int32_t x288 = INT32_MIN;
	static volatile int32_t t69 = -901639582;

    t69 = ((x285&x286)-(x287>x288));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MIN;
	uint16_t x290 = 0U;
	int8_t x291 = 0;
	uint8_t x292 = 61U;
	volatile int32_t t70 = 7759;

    t70 = ((x289&x290)-(x291>x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x293 = 0U;
	volatile uint16_t x295 = 197U;
	int16_t x296 = INT16_MIN;
	int32_t t71 = 405063362;

    t71 = ((x293&x294)-(x295>x296));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MIN;
	uint32_t x298 = UINT32_MAX;
	static volatile uint8_t x300 = 2U;
	uint32_t t72 = 2041U;

    t72 = ((x297&x298)-(x299>x300));

    if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = 0;
	static int32_t x304 = 27320983;

    t73 = ((x301&x302)-(x303>x304));

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = INT32_MIN;
	uint8_t x306 = 45U;
	int8_t x307 = INT8_MAX;
	uint8_t x308 = 115U;
	volatile int32_t t74 = 109841788;

    t74 = ((x305&x306)-(x307>x308));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x310 = UINT8_MAX;
	int64_t x311 = INT64_MIN;
	int32_t x312 = -1;
	int32_t t75 = 137193;

    t75 = ((x309&x310)-(x311>x312));

    if (t75 != 243) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = -326LL;
	static volatile int16_t x314 = INT16_MAX;

    t76 = ((x313&x314)-(x315>x316));

    if (t76 != 32442LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x318 = 0U;
	int64_t x320 = INT64_MIN;
	int32_t t77 = 3656162;

    t77 = ((x317&x318)-(x319>x320));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x322 = INT8_MIN;
	static uint64_t x323 = UINT64_MAX;
	static int64_t x324 = INT64_MIN;
	static volatile int32_t t78 = -158128847;

    t78 = ((x321&x322)-(x323>x324));

    if (t78 != 2147483519) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = -1;
	int16_t x326 = -1;
	int32_t x327 = 3473;
	volatile uint8_t x328 = UINT8_MAX;

    t79 = ((x325&x326)-(x327>x328));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x329 = INT32_MAX;
	uint32_t x330 = 6U;
	static volatile uint16_t x331 = 170U;
	volatile uint32_t t80 = 105640046U;

    t80 = ((x329&x330)-(x331>x332));

    if (t80 != 5U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x333 = INT8_MIN;
	volatile uint64_t x335 = 86515014027131196LLU;
	volatile int16_t x336 = INT16_MIN;
	uint32_t t81 = 2131110U;

    t81 = ((x333&x334)-(x335>x336));

    if (t81 != 48937984U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x338 = -1;
	int16_t x339 = -1;
	uint32_t x340 = 175069042U;
	int32_t t82 = 18984;

    t82 = ((x337&x338)-(x339>x340));

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = 1;
	int32_t x343 = INT32_MIN;
	static uint16_t x344 = 2324U;

    t83 = ((x341&x342)-(x343>x344));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = -17;
	int8_t x346 = -1;
	int8_t x347 = -1;
	int32_t t84 = -40;

    t84 = ((x345&x346)-(x347>x348));

    if (t84 != -17) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = -1;
	volatile int8_t x350 = INT8_MAX;
	int32_t x351 = 293653;
	static uint32_t x352 = 1U;
	volatile int32_t t85 = -263272;

    t85 = ((x349&x350)-(x351>x352));

    if (t85 != 126) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = 38;
	static int8_t x355 = 6;
	static volatile int16_t x356 = -182;
	volatile int32_t t86 = 2;

    t86 = ((x353&x354)-(x355>x356));

    if (t86 != 35) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MIN;
	static int64_t x359 = INT64_MIN;
	static volatile int32_t t87 = -196031447;

    t87 = ((x357&x358)-(x359>x360));

    if (t87 != -20290432) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x361 = 0U;
	uint16_t x362 = 0U;
	uint64_t x363 = 584160985372354802LLU;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t88 = -1;

    t88 = ((x361&x362)-(x363>x364));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x365 = 75U;
	int8_t x366 = INT8_MAX;
	int64_t x368 = 783101335180LL;
	static int32_t t89 = 980;

    t89 = ((x365&x366)-(x367>x368));

    if (t89 != 75) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x369 = 50U;
	int64_t x370 = -836804467LL;
	static int32_t x371 = INT32_MIN;
	volatile int16_t x372 = 1378;
	int64_t t90 = 28401LL;

    t90 = ((x369&x370)-(x371>x372));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x373 = 14671U;
	volatile int32_t x374 = INT32_MAX;
	volatile int16_t x375 = -1;
	uint32_t x376 = 96255U;
	uint32_t t91 = 7547802U;

    t91 = ((x373&x374)-(x375>x376));

    if (t91 != 14670U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = UINT16_MAX;
	int8_t x378 = 61;
	int16_t x380 = -725;
	volatile int32_t t92 = -402482;

    t92 = ((x377&x378)-(x379>x380));

    if (t92 != 61) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x381 = INT8_MAX;
	uint32_t x382 = UINT32_MAX;
	static int32_t x384 = -1;
	volatile uint32_t t93 = 1955U;

    t93 = ((x381&x382)-(x383>x384));

    if (t93 != 126U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = 0;
	int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;

    t94 = ((x385&x386)-(x387>x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = -5904751LL;
	volatile uint32_t x390 = 7715272U;
	int8_t x391 = INT8_MAX;
	volatile int8_t x392 = INT8_MAX;
	volatile int64_t t95 = -1614401188072442771LL;

    t95 = ((x389&x390)-(x391>x392));

    if (t95 != 2465920LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x393 = 0;
	int16_t x395 = -1;
	int32_t t96 = 1;

    t96 = ((x393&x394)-(x395>x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = INT8_MIN;
	uint64_t x398 = 1001LLU;
	volatile uint64_t x400 = 507666445220LLU;
	static volatile uint64_t t97 = 2LLU;

    t97 = ((x397&x398)-(x399>x400));

    if (t97 != 896LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x401 = INT32_MAX;
	uint8_t x402 = 14U;
	volatile int64_t x403 = -444897153129LL;
	volatile int32_t t98 = -4834482;

    t98 = ((x401&x402)-(x403>x404));

    if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = 43;
	static int32_t x406 = -50661;
	int16_t x408 = INT16_MIN;
	volatile int32_t t99 = 12393;

    t99 = ((x405&x406)-(x407>x408));

    if (t99 != 10) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	volatile int16_t x412 = -26;

    t100 = ((x409&x410)-(x411>x412));

    if (t100 != 65535LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x414 = 2;
	uint8_t x416 = 11U;
	int32_t t101 = 54556556;

    t101 = ((x413&x414)-(x415>x416));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x417 = 3U;
	int8_t x419 = -1;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t102 = 266U;

    t102 = ((x417&x418)-(x419>x420));

    if (t102 != 3U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x421 = INT16_MIN;
	static int32_t x422 = 73;
	volatile int16_t x423 = INT16_MIN;
	volatile int32_t x424 = -3178;
	volatile int32_t t103 = 0;

    t103 = ((x421&x422)-(x423>x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = INT8_MIN;
	int16_t x426 = 13;
	int64_t x427 = INT64_MIN;
	static volatile int32_t t104 = -494;

    t104 = ((x425&x426)-(x427>x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = INT64_MAX;
	volatile int16_t x430 = -5;
	int8_t x431 = INT8_MIN;
	volatile int64_t x432 = -21LL;
	volatile int64_t t105 = 480687182LL;

    t105 = ((x429&x430)-(x431>x432));

    if (t105 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x434 = -1;
	uint32_t x435 = 74U;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t106 = -7736;

    t106 = ((x433&x434)-(x435>x436));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x437 = 882880;
	uint64_t x439 = 183719LLU;
	int32_t x440 = -1;

    t107 = ((x437&x438)-(x439>x440));

    if (t107 != 882880) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x441 = INT8_MIN;
	int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MAX;

    t108 = ((x441&x442)-(x443>x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = -1LL;
	int8_t x446 = -8;
	static volatile int8_t x447 = 13;
	volatile int8_t x448 = INT8_MAX;
	volatile int64_t t109 = -49258978167385LL;

    t109 = ((x445&x446)-(x447>x448));

    if (t109 != -8LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = INT8_MIN;
	static int8_t x454 = INT8_MIN;
	static int8_t x455 = 1;
	volatile uint16_t x456 = 1218U;

    t110 = ((x453&x454)-(x455>x456));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x458 = UINT16_MAX;
	volatile int16_t x460 = INT16_MAX;
	static int64_t t111 = -470110LL;

    t111 = ((x457&x458)-(x459>x460));

    if (t111 != 65535LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile int16_t x462 = -1;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = 16U;

    t112 = ((x461&x462)-(x463>x464));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x465 = 5000560312209576390LLU;
	int64_t x466 = INT64_MIN;
	int8_t x467 = 1;
	uint64_t t113 = 134LLU;

    t113 = ((x465&x466)-(x467>x468));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x470 = INT16_MAX;
	static volatile int8_t x471 = 0;
	volatile int8_t x472 = INT8_MAX;
	int32_t t114 = -313984605;

    t114 = ((x469&x470)-(x471>x472));

    if (t114 != 255) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x473 = 6U;
	static int8_t x474 = INT8_MIN;
	static int16_t x476 = INT16_MIN;
	static int32_t t115 = -61181075;

    t115 = ((x473&x474)-(x475>x476));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 5U;
	int8_t x478 = -1;
	static int64_t x480 = 2268761LL;
	volatile int32_t t116 = -1;

    t116 = ((x477&x478)-(x479>x480));

    if (t116 != 5) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x482 = UINT16_MAX;
	uint64_t x483 = 6LLU;
	volatile int64_t x484 = 4243619832LL;
	int64_t t117 = -17150782704982301LL;

    t117 = ((x481&x482)-(x483>x484));

    if (t117 != 65535LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x486 = INT64_MIN;
	static int64_t x487 = -16072344690135LL;
	static uint8_t x488 = 11U;
	static volatile int64_t t118 = 56013899LL;

    t118 = ((x485&x486)-(x487>x488));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x490 = -1;
	volatile int16_t x491 = INT16_MAX;
	int32_t t119 = 665;

    t119 = ((x489&x490)-(x491>x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = INT64_MAX;
	int64_t x494 = INT64_MAX;
	uint16_t x495 = 5U;
	static uint64_t x496 = 1429600250839847519LLU;
	volatile int64_t t120 = INT64_MAX;

    t120 = ((x493&x494)-(x495>x496));

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x497 = INT16_MIN;
	int64_t x499 = INT64_MAX;

    t121 = ((x497&x498)-(x499>x500));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x502 = 11203550U;
	volatile int64_t x503 = INT64_MIN;
	int8_t x504 = 38;
	uint32_t t122 = 11915539U;

    t122 = ((x501&x502)-(x503>x504));

    if (t122 != 11203456U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x506 = INT8_MIN;
	volatile uint32_t x507 = 16203637U;
	uint32_t x508 = UINT32_MAX;
	volatile int64_t t123 = 44561759515588LL;

    t123 = ((x505&x506)-(x507>x508));

    if (t123 != -128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x509 = UINT8_MAX;
	volatile int16_t x510 = INT16_MAX;
	int64_t x511 = -3049050229157803569LL;
	volatile int8_t x512 = INT8_MIN;
	int32_t t124 = -153417;

    t124 = ((x509&x510)-(x511>x512));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x513 = INT32_MAX;
	static volatile int8_t x514 = INT8_MAX;
	static int32_t x515 = -1;
	int64_t x516 = INT64_MAX;
	static int32_t t125 = -7994;

    t125 = ((x513&x514)-(x515>x516));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = INT8_MIN;
	int8_t x520 = -2;
	int32_t t126 = 0;

    t126 = ((x517&x518)-(x519>x520));

    if (t126 != -129) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x524 = 71U;
	volatile int32_t t127 = -26997755;

    t127 = ((x521&x522)-(x523>x524));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x525 = INT32_MAX;
	int8_t x526 = -24;
	int64_t x527 = -1545222LL;
	volatile int32_t x528 = INT32_MIN;
	int32_t t128 = -6;

    t128 = ((x525&x526)-(x527>x528));

    if (t128 != 2147483623) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x530 = -33556188LL;
	int8_t x531 = INT8_MIN;
	int32_t x532 = 36;
	volatile int64_t t129 = 5494130LL;

    t129 = ((x529&x530)-(x531>x532));

    if (t129 != -2147483648LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x534 = 5U;
	uint16_t x535 = UINT16_MAX;
	uint8_t x536 = UINT8_MAX;
	volatile int64_t t130 = 1033985740444LL;

    t130 = ((x533&x534)-(x535>x536));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MIN;
	static int32_t x539 = 6;
	volatile int8_t x540 = INT8_MIN;
	volatile uint64_t t131 = 1057LLU;

    t131 = ((x537&x538)-(x539>x540));

    if (t131 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x541 = 256292U;
	int32_t x542 = INT32_MIN;

    t132 = ((x541&x542)-(x543>x544));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = 1;
	int16_t x548 = 2084;

    t133 = ((x545&x546)-(x547>x548));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x549 = -676389747;
	int64_t x550 = INT64_MAX;
	int32_t x551 = INT32_MAX;
	static int64_t x552 = -1LL;

    t134 = ((x549&x550)-(x551>x552));

    if (t134 != 9223372036178386060LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x553 = 3U;
	static uint8_t x555 = 98U;

    t135 = ((x553&x554)-(x555>x556));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x557 = INT64_MAX;
	int16_t x558 = 6133;
	uint16_t x559 = 10U;

    t136 = ((x557&x558)-(x559>x560));

    if (t136 != 6132LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x561 = UINT16_MAX;
	int16_t x562 = -26;
	int32_t x563 = INT32_MIN;
	uint64_t x564 = 592711509203LLU;
	int32_t t137 = -215186;

    t137 = ((x561&x562)-(x563>x564));

    if (t137 != 65509) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x565 = 3U;
	uint64_t x566 = 234604503LLU;
	int8_t x568 = INT8_MAX;
	uint64_t t138 = 8191612852945303LLU;

    t138 = ((x565&x566)-(x567>x568));

    if (t138 != 3LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = -1LL;
	int8_t x570 = INT8_MIN;
	int16_t x571 = 0;
	static int64_t x572 = INT64_MAX;
	volatile int64_t t139 = -5283723979LL;

    t139 = ((x569&x570)-(x571>x572));

    if (t139 != -128LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x573 = 2U;
	int32_t t140 = -8188023;

    t140 = ((x573&x574)-(x575>x576));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x577 = 3U;
	volatile int16_t x578 = -52;
	static uint64_t x579 = UINT64_MAX;
	uint16_t x580 = 2U;
	static int32_t t141 = 227189245;

    t141 = ((x577&x578)-(x579>x580));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x581 = 1396U;
	int32_t x583 = -354861197;
	uint16_t x584 = 27455U;
	static int32_t t142 = -68906;

    t142 = ((x581&x582)-(x583>x584));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x586 = 22189U;
	uint64_t x587 = UINT64_MAX;
	int32_t t143 = 1214880;

    t143 = ((x585&x586)-(x587>x588));

    if (t143 != 32) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x590 = 103434694U;
	int32_t x591 = 947474;
	int8_t x592 = 3;
	static volatile uint32_t t144 = 516827U;

    t144 = ((x589&x590)-(x591>x592));

    if (t144 != 18885U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x594 = 16023U;
	int8_t x596 = 21;
	int32_t t145 = -49;

    t145 = ((x593&x594)-(x595>x596));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x597 = INT32_MAX;
	int32_t x598 = INT32_MIN;
	int16_t x599 = INT16_MIN;
	int64_t x600 = -1LL;
	int32_t t146 = 7015981;

    t146 = ((x597&x598)-(x599>x600));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x601 = 12831U;
	int16_t x602 = -35;
	int32_t x603 = INT32_MIN;
	volatile int32_t t147 = 367271;

    t147 = ((x601&x602)-(x603>x604));

    if (t147 != 12829) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x606 = -1LL;
	uint32_t x607 = 118099U;
	volatile uint32_t x608 = UINT32_MAX;
	int64_t t148 = 519580999LL;

    t148 = ((x605&x606)-(x607>x608));

    if (t148 != -2147483648LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = 1856271168U;
	volatile int16_t x610 = INT16_MIN;
	static int16_t x612 = INT16_MIN;
	static volatile uint32_t t149 = 72197U;

    t149 = ((x609&x610)-(x611>x612));

    if (t149 != 1856241663U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x613 = 0U;
	static int32_t x614 = INT32_MIN;
	static uint64_t x616 = 219944158940092LLU;
	static volatile int32_t t150 = -13773;

    t150 = ((x613&x614)-(x615>x616));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x617 = -1;
	int32_t x618 = INT32_MIN;
	volatile int64_t x619 = INT64_MIN;
	int64_t x620 = INT64_MIN;
	volatile int32_t t151 = INT32_MIN;

    t151 = ((x617&x618)-(x619>x620));

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x621 = 82U;
	volatile uint16_t x622 = UINT16_MAX;
	uint32_t x623 = UINT32_MAX;
	uint8_t x624 = 7U;
	volatile int32_t t152 = 11;

    t152 = ((x621&x622)-(x623>x624));

    if (t152 != 81) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x625 = INT32_MAX;
	static int32_t x626 = INT32_MAX;
	int8_t x628 = 10;
	int32_t t153 = 1;

    t153 = ((x625&x626)-(x627>x628));

    if (t153 != 2147483646) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x629 = 11U;
	int32_t x630 = -6479;
	uint16_t x631 = 1128U;
	int8_t x632 = INT8_MAX;
	int32_t t154 = 4;

    t154 = ((x629&x630)-(x631>x632));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x633 = 30U;
	uint32_t x634 = UINT32_MAX;
	static volatile int8_t x635 = 0;
	static uint32_t t155 = 866966277U;

    t155 = ((x633&x634)-(x635>x636));

    if (t155 != 30U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x641 = INT16_MIN;
	uint64_t x642 = UINT64_MAX;
	int16_t x643 = INT16_MIN;
	uint64_t x644 = UINT64_MAX;
	static volatile uint64_t t156 = 222215622LLU;

    t156 = ((x641&x642)-(x643>x644));

    if (t156 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x646 = 61LLU;
	int32_t x648 = INT32_MIN;
	volatile uint64_t t157 = 27303968953LLU;

    t157 = ((x645&x646)-(x647>x648));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x649 = 22;
	int8_t x651 = -1;

    t158 = ((x649&x650)-(x651>x652));

    if (t158 != 18LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x655 = -1;
	uint32_t x656 = 10U;
	volatile uint64_t t159 = 103003LLU;

    t159 = ((x653&x654)-(x655>x656));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x657 = INT16_MAX;
	uint16_t x658 = UINT16_MAX;
	static volatile int64_t x659 = 182176918699LL;
	int8_t x660 = -6;
	int32_t t160 = 50200237;

    t160 = ((x657&x658)-(x659>x660));

    if (t160 != 32766) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x661 = INT64_MAX;
	int64_t x662 = INT64_MAX;
	static int8_t x664 = 7;
	static int64_t t161 = 3020794710261127474LL;

    t161 = ((x661&x662)-(x663>x664));

    if (t161 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MAX;
	int16_t x667 = INT16_MAX;
	static int64_t x668 = INT64_MAX;
	int32_t t162 = 3708;

    t162 = ((x665&x666)-(x667>x668));

    if (t162 != 32640) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x669 = 12;
	int32_t x670 = -708747323;
	int16_t x671 = INT16_MIN;
	uint32_t x672 = UINT32_MAX;
	int32_t t163 = 803232551;

    t163 = ((x669&x670)-(x671>x672));

    if (t163 != 4) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x676 = INT8_MIN;
	volatile int32_t t164 = -245;

    t164 = ((x673&x674)-(x675>x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x678 = INT8_MAX;
	static uint32_t x680 = 79617U;

    t165 = ((x677&x678)-(x679>x680));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x681 = UINT64_MAX;
	int16_t x682 = -2;
	uint32_t x683 = 57U;
	int16_t x684 = 0;
	uint64_t t166 = 62525838LLU;

    t166 = ((x681&x682)-(x683>x684));

    if (t166 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = 0;
	volatile int32_t x686 = -850976257;
	uint8_t x688 = 62U;
	int32_t t167 = 1458592;

    t167 = ((x685&x686)-(x687>x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = 1;
	uint16_t x691 = UINT16_MAX;
	volatile int32_t t168 = 39617;

    t168 = ((x689&x690)-(x691>x692));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x693 = INT8_MIN;
	int64_t x694 = INT64_MIN;
	uint32_t x695 = 0U;
	int32_t x696 = INT32_MIN;
	int64_t t169 = INT64_MIN;

    t169 = ((x693&x694)-(x695>x696));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = INT32_MIN;
	uint8_t x703 = UINT8_MAX;
	volatile int8_t x704 = -1;
	int64_t t170 = 35450490169577726LL;

    t170 = ((x701&x702)-(x703>x704));

    if (t170 != -83751862273LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x709 = 13152LLU;
	int8_t x710 = -14;
	int32_t x712 = INT32_MIN;
	volatile uint64_t t171 = 1781573127039361134LLU;

    t171 = ((x709&x710)-(x711>x712));

    if (t171 != 13151LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x717 = UINT8_MAX;
	int32_t x718 = INT32_MIN;
	static int16_t x719 = INT16_MIN;
	int16_t x720 = INT16_MAX;
	static int32_t t172 = -9;

    t172 = ((x717&x718)-(x719>x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x721 = -33;
	int32_t x722 = INT32_MIN;
	static int16_t x723 = -1;
	volatile int32_t t173 = INT32_MIN;

    t173 = ((x721&x722)-(x723>x724));

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x725 = INT8_MAX;
	static int16_t x726 = INT16_MAX;
	int32_t x727 = 5;

    t174 = ((x725&x726)-(x727>x728));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x732 = 33057889723643886LLU;
	int32_t t175 = 222295;

    t175 = ((x729&x730)-(x731>x732));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x734 = 14U;
	volatile int16_t x736 = -1722;

    t176 = ((x733&x734)-(x735>x736));

    if (t176 != 11) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	uint32_t x739 = 109U;
	int64_t x740 = INT64_MIN;
	uint32_t t177 = 89526453U;

    t177 = ((x737&x738)-(x739>x740));

    if (t177 != 14U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x741 = -10601909975LL;
	static uint32_t x742 = UINT32_MAX;
	volatile int8_t x743 = INT8_MIN;
	volatile uint32_t x744 = 1U;

    t178 = ((x741&x742)-(x743>x744));

    if (t178 != 2282991912LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x745 = -71;
	int16_t x746 = 483;
	int8_t x747 = INT8_MIN;
	int16_t x748 = 1956;
	volatile int32_t t179 = -385450047;

    t179 = ((x745&x746)-(x747>x748));

    if (t179 != 417) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x749 = 2;
	int32_t x750 = INT32_MAX;
	uint16_t x751 = UINT16_MAX;
	static int32_t t180 = 221;

    t180 = ((x749&x750)-(x751>x752));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x753 = -1;
	volatile int8_t x754 = -1;
	static int8_t x755 = INT8_MIN;
	static int64_t x756 = INT64_MIN;
	static volatile int32_t t181 = 782086423;

    t181 = ((x753&x754)-(x755>x756));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x757 = UINT64_MAX;
	static int64_t x758 = 2739295849LL;
	volatile int64_t x759 = -1LL;
	int16_t x760 = INT16_MAX;
	uint64_t t182 = 105114669918643LLU;

    t182 = ((x757&x758)-(x759>x760));

    if (t182 != 2739295849LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x761 = 2U;
	uint16_t x762 = 662U;
	uint32_t x763 = UINT32_MAX;
	int64_t x764 = 3LL;
	static volatile int32_t t183 = -281436;

    t183 = ((x761&x762)-(x763>x764));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x765 = -1LL;
	int32_t x766 = INT32_MIN;
	int8_t x767 = -1;
	uint8_t x768 = UINT8_MAX;

    t184 = ((x765&x766)-(x767>x768));

    if (t184 != -2147483648LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x773 = 122U;
	static int32_t x774 = -1;
	static uint32_t x775 = 380392257U;
	volatile int16_t x776 = -1083;
	volatile uint32_t t185 = 164081574U;

    t185 = ((x773&x774)-(x775>x776));

    if (t185 != 122U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x777 = 833;
	int64_t x779 = 11LL;
	int64_t x780 = INT64_MAX;

    t186 = ((x777&x778)-(x779>x780));

    if (t186 != 768) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x782 = INT16_MAX;
	int32_t x784 = -1;
	static int32_t t187 = -11;

    t187 = ((x781&x782)-(x783>x784));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x785 = 4273165039801LLU;
	int32_t x786 = INT32_MAX;
	volatile int8_t x787 = -6;
	int8_t x788 = -1;

    t188 = ((x785&x786)-(x787>x788));

    if (t188 != 1820063929LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x791 = UINT32_MAX;
	int64_t t189 = 48072367045547268LL;

    t189 = ((x789&x790)-(x791>x792));

    if (t189 != -2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x793 = UINT8_MAX;
	uint16_t x794 = UINT16_MAX;
	uint64_t x795 = 30569456587LLU;
	int16_t x796 = 364;
	volatile int32_t t190 = 118212364;

    t190 = ((x793&x794)-(x795>x796));

    if (t190 != 254) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x800 = UINT16_MAX;

    t191 = ((x797&x798)-(x799>x800));

    if (t191 != 65535U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x802 = 661408;
	static volatile uint64_t x803 = 56LLU;
	int16_t x804 = INT16_MAX;
	volatile int32_t t192 = 148399;

    t192 = ((x801&x802)-(x803>x804));

    if (t192 != 6048) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x805 = 17;
	int64_t x806 = -261980LL;
	int32_t x807 = INT32_MAX;
	uint32_t x808 = 35490U;
	volatile int64_t t193 = -12778194902LL;

    t193 = ((x805&x806)-(x807>x808));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x809 = INT32_MAX;
	int8_t x811 = INT8_MIN;
	static volatile int8_t x812 = INT8_MAX;
	volatile uint32_t t194 = 4U;

    t194 = ((x809&x810)-(x811>x812));

    if (t194 != 318422U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x813 = UINT64_MAX;
	uint64_t x815 = 16080702004694003LLU;
	uint64_t x816 = 1029LLU;
	static volatile uint64_t t195 = 13LLU;

    t195 = ((x813&x814)-(x815>x816));

    if (t195 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x817 = 562LLU;
	int8_t x818 = INT8_MIN;
	int8_t x819 = INT8_MAX;
	int32_t x820 = INT32_MAX;
	static volatile uint64_t t196 = 90949275151LLU;

    t196 = ((x817&x818)-(x819>x820));

    if (t196 != 512LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = INT8_MIN;
	int16_t x822 = INT16_MAX;
	int8_t x823 = INT8_MIN;
	volatile int8_t x824 = INT8_MIN;
	volatile int32_t t197 = 137;

    t197 = ((x821&x822)-(x823>x824));

    if (t197 != 32640) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x825 = 0U;
	int32_t x826 = -1;
	static int8_t x827 = INT8_MAX;
	int16_t x828 = INT16_MIN;
	int32_t t198 = 360874;

    t198 = ((x825&x826)-(x827>x828));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x829 = INT8_MIN;
	int64_t x831 = INT64_MAX;
	uint16_t x832 = 914U;

    t199 = ((x829&x830)-(x831>x832));

    if (t199 != -129) { NG(); } else { ; }
	
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

