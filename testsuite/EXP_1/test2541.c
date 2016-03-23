
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

uint16_t x4 = UINT16_MAX;
int32_t x6 = INT32_MIN;
int16_t x8 = -1647;
int64_t x13 = INT64_MAX;
uint32_t x17 = 40U;
static uint8_t x19 = 106U;
int32_t x23 = INT32_MAX;
int64_t x32 = -743414397171860LL;
uint32_t x34 = 40885277U;
volatile uint32_t x42 = UINT32_MAX;
volatile uint16_t x47 = 30U;
volatile int16_t x57 = -3878;
int16_t x68 = INT16_MAX;
uint16_t x71 = UINT16_MAX;
uint8_t x72 = 29U;
volatile int32_t t17 = -45;
volatile uint64_t x73 = 389194322070LLU;
uint16_t x79 = UINT16_MAX;
uint32_t x85 = UINT32_MAX;
int64_t x87 = 283127728816LL;
volatile int32_t t21 = -2596;
volatile uint16_t x89 = UINT16_MAX;
uint8_t x98 = UINT8_MAX;
volatile int64_t x100 = INT64_MIN;
int64_t x101 = -1LL;
uint16_t x102 = 9U;
int16_t x104 = INT16_MIN;
int32_t x106 = INT32_MIN;
volatile int16_t x109 = INT16_MIN;
int16_t x113 = INT16_MAX;
int16_t x115 = -3;
int16_t x118 = INT16_MIN;
static int64_t x121 = -1LL;
static volatile int32_t x126 = -1;
volatile int32_t t31 = 220015705;
static uint16_t x129 = 22U;
int32_t x130 = INT32_MIN;
volatile int16_t x131 = -1;
static int32_t t35 = -1;
uint64_t x147 = 13718LLU;
volatile uint64_t x148 = 410924903444219LLU;
uint32_t x157 = UINT32_MAX;
volatile int64_t x165 = -1LL;
int16_t x172 = 5064;
volatile int32_t t42 = 2;
int8_t x173 = INT8_MIN;
int8_t x180 = INT8_MIN;
static int32_t t45 = -3;
int16_t x190 = -1410;
static uint8_t x192 = UINT8_MAX;
volatile int32_t t47 = -4228;
static uint8_t x197 = 13U;
uint64_t x198 = 16190450094LLU;
uint8_t x204 = 15U;
uint32_t x209 = 1904484787U;
volatile int8_t x212 = 1;
int32_t t53 = -12699296;
uint16_t x221 = UINT16_MAX;
uint16_t x233 = 30008U;
uint32_t x235 = UINT32_MAX;
uint32_t x236 = 22445U;
int32_t t58 = 8134;
int8_t x237 = INT8_MIN;
uint8_t x240 = UINT8_MAX;
volatile uint8_t x241 = 4U;
int64_t x247 = -98952992725749LL;
volatile int32_t t63 = -535;
uint8_t x269 = 15U;
int32_t x270 = INT32_MIN;
uint32_t x272 = 12560U;
volatile int32_t t67 = -370166024;
uint8_t x273 = UINT8_MAX;
int16_t x274 = INT16_MIN;
int32_t x276 = 95362127;
int32_t t68 = 405295141;
volatile int32_t t69 = -1097469;
int8_t x281 = -1;
static int32_t x282 = -6;
int64_t x283 = INT64_MAX;
uint16_t x291 = 51U;
int16_t x304 = INT16_MAX;
int8_t x311 = INT8_MAX;
int8_t x321 = INT8_MIN;
int32_t x322 = INT32_MIN;
volatile int64_t x324 = -1839091752LL;
static volatile int32_t t80 = -67;
volatile int32_t x326 = -1;
uint16_t x327 = 8U;
int16_t x338 = -28;
int32_t t85 = 322127;
volatile uint32_t x347 = 7U;
int32_t x348 = 2721983;
volatile int64_t x349 = -130522176333414217LL;
int32_t t87 = 552842;
int32_t t88 = 3;
volatile int64_t x361 = -1LL;
int16_t x364 = -1;
int8_t x367 = 0;
uint64_t x372 = 30987368501LLU;
volatile int32_t t92 = -127;
uint64_t x376 = UINT64_MAX;
int8_t x378 = -1;
int32_t t94 = 20;
static uint64_t x385 = UINT64_MAX;
static int32_t t96 = 42;
int8_t x389 = INT8_MIN;
volatile int32_t t98 = 65754;
static int64_t x403 = -425289LL;
uint64_t x405 = UINT64_MAX;
int32_t t102 = 3144;
int64_t x419 = INT64_MIN;
uint8_t x421 = 1U;
static volatile int8_t x425 = -58;
int8_t x432 = INT8_MIN;
int32_t t107 = -15543;
int8_t x434 = INT8_MIN;
int32_t x439 = INT32_MIN;
int32_t x448 = INT32_MIN;
int32_t x452 = INT32_MIN;
static uint64_t x453 = 30LLU;
volatile int8_t x454 = INT8_MIN;
static int32_t x456 = -1;
int32_t x457 = 230607;
static int16_t x459 = -1;
int64_t x460 = INT64_MAX;
volatile int64_t x464 = 22380LL;
volatile int32_t t116 = -10461988;
static uint16_t x476 = 1014U;
volatile int64_t x477 = 168LL;
static int8_t x478 = -33;
static int32_t x480 = -43062;
int8_t x488 = 25;
int32_t x489 = -1;
int32_t t124 = 1584;
volatile int16_t x502 = -10;
static int64_t x513 = INT64_MIN;
volatile int8_t x514 = INT8_MIN;
int32_t t131 = -244565;
volatile int16_t x534 = INT16_MIN;
int32_t t133 = 7;
int32_t t134 = 88203114;
uint32_t x544 = 6433800U;
static volatile uint32_t x545 = UINT32_MAX;
uint8_t x546 = UINT8_MAX;
int32_t x550 = -104463;
static int8_t x551 = INT8_MAX;
uint8_t x552 = 3U;
volatile int16_t x557 = -1;
volatile int32_t t140 = -252590;
int32_t t141 = -1432;
int32_t x578 = INT32_MIN;
static int64_t x583 = 7110637284418748LL;
int8_t x586 = INT8_MIN;
int32_t t147 = 1027554911;
uint16_t x593 = 23U;
int8_t x599 = INT8_MIN;
volatile int16_t x603 = INT16_MIN;
volatile int16_t x610 = INT16_MIN;
volatile int32_t t154 = -44958249;
static uint8_t x623 = 29U;
uint16_t x625 = 344U;
static int64_t x626 = -1LL;
uint32_t x635 = 950182U;
static int32_t x637 = 0;
int8_t x640 = 42;
int8_t x644 = -1;
int64_t x647 = -1LL;
static int32_t t161 = 889839;
volatile int32_t t162 = 260354;
volatile int64_t x654 = 3595102855LL;
volatile int32_t x655 = INT32_MAX;
int32_t x658 = INT32_MIN;
static volatile int64_t x659 = 28900320695879189LL;
int32_t x662 = INT32_MIN;
uint64_t x663 = 2637LLU;
volatile int32_t t166 = 2311;
int8_t x679 = 43;
static uint32_t x680 = UINT32_MAX;
int32_t x682 = -1;
volatile int8_t x685 = -4;
int16_t x690 = INT16_MIN;
volatile int32_t t172 = -1890;
int16_t x693 = 7419;
int16_t x700 = -6;
int64_t x717 = -1LL;
int8_t x723 = INT8_MAX;
volatile int32_t t180 = 192;
int16_t x734 = -3;
static volatile int64_t x736 = INT64_MAX;
int32_t t183 = -2;
int16_t x738 = -1;
int16_t x741 = 2;
int8_t x747 = INT8_MIN;
static volatile uint64_t x754 = 25745838303LLU;
volatile int32_t t190 = 1906033;
uint64_t x770 = 92980371LLU;
int8_t x772 = -1;
int16_t x783 = 13934;
uint64_t x790 = UINT64_MAX;
static uint8_t x791 = UINT8_MAX;
int32_t t197 = -147;
static volatile int8_t x794 = INT8_MAX;
static int16_t x795 = INT16_MIN;
volatile int32_t t198 = -30;
volatile int32_t x799 = INT32_MIN;
volatile int32_t t199 = -103;


