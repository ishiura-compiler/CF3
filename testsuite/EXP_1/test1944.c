
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

int16_t x3 = INT16_MAX;
int8_t x4 = 0;
uint8_t x5 = 4U;
uint64_t x14 = 1196606LLU;
int64_t t3 = -107LL;
int32_t x23 = 39;
uint64_t t6 = 257275LLU;
int16_t x32 = INT16_MIN;
uint16_t x34 = 15887U;
int16_t x37 = INT16_MAX;
static volatile uint8_t x40 = UINT8_MAX;
int64_t x41 = INT64_MIN;
int8_t x45 = INT8_MIN;
uint64_t x57 = UINT64_MAX;
int32_t x59 = INT32_MAX;
int16_t x65 = INT16_MIN;
volatile uint64_t x72 = UINT64_MAX;
volatile uint64_t t17 = 13LLU;
uint16_t x78 = 0U;
static int8_t x79 = INT8_MIN;
int64_t t21 = 754988099548594567LL;
int32_t x89 = INT32_MAX;
int64_t x91 = INT64_MAX;
volatile int64_t t22 = INT64_MAX;
int8_t x97 = -1;
int32_t t25 = -54434151;
volatile uint64_t x105 = 16946388474LLU;
int32_t x110 = -22;
int16_t x113 = INT16_MIN;
int32_t x128 = 23197;
int8_t x132 = 0;
volatile int64_t x136 = -1LL;
volatile int32_t x139 = INT32_MIN;
volatile uint32_t x140 = 37U;
static volatile uint32_t t34 = 407129552U;
static int64_t x145 = INT64_MIN;
static uint32_t t37 = 12642593U;
int32_t x153 = 382874;
static volatile int32_t t39 = 0;
int8_t x167 = 2;
int32_t x171 = INT32_MIN;
volatile int32_t t42 = INT32_MIN;
int8_t x184 = INT8_MIN;
uint32_t x190 = UINT32_MAX;
volatile int32_t x195 = -1;
static int8_t x202 = INT8_MAX;
static uint8_t x213 = 2U;
uint64_t x215 = 372878LLU;
static int16_t x216 = INT16_MIN;
int64_t x217 = INT64_MAX;
static volatile int64_t x219 = 3774276785765819LL;
static int32_t x228 = INT32_MAX;
static int32_t t56 = 0;
volatile int32_t x231 = INT32_MIN;
int8_t x240 = 4;
static int64_t x255 = INT64_MIN;
static volatile int64_t t63 = -6133268LL;
int64_t x265 = -6166037190436961LL;
volatile int64_t t66 = -5895154LL;
uint8_t x277 = UINT8_MAX;
int32_t x279 = INT32_MIN;
static uint8_t x280 = UINT8_MAX;
int32_t x284 = -896905;
int32_t t70 = 238502;
static volatile int64_t x285 = INT64_MIN;
static volatile int64_t t71 = -1187591LL;
int32_t x292 = INT32_MIN;
static int32_t t73 = -1;
int64_t x300 = -1LL;
volatile uint64_t t75 = 1035433967336LLU;
int32_t x305 = -8160;
int8_t x309 = -1;
int16_t x310 = 15;
static int8_t x311 = 7;
int32_t t77 = 0;
volatile int8_t x315 = -1;
int64_t t78 = INT64_MAX;
int8_t x321 = INT8_MAX;
volatile uint16_t x327 = 7987U;
volatile uint8_t x328 = UINT8_MAX;
static uint64_t x332 = 4218LLU;
static int64_t t85 = 359953996LL;
volatile int16_t x346 = 173;
uint16_t x349 = UINT16_MAX;
volatile int8_t x357 = -45;
uint16_t x358 = UINT16_MAX;
static volatile int32_t x362 = -14501272;
volatile int32_t t90 = -1378;
volatile int64_t t91 = -11690893389LL;
volatile int16_t x370 = 15;
static int16_t x372 = -1;
int32_t x374 = 4;
static uint32_t x375 = UINT32_MAX;
int8_t x376 = -1;
volatile int32_t t94 = -82928311;
int16_t x381 = INT16_MIN;
int16_t x384 = INT16_MAX;
volatile uint64_t x391 = 81631937LLU;
uint64_t x403 = UINT64_MAX;
uint16_t x404 = 1U;
uint64_t x407 = 5538402267899880680LLU;
int64_t x408 = INT64_MAX;
volatile uint8_t x409 = 4U;
uint64_t x410 = 408LLU;
volatile int8_t x411 = 13;
int32_t x418 = INT32_MIN;
volatile uint16_t x430 = 55U;
uint32_t x444 = UINT32_MAX;
int64_t x449 = INT64_MAX;
uint32_t x451 = 11U;
volatile int8_t x453 = 1;
static volatile int32_t t113 = 2;
static int16_t x461 = -5;
static uint32_t x462 = 186U;
uint64_t x468 = UINT64_MAX;
int32_t x470 = INT32_MAX;
int8_t x471 = -1;
int64_t x476 = INT64_MIN;
volatile int64_t t118 = 1LL;
uint64_t x492 = 4248953LLU;
int64_t x497 = INT64_MAX;
uint16_t x498 = UINT16_MAX;
int32_t x503 = -1;
volatile int32_t t125 = -1;
int64_t x511 = 226416648800448LL;
uint64_t x512 = 28654494LLU;
int64_t x521 = INT64_MAX;
int32_t t131 = 178;
static int16_t x532 = -1;
int64_t t132 = 27LL;
static volatile uint64_t x547 = 4436283LLU;
uint32_t x558 = UINT32_MAX;
int8_t x562 = -3;
int8_t x564 = INT8_MAX;
uint16_t x570 = 120U;
int32_t x573 = INT32_MIN;
int8_t x578 = INT8_MIN;
volatile uint8_t x580 = 38U;
volatile int32_t t146 = -7;
int16_t x589 = 26;
volatile uint16_t x598 = 31201U;
static int16_t x599 = INT16_MIN;
int16_t x600 = INT16_MAX;
static uint16_t x603 = UINT16_MAX;
uint8_t x607 = 6U;
int32_t t153 = 22216962;
uint16_t x622 = 36U;
volatile int32_t t156 = INT32_MIN;
volatile uint64_t x633 = 66LLU;
volatile int16_t x643 = INT16_MIN;
static int16_t x648 = -132;
int16_t x652 = -1;
int8_t x655 = 5;
static uint16_t x659 = UINT16_MAX;
int8_t x663 = INT8_MIN;
volatile int32_t t165 = -1050867909;
static int8_t x665 = 4;
uint64_t x672 = 43958495LLU;
static int64_t x675 = 2LL;
int32_t t169 = -3421;
int64_t x681 = INT64_MAX;
static uint8_t x682 = UINT8_MAX;
uint16_t x687 = 13U;
uint32_t x689 = 23125U;
static uint64_t x690 = 10495LLU;
int64_t x692 = INT64_MAX;
static int8_t x695 = -1;
static uint64_t x696 = UINT64_MAX;
uint64_t t173 = UINT64_MAX;
int16_t x699 = INT16_MAX;
int32_t t174 = 626;
int32_t t175 = 221029056;
int32_t x705 = -1907612;
static volatile int32_t t176 = INT32_MIN;
int32_t x711 = INT32_MAX;
static int64_t x717 = 672919405757579520LL;
uint64_t x721 = UINT64_MAX;
int16_t x728 = 9780;
int32_t x733 = INT32_MIN;
static int32_t x734 = INT32_MIN;
volatile uint32_t t184 = 350U;
int16_t x752 = -10;
int8_t x753 = INT8_MIN;
int32_t x756 = -1;
uint8_t x764 = 27U;
uint8_t x765 = 3U;
static volatile int32_t t192 = 0;
volatile uint32_t x773 = 5U;
int64_t x775 = -1LL;
static int8_t x784 = -1;
int32_t t195 = 28925;
int64_t t196 = 7490131LL;
int64_t x791 = -34371LL;
int16_t x793 = 57;
uint32_t x794 = UINT32_MAX;
uint32_t x796 = 213U;
static int16_t x797 = 1089;


