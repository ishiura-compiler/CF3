
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

static int8_t x1 = -1;
uint32_t x4 = 554891U;
volatile int32_t t0 = 47916;
static volatile int32_t t1 = 4754;
int64_t x9 = -1LL;
volatile uint16_t x10 = 2545U;
int8_t x13 = INT8_MIN;
uint16_t x17 = UINT16_MAX;
int32_t x19 = -1;
int16_t x25 = INT16_MAX;
int64_t x26 = -198LL;
int16_t x32 = INT16_MAX;
static volatile int32_t t7 = 239839;
int8_t x53 = -1;
int8_t x54 = 18;
int32_t x59 = INT32_MIN;
uint16_t x62 = 1826U;
int8_t x69 = 0;
int64_t x73 = -5878LL;
static int16_t x76 = INT16_MAX;
volatile int32_t t16 = -350163707;
int64_t x78 = INT64_MAX;
volatile int8_t x80 = 43;
int16_t x81 = INT16_MIN;
uint32_t x82 = UINT32_MAX;
static int16_t x87 = INT16_MIN;
static int32_t x93 = INT32_MIN;
static int32_t x99 = INT32_MIN;
uint16_t x100 = 3U;
volatile int32_t x111 = -1;
static volatile int16_t x128 = 9319;
int64_t x132 = INT64_MIN;
int32_t t32 = -998125;
int64_t x147 = -978621442395761913LL;
static volatile uint32_t x149 = UINT32_MAX;
uint32_t x153 = 334U;
static uint16_t x159 = 1155U;
int16_t x161 = 6;
int8_t x166 = 0;
volatile int32_t t38 = 7567974;
uint8_t x176 = 29U;
int32_t x184 = INT32_MAX;
volatile uint16_t x186 = 56U;
int8_t x191 = -1;
volatile uint64_t x208 = 144090067444392767LLU;
static int16_t x211 = INT16_MIN;
int32_t x212 = INT32_MIN;
int8_t x241 = 5;
static volatile uint64_t x247 = 4454362174769LLU;
volatile uint8_t x251 = 14U;
int16_t x259 = INT16_MAX;
int8_t x261 = 14;
uint16_t x262 = UINT16_MAX;
uint8_t x266 = UINT8_MAX;
static volatile int16_t x267 = INT16_MAX;
volatile int64_t x268 = -1LL;
volatile int8_t x270 = 0;
int8_t x274 = 0;
static uint16_t x275 = 12U;
int32_t t65 = -1;
int64_t x282 = -59LL;
volatile uint16_t x287 = 3375U;
int32_t x294 = INT32_MIN;
int32_t x299 = -38;
volatile int16_t x301 = -5;
uint8_t x319 = UINT8_MAX;
volatile int32_t t75 = -2536576;
int8_t x335 = INT8_MIN;
static int8_t x347 = INT8_MAX;
static int16_t x349 = INT16_MIN;
int8_t x352 = INT8_MIN;
int32_t t80 = 246;
int16_t x353 = INT16_MAX;
volatile uint32_t x355 = 215163U;
volatile int32_t x361 = -125562;
uint16_t x367 = 3U;
int32_t t84 = 16065;
int16_t x371 = INT16_MIN;
int16_t x374 = INT16_MAX;
volatile int64_t x384 = INT64_MAX;
static uint8_t x387 = 11U;
int64_t x389 = 1963992LL;
int64_t x392 = INT64_MIN;
volatile int32_t t90 = 24;
volatile int8_t x397 = -2;
uint32_t x402 = UINT32_MAX;
uint32_t x414 = UINT32_MAX;
static int32_t x415 = INT32_MIN;
static volatile int32_t t96 = -766;
uint8_t x434 = 4U;
uint16_t x435 = 433U;
int32_t x436 = -1;
static int32_t x438 = -1;
int16_t x448 = INT16_MIN;
static int8_t x450 = 8;
uint32_t x454 = 49138736U;
volatile uint8_t x467 = 41U;
int8_t x470 = INT8_MAX;
static uint32_t x491 = 37567U;
volatile int16_t x493 = -96;
static int64_t x495 = -1LL;
uint32_t x500 = 205971266U;
volatile int32_t t115 = -28012;
uint8_t x507 = UINT8_MAX;
int32_t t117 = 28899;
int16_t x509 = 1677;
volatile uint64_t x515 = UINT64_MAX;
int32_t t120 = -395748;
uint64_t x531 = 103075695821LLU;
volatile uint64_t x535 = UINT64_MAX;
int32_t t125 = 0;
uint8_t x550 = UINT8_MAX;
static volatile int64_t x553 = -1LL;
uint16_t x561 = 171U;
static uint64_t x562 = 30LLU;
int32_t t130 = 18;
int64_t x566 = -348036LL;
int64_t x568 = INT64_MIN;
volatile int16_t x569 = INT16_MIN;
int32_t t132 = -321;
volatile int32_t x576 = -144;
static volatile int64_t x579 = INT64_MIN;
int32_t t134 = -360179471;
int8_t x582 = -1;
int32_t x588 = INT32_MIN;
static int16_t x600 = INT16_MIN;
int16_t x602 = INT16_MIN;
static volatile int32_t t140 = 478653454;
int8_t x611 = INT8_MIN;
volatile int8_t x621 = 5;
int64_t x622 = -1LL;
uint32_t x625 = 19592U;
int8_t x626 = INT8_MAX;
uint16_t x632 = 4174U;
volatile uint32_t x636 = 4U;
static volatile int32_t x645 = 97374;
int32_t x647 = INT32_MAX;
int32_t t151 = 14989626;
uint8_t x666 = 1U;
int32_t x676 = 252287;
volatile int32_t t153 = 5606375;
volatile int32_t x677 = -1;
uint16_t x684 = 26U;
int32_t t156 = 29059560;
uint8_t x692 = 25U;
int16_t x694 = INT16_MIN;
static volatile int32_t t160 = -6;
static volatile int16_t x705 = -3;
volatile int8_t x716 = -16;
static volatile int32_t t162 = 1;
static int32_t x717 = INT32_MAX;
static uint16_t x725 = 3U;
uint64_t x726 = UINT64_MAX;
static uint32_t x727 = UINT32_MAX;
uint8_t x729 = 7U;
volatile int64_t x731 = INT64_MIN;
volatile int16_t x735 = 375;
int32_t x746 = 380;
static int8_t x751 = -2;
volatile int32_t x756 = INT32_MIN;
volatile uint32_t x767 = 55U;
int64_t x769 = -759681LL;
static volatile int32_t t176 = 1;
uint8_t x775 = 33U;
int8_t x778 = INT8_MIN;
volatile int32_t t178 = 14209489;
int64_t x787 = -3553868649413798089LL;
int16_t x795 = 451;
static uint64_t x801 = 240LLU;
uint64_t x807 = 28309910538LLU;
uint8_t x809 = UINT8_MAX;
int64_t x812 = INT64_MIN;
int32_t t185 = 0;
int32_t x819 = -1;
uint32_t x821 = UINT32_MAX;
uint64_t x823 = 796643746379LLU;
static int16_t x825 = INT16_MIN;
static uint16_t x827 = 7U;
uint16_t x829 = 7U;
volatile int8_t x836 = -1;
int16_t x837 = INT16_MAX;
int64_t x840 = -60359198LL;
int32_t t193 = 1;
int16_t x853 = -1;
int16_t x856 = -1;
int8_t x860 = -1;
volatile int32_t t197 = -30;
int32_t x865 = -1;
static volatile int32_t t198 = -291070;


