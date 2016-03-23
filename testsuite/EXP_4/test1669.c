
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

static int16_t x2 = INT16_MAX;
uint32_t x3 = 5U;
static int8_t x4 = -1;
int64_t x8 = -2250149059439683197LL;
volatile int32_t x17 = INT32_MIN;
int16_t x30 = 1;
int32_t t7 = -47;
volatile uint64_t x34 = 4328LLU;
volatile int64_t x38 = INT64_MAX;
static uint32_t x44 = 8606U;
int8_t x45 = INT8_MIN;
int64_t x52 = INT64_MAX;
int32_t t13 = 87;
uint64_t x58 = 449930LLU;
uint64_t x65 = 3LLU;
int32_t x69 = -1;
int16_t x71 = -1;
int8_t x87 = 10;
int32_t x114 = INT32_MIN;
static uint64_t x126 = UINT64_MAX;
int32_t x131 = -30664;
static int32_t x135 = 30238;
int32_t t33 = 5370202;
int64_t x140 = 28527550LL;
volatile int32_t t38 = -42671;
int8_t x161 = INT8_MIN;
int8_t x166 = -1;
int32_t x169 = 10193412;
uint32_t x170 = UINT32_MAX;
uint16_t x172 = 555U;
static volatile int32_t t42 = 24810052;
uint8_t x173 = 9U;
uint32_t x182 = UINT32_MAX;
volatile int16_t x190 = INT16_MIN;
volatile int64_t t47 = 188819LL;
int16_t x195 = INT16_MIN;
int16_t x200 = -238;
volatile int32_t t49 = -2396;
static uint64_t x208 = UINT64_MAX;
int32_t t51 = 1060827577;
uint32_t x212 = 223U;
volatile int32_t t52 = 1062;
static int32_t x214 = INT32_MIN;
volatile uint32_t x220 = UINT32_MAX;
int16_t x221 = -100;
int32_t x227 = -1;
volatile int32_t x228 = -1;
int16_t x229 = INT16_MAX;
volatile int64_t x231 = 13037112LL;
int16_t x235 = -29;
int32_t x237 = -674493;
volatile int8_t x241 = INT8_MIN;
int8_t x242 = -1;
int32_t x243 = INT32_MIN;
int64_t x251 = 933596868074090LL;
int16_t x252 = 16229;
uint32_t t62 = 2826613U;
int32_t t64 = 1243388;
int32_t x269 = -1;
int64_t x273 = INT64_MAX;
int64_t x275 = INT64_MIN;
uint8_t x277 = UINT8_MAX;
int64_t x279 = -317857LL;
static volatile int32_t t69 = -348653633;
volatile uint8_t x283 = UINT8_MAX;
uint64_t x286 = UINT64_MAX;
int16_t x290 = 12;
uint64_t x296 = 375550937588729LLU;
volatile int32_t t74 = -24;
int16_t x312 = INT16_MAX;
int32_t t77 = -169381055;
static uint16_t x323 = UINT16_MAX;
volatile int8_t x332 = -1;
int32_t x342 = -1;
uint8_t x344 = UINT8_MAX;
uint16_t x352 = UINT16_MAX;
volatile int8_t x359 = INT8_MIN;
int64_t x360 = -860802433654LL;
int32_t x364 = -226;
int32_t x369 = -1;
volatile int16_t x370 = INT16_MIN;
int32_t x374 = INT32_MIN;
static int8_t x377 = 9;
uint64_t x382 = 460039500503420LLU;
int64_t t95 = 56850101584283LL;
static int32_t x388 = INT32_MIN;
int64_t t96 = 66139155LL;
static int32_t x389 = -3152;
uint32_t x395 = 13902U;
static volatile int32_t t98 = 110990;
uint8_t x400 = 16U;
volatile uint64_t t100 = 131432324987067LLU;
uint8_t x405 = UINT8_MAX;
int64_t x409 = INT64_MIN;
int8_t x411 = INT8_MAX;
volatile int8_t x412 = INT8_MAX;
static uint16_t x417 = UINT16_MAX;
int32_t t104 = 128885;
uint16_t x422 = UINT16_MAX;
int16_t x423 = INT16_MAX;
int16_t x430 = INT16_MIN;
int32_t t108 = -20060073;
static int32_t t109 = 116092015;
static uint16_t x442 = 5U;
int32_t x443 = -232795;
static int64_t x444 = INT64_MIN;
int32_t x445 = INT32_MIN;
static int32_t t111 = -21853684;
static int32_t x451 = INT32_MIN;
volatile uint8_t x452 = UINT8_MAX;
volatile uint16_t x456 = UINT16_MAX;
uint16_t x457 = 165U;
int32_t t114 = 23768;
volatile uint64_t x461 = 22487406222797317LLU;
int32_t x475 = INT32_MIN;
volatile uint32_t t118 = 120876U;
volatile int8_t x478 = 1;
volatile uint16_t x479 = 31U;
uint16_t x480 = 3603U;
static volatile int32_t t119 = -15;
static int16_t x484 = INT16_MIN;
static int32_t t120 = -51;
uint16_t x491 = UINT16_MAX;
static uint8_t x492 = UINT8_MAX;
int64_t x494 = -1LL;
volatile int32_t t124 = -386531121;
static volatile int64_t x506 = 9394821LL;
uint8_t x515 = 4U;
volatile uint64_t x519 = 195228LLU;
int8_t x524 = INT8_MIN;
int32_t t130 = -57741859;
volatile uint16_t x527 = UINT16_MAX;
volatile uint16_t x529 = 4U;
uint16_t x534 = UINT16_MAX;
static uint8_t x547 = 18U;
volatile int64_t t136 = -13056266625LL;
static int8_t x551 = INT8_MAX;
int16_t x552 = -14;
volatile int32_t t137 = 13906;
volatile int32_t x558 = INT32_MAX;
int32_t x562 = -1;
int64_t x563 = -1LL;
int32_t t140 = -25;
volatile uint8_t x568 = 19U;
uint8_t x571 = 39U;
int8_t x572 = 13;
int32_t x573 = 53163386;
uint16_t x581 = 1627U;
int16_t x582 = INT16_MIN;
volatile uint64_t x583 = UINT64_MAX;
int32_t x584 = INT32_MIN;
uint16_t x587 = 7U;
uint8_t x591 = UINT8_MAX;
volatile int64_t x606 = INT64_MIN;
uint16_t x607 = 111U;
uint32_t x611 = 203284U;
uint8_t x615 = 4U;
volatile int8_t x616 = INT8_MAX;
static volatile int32_t t155 = INT32_MAX;
int64_t x625 = -1LL;
volatile uint16_t x627 = 19436U;
volatile int64_t t156 = -53124LL;
volatile int16_t x634 = INT16_MIN;
int32_t x636 = -1;
static uint64_t x638 = UINT64_MAX;
int32_t x642 = INT32_MIN;
int32_t t160 = 312;
uint8_t x655 = 1U;
int32_t t163 = 1;
int32_t x657 = -1;
uint16_t x659 = 832U;
int16_t x662 = INT16_MIN;
static uint64_t x664 = 1281480641432753514LLU;
static int16_t x668 = 7032;
static uint8_t x674 = 58U;
static int64_t x675 = -1LL;
uint16_t x679 = UINT16_MAX;
uint32_t x687 = 611U;
volatile int32_t t172 = -223387;
volatile int32_t t174 = 1289;
volatile int64_t x701 = -1LL;
uint8_t x702 = 1U;
volatile int64_t x705 = 2349912241LL;
int8_t x713 = 1;
static uint32_t x717 = UINT32_MAX;
int32_t x727 = 58;
volatile int64_t t181 = 19829266987983995LL;
int32_t x733 = INT32_MIN;
static uint32_t x739 = 383005826U;
uint32_t x740 = 280091004U;
volatile int64_t t185 = 136458146796819LL;
int8_t x746 = INT8_MAX;
int32_t x748 = INT32_MIN;
uint16_t x758 = UINT16_MAX;
static volatile uint32_t t190 = 37768U;
static volatile int32_t t191 = 200869;
volatile int32_t x769 = INT32_MIN;
int32_t t193 = 7;
int8_t x784 = INT8_MIN;
static volatile int32_t t196 = -426592128;
int16_t x793 = -2929;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int32_t t0 = -7;

    t0 = (x1*(x2==(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 1153;
	uint32_t x6 = UINT32_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = 65162947;

    t1 = (x5*(x6==(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile int32_t x10 = -6;
	static int32_t x11 = -875054500;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -1;

    t2 = (x9*(x10==(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 2LLU;
	volatile int8_t x14 = INT8_MIN;
	static uint8_t x15 = 96U;
	int8_t x16 = INT8_MIN;
	uint64_t t3 = 33927179LLU;

    t3 = (x13*(x14==(x15>x16)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MAX;
	uint16_t x19 = 43U;
	static int8_t x20 = 13;
	volatile int32_t t4 = -1557110;

    t4 = (x17*(x18==(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = -47;
	int16_t x23 = INT16_MAX;
	volatile int32_t x24 = 227688;
	volatile int64_t t5 = 4LL;

    t5 = (x21*(x22==(x23>x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	static int16_t x26 = -1;
	uint8_t x27 = 0U;
	static int32_t x28 = -1;
	int64_t t6 = -70261441690LL;

    t6 = (x25*(x26==(x27>x28)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 0;
	int16_t x31 = INT16_MIN;
	int64_t x32 = 6721616717745937LL;

    t7 = (x29*(x30==(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -17876611281LL;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = INT64_MAX;
	int64_t t8 = 1LL;

    t8 = (x33*(x34==(x35>x36)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = UINT32_MAX;
	int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	volatile uint32_t t9 = 3500U;

    t9 = (x37*(x38==(x39>x40)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	static uint16_t x42 = 16865U;
	int64_t x43 = -1LL;
	volatile int32_t t10 = 333129764;

    t10 = (x41*(x42==(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 12U;
	static volatile int64_t x47 = INT64_MIN;
	uint8_t x48 = 13U;
	volatile int32_t t11 = -51091;

    t11 = (x45*(x46==(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 0U;
	int8_t x50 = -1;
	volatile uint32_t x51 = 1572121U;
	volatile int32_t t12 = 504581;

    t12 = (x49*(x50==(x51>x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	volatile int8_t x54 = 3;
	static int16_t x55 = -1;
	int8_t x56 = INT8_MIN;

    t13 = (x53*(x54==(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint64_t x59 = 52294925033662974LLU;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -9919;

    t14 = (x57*(x58==(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	static uint32_t x62 = 114235U;
	int16_t x63 = -1;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 920;

    t15 = (x61*(x62==(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = INT32_MIN;
	static uint16_t x67 = 21U;
	int16_t x68 = INT16_MAX;
	uint64_t t16 = 12826LLU;

    t16 = (x65*(x66==(x67>x68)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x70 = 171LLU;
	int64_t x72 = -1LL;
	volatile int32_t t17 = -16;

    t17 = (x69*(x70==(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = UINT32_MAX;
	static int16_t x74 = 6;
	int16_t x75 = INT16_MIN;
	int64_t x76 = 2791400154989LL;
	volatile uint32_t t18 = 140597501U;

    t18 = (x73*(x74==(x75>x76)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	int16_t x78 = 81;
	static volatile uint32_t x79 = UINT32_MAX;
	int64_t x80 = -1LL;
	int64_t t19 = 14934LL;

    t19 = (x77*(x78==(x79>x80)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int64_t x82 = -1LL;
	uint64_t x83 = 6340015914LLU;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = -6;

    t20 = (x81*(x82==(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	uint8_t x88 = 15U;
	volatile int32_t t21 = -116137786;

    t21 = (x85*(x86==(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = 0;
	int32_t x90 = 4906;
	uint16_t x91 = 437U;
	static volatile uint64_t x92 = 2059385448137300LLU;
	volatile int32_t t22 = 60194;

    t22 = (x89*(x90==(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	static int64_t x94 = 22705135136518785LL;
	int16_t x95 = -1;
	uint64_t x96 = 14768LLU;
	uint64_t t23 = 10806956119LLU;

    t23 = (x93*(x94==(x95>x96)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	static uint32_t x98 = UINT32_MAX;
	static int16_t x99 = -33;
	uint16_t x100 = 95U;
	uint64_t t24 = 871009730LLU;

    t24 = (x97*(x98==(x99>x100)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	static int64_t x102 = -17861LL;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = -1954343;

    t25 = (x101*(x102==(x103>x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	uint16_t x106 = 10U;
	uint16_t x107 = 25U;
	int32_t x108 = INT32_MIN;
	int64_t t26 = 468LL;

    t26 = (x105*(x106==(x107>x108)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MIN;
	volatile int32_t x110 = INT32_MAX;
	static uint8_t x111 = 32U;
	static int64_t x112 = INT64_MIN;
	static int32_t t27 = 31;

    t27 = (x109*(x110==(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 12;
	int8_t x115 = -1;
	int16_t x116 = INT16_MAX;
	static volatile int32_t t28 = -72;

    t28 = (x113*(x114==(x115>x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -102647;
	volatile uint8_t x118 = 104U;
	int16_t x119 = 7462;
	int16_t x120 = 18;
	volatile int32_t t29 = 39255973;

    t29 = (x117*(x118==(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = 125U;
	static uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = -1;
	int8_t x124 = -1;
	int32_t t30 = 541345419;

    t30 = (x121*(x122==(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	static volatile uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -364109896;

    t31 = (x125*(x126==(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 738U;
	volatile int32_t x130 = INT32_MIN;
	volatile int64_t x132 = 133LL;
	volatile uint32_t t32 = 347322956U;

    t32 = (x129*(x130==(x131>x132)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = -1708752;
	volatile int64_t x134 = -1LL;
	int64_t x136 = INT64_MAX;

    t33 = (x133*(x134==(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 15143;
	int8_t x138 = -1;
	static volatile uint16_t x139 = 6354U;
	volatile int32_t t34 = -17180730;

    t34 = (x137*(x138==(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -31820350691407125LL;
	int16_t x142 = INT16_MIN;
	uint8_t x143 = 0U;
	static volatile int16_t x144 = -1;
	int64_t t35 = 126765950LL;

    t35 = (x141*(x142==(x143>x144)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint16_t x146 = 13U;
	uint64_t x147 = 1229867312042LLU;
	int64_t x148 = INT64_MAX;
	int64_t t36 = -379581363LL;

    t36 = (x145*(x146==(x147>x148)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 8U;
	volatile int64_t x150 = INT64_MIN;
	uint8_t x151 = UINT8_MAX;
	volatile int16_t x152 = INT16_MIN;
	static volatile uint32_t t37 = 10469U;

    t37 = (x149*(x150==(x151>x152)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = 6;
	int8_t x155 = -1;
	int64_t x156 = INT64_MIN;

    t38 = (x153*(x154==(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = INT32_MIN;
	int16_t x158 = -4042;
	uint16_t x159 = 7U;
	static volatile int32_t x160 = 264236630;
	volatile int32_t t39 = -470190461;

    t39 = (x157*(x158==(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x162 = 12U;
	uint16_t x163 = 23314U;
	static volatile int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 13;

    t40 = (x161*(x162==(x163>x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = -1;
	static uint32_t x167 = UINT32_MAX;
	volatile int16_t x168 = INT16_MAX;
	int32_t t41 = -113547125;

    t41 = (x165*(x166==(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x171 = -1;

    t42 = (x169*(x170==(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MAX;
	uint8_t x175 = 11U;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t43 = -682327301;

    t43 = (x173*(x174==(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	uint32_t x178 = 2U;
	volatile int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MIN;
	uint64_t t44 = 19LLU;

    t44 = (x177*(x178==(x179>x180)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = -1;
	int32_t x183 = INT32_MIN;
	static volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -2;

    t45 = (x181*(x182==(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 1;
	static uint16_t x186 = 12U;
	uint8_t x187 = 32U;
	uint16_t x188 = 503U;
	int32_t t46 = 942;

    t46 = (x185*(x186==(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = -2LL;
	uint32_t x191 = 0U;
	static int64_t x192 = 15587551LL;

    t47 = (x189*(x190==(x191>x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	uint64_t x194 = 635LLU;
	int16_t x196 = INT16_MAX;
	volatile int32_t t48 = -3915;

    t48 = (x193*(x194==(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x197 = 48U;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MAX;

    t49 = (x197*(x198==(x199>x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = UINT32_MAX;
	volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = 25641412778929LLU;
	volatile int64_t x204 = -564171706842770LL;
	volatile uint32_t t50 = 1146868U;

    t50 = (x201*(x202==(x203>x204)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 1;
	static int8_t x206 = -5;
	static int16_t x207 = -1;

    t51 = (x205*(x206==(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	uint8_t x210 = 22U;
	uint8_t x211 = UINT8_MAX;

    t52 = (x209*(x210==(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 1220U;
	int64_t x215 = -1LL;
	uint8_t x216 = UINT8_MAX;
	static int32_t t53 = 177;

    t53 = (x213*(x214==(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	uint64_t x218 = UINT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	volatile int32_t t54 = 688919;

    t54 = (x217*(x218==(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 10502LLU;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = 23;

    t55 = (x221*(x222==(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	static volatile int64_t x226 = INT64_MAX;
	volatile int32_t t56 = 12;

    t56 = (x225*(x226==(x227>x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x230 = 890536U;
	uint32_t x232 = 242638342U;
	volatile int32_t t57 = -66077895;

    t57 = (x229*(x230==(x231>x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = -230;
	int8_t x236 = -17;
	int32_t t58 = 11160;

    t58 = (x233*(x234==(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x238 = UINT32_MAX;
	int32_t x239 = 8134;
	uint32_t x240 = 68U;
	volatile int32_t t59 = 1;

    t59 = (x237*(x238==(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x244 = UINT8_MAX;
	static volatile int32_t t60 = -2404205;

    t60 = (x241*(x242==(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 1;
	volatile int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -3835;

    t61 = (x245*(x246==(x247>x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 212522084U;
	int16_t x250 = INT16_MAX;

    t62 = (x249*(x250==(x251>x252)));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MIN;
	static uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 4506843248LLU;
	uint64_t t63 = 4989135LLU;

    t63 = (x253*(x254==(x255>x256)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	volatile uint64_t x259 = 2457LLU;
	volatile uint16_t x260 = UINT16_MAX;

    t64 = (x257*(x258==(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = -1LL;
	int16_t x262 = -1;
	static int8_t x263 = 19;
	int8_t x264 = INT8_MIN;
	static volatile int64_t t65 = -24587609961LL;

    t65 = (x261*(x262==(x263>x264)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 24116539;
	int16_t x266 = INT16_MIN;
	static uint16_t x267 = 1786U;
	int16_t x268 = -1;
	int32_t t66 = -108988502;

    t66 = (x265*(x266==(x267>x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -1;
	static int16_t x271 = INT16_MIN;
	volatile uint64_t x272 = 1317902051LLU;
	volatile int32_t t67 = -1390952;

    t67 = (x269*(x270==(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = -1;
	int16_t x276 = INT16_MIN;
	int64_t t68 = 574570LL;

    t68 = (x273*(x274==(x275>x276)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x278 = -9772;
	uint32_t x280 = 1922U;

    t69 = (x277*(x278==(x279>x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x281 = 95U;
	uint32_t x282 = 20230U;
	int16_t x284 = -1;
	volatile int32_t t70 = -404371973;

    t70 = (x281*(x282==(x283>x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	volatile uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MAX;
	int32_t t71 = 14;

    t71 = (x285*(x286==(x287>x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int16_t x291 = -696;
	uint16_t x292 = 13775U;
	int64_t t72 = 4131834839367789337LL;

    t72 = (x289*(x290==(x291>x292)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	static int32_t x294 = INT32_MIN;
	volatile int32_t x295 = -460;
	volatile int64_t t73 = 3990457LL;

    t73 = (x293*(x294==(x295>x296)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 1218087492447397074LLU;
	static int64_t x300 = INT64_MIN;

    t74 = (x297*(x298==(x299>x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -773;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = INT32_MIN;
	static volatile int8_t x304 = -2;
	int32_t t75 = 57;

    t75 = (x301*(x302==(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -2;
	volatile uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	int8_t x308 = -3;
	int32_t t76 = -84454268;

    t76 = (x305*(x306==(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1289;
	int8_t x310 = -1;
	uint64_t x311 = 449959516540LLU;

    t77 = (x309*(x310==(x311>x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	uint16_t x314 = 960U;
	volatile uint8_t x315 = 4U;
	uint64_t x316 = 7833824927523253LLU;
	volatile int32_t t78 = -46578;

    t78 = (x313*(x314==(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 22971606034909156LLU;
	int8_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	volatile int64_t x320 = -1LL;
	volatile uint64_t t79 = 397891LLU;

    t79 = (x317*(x318==(x319>x320)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = -1LL;
	int32_t x322 = INT32_MIN;
	uint32_t x324 = 203108U;
	static volatile int64_t t80 = 3597696680LL;

    t80 = (x321*(x322==(x323>x324)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	volatile int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -28601;

    t81 = (x325*(x326==(x327>x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	int16_t x330 = INT16_MAX;
	volatile int32_t x331 = INT32_MAX;
	volatile int32_t t82 = 42723612;

    t82 = (x329*(x330==(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -7;
	static uint16_t x334 = 26565U;
	uint64_t x335 = 2925568683LLU;
	uint32_t x336 = 32697U;
	volatile int32_t t83 = 3;

    t83 = (x333*(x334==(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 66U;
	static int32_t x338 = INT32_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = 162803876726LL;
	volatile int32_t t84 = -23;

    t84 = (x337*(x338==(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	static volatile int16_t x343 = INT16_MIN;
	static volatile int32_t t85 = -7;

    t85 = (x341*(x342==(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 10U;
	int16_t x346 = 0;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MAX;
	int32_t t86 = -1;

    t86 = (x345*(x346==(x347>x348)));

    if (t86 != 10) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 3U;
	static uint64_t x350 = 1652193434691647946LLU;
	int8_t x351 = 43;
	static volatile int32_t t87 = 11300797;

    t87 = (x349*(x350==(x351>x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -1LL;
	int8_t x354 = -5;
	volatile uint16_t x355 = 2735U;
	static int32_t x356 = INT32_MIN;
	volatile int64_t t88 = 159360580149LL;

    t88 = (x353*(x354==(x355>x356)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	volatile int32_t t89 = 65397;

    t89 = (x357*(x358==(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = -13417;
	uint64_t x362 = 16755190858LLU;
	volatile uint32_t x363 = UINT32_MAX;
	static int32_t t90 = -45797378;

    t90 = (x361*(x362==(x363>x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = 1198U;
	static uint8_t x366 = 1U;
	uint16_t x367 = 510U;
	int32_t x368 = INT32_MIN;
	static int32_t t91 = 249547;

    t91 = (x365*(x366==(x367>x368)));

    if (t91 != 1198) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x371 = INT64_MIN;
	static uint16_t x372 = 43U;
	static volatile int32_t t92 = 0;

    t92 = (x369*(x370==(x371>x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x373 = -1;
	int32_t x375 = INT32_MIN;
	uint32_t x376 = 666U;
	volatile int32_t t93 = 52565851;

    t93 = (x373*(x374==(x375>x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x378 = UINT8_MAX;
	static volatile int32_t x379 = INT32_MIN;
	uint16_t x380 = 19U;
	int32_t t94 = 186827837;

    t94 = (x377*(x378==(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MAX;
	uint64_t x383 = 25914LLU;
	volatile int8_t x384 = -62;

    t95 = (x381*(x382==(x383>x384)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = 73668LL;
	int16_t x386 = INT16_MIN;
	static uint8_t x387 = UINT8_MAX;

    t96 = (x385*(x386==(x387>x388)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = -1LL;
	int32_t x391 = INT32_MAX;
	int32_t x392 = -111792821;
	static int32_t t97 = 996483185;

    t97 = (x389*(x390==(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 4;
	volatile int16_t x394 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;

    t98 = (x393*(x394==(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MAX;
	static volatile int8_t x399 = -1;
	int32_t t99 = 2;

    t99 = (x397*(x398==(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = 46241847LLU;
	static int64_t x402 = 234327358411090LL;
	uint64_t x403 = 903LLU;
	int16_t x404 = -1;

    t100 = (x401*(x402==(x403>x404)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = 0LL;
	static volatile int16_t x407 = -1;
	int8_t x408 = -62;
	volatile int32_t t101 = -192597783;

    t101 = (x405*(x406==(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = UINT8_MAX;
	int64_t t102 = -226726LL;

    t102 = (x409*(x410==(x411>x412)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = UINT8_MAX;
	int8_t x414 = INT8_MAX;
	int64_t x415 = -2653LL;
	static uint64_t x416 = 7222799702LLU;
	static volatile int32_t t103 = -30;

    t103 = (x413*(x414==(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x418 = 6U;
	int32_t x419 = INT32_MIN;
	int16_t x420 = 31;

    t104 = (x417*(x418==(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = -1;
	static int16_t x424 = INT16_MIN;
	int32_t t105 = 72808280;

    t105 = (x421*(x422==(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	int32_t x426 = -5307287;
	uint64_t x427 = 353701820628951391LLU;
	int16_t x428 = -1;
	int32_t t106 = -186;

    t106 = (x425*(x426==(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x429 = 28U;
	int16_t x431 = -3902;
	volatile int64_t x432 = INT64_MAX;
	uint32_t t107 = 506815247U;

    t107 = (x429*(x430==(x431>x432)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	uint16_t x434 = 740U;
	volatile uint64_t x435 = UINT64_MAX;
	int64_t x436 = INT64_MIN;

    t108 = (x433*(x434==(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 61U;
	int32_t x438 = INT32_MAX;
	uint16_t x439 = 1497U;
	uint16_t x440 = 0U;

    t109 = (x437*(x438==(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int32_t t110 = -2021072;

    t110 = (x441*(x442==(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MAX;

    t111 = (x445*(x446==(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 1344U;
	static uint8_t x450 = 0U;
	uint32_t t112 = 71261U;

    t112 = (x449*(x450==(x451>x452)));

    if (t112 != 1344U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -162LL;
	static int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	volatile int64_t t113 = -344LL;

    t113 = (x453*(x454==(x455>x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = -1;
	static volatile int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;

    t114 = (x457*(x458==(x459>x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x462 = UINT64_MAX;
	int64_t x463 = INT64_MIN;
	int8_t x464 = 54;
	static volatile uint64_t t115 = 17LLU;

    t115 = (x461*(x462==(x463>x464)));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	uint8_t x466 = 63U;
	int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;
	volatile int32_t t116 = -14;

    t116 = (x465*(x466==(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 1754593331526001LL;
	int64_t x470 = 7LL;
	volatile int64_t x471 = INT64_MAX;
	int16_t x472 = -1;
	int64_t t117 = -4LL;

    t117 = (x469*(x470==(x471>x472)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	int64_t x474 = INT64_MIN;
	uint16_t x476 = 434U;

    t118 = (x473*(x474==(x475>x476)));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = -16;

    t119 = (x477*(x478==(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 5079U;
	volatile int16_t x482 = -1;
	uint32_t x483 = 125607U;

    t120 = (x481*(x482==(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	volatile int64_t x486 = 1LL;
	volatile int64_t x487 = INT64_MAX;
	int32_t x488 = INT32_MIN;
	int32_t t121 = 77688704;

    t121 = (x485*(x486==(x487>x488)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x489 = 786LLU;
	volatile int64_t x490 = 1355581657157413340LL;
	uint64_t t122 = 1036637LLU;

    t122 = (x489*(x490==(x491>x492)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 3604U;
	int8_t x495 = -8;
	int8_t x496 = INT8_MIN;
	volatile uint32_t t123 = 1499564531U;

    t123 = (x493*(x494==(x495>x496)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 43U;
	uint8_t x498 = 13U;
	int32_t x499 = -107;
	uint32_t x500 = UINT32_MAX;

    t124 = (x497*(x498==(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = INT16_MIN;
	int64_t x502 = INT64_MIN;
	static int32_t x503 = -1;
	volatile int64_t x504 = 394529558659LL;
	int32_t t125 = 10026;

    t125 = (x501*(x502==(x503>x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	static uint16_t x507 = 325U;
	int32_t x508 = 0;
	volatile int64_t t126 = -21LL;

    t126 = (x505*(x506==(x507>x508)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	static uint8_t x510 = UINT8_MAX;
	uint32_t x511 = 1263U;
	static uint32_t x512 = UINT32_MAX;
	int32_t t127 = -126787659;

    t127 = (x509*(x510==(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = INT64_MAX;
	int32_t x514 = -395;
	uint16_t x516 = 5U;
	volatile int64_t t128 = 15048903LL;

    t128 = (x513*(x514==(x515>x516)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = 6U;
	static int32_t x518 = INT32_MIN;
	int8_t x520 = -14;
	volatile int32_t t129 = -844647825;

    t129 = (x517*(x518==(x519>x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = INT8_MIN;
	uint16_t x522 = 5308U;
	int64_t x523 = INT64_MIN;

    t130 = (x521*(x522==(x523>x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MIN;
	volatile uint16_t x526 = UINT16_MAX;
	static uint16_t x528 = UINT16_MAX;
	static volatile int32_t t131 = 3251;

    t131 = (x525*(x526==(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x530 = 17844U;
	int16_t x531 = -1964;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t132 = 4677;

    t132 = (x529*(x530==(x531>x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	uint64_t x535 = 257LLU;
	int16_t x536 = 140;
	volatile int32_t t133 = -9575;

    t133 = (x533*(x534==(x535>x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int8_t x538 = INT8_MAX;
	int32_t x539 = INT32_MIN;
	int64_t x540 = -102540523LL;
	volatile int32_t t134 = 1;

    t134 = (x537*(x538==(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	uint16_t x542 = 21U;
	int64_t x543 = 8369227348LL;
	static uint32_t x544 = UINT32_MAX;
	static int32_t t135 = -7;

    t135 = (x541*(x542==(x543>x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -6047452LL;
	static int32_t x546 = -117304;
	int16_t x548 = -14;

    t136 = (x545*(x546==(x547>x548)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = 0;
	volatile uint64_t x550 = 1630383438LLU;

    t137 = (x549*(x550==(x551>x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MIN;
	int8_t x554 = -6;
	static volatile uint16_t x555 = UINT16_MAX;
	uint16_t x556 = 16278U;
	int32_t t138 = -1;

    t138 = (x553*(x554==(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	uint8_t x559 = 7U;
	int8_t x560 = 63;
	volatile int64_t t139 = -33255472665LL;

    t139 = (x557*(x558==(x559>x560)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	uint16_t x564 = UINT16_MAX;

    t140 = (x561*(x562==(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	int16_t x566 = 3;
	volatile int32_t x567 = -3966;
	volatile int32_t t141 = -15922934;

    t141 = (x565*(x566==(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	uint32_t x570 = 1633601U;
	int32_t t142 = 0;

    t142 = (x569*(x570==(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x574 = 11U;
	int64_t x575 = INT64_MIN;
	volatile int32_t x576 = 59060323;
	volatile int32_t t143 = -1;

    t143 = (x573*(x574==(x575>x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	volatile int64_t x578 = INT64_MIN;
	int16_t x579 = INT16_MIN;
	static volatile int32_t x580 = -124411237;
	volatile int64_t t144 = -115907LL;

    t144 = (x577*(x578==(x579>x580)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t t145 = -3973;

    t145 = (x581*(x582==(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x585 = UINT8_MAX;
	uint32_t x586 = 13U;
	int8_t x588 = 0;
	int32_t t146 = 1345;

    t146 = (x585*(x586==(x587>x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int8_t x590 = -1;
	int64_t x592 = INT64_MAX;
	volatile int64_t t147 = -3LL;

    t147 = (x589*(x590==(x591>x592)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 260320704LLU;
	volatile uint64_t x594 = 14164LLU;
	int32_t x595 = INT32_MAX;
	static int32_t x596 = INT32_MIN;
	uint64_t t148 = 1051LLU;

    t148 = (x593*(x594==(x595>x596)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MIN;
	uint64_t x598 = 63LLU;
	volatile int8_t x599 = INT8_MIN;
	uint8_t x600 = UINT8_MAX;
	int32_t t149 = -53199;

    t149 = (x597*(x598==(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 93186136895LL;
	int16_t x602 = -1;
	int32_t x603 = -1;
	int8_t x604 = -1;
	int64_t t150 = -96185987415935LL;

    t150 = (x601*(x602==(x603>x604)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = 141;
	uint64_t x608 = UINT64_MAX;
	int32_t t151 = -6;

    t151 = (x605*(x606==(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 30;
	uint32_t x610 = 6296295U;
	volatile int64_t x612 = INT64_MIN;
	volatile int32_t t152 = -304434;

    t152 = (x609*(x610==(x611>x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int16_t x614 = 2;
	volatile int32_t t153 = 11;

    t153 = (x613*(x614==(x615>x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 1;
	int8_t x618 = INT8_MIN;
	volatile int16_t x619 = INT16_MIN;
	volatile int8_t x620 = 6;
	static volatile int32_t t154 = 38497991;

    t154 = (x617*(x618==(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	uint32_t x622 = 0U;
	uint32_t x623 = 333U;
	int8_t x624 = -1;

    t155 = (x621*(x622==(x623>x624)));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x626 = INT64_MAX;
	static int8_t x628 = -51;

    t156 = (x625*(x626==(x627>x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int32_t x630 = -1;
	volatile int8_t x631 = INT8_MIN;
	static int32_t x632 = INT32_MIN;
	int64_t t157 = -1564347445042060LL;

    t157 = (x629*(x630==(x631>x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = UINT16_MAX;
	int8_t x635 = -1;
	int32_t t158 = 2068478;

    t158 = (x633*(x634==(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 0;
	int16_t x639 = INT16_MIN;
	static uint16_t x640 = 11U;
	int32_t t159 = 18915;

    t159 = (x637*(x638==(x639>x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	int32_t x643 = INT32_MIN;
	static volatile int8_t x644 = -1;

    t160 = (x641*(x642==(x643>x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 8489U;
	volatile int8_t x646 = INT8_MAX;
	int16_t x647 = -1;
	int16_t x648 = INT16_MAX;
	volatile int32_t t161 = 12628;

    t161 = (x645*(x646==(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	static int8_t x650 = INT8_MAX;
	int16_t x651 = INT16_MAX;
	uint64_t x652 = 7897595737007LLU;
	volatile int32_t t162 = -64704508;

    t162 = (x649*(x650==(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 8;
	int16_t x654 = INT16_MIN;
	int32_t x656 = 116639;

    t163 = (x653*(x654==(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint8_t x658 = UINT8_MAX;
	int16_t x660 = -6243;
	volatile int32_t t164 = -32;

    t164 = (x657*(x658==(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint8_t x663 = 34U;
	int32_t t165 = 1092;

    t165 = (x661*(x662==(x663>x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	static uint8_t x666 = UINT8_MAX;
	int64_t x667 = INT64_MIN;
	static volatile int32_t t166 = 10131;

    t166 = (x665*(x666==(x667>x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	int32_t x670 = INT32_MAX;
	uint16_t x671 = UINT16_MAX;
	int16_t x672 = 68;
	int32_t t167 = -7;

    t167 = (x669*(x670==(x671>x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 5U;
	int64_t x676 = INT64_MIN;
	int32_t t168 = -12839504;

    t168 = (x673*(x674==(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	int8_t x678 = 0;
	static uint64_t x680 = 7004113693LLU;
	int32_t t169 = 0;

    t169 = (x677*(x678==(x679>x680)));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	volatile int8_t x682 = INT8_MAX;
	volatile int32_t x683 = -1;
	uint16_t x684 = 1051U;
	static int32_t t170 = 6;

    t170 = (x681*(x682==(x683>x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = -1;
	int8_t x686 = -1;
	uint8_t x688 = UINT8_MAX;
	int32_t t171 = 56786;

    t171 = (x685*(x686==(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x689 = 2U;
	int16_t x690 = 0;
	volatile int64_t x691 = -1LL;
	static int16_t x692 = INT16_MIN;

    t172 = (x689*(x690==(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int16_t x694 = INT16_MAX;
	volatile uint64_t x695 = 12LLU;
	int8_t x696 = 3;
	volatile int32_t t173 = -1178478;

    t173 = (x693*(x694==(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -6;
	volatile int64_t x698 = -1884327825673025LL;
	int32_t x699 = INT32_MIN;
	static volatile int8_t x700 = INT8_MAX;

    t174 = (x697*(x698==(x699>x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x703 = -1;
	uint32_t x704 = UINT32_MAX;
	volatile int64_t t175 = -25174677LL;

    t175 = (x701*(x702==(x703>x704)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = -8;
	uint32_t x707 = 7U;
	int8_t x708 = INT8_MIN;
	static volatile int64_t t176 = 108997LL;

    t176 = (x705*(x706==(x707>x708)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	static int16_t x710 = INT16_MIN;
	uint32_t x711 = 25U;
	static int8_t x712 = INT8_MIN;
	volatile int64_t t177 = -25003693LL;

    t177 = (x709*(x710==(x711>x712)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = INT16_MIN;
	int16_t x715 = -1;
	volatile uint64_t x716 = 2873354125294996546LLU;
	static volatile int32_t t178 = -203813226;

    t178 = (x713*(x714==(x715>x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = -260536392;
	int32_t x719 = -1;
	volatile int8_t x720 = INT8_MAX;
	uint32_t t179 = 25U;

    t179 = (x717*(x718==(x719>x720)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	static int32_t x722 = INT32_MIN;
	int8_t x723 = INT8_MIN;
	uint8_t x724 = UINT8_MAX;
	int32_t t180 = 1;

    t180 = (x721*(x722==(x723>x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	uint8_t x726 = 82U;
	static volatile uint32_t x728 = UINT32_MAX;

    t181 = (x725*(x726==(x727>x728)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 5;
	static int16_t x730 = 3101;
	volatile int64_t x731 = -18227206456043LL;
	static int64_t x732 = INT64_MIN;
	volatile int32_t t182 = -3324335;

    t182 = (x729*(x730==(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = -1;
	int64_t x735 = -53605419292LL;
	volatile int8_t x736 = INT8_MAX;
	int32_t t183 = -1057865662;

    t183 = (x733*(x734==(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -10;
	volatile int64_t x738 = -1LL;
	int32_t t184 = -1;

    t184 = (x737*(x738==(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MAX;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	static uint16_t x744 = UINT16_MAX;

    t185 = (x741*(x742==(x743>x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	static uint16_t x747 = 639U;
	int32_t t186 = -440137272;

    t186 = (x745*(x746==(x747>x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x749 = UINT8_MAX;
	uint64_t x750 = 6408503LLU;
	uint64_t x751 = 348LLU;
	int64_t x752 = 26440564247556LL;
	int32_t t187 = 10772;

    t187 = (x749*(x750==(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MAX;
	volatile uint8_t x754 = 0U;
	uint8_t x755 = UINT8_MAX;
	int32_t x756 = -1;
	int32_t t188 = -72668507;

    t188 = (x753*(x754==(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = -1;
	int64_t x759 = INT64_MIN;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t189 = -5;

    t189 = (x757*(x758==(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile uint32_t x762 = 2U;
	int8_t x763 = INT8_MIN;
	uint32_t x764 = 100U;

    t190 = (x761*(x762==(x763>x764)));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = 7;
	int64_t x766 = INT64_MAX;
	uint16_t x767 = 49U;
	uint32_t x768 = 1025687U;

    t191 = (x765*(x766==(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x770 = 7U;
	uint64_t x771 = UINT64_MAX;
	int32_t x772 = 28915;
	int32_t t192 = -502;

    t192 = (x769*(x770==(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x774 = -1;
	int16_t x775 = INT16_MAX;
	volatile int8_t x776 = -59;

    t193 = (x773*(x774==(x775>x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	static uint64_t x778 = UINT64_MAX;
	static int64_t x779 = INT64_MIN;
	int8_t x780 = INT8_MIN;
	volatile int32_t t194 = 355719;

    t194 = (x777*(x778==(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x781 = 0U;
	uint16_t x782 = 2U;
	int32_t x783 = -7847087;
	uint32_t t195 = 30540U;

    t195 = (x781*(x782==(x783>x784)));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	int64_t x786 = -97244301233LL;
	int8_t x787 = -1;
	uint32_t x788 = UINT32_MAX;

    t196 = (x785*(x786==(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = INT16_MAX;
	volatile uint16_t x791 = 6469U;
	int64_t x792 = -442380209428576LL;
	volatile int32_t t197 = 117986;

    t197 = (x789*(x790==(x791>x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MAX;
	int8_t x795 = -20;
	int64_t x796 = -14171LL;
	volatile int32_t t198 = 51;

    t198 = (x793*(x794==(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	uint32_t x798 = 1U;
	static int32_t x799 = -1;
	static uint64_t x800 = 3806LLU;
	volatile int32_t t199 = -450757443;

    t199 = (x797*(x798==(x799>x800)));

    if (t199 != -128) { NG(); } else { ; }
	
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

