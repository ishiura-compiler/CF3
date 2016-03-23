
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

int16_t x4 = INT16_MIN;
uint16_t x7 = UINT16_MAX;
uint32_t x8 = 217U;
int8_t x15 = INT8_MIN;
volatile uint64_t x16 = UINT64_MAX;
static uint8_t x27 = 43U;
uint32_t x29 = UINT32_MAX;
int32_t x33 = INT32_MAX;
static uint32_t t6 = 5837215U;
int8_t x37 = INT8_MAX;
volatile int16_t x38 = -1;
volatile uint8_t x40 = 3U;
uint16_t x48 = UINT16_MAX;
uint8_t x50 = 8U;
volatile int32_t x58 = -1;
uint64_t x59 = UINT64_MAX;
int8_t x61 = 1;
uint64_t x63 = UINT64_MAX;
volatile int16_t x64 = -111;
uint32_t x66 = 78U;
int32_t t16 = -846647674;
volatile int32_t t17 = 536249;
uint8_t x82 = 1U;
int16_t x84 = -1;
volatile int32_t x98 = INT32_MIN;
int16_t x102 = -1;
static volatile int32_t t23 = -3087;
volatile int16_t x105 = -1;
uint32_t x106 = 10623U;
int8_t x112 = -1;
volatile int32_t t25 = -45443;
static uint64_t x113 = UINT64_MAX;
int64_t x114 = 585090203935553LL;
int8_t x115 = INT8_MIN;
volatile int32_t x118 = INT32_MAX;
int16_t x125 = INT16_MIN;
static int32_t x135 = INT32_MIN;
int8_t x145 = INT8_MIN;
int32_t x146 = 1850;
volatile uint16_t x148 = 4810U;
volatile uint8_t x149 = 11U;
static int16_t x166 = -1;
uint8_t x167 = 14U;
static int64_t x169 = -14149292LL;
static volatile int8_t x174 = INT8_MIN;
int16_t x176 = -5214;
int64_t x177 = 18190707716906LL;
static volatile int32_t t41 = -1;
int16_t x194 = INT16_MAX;
int8_t x197 = INT8_MIN;
volatile int16_t x199 = -7;
static uint64_t x206 = UINT64_MAX;
int64_t x210 = 17173098LL;
uint64_t x217 = 152167763LLU;
int32_t t50 = 116;
static volatile uint64_t t52 = 28797576564774LLU;
int32_t x251 = 340516427;
volatile int32_t t56 = -69375272;
uint32_t x253 = UINT32_MAX;
uint64_t x254 = 9222458050LLU;
static int64_t x255 = INT64_MAX;
uint32_t t57 = 5U;
volatile uint64_t x260 = 123719416655LLU;
int64_t x261 = INT64_MIN;
static uint16_t x263 = 24303U;
uint16_t x264 = 3U;
volatile int32_t t59 = 992726;
volatile int8_t x274 = 61;
uint8_t x283 = 6U;
static volatile int64_t t67 = -547513255151LL;
volatile int64_t x309 = INT64_MAX;
volatile int8_t x317 = INT8_MIN;
uint32_t x332 = 118U;
int16_t x338 = -1;
static int16_t x340 = -1;
volatile int32_t t75 = -120907023;
uint8_t x344 = 6U;
int32_t t77 = 598593499;
static volatile uint8_t x359 = 0U;
int32_t x363 = -1;
static int16_t x369 = -1;
uint32_t x378 = 0U;
static volatile int32_t t82 = 33;
int16_t x383 = -1;
int8_t x384 = 0;
int64_t x389 = -1LL;
uint32_t x396 = UINT32_MAX;
uint64_t x400 = UINT64_MAX;
int64_t x403 = -111839351581411581LL;
uint64_t t93 = UINT64_MAX;
uint16_t x438 = 5920U;
int64_t x444 = -61LL;
int64_t t96 = -347479990850LL;
int64_t x449 = INT64_MIN;
int16_t x451 = -378;
int64_t x461 = INT64_MIN;
int32_t x469 = -2823;
int16_t x474 = 0;
static volatile uint32_t x481 = 207U;
int32_t t105 = 7162019;
int64_t x490 = INT64_MIN;
int32_t t107 = 110410;
static int8_t x502 = INT8_MIN;
static volatile int8_t x512 = -1;
static int8_t x514 = INT8_MAX;
int64_t x524 = INT64_MAX;
static volatile uint32_t x530 = UINT32_MAX;
int64_t x532 = INT64_MIN;
uint16_t x534 = 52U;
uint8_t x542 = UINT8_MAX;
static volatile int16_t x557 = INT16_MIN;
int64_t x559 = INT64_MIN;
static int32_t x566 = 15957053;
volatile int16_t x568 = -1;
volatile int8_t x570 = 0;
uint64_t x571 = UINT64_MAX;
uint64_t x575 = 46964141LLU;
int32_t x581 = INT32_MIN;
int16_t x587 = INT16_MAX;
volatile int32_t t126 = 982467;
uint16_t x597 = UINT16_MAX;
int64_t x602 = INT64_MIN;
volatile int8_t x603 = 55;
int32_t x622 = INT32_MIN;
static uint64_t x623 = 44710152476LLU;
int8_t x625 = -1;
int16_t x637 = INT16_MIN;
uint8_t x644 = UINT8_MAX;
uint64_t x645 = UINT64_MAX;
static uint64_t t139 = 641300880LLU;
int32_t x649 = -1;
uint32_t t140 = 698U;
volatile uint32_t x657 = UINT32_MAX;
int64_t x658 = -1LL;
static int32_t t141 = -523829431;
uint32_t x661 = UINT32_MAX;
volatile int16_t x663 = 2;
static uint32_t x664 = 1896457U;
int8_t x670 = 1;
volatile uint64_t x678 = UINT64_MAX;
static int32_t x679 = 865;
int16_t x688 = 97;
int32_t x693 = INT32_MIN;
int64_t x694 = 1073153373003LL;
static int32_t x699 = INT32_MAX;
uint32_t x700 = UINT32_MAX;
uint8_t x706 = 79U;
static volatile uint32_t t152 = UINT32_MAX;
int64_t x714 = 1LL;
volatile int32_t t153 = 1748867;
static volatile int64_t x721 = -1LL;
static int64_t t155 = -52064512745069LL;
volatile uint64_t t156 = 1LLU;
uint16_t x731 = 13135U;
int32_t t157 = -14663317;
volatile int64_t x735 = INT64_MIN;
uint8_t x736 = UINT8_MAX;
static volatile int64_t t159 = -1829840294780LL;
uint64_t x744 = UINT64_MAX;
volatile int32_t x747 = INT32_MIN;
uint16_t x748 = 15U;
int8_t x754 = INT8_MIN;
volatile int32_t t163 = INT32_MIN;
int8_t x759 = -1;
static int32_t t165 = 239852629;
static volatile int32_t t166 = 1;
volatile uint64_t t168 = 9066717950322316LLU;
int32_t x783 = -29;
static uint64_t x784 = UINT64_MAX;
int32_t x786 = INT32_MIN;
volatile int16_t x788 = -34;
uint64_t x791 = 43774646900407599LLU;
int64_t x797 = INT64_MIN;
static int8_t x800 = 0;
int64_t x801 = -1LL;
uint8_t x810 = UINT8_MAX;
volatile int16_t x813 = INT16_MIN;
int64_t x817 = INT64_MIN;
static int16_t x824 = INT16_MIN;
int16_t x826 = 0;
int64_t t178 = INT64_MAX;
int16_t x829 = INT16_MIN;
static volatile int32_t x833 = 12;
int8_t x841 = -1;
int64_t x849 = -1LL;
int8_t x854 = INT8_MAX;
int8_t x856 = 50;
volatile int32_t t186 = -98375;
uint64_t x869 = 126540761047562LLU;
int16_t x891 = INT16_MAX;
static int8_t x893 = INT8_MIN;
uint8_t x895 = UINT8_MAX;
int64_t x900 = -41758383LL;
int64_t t195 = INT64_MAX;
volatile int64_t x909 = INT64_MIN;
uint8_t x913 = UINT8_MAX;
int8_t x921 = INT8_MIN;