void f0(void) {
    	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = 255;

    t0 = (((x1-x2)>x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 892041662482134782LLU;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;

    t1 = (((x5-x6)>x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = INT32_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = 115;

    t2 = (((x9-x10)>x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	uint64_t x15 = 1319964352077910388LLU;
	int16_t x16 = -1;
	int32_t t3 = 160307199;

    t3 = (((x13-x14)>x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = 10899630;
	int8_t x20 = -1;
	volatile int32_t t4 = -11;

    t4 = (((x17-x18)>x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int8_t x22 = -1;
	static uint32_t x23 = 254415987U;
	static uint64_t x24 = 59049203689043458LLU;
	static int32_t t5 = 493955;

    t5 = (((x21-x22)>x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = INT32_MIN;
	uint64_t x28 = 92435548LLU;
	int32_t t6 = 141832665;

    t6 = (((x25-x26)>x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = -1;

    t7 = (((x29-x30)>x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	volatile uint8_t x34 = 14U;
	volatile int32_t x35 = 1;
	volatile int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -1021898;

    t8 = (((x33-x34)>x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -1;
	int16_t x38 = -1;
	static int8_t x39 = -7;
	int32_t x40 = 111079;
	static volatile int32_t t9 = -3674451;

    t9 = (((x37-x38)>x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -2;
	static int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	volatile int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 15274;

    t10 = (((x41-x42)>x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 2046752574LLU;
	int64_t x50 = -1LL;
	uint16_t x51 = 719U;
	int8_t x52 = 2;
	static volatile int32_t t11 = 27;

    t11 = (((x49-x50)>x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x55 = UINT8_MAX;
	int16_t x56 = -1;
	int32_t t12 = 31861;

    t12 = (((x53-x54)>x55)>x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 14982656838433945LLU;
	static uint16_t x58 = 15U;
	int16_t x60 = -1;
	int32_t t13 = 2494;

    t13 = (((x57-x58)>x59)>x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = 1;
	int16_t x63 = -16;
	int32_t x64 = -5;
	volatile int32_t t14 = 214;

    t14 = (((x61-x62)>x63)>x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x70 = UINT64_MAX;
	int32_t x71 = -6;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t15 = 10;

    t15 = (((x69-x70)>x71)>x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x74 = INT64_MIN;
	uint64_t x75 = 1854295623LLU;

    t16 = (((x73-x74)>x75)>x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = 242834647U;
	int32_t x79 = INT32_MAX;
	int32_t t17 = -179717;

    t17 = (((x77-x78)>x79)>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x83 = -1;
	volatile int16_t x84 = 323;
	int32_t t18 = 9968274;

    t18 = (((x81-x82)>x83)>x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x85 = -1;
	static int8_t x86 = 50;
	int64_t x88 = INT64_MIN;
	int32_t t19 = 28645446;

    t19 = (((x85-x86)>x87)>x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t20 = -591660;

    t20 = (((x89-x90)>x91)>x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x94 = 383192931214LL;
	uint64_t x95 = 57639119161LLU;
	int32_t x96 = INT32_MIN;
	volatile int32_t t21 = -97822254;

    t21 = (((x93-x94)>x95)>x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	int32_t t22 = 9;

    t22 = (((x97-x98)>x99)>x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -769619;
	uint8_t x102 = 15U;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MAX;
	int32_t t23 = -57418;

    t23 = (((x101-x102)>x103)>x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x105 = INT64_MIN;
	static uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MAX;
	volatile uint32_t x108 = 400779723U;
	volatile int32_t t24 = -1016397800;

    t24 = (((x105-x106)>x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = -1;
	static int64_t x112 = 2048265088LL;
	volatile int32_t t25 = -21809;

    t25 = (((x109-x110)>x111)>x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	static int64_t x114 = -1LL;
	static volatile int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	int32_t t26 = 431713;

    t26 = (((x113-x114)>x115)>x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x117 = -1438624483467707518LL;
	static volatile uint8_t x118 = UINT8_MAX;
	volatile int32_t x119 = INT32_MAX;
	volatile int16_t x120 = 2;
	int32_t t27 = -783288666;

    t27 = (((x117-x118)>x119)>x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -1;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = -106;
	int32_t t28 = -1222;

    t28 = (((x125-x126)>x127)>x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x129 = INT32_MAX;
	int16_t x130 = 6820;
	uint16_t x131 = 20004U;
	volatile int32_t t29 = -130492;

    t29 = (((x129-x130)>x131)>x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x133 = UINT16_MAX;
	int16_t x134 = -1;
	volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = 86U;
	volatile int32_t t30 = -544;

    t30 = (((x133-x134)>x135)>x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = -1;
	volatile uint32_t x138 = 8161076U;
	int64_t x139 = -1LL;
	uint8_t x140 = 18U;
	int32_t t31 = -3967;

    t31 = (((x137-x138)>x139)>x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = INT32_MIN;
	static volatile int64_t x142 = 466309LL;
	int32_t x143 = INT32_MIN;
	volatile int64_t x144 = INT64_MIN;

    t32 = (((x141-x142)>x143)>x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = 37U;
	static uint16_t x146 = 0U;
	static uint32_t x148 = 395U;
	int32_t t33 = 129778827;

    t33 = (((x145-x146)>x147)>x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x150 = 19U;
	uint32_t x151 = 154492939U;
	int64_t x152 = INT64_MAX;
	int32_t t34 = 56812;

    t34 = (((x149-x150)>x151)>x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x154 = INT8_MAX;
	static volatile int32_t x155 = 6;
	int8_t x156 = 0;
	volatile int32_t t35 = 463082;

    t35 = (((x153-x154)>x155)>x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = 839888U;
	volatile int64_t x158 = -813707LL;
	static uint8_t x160 = 32U;
	volatile int32_t t36 = 8121;

    t36 = (((x157-x158)>x159)>x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x162 = UINT64_MAX;
	static uint32_t x163 = UINT32_MAX;
	uint32_t x164 = 0U;
	volatile int32_t t37 = 32758;

    t37 = (((x161-x162)>x163)>x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x165 = 0U;
	static uint8_t x167 = 70U;
	static int32_t x168 = -1;

    t38 = (((x165-x166)>x167)>x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x169 = UINT8_MAX;
	int8_t x170 = -7;
	int64_t x171 = 915347LL;
	uint32_t x172 = UINT32_MAX;
	int32_t t39 = -2036;

    t39 = (((x169-x170)>x171)>x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = -6138;
	volatile int64_t x174 = INT64_MIN;
	int64_t x175 = -1LL;
	static volatile int32_t t40 = 4364;

    t40 = (((x173-x174)>x175)>x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = INT8_MIN;
	uint64_t x178 = UINT64_MAX;
	uint8_t x179 = UINT8_MAX;
	uint8_t x180 = UINT8_MAX;
	int32_t t41 = 1;

    t41 = (((x177-x178)>x179)>x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = UINT32_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	static volatile int32_t t42 = -33267323;

    t42 = (((x181-x182)>x183)>x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x185 = INT16_MAX;
	volatile int64_t x187 = 26LL;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t43 = 0;

    t43 = (((x185-x186)>x187)>x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x189 = 5770369LLU;
	volatile uint64_t x190 = 2076485LLU;
	int8_t x192 = INT8_MIN;
	int32_t t44 = -1;

    t44 = (((x189-x190)>x191)>x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x193 = INT64_MIN;
	static volatile int32_t x194 = -1;
	static int16_t x195 = -1;
	int16_t x196 = INT16_MIN;
	int32_t t45 = -224;

    t45 = (((x193-x194)>x195)>x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x197 = UINT8_MAX;
	volatile int32_t x198 = INT32_MAX;
	uint16_t x199 = 7U;
	static int64_t x200 = -8LL;
	volatile int32_t t46 = 2034306;

    t46 = (((x197-x198)>x199)>x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x201 = 1275LLU;
	int32_t x202 = -1;
	volatile uint64_t x203 = UINT64_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t47 = -11102;

    t47 = (((x201-x202)>x203)>x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = -11506;
	int32_t x206 = -1;
	int16_t x207 = -1;
	int32_t t48 = 149255351;

    t48 = (((x205-x206)>x207)>x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MAX;
	uint16_t x210 = 155U;
	static int32_t t49 = -20369;

    t49 = (((x209-x210)>x211)>x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = 6U;
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	int64_t x216 = 31713595455LL;
	int32_t t50 = -267271;

    t50 = (((x213-x214)>x215)>x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int32_t x219 = 0;
	int32_t x220 = INT32_MAX;
	static int32_t t51 = -22026870;

    t51 = (((x217-x218)>x219)>x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x221 = 3U;
	int64_t x222 = -444569328926918827LL;
	uint32_t x223 = UINT32_MAX;
	static int32_t x224 = -49295063;
	int32_t t52 = 200399;

    t52 = (((x221-x222)>x223)>x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x225 = 191LLU;
	int16_t x226 = 410;
	volatile int32_t x227 = -1;
	static int32_t x228 = -1;
	volatile int32_t t53 = 45490;

    t53 = (((x225-x226)>x227)>x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x229 = -104441381;
	volatile int64_t x230 = -33059LL;
	static uint64_t x231 = 36442384LLU;
	static int64_t x232 = -590086903742LL;
	volatile int32_t t54 = -13392108;

    t54 = (((x229-x230)>x231)>x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -140426031406220839LL;
	uint32_t x234 = 98017U;
	int64_t x235 = INT64_MIN;
	static volatile int16_t x236 = -1;
	int32_t t55 = 80267674;

    t55 = (((x233-x234)>x235)>x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x237 = 3020110264135577679LLU;
	int64_t x238 = -55158966692548762LL;
	int64_t x239 = -1LL;
	int16_t x240 = INT16_MIN;
	volatile int32_t t56 = -51491;

    t56 = (((x237-x238)>x239)>x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x242 = UINT8_MAX;
	int8_t x243 = -1;
	int64_t x244 = -1LL;
	static int32_t t57 = 39;

    t57 = (((x241-x242)>x243)>x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = 0;
	int32_t x246 = INT32_MAX;
	volatile int16_t x248 = 3;
	volatile int32_t t58 = 202;

    t58 = (((x245-x246)>x247)>x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = 48783;
	int8_t x250 = -1;
	int16_t x252 = INT16_MIN;
	int32_t t59 = 4;

    t59 = (((x249-x250)>x251)>x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MAX;
	volatile int8_t x258 = 2;
	int32_t x260 = INT32_MIN;
	int32_t t60 = -970;

    t60 = (((x257-x258)>x259)>x260);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x263 = INT16_MAX;
	int32_t x264 = 25937;
	int32_t t61 = 5;

    t61 = (((x261-x262)>x263)>x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = -1;
	volatile int32_t t62 = -61599;

    t62 = (((x265-x266)>x267)>x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x271 = -1;
	int16_t x272 = 37;
	volatile int32_t t63 = -4019;

    t63 = (((x269-x270)>x271)>x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x273 = UINT16_MAX;
	volatile int8_t x276 = INT8_MIN;
	int32_t t64 = -185810872;

    t64 = (((x273-x274)>x275)>x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x277 = 2093033227710088LLU;
	int8_t x278 = 17;
	int8_t x279 = -2;
	static volatile uint16_t x280 = 25U;

    t65 = (((x277-x278)>x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x281 = 15934142658459LLU;
	uint64_t x283 = 1460LLU;
	int64_t x284 = -1LL;
	int32_t t66 = 24;

    t66 = (((x281-x282)>x283)>x284);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = 1;
	int64_t x286 = INT64_MAX;
	volatile uint32_t x288 = 760814560U;
	int32_t t67 = 103;

    t67 = (((x285-x286)>x287)>x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = INT64_MAX;
	volatile uint32_t x290 = 2U;
	int16_t x291 = 7;
	volatile int32_t x292 = -25;
	volatile int32_t t68 = -26007195;

    t68 = (((x289-x290)>x291)>x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = INT8_MIN;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = -46;
	static int32_t t69 = 144;

    t69 = (((x293-x294)>x295)>x296);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = INT8_MAX;
	static int16_t x298 = INT16_MAX;
	int64_t x300 = -1LL;
	volatile int32_t t70 = -393;

    t70 = (((x297-x298)>x299)>x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x302 = UINT16_MAX;
	volatile uint16_t x303 = 7029U;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t71 = 72609883;

    t71 = (((x301-x302)>x303)>x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x305 = 8116U;
	int16_t x306 = -1;
	uint8_t x307 = 4U;
	uint16_t x308 = 1023U;
	int32_t t72 = -15879;

    t72 = (((x305-x306)>x307)>x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = -1LL;
	int32_t x310 = INT32_MAX;
	volatile int64_t x311 = INT64_MIN;
	static uint8_t x312 = 0U;
	static volatile int32_t t73 = -5;

    t73 = (((x309-x310)>x311)>x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	static int32_t t74 = -666194433;

    t74 = (((x317-x318)>x319)>x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x322 = -1;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = 6U;

    t75 = (((x321-x322)>x323)>x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = -1;
	volatile int8_t x326 = 14;
	int32_t x327 = 1833550;
	static uint64_t x328 = UINT64_MAX;
	static int32_t t76 = -43080;

    t76 = (((x325-x326)>x327)>x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x333 = INT32_MIN;
	int64_t x334 = 11553LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t77 = 483;

    t77 = (((x333-x334)>x335)>x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = -1949;
	volatile int32_t x342 = INT32_MIN;
	volatile int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MAX;
	volatile int32_t t78 = -1;

    t78 = (((x341-x342)>x343)>x344);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x345 = -1;
	int32_t x346 = 1;
	volatile int8_t x348 = 1;
	static int32_t t79 = 0;

    t79 = (((x345-x346)>x347)>x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x350 = 1189856152U;
	volatile uint16_t x351 = 45U;

    t80 = (((x349-x350)>x351)>x352);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x354 = 49704LL;
	int16_t x356 = -1;
	volatile int32_t t81 = -132918241;

    t81 = (((x353-x354)>x355)>x356);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x357 = INT64_MIN;
	volatile int32_t x358 = 0;
	static volatile uint64_t x359 = UINT64_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t82 = -194;

    t82 = (((x357-x358)>x359)>x360);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x362 = 4110990995288681847LLU;
	uint32_t x363 = 57997148U;
	uint16_t x364 = 433U;
	int32_t t83 = -4764169;

    t83 = (((x361-x362)>x363)>x364);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x365 = -1LL;
	uint16_t x366 = UINT16_MAX;
	int64_t x368 = -1LL;

    t84 = (((x365-x366)>x367)>x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = -1;
	uint16_t x370 = 739U;
	int64_t x372 = INT64_MIN;
	int32_t t85 = 6513;

    t85 = (((x369-x370)>x371)>x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = INT16_MIN;
	uint8_t x375 = 0U;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t86 = -9296;

    t86 = (((x373-x374)>x375)>x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MAX;
	int16_t x379 = INT16_MIN;
	static volatile int16_t x380 = -1;
	volatile int32_t t87 = 4913;

    t87 = (((x377-x378)>x379)>x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x381 = -1LL;
	uint32_t x382 = 112U;
	int8_t x383 = -29;
	volatile int32_t t88 = -7322;

    t88 = (((x381-x382)>x383)>x384);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x385 = 23224U;
	static int8_t x386 = INT8_MIN;
	int64_t x388 = 43478497618LL;
	int32_t t89 = -807871;

    t89 = (((x385-x386)>x387)>x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x390 = 1232145708LLU;
	uint64_t x391 = 30798LLU;

    t90 = (((x389-x390)>x391)>x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x393 = 712975U;
	int64_t x394 = 107864LL;
	static uint64_t x395 = 94703279952LLU;
	volatile uint8_t x396 = 1U;
	volatile int32_t t91 = 354982125;

    t91 = (((x393-x394)>x395)>x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x398 = 5788798207LLU;
	volatile uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t92 = -29323;

    t92 = (((x397-x398)>x399)>x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x401 = 0U;
	uint32_t x403 = 31112U;
	volatile int64_t x404 = -19203821096424LL;
	static int32_t t93 = 0;

    t93 = (((x401-x402)>x403)>x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 4990639670821719LLU;
	int32_t x407 = -1;
	int32_t x408 = -1;
	volatile int32_t t94 = 1;

    t94 = (((x405-x406)>x407)>x408);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x413 = INT32_MAX;
	uint8_t x416 = 12U;
	static int32_t t95 = -86101982;

    t95 = (((x413-x414)>x415)>x416);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x417 = 138872LLU;
	int32_t x418 = -1;
	static int32_t x419 = -1;
	int32_t x420 = INT32_MAX;

    t96 = (((x417-x418)>x419)>x420);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x421 = INT64_MIN;
	static uint64_t x422 = 2993313LLU;
	static volatile int8_t x423 = INT8_MIN;
	int32_t x424 = -10;
	volatile int32_t t97 = 50515245;

    t97 = (((x421-x422)>x423)>x424);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x429 = 5U;
	int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	uint8_t x432 = 90U;
	volatile int32_t t98 = -489547689;

    t98 = (((x429-x430)>x431)>x432);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x433 = INT8_MAX;
	volatile int32_t t99 = -958721631;

    t99 = (((x433-x434)>x435)>x436);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x437 = UINT16_MAX;
	int32_t x439 = 64;
	int32_t x440 = -113001235;
	volatile int32_t t100 = 1;

    t100 = (((x437-x438)>x439)>x440);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x441 = -1;
	int8_t x442 = INT8_MIN;
	static uint16_t x443 = 5U;
	volatile int64_t x444 = INT64_MIN;
	int32_t t101 = 18175355;

    t101 = (((x441-x442)>x443)>x444);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x445 = UINT32_MAX;
	uint32_t x446 = 326U;
	volatile uint8_t x447 = 0U;
	volatile int32_t t102 = -89577;

    t102 = (((x445-x446)>x447)>x448);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x449 = -1;
	static uint8_t x451 = 88U;
	volatile int32_t x452 = INT32_MIN;
	volatile int32_t t103 = 38;

    t103 = (((x449-x450)>x451)>x452);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x453 = 5152126U;
	static int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	int32_t t104 = -1215427;

    t104 = (((x453-x454)>x455)>x456);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = -62;
	volatile int16_t x458 = -17;
	int32_t x459 = -1;
	static int64_t x460 = -131301866014137845LL;
	static volatile int32_t t105 = -22;

    t105 = (((x457-x458)>x459)>x460);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x461 = -1LL;
	static uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = UINT32_MAX;
	static int32_t t106 = 12672;

    t106 = (((x461-x462)>x463)>x464);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x465 = 1LLU;
	volatile int32_t x466 = INT32_MIN;
	int32_t x468 = INT32_MIN;
	volatile int32_t t107 = 44;

    t107 = (((x465-x466)>x467)>x468);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x469 = -1;
	static int64_t x471 = -4760621086LL;
	int64_t x472 = INT64_MIN;
	int32_t t108 = 655629405;

    t108 = (((x469-x470)>x471)>x472);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x473 = 109364U;
	int64_t x474 = INT64_MAX;
	uint8_t x475 = UINT8_MAX;
	volatile int64_t x476 = -1LL;
	volatile int32_t t109 = -45050;

    t109 = (((x473-x474)>x475)>x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x477 = INT32_MAX;
	uint8_t x478 = 1U;
	int8_t x479 = INT8_MAX;
	int16_t x480 = INT16_MAX;
	static volatile int32_t t110 = -125029;

    t110 = (((x477-x478)>x479)>x480);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x481 = -1;
	static int32_t x482 = -1;
	int64_t x483 = -8785961271519129LL;
	static int8_t x484 = INT8_MIN;
	static int32_t t111 = -11973;

    t111 = (((x481-x482)>x483)>x484);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x485 = 1U;
	int8_t x486 = INT8_MIN;
	volatile int32_t x487 = INT32_MIN;
	static uint32_t x488 = UINT32_MAX;
	int32_t t112 = 64;

    t112 = (((x485-x486)>x487)>x488);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MIN;
	volatile int64_t x492 = INT64_MAX;
	volatile int32_t t113 = 6742056;

    t113 = (((x489-x490)>x491)>x492);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x494 = 1U;
	uint8_t x496 = 19U;
	int32_t t114 = -10314;

    t114 = (((x493-x494)>x495)>x496);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x497 = INT32_MAX;
	volatile uint64_t x498 = 176LLU;
	int16_t x499 = INT16_MIN;

    t115 = (((x497-x498)>x499)>x500);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x501 = 107U;
	static int8_t x502 = -1;
	int16_t x503 = -15;
	volatile int8_t x504 = INT8_MAX;
	volatile int32_t t116 = -32236;

    t116 = (((x501-x502)>x503)>x504);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x505 = INT8_MAX;
	int64_t x506 = -625237764327LL;
	uint32_t x508 = 175774883U;

    t117 = (((x505-x506)>x507)>x508);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x510 = 20U;
	volatile int64_t x511 = 48583LL;
	static uint16_t x512 = 0U;
	volatile int32_t t118 = 47717;

    t118 = (((x509-x510)>x511)>x512);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x513 = UINT64_MAX;
	int16_t x514 = INT16_MAX;
	int8_t x516 = INT8_MAX;
	volatile int32_t t119 = -729;

    t119 = (((x513-x514)>x515)>x516);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x517 = -5;
	volatile int8_t x518 = INT8_MIN;
	int32_t x519 = INT32_MAX;
	int32_t x520 = -1;

    t120 = (((x517-x518)>x519)>x520);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x521 = 103637392LLU;
	uint64_t x522 = 524007838LLU;
	volatile uint32_t x523 = UINT32_MAX;
	int8_t x524 = INT8_MIN;
	volatile int32_t t121 = 3862;

    t121 = (((x521-x522)>x523)>x524);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x529 = -1;
	volatile int64_t x530 = INT64_MAX;
	uint8_t x532 = UINT8_MAX;
	int32_t t122 = -1;

    t122 = (((x529-x530)>x531)>x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x533 = 681089194LLU;
	int64_t x534 = INT64_MIN;
	uint8_t x536 = 8U;
	int32_t t123 = 248061;

    t123 = (((x533-x534)>x535)>x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x538 = INT8_MIN;
	int16_t x539 = -1;
	volatile int32_t x540 = INT32_MAX;
	int32_t t124 = -24;

    t124 = (((x537-x538)>x539)>x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x541 = INT8_MAX;
	static uint64_t x542 = 169567921LLU;
	uint64_t x543 = UINT64_MAX;
	static int32_t x544 = 0;

    t125 = (((x541-x542)>x543)>x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x545 = -232;
	int32_t x546 = -1;
	static int8_t x547 = INT8_MIN;
	static volatile int16_t x548 = 68;
	volatile int32_t t126 = -40902;

    t126 = (((x545-x546)>x547)>x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x549 = -4501300701783739LL;
	volatile int64_t x551 = INT64_MIN;
	volatile int16_t x552 = 127;
	static volatile int32_t t127 = 87;

    t127 = (((x549-x550)>x551)>x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x554 = 2;
	uint64_t x555 = UINT64_MAX;
	int64_t x556 = -1LL;
	int32_t t128 = 339954897;

    t128 = (((x553-x554)>x555)>x556);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	static int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t129 = 4390;

    t129 = (((x557-x558)>x559)>x560);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x563 = INT16_MIN;
	int16_t x564 = INT16_MAX;

    t130 = (((x561-x562)>x563)>x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x565 = 3770LLU;
	uint32_t x567 = 1080134326U;
	volatile int32_t t131 = 195907;

    t131 = (((x565-x566)>x567)>x568);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x570 = 9352U;
	uint32_t x571 = 174U;
	static volatile uint32_t x572 = UINT32_MAX;

    t132 = (((x569-x570)>x571)>x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x574 = INT32_MIN;
	int32_t x575 = INT32_MIN;
	static int32_t t133 = 221738;

    t133 = (((x573-x574)>x575)>x576);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x577 = -5087;
	int16_t x578 = 1358;
	int64_t x580 = 1LL;

    t134 = (((x577-x578)>x579)>x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x581 = -1LL;
	int32_t x583 = -1;
	int32_t x584 = INT32_MIN;
	int32_t t135 = 792;

    t135 = (((x581-x582)>x583)>x584);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x585 = 6U;
	int8_t x586 = -43;
	static volatile int32_t x587 = -1;
	static int32_t t136 = 483157377;

    t136 = (((x585-x586)>x587)>x588);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x593 = 2004261169LL;
	uint8_t x594 = UINT8_MAX;
	static int64_t x595 = INT64_MIN;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t137 = 2617;

    t137 = (((x593-x594)>x595)>x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x597 = INT8_MAX;
	int8_t x598 = INT8_MIN;
	int64_t x599 = -1LL;
	volatile int32_t t138 = -38;

    t138 = (((x597-x598)>x599)>x600);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x601 = 5665U;
	int16_t x603 = -11937;
	volatile int8_t x604 = INT8_MIN;
	int32_t t139 = 279024817;

    t139 = (((x601-x602)>x603)>x604);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x605 = INT16_MAX;
	static uint8_t x606 = 13U;
	uint64_t x607 = UINT64_MAX;
	int8_t x608 = 1;

    t140 = (((x605-x606)>x607)>x608);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x609 = INT16_MIN;
	uint8_t x610 = 35U;
	static int32_t x612 = INT32_MIN;
	int32_t t141 = -43;

    t141 = (((x609-x610)>x611)>x612);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x613 = 57246350087905799LLU;
	static int64_t x614 = INT64_MAX;
	int16_t x615 = 15;
	int16_t x616 = -4;
	int32_t t142 = -1;

    t142 = (((x613-x614)>x615)>x616);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x623 = UINT32_MAX;
	volatile int64_t x624 = INT64_MIN;
	int32_t t143 = 89015304;

    t143 = (((x621-x622)>x623)>x624);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x627 = 100U;
	int64_t x628 = INT64_MIN;
	volatile int32_t t144 = 10;

    t144 = (((x625-x626)>x627)>x628);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x629 = INT8_MAX;
	int32_t x630 = -962;
	int8_t x631 = INT8_MIN;
	volatile int32_t t145 = 3143255;

    t145 = (((x629-x630)>x631)>x632);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x634 = INT16_MIN;
	int64_t x635 = -1931726251511LL;
	static volatile int32_t t146 = 1;

    t146 = (((x633-x634)>x635)>x636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x641 = -1LL;
	int64_t x642 = INT64_MIN;
	int8_t x643 = 33;
	int16_t x644 = INT16_MAX;
	int32_t t147 = -1;

    t147 = (((x641-x642)>x643)>x644);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x646 = 14;
	int16_t x648 = INT16_MIN;
	int32_t t148 = -59589461;

    t148 = (((x645-x646)>x647)>x648);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x649 = -659013LL;
	int32_t x650 = INT32_MIN;
	int64_t x651 = -1LL;
	int16_t x652 = INT16_MAX;
	static volatile int32_t t149 = -2753998;

    t149 = (((x649-x650)>x651)>x652);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x653 = -1;
	static int32_t x654 = INT32_MAX;
	static int8_t x655 = 27;
	int16_t x656 = 14;
	static volatile int32_t t150 = -13;

    t150 = (((x653-x654)>x655)>x656);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x661 = -1;
	int64_t x662 = 14943309890458464LL;
	int32_t x663 = INT32_MAX;
	int8_t x664 = 46;

    t151 = (((x661-x662)>x663)>x664);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x665 = -1;
	volatile int8_t x667 = 0;
	volatile uint16_t x668 = 3522U;
	volatile int32_t t152 = 2571;

    t152 = (((x665-x666)>x667)>x668);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x673 = -4074425;
	uint16_t x674 = 1U;
	static int8_t x675 = -15;

    t153 = (((x673-x674)>x675)>x676);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x678 = 276LLU;
	uint16_t x679 = 2U;
	volatile int16_t x680 = INT16_MIN;
	static volatile int32_t t154 = -96875;

    t154 = (((x677-x678)>x679)>x680);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x681 = 17U;
	static uint32_t x682 = 1598110U;
	uint8_t x683 = UINT8_MAX;
	int32_t t155 = 200;

    t155 = (((x681-x682)>x683)>x684);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x685 = 52U;
	int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MAX;
	int64_t x688 = -1LL;

    t156 = (((x685-x686)>x687)>x688);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x689 = -15906;
	int16_t x690 = INT16_MAX;
	volatile uint64_t x691 = 26515065253521LLU;
	volatile int32_t t157 = 298952;

    t157 = (((x689-x690)>x691)>x692);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x693 = UINT32_MAX;
	int16_t x695 = 426;
	int16_t x696 = INT16_MIN;
	int32_t t158 = 25;

    t158 = (((x693-x694)>x695)>x696);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x697 = INT16_MIN;
	volatile int8_t x698 = INT8_MIN;
	int64_t x699 = -2840750766745188LL;
	uint64_t x700 = UINT64_MAX;
	int32_t t159 = 6;

    t159 = (((x697-x698)>x699)>x700);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x701 = INT16_MAX;
	volatile int16_t x702 = INT16_MIN;
	static int32_t x703 = INT32_MIN;
	uint16_t x704 = 18U;

    t160 = (((x701-x702)>x703)>x704);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x706 = INT16_MIN;
	int64_t x707 = INT64_MIN;
	volatile uint16_t x708 = UINT16_MAX;
	int32_t t161 = 10136708;

    t161 = (((x705-x706)>x707)>x708);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x713 = UINT32_MAX;
	int16_t x714 = INT16_MIN;
	uint32_t x715 = 1688522594U;

    t162 = (((x713-x714)>x715)>x716);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x718 = -1LL;
	static int32_t x719 = INT32_MAX;
	int32_t x720 = 5166499;
	volatile int32_t t163 = 654481;

    t163 = (((x717-x718)>x719)>x720);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x721 = 2;
	int8_t x722 = -1;
	int8_t x723 = INT8_MIN;
	int8_t x724 = 43;
	int32_t t164 = -537;

    t164 = (((x721-x722)>x723)>x724);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x728 = UINT16_MAX;
	static volatile int32_t t165 = 80487999;

    t165 = (((x725-x726)>x727)>x728);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x730 = 1833004U;
	uint16_t x732 = 15942U;
	int32_t t166 = -1;

    t166 = (((x729-x730)>x731)>x732);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x733 = 4548LLU;
	volatile int64_t x734 = 1076LL;
	int64_t x736 = INT64_MIN;
	volatile int32_t t167 = -1;

    t167 = (((x733-x734)>x735)>x736);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x737 = -1;
	static volatile uint64_t x738 = 391791359980809408LLU;
	int64_t x739 = INT64_MIN;
	uint8_t x740 = UINT8_MAX;
	int32_t t168 = 24;

    t168 = (((x737-x738)>x739)>x740);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x741 = 1;
	int8_t x742 = 1;
	static uint16_t x743 = 2288U;
	int32_t x744 = -1656;
	volatile int32_t t169 = 41502;

    t169 = (((x741-x742)>x743)>x744);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x745 = -29;
	int64_t x747 = INT64_MIN;
	int32_t x748 = INT32_MIN;
	int32_t t170 = -5;

    t170 = (((x745-x746)>x747)>x748);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x749 = 12596U;
	uint8_t x750 = UINT8_MAX;
	int64_t x752 = 3593150313LL;
	int32_t t171 = 30778220;

    t171 = (((x749-x750)>x751)>x752);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x753 = 5500167209659007111LLU;
	int8_t x754 = 1;
	static int64_t x755 = INT64_MIN;
	int32_t t172 = 148;

    t172 = (((x753-x754)>x755)>x756);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x757 = INT32_MAX;
	int64_t x758 = -649285LL;
	int32_t x759 = INT32_MIN;
	int16_t x760 = 13150;
	static int32_t t173 = 19211;

    t173 = (((x757-x758)>x759)>x760);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x761 = -1;
	int32_t x762 = INT32_MIN;
	uint64_t x763 = 3779012LLU;
	uint16_t x764 = 12691U;
	int32_t t174 = -919742;

    t174 = (((x761-x762)>x763)>x764);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x765 = -1;
	int8_t x766 = INT8_MIN;
	volatile uint32_t x768 = 27284845U;
	static volatile int32_t t175 = 3457;

    t175 = (((x765-x766)>x767)>x768);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x770 = -1;
	static uint16_t x771 = 1568U;
	uint32_t x772 = 63756271U;

    t176 = (((x769-x770)>x771)>x772);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x773 = 3618867123974508609LL;
	int8_t x774 = INT8_MIN;
	int32_t x776 = -1;
	int32_t t177 = 25305643;

    t177 = (((x773-x774)>x775)>x776);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x777 = 13038;
	int64_t x779 = INT64_MAX;
	static uint32_t x780 = 9096732U;

    t178 = (((x777-x778)>x779)>x780);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x785 = -57966778;
	int16_t x786 = INT16_MIN;
	static int16_t x788 = INT16_MIN;
	int32_t t179 = -351;

    t179 = (((x785-x786)>x787)>x788);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x789 = -1LL;
	int8_t x790 = -1;
	uint64_t x791 = 1LLU;
	volatile int64_t x792 = -1LL;
	volatile int32_t t180 = 3578020;

    t180 = (((x789-x790)>x791)>x792);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x793 = INT16_MIN;
	volatile int32_t x794 = -1;
	int32_t x796 = INT32_MAX;
	int32_t t181 = 0;

    t181 = (((x793-x794)>x795)>x796);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x802 = 3;
	uint32_t x803 = 3146616U;
	uint8_t x804 = 3U;
	int32_t t182 = 154;

    t182 = (((x801-x802)>x803)>x804);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x805 = 187LLU;
	uint64_t x806 = UINT64_MAX;
	uint16_t x808 = 2U;
	int32_t t183 = -17478;

    t183 = (((x805-x806)>x807)>x808);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x810 = INT16_MIN;
	static int16_t x811 = INT16_MIN;
	volatile int32_t t184 = -429179;

    t184 = (((x809-x810)>x811)>x812);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x813 = INT16_MIN;
	int64_t x814 = -370901992LL;
	uint8_t x815 = 62U;
	volatile int16_t x816 = -1;

    t185 = (((x813-x814)>x815)>x816);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x817 = -587;
	static int16_t x818 = INT16_MAX;
	volatile int16_t x820 = 5;
	int32_t t186 = 17;

    t186 = (((x817-x818)>x819)>x820);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x822 = 2035U;
	uint32_t x824 = 3039U;
	volatile int32_t t187 = 283157;

    t187 = (((x821-x822)>x823)>x824);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x826 = -38764LL;
	int32_t x828 = INT32_MIN;
	volatile int32_t t188 = 5;

    t188 = (((x825-x826)>x827)>x828);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x830 = -1;
	int8_t x831 = -1;
	uint32_t x832 = 18083876U;
	volatile int32_t t189 = 298017;

    t189 = (((x829-x830)>x831)>x832);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x833 = 191U;
	uint16_t x834 = UINT16_MAX;
	static volatile int16_t x835 = -809;
	int32_t t190 = 255;

    t190 = (((x833-x834)>x835)>x836);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x838 = -1;
	int32_t x839 = INT32_MIN;
	int32_t t191 = -3;

    t191 = (((x837-x838)>x839)>x840);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x841 = 59U;
	static int8_t x842 = INT8_MIN;
	static int64_t x843 = INT64_MIN;
	int8_t x844 = INT8_MAX;
	volatile int32_t t192 = -554716157;

    t192 = (((x841-x842)>x843)>x844);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x845 = 3U;
	volatile int8_t x846 = INT8_MIN;
	volatile int32_t x847 = INT32_MAX;
	static uint64_t x848 = 12683112032521664LLU;

    t193 = (((x845-x846)>x847)>x848);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x849 = 3U;
	static int8_t x850 = -1;
	static uint32_t x851 = 551U;
	uint16_t x852 = 214U;
	static volatile int32_t t194 = 27;

    t194 = (((x849-x850)>x851)>x852);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x854 = INT16_MIN;
	volatile int16_t x855 = -1;
	volatile int32_t t195 = -1;

    t195 = (((x853-x854)>x855)>x856);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x857 = INT16_MIN;
	int8_t x858 = INT8_MIN;
	int32_t x859 = INT32_MAX;
	static int32_t t196 = -15853226;

    t196 = (((x857-x858)>x859)>x860);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x861 = INT16_MAX;
	int16_t x862 = INT16_MIN;
	int8_t x863 = 16;
	int32_t x864 = INT32_MIN;

    t197 = (((x861-x862)>x863)>x864);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x866 = -1;
	int16_t x867 = 85;
	int8_t x868 = INT8_MIN;

    t198 = (((x865-x866)>x867)>x868);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x869 = 30U;
	volatile uint8_t x870 = 5U;
	volatile int64_t x871 = -10424567LL;
	volatile int32_t x872 = INT32_MAX;
	int32_t t199 = -403714408;

    t199 = (((x869-x870)>x871)>x872);

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

