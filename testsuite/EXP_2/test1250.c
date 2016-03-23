
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

uint16_t x5 = UINT16_MAX;
int32_t t0 = 46;
int32_t x20 = INT32_MIN;
uint32_t x23 = 2508682U;
int64_t x24 = INT64_MIN;
uint32_t x42 = 24U;
int32_t t7 = -1065;
uint64_t x52 = 3401457876024793LLU;
volatile uint64_t t8 = 10564302435683LLU;
static int8_t x63 = -1;
uint32_t t12 = 14687U;
static uint64_t x73 = 10538575LLU;
int32_t x77 = 11113;
volatile int32_t t14 = -30;
int16_t x101 = 2873;
int8_t x110 = INT8_MAX;
volatile int32_t x111 = -1;
volatile int32_t t21 = 8462740;
static uint8_t x113 = 1U;
volatile uint16_t x116 = 29U;
int16_t x118 = 3;
int16_t x122 = INT16_MAX;
int32_t x130 = INT32_MAX;
static uint8_t x150 = UINT8_MAX;
uint16_t x157 = 27561U;
int64_t x159 = INT64_MAX;
static uint64_t x165 = 7LLU;
int16_t x166 = 1;
uint64_t x183 = 2879746765040LLU;
volatile int32_t t31 = 418002;
int32_t x185 = 1;
uint64_t x186 = UINT64_MAX;
uint32_t t32 = 123896U;
volatile uint64_t x193 = 45901907224417423LLU;
uint32_t x209 = UINT32_MAX;
int16_t x214 = INT16_MIN;
static int16_t x215 = 0;
volatile uint32_t t39 = 15530U;
int32_t x233 = 27;
volatile int32_t x234 = INT32_MAX;
uint16_t x236 = UINT16_MAX;
volatile int16_t x237 = INT16_MAX;
int8_t x239 = -1;
int32_t t42 = -15;
static int64_t x274 = 0LL;
int8_t x275 = -1;
int32_t t43 = 0;
uint64_t x281 = 260214459182463495LLU;
volatile int16_t x282 = 858;
volatile uint32_t t45 = 651576U;
int8_t x306 = INT8_MAX;
static int64_t x344 = -4LL;
static int8_t x352 = -2;
volatile int32_t t51 = -1330;
int8_t x355 = INT8_MIN;
static uint16_t x356 = 6799U;
int8_t x358 = INT8_MIN;
volatile int32_t x364 = INT32_MAX;
volatile uint32_t t55 = 18070U;
static volatile uint32_t x373 = 20U;
uint8_t x374 = 2U;
static volatile int16_t x376 = 108;
volatile int32_t x377 = 14180162;
int8_t x378 = -1;
volatile int32_t t58 = -366193;
int64_t x390 = -212369497LL;
volatile uint32_t x392 = 998693392U;
uint16_t x394 = 4U;
uint32_t x397 = UINT32_MAX;
static int32_t x398 = INT32_MIN;
volatile uint8_t x399 = UINT8_MAX;
volatile uint32_t t62 = 6594U;
static int32_t x406 = INT32_MIN;
volatile uint16_t x420 = 55U;
int32_t x435 = INT32_MAX;
volatile uint64_t t68 = 3LLU;
int64_t x462 = INT64_MAX;
uint16_t x469 = 1894U;
static uint32_t t71 = 0U;
int32_t x483 = 0;
static uint64_t t72 = 4957290321978736591LLU;
int64_t x486 = INT64_MIN;
int32_t x490 = INT32_MIN;
int8_t x509 = INT8_MAX;
uint16_t x511 = 10513U;
static int64_t x515 = INT64_MIN;
uint16_t x526 = 1U;
volatile int8_t x534 = INT8_MIN;
uint64_t x541 = 241LLU;
int16_t x543 = INT16_MIN;
uint64_t x559 = 493LLU;
volatile int32_t t82 = 46;
volatile int32_t x578 = INT32_MIN;
int16_t x579 = INT16_MIN;
uint32_t x588 = 147U;
uint8_t x592 = 14U;
volatile int64_t t86 = 337609LL;
int8_t x595 = 0;
volatile int64_t t90 = -424456505497886LL;
static uint64_t t92 = 0LLU;
volatile uint32_t x637 = UINT32_MAX;
static volatile int8_t x644 = INT8_MAX;
volatile int32_t x650 = 302;
volatile int16_t x658 = INT16_MIN;
static uint32_t x673 = UINT32_MAX;
volatile uint64_t t98 = 278130766940678LLU;
uint64_t x695 = 34276420759531449LLU;
static uint8_t x701 = 12U;
int16_t x704 = -1;
uint32_t x722 = 1U;
static volatile int8_t x725 = INT8_MAX;
static volatile int32_t x735 = -1;
uint32_t x749 = UINT32_MAX;
int32_t x750 = INT32_MIN;
int8_t x761 = INT8_MAX;
int16_t x765 = INT16_MAX;
volatile int32_t t111 = -80972529;
volatile uint64_t x769 = 865753022675543LLU;
static int8_t x772 = INT8_MAX;
uint32_t x785 = UINT32_MAX;
int16_t x787 = -2;
static int64_t x799 = 166057LL;
int32_t x800 = INT32_MIN;
static volatile int16_t x809 = INT16_MAX;
static uint32_t x813 = UINT32_MAX;
volatile int8_t x815 = -1;
int32_t x816 = -23;
volatile int32_t x822 = INT32_MAX;
volatile int32_t t121 = 261542;
volatile uint16_t x854 = 3301U;
volatile uint32_t t124 = 20030162U;
uint32_t x862 = 1808U;
volatile int32_t x869 = 755155957;
int64_t x870 = 6058081028613625LL;
volatile uint64_t t127 = 300070125153LLU;
volatile int16_t x875 = INT16_MAX;
int32_t t128 = 247112694;
volatile uint64_t x889 = 1913300578894507621LLU;
uint64_t t129 = 4389488475986LLU;
uint8_t x914 = UINT8_MAX;
int16_t x922 = 7;
volatile int16_t x924 = 4170;
int32_t t131 = 10108025;
int8_t x931 = -4;
uint64_t t133 = 344892LLU;
int16_t x945 = INT16_MAX;
static volatile uint64_t t135 = 3385099877LLU;
uint32_t x954 = 2002818U;
static int8_t x961 = INT8_MAX;
uint16_t x965 = UINT16_MAX;
static uint8_t x966 = UINT8_MAX;
volatile uint64_t x967 = UINT64_MAX;
uint32_t x1009 = 57U;
volatile int16_t x1011 = -1;
uint64_t x1012 = 3LLU;
volatile uint32_t t141 = 409455514U;
uint8_t x1041 = 45U;
int16_t x1066 = -2;
volatile uint16_t x1067 = UINT16_MAX;
uint64_t x1085 = 37883632887664LLU;
static int64_t x1091 = INT64_MIN;
uint16_t x1101 = 4004U;
volatile uint16_t x1133 = UINT16_MAX;
int32_t x1134 = 118494;
static volatile int8_t x1150 = -1;
int32_t t152 = 2341;
int64_t x1159 = -1LL;
volatile int64_t t154 = 8148241LL;
int32_t t155 = -245;
static int16_t x1176 = INT16_MIN;
volatile int32_t t158 = -432152;
uint32_t x1181 = 485U;
int8_t x1183 = INT8_MIN;
int32_t x1229 = 80;
uint8_t x1270 = 62U;
int16_t x1293 = 8241;
static uint32_t x1300 = 834511613U;
uint8_t x1301 = UINT8_MAX;
volatile int64_t x1303 = INT64_MIN;
static volatile int32_t t168 = -94;
static uint8_t x1307 = UINT8_MAX;
int8_t x1311 = INT8_MIN;
volatile uint64_t x1312 = 764962540352189782LLU;
int32_t x1349 = 885;
volatile uint16_t x1355 = 15734U;
volatile int64_t x1356 = INT64_MIN;
static uint32_t x1381 = 1301407619U;
static uint16_t x1399 = 56U;
static volatile uint16_t x1401 = 9U;
uint8_t x1404 = 32U;
volatile int32_t t180 = 5512833;
static int8_t x1408 = -3;
volatile int64_t t182 = 5944467839LL;
int64_t x1415 = INT64_MAX;
static int8_t x1426 = INT8_MIN;
static int8_t x1433 = INT8_MAX;
int32_t x1435 = -709084528;
int8_t x1454 = -14;
volatile int64_t x1456 = -359867903673727LL;
int8_t x1475 = -4;
volatile int8_t x1488 = INT8_MAX;
volatile int8_t x1492 = -1;
volatile int64_t x1498 = -651756912231581180LL;
volatile uint32_t t194 = 12U;
int16_t x1527 = INT16_MAX;
volatile int32_t x1530 = INT32_MIN;
static volatile int32_t t197 = 4928232;
uint16_t x1533 = 13376U;
int32_t t198 = -1078849;


