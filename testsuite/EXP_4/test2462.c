
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

uint16_t x2 = UINT16_MAX;
static uint64_t x12 = UINT64_MAX;
int32_t x15 = -1;
static uint16_t x16 = UINT16_MAX;
volatile uint32_t x24 = 354U;
volatile int32_t t7 = -818489681;
volatile int8_t x41 = INT8_MIN;
int16_t x46 = -327;
uint64_t x47 = UINT64_MAX;
int32_t t11 = 6632;
uint8_t x53 = UINT8_MAX;
uint64_t x54 = UINT64_MAX;
int16_t x57 = INT16_MIN;
volatile int64_t x58 = -1LL;
volatile int32_t t14 = 11;
volatile uint64_t x61 = 17654965755262008LLU;
uint16_t x68 = 3724U;
int32_t x71 = INT32_MIN;
uint16_t x73 = UINT16_MAX;
static int16_t x74 = -1;
int32_t t18 = -179;
static int64_t x79 = INT64_MAX;
int16_t x80 = INT16_MAX;
int32_t t19 = -3194;
uint32_t x83 = 19U;
volatile int32_t t20 = -16576;
static volatile int32_t x87 = -1;
int64_t x93 = INT64_MIN;
volatile int16_t x95 = INT16_MAX;
volatile int64_t x96 = INT64_MIN;
volatile int64_t t23 = 27LL;
uint8_t x98 = 73U;
int32_t t25 = 10610;
int32_t x107 = -5;
int16_t x116 = INT16_MIN;
int32_t x120 = INT32_MIN;
volatile int64_t x122 = INT64_MIN;
int32_t x124 = -942;
int64_t x128 = -109LL;
int32_t x130 = INT32_MIN;
uint32_t t32 = 187U;
static uint64_t x135 = 189095894989363340LLU;
int8_t x138 = -1;
int64_t x139 = INT64_MAX;
volatile uint16_t x142 = UINT16_MAX;
int8_t x147 = INT8_MIN;
volatile int16_t x149 = INT16_MIN;
int64_t x156 = 3132815046965249157LL;
uint16_t x164 = UINT16_MAX;
int32_t t41 = 30360;
int64_t x179 = -1LL;
int32_t t44 = 15979;
volatile int64_t x184 = INT64_MIN;
int64_t x185 = -272969350LL;
volatile int8_t x186 = INT8_MIN;
volatile int64_t t46 = -90054759LL;
int64_t x200 = INT64_MIN;
int32_t x203 = INT32_MAX;
volatile int32_t t50 = -28484898;
int64_t x208 = 15121400934040539LL;
volatile int64_t x211 = -1LL;
uint64_t x220 = 5LLU;
int64_t x222 = INT64_MAX;
uint32_t x225 = UINT32_MAX;
int32_t x229 = INT32_MIN;
int32_t t57 = 17731613;
int16_t x239 = -1;
int16_t x241 = INT16_MIN;
int32_t t60 = 13068;
static int64_t x247 = -2938878948102514LL;
uint64_t x249 = 109LLU;
int32_t x254 = INT32_MAX;
static volatile int32_t t63 = 1;
static volatile int32_t x259 = INT32_MIN;
uint64_t x262 = 28387LLU;
int32_t x265 = INT32_MIN;
int16_t x273 = -1;
uint8_t x277 = 75U;
static int64_t x284 = INT64_MIN;
int16_t x291 = -1;
int64_t x307 = INT64_MAX;
int16_t x311 = 13173;
int16_t x312 = INT16_MAX;
uint8_t x320 = UINT8_MAX;
int32_t t79 = 198836684;
static volatile uint64_t x321 = 28043386012040LLU;
static int8_t x326 = -6;
static volatile int8_t x329 = -1;
int32_t x331 = -1;
volatile int8_t x345 = -3;
int16_t x349 = 597;
static int64_t x354 = 22966673901372409LL;
int32_t t89 = 695873;
volatile int32_t x361 = -1;
static uint64_t x364 = 27457724518LLU;
volatile int8_t x365 = -17;
uint8_t x368 = UINT8_MAX;
uint64_t x372 = UINT64_MAX;
volatile int64_t t92 = -69LL;
int16_t x374 = -165;
int16_t x377 = -1;
uint32_t x381 = 277497U;
uint32_t t95 = 5U;
uint8_t x385 = 1U;
int64_t x391 = INT64_MIN;
int32_t x393 = INT32_MIN;
static int8_t x394 = INT8_MIN;
int64_t x395 = 45842212678448621LL;
volatile uint16_t x396 = 22364U;
int32_t t98 = 62022236;
static uint8_t x397 = 89U;
int32_t x400 = INT32_MAX;
static volatile int32_t t100 = 1146538;
int64_t x405 = INT64_MIN;
int64_t x409 = INT64_MIN;
int64_t x413 = INT64_MIN;
static volatile int8_t x425 = -1;
int32_t x431 = 974;
int8_t x436 = INT8_MIN;
int16_t x438 = -5;
int32_t x449 = -1;
uint32_t t113 = 2U;
uint16_t x459 = 7093U;
static int32_t x463 = -1;
int16_t x466 = -1;
volatile int64_t x472 = -1LL;
volatile int32_t x479 = INT32_MIN;
int64_t t120 = 180130733518LL;
int16_t x487 = -1;
int64_t x493 = -1LL;
static uint32_t x496 = 1078745771U;
uint16_t x510 = UINT16_MAX;
volatile int64_t t128 = 1LL;
int16_t x517 = 68;
int32_t x518 = -1;
static int32_t t129 = 9222;
static int8_t x522 = INT8_MIN;
static volatile int64_t x524 = 5277625621084813LL;
static uint64_t x531 = UINT64_MAX;
static int32_t x532 = INT32_MAX;
int32_t t132 = -402095109;
uint8_t x534 = 0U;
static uint32_t x544 = 5568969U;
int8_t x546 = INT8_MIN;
int64_t x547 = INT64_MIN;
static int16_t x548 = 430;
volatile int32_t x550 = 66343;
volatile uint64_t t138 = 1771493844769270LLU;
int32_t x561 = INT32_MAX;
int8_t x562 = -1;
volatile int8_t x566 = 0;
int8_t x568 = INT8_MAX;
int8_t x569 = INT8_MIN;
uint64_t x575 = UINT64_MAX;
int32_t t143 = 1925310;
volatile int64_t t144 = -4016987660LL;
uint32_t x581 = 5U;
int8_t x583 = INT8_MIN;
volatile uint16_t x586 = 3999U;
uint8_t x588 = 0U;
int32_t t146 = 1604010;
static uint64_t x590 = 11532092735258LLU;
volatile int64_t x591 = -1LL;
volatile int16_t x600 = -806;
volatile int8_t x603 = -1;
volatile int32_t t150 = -578796;
int8_t x607 = INT8_MIN;
int64_t x615 = 1081417660797224570LL;
int8_t x618 = INT8_MIN;
volatile int64_t x620 = 1LL;
int8_t x623 = 1;
int32_t x624 = INT32_MAX;
volatile int32_t t155 = -24;
static volatile int64_t t157 = 1977536601464538LL;
volatile uint64_t t158 = 57017261LLU;
int32_t x639 = -3109;
static uint64_t x646 = 401601567448LLU;
int16_t x648 = -11273;
int64_t x651 = INT64_MIN;
uint32_t x653 = 97641U;
uint8_t x655 = UINT8_MAX;
static int64_t x661 = -1LL;
static uint8_t x665 = 123U;
static int32_t x668 = -1;
static int16_t x671 = INT16_MAX;
volatile uint64_t x672 = 102289784327LLU;
static volatile int32_t t167 = 57;
static uint64_t x674 = 285769162520LLU;
static volatile int64_t x680 = -25LL;
int64_t x683 = INT64_MIN;
int32_t t170 = 22607;
static uint64_t x687 = 664058LLU;
uint16_t x694 = 11569U;
int64_t x695 = 32134211530LL;
int8_t x699 = -1;
volatile uint8_t x700 = 29U;
volatile int16_t x702 = INT16_MIN;
static volatile int32_t t175 = 86398;
volatile uint16_t x710 = UINT16_MAX;
static uint8_t x713 = 15U;
int16_t x715 = INT16_MAX;
int32_t x717 = INT32_MAX;
int32_t x719 = -1;
int32_t t179 = -1035890;
uint64_t x728 = UINT64_MAX;
int32_t x733 = 89582818;
volatile int16_t x735 = -1;
int64_t x737 = INT64_MIN;
static uint8_t x746 = 2U;
volatile int32_t t187 = -1211255;
static int64_t x753 = INT64_MAX;
int64_t x767 = -287951973286298358LL;
volatile int64_t t191 = 70042376LL;
static int32_t x777 = -1;
static volatile int32_t x780 = 4679418;
static int16_t x783 = INT16_MIN;
int8_t x784 = 7;
int64_t x799 = -504LL;


