
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

int8_t x2 = INT8_MIN;
int32_t t0 = -61560;
volatile uint8_t x7 = 23U;
static int16_t x9 = -8;
static int32_t x12 = -381002;
static uint16_t x19 = 153U;
int8_t x24 = 6;
uint64_t x25 = 741948802LLU;
static int32_t x32 = -1;
volatile int32_t t7 = 32082957;
volatile uint64_t x55 = UINT64_MAX;
uint8_t x64 = 9U;
int64_t x72 = -1LL;
int8_t x79 = INT8_MAX;
uint8_t x99 = UINT8_MAX;
int32_t x106 = -12921190;
volatile uint32_t x107 = 3016620U;
int64_t x108 = -1334LL;
volatile int32_t t24 = -894068;
volatile uint16_t x110 = 23U;
int8_t x112 = -1;
static int32_t x114 = INT32_MAX;
int32_t x115 = INT32_MIN;
volatile int8_t x116 = -1;
int32_t x118 = 433330207;
int64_t x120 = 371539912184628223LL;
volatile int32_t t27 = 538963908;
int64_t x129 = INT64_MIN;
uint16_t x131 = 1786U;
int16_t x142 = 383;
static uint8_t x143 = 43U;
int32_t x153 = -1;
int8_t x154 = INT8_MIN;
static volatile int32_t t35 = 885;
volatile int32_t t36 = 57102;
uint32_t x164 = UINT32_MAX;
volatile int32_t t38 = -157512;
int32_t x178 = INT32_MIN;
int32_t t40 = -14073;
int16_t x192 = INT16_MIN;
volatile int32_t t42 = 3425;
volatile int64_t x196 = 1988LL;
int64_t x197 = INT64_MIN;
static uint16_t x198 = 0U;
uint64_t x200 = 33981452077780LLU;
int8_t x202 = INT8_MIN;
int64_t x207 = -46147403349937LL;
uint32_t x214 = UINT32_MAX;
int16_t x215 = INT16_MIN;
uint16_t x217 = UINT16_MAX;
int32_t x220 = INT32_MAX;
uint16_t x221 = 8743U;
int32_t t50 = 26755;
uint8_t x229 = UINT8_MAX;
uint32_t x241 = 163515991U;
static volatile int32_t t54 = -103;
volatile int64_t x247 = -16266LL;
int32_t x253 = -1;
static uint16_t x256 = 5849U;
uint64_t x269 = UINT64_MAX;
static uint64_t x270 = UINT64_MAX;
uint32_t x278 = 1U;
int32_t x282 = INT32_MIN;
uint32_t x283 = 464U;
volatile int32_t t64 = -767105;
uint32_t x293 = 498U;
int8_t x303 = INT8_MIN;
volatile uint8_t x307 = 1U;
volatile int64_t x334 = 3999648LL;
int32_t x337 = 4;
static int32_t x342 = 404;
uint64_t x349 = 5623102LLU;
volatile uint64_t x350 = UINT64_MAX;
int8_t x351 = 1;
uint32_t x355 = UINT32_MAX;
int8_t x358 = INT8_MAX;
int32_t x364 = -1;
volatile int32_t t81 = 798;
int16_t x366 = -1;
volatile int16_t x386 = INT16_MAX;
static uint16_t x388 = 26U;
int8_t x391 = INT8_MAX;
volatile int32_t t87 = -11;
static int32_t x403 = 61355736;
int8_t x411 = 1;
volatile uint32_t x417 = 618030U;
uint16_t x418 = 12941U;
uint64_t x427 = UINT64_MAX;
uint16_t x432 = 11148U;
uint16_t x435 = 5679U;
volatile uint16_t x436 = 7278U;
uint16_t x442 = 863U;
int64_t x457 = INT64_MIN;
volatile uint64_t x458 = 561444437LLU;
uint32_t x460 = UINT32_MAX;
static int32_t x463 = INT32_MIN;
int16_t x467 = INT16_MIN;
int8_t x468 = -1;
static uint16_t x469 = UINT16_MAX;
volatile int8_t x470 = INT8_MAX;
static int16_t x486 = 211;
int64_t x489 = -5422975350739473LL;
uint64_t x494 = UINT64_MAX;
int32_t x497 = INT32_MIN;
static int64_t x498 = INT64_MAX;
int64_t x499 = -11851919LL;
static int32_t x500 = 54738411;
uint8_t x502 = UINT8_MAX;
int32_t x518 = 182168;
uint64_t x519 = 182507LLU;
int16_t x523 = INT16_MIN;
uint32_t x528 = UINT32_MAX;
int32_t t120 = 30264;
int32_t t122 = 6;
int64_t x537 = INT64_MAX;
static int8_t x539 = -14;
static uint16_t x552 = UINT16_MAX;
int8_t x557 = 1;
static volatile uint8_t x560 = UINT8_MAX;
int16_t x561 = -1;
int32_t x562 = INT32_MIN;
static volatile int32_t t128 = -1;
uint8_t x567 = UINT8_MAX;
int8_t x569 = INT8_MIN;
uint32_t x572 = UINT32_MAX;
int64_t x575 = -81024316LL;
static int8_t x576 = INT8_MAX;
int16_t x578 = INT16_MIN;
static uint64_t x585 = 147824LLU;
volatile int16_t x597 = INT16_MIN;
int32_t t138 = -507;
volatile int8_t x608 = INT8_MIN;
int32_t x610 = INT32_MIN;
volatile int64_t x622 = -1726040546186638783LL;
int16_t x625 = 0;
int8_t x634 = INT8_MIN;
int16_t x636 = 0;
volatile int32_t t146 = 14004;
int32_t x639 = INT32_MIN;
int8_t x646 = INT8_MIN;
volatile uint64_t x649 = 86764260094870LLU;
uint32_t x651 = 1677940771U;
volatile int16_t x653 = INT16_MIN;
volatile uint16_t x659 = 1U;
static uint64_t x661 = 2LLU;
volatile int32_t t153 = 2;
volatile int64_t x665 = -460318LL;
static int8_t x666 = INT8_MIN;
static int32_t t155 = -1949990;
int8_t x679 = INT8_MIN;
static int64_t x685 = INT64_MAX;
int32_t t158 = 1;
int16_t x691 = INT16_MIN;
uint8_t x698 = 8U;
int8_t x700 = INT8_MIN;
int64_t x704 = 1311425116316473654LL;
static int32_t t162 = 223230;
uint16_t x705 = 19731U;
int32_t x713 = INT32_MAX;
int32_t t166 = -141199307;
int64_t x728 = INT64_MIN;
volatile int32_t t168 = -20691;
static uint32_t x732 = UINT32_MAX;
uint32_t x734 = UINT32_MAX;
int16_t x743 = 1;
uint8_t x744 = 74U;
int32_t x754 = -1;
volatile int32_t t176 = 38048874;
uint16_t x765 = 13116U;
static uint8_t x770 = 15U;
static int8_t x773 = -3;
int32_t x776 = INT32_MAX;
uint8_t x779 = 4U;
volatile int32_t x793 = -926292444;
static uint16_t x794 = UINT16_MAX;
uint64_t x799 = 6117216828253642714LLU;
int32_t x800 = INT32_MIN;
int32_t t186 = 1620786;
int16_t x810 = -572;
uint16_t x811 = 1077U;
int8_t x813 = INT8_MAX;
uint8_t x814 = 2U;
static int8_t x821 = INT8_MIN;
int16_t x829 = 1;
uint16_t x831 = 8258U;
volatile int32_t t191 = 58555190;
int32_t x852 = INT32_MAX;
volatile uint64_t x854 = 25385764LLU;
static volatile int32_t t195 = 870;
static volatile int32_t x863 = INT32_MIN;
uint64_t x868 = UINT64_MAX;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint8_t x3 = 1U;
	uint64_t x4 = 4748885LLU;

    t0 = (x1>(x2/(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	int64_t x6 = -1LL;
	uint16_t x8 = 1223U;
	volatile int32_t t1 = -8764073;

    t1 = (x5>(x6/(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x10 = 22U;
	uint8_t x11 = 59U;
	int32_t t2 = -929169;

    t2 = (x9>(x10/(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = 1;
	volatile uint16_t x18 = 0U;
	uint32_t x20 = 33470867U;
	int32_t t3 = 3;

    t3 = (x17>(x18/(x19^x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	static int16_t x22 = 0;
	int32_t x23 = INT32_MAX;
	volatile int32_t t4 = 408583;

    t4 = (x21>(x22/(x23^x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x26 = UINT8_MAX;
	volatile uint32_t x27 = 613108U;
	int32_t x28 = -1;
	int32_t t5 = 11808881;

    t5 = (x25>(x26/(x27^x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -92;
	volatile int64_t x30 = 346285LL;
	uint32_t x31 = 324299031U;
	int32_t t6 = -9236;

    t6 = (x29>(x30/(x31^x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	uint64_t x34 = 3649LLU;
	int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MAX;

    t7 = (x33>(x34/(x35^x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 6;
	uint16_t x38 = 14854U;
	uint64_t x39 = 1639116927751159558LLU;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t8 = -574421;

    t8 = (x37>(x38/(x39^x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = UINT8_MAX;
	int64_t x42 = 1066797881LL;
	volatile int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -14989201;

    t9 = (x41>(x42/(x43^x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	static int64_t x46 = -149872623114246628LL;
	uint16_t x47 = 16U;
	uint16_t x48 = 2000U;
	int32_t t10 = 823850;

    t10 = (x45>(x46/(x47^x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -1;
	int16_t x50 = 523;
	int8_t x51 = INT8_MIN;
	static uint64_t x52 = 13625104LLU;
	static int32_t t11 = -7706750;

    t11 = (x49>(x50/(x51^x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -1;
	volatile int32_t x54 = -1;
	int8_t x56 = INT8_MIN;
	static int32_t t12 = -65279079;

    t12 = (x53>(x54/(x55^x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 112628970U;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 1U;
	volatile int32_t t13 = 8508613;

    t13 = (x57>(x58/(x59^x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 845904658LLU;
	uint32_t x63 = 8U;
	int32_t t14 = -77522;

    t14 = (x61>(x62/(x63^x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 81U;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = 7815LLU;
	volatile uint64_t x68 = 7129LLU;
	int32_t t15 = 16864855;

    t15 = (x65>(x66/(x67^x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	uint16_t x70 = 48U;
	uint16_t x71 = 11U;
	int32_t t16 = 34557940;

    t16 = (x69>(x70/(x71^x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	uint32_t x74 = 1502635U;
	uint8_t x75 = UINT8_MAX;
	static uint8_t x76 = 15U;
	volatile int32_t t17 = -2709;

    t17 = (x73>(x74/(x75^x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = 4018264;
	volatile int8_t x78 = -16;
	int16_t x80 = INT16_MIN;
	int32_t t18 = 182;

    t18 = (x77>(x78/(x79^x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 6807;
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t19 = 904096000;

    t19 = (x85>(x86/(x87^x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x89 = INT8_MAX;
	int64_t x90 = INT64_MAX;
	int16_t x91 = 0;
	int16_t x92 = -1;
	int32_t t20 = -55518;

    t20 = (x89>(x90/(x91^x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = -1;
	static uint64_t x94 = 48924709827696LLU;
	static int32_t x95 = INT32_MIN;
	int32_t x96 = -67;
	volatile int32_t t21 = 197380833;

    t21 = (x93>(x94/(x95^x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x97 = -1LL;
	volatile int64_t x98 = INT64_MIN;
	int32_t x100 = -16660860;
	int32_t t22 = 3388083;

    t22 = (x97>(x98/(x99^x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 24587U;
	int32_t x103 = -36156887;
	volatile int64_t x104 = INT64_MIN;
	volatile int32_t t23 = 439970572;

    t23 = (x101>(x102/(x103^x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = 16;

    t24 = (x105>(x106/(x107^x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	static uint32_t x111 = 126977177U;
	int32_t t25 = 483166656;

    t25 = (x109>(x110/(x111^x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -1;
	volatile int32_t t26 = -935944807;

    t26 = (x113>(x114/(x115^x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x117 = -1;
	int16_t x119 = INT16_MIN;

    t27 = (x117>(x118/(x119^x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	uint8_t x122 = 7U;
	static uint8_t x123 = 60U;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t28 = 0;

    t28 = (x121>(x122/(x123^x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -1LL;
	static int16_t x126 = INT16_MIN;
	int16_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t29 = -4;

    t29 = (x125>(x126/(x127^x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x130 = -1;
	int32_t x132 = INT32_MIN;
	int32_t t30 = 94645081;

    t30 = (x129>(x130/(x131^x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = 6196928022826249LLU;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 7632U;
	int64_t x136 = INT64_MIN;
	volatile int32_t t31 = -2;

    t31 = (x133>(x134/(x135^x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x137 = 4;
	int16_t x138 = INT16_MIN;
	static uint32_t x139 = 2U;
	int64_t x140 = INT64_MAX;
	static volatile int32_t t32 = -26042;

    t32 = (x137>(x138/(x139^x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x141 = 4U;
	uint64_t x144 = 54254481745775LLU;
	volatile int32_t t33 = -400115;

    t33 = (x141>(x142/(x143^x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = INT64_MIN;
	volatile uint32_t x150 = 901U;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 114U;
	int32_t t34 = -502035712;

    t34 = (x149>(x150/(x151^x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x155 = 180167U;
	volatile int8_t x156 = INT8_MIN;

    t35 = (x153>(x154/(x155^x156)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x157 = INT8_MIN;
	int64_t x158 = -50LL;
	static uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;

    t36 = (x157>(x158/(x159^x160)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = -10427;
	static int8_t x162 = -1;
	int64_t x163 = INT64_MIN;
	volatile int32_t t37 = 6794003;

    t37 = (x161>(x162/(x163^x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x169 = 184100LL;
	volatile int16_t x170 = -1;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;

    t38 = (x169>(x170/(x171^x172)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x173 = 35603941993720375LL;
	static int8_t x174 = 0;
	volatile int16_t x175 = -426;
	int8_t x176 = -17;
	int32_t t39 = -79427975;

    t39 = (x173>(x174/(x175^x176)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = 1;
	static int64_t x179 = INT64_MAX;
	volatile int32_t x180 = -1;

    t40 = (x177>(x178/(x179^x180)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x181 = -1;
	uint64_t x182 = 55763110LLU;
	uint8_t x183 = 1U;
	int32_t x184 = -28583654;
	int32_t t41 = -1258;

    t41 = (x181>(x182/(x183^x184)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x189 = -6632852408773311LL;
	static volatile uint8_t x190 = 1U;
	int8_t x191 = -1;

    t42 = (x189>(x190/(x191^x192)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x193 = -4901;
	uint8_t x194 = 0U;
	volatile uint8_t x195 = UINT8_MAX;
	int32_t t43 = -25;

    t43 = (x193>(x194/(x195^x196)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x199 = -61;
	static int32_t t44 = 1;

    t44 = (x197>(x198/(x199^x200)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x201 = INT8_MAX;
	static int8_t x203 = -1;
	static uint8_t x204 = UINT8_MAX;
	int32_t t45 = -42969480;

    t45 = (x201>(x202/(x203^x204)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MAX;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t46 = 349;

    t46 = (x205>(x206/(x207^x208)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = INT32_MAX;
	static uint16_t x210 = 24U;
	int32_t x211 = INT32_MAX;
	int16_t x212 = INT16_MAX;
	volatile int32_t t47 = -918213;

    t47 = (x209>(x210/(x211^x212)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x213 = UINT32_MAX;
	static uint64_t x216 = 7928363311642032585LLU;
	volatile int32_t t48 = -13;

    t48 = (x213>(x214/(x215^x216)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x218 = INT64_MIN;
	int64_t x219 = INT64_MIN;
	int32_t t49 = 190394724;

    t49 = (x217>(x218/(x219^x220)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x222 = UINT16_MAX;
	int16_t x223 = -1;
	volatile uint32_t x224 = 6U;

    t50 = (x221>(x222/(x223^x224)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x225 = 2U;
	static int32_t x226 = -1;
	int64_t x227 = -120LL;
	volatile int64_t x228 = INT64_MIN;
	int32_t t51 = 42139321;

    t51 = (x225>(x226/(x227^x228)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x230 = UINT16_MAX;
	volatile uint32_t x231 = 52326U;
	volatile uint64_t x232 = 194419189082LLU;
	volatile int32_t t52 = -7552;

    t52 = (x229>(x230/(x231^x232)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x233 = UINT8_MAX;
	volatile int32_t x234 = 23179;
	static int64_t x235 = 540156325460299LL;
	static volatile int64_t x236 = -1LL;
	volatile int32_t t53 = -2966;

    t53 = (x233>(x234/(x235^x236)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x242 = 5;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = -1;

    t54 = (x241>(x242/(x243^x244)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x245 = INT32_MIN;
	static int32_t x246 = 322272;
	uint8_t x248 = 0U;
	volatile int32_t t55 = 388334777;

    t55 = (x245>(x246/(x247^x248)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x249 = -9081861LL;
	static int32_t x250 = 546317156;
	int8_t x251 = 0;
	int8_t x252 = 20;
	volatile int32_t t56 = 30047;

    t56 = (x249>(x250/(x251^x252)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x254 = -1;
	uint8_t x255 = 13U;
	static int32_t t57 = -56;

    t57 = (x253>(x254/(x255^x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = INT16_MAX;
	uint64_t x258 = 794427639097699LLU;
	static int16_t x259 = INT16_MAX;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t58 = -30028333;

    t58 = (x257>(x258/(x259^x260)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = -80342;
	volatile uint64_t x266 = 631387LLU;
	static uint8_t x267 = UINT8_MAX;
	uint16_t x268 = 46U;
	int32_t t59 = 447;

    t59 = (x265>(x266/(x267^x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x271 = -6;
	int32_t x272 = INT32_MIN;
	volatile int32_t t60 = -332;

    t60 = (x269>(x270/(x271^x272)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = INT8_MIN;
	static int64_t x274 = 22862LL;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = -3744;
	volatile int32_t t61 = -8221187;

    t61 = (x273>(x274/(x275^x276)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x277 = -28;
	volatile int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t62 = -22;

    t62 = (x277>(x278/(x279^x280)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = INT16_MIN;
	static int64_t x284 = INT64_MAX;
	static int32_t t63 = -7;

    t63 = (x281>(x282/(x283^x284)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x285 = 3U;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MIN;
	uint64_t x288 = 637LLU;

    t64 = (x285>(x286/(x287^x288)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = -1;
	int64_t x290 = INT64_MAX;
	uint64_t x291 = 571099630391514623LLU;
	int64_t x292 = INT64_MIN;
	volatile int32_t t65 = -11727416;

    t65 = (x289>(x290/(x291^x292)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x294 = -1023;
	static volatile uint32_t x295 = 63546U;
	uint8_t x296 = 68U;
	int32_t t66 = -107266;

    t66 = (x293>(x294/(x295^x296)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x297 = 8296U;
	volatile uint32_t x298 = 1U;
	volatile int64_t x299 = INT64_MIN;
	volatile int16_t x300 = -1;
	volatile int32_t t67 = 56;

    t67 = (x297>(x298/(x299^x300)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x301 = 414LL;
	volatile int16_t x302 = -1;
	int16_t x304 = INT16_MAX;
	volatile int32_t t68 = -1373393;

    t68 = (x301>(x302/(x303^x304)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x305 = 204473058444510947LLU;
	volatile int64_t x306 = INT64_MIN;
	uint32_t x308 = 51809U;
	int32_t t69 = 3940;

    t69 = (x305>(x306/(x307^x308)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = INT64_MIN;
	uint32_t x314 = 264018U;
	int16_t x315 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t70 = 29;

    t70 = (x313>(x314/(x315^x316)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x317 = 9077528575857168904LLU;
	static int64_t x318 = -1LL;
	volatile int16_t x319 = -1;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t71 = 37969;

    t71 = (x317>(x318/(x319^x320)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x321 = 102U;
	int64_t x322 = INT64_MAX;
	int8_t x323 = -1;
	int32_t x324 = -139590080;
	volatile int32_t t72 = -1490074;

    t72 = (x321>(x322/(x323^x324)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x329 = 13U;
	static int16_t x330 = -1;
	int16_t x331 = -1;
	uint64_t x332 = 633076892708LLU;
	volatile int32_t t73 = 570035808;

    t73 = (x329>(x330/(x331^x332)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x333 = 1746223941972176LLU;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t74 = -56614502;

    t74 = (x333>(x334/(x335^x336)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x338 = 3674908LL;
	int16_t x339 = -1;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t75 = 0;

    t75 = (x337>(x338/(x339^x340)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x341 = 483658104312LL;
	int8_t x343 = 33;
	volatile uint16_t x344 = 10073U;
	static volatile int32_t t76 = -1033074346;

    t76 = (x341>(x342/(x343^x344)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x345 = 1831LLU;
	int16_t x346 = -1;
	static int32_t x347 = INT32_MIN;
	uint64_t x348 = UINT64_MAX;
	static volatile int32_t t77 = -656;

    t77 = (x345>(x346/(x347^x348)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x352 = INT32_MAX;
	volatile int32_t t78 = -337;

    t78 = (x349>(x350/(x351^x352)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x353 = -159;
	int32_t x354 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	volatile int32_t t79 = 15701;

    t79 = (x353>(x354/(x355^x356)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x357 = 3556734U;
	int64_t x359 = INT64_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t80 = 489;

    t80 = (x357>(x358/(x359^x360)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x361 = UINT32_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;

    t81 = (x361>(x362/(x363^x364)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x365 = INT32_MIN;
	static uint8_t x367 = 14U;
	static uint32_t x368 = 174U;
	int32_t t82 = 1;

    t82 = (x365>(x366/(x367^x368)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x369 = 10941U;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t83 = 1483;

    t83 = (x369>(x370/(x371^x372)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x377 = 19;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = 61345689LL;
	static int32_t t84 = -6928670;

    t84 = (x377>(x378/(x379^x380)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int16_t x383 = -189;
	int8_t x384 = 0;
	int32_t t85 = -255;

    t85 = (x381>(x382/(x383^x384)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x385 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	volatile int32_t t86 = 113743;

    t86 = (x385>(x386/(x387^x388)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int32_t x392 = INT32_MIN;

    t87 = (x389>(x390/(x391^x392)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = -1;
	int8_t x394 = -2;
	volatile uint32_t x395 = 6364786U;
	static int16_t x396 = 8811;
	int32_t t88 = -1634313;

    t88 = (x393>(x394/(x395^x396)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = -1;
	int16_t x398 = 15;
	int64_t x399 = INT64_MIN;
	int8_t x400 = -1;
	volatile int32_t t89 = 1;

    t89 = (x397>(x398/(x399^x400)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MAX;
	static int32_t x404 = 7;
	int32_t t90 = 119;

    t90 = (x401>(x402/(x403^x404)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x405 = 250510LLU;
	int8_t x406 = INT8_MAX;
	static int8_t x407 = INT8_MAX;
	uint32_t x408 = 6U;
	volatile int32_t t91 = -12776702;

    t91 = (x405>(x406/(x407^x408)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x409 = INT8_MAX;
	static int8_t x410 = INT8_MIN;
	uint64_t x412 = 5473546869LLU;
	int32_t t92 = 10275;

    t92 = (x409>(x410/(x411^x412)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x413 = -63008;
	int8_t x414 = -1;
	static volatile int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t93 = 5891;

    t93 = (x413>(x414/(x415^x416)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x419 = 3U;
	static volatile int64_t x420 = INT64_MIN;
	int32_t t94 = -20971537;

    t94 = (x417>(x418/(x419^x420)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x421 = -1;
	uint64_t x422 = UINT64_MAX;
	uint64_t x423 = UINT64_MAX;
	static uint64_t x424 = 2012524LLU;
	volatile int32_t t95 = -23;

    t95 = (x421>(x422/(x423^x424)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x425 = -1;
	static volatile int64_t x426 = INT64_MIN;
	uint64_t x428 = 50976877286116LLU;
	volatile int32_t t96 = 461222;

    t96 = (x425>(x426/(x427^x428)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x429 = UINT32_MAX;
	static volatile int64_t x430 = INT64_MAX;
	int64_t x431 = -1LL;
	static int32_t t97 = -222348615;

    t97 = (x429>(x430/(x431^x432)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x433 = 920305156717091LLU;
	int32_t x434 = -1;
	int32_t t98 = -35023719;

    t98 = (x433>(x434/(x435^x436)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = 4;
	uint16_t x438 = 3U;
	volatile int32_t x439 = -1;
	uint16_t x440 = UINT16_MAX;
	int32_t t99 = 1;

    t99 = (x437>(x438/(x439^x440)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x441 = INT32_MAX;
	int64_t x443 = -1LL;
	volatile int32_t x444 = INT32_MIN;
	static volatile int32_t t100 = -4841672;

    t100 = (x441>(x442/(x443^x444)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = 1;
	int64_t x446 = INT64_MIN;
	volatile int8_t x447 = -2;
	int32_t x448 = 189620;
	int32_t t101 = -209570522;

    t101 = (x445>(x446/(x447^x448)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x449 = 103628803LL;
	uint8_t x450 = UINT8_MAX;
	static int16_t x451 = INT16_MIN;
	int32_t x452 = -1;
	volatile int32_t t102 = 1456006;

    t102 = (x449>(x450/(x451^x452)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x459 = 1177810336786553LL;
	static int32_t t103 = 48;

    t103 = (x457>(x458/(x459^x460)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x461 = -1LL;
	volatile int16_t x462 = INT16_MIN;
	int8_t x464 = INT8_MAX;
	int32_t t104 = -24922;

    t104 = (x461>(x462/(x463^x464)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x465 = -1;
	static int8_t x466 = INT8_MIN;
	int32_t t105 = 56905;

    t105 = (x465>(x466/(x467^x468)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x471 = 4721238578LLU;
	int8_t x472 = 30;
	volatile int32_t t106 = -7932718;

    t106 = (x469>(x470/(x471^x472)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MIN;
	int32_t x474 = -1;
	uint16_t x475 = 200U;
	volatile uint64_t x476 = UINT64_MAX;
	volatile int32_t t107 = -689836;

    t107 = (x473>(x474/(x475^x476)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x477 = 7436U;
	static volatile int8_t x478 = INT8_MIN;
	uint64_t x479 = 1LLU;
	volatile int8_t x480 = -7;
	volatile int32_t t108 = 47769;

    t108 = (x477>(x478/(x479^x480)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x481 = 0LL;
	int32_t x482 = -1;
	int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MIN;
	int32_t t109 = 498812516;

    t109 = (x481>(x482/(x483^x484)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x487 = INT32_MAX;
	int64_t x488 = 10118122766276LL;
	static int32_t t110 = 231330;

    t110 = (x485>(x486/(x487^x488)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x490 = UINT16_MAX;
	int32_t x491 = INT32_MAX;
	int8_t x492 = INT8_MIN;
	int32_t t111 = 53753;

    t111 = (x489>(x490/(x491^x492)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x493 = INT64_MAX;
	int32_t x495 = -1;
	volatile uint64_t x496 = 7LLU;
	int32_t t112 = -91881439;

    t112 = (x493>(x494/(x495^x496)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t t113 = -14299;

    t113 = (x497>(x498/(x499^x500)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x501 = UINT64_MAX;
	static int32_t x503 = INT32_MIN;
	uint64_t x504 = 992768037041017LLU;
	static volatile int32_t t114 = 60499;

    t114 = (x501>(x502/(x503^x504)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x505 = -77LL;
	int64_t x506 = INT64_MIN;
	int16_t x507 = -1;
	static uint64_t x508 = 3878209996469300655LLU;
	static int32_t t115 = -460509633;

    t115 = (x505>(x506/(x507^x508)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x509 = UINT16_MAX;
	uint16_t x510 = 1750U;
	volatile uint32_t x511 = UINT32_MAX;
	static volatile uint16_t x512 = 745U;
	int32_t t116 = 736808856;

    t116 = (x509>(x510/(x511^x512)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x513 = 46U;
	uint32_t x514 = 4U;
	uint16_t x515 = 21U;
	static int16_t x516 = INT16_MAX;
	static volatile int32_t t117 = -211496788;

    t117 = (x513>(x514/(x515^x516)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x517 = -1;
	static int64_t x520 = -1LL;
	int32_t t118 = 7259341;

    t118 = (x517>(x518/(x519^x520)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x521 = 1;
	static int16_t x522 = INT16_MAX;
	static int32_t x524 = -2761;
	int32_t t119 = -1321;

    t119 = (x521>(x522/(x523^x524)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x525 = 203120U;
	uint64_t x526 = UINT64_MAX;
	int16_t x527 = 13401;

    t120 = (x525>(x526/(x527^x528)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x529 = 8U;
	volatile uint8_t x530 = 13U;
	uint16_t x531 = 51U;
	static int32_t x532 = INT32_MAX;
	int32_t t121 = 1801;

    t121 = (x529>(x530/(x531^x532)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x533 = INT64_MAX;
	int64_t x534 = -1LL;
	int32_t x535 = INT32_MAX;
	static uint8_t x536 = UINT8_MAX;

    t122 = (x533>(x534/(x535^x536)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x538 = INT16_MIN;
	int64_t x540 = INT64_MIN;
	static int32_t t123 = 15;

    t123 = (x537>(x538/(x539^x540)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x541 = -1;
	uint16_t x542 = 207U;
	int32_t x543 = INT32_MAX;
	int16_t x544 = -4;
	int32_t t124 = -1906;

    t124 = (x541>(x542/(x543^x544)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x545 = 28420251U;
	volatile int16_t x546 = 4552;
	uint16_t x547 = 103U;
	uint64_t x548 = UINT64_MAX;
	int32_t t125 = -31861;

    t125 = (x545>(x546/(x547^x548)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x549 = 6U;
	int32_t x550 = -30;
	uint32_t x551 = 28549U;
	volatile int32_t t126 = -305;

    t126 = (x549>(x550/(x551^x552)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x558 = 0;
	uint32_t x559 = 512919U;
	int32_t t127 = -149;

    t127 = (x557>(x558/(x559^x560)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x563 = INT8_MIN;
	int64_t x564 = -1LL;

    t128 = (x561>(x562/(x563^x564)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x565 = 42928;
	static int8_t x566 = INT8_MIN;
	volatile uint16_t x568 = 8U;
	int32_t t129 = 604;

    t129 = (x565>(x566/(x567^x568)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x570 = UINT8_MAX;
	uint64_t x571 = 161559838LLU;
	static volatile int32_t t130 = -209;

    t130 = (x569>(x570/(x571^x572)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = -6733214LL;
	uint32_t x574 = 1U;
	volatile int32_t t131 = 565823927;

    t131 = (x573>(x574/(x575^x576)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x577 = -545;
	static volatile int16_t x579 = -1;
	int32_t x580 = INT32_MIN;
	volatile int32_t t132 = -28386;

    t132 = (x577>(x578/(x579^x580)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x581 = 0;
	uint8_t x582 = UINT8_MAX;
	uint8_t x583 = 20U;
	static uint64_t x584 = 3982LLU;
	volatile int32_t t133 = 22651;

    t133 = (x581>(x582/(x583^x584)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x586 = -1;
	static uint8_t x587 = 15U;
	static int16_t x588 = INT16_MIN;
	int32_t t134 = 6;

    t134 = (x585>(x586/(x587^x588)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x589 = UINT8_MAX;
	int16_t x590 = -1;
	uint8_t x591 = 5U;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t135 = -3;

    t135 = (x589>(x590/(x591^x592)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x593 = INT32_MIN;
	volatile int32_t x594 = -1;
	static uint32_t x595 = 1007891581U;
	static uint32_t x596 = UINT32_MAX;
	int32_t t136 = 42;

    t136 = (x593>(x594/(x595^x596)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x598 = 12287;
	volatile int64_t x599 = INT64_MAX;
	int8_t x600 = INT8_MAX;
	int32_t t137 = 1065;

    t137 = (x597>(x598/(x599^x600)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x601 = UINT8_MAX;
	int32_t x602 = INT32_MIN;
	uint8_t x603 = 3U;
	static volatile int32_t x604 = -214;

    t138 = (x601>(x602/(x603^x604)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x605 = INT64_MIN;
	int8_t x606 = -1;
	int64_t x607 = 6977LL;
	int32_t t139 = 36;

    t139 = (x605>(x606/(x607^x608)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x609 = INT64_MIN;
	uint32_t x611 = 6527U;
	int16_t x612 = -6;
	int32_t t140 = 4971980;

    t140 = (x609>(x610/(x611^x612)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	uint16_t x614 = UINT16_MAX;
	int8_t x615 = INT8_MIN;
	int32_t x616 = -1;
	volatile int32_t t141 = -785390877;

    t141 = (x613>(x614/(x615^x616)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x617 = -1;
	int16_t x618 = 1;
	int32_t x619 = INT32_MIN;
	int16_t x620 = INT16_MIN;
	int32_t t142 = -227526;

    t142 = (x617>(x618/(x619^x620)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x621 = INT32_MAX;
	static int16_t x623 = -3;
	static volatile int32_t x624 = INT32_MAX;
	int32_t t143 = -1009396237;

    t143 = (x621>(x622/(x623^x624)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x626 = 2069643755U;
	int64_t x627 = -9LL;
	int64_t x628 = INT64_MIN;
	int32_t t144 = 12;

    t144 = (x625>(x626/(x627^x628)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x629 = INT32_MIN;
	uint16_t x630 = UINT16_MAX;
	static uint32_t x631 = UINT32_MAX;
	int16_t x632 = 728;
	static volatile int32_t t145 = 226795653;

    t145 = (x629>(x630/(x631^x632)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x633 = INT16_MAX;
	static volatile uint64_t x635 = 913912LLU;

    t146 = (x633>(x634/(x635^x636)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x637 = 1069719800U;
	int64_t x638 = 659379005748LL;
	volatile int16_t x640 = INT16_MAX;
	volatile int32_t t147 = 12;

    t147 = (x637>(x638/(x639^x640)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x641 = -1;
	uint8_t x642 = UINT8_MAX;
	int8_t x643 = INT8_MIN;
	int32_t x644 = INT32_MIN;
	volatile int32_t t148 = 1038518;

    t148 = (x641>(x642/(x643^x644)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x645 = UINT32_MAX;
	uint16_t x647 = UINT16_MAX;
	int32_t x648 = INT32_MIN;
	int32_t t149 = 29985;

    t149 = (x645>(x646/(x647^x648)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x650 = INT64_MAX;
	static int16_t x652 = INT16_MAX;
	int32_t t150 = 1;

    t150 = (x649>(x650/(x651^x652)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x654 = INT32_MIN;
	int8_t x655 = 34;
	volatile int16_t x656 = -7;
	volatile int32_t t151 = -225468039;

    t151 = (x653>(x654/(x655^x656)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x657 = INT8_MIN;
	uint32_t x658 = UINT32_MAX;
	int16_t x660 = -5706;
	int32_t t152 = 1;

    t152 = (x657>(x658/(x659^x660)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x662 = -2;
	static int8_t x663 = INT8_MAX;
	volatile int8_t x664 = 27;

    t153 = (x661>(x662/(x663^x664)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x667 = 6U;
	static int8_t x668 = -51;
	int32_t t154 = 356193;

    t154 = (x665>(x666/(x667^x668)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x669 = INT32_MAX;
	uint64_t x670 = 2LLU;
	volatile int16_t x671 = INT16_MIN;
	uint32_t x672 = UINT32_MAX;

    t155 = (x669>(x670/(x671^x672)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x677 = 10505481160952216LLU;
	uint8_t x678 = UINT8_MAX;
	static int32_t x680 = INT32_MAX;
	int32_t t156 = 862490020;

    t156 = (x677>(x678/(x679^x680)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x681 = INT32_MIN;
	uint16_t x682 = 7U;
	static volatile uint16_t x683 = 0U;
	volatile int64_t x684 = -1LL;
	int32_t t157 = 93821;

    t157 = (x681>(x682/(x683^x684)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x686 = 35;
	int32_t x687 = 133426065;
	int8_t x688 = INT8_MIN;

    t158 = (x685>(x686/(x687^x688)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x689 = -4366803075029165929LL;
	int16_t x690 = INT16_MIN;
	int16_t x692 = 6727;
	volatile int32_t t159 = 1437;

    t159 = (x689>(x690/(x691^x692)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x693 = 1;
	int64_t x694 = -189771081267LL;
	volatile uint64_t x695 = 2819943755LLU;
	volatile int16_t x696 = INT16_MAX;
	int32_t t160 = 0;

    t160 = (x693>(x694/(x695^x696)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x697 = 182U;
	uint8_t x699 = 5U;
	int32_t t161 = -4481;

    t161 = (x697>(x698/(x699^x700)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x701 = 1;
	static uint8_t x702 = 54U;
	uint32_t x703 = 5U;

    t162 = (x701>(x702/(x703^x704)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x706 = UINT8_MAX;
	int16_t x707 = 15309;
	static uint8_t x708 = 30U;
	int32_t t163 = -1;

    t163 = (x705>(x706/(x707^x708)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x709 = 10;
	static volatile uint16_t x710 = UINT16_MAX;
	int8_t x711 = INT8_MIN;
	volatile uint16_t x712 = 32525U;
	volatile int32_t t164 = -121559;

    t164 = (x709>(x710/(x711^x712)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x714 = 0U;
	static int64_t x715 = INT64_MAX;
	int32_t x716 = INT32_MIN;
	volatile int32_t t165 = 11;

    t165 = (x713>(x714/(x715^x716)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	uint16_t x718 = 153U;
	int64_t x719 = INT64_MIN;
	uint32_t x720 = 4739U;

    t166 = (x717>(x718/(x719^x720)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x721 = -1;
	volatile uint16_t x722 = 27U;
	static int8_t x723 = INT8_MIN;
	static int16_t x724 = 10;
	static int32_t t167 = 2;

    t167 = (x721>(x722/(x723^x724)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x725 = INT64_MIN;
	int16_t x726 = -1;
	int16_t x727 = INT16_MAX;

    t168 = (x725>(x726/(x727^x728)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x729 = -19;
	int64_t x730 = INT64_MIN;
	volatile int16_t x731 = INT16_MAX;
	volatile int32_t t169 = -155238274;

    t169 = (x729>(x730/(x731^x732)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x733 = UINT64_MAX;
	int64_t x735 = -567728860LL;
	int32_t x736 = INT32_MIN;
	static int32_t t170 = 191016;

    t170 = (x733>(x734/(x735^x736)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x737 = INT8_MIN;
	int64_t x738 = INT64_MIN;
	int32_t x739 = INT32_MAX;
	volatile uint64_t x740 = 3693288659717LLU;
	int32_t t171 = 78183587;

    t171 = (x737>(x738/(x739^x740)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x741 = 4LLU;
	int16_t x742 = -7002;
	int32_t t172 = 141;

    t172 = (x741>(x742/(x743^x744)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MIN;
	static int64_t x751 = INT64_MAX;
	int32_t x752 = -1;
	int32_t t173 = 201;

    t173 = (x749>(x750/(x751^x752)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x753 = -917;
	int32_t x755 = 12;
	int8_t x756 = -1;
	volatile int32_t t174 = -43978;

    t174 = (x753>(x754/(x755^x756)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = 2007;
	static uint8_t x759 = 14U;
	volatile int64_t x760 = INT64_MAX;
	volatile int32_t t175 = -151;

    t175 = (x757>(x758/(x759^x760)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x761 = UINT64_MAX;
	uint64_t x762 = 111142463LLU;
	uint64_t x763 = 74304054722884876LLU;
	static volatile int64_t x764 = -114437601893LL;

    t176 = (x761>(x762/(x763^x764)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x766 = -1;
	int16_t x767 = INT16_MIN;
	static int64_t x768 = -15256348LL;
	volatile int32_t t177 = -16033;

    t177 = (x765>(x766/(x767^x768)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x769 = -1;
	uint16_t x771 = UINT16_MAX;
	static int64_t x772 = -1LL;
	volatile int32_t t178 = -12888748;

    t178 = (x769>(x770/(x771^x772)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x774 = UINT8_MAX;
	static int8_t x775 = INT8_MIN;
	volatile int32_t t179 = -2647;

    t179 = (x773>(x774/(x775^x776)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x777 = 17122245LLU;
	volatile int32_t x778 = 1156822;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t180 = 12086905;

    t180 = (x777>(x778/(x779^x780)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x781 = UINT16_MAX;
	static volatile uint64_t x782 = 413310179837LLU;
	uint32_t x783 = 8U;
	int16_t x784 = 6631;
	volatile int32_t t181 = -854545363;

    t181 = (x781>(x782/(x783^x784)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x785 = INT64_MIN;
	volatile int8_t x786 = INT8_MIN;
	int32_t x787 = -1;
	volatile int16_t x788 = INT16_MIN;
	int32_t t182 = 0;

    t182 = (x785>(x786/(x787^x788)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x789 = INT64_MAX;
	uint16_t x790 = 25U;
	int64_t x791 = -1LL;
	volatile int32_t x792 = 1618120;
	int32_t t183 = -70075;

    t183 = (x789>(x790/(x791^x792)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x795 = 0;
	uint32_t x796 = 809073U;
	int32_t t184 = 6819;

    t184 = (x793>(x794/(x795^x796)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x797 = -1;
	int32_t x798 = -2;
	volatile int32_t t185 = -1051834733;

    t185 = (x797>(x798/(x799^x800)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x801 = INT32_MAX;
	int64_t x802 = INT64_MIN;
	volatile int16_t x803 = -153;
	int8_t x804 = 1;

    t186 = (x801>(x802/(x803^x804)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x809 = INT64_MIN;
	int32_t x812 = INT32_MAX;
	int32_t t187 = 1468;

    t187 = (x809>(x810/(x811^x812)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x815 = INT8_MIN;
	static int64_t x816 = INT64_MIN;
	int32_t t188 = 0;

    t188 = (x813>(x814/(x815^x816)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x822 = -1;
	static int8_t x823 = INT8_MIN;
	int64_t x824 = -1LL;
	volatile int32_t t189 = 252059646;

    t189 = (x821>(x822/(x823^x824)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x825 = -1;
	volatile uint16_t x826 = 1485U;
	uint16_t x827 = UINT16_MAX;
	int64_t x828 = INT64_MIN;
	static volatile int32_t t190 = -67;

    t190 = (x825>(x826/(x827^x828)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x830 = 229U;
	int64_t x832 = INT64_MIN;

    t191 = (x829>(x830/(x831^x832)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x833 = -1;
	int64_t x834 = INT64_MAX;
	uint32_t x835 = 20U;
	int16_t x836 = INT16_MIN;
	int32_t t192 = 2;

    t192 = (x833>(x834/(x835^x836)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x837 = INT8_MIN;
	volatile uint16_t x838 = 1U;
	uint8_t x839 = 0U;
	int8_t x840 = -4;
	int32_t t193 = 37;

    t193 = (x837>(x838/(x839^x840)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x849 = 61218731198LL;
	uint16_t x850 = UINT16_MAX;
	static uint64_t x851 = 3LLU;
	int32_t t194 = -431740486;

    t194 = (x849>(x850/(x851^x852)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x853 = -1;
	static volatile uint32_t x855 = 431708122U;
	static int64_t x856 = INT64_MIN;

    t195 = (x853>(x854/(x855^x856)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x857 = 11154U;
	int64_t x858 = INT64_MAX;
	uint64_t x859 = 628LLU;
	uint16_t x860 = UINT16_MAX;
	int32_t t196 = 1;

    t196 = (x857>(x858/(x859^x860)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x861 = 984;
	int8_t x862 = INT8_MAX;
	uint64_t x864 = 37049299755451LLU;
	int32_t t197 = 105963172;

    t197 = (x861>(x862/(x863^x864)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x865 = INT64_MAX;
	int32_t x866 = INT32_MIN;
	int64_t x867 = -1900LL;
	volatile int32_t t198 = 79619;

    t198 = (x865>(x866/(x867^x868)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x869 = 1046U;
	int8_t x870 = INT8_MIN;
	int16_t x871 = -1;
	uint64_t x872 = 221LLU;
	int32_t t199 = -535;

    t199 = (x869>(x870/(x871^x872)));

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