void f0(void) {
    	uint64_t x1 = 0LLU;
	uint64_t x2 = UINT64_MAX;
	volatile int32_t x3 = INT32_MIN;
	static int32_t t0 = -1;

    t0 = (((x1|x2)^x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 510399;
	int32_t x7 = -1;
	int32_t t1 = -1497967;

    t1 = (((x5|x6)^x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	int8_t x10 = -1;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 162;

    t2 = (((x9|x10)^x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = 202LL;
	uint32_t x15 = UINT32_MAX;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 73;

    t3 = (((x13|x14)^x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 341U;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 97540376;

    t4 = (((x17|x18)^x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 54;
	uint32_t x22 = 345U;
	static uint8_t x24 = 1U;
	static int32_t t5 = -118890;

    t5 = (((x21|x22)^x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	static int64_t x26 = 95648LL;
	uint64_t x27 = 3065205242047385LLU;
	static volatile int16_t x28 = -1;
	int32_t t6 = 4155910;

    t6 = (((x25|x26)^x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MAX;
	uint16_t x31 = UINT16_MAX;
	static volatile int32_t t7 = -751561137;

    t7 = (((x29|x30)^x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	static int64_t x36 = INT64_MIN;
	static int32_t t8 = 381;

    t8 = (((x33|x34)^x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = 41720;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = 3;
	volatile int32_t x40 = -643;
	int32_t t9 = 1588166;

    t9 = (((x37|x38)^x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	static int32_t x43 = 57;
	uint32_t x44 = 448504U;
	volatile int32_t t10 = -1;

    t10 = (((x41|x42)^x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint8_t x46 = 0U;
	volatile int8_t x48 = 15;
	int32_t t11 = 3;

    t11 = (((x45|x46)^x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 20U;
	int8_t x50 = INT8_MIN;
	static int32_t x51 = -1;
	volatile int32_t x52 = INT32_MIN;
	int32_t t12 = -225972680;

    t12 = (((x49|x50)^x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	volatile int16_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 574857799;

    t13 = (((x53|x54)^x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	uint64_t x59 = 161444059626LLU;
	volatile uint64_t x60 = 22503075712101664LLU;
	volatile int32_t t14 = -3;

    t14 = (((x57|x58)^x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	static int32_t x62 = 572;
	int32_t x63 = INT32_MIN;
	volatile uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = -1;

    t15 = (((x61|x62)^x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = UINT16_MAX;
	int32_t x66 = -1;
	int32_t x67 = 10;
	volatile int32_t t16 = 4516494;

    t16 = (((x65|x66)^x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -1LL;
	int16_t x70 = INT16_MIN;

    t17 = (((x69|x70)^x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	uint8_t x76 = 2U;
	volatile int32_t t18 = -131352988;

    t18 = (((x73|x74)^x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MAX;
	uint64_t x78 = 316975397943745025LLU;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 53;

    t19 = (((x77|x78)^x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MIN;
	static volatile uint8_t x84 = UINT8_MAX;
	int32_t t20 = 1;

    t20 = (((x81|x82)^x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = 0;
	static int8_t x88 = -1;

    t21 = (((x85|x86)^x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = UINT8_MAX;
	volatile int8_t x91 = INT8_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = 315703;

    t22 = (((x89|x90)^x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 326639748332073741LLU;
	int8_t x94 = -1;
	int8_t x95 = 0;
	static int64_t x96 = 10631538LL;
	int32_t t23 = -253828927;

    t23 = (((x93|x94)^x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 176LLU;
	uint64_t x99 = 15068LLU;
	static volatile int32_t t24 = -8685;

    t24 = (((x97|x98)^x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x103 = 29870761U;
	int32_t t25 = -86;

    t25 = (((x101|x102)^x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x107 = 1048475;
	static int64_t x108 = -1LL;
	static volatile int32_t t26 = -3454;

    t26 = (((x105|x106)^x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = UINT8_MAX;
	static int32_t x111 = 45214574;
	int8_t x112 = -1;
	static int32_t t27 = 4586870;

    t27 = (((x109|x110)^x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x114 = 1932LLU;
	int32_t x116 = -1;
	volatile int32_t t28 = -16;

    t28 = (((x113|x114)^x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 24824LLU;
	int8_t x119 = INT8_MAX;
	int32_t x120 = 6728798;
	volatile int32_t t29 = -84949;

    t29 = (((x117|x118)^x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x122 = 6565586730870LLU;
	static int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MAX;
	int32_t t30 = 2;

    t30 = (((x121|x122)^x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x125 = 398771277695LLU;
	static uint32_t x127 = 431U;
	int64_t x128 = INT64_MIN;

    t31 = (((x125|x126)^x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x132 = INT16_MIN;
	int32_t t32 = 164775215;

    t32 = (((x129|x130)^x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -1;
	uint32_t x134 = UINT32_MAX;
	uint16_t x135 = 3233U;
	uint32_t x136 = 40045U;
	volatile int32_t t33 = 65;

    t33 = (((x133|x134)^x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 16554;
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = 111473LL;
	int32_t x140 = 77518;
	volatile int32_t t34 = -40;

    t34 = (((x137|x138)^x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = UINT8_MAX;
	static volatile int8_t x142 = -41;
	uint64_t x143 = 142171LLU;
	int64_t x144 = 398430LL;

    t35 = (((x141|x142)^x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	int32_t x146 = -1;
	static int32_t t36 = -4664112;

    t36 = (((x145|x146)^x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = -5925194471554LL;
	static int64_t x150 = 10945903595261LL;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -472101048362LL;
	static volatile int32_t t37 = 476486;

    t37 = (((x149|x150)^x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x153 = 16346821;
	int16_t x154 = INT16_MIN;
	static volatile int32_t x155 = -18883455;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = 2;

    t38 = (((x153|x154)^x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x158 = UINT64_MAX;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 253;

    t39 = (((x157|x158)^x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = 0;
	static int32_t x164 = INT32_MIN;
	int32_t t40 = 3561;

    t40 = (((x161|x162)^x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	uint64_t x168 = 67LLU;
	int32_t t41 = -1834;

    t41 = (((x165|x166)^x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MAX;
	int16_t x170 = -15;
	static int64_t x171 = -29497LL;

    t42 = (((x169|x170)^x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = 1;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = -596813671;

    t43 = (((x173|x174)^x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	volatile uint8_t x178 = 44U;
	volatile int32_t x179 = INT32_MIN;
	volatile int32_t t44 = 721927087;

    t44 = (((x177|x178)^x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x181 = 574;
	int64_t x182 = 38824747LL;
	int32_t x183 = -1;
	uint64_t x184 = UINT64_MAX;

    t45 = (((x181|x182)^x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	static int32_t x186 = -1;
	static int64_t x187 = -451340394565LL;
	uint8_t x188 = 60U;
	int32_t t46 = -106;

    t46 = (((x185|x186)^x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	static volatile int64_t x191 = -13277LL;

    t47 = (((x189|x190)^x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = 3972;
	uint64_t x194 = 3311139592476017LLU;
	static int8_t x195 = INT8_MAX;
	static int64_t x196 = 37056031252576LL;
	int32_t t48 = 352829;

    t48 = (((x193|x194)^x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x199 = UINT8_MAX;
	volatile int64_t x200 = -1907120688LL;
	static volatile int32_t t49 = -7108;

    t49 = (((x197|x198)^x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = 234;
	static int16_t x202 = INT16_MAX;
	uint32_t x203 = 165808U;
	int32_t t50 = -189590;

    t50 = (((x201|x202)^x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MIN;
	int64_t x206 = 37505579995683LL;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MAX;
	int32_t t51 = 521;

    t51 = (((x205|x206)^x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = INT32_MAX;
	int32_t x211 = -10;
	int32_t t52 = 2633;

    t52 = (((x209|x210)^x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 21040459LLU;
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = -1;
	int32_t x216 = INT32_MIN;

    t53 = (((x213|x214)^x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = 0;
	uint16_t x218 = UINT16_MAX;
	static uint16_t x219 = 0U;
	static uint16_t x220 = UINT16_MAX;
	static volatile int32_t t54 = -1369;

    t54 = (((x217|x218)^x219)!=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x222 = 116U;
	int16_t x223 = -2;
	volatile int64_t x224 = -1LL;
	static int32_t t55 = 0;

    t55 = (((x221|x222)^x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	int64_t x227 = -14LL;
	volatile int32_t x228 = -379;
	static volatile int32_t t56 = 25;

    t56 = (((x225|x226)^x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 156950680U;
	volatile int16_t x231 = -1;
	static volatile uint16_t x232 = 2U;
	volatile int32_t t57 = 433061615;

    t57 = (((x229|x230)^x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MIN;

    t58 = (((x233|x234)^x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x238 = -1LL;
	static int8_t x239 = INT8_MAX;
	volatile int32_t t59 = -255477798;

    t59 = (((x237|x238)^x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = INT64_MAX;
	int32_t x243 = -1;
	static uint8_t x244 = UINT8_MAX;
	int32_t t60 = -2;

    t60 = (((x241|x242)^x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = 89019725745362LLU;
	volatile int32_t x246 = INT32_MIN;
	static int16_t x248 = 220;
	volatile int32_t t61 = -14979;

    t61 = (((x245|x246)^x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = UINT8_MAX;
	volatile uint8_t x250 = 0U;
	int64_t x251 = -1LL;
	int32_t x252 = -1;
	static int32_t t62 = 1;

    t62 = (((x249|x250)^x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	int8_t x254 = INT8_MAX;
	static uint64_t x255 = UINT64_MAX;
	static uint16_t x256 = UINT16_MAX;

    t63 = (((x253|x254)^x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = 805U;
	int8_t x259 = -1;
	volatile int16_t x260 = -30;
	int32_t t64 = 0;

    t64 = (((x257|x258)^x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 51;
	int64_t x262 = -1LL;
	static volatile int32_t x263 = 265118568;
	uint8_t x264 = 115U;
	volatile int32_t t65 = -18989;

    t65 = (((x261|x262)^x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MAX;
	static volatile int64_t x267 = -11372864705939886LL;
	static int32_t x268 = -1;
	volatile int32_t t66 = -1536;

    t66 = (((x265|x266)^x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x271 = 6646984033168939LLU;

    t67 = (((x269|x270)^x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x275 = 73;

    t68 = (((x273|x274)^x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = 10182U;
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int8_t x280 = -6;

    t69 = (((x277|x278)^x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x284 = UINT32_MAX;
	int32_t t70 = -197;

    t70 = (((x281|x282)^x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = 1;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 14142;

    t71 = (((x285|x286)^x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 0;
	volatile int8_t x290 = INT8_MAX;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t72 = 227582558;

    t72 = (((x289|x290)^x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MAX;
	static volatile int32_t t73 = 1;

    t73 = (((x293|x294)^x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	volatile uint16_t x298 = UINT16_MAX;
	static uint8_t x299 = UINT8_MAX;
	volatile int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 117611122;

    t74 = (((x297|x298)^x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	static int16_t x302 = INT16_MIN;
	static int32_t x303 = 2810783;
	volatile int32_t t75 = -230755;

    t75 = (((x301|x302)^x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 243U;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	static uint8_t x308 = 111U;
	volatile int32_t t76 = -225110883;

    t76 = (((x305|x306)^x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -269221;

    t77 = (((x309|x310)^x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MAX;
	volatile int32_t x314 = -1;
	int16_t x315 = 0;
	uint8_t x316 = 21U;
	int32_t t78 = -15;

    t78 = (((x313|x314)^x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x318 = 41U;
	int64_t x319 = INT64_MIN;
	volatile int16_t x320 = INT16_MIN;
	static volatile int32_t t79 = -43736;

    t79 = (((x317|x318)^x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x323 = INT8_MAX;

    t80 = (((x321|x322)^x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = 0;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 118902;

    t81 = (((x325|x326)^x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = -1;
	volatile int8_t x331 = -1;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = 17288;

    t82 = (((x329|x330)^x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = 83LLU;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -436451;

    t83 = (((x333|x334)^x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -20;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -1;

    t84 = (((x337|x338)^x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MAX;
	static uint32_t x343 = UINT32_MAX;
	static uint16_t x344 = 3U;

    t85 = (((x341|x342)^x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 361180422U;
	uint32_t x346 = 978380U;
	int32_t t86 = 24;

    t86 = (((x345|x346)^x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x350 = INT8_MIN;
	uint32_t x351 = 507U;
	int16_t x352 = INT16_MAX;

    t87 = (((x349|x350)^x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -54209664;
	static int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	static int64_t x356 = 38593LL;

    t88 = (((x353|x354)^x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -957;
	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = 14889U;
	uint64_t x360 = 370817137389234234LLU;
	int32_t t89 = 25112729;

    t89 = (((x357|x358)^x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = 3;
	int16_t x363 = -21;
	volatile int32_t t90 = 229;

    t90 = (((x361|x362)^x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 520691;
	uint32_t x366 = 1U;
	volatile uint16_t x368 = UINT16_MAX;
	int32_t t91 = -173742;

    t91 = (((x365|x366)^x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -15;
	uint16_t x370 = 5193U;
	int64_t x371 = -65939095608LL;

    t92 = (((x369|x370)^x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -1;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	volatile int32_t t93 = 18;

    t93 = (((x373|x374)^x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 142994U;
	volatile uint64_t x379 = 15220LLU;
	volatile int16_t x380 = INT16_MIN;

    t94 = (((x377|x378)^x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	volatile int16_t x382 = -1;
	volatile int16_t x383 = INT16_MAX;
	int16_t x384 = 149;
	volatile int32_t t95 = 1;

    t95 = (((x381|x382)^x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;

    t96 = (((x385|x386)^x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	volatile int16_t x392 = -550;
	static int32_t t97 = -4;

    t97 = (((x389|x390)^x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int16_t x394 = 347;
	volatile int64_t x395 = -5228LL;
	volatile int8_t x396 = 0;

    t98 = (((x393|x394)^x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	uint8_t x398 = 15U;
	int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MAX;
	volatile int32_t t99 = -27;

    t99 = (((x397|x398)^x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = -1LL;
	static uint64_t x404 = 1164792361813957LLU;
	int32_t t100 = -22019;

    t100 = (((x401|x402)^x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x406 = INT16_MIN;
	volatile int16_t x407 = 792;
	int64_t x408 = INT64_MIN;
	int32_t t101 = 160232;

    t101 = (((x405|x406)^x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = 445267;
	static int8_t x410 = 0;
	static int32_t x411 = -1;
	volatile int16_t x412 = -16111;

    t102 = (((x409|x410)^x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 18U;
	static volatile int16_t x414 = -1;
	volatile int64_t x415 = INT64_MIN;
	static uint8_t x416 = 80U;
	volatile int32_t t103 = -59993422;

    t103 = (((x413|x414)^x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -12LL;
	static uint8_t x418 = UINT8_MAX;
	volatile uint16_t x420 = UINT16_MAX;
	int32_t t104 = 1670;

    t104 = (((x417|x418)^x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 98429U;
	static int32_t x423 = -1;
	static volatile int64_t x424 = -217658379036268LL;
	static volatile int32_t t105 = -15;

    t105 = (((x421|x422)^x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = INT16_MIN;
	static int32_t x427 = INT32_MIN;
	uint8_t x428 = 5U;
	static int32_t t106 = 691336969;

    t106 = (((x425|x426)^x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -2910980149471971LL;
	volatile int32_t x430 = 13586936;
	uint32_t x431 = 1349U;

    t107 = (((x429|x430)^x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x433 = 37U;
	static int16_t x435 = 111;
	int64_t x436 = -20407LL;
	volatile int32_t t108 = -22;

    t108 = (((x433|x434)^x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	volatile uint32_t x438 = 30U;
	int32_t x440 = -237483535;
	volatile int32_t t109 = 157585;

    t109 = (((x437|x438)^x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -1524529LL;
	uint16_t x442 = 16144U;
	static uint8_t x443 = 3U;
	uint64_t x444 = 7218771455836118944LLU;
	int32_t t110 = -11602;

    t110 = (((x441|x442)^x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	uint64_t x446 = 616640858141LLU;
	static int32_t x447 = INT32_MIN;
	int32_t t111 = -5;

    t111 = (((x445|x446)^x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 17616U;
	volatile int32_t x450 = INT32_MAX;
	static volatile uint64_t x451 = 19986256341LLU;
	static int32_t t112 = 965389092;

    t112 = (((x449|x450)^x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x455 = INT32_MIN;
	int32_t t113 = -9;

    t113 = (((x453|x454)^x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x458 = INT16_MIN;
	static volatile int32_t t114 = -33043401;

    t114 = (((x457|x458)^x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 1033652329LL;
	volatile int32_t x462 = INT32_MAX;
	int8_t x463 = 0;
	static volatile int32_t t115 = 88;

    t115 = (((x461|x462)^x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = -1;
	int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MIN;
	int8_t x468 = INT8_MIN;

    t116 = (((x465|x466)^x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = 1;
	int8_t x470 = -3;
	int32_t x471 = 1;
	int64_t x472 = INT64_MIN;
	int32_t t117 = 509395;

    t117 = (((x469|x470)^x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int32_t x474 = -1;
	int32_t x475 = -1;
	int32_t t118 = 3052480;

    t118 = (((x473|x474)^x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x479 = INT8_MIN;
	int32_t t119 = 10830423;

    t119 = (((x477|x478)^x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x481 = 65411LLU;
	int64_t x482 = INT64_MIN;
	int8_t x483 = INT8_MIN;
	int8_t x484 = -3;
	volatile int32_t t120 = 5935505;

    t120 = (((x481|x482)^x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	uint16_t x486 = 7U;
	static volatile int32_t x487 = 37313741;
	static int32_t t121 = 241;

    t121 = (((x485|x486)^x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = 24;
	static int64_t x491 = INT64_MAX;
	int64_t x492 = 0LL;
	int32_t t122 = 10720;

    t122 = (((x489|x490)^x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = -1191;
	volatile uint64_t x495 = 17LLU;
	int8_t x496 = INT8_MIN;
	volatile int32_t t123 = 0;

    t123 = (((x493|x494)^x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -57;
	int64_t x498 = INT64_MAX;
	int32_t x499 = 0;
	static uint8_t x500 = 11U;

    t124 = (((x497|x498)^x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	volatile int16_t x503 = INT16_MIN;
	volatile int64_t x504 = INT64_MIN;
	volatile int32_t t125 = 1;

    t125 = (((x501|x502)^x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	uint16_t x506 = UINT16_MAX;
	static volatile uint32_t x507 = 78556U;
	int64_t x508 = INT64_MIN;
	int32_t t126 = 93895224;

    t126 = (((x505|x506)^x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -1LL;
	uint64_t x510 = 28659LLU;
	int32_t x511 = -1022;
	int32_t x512 = INT32_MAX;
	int32_t t127 = -553607;

    t127 = (((x509|x510)^x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x515 = 3U;
	uint32_t x516 = 298U;
	volatile int32_t t128 = 115;

    t128 = (((x513|x514)^x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = -48;
	int16_t x518 = -149;
	static volatile int32_t x519 = INT32_MIN;
	uint8_t x520 = 45U;
	volatile int32_t t129 = 16014;

    t129 = (((x517|x518)^x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 8U;
	uint32_t x522 = 17U;
	static int64_t x523 = -11757770104479590LL;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t130 = 119164;

    t130 = (((x521|x522)^x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = -1LL;
	static uint8_t x526 = 64U;
	volatile uint32_t x527 = UINT32_MAX;
	volatile int32_t x528 = -1;

    t131 = (((x525|x526)^x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -1;
	uint16_t x530 = 15297U;
	int64_t x531 = -1LL;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -641201;

    t132 = (((x529|x530)^x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	uint16_t x535 = 1770U;
	int64_t x536 = -68LL;

    t133 = (((x533|x534)^x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 1207754779355167LLU;
	int8_t x538 = -1;
	int16_t x539 = INT16_MIN;
	int8_t x540 = INT8_MIN;

    t134 = (((x537|x538)^x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 2U;
	static int32_t x542 = INT32_MIN;
	uint8_t x543 = 95U;
	static int32_t t135 = -48212;

    t135 = (((x541|x542)^x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x547 = 126U;
	static int8_t x548 = -1;
	static int32_t t136 = -432;

    t136 = (((x545|x546)^x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x549 = 15492U;
	int32_t t137 = -49532;

    t137 = (((x549|x550)^x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 8678544121159LLU;
	static int32_t x554 = INT32_MIN;
	int64_t x555 = -14161127812LL;
	int64_t x556 = 32031037395669LL;
	int32_t t138 = 202268803;

    t138 = (((x553|x554)^x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x558 = INT16_MIN;
	uint64_t x559 = 30997111418714LLU;
	static int8_t x560 = INT8_MAX;
	int32_t t139 = 62524;

    t139 = (((x557|x558)^x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 15U;
	int64_t x562 = 18086LL;
	uint64_t x563 = 248LLU;
	int16_t x564 = -14256;

    t140 = (((x561|x562)^x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 10U;
	int64_t x566 = 341200596085LL;
	int8_t x567 = INT8_MIN;
	int64_t x568 = -1LL;

    t141 = (((x565|x566)^x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 51U;
	uint64_t x570 = 7LLU;
	static int32_t x571 = -1;
	int32_t x572 = -1;
	int32_t t142 = -3;

    t142 = (((x569|x570)^x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = INT16_MAX;
	int16_t x575 = -1;
	int64_t x576 = 2464409040LL;
	volatile int32_t t143 = -1;

    t143 = (((x573|x574)^x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	uint8_t x579 = 4U;
	static uint16_t x580 = 766U;
	int32_t t144 = -23044468;

    t144 = (((x577|x578)^x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -2;
	int8_t x582 = 10;
	volatile uint8_t x584 = 91U;
	int32_t t145 = 9694294;

    t145 = (((x581|x582)^x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 0U;
	int16_t x587 = 368;
	uint16_t x588 = 76U;
	int32_t t146 = -6880715;

    t146 = (((x585|x586)^x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 61U;
	static int16_t x590 = INT16_MIN;
	static uint64_t x591 = 431412059628629582LLU;
	uint16_t x592 = UINT16_MAX;

    t147 = (((x589|x590)^x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x594 = 102U;
	int64_t x595 = INT64_MIN;
	uint64_t x596 = 1LLU;
	static volatile int32_t t148 = 875;

    t148 = (((x593|x594)^x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 7326612U;
	int64_t x598 = -1LL;
	uint16_t x600 = 965U;
	int32_t t149 = 32241223;

    t149 = (((x597|x598)^x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -1LL;
	int8_t x602 = INT8_MIN;
	static volatile int16_t x604 = -60;
	static volatile int32_t t150 = -5675458;

    t150 = (((x601|x602)^x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x605 = 436494717U;
	uint32_t x606 = 34598U;
	int16_t x607 = INT16_MIN;
	uint32_t x608 = UINT32_MAX;
	int32_t t151 = -21698;

    t151 = (((x605|x606)^x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = INT32_MIN;
	volatile int16_t x611 = INT16_MIN;
	volatile int64_t x612 = 5147801352594LL;
	volatile int32_t t152 = -802071682;

    t152 = (((x609|x610)^x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MIN;
	int32_t x615 = INT32_MAX;
	uint32_t x616 = 3243U;
	static int32_t t153 = 31930;

    t153 = (((x613|x614)^x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	uint8_t x618 = 81U;
	int8_t x619 = INT8_MIN;
	int32_t x620 = INT32_MIN;

    t154 = (((x617|x618)^x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	static uint32_t x622 = UINT32_MAX;
	volatile int32_t x624 = 2574371;
	int32_t t155 = -5;

    t155 = (((x621|x622)^x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x627 = INT32_MIN;
	int16_t x628 = -3;
	int32_t t156 = 774048613;

    t156 = (((x625|x626)^x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 48815925U;
	int8_t x630 = INT8_MIN;
	int16_t x631 = -1;
	static uint32_t x632 = UINT32_MAX;
	volatile int32_t t157 = 2473934;

    t157 = (((x629|x630)^x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = -8;
	int8_t x636 = 0;
	int32_t t158 = -352646674;

    t158 = (((x633|x634)^x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = UINT32_MAX;
	static volatile uint32_t x639 = UINT32_MAX;
	int32_t t159 = -48610;

    t159 = (((x637|x638)^x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -1;
	int8_t x642 = 2;
	int16_t x643 = -159;
	volatile int32_t t160 = 96301;

    t160 = (((x641|x642)^x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	static volatile uint8_t x646 = 1U;
	static volatile int32_t x648 = -22;

    t161 = (((x645|x646)^x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 16560518953577LL;
	volatile int16_t x650 = -1;
	uint8_t x651 = UINT8_MAX;
	int16_t x652 = INT16_MIN;

    t162 = (((x649|x650)^x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	int16_t x656 = -1;
	volatile int32_t t163 = 1854398;

    t163 = (((x653|x654)^x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = INT8_MAX;
	int64_t x660 = INT64_MIN;
	volatile int32_t t164 = 63669;

    t164 = (((x657|x658)^x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x664 = -1LL;
	volatile int32_t t165 = 157679225;

    t165 = (((x661|x662)^x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = 0;
	static uint32_t x666 = 122361220U;
	volatile int32_t x667 = -3847178;
	int16_t x668 = 1;

    t166 = (((x665|x666)^x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	int32_t x670 = INT32_MIN;
	int32_t x671 = INT32_MIN;
	int8_t x672 = 1;
	static volatile int32_t t167 = -159;

    t167 = (((x669|x670)^x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = UINT64_MAX;
	int8_t x674 = 47;
	uint64_t x675 = UINT64_MAX;
	uint8_t x676 = 43U;
	int32_t t168 = -4723;

    t168 = (((x673|x674)^x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = INT64_MAX;
	volatile int32_t x678 = -1;
	static volatile int32_t t169 = 6226;

    t169 = (((x677|x678)^x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = 29;
	int64_t x683 = -1LL;
	static int16_t x684 = -1;
	int32_t t170 = 9055244;

    t170 = (((x681|x682)^x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x686 = UINT64_MAX;
	int32_t x687 = INT32_MAX;
	int8_t x688 = -1;
	int32_t t171 = 884190;

    t171 = (((x685|x686)^x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	volatile uint8_t x691 = 72U;
	volatile int32_t x692 = INT32_MIN;

    t172 = (((x689|x690)^x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x694 = UINT16_MAX;
	int32_t x695 = INT32_MAX;
	uint64_t x696 = 59472327252LLU;
	int32_t t173 = -34;

    t173 = (((x693|x694)^x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	volatile int16_t x698 = -1;
	int8_t x699 = -1;
	static volatile int32_t t174 = -36515;

    t174 = (((x697|x698)^x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -3;
	int64_t x702 = INT64_MIN;
	uint32_t x703 = 64325U;
	int32_t x704 = -1793546;
	volatile int32_t t175 = -93765;

    t175 = (((x701|x702)^x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	volatile uint16_t x706 = 103U;
	volatile int32_t x707 = INT32_MIN;
	static int32_t x708 = -1;
	int32_t t176 = -61;

    t176 = (((x705|x706)^x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 5U;
	int16_t x710 = INT16_MAX;
	int32_t x711 = 6156450;
	int64_t x712 = -907860270459LL;
	int32_t t177 = 701847;

    t177 = (((x709|x710)^x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MAX;
	int16_t x714 = INT16_MAX;
	int64_t x715 = INT64_MIN;
	static int8_t x716 = -1;
	int32_t t178 = -18470216;

    t178 = (((x713|x714)^x715)!=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = INT64_MIN;
	uint8_t x719 = 2U;
	static int8_t x720 = -1;
	static int32_t t179 = 386335700;

    t179 = (((x717|x718)^x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 28875514U;
	static uint8_t x722 = 2U;
	int32_t x724 = INT32_MAX;

    t180 = (((x721|x722)^x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MAX;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	int8_t x728 = INT8_MIN;
	int32_t t181 = 895;

    t181 = (((x725|x726)^x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	int32_t x730 = INT32_MAX;
	volatile uint32_t x731 = 527U;
	int32_t x732 = INT32_MIN;
	static int32_t t182 = 23524;

    t182 = (((x729|x730)^x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	uint64_t x735 = 40938655352LLU;

    t183 = (((x733|x734)^x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MIN;
	static int8_t x739 = INT8_MAX;
	int64_t x740 = INT64_MAX;
	static int32_t t184 = -644130767;

    t184 = (((x737|x738)^x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MAX;
	static int16_t x743 = INT16_MIN;
	int16_t x744 = -2;
	static volatile int32_t t185 = -26695659;

    t185 = (((x741|x742)^x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = -1;
	int64_t x746 = 396279946267363832LL;
	uint32_t x748 = UINT32_MAX;
	int32_t t186 = -73433;

    t186 = (((x745|x746)^x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 132913415514LLU;
	uint8_t x750 = 6U;
	static uint32_t x751 = UINT32_MAX;
	volatile int64_t x752 = 490875772LL;
	volatile int32_t t187 = 0;

    t187 = (((x749|x750)^x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 1236U;
	int32_t x755 = 3391464;
	static int64_t x756 = -1LL;
	volatile int32_t t188 = -304;

    t188 = (((x753|x754)^x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -3828218714565457LL;
	volatile int8_t x758 = INT8_MIN;
	static int8_t x759 = INT8_MAX;
	static int32_t x760 = 23465;
	static volatile int32_t t189 = -1064867351;

    t189 = (((x757|x758)^x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 12U;
	int64_t x762 = -1LL;
	static int32_t x763 = 12300;
	int16_t x764 = -1;

    t190 = (((x761|x762)^x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	volatile uint64_t x766 = 841739LLU;
	volatile uint16_t x767 = UINT16_MAX;
	int64_t x768 = -52163940685LL;
	volatile int32_t t191 = 7122235;

    t191 = (((x765|x766)^x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 4898;
	uint32_t x771 = 500U;
	volatile int32_t t192 = 477208725;

    t192 = (((x769|x770)^x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 481150;
	int16_t x774 = -3450;
	static volatile int16_t x775 = -1;
	volatile int16_t x776 = -20;
	volatile int32_t t193 = 1;

    t193 = (((x773|x774)^x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	static int8_t x778 = -1;
	uint32_t x779 = 85U;
	uint64_t x780 = 51965255478047LLU;
	int32_t t194 = 11674543;

    t194 = (((x777|x778)^x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	static int64_t x782 = INT64_MIN;
	volatile uint32_t x784 = 37875123U;
	static volatile int32_t t195 = -326;

    t195 = (((x781|x782)^x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 0U;
	static int32_t x786 = -1;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = INT32_MAX;
	int32_t t196 = -85642;

    t196 = (((x785|x786)^x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1;
	volatile int16_t x792 = -2641;

    t197 = (((x789|x790)^x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 875LLU;
	static uint16_t x796 = 23U;

    t198 = (((x793|x794)^x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -6206937608102LL;
	static volatile int32_t x798 = INT32_MIN;
	uint32_t x800 = 1692U;

    t199 = (((x797|x798)^x799)!=x800);

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