void f0(void) {
    	uint32_t x1 = 1544505676U;
	static uint64_t x3 = 26173754727230LLU;
	int32_t x4 = INT32_MIN;
	static uint32_t t0 = 1519864U;

    t0 = (x1&(x2==(x3|x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	static int32_t x6 = INT32_MIN;
	uint16_t x7 = 6023U;
	static int32_t x8 = -6;
	int32_t t1 = 765499861;

    t1 = (x5&(x6==(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 2;
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	static volatile int32_t t2 = -11135;

    t2 = (x9&(x10==(x11|x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = -1;
	int64_t x14 = 1004133LL;
	int32_t t3 = -4138604;

    t3 = (x13&(x14==(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -1;
	volatile uint64_t x18 = UINT64_MAX;
	int16_t x19 = -1;
	volatile int8_t x20 = -1;
	int32_t t4 = -222;

    t4 = (x17&(x18==(x19|x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	uint32_t x22 = 133U;
	static uint32_t x23 = 1319463128U;
	int32_t t5 = -29827;

    t5 = (x21&(x22==(x23|x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 445982258684782LLU;
	int16_t x26 = INT16_MAX;
	int64_t x27 = -2504758269926192336LL;
	static int32_t x28 = INT32_MIN;
	uint64_t t6 = 440897160LLU;

    t6 = (x25&(x26==(x27|x28)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 48;
	int32_t x30 = -33;
	volatile uint64_t x31 = 53418LLU;
	volatile int8_t x32 = INT8_MAX;

    t7 = (x29&(x30==(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	uint16_t x34 = 76U;
	int64_t x35 = INT64_MAX;
	int8_t x36 = 22;
	static int32_t t8 = -1;

    t8 = (x33&(x34==(x35|x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 20;
	int32_t x38 = INT32_MIN;
	volatile int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = 11;

    t9 = (x37&(x38==(x39|x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 30958U;
	volatile uint16_t x43 = 5U;
	int16_t x44 = -198;
	volatile int32_t t10 = 1;

    t10 = (x41&(x42==(x43|x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 2U;
	int32_t x48 = -1;

    t11 = (x45&(x46==(x47|x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -11540;
	int8_t x50 = -1;
	uint8_t x51 = 3U;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -29403;

    t12 = (x49&(x50==(x51|x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 119454;

    t13 = (x53&(x54==(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x59 = 1565U;
	volatile int16_t x60 = -1;

    t14 = (x57&(x58==(x59|x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	uint32_t x63 = 8340U;
	static volatile int32_t x64 = INT32_MIN;
	volatile uint64_t t15 = 1979210888LLU;

    t15 = (x61&(x62==(x63|x64)));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = -1;
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = INT32_MIN;
	volatile int32_t t16 = -103;

    t16 = (x65&(x66==(x67|x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 623LLU;
	static int8_t x70 = -45;
	volatile int16_t x72 = INT16_MIN;
	static uint64_t t17 = 132449154LLU;

    t17 = (x69&(x70==(x71|x72)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = INT8_MAX;
	volatile uint16_t x76 = UINT16_MAX;

    t18 = (x73&(x74==(x75|x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 424U;
	uint8_t x78 = 30U;

    t19 = (x77&(x78==(x79|x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1576542;
	int32_t x82 = INT32_MIN;
	int8_t x84 = -1;

    t20 = (x81&(x82==(x83|x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	volatile int8_t x86 = INT8_MIN;
	uint32_t x88 = 968855627U;
	volatile int32_t t21 = -45;

    t21 = (x85&(x86==(x87|x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 26U;
	volatile int16_t x90 = INT16_MAX;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = 11404527;
	volatile int32_t t22 = -9311;

    t22 = (x89&(x90==(x91|x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 971U;

    t23 = (x93&(x94==(x95|x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	uint32_t x99 = 13650208U;
	volatile uint64_t x100 = 8743941786602465654LLU;
	volatile int64_t t24 = -373LL;

    t24 = (x97&(x98==(x99|x100)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	static volatile int32_t x102 = INT32_MAX;
	static uint16_t x103 = 1U;
	volatile int32_t x104 = INT32_MAX;

    t25 = (x101&(x102==(x103|x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int64_t x106 = -207706160265490272LL;
	uint64_t x108 = 3861202876912354LLU;
	int64_t t26 = 48793052LL;

    t26 = (x105&(x106==(x107|x108)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	volatile int64_t x110 = -294066942192482LL;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = 444LLU;
	static int32_t t27 = -451;

    t27 = (x109&(x110==(x111|x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = -1;
	int16_t x115 = INT16_MAX;
	volatile int32_t t28 = 45596;

    t28 = (x113&(x114==(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	uint16_t x118 = 1U;
	uint16_t x119 = 3U;
	volatile uint64_t t29 = 19LLU;

    t29 = (x117&(x118==(x119|x120)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = -624902654LL;
	int64_t x123 = -1LL;
	static int64_t t30 = -45409837534442LL;

    t30 = (x121&(x122==(x123|x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 593U;
	static volatile int64_t x126 = -4231416422113455LL;
	int64_t x127 = INT64_MIN;
	volatile int32_t t31 = -57829;

    t31 = (x125&(x126==(x127|x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 980807U;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = 0;

    t32 = (x129&(x130==(x131|x132)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 23;
	int16_t x134 = -1;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 633969;

    t33 = (x133&(x134==(x135|x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	uint16_t x140 = 13250U;
	int32_t t34 = 1608;

    t34 = (x137&(x138==(x139|x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x141 = 1U;
	uint8_t x143 = UINT8_MAX;
	uint32_t x144 = 222725U;
	static int32_t t35 = 285325049;

    t35 = (x141&(x142==(x143|x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	int32_t x146 = 10;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -67;

    t36 = (x145&(x146==(x147|x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x150 = -1;
	int64_t x151 = INT64_MAX;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = -238880;

    t37 = (x149&(x150==(x151|x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = 0LL;
	volatile uint16_t x155 = 5U;
	int32_t t38 = -13;

    t38 = (x153&(x154==(x155|x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MIN;
	static int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	volatile int32_t x160 = -34422356;
	volatile int32_t t39 = 0;

    t39 = (x157&(x158==(x159|x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	static int16_t x162 = 5607;
	static uint32_t x163 = 590655U;
	static int32_t t40 = -350;

    t40 = (x161&(x162==(x163|x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x165 = UINT16_MAX;
	int8_t x166 = 1;
	int32_t x167 = INT32_MAX;
	uint8_t x168 = 22U;

    t41 = (x165&(x166==(x167|x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = 2284504U;
	int32_t t42 = 882;

    t42 = (x169&(x170==(x171|x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MAX;
	volatile int64_t x176 = INT64_MIN;
	static volatile int32_t t43 = 472012;

    t43 = (x173&(x174==(x175|x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 57;
	uint16_t x178 = UINT16_MAX;
	int32_t x180 = INT32_MIN;

    t44 = (x177&(x178==(x179|x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = UINT8_MAX;
	uint16_t x182 = 62U;
	uint8_t x183 = 8U;
	volatile int32_t t45 = -40;

    t45 = (x181&(x182==(x183|x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x187 = -1LL;
	uint64_t x188 = 616711164472754688LLU;

    t46 = (x185&(x186==(x187|x188)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 5U;
	int16_t x190 = 3228;
	int64_t x191 = INT64_MIN;
	int16_t x192 = -1;
	static int32_t t47 = -170;

    t47 = (x189&(x190==(x191|x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	static volatile int8_t x194 = INT8_MAX;
	static volatile int32_t x195 = -23;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 1181;

    t48 = (x193&(x194==(x195|x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 451;
	volatile uint32_t x198 = UINT32_MAX;
	int32_t x199 = -162810;
	static volatile int32_t t49 = 0;

    t49 = (x197&(x198==(x199|x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 7;
	int32_t x202 = INT32_MIN;
	volatile uint16_t x204 = 0U;

    t50 = (x201&(x202==(x203|x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	volatile uint16_t x206 = 16U;
	int32_t x207 = INT32_MIN;
	volatile int32_t t51 = 59657950;

    t51 = (x205&(x206==(x207|x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	int64_t x210 = -36386515257646LL;
	static volatile int16_t x212 = -698;
	static volatile int32_t t52 = 51065;

    t52 = (x209&(x210==(x211|x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	static int64_t x214 = -1LL;
	uint16_t x215 = 11685U;
	static int64_t x216 = -9688029LL;
	volatile int32_t t53 = -199198417;

    t53 = (x213&(x214==(x215|x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -60;
	uint64_t x218 = 118890343897388076LLU;
	volatile uint8_t x219 = UINT8_MAX;
	int32_t t54 = 0;

    t54 = (x217&(x218==(x219|x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 29348LLU;
	uint16_t x223 = 42U;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t55 = 1045150873898484LLU;

    t55 = (x221&(x222==(x223|x224)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = INT64_MIN;
	uint64_t x227 = UINT64_MAX;
	uint32_t x228 = 15460U;
	uint32_t t56 = 384453112U;

    t56 = (x225&(x226==(x227|x228)));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x230 = 38U;
	volatile int8_t x231 = -5;
	uint32_t x232 = UINT32_MAX;

    t57 = (x229&(x230==(x231|x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MIN;
	static int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -1;
	int32_t t58 = 226;

    t58 = (x233&(x234==(x235|x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int32_t x238 = -2259;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -3126133;

    t59 = (x237&(x238==(x239|x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = 3LL;
	volatile uint64_t x243 = 84075576LLU;
	volatile int16_t x244 = 67;

    t60 = (x241&(x242==(x243|x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	uint8_t x246 = UINT8_MAX;
	static uint64_t x248 = 72253400904716878LLU;
	static volatile uint32_t t61 = 3326677U;

    t61 = (x245&(x246==(x247|x248)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x250 = -1;
	uint32_t x251 = 20U;
	volatile int32_t x252 = INT32_MIN;
	static uint64_t t62 = 550858022562393LLU;

    t62 = (x249&(x250==(x251|x252)));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	volatile int16_t x255 = 3813;
	int16_t x256 = INT16_MAX;

    t63 = (x253&(x254==(x255|x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x257 = INT8_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	int64_t x260 = 24019084597714LL;
	static volatile int32_t t64 = 4;

    t64 = (x257&(x258==(x259|x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x261 = 680U;
	uint16_t x263 = 16U;
	static uint16_t x264 = 30850U;
	volatile uint32_t t65 = 185277107U;

    t65 = (x261&(x262==(x263|x264)));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	volatile uint64_t x268 = 4676402LLU;
	int32_t t66 = 117298243;

    t66 = (x265&(x266==(x267|x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -137910728LL;
	static int8_t x270 = INT8_MAX;
	static int32_t x271 = INT32_MAX;
	uint16_t x272 = 27419U;
	static volatile int64_t t67 = 73LL;

    t67 = (x269&(x270==(x271|x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile int64_t x276 = -31002858871068947LL;
	static volatile int32_t t68 = -6561;

    t68 = (x273&(x274==(x275|x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x278 = 31041377U;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 42424;

    t69 = (x277&(x278==(x279|x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MAX;
	static int8_t x283 = INT8_MIN;
	int32_t t70 = -2062678;

    t70 = (x281&(x282==(x283|x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 22U;
	static uint8_t x286 = UINT8_MAX;
	static int64_t x287 = INT64_MIN;
	int16_t x288 = -1;
	uint32_t t71 = 1879U;

    t71 = (x285&(x286==(x287|x288)));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x289 = -1;
	int32_t x290 = INT32_MIN;
	uint32_t x292 = 126U;
	volatile int32_t t72 = 15481;

    t72 = (x289&(x290==(x291|x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	int32_t x294 = INT32_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	volatile uint8_t x296 = 0U;
	int32_t t73 = -1;

    t73 = (x293&(x294==(x295|x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = -1;
	int8_t x298 = INT8_MAX;
	int64_t x299 = -1044873LL;
	int16_t x300 = INT16_MAX;
	static int32_t t74 = 1;

    t74 = (x297&(x298==(x299|x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 76U;
	uint64_t x302 = UINT64_MAX;
	uint32_t x303 = UINT32_MAX;
	volatile int64_t x304 = INT64_MAX;
	volatile int32_t t75 = -8995;

    t75 = (x301&(x302==(x303|x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	volatile int32_t x308 = 2;
	volatile int32_t t76 = -889737;

    t76 = (x305&(x306==(x307|x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	uint16_t x310 = 20U;
	volatile int64_t t77 = 700723378LL;

    t77 = (x309&(x310==(x311|x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	int64_t x314 = INT64_MIN;
	uint16_t x315 = 0U;
	volatile int8_t x316 = 3;
	int64_t t78 = 3407268597682737LL;

    t78 = (x313&(x314==(x315|x316)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	uint64_t x318 = 12871214181078980LLU;
	int8_t x319 = INT8_MIN;

    t79 = (x317&(x318==(x319|x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = -45140776372LL;
	volatile int32_t x323 = INT32_MAX;
	int32_t x324 = -1;
	static uint64_t t80 = 1471LLU;

    t80 = (x321&(x322==(x323|x324)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	int16_t x328 = -1;
	int64_t t81 = -50LL;

    t81 = (x325&(x326==(x327|x328)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x330 = INT8_MAX;
	uint32_t x332 = 0U;
	static int32_t t82 = -588374902;

    t82 = (x329&(x330==(x331|x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 737470512LL;
	static int64_t x334 = -1LL;
	volatile int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = -35165LL;

    t83 = (x333&(x334==(x335|x336)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	volatile int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	volatile uint16_t x340 = 1962U;
	volatile int32_t t84 = 3785;

    t84 = (x337&(x338==(x339|x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = UINT8_MAX;
	int16_t x342 = 25;
	int32_t x343 = -1;
	volatile uint32_t x344 = UINT32_MAX;
	static int32_t t85 = 860601;

    t85 = (x341&(x342==(x343|x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -14;
	static int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -34;

    t86 = (x345&(x346==(x347|x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = 2U;
	static int32_t x351 = INT32_MIN;
	uint32_t x352 = 546U;
	volatile int32_t t87 = -597407;

    t87 = (x349&(x350==(x351|x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = INT32_MIN;
	static int64_t x355 = INT64_MIN;
	volatile uint16_t x356 = 2713U;
	volatile int32_t t88 = 0;

    t88 = (x353&(x354==(x355|x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -299;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;

    t89 = (x357&(x358==(x359|x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	int32_t t90 = -39;

    t90 = (x361&(x362==(x363|x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = -1LL;
	static int16_t x367 = INT16_MAX;
	static int32_t t91 = 838686691;

    t91 = (x365&(x366==(x367|x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int8_t x370 = -1;
	uint8_t x371 = 7U;

    t92 = (x369&(x370==(x371|x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int64_t x375 = 56490895200LL;
	int8_t x376 = INT8_MAX;
	uint32_t t93 = 19U;

    t93 = (x373&(x374==(x375|x376)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = 2LL;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = -1;

    t94 = (x377&(x378==(x379|x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x382 = UINT64_MAX;
	volatile int64_t x383 = -1LL;
	uint64_t x384 = 853108766756957442LLU;

    t95 = (x381&(x382==(x383|x384)));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 262900;

    t96 = (x385&(x386==(x387|x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	int64_t x392 = -44LL;
	int32_t t97 = 111;

    t97 = (x389&(x390==(x391|x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    

    t98 = (x393&(x394==(x395|x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x398 = 16812153890051LLU;
	int16_t x399 = -1;
	static int32_t t99 = -653;

    t99 = (x397&(x398==(x399|x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 7U;
	int8_t x402 = -1;
	volatile int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;

    t100 = (x401&(x402==(x403|x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = -23676426LL;
	uint64_t x407 = 56LLU;
	volatile int64_t x408 = INT64_MAX;
	volatile int64_t t101 = -13973298LL;

    t101 = (x405&(x406==(x407|x408)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x410 = INT64_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	static int32_t x412 = INT32_MIN;
	int64_t t102 = -72014473417422482LL;

    t102 = (x409&(x410==(x411|x412)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x414 = 1240U;
	int8_t x415 = -3;
	static int16_t x416 = -31;
	int64_t t103 = 7LL;

    t103 = (x413&(x414==(x415|x416)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = -1;
	int16_t x419 = INT16_MIN;
	static uint64_t x420 = UINT64_MAX;
	int32_t t104 = 57;

    t104 = (x417&(x418==(x419|x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MAX;
	static volatile uint32_t x422 = 5U;
	int64_t x423 = -1LL;
	static volatile int8_t x424 = -1;
	int32_t t105 = -73482;

    t105 = (x421&(x422==(x423|x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = UINT64_MAX;
	int32_t x427 = -3357;
	uint64_t x428 = 914046216442597292LLU;
	int32_t t106 = 13985;

    t106 = (x425&(x426==(x427|x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -978;
	uint64_t x430 = 870248695237LLU;
	static int32_t x432 = 1310;
	volatile int32_t t107 = -34897785;

    t107 = (x429&(x430==(x431|x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	static volatile int64_t x434 = INT64_MIN;
	int16_t x435 = -5301;
	volatile int32_t t108 = -5785437;

    t108 = (x433&(x434==(x435|x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MAX;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = -37;
	volatile int32_t t109 = -7516;

    t109 = (x437&(x438==(x439|x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x441 = 1956692839573372268LLU;
	static int16_t x442 = INT16_MIN;
	static int32_t x443 = -1;
	int32_t x444 = INT32_MIN;
	uint64_t t110 = 1955LLU;

    t110 = (x441&(x442==(x443|x444)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = -1;
	volatile uint8_t x446 = 1U;
	int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MIN;
	int32_t t111 = -304518169;

    t111 = (x445&(x446==(x447|x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x450 = -14LL;
	static int16_t x451 = INT16_MAX;
	static int8_t x452 = INT8_MIN;
	int32_t t112 = 90576054;

    t112 = (x449&(x450==(x451|x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = 49227307U;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = -570358592616817897LL;
	static int32_t x456 = INT32_MIN;

    t113 = (x453&(x454==(x455|x456)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 4U;
	uint8_t x458 = 2U;
	uint32_t x460 = 444349982U;
	volatile int32_t t114 = -1028423;

    t114 = (x457&(x458==(x459|x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 68U;
	static int32_t x462 = -26773;
	static volatile int32_t x464 = INT32_MIN;
	int32_t t115 = -3481357;

    t115 = (x461&(x462==(x463|x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	volatile int16_t x467 = INT16_MAX;
	uint32_t x468 = 60667138U;
	static volatile uint32_t t116 = 116U;

    t116 = (x465&(x466==(x467|x468)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	static uint16_t x470 = UINT16_MAX;
	volatile uint8_t x471 = 1U;
	int32_t t117 = -7554508;

    t117 = (x469&(x470==(x471|x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MAX;
	volatile int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MAX;
	uint64_t x476 = UINT64_MAX;
	int32_t t118 = -331;

    t118 = (x473&(x474==(x475|x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = -212;
	uint64_t x478 = UINT64_MAX;
	static int64_t x480 = -1LL;
	volatile int32_t t119 = -4975;

    t119 = (x477&(x478==(x479|x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -7558684LL;
	int16_t x482 = 83;
	int8_t x483 = INT8_MAX;
	volatile int8_t x484 = INT8_MIN;

    t120 = (x481&(x482==(x483|x484)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	int8_t x486 = -1;
	int64_t x488 = INT64_MAX;
	int32_t t121 = -282562181;

    t121 = (x485&(x486==(x487|x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = 12U;
	uint8_t x490 = UINT8_MAX;
	uint32_t x491 = 0U;
	uint32_t x492 = UINT32_MAX;
	static volatile int32_t t122 = 1373809;

    t122 = (x489&(x490==(x491|x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	volatile int32_t x495 = -1;
	volatile int64_t t123 = 12724993869966446LL;

    t123 = (x493&(x494==(x495|x496)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	uint16_t x498 = UINT16_MAX;
	int32_t x499 = 3677273;
	static uint32_t x500 = 0U;
	int32_t t124 = 626213761;

    t124 = (x497&(x498==(x499|x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	static uint64_t x502 = 99667862758481LLU;
	volatile uint16_t x503 = 1U;
	int32_t x504 = -1;
	static int32_t t125 = 32843;

    t125 = (x501&(x502==(x503|x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x506 = -1;
	int8_t x507 = -1;
	static int32_t x508 = INT32_MIN;
	int32_t t126 = -106829;

    t126 = (x505&(x506==(x507|x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -55;
	int8_t x511 = INT8_MAX;
	static int16_t x512 = INT16_MIN;
	volatile int32_t t127 = 1376270;

    t127 = (x509&(x510==(x511|x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MIN;
	uint64_t x514 = 377323817403LLU;
	int32_t x515 = INT32_MIN;
	uint8_t x516 = 0U;

    t128 = (x513&(x514==(x515|x516)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x519 = UINT16_MAX;
	uint8_t x520 = 48U;

    t129 = (x517&(x518==(x519|x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x521 = UINT64_MAX;
	int16_t x523 = 14857;
	volatile uint64_t t130 = 103407LLU;

    t130 = (x521&(x522==(x523|x524)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = 2334;
	int16_t x526 = INT16_MIN;
	int16_t x527 = 2;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t131 = 479;

    t131 = (x525&(x526==(x527|x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = INT8_MAX;
	int16_t x530 = -1;

    t132 = (x529&(x530==(x531|x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = 6698;
	uint16_t x535 = 26709U;
	int8_t x536 = INT8_MAX;
	static int32_t t133 = -47622398;

    t133 = (x533&(x534==(x535|x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -33013227;
	volatile int64_t x538 = 320144LL;
	static int32_t x539 = -22;
	int16_t x540 = INT16_MIN;
	volatile int32_t t134 = 11857;

    t134 = (x537&(x538==(x539|x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 972677814;
	int32_t x542 = INT32_MIN;
	int8_t x543 = 1;
	volatile int32_t t135 = 3417;

    t135 = (x541&(x542==(x543|x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MAX;
	volatile int32_t t136 = 5534;

    t136 = (x545&(x546==(x547|x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	volatile int16_t x551 = INT16_MIN;
	volatile int8_t x552 = INT8_MIN;
	volatile uint32_t t137 = 3239U;

    t137 = (x549&(x550==(x551|x552)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 78299LLU;
	volatile int16_t x554 = INT16_MIN;
	static int64_t x555 = INT64_MIN;
	int64_t x556 = INT64_MIN;

    t138 = (x553&(x554==(x555|x556)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = 461510U;
	int16_t x558 = 2281;
	int8_t x559 = -1;
	int16_t x560 = INT16_MIN;
	uint32_t t139 = 1964278784U;

    t139 = (x557&(x558==(x559|x560)));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x563 = INT32_MIN;
	static uint32_t x564 = 800U;
	static volatile int32_t t140 = 953;

    t140 = (x561&(x562==(x563|x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = -63;
	int8_t x567 = INT8_MIN;
	volatile int32_t t141 = 93130796;

    t141 = (x565&(x566==(x567|x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x570 = -8;
	volatile int32_t x571 = INT32_MAX;
	uint16_t x572 = 0U;
	static volatile int32_t t142 = 49;

    t142 = (x569&(x570==(x571|x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 39;
	uint32_t x574 = 3U;
	int64_t x576 = -341LL;

    t143 = (x573&(x574==(x575|x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -1LL;
	static int64_t x578 = INT64_MAX;
	volatile uint16_t x579 = 31845U;
	volatile int16_t x580 = INT16_MIN;

    t144 = (x577&(x578==(x579|x580)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x582 = INT8_MAX;
	int8_t x584 = 11;
	volatile uint32_t t145 = 136U;

    t145 = (x581&(x582==(x583|x584)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -1;
	int32_t x587 = -1;

    t146 = (x585&(x586==(x587|x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = 55;
	uint16_t x592 = 31U;
	int32_t t147 = 17;

    t147 = (x589&(x590==(x591|x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = -7;
	int8_t x594 = INT8_MIN;
	uint32_t x595 = 4899918U;
	uint64_t x596 = 59LLU;
	volatile int32_t t148 = -14050212;

    t148 = (x593&(x594==(x595|x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -20;
	int64_t x598 = -1LL;
	uint32_t x599 = UINT32_MAX;
	volatile int32_t t149 = 813143705;

    t149 = (x597&(x598==(x599|x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	static uint32_t x602 = 0U;
	volatile int16_t x604 = -2;

    t150 = (x601&(x602==(x603|x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 0;
	volatile int64_t x606 = 14419782837551918LL;
	int16_t x608 = INT16_MIN;
	static volatile int32_t t151 = -142;

    t151 = (x605&(x606==(x607|x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -18944635;
	uint8_t x610 = 93U;
	uint32_t x611 = 181U;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t152 = 1;

    t152 = (x609&(x610==(x611|x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -16289;
	int8_t x614 = 9;
	int64_t x616 = -6099LL;
	static volatile int32_t t153 = -2675;

    t153 = (x613&(x614==(x615|x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 159U;
	volatile int32_t x619 = -550478;
	int32_t t154 = -44920;

    t154 = (x617&(x618==(x619|x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	int32_t x622 = -17568;

    t155 = (x621&(x622==(x623|x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int64_t x626 = INT64_MAX;
	static volatile int8_t x627 = INT8_MAX;
	static int8_t x628 = INT8_MIN;
	static int32_t t156 = -2038;

    t156 = (x625&(x626==(x627|x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MIN;
	uint64_t x630 = UINT64_MAX;
	uint16_t x631 = 1018U;
	int16_t x632 = INT16_MIN;

    t157 = (x629&(x630==(x631|x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x633 = 253783LLU;
	int16_t x634 = INT16_MIN;
	int8_t x635 = -1;
	static volatile uint16_t x636 = 2U;

    t158 = (x633&(x634==(x635|x636)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = INT64_MIN;
	int16_t x638 = -1;
	static int32_t x640 = -1;
	int64_t t159 = -18882994821257779LL;

    t159 = (x637&(x638==(x639|x640)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	static uint64_t x642 = 80108LLU;
	uint32_t x643 = 105429153U;
	uint64_t x644 = 287640095261947LLU;
	uint32_t t160 = 156010146U;

    t160 = (x641&(x642==(x643|x644)));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	static volatile int16_t x647 = INT16_MIN;
	volatile int32_t t161 = 7;

    t161 = (x645&(x646==(x647|x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = -4;
	static volatile int8_t x652 = INT8_MIN;
	int32_t t162 = -487981;

    t162 = (x649&(x650==(x651|x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x654 = 165U;
	int8_t x656 = 3;
	volatile uint32_t t163 = 2U;

    t163 = (x653&(x654==(x655|x656)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = -97;
	static int16_t x658 = -902;
	volatile int64_t x659 = -4339690698LL;
	static volatile int64_t x660 = -1LL;
	static volatile int32_t t164 = -13606897;

    t164 = (x657&(x658==(x659|x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -1;
	int32_t x663 = 817310123;
	int64_t x664 = -1172LL;
	static volatile int64_t t165 = 17736LL;

    t165 = (x661&(x662==(x663|x664)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = 60400180231LLU;
	int8_t x667 = INT8_MIN;
	volatile int32_t t166 = 10577;

    t166 = (x665&(x666==(x667|x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	uint8_t x670 = 1U;

    t167 = (x669&(x670==(x671|x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	volatile uint8_t x675 = UINT8_MAX;
	uint64_t x676 = 100600133LLU;
	int32_t t168 = 5682;

    t168 = (x673&(x674==(x675|x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MAX;
	static int32_t x678 = INT32_MIN;
	int32_t x679 = -1;
	int64_t t169 = -17396382801408227LL;

    t169 = (x677&(x678==(x679|x680)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 44;
	uint64_t x682 = UINT64_MAX;
	volatile uint8_t x684 = 9U;

    t170 = (x681&(x682==(x683|x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	uint64_t x686 = UINT64_MAX;
	static uint8_t x688 = 1U;
	volatile int32_t t171 = -742;

    t171 = (x685&(x686==(x687|x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 6U;
	uint64_t x690 = UINT64_MAX;
	int8_t x691 = -48;
	int8_t x692 = 41;
	volatile int32_t t172 = 1;

    t172 = (x689&(x690==(x691|x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 3U;
	int32_t x696 = INT32_MIN;
	int32_t t173 = 2028501;

    t173 = (x693&(x694==(x695|x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = -1;
	int32_t x698 = INT32_MAX;
	static volatile int32_t t174 = 6053118;

    t174 = (x697&(x698==(x699|x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = 0;
	volatile int8_t x703 = INT8_MIN;
	uint64_t x704 = UINT64_MAX;

    t175 = (x701&(x702==(x703|x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int16_t x706 = INT16_MAX;
	int32_t x707 = INT32_MIN;
	volatile int8_t x708 = INT8_MAX;
	int32_t t176 = -62775354;

    t176 = (x705&(x706==(x707|x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 29779U;
	int64_t x711 = INT64_MIN;
	uint16_t x712 = 17668U;
	volatile int32_t t177 = -490692002;

    t177 = (x709&(x710==(x711|x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x714 = 0U;
	static int8_t x716 = 0;
	int32_t t178 = 1567;

    t178 = (x713&(x714==(x715|x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x718 = -1;
	volatile int8_t x720 = INT8_MAX;

    t179 = (x717&(x718==(x719|x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 1U;
	uint16_t x722 = UINT16_MAX;
	int8_t x723 = -1;
	int32_t x724 = -10470927;
	volatile int32_t t180 = -1;

    t180 = (x721&(x722==(x723|x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 2U;
	int16_t x726 = -1;
	static int16_t x727 = INT16_MAX;
	volatile int32_t t181 = 0;

    t181 = (x725&(x726==(x727|x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x729 = UINT16_MAX;
	int64_t x730 = -53LL;
	int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MIN;
	int32_t t182 = 1552588;

    t182 = (x729&(x730==(x731|x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x734 = INT32_MIN;
	int8_t x736 = 21;
	volatile int32_t t183 = 52227377;

    t183 = (x733&(x734==(x735|x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x738 = INT16_MIN;
	int64_t x739 = 18202LL;
	uint64_t x740 = 1783181LLU;
	static volatile int64_t t184 = -31751005501872LL;

    t184 = (x737&(x738==(x739|x740)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int8_t x742 = INT8_MAX;
	uint32_t x743 = 2U;
	int8_t x744 = INT8_MIN;
	volatile uint64_t t185 = 190LLU;

    t185 = (x741&(x742==(x743|x744)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = 10U;
	int64_t x747 = INT64_MAX;
	int16_t x748 = INT16_MIN;
	volatile uint32_t t186 = 1U;

    t186 = (x745&(x746==(x747|x748)));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static uint64_t x750 = 49579644069LLU;
	uint8_t x751 = 1U;
	int8_t x752 = 57;

    t187 = (x749&(x750==(x751|x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;
	uint16_t x755 = UINT16_MAX;
	volatile int32_t x756 = INT32_MIN;
	int64_t t188 = -1202945272329357LL;

    t188 = (x753&(x754==(x755|x756)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	static uint8_t x758 = UINT8_MAX;
	int16_t x759 = INT16_MAX;
	volatile int8_t x760 = -1;
	volatile int32_t t189 = 0;

    t189 = (x757&(x758==(x759|x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MAX;
	int32_t x762 = INT32_MIN;
	int32_t x763 = -1;
	int16_t x764 = -1;
	int32_t t190 = -979728174;

    t190 = (x761&(x762==(x763|x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = -14LL;
	uint32_t x766 = 1139U;
	int8_t x768 = -1;

    t191 = (x765&(x766==(x767|x768)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x769 = 793914095181LL;
	int32_t x770 = INT32_MAX;
	int64_t x771 = INT64_MAX;
	int16_t x772 = 1161;
	int64_t t192 = 787731606555809143LL;

    t192 = (x769&(x770==(x771|x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	int32_t x774 = -1;
	volatile int64_t x775 = INT64_MIN;
	uint64_t x776 = UINT64_MAX;
	volatile int64_t t193 = 112160094LL;

    t193 = (x773&(x774==(x775|x776)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x778 = -1;
	static int64_t x779 = INT64_MIN;
	int32_t t194 = -5029933;

    t194 = (x777&(x778==(x779|x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 211U;
	volatile int8_t x782 = -1;
	static volatile uint32_t t195 = 5U;

    t195 = (x781&(x782==(x783|x784)));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 179U;
	int16_t x786 = -1;
	int32_t x787 = INT32_MIN;
	static int64_t x788 = -1LL;
	static volatile int32_t t196 = 114;

    t196 = (x785&(x786==(x787|x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	int64_t x790 = 4310491325124LL;
	volatile int8_t x791 = INT8_MIN;
	int16_t x792 = INT16_MAX;
	volatile int32_t t197 = -252830012;

    t197 = (x789&(x790==(x791|x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	static uint64_t x794 = 276560560638619930LLU;
	uint32_t x795 = UINT32_MAX;
	volatile int64_t x796 = INT64_MAX;
	static int32_t t198 = -5;

    t198 = (x793&(x794==(x795|x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = -4873285LL;
	int8_t x798 = INT8_MIN;
	uint64_t x800 = 768135LLU;
	int64_t t199 = 20358481651312801LL;

    t199 = (x797&(x798==(x799|x800)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

