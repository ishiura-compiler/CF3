
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

volatile int16_t x3 = INT16_MAX;
volatile int64_t x6 = INT64_MAX;
int32_t x8 = -1;
int32_t x9 = 28018;
int8_t x10 = INT8_MAX;
uint64_t x11 = 17103LLU;
static uint8_t x19 = 85U;
static int8_t x20 = INT8_MIN;
int64_t x27 = -18781854914LL;
int32_t t8 = -1010019;
int64_t x54 = -1336LL;
int8_t x58 = -1;
int64_t x63 = -1LL;
uint32_t x79 = UINT32_MAX;
int64_t x83 = -750LL;
int32_t t16 = -1;
uint64_t x96 = UINT64_MAX;
static int8_t x108 = INT8_MAX;
int32_t t22 = 2;
static int64_t x115 = INT64_MAX;
uint16_t x116 = UINT16_MAX;
volatile uint64_t x118 = UINT64_MAX;
int64_t x119 = -1LL;
uint8_t x120 = UINT8_MAX;
static int32_t t24 = -435023;
int16_t x137 = -1;
int64_t x142 = -1LL;
int8_t x143 = 1;
int8_t x158 = INT8_MAX;
int16_t x164 = INT16_MIN;
uint8_t x165 = 2U;
static volatile int32_t t35 = -1;
int8_t x174 = INT8_MIN;
static uint8_t x176 = 17U;
int8_t x187 = 2;
static volatile int16_t x203 = INT16_MIN;
volatile int32_t t43 = -294;
int32_t x205 = INT32_MIN;
uint8_t x209 = 19U;
volatile int8_t x215 = 0;
int32_t t49 = 1049;
int8_t x234 = 1;
uint8_t x236 = 97U;
int16_t x237 = INT16_MIN;
uint64_t x240 = UINT64_MAX;
int8_t x244 = -3;
volatile int16_t x255 = INT16_MAX;
int64_t x259 = INT64_MIN;
uint16_t x261 = 2U;
int64_t x262 = 184LL;
volatile int32_t x264 = -5640;
int32_t x268 = INT32_MAX;
int8_t x278 = INT8_MIN;
volatile int32_t t61 = -919111;
int32_t x293 = 962171;
volatile int32_t t65 = 0;
int16_t x303 = INT16_MIN;
int32_t x304 = 1;
int64_t x306 = 9433LL;
volatile int32_t x307 = 0;
int16_t x308 = 0;
uint16_t x310 = UINT16_MAX;
volatile uint64_t x324 = 33808158766441989LLU;
uint64_t x327 = UINT64_MAX;
volatile int32_t t71 = 1453249;
int8_t x329 = INT8_MAX;
int32_t t74 = 44483;
static uint64_t x353 = 3313283LLU;
uint32_t x359 = 7069U;
static uint32_t x365 = 20153834U;
int32_t t81 = 396;
uint32_t x378 = 6623162U;
volatile int16_t x380 = -1;
int16_t x384 = INT16_MIN;
int32_t x390 = 12375452;
static uint64_t x391 = 56198992LLU;
int32_t x393 = -1;
static int32_t x395 = 16144250;
int64_t x396 = -585172780LL;
static uint64_t x406 = 51657LLU;
static uint16_t x410 = 3581U;
int32_t x413 = 2;
volatile int32_t t91 = 2028786;
uint32_t x426 = UINT32_MAX;
uint8_t x428 = 39U;
volatile int8_t x431 = -30;
int32_t x433 = -1;
static volatile int32_t x441 = -1;
static uint64_t x444 = 9339700809LLU;
volatile int32_t t100 = 25537475;
static int16_t x465 = 90;
volatile int32_t t103 = 118029798;
int8_t x479 = 1;
static int16_t x481 = 129;
static volatile uint32_t x488 = UINT32_MAX;
static volatile int32_t t110 = 445;
uint32_t x506 = 49621231U;
volatile uint8_t x509 = 10U;
int32_t x514 = INT32_MAX;
static int32_t t114 = -21937;
int32_t x528 = INT32_MAX;
uint64_t x531 = 3788700LLU;
uint32_t x534 = UINT32_MAX;
static int16_t x536 = -1;
int8_t x537 = INT8_MAX;
int64_t x538 = -32357LL;
int32_t x541 = 14510059;
int32_t t121 = 44038065;
volatile int32_t t122 = 181;
static int64_t x557 = -1LL;
int8_t x558 = -13;
uint32_t x561 = 5627U;
int32_t t126 = 1;
static volatile uint16_t x569 = 824U;
volatile int16_t x575 = INT16_MIN;
int32_t t128 = 668153;
int8_t x584 = -1;
static int16_t x593 = INT16_MAX;
int32_t t133 = -9;
uint8_t x606 = 14U;
int32_t t136 = 197;
volatile int32_t t138 = 2511;
int32_t x629 = -1;
volatile int32_t x631 = -1;
int64_t x642 = -1LL;
static uint16_t x645 = 935U;
uint32_t x650 = UINT32_MAX;
static int32_t x652 = 425189;
int32_t t147 = 302;
static volatile int8_t x661 = INT8_MIN;
static int8_t x664 = 61;
uint8_t x672 = 20U;
int32_t x674 = -1;
int8_t x680 = INT8_MIN;
int16_t x682 = 4014;
int64_t x683 = INT64_MIN;
uint8_t x685 = 45U;
volatile uint8_t x689 = 1U;
int16_t x690 = INT16_MIN;
uint32_t x691 = 464576006U;
volatile uint16_t x696 = UINT16_MAX;
uint8_t x701 = UINT8_MAX;
volatile int8_t x704 = 42;
int32_t t159 = 3907840;
int64_t x713 = -147170567998962LL;
volatile uint32_t x722 = 126946U;
int16_t x724 = -1;
volatile int32_t t164 = -7;
uint8_t x738 = 0U;
static int32_t t167 = -917938;
int64_t x743 = INT64_MIN;
volatile uint16_t x744 = 226U;
int64_t x746 = INT64_MIN;
static uint8_t x749 = UINT8_MAX;
uint8_t x751 = 30U;
volatile int8_t x752 = INT8_MIN;
volatile int32_t t172 = 1272336;
int64_t x767 = -1LL;
static int32_t t174 = 12825;
volatile int32_t t175 = -3290610;
uint8_t x774 = 9U;
int8_t x784 = INT8_MIN;
volatile uint16_t x792 = UINT16_MAX;
int16_t x800 = 451;
volatile int32_t t181 = 115;
volatile int32_t t182 = -11;
int32_t x820 = 2575555;
int32_t t186 = -6;
volatile int32_t t187 = 119849485;
int16_t x827 = 421;
int8_t x829 = 2;
uint64_t x833 = UINT64_MAX;
static int64_t x835 = INT64_MIN;
volatile int8_t x851 = INT8_MIN;
int32_t x862 = INT32_MIN;
static volatile uint32_t x863 = 3U;
int32_t t196 = 1405;
int32_t x877 = 1;


