
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

uint32_t x8 = UINT32_MAX;
int32_t t2 = 0;
volatile int8_t x16 = INT8_MIN;
static int16_t x22 = 123;
int8_t x25 = -1;
volatile int32_t x31 = INT32_MIN;
static uint8_t x35 = 7U;
int32_t t8 = -2805;
static int64_t x41 = -1LL;
uint32_t x42 = 6U;
volatile int64_t x49 = INT64_MIN;
volatile int16_t x50 = -401;
uint16_t x51 = 28587U;
volatile int32_t t11 = -3461;
int32_t t12 = 23;
int16_t x58 = INT16_MIN;
volatile int16_t x63 = INT16_MAX;
int64_t x65 = INT64_MIN;
uint16_t x67 = 208U;
int8_t x70 = 15;
uint64_t x71 = UINT64_MAX;
int8_t x73 = INT8_MAX;
uint32_t x75 = 8980U;
volatile uint64_t x76 = 174LLU;
int32_t t17 = 18182;
volatile uint8_t x79 = 9U;
int64_t x87 = -450501LL;
static int32_t t19 = -5920308;
int64_t x90 = 4450359823LL;
int64_t x93 = INT64_MIN;
int32_t x99 = INT32_MIN;
static int32_t t22 = 43;
volatile int8_t x102 = 6;
uint16_t x104 = UINT16_MAX;
int32_t t23 = 9406;
int8_t x109 = 2;
static volatile int32_t t25 = -190340872;
volatile int64_t x116 = INT64_MIN;
int16_t x117 = -1;
int32_t x120 = INT32_MAX;
volatile int32_t t27 = -12;
int8_t x124 = -5;
static int16_t x130 = -1;
static int32_t t30 = 216;
int64_t x142 = -7996166707592LL;
static volatile int32_t t34 = -802992182;
volatile int8_t x164 = 1;
static volatile int32_t t39 = -3552735;
static int64_t x170 = INT64_MAX;
static int64_t x174 = -1LL;
int32_t x187 = -1754;
int32_t x190 = INT32_MIN;
int32_t t45 = -6894729;
int64_t x193 = -49LL;
uint8_t x199 = UINT8_MAX;
int64_t x212 = -1LL;
uint32_t x214 = 1596U;
int32_t t50 = -73575443;
static volatile uint64_t x220 = 26601LLU;
volatile int32_t t52 = -416764;
volatile int64_t x225 = 1886785LL;
volatile int32_t t55 = 2335385;
volatile int16_t x247 = INT16_MIN;
volatile int64_t x264 = -1LL;
int32_t t63 = 125495;
int32_t x274 = INT32_MIN;
static int64_t x276 = 1LL;
static volatile int32_t t64 = -13855;
volatile uint32_t x277 = 1376727U;
static volatile int32_t x286 = -24224455;
volatile int8_t x311 = -19;
int32_t x321 = INT32_MIN;
static volatile int32_t t71 = -1710;
int32_t t72 = -1263;
volatile int32_t t73 = 19802381;
static int8_t x344 = -3;
int16_t x366 = INT16_MIN;
volatile int64_t x374 = INT64_MIN;
static uint8_t x387 = 26U;
volatile int32_t t86 = -118690974;
volatile uint16_t x394 = 58U;
int8_t x400 = -1;
int64_t x405 = -1LL;
int64_t x415 = INT64_MIN;
volatile int32_t t93 = 60599;
int8_t x417 = INT8_MIN;
uint8_t x418 = UINT8_MAX;
int16_t x422 = INT16_MIN;
int16_t x429 = INT16_MAX;
static volatile uint64_t x430 = 6762LLU;
int32_t x432 = -1;
volatile int16_t x433 = 6933;
volatile uint16_t x442 = 25U;
static volatile int64_t x445 = INT64_MIN;
uint16_t x449 = 0U;
static uint8_t x461 = 6U;
volatile int64_t x473 = 522119LL;
int32_t x474 = -1;
int64_t x482 = -159LL;
uint64_t x509 = 4664156276LLU;
int8_t x510 = INT8_MAX;
volatile int32_t t115 = 124271080;
volatile int32_t t116 = -3;
int16_t x522 = INT16_MAX;
int64_t x524 = -1LL;
uint32_t x525 = 4491676U;
static volatile int64_t x526 = -21615931536586LL;
int32_t t121 = 7;
volatile int32_t t124 = -880;
volatile int16_t x550 = 21;
uint16_t x569 = UINT16_MAX;
int32_t t131 = -739760;
volatile int32_t t133 = -96512660;
volatile int64_t x598 = -451817484237146LL;
static volatile int8_t x600 = INT8_MAX;
static int32_t x613 = INT32_MIN;
volatile uint8_t x614 = UINT8_MAX;
volatile int16_t x615 = 7;
volatile int32_t t137 = 120129660;
int64_t x621 = INT64_MIN;
volatile int16_t x623 = -1;
uint64_t x624 = 1101602LLU;
static int8_t x625 = 1;
int32_t x626 = INT32_MIN;
int64_t x628 = INT64_MIN;
static int32_t t139 = 1;
int8_t x629 = -1;
static int8_t x634 = INT8_MIN;
uint8_t x635 = 50U;
int32_t x638 = 1391;
int32_t t142 = -376169;
int64_t x647 = -1LL;
volatile int32_t x652 = INT32_MIN;
int32_t x653 = INT32_MIN;
static int16_t x656 = INT16_MIN;
uint64_t x657 = 357359145784LLU;
static int8_t x660 = INT8_MIN;
int8_t x691 = INT8_MIN;
static uint64_t x692 = UINT64_MAX;
uint16_t x693 = UINT16_MAX;
static uint16_t x696 = UINT16_MAX;
volatile int8_t x699 = 3;
volatile int16_t x701 = INT16_MAX;
int32_t x702 = INT32_MIN;
int8_t x703 = -1;
uint64_t x705 = 1180833848837LLU;
int32_t x709 = -340;
int8_t x710 = INT8_MIN;
static uint64_t x728 = 5852814153546345950LLU;
static int8_t x733 = -61;
int8_t x734 = INT8_MIN;
uint16_t x738 = UINT16_MAX;
int16_t x740 = INT16_MIN;
uint64_t x744 = 126624579724225941LLU;
int32_t t164 = 1211;
volatile int32_t t168 = -3313;
int64_t x763 = INT64_MIN;
static int16_t x766 = -1;
static uint32_t x767 = UINT32_MAX;
volatile int32_t t170 = -121;
int16_t x769 = -6602;
volatile int16_t x773 = INT16_MAX;
static uint16_t x783 = 13U;
int8_t x790 = -1;
uint16_t x795 = 315U;
int32_t x806 = INT32_MAX;
volatile int32_t t178 = -705604670;
static volatile int8_t x813 = 0;
uint64_t x819 = 975414552LLU;
uint64_t x824 = 1328863LLU;
uint8_t x836 = UINT8_MAX;
volatile int8_t x837 = -1;
volatile int32_t t186 = 5;
int64_t x850 = -3374LL;
int32_t t189 = 8057;
volatile int32_t t191 = 55213;
static int8_t x873 = INT8_MIN;
int16_t x877 = -1;
int16_t x880 = -1;
volatile int32_t t195 = 2908;
int16_t x886 = -1;
static int64_t x887 = -1LL;
uint32_t x888 = 7145498U;
int32_t t196 = -64171;
static int64_t x894 = 4LL;
int16_t x896 = INT16_MIN;
int32_t x898 = INT32_MIN;


