
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

static int16_t x2 = INT16_MIN;
static uint8_t x4 = 11U;
static int32_t t0 = 487725922;
static int64_t x7 = INT64_MAX;
static volatile uint16_t x11 = 1707U;
int32_t t2 = 10;
static int64_t x13 = INT64_MAX;
static volatile int32_t x16 = -417116013;
int16_t x17 = 3;
uint8_t x19 = UINT8_MAX;
uint64_t x20 = 61921023LLU;
int64_t x25 = -4392291611797LL;
volatile int8_t x26 = -1;
uint16_t x36 = UINT16_MAX;
int8_t x38 = 1;
int16_t x42 = -14657;
volatile int32_t t10 = -2;
static volatile uint64_t x45 = 942443LLU;
int16_t x46 = INT16_MIN;
uint32_t x48 = 47U;
static int64_t x50 = 11095990797908104LL;
int64_t x67 = INT64_MIN;
int32_t t18 = -18445;
volatile int32_t t19 = 272690161;
uint8_t x81 = 0U;
int32_t t20 = 1;
volatile int64_t x85 = INT64_MIN;
uint16_t x86 = 24U;
int8_t x95 = 2;
static int32_t x98 = -1;
uint32_t x101 = UINT32_MAX;
uint32_t x103 = UINT32_MAX;
volatile int32_t t29 = 12916;
static uint32_t x123 = 1378318U;
static int64_t x127 = 12670887293148793LL;
uint64_t x143 = UINT64_MAX;
static volatile int16_t x147 = -42;
volatile uint64_t x149 = UINT64_MAX;
volatile uint64_t x150 = UINT64_MAX;
uint16_t x158 = 1742U;
int64_t x162 = 7819971347509758LL;
uint32_t x175 = UINT32_MAX;
int16_t x180 = INT16_MAX;
int32_t x186 = -1;
uint16_t x188 = 0U;
volatile int32_t t46 = -535635595;
int16_t x190 = 11613;
static uint16_t x191 = 3U;
int64_t x200 = -237796941413222LL;
int64_t x202 = -532995728879LL;
static int16_t x205 = -4099;
uint8_t x207 = UINT8_MAX;
static int32_t t51 = 1029;
uint16_t x210 = 4U;
static int8_t x211 = -1;
uint16_t x213 = UINT16_MAX;
static int32_t x214 = -1;
int32_t t55 = -172182;
uint8_t x228 = UINT8_MAX;
int32_t t56 = -629;
uint32_t x229 = UINT32_MAX;
volatile uint64_t x230 = 4809743201531830333LLU;
int32_t t58 = 1;
uint8_t x241 = 1U;
static int16_t x242 = INT16_MIN;
volatile uint16_t x244 = 886U;
int8_t x249 = -1;
int8_t x251 = INT8_MIN;
int32_t t62 = -849;
int16_t x255 = -74;
static volatile int32_t t64 = -53428338;
int32_t x263 = 13628;
uint32_t x265 = 3923U;
int8_t x272 = INT8_MIN;
int16_t x274 = INT16_MIN;
uint8_t x275 = 10U;
int32_t x278 = -1;
int32_t x280 = INT32_MAX;
int32_t t71 = 265859318;
int32_t x290 = INT32_MIN;
int16_t x292 = 3380;
uint8_t x294 = 94U;
int8_t x298 = INT8_MIN;
int32_t t75 = 74691730;
int32_t x308 = -1;
int32_t t76 = -306;
uint16_t x309 = 4376U;
static volatile int32_t t77 = 69;
int16_t x313 = INT16_MIN;
static uint8_t x327 = UINT8_MAX;
int32_t x328 = INT32_MAX;
int32_t x331 = -1;
volatile int32_t t82 = -226335;
int64_t x336 = INT64_MAX;
static uint32_t x346 = UINT32_MAX;
int16_t x348 = -880;
int64_t x349 = INT64_MIN;
volatile int32_t t87 = -334710668;
int32_t t88 = -1018566;
static int32_t x357 = 311;
uint16_t x364 = 105U;
static int16_t x367 = 78;
volatile int32_t t91 = 0;
int64_t x369 = -1LL;
int8_t x376 = 51;
static volatile int16_t x379 = -839;
static int64_t x381 = INT64_MIN;
int8_t x383 = INT8_MAX;
int8_t x388 = 0;
uint32_t x390 = 164U;
static int8_t x392 = INT8_MIN;
uint64_t x400 = UINT64_MAX;
static uint32_t x401 = 621U;
int16_t x402 = INT16_MIN;
int16_t x405 = -52;
int64_t x407 = INT64_MAX;
uint32_t x412 = 59455U;
volatile int8_t x426 = INT8_MAX;
int32_t x427 = INT32_MIN;
uint64_t x429 = 175280LLU;
static int8_t x430 = -1;
volatile int16_t x432 = INT16_MAX;
static volatile int64_t x436 = -1LL;
static uint8_t x441 = 81U;
int32_t x452 = -69986564;
static volatile uint16_t x453 = 162U;
static volatile int32_t x454 = INT32_MAX;
volatile int32_t t115 = 7087;
volatile uint8_t x465 = UINT8_MAX;
int8_t x467 = 1;
uint64_t x469 = UINT64_MAX;
int32_t x476 = -1;
int16_t x478 = 1;
volatile int64_t x479 = INT64_MIN;
int32_t x482 = INT32_MIN;
static int32_t x483 = 16315;
int8_t x489 = INT8_MIN;
uint64_t x490 = 184710951LLU;
int64_t x492 = INT64_MIN;
static int64_t x495 = INT64_MAX;
static volatile int32_t t124 = -470;
static uint16_t x507 = 296U;
volatile int32_t t130 = -9;
int32_t t131 = 3;
uint32_t x530 = UINT32_MAX;
volatile int32_t t134 = 29082544;
uint16_t x548 = 1727U;
int32_t t137 = 16071421;
uint32_t x555 = 28039111U;
int32_t t138 = -26384;
int64_t x558 = 3025576LL;
volatile int32_t t139 = 11;
static int64_t x562 = -25LL;
int32_t x570 = -7963;
uint8_t x573 = 39U;
int8_t x574 = 1;
volatile int32_t t143 = 2371;
int64_t x581 = INT64_MIN;
int32_t x583 = -1;
volatile int32_t t145 = -117399199;
volatile uint16_t x594 = 340U;
int8_t x599 = INT8_MAX;
uint16_t x601 = UINT16_MAX;
static int32_t t153 = 163554;
uint16_t x619 = 848U;
uint16_t x625 = 22U;
int32_t x632 = 389;
int32_t x637 = -287;
static uint16_t x638 = 207U;
int64_t x640 = -1LL;
int32_t t160 = 695309;
static int32_t x652 = INT32_MIN;
int64_t x660 = -1LL;
uint32_t x661 = UINT32_MAX;
static volatile int16_t x663 = -1;
volatile int32_t t166 = -681510;
uint8_t x674 = 23U;
volatile int64_t x682 = -7118571LL;
int16_t x687 = -1;
int16_t x690 = INT16_MIN;
uint32_t x692 = UINT32_MAX;
int64_t x694 = INT64_MAX;
int32_t x695 = -1;
int32_t t173 = -555;
int32_t t174 = -5268;
static int64_t x702 = INT64_MIN;
int8_t x704 = INT8_MAX;
static int32_t t175 = 229;
uint16_t x710 = 17340U;
volatile int64_t x714 = INT64_MIN;
uint64_t x722 = UINT64_MAX;
volatile uint16_t x724 = 6613U;
volatile int32_t t181 = 99458816;
uint8_t x730 = 1U;
static int32_t t184 = 528501366;
int8_t x742 = INT8_MAX;
volatile int64_t x749 = 7458315162LL;
int64_t x751 = INT64_MIN;
volatile int32_t t187 = -7412985;
int8_t x753 = INT8_MAX;
int32_t x759 = -1;
int16_t x760 = -1;
int32_t t189 = 492;
volatile int32_t t191 = -48;
static volatile int8_t x769 = INT8_MIN;
int64_t x778 = INT64_MIN;
int16_t x779 = INT16_MAX;
static int8_t x781 = -1;
static uint64_t x786 = UINT64_MAX;
static volatile int32_t t196 = -966280;
uint16_t x797 = UINT16_MAX;
int8_t x798 = INT8_MAX;
static int8_t x800 = -1;