void f0(void) {
    	static uint32_t x1 = 11864U;
	int16_t x2 = -52;
	static uint64_t x4 = 168LLU;
	static volatile int32_t t0 = 47093;

    t0 = (((x1+x2)^x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int16_t x7 = INT16_MIN;
	int32_t t1 = -33763;

    t1 = (((x5+x6)^x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x12 = -1;
	int32_t t2 = -112546786;

    t2 = (((x9+x10)^x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 17U;
	uint32_t x18 = UINT32_MAX;
	int32_t t3 = -312022;

    t3 = (((x17+x18)^x19)<=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = 1;
	static int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t4 = -73137;

    t4 = (((x21+x22)^x23)<=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = 2;
	uint8_t x26 = UINT8_MAX;
	int16_t x28 = -21;
	int32_t t5 = 482;

    t5 = (((x25+x26)^x27)<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MAX;
	static int16_t x30 = -9;
	volatile int64_t x31 = 54643858647LL;
	int32_t x32 = 0;
	int32_t t6 = 166;

    t6 = (((x29+x30)^x31)<=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = INT32_MIN;
	uint32_t x34 = 29U;
	volatile uint32_t x35 = 29236U;
	int16_t x36 = INT16_MIN;
	int32_t t7 = -37885768;

    t7 = (((x33+x34)^x35)<=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MAX;
	static volatile int32_t x38 = -1;
	int32_t x39 = INT32_MIN;
	volatile int8_t x40 = INT8_MAX;

    t8 = (((x37+x38)^x39)<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x45 = 74492731160409LL;
	int16_t x46 = INT16_MIN;
	int32_t x47 = 1;
	volatile int32_t x48 = 122;
	static int32_t t9 = -2652;

    t9 = (((x45+x46)^x47)<=x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x53 = -1LL;
	uint8_t x55 = 2U;
	static uint64_t x56 = 11770665470LLU;
	int32_t t10 = -2768;

    t10 = (((x53+x54)^x55)<=x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x57 = -1;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;
	volatile int32_t t11 = 757634;

    t11 = (((x57+x58)^x59)<=x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = 18;
	uint16_t x62 = UINT16_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t12 = 537;

    t12 = (((x61+x62)^x63)<=x64);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x65 = 1021LLU;
	static volatile uint64_t x66 = UINT64_MAX;
	volatile int64_t x67 = INT64_MAX;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t13 = 132977544;

    t13 = (((x65+x66)^x67)<=x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = 12249509;
	uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 40U;
	int16_t x72 = 0;
	static volatile int32_t t14 = -4;

    t14 = (((x69+x70)^x71)<=x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x77 = 7394LLU;
	int64_t x78 = INT64_MAX;
	volatile uint64_t x80 = UINT64_MAX;
	static int32_t t15 = -39;

    t15 = (((x77+x78)^x79)<=x80);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x81 = 71;
	int64_t x82 = -112437330361LL;
	int16_t x84 = 44;

    t16 = (((x81+x82)^x83)<=x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x85 = UINT32_MAX;
	uint64_t x86 = 45906LLU;
	uint64_t x87 = UINT64_MAX;
	static uint64_t x88 = 120320466765LLU;
	int32_t t17 = -602279;

    t17 = (((x85+x86)^x87)<=x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x89 = 550146508;
	volatile int32_t x90 = INT32_MIN;
	volatile int16_t x91 = -1;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t18 = 374;

    t18 = (((x89+x90)^x91)<=x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MIN;
	volatile int32_t t19 = 3918210;

    t19 = (((x93+x94)^x95)<=x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile uint64_t x102 = 219025LLU;
	uint64_t x103 = 234882943028580LLU;
	int64_t x104 = INT64_MAX;
	int32_t t20 = 5;

    t20 = (((x101+x102)^x103)<=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x105 = 1;
	static int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	volatile int32_t t21 = 1909669;

    t21 = (((x105+x106)^x107)<=x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x109 = 1170674764187LL;
	int8_t x110 = INT8_MIN;
	int64_t x111 = 471LL;
	int32_t x112 = INT32_MAX;

    t22 = (((x109+x110)^x111)<=x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	int32_t x114 = -1;
	volatile int32_t t23 = -418246035;

    t23 = (((x113+x114)^x115)<=x116);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x117 = INT64_MIN;

    t24 = (((x117+x118)^x119)<=x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x121 = INT16_MIN;
	int16_t x122 = -15264;
	static uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MIN;
	static volatile int32_t t25 = 39616;

    t25 = (((x121+x122)^x123)<=x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x125 = INT32_MIN;
	uint8_t x126 = 98U;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t26 = -103632;

    t26 = (((x125+x126)^x127)<=x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x138 = UINT64_MAX;
	volatile int64_t x139 = INT64_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t27 = 18056255;

    t27 = (((x137+x138)^x139)<=x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x141 = -1;
	static volatile uint16_t x144 = 80U;
	static int32_t t28 = 14;

    t28 = (((x141+x142)^x143)<=x144);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 17U;
	volatile int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	int32_t t29 = 1497080;

    t29 = (((x145+x146)^x147)<=x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x149 = 31LL;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -15175;
	volatile int64_t x152 = -1LL;
	volatile int32_t t30 = 1;

    t30 = (((x149+x150)^x151)<=x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x153 = 2U;
	int8_t x154 = INT8_MAX;
	static volatile int64_t x155 = INT64_MIN;
	static uint64_t x156 = 6602LLU;
	volatile int32_t t31 = -803766;

    t31 = (((x153+x154)^x155)<=x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x157 = -602322904005012996LL;
	uint8_t x159 = 3U;
	int64_t x160 = -25863LL;
	int32_t t32 = 56;

    t32 = (((x157+x158)^x159)<=x160);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x161 = 14U;
	volatile int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	volatile int32_t t33 = 1366;

    t33 = (((x161+x162)^x163)<=x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x166 = INT8_MAX;
	static int16_t x167 = INT16_MAX;
	uint8_t x168 = UINT8_MAX;
	static volatile int32_t t34 = -1464996;

    t34 = (((x165+x166)^x167)<=x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x169 = 13U;
	uint64_t x170 = UINT64_MAX;
	static int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MAX;

    t35 = (((x169+x170)^x171)<=x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x173 = 222U;
	volatile int64_t x175 = INT64_MAX;
	int32_t t36 = -191389;

    t36 = (((x173+x174)^x175)<=x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = -1;
	static volatile uint64_t x180 = UINT64_MAX;
	volatile int32_t t37 = 229;

    t37 = (((x177+x178)^x179)<=x180);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x181 = INT32_MIN;
	static uint32_t x182 = 191U;
	volatile int8_t x183 = -1;
	int64_t x184 = 38678084052427166LL;
	volatile int32_t t38 = -141420;

    t38 = (((x181+x182)^x183)<=x184);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = INT16_MAX;
	static int16_t x186 = INT16_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t39 = -2;

    t39 = (((x185+x186)^x187)<=x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = 1006555;
	uint8_t x190 = 27U;
	uint64_t x191 = 2155685785755LLU;
	int8_t x192 = INT8_MIN;
	int32_t t40 = -986017043;

    t40 = (((x189+x190)^x191)<=x192);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = -1;
	volatile uint8_t x194 = 4U;
	volatile uint8_t x195 = 83U;
	volatile int16_t x196 = 3128;
	volatile int32_t t41 = -12;

    t41 = (((x193+x194)^x195)<=x196);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x197 = INT16_MIN;
	int8_t x198 = -49;
	uint16_t x199 = 1U;
	int16_t x200 = -1677;
	static volatile int32_t t42 = -526928;

    t42 = (((x197+x198)^x199)<=x200);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x201 = INT64_MAX;
	uint64_t x202 = 3800182LLU;
	int64_t x204 = -76388LL;

    t43 = (((x201+x202)^x203)<=x204);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x206 = UINT16_MAX;
	int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	volatile int32_t t44 = 978142;

    t44 = (((x205+x206)^x207)<=x208);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x210 = -3;
	int32_t x211 = -502298;
	uint16_t x212 = 181U;
	volatile int32_t t45 = 0;

    t45 = (((x209+x210)^x211)<=x212);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	uint64_t x214 = 35445572650199938LLU;
	int64_t x216 = INT64_MIN;
	static int32_t t46 = -496272379;

    t46 = (((x213+x214)^x215)<=x216);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = 721U;
	int16_t x223 = -1;
	int64_t x224 = INT64_MAX;
	volatile int32_t t47 = -112;

    t47 = (((x221+x222)^x223)<=x224);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x225 = INT16_MIN;
	int64_t x226 = -1LL;
	int32_t x227 = -1;
	int8_t x228 = -1;
	int32_t t48 = -603;

    t48 = (((x225+x226)^x227)<=x228);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x229 = -23414186581LL;
	static uint32_t x230 = 118U;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 7956;

    t49 = (((x229+x230)^x231)<=x232);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x233 = 3U;
	int32_t x235 = 0;
	int32_t t50 = 84;

    t50 = (((x233+x234)^x235)<=x236);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = INT64_MIN;
	volatile int32_t t51 = -19015667;

    t51 = (((x237+x238)^x239)<=x240);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x241 = INT32_MIN;
	static volatile uint32_t x242 = 19893771U;
	int64_t x243 = -320182358838662LL;
	static int32_t t52 = 250468;

    t52 = (((x241+x242)^x243)<=x244);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x245 = -1LL;
	static int64_t x246 = INT64_MAX;
	uint16_t x247 = 3U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t53 = 113239;

    t53 = (((x245+x246)^x247)<=x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	uint32_t x250 = 899176U;
	int16_t x251 = INT16_MIN;
	int32_t x252 = -1;
	volatile int32_t t54 = 763794624;

    t54 = (((x249+x250)^x251)<=x252);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x253 = -1;
	int8_t x254 = INT8_MAX;
	int64_t x256 = -843620857740LL;
	volatile int32_t t55 = -1;

    t55 = (((x253+x254)^x255)<=x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x257 = -1;
	uint32_t x258 = 1036U;
	static volatile uint16_t x260 = 816U;
	volatile int32_t t56 = 228;

    t56 = (((x257+x258)^x259)<=x260);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x263 = -15;
	volatile int32_t t57 = 126425387;

    t57 = (((x261+x262)^x263)<=x264);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x265 = -1;
	uint64_t x266 = 191207219530LLU;
	static int8_t x267 = -1;
	int32_t t58 = -220831;

    t58 = (((x265+x266)^x267)<=x268);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x269 = INT16_MAX;
	uint64_t x270 = 8082852679265LLU;
	static volatile int32_t x271 = INT32_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t59 = 477;

    t59 = (((x269+x270)^x271)<=x272);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -1;
	volatile int32_t t60 = 7;

    t60 = (((x273+x274)^x275)<=x276);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x277 = -10860;
	uint16_t x279 = 77U;
	volatile int16_t x280 = INT16_MAX;

    t61 = (((x277+x278)^x279)<=x280);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = INT16_MIN;
	volatile int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	int32_t x284 = -1;
	volatile int32_t t62 = 212;

    t62 = (((x281+x282)^x283)<=x284);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = INT16_MAX;
	volatile int8_t x286 = INT8_MIN;
	int16_t x287 = 175;
	int16_t x288 = 0;
	static int32_t t63 = 3471227;

    t63 = (((x285+x286)^x287)<=x288);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x294 = INT16_MIN;
	static uint16_t x295 = 1U;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t64 = 0;

    t64 = (((x293+x294)^x295)<=x296);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x297 = -1LL;
	static int8_t x298 = -1;
	volatile int64_t x299 = INT64_MIN;
	int8_t x300 = -1;

    t65 = (((x297+x298)^x299)<=x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x301 = 1U;
	static volatile int8_t x302 = -1;
	int32_t t66 = 2062;

    t66 = (((x301+x302)^x303)<=x304);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x305 = 15160LLU;
	volatile int32_t t67 = -163714;

    t67 = (((x305+x306)^x307)<=x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x309 = -1;
	int64_t x311 = 1660258628834769144LL;
	int64_t x312 = -132LL;
	volatile int32_t t68 = -120765;

    t68 = (((x309+x310)^x311)<=x312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x317 = 117697592835433758LL;
	volatile uint16_t x318 = 22534U;
	int32_t x319 = -9333926;
	static uint16_t x320 = 54U;
	static volatile int32_t t69 = -339;

    t69 = (((x317+x318)^x319)<=x320);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x321 = -1;
	uint32_t x322 = 1773U;
	int64_t x323 = INT64_MAX;
	volatile int32_t t70 = -3989;

    t70 = (((x321+x322)^x323)<=x324);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x325 = INT32_MAX;
	int8_t x326 = -3;
	static int8_t x328 = INT8_MIN;

    t71 = (((x325+x326)^x327)<=x328);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x330 = INT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	volatile int32_t t72 = -122009659;

    t72 = (((x329+x330)^x331)<=x332);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x333 = 236U;
	static int64_t x334 = -3791451155LL;
	static uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 44U;
	volatile int32_t t73 = 135;

    t73 = (((x333+x334)^x335)<=x336);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = 1;
	static volatile uint8_t x338 = UINT8_MAX;
	int64_t x339 = 1344LL;
	uint32_t x340 = 58U;

    t74 = (((x337+x338)^x339)<=x340);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x341 = -596;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	volatile int16_t x344 = INT16_MIN;
	int32_t t75 = 911916;

    t75 = (((x341+x342)^x343)<=x344);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MAX;
	int64_t x347 = -1LL;
	static uint8_t x348 = 30U;
	int32_t t76 = -1688345;

    t76 = (((x345+x346)^x347)<=x348);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x349 = -1;
	int32_t x350 = -1;
	static volatile int64_t x351 = -299285890016LL;
	int16_t x352 = 174;
	int32_t t77 = 1015;

    t77 = (((x349+x350)^x351)<=x352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x354 = INT8_MIN;
	volatile int16_t x355 = -1;
	int16_t x356 = -2647;
	int32_t t78 = -19;

    t78 = (((x353+x354)^x355)<=x356);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x357 = 2U;
	int32_t x358 = -1;
	volatile uint32_t x360 = 1751138839U;
	volatile int32_t t79 = 371928777;

    t79 = (((x357+x358)^x359)<=x360);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -1;
	static uint8_t x362 = UINT8_MAX;
	volatile int16_t x363 = INT16_MIN;
	int32_t x364 = 809768870;
	static int32_t t80 = 41294823;

    t80 = (((x361+x362)^x363)<=x364);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x366 = -1;
	int32_t x367 = -1;
	static uint8_t x368 = 56U;

    t81 = (((x365+x366)^x367)<=x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x373 = -47;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	static uint64_t x376 = UINT64_MAX;
	static volatile int32_t t82 = -38626777;

    t82 = (((x373+x374)^x375)<=x376);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x377 = UINT64_MAX;
	uint32_t x379 = 18U;
	volatile int32_t t83 = 175858;

    t83 = (((x377+x378)^x379)<=x380);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x381 = INT8_MAX;
	volatile int64_t x382 = 552952109516LL;
	static int16_t x383 = INT16_MIN;
	static int32_t t84 = -1;

    t84 = (((x381+x382)^x383)<=x384);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x389 = -4;
	int64_t x392 = 8893019LL;
	volatile int32_t t85 = 226;

    t85 = (((x389+x390)^x391)<=x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x394 = -111190;
	static int32_t t86 = 234;

    t86 = (((x393+x394)^x395)<=x396);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x397 = 928U;
	static int64_t x398 = -64501400919LL;
	volatile uint64_t x399 = UINT64_MAX;
	volatile int8_t x400 = INT8_MIN;
	int32_t t87 = 238;

    t87 = (((x397+x398)^x399)<=x400);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = -1;
	volatile int32_t x407 = -90624;
	static volatile int16_t x408 = INT16_MIN;
	int32_t t88 = 226540;

    t88 = (((x405+x406)^x407)<=x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t89 = -186631839;

    t89 = (((x409+x410)^x411)<=x412);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x414 = 14562708LLU;
	static int32_t x415 = INT32_MAX;
	int64_t x416 = 54528883968526LL;
	int32_t t90 = -734058871;

    t90 = (((x413+x414)^x415)<=x416);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x417 = UINT64_MAX;
	volatile int64_t x418 = -1LL;
	int64_t x419 = -713LL;
	uint16_t x420 = UINT16_MAX;

    t91 = (((x417+x418)^x419)<=x420);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x425 = INT64_MIN;
	uint32_t x427 = UINT32_MAX;
	int32_t t92 = -705049;

    t92 = (((x425+x426)^x427)<=x428);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x429 = 14428759U;
	int32_t x430 = INT32_MIN;
	uint8_t x432 = 3U;
	int32_t t93 = -27659037;

    t93 = (((x429+x430)^x431)<=x432);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x434 = 22;
	int32_t x435 = INT32_MIN;
	volatile int8_t x436 = 1;
	volatile int32_t t94 = 3385908;

    t94 = (((x433+x434)^x435)<=x436);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x437 = 0LLU;
	static int8_t x438 = INT8_MAX;
	int32_t x439 = -1;
	int8_t x440 = -1;
	volatile int32_t t95 = -21247;

    t95 = (((x437+x438)^x439)<=x440);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x442 = -1;
	static int64_t x443 = INT64_MIN;
	int32_t t96 = -36992;

    t96 = (((x441+x442)^x443)<=x444);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x445 = INT8_MIN;
	static uint64_t x446 = UINT64_MAX;
	int32_t x447 = INT32_MIN;
	int8_t x448 = 0;
	volatile int32_t t97 = 2088;

    t97 = (((x445+x446)^x447)<=x448);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x453 = UINT16_MAX;
	int64_t x454 = -1LL;
	int32_t x455 = -1;
	volatile uint16_t x456 = 9U;
	volatile int32_t t98 = -318;

    t98 = (((x453+x454)^x455)<=x456);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x457 = INT8_MIN;
	static int16_t x458 = INT16_MIN;
	volatile int64_t x459 = -1LL;
	int16_t x460 = -1;
	volatile int32_t t99 = -395;

    t99 = (((x457+x458)^x459)<=x460);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x461 = 29212U;
	uint64_t x462 = 13972133LLU;
	int32_t x463 = -1;
	int16_t x464 = -238;

    t100 = (((x461+x462)^x463)<=x464);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x466 = INT64_MIN;
	int16_t x467 = -7123;
	int16_t x468 = -1380;
	volatile int32_t t101 = -16391110;

    t101 = (((x465+x466)^x467)<=x468);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x469 = UINT16_MAX;
	int8_t x470 = INT8_MIN;
	volatile int16_t x471 = INT16_MAX;
	int64_t x472 = -1LL;
	volatile int32_t t102 = 0;

    t102 = (((x469+x470)^x471)<=x472);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x473 = UINT64_MAX;
	static int8_t x474 = INT8_MIN;
	volatile uint8_t x475 = 2U;
	int8_t x476 = INT8_MIN;

    t103 = (((x473+x474)^x475)<=x476);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x477 = INT64_MIN;
	int32_t x478 = 767;
	int16_t x480 = -1;
	int32_t t104 = -225;

    t104 = (((x477+x478)^x479)<=x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x482 = INT16_MIN;
	uint32_t x483 = 36196819U;
	volatile int16_t x484 = 4066;
	int32_t t105 = 593;

    t105 = (((x481+x482)^x483)<=x484);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x485 = UINT8_MAX;
	uint16_t x486 = UINT16_MAX;
	int8_t x487 = INT8_MAX;
	volatile int32_t t106 = 0;

    t106 = (((x485+x486)^x487)<=x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x489 = 0LLU;
	int64_t x490 = INT64_MIN;
	int64_t x491 = -2004873802LL;
	static uint8_t x492 = 0U;
	int32_t t107 = -29738;

    t107 = (((x489+x490)^x491)<=x492);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x493 = UINT64_MAX;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 178519959933870LLU;
	volatile uint32_t x496 = 2856946U;
	int32_t t108 = -584593;

    t108 = (((x493+x494)^x495)<=x496);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x497 = INT8_MAX;
	int32_t x498 = INT32_MIN;
	static volatile int8_t x499 = 35;
	static volatile uint64_t x500 = 11408LLU;
	int32_t t109 = 560317247;

    t109 = (((x497+x498)^x499)<=x500);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x501 = INT8_MIN;
	int32_t x502 = 15908194;
	volatile int16_t x503 = 57;
	int16_t x504 = -57;

    t110 = (((x501+x502)^x503)<=x504);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x505 = -1760942318LL;
	uint16_t x507 = UINT16_MAX;
	static int32_t x508 = -1;
	volatile int32_t t111 = -598770821;

    t111 = (((x505+x506)^x507)<=x508);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x510 = INT16_MAX;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = -1;
	volatile int32_t t112 = -111;

    t112 = (((x509+x510)^x511)<=x512);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = INT16_MIN;
	int8_t x515 = 11;
	volatile uint8_t x516 = UINT8_MAX;
	int32_t t113 = -3355;

    t113 = (((x513+x514)^x515)<=x516);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x517 = 1U;
	volatile uint64_t x518 = 1LLU;
	int8_t x519 = INT8_MIN;
	volatile int32_t x520 = INT32_MIN;

    t114 = (((x517+x518)^x519)<=x520);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x521 = -3;
	static uint32_t x522 = 7068U;
	int16_t x523 = -2241;
	int64_t x524 = INT64_MIN;
	static volatile int32_t t115 = -2766;

    t115 = (((x521+x522)^x523)<=x524);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x525 = -73;
	int16_t x526 = -1;
	int64_t x527 = -1LL;
	int32_t t116 = -214606866;

    t116 = (((x525+x526)^x527)<=x528);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x529 = 85989019021LLU;
	int16_t x530 = INT16_MAX;
	volatile uint32_t x532 = 31U;
	int32_t t117 = 15;

    t117 = (((x529+x530)^x531)<=x532);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x533 = 7580402LLU;
	uint16_t x535 = UINT16_MAX;
	static int32_t t118 = 16558371;

    t118 = (((x533+x534)^x535)<=x536);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x539 = UINT64_MAX;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t119 = -909362;

    t119 = (((x537+x538)^x539)<=x540);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x542 = 424692LL;
	int8_t x543 = -1;
	volatile int8_t x544 = 4;
	int32_t t120 = 207;

    t120 = (((x541+x542)^x543)<=x544);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x545 = 9;
	uint32_t x546 = 84895U;
	int64_t x547 = -1LL;
	int16_t x548 = -1;

    t121 = (((x545+x546)^x547)<=x548);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x549 = UINT8_MAX;
	int32_t x550 = 49218179;
	uint64_t x551 = 507LLU;
	int64_t x552 = INT64_MIN;

    t122 = (((x549+x550)^x551)<=x552);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x553 = 5993U;
	int8_t x554 = 46;
	uint64_t x555 = UINT64_MAX;
	int16_t x556 = INT16_MIN;
	int32_t t123 = 173799;

    t123 = (((x553+x554)^x555)<=x556);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x559 = UINT32_MAX;
	int16_t x560 = INT16_MAX;
	int32_t t124 = 25;

    t124 = (((x557+x558)^x559)<=x560);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x562 = -1;
	int64_t x563 = -1LL;
	static uint64_t x564 = 27719377903187987LLU;
	int32_t t125 = -4;

    t125 = (((x561+x562)^x563)<=x564);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x565 = -1;
	uint8_t x566 = 3U;
	volatile uint32_t x567 = UINT32_MAX;
	uint64_t x568 = UINT64_MAX;

    t126 = (((x565+x566)^x567)<=x568);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x570 = UINT64_MAX;
	volatile int8_t x571 = INT8_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t127 = 15990323;

    t127 = (((x569+x570)^x571)<=x572);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	int8_t x574 = 0;
	int64_t x576 = 3664223418LL;

    t128 = (((x573+x574)^x575)<=x576);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x577 = INT32_MAX;
	uint64_t x578 = 12LLU;
	uint32_t x579 = 321310750U;
	int8_t x580 = INT8_MIN;
	volatile int32_t t129 = 2911136;

    t129 = (((x577+x578)^x579)<=x580);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x581 = UINT8_MAX;
	static int16_t x582 = -1;
	int8_t x583 = -4;
	int32_t t130 = -1307008;

    t130 = (((x581+x582)^x583)<=x584);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x585 = 1U;
	static int16_t x586 = -1;
	int64_t x587 = INT64_MAX;
	int16_t x588 = 708;
	volatile int32_t t131 = 2319217;

    t131 = (((x585+x586)^x587)<=x588);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x589 = 9U;
	static uint8_t x590 = 1U;
	int8_t x591 = INT8_MIN;
	int8_t x592 = INT8_MAX;
	volatile int32_t t132 = -19;

    t132 = (((x589+x590)^x591)<=x592);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x594 = UINT32_MAX;
	int32_t x595 = 54;
	int64_t x596 = 1LL;

    t133 = (((x593+x594)^x595)<=x596);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x597 = -1;
	static volatile uint16_t x598 = 27U;
	static int64_t x599 = INT64_MIN;
	int64_t x600 = 6855099195682LL;
	int32_t t134 = 1;

    t134 = (((x597+x598)^x599)<=x600);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x601 = INT16_MIN;
	int8_t x602 = -1;
	int32_t x603 = INT32_MIN;
	volatile int16_t x604 = 73;
	volatile int32_t t135 = 82273921;

    t135 = (((x601+x602)^x603)<=x604);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x605 = -921;
	uint8_t x607 = UINT8_MAX;
	static int8_t x608 = INT8_MIN;

    t136 = (((x605+x606)^x607)<=x608);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x613 = 84U;
	int64_t x614 = 87551593420656838LL;
	volatile int64_t x615 = INT64_MIN;
	volatile uint16_t x616 = 10U;
	volatile int32_t t137 = -6865276;

    t137 = (((x613+x614)^x615)<=x616);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x617 = 24659049678LLU;
	int8_t x618 = INT8_MIN;
	volatile int32_t x619 = INT32_MAX;
	int16_t x620 = -10085;

    t138 = (((x617+x618)^x619)<=x620);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x621 = INT8_MAX;
	int64_t x622 = 2637520321196518LL;
	int16_t x623 = INT16_MIN;
	int64_t x624 = INT64_MAX;
	int32_t t139 = 84;

    t139 = (((x621+x622)^x623)<=x624);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x625 = -8287084;
	static volatile int16_t x626 = -1;
	int16_t x627 = INT16_MAX;
	int8_t x628 = -1;
	int32_t t140 = 1;

    t140 = (((x625+x626)^x627)<=x628);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x630 = -1LL;
	int32_t x632 = INT32_MIN;
	volatile int32_t t141 = 56419205;

    t141 = (((x629+x630)^x631)<=x632);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x633 = -1;
	int8_t x634 = INT8_MIN;
	static uint64_t x635 = UINT64_MAX;
	int8_t x636 = INT8_MIN;
	int32_t t142 = 14;

    t142 = (((x633+x634)^x635)<=x636);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = INT8_MAX;
	static uint32_t x638 = UINT32_MAX;
	uint64_t x639 = 956175LLU;
	int16_t x640 = -6403;
	int32_t t143 = -389876;

    t143 = (((x637+x638)^x639)<=x640);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x641 = 2U;
	int16_t x643 = INT16_MIN;
	volatile int64_t x644 = INT64_MIN;
	volatile int32_t t144 = -361963558;

    t144 = (((x641+x642)^x643)<=x644);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x646 = -5;
	volatile int8_t x647 = INT8_MIN;
	int16_t x648 = INT16_MAX;
	volatile int32_t t145 = 9623799;

    t145 = (((x645+x646)^x647)<=x648);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x649 = 136515386025LLU;
	static int64_t x651 = INT64_MAX;
	volatile int32_t t146 = -187721;

    t146 = (((x649+x650)^x651)<=x652);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x653 = INT16_MIN;
	volatile int64_t x654 = -30854938LL;
	int32_t x655 = -201221795;
	uint64_t x656 = 1093923LLU;

    t147 = (((x653+x654)^x655)<=x656);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x657 = INT8_MIN;
	int16_t x658 = -1274;
	volatile int32_t x659 = INT32_MIN;
	uint64_t x660 = UINT64_MAX;
	static int32_t t148 = -161944753;

    t148 = (((x657+x658)^x659)<=x660);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x662 = 12360;
	uint16_t x663 = 6U;
	volatile int32_t t149 = 640;

    t149 = (((x661+x662)^x663)<=x664);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x665 = UINT32_MAX;
	int32_t x666 = INT32_MIN;
	int64_t x667 = -1650491749269LL;
	uint64_t x668 = 5LLU;
	volatile int32_t t150 = 97389823;

    t150 = (((x665+x666)^x667)<=x668);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x669 = INT8_MIN;
	volatile int16_t x670 = INT16_MAX;
	volatile int8_t x671 = -2;
	static volatile int32_t t151 = -6285417;

    t151 = (((x669+x670)^x671)<=x672);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x673 = -1;
	uint8_t x675 = 7U;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t152 = -857596274;

    t152 = (((x673+x674)^x675)<=x676);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x677 = 1U;
	uint16_t x678 = 125U;
	int64_t x679 = INT64_MIN;
	int32_t t153 = -5487890;

    t153 = (((x677+x678)^x679)<=x680);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x681 = UINT8_MAX;
	int8_t x684 = INT8_MAX;
	volatile int32_t t154 = 223747875;

    t154 = (((x681+x682)^x683)<=x684);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x686 = INT64_MIN;
	uint64_t x687 = 197LLU;
	int16_t x688 = INT16_MIN;
	static int32_t t155 = 1919828;

    t155 = (((x685+x686)^x687)<=x688);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x692 = 1U;
	volatile int32_t t156 = 36435378;

    t156 = (((x689+x690)^x691)<=x692);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x693 = 8070;
	int32_t x694 = 3222;
	volatile int16_t x695 = INT16_MAX;
	int32_t t157 = 39;

    t157 = (((x693+x694)^x695)<=x696);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x697 = 3274;
	volatile int32_t x698 = 1933428;
	int64_t x699 = INT64_MAX;
	int32_t x700 = -1478;
	int32_t t158 = -108;

    t158 = (((x697+x698)^x699)<=x700);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x702 = -1;
	static uint64_t x703 = UINT64_MAX;

    t159 = (((x701+x702)^x703)<=x704);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = -1;
	static uint8_t x706 = 5U;
	uint8_t x707 = 0U;
	uint64_t x708 = UINT64_MAX;
	int32_t t160 = 62;

    t160 = (((x705+x706)^x707)<=x708);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x709 = 2712U;
	uint64_t x710 = UINT64_MAX;
	int64_t x711 = INT64_MAX;
	volatile int8_t x712 = INT8_MIN;
	volatile int32_t t161 = 2318;

    t161 = (((x709+x710)^x711)<=x712);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x714 = 1173288LLU;
	static volatile uint16_t x715 = UINT16_MAX;
	static int64_t x716 = INT64_MAX;
	int32_t t162 = 98257;

    t162 = (((x713+x714)^x715)<=x716);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x721 = INT8_MAX;
	int16_t x723 = INT16_MIN;
	int32_t t163 = -9692;

    t163 = (((x721+x722)^x723)<=x724);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x725 = -248;
	int64_t x726 = -13762450322972237LL;
	volatile int32_t x727 = INT32_MIN;
	uint64_t x728 = 466203LLU;

    t164 = (((x725+x726)^x727)<=x728);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x729 = 26535U;
	uint64_t x730 = UINT64_MAX;
	int16_t x731 = -1;
	volatile int32_t x732 = INT32_MAX;
	volatile int32_t t165 = 6;

    t165 = (((x729+x730)^x731)<=x732);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x733 = INT16_MIN;
	static uint16_t x734 = 13U;
	static volatile uint8_t x735 = UINT8_MAX;
	uint32_t x736 = 104957U;
	int32_t t166 = 2954176;

    t166 = (((x733+x734)^x735)<=x736);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x737 = INT64_MAX;
	int8_t x739 = INT8_MIN;
	static volatile uint16_t x740 = 0U;

    t167 = (((x737+x738)^x739)<=x740);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x741 = 6727825853356142993LLU;
	int64_t x742 = 118782465819LL;
	int32_t t168 = -14017683;

    t168 = (((x741+x742)^x743)<=x744);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x745 = UINT64_MAX;
	int32_t x747 = INT32_MAX;
	volatile uint8_t x748 = 41U;
	volatile int32_t t169 = -897941317;

    t169 = (((x745+x746)^x747)<=x748);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x750 = INT32_MIN;
	int32_t t170 = 39951212;

    t170 = (((x749+x750)^x751)<=x752);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x753 = -312;
	uint64_t x754 = 972907271488LLU;
	int16_t x755 = -180;
	int16_t x756 = -1;
	int32_t t171 = -1;

    t171 = (((x753+x754)^x755)<=x756);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x757 = 18;
	int64_t x758 = -1LL;
	uint16_t x759 = 2U;
	volatile int64_t x760 = -1509862837144LL;

    t172 = (((x757+x758)^x759)<=x760);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x761 = INT64_MIN;
	volatile uint8_t x762 = 63U;
	int64_t x763 = 57916855LL;
	int16_t x764 = 0;
	int32_t t173 = -81907515;

    t173 = (((x761+x762)^x763)<=x764);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x765 = INT8_MIN;
	uint64_t x766 = UINT64_MAX;
	static int16_t x768 = -1;

    t174 = (((x765+x766)^x767)<=x768);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x769 = -251;
	volatile uint8_t x770 = UINT8_MAX;
	static int8_t x771 = 2;
	int64_t x772 = INT64_MAX;

    t175 = (((x769+x770)^x771)<=x772);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = -18;
	volatile int32_t x775 = INT32_MIN;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t176 = 4095;

    t176 = (((x773+x774)^x775)<=x776);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = INT32_MIN;
	int64_t x778 = 1LL;
	volatile int16_t x779 = INT16_MIN;
	volatile int64_t x780 = -1LL;
	int32_t t177 = -71;

    t177 = (((x777+x778)^x779)<=x780);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x781 = UINT64_MAX;
	volatile int16_t x782 = -1;
	static int8_t x783 = INT8_MAX;
	int32_t t178 = 143034838;

    t178 = (((x781+x782)^x783)<=x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x789 = -1;
	int32_t x790 = -1;
	uint16_t x791 = UINT16_MAX;
	volatile int32_t t179 = -1;

    t179 = (((x789+x790)^x791)<=x792);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x793 = INT8_MIN;
	volatile uint8_t x794 = 121U;
	uint16_t x795 = 30U;
	uint32_t x796 = UINT32_MAX;
	volatile int32_t t180 = 126181;

    t180 = (((x793+x794)^x795)<=x796);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x797 = -1;
	volatile uint32_t x798 = UINT32_MAX;
	int8_t x799 = INT8_MAX;

    t181 = (((x797+x798)^x799)<=x800);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x801 = 0;
	int8_t x802 = INT8_MIN;
	volatile int16_t x803 = INT16_MIN;
	static volatile uint8_t x804 = UINT8_MAX;

    t182 = (((x801+x802)^x803)<=x804);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x805 = -1LL;
	int8_t x806 = INT8_MIN;
	static int16_t x807 = INT16_MAX;
	static int64_t x808 = INT64_MIN;
	int32_t t183 = 535301437;

    t183 = (((x805+x806)^x807)<=x808);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x809 = -1;
	int8_t x810 = INT8_MIN;
	int32_t x811 = INT32_MIN;
	static int32_t x812 = -1;
	int32_t t184 = -18558199;

    t184 = (((x809+x810)^x811)<=x812);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x813 = 811U;
	int16_t x814 = INT16_MIN;
	static int8_t x815 = INT8_MAX;
	static volatile int64_t x816 = -118227547984LL;
	static int32_t t185 = -1356;

    t185 = (((x813+x814)^x815)<=x816);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x817 = 1167U;
	static int16_t x818 = 159;
	static uint16_t x819 = 8101U;

    t186 = (((x817+x818)^x819)<=x820);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x822 = -1;
	uint32_t x823 = 3859669U;
	static volatile uint32_t x824 = 4U;

    t187 = (((x821+x822)^x823)<=x824);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x825 = -111638982876LL;
	static volatile uint16_t x826 = 254U;
	int16_t x828 = INT16_MAX;
	volatile int32_t t188 = 21696;

    t188 = (((x825+x826)^x827)<=x828);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x830 = -1;
	uint8_t x831 = UINT8_MAX;
	int16_t x832 = INT16_MIN;
	static int32_t t189 = 1616;

    t189 = (((x829+x830)^x831)<=x832);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x834 = -2039LL;
	static volatile int16_t x836 = -3700;
	volatile int32_t t190 = 392170753;

    t190 = (((x833+x834)^x835)<=x836);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x841 = UINT32_MAX;
	volatile uint16_t x842 = 17323U;
	static uint8_t x843 = 6U;
	static int32_t x844 = -3879;
	int32_t t191 = 966699822;

    t191 = (((x841+x842)^x843)<=x844);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x849 = UINT8_MAX;
	static int64_t x850 = -1LL;
	static volatile uint32_t x852 = UINT32_MAX;
	int32_t t192 = -954079007;

    t192 = (((x849+x850)^x851)<=x852);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x853 = INT16_MAX;
	int8_t x854 = INT8_MIN;
	uint32_t x855 = 9508U;
	int16_t x856 = 89;
	int32_t t193 = -296703;

    t193 = (((x853+x854)^x855)<=x856);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x857 = -1;
	int8_t x858 = INT8_MIN;
	static uint64_t x859 = 7073945062311LLU;
	int64_t x860 = -127790LL;
	volatile int32_t t194 = 658;

    t194 = (((x857+x858)^x859)<=x860);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile uint64_t x864 = UINT64_MAX;
	volatile int32_t t195 = 12244;

    t195 = (((x861+x862)^x863)<=x864);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x865 = 240728880U;
	volatile int32_t x866 = 13;
	static int16_t x867 = INT16_MAX;
	static volatile int32_t x868 = -1;

    t196 = (((x865+x866)^x867)<=x868);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x869 = -1LL;
	uint8_t x870 = 16U;
	int32_t x871 = -1;
	int32_t x872 = INT32_MAX;
	int32_t t197 = 4337397;

    t197 = (((x869+x870)^x871)<=x872);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x878 = -1;
	int64_t x879 = INT64_MAX;
	uint64_t x880 = 6993739846164LLU;
	volatile int32_t t198 = -19;

    t198 = (((x877+x878)^x879)<=x880);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x881 = 1U;
	int16_t x882 = 7;
	int64_t x883 = INT64_MIN;
	int8_t x884 = -1;
	static volatile int32_t t199 = -1;

    t199 = (((x881+x882)^x883)<=x884);

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

