
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

static int32_t x1 = 3623;
uint64_t x8 = 1421749983LLU;
uint32_t x12 = UINT32_MAX;
volatile int32_t t2 = 90;
volatile uint16_t x13 = UINT16_MAX;
uint8_t x16 = 0U;
volatile int32_t t3 = 1;
int8_t x20 = INT8_MIN;
static int32_t t6 = -1168;
int8_t x34 = INT8_MIN;
static volatile int32_t t8 = 1292952;
int16_t x37 = INT16_MAX;
static volatile int8_t x42 = INT8_MAX;
int8_t x45 = INT8_MIN;
int16_t x46 = INT16_MAX;
int16_t x48 = INT16_MIN;
static uint32_t x50 = UINT32_MAX;
int32_t t13 = 74;
volatile int16_t x57 = INT16_MIN;
volatile int64_t x59 = INT64_MIN;
int64_t x67 = 661100628567640LL;
int64_t x68 = INT64_MAX;
int64_t x69 = 384466755453LL;
static int16_t x77 = INT16_MAX;
int32_t x79 = INT32_MIN;
uint32_t x80 = 188U;
int32_t t20 = -80695921;
uint8_t x85 = UINT8_MAX;
uint8_t x86 = 48U;
int16_t x92 = 1;
int32_t t22 = 802207373;
volatile int32_t t24 = -1;
volatile uint16_t x106 = 3U;
static int64_t x111 = -159864LL;
volatile int16_t x114 = INT16_MAX;
static volatile int32_t t30 = 7032535;
volatile uint32_t x126 = UINT32_MAX;
static uint8_t x132 = 31U;
static int32_t t33 = 309;
int8_t x141 = INT8_MAX;
static int64_t x145 = -1LL;
static int32_t t36 = -139;
volatile int8_t x153 = -1;
int64_t x154 = -333LL;
uint64_t x156 = 64874384731455LLU;
uint16_t x159 = 25U;
int32_t t39 = -1862;
volatile int32_t x163 = -1;
static volatile int16_t x166 = -536;
uint64_t x167 = 52452355LLU;
static uint64_t x177 = UINT64_MAX;
volatile uint8_t x180 = 5U;
int32_t x183 = 110;
volatile int32_t t45 = -249421158;
volatile int32_t t46 = -805;
volatile int32_t t47 = -30;
int32_t t49 = 459660127;
uint64_t x207 = 14148LLU;
int32_t x211 = INT32_MAX;
int64_t x215 = -112796462965102LL;
int16_t x217 = INT16_MIN;
int8_t x219 = 61;
static uint64_t x220 = 123805492LLU;
uint8_t x235 = 107U;
uint32_t x238 = 86205001U;
static int16_t x246 = INT16_MIN;
static int8_t x251 = 1;
int32_t t62 = -6226109;
uint32_t x253 = UINT32_MAX;
int16_t x259 = INT16_MIN;
static int32_t t64 = 14020847;
uint8_t x263 = 13U;
volatile uint64_t x264 = 125179393968LLU;
static uint32_t x265 = 1U;
int8_t x266 = -1;
volatile int64_t x269 = INT64_MIN;
static int32_t t68 = -16394556;
uint8_t x280 = UINT8_MAX;
int32_t t70 = 1096158;
uint64_t x289 = 1727582766894339068LLU;
volatile uint8_t x291 = UINT8_MAX;
int8_t x293 = INT8_MIN;
int32_t t73 = -59990;
int32_t x300 = 0;
volatile int32_t x308 = 29244;
volatile int32_t t76 = -17140228;
int8_t x313 = 7;
int16_t x318 = INT16_MIN;
uint64_t x319 = 9LLU;
uint64_t x323 = 14487009035703LLU;
int8_t x325 = 14;
int32_t x328 = INT32_MIN;
int16_t x330 = INT16_MIN;
static uint32_t x335 = 19U;
int64_t x341 = INT64_MAX;
uint8_t x343 = 118U;
int32_t t85 = -4573991;
uint64_t x345 = UINT64_MAX;
int32_t t86 = 5666;
int32_t x353 = -1;
volatile uint32_t x363 = 2080691U;
static int32_t t90 = -14903;
int8_t x378 = INT8_MIN;
volatile int32_t t94 = -11;
int16_t x385 = -1;
uint16_t x388 = 3661U;
volatile int32_t x392 = INT32_MIN;
int32_t t98 = 192;
uint16_t x401 = 12886U;
volatile int32_t t100 = 646312;
static uint8_t x407 = 1U;
int64_t x411 = -1LL;
int32_t x416 = -66323101;
int16_t x419 = -1;
int64_t x432 = -682297269144LL;
static uint16_t x445 = 1407U;
uint32_t x452 = 6457580U;
uint16_t x460 = 1359U;
static volatile int64_t x462 = INT64_MIN;
uint8_t x464 = UINT8_MAX;
static int64_t x466 = INT64_MAX;
volatile int32_t t117 = 11988341;
volatile int32_t t118 = -211;
uint64_t x482 = UINT64_MAX;
int8_t x488 = -1;
volatile int32_t t121 = -32881087;
uint8_t x494 = UINT8_MAX;
uint16_t x499 = UINT16_MAX;
int8_t x514 = 3;
int16_t x518 = INT16_MIN;
uint64_t x519 = UINT64_MAX;
static volatile int32_t t130 = -1;
volatile int32_t x527 = INT32_MIN;
int8_t x531 = INT8_MIN;
int8_t x534 = INT8_MIN;
int64_t x536 = -207841120LL;
static volatile uint16_t x541 = UINT16_MAX;
int32_t x546 = 4;
volatile uint64_t x550 = 7645LLU;
int16_t x551 = -1;
volatile int32_t x554 = 234345;
uint16_t x556 = 1756U;
int32_t t142 = 3306528;
int32_t t143 = -3197;
int32_t t145 = 0;
uint16_t x589 = UINT16_MAX;
volatile int8_t x593 = -43;
uint64_t x598 = 105608447815168LLU;
int8_t x600 = INT8_MIN;
int8_t x605 = INT8_MAX;
int8_t x609 = INT8_MIN;
int64_t x613 = -1LL;
int64_t x615 = INT64_MIN;
static int8_t x623 = 0;
int8_t x625 = INT8_MAX;
volatile uint16_t x626 = 5230U;
static volatile int16_t x628 = 466;
uint16_t x641 = 7U;
static int8_t x642 = -1;
int32_t x651 = INT32_MIN;
volatile int32_t x657 = INT32_MIN;
int64_t x659 = -1LL;
int64_t x668 = INT64_MIN;
uint64_t x671 = 12946LLU;
int32_t x675 = -1;
int32_t x681 = -1;
static volatile int8_t x689 = INT8_MIN;
static uint8_t x690 = UINT8_MAX;
int8_t x693 = INT8_MAX;
uint8_t x698 = UINT8_MAX;
uint8_t x699 = UINT8_MAX;
static uint8_t x701 = 0U;
static int16_t x708 = -1;
int32_t x713 = -16571613;
int64_t x717 = INT64_MAX;
volatile int8_t x718 = -13;
static int8_t x733 = INT8_MAX;
volatile int32_t x735 = INT32_MIN;
static uint64_t x737 = UINT64_MAX;
int16_t x738 = -1;
int32_t x739 = -1;
int16_t x740 = 4;
static int16_t x748 = -1;
volatile uint16_t x749 = UINT16_MAX;
int32_t t187 = 24;
int8_t x753 = -1;
static int8_t x754 = INT8_MIN;
int8_t x755 = -1;
uint8_t x757 = 17U;
static int8_t x759 = INT8_MIN;
volatile int32_t t189 = -433631030;
uint16_t x768 = 19323U;
int32_t x773 = -1;
uint32_t x777 = 306711283U;
int64_t x781 = INT64_MAX;
volatile uint32_t x787 = UINT32_MAX;
int16_t x790 = INT16_MIN;
volatile uint32_t x791 = 10139U;
static int32_t x798 = -1;
volatile uint64_t x799 = 16594LLU;
volatile int8_t x800 = 0;