void f0(void) {
    	int16_t x1 = 1;
	static uint32_t x3 = 6374U;

    t0 = (((x1>x2)*x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	static volatile int16_t x6 = INT16_MAX;
	static int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 17096044;

    t1 = (((x5>x6)*x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x10 = 323;
	int64_t x12 = INT64_MIN;

    t2 = (((x9>x10)*x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = -7063;
	volatile int32_t t3 = 241;

    t3 = (((x13>x14)*x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = 1;
	static int32_t t4 = 61844987;

    t4 = (((x17>x18)*x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 0U;
	volatile uint16_t x22 = UINT16_MAX;
	static int16_t x23 = -1;
	static uint32_t x24 = 0U;
	volatile int32_t t5 = -1;

    t5 = (((x21>x22)*x23)!=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x27 = UINT32_MAX;
	static uint16_t x28 = 3U;
	volatile int32_t t6 = 351433;

    t6 = (((x25>x26)*x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	uint8_t x30 = 3U;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 770596579;

    t7 = (((x29>x30)*x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	volatile int8_t x34 = -1;
	int8_t x35 = INT8_MAX;
	static int32_t t8 = 13860;

    t8 = (((x33>x34)*x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 1U;
	uint16_t x39 = 18914U;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -11;

    t9 = (((x37>x38)*x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 21U;
	int8_t x43 = 13;
	int64_t x44 = -1LL;

    t10 = (((x41>x42)*x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x47 = 1;
	int32_t t11 = 1341;

    t11 = (((x45>x46)*x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MAX;
	int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = 1;

    t12 = (((x49>x50)*x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MIN;
	int8_t x54 = -1;
	int64_t x55 = INT64_MIN;
	static uint8_t x56 = 11U;
	int32_t t13 = -49459708;

    t13 = (((x53>x54)*x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 657414344897385536LLU;
	uint64_t x58 = 84833303479436286LLU;
	int16_t x59 = 1146;
	volatile int32_t x60 = -1;
	int32_t t14 = 91776373;

    t14 = (((x57>x58)*x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x61 = 10U;
	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MAX;
	int16_t x64 = -21;
	int32_t t15 = 3890;

    t15 = (((x61>x62)*x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 3524076;

    t16 = (((x65>x66)*x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	volatile uint32_t x70 = 52U;
	uint64_t x71 = 2816558757584LLU;
	volatile int64_t x72 = INT64_MIN;
	int32_t t17 = -1;

    t17 = (((x69>x70)*x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 0;
	static int32_t x74 = INT32_MAX;
	uint64_t x75 = 70556982860650383LLU;
	int8_t x76 = -1;

    t18 = (((x73>x74)*x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -253332LL;
	int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 14276382U;

    t19 = (((x77>x78)*x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MAX;

    t20 = (((x81>x82)*x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x87 = 1890203545LLU;
	static int32_t x88 = 21;
	volatile int32_t t21 = 3719071;

    t21 = (((x85>x86)*x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 22U;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 1450U;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 451918106;

    t22 = (((x89>x90)*x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	uint32_t x94 = 11352U;
	uint16_t x96 = 2U;
	volatile int32_t t23 = -2;

    t23 = (((x93>x94)*x95)!=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 415966166734LLU;
	int32_t x99 = INT32_MAX;
	int8_t x100 = 12;
	volatile int32_t t24 = 154319581;

    t24 = (((x97>x98)*x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = 30;
	int32_t x104 = -1;
	int32_t t25 = 118;

    t25 = (((x101>x102)*x103)!=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	volatile int8_t x106 = INT8_MIN;
	volatile int64_t x107 = -34479016310027LL;
	int64_t x108 = -60421805LL;
	volatile int32_t t26 = -611492;

    t26 = (((x105>x106)*x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	uint64_t x110 = UINT64_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 16;

    t27 = (((x109>x110)*x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int8_t x114 = INT8_MAX;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = -62446;
	static int32_t t28 = 83818464;

    t28 = (((x113>x114)*x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	int64_t x119 = INT64_MIN;
	int32_t x120 = -2;

    t29 = (((x117>x118)*x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MIN;
	int32_t x124 = 27337;
	int32_t t30 = -1;

    t30 = (((x121>x122)*x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	volatile int16_t x126 = INT16_MIN;
	volatile uint64_t x128 = 4LLU;
	volatile int32_t t31 = 227649411;

    t31 = (((x125>x126)*x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MAX;
	int16_t x130 = INT16_MAX;
	static int8_t x131 = -1;
	int32_t x132 = -12279;
	volatile int32_t t32 = 128908445;

    t32 = (((x129>x130)*x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	int16_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t33 = -420189;

    t33 = (((x133>x134)*x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = -1LL;
	int32_t x138 = INT32_MAX;
	uint16_t x139 = 217U;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -1494209;

    t34 = (((x137>x138)*x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 9224U;
	int8_t x142 = 3;
	int64_t x144 = INT64_MAX;
	volatile int32_t t35 = -2;

    t35 = (((x141>x142)*x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 0U;
	volatile int64_t x146 = INT64_MIN;
	int32_t x148 = 8168;
	static volatile int32_t t36 = -6756638;

    t36 = (((x145>x146)*x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x151 = 205;
	int64_t x152 = -147044LL;
	volatile int32_t t37 = -9855;

    t37 = (((x149>x150)*x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 347180U;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -978011;

    t38 = (((x153>x154)*x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int8_t x159 = -1;
	volatile int32_t x160 = INT32_MIN;
	int32_t t39 = 19323068;

    t39 = (((x157>x158)*x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = UINT64_MAX;
	volatile int64_t x163 = 2657782696939401009LL;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = -111839172;

    t40 = (((x161>x162)*x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 1;
	int32_t x166 = INT32_MIN;
	volatile int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -39613;

    t41 = (((x165>x166)*x167)!=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -1;
	static volatile int8_t x172 = 3;
	volatile int32_t t42 = -6;

    t42 = (((x169>x170)*x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -60;
	volatile int16_t x174 = -961;
	volatile uint16_t x176 = 12886U;
	static int32_t t43 = 3679;

    t43 = (((x173>x174)*x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t t44 = 325013297;

    t44 = (((x177>x178)*x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 120U;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -68497626088911450LL;
	volatile int32_t t45 = 19;

    t45 = (((x181>x182)*x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = 13LLU;
	static int8_t x187 = 0;

    t46 = (((x185>x186)*x187)!=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 1U;
	int16_t x192 = INT16_MAX;
	int32_t t47 = 424;

    t47 = (((x189>x190)*x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 100483124865971960LLU;
	volatile int8_t x194 = 30;
	static volatile uint16_t x195 = 1U;
	int64_t x196 = -1LL;
	int32_t t48 = -3343453;

    t48 = (((x193>x194)*x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MAX;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	volatile int32_t t49 = -5166;

    t49 = (((x197>x198)*x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	uint16_t x203 = 4092U;
	int64_t x204 = -1LL;
	volatile int32_t t50 = -1046;

    t50 = (((x201>x202)*x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x206 = 32U;
	uint16_t x208 = UINT16_MAX;

    t51 = (((x205>x206)*x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	static uint32_t x212 = UINT32_MAX;
	int32_t t52 = -1;

    t52 = (((x209>x210)*x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 339155285;

    t53 = (((x213>x214)*x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	static int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = -7;
	volatile int32_t t54 = -3896141;

    t54 = (((x217>x218)*x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	int32_t x222 = 130348;
	volatile uint32_t x223 = 0U;
	int32_t x224 = INT32_MIN;

    t55 = (((x221>x222)*x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	static volatile int8_t x226 = 1;
	uint8_t x227 = UINT8_MAX;

    t56 = (((x225>x226)*x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x231 = INT16_MIN;
	uint64_t x232 = 1898742LLU;
	static int32_t t57 = 501;

    t57 = (((x229>x230)*x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -55;
	uint32_t x234 = 674U;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 25U;

    t58 = (((x233>x234)*x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1539056LL;
	int64_t x238 = INT64_MAX;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -9555;
	static volatile int32_t t59 = -2;

    t59 = (((x237>x238)*x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x243 = UINT8_MAX;
	volatile int32_t t60 = 0;

    t60 = (((x241>x242)*x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x245 = 23U;
	int32_t x246 = 398354;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MAX;
	static volatile int32_t t61 = -2026;

    t61 = (((x245>x246)*x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = -1LL;
	int8_t x252 = INT8_MIN;

    t62 = (((x249>x250)*x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 1;
	int64_t x254 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t63 = 896;

    t63 = (((x253>x254)*x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -1;
	uint64_t x260 = UINT64_MAX;

    t64 = (((x257>x258)*x259)!=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = INT32_MIN;
	volatile int32_t x262 = -2;
	volatile int8_t x264 = 0;
	int32_t t65 = -57;

    t65 = (((x261>x262)*x263)!=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x266 = 418U;
	uint64_t x267 = UINT64_MAX;
	volatile int64_t x268 = -585LL;
	int32_t t66 = -1130;

    t66 = (((x265>x266)*x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = -1;
	int8_t x270 = -1;
	volatile uint32_t x271 = UINT32_MAX;
	volatile int32_t t67 = 2030;

    t67 = (((x269>x270)*x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = 0;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = -30402;

    t68 = (((x273>x274)*x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 878700943U;
	int32_t x279 = INT32_MIN;
	int32_t t69 = -167944;

    t69 = (((x277>x278)*x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	uint64_t x282 = 2475670916778412LLU;
	uint32_t x283 = UINT32_MAX;
	volatile uint16_t x284 = UINT16_MAX;
	static int32_t t70 = 2439163;

    t70 = (((x281>x282)*x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = -1LL;
	int16_t x286 = -5;
	uint32_t x287 = 17U;
	uint16_t x288 = 16U;

    t71 = (((x285>x286)*x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MAX;
	static uint8_t x291 = 0U;
	volatile int32_t t72 = 31944363;

    t72 = (((x289>x290)*x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 1215513277LLU;
	volatile uint64_t x295 = 32676816LLU;
	static int32_t x296 = -1;
	volatile int32_t t73 = -12164526;

    t73 = (((x293>x294)*x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x297 = INT32_MIN;
	static volatile uint64_t x299 = UINT64_MAX;
	static uint64_t x300 = 506163372975327332LLU;
	volatile int32_t t74 = 44654;

    t74 = (((x297>x298)*x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 344U;
	uint16_t x302 = 35U;
	int32_t x303 = INT32_MAX;
	int64_t x304 = 6686740464423385LL;

    t75 = (((x301>x302)*x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = INT64_MAX;
	static uint32_t x306 = 628879U;
	volatile int8_t x307 = 13;

    t76 = (((x305>x306)*x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = INT8_MIN;
	static uint16_t x311 = UINT16_MAX;
	uint64_t x312 = UINT64_MAX;

    t77 = (((x309>x310)*x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x314 = UINT64_MAX;
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 0;

    t78 = (((x313>x314)*x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -209796468;
	volatile int8_t x318 = -1;
	int32_t x319 = -1;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t79 = 0;

    t79 = (((x317>x318)*x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	uint32_t x322 = 3U;
	static uint32_t x323 = 142U;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = -13979;

    t80 = (((x321>x322)*x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 2LLU;
	volatile uint16_t x326 = 7U;
	static int32_t t81 = 0;

    t81 = (((x325>x326)*x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 697;
	uint64_t x330 = 1LLU;
	volatile int16_t x332 = 2;

    t82 = (((x329>x330)*x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	volatile int64_t x334 = INT64_MAX;
	int32_t x335 = 241212404;
	int32_t t83 = 320;

    t83 = (((x333>x334)*x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	static uint32_t x338 = 255124U;
	static int16_t x339 = -1;
	static uint16_t x340 = 564U;
	volatile int32_t t84 = 31295;

    t84 = (((x337>x338)*x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint16_t x342 = UINT16_MAX;
	int32_t x343 = -1;
	int64_t x344 = INT64_MIN;
	int32_t t85 = 10941946;

    t85 = (((x341>x342)*x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	int8_t x347 = 7;
	int32_t t86 = -8654;

    t86 = (((x345>x346)*x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint8_t x350 = 117U;
	int8_t x351 = INT8_MIN;
	volatile int64_t x352 = INT64_MIN;

    t87 = (((x349>x350)*x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = 39220192801799654LL;
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 8492725282446LLU;
	static int32_t x356 = 172895920;

    t88 = (((x353>x354)*x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x358 = 4U;
	static int64_t x359 = 37766788845207050LL;
	int32_t x360 = 5515;
	int32_t t89 = 28;

    t89 = (((x357>x358)*x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = 1U;
	static int16_t x362 = INT16_MIN;
	int32_t x363 = -78;
	int32_t t90 = 0;

    t90 = (((x361>x362)*x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MAX;
	int8_t x366 = 3;
	volatile int32_t x368 = -1;

    t91 = (((x365>x366)*x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = INT32_MAX;
	int64_t x371 = INT64_MIN;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -1;

    t92 = (((x369>x370)*x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 176U;
	int8_t x374 = 1;
	volatile int32_t x375 = -1;
	static int32_t t93 = 1;

    t93 = (((x373>x374)*x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	int32_t t94 = -241416;

    t94 = (((x377>x378)*x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -1LL;
	int8_t x384 = -1;
	static volatile int32_t t95 = 4;

    t95 = (((x381>x382)*x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 48251348U;
	uint8_t x386 = 21U;
	int64_t x387 = -189939840LL;
	static int32_t t96 = 188258387;

    t96 = (((x385>x386)*x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	int16_t x391 = INT16_MIN;
	volatile int32_t t97 = -1;

    t97 = (((x389>x390)*x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile uint32_t x395 = 11162U;
	uint16_t x396 = 203U;
	int32_t t98 = 14;

    t98 = (((x393>x394)*x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MAX;
	int64_t x399 = 7496735702LL;
	int32_t t99 = -5636457;

    t99 = (((x397>x398)*x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x403 = 1U;
	int64_t x404 = -1LL;
	volatile int32_t t100 = 400221;

    t100 = (((x401>x402)*x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	volatile int32_t x408 = 411;
	int32_t t101 = -1;

    t101 = (((x405>x406)*x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	static volatile int64_t x410 = -51515120307684LL;
	static volatile uint64_t x411 = UINT64_MAX;
	static volatile int32_t t102 = -136866;

    t102 = (((x409>x410)*x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	static volatile int16_t x414 = -2;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t103 = -8482;

    t103 = (((x413>x414)*x415)!=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -24629;
	int16_t x418 = 4;
	static volatile int32_t x419 = 1103;
	int16_t x420 = -1;
	static volatile int32_t t104 = -1780786;

    t104 = (((x417>x418)*x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -206117459LL;
	int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	int64_t x424 = 901LL;
	volatile int32_t t105 = 60072680;

    t105 = (((x421>x422)*x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 1;
	uint32_t x428 = 4473U;
	volatile int32_t t106 = 4;

    t106 = (((x425>x426)*x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x431 = INT8_MIN;
	volatile int32_t t107 = -256493554;

    t107 = (((x429>x430)*x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x433 = -1;
	volatile int64_t x434 = -211912819846LL;
	int64_t x435 = INT64_MIN;
	int32_t t108 = 0;

    t108 = (((x433>x434)*x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	uint64_t x438 = 71576LLU;
	int8_t x439 = -21;
	uint8_t x440 = 0U;
	int32_t t109 = 40;

    t109 = (((x437>x438)*x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = INT16_MAX;
	static int32_t x443 = -1;
	int8_t x444 = -1;
	int32_t t110 = -12;

    t110 = (((x441>x442)*x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 18U;
	static int64_t x446 = -17500914533LL;
	int32_t x447 = 3031651;
	static int64_t x448 = -54382833188586470LL;
	volatile int32_t t111 = 1186907;

    t111 = (((x445>x446)*x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = 5;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 0U;
	volatile int32_t t112 = -1373638;

    t112 = (((x449>x450)*x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x455 = INT8_MIN;
	static uint64_t x456 = UINT64_MAX;
	static int32_t t113 = -60465580;

    t113 = (((x453>x454)*x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -270083;
	int64_t x458 = INT64_MIN;
	int32_t x459 = INT32_MAX;
	volatile int32_t x460 = 30535999;
	volatile int32_t t114 = 44;

    t114 = (((x457>x458)*x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 3U;
	int16_t x462 = 5;
	int64_t x463 = 15401905730504LL;
	volatile int8_t x464 = INT8_MIN;

    t115 = (((x461>x462)*x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x466 = -199658068783LL;
	uint16_t x468 = 6U;
	static int32_t t116 = 72;

    t116 = (((x465>x466)*x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = INT16_MIN;
	static uint16_t x471 = UINT16_MAX;
	static volatile int16_t x472 = -1;
	volatile int32_t t117 = 13;

    t117 = (((x469>x470)*x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	volatile int16_t x474 = INT16_MIN;
	static int16_t x475 = INT16_MAX;
	int32_t t118 = 1;

    t118 = (((x473>x474)*x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = 1;
	int8_t x480 = 14;
	volatile int32_t t119 = -328407768;

    t119 = (((x477>x478)*x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 11U;
	uint64_t x484 = UINT64_MAX;
	int32_t t120 = 352;

    t120 = (((x481>x482)*x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	uint16_t x486 = UINT16_MAX;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = 560U;
	int32_t t121 = -213;

    t121 = (((x485>x486)*x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x491 = 114U;
	static volatile int32_t t122 = -1;

    t122 = (((x489>x490)*x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x494 = -117;
	volatile int32_t x496 = -1;
	int32_t t123 = -5;

    t123 = (((x493>x494)*x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = UINT16_MAX;
	int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MIN;
	int64_t x500 = -1840742340956LL;

    t124 = (((x497>x498)*x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MAX;
	uint32_t x502 = 1927586U;
	uint16_t x503 = UINT16_MAX;
	volatile int64_t x504 = 20556309070LL;
	volatile int32_t t125 = -22071;

    t125 = (((x501>x502)*x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	static int8_t x506 = INT8_MAX;
	int32_t x508 = 52;
	int32_t t126 = -16;

    t126 = (((x505>x506)*x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 57LLU;
	static int64_t x510 = -1LL;
	int16_t x511 = -2;
	static int16_t x512 = INT16_MIN;
	static int32_t t127 = -1;

    t127 = (((x509>x510)*x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -8123;
	uint8_t x514 = 53U;
	uint16_t x515 = 4802U;
	int32_t x516 = INT32_MIN;
	int32_t t128 = 0;

    t128 = (((x513>x514)*x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = -1;
	uint8_t x518 = 74U;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = 1U;
	volatile int32_t t129 = -1043858722;

    t129 = (((x517>x518)*x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = -59;
	uint16_t x522 = 5707U;
	uint32_t x523 = 2900124U;
	volatile int64_t x524 = -1LL;

    t130 = (((x521>x522)*x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x525 = INT32_MIN;
	int8_t x526 = INT8_MIN;
	volatile int32_t x527 = -1;
	int32_t x528 = -446427333;

    t131 = (((x525>x526)*x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MAX;
	static volatile uint8_t x531 = UINT8_MAX;
	volatile int16_t x532 = 146;
	static int32_t t132 = 5047;

    t132 = (((x529>x530)*x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	uint32_t x534 = 117905198U;
	static int64_t x535 = INT64_MIN;
	int8_t x536 = INT8_MIN;
	static int32_t t133 = -8703;

    t133 = (((x533>x534)*x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -46;
	volatile int8_t x538 = 51;
	int16_t x539 = INT16_MAX;
	static int64_t x540 = -95749710408574720LL;

    t134 = (((x537>x538)*x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x541 = 69U;
	int8_t x542 = INT8_MIN;
	volatile uint64_t x543 = UINT64_MAX;
	static int8_t x544 = 4;
	int32_t t135 = -23276426;

    t135 = (((x541>x542)*x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	uint64_t x546 = UINT64_MAX;
	static volatile uint64_t x547 = UINT64_MAX;
	volatile int32_t t136 = 272;

    t136 = (((x545>x546)*x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	int8_t x550 = 5;
	int32_t x551 = -777214;
	static int8_t x552 = INT8_MIN;

    t137 = (((x549>x550)*x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	volatile int32_t x554 = INT32_MIN;
	static volatile uint32_t x556 = 1113529U;

    t138 = (((x553>x554)*x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 54903137834366212LL;
	int8_t x559 = INT8_MIN;
	int16_t x560 = 3684;

    t139 = (((x557>x558)*x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	volatile int32_t x563 = -1;
	volatile int16_t x564 = INT16_MAX;
	static volatile int32_t t140 = -115300214;

    t140 = (((x561>x562)*x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -1;
	int16_t x566 = INT16_MIN;
	static int16_t x567 = 0;
	int8_t x568 = 7;
	int32_t t141 = -844;

    t141 = (((x565>x566)*x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MAX;
	int16_t x571 = INT16_MAX;
	uint64_t x572 = 7063296LLU;
	int32_t t142 = -522780133;

    t142 = (((x569>x570)*x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x575 = INT8_MIN;
	uint16_t x576 = UINT16_MAX;

    t143 = (((x573>x574)*x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = 2;
	int8_t x578 = 20;
	int16_t x579 = 30;
	int32_t x580 = INT32_MIN;
	volatile int32_t t144 = -60598570;

    t144 = (((x577>x578)*x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = INT16_MIN;
	uint64_t x584 = UINT64_MAX;

    t145 = (((x581>x582)*x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = 1471;
	volatile int64_t x586 = INT64_MAX;
	static int16_t x587 = 3;
	int32_t x588 = -15;
	volatile int32_t t146 = -235131296;

    t146 = (((x585>x586)*x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	volatile uint16_t x590 = UINT16_MAX;
	int32_t x591 = INT32_MIN;
	static volatile uint64_t x592 = 201324LLU;
	volatile int32_t t147 = 57;

    t147 = (((x589>x590)*x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x593 = UINT16_MAX;
	int16_t x595 = -1;
	int64_t x596 = INT64_MAX;
	volatile int32_t t148 = 65978818;

    t148 = (((x593>x594)*x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int8_t x598 = 36;
	int8_t x600 = INT8_MIN;
	int32_t t149 = 414;

    t149 = (((x597>x598)*x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = INT8_MAX;
	int16_t x603 = INT16_MIN;
	uint32_t x604 = 3U;
	static int32_t t150 = 340452;

    t150 = (((x601>x602)*x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	int16_t x606 = -832;
	uint64_t x607 = 2061951609544390LLU;
	uint16_t x608 = UINT16_MAX;
	volatile int32_t t151 = -1;

    t151 = (((x605>x606)*x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x610 = -1;
	uint32_t x611 = 664602350U;
	static int8_t x612 = -8;
	static volatile int32_t t152 = 3616696;

    t152 = (((x609>x610)*x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	uint64_t x614 = 11822313283LLU;
	int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MAX;

    t153 = (((x613>x614)*x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 145LLU;
	volatile int64_t x618 = INT64_MIN;
	int8_t x620 = INT8_MIN;
	volatile int32_t t154 = 14;

    t154 = (((x617>x618)*x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = INT64_MAX;
	uint16_t x623 = 1624U;
	static volatile uint32_t x624 = 377182U;
	static volatile int32_t t155 = -21;

    t155 = (((x621>x622)*x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x626 = -101391;
	int32_t x627 = -1;
	int8_t x628 = -1;
	volatile int32_t t156 = 5;

    t156 = (((x625>x626)*x627)!=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 1522U;
	int8_t x630 = -1;
	static uint64_t x631 = 14796660214582136LLU;
	static int32_t t157 = -1038738;

    t157 = (((x629>x630)*x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int64_t x634 = INT64_MAX;
	static uint16_t x635 = UINT16_MAX;
	static int16_t x636 = -1;
	int32_t t158 = 1;

    t158 = (((x633>x634)*x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x639 = 4519;
	int32_t t159 = 96354;

    t159 = (((x637>x638)*x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	uint16_t x642 = 14U;
	int16_t x643 = INT16_MAX;
	volatile int8_t x644 = INT8_MAX;

    t160 = (((x641>x642)*x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x646 = 134719830180454LL;
	volatile int16_t x647 = INT16_MIN;
	volatile int32_t x648 = INT32_MIN;
	volatile int32_t t161 = -3971;

    t161 = (((x645>x646)*x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x649 = 11U;
	static int64_t x650 = INT64_MIN;
	int16_t x651 = INT16_MIN;
	int32_t t162 = -21853500;

    t162 = (((x649>x650)*x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -241;
	volatile int8_t x654 = 0;
	uint16_t x655 = 635U;
	int32_t x656 = -132689;
	static int32_t t163 = 21071;

    t163 = (((x653>x654)*x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = INT16_MIN;
	int8_t x658 = INT8_MIN;
	static uint32_t x659 = UINT32_MAX;
	volatile int32_t t164 = 440449;

    t164 = (((x657>x658)*x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x662 = 293U;
	int64_t x664 = INT64_MAX;
	volatile int32_t t165 = 1;

    t165 = (((x661>x662)*x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = -1;
	static int16_t x666 = -1;
	static int8_t x667 = -1;
	uint32_t x668 = 1154U;

    t166 = (((x665>x666)*x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	static int8_t x670 = 0;
	int64_t x671 = 26843166652856072LL;
	volatile int32_t x672 = INT32_MAX;
	volatile int32_t t167 = 5963677;

    t167 = (((x669>x670)*x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	int64_t x675 = 0LL;
	static int64_t x676 = -4186171LL;
	int32_t t168 = -2133;

    t168 = (((x673>x674)*x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -402LL;
	int16_t x678 = 1588;
	int32_t x679 = INT32_MIN;
	static volatile int32_t x680 = INT32_MIN;
	static int32_t t169 = -9;

    t169 = (((x677>x678)*x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 18587951662508LLU;
	uint64_t x683 = UINT64_MAX;
	uint64_t x684 = 403504LLU;
	int32_t t170 = -71;

    t170 = (((x681>x682)*x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -427873999355318673LL;
	int32_t x686 = INT32_MAX;
	volatile uint8_t x688 = 1U;
	volatile int32_t t171 = 480330789;

    t171 = (((x685>x686)*x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MAX;
	int16_t x691 = 1017;
	volatile int32_t t172 = -1;

    t172 = (((x689>x690)*x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int16_t x696 = INT16_MIN;

    t173 = (((x693>x694)*x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = -1;
	volatile int64_t x698 = INT64_MAX;
	int32_t x699 = INT32_MAX;
	static uint64_t x700 = 3058551LLU;

    t174 = (((x697>x698)*x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile int16_t x703 = INT16_MIN;

    t175 = (((x701>x702)*x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 22U;
	volatile uint16_t x706 = UINT16_MAX;
	uint64_t x707 = 237487128181LLU;
	uint16_t x708 = 461U;
	volatile int32_t t176 = -3347;

    t176 = (((x705>x706)*x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x709 = UINT64_MAX;
	volatile int32_t x711 = INT32_MIN;
	uint64_t x712 = 321398231081LLU;
	static int32_t t177 = -442478;

    t177 = (((x709>x710)*x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	uint32_t x715 = UINT32_MAX;
	int32_t x716 = INT32_MAX;
	volatile int32_t t178 = 218199;

    t178 = (((x713>x714)*x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 277U;
	int32_t x718 = INT32_MIN;
	volatile int8_t x719 = -1;
	volatile int16_t x720 = INT16_MAX;
	int32_t t179 = -13036744;

    t179 = (((x717>x718)*x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	uint32_t x723 = 2949308U;
	volatile int32_t t180 = 236706396;

    t180 = (((x721>x722)*x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	volatile int32_t x726 = -30;
	int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MIN;

    t181 = (((x725>x726)*x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	uint16_t x731 = UINT16_MAX;
	uint64_t x732 = UINT64_MAX;
	int32_t t182 = -37;

    t182 = (((x729>x730)*x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x733 = 1450U;
	volatile int8_t x734 = INT8_MIN;
	int16_t x735 = -1;
	uint64_t x736 = UINT64_MAX;
	int32_t t183 = -228;

    t183 = (((x733>x734)*x735)!=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	uint64_t x738 = 6893460LLU;
	uint8_t x739 = UINT8_MAX;
	uint64_t x740 = UINT64_MAX;

    t184 = (((x737>x738)*x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = 75193356742LLU;
	volatile int64_t x743 = INT64_MIN;
	uint64_t x744 = 0LLU;
	volatile int32_t t185 = -328288;

    t185 = (((x741>x742)*x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	uint16_t x746 = 879U;
	int32_t x747 = -1;
	int8_t x748 = INT8_MIN;
	volatile int32_t t186 = 7515818;

    t186 = (((x745>x746)*x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = -1;
	static uint16_t x752 = 634U;

    t187 = (((x749>x750)*x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x754 = -1;
	uint16_t x755 = 15U;
	int16_t x756 = -1;
	int32_t t188 = -32302674;

    t188 = (((x753>x754)*x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 25358984430961LLU;
	uint32_t x758 = 659225U;

    t189 = (((x757>x758)*x759)!=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1360054;
	uint32_t x762 = UINT32_MAX;
	int32_t x763 = INT32_MIN;
	int16_t x764 = -1;
	int32_t t190 = -127111210;

    t190 = (((x761>x762)*x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x765 = INT64_MAX;
	int16_t x766 = -35;
	uint32_t x767 = UINT32_MAX;
	static int16_t x768 = -120;

    t191 = (((x765>x766)*x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x770 = UINT32_MAX;
	int64_t x771 = INT64_MIN;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t192 = 12490569;

    t192 = (((x769>x770)*x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	int16_t x774 = INT16_MIN;
	static volatile uint32_t x775 = 11275218U;
	static volatile int32_t x776 = INT32_MIN;
	int32_t t193 = 104570;

    t193 = (((x773>x774)*x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	volatile int16_t x780 = 1;
	volatile int32_t t194 = -10331;

    t194 = (((x777>x778)*x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x782 = UINT8_MAX;
	int32_t x783 = -1;
	int32_t x784 = -24571;
	static volatile int32_t t195 = 4651;

    t195 = (((x781>x782)*x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int8_t x787 = 28;
	uint8_t x788 = 1U;

    t196 = (((x785>x786)*x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 6717U;
	static uint32_t x790 = UINT32_MAX;
	volatile uint8_t x791 = 10U;
	static int32_t x792 = 6540;
	volatile int32_t t197 = -4;

    t197 = (((x789>x790)*x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	uint8_t x794 = 4U;
	int16_t x795 = 1;
	volatile int64_t x796 = -2340861241998LL;
	int32_t t198 = 18438;

    t198 = (((x793>x794)*x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x799 = -1;
	static int32_t t199 = -7716106;

    t199 = (((x797>x798)*x799)!=x800);

    if (t199 != 0) { NG(); } else { ; }
	
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