void f0(void) {
    	int8_t x1 = -1;
	int16_t x2 = -1;
	static volatile int32_t t0 = -6145;

    t0 = (((x1<=x2)|x3)&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	uint32_t x7 = 110140747U;
	int8_t x8 = 1;
	volatile uint32_t t1 = 67U;

    t1 = (((x5<=x6)|x7)&x8);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint16_t x10 = 1781U;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = 2177626LL;

    t2 = (((x9<=x10)|x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	static int16_t x15 = INT16_MIN;
	volatile int64_t x16 = -525LL;

    t3 = (((x13<=x14)|x15)&x16);

    if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = -7;
	volatile uint64_t x18 = 58493LLU;
	uint16_t x19 = 7U;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -100145;

    t4 = (((x17<=x18)|x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 2;
	static int64_t x22 = INT64_MIN;
	volatile int64_t x24 = -1LL;
	volatile int64_t t5 = -196LL;

    t5 = (((x21<=x22)|x23)&x24);

    if (t5 != 39LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	int64_t x26 = -1LL;
	static uint64_t x27 = 618612929723471354LLU;
	int32_t x28 = 245035;

    t6 = (((x25<=x26)|x27)&x28);

    if (t6 != 103722LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 7317634216900689LLU;
	uint64_t x30 = UINT64_MAX;
	volatile int64_t x31 = INT64_MIN;
	int64_t t7 = INT64_MIN;

    t7 = (((x29<=x30)|x31)&x32);

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	static int32_t x36 = 1;
	static volatile int32_t t8 = 13439;

    t8 = (((x33<=x34)|x35)&x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x38 = -1LL;
	volatile int8_t x39 = INT8_MIN;
	int32_t t9 = -1;

    t9 = (((x37<=x38)|x39)&x40);

    if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x42 = 0U;
	uint8_t x43 = 9U;
	int64_t x44 = INT64_MIN;
	static int64_t t10 = -13473276712LL;

    t10 = (((x41<=x42)|x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	int8_t x47 = -2;
	uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 45584LLU;

    t11 = (((x45<=x46)|x47)&x48);

    if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	static volatile int16_t x50 = -191;
	static volatile int16_t x51 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -859681;

    t12 = (((x49<=x50)|x51)&x52);

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 0U;
	static int16_t x54 = INT16_MIN;
	uint8_t x55 = 5U;
	volatile int8_t x56 = INT8_MIN;
	static int32_t t13 = -79793;

    t13 = (((x53<=x54)|x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	uint32_t x60 = 13U;
	uint32_t t14 = 56364916U;

    t14 = (((x57<=x58)|x59)&x60);

    if (t14 != 13U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	volatile int8_t x62 = -1;
	int64_t x63 = INT64_MAX;
	volatile int16_t x64 = -1;
	int64_t t15 = INT64_MAX;

    t15 = (((x61<=x62)|x63)&x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MAX;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -121;

    t16 = (((x65<=x66)|x67)&x68);

    if (t16 != 32640) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint64_t x70 = 358703348244930LLU;
	volatile int8_t x71 = INT8_MIN;

    t17 = (((x69<=x70)|x71)&x72);

    if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 20U;
	int8_t x74 = INT8_MAX;
	uint8_t x75 = UINT8_MAX;
	volatile int32_t x76 = 0;
	int32_t t18 = 23;

    t18 = (((x73<=x74)|x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	uint32_t x80 = 5091618U;
	volatile uint32_t t19 = 376167199U;

    t19 = (((x77<=x78)|x79)&x80);

    if (t19 != 5091584U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MAX;
	int32_t x83 = INT32_MIN;
	static int8_t x84 = INT8_MIN;
	int32_t t20 = INT32_MIN;

    t20 = (((x81<=x82)|x83)&x84);

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = INT32_MIN;
	static int64_t x87 = -159LL;
	uint8_t x88 = 5U;

    t21 = (((x85<=x86)|x87)&x88);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x90 = INT8_MIN;
	int64_t x92 = INT64_MAX;

    t22 = (((x89<=x90)|x91)&x92);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 4264U;
	int64_t x94 = INT64_MAX;
	volatile int32_t x95 = -32;
	int32_t x96 = -4154407;
	static int32_t t23 = 47260203;

    t23 = (((x93<=x94)|x95)&x96);

    if (t23 != -4154431) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = 1;
	uint8_t x99 = 3U;
	int16_t x100 = -1;
	static volatile int32_t t24 = 31239235;

    t24 = (((x97<=x98)|x99)&x100);

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	uint64_t x102 = 1004892686024193LLU;
	uint16_t x103 = 230U;
	uint16_t x104 = 8403U;

    t25 = (((x101<=x102)|x103)&x104);

    if (t25 != 194) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = INT16_MIN;
	int32_t x107 = -448294353;
	int8_t x108 = -24;
	static volatile int32_t t26 = 193134;

    t26 = (((x105<=x106)|x107)&x108);

    if (t26 != -448294360) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int8_t x111 = -2;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = 167909854;

    t27 = (((x109<=x110)|x111)&x112);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = 6U;
	int32_t t28 = 117;

    t28 = (((x113<=x114)|x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 400670820669741LLU;
	uint32_t x118 = 182U;
	int16_t x119 = INT16_MIN;
	static int64_t x120 = 16LL;
	volatile int64_t t29 = 1517536079LL;

    t29 = (((x117<=x118)|x119)&x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 470282246;
	uint16_t x122 = 240U;
	static int8_t x123 = INT8_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -263777923;

    t30 = (((x121<=x122)|x123)&x124);

    if (t30 != 65408) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = -1;
	static int32_t x126 = INT32_MIN;
	static uint8_t x127 = UINT8_MAX;
	volatile int32_t t31 = 30845000;

    t31 = (((x125<=x126)|x127)&x128);

    if (t31 != 157) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x130 = 31;
	int8_t x131 = INT8_MIN;
	int32_t t32 = -358309690;

    t32 = (((x129<=x130)|x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	int16_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t t33 = -1655797889LL;

    t33 = (((x133<=x134)|x135)&x136);

    if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -605;
	int8_t x138 = INT8_MAX;

    t34 = (((x137<=x138)|x139)&x140);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	uint8_t x142 = 6U;
	int32_t x143 = INT32_MAX;
	static int64_t x144 = 136326969334719LL;
	volatile int64_t t35 = 1978LL;

    t35 = (((x141<=x142)|x143)&x144);

    if (t35 != 412392383LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = UINT16_MAX;
	int8_t x147 = -28;
	volatile int16_t x148 = -1;
	int32_t t36 = 447059;

    t36 = (((x145<=x146)|x147)&x148);

    if (t36 != -27) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	uint64_t x150 = 122232290LLU;
	uint8_t x151 = UINT8_MAX;
	uint32_t x152 = UINT32_MAX;

    t37 = (((x149<=x150)|x151)&x152);

    if (t37 != 255U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x154 = UINT32_MAX;
	volatile int8_t x155 = -1;
	uint64_t x156 = 580LLU;
	static volatile uint64_t t38 = 2152163742LLU;

    t38 = (((x153<=x154)|x155)&x156);

    if (t38 != 580LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	uint32_t x158 = 5162234U;
	int32_t x159 = INT32_MAX;
	int32_t x160 = 78508090;

    t39 = (((x157<=x158)|x159)&x160);

    if (t39 != 78508090) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = 82;
	uint8_t x162 = 2U;
	uint32_t x163 = UINT32_MAX;
	static int16_t x164 = 1;
	volatile uint32_t t40 = 224065659U;

    t40 = (((x161<=x162)|x163)&x164);

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 791689050095912LL;
	volatile int16_t x166 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 418;

    t41 = (((x165<=x166)|x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	uint8_t x170 = 0U;
	int32_t x172 = INT32_MIN;

    t42 = (((x169<=x170)|x171)&x172);

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x173 = -18;
	volatile int8_t x174 = -1;
	uint16_t x175 = 5U;
	int8_t x176 = -39;
	static int32_t t43 = 511;

    t43 = (((x173<=x174)|x175)&x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	volatile int64_t x178 = INT64_MIN;
	volatile int16_t x179 = INT16_MAX;
	int64_t x180 = 3LL;
	int64_t t44 = 55374903470508LL;

    t44 = (((x177<=x178)|x179)&x180);

    if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	static int64_t x182 = INT64_MIN;
	int16_t x183 = -3;
	volatile int32_t t45 = 6868672;

    t45 = (((x181<=x182)|x183)&x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MAX;
	static int16_t x186 = -1;
	int8_t x187 = -2;
	uint16_t x188 = UINT16_MAX;
	int32_t t46 = -21833649;

    t46 = (((x185<=x186)|x187)&x188);

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	volatile int64_t x191 = INT64_MAX;
	volatile uint8_t x192 = 106U;
	volatile int64_t t47 = 5978186665303LL;

    t47 = (((x189<=x190)|x191)&x192);

    if (t47 != 106LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	static int64_t x196 = -2084191218422LL;
	int64_t t48 = -9510759664648LL;

    t48 = (((x193<=x194)|x195)&x196);

    if (t48 != -2084191218422LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int16_t x198 = -1;
	int64_t x199 = -35024314540300LL;
	static volatile int32_t x200 = -1;
	int64_t t49 = 22LL;

    t49 = (((x197<=x198)|x199)&x200);

    if (t49 != -35024314540299LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	volatile uint16_t x203 = 849U;
	uint16_t x204 = 6U;
	static int32_t t50 = -386;

    t50 = (((x201<=x202)|x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 0U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = -29160884;
	int16_t x208 = INT16_MAX;
	static volatile int32_t t51 = 3612;

    t51 = (((x205<=x206)|x207)&x208);

    if (t51 != 2636) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 0;
	int32_t x210 = -1;
	int32_t x211 = 0;
	static int64_t x212 = 53LL;
	volatile int64_t t52 = -14288856170869388LL;

    t52 = (((x209<=x210)|x211)&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = -144LL;
	uint64_t t53 = 1112LLU;

    t53 = (((x213<=x214)|x215)&x216);

    if (t53 != 360448LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MAX;
	volatile int16_t x220 = -1;
	volatile int64_t t54 = -6411LL;

    t54 = (((x217<=x218)|x219)&x220);

    if (t54 != 3774276785765819LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 24U;
	int16_t x222 = 15251;
	uint64_t x223 = 1828LLU;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t55 = 23468860469297262LLU;

    t55 = (((x221<=x222)|x223)&x224);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MAX;

    t56 = (((x225<=x226)|x227)&x228);

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MAX;
	volatile int32_t x230 = INT32_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t57 = INT32_MIN;

    t57 = (((x229<=x230)|x231)&x232);

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 7722284U;
	int16_t x234 = INT16_MIN;
	uint64_t x235 = 35542565981173350LLU;
	int16_t x236 = INT16_MIN;
	uint64_t t58 = 600910LLU;

    t58 = (((x233<=x234)|x235)&x236);

    if (t58 != 35542565981159424LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int16_t x238 = INT16_MAX;
	volatile int32_t x239 = -50;
	volatile int32_t t59 = 0;

    t59 = (((x237<=x238)|x239)&x240);

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = 2934LL;
	int16_t x242 = -1;
	volatile uint64_t x243 = 192828568385128LLU;
	uint16_t x244 = UINT16_MAX;
	uint64_t t60 = 477895536641LLU;

    t60 = (((x241<=x242)|x243)&x244);

    if (t60 != 13928LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -3;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 2526189691000676LLU;
	int64_t x248 = -1LL;
	uint64_t t61 = 1461033494165931161LLU;

    t61 = (((x245<=x246)|x247)&x248);

    if (t61 != 2526189691000676LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 268046790336935137LL;
	uint32_t x250 = UINT32_MAX;
	static volatile uint64_t x251 = 2526614579LLU;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t62 = 10LLU;

    t62 = (((x249<=x250)|x251)&x252);

    if (t62 != 2526614528LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	volatile uint64_t x254 = UINT64_MAX;
	static int64_t x256 = INT64_MAX;

    t63 = (((x253<=x254)|x255)&x256);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	static volatile int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 109U;
	volatile uint32_t t64 = 7U;

    t64 = (((x257<=x258)|x259)&x260);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	static uint8_t x262 = 52U;
	int32_t x263 = 1910934;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = 724034139010715537LLU;

    t65 = (((x261<=x262)|x263)&x264);

    if (t65 != 1910935LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x266 = 72988517463LLU;
	uint8_t x267 = 4U;
	int64_t x268 = 1LL;

    t66 = (((x265<=x266)|x267)&x268);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	uint8_t x270 = UINT8_MAX;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t67 = 520311LLU;

    t67 = (((x269<=x270)|x271)&x272);

    if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x273 = INT64_MIN;
	static volatile uint64_t x274 = 8581441697243768LLU;
	int16_t x275 = -18;
	int32_t x276 = -1;
	volatile int32_t t68 = 212609121;

    t68 = (((x273<=x274)|x275)&x276);

    if (t68 != -18) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint32_t x278 = UINT32_MAX;
	volatile int32_t t69 = -261932;

    t69 = (((x277<=x278)|x279)&x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -52;
	volatile int64_t x282 = -7407LL;
	int16_t x283 = -1;

    t70 = (((x281<=x282)|x283)&x284);

    if (t70 != -896905) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -1LL;

    t71 = (((x285<=x286)|x287)&x288);

    if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 932LLU;
	int8_t x290 = -35;
	uint16_t x291 = 1U;
	static volatile int32_t t72 = -5230274;

    t72 = (((x289<=x290)|x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x293 = 3475745U;
	static int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	uint16_t x296 = 107U;

    t73 = (((x293<=x294)|x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 1U;
	int16_t x298 = INT16_MIN;
	static int16_t x299 = INT16_MIN;
	int64_t t74 = 5508159LL;

    t74 = (((x297<=x298)|x299)&x300);

    if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 2U;
	static uint8_t x302 = 56U;
	uint64_t x303 = 56595LLU;
	int64_t x304 = INT64_MIN;

    t75 = (((x301<=x302)|x303)&x304);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x306 = -1;
	static int16_t x307 = -1;
	volatile int16_t x308 = INT16_MAX;
	static volatile int32_t t76 = 416;

    t76 = (((x305<=x306)|x307)&x308);

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x312 = INT16_MIN;

    t77 = (((x309<=x310)|x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -12LL;
	int64_t x314 = INT64_MIN;
	static int64_t x316 = INT64_MAX;

    t78 = (((x313<=x314)|x315)&x316);

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = -1;
	int8_t x318 = -7;
	int32_t x319 = -553656230;
	int32_t x320 = INT32_MIN;
	int32_t t79 = INT32_MIN;

    t79 = (((x317<=x318)|x319)&x320);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x322 = UINT64_MAX;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = -53;
	volatile int32_t t80 = 4279185;

    t80 = (((x321<=x322)|x323)&x324);

    if (t80 != 65483) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	int32_t t81 = -239;

    t81 = (((x325<=x326)|x327)&x328);

    if (t81 != 51) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	static volatile int64_t x331 = 257194051695LL;
	uint64_t t82 = 126LLU;

    t82 = (((x329<=x330)|x331)&x332);

    if (t82 != 106LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = 0;
	int64_t x334 = INT64_MIN;
	int64_t x335 = -7446366309426LL;
	static uint32_t x336 = 13U;
	static volatile int64_t t83 = -25802191LL;

    t83 = (((x333<=x334)|x335)&x336);

    if (t83 != 12LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int16_t x338 = 3;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 1981U;
	volatile int32_t t84 = 515674;

    t84 = (((x337<=x338)|x339)&x340);

    if (t84 != 1921) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	volatile int16_t x342 = INT16_MIN;
	int64_t x343 = -11258810606907327LL;
	int64_t x344 = -1LL;

    t85 = (((x341<=x342)|x343)&x344);

    if (t85 != -11258810606907327LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	static volatile int8_t x347 = 0;
	static uint64_t x348 = 841LLU;
	static uint64_t t86 = 7LLU;

    t86 = (((x345<=x346)|x347)&x348);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x350 = 1U;
	int32_t x351 = -1;
	int16_t x352 = -1;
	int32_t t87 = 120835262;

    t87 = (((x349<=x350)|x351)&x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 934U;
	static uint16_t x354 = UINT16_MAX;
	static uint64_t x355 = UINT64_MAX;
	int32_t x356 = -1;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = (((x353<=x354)|x355)&x356);

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x359 = -419218350273LL;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

    t89 = (((x357<=x358)|x359)&x360);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MAX;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;

    t90 = (((x361<=x362)|x363)&x364);

    if (t90 != 2147483520) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -227657723202380459LL;
	uint8_t x366 = 6U;
	int64_t x367 = -1024277LL;
	volatile int16_t x368 = -1;

    t91 = (((x365<=x366)|x367)&x368);

    if (t91 != -1024277LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	int16_t x371 = 0;
	static int32_t t92 = 2406;

    t92 = (((x369<=x370)|x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -85;
	static uint32_t t93 = UINT32_MAX;

    t93 = (((x373<=x374)|x375)&x376);

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	int64_t x378 = 0LL;
	uint16_t x379 = UINT16_MAX;
	static int16_t x380 = INT16_MAX;

    t94 = (((x377<=x378)|x379)&x380);

    if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x382 = 1U;
	int32_t x383 = INT32_MAX;
	int32_t t95 = -392221;

    t95 = (((x381<=x382)|x383)&x384);

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = -1;
	volatile uint16_t x386 = 47U;
	int32_t x387 = INT32_MAX;
	int8_t x388 = INT8_MAX;
	static volatile int32_t t96 = 1928;

    t96 = (((x385<=x386)|x387)&x388);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -47;
	uint8_t x390 = 4U;
	int16_t x392 = INT16_MIN;
	uint64_t t97 = 818LLU;

    t97 = (((x389<=x390)|x391)&x392);

    if (t97 != 81625088LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	static int16_t x394 = INT16_MAX;
	static int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	volatile int64_t t98 = 9967692790320319LL;

    t98 = (((x393<=x394)|x395)&x396);

    if (t98 != -2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 51614589691235LLU;
	int8_t x400 = 4;
	uint64_t t99 = 780945LLU;

    t99 = (((x397<=x398)|x399)&x400);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 6U;
	static int8_t x402 = -10;
	static uint64_t t100 = 7814330085533844LLU;

    t100 = (((x401<=x402)|x403)&x404);

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -2168601546245LL;
	int8_t x406 = INT8_MIN;
	static volatile uint64_t t101 = 1737543959133049028LLU;

    t101 = (((x405<=x406)|x407)&x408);

    if (t101 != 5538402267899880681LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x412 = 3U;
	int32_t t102 = -3;

    t102 = (((x409<=x410)|x411)&x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x413 = 1411501266LLU;
	int64_t x414 = INT64_MAX;
	int32_t x415 = INT32_MIN;
	static int8_t x416 = INT8_MAX;
	static int32_t t103 = -233483;

    t103 = (((x413<=x414)|x415)&x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = -1;
	int32_t x419 = INT32_MAX;
	static uint8_t x420 = 5U;
	volatile int32_t t104 = -27193615;

    t104 = (((x417<=x418)|x419)&x420);

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x422 = 152;
	static uint32_t x423 = UINT32_MAX;
	int64_t x424 = -209373576LL;
	volatile int64_t t105 = -582304527LL;

    t105 = (((x421<=x422)|x423)&x424);

    if (t105 != 4085593720LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	static int16_t x426 = INT16_MIN;
	volatile int64_t x427 = INT64_MAX;
	volatile uint32_t x428 = UINT32_MAX;
	volatile int64_t t106 = 3006LL;

    t106 = (((x425<=x426)|x427)&x428);

    if (t106 != 4294967295LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MAX;
	int16_t x431 = -970;
	volatile int16_t x432 = -1;
	int32_t t107 = 733885;

    t107 = (((x429<=x430)|x431)&x432);

    if (t107 != -970) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x433 = INT8_MIN;
	static uint32_t x434 = 138U;
	int16_t x435 = -38;
	static uint64_t x436 = UINT64_MAX;
	volatile uint64_t t108 = 862497914894766501LLU;

    t108 = (((x433<=x434)|x435)&x436);

    if (t108 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	uint32_t x438 = 459U;
	int64_t x439 = INT64_MIN;
	int8_t x440 = -1;
	volatile int64_t t109 = -1381682LL;

    t109 = (((x437<=x438)|x439)&x440);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = 16272867503LL;
	int64_t x442 = INT64_MIN;
	static int16_t x443 = INT16_MAX;
	static volatile uint32_t t110 = 21296U;

    t110 = (((x441<=x442)|x443)&x444);

    if (t110 != 32767U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MIN;
	int16_t x447 = 247;
	int8_t x448 = 3;
	int32_t t111 = 57475;

    t111 = (((x445<=x446)|x447)&x448);

    if (t111 != 3) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = 1;
	volatile int16_t x452 = -1;
	uint32_t t112 = 259356438U;

    t112 = (((x449<=x450)|x451)&x452);

    if (t112 != 11U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = -1;
	static int8_t x455 = INT8_MAX;
	int16_t x456 = 13228;

    t113 = (((x453<=x454)|x455)&x456);

    if (t113 != 44) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MIN;
	static uint8_t x458 = 2U;
	static uint16_t x459 = 3U;
	uint64_t x460 = 4771062093517LLU;
	uint64_t t114 = 21766527206988LLU;

    t114 = (((x457<=x458)|x459)&x460);

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x463 = 17;
	static uint8_t x464 = 12U;
	static int32_t t115 = -55808750;

    t115 = (((x461<=x462)|x463)&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x465 = INT64_MIN;
	volatile int16_t x466 = -79;
	static int8_t x467 = -1;
	static uint64_t t116 = UINT64_MAX;

    t116 = (((x465<=x466)|x467)&x468);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = -7;
	int16_t x472 = INT16_MIN;
	volatile int32_t t117 = 22;

    t117 = (((x469<=x470)|x471)&x472);

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	uint32_t x474 = 383627694U;
	static int32_t x475 = 405;

    t118 = (((x473<=x474)|x475)&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 1411573121823254LLU;
	int16_t x478 = 15;
	volatile uint64_t x479 = 17610753616LLU;
	static int64_t x480 = 3589062271932182973LL;
	uint64_t t119 = 110365641235457656LLU;

    t119 = (((x477<=x478)|x479)&x480);

    if (t119 != 17197039632LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 53U;
	int32_t x482 = -279;
	int64_t x483 = -817265074LL;
	volatile int64_t x484 = -1LL;
	static int64_t t120 = 21196583LL;

    t120 = (((x481<=x482)|x483)&x484);

    if (t120 != -817265074LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x485 = 3U;
	int8_t x486 = -2;
	int64_t x487 = INT64_MIN;
	int16_t x488 = -1;
	volatile int64_t t121 = INT64_MIN;

    t121 = (((x485<=x486)|x487)&x488);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 17151U;
	int16_t x490 = INT16_MAX;
	uint32_t x491 = UINT32_MAX;
	static uint64_t t122 = 3LLU;

    t122 = (((x489<=x490)|x491)&x492);

    if (t122 != 4248953LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = 26632140806516430LL;
	volatile int8_t x494 = INT8_MAX;
	volatile int8_t x495 = INT8_MAX;
	volatile int32_t x496 = -24461635;
	volatile int32_t t123 = -14536;

    t123 = (((x493<=x494)|x495)&x496);

    if (t123 != 61) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x499 = INT32_MIN;
	static int64_t x500 = INT64_MIN;
	volatile int64_t t124 = INT64_MIN;

    t124 = (((x497<=x498)|x499)&x500);

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	int64_t x502 = -1LL;
	volatile int8_t x504 = -9;

    t125 = (((x501<=x502)|x503)&x504);

    if (t125 != -9) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MIN;
	int64_t x507 = -2526740064751197LL;
	int8_t x508 = -1;
	static int64_t t126 = 1374LL;

    t126 = (((x505<=x506)|x507)&x508);

    if (t126 != -2526740064751197LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = UINT8_MAX;
	int64_t x510 = INT64_MIN;
	volatile uint64_t t127 = 232LLU;

    t127 = (((x509<=x510)|x511)&x512);

    if (t127 != 27527296LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	int16_t x514 = -1;
	uint8_t x515 = 3U;
	int16_t x516 = INT16_MIN;
	int32_t t128 = 29254;

    t128 = (((x513<=x514)|x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -2;
	int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = 595811U;
	volatile uint32_t t129 = 12433U;

    t129 = (((x517<=x518)|x519)&x520);

    if (t129 != 589824U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x522 = 122U;
	volatile uint32_t x523 = 358342944U;
	uint16_t x524 = 3U;
	uint32_t t130 = 1U;

    t130 = (((x521<=x522)|x523)&x524);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int32_t x526 = INT32_MAX;
	int16_t x527 = 116;
	uint8_t x528 = 5U;

    t131 = (((x525<=x526)|x527)&x528);

    if (t131 != 5) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = INT32_MIN;
	uint8_t x530 = 123U;
	int64_t x531 = 77LL;

    t132 = (((x529<=x530)|x531)&x532);

    if (t132 != 77LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = UINT16_MAX;
	int8_t x534 = 45;
	int16_t x535 = INT16_MIN;
	int64_t x536 = -1LL;
	volatile int64_t t133 = 350579713422163102LL;

    t133 = (((x533<=x534)|x535)&x536);

    if (t133 != -32768LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = -1LL;
	int64_t x538 = INT64_MIN;
	int16_t x539 = INT16_MIN;
	int16_t x540 = INT16_MIN;
	volatile int32_t t134 = -3278;

    t134 = (((x537<=x538)|x539)&x540);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 3174824;
	int64_t x542 = INT64_MIN;
	static int32_t x543 = INT32_MAX;
	int8_t x544 = -53;
	volatile int32_t t135 = -10816078;

    t135 = (((x541<=x542)|x543)&x544);

    if (t135 != 2147483595) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	volatile int16_t x546 = INT16_MAX;
	volatile int32_t x548 = -100250745;
	volatile uint64_t t136 = 679766242LLU;

    t136 = (((x545<=x546)|x547)&x548);

    if (t136 != 131331LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MIN;
	int32_t x550 = -1252;
	uint32_t x551 = 1U;
	int8_t x552 = INT8_MIN;
	static volatile uint32_t t137 = 1230978U;

    t137 = (((x549<=x550)|x551)&x552);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = 15;
	int32_t x554 = INT32_MAX;
	static int8_t x555 = 45;
	static volatile uint64_t x556 = 8LLU;
	volatile uint64_t t138 = 900645663LLU;

    t138 = (((x553<=x554)|x555)&x556);

    if (t138 != 8LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	uint8_t x559 = 1U;
	int32_t x560 = INT32_MAX;
	volatile int32_t t139 = 148;

    t139 = (((x557<=x558)|x559)&x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	static int32_t x563 = 1;
	int32_t t140 = 933695;

    t140 = (((x561<=x562)|x563)&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 15;
	static uint32_t x566 = UINT32_MAX;
	uint32_t x567 = UINT32_MAX;
	static int8_t x568 = INT8_MAX;
	volatile uint32_t t141 = 4170407U;

    t141 = (((x565<=x566)|x567)&x568);

    if (t141 != 127U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	uint32_t x571 = UINT32_MAX;
	volatile uint32_t x572 = 2570421U;
	uint32_t t142 = 1470U;

    t142 = (((x569<=x570)|x571)&x572);

    if (t142 != 2570421U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = UINT32_MAX;
	int16_t x575 = INT16_MIN;
	int64_t x576 = -1LL;
	volatile int64_t t143 = 114102LL;

    t143 = (((x573<=x574)|x575)&x576);

    if (t143 != -32767LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 4785320806872547LLU;
	int64_t x579 = INT64_MIN;
	static int64_t t144 = -385183035LL;

    t144 = (((x577<=x578)|x579)&x580);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	static int64_t x582 = INT64_MAX;
	static volatile uint32_t x583 = 240950819U;
	int8_t x584 = INT8_MIN;
	volatile uint32_t t145 = 311477U;

    t145 = (((x581<=x582)|x583)&x584);

    if (t145 != 240950784U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = INT32_MIN;
	static int16_t x586 = 15756;
	uint8_t x587 = UINT8_MAX;
	static uint8_t x588 = UINT8_MAX;

    t146 = (((x585<=x586)|x587)&x588);

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = -1LL;
	int8_t x591 = INT8_MIN;
	int32_t x592 = 0;
	int32_t t147 = 7965;

    t147 = (((x589<=x590)|x591)&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	int8_t x594 = -1;
	int16_t x595 = INT16_MIN;
	int32_t x596 = 443;
	volatile int32_t t148 = -1818264;

    t148 = (((x593<=x594)|x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = INT16_MAX;
	volatile int32_t t149 = 362520;

    t149 = (((x597<=x598)|x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	int32_t x602 = -58339701;
	int32_t x604 = INT32_MAX;
	volatile int32_t t150 = 0;

    t150 = (((x601<=x602)|x603)&x604);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int16_t x606 = INT16_MIN;
	int8_t x608 = INT8_MIN;
	volatile int32_t t151 = 5;

    t151 = (((x605<=x606)|x607)&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 2185956165840LL;
	int8_t x610 = -1;
	static int16_t x611 = -2393;
	int8_t x612 = INT8_MIN;
	volatile int32_t t152 = -614270;

    t152 = (((x609<=x610)|x611)&x612);

    if (t152 != -2432) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 0;
	uint16_t x614 = 2U;
	int8_t x615 = INT8_MIN;
	static int16_t x616 = INT16_MIN;

    t153 = (((x613<=x614)|x615)&x616);

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 2;
	int32_t x618 = INT32_MIN;
	int8_t x619 = INT8_MIN;
	uint64_t x620 = 3260281781399LLU;
	volatile uint64_t t154 = 2520964687LLU;

    t154 = (((x617<=x618)|x619)&x620);

    if (t154 != 3260281781376LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 3771970145994247193LLU;
	int32_t x623 = INT32_MIN;
	volatile int16_t x624 = INT16_MIN;
	volatile int32_t t155 = INT32_MIN;

    t155 = (((x621<=x622)|x623)&x624);

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	static int32_t x626 = INT32_MAX;
	int8_t x627 = INT8_MIN;
	static volatile int32_t x628 = INT32_MIN;

    t156 = (((x625<=x626)|x627)&x628);

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 6838682LLU;
	static uint32_t x630 = UINT32_MAX;
	volatile int64_t x631 = -449682563LL;
	int16_t x632 = INT16_MAX;
	static int64_t t157 = 2584038LL;

    t157 = (((x629<=x630)|x631)&x632);

    if (t157 != 25469LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x634 = INT8_MIN;
	int64_t x635 = 565967614299LL;
	int8_t x636 = -3;
	int64_t t158 = -8LL;

    t158 = (((x633<=x634)|x635)&x636);

    if (t158 != 565967614297LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = 2U;
	int16_t x638 = -1;
	uint16_t x639 = 791U;
	static uint32_t x640 = 48U;
	static volatile uint32_t t159 = 1198613U;

    t159 = (((x637<=x638)|x639)&x640);

    if (t159 != 16U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	int8_t x642 = INT8_MIN;
	uint64_t x644 = 1237267768LLU;
	volatile uint64_t t160 = 211797LLU;

    t160 = (((x641<=x642)|x643)&x644);

    if (t160 != 1237254144LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = 3892986;
	volatile int32_t x646 = INT32_MIN;
	static int16_t x647 = INT16_MIN;
	int32_t t161 = 1318;

    t161 = (((x645<=x646)|x647)&x648);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	static volatile uint8_t x650 = 13U;
	static int16_t x651 = 49;
	static volatile int32_t t162 = 72767;

    t162 = (((x649<=x650)|x651)&x652);

    if (t162 != 49) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static uint64_t x654 = 1474LLU;
	uint32_t x656 = 19U;
	volatile uint32_t t163 = 34649U;

    t163 = (((x653<=x654)|x655)&x656);

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = -1;
	int16_t x658 = 56;
	static int64_t x660 = -70LL;
	static volatile int64_t t164 = -3387799LL;

    t164 = (((x657<=x658)|x659)&x660);

    if (t164 != 65466LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	static uint16_t x662 = 94U;
	volatile int8_t x664 = -1;

    t165 = (((x661<=x662)|x663)&x664);

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = -15165414147330636LL;
	uint16_t x667 = 599U;
	int32_t x668 = INT32_MIN;
	int32_t t166 = 38561888;

    t166 = (((x665<=x666)|x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 17994304794333LLU;
	static int64_t x670 = -1LL;
	uint8_t x671 = UINT8_MAX;
	volatile uint64_t t167 = 23631LLU;

    t167 = (((x669<=x670)|x671)&x672);

    if (t167 != 223LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = 0U;
	int32_t x674 = -41;
	uint8_t x676 = 8U;
	volatile int64_t t168 = 9373412331LL;

    t168 = (((x673<=x674)|x675)&x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MIN;
	int16_t x680 = INT16_MIN;

    t169 = (((x677<=x678)|x679)&x680);

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x683 = -6665;
	volatile uint16_t x684 = UINT16_MAX;
	int32_t t170 = 451;

    t170 = (((x681<=x682)|x683)&x684);

    if (t170 != 58871) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	volatile int8_t x686 = INT8_MAX;
	uint8_t x688 = 0U;
	int32_t t171 = 55311118;

    t171 = (((x685<=x686)|x687)&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x691 = -1;
	int64_t t172 = INT64_MAX;

    t172 = (((x689<=x690)|x691)&x692);

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	uint64_t x694 = UINT64_MAX;

    t173 = (((x693<=x694)|x695)&x696);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	static int8_t x698 = -1;
	static int16_t x700 = 6;

    t174 = (((x697<=x698)|x699)&x700);

    if (t174 != 6) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	uint32_t x702 = 872U;
	uint8_t x703 = 0U;
	int32_t x704 = INT32_MIN;

    t175 = (((x701<=x702)|x703)&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MAX;
	volatile int32_t x707 = -1;
	int32_t x708 = INT32_MIN;

    t176 = (((x705<=x706)|x707)&x708);

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 1799U;
	int32_t x710 = 10912;
	int64_t x712 = -1LL;
	static int64_t t177 = 3601096990993LL;

    t177 = (((x709<=x710)|x711)&x712);

    if (t177 != 2147483647LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 116U;
	int32_t x714 = INT32_MAX;
	int64_t x715 = INT64_MIN;
	int64_t x716 = -4824LL;
	volatile int64_t t178 = INT64_MIN;

    t178 = (((x713<=x714)|x715)&x716);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MAX;
	static uint16_t x719 = UINT16_MAX;
	int32_t x720 = 216557309;
	static volatile int32_t t179 = -10374;

    t179 = (((x717<=x718)|x719)&x720);

    if (t179 != 26365) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = INT64_MIN;
	int16_t x723 = INT16_MIN;
	int8_t x724 = INT8_MIN;
	int32_t t180 = 355387648;

    t180 = (((x721<=x722)|x723)&x724);

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = INT8_MAX;
	int32_t x726 = -5499646;
	volatile int64_t x727 = 5044659LL;
	volatile int64_t t181 = -431LL;

    t181 = (((x725<=x726)|x727)&x728);

    if (t181 != 8240LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MAX;
	uint64_t x730 = 6415602187132LLU;
	int16_t x731 = INT16_MIN;
	static int16_t x732 = -1;
	int32_t t182 = 411353522;

    t182 = (((x729<=x730)|x731)&x732);

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x735 = -1LL;
	int8_t x736 = INT8_MIN;
	volatile int64_t t183 = -820LL;

    t183 = (((x733<=x734)|x735)&x736);

    if (t183 != -128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -117;
	volatile int16_t x738 = INT16_MIN;
	static uint32_t x739 = 25326010U;
	uint8_t x740 = UINT8_MAX;

    t184 = (((x737<=x738)|x739)&x740);

    if (t184 != 186U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	uint64_t x743 = UINT64_MAX;
	uint16_t x744 = 1U;
	uint64_t t185 = 10395524LLU;

    t185 = (((x741<=x742)|x743)&x744);

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int32_t x746 = INT32_MIN;
	volatile uint64_t x747 = 2848LLU;
	uint64_t x748 = 194965980072635857LLU;
	uint64_t t186 = 653LLU;

    t186 = (((x745<=x746)|x747)&x748);

    if (t186 != 2304LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -24;
	uint32_t x750 = 10U;
	int64_t x751 = -1LL;
	volatile int64_t t187 = 237LL;

    t187 = (((x749<=x750)|x751)&x752);

    if (t187 != -10LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x754 = 8028581LL;
	int32_t x755 = INT32_MIN;
	static int32_t t188 = -3798;

    t188 = (((x753<=x754)|x755)&x756);

    if (t188 != -2147483647) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = -1;
	int64_t x758 = INT64_MIN;
	static uint64_t x759 = 3457006571597LLU;
	uint16_t x760 = 0U;
	static uint64_t t189 = 3366234528LLU;

    t189 = (((x757<=x758)|x759)&x760);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x761 = 1940635LL;
	uint32_t x762 = UINT32_MAX;
	int16_t x763 = 18;
	volatile int32_t t190 = -11885113;

    t190 = (((x761<=x762)|x763)&x764);

    if (t190 != 19) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = -122898405;
	int64_t x767 = INT64_MAX;
	static volatile int16_t x768 = -11;
	int64_t t191 = -65689390LL;

    t191 = (((x765<=x766)|x767)&x768);

    if (t191 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = UINT8_MAX;
	int32_t x770 = 149;
	int16_t x771 = INT16_MIN;
	uint8_t x772 = 33U;

    t192 = (((x769<=x770)|x771)&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x774 = 36090521721278627LL;
	int64_t x776 = INT64_MIN;
	volatile int64_t t193 = INT64_MIN;

    t193 = (((x773<=x774)|x775)&x776);

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	static volatile int8_t x778 = INT8_MIN;
	static int8_t x779 = -1;
	uint8_t x780 = 80U;
	int32_t t194 = -2369022;

    t194 = (((x777<=x778)|x779)&x780);

    if (t194 != 80) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MAX;
	static int16_t x782 = -14;
	int8_t x783 = 40;

    t195 = (((x781<=x782)|x783)&x784);

    if (t195 != 40) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 3413U;
	int64_t x786 = INT64_MIN;
	int64_t x787 = INT64_MAX;
	static int32_t x788 = INT32_MAX;

    t196 = (((x785<=x786)|x787)&x788);

    if (t196 != 2147483647LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MAX;
	uint64_t x790 = UINT64_MAX;
	uint16_t x792 = 96U;
	int64_t t197 = -20LL;

    t197 = (((x789<=x790)|x791)&x792);

    if (t197 != 32LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x795 = 2U;
	uint32_t t198 = 87832738U;

    t198 = (((x793<=x794)|x795)&x796);

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x798 = -43;
	int16_t x799 = -1;
	static uint64_t x800 = 8710598838807304409LLU;
	volatile uint64_t t199 = 28629494LLU;

    t199 = (((x797<=x798)|x799)&x800);

    if (t199 != 8710598838807304409LLU) { NG(); } else { ; }
	
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