void f0(void) {
    	static volatile int32_t x6 = 64;
	uint64_t x7 = 85705999204585429LLU;
	uint16_t x8 = UINT16_MAX;

    t0 = ((x5<<(x6!=x7))/x8);

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 7038692312175LLU;
	uint64_t x10 = 37LLU;
	static int64_t x11 = -58690747134203LL;
	uint16_t x12 = UINT16_MAX;
	uint64_t t1 = 389102145319177197LLU;

    t1 = ((x9<<(x10!=x11))/x12);

    if (t1 != 214807120LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	volatile int32_t t2 = -21741413;

    t2 = ((x17<<(x18!=x19))/x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	int8_t x22 = -2;
	int64_t t3 = 5442038018777LL;

    t3 = ((x21<<(x22!=x23))/x24);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = 876205;
	int16_t x26 = INT16_MAX;
	volatile int8_t x27 = INT8_MAX;
	static int32_t x28 = INT32_MAX;
	static volatile int32_t t4 = 6788;

    t4 = ((x25<<(x26!=x27))/x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x37 = UINT64_MAX;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = -22;
	static int8_t x40 = INT8_MAX;
	uint64_t t5 = 9566882004662050LLU;

    t5 = ((x37<<(x38!=x39))/x40);

    if (t5 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x41 = 17864440960422197LL;
	static int8_t x43 = 0;
	static uint64_t x44 = UINT64_MAX;
	volatile uint64_t t6 = 35706289715609181LLU;

    t6 = ((x41<<(x42!=x43))/x44);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x45 = 2;
	uint64_t x46 = UINT64_MAX;
	uint8_t x47 = 1U;
	volatile int8_t x48 = INT8_MIN;

    t7 = ((x45<<(x46!=x47))/x48);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x49 = 1145U;
	uint8_t x50 = 60U;
	volatile uint32_t x51 = 64293920U;

    t8 = ((x49<<(x50!=x51))/x52);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x57 = UINT32_MAX;
	int16_t x58 = INT16_MIN;
	volatile uint16_t x59 = 1U;
	uint8_t x60 = 2U;
	uint32_t t9 = 14033U;

    t9 = ((x57<<(x58!=x59))/x60);

    if (t9 != 2147483647U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile uint64_t x62 = UINT64_MAX;
	static int64_t x64 = INT64_MIN;
	volatile uint64_t t10 = 689683LLU;

    t10 = ((x61<<(x62!=x63))/x64);

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x65 = 888U;
	static uint8_t x66 = 16U;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = 531;
	volatile int32_t t11 = -15;

    t11 = ((x65<<(x66!=x67))/x68);

    if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x69 = UINT8_MAX;
	int64_t x70 = -1LL;
	uint64_t x71 = 65465922117124845LLU;
	uint32_t x72 = 1U;

    t12 = ((x69<<(x70!=x71))/x72);

    if (t12 != 510U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x74 = -33;
	volatile uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t13 = 1306607019932505LLU;

    t13 = ((x73<<(x74!=x75))/x76);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MAX;

    t14 = ((x77<<(x78!=x79))/x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	volatile uint16_t x82 = UINT16_MAX;
	uint32_t x83 = 41U;
	volatile uint16_t x84 = UINT16_MAX;
	static volatile int32_t t15 = 26;

    t15 = ((x81<<(x82!=x83))/x84);

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x89 = 11U;
	static int16_t x90 = -973;
	uint32_t x91 = UINT32_MAX;
	static int16_t x92 = INT16_MIN;
	static int32_t t16 = 2905;

    t16 = ((x89<<(x90!=x91))/x92);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x93 = 13160LLU;
	int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MAX;
	static int8_t x96 = INT8_MIN;
	uint64_t t17 = 907LLU;

    t17 = ((x93<<(x94!=x95))/x96);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -1;
	static int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t18 = 5LLU;

    t18 = ((x97<<(x98!=x99))/x100);

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x102 = INT16_MAX;
	int32_t x103 = -1;
	int32_t x104 = -1;
	int32_t t19 = 95;

    t19 = ((x101<<(x102!=x103))/x104);

    if (t19 != -5746) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x105 = 30;
	int32_t x106 = 453786151;
	int8_t x107 = INT8_MAX;
	static int16_t x108 = INT16_MAX;
	static volatile int32_t t20 = -9;

    t20 = ((x105<<(x106!=x107))/x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x109 = INT8_MAX;
	int32_t x112 = INT32_MIN;

    t21 = ((x109<<(x110!=x111))/x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x114 = 53U;
	volatile int16_t x115 = -1;
	volatile int32_t t22 = -233245;

    t22 = ((x113<<(x114!=x115))/x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x117 = UINT8_MAX;
	uint8_t x119 = 7U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t23 = 11;

    t23 = ((x117<<(x118!=x119))/x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = 3LL;
	volatile int16_t x123 = 5144;
	volatile uint8_t x124 = UINT8_MAX;
	static int64_t t24 = -83546298305012LL;

    t24 = ((x121<<(x122!=x123))/x124);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x125 = UINT32_MAX;
	int64_t x126 = -1LL;
	static int32_t x127 = INT32_MIN;
	uint16_t x128 = 33U;
	static uint32_t t25 = 50323777U;

    t25 = ((x125<<(x126!=x127))/x128);

    if (t25 != 130150524U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 322565454LLU;
	int16_t x131 = 2636;
	int8_t x132 = -1;
	volatile uint64_t t26 = 4122494827LLU;

    t26 = ((x129<<(x130!=x131))/x132);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x137 = UINT16_MAX;
	int16_t x138 = INT16_MIN;
	volatile int16_t x139 = -1;
	static uint64_t x140 = 8498315519LLU;
	static volatile uint64_t t27 = 3LLU;

    t27 = ((x137<<(x138!=x139))/x140);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x149 = 7249231084125049LLU;
	int16_t x151 = INT16_MAX;
	static volatile int16_t x152 = 14;
	volatile uint64_t t28 = 127512144727339858LLU;

    t28 = ((x149<<(x150!=x151))/x152);

    if (t28 != 1035604440589292LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x158 = -1;
	uint32_t x160 = 1226092054U;
	static volatile uint32_t t29 = 0U;

    t29 = ((x157<<(x158!=x159))/x160);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x167 = 21U;
	volatile int8_t x168 = 13;
	static uint64_t t30 = 527886306747141157LLU;

    t30 = ((x165<<(x166!=x167))/x168);

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MIN;
	static int8_t x184 = INT8_MIN;

    t31 = ((x181<<(x182!=x183))/x184);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x187 = INT16_MAX;
	static uint32_t x188 = 220769U;

    t32 = ((x185<<(x186!=x187))/x188);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x194 = -4;
	int16_t x195 = -13975;
	int8_t x196 = INT8_MAX;
	volatile uint64_t t33 = 119287226239541526LLU;

    t33 = ((x193<<(x194!=x195))/x196);

    if (t33 != 722864680699486LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x197 = 30U;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -1;
	uint16_t x200 = 7432U;
	uint32_t t34 = 1889U;

    t34 = ((x197<<(x198!=x199))/x200);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x201 = INT8_MAX;
	int16_t x202 = INT16_MIN;
	int16_t x203 = -1;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t35 = -85;

    t35 = ((x201<<(x202!=x203))/x204);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x210 = INT8_MIN;
	int16_t x211 = 235;
	volatile int8_t x212 = -2;
	uint32_t t36 = 66098626U;

    t36 = ((x209<<(x210!=x211))/x212);

    if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x213 = UINT32_MAX;
	int32_t x216 = 2650467;
	uint32_t t37 = 760590U;

    t37 = ((x213<<(x214!=x215))/x216);

    if (t37 != 1620U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x225 = 43U;
	static uint16_t x226 = 885U;
	int16_t x227 = -1;
	int8_t x228 = INT8_MIN;
	volatile uint32_t t38 = 488U;

    t38 = ((x225<<(x226!=x227))/x228);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x229 = 10U;
	int64_t x230 = -1LL;
	static uint16_t x231 = 587U;
	int16_t x232 = -1;

    t39 = ((x229<<(x230!=x231))/x232);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x235 = INT16_MIN;
	volatile int32_t t40 = 1280;

    t40 = ((x233<<(x234!=x235))/x236);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x238 = -1;
	static uint32_t x240 = 1990U;
	uint32_t t41 = 16373U;

    t41 = ((x237<<(x238!=x239))/x240);

    if (t41 != 16U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x249 = 701U;
	volatile uint32_t x250 = 11U;
	uint64_t x251 = 3007LLU;
	static int32_t x252 = 6;

    t42 = ((x249<<(x250!=x251))/x252);

    if (t42 != 233) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x273 = 18068U;
	int32_t x276 = -1;

    t43 = ((x273<<(x274!=x275))/x276);

    if (t43 != -36136) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x283 = 94165LL;
	uint32_t x284 = 1797U;
	uint64_t t44 = 0LLU;

    t44 = ((x281<<(x282!=x283))/x284);

    if (t44 != 289609859969352LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x301 = 12U;
	static uint32_t x302 = 245U;
	volatile int32_t x303 = 177656545;
	volatile int32_t x304 = INT32_MIN;

    t45 = ((x301<<(x302!=x303))/x304);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x305 = UINT16_MAX;
	uint16_t x307 = UINT16_MAX;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t46 = 27652812492LLU;

    t46 = ((x305<<(x306!=x307))/x308);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x309 = 4U;
	uint32_t x310 = 5U;
	uint16_t x311 = 92U;
	uint16_t x312 = 967U;
	int32_t t47 = 162;

    t47 = ((x309<<(x310!=x311))/x312);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x333 = 19742295U;
	uint32_t x334 = 5437264U;
	uint32_t x335 = 3U;
	int64_t x336 = INT64_MIN;
	int64_t t48 = -92803205LL;

    t48 = ((x333<<(x334!=x335))/x336);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x337 = 423946279U;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 0U;
	int32_t x340 = INT32_MIN;
	static volatile uint32_t t49 = 45520376U;

    t49 = ((x337<<(x338!=x339))/x340);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x341 = INT8_MAX;
	volatile int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	volatile int64_t t50 = -26LL;

    t50 = ((x341<<(x342!=x343))/x344);

    if (t50 != -63LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x349 = UINT16_MAX;
	volatile int16_t x350 = INT16_MIN;
	int32_t x351 = -3;

    t51 = ((x349<<(x350!=x351))/x352);

    if (t51 != -65535) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int32_t x354 = 824663;
	volatile int32_t t52 = 49430;

    t52 = ((x353<<(x354!=x355))/x356);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x357 = INT8_MAX;
	uint64_t x359 = UINT64_MAX;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t53 = -2263072813015LL;

    t53 = ((x357<<(x358!=x359))/x360);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x361 = 7285U;
	int64_t x362 = INT64_MIN;
	int64_t x363 = 857039483671203LL;
	static volatile uint32_t t54 = 3U;

    t54 = ((x361<<(x362!=x363))/x364);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x365 = 907533725U;
	int16_t x366 = INT16_MAX;
	volatile int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;

    t55 = ((x365<<(x366!=x367))/x368);

    if (t55 != 7117911U) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x375 = -2804;
	uint32_t t56 = 684U;

    t56 = ((x373<<(x374!=x375))/x376);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x379 = 2U;
	int16_t x380 = INT16_MAX;
	volatile int32_t t57 = 0;

    t57 = ((x377<<(x378!=x379))/x380);

    if (t57 != 865) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x381 = UINT8_MAX;
	int64_t x382 = -1LL;
	uint8_t x383 = 92U;
	volatile uint16_t x384 = 19908U;

    t58 = ((x381<<(x382!=x383))/x384);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x385 = 4457;
	int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MAX;
	int64_t t59 = -338546224LL;

    t59 = ((x385<<(x386!=x387))/x388);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x389 = UINT32_MAX;
	int64_t x391 = INT64_MIN;
	volatile uint32_t t60 = 355569U;

    t60 = ((x389<<(x390!=x391))/x392);

    if (t60 != 4U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x393 = UINT16_MAX;
	uint16_t x395 = UINT16_MAX;
	volatile int64_t x396 = INT64_MAX;
	volatile int64_t t61 = 453745325227227LL;

    t61 = ((x393<<(x394!=x395))/x396);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x400 = 13;

    t62 = ((x397<<(x398!=x399))/x400);

    if (t62 != 330382099U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x405 = 34552U;
	static volatile int64_t x407 = INT64_MAX;
	volatile int8_t x408 = -1;
	uint32_t t63 = 20U;

    t63 = ((x405<<(x406!=x407))/x408);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x413 = 1;
	uint32_t x414 = UINT32_MAX;
	static int8_t x415 = INT8_MIN;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t64 = 19;

    t64 = ((x413<<(x414!=x415))/x416);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x417 = 2U;
	int8_t x418 = -1;
	int8_t x419 = INT8_MIN;
	int32_t t65 = 1186380;

    t65 = ((x417<<(x418!=x419))/x420);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x429 = 1170U;
	int16_t x430 = -221;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = INT64_MAX;
	static volatile int64_t t66 = -627687LL;

    t66 = ((x429<<(x430!=x431))/x432);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x433 = 18LLU;
	static uint64_t x434 = 34488463157437LLU;
	volatile uint64_t x436 = UINT64_MAX;
	uint64_t t67 = 1535667LLU;

    t67 = ((x433<<(x434!=x435))/x436);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x437 = 43270LLU;
	static int8_t x438 = 62;
	volatile int8_t x439 = INT8_MIN;
	static volatile uint8_t x440 = UINT8_MAX;

    t68 = ((x437<<(x438!=x439))/x440);

    if (t68 != 339LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x441 = 42773754306LLU;
	static volatile int64_t x442 = 8162113186192LL;
	uint8_t x443 = UINT8_MAX;
	static uint32_t x444 = 495109348U;
	volatile uint64_t t69 = 904858230LLU;

    t69 = ((x441<<(x442!=x443))/x444);

    if (t69 != 172LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x461 = UINT64_MAX;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = 2018417U;
	static volatile uint64_t t70 = 2558219055527LLU;

    t70 = ((x461<<(x462!=x463))/x464);

    if (t70 != 9139213588524LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x470 = 9U;
	volatile int16_t x471 = -1117;
	static uint32_t x472 = 65606U;

    t71 = ((x469<<(x470!=x471))/x472);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x481 = 4832LLU;
	uint8_t x482 = 0U;
	volatile uint64_t x484 = 774408LLU;

    t72 = ((x481<<(x482!=x483))/x484);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x485 = 3U;
	volatile uint16_t x487 = 214U;
	int8_t x488 = INT8_MIN;
	int32_t t73 = -443;

    t73 = ((x485<<(x486!=x487))/x488);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x489 = 220;
	static int64_t x491 = INT64_MAX;
	static uint32_t x492 = 561258624U;
	static uint32_t t74 = 1263945U;

    t74 = ((x489<<(x490!=x491))/x492);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x497 = 650045;
	int32_t x498 = 2154747;
	int8_t x499 = INT8_MIN;
	volatile int64_t x500 = -484676503703LL;
	volatile int64_t t75 = 12155718LL;

    t75 = ((x497<<(x498!=x499))/x500);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x510 = 0U;
	uint8_t x512 = 43U;
	static int32_t t76 = -1599815;

    t76 = ((x509<<(x510!=x511))/x512);

    if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x513 = 1124LLU;
	int16_t x514 = -2;
	volatile int64_t x516 = 67LL;
	volatile uint64_t t77 = 7317482142689LLU;

    t77 = ((x513<<(x514!=x515))/x516);

    if (t77 != 33LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	uint8_t x527 = 50U;
	int32_t x528 = INT32_MAX;
	int32_t t78 = -430;

    t78 = ((x525<<(x526!=x527))/x528);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x533 = 54859178740947913LLU;
	uint16_t x535 = 58U;
	int16_t x536 = INT16_MIN;
	uint64_t t79 = 221968248907849085LLU;

    t79 = ((x533<<(x534!=x535))/x536);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x542 = 266592;
	int16_t x544 = -1;
	volatile uint64_t t80 = 1039483LLU;

    t80 = ((x541<<(x542!=x543))/x544);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x545 = UINT8_MAX;
	uint32_t x546 = UINT32_MAX;
	int32_t x547 = 106927953;
	uint32_t x548 = UINT32_MAX;
	static uint32_t t81 = 989U;

    t81 = ((x545<<(x546!=x547))/x548);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x557 = 192U;
	volatile uint16_t x558 = UINT16_MAX;
	int16_t x560 = INT16_MIN;

    t82 = ((x557<<(x558!=x559))/x560);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x569 = 1U;
	int64_t x570 = INT64_MIN;
	volatile uint64_t x571 = UINT64_MAX;
	uint32_t x572 = 10U;
	uint32_t t83 = 4U;

    t83 = ((x569<<(x570!=x571))/x572);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x577 = 23;
	int64_t x580 = INT64_MAX;
	volatile int64_t t84 = -1LL;

    t84 = ((x577<<(x578!=x579))/x580);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x585 = 17;
	volatile uint64_t x586 = 1521246LLU;
	int64_t x587 = 30LL;
	uint32_t t85 = 717U;

    t85 = ((x585<<(x586!=x587))/x588);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x589 = 0LL;
	uint8_t x590 = UINT8_MAX;
	volatile int8_t x591 = 23;

    t86 = ((x589<<(x590!=x591))/x592);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x593 = 6U;
	uint16_t x594 = 162U;
	uint16_t x596 = 1299U;
	static volatile uint32_t t87 = 211529U;

    t87 = ((x593<<(x594!=x595))/x596);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x605 = 1U;
	static int32_t x606 = INT32_MIN;
	static uint8_t x607 = 14U;
	static int16_t x608 = 6;
	volatile int32_t t88 = -1;

    t88 = ((x605<<(x606!=x607))/x608);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x609 = 1U;
	volatile int8_t x610 = 13;
	volatile int64_t x611 = 1350575919247454LL;
	static int32_t x612 = INT32_MAX;
	int32_t t89 = -1;

    t89 = ((x609<<(x610!=x611))/x612);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x613 = 7;
	int32_t x614 = -24525077;
	volatile int64_t x615 = 1817588LL;
	static int64_t x616 = INT64_MIN;

    t90 = ((x613<<(x614!=x615))/x616);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x618 = 245;
	uint64_t x619 = 4794286670LLU;
	int16_t x620 = INT16_MIN;
	volatile uint64_t t91 = 115167015274681LLU;

    t91 = ((x617<<(x618!=x619))/x620);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x633 = 603405980423LLU;
	int16_t x634 = INT16_MIN;
	int8_t x635 = -1;
	uint8_t x636 = 60U;

    t92 = ((x633<<(x634!=x635))/x636);

    if (t92 != 20113532680LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x638 = INT16_MIN;
	volatile int32_t x639 = INT32_MAX;
	int8_t x640 = -1;
	volatile uint32_t t93 = 368403871U;

    t93 = ((x637<<(x638!=x639))/x640);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x641 = UINT64_MAX;
	static volatile int32_t x642 = 317747737;
	static int16_t x643 = -2071;
	uint64_t t94 = 1532881651LLU;

    t94 = ((x641<<(x642!=x643))/x644);

    if (t94 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x649 = 348238U;
	volatile int64_t x651 = INT64_MAX;
	volatile int64_t x652 = INT64_MIN;
	int64_t t95 = -12267096453LL;

    t95 = ((x649<<(x650!=x651))/x652);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x657 = UINT64_MAX;
	uint32_t x659 = 81768U;
	int8_t x660 = INT8_MAX;
	static uint64_t t96 = 411LLU;

    t96 = ((x657<<(x658!=x659))/x660);

    if (t96 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x674 = INT64_MAX;
	static uint8_t x675 = 1U;
	int64_t x676 = -1LL;
	volatile int64_t t97 = 1009802234775LL;

    t97 = ((x673<<(x674!=x675))/x676);

    if (t97 != -4294967294LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x685 = INT8_MAX;
	int32_t x686 = -194978;
	int32_t x687 = -1;
	uint64_t x688 = UINT64_MAX;

    t98 = ((x685<<(x686!=x687))/x688);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x693 = 5729LLU;
	volatile uint32_t x694 = 158160657U;
	static volatile int64_t x696 = -53LL;
	uint64_t t99 = 41732003174LLU;

    t99 = ((x693<<(x694!=x695))/x696);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x702 = 0;
	volatile int64_t x703 = INT64_MIN;
	static volatile int32_t t100 = -8854;

    t100 = ((x701<<(x702!=x703))/x704);

    if (t100 != -24) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x705 = INT16_MAX;
	static int16_t x706 = INT16_MAX;
	static int8_t x707 = 36;
	uint8_t x708 = UINT8_MAX;
	int32_t t101 = -4390;

    t101 = ((x705<<(x706!=x707))/x708);

    if (t101 != 256) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x713 = INT8_MAX;
	int32_t x714 = INT32_MIN;
	int64_t x715 = -1LL;
	uint16_t x716 = 22361U;
	volatile int32_t t102 = 260636974;

    t102 = ((x713<<(x714!=x715))/x716);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x717 = INT16_MAX;
	uint32_t x718 = UINT32_MAX;
	int16_t x719 = INT16_MAX;
	uint8_t x720 = 10U;
	static volatile int32_t t103 = -81739603;

    t103 = ((x717<<(x718!=x719))/x720);

    if (t103 != 6553) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x721 = INT8_MAX;
	static int32_t x723 = 342905227;
	volatile uint16_t x724 = UINT16_MAX;
	int32_t t104 = 465;

    t104 = ((x721<<(x722!=x723))/x724);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x726 = -1;
	static uint32_t x727 = 6U;
	int32_t x728 = -25;
	volatile int32_t t105 = -526234153;

    t105 = ((x725<<(x726!=x727))/x728);

    if (t105 != -10) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x733 = 470U;
	int64_t x734 = INT64_MAX;
	int16_t x736 = INT16_MAX;
	volatile int32_t t106 = 8824;

    t106 = ((x733<<(x734!=x735))/x736);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x737 = 14323U;
	int64_t x738 = INT64_MIN;
	int32_t x739 = -5;
	volatile int32_t x740 = 6816;
	volatile int32_t t107 = -58280;

    t107 = ((x737<<(x738!=x739))/x740);

    if (t107 != 4) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x741 = 39U;
	int8_t x742 = INT8_MIN;
	int64_t x743 = 69285081488982526LL;
	int32_t x744 = INT32_MAX;
	static volatile int32_t t108 = -16;

    t108 = ((x741<<(x742!=x743))/x744);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x751 = -1;
	int16_t x752 = 14;
	uint32_t t109 = 181U;

    t109 = ((x749<<(x750!=x751))/x752);

    if (t109 != 306783378U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x762 = 508;
	static volatile uint16_t x763 = 101U;
	uint16_t x764 = 1U;
	volatile int32_t t110 = -11166;

    t110 = ((x761<<(x762!=x763))/x764);

    if (t110 != 254) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x766 = -1;
	static int16_t x767 = -3641;
	int8_t x768 = INT8_MIN;

    t111 = ((x765<<(x766!=x767))/x768);

    if (t111 != -511) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MAX;
	static volatile uint64_t t112 = 35LLU;

    t112 = ((x769<<(x770!=x771))/x772);

    if (t112 != 13633905868906LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x781 = 2;
	static volatile uint32_t x782 = 46U;
	static uint16_t x783 = 4U;
	volatile int64_t x784 = -1LL;
	static int64_t t113 = -69213252LL;

    t113 = ((x781<<(x782!=x783))/x784);

    if (t113 != -4LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x786 = -1;
	static volatile int8_t x788 = 13;
	static volatile uint32_t t114 = 1U;

    t114 = ((x785<<(x786!=x787))/x788);

    if (t114 != 330382099U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	int16_t x798 = -5659;
	uint32_t t115 = 831U;

    t115 = ((x797<<(x798!=x799))/x800);

    if (t115 != 1U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x801 = 30467043U;
	static volatile uint16_t x802 = 27U;
	int64_t x803 = INT64_MIN;
	uint16_t x804 = 61U;
	volatile uint32_t t116 = 1493U;

    t116 = ((x801<<(x802!=x803))/x804);

    if (t116 != 998919U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x805 = INT8_MAX;
	static int32_t x806 = -106488946;
	volatile uint8_t x807 = UINT8_MAX;
	int64_t x808 = INT64_MIN;
	static volatile int64_t t117 = -51378028721LL;

    t117 = ((x805<<(x806!=x807))/x808);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x810 = 10;
	int64_t x811 = INT64_MIN;
	int64_t x812 = INT64_MAX;
	volatile int64_t t118 = 253931LL;

    t118 = ((x809<<(x810!=x811))/x812);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x814 = INT8_MIN;
	volatile uint32_t t119 = 244790329U;

    t119 = ((x813<<(x814!=x815))/x816);

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x821 = 80U;
	static int8_t x823 = -23;
	int16_t x824 = -1;
	int32_t t120 = -1301228;

    t120 = ((x821<<(x822!=x823))/x824);

    if (t120 != -160) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x825 = 1U;
	uint32_t x826 = 184U;
	static uint32_t x827 = UINT32_MAX;
	int32_t x828 = -1;

    t121 = ((x825<<(x826!=x827))/x828);

    if (t121 != -2) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x829 = 19741LLU;
	int32_t x830 = -1019047;
	uint32_t x831 = 0U;
	volatile int32_t x832 = INT32_MIN;
	volatile uint64_t t122 = 1214311LLU;

    t122 = ((x829<<(x830!=x831))/x832);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x853 = 850U;
	int16_t x855 = INT16_MIN;
	int16_t x856 = INT16_MIN;
	int32_t t123 = 25836;

    t123 = ((x853<<(x854!=x855))/x856);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x857 = 3597939U;
	int16_t x858 = INT16_MIN;
	static int8_t x859 = 30;
	uint32_t x860 = 23880464U;

    t124 = ((x857<<(x858!=x859))/x860);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x861 = 28U;
	int16_t x863 = INT16_MIN;
	int8_t x864 = 6;
	int32_t t125 = -27731;

    t125 = ((x861<<(x862!=x863))/x864);

    if (t125 != 9) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x865 = 14367553411LLU;
	uint32_t x866 = 21U;
	volatile int32_t x867 = INT32_MAX;
	int8_t x868 = INT8_MAX;
	uint64_t t126 = 9949986559LLU;

    t126 = ((x865<<(x866!=x867))/x868);

    if (t126 != 226260683LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x871 = INT64_MIN;
	uint64_t x872 = UINT64_MAX;

    t127 = ((x869<<(x870!=x871))/x872);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x873 = 12U;
	uint8_t x874 = 1U;
	int16_t x876 = 14;

    t128 = ((x873<<(x874!=x875))/x876);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x890 = -1;
	volatile int8_t x891 = 6;
	int64_t x892 = 103LL;

    t129 = ((x889<<(x890!=x891))/x892);

    if (t129 != 37151467551349662LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x913 = UINT64_MAX;
	static volatile uint64_t x915 = UINT64_MAX;
	int64_t x916 = INT64_MIN;
	static uint64_t t130 = 4LLU;

    t130 = ((x913<<(x914!=x915))/x916);

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x921 = 78U;
	volatile uint16_t x923 = 5U;

    t131 = ((x921<<(x922!=x923))/x924);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x925 = 1235043870891341743LLU;
	int32_t x926 = INT32_MIN;
	uint16_t x927 = 52U;
	static int32_t x928 = INT32_MIN;
	uint64_t t132 = 883274LLU;

    t132 = ((x925<<(x926!=x927))/x928);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x929 = UINT64_MAX;
	static volatile uint8_t x930 = 71U;
	int8_t x932 = -1;

    t133 = ((x929<<(x930!=x931))/x932);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x946 = -1;
	volatile uint8_t x947 = UINT8_MAX;
	int16_t x948 = INT16_MAX;
	volatile int32_t t134 = 124;

    t134 = ((x945<<(x946!=x947))/x948);

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x949 = UINT64_MAX;
	uint32_t x950 = 555356638U;
	uint32_t x951 = UINT32_MAX;
	int64_t x952 = 1024295625748732LL;

    t135 = ((x949<<(x950!=x951))/x952);

    if (t135 != 18009LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x953 = 87U;
	static uint32_t x955 = 33U;
	int8_t x956 = INT8_MIN;
	int32_t t136 = -944267;

    t136 = ((x953<<(x954!=x955))/x956);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x962 = 98709438574LLU;
	int16_t x963 = 445;
	static volatile int64_t x964 = -1LL;
	int64_t t137 = -118531679985LL;

    t137 = ((x961<<(x962!=x963))/x964);

    if (t137 != -254LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x968 = 5U;
	volatile int32_t t138 = 2;

    t138 = ((x965<<(x966!=x967))/x968);

    if (t138 != 26214) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x997 = 951061128;
	int16_t x998 = 1108;
	int32_t x999 = INT32_MIN;
	int8_t x1000 = -3;
	volatile int32_t t139 = -500314564;

    t139 = ((x997<<(x998!=x999))/x1000);

    if (t139 != -634040752) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x1010 = UINT16_MAX;
	uint64_t t140 = 814LLU;

    t140 = ((x1009<<(x1010!=x1011))/x1012);

    if (t140 != 38LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1013 = 971851965U;
	int16_t x1014 = 6052;
	int64_t x1015 = INT64_MAX;
	static int16_t x1016 = -1;

    t141 = ((x1013<<(x1014!=x1015))/x1016);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x1037 = 3U;
	int8_t x1038 = -1;
	int32_t x1039 = -31260;
	volatile int32_t x1040 = INT32_MIN;
	volatile int32_t t142 = -1;

    t142 = ((x1037<<(x1038!=x1039))/x1040);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1042 = 877092670LLU;
	int32_t x1043 = 448133891;
	volatile int8_t x1044 = -1;
	volatile int32_t t143 = -60;

    t143 = ((x1041<<(x1042!=x1043))/x1044);

    if (t143 != -90) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1049 = 50U;
	uint8_t x1050 = 45U;
	uint8_t x1051 = UINT8_MAX;
	int64_t x1052 = -1LL;
	int64_t t144 = -4LL;

    t144 = ((x1049<<(x1050!=x1051))/x1052);

    if (t144 != -100LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1057 = 84U;
	uint8_t x1058 = UINT8_MAX;
	static int8_t x1059 = INT8_MIN;
	int8_t x1060 = 1;
	volatile uint32_t t145 = 96967908U;

    t145 = ((x1057<<(x1058!=x1059))/x1060);

    if (t145 != 168U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1065 = UINT16_MAX;
	int16_t x1068 = INT16_MIN;
	static volatile int32_t t146 = 1;

    t146 = ((x1065<<(x1066!=x1067))/x1068);

    if (t146 != -3) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1086 = UINT64_MAX;
	int32_t x1087 = 268639318;
	uint16_t x1088 = 475U;
	volatile uint64_t t147 = 818676LLU;

    t147 = ((x1085<<(x1086!=x1087))/x1088);

    if (t147 != 159510033211LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1089 = 1U;
	int32_t x1090 = -1;
	static uint8_t x1092 = 14U;
	int32_t t148 = -1;

    t148 = ((x1089<<(x1090!=x1091))/x1092);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1102 = INT16_MAX;
	volatile int32_t x1103 = INT32_MIN;
	uint8_t x1104 = UINT8_MAX;
	volatile int32_t t149 = 6973;

    t149 = ((x1101<<(x1102!=x1103))/x1104);

    if (t149 != 31) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x1135 = UINT64_MAX;
	int16_t x1136 = INT16_MIN;
	static volatile int32_t t150 = -8523;

    t150 = ((x1133<<(x1134!=x1135))/x1136);

    if (t150 != -3) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1141 = 230131LLU;
	int8_t x1142 = INT8_MAX;
	uint8_t x1143 = 2U;
	int16_t x1144 = INT16_MAX;
	uint64_t t151 = 27028844606783707LLU;

    t151 = ((x1141<<(x1142!=x1143))/x1144);

    if (t151 != 14LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x1149 = 35;
	volatile int64_t x1151 = 427037410566503001LL;
	uint16_t x1152 = 2310U;

    t152 = ((x1149<<(x1150!=x1151))/x1152);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1153 = 459367390153LLU;
	int32_t x1154 = INT32_MAX;
	volatile int16_t x1155 = 4422;
	int8_t x1156 = INT8_MIN;
	uint64_t t153 = 9986106861802LLU;

    t153 = ((x1153<<(x1154!=x1155))/x1156);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x1157 = 1848208316964838229LL;
	int64_t x1158 = -1LL;
	int8_t x1160 = INT8_MIN;

    t154 = ((x1157<<(x1158!=x1159))/x1160);

    if (t154 != -14439127476287798LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x1161 = INT16_MAX;
	int16_t x1162 = INT16_MAX;
	int64_t x1163 = INT64_MIN;
	volatile int16_t x1164 = -2;

    t155 = ((x1161<<(x1162!=x1163))/x1164);

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x1165 = 11529772U;
	int64_t x1166 = INT64_MIN;
	int16_t x1167 = INT16_MIN;
	volatile int16_t x1168 = INT16_MAX;
	volatile uint32_t t156 = 841U;

    t156 = ((x1165<<(x1166!=x1167))/x1168);

    if (t156 != 703U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1169 = INT64_MAX;
	volatile int8_t x1170 = -1;
	int64_t x1171 = -1LL;
	uint16_t x1172 = 12U;
	static volatile int64_t t157 = -1574138LL;

    t157 = ((x1169<<(x1170!=x1171))/x1172);

    if (t157 != 768614336404564650LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x1173 = 5U;
	volatile int32_t x1174 = -149049;
	uint32_t x1175 = 13U;

    t158 = ((x1173<<(x1174!=x1175))/x1176);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1182 = INT16_MAX;
	int32_t x1184 = INT32_MIN;
	uint32_t t159 = 187U;

    t159 = ((x1181<<(x1182!=x1183))/x1184);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1189 = 49432611034LLU;
	static int16_t x1190 = 0;
	static int32_t x1191 = -224;
	static int64_t x1192 = -835475LL;
	static uint64_t t160 = 95LLU;

    t160 = ((x1189<<(x1190!=x1191))/x1192);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x1230 = -12;
	int64_t x1231 = 3318038308132323296LL;
	int16_t x1232 = INT16_MIN;
	volatile int32_t t161 = 10858;

    t161 = ((x1229<<(x1230!=x1231))/x1232);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1237 = 542924;
	int8_t x1238 = -3;
	uint8_t x1239 = UINT8_MAX;
	int8_t x1240 = 5;
	volatile int32_t t162 = -1;

    t162 = ((x1237<<(x1238!=x1239))/x1240);

    if (t162 != 217169) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x1257 = 367U;
	volatile int64_t x1258 = INT64_MIN;
	int64_t x1259 = 3LL;
	int32_t x1260 = 34;
	int32_t t163 = 143;

    t163 = ((x1257<<(x1258!=x1259))/x1260);

    if (t163 != 21) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1269 = UINT16_MAX;
	uint64_t x1271 = UINT64_MAX;
	int64_t x1272 = INT64_MAX;
	static int64_t t164 = 260LL;

    t164 = ((x1269<<(x1270!=x1271))/x1272);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x1289 = 23297798106892LL;
	int32_t x1290 = 182745805;
	int8_t x1291 = INT8_MIN;
	uint16_t x1292 = 6757U;
	static int64_t t165 = -551276LL;

    t165 = ((x1289<<(x1290!=x1291))/x1292);

    if (t165 != 6895899987LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1294 = 11;
	int16_t x1295 = INT16_MIN;
	int64_t x1296 = -180763356737667954LL;
	volatile int64_t t166 = -8145763713LL;

    t166 = ((x1293<<(x1294!=x1295))/x1296);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1297 = INT8_MAX;
	static int8_t x1298 = INT8_MIN;
	int64_t x1299 = -50768LL;
	uint32_t t167 = 1453764803U;

    t167 = ((x1297<<(x1298!=x1299))/x1300);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1302 = 2U;
	static int16_t x1304 = INT16_MIN;

    t168 = ((x1301<<(x1302!=x1303))/x1304);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1305 = 359123228LL;
	static int64_t x1306 = 3519LL;
	uint32_t x1308 = 3043U;
	volatile int64_t t169 = -45264346952678375LL;

    t169 = ((x1305<<(x1306!=x1307))/x1308);

    if (t169 != 236032LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1309 = 3U;
	int32_t x1310 = INT32_MAX;
	uint64_t t170 = 91844383509345LLU;

    t170 = ((x1309<<(x1310!=x1311))/x1312);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1313 = 255000471U;
	uint64_t x1314 = UINT64_MAX;
	int32_t x1315 = INT32_MIN;
	uint8_t x1316 = 1U;
	uint32_t t171 = 273496U;

    t171 = ((x1313<<(x1314!=x1315))/x1316);

    if (t171 != 510000942U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1321 = UINT8_MAX;
	static uint16_t x1322 = 6U;
	int8_t x1323 = INT8_MAX;
	uint32_t x1324 = 11304U;
	static uint32_t t172 = 5U;

    t172 = ((x1321<<(x1322!=x1323))/x1324);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x1325 = 338732145828LLU;
	int16_t x1326 = INT16_MAX;
	static volatile int8_t x1327 = INT8_MIN;
	int64_t x1328 = 1466983534LL;
	uint64_t t173 = 573260329179061459LLU;

    t173 = ((x1325<<(x1326!=x1327))/x1328);

    if (t173 != 461LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1350 = INT8_MIN;
	uint64_t x1351 = UINT64_MAX;
	int16_t x1352 = INT16_MIN;
	int32_t t174 = -625789310;

    t174 = ((x1349<<(x1350!=x1351))/x1352);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1353 = 1;
	uint32_t x1354 = 158255U;
	volatile int64_t t175 = 307649074342115908LL;

    t175 = ((x1353<<(x1354!=x1355))/x1356);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1369 = 7U;
	int64_t x1370 = -1LL;
	int64_t x1371 = 1282297227786910LL;
	static int16_t x1372 = -1;
	volatile int32_t t176 = 5491824;

    t176 = ((x1369<<(x1370!=x1371))/x1372);

    if (t176 != -14) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x1382 = -62;
	volatile int8_t x1383 = INT8_MAX;
	int8_t x1384 = -2;
	uint32_t t177 = 1580341U;

    t177 = ((x1381<<(x1382!=x1383))/x1384);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1389 = 1147563U;
	volatile uint8_t x1390 = UINT8_MAX;
	uint32_t x1391 = 348776907U;
	int64_t x1392 = 5210063314LL;
	int64_t t178 = 1427948785120125227LL;

    t178 = ((x1389<<(x1390!=x1391))/x1392);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x1397 = UINT32_MAX;
	volatile int8_t x1398 = INT8_MIN;
	volatile int16_t x1400 = -1;
	uint32_t t179 = 31087U;

    t179 = ((x1397<<(x1398!=x1399))/x1400);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x1402 = INT8_MIN;
	int8_t x1403 = -49;

    t180 = ((x1401<<(x1402!=x1403))/x1404);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1405 = 313;
	uint8_t x1406 = 3U;
	int8_t x1407 = INT8_MIN;
	volatile int32_t t181 = 71631770;

    t181 = ((x1405<<(x1406!=x1407))/x1408);

    if (t181 != -208) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1409 = 13U;
	static int16_t x1410 = -1;
	int16_t x1411 = INT16_MIN;
	int64_t x1412 = -1LL;

    t182 = ((x1409<<(x1410!=x1411))/x1412);

    if (t182 != -26LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1413 = 9195U;
	int16_t x1414 = INT16_MIN;
	uint8_t x1416 = UINT8_MAX;
	volatile int32_t t183 = -55344438;

    t183 = ((x1413<<(x1414!=x1415))/x1416);

    if (t183 != 72) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1425 = 7U;
	int32_t x1427 = -1;
	int32_t x1428 = -1;
	int32_t t184 = 171;

    t184 = ((x1425<<(x1426!=x1427))/x1428);

    if (t184 != -14) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1429 = 0;
	static int64_t x1430 = 9960LL;
	volatile int32_t x1431 = -1;
	uint64_t x1432 = UINT64_MAX;
	uint64_t t185 = 1636042481955158LLU;

    t185 = ((x1429<<(x1430!=x1431))/x1432);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1434 = 21;
	int64_t x1436 = INT64_MAX;
	int64_t t186 = -69753861536630LL;

    t186 = ((x1433<<(x1434!=x1435))/x1436);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1449 = 15U;
	static int32_t x1450 = -1;
	static uint64_t x1451 = 3242190896298LLU;
	uint64_t x1452 = 3693192297320574116LLU;
	uint64_t t187 = 3709LLU;

    t187 = ((x1449<<(x1450!=x1451))/x1452);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1453 = UINT32_MAX;
	static volatile uint32_t x1455 = UINT32_MAX;
	static volatile int64_t t188 = 52204763289880LL;

    t188 = ((x1453<<(x1454!=x1455))/x1456);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1461 = 2735909508470LLU;
	int64_t x1462 = -1LL;
	int64_t x1463 = INT64_MIN;
	static uint64_t x1464 = 2496853332LLU;
	volatile uint64_t t189 = 481276885LLU;

    t189 = ((x1461<<(x1462!=x1463))/x1464);

    if (t189 != 2191LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1473 = 0U;
	volatile int64_t x1474 = INT64_MAX;
	uint8_t x1476 = 89U;
	static int32_t t190 = 1;

    t190 = ((x1473<<(x1474!=x1475))/x1476);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1477 = 5126;
	uint64_t x1478 = 431868404LLU;
	static int32_t x1479 = -1;
	static int64_t x1480 = INT64_MIN;
	volatile int64_t t191 = -1050402LL;

    t191 = ((x1477<<(x1478!=x1479))/x1480);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1485 = 3;
	uint32_t x1486 = 2462462U;
	int32_t x1487 = 11;
	int32_t t192 = 249;

    t192 = ((x1485<<(x1486!=x1487))/x1488);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1489 = 44U;
	int64_t x1490 = -1LL;
	static int32_t x1491 = INT32_MAX;
	volatile int32_t t193 = 1;

    t193 = ((x1489<<(x1490!=x1491))/x1492);

    if (t193 != -88) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1497 = 1;
	static int32_t x1499 = INT32_MIN;
	static uint32_t x1500 = UINT32_MAX;

    t194 = ((x1497<<(x1498!=x1499))/x1500);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1513 = UINT8_MAX;
	int32_t x1514 = INT32_MAX;
	uint8_t x1515 = 31U;
	uint32_t x1516 = UINT32_MAX;
	uint32_t t195 = 769130U;

    t195 = ((x1513<<(x1514!=x1515))/x1516);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1525 = 1748567556227LLU;
	volatile int64_t x1526 = INT64_MIN;
	int64_t x1528 = INT64_MIN;
	volatile uint64_t t196 = 2438814LLU;

    t196 = ((x1525<<(x1526!=x1527))/x1528);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1529 = INT16_MAX;
	static int64_t x1531 = INT64_MAX;
	int8_t x1532 = INT8_MIN;

    t197 = ((x1529<<(x1530!=x1531))/x1532);

    if (t197 != -511) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1534 = 434;
	static int8_t x1535 = -1;
	int16_t x1536 = INT16_MAX;

    t198 = ((x1533<<(x1534!=x1535))/x1536);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1541 = 35U;
	int64_t x1542 = INT64_MAX;
	int64_t x1543 = INT64_MIN;
	int8_t x1544 = INT8_MAX;
	static volatile uint32_t t199 = 49852730U;

    t199 = ((x1541<<(x1542!=x1543))/x1544);

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

