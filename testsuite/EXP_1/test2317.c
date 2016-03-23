
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

volatile int8_t x1 = -1;
int8_t x2 = -2;
int16_t x6 = 7;
uint16_t x7 = UINT16_MAX;
int8_t x10 = 1;
int8_t x12 = 5;
int32_t x14 = -1;
int16_t x18 = INT16_MAX;
uint8_t x26 = 25U;
int32_t t8 = -3088661;
uint8_t x46 = 4U;
static int64_t x48 = INT64_MAX;
volatile int32_t t11 = 3385;
uint16_t x50 = 1U;
int16_t x55 = INT16_MAX;
int32_t x58 = -1;
static int64_t x61 = -15249135685LL;
static uint64_t x63 = 565355LLU;
volatile int32_t t15 = -86395608;
volatile int64_t x69 = INT64_MIN;
uint64_t x78 = 4332762369LLU;
volatile int32_t t20 = 19;
int64_t x89 = INT64_MIN;
static int16_t x90 = -1;
int16_t x94 = -1;
uint16_t x96 = UINT16_MAX;
int16_t x103 = -522;
uint64_t x106 = UINT64_MAX;
int32_t x114 = INT32_MIN;
int32_t x116 = -279899031;
static volatile int32_t t28 = -111;
volatile int32_t x119 = INT32_MIN;
volatile int32_t x120 = -1;
static int16_t x122 = 1887;
uint16_t x126 = UINT16_MAX;
int32_t x133 = 1106227;
static uint8_t x136 = 0U;
uint8_t x137 = UINT8_MAX;
static int32_t t34 = -209738;
volatile uint32_t x142 = 1522632U;
volatile int32_t x143 = INT32_MIN;
volatile int64_t x147 = INT64_MIN;
int64_t x148 = INT64_MIN;
int32_t t36 = 205797;
volatile uint64_t x153 = 54169LLU;
static uint32_t x155 = 337890628U;
static int64_t x165 = -111024371LL;
static uint8_t x168 = UINT8_MAX;
int8_t x173 = INT8_MIN;
int16_t x178 = INT16_MIN;
int32_t x180 = -1;
int32_t x188 = INT32_MIN;
uint16_t x197 = UINT16_MAX;
volatile int32_t t49 = -45759;
volatile uint64_t x203 = UINT64_MAX;
volatile int32_t t53 = 29928;
uint64_t x220 = UINT64_MAX;
int32_t x221 = 2;
volatile int16_t x222 = INT16_MIN;
int32_t t55 = -35085;
uint8_t x228 = 3U;
volatile int32_t t56 = 0;
uint64_t x232 = UINT64_MAX;
uint64_t x235 = UINT64_MAX;
int8_t x236 = INT8_MIN;
volatile int64_t x237 = INT64_MIN;
int8_t x241 = 1;
volatile int8_t x244 = 13;
int32_t t60 = -1;
int32_t x251 = INT32_MIN;
volatile uint8_t x253 = UINT8_MAX;
uint16_t x259 = UINT16_MAX;
int64_t x260 = INT64_MIN;
static int32_t t65 = -12921;
int16_t x268 = INT16_MIN;
int32_t x269 = INT32_MAX;
int64_t x283 = -492239564962127LL;
volatile int32_t t70 = 760;
int32_t x286 = INT32_MIN;
uint32_t x287 = UINT32_MAX;
static volatile int64_t x288 = INT64_MIN;
volatile uint16_t x291 = UINT16_MAX;
static uint64_t x293 = UINT64_MAX;
volatile int32_t x297 = INT32_MAX;
uint32_t x298 = 18350260U;
uint16_t x299 = 773U;
volatile int32_t x300 = INT32_MAX;
static volatile int32_t t75 = -13;
uint64_t x309 = UINT64_MAX;
volatile int16_t x312 = INT16_MAX;
static uint32_t x320 = 293U;
uint16_t x326 = UINT16_MAX;
uint16_t x335 = UINT16_MAX;
int32_t t86 = -60649585;
uint16_t x353 = 1728U;
volatile int32_t t88 = 185208760;
int32_t t91 = -3237;
int8_t x371 = INT8_MIN;
int32_t x377 = 963887;
int8_t x383 = -12;
uint32_t x389 = 2831U;
static uint32_t x390 = 705780460U;
static volatile int8_t x395 = -1;
static int16_t x400 = INT16_MIN;
static int32_t x401 = -124;
int64_t x402 = -52610744613041LL;
int8_t x406 = -1;
volatile int32_t t102 = -16;
volatile uint64_t x415 = 223920239328472943LLU;
int8_t x416 = -7;
static volatile int32_t t104 = 2982;
int32_t x422 = INT32_MIN;
int32_t x425 = -1;
static uint16_t x438 = UINT16_MAX;
static volatile uint8_t x442 = 0U;
volatile int16_t x448 = -3554;
volatile int64_t x450 = INT64_MAX;
uint16_t x451 = 0U;
volatile int32_t t112 = 1;
volatile int8_t x468 = -1;
uint16_t x472 = 8U;
volatile uint8_t x478 = 11U;
int64_t x485 = 1424LL;
int32_t x486 = INT32_MAX;
uint32_t x487 = 594198751U;
volatile int8_t x490 = INT8_MAX;
volatile int8_t x494 = INT8_MIN;
uint16_t x499 = 57U;
int32_t x501 = -2744845;
int8_t x504 = INT8_MIN;
int16_t x508 = 6;
int32_t t127 = 1228;
uint16_t x518 = UINT16_MAX;
static uint64_t x530 = 103119975087LLU;
static uint16_t x540 = UINT16_MAX;
int32_t t135 = -1946998;
int8_t x545 = -1;
int64_t x547 = INT64_MAX;
int32_t t139 = -81;
static int32_t x561 = INT32_MIN;
int8_t x562 = -1;
volatile int32_t t140 = 996;
int16_t x572 = -1;
volatile int32_t t143 = 61255702;
int16_t x581 = -413;
static int32_t t148 = -2084921;
uint64_t x603 = 1515264397821LLU;
int64_t x611 = -295980585812LL;
int8_t x612 = INT8_MIN;
volatile int32_t t152 = -108;
int16_t x614 = -25;
int8_t x618 = -1;
static volatile int32_t t155 = -8;
uint8_t x637 = UINT8_MAX;
int32_t x641 = INT32_MAX;
volatile int64_t x643 = INT64_MIN;
uint16_t x645 = UINT16_MAX;
uint32_t x650 = 28U;
volatile int32_t t162 = -114727;
volatile int32_t t164 = -532003273;
static int64_t x661 = INT64_MIN;
static int32_t x662 = INT32_MIN;
int64_t x663 = -1LL;
volatile int32_t t166 = 1281869;
int16_t x671 = INT16_MIN;
int8_t x680 = INT8_MIN;
static int64_t x681 = INT64_MAX;
int16_t x695 = -1;
int16_t x702 = 1;
static int8_t x707 = INT8_MIN;
uint8_t x715 = 67U;
uint8_t x718 = 62U;
uint8_t x722 = UINT8_MAX;
int64_t x724 = -1LL;
int8_t x725 = -1;
volatile int64_t x731 = -1LL;
int16_t x738 = 576;
static volatile int32_t t184 = 100150;
int32_t x741 = -1;
int8_t x747 = INT8_MIN;
int8_t x748 = INT8_MIN;
int32_t x750 = 6;
uint8_t x751 = 28U;
static volatile int32_t t187 = 362;
uint8_t x755 = 0U;
uint8_t x760 = 60U;
int8_t x768 = -1;
int8_t x774 = -43;
int16_t x776 = -1;
static uint32_t x789 = UINT32_MAX;
static volatile int8_t x791 = 2;
volatile int64_t x792 = -54274LL;
uint32_t x796 = 30137982U;


