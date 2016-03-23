
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

int32_t x3 = INT32_MAX;
static uint64_t x12 = UINT64_MAX;
volatile uint64_t t2 = UINT64_MAX;
int64_t x16 = INT64_MIN;
static int64_t t3 = INT64_MIN;
volatile uint32_t t4 = 291328354U;
uint16_t x22 = UINT16_MAX;
int64_t x24 = INT64_MAX;
int64_t t5 = INT64_MAX;
static volatile int8_t x27 = INT8_MIN;
int8_t x36 = INT8_MIN;
int16_t x46 = -1;
volatile int64_t t12 = INT64_MIN;
int64_t x57 = -1LL;
volatile int16_t x59 = INT16_MAX;
volatile int16_t x64 = 25;
volatile int32_t t15 = -14;
volatile int8_t x65 = -1;
volatile int64_t t16 = 16231LL;
int16_t x70 = INT16_MIN;
static int64_t x71 = INT64_MIN;
static volatile int64_t t17 = INT64_MIN;
static volatile int8_t x75 = -1;
uint8_t x80 = UINT8_MAX;
int16_t x83 = -58;
static int8_t x86 = 0;
int16_t x96 = 0;
int32_t t25 = 64774462;
uint16_t x105 = 21U;
volatile uint8_t x107 = UINT8_MAX;
uint16_t x110 = UINT16_MAX;
static uint8_t x112 = 5U;
uint64_t t28 = 275152779145850LLU;
static int64_t x123 = -66216721760377933LL;
int32_t t31 = -6;
int64_t t32 = -469LL;
volatile int64_t x133 = INT64_MIN;
int32_t x137 = INT32_MIN;
uint16_t x147 = 170U;
volatile uint32_t x152 = UINT32_MAX;
static int64_t x154 = INT64_MIN;
int64_t x155 = INT64_MIN;
volatile int8_t x159 = INT8_MIN;
int32_t x164 = INT32_MIN;
volatile uint8_t x167 = 50U;
int32_t x172 = -1;
static int16_t x188 = -1;
int64_t x189 = -782425LL;
volatile int32_t t47 = 750392554;
int64_t x194 = -1093LL;
static volatile int8_t x198 = -1;
static uint16_t x227 = UINT16_MAX;
static int32_t t56 = INT32_MIN;
int16_t x231 = INT16_MIN;
uint32_t x233 = UINT32_MAX;
uint32_t x239 = 19209163U;
static uint32_t x246 = UINT32_MAX;
static int32_t x255 = INT32_MAX;
volatile int64_t x260 = INT64_MAX;
uint16_t x262 = 79U;
static int16_t x266 = INT16_MIN;
int16_t x272 = INT16_MIN;
int32_t t67 = 157779;
volatile int8_t x273 = INT8_MIN;
static int32_t x283 = -1;
int16_t x284 = INT16_MIN;
int8_t x296 = INT8_MIN;
volatile int16_t x299 = INT16_MIN;
int8_t x304 = INT8_MIN;
static volatile uint64_t x308 = UINT64_MAX;
int64_t x315 = INT64_MIN;
int8_t x316 = INT8_MAX;
volatile uint64_t t79 = 2776930395221873086LLU;
volatile uint64_t t80 = 1430196LLU;
int16_t x327 = 521;
int32_t x333 = -82;
int8_t x339 = -1;
volatile uint16_t x342 = UINT16_MAX;
int8_t x345 = INT8_MIN;
static int32_t x351 = INT32_MIN;
int8_t x357 = INT8_MIN;
int8_t x359 = -42;
int64_t x360 = INT64_MIN;
int64_t x377 = -5LL;
int64_t x380 = -99578LL;
uint64_t x390 = 373121910372LLU;
static int8_t x392 = INT8_MIN;
uint32_t x397 = UINT32_MAX;
static volatile int16_t x401 = -2784;
int8_t x407 = -1;
static int32_t x408 = INT32_MIN;
int8_t x409 = INT8_MIN;
int16_t x410 = INT16_MIN;
int32_t x416 = -19746547;
int64_t x423 = -1LL;
volatile int64_t t106 = -191182LL;
static volatile int64_t x433 = INT64_MIN;
static volatile int8_t x434 = -1;
uint64_t x444 = UINT64_MAX;
volatile uint64_t x446 = 5181931410745668LLU;
static int16_t x447 = INT16_MIN;
volatile int32_t t111 = 245;
int32_t x453 = INT32_MIN;
int8_t x456 = -1;
int16_t x464 = -1;
uint16_t x467 = 1727U;
int32_t t116 = 904760;
int32_t x470 = INT32_MIN;
uint32_t x471 = UINT32_MAX;
int8_t x473 = -1;
volatile int32_t x478 = INT32_MIN;
int64_t t119 = 17LL;
int64_t x485 = INT64_MAX;
static int32_t t122 = 761625409;
uint16_t x494 = 1U;
int8_t x495 = 58;
volatile int32_t x500 = INT32_MAX;
uint8_t x501 = 0U;
static volatile int64_t x503 = INT64_MIN;
volatile int64_t x505 = -1LL;
volatile int64_t x510 = INT64_MIN;
static volatile uint64_t x513 = UINT64_MAX;
static int64_t x514 = -1LL;
int16_t x516 = 1;
uint64_t t128 = 88597382LLU;
volatile int16_t x519 = INT16_MAX;
int64_t x522 = -1LL;
int8_t x523 = 3;
int32_t x528 = -1;
int16_t x545 = INT16_MIN;
static uint8_t x553 = 0U;
int8_t x561 = 4;
int32_t t140 = 42;
volatile uint32_t x567 = 238U;
static int64_t x573 = INT64_MIN;
int64_t t145 = -3182LL;
uint16_t x590 = 25U;
int32_t t149 = INT32_MAX;
int16_t x609 = INT16_MIN;
static int32_t x619 = -1;
int8_t x635 = -6;
int64_t x637 = INT64_MIN;
int8_t x640 = 0;
uint16_t x642 = 117U;
uint8_t x646 = 0U;
volatile uint16_t x651 = UINT16_MAX;
uint32_t x653 = UINT32_MAX;
int16_t x656 = INT16_MAX;
int32_t t163 = 26594;
int8_t x659 = -1;
volatile int64_t x661 = -1LL;
static int32_t t167 = -97387;
static int64_t x673 = INT64_MIN;
int32_t t172 = INT32_MIN;
int16_t x695 = INT16_MAX;
int64_t t174 = -4023301465989LL;
volatile int64_t x702 = INT64_MAX;
int8_t x706 = INT8_MIN;
uint32_t x717 = UINT32_MAX;
int16_t x720 = -1;
uint16_t x723 = 3698U;
int32_t x724 = -1875;
int16_t x726 = -1;
int16_t x728 = -1;
uint64_t x730 = 3LLU;
volatile uint64_t x731 = 1751910LLU;
int64_t x741 = INT64_MAX;
static int8_t x753 = INT8_MIN;
int32_t x754 = INT32_MAX;
uint64_t t188 = 70111444015383165LLU;
static int16_t x761 = 0;
static uint16_t x765 = 39U;
int64_t x767 = -2LL;
int8_t x776 = -1;
int32_t t196 = INT32_MIN;
int8_t x789 = INT8_MIN;
int64_t x792 = 9565700945LL;
int64_t t197 = 1309112262877885LL;
volatile int16_t x797 = -1;