void f0(void) {
    	int8_t x2 = 0;
	int32_t x3 = INT32_MAX;
	int64_t x4 = 55470807369774903LL;
	volatile int32_t t0 = -980;

    t0 = (((x1==x2)>x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	volatile int8_t x6 = -1;
	volatile int32_t x7 = INT32_MAX;
	volatile int32_t t1 = -7592874;

    t1 = (((x5==x6)>x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 870;
	int8_t x10 = -1;
	int32_t x11 = INT32_MIN;

    t2 = (((x9==x10)>x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x14 = 696U;
	uint32_t x15 = UINT32_MAX;

    t3 = (((x13==x14)>x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	static int8_t x18 = INT8_MIN;
	volatile uint16_t x19 = UINT16_MAX;
	int32_t t4 = -320646797;

    t4 = (((x17==x18)>x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	uint8_t x22 = 0U;
	int64_t x23 = INT64_MAX;
	static int8_t x24 = 1;
	int32_t t5 = -969227667;

    t5 = (((x21==x22)>x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MAX;
	static int16_t x28 = INT16_MAX;

    t6 = (((x25==x26)>x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x29 = UINT16_MAX;
	uint32_t x30 = 95985U;
	volatile int32_t x31 = INT32_MAX;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t7 = -837;

    t7 = (((x29==x30)>x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 9688U;
	static uint32_t x35 = 23U;
	int64_t x36 = 267698173511LL;

    t8 = (((x33==x34)>x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -6168577;
	static uint16_t x39 = 4U;
	int64_t x40 = -16919609LL;
	volatile int32_t t9 = 206;

    t9 = (((x37==x38)>x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 14106U;
	int64_t x43 = INT64_MAX;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -11895;

    t10 = (((x41==x42)>x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x47 = -1;
	static volatile int32_t t11 = -103659;

    t11 = (((x45==x46)>x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -125;

    t12 = (((x49==x50)>x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 1349U;
	volatile uint8_t x54 = 39U;
	int32_t x55 = 130;
	static int16_t x56 = 499;

    t13 = (((x53==x54)>x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	static uint16_t x60 = 8U;
	int32_t t14 = 105;

    t14 = (((x57==x58)>x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 25554U;
	volatile int64_t x62 = INT64_MAX;
	static volatile uint64_t x63 = 1503085283LLU;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 1;

    t15 = (((x61==x62)>x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 1U;
	static uint16_t x66 = UINT16_MAX;
	volatile int32_t t16 = -1;

    t16 = (((x65==x66)>x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MIN;
	uint64_t x71 = 60918191947776LLU;
	uint16_t x72 = 62U;
	int32_t t17 = -136816;

    t17 = (((x69==x70)>x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 0U;
	int32_t x75 = INT32_MIN;
	int8_t x76 = 11;
	int32_t t18 = 224;

    t18 = (((x73==x74)>x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = INT8_MAX;
	static volatile int32_t t19 = 1364;

    t19 = (((x77==x78)>x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 3U;
	int32_t x84 = INT32_MIN;

    t20 = (((x81==x82)>x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x87 = UINT64_MAX;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -124;

    t21 = (((x85==x86)>x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	static uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 50U;

    t22 = (((x89==x90)>x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = INT8_MAX;
	static int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	volatile uint64_t x96 = UINT64_MAX;
	int32_t t23 = 58140;

    t23 = (((x93==x94)>x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = 1;
	int64_t x98 = -1LL;
	int16_t x99 = 1;
	volatile int8_t x100 = 0;

    t24 = (((x97==x98)>x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = -10507855075856LL;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = 116U;
	static int32_t t25 = 32005;

    t25 = (((x101==x102)>x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -8603386;
	volatile int16_t x107 = INT16_MIN;
	volatile int16_t x108 = -32;
	int32_t t26 = 1137;

    t26 = (((x105==x106)>x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MIN;
	int8_t x110 = -1;
	int64_t x112 = -546289464LL;
	volatile int32_t t27 = -5555333;

    t27 = (((x109==x110)>x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 35582;

    t28 = (((x113==x114)>x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 3932350;
	int64_t x118 = INT64_MIN;
	static int8_t x119 = 32;
	volatile int64_t x120 = -1LL;
	volatile int32_t t29 = -50;

    t29 = (((x117==x118)>x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -1;
	static volatile uint64_t x122 = UINT64_MAX;
	int8_t x123 = -2;
	int64_t x124 = 12LL;

    t30 = (((x121==x122)>x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -51;
	int8_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = -632479584;

    t31 = (((x125==x126)>x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int32_t t32 = -26;

    t32 = (((x129==x130)>x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = 3LL;
	uint32_t x135 = 16U;
	volatile int16_t x136 = INT16_MAX;

    t33 = (((x133==x134)>x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = UINT16_MAX;
	static int64_t x138 = INT64_MIN;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = -1LL;
	static int32_t t34 = -482265537;

    t34 = (((x137==x138)>x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MAX;
	volatile int32_t x143 = -1406;
	int16_t x144 = 3336;
	volatile int32_t t35 = 18853147;

    t35 = (((x141==x142)>x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x146 = 195U;
	int32_t x147 = INT32_MIN;
	volatile int16_t x148 = -3;

    t36 = (((x145==x146)>x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x150 = -61401051366193LL;
	static uint16_t x151 = UINT16_MAX;
	static volatile uint64_t x152 = 1LLU;
	static int32_t t37 = 70658;

    t37 = (((x149==x150)>x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x155 = 114;
	volatile int32_t t38 = 54342;

    t38 = (((x153==x154)>x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 1U;
	static int8_t x158 = -1;
	int64_t x160 = INT64_MAX;

    t39 = (((x157==x158)>x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static uint16_t x162 = 6U;
	int32_t x164 = -27;
	int32_t t40 = 3392708;

    t40 = (((x161==x162)>x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MAX;
	static int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -34661;

    t41 = (((x165==x166)>x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 4380615LLU;
	static uint64_t x170 = 25545805713LLU;
	volatile int16_t x171 = -1;
	int32_t x172 = 1225;
	int32_t t42 = 24;

    t42 = (((x169==x170)>x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	int8_t x174 = -27;
	int16_t x175 = 1767;
	volatile int16_t x176 = INT16_MAX;
	int32_t t43 = 468403;

    t43 = (((x173==x174)>x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = -1;
	int8_t x179 = -1;
	volatile int32_t t44 = -37398;

    t44 = (((x177==x178)>x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x181 = -1LL;
	static volatile int64_t x182 = INT64_MAX;
	uint16_t x184 = 91U;

    t45 = (((x181==x182)>x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -1559;
	static int16_t x186 = -1;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 3U;

    t46 = (((x185==x186)>x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MAX;
	static int16_t x190 = INT16_MAX;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 2LLU;

    t47 = (((x189==x190)>x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	uint16_t x194 = 993U;
	int32_t x195 = -2;
	static volatile int32_t x196 = -1;
	volatile int32_t t48 = 32234;

    t48 = (((x193==x194)>x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 1U;
	volatile int16_t x198 = -1;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = -1;

    t49 = (((x197==x198)>x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 0;
	uint8_t x202 = 1U;
	static int64_t x203 = -2LL;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 412221589;

    t50 = (((x201==x202)>x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 56U;
	static int16_t x206 = -1;
	int16_t x208 = -1;
	int32_t t51 = -25922;

    t51 = (((x205==x206)>x207)>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = -48371LL;
	static int64_t x210 = INT64_MIN;
	volatile int32_t x212 = INT32_MAX;
	static volatile int32_t t52 = 9817;

    t52 = (((x209==x210)>x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x213 = -6350399LL;
	int64_t x214 = 17379975LL;
	int64_t x216 = 13514277085549LL;
	int32_t t53 = 43328;

    t53 = (((x213==x214)>x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x218 = 107878998136603LL;
	int32_t t54 = 8042;

    t54 = (((x217==x218)>x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 6;
	volatile int64_t x222 = 17357LL;
	int8_t x223 = INT8_MIN;
	static uint8_t x224 = UINT8_MAX;
	int32_t t55 = -4256;

    t55 = (((x221==x222)>x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	static uint32_t x226 = UINT32_MAX;
	int64_t x227 = -1LL;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = -79;

    t56 = (((x225==x226)>x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static int16_t x230 = INT16_MAX;
	uint32_t x231 = 234287U;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = 26739;

    t57 = (((x229==x230)>x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	uint16_t x234 = 0U;
	static uint8_t x236 = 1U;
	static int32_t t58 = 223;

    t58 = (((x233==x234)>x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = -1;
	volatile int32_t t59 = 12414;

    t59 = (((x237==x238)>x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 24183363LLU;
	int16_t x242 = -1;
	volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -3;

    t60 = (((x241==x242)>x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 1U;
	static int32_t x247 = INT32_MIN;
	int16_t x248 = 76;
	volatile int32_t t61 = -1841;

    t61 = (((x245==x246)>x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = INT16_MIN;
	int8_t x250 = -14;
	int8_t x252 = INT8_MIN;

    t62 = (((x249==x250)>x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x254 = UINT16_MAX;
	uint8_t x255 = 2U;
	volatile uint8_t x256 = 116U;
	int32_t t63 = -193090;

    t63 = (((x253==x254)>x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MAX;
	int64_t x258 = -1LL;
	int32_t x260 = -1017154;

    t64 = (((x257==x258)>x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	uint32_t x262 = 79U;
	volatile int32_t t65 = -642194;

    t65 = (((x261==x262)>x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x267 = UINT16_MAX;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = 2500708;

    t66 = (((x265==x266)>x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = INT16_MAX;
	static uint8_t x271 = 1U;
	int16_t x272 = -984;
	int32_t t67 = -17;

    t67 = (((x269==x270)>x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 0;
	int8_t x274 = -1;
	volatile int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;

    t68 = (((x273==x274)>x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 2365U;
	volatile int16_t x278 = INT16_MIN;
	int16_t x279 = -1;
	int32_t t69 = -330;

    t69 = (((x277==x278)>x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = 554;
	static int16_t x282 = 1015;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;

    t70 = (((x281==x282)>x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	static uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 116U;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -2124160;

    t71 = (((x285==x286)>x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = 0U;
	volatile uint8_t x292 = UINT8_MAX;
	static int32_t t72 = -45;

    t72 = (((x289==x290)>x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = -1;
	volatile uint64_t x295 = UINT64_MAX;
	static uint64_t x296 = 1LLU;

    t73 = (((x293==x294)>x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = -1LL;
	int32_t x298 = INT32_MAX;
	static int16_t x299 = -68;
	volatile int32_t t74 = -61;

    t74 = (((x297==x298)>x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	volatile uint8_t x302 = 74U;
	uint16_t x303 = UINT16_MAX;
	volatile uint32_t x304 = 482U;
	int32_t t75 = -10;

    t75 = (((x301==x302)>x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;

    t76 = (((x305==x306)>x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = 18;
	uint32_t x310 = 128U;
	int16_t x311 = -4893;
	static uint8_t x312 = 1U;
	volatile int32_t t77 = 931499;

    t77 = (((x309==x310)>x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x314 = INT32_MAX;
	int16_t x315 = -4;
	uint16_t x316 = 24U;
	int32_t t78 = -10;

    t78 = (((x313==x314)>x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	int64_t x320 = 384LL;
	int32_t t79 = -465;

    t79 = (((x317==x318)>x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 176979349435186215LL;
	volatile int64_t x322 = INT64_MIN;
	int16_t x324 = 2;
	volatile int32_t t80 = -741223500;

    t80 = (((x321==x322)>x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x326 = 108U;
	static volatile int8_t x327 = 19;
	static volatile int32_t t81 = 90819;

    t81 = (((x325==x326)>x327)>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	static volatile uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = -11778358;

    t82 = (((x329==x330)>x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x333 = -5;
	int32_t x334 = 6793889;
	int16_t x336 = -108;
	int32_t t83 = 13;

    t83 = (((x333==x334)>x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = INT8_MIN;
	int8_t x338 = -1;
	int32_t x339 = -118;
	volatile int32_t x340 = INT32_MAX;
	volatile int32_t t84 = 128315234;

    t84 = (((x337==x338)>x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = -614189LL;
	int16_t x344 = INT16_MAX;

    t85 = (((x341==x342)>x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = INT16_MAX;
	uint16_t x347 = 0U;
	volatile int16_t x348 = INT16_MIN;

    t86 = (((x345==x346)>x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = INT32_MAX;
	int8_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int16_t x352 = -16184;
	static int32_t t87 = -101;

    t87 = (((x349==x350)>x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x354 = 7187209LLU;
	int64_t x355 = INT64_MAX;
	int32_t x356 = -1;
	volatile int32_t t88 = -229393;

    t88 = (((x353==x354)>x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = 2U;
	int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	int8_t x360 = -1;
	int32_t t89 = -1826;

    t89 = (((x357==x358)>x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MAX;
	int8_t x362 = 5;
	volatile int32_t x364 = INT32_MIN;

    t90 = (((x361==x362)>x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile int64_t x366 = INT64_MIN;
	int32_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = 110644317;

    t91 = (((x365==x366)>x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	static volatile uint16_t x370 = 29820U;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -3717;

    t92 = (((x369==x370)>x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = INT16_MAX;
	int32_t x374 = -1;
	volatile uint8_t x375 = 14U;
	int16_t x376 = -1;
	int32_t t93 = 0;

    t93 = (((x373==x374)>x375)>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 44;
	static int32_t x379 = -1;
	uint8_t x380 = 7U;

    t94 = (((x377==x378)>x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = -6;
	int16_t x382 = 9675;
	static int16_t x383 = INT16_MIN;
	uint16_t x384 = 7937U;
	int32_t t95 = -1;

    t95 = (((x381==x382)>x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 86U;
	static uint32_t x387 = 30617890U;
	volatile int32_t t96 = 8;

    t96 = (((x385==x386)>x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 10LLU;
	int64_t x390 = INT64_MIN;
	volatile int64_t x391 = INT64_MAX;
	volatile int32_t t97 = 147;

    t97 = (((x389==x390)>x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MAX;

    t98 = (((x393==x394)>x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	static int32_t x398 = INT32_MAX;
	volatile int64_t x399 = -7210940285LL;
	uint8_t x400 = 9U;
	volatile int32_t t99 = 7312;

    t99 = (((x397==x398)>x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	int64_t x404 = -35388645617753766LL;

    t100 = (((x401==x402)>x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	static int16_t x406 = -226;
	uint64_t x408 = 1955273244608482LLU;
	int32_t t101 = -10528783;

    t101 = (((x405==x406)>x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 2176926603040445674LL;
	volatile uint8_t x410 = UINT8_MAX;
	int16_t x412 = INT16_MAX;
	int32_t t102 = -84917;

    t102 = (((x409==x410)>x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	uint64_t x414 = 116827782465870285LLU;
	static int8_t x415 = INT8_MIN;
	int32_t t103 = -13;

    t103 = (((x413==x414)>x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -3912557471LL;
	uint32_t x418 = 1439350094U;
	int32_t x420 = 129296135;
	static volatile int32_t t104 = -68619557;

    t104 = (((x417==x418)>x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	static int32_t x422 = INT32_MAX;
	uint32_t x423 = 1829388U;
	volatile int16_t x424 = INT16_MIN;
	int32_t t105 = -4024;

    t105 = (((x421==x422)>x423)>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 211U;
	uint64_t x426 = 4178979778952LLU;
	volatile int64_t x427 = -9LL;
	int16_t x428 = 2735;
	static int32_t t106 = 6113370;

    t106 = (((x425==x426)>x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	uint8_t x430 = 6U;
	int16_t x431 = -1;
	int32_t t107 = -48267185;

    t107 = (((x429==x430)>x431)>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -11;
	int8_t x434 = INT8_MAX;
	uint16_t x435 = 0U;
	uint64_t x436 = UINT64_MAX;
	int32_t t108 = -6535003;

    t108 = (((x433==x434)>x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x437 = INT8_MAX;
	int32_t x438 = -561;
	int64_t x439 = INT64_MAX;
	int8_t x440 = INT8_MIN;
	volatile int32_t t109 = -16;

    t109 = (((x437==x438)>x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 3U;
	static int64_t x442 = 13LL;
	uint16_t x443 = 5144U;
	int8_t x444 = -1;
	int32_t t110 = 4885756;

    t110 = (((x441==x442)>x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x446 = 4U;
	int64_t x447 = -5788690679LL;
	static int32_t x448 = INT32_MIN;
	static volatile int32_t t111 = -371230837;

    t111 = (((x445==x446)>x447)>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = 39;
	int8_t x450 = INT8_MIN;
	volatile int16_t x451 = -1;
	int32_t t112 = -27804;

    t112 = (((x449==x450)>x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -13;
	int8_t x454 = 0;
	int8_t x455 = INT8_MAX;
	int8_t x456 = -1;
	volatile int32_t t113 = 4;

    t113 = (((x453==x454)>x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MIN;
	int32_t x458 = INT32_MIN;
	static int64_t x459 = INT64_MIN;
	int32_t t114 = 59;

    t114 = (((x457==x458)>x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	int64_t x463 = -1LL;
	int32_t t115 = -8228444;

    t115 = (((x461==x462)>x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	uint64_t x467 = UINT64_MAX;
	volatile uint8_t x468 = 125U;
	int32_t t116 = 40220;

    t116 = (((x465==x466)>x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int16_t x470 = INT16_MAX;
	int64_t x471 = -1LL;
	int8_t x472 = INT8_MIN;

    t117 = (((x469==x470)>x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MAX;
	int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MAX;
	uint64_t x476 = 266440883173755735LLU;

    t118 = (((x473==x474)>x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	int32_t x478 = INT32_MIN;
	int16_t x479 = INT16_MAX;
	uint16_t x480 = 0U;
	volatile int32_t t119 = -4;

    t119 = (((x477==x478)>x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 77480206298927LLU;
	volatile int64_t x483 = -5775801589462431LL;
	uint16_t x484 = 1U;
	static volatile int32_t t120 = 5048;

    t120 = (((x481==x482)>x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int16_t x486 = -2;
	int32_t x487 = -1805233;

    t121 = (((x485==x486)>x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x489 = INT8_MIN;
	static uint8_t x490 = 5U;
	static uint32_t x491 = 216982U;
	uint32_t x492 = UINT32_MAX;
	int32_t t122 = 1646;

    t122 = (((x489==x490)>x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	int64_t x495 = INT64_MAX;
	int16_t x496 = -1;
	int32_t t123 = -14;

    t123 = (((x493==x494)>x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	int32_t x498 = INT32_MIN;
	uint32_t x500 = UINT32_MAX;
	int32_t t124 = -16620737;

    t124 = (((x497==x498)>x499)>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = 3978LLU;
	uint32_t x502 = 1209471603U;
	static int64_t x503 = 49972LL;
	volatile int16_t x504 = -1;
	volatile int32_t t125 = -323410;

    t125 = (((x501==x502)>x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 989901U;
	uint8_t x506 = 113U;
	static int32_t x507 = INT32_MIN;
	volatile uint16_t x508 = UINT16_MAX;
	int32_t t126 = -58929;

    t126 = (((x505==x506)>x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	volatile uint8_t x510 = UINT8_MAX;
	int64_t x511 = -1LL;
	uint64_t x512 = 39223080LLU;
	static volatile int32_t t127 = 1560635;

    t127 = (((x509==x510)>x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	uint64_t x515 = 0LLU;
	int32_t x516 = -1;
	int32_t t128 = 242842131;

    t128 = (((x513==x514)>x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = 40U;
	static uint8_t x520 = 94U;
	int32_t t129 = 179701697;

    t129 = (((x517==x518)>x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = 3;
	int8_t x522 = INT8_MAX;
	int16_t x523 = INT16_MIN;
	int16_t x524 = 0;

    t130 = (((x521==x522)>x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = -1262;
	volatile int8_t x526 = INT8_MAX;
	static int8_t x528 = INT8_MAX;
	int32_t t131 = 421002;

    t131 = (((x525==x526)>x527)>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -271305;
	uint64_t x530 = UINT64_MAX;
	int32_t x532 = INT32_MIN;
	volatile int32_t t132 = -778;

    t132 = (((x529==x530)>x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 0U;
	static uint32_t x535 = 1U;
	static int32_t t133 = 8018888;

    t133 = (((x533==x534)>x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 208U;
	uint64_t x538 = 5970068324757858LLU;
	int16_t x539 = -5;
	static int64_t x540 = INT64_MAX;
	int32_t t134 = -1;

    t134 = (((x537==x538)>x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = INT32_MIN;
	int16_t x543 = -1;
	int64_t x544 = -1710983200689496635LL;
	volatile int32_t t135 = -719355;

    t135 = (((x541==x542)>x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int64_t x547 = -1LL;
	int8_t x548 = -1;
	volatile int32_t t136 = 1067141184;

    t136 = (((x545==x546)>x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	uint16_t x552 = 3856U;
	int32_t t137 = 438710062;

    t137 = (((x549==x550)>x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 14U;
	int32_t x555 = 201459;
	int32_t t138 = 5;

    t138 = (((x553==x554)>x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x557 = UINT16_MAX;
	static uint8_t x558 = UINT8_MAX;
	int32_t x559 = INT32_MIN;
	int32_t x560 = INT32_MIN;
	static volatile int32_t t139 = -2751767;

    t139 = (((x557==x558)>x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x561 = UINT32_MAX;
	static int8_t x562 = INT8_MAX;
	int64_t x563 = -1LL;
	int8_t x564 = -1;
	int32_t t140 = 147317260;

    t140 = (((x561==x562)>x563)>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = 1734582867056170LL;
	int8_t x566 = INT8_MAX;
	int64_t x567 = -1LL;
	uint64_t x568 = 8LLU;
	int32_t t141 = 6154;

    t141 = (((x565==x566)>x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = 268;
	uint32_t x570 = 32257U;
	int8_t x571 = 10;
	volatile int32_t x572 = INT32_MIN;

    t142 = (((x569==x570)>x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 2043974;
	static volatile uint64_t x574 = 147221822206109567LLU;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;

    t143 = (((x573==x574)>x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x577 = 10U;
	static int8_t x578 = 13;
	int32_t x579 = -476592587;
	int32_t x580 = -125;
	int32_t t144 = -158616637;

    t144 = (((x577==x578)>x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	int16_t x582 = 15110;
	static uint16_t x583 = 80U;
	int32_t x584 = INT32_MIN;

    t145 = (((x581==x582)>x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	static int32_t x586 = -2;
	uint64_t x587 = UINT64_MAX;
	static volatile int8_t x588 = -1;
	volatile int32_t t146 = -98297;

    t146 = (((x585==x586)>x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x590 = -7;
	int16_t x591 = INT16_MIN;
	uint8_t x592 = 29U;
	int32_t t147 = -9;

    t147 = (((x589==x590)>x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x594 = -1;
	int32_t x595 = -412298;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = 0;

    t148 = (((x593==x594)>x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 124LL;
	static volatile uint32_t x599 = UINT32_MAX;
	int32_t t149 = -286;

    t149 = (((x597==x598)>x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 211444327;
	int32_t x602 = -1;
	static int16_t x603 = INT16_MIN;
	int32_t x604 = -63495089;
	int32_t t150 = -2825;

    t150 = (((x601==x602)>x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = 20LL;
	static int64_t x607 = -95620647959506722LL;
	static uint8_t x608 = 0U;
	static int32_t t151 = 968187;

    t151 = (((x605==x606)>x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	static uint32_t x611 = UINT32_MAX;
	int32_t x612 = INT32_MAX;
	volatile int32_t t152 = -11295;

    t152 = (((x609==x610)>x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x614 = 138U;
	volatile uint32_t x616 = 893U;
	static volatile int32_t t153 = -120408580;

    t153 = (((x613==x614)>x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = INT64_MAX;
	volatile int32_t x618 = INT32_MIN;
	int64_t x619 = 61146110144119LL;
	int16_t x620 = INT16_MIN;
	int32_t t154 = 1;

    t154 = (((x617==x618)>x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MIN;
	volatile uint16_t x622 = UINT16_MAX;
	int64_t x624 = INT64_MIN;
	int32_t t155 = 7580499;

    t155 = (((x621==x622)>x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x627 = INT32_MIN;
	volatile int32_t t156 = 264;

    t156 = (((x625==x626)>x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MAX;
	int16_t x630 = INT16_MIN;
	uint8_t x631 = 6U;
	uint8_t x632 = 0U;
	int32_t t157 = 501989;

    t157 = (((x629==x630)>x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = 0;
	int16_t x634 = 0;
	static int64_t x635 = 425LL;
	int64_t x636 = -1LL;
	int32_t t158 = 16285359;

    t158 = (((x633==x634)>x635)>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -95572;
	volatile int8_t x638 = INT8_MAX;
	int16_t x639 = INT16_MAX;
	uint32_t x640 = 1829875U;
	volatile int32_t t159 = -1;

    t159 = (((x637==x638)>x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x643 = 5;
	uint8_t x644 = 8U;
	volatile int32_t t160 = -236393;

    t160 = (((x641==x642)>x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 5917U;
	int64_t x646 = INT64_MIN;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MAX;
	volatile int32_t t161 = -230119;

    t161 = (((x645==x646)>x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MIN;
	int32_t x650 = -1;
	int32_t x652 = 150724;
	int32_t t162 = -17;

    t162 = (((x649==x650)>x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MAX;
	volatile int64_t x654 = INT64_MAX;
	int32_t x655 = 350118059;
	uint64_t x656 = UINT64_MAX;
	int32_t t163 = -2964;

    t163 = (((x653==x654)>x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = INT64_MIN;
	int8_t x660 = INT8_MAX;
	int32_t t164 = -608;

    t164 = (((x657==x658)>x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 0;
	int64_t x662 = 4236303755292223LL;
	uint8_t x663 = 2U;
	int8_t x664 = 0;
	int32_t t165 = -7406;

    t165 = (((x661==x662)>x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	uint16_t x666 = 334U;
	int32_t x667 = -424064267;
	volatile int32_t t166 = -1415637;

    t166 = (((x665==x666)>x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	int32_t x670 = -1;
	static uint8_t x672 = 23U;
	volatile int32_t t167 = 538653861;

    t167 = (((x669==x670)>x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 1U;
	static int64_t x674 = INT64_MIN;
	static int8_t x676 = INT8_MIN;
	static volatile int32_t t168 = 1;

    t168 = (((x673==x674)>x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile uint8_t x678 = 48U;
	int64_t x679 = -6383069707881LL;
	int8_t x680 = -1;
	volatile int32_t t169 = -6258616;

    t169 = (((x677==x678)>x679)>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x682 = UINT32_MAX;
	static int32_t x683 = INT32_MAX;
	static int32_t x684 = INT32_MAX;
	volatile int32_t t170 = 14912738;

    t170 = (((x681==x682)>x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MAX;
	int16_t x686 = -1;
	static volatile int8_t x687 = -1;
	volatile uint8_t x688 = 58U;
	int32_t t171 = -15;

    t171 = (((x685==x686)>x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x691 = 0U;
	static int64_t x692 = INT64_MIN;
	int32_t t172 = -62454;

    t172 = (((x689==x690)>x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MIN;
	uint64_t x695 = 7024756986729266122LLU;
	int64_t x696 = INT64_MAX;
	volatile int32_t t173 = -929;

    t173 = (((x693==x694)>x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	uint32_t x700 = 53611U;
	volatile int32_t t174 = 84;

    t174 = (((x697==x698)>x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x702 = 0U;
	volatile int8_t x703 = 0;
	uint64_t x704 = 213739711LLU;
	volatile int32_t t175 = -15;

    t175 = (((x701==x702)>x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	uint16_t x706 = UINT16_MAX;
	uint8_t x707 = 7U;
	volatile int32_t t176 = 1901;

    t176 = (((x705==x706)>x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = 1;
	volatile uint16_t x710 = UINT16_MAX;
	int16_t x711 = 296;
	uint16_t x712 = 48U;
	static volatile int32_t t177 = 29268;

    t177 = (((x709==x710)>x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = -528;
	static uint32_t x715 = UINT32_MAX;
	int16_t x716 = INT16_MIN;
	volatile int32_t t178 = -1026;

    t178 = (((x713==x714)>x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x719 = -19;
	uint8_t x720 = UINT8_MAX;
	static int32_t t179 = -277996153;

    t179 = (((x717==x718)>x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	static int16_t x722 = 2;
	volatile int32_t x723 = INT32_MIN;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = -1788230;

    t180 = (((x721==x722)>x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	static uint32_t x726 = 141812157U;
	int8_t x727 = INT8_MAX;
	uint8_t x728 = 70U;
	volatile int32_t t181 = -481;

    t181 = (((x725==x726)>x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	uint64_t x730 = 455LLU;
	uint16_t x731 = 454U;
	volatile int64_t x732 = INT64_MIN;
	volatile int32_t t182 = 22961910;

    t182 = (((x729==x730)>x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x734 = 10864U;
	uint16_t x736 = 216U;
	static int32_t t183 = 337;

    t183 = (((x733==x734)>x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t t184 = 21876;

    t184 = (((x737==x738)>x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 0U;
	int16_t x742 = -1;
	static volatile int64_t x743 = -76990916939425963LL;
	int8_t x744 = -1;
	static int32_t t185 = -292;

    t185 = (((x741==x742)>x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 5;
	int16_t x746 = INT16_MAX;
	uint32_t x747 = UINT32_MAX;
	volatile int32_t t186 = -245814569;

    t186 = (((x745==x746)>x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x750 = UINT64_MAX;
	int16_t x751 = -29;
	int8_t x752 = 4;

    t187 = (((x749==x750)>x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x756 = INT32_MAX;
	int32_t t188 = 22388423;

    t188 = (((x753==x754)>x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = INT8_MIN;
	int8_t x760 = INT8_MIN;

    t189 = (((x757==x758)>x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	uint32_t x762 = UINT32_MAX;
	static uint8_t x763 = 5U;
	static int64_t x764 = -1LL;
	int32_t t190 = -395;

    t190 = (((x761==x762)>x763)>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = UINT16_MAX;
	int8_t x766 = 0;
	static int16_t x767 = -1;
	int32_t t191 = 31153965;

    t191 = (((x765==x766)>x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x769 = UINT16_MAX;
	uint32_t x770 = UINT32_MAX;
	int8_t x771 = -2;
	static uint64_t x772 = 8360553045LLU;
	volatile int32_t t192 = -188;

    t192 = (((x769==x770)>x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x774 = 1LLU;
	static int32_t x775 = INT32_MIN;
	static int8_t x776 = INT8_MIN;
	volatile int32_t t193 = 5903111;

    t193 = (((x773==x774)>x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x778 = INT32_MAX;
	uint8_t x779 = UINT8_MAX;
	uint32_t x780 = 1075915925U;
	volatile int32_t t194 = -47836;

    t194 = (((x777==x778)>x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = INT16_MIN;
	int64_t x783 = -1LL;
	int32_t x784 = -1;
	volatile int32_t t195 = 389;

    t195 = (((x781==x782)>x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int8_t x786 = INT8_MAX;
	int8_t x788 = INT8_MIN;
	int32_t t196 = 1;

    t196 = (((x785==x786)>x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = INT64_MIN;
	volatile int16_t x792 = INT16_MIN;
	int32_t t197 = -651317;

    t197 = (((x789==x790)>x791)>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 2;
	static int16_t x794 = INT16_MAX;
	uint16_t x795 = 19042U;
	static int64_t x796 = 134694246509036951LL;
	volatile int32_t t198 = -194;

    t198 = (((x793==x794)>x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = 5007384U;
	int32_t t199 = 1;

    t199 = (((x797==x798)>x799)>x800);

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