void f0(void) {
    	int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 44829;

    t0 = (((x1&x2)&x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -1LL;
	int32_t x8 = -12;
	volatile int32_t t1 = -257897661;

    t1 = (((x5&x6)&x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -1;
	uint16_t x11 = 258U;
	static int32_t t2 = 42;

    t2 = (((x9&x10)&x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int32_t x15 = INT32_MIN;
	static int64_t x16 = -6874686038LL;
	int32_t t3 = -2947043;

    t3 = (((x13&x14)&x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -63;
	int64_t x19 = INT64_MAX;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -26893113;

    t4 = (((x17&x18)&x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 75U;
	int8_t x22 = -26;
	int32_t x23 = 650471330;
	uint8_t x24 = 0U;
	int32_t t5 = 2530074;

    t5 = (((x21&x22)&x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	volatile int32_t t6 = 1;

    t6 = (((x25&x26)&x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 13158U;
	volatile int8_t x30 = INT8_MIN;
	volatile uint64_t x31 = 641LLU;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = -1030828426;

    t7 = (((x29&x30)&x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	static int16_t x34 = -1;
	uint8_t x35 = 103U;
	int8_t x36 = 1;

    t8 = (((x33&x34)&x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MAX;
	int16_t x38 = -553;
	static volatile int32_t x39 = INT32_MAX;
	int8_t x40 = -1;
	volatile int32_t t9 = -5;

    t9 = (((x37&x38)&x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 28U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -117;

    t10 = (((x41&x42)&x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -15;
	static uint64_t x47 = 2540101210457200365LLU;

    t11 = (((x45&x46)&x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 2856179404LL;
	int64_t x51 = -1LL;
	int32_t x52 = -1;
	int32_t t12 = 1;

    t12 = (((x49&x50)&x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 123U;
	static uint32_t x54 = 22U;
	int8_t x56 = -1;
	static volatile int32_t t13 = 2507;

    t13 = (((x53&x54)&x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 3LLU;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 0;
	static int32_t t14 = 194483;

    t14 = (((x57&x58)&x59)!=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x62 = 1062U;
	int16_t x64 = INT16_MIN;

    t15 = (((x61&x62)&x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	volatile uint32_t x66 = 75234U;
	int64_t x67 = -1LL;
	static volatile int32_t x68 = -1;
	int32_t t16 = -27135;

    t16 = (((x65&x66)&x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x70 = INT32_MAX;
	static uint64_t x71 = 30LLU;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -174036;

    t17 = (((x69&x70)&x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -1LL;
	static uint64_t x76 = 94LLU;
	volatile int32_t t18 = -27671;

    t18 = (((x73&x74)&x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 82471932401LLU;
	uint16_t x79 = 7880U;
	int32_t x80 = INT32_MAX;
	volatile int32_t t19 = -4669;

    t19 = (((x77&x78)&x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 21U;
	static uint32_t x82 = 6U;
	uint32_t x83 = 34424U;
	int16_t x84 = INT16_MAX;

    t20 = (((x81&x82)&x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	volatile int8_t x87 = INT8_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 2868;

    t21 = (((x85&x86)&x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x91 = -1;
	static int16_t x92 = -18;
	int32_t t22 = 732768;

    t22 = (((x89&x90)&x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 102U;
	int16_t x95 = 2;
	volatile int32_t t23 = 1;

    t23 = (((x93&x94)&x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	static uint64_t x98 = 322697493443008947LLU;
	int32_t x99 = -8;
	int64_t x100 = 2LL;
	volatile int32_t t24 = -6;

    t24 = (((x97&x98)&x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 0;
	volatile int16_t x102 = INT16_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t25 = 45884013;

    t25 = (((x101&x102)&x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	int32_t x107 = INT32_MAX;
	static int16_t x108 = -34;
	volatile int32_t t26 = -12;

    t26 = (((x105&x106)&x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -125;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	volatile uint32_t x112 = UINT32_MAX;
	static volatile int32_t t27 = -7798;

    t27 = (((x109&x110)&x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x113 = 8257U;
	int16_t x115 = 323;

    t28 = (((x113&x114)&x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 42055677LLU;
	int64_t x118 = INT64_MAX;
	int32_t t29 = 9717;

    t29 = (((x117&x118)&x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 55U;
	int16_t x123 = -1;
	int8_t x124 = -13;
	int32_t t30 = -3;

    t30 = (((x121&x122)&x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -179823LL;
	int8_t x127 = -1;
	uint16_t x128 = 10303U;
	volatile int32_t t31 = -2402;

    t31 = (((x125&x126)&x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 353668086;
	static int16_t x130 = 4704;
	uint64_t x131 = 2114718LLU;
	static volatile uint32_t x132 = 567298257U;
	static int32_t t32 = -38910259;

    t32 = (((x129&x130)&x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x134 = 3;
	int32_t x135 = INT32_MIN;
	int32_t t33 = 717;

    t33 = (((x133&x134)&x135)!=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = UINT8_MAX;
	volatile int32_t x139 = INT32_MIN;
	static volatile int8_t x140 = INT8_MAX;

    t34 = (((x137&x138)&x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = 5064716;
	uint32_t x144 = 402U;
	static int32_t t35 = 20;

    t35 = (((x141&x142)&x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 6924U;
	volatile int16_t x146 = -1;

    t36 = (((x145&x146)&x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static uint64_t x150 = UINT64_MAX;
	int16_t x151 = 0;
	int64_t x152 = INT64_MIN;
	static int32_t t37 = -73;

    t37 = (((x149&x150)&x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x154 = 190484493LLU;
	int16_t x156 = -1;
	int32_t t38 = -8551018;

    t38 = (((x153&x154)&x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = 352689702U;
	volatile int16_t x158 = 0;
	int16_t x159 = INT16_MAX;
	uint64_t x160 = 0LLU;
	int32_t t39 = -490;

    t39 = (((x157&x158)&x159)!=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 65272659LLU;
	int16_t x162 = -1;
	int32_t x163 = 711344169;
	int16_t x164 = 48;
	int32_t t40 = 676;

    t40 = (((x161&x162)&x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int32_t t41 = -97189880;

    t41 = (((x165&x166)&x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 252;
	int32_t x170 = -1;
	int32_t x171 = -1;
	volatile int32_t x172 = -1;
	volatile int32_t t42 = 0;

    t42 = (((x169&x170)&x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = 10185272LL;
	int32_t t43 = 85200;

    t43 = (((x173&x174)&x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -370113277505LL;
	uint16_t x179 = 47U;
	int32_t t44 = 21;

    t44 = (((x177&x178)&x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = -1;
	int32_t x182 = 56;
	int32_t x183 = INT32_MIN;
	int8_t x184 = 2;
	volatile int32_t t45 = 0;

    t45 = (((x181&x182)&x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	static uint16_t x186 = 0U;
	static uint8_t x187 = 98U;
	volatile int32_t t46 = -9697;

    t46 = (((x185&x186)&x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	static uint8_t x190 = UINT8_MAX;
	volatile int8_t x191 = 27;
	int16_t x192 = -6;
	static int32_t t47 = -228;

    t47 = (((x189&x190)&x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = 1;
	int8_t x194 = 8;
	int32_t x195 = 137;
	uint32_t x196 = 16985446U;
	int32_t t48 = 369;

    t48 = (((x193&x194)&x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x198 = -1;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;

    t49 = (((x197&x198)&x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 6853578609873587LL;
	int32_t x202 = 72421;
	static uint16_t x204 = UINT16_MAX;
	int32_t t50 = -4228;

    t50 = (((x201&x202)&x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 9063U;
	uint64_t x206 = 1955LLU;
	int32_t x207 = -1;
	int8_t x208 = -1;
	volatile int32_t t51 = -192;

    t51 = (((x205&x206)&x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -126427;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 25544844;

    t52 = (((x209&x210)&x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 1658281142175529LL;
	int16_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	volatile int64_t x216 = 449756LL;

    t53 = (((x213&x214)&x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 182U;
	int64_t x218 = INT64_MIN;
	volatile uint64_t x219 = UINT64_MAX;
	volatile int32_t t54 = -1501850;

    t54 = (((x217&x218)&x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = INT32_MIN;
	int64_t x224 = 2112933768LL;

    t55 = (((x221&x222)&x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MAX;
	int16_t x226 = -124;
	int32_t x227 = 7;

    t56 = (((x225&x226)&x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 1004630U;
	int16_t x230 = 2;
	int16_t x231 = 3979;
	int32_t t57 = -466;

    t57 = (((x229&x230)&x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -1;
	uint8_t x234 = 127U;
	static volatile int32_t t58 = -407349292;

    t58 = (((x233&x234)&x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MAX;
	static volatile uint8_t x239 = UINT8_MAX;
	static volatile int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 2277673;

    t59 = (((x237&x238)&x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x242 = 13;
	int16_t x243 = -9;

    t60 = (((x241&x242)&x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	volatile int32_t x246 = 291192;
	volatile int8_t x247 = -1;
	uint64_t x248 = 29LLU;
	volatile int32_t t61 = 12469;

    t61 = (((x245&x246)&x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 264897;
	int16_t x250 = 591;
	int64_t x252 = 2991591997748889LL;
	int32_t t62 = -35242;

    t62 = (((x249&x250)&x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = INT64_MAX;
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = -259823LL;
	static int32_t t63 = 1;

    t63 = (((x253&x254)&x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 50U;
	uint64_t x258 = 32447LLU;
	int32_t t64 = -19119733;

    t64 = (((x257&x258)&x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 33LLU;
	int16_t x262 = -361;
	int16_t x263 = INT16_MAX;
	static volatile int16_t x264 = INT16_MIN;

    t65 = (((x261&x262)&x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -513492LL;
	volatile int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MIN;
	volatile int32_t t66 = -96851;

    t66 = (((x265&x266)&x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x270 = -27;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = -1;
	int32_t t67 = 712145801;

    t67 = (((x269&x270)&x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	int32_t x276 = -1;
	static volatile int32_t t68 = 327008;

    t68 = (((x273&x274)&x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1826;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -13344;
	uint8_t x280 = 6U;
	volatile int32_t t69 = -1308143;

    t69 = (((x277&x278)&x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 28;
	int16_t x282 = -1;
	volatile uint16_t x284 = UINT16_MAX;

    t70 = (((x281&x282)&x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int32_t t71 = 7065701;

    t71 = (((x285&x286)&x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	volatile int16_t x290 = INT16_MIN;
	int8_t x292 = INT8_MAX;
	int32_t t72 = -13361;

    t72 = (((x289&x290)&x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 11158U;
	static int8_t x296 = -24;
	static int32_t t73 = 335;

    t73 = (((x293&x294)&x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t t74 = -41;

    t74 = (((x297&x298)&x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = UINT8_MAX;
	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	volatile uint8_t x304 = 48U;

    t75 = (((x301&x302)&x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x306 = -17647LL;
	int32_t x307 = 0;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = 3126;

    t76 = (((x305&x306)&x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x310 = 3903941016715015LL;
	static int8_t x311 = -1;
	int32_t t77 = 1;

    t77 = (((x309&x310)&x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = 0;
	volatile int32_t x316 = INT32_MIN;
	int32_t t78 = -2720399;

    t78 = (((x313&x314)&x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x317 = INT32_MIN;
	int64_t x318 = -205574LL;
	int8_t x319 = -1;
	volatile int32_t t79 = 511352747;

    t79 = (((x317&x318)&x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = 48U;
	uint64_t x322 = 10328160296108759LLU;
	uint8_t x323 = 22U;
	static uint64_t x324 = 327156571LLU;
	volatile int32_t t80 = 402705342;

    t80 = (((x321&x322)&x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = UINT32_MAX;
	volatile int16_t x327 = 483;
	volatile int16_t x328 = INT16_MAX;
	int32_t t81 = -1083;

    t81 = (((x325&x326)&x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MIN;
	static int8_t x330 = 1;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = -1829058334199705LL;
	int32_t t82 = 105090;

    t82 = (((x329&x330)&x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -3539050034498618LL;
	uint16_t x334 = 1U;
	uint8_t x336 = UINT8_MAX;
	static int32_t t83 = 856840;

    t83 = (((x333&x334)&x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int32_t x338 = -1;
	volatile int8_t x339 = 34;
	uint16_t x340 = 1U;
	int32_t t84 = 5;

    t84 = (((x337&x338)&x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -13;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = -1;
	volatile uint32_t x344 = 207U;
	volatile int32_t t85 = -3255;

    t85 = (((x341&x342)&x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	uint64_t x346 = 37514LLU;
	int16_t x347 = INT16_MIN;
	static int32_t x348 = -3347;

    t86 = (((x345&x346)&x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x349 = 7;
	int8_t x350 = -41;
	int16_t x351 = 14;
	static volatile int64_t x352 = INT64_MAX;
	volatile int32_t t87 = 157;

    t87 = (((x349&x350)&x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	volatile int8_t x356 = -1;

    t88 = (((x353&x354)&x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	uint32_t x358 = 19U;
	int64_t x359 = 4116170440663LL;
	int16_t x360 = INT16_MAX;
	int32_t t89 = 1;

    t89 = (((x357&x358)&x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = UINT64_MAX;
	static int8_t x362 = -1;
	int32_t x363 = -1;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 11;

    t90 = (((x361&x362)&x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -4159569684505132LL;
	static int8_t x366 = -1;
	volatile int16_t x367 = INT16_MIN;
	int32_t x368 = -1;

    t91 = (((x365&x366)&x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	volatile uint64_t x372 = 33107329LLU;
	int32_t t92 = -6292157;

    t92 = (((x369&x370)&x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 70U;
	int64_t x374 = INT64_MAX;
	uint8_t x375 = 0U;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = -210882662;

    t93 = (((x373&x374)&x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x378 = UINT64_MAX;
	volatile uint16_t x379 = 1517U;
	static uint32_t x380 = 835978U;
	int32_t t94 = -16;

    t94 = (((x377&x378)&x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = UINT32_MAX;
	volatile int16_t x382 = -1;
	static int16_t x384 = INT16_MIN;
	int32_t t95 = 74479618;

    t95 = (((x381&x382)&x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 5U;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 2833;
	int64_t x388 = INT64_MAX;
	static int32_t t96 = 2012;

    t96 = (((x385&x386)&x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -6;
	int32_t t97 = 2961;

    t97 = (((x389&x390)&x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x394 = INT32_MIN;
	int16_t x396 = 1;
	volatile int32_t t98 = -1;

    t98 = (((x393&x394)&x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MAX;
	int16_t x399 = -206;
	volatile int32_t t99 = 153300951;

    t99 = (((x397&x398)&x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x403 = 1;
	volatile uint64_t x404 = UINT64_MAX;
	static volatile int32_t t100 = 0;

    t100 = (((x401&x402)&x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	int8_t x407 = -1;
	volatile uint32_t x408 = UINT32_MAX;
	volatile int32_t t101 = -1;

    t101 = (((x405&x406)&x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = 0;
	volatile int64_t x410 = -6586079LL;
	int32_t x411 = -22858447;
	static int32_t x412 = INT32_MAX;

    t102 = (((x409&x410)&x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	volatile int8_t x414 = 0;
	int32_t t103 = -5590;

    t103 = (((x413&x414)&x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -2901;
	int16_t x418 = INT16_MAX;
	volatile int8_t x419 = 17;
	uint32_t x420 = 16U;

    t104 = (((x417&x418)&x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -11;
	volatile int8_t x423 = -10;
	uint64_t x424 = 854394LLU;
	volatile int32_t t105 = -1428;

    t105 = (((x421&x422)&x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x426 = -1;
	volatile uint8_t x427 = UINT8_MAX;
	int8_t x428 = -1;
	volatile int32_t t106 = -4106868;

    t106 = (((x425&x426)&x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = 42LLU;
	int64_t x430 = 3416546LL;
	int16_t x431 = 12469;
	static volatile int64_t x432 = -88828269557LL;
	int32_t t107 = -69;

    t107 = (((x429&x430)&x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = UINT8_MAX;
	static int32_t x434 = 5;
	uint32_t x435 = UINT32_MAX;
	volatile uint16_t x436 = 12582U;
	volatile int32_t t108 = 388801;

    t108 = (((x433&x434)&x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint64_t x439 = UINT64_MAX;
	static uint16_t x440 = UINT16_MAX;
	int32_t t109 = 1;

    t109 = (((x437&x438)&x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = INT32_MIN;
	int32_t x443 = INT32_MIN;
	static uint32_t x444 = 1012U;
	int32_t t110 = 242435;

    t110 = (((x441&x442)&x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -7034419847316838LL;
	uint16_t x446 = 103U;
	int64_t x447 = -157963480LL;
	static int32_t t111 = -337723563;

    t111 = (((x445&x446)&x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x449 = -1;
	int16_t x452 = INT16_MIN;

    t112 = (((x449&x450)&x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x453 = INT32_MAX;
	int32_t x454 = 3769;
	int16_t x455 = -1;
	int16_t x456 = -1;
	volatile int32_t t113 = 0;

    t113 = (((x453&x454)&x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 14U;
	int32_t x458 = INT32_MIN;
	static volatile int8_t x459 = INT8_MAX;
	int64_t x460 = -2LL;
	int32_t t114 = 59;

    t114 = (((x457&x458)&x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MIN;
	static int32_t x462 = INT32_MIN;
	int32_t x463 = -1;
	int32_t x464 = -1;
	int32_t t115 = -827596793;

    t115 = (((x461&x462)&x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -736105;
	int64_t x466 = 17347038701778023LL;
	volatile int8_t x467 = 0;
	static int32_t t116 = -30162302;

    t116 = (((x465&x466)&x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 36355918556LLU;
	int64_t x470 = INT64_MIN;
	static int8_t x471 = INT8_MIN;
	volatile int32_t t117 = -9437585;

    t117 = (((x469&x470)&x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	uint16_t x474 = 24U;
	uint64_t x475 = 2810116406802955LLU;
	int32_t x476 = -1;
	volatile int32_t t118 = 21970;

    t118 = (((x473&x474)&x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x477 = 113196074U;
	volatile int64_t x479 = 531595823906081551LL;
	int8_t x480 = INT8_MIN;
	int32_t t119 = -115490;

    t119 = (((x477&x478)&x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = -1;
	uint32_t x483 = 2324U;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t120 = 203;

    t120 = (((x481&x482)&x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x488 = -10350;
	int32_t t121 = -361167773;

    t121 = (((x485&x486)&x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	uint64_t x491 = 11421LLU;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = 4189;

    t122 = (((x489&x490)&x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x493 = 34U;
	uint8_t x495 = 25U;
	volatile int8_t x496 = INT8_MIN;
	static volatile int32_t t123 = 59369041;

    t123 = (((x493&x494)&x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	int32_t x498 = -202078924;
	int16_t x500 = INT16_MIN;
	int32_t t124 = -12;

    t124 = (((x497&x498)&x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x502 = 1;
	volatile int64_t x503 = INT64_MIN;
	int32_t t125 = -10145030;

    t125 = (((x501&x502)&x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	int8_t x506 = -26;
	int8_t x507 = INT8_MIN;
	volatile int32_t t126 = -1346750;

    t126 = (((x505&x506)&x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -10;
	static int32_t x510 = -1;
	uint32_t x511 = 4U;
	uint32_t x512 = 381460U;

    t127 = (((x509&x510)&x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	volatile int64_t x514 = INT64_MIN;
	int32_t x515 = -279181;
	int32_t x516 = INT32_MIN;
	volatile int32_t t128 = -26;

    t128 = (((x513&x514)&x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 28488480;
	uint8_t x519 = 103U;
	int64_t x520 = -1014572087514911LL;
	int32_t t129 = 1;

    t129 = (((x517&x518)&x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 13U;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MIN;
	volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t130 = -2586;

    t130 = (((x521&x522)&x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = INT64_MAX;
	int32_t x526 = -323401377;
	uint64_t x527 = 543568207613020936LLU;
	uint16_t x528 = 7U;
	static volatile int32_t t131 = 1;

    t131 = (((x525&x526)&x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 138350U;
	int64_t x531 = 2174335974945LL;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t132 = 166;

    t132 = (((x529&x530)&x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -685609;
	int16_t x534 = INT16_MAX;
	int32_t x535 = INT32_MIN;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t133 = -228;

    t133 = (((x533&x534)&x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 8U;
	uint32_t x538 = UINT32_MAX;
	int8_t x539 = -1;
	int32_t t134 = 15463969;

    t134 = (((x537&x538)&x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	static uint16_t x542 = 44U;
	static volatile uint16_t x543 = UINT16_MAX;
	int8_t x544 = -1;

    t135 = (((x541&x542)&x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x546 = INT64_MIN;
	int8_t x548 = -5;
	volatile int32_t t136 = 8;

    t136 = (((x545&x546)&x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	int16_t x550 = INT16_MIN;
	uint16_t x551 = 4U;
	static int32_t x552 = 0;
	int32_t t137 = -173;

    t137 = (((x549&x550)&x551)!=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	int32_t x554 = -1285;
	uint8_t x555 = 0U;
	volatile int8_t x556 = -15;
	static int32_t t138 = -8;

    t138 = (((x553&x554)&x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MAX;
	int64_t x558 = -1LL;
	int16_t x559 = -1;
	int16_t x560 = 1221;

    t139 = (((x557&x558)&x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x563 = INT16_MIN;
	volatile int32_t x564 = INT32_MIN;

    t140 = (((x561&x562)&x563)!=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	volatile int64_t x566 = INT64_MIN;
	int32_t x567 = INT32_MIN;
	static int8_t x568 = INT8_MIN;
	int32_t t141 = -20203156;

    t141 = (((x565&x566)&x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x569 = 8U;
	volatile uint32_t x570 = UINT32_MAX;
	int32_t x571 = INT32_MIN;
	volatile int32_t t142 = -20877;

    t142 = (((x569&x570)&x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 316U;
	uint64_t x574 = UINT64_MAX;
	int8_t x575 = -1;
	static uint64_t x576 = 499169770849798043LLU;

    t143 = (((x573&x574)&x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MIN;
	static volatile int8_t x578 = INT8_MIN;
	int64_t x579 = -1904023812354433LL;
	int16_t x580 = -1;
	volatile int32_t t144 = 602;

    t144 = (((x577&x578)&x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x582 = 0U;
	int8_t x583 = INT8_MAX;
	int16_t x584 = -1;
	int32_t t145 = 2;

    t145 = (((x581&x582)&x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = 4LLU;
	volatile int16_t x586 = INT16_MIN;
	static uint16_t x587 = 423U;
	int64_t x588 = INT64_MIN;
	int32_t t146 = -5474;

    t146 = (((x585&x586)&x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	static int32_t x590 = -1;
	static uint16_t x591 = 8U;
	int32_t x592 = -671496355;
	int32_t t147 = 40;

    t147 = (((x589&x590)&x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 6735801554LLU;
	uint32_t x594 = 14U;
	static int64_t x595 = INT64_MIN;
	int8_t x596 = INT8_MIN;

    t148 = (((x593&x594)&x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 8U;
	volatile int64_t x598 = INT64_MIN;
	static uint64_t x599 = UINT64_MAX;
	int8_t x600 = INT8_MIN;
	int32_t t149 = -61;

    t149 = (((x597&x598)&x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x601 = 123U;
	uint64_t x602 = UINT64_MAX;
	volatile int16_t x604 = 562;
	int32_t t150 = 2362896;

    t150 = (((x601&x602)&x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 1413625630918700LLU;
	int8_t x606 = -1;
	int16_t x607 = INT16_MAX;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = -366;

    t151 = (((x605&x606)&x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 0;
	int32_t x610 = INT32_MIN;

    t152 = (((x609&x610)&x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint8_t x615 = UINT8_MAX;
	static int64_t x616 = INT64_MIN;
	int32_t t153 = -90;

    t153 = (((x613&x614)&x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	int8_t x619 = INT8_MAX;
	static int64_t x620 = -1LL;
	volatile int32_t t154 = 1;

    t154 = (((x617&x618)&x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = 929;
	uint32_t x622 = 637199U;
	static volatile int64_t x623 = 41900741463898LL;
	uint64_t x624 = 69LLU;

    t155 = (((x621&x622)&x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -6;
	uint64_t x626 = 8180419902LLU;
	int64_t x627 = -229312482505LL;
	uint32_t x628 = 2U;
	static volatile int32_t t156 = 54;

    t156 = (((x625&x626)&x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -25840670LL;
	static uint32_t x630 = 3768358U;
	int32_t x631 = INT32_MAX;
	uint64_t x632 = 280323665028093LLU;
	volatile int32_t t157 = -176008924;

    t157 = (((x629&x630)&x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -429;
	uint8_t x634 = UINT8_MAX;
	uint64_t x635 = 1054092035813325779LLU;
	static uint8_t x636 = 0U;
	int32_t t158 = -60070077;

    t158 = (((x633&x634)&x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = -3830785016873LL;
	int32_t x639 = -22;
	uint16_t x640 = 3U;
	volatile int32_t t159 = 26;

    t159 = (((x637&x638)&x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x642 = -1;
	uint64_t x644 = UINT64_MAX;
	volatile int32_t t160 = 2325;

    t160 = (((x641&x642)&x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = INT32_MAX;
	uint64_t x647 = UINT64_MAX;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 32200;

    t161 = (((x645&x646)&x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MIN;
	int16_t x651 = -1;
	int64_t x652 = 2754707064LL;

    t162 = (((x649&x650)&x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 30275U;
	int8_t x654 = 29;
	volatile uint64_t x655 = 62945953814432480LLU;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t163 = 7;

    t163 = (((x653&x654)&x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	uint16_t x658 = 116U;
	volatile uint8_t x659 = 0U;
	int8_t x660 = -22;

    t164 = (((x657&x658)&x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x664 = INT16_MAX;
	volatile int32_t t165 = 504;

    t165 = (((x661&x662)&x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	int32_t x666 = -8;
	int64_t x667 = -361LL;
	volatile int64_t x668 = -1LL;

    t166 = (((x665&x666)&x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = 2620;
	int64_t x670 = INT64_MIN;
	uint8_t x672 = 112U;
	volatile int32_t t167 = 1204308;

    t167 = (((x669&x670)&x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	int64_t x674 = INT64_MAX;
	volatile uint32_t x675 = UINT32_MAX;
	static uint64_t x676 = UINT64_MAX;
	int32_t t168 = 1701;

    t168 = (((x673&x674)&x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	int8_t x678 = -48;
	uint64_t x679 = UINT64_MAX;
	int32_t t169 = 3;

    t169 = (((x677&x678)&x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = -48071583;
	int16_t x683 = -74;
	int32_t x684 = INT32_MIN;
	int32_t t170 = 17907429;

    t170 = (((x681&x682)&x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 53LLU;
	uint16_t x686 = 575U;
	static volatile int16_t x687 = INT16_MIN;
	uint16_t x688 = 10685U;
	int32_t t171 = -35486273;

    t171 = (((x685&x686)&x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MAX;
	volatile int32_t x690 = 2278;
	uint16_t x691 = UINT16_MAX;
	volatile int64_t x692 = INT64_MIN;
	volatile int32_t t172 = 423;

    t172 = (((x689&x690)&x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	int64_t x694 = -76299LL;
	uint8_t x696 = UINT8_MAX;
	volatile int32_t t173 = 685134407;

    t173 = (((x693&x694)&x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	static volatile uint64_t x698 = 3868009LLU;
	int16_t x699 = -1;
	int64_t x700 = -1LL;
	volatile int32_t t174 = -8533;

    t174 = (((x697&x698)&x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 238;
	volatile int64_t x703 = INT64_MIN;
	static int16_t x704 = 2563;
	int32_t t175 = -365364;

    t175 = (((x701&x702)&x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 44U;
	uint64_t x706 = UINT64_MAX;
	volatile int64_t x708 = INT64_MAX;
	static volatile int32_t t176 = 1;

    t176 = (((x705&x706)&x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = 23;
	int16_t x710 = -1;
	int32_t x711 = 1427;
	int8_t x712 = INT8_MAX;
	volatile int32_t t177 = 14;

    t177 = (((x709&x710)&x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = INT64_MAX;
	uint16_t x714 = UINT16_MAX;
	int32_t x716 = INT32_MAX;
	int32_t t178 = -138084;

    t178 = (((x713&x714)&x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	int64_t x719 = 1895299777LL;
	static int64_t x720 = INT64_MAX;
	int32_t t179 = 1;

    t179 = (((x717&x718)&x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	static uint32_t x723 = 32208109U;
	static volatile int32_t t180 = 369;

    t180 = (((x721&x722)&x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x726 = UINT16_MAX;
	uint64_t x727 = UINT64_MAX;
	int32_t x728 = INT32_MIN;
	int32_t t181 = -771245;

    t181 = (((x725&x726)&x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = -1;
	int32_t x730 = -1;
	static int32_t x732 = 34324548;
	volatile int32_t t182 = -99267958;

    t182 = (((x729&x730)&x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile int32_t x734 = 2433;
	uint64_t x735 = UINT64_MAX;
	uint8_t x736 = 4U;
	int32_t t183 = -429;

    t183 = (((x733&x734)&x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 415U;
	uint16_t x739 = 6U;
	uint64_t x740 = 9LLU;

    t184 = (((x737&x738)&x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x742 = INT8_MIN;
	static int32_t x743 = -1;
	int64_t x744 = -1LL;
	volatile int32_t t185 = -1;

    t185 = (((x741&x742)&x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = -7;
	int16_t x746 = 3856;
	int32_t t186 = -1;

    t186 = (((x745&x746)&x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = INT64_MIN;
	int64_t x752 = -1LL;

    t187 = (((x749&x750)&x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 10U;
	static uint16_t x754 = 103U;
	static uint32_t x756 = 1U;
	volatile int32_t t188 = -442;

    t188 = (((x753&x754)&x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	volatile int32_t x758 = -1;
	int64_t x759 = -890901113865849LL;
	volatile int32_t t189 = 191087;

    t189 = (((x757&x758)&x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 30U;
	static uint32_t x762 = 17428U;
	volatile uint8_t x763 = UINT8_MAX;
	int16_t x764 = 3;
	static int32_t t190 = -3688046;

    t190 = (((x761&x762)&x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -1475772;
	int64_t x766 = 19082403LL;
	static int8_t x767 = INT8_MAX;
	volatile int32_t t191 = 6;

    t191 = (((x765&x766)&x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 4LLU;
	int16_t x770 = INT16_MIN;
	int16_t x771 = 3530;
	volatile uint16_t x772 = 12623U;
	volatile int32_t t192 = 1;

    t192 = (((x769&x770)&x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	int16_t x775 = -1;
	static int32_t t193 = -323;

    t193 = (((x773&x774)&x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	uint8_t x778 = 63U;
	int32_t x779 = -9;
	static int64_t x780 = 11595LL;
	int32_t t194 = -13;

    t194 = (((x777&x778)&x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = INT32_MAX;
	int32_t x782 = 5375;
	int8_t x783 = 0;
	int32_t x784 = INT32_MIN;
	static int32_t t195 = 550304380;

    t195 = (((x781&x782)&x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	uint64_t x786 = UINT64_MAX;
	uint8_t x787 = 80U;
	uint32_t x788 = 544U;
	volatile int32_t t196 = 75889;

    t196 = (((x785&x786)&x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x790 = 9U;
	volatile int32_t t197 = 32619527;

    t197 = (((x789&x790)&x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = 720;
	volatile int8_t x794 = 19;
	volatile int64_t x795 = -1LL;
	int32_t t198 = -485198956;

    t198 = (((x793&x794)&x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	int16_t x798 = INT16_MIN;
	uint32_t x799 = UINT32_MAX;
	volatile uint16_t x800 = 5U;
	static int32_t t199 = 87124416;

    t199 = (((x797&x798)&x799)!=x800);

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