void f0(void) {
    	static volatile int16_t x1 = -1;
	volatile int16_t x2 = INT16_MIN;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = 1;

    t0 = (((x1>x2)*x3)^x4);

    if (t0 != -2147450881) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int8_t x6 = -26;
	static int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -823557084LL;

    t1 = (((x5>x6)*x7)^x8);

    if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = 2;

    t2 = (((x9>x10)*x11)^x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -26093;
	static uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;

    t3 = (((x13>x14)*x15)^x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MAX;
	int32_t x19 = 1202;
	static uint32_t x20 = 32538U;

    t4 = (((x17>x18)*x19)^x20);

    if (t4 != 32538U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -1;
	int32_t x23 = INT32_MIN;

    t5 = (((x21>x22)*x23)^x24);

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	static int16_t x26 = INT16_MIN;
	static volatile int16_t x28 = INT16_MIN;
	int32_t t6 = -91;

    t6 = (((x25>x26)*x27)^x28);

    if (t6 != 32640) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -1;
	uint64_t x30 = 23580114LLU;
	int64_t x31 = INT64_MAX;
	static uint32_t x32 = UINT32_MAX;
	volatile int64_t t7 = -30995588000LL;

    t7 = (((x29>x30)*x31)^x32);

    if (t7 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	int64_t x34 = -1LL;
	volatile int8_t x35 = -4;
	volatile int32_t t8 = -22659;

    t8 = (((x33>x34)*x35)^x36);

    if (t8 != 124) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int32_t x38 = -6224949;
	uint64_t x39 = UINT64_MAX;
	static volatile int32_t x40 = INT32_MAX;
	static volatile uint64_t t9 = 446347485LLU;

    t9 = (((x37>x38)*x39)^x40);

    if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static uint32_t x42 = 0U;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = -502753384600911LL;

    t10 = (((x41>x42)*x43)^x44);

    if (t10 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	uint16_t x47 = 23565U;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = INT32_MIN;

    t11 = (((x45>x46)*x47)^x48);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 4U;
	volatile uint8_t x50 = UINT8_MAX;
	static uint8_t x51 = 63U;
	int64_t x52 = INT64_MIN;

    t12 = (((x49>x50)*x51)^x52);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MIN;
	uint8_t x54 = UINT8_MAX;
	static int32_t x55 = -81141363;
	static volatile uint64_t x56 = 84LLU;
	volatile uint64_t t13 = 1892664914LLU;

    t13 = (((x53>x54)*x55)^x56);

    if (t13 != 84LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	volatile uint64_t x60 = 35996LLU;
	volatile uint64_t t14 = 177LLU;

    t14 = (((x57>x58)*x59)^x60);

    if (t14 != 62307LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 3596U;
	int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = UINT16_MAX;

    t15 = (((x61>x62)*x63)^x64);

    if (t15 != 65510) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = 27428259752LLU;
	static int64_t x67 = INT64_MIN;
	int32_t x68 = 1;

    t16 = (((x65>x66)*x67)^x68);

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -60751;
	int64_t x72 = INT64_MIN;

    t17 = (((x69>x70)*x71)^x72);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	uint32_t x74 = UINT32_MAX;
	uint16_t x76 = 7U;
	volatile int32_t t18 = -683388;

    t18 = (((x73>x74)*x75)^x76);

    if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	static int64_t x78 = INT64_MAX;
	static int32_t x79 = INT32_MAX;
	int32_t t19 = -13149591;

    t19 = (((x77>x78)*x79)^x80);

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 1469U;
	int32_t x82 = INT32_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = 871;

    t20 = (((x81>x82)*x83)^x84);

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	int8_t x87 = INT8_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -954838;

    t21 = (((x85>x86)*x87)^x88);

    if (t21 != -32641) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = 3464981841646734224LL;
	int64_t x90 = INT64_MAX;
	volatile int8_t x91 = INT8_MIN;
	int32_t x92 = -1;
	int32_t t22 = -15456868;

    t22 = (((x89>x90)*x91)^x92);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	int8_t x94 = 9;
	volatile int16_t x95 = 1;
	static int32_t t23 = -1487;

    t23 = (((x93>x94)*x95)^x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int8_t x98 = -1;
	int8_t x99 = INT8_MIN;
	volatile int64_t x100 = INT64_MAX;
	static int64_t t24 = INT64_MAX;

    t24 = (((x97>x98)*x99)^x100);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	int8_t x102 = 0;
	int32_t x103 = 39053;
	int32_t x104 = INT32_MIN;

    t25 = (((x101>x102)*x103)^x104);

    if (t25 != -2147444595) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = -2;
	int8_t x108 = -22;
	volatile int32_t t26 = -115923204;

    t26 = (((x105>x106)*x107)^x108);

    if (t26 != -235) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	static uint32_t x111 = UINT32_MAX;
	uint32_t t27 = 108097U;

    t27 = (((x109>x110)*x111)^x112);

    if (t27 != 5U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 1276850LLU;
	volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int16_t x116 = INT16_MIN;

    t28 = (((x113>x114)*x115)^x116);

    if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 66;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = INT16_MIN;
	int32_t x120 = -1;
	volatile int32_t t29 = -197;

    t29 = (((x117>x118)*x119)^x120);

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	static int64_t x122 = -1LL;
	int64_t x124 = INT64_MIN;
	int64_t t30 = INT64_MIN;

    t30 = (((x121>x122)*x123)^x124);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MIN;
	static volatile uint64_t x126 = UINT64_MAX;
	volatile int8_t x127 = INT8_MIN;
	uint16_t x128 = 195U;

    t31 = (((x125>x126)*x127)^x128);

    if (t31 != 195) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	int16_t x131 = INT16_MAX;
	int64_t x132 = -1LL;

    t32 = (((x129>x130)*x131)^x132);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -3995;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 45U;
	volatile int32_t t33 = 8074279;

    t33 = (((x133>x134)*x135)^x136);

    if (t33 != 45) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x138 = 0;
	uint32_t x139 = UINT32_MAX;
	uint64_t x140 = 16345300LLU;
	volatile uint64_t t34 = 13143LLU;

    t34 = (((x137>x138)*x139)^x140);

    if (t34 != 16345300LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = UINT8_MAX;
	int32_t x142 = -1;
	int64_t x143 = -201238612LL;
	static int16_t x144 = INT16_MIN;
	int64_t t35 = 51227708818LL;

    t35 = (((x141>x142)*x143)^x144);

    if (t35 != 201250732LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t36 = 1704;

    t36 = (((x145>x146)*x147)^x148);

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	uint32_t x150 = 381556U;
	volatile uint16_t x151 = 2U;
	uint32_t t37 = 13223U;

    t37 = (((x149>x150)*x151)^x152);

    if (t37 != 4294967293U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = 11083138344586LL;
	int64_t x156 = 69945LL;
	volatile int64_t t38 = 847258LL;

    t38 = (((x153>x154)*x155)^x156);

    if (t38 != -9223372036854705863LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -1;
	int32_t x158 = INT32_MAX;
	uint8_t x160 = 0U;
	volatile int32_t t39 = 25853;

    t39 = (((x157>x158)*x159)^x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 21262U;
	static volatile int32_t x162 = -1;
	int32_t x163 = -1;
	static volatile int32_t t40 = INT32_MIN;

    t40 = (((x161>x162)*x163)^x164);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x165 = 13U;
	uint8_t x166 = UINT8_MAX;
	uint16_t x168 = 5U;
	static volatile int32_t t41 = -89;

    t41 = (((x165>x166)*x167)^x168);

    if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -53;
	volatile int8_t x170 = -41;
	int16_t x171 = INT16_MAX;
	int32_t t42 = -9462;

    t42 = (((x169>x170)*x171)^x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1;
	volatile int8_t x174 = -1;
	static int8_t x175 = -1;
	int32_t x176 = -1;
	int32_t t43 = 323;

    t43 = (((x173>x174)*x175)^x176);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 27;
	int16_t x178 = -5018;
	uint32_t x179 = 5687U;
	int32_t x180 = -1;
	uint32_t t44 = 51531808U;

    t44 = (((x177>x178)*x179)^x180);

    if (t44 != 4294961608U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = -62;
	static int16_t x183 = -1;
	int16_t x184 = -1;
	int32_t t45 = -1;

    t45 = (((x181>x182)*x183)^x184);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int32_t x186 = -13;
	int16_t x187 = INT16_MIN;
	int32_t t46 = -3430;

    t46 = (((x185>x186)*x187)^x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x190 = -456;
	int8_t x191 = 20;
	int16_t x192 = INT16_MAX;

    t47 = (((x189>x190)*x191)^x192);

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 2;
	static volatile int32_t x195 = INT32_MIN;
	int32_t x196 = -1;
	static volatile int32_t t48 = INT32_MAX;

    t48 = (((x193>x194)*x195)^x196);

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -5027;

    t49 = (((x197>x198)*x199)^x200);

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 988U;
	uint32_t x202 = 214565U;
	uint16_t x203 = 984U;
	volatile int32_t x204 = INT32_MIN;
	int32_t t50 = INT32_MIN;

    t50 = (((x201>x202)*x203)^x204);

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static uint64_t x206 = 1034163376LLU;
	volatile int8_t x207 = -1;
	int32_t x208 = -1;
	volatile int32_t t51 = 60651;

    t51 = (((x205>x206)*x207)^x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	volatile int16_t x210 = INT16_MIN;
	volatile uint16_t x211 = 20U;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 1;

    t52 = (((x209>x210)*x211)^x212);

    if (t52 != -2147483628) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = INT32_MIN;
	uint8_t x214 = 112U;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 2984;

    t53 = (((x213>x214)*x215)^x216);

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -62003252617LL;
	int8_t x218 = -1;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t54 = INT32_MAX;

    t54 = (((x217>x218)*x219)^x220);

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	uint8_t x222 = 23U;
	static int64_t x223 = INT64_MIN;
	int16_t x224 = 1;
	int64_t t55 = -15346861LL;

    t55 = (((x221>x222)*x223)^x224);

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x226 = -1;
	int32_t x228 = INT32_MIN;

    t56 = (((x225>x226)*x227)^x228);

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -97;
	int64_t x230 = 127359386LL;
	static volatile uint64_t x232 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

    t57 = (((x229>x230)*x231)^x232);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = 194;
	uint8_t x235 = 79U;
	static uint16_t x236 = 107U;
	int32_t t58 = 1945090;

    t58 = (((x233>x234)*x235)^x236);

    if (t58 != 36) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 2;
	volatile int64_t x238 = INT64_MIN;
	static uint8_t x240 = 36U;
	uint32_t t59 = 3U;

    t59 = (((x237>x238)*x239)^x240);

    if (t59 != 19209199U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MAX;
	int8_t x243 = -61;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -1716999;

    t60 = (((x241>x242)*x243)^x244);

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x245 = 16559598210641LL;
	int8_t x247 = 1;
	int64_t x248 = -2126144817853885LL;
	static int64_t t61 = -205876265487LL;

    t61 = (((x245>x246)*x247)^x248);

    if (t61 != -2126144817853886LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	volatile int64_t x250 = INT64_MAX;
	uint32_t x251 = 14098U;
	static int32_t x252 = -9124893;
	uint32_t t62 = 1516905U;

    t62 = (((x249>x250)*x251)^x252);

    if (t62 != 4285842403U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	uint8_t x254 = 2U;
	int16_t x256 = 13320;
	static volatile int32_t t63 = -1;

    t63 = (((x253>x254)*x255)^x256);

    if (t63 != 2147470327) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int64_t t64 = INT64_MAX;

    t64 = (((x257>x258)*x259)^x260);

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	static int8_t x263 = INT8_MIN;
	static int64_t x264 = INT64_MIN;
	int64_t t65 = INT64_MIN;

    t65 = (((x261>x262)*x263)^x264);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x267 = -1;
	static uint16_t x268 = 60U;
	volatile int32_t t66 = 323101780;

    t66 = (((x265>x266)*x267)^x268);

    if (t66 != 60) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 76455861469LLU;
	uint64_t x270 = 200946LLU;
	volatile int32_t x271 = -18809;

    t67 = (((x269>x270)*x271)^x272);

    if (t67 != 13959) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = INT16_MAX;
	int16_t x275 = -7436;
	uint32_t x276 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

    t68 = (((x273>x274)*x275)^x276);

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 19U;
	volatile int8_t x278 = -1;
	int32_t x279 = INT32_MAX;
	uint16_t x280 = 11463U;
	volatile int32_t t69 = 1464;

    t69 = (((x277>x278)*x279)^x280);

    if (t69 != 2147472184) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x282 = -1;
	static volatile int32_t t70 = 325381968;

    t70 = (((x281>x282)*x283)^x284);

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 421U;
	int32_t x286 = INT32_MIN;
	volatile int16_t x287 = 4138;
	int64_t x288 = -1LL;
	static int64_t t71 = 1LL;

    t71 = (((x285>x286)*x287)^x288);

    if (t71 != -4139LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	volatile int32_t x292 = 12;
	volatile int32_t t72 = 498;

    t72 = (((x289>x290)*x291)^x292);

    if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 2512U;
	int8_t x294 = 0;
	int32_t x295 = INT32_MIN;
	int32_t t73 = 1473;

    t73 = (((x293>x294)*x295)^x296);

    if (t73 != 2147483520) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x297 = 237862783107LLU;
	volatile int8_t x298 = INT8_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t74 = INT64_MIN;

    t74 = (((x297>x298)*x299)^x300);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 1584U;
	static int16_t x302 = INT16_MAX;
	uint32_t x303 = UINT32_MAX;
	volatile uint32_t t75 = 0U;

    t75 = (((x301>x302)*x303)^x304);

    if (t75 != 4294967168U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 100103493022612LL;
	volatile int64_t x306 = 31941LL;
	uint32_t x307 = 179190U;
	volatile uint64_t t76 = 15906903599867814LLU;

    t76 = (((x305>x306)*x307)^x308);

    if (t76 != 18446744073709372425LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int8_t x310 = -3;
	volatile int16_t x311 = INT16_MIN;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 32;

    t77 = (((x309>x310)*x311)^x312);

    if (t77 != 32640) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	int32_t x314 = -15339;
	int64_t t78 = -1118120936LL;

    t78 = (((x313>x314)*x315)^x316);

    if (t78 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = -1239932161591588379LL;
	int64_t x318 = 67568255541LL;
	static uint64_t x319 = UINT64_MAX;
	uint32_t x320 = 1512633U;

    t79 = (((x317>x318)*x319)^x320);

    if (t79 != 1512633LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 92133266;
	int64_t x322 = INT64_MAX;
	static uint64_t x323 = 481648152091141LLU;
	static volatile int64_t x324 = -8339198900807LL;

    t80 = (((x321>x322)*x323)^x324);

    if (t80 != 18446735734510650809LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	int32_t x326 = INT32_MIN;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t81 = -38;

    t81 = (((x325>x326)*x327)^x328);

    if (t81 != 630) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	static volatile int16_t x330 = -1;
	static int8_t x331 = 0;
	int32_t x332 = -1;
	static volatile int32_t t82 = 310457;

    t82 = (((x329>x330)*x331)^x332);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x334 = 0LL;
	uint32_t x335 = 6864U;
	uint8_t x336 = 81U;
	uint32_t t83 = 4U;

    t83 = (((x333>x334)*x335)^x336);

    if (t83 != 81U) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x337 = 90516LL;
	int64_t x338 = INT64_MIN;
	uint64_t x340 = 367598462197568LLU;
	volatile uint64_t t84 = 129185465682670941LLU;

    t84 = (((x337>x338)*x339)^x340);

    if (t84 != 18446376475247354047LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x341 = -581982053LL;
	static uint8_t x343 = 6U;
	volatile uint8_t x344 = 3U;
	int32_t t85 = -15386196;

    t85 = (((x341>x342)*x343)^x344);

    if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = UINT32_MAX;
	uint16_t x348 = 170U;
	volatile uint32_t t86 = 0U;

    t86 = (((x345>x346)*x347)^x348);

    if (t86 != 170U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	volatile int64_t x350 = -12094354513129445LL;
	volatile uint8_t x352 = 81U;
	volatile int32_t t87 = 82;

    t87 = (((x349>x350)*x351)^x352);

    if (t87 != -2147483567) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	static int64_t x354 = 3445281948LL;
	volatile int64_t x355 = INT64_MIN;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

    t88 = (((x353>x354)*x355)^x356);

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x358 = UINT32_MAX;
	volatile int64_t t89 = INT64_MIN;

    t89 = (((x357>x358)*x359)^x360);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -626953706LL;
	static uint16_t x362 = 4U;
	volatile uint8_t x363 = 11U;
	volatile uint64_t x364 = 1709704LLU;
	static uint64_t t90 = 54516LLU;

    t90 = (((x361>x362)*x363)^x364);

    if (t90 != 1709704LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = UINT64_MAX;
	static int16_t x366 = 112;
	static uint32_t x367 = UINT32_MAX;
	volatile int16_t x368 = INT16_MAX;
	volatile uint32_t t91 = 69U;

    t91 = (((x365>x366)*x367)^x368);

    if (t91 != 4294934528U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x369 = 129065840LLU;
	uint64_t x370 = 12869725LLU;
	uint32_t x371 = 1239U;
	static uint8_t x372 = UINT8_MAX;
	uint32_t t92 = 3418U;

    t92 = (((x369>x370)*x371)^x372);

    if (t92 != 1064U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	volatile int8_t x374 = INT8_MAX;
	int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t93 = -1362651401744119376LL;

    t93 = (((x373>x374)*x375)^x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = -2;
	static int8_t x379 = INT8_MIN;
	volatile int64_t t94 = -87133248501LL;

    t94 = (((x377>x378)*x379)^x380);

    if (t94 != -99578LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x381 = 516933347220733LLU;
	int64_t x382 = 454076233LL;
	uint32_t x383 = UINT32_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t95 = 2495757U;

    t95 = (((x381>x382)*x383)^x384);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	static int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MAX;
	int32_t x388 = -1;
	int32_t t96 = 44923422;

    t96 = (((x385>x386)*x387)^x388);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	static volatile int32_t t97 = 239604;

    t97 = (((x389>x390)*x391)^x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 7U;
	static int32_t x394 = 662797874;
	static int64_t x395 = 9544838LL;
	int64_t x396 = INT64_MAX;
	int64_t t98 = INT64_MAX;

    t98 = (((x393>x394)*x395)^x396);

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x398 = INT8_MIN;
	static int8_t x399 = -1;
	volatile int64_t x400 = INT64_MIN;
	int64_t t99 = INT64_MAX;

    t99 = (((x397>x398)*x399)^x400);

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -1;
	int32_t t100 = -12826;

    t100 = (((x401>x402)*x403)^x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x405 = 1;
	int8_t x406 = -1;
	volatile int32_t t101 = INT32_MAX;

    t101 = (((x405>x406)*x407)^x408);

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x411 = 2U;
	int8_t x412 = -16;
	volatile int32_t t102 = 863869;

    t102 = (((x409>x410)*x411)^x412);

    if (t102 != -14) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	int64_t x414 = INT64_MAX;
	static int16_t x415 = INT16_MIN;
	int32_t t103 = -117775817;

    t103 = (((x413>x414)*x415)^x416);

    if (t103 != -19746547) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MIN;
	static int32_t x419 = INT32_MAX;
	static int16_t x420 = INT16_MAX;
	static int32_t t104 = 61506089;

    t104 = (((x417>x418)*x419)^x420);

    if (t104 != 2147450880) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 6;
	int64_t x422 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	volatile int64_t t105 = 3511771LL;

    t105 = (((x421>x422)*x423)^x424);

    if (t105 != 127LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = INT32_MIN;
	uint64_t x426 = 122143310424242563LLU;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = 3483U;

    t106 = (((x425>x426)*x427)^x428);

    if (t106 != -9223372036854772325LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MIN;
	uint8_t x431 = UINT8_MAX;
	static int64_t x432 = -1LL;
	int64_t t107 = 25079747250706075LL;

    t107 = (((x429>x430)*x431)^x432);

    if (t107 != -256LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x435 = INT64_MIN;
	uint32_t x436 = UINT32_MAX;
	volatile int64_t t108 = 872LL;

    t108 = (((x433>x434)*x435)^x436);

    if (t108 != 4294967295LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	int64_t x438 = -47028670LL;
	uint16_t x439 = 530U;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t109 = 7376001LLU;

    t109 = (((x437>x438)*x439)^x440);

    if (t109 != 18446744073709551085LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 51;
	int32_t x442 = -1;
	uint32_t x443 = 0U;
	static uint64_t t110 = UINT64_MAX;

    t110 = (((x441>x442)*x443)^x444);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 28;
	int32_t x448 = -1;

    t111 = (((x445>x446)*x447)^x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int8_t x450 = INT8_MIN;
	int64_t x451 = INT64_MIN;
	volatile int64_t x452 = 22435LL;
	volatile int64_t t112 = 354472658812683LL;

    t112 = (((x449>x450)*x451)^x452);

    if (t112 != -9223372036854753373LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = -1LL;
	int32_t x455 = -7;
	int32_t t113 = 77;

    t113 = (((x453>x454)*x455)^x456);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = -265;
	int64_t x458 = -1LL;
	int32_t x459 = -1;
	static uint32_t x460 = 3922325U;
	static volatile uint32_t t114 = 80U;

    t114 = (((x457>x458)*x459)^x460);

    if (t114 != 3922325U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = -38;
	int8_t x462 = -1;
	uint16_t x463 = 1668U;
	int32_t t115 = 152827047;

    t115 = (((x461>x462)*x463)^x464);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = -1;
	int16_t x466 = INT16_MIN;
	uint16_t x468 = UINT16_MAX;

    t116 = (((x465>x466)*x467)^x468);

    if (t116 != 63808) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	uint64_t x472 = 363482LLU;
	volatile uint64_t t117 = 12LLU;

    t117 = (((x469>x470)*x471)^x472);

    if (t117 != 4294603813LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = INT16_MIN;
	volatile int16_t x475 = INT16_MAX;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t118 = -2;

    t118 = (((x473>x474)*x475)^x476);

    if (t118 != 32512) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x477 = INT16_MAX;
	uint32_t x479 = UINT32_MAX;
	int64_t x480 = INT64_MAX;

    t119 = (((x477>x478)*x479)^x480);

    if (t119 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -57;
	int64_t x482 = INT64_MIN;
	uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MAX;
	int32_t t120 = 0;

    t120 = (((x481>x482)*x483)^x484);

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x486 = 1;
	int64_t x487 = -22745839899LL;
	int64_t x488 = INT64_MAX;
	volatile int64_t t121 = 19318838LL;

    t121 = (((x485>x486)*x487)^x488);

    if (t121 != -9223372014108935910LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	uint8_t x490 = UINT8_MAX;
	int8_t x491 = INT8_MIN;
	int16_t x492 = 0;

    t122 = (((x489>x490)*x491)^x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 18294882LL;
	int32_t x496 = INT32_MIN;
	int32_t t123 = -152;

    t123 = (((x493>x494)*x495)^x496);

    if (t123 != -2147483590) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x498 = -964;
	volatile uint64_t x499 = 1LLU;
	uint64_t t124 = 3853602516LLU;

    t124 = (((x497>x498)*x499)^x500);

    if (t124 != 2147483647LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = INT64_MAX;
	volatile int8_t x504 = 31;
	volatile int64_t t125 = 43110LL;

    t125 = (((x501>x502)*x503)^x504);

    if (t125 != 31LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x506 = -23;
	static int64_t x507 = -1LL;
	int8_t x508 = INT8_MIN;
	volatile int64_t t126 = 8957491LL;

    t126 = (((x505>x506)*x507)^x508);

    if (t126 != 127LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -80592739;
	volatile int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MIN;
	volatile int64_t t127 = -192296586385990907LL;

    t127 = (((x509>x510)*x511)^x512);

    if (t127 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x515 = UINT64_MAX;

    t128 = (((x513>x514)*x515)^x516);

    if (t128 != 1LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint64_t x518 = 128LLU;
	int16_t x520 = INT16_MAX;
	int32_t t129 = 48;

    t129 = (((x517>x518)*x519)^x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -2033;
	uint8_t x524 = 6U;
	volatile int32_t t130 = -31;

    t130 = (((x521>x522)*x523)^x524);

    if (t130 != 6) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = 4;
	uint64_t x526 = 175LLU;
	static uint8_t x527 = 0U;
	volatile int32_t t131 = -74;

    t131 = (((x525>x526)*x527)^x528);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = 6U;
	static int64_t x530 = INT64_MAX;
	int64_t x531 = -251013947808517LL;
	uint8_t x532 = 16U;
	int64_t t132 = -2613469883895113LL;

    t132 = (((x529>x530)*x531)^x532);

    if (t132 != 16LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = 493809LL;
	uint16_t x535 = 0U;
	volatile int8_t x536 = -35;
	int32_t t133 = -42;

    t133 = (((x533>x534)*x535)^x536);

    if (t133 != -35) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = 0;
	uint32_t x538 = 2400U;
	uint32_t x539 = 180U;
	int64_t x540 = INT64_MIN;
	volatile int64_t t134 = INT64_MIN;

    t134 = (((x537>x538)*x539)^x540);

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	int32_t x542 = -1;
	static int8_t x543 = -1;
	int8_t x544 = INT8_MIN;
	static int32_t t135 = 9;

    t135 = (((x541>x542)*x543)^x544);

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = -1;
	int16_t x547 = INT16_MIN;
	int8_t x548 = INT8_MIN;
	int32_t t136 = 15569968;

    t136 = (((x545>x546)*x547)^x548);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = -1;
	static volatile int16_t x550 = INT16_MAX;
	volatile int32_t x551 = -1;
	int8_t x552 = INT8_MIN;
	int32_t t137 = 28469814;

    t137 = (((x549>x550)*x551)^x552);

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x554 = -5149481;
	int32_t x555 = -1;
	volatile int64_t x556 = INT64_MIN;
	static volatile int64_t t138 = INT64_MAX;

    t138 = (((x553>x554)*x555)^x556);

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	uint16_t x558 = UINT16_MAX;
	volatile uint16_t x559 = 26066U;
	static int8_t x560 = -1;
	static int32_t t139 = -490907145;

    t139 = (((x557>x558)*x559)^x560);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MIN;
	int32_t x563 = INT32_MIN;
	static volatile int32_t x564 = -422740348;

    t140 = (((x561>x562)*x563)^x564);

    if (t140 != 1724743300) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MAX;
	volatile int16_t x566 = INT16_MAX;
	static uint32_t x568 = 111116U;
	uint32_t t141 = 45U;

    t141 = (((x565>x566)*x567)^x568);

    if (t141 != 111116U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x569 = -1LL;
	static volatile uint64_t x570 = UINT64_MAX;
	volatile int8_t x571 = 1;
	static uint64_t x572 = 154050862LLU;
	static volatile uint64_t t142 = 14LLU;

    t142 = (((x569>x570)*x571)^x572);

    if (t142 != 154050862LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = INT8_MAX;
	uint8_t x575 = 14U;
	volatile int8_t x576 = 2;
	volatile int32_t t143 = -26;

    t143 = (((x573>x574)*x575)^x576);

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 3236U;
	volatile uint16_t x578 = 22U;
	static int32_t x579 = 54;
	int8_t x580 = -5;
	int32_t t144 = 66907035;

    t144 = (((x577>x578)*x579)^x580);

    if (t144 != -51) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 466352U;
	int64_t x582 = INT64_MAX;
	int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MAX;

    t145 = (((x581>x582)*x583)^x584);

    if (t145 != 127LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = -1;
	static uint8_t x586 = 11U;
	int32_t x587 = INT32_MIN;
	volatile int64_t x588 = -613LL;
	static volatile int64_t t146 = -3297022571272052201LL;

    t146 = (((x585>x586)*x587)^x588);

    if (t146 != -613LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = -1;
	uint64_t x591 = UINT64_MAX;
	int32_t x592 = INT32_MIN;
	volatile uint64_t t147 = 2LLU;

    t147 = (((x589>x590)*x591)^x592);

    if (t147 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = INT64_MAX;
	int16_t x594 = INT16_MIN;
	int16_t x595 = INT16_MIN;
	int32_t x596 = -1;
	volatile int32_t t148 = -259089485;

    t148 = (((x593>x594)*x595)^x596);

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x598 = INT64_MIN;
	int16_t x599 = -1;
	static int32_t x600 = INT32_MIN;

    t149 = (((x597>x598)*x599)^x600);

    if (t149 != INT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	int16_t x602 = -2;
	uint8_t x603 = 0U;
	int32_t x604 = INT32_MIN;
	int32_t t150 = INT32_MIN;

    t150 = (((x601>x602)*x603)^x604);

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	static uint32_t x606 = 3836U;
	static volatile int16_t x607 = -1;
	uint16_t x608 = UINT16_MAX;
	volatile int32_t t151 = 8400;

    t151 = (((x605>x606)*x607)^x608);

    if (t151 != -65536) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x610 = 29;
	static uint64_t x611 = 371422618057LLU;
	int16_t x612 = -1;
	uint64_t t152 = UINT64_MAX;

    t152 = (((x609>x610)*x611)^x612);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	int64_t x614 = 856542607383LL;
	volatile uint8_t x615 = 55U;
	int64_t x616 = INT64_MIN;
	volatile int64_t t153 = INT64_MIN;

    t153 = (((x613>x614)*x615)^x616);

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = -62;
	int16_t x618 = -6570;
	static uint8_t x620 = UINT8_MAX;
	volatile int32_t t154 = -27900;

    t154 = (((x617>x618)*x619)^x620);

    if (t154 != -256) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MAX;
	int32_t x622 = 531724265;
	int16_t x623 = INT16_MAX;
	static volatile uint32_t x624 = 7881U;
	uint32_t t155 = 66U;

    t155 = (((x621>x622)*x623)^x624);

    if (t155 != 7881U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	int8_t x626 = 2;
	static int8_t x627 = INT8_MAX;
	int16_t x628 = INT16_MIN;
	int32_t t156 = 651;

    t156 = (((x625>x626)*x627)^x628);

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 9529878U;
	static int8_t x630 = INT8_MIN;
	uint64_t x631 = 3177323990137301LLU;
	static volatile int16_t x632 = 6820;
	uint64_t t157 = 132845251460496312LLU;

    t157 = (((x629>x630)*x631)^x632);

    if (t157 != 6820LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = INT32_MIN;
	int8_t x634 = INT8_MAX;
	uint16_t x636 = 3641U;
	volatile int32_t t158 = -3;

    t158 = (((x633>x634)*x635)^x636);

    if (t158 != 3641) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = INT16_MIN;
	int8_t x639 = 0;
	volatile int32_t t159 = -974085;

    t159 = (((x637>x638)*x639)^x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = -335LL;
	int64_t x643 = INT64_MAX;
	int32_t x644 = 4;
	int64_t t160 = -84167969LL;

    t160 = (((x641>x642)*x643)^x644);

    if (t160 != 4LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = -25;
	uint64_t x647 = UINT64_MAX;
	int8_t x648 = 3;
	static uint64_t t161 = 3242185LLU;

    t161 = (((x645>x646)*x647)^x648);

    if (t161 != 3LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = 38177834640LLU;
	uint16_t x650 = 740U;
	volatile int8_t x652 = INT8_MAX;
	static volatile int32_t t162 = -78261360;

    t162 = (((x649>x650)*x651)^x652);

    if (t162 != 65408) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x654 = 157191U;
	int16_t x655 = -962;

    t163 = (((x653>x654)*x655)^x656);

    if (t163 != -31807) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = UINT32_MAX;
	static volatile int64_t x658 = INT64_MAX;
	int32_t x660 = INT32_MIN;
	int32_t t164 = INT32_MIN;

    t164 = (((x657>x658)*x659)^x660);

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = 0;
	int64_t x663 = -1128821068149644804LL;
	static int64_t x664 = -1LL;
	int64_t t165 = -19LL;

    t165 = (((x661>x662)*x663)^x664);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int16_t x666 = INT16_MAX;
	int16_t x667 = INT16_MIN;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t166 = 0;

    t166 = (((x665>x666)*x667)^x668);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	uint64_t x670 = 2679819LLU;
	volatile int8_t x671 = INT8_MAX;
	int8_t x672 = INT8_MIN;

    t167 = (((x669>x670)*x671)^x672);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x674 = 749310504U;
	int64_t x675 = INT64_MAX;
	int8_t x676 = INT8_MIN;
	volatile int64_t t168 = 4012373921288818LL;

    t168 = (((x673>x674)*x675)^x676);

    if (t168 != -128LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	uint8_t x678 = 97U;
	static int16_t x679 = -21;
	static int16_t x680 = INT16_MIN;
	volatile int32_t t169 = -1387;

    t169 = (((x677>x678)*x679)^x680);

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	uint64_t x682 = 45LLU;
	volatile int16_t x683 = INT16_MIN;
	static volatile int8_t x684 = INT8_MIN;
	volatile int32_t t170 = -60;

    t170 = (((x681>x682)*x683)^x684);

    if (t170 != 32640) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -895756711LL;
	static volatile int16_t x686 = -1;
	uint16_t x687 = 3U;
	int64_t x688 = -1LL;
	static volatile int64_t t171 = -7002885LL;

    t171 = (((x685>x686)*x687)^x688);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x690 = -1;
	int16_t x691 = 2970;
	int32_t x692 = INT32_MIN;

    t172 = (((x689>x690)*x691)^x692);

    if (t172 != INT32_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = INT32_MAX;
	uint16_t x694 = 1060U;
	int64_t x696 = -772899497343842001LL;
	int64_t t173 = -11712LL;

    t173 = (((x693>x694)*x695)^x696);

    if (t173 != -772899497343813936LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int16_t x698 = 1;
	static int64_t x699 = -1LL;
	int8_t x700 = INT8_MIN;

    t174 = (((x697>x698)*x699)^x700);

    if (t174 != -128LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint64_t x703 = 770853LLU;
	static uint64_t x704 = 189467024079LLU;
	static volatile uint64_t t175 = 177LLU;

    t175 = (((x701>x702)*x703)^x704);

    if (t175 != 189467024079LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	int64_t x707 = 1LL;
	int64_t x708 = 2LL;
	volatile int64_t t176 = -8LL;

    t176 = (((x705>x706)*x707)^x708);

    if (t176 != 3LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 25217812;
	int8_t x710 = INT8_MIN;
	static int16_t x711 = -1;
	static int64_t x712 = INT64_MIN;
	int64_t t177 = INT64_MAX;

    t177 = (((x709>x710)*x711)^x712);

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 59U;
	uint32_t x714 = 1478066224U;
	static int32_t x715 = -1929916;
	int32_t x716 = 193060312;
	volatile int32_t t178 = 402366218;

    t178 = (((x713>x714)*x715)^x716);

    if (t178 != 193060312) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x718 = 8;
	int16_t x719 = INT16_MAX;
	int32_t t179 = 251797944;

    t179 = (((x717>x718)*x719)^x720);

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	volatile int8_t x722 = INT8_MAX;
	volatile int32_t t180 = -14936;

    t180 = (((x721>x722)*x723)^x724);

    if (t180 != -1875) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	uint8_t x727 = UINT8_MAX;
	int32_t t181 = -7142;

    t181 = (((x725>x726)*x727)^x728);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x729 = 416438591U;
	static uint64_t x732 = 24083622993151143LLU;
	uint64_t t182 = 268788962946LLU;

    t182 = (((x729>x730)*x731)^x732);

    if (t182 != 24083622993854401LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 1692446LL;
	volatile int32_t x734 = INT32_MIN;
	int16_t x735 = 1;
	uint32_t x736 = 11601781U;
	uint32_t t183 = 332118U;

    t183 = (((x733>x734)*x735)^x736);

    if (t183 != 11601780U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint32_t x737 = 3701828U;
	int64_t x738 = INT64_MIN;
	volatile int32_t x739 = 1;
	uint16_t x740 = UINT16_MAX;
	static volatile int32_t t184 = -262455;

    t184 = (((x737>x738)*x739)^x740);

    if (t184 != 65534) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x742 = 24800747U;
	int64_t x743 = -1LL;
	volatile int32_t x744 = -1;
	static volatile int64_t t185 = -3900707LL;

    t185 = (((x741>x742)*x743)^x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	int64_t x746 = -1LL;
	uint8_t x747 = 34U;
	int64_t x748 = -1LL;
	volatile int64_t t186 = 26205958LL;

    t186 = (((x745>x746)*x747)^x748);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	volatile int32_t x750 = 30;
	int8_t x751 = -4;
	static volatile int8_t x752 = INT8_MAX;
	int32_t t187 = 53952;

    t187 = (((x749>x750)*x751)^x752);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x755 = 5447640911365823LLU;
	uint16_t x756 = 1U;

    t188 = (((x753>x754)*x755)^x756);

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	static int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MAX;
	static int32_t x760 = 30056;
	volatile int32_t t189 = -243681800;

    t189 = (((x757>x758)*x759)^x760);

    if (t189 != 29975) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MAX;
	int8_t x763 = INT8_MIN;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = -97;

    t190 = (((x761>x762)*x763)^x764);

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = INT16_MIN;
	volatile int16_t x768 = 5450;
	volatile int64_t t191 = 689067337485129007LL;

    t191 = (((x765>x766)*x767)^x768);

    if (t191 != -5452LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	static int8_t x770 = -1;
	int64_t x771 = INT64_MAX;
	int16_t x772 = 1;
	static int64_t t192 = 0LL;

    t192 = (((x769>x770)*x771)^x772);

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 328032959206625601LLU;
	int16_t x774 = INT16_MAX;
	static int32_t x775 = 43630;
	volatile int32_t t193 = 203;

    t193 = (((x773>x774)*x775)^x776);

    if (t193 != -43631) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = 2;
	int64_t x778 = -1LL;
	int32_t x779 = -1;
	static int8_t x780 = INT8_MAX;
	int32_t t194 = 1791;

    t194 = (((x777>x778)*x779)^x780);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	int64_t x782 = INT64_MIN;
	static volatile int64_t x783 = INT64_MIN;
	volatile int32_t x784 = INT32_MAX;
	volatile int64_t t195 = -466299436LL;

    t195 = (((x781>x782)*x783)^x784);

    if (t195 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x785 = UINT8_MAX;
	int64_t x786 = INT64_MAX;
	uint16_t x787 = 0U;
	int32_t x788 = INT32_MIN;

    t196 = (((x785>x786)*x787)^x788);

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = -1;
	int32_t x791 = -210492015;

    t197 = (((x789>x790)*x791)^x792);

    if (t197 != 9565700945LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = -24;
	uint64_t x795 = 602228651544LLU;
	int64_t x796 = -1LL;
	uint64_t t198 = UINT64_MAX;

    t198 = (((x793>x794)*x795)^x796);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = -5;
	uint64_t x799 = UINT64_MAX;
	static volatile int8_t x800 = 6;
	uint64_t t199 = 13185545621LLU;

    t199 = (((x797>x798)*x799)^x800);

    if (t199 != 18446744073709551609LLU) { NG(); } else { ; }
	
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