void f0(void) {
    	uint64_t x1 = 287349LLU;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 44U;
	static int32_t x4 = -1;
	static int32_t t0 = -1965;

    t0 = ((x1&(x2-x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static int16_t x6 = 123;
	static int16_t x7 = -1;
	int32_t t1 = -309896323;

    t1 = ((x5&(x6-x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -1;
	static uint8_t x10 = 4U;
	static int16_t x11 = -1;
	uint64_t x12 = 605956162430914160LLU;

    t2 = ((x9&(x10-x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	volatile int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MAX;
	int32_t t3 = 19469;

    t3 = ((x13&(x14-x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static int64_t x18 = -1LL;
	static int64_t x19 = -1LL;
	uint16_t x20 = 3U;
	int32_t t4 = 13351;

    t4 = ((x17&(x18-x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 13LL;
	static int16_t x23 = -1;
	volatile int64_t x24 = INT64_MIN;
	static volatile int32_t t5 = -39216;

    t5 = ((x21&(x22-x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x26 = 62720349268215342LLU;
	uint32_t x27 = 1U;
	int16_t x28 = -102;
	volatile int32_t t6 = 3;

    t6 = ((x25&(x26-x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -5883;
	static int16_t x30 = INT16_MIN;
	volatile int8_t x32 = -2;
	static volatile int32_t t7 = -402190;

    t7 = ((x29&(x30-x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	static volatile int8_t x34 = INT8_MAX;
	static int16_t x36 = -1146;

    t8 = ((x33&(x34-x35))<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x43 = -1LL;
	uint8_t x44 = 33U;
	int32_t t9 = 94084857;

    t9 = ((x41&(x42-x43))<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -85344324;
	static volatile uint16_t x46 = UINT16_MAX;
	static volatile int8_t x47 = 43;
	int8_t x48 = INT8_MAX;
	int32_t t10 = -2318354;

    t10 = ((x45&(x46-x47))<=x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x52 = UINT8_MAX;

    t11 = ((x49&(x50-x51))<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -1;
	uint16_t x54 = 14444U;
	uint32_t x55 = 1U;
	uint32_t x56 = UINT32_MAX;

    t12 = ((x53&(x54-x55))<=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	static volatile uint64_t x59 = 57235517LLU;
	static uint32_t x60 = UINT32_MAX;
	volatile int32_t t13 = -15555;

    t13 = ((x57&(x58-x59))<=x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = 20086612563LL;
	int8_t x62 = INT8_MIN;
	static uint32_t x64 = UINT32_MAX;
	static int32_t t14 = 2;

    t14 = ((x61&(x62-x63))<=x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x66 = 2271;
	static int8_t x68 = INT8_MIN;
	int32_t t15 = -231;

    t15 = ((x65&(x66-x67))<=x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -3;
	static int64_t x72 = INT64_MIN;
	static volatile int32_t t16 = 53234634;

    t16 = ((x69&(x70-x71))<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = 15224U;

    t17 = ((x73&(x74-x75))<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -1;
	int64_t x78 = 20398424557479LL;
	int32_t x80 = INT32_MAX;
	int32_t t18 = -15;

    t18 = ((x77&(x78-x79))<=x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = -1LL;
	static int8_t x86 = -11;
	int64_t x88 = INT64_MIN;

    t19 = ((x85&(x86-x87))<=x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x89 = INT32_MAX;
	static volatile int16_t x91 = -1;
	static int32_t x92 = INT32_MIN;
	int32_t t20 = 132472714;

    t20 = ((x89&(x90-x91))<=x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x94 = UINT8_MAX;
	int16_t x95 = -10841;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = 1;

    t21 = ((x93&(x94-x95))<=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MAX;
	int32_t x98 = INT32_MIN;
	static volatile uint64_t x100 = 8LLU;

    t22 = ((x97&(x98-x99))<=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	uint16_t x103 = UINT16_MAX;

    t23 = ((x101&(x102-x103))<=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x105 = 22794;
	uint8_t x106 = UINT8_MAX;
	static int32_t x107 = 22443438;
	static volatile int8_t x108 = INT8_MIN;
	int32_t t24 = 230528;

    t24 = ((x105&(x106-x107))<=x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	int64_t x112 = INT64_MAX;

    t25 = ((x109&(x110-x111))<=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = -1LL;
	int64_t x114 = -167952LL;
	int64_t x115 = 29797686311802LL;
	int32_t t26 = 2035516;

    t26 = ((x113&(x114-x115))<=x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x118 = -1;
	int32_t x119 = 4126144;

    t27 = ((x117&(x118-x119))<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = 49U;
	int16_t x122 = INT16_MIN;
	uint64_t x123 = 6LLU;
	static volatile int32_t t28 = -1;

    t28 = ((x121&(x122-x123))<=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x125 = 13180237461LLU;
	volatile int32_t x126 = INT32_MAX;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int8_t x128 = -48;
	int32_t t29 = -196798;

    t29 = ((x125&(x126-x127))<=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x129 = 1LLU;
	int16_t x131 = INT16_MAX;
	int16_t x132 = INT16_MIN;

    t30 = ((x129&(x130-x131))<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = INT16_MIN;
	uint32_t x134 = 15681392U;
	uint16_t x135 = UINT16_MAX;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t31 = 70107397;

    t31 = ((x133&(x134-x135))<=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x137 = UINT8_MAX;
	int8_t x138 = -1;
	uint64_t x139 = UINT64_MAX;
	uint8_t x140 = UINT8_MAX;
	int32_t t32 = 382;

    t32 = ((x137&(x138-x139))<=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -1;
	uint32_t x143 = 1809185U;
	uint32_t x144 = 1355426052U;
	static volatile int32_t t33 = 59803855;

    t33 = ((x141&(x142-x143))<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = -14910143403379LL;
	int32_t x146 = -1;
	static volatile uint32_t x147 = UINT32_MAX;
	volatile int32_t x148 = -1;

    t34 = ((x145&(x146-x147))<=x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = -91504LL;
	uint8_t x150 = UINT8_MAX;
	int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	int32_t t35 = -1413;

    t35 = ((x149&(x150-x151))<=x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = -96;
	static int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MAX;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t36 = 2;

    t36 = ((x153&(x154-x155))<=x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = 6;
	static volatile int8_t x158 = -27;
	uint64_t x159 = 4429762LLU;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 6961;

    t37 = ((x157&(x158-x159))<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = INT8_MAX;
	int8_t x162 = 50;
	uint16_t x163 = 831U;
	volatile int32_t t38 = 695303;

    t38 = ((x161&(x162-x163))<=x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x165 = INT64_MIN;
	static int8_t x166 = -2;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MAX;

    t39 = ((x165&(x166-x167))<=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MIN;
	uint64_t x171 = 5890416708208LLU;
	int16_t x172 = -31;
	int32_t t40 = 68757;

    t40 = ((x169&(x170-x171))<=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = 0;
	int16_t x175 = -1647;
	int32_t x176 = 11082489;
	int32_t t41 = 2;

    t41 = ((x173&(x174-x175))<=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = 44U;
	int16_t x178 = -1;
	static uint32_t x179 = 135U;
	int16_t x180 = -7;
	static volatile int32_t t42 = 19443712;

    t42 = ((x177&(x178-x179))<=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	volatile int16_t x184 = -98;
	volatile int32_t t43 = 29;

    t43 = ((x181&(x182-x183))<=x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x185 = UINT16_MAX;
	int32_t x186 = 1895;
	int32_t x188 = -1;
	static volatile int32_t t44 = 75;

    t44 = ((x185&(x186-x187))<=x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x189 = -8;
	volatile int64_t x191 = -1LL;
	int8_t x192 = INT8_MAX;

    t45 = ((x189&(x190-x191))<=x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x194 = 79U;
	volatile int64_t x195 = -1LL;
	int8_t x196 = -1;
	volatile int32_t t46 = -1;

    t46 = ((x193&(x194-x195))<=x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	int8_t x200 = -1;
	volatile int32_t t47 = 27;

    t47 = ((x197&(x198-x199))<=x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = 463596978288390LL;
	int16_t x203 = INT16_MAX;
	int32_t x204 = -1;
	int32_t t48 = -84;

    t48 = ((x201&(x202-x203))<=x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x209 = INT16_MIN;
	int64_t x210 = 1954780LL;
	volatile int8_t x211 = -1;
	volatile int32_t t49 = -37;

    t49 = ((x209&(x210-x211))<=x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = -1LL;
	uint8_t x215 = 1U;
	int32_t x216 = INT32_MIN;

    t50 = ((x213&(x214-x215))<=x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x217 = -203703810;
	int16_t x218 = INT16_MIN;
	volatile int32_t x219 = 2;
	volatile int32_t t51 = 132;

    t51 = ((x217&(x218-x219))<=x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x221 = INT32_MAX;
	static uint8_t x222 = UINT8_MAX;
	int8_t x223 = 9;
	int64_t x224 = INT64_MAX;

    t52 = ((x221&(x222-x223))<=x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x226 = UINT16_MAX;
	int64_t x227 = 98LL;
	static volatile int16_t x228 = -1;
	int32_t t53 = 237920108;

    t53 = ((x225&(x226-x227))<=x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = INT8_MAX;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -46LL;
	int16_t x236 = INT16_MIN;
	int32_t t54 = -6023;

    t54 = ((x233&(x234-x235))<=x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x237 = -1LL;
	volatile uint64_t x238 = 249015176910211822LLU;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;

    t55 = ((x237&(x238-x239))<=x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = 395U;
	volatile int32_t x242 = -1;
	uint64_t x243 = 90393878508214LLU;
	int64_t x244 = -1LL;
	volatile int32_t t56 = -91684;

    t56 = ((x241&(x242-x243))<=x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x245 = 110;
	int32_t x246 = -1;
	volatile int32_t x248 = INT32_MIN;
	static volatile int32_t t57 = -10;

    t57 = ((x245&(x246-x247))<=x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = 1588;
	static uint64_t x250 = 93353LLU;
	static volatile uint16_t x251 = 117U;
	int16_t x252 = INT16_MIN;
	int32_t t58 = 82;

    t58 = ((x249&(x250-x251))<=x252);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x253 = INT32_MAX;
	uint16_t x254 = UINT16_MAX;
	static uint64_t x255 = UINT64_MAX;
	static volatile int8_t x256 = INT8_MIN;
	volatile int32_t t59 = 809921;

    t59 = ((x253&(x254-x255))<=x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = 25147U;
	int8_t x259 = INT8_MAX;
	static volatile int32_t x260 = INT32_MAX;
	volatile int32_t t60 = -63577;

    t60 = ((x257&(x258-x259))<=x260);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x261 = 2092U;
	static volatile int8_t x262 = -1;
	int16_t x263 = -1;
	int32_t t61 = 15;

    t61 = ((x261&(x262-x263))<=x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x265 = 6663;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	int16_t x268 = -1190;
	volatile int32_t t62 = 1499654;

    t62 = ((x265&(x266-x267))<=x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x269 = -117;
	int16_t x270 = 1;
	int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;

    t63 = ((x269&(x270-x271))<=x272);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x273 = INT8_MIN;
	uint64_t x275 = 121134LLU;

    t64 = ((x273&(x274-x275))<=x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x278 = 110579502080LL;
	static int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t65 = 249244;

    t65 = ((x277&(x278-x279))<=x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x281 = UINT64_MAX;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 21388555623296594LLU;
	static volatile int32_t x284 = -21356554;
	volatile int32_t t66 = -511;

    t66 = ((x281&(x282-x283))<=x284);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = 88658844979LL;
	int64_t x287 = -1LL;
	int8_t x288 = 1;
	volatile int32_t t67 = -11;

    t67 = ((x285&(x286-x287))<=x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = INT16_MIN;
	volatile int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MAX;
	static int32_t t68 = -1403316;

    t68 = ((x293&(x294-x295))<=x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x301 = -1;
	int16_t x302 = 5;
	static volatile int8_t x303 = -5;
	int64_t x304 = 592222539LL;
	int32_t t69 = 7;

    t69 = ((x301&(x302-x303))<=x304);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = INT16_MAX;
	volatile int8_t x310 = -55;
	static int16_t x312 = INT16_MAX;
	int32_t t70 = 31132;

    t70 = ((x309&(x310-x311))<=x312);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = INT32_MAX;
	int16_t x324 = 34;

    t71 = ((x321&(x322-x323))<=x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = -59;
	int8_t x326 = 0;
	static int32_t x327 = -1;
	int64_t x328 = -35662496962LL;

    t72 = ((x325&(x326-x327))<=x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = INT32_MAX;
	static int8_t x330 = -1;
	int16_t x331 = INT16_MAX;
	static uint16_t x332 = 43U;

    t73 = ((x329&(x330-x331))<=x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = INT64_MAX;
	volatile uint32_t x334 = 814U;
	volatile int8_t x335 = INT8_MIN;
	int64_t x336 = -10786111807929LL;
	static int32_t t74 = 5456208;

    t74 = ((x333&(x334-x335))<=x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x337 = INT32_MIN;
	uint64_t x338 = 2159254017693690LLU;
	int8_t x339 = INT8_MIN;
	volatile uint64_t x340 = 13728294171479340LLU;
	int32_t t75 = 729618675;

    t75 = ((x337&(x338-x339))<=x340);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x341 = INT64_MAX;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	volatile int32_t t76 = 8;

    t76 = ((x341&(x342-x343))<=x344);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x345 = INT16_MIN;
	volatile uint32_t x346 = 673847761U;
	uint32_t x347 = 619U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t77 = 783789185;

    t77 = ((x345&(x346-x347))<=x348);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x353 = 16577U;
	uint32_t x354 = 220025U;
	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t78 = 46282436;

    t78 = ((x353&(x354-x355))<=x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x357 = 0U;
	int32_t x358 = 4789;
	static volatile int8_t x359 = -1;
	static int16_t x360 = -248;
	int32_t t79 = 1;

    t79 = ((x357&(x358-x359))<=x360);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x361 = INT8_MAX;
	static int64_t x362 = 5260312064LL;
	uint32_t x363 = 63U;
	static int8_t x364 = -1;
	volatile int32_t t80 = -51;

    t80 = ((x361&(x362-x363))<=x364);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	static uint16_t x368 = UINT16_MAX;
	static int32_t t81 = -3481;

    t81 = ((x365&(x366-x367))<=x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x369 = 99;
	uint8_t x370 = 24U;
	uint16_t x371 = 3U;
	int32_t x372 = 7805;
	int32_t t82 = 0;

    t82 = ((x369&(x370-x371))<=x372);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x373 = -25;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t83 = -54639873;

    t83 = ((x373&(x374-x375))<=x376);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = INT32_MIN;
	uint8_t x378 = 3U;
	uint64_t x379 = 5LLU;
	int8_t x380 = INT8_MIN;
	volatile int32_t t84 = 209;

    t84 = ((x377&(x378-x379))<=x380);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x381 = INT64_MAX;
	static volatile int64_t x382 = INT64_MAX;
	int8_t x383 = 4;
	int32_t x384 = 3462;
	static volatile int32_t t85 = 37142609;

    t85 = ((x381&(x382-x383))<=x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x385 = -1;
	uint32_t x386 = 2271448U;
	int16_t x388 = INT16_MIN;

    t86 = ((x385&(x386-x387))<=x388);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = 1;
	volatile int16_t x390 = 1841;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;
	volatile int32_t t87 = -144;

    t87 = ((x389&(x390-x391))<=x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x393 = INT32_MIN;
	volatile int8_t x395 = INT8_MAX;
	static uint16_t x396 = UINT16_MAX;
	int32_t t88 = -4;

    t88 = ((x393&(x394-x395))<=x396);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = 13;
	volatile uint64_t x398 = 363505133878490519LLU;
	static int32_t x399 = INT32_MIN;
	int32_t t89 = 917;

    t89 = ((x397&(x398-x399))<=x400);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int8_t x403 = -6;
	int16_t x404 = INT16_MAX;
	volatile int32_t t90 = 31;

    t90 = ((x401&(x402-x403))<=x404);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x406 = INT64_MIN;
	uint64_t x407 = 318697069256934LLU;
	uint8_t x408 = 12U;
	static volatile int32_t t91 = -2997829;

    t91 = ((x405&(x406-x407))<=x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x409 = 1277813U;
	uint64_t x410 = 483392505736768194LLU;
	int32_t x411 = INT32_MIN;
	static int16_t x412 = -1;
	volatile int32_t t92 = -1;

    t92 = ((x409&(x410-x411))<=x412);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x413 = 4;
	int8_t x414 = -1;
	int8_t x416 = INT8_MIN;

    t93 = ((x413&(x414-x415))<=x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x419 = INT64_MAX;
	volatile int64_t x420 = 934LL;
	static int32_t t94 = 152056816;

    t94 = ((x417&(x418-x419))<=x420);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x423 = INT32_MIN;
	static int32_t x424 = INT32_MIN;
	static int32_t t95 = -1;

    t95 = ((x421&(x422-x423))<=x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = -792297;
	volatile uint64_t x426 = 660506461LLU;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t96 = -1;

    t96 = ((x425&(x426-x427))<=x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x431 = 115014701;
	volatile int32_t t97 = -15595;

    t97 = ((x429&(x430-x431))<=x432);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x434 = 28068693U;
	static volatile int16_t x435 = INT16_MIN;
	int8_t x436 = 2;
	volatile int32_t t98 = -499023;

    t98 = ((x433&(x434-x435))<=x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x437 = INT16_MIN;
	uint32_t x438 = 654008897U;
	static int8_t x439 = INT8_MAX;
	int8_t x440 = -1;
	int32_t t99 = 159;

    t99 = ((x437&(x438-x439))<=x440);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = -3;
	int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MAX;
	int32_t t100 = -135630;

    t100 = ((x441&(x442-x443))<=x444);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x446 = INT8_MIN;
	int32_t x447 = 8695;
	uint16_t x448 = 89U;
	volatile int32_t t101 = -60718211;

    t101 = ((x445&(x446-x447))<=x448);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t102 = 40;

    t102 = ((x449&(x450-x451))<=x452);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x457 = 58U;
	volatile int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	static volatile int64_t x460 = INT64_MIN;
	static volatile int32_t t103 = -1016;

    t103 = ((x457&(x458-x459))<=x460);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x462 = -1LL;
	int32_t x463 = 0;
	int8_t x464 = -2;
	volatile int32_t t104 = -397642;

    t104 = ((x461&(x462-x463))<=x464);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x465 = 4U;
	volatile int16_t x466 = -1;
	int64_t x467 = 4158534849970LL;
	int64_t x468 = -1LL;
	int32_t t105 = 0;

    t105 = ((x465&(x466-x467))<=x468);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x469 = INT64_MIN;
	int8_t x470 = -1;
	static volatile int64_t x471 = INT64_MIN;
	static volatile int32_t x472 = 84731;
	static int32_t t106 = 13736;

    t106 = ((x469&(x470-x471))<=x472);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x475 = -176;
	int64_t x476 = 479668090472LL;
	volatile int32_t t107 = 730571675;

    t107 = ((x473&(x474-x475))<=x476);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x477 = 359641980U;
	volatile int16_t x478 = INT16_MAX;
	int8_t x479 = 15;
	int8_t x480 = 63;
	volatile int32_t t108 = 615971;

    t108 = ((x477&(x478-x479))<=x480);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x481 = 77U;
	int8_t x483 = -5;
	int32_t x484 = 5515;
	volatile int32_t t109 = 0;

    t109 = ((x481&(x482-x483))<=x484);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x485 = -1;
	static int64_t x486 = INT64_MIN;
	uint64_t x487 = 1759279LLU;
	volatile int64_t x488 = -1LL;
	volatile int32_t t110 = -481731;

    t110 = ((x485&(x486-x487))<=x488);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x489 = UINT8_MAX;
	int16_t x490 = INT16_MAX;
	uint32_t x491 = 3076421U;
	int32_t x492 = INT32_MAX;
	volatile int32_t t111 = 80374;

    t111 = ((x489&(x490-x491))<=x492);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x493 = INT16_MIN;
	uint64_t x494 = 409LLU;
	volatile int64_t x495 = INT64_MIN;
	volatile int8_t x496 = INT8_MIN;
	static volatile int32_t t112 = -17290;

    t112 = ((x493&(x494-x495))<=x496);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = -1298527LL;
	int8_t x499 = -1;
	int16_t x500 = INT16_MIN;
	volatile int32_t t113 = 274302;

    t113 = ((x497&(x498-x499))<=x500);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x505 = -1;
	uint8_t x506 = 1U;
	static int16_t x507 = INT16_MIN;
	int16_t x508 = -1487;
	int32_t t114 = 7942981;

    t114 = ((x505&(x506-x507))<=x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MAX;

    t115 = ((x509&(x510-x511))<=x512);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x513 = 10LL;
	static volatile uint8_t x514 = 8U;
	static volatile int32_t x515 = 0;
	uint8_t x516 = 65U;

    t116 = ((x513&(x514-x515))<=x516);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile uint64_t x518 = 37583LLU;
	int32_t x519 = 41143254;
	int32_t x520 = INT32_MIN;
	volatile int32_t t117 = -68282741;

    t117 = ((x517&(x518-x519))<=x520);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x521 = -6037;
	volatile uint8_t x523 = 0U;
	volatile int32_t t118 = -14317;

    t118 = ((x521&(x522-x523))<=x524);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x527 = INT16_MAX;
	uint64_t x528 = 15935641133317094LLU;
	volatile int32_t t119 = 37632932;

    t119 = ((x525&(x526-x527))<=x528);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x529 = 3LL;
	volatile int64_t x530 = -1LL;
	volatile int16_t x531 = INT16_MAX;
	uint64_t x532 = 128189676114LLU;
	int32_t t120 = 27269420;

    t120 = ((x529&(x530-x531))<=x532);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x533 = 118U;
	int16_t x534 = INT16_MIN;
	volatile int64_t x535 = INT64_MIN;
	static volatile int32_t x536 = INT32_MIN;

    t121 = ((x533&(x534-x535))<=x536);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x537 = -30512500LL;
	int16_t x538 = INT16_MAX;
	volatile int64_t x539 = INT64_MAX;
	volatile uint64_t x540 = 605LLU;
	volatile int32_t t122 = 118;

    t122 = ((x537&(x538-x539))<=x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = -1;
	volatile int64_t x542 = INT64_MAX;
	uint8_t x543 = UINT8_MAX;
	volatile int64_t x544 = INT64_MIN;
	int32_t t123 = 0;

    t123 = ((x541&(x542-x543))<=x544);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x545 = 35;
	uint64_t x546 = 236773776290414935LLU;
	int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MIN;

    t124 = ((x545&(x546-x547))<=x548);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x549 = 822497LLU;
	uint8_t x551 = 3U;
	volatile uint8_t x552 = UINT8_MAX;
	int32_t t125 = -139;

    t125 = ((x549&(x550-x551))<=x552);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile int8_t x554 = -6;
	volatile int8_t x555 = -3;
	int16_t x556 = INT16_MIN;
	int32_t t126 = 0;

    t126 = ((x553&(x554-x555))<=x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x557 = INT32_MIN;
	static volatile int64_t x558 = -1LL;
	uint8_t x559 = UINT8_MAX;
	static volatile int64_t x560 = INT64_MAX;
	int32_t t127 = 6952;

    t127 = ((x557&(x558-x559))<=x560);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x570 = -1;
	static volatile uint64_t x571 = 850892879127373LLU;
	int64_t x572 = INT64_MIN;
	volatile int32_t t128 = -4677772;

    t128 = ((x569&(x570-x571))<=x572);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x577 = -1;
	uint32_t x578 = 56U;
	static int32_t x579 = INT32_MAX;
	int64_t x580 = -1LL;
	volatile int32_t t129 = -59;

    t129 = ((x577&(x578-x579))<=x580);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x581 = INT8_MAX;
	int8_t x582 = 23;
	int32_t x583 = -2213572;
	int64_t x584 = -10479447063262791LL;
	volatile int32_t t130 = 8993419;

    t130 = ((x581&(x582-x583))<=x584);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = -3994;
	static uint8_t x587 = UINT8_MAX;
	int32_t x588 = -1;

    t131 = ((x585&(x586-x587))<=x588);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x589 = -1;
	uint64_t x590 = 207468021588LLU;
	int8_t x591 = INT8_MIN;
	volatile int8_t x592 = INT8_MIN;
	int32_t t132 = -98042;

    t132 = ((x589&(x590-x591))<=x592);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x593 = 5U;
	volatile int16_t x594 = -1;
	static int64_t x595 = INT64_MAX;
	uint16_t x596 = 5U;

    t133 = ((x593&(x594-x595))<=x596);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x597 = 2123944686747271673LL;
	int8_t x599 = INT8_MAX;
	int32_t t134 = -113596191;

    t134 = ((x597&(x598-x599))<=x600);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x601 = INT16_MIN;
	static uint8_t x602 = UINT8_MAX;
	int64_t x603 = 429554680LL;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t135 = -251;

    t135 = ((x601&(x602-x603))<=x604);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x616 = INT32_MIN;
	int32_t t136 = -4937731;

    t136 = ((x613&(x614-x615))<=x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = 1008357576557LLU;
	int64_t x619 = INT64_MAX;
	int64_t x620 = INT64_MAX;

    t137 = ((x617&(x618-x619))<=x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x622 = 30;
	volatile int32_t t138 = 309;

    t138 = ((x621&(x622-x623))<=x624);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x627 = -14173;

    t139 = ((x625&(x626-x627))<=x628);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x630 = INT8_MAX;
	uint16_t x631 = 11U;
	volatile int8_t x632 = -1;
	volatile int32_t t140 = 104525;

    t140 = ((x629&(x630-x631))<=x632);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x633 = 430;
	static int64_t x636 = -1LL;
	volatile int32_t t141 = 17711;

    t141 = ((x633&(x634-x635))<=x636);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x637 = 10U;
	uint8_t x639 = 4U;
	int32_t x640 = INT32_MAX;

    t142 = ((x637&(x638-x639))<=x640);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x645 = INT64_MIN;
	int32_t x646 = INT32_MIN;
	int64_t x648 = -1LL;
	int32_t t143 = -3482;

    t143 = ((x645&(x646-x647))<=x648);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x649 = UINT64_MAX;
	int64_t x650 = -15103768001592147LL;
	volatile int32_t x651 = INT32_MAX;
	volatile int32_t t144 = -75045;

    t144 = ((x649&(x650-x651))<=x652);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x654 = INT16_MIN;
	uint16_t x655 = 751U;
	volatile int32_t t145 = 21;

    t145 = ((x653&(x654-x655))<=x656);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x658 = 3;
	uint16_t x659 = 501U;
	volatile int32_t t146 = 65428314;

    t146 = ((x657&(x658-x659))<=x660);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x665 = -1;
	volatile uint64_t x666 = UINT64_MAX;
	volatile uint64_t x667 = UINT64_MAX;
	uint32_t x668 = UINT32_MAX;
	static int32_t t147 = -67369;

    t147 = ((x665&(x666-x667))<=x668);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x669 = INT32_MAX;
	uint8_t x670 = 54U;
	int16_t x671 = INT16_MIN;
	int16_t x672 = 7;
	static volatile int32_t t148 = 0;

    t148 = ((x669&(x670-x671))<=x672);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x673 = INT16_MIN;
	uint8_t x674 = UINT8_MAX;
	uint32_t x675 = 878200432U;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t149 = -4102205;

    t149 = ((x673&(x674-x675))<=x676);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x677 = 59U;
	int16_t x678 = -1;
	volatile int64_t x679 = -1LL;
	int8_t x680 = INT8_MAX;
	volatile int32_t t150 = 6885964;

    t150 = ((x677&(x678-x679))<=x680);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x681 = -7971838;
	uint8_t x682 = 36U;
	int8_t x683 = -1;
	volatile uint64_t x684 = 65337289482646LLU;
	int32_t t151 = -104;

    t151 = ((x681&(x682-x683))<=x684);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x685 = INT64_MAX;
	volatile uint32_t x686 = UINT32_MAX;
	int8_t x687 = -1;
	int8_t x688 = INT8_MIN;
	volatile int32_t t152 = -809761675;

    t152 = ((x685&(x686-x687))<=x688);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x689 = INT8_MIN;
	static volatile int32_t x690 = INT32_MIN;
	int32_t t153 = -19353119;

    t153 = ((x689&(x690-x691))<=x692);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x694 = INT8_MAX;
	int16_t x695 = INT16_MIN;
	int32_t t154 = -6767;

    t154 = ((x693&(x694-x695))<=x696);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x697 = INT32_MIN;
	uint32_t x698 = UINT32_MAX;
	int64_t x700 = INT64_MAX;
	volatile int32_t t155 = -45780109;

    t155 = ((x697&(x698-x699))<=x700);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x704 = 12134066;
	int32_t t156 = 59944585;

    t156 = ((x701&(x702-x703))<=x704);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x706 = UINT8_MAX;
	static uint8_t x707 = 0U;
	int8_t x708 = INT8_MIN;
	volatile int32_t t157 = 4990517;

    t157 = ((x705&(x706-x707))<=x708);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x711 = INT16_MIN;
	uint16_t x712 = 249U;
	volatile int32_t t158 = -264655537;

    t158 = ((x709&(x710-x711))<=x712);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x713 = UINT8_MAX;
	volatile int8_t x714 = -6;
	int16_t x715 = -7;
	volatile int8_t x716 = 0;
	static volatile int32_t t159 = -1;

    t159 = ((x713&(x714-x715))<=x716);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x725 = INT16_MIN;
	static uint32_t x726 = 1782U;
	static volatile uint8_t x727 = UINT8_MAX;
	volatile int32_t t160 = -52255922;

    t160 = ((x725&(x726-x727))<=x728);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x729 = UINT16_MAX;
	int16_t x730 = INT16_MIN;
	uint64_t x731 = 66925667796LLU;
	uint32_t x732 = 537U;
	int32_t t161 = -1736330;

    t161 = ((x729&(x730-x731))<=x732);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x735 = INT8_MIN;
	static int64_t x736 = INT64_MIN;
	int32_t t162 = -96894;

    t162 = ((x733&(x734-x735))<=x736);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x737 = INT64_MIN;
	static volatile int64_t x739 = -1LL;
	int32_t t163 = -11666;

    t163 = ((x737&(x738-x739))<=x740);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x741 = INT16_MIN;
	int16_t x742 = -1470;
	int16_t x743 = 6808;

    t164 = ((x741&(x742-x743))<=x744);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x745 = INT16_MIN;
	static int16_t x746 = 2;
	static int16_t x747 = 12;
	int8_t x748 = INT8_MIN;
	int32_t t165 = 230085;

    t165 = ((x745&(x746-x747))<=x748);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x749 = INT16_MAX;
	uint32_t x750 = 6779U;
	volatile int32_t x751 = -1;
	uint8_t x752 = 2U;
	volatile int32_t t166 = -17403;

    t166 = ((x749&(x750-x751))<=x752);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x753 = INT16_MIN;
	uint8_t x754 = 21U;
	uint8_t x755 = 1U;
	volatile uint16_t x756 = 234U;
	int32_t t167 = 243;

    t167 = ((x753&(x754-x755))<=x756);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x757 = INT64_MIN;
	volatile int8_t x758 = -1;
	int64_t x759 = INT64_MIN;
	static int16_t x760 = 172;

    t168 = ((x757&(x758-x759))<=x760);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x761 = 20318LLU;
	int64_t x762 = INT64_MIN;
	int16_t x764 = INT16_MIN;
	int32_t t169 = 0;

    t169 = ((x761&(x762-x763))<=x764);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x765 = UINT64_MAX;
	int64_t x768 = INT64_MIN;

    t170 = ((x765&(x766-x767))<=x768);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x770 = 2392071LL;
	int16_t x771 = INT16_MIN;
	volatile uint8_t x772 = UINT8_MAX;
	int32_t t171 = -1;

    t171 = ((x769&(x770-x771))<=x772);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x774 = 0;
	uint32_t x775 = UINT32_MAX;
	volatile int8_t x776 = -50;
	volatile int32_t t172 = 4699137;

    t172 = ((x773&(x774-x775))<=x776);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x777 = INT64_MIN;
	uint16_t x778 = UINT16_MAX;
	uint32_t x779 = 19747214U;
	volatile uint16_t x780 = 13U;
	int32_t t173 = 4179520;

    t173 = ((x777&(x778-x779))<=x780);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x781 = -1LL;
	static int32_t x782 = -1;
	volatile int8_t x784 = -55;
	int32_t t174 = 17546;

    t174 = ((x781&(x782-x783))<=x784);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x785 = -1LL;
	int16_t x786 = 1457;
	uint32_t x787 = 918311U;
	int32_t x788 = INT32_MIN;
	static volatile int32_t t175 = 2271;

    t175 = ((x785&(x786-x787))<=x788);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x789 = INT32_MAX;
	int64_t x791 = -1LL;
	static uint16_t x792 = 3U;
	volatile int32_t t176 = -76;

    t176 = ((x789&(x790-x791))<=x792);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x793 = INT16_MIN;
	volatile uint32_t x794 = UINT32_MAX;
	int32_t x796 = -1;
	int32_t t177 = 1;

    t177 = ((x793&(x794-x795))<=x796);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x805 = INT8_MIN;
	static volatile uint16_t x807 = 54U;
	static int16_t x808 = -22;

    t178 = ((x805&(x806-x807))<=x808);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x814 = UINT64_MAX;
	int16_t x815 = INT16_MIN;
	int32_t x816 = 1423956;
	int32_t t179 = -1;

    t179 = ((x813&(x814-x815))<=x816);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x817 = -11;
	static uint16_t x818 = UINT16_MAX;
	uint8_t x820 = UINT8_MAX;
	volatile int32_t t180 = -12;

    t180 = ((x817&(x818-x819))<=x820);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x821 = INT16_MIN;
	static uint32_t x822 = UINT32_MAX;
	uint64_t x823 = UINT64_MAX;
	int32_t t181 = 10068167;

    t181 = ((x821&(x822-x823))<=x824);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x825 = 3U;
	uint32_t x826 = UINT32_MAX;
	int8_t x827 = -26;
	int32_t x828 = -35;
	volatile int32_t t182 = 2033825;

    t182 = ((x825&(x826-x827))<=x828);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x829 = -1LL;
	uint16_t x830 = UINT16_MAX;
	uint64_t x831 = 55700250LLU;
	volatile int16_t x832 = -1;
	volatile int32_t t183 = -59;

    t183 = ((x829&(x830-x831))<=x832);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x833 = INT16_MIN;
	static int16_t x834 = -1;
	volatile int8_t x835 = 1;
	static int32_t t184 = -6403;

    t184 = ((x833&(x834-x835))<=x836);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x838 = INT8_MAX;
	static int16_t x839 = 1029;
	int8_t x840 = 3;
	static volatile int32_t t185 = 6935;

    t185 = ((x837&(x838-x839))<=x840);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x841 = UINT16_MAX;
	int8_t x842 = INT8_MIN;
	static uint64_t x843 = 339317997935961656LLU;
	int16_t x844 = -1;

    t186 = ((x841&(x842-x843))<=x844);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x845 = 5U;
	int8_t x846 = INT8_MAX;
	uint16_t x847 = 29066U;
	uint16_t x848 = 5U;
	int32_t t187 = 1109;

    t187 = ((x845&(x846-x847))<=x848);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x849 = 1331U;
	int32_t x851 = INT32_MIN;
	static int8_t x852 = INT8_MIN;
	volatile int32_t t188 = -87090273;

    t188 = ((x849&(x850-x851))<=x852);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x853 = INT64_MAX;
	uint8_t x854 = UINT8_MAX;
	uint64_t x855 = 9247172371097LLU;
	int16_t x856 = INT16_MIN;

    t189 = ((x853&(x854-x855))<=x856);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x857 = INT16_MAX;
	int16_t x858 = INT16_MIN;
	int32_t x859 = INT32_MIN;
	int64_t x860 = INT64_MIN;
	static volatile int32_t t190 = -486;

    t190 = ((x857&(x858-x859))<=x860);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x865 = -1;
	uint16_t x866 = 2533U;
	volatile int8_t x867 = INT8_MAX;
	static int32_t x868 = -800;

    t191 = ((x865&(x866-x867))<=x868);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x869 = -1;
	volatile int8_t x870 = INT8_MIN;
	volatile int16_t x871 = 494;
	volatile uint8_t x872 = 50U;
	static int32_t t192 = 9;

    t192 = ((x869&(x870-x871))<=x872);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x874 = -94;
	int8_t x875 = INT8_MAX;
	int8_t x876 = INT8_MIN;
	int32_t t193 = 32;

    t193 = ((x873&(x874-x875))<=x876);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x878 = INT8_MIN;
	volatile uint16_t x879 = 341U;
	int32_t t194 = 9127371;

    t194 = ((x877&(x878-x879))<=x880);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x881 = UINT32_MAX;
	int8_t x882 = INT8_MIN;
	static int8_t x883 = -1;
	uint64_t x884 = 40999251LLU;

    t195 = ((x881&(x882-x883))<=x884);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x885 = INT32_MIN;

    t196 = ((x885&(x886-x887))<=x888);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x889 = UINT8_MAX;
	uint32_t x890 = 15U;
	int16_t x891 = -1;
	static int64_t x892 = INT64_MAX;
	int32_t t197 = -6;

    t197 = ((x889&(x890-x891))<=x892);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x893 = -528545427;
	static int8_t x895 = INT8_MIN;
	int32_t t198 = -424795;

    t198 = ((x893&(x894-x895))<=x896);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x897 = 0U;
	int8_t x899 = INT8_MIN;
	static volatile int64_t x900 = INT64_MAX;
	int32_t t199 = 113393;

    t199 = ((x897&(x898-x899))<=x900);

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