void f0(void) {
    	static uint16_t x1 = 4U;
	int32_t x2 = -119833;
	int64_t x3 = INT64_MAX;
	volatile int32_t t0 = 460238;

    t0 = ((x1>(x2+x3))+x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static volatile uint32_t x6 = UINT32_MAX;
	uint32_t t1 = 1U;

    t1 = ((x5>(x6+x7))+x8);

    if (t1 != 217U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x13 = 1U;
	int16_t x14 = -2367;
	uint64_t t2 = 18LLU;

    t2 = ((x13>(x14+x15))+x16);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -1;
	int32_t x18 = INT32_MAX;
	static int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	static int32_t t3 = INT32_MAX;

    t3 = ((x17>(x18+x19))+x20);

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MAX;
	static volatile uint64_t x28 = 296116691029758LLU;
	volatile uint64_t t4 = 473121652LLU;

    t4 = ((x25>(x26+x27))+x28);

    if (t4 != 296116691029758LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x30 = -1;
	uint32_t x31 = 1U;
	int64_t x32 = INT64_MIN;
	volatile int64_t t5 = 0LL;

    t5 = ((x29>(x30+x31))+x32);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x34 = -373841825344288651LL;
	volatile int8_t x35 = INT8_MIN;
	uint32_t x36 = 1789812U;

    t6 = ((x33>(x34+x35))+x36);

    if (t6 != 1789813U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x39 = 283;
	int32_t t7 = 0;

    t7 = ((x37>(x38+x39))+x40);

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x41 = INT64_MAX;
	int32_t x42 = INT32_MIN;
	volatile uint16_t x43 = 0U;
	static uint32_t x44 = 875725U;
	volatile uint32_t t8 = 1U;

    t8 = ((x41>(x42+x43))+x44);

    if (t8 != 875726U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MIN;
	static int8_t x46 = INT8_MIN;
	uint16_t x47 = 25011U;
	int32_t t9 = -3394;

    t9 = ((x45>(x46+x47))+x48);

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = UINT8_MAX;
	int8_t x51 = -1;
	int16_t x52 = INT16_MIN;
	int32_t t10 = 193;

    t10 = ((x49>(x50+x51))+x52);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -22;
	uint32_t x54 = 798346U;
	int32_t x55 = INT32_MAX;
	uint32_t x56 = 290390069U;
	volatile uint32_t t11 = 515022U;

    t11 = ((x53>(x54+x55))+x56);

    if (t11 != 290390070U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = 886644831;
	int8_t x60 = -2;
	int32_t t12 = -4561;

    t12 = ((x57>(x58+x59))+x60);

    if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x62 = INT16_MIN;
	static int32_t t13 = -1;

    t13 = ((x61>(x62+x63))+x64);

    if (t13 != -111) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = -1;
	static int16_t x67 = INT16_MIN;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 7927;

    t14 = ((x65>(x66+x67))+x68);

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = -1;
	uint8_t x70 = 1U;
	volatile int16_t x71 = INT16_MAX;
	int32_t x72 = -4181794;
	int32_t t15 = -195866;

    t15 = ((x69>(x70+x71))+x72);

    if (t15 != -4181794) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = INT8_MIN;
	volatile int8_t x74 = 1;
	static uint16_t x75 = 36U;
	int16_t x76 = -38;

    t16 = ((x73>(x74+x75))+x76);

    if (t16 != -38) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x77 = 0U;
	static uint64_t x78 = UINT64_MAX;
	static int32_t x79 = INT32_MAX;
	uint16_t x80 = 3U;

    t17 = ((x77>(x78+x79))+x80);

    if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MIN;
	uint16_t x83 = 6780U;
	int32_t t18 = 6159486;

    t18 = ((x81>(x82+x83))+x84);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	volatile int8_t x87 = INT8_MIN;
	volatile int16_t x88 = 0;
	int32_t t19 = 0;

    t19 = ((x85>(x86+x87))+x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = 3U;
	volatile uint8_t x90 = 109U;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t20 = -96295450;

    t20 = ((x89>(x90+x91))+x92);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	uint32_t x94 = 33U;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

    t21 = ((x93>(x94+x95))+x96);

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x97 = 128U;
	int16_t x99 = 1;
	int8_t x100 = -4;
	int32_t t22 = -179;

    t22 = ((x97>(x98+x99))+x100);

    if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x103 = 238722;
	static int8_t x104 = INT8_MIN;

    t23 = ((x101>(x102+x103))+x104);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x107 = UINT32_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 964123947;

    t24 = ((x105>(x106+x107))+x108);

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = 5284;
	volatile uint32_t x110 = 699364728U;
	int16_t x111 = 4;

    t25 = ((x109>(x110+x111))+x112);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x116 = 53U;
	volatile int32_t t26 = 732;

    t26 = ((x113>(x114+x115))+x116);

    if (t26 != 54) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x117 = UINT64_MAX;
	uint32_t x119 = 50354973U;
	int32_t x120 = -13042;
	int32_t t27 = 14;

    t27 = ((x117>(x118+x119))+x120);

    if (t27 != -13041) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x121 = 24230216;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = 481U;
	uint64_t x124 = 955517LLU;
	static uint64_t t28 = 1700818117755LLU;

    t28 = ((x121>(x122+x123))+x124);

    if (t28 != 955518LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x126 = -1;
	int64_t x127 = -65266145885702781LL;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t29 = -1;

    t29 = ((x125>(x126+x127))+x128);

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x129 = -1;
	int16_t x130 = -25;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = 76497682;
	volatile int32_t t30 = -2054732;

    t30 = ((x129>(x130+x131))+x132);

    if (t30 != 76497682) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = INT16_MIN;
	static uint32_t x134 = 49810274U;
	static uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t31 = 64878U;

    t31 = ((x133>(x134+x135))+x136);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = 0;
	static int8_t x138 = 22;
	volatile uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

    t32 = ((x137>(x138+x139))+x140);

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x141 = INT64_MIN;
	int32_t x142 = -1;
	int8_t x143 = 16;
	int8_t x144 = -1;
	int32_t t33 = -2;

    t33 = ((x141>(x142+x143))+x144);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x147 = INT64_MIN;
	volatile int32_t t34 = 14670;

    t34 = ((x145>(x146+x147))+x148);

    if (t34 != 4811) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x150 = -10231880906688697LL;
	static uint16_t x151 = 0U;
	int32_t x152 = -1;
	static int32_t t35 = -6136;

    t35 = ((x149>(x150+x151))+x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = 22160LL;
	int16_t x154 = 118;
	uint32_t x155 = 108922296U;
	static uint16_t x156 = 1826U;
	static volatile int32_t t36 = -468;

    t36 = ((x153>(x154+x155))+x156);

    if (t36 != 1826) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 2251495U;
	int8_t x158 = -1;
	int8_t x159 = -1;
	int8_t x160 = INT8_MAX;
	int32_t t37 = -7566645;

    t37 = ((x157>(x158+x159))+x160);

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x165 = -1;
	volatile int8_t x168 = -4;
	static int32_t t38 = 33123;

    t38 = ((x165>(x166+x167))+x168);

    if (t38 != -4) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x170 = 0;
	static uint8_t x171 = 22U;
	int16_t x172 = -1019;
	volatile int32_t t39 = -4796031;

    t39 = ((x169>(x170+x171))+x172);

    if (t39 != -1019) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -1;
	static int64_t x175 = 74805786853681214LL;
	volatile int32_t t40 = 5707;

    t40 = ((x173>(x174+x175))+x176);

    if (t40 != -5214) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x178 = INT16_MAX;
	static volatile int32_t x179 = -1;
	int8_t x180 = INT8_MAX;

    t41 = ((x177>(x178+x179))+x180);

    if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x189 = 0;
	int16_t x190 = -1;
	volatile uint16_t x191 = UINT16_MAX;
	volatile int8_t x192 = INT8_MAX;
	static volatile int32_t t42 = -11;

    t42 = ((x189>(x190+x191))+x192);

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x193 = 2U;
	int32_t x195 = 120;
	volatile int64_t x196 = INT64_MIN;
	int64_t t43 = INT64_MIN;

    t43 = ((x193>(x194+x195))+x196);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x198 = 2444U;
	uint8_t x200 = 1U;
	int32_t t44 = 5845;

    t44 = ((x197>(x198+x199))+x200);

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x201 = 91201692045LLU;
	uint32_t x202 = UINT32_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MIN;
	volatile int64_t t45 = 3LL;

    t45 = ((x201>(x202+x203))+x204);

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x205 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	int32_t x208 = 10816;
	int32_t t46 = 2;

    t46 = ((x205>(x206+x207))+x208);

    if (t46 != 10816) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = 436692598414459661LL;
	static int64_t t47 = 3LL;

    t47 = ((x209>(x210+x211))+x212);

    if (t47 != 436692598414459662LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x213 = 25U;
	static int16_t x214 = -937;
	uint16_t x215 = 45U;
	static int64_t x216 = 0LL;
	volatile int64_t t48 = -44526LL;

    t48 = ((x213>(x214+x215))+x216);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x218 = 18U;
	int8_t x219 = INT8_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t49 = 1;

    t49 = ((x217>(x218+x219))+x220);

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = 1391LL;
	static uint16_t x222 = 1U;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = -1;

    t50 = ((x221>(x222+x223))+x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x225 = 201229670079LLU;
	static volatile int16_t x226 = INT16_MAX;
	static volatile uint32_t x227 = 90739U;
	int64_t x228 = 1660278405164801LL;
	static int64_t t51 = 13349372471504LL;

    t51 = ((x225>(x226+x227))+x228);

    if (t51 != 1660278405164802LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x229 = 0U;
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MAX;
	uint64_t x232 = 650LLU;

    t52 = ((x229>(x230+x231))+x232);

    if (t52 != 650LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x233 = INT32_MIN;
	uint32_t x234 = 27055U;
	int32_t x235 = 1868119;
	volatile int32_t x236 = INT32_MIN;
	static int32_t t53 = -73;

    t53 = ((x233>(x234+x235))+x236);

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = -1472;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t54 = -17LL;

    t54 = ((x237>(x238+x239))+x240);

    if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = 1U;
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = INT64_MIN;
	uint8_t x244 = 43U;
	static int32_t t55 = -2;

    t55 = ((x241>(x242+x243))+x244);

    if (t55 != 44) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x250 = UINT64_MAX;
	static uint8_t x252 = UINT8_MAX;

    t56 = ((x249>(x250+x251))+x252);

    if (t56 != 256) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x256 = 98667U;

    t57 = ((x253>(x254+x255))+x256);

    if (t57 != 98667U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x257 = 15045906955LLU;
	uint16_t x258 = 6732U;
	static uint8_t x259 = 12U;
	volatile uint64_t t58 = 13906167035933LLU;

    t58 = ((x257>(x258+x259))+x260);

    if (t58 != 123719416656LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x262 = INT16_MIN;

    t59 = ((x261>(x262+x263))+x264);

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = 0;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 0;
	volatile uint32_t x268 = 2651461U;
	uint32_t t60 = 1740U;

    t60 = ((x265>(x266+x267))+x268);

    if (t60 != 2651462U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = INT8_MIN;
	volatile uint64_t x275 = 3436774LLU;
	int64_t x276 = -1LL;
	int64_t t61 = 16760557577LL;

    t61 = ((x273>(x274+x275))+x276);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x281 = 13U;
	uint64_t x282 = 510LLU;
	int64_t x284 = INT64_MAX;
	volatile int64_t t62 = INT64_MAX;

    t62 = ((x281>(x282+x283))+x284);

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x285 = -1LL;
	volatile uint16_t x286 = 0U;
	int8_t x287 = 9;
	static uint16_t x288 = UINT16_MAX;
	static volatile int32_t t63 = 0;

    t63 = ((x285>(x286+x287))+x288);

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -127820833945LL;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t64 = 9114411;

    t64 = ((x289>(x290+x291))+x292);

    if (t64 != 65536) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x293 = UINT64_MAX;
	int64_t x294 = -1LL;
	volatile int16_t x295 = -1;
	uint16_t x296 = 4732U;
	volatile int32_t t65 = -49;

    t65 = ((x293>(x294+x295))+x296);

    if (t65 != 4733) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x297 = UINT8_MAX;
	static volatile int16_t x298 = -6482;
	int8_t x299 = 1;
	volatile int8_t x300 = -2;
	static int32_t t66 = -19518349;

    t66 = ((x297>(x298+x299))+x300);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = INT16_MAX;
	uint16_t x302 = 1500U;
	uint64_t x303 = 98982034933LLU;
	int64_t x304 = 1813151LL;

    t67 = ((x301>(x302+x303))+x304);

    if (t67 != 1813151LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x305 = -68940954287179593LL;
	static uint64_t x306 = UINT64_MAX;
	static int64_t x307 = 2897846085998236623LL;
	int16_t x308 = INT16_MIN;
	int32_t t68 = 61;

    t68 = ((x305>(x306+x307))+x308);

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x310 = -182273LL;
	static volatile int64_t x311 = -1LL;
	volatile int8_t x312 = -1;
	int32_t t69 = -88;

    t69 = ((x309>(x310+x311))+x312);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = INT32_MIN;
	volatile int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MIN;
	int8_t x316 = 0;
	volatile int32_t t70 = 2870;

    t70 = ((x313>(x314+x315))+x316);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x318 = 71LLU;
	uint16_t x319 = 7U;
	int64_t x320 = INT64_MIN;
	volatile int64_t t71 = 149LL;

    t71 = ((x317>(x318+x319))+x320);

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = -1LL;
	volatile int32_t x322 = INT32_MIN;
	uint64_t x323 = 3140LLU;
	uint16_t x324 = 52U;
	int32_t t72 = 9627;

    t72 = ((x321>(x322+x323))+x324);

    if (t72 != 53) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = -1;
	uint8_t x330 = 126U;
	volatile int32_t x331 = -102514;
	uint32_t t73 = 1337807655U;

    t73 = ((x329>(x330+x331))+x332);

    if (t73 != 119U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = INT64_MIN;
	volatile int32_t x334 = 393852;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t74 = 502;

    t74 = ((x333>(x334+x335))+x336);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = INT8_MIN;
	uint16_t x339 = UINT16_MAX;

    t75 = ((x337>(x338+x339))+x340);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x341 = UINT32_MAX;
	uint16_t x342 = 1886U;
	int8_t x343 = INT8_MIN;
	int32_t t76 = 2;

    t76 = ((x341>(x342+x343))+x344);

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x345 = INT64_MIN;
	volatile uint16_t x346 = UINT16_MAX;
	volatile int32_t x347 = -346328556;
	int16_t x348 = -1;

    t77 = ((x345>(x346+x347))+x348);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x357 = 3U;
	volatile uint16_t x358 = 13174U;
	uint32_t x360 = 145247U;
	static uint32_t t78 = 234592U;

    t78 = ((x357>(x358+x359))+x360);

    if (t78 != 145247U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 69U;
	volatile uint32_t x364 = UINT32_MAX;
	volatile uint32_t t79 = 15U;

    t79 = ((x361>(x362+x363))+x364);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x365 = 109U;
	int16_t x366 = INT16_MIN;
	static uint64_t x367 = 326800206LLU;
	volatile int64_t x368 = 88LL;
	volatile int64_t t80 = 272824230650LL;

    t80 = ((x365>(x366+x367))+x368);

    if (t80 != 88LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x370 = INT8_MAX;
	int16_t x371 = -9;
	uint32_t x372 = UINT32_MAX;
	uint32_t t81 = UINT32_MAX;

    t81 = ((x369>(x370+x371))+x372);

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x377 = INT8_MAX;
	int8_t x379 = -15;
	int8_t x380 = INT8_MIN;

    t82 = ((x377>(x378+x379))+x380);

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x381 = 0LLU;
	volatile int32_t x382 = -1;
	volatile int32_t t83 = -29959792;

    t83 = ((x381>(x382+x383))+x384);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x385 = -1;
	static uint64_t x386 = 959102568658871217LLU;
	volatile uint64_t x387 = 234544LLU;
	static uint16_t x388 = 109U;
	static int32_t t84 = 47575;

    t84 = ((x385>(x386+x387))+x388);

    if (t84 != 110) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint32_t x390 = 16713U;
	static uint8_t x391 = UINT8_MAX;
	int8_t x392 = -1;
	int32_t t85 = 7;

    t85 = ((x389>(x390+x391))+x392);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x393 = 637804894734226486LL;
	int16_t x394 = -462;
	int8_t x395 = -1;
	volatile uint32_t t86 = 17U;

    t86 = ((x393>(x394+x395))+x396);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x397 = 0U;
	uint64_t x398 = 1LLU;
	uint8_t x399 = UINT8_MAX;
	static volatile uint64_t t87 = UINT64_MAX;

    t87 = ((x397>(x398+x399))+x400);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = INT64_MAX;
	uint32_t x404 = UINT32_MAX;
	uint32_t t88 = UINT32_MAX;

    t88 = ((x401>(x402+x403))+x404);

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x405 = INT16_MAX;
	int32_t x406 = 52;
	static uint8_t x407 = 11U;
	uint8_t x408 = 2U;
	volatile int32_t t89 = 2;

    t89 = ((x405>(x406+x407))+x408);

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x409 = 17U;
	static uint32_t x410 = 2U;
	uint32_t x411 = 1369130936U;
	uint8_t x412 = 95U;
	static volatile int32_t t90 = 4020;

    t90 = ((x409>(x410+x411))+x412);

    if (t90 != 95) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x413 = INT8_MIN;
	int8_t x414 = -10;
	volatile int8_t x415 = -1;
	uint8_t x416 = 3U;
	volatile int32_t t91 = -16;

    t91 = ((x413>(x414+x415))+x416);

    if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = INT16_MAX;
	int8_t x418 = -1;
	static uint16_t x419 = 2U;
	int16_t x420 = INT16_MIN;
	static volatile int32_t t92 = 2838;

    t92 = ((x417>(x418+x419))+x420);

    if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x421 = -20LL;
	static int16_t x422 = -1;
	uint8_t x423 = 1U;
	uint64_t x424 = UINT64_MAX;

    t93 = ((x421>(x422+x423))+x424);

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x437 = 1;
	volatile int16_t x439 = INT16_MAX;
	int64_t x440 = 0LL;
	volatile int64_t t94 = 24916LL;

    t94 = ((x437>(x438+x439))+x440);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x441 = 2041U;
	uint32_t x442 = 1U;
	volatile int8_t x443 = INT8_MIN;
	volatile int64_t t95 = 24LL;

    t95 = ((x441>(x442+x443))+x444);

    if (t95 != -61LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x445 = 5482;
	int8_t x446 = 0;
	volatile int8_t x447 = INT8_MAX;
	static int64_t x448 = -1LL;

    t96 = ((x445>(x446+x447))+x448);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x450 = INT16_MAX;
	int64_t x452 = -1LL;
	volatile int64_t t97 = 1636035141340232LL;

    t97 = ((x449>(x450+x451))+x452);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x453 = INT8_MIN;
	uint64_t x454 = 3LLU;
	static int16_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t98 = 11675363;

    t98 = ((x453>(x454+x455))+x456);

    if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MIN;
	static int64_t x459 = INT64_MAX;
	uint8_t x460 = 112U;
	int32_t t99 = 629;

    t99 = ((x457>(x458+x459))+x460);

    if (t99 != 113) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x462 = 2U;
	int8_t x463 = 0;
	int8_t x464 = INT8_MIN;
	int32_t t100 = 1292314;

    t100 = ((x461>(x462+x463))+x464);

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x470 = UINT32_MAX;
	int64_t x471 = -1LL;
	static int32_t x472 = -175384;
	int32_t t101 = 50179785;

    t101 = ((x469>(x470+x471))+x472);

    if (t101 != -175384) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x473 = UINT32_MAX;
	uint8_t x475 = 1U;
	static int32_t x476 = -63360;
	int32_t t102 = -247385;

    t102 = ((x473>(x474+x475))+x476);

    if (t102 != -63359) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x477 = -1LL;
	int32_t x478 = -440909;
	static uint64_t x479 = 2095433372622097573LLU;
	int16_t x480 = INT16_MIN;
	int32_t t103 = 41215009;

    t103 = ((x477>(x478+x479))+x480);

    if (t103 != -32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x482 = 2099889692U;
	int32_t x483 = INT32_MAX;
	volatile int16_t x484 = -613;
	volatile int32_t t104 = -254458;

    t104 = ((x481>(x482+x483))+x484);

    if (t104 != -613) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x485 = -1;
	volatile int8_t x486 = INT8_MIN;
	volatile uint64_t x487 = 268347375837LLU;
	int16_t x488 = -523;

    t105 = ((x485>(x486+x487))+x488);

    if (t105 != -522) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x489 = UINT32_MAX;
	int32_t x491 = 5030;
	int8_t x492 = -1;
	int32_t t106 = -27;

    t106 = ((x489>(x490+x491))+x492);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x493 = UINT32_MAX;
	uint8_t x494 = 38U;
	int8_t x495 = -1;
	uint8_t x496 = 1U;

    t107 = ((x493>(x494+x495))+x496);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = -1;
	int16_t x498 = INT16_MIN;
	uint8_t x499 = 1U;
	int8_t x500 = -1;
	volatile int32_t t108 = 372;

    t108 = ((x497>(x498+x499))+x500);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x501 = INT8_MAX;
	int16_t x503 = INT16_MIN;
	volatile int64_t x504 = INT64_MIN;
	volatile int64_t t109 = -655510575822747304LL;

    t109 = ((x501>(x502+x503))+x504);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x505 = 9U;
	int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	static int32_t x508 = 378899;
	volatile int32_t t110 = -5241692;

    t110 = ((x505>(x506+x507))+x508);

    if (t110 != 378900) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x509 = -14961007LL;
	uint16_t x510 = UINT16_MAX;
	static volatile uint32_t x511 = 1181446755U;
	static int32_t t111 = 0;

    t111 = ((x509>(x510+x511))+x512);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x513 = INT16_MIN;
	uint8_t x515 = 14U;
	int8_t x516 = 1;
	int32_t t112 = 3791;

    t112 = ((x513>(x514+x515))+x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x517 = INT8_MIN;
	int64_t x518 = -3788LL;
	uint32_t x519 = UINT32_MAX;
	int8_t x520 = INT8_MIN;
	volatile int32_t t113 = -161304;

    t113 = ((x517>(x518+x519))+x520);

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x522 = -498;
	int32_t x523 = 87635;
	static int64_t t114 = INT64_MAX;

    t114 = ((x521>(x522+x523))+x524);

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x525 = INT32_MAX;
	int16_t x526 = INT16_MIN;
	static int32_t x527 = 58;
	int32_t x528 = -1;
	int32_t t115 = -148;

    t115 = ((x525>(x526+x527))+x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = INT64_MIN;
	uint8_t x531 = UINT8_MAX;
	int64_t t116 = INT64_MIN;

    t116 = ((x529>(x530+x531))+x532);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x533 = INT64_MIN;
	static uint16_t x535 = 6U;
	int16_t x536 = 1843;
	static int32_t t117 = -15909159;

    t117 = ((x533>(x534+x535))+x536);

    if (t117 != 1843) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x537 = 490;
	uint64_t x538 = UINT64_MAX;
	uint32_t x539 = 260U;
	int32_t x540 = INT32_MIN;
	volatile int32_t t118 = -64960;

    t118 = ((x537>(x538+x539))+x540);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x541 = -1;
	volatile int16_t x543 = INT16_MAX;
	int32_t x544 = INT32_MIN;
	volatile int32_t t119 = INT32_MIN;

    t119 = ((x541>(x542+x543))+x544);

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x558 = INT16_MAX;
	volatile int8_t x560 = INT8_MIN;
	static volatile int32_t t120 = -15665030;

    t120 = ((x557>(x558+x559))+x560);

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x565 = 0;
	uint16_t x567 = 14781U;
	int32_t t121 = 168441;

    t121 = ((x565>(x566+x567))+x568);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	static volatile int32_t x572 = INT32_MAX;
	int32_t t122 = INT32_MAX;

    t122 = ((x569>(x570+x571))+x572);

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x573 = UINT32_MAX;
	int8_t x574 = INT8_MAX;
	volatile int64_t x576 = INT64_MIN;
	volatile int64_t t123 = 2717LL;

    t123 = ((x573>(x574+x575))+x576);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x577 = INT8_MIN;
	int64_t x578 = INT64_MAX;
	int64_t x579 = -79908048230857644LL;
	int64_t x580 = INT64_MIN;
	static int64_t t124 = INT64_MIN;

    t124 = ((x577>(x578+x579))+x580);

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x582 = 79853760U;
	uint64_t x583 = 5LLU;
	uint16_t x584 = 19734U;
	volatile int32_t t125 = -1965;

    t125 = ((x581>(x582+x583))+x584);

    if (t125 != 19735) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x585 = 93LL;
	int16_t x586 = -9;
	uint8_t x588 = 1U;

    t126 = ((x585>(x586+x587))+x588);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x589 = -1LL;
	int16_t x590 = -1;
	static int16_t x591 = INT16_MIN;
	static int8_t x592 = -1;
	volatile int32_t t127 = -120797116;

    t127 = ((x589>(x590+x591))+x592);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x593 = 12U;
	uint32_t x594 = UINT32_MAX;
	int8_t x595 = 3;
	int16_t x596 = INT16_MIN;
	volatile int32_t t128 = -111;

    t128 = ((x593>(x594+x595))+x596);

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x598 = INT64_MAX;
	static int32_t x599 = INT32_MIN;
	int8_t x600 = INT8_MAX;
	volatile int32_t t129 = 7131;

    t129 = ((x597>(x598+x599))+x600);

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x601 = UINT32_MAX;
	uint16_t x604 = 0U;
	int32_t t130 = 4827351;

    t130 = ((x601>(x602+x603))+x604);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x605 = 3912LL;
	uint16_t x606 = 6213U;
	int32_t x607 = INT32_MIN;
	volatile int32_t x608 = -8;
	int32_t t131 = 235997866;

    t131 = ((x605>(x606+x607))+x608);

    if (t131 != -7) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x609 = INT64_MIN;
	uint16_t x610 = UINT16_MAX;
	volatile int16_t x611 = -1;
	volatile uint32_t x612 = 90U;
	static volatile uint32_t t132 = 1580U;

    t132 = ((x609>(x610+x611))+x612);

    if (t132 != 90U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x621 = 68100758840LLU;
	static volatile int16_t x624 = -1;
	int32_t t133 = -3661820;

    t133 = ((x621>(x622+x623))+x624);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x626 = 48973232268107915LL;
	uint32_t x627 = 57544147U;
	uint16_t x628 = 41U;
	int32_t t134 = 0;

    t134 = ((x625>(x626+x627))+x628);

    if (t134 != 41) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x629 = 1218680702402039444LLU;
	volatile uint8_t x630 = 58U;
	int16_t x631 = INT16_MIN;
	int32_t x632 = -967;
	int32_t t135 = -1054237573;

    t135 = ((x629>(x630+x631))+x632);

    if (t135 != -967) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x633 = 1U;
	int64_t x634 = INT64_MIN;
	int64_t x635 = INT64_MAX;
	volatile int8_t x636 = -1;
	volatile int32_t t136 = 14424;

    t136 = ((x633>(x634+x635))+x636);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x638 = 239U;
	static int64_t x639 = -1LL;
	static volatile int32_t x640 = INT32_MIN;
	int32_t t137 = INT32_MIN;

    t137 = ((x637>(x638+x639))+x640);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x641 = UINT16_MAX;
	int8_t x642 = -1;
	int32_t x643 = -25348;
	int32_t t138 = -3715;

    t138 = ((x641>(x642+x643))+x644);

    if (t138 != 256) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x646 = 1U;
	int16_t x647 = -71;
	static volatile uint64_t x648 = UINT64_MAX;

    t139 = ((x645>(x646+x647))+x648);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x650 = 43;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = 448U;

    t140 = ((x649>(x650+x651))+x652);

    if (t140 != 449U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x659 = 1832U;
	uint16_t x660 = 225U;

    t141 = ((x657>(x658+x659))+x660);

    if (t141 != 226) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x662 = -3804;
	uint32_t t142 = 1595219U;

    t142 = ((x661>(x662+x663))+x664);

    if (t142 != 1896458U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x665 = 159U;
	static int64_t x666 = 29138LL;
	uint64_t x667 = 11LLU;
	static volatile int16_t x668 = INT16_MIN;
	int32_t t143 = 1;

    t143 = ((x665>(x666+x667))+x668);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x669 = 494320505182466LLU;
	static uint32_t x671 = 33947U;
	static int32_t x672 = -4350;
	volatile int32_t t144 = -54488922;

    t144 = ((x669>(x670+x671))+x672);

    if (t144 != -4349) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x677 = -6868;
	volatile int32_t x680 = -1;
	int32_t t145 = 787977518;

    t145 = ((x677>(x678+x679))+x680);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x681 = INT8_MIN;
	int16_t x682 = INT16_MIN;
	int8_t x683 = 2;
	static int16_t x684 = INT16_MIN;
	static volatile int32_t t146 = 1640;

    t146 = ((x681>(x682+x683))+x684);

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x685 = 1U;
	int16_t x686 = INT16_MIN;
	static uint32_t x687 = UINT32_MAX;
	int32_t t147 = -49602983;

    t147 = ((x685>(x686+x687))+x688);

    if (t147 != 97) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x689 = 10812207581LLU;
	uint32_t x690 = 857195U;
	static int64_t x691 = INT64_MIN;
	static uint64_t x692 = 8175218827368883LLU;
	volatile uint64_t t148 = 13914710986360LLU;

    t148 = ((x689>(x690+x691))+x692);

    if (t148 != 8175218827368883LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x695 = 526504109026LLU;
	int32_t x696 = -1;
	static int32_t t149 = -417;

    t149 = ((x693>(x694+x695))+x696);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x697 = 8837874808821LL;
	uint64_t x698 = UINT64_MAX;
	volatile uint32_t t150 = 1411138050U;

    t150 = ((x697>(x698+x699))+x700);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x705 = 222U;
	uint32_t x707 = UINT32_MAX;
	int64_t x708 = -1LL;
	volatile int64_t t151 = 229376765065402LL;

    t151 = ((x705>(x706+x707))+x708);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x709 = INT8_MAX;
	volatile int8_t x710 = INT8_MIN;
	static volatile uint8_t x711 = UINT8_MAX;
	volatile uint32_t x712 = UINT32_MAX;

    t152 = ((x709>(x710+x711))+x712);

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x713 = UINT8_MAX;
	static uint64_t x715 = 52007801860LLU;
	uint8_t x716 = 1U;

    t153 = ((x713>(x714+x715))+x716);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x717 = INT64_MAX;
	volatile uint32_t x718 = UINT32_MAX;
	uint32_t x719 = UINT32_MAX;
	volatile uint16_t x720 = 204U;
	volatile int32_t t154 = 749611237;

    t154 = ((x717>(x718+x719))+x720);

    if (t154 != 205) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x722 = UINT8_MAX;
	int8_t x723 = INT8_MAX;
	int64_t x724 = 25298LL;

    t155 = ((x721>(x722+x723))+x724);

    if (t155 != 25298LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x725 = 3U;
	static volatile int32_t x726 = INT32_MIN;
	int8_t x727 = 3;
	uint64_t x728 = 5975342LLU;

    t156 = ((x725>(x726+x727))+x728);

    if (t156 != 5975343LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x729 = INT8_MAX;
	int64_t x730 = -2696LL;
	static int8_t x732 = INT8_MAX;

    t157 = ((x729>(x730+x731))+x732);

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x733 = 1U;
	static uint16_t x734 = 14958U;
	volatile int32_t t158 = 72516;

    t158 = ((x733>(x734+x735))+x736);

    if (t158 != 256) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x737 = 126;
	uint16_t x738 = UINT16_MAX;
	volatile int8_t x739 = -1;
	int64_t x740 = -1LL;

    t159 = ((x737>(x738+x739))+x740);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x741 = UINT16_MAX;
	uint64_t x742 = 2532740656716095676LLU;
	static int64_t x743 = INT64_MIN;
	uint64_t t160 = UINT64_MAX;

    t160 = ((x741>(x742+x743))+x744);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x745 = -1063861193LL;
	uint32_t x746 = UINT32_MAX;
	volatile int32_t t161 = 362592;

    t161 = ((x745>(x746+x747))+x748);

    if (t161 != 15) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x749 = UINT8_MAX;
	static volatile uint16_t x750 = 292U;
	uint8_t x751 = UINT8_MAX;
	uint16_t x752 = 1U;
	int32_t t162 = 0;

    t162 = ((x749>(x750+x751))+x752);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x753 = INT32_MIN;
	int16_t x755 = -1;
	int32_t x756 = INT32_MIN;

    t163 = ((x753>(x754+x755))+x756);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x757 = INT8_MAX;
	int64_t x758 = 54214773284269644LL;
	uint8_t x760 = 1U;
	static int32_t t164 = 2848497;

    t164 = ((x757>(x758+x759))+x760);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x761 = UINT64_MAX;
	int64_t x762 = 12LL;
	int8_t x763 = -1;
	int32_t x764 = INT32_MIN;

    t165 = ((x761>(x762+x763))+x764);

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x765 = INT16_MAX;
	int8_t x766 = -1;
	uint16_t x767 = 3U;
	volatile uint16_t x768 = 26751U;

    t166 = ((x765>(x766+x767))+x768);

    if (t166 != 26752) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x769 = -1;
	uint32_t x770 = 1165U;
	volatile uint32_t x771 = 165U;
	volatile uint8_t x772 = UINT8_MAX;
	int32_t t167 = -1;

    t167 = ((x769>(x770+x771))+x772);

    if (t167 != 256) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x773 = INT8_MAX;
	volatile uint16_t x774 = UINT16_MAX;
	static volatile int64_t x775 = INT64_MIN;
	uint64_t x776 = 792435957LLU;

    t168 = ((x773>(x774+x775))+x776);

    if (t168 != 792435958LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x781 = INT8_MAX;
	uint16_t x782 = 2U;
	volatile uint64_t t169 = 0LLU;

    t169 = ((x781>(x782+x783))+x784);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x785 = UINT8_MAX;
	int64_t x787 = INT64_MAX;
	volatile int32_t t170 = -27;

    t170 = ((x785>(x786+x787))+x788);

    if (t170 != -34) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x789 = 1U;
	volatile int16_t x790 = INT16_MAX;
	int8_t x792 = -1;
	int32_t t171 = 2937103;

    t171 = ((x789>(x790+x791))+x792);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x798 = -1137;
	volatile uint16_t x799 = 1U;
	int32_t t172 = 2;

    t172 = ((x797>(x798+x799))+x800);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x802 = 58538492377924LLU;
	uint16_t x803 = 9333U;
	int8_t x804 = INT8_MIN;
	volatile int32_t t173 = 13;

    t173 = ((x801>(x802+x803))+x804);

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x809 = -1;
	static uint8_t x811 = 103U;
	uint64_t x812 = 0LLU;
	static volatile uint64_t t174 = 2288114634623309LLU;

    t174 = ((x809>(x810+x811))+x812);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x814 = INT32_MAX;
	int64_t x815 = -3969839LL;
	int32_t x816 = -2791514;
	volatile int32_t t175 = -23838591;

    t175 = ((x813>(x814+x815))+x816);

    if (t175 != -2791514) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x818 = UINT16_MAX;
	int16_t x819 = 14507;
	uint8_t x820 = 1U;
	int32_t t176 = 7271804;

    t176 = ((x817>(x818+x819))+x820);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x821 = INT64_MAX;
	int32_t x822 = 5229;
	int32_t x823 = INT32_MIN;
	volatile int32_t t177 = 477328297;

    t177 = ((x821>(x822+x823))+x824);

    if (t177 != -32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x825 = INT8_MIN;
	int32_t x827 = 12197694;
	static int64_t x828 = INT64_MAX;

    t178 = ((x825>(x826+x827))+x828);

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x830 = 0;
	uint32_t x831 = UINT32_MAX;
	volatile int64_t x832 = -8256213633781610LL;
	int64_t t179 = -246LL;

    t179 = ((x829>(x830+x831))+x832);

    if (t179 != -8256213633781610LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x834 = INT8_MIN;
	volatile int16_t x835 = INT16_MAX;
	uint16_t x836 = 124U;
	int32_t t180 = -1551213;

    t180 = ((x833>(x834+x835))+x836);

    if (t180 != 124) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x837 = INT32_MIN;
	int16_t x838 = INT16_MIN;
	int8_t x839 = INT8_MIN;
	uint16_t x840 = UINT16_MAX;
	volatile int32_t t181 = -1001982734;

    t181 = ((x837>(x838+x839))+x840);

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x842 = 10;
	uint64_t x843 = UINT64_MAX;
	int32_t x844 = 872;
	int32_t t182 = -14314368;

    t182 = ((x841>(x842+x843))+x844);

    if (t182 != 873) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x845 = 7U;
	uint8_t x846 = UINT8_MAX;
	static int8_t x847 = 0;
	uint64_t x848 = 3857501369LLU;
	uint64_t t183 = 190LLU;

    t183 = ((x845>(x846+x847))+x848);

    if (t183 != 3857501369LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x850 = 70U;
	int8_t x851 = 0;
	int8_t x852 = INT8_MIN;
	int32_t t184 = 28749;

    t184 = ((x849>(x850+x851))+x852);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x853 = INT8_MAX;
	uint64_t x855 = UINT64_MAX;
	int32_t t185 = 0;

    t185 = ((x853>(x854+x855))+x856);

    if (t185 != 51) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x857 = -1;
	static int64_t x858 = -1LL;
	volatile int32_t x859 = INT32_MAX;
	int16_t x860 = INT16_MIN;

    t186 = ((x857>(x858+x859))+x860);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x870 = INT8_MAX;
	int8_t x871 = -2;
	static int8_t x872 = INT8_MAX;
	static volatile int32_t t187 = -105860587;

    t187 = ((x869>(x870+x871))+x872);

    if (t187 != 128) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x873 = -1;
	static int64_t x874 = 1424356929845535823LL;
	int8_t x875 = -1;
	uint8_t x876 = 1U;
	int32_t t188 = 676544449;

    t188 = ((x873>(x874+x875))+x876);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x881 = 11245789602779LLU;
	int32_t x882 = -355070707;
	int64_t x883 = -181443LL;
	static int32_t x884 = INT32_MIN;
	volatile int32_t t189 = INT32_MIN;

    t189 = ((x881>(x882+x883))+x884);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x885 = 30;
	uint32_t x886 = UINT32_MAX;
	volatile uint64_t x887 = 26260LLU;
	int8_t x888 = 1;
	static volatile int32_t t190 = -1103550;

    t190 = ((x885>(x886+x887))+x888);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x889 = -1;
	uint32_t x890 = 36042866U;
	int8_t x892 = INT8_MIN;
	int32_t t191 = 113563824;

    t191 = ((x889>(x890+x891))+x892);

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x894 = INT8_MIN;
	volatile int64_t x896 = INT64_MIN;
	volatile int64_t t192 = INT64_MIN;

    t192 = ((x893>(x894+x895))+x896);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x897 = -55880292907204LL;
	uint16_t x898 = 0U;
	volatile int64_t x899 = -1LL;
	static volatile int64_t t193 = 435128LL;

    t193 = ((x897>(x898+x899))+x900);

    if (t193 != -41758383LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x901 = UINT16_MAX;
	static int8_t x902 = 3;
	static uint8_t x903 = 108U;
	int64_t x904 = -109983216956300LL;
	volatile int64_t t194 = -1LL;

    t194 = ((x901>(x902+x903))+x904);

    if (t194 != -109983216956299LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = INT16_MIN;
	int8_t x906 = INT8_MIN;
	static int16_t x907 = -1;
	volatile int64_t x908 = INT64_MAX;

    t195 = ((x905>(x906+x907))+x908);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x910 = 1;
	int32_t x911 = INT32_MIN;
	volatile uint32_t x912 = UINT32_MAX;
	volatile uint32_t t196 = UINT32_MAX;

    t196 = ((x909>(x910+x911))+x912);

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x914 = -16;
	int16_t x915 = INT16_MIN;
	uint32_t x916 = UINT32_MAX;
	volatile uint32_t t197 = 476847142U;

    t197 = ((x913>(x914+x915))+x916);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x917 = -31;
	int32_t x918 = 0;
	int16_t x919 = -1;
	int32_t x920 = -1;
	volatile int32_t t198 = 1;

    t198 = ((x917>(x918+x919))+x920);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x922 = -1;
	int32_t x923 = -3191392;
	uint32_t x924 = UINT32_MAX;
	uint32_t t199 = 2183U;

    t199 = ((x921>(x922+x923))+x924);

    if (t199 != 0U) { NG(); } else { ; }
	
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

