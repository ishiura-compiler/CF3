
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

static uint16_t x34 = UINT16_MAX;
int16_t x41 = 539;
uint8_t x44 = UINT8_MAX;
int32_t t6 = -57952;
uint16_t x45 = 31225U;
volatile int16_t x46 = INT16_MIN;
int8_t x48 = -1;
static uint32_t x49 = 31U;
uint32_t t8 = 4256U;
uint64_t t12 = 50949130908LLU;
static uint8_t x77 = 7U;
volatile uint32_t t15 = UINT32_MAX;
int32_t x97 = -1;
uint64_t x99 = 426LLU;
int64_t x105 = 6996925LL;
static uint64_t t19 = UINT64_MAX;
volatile uint64_t t22 = UINT64_MAX;
static int16_t x138 = INT16_MAX;
int16_t x139 = -1;
int32_t t24 = 109599;
int8_t x158 = INT8_MAX;
uint8_t x160 = 36U;
uint32_t x164 = 7794208U;
int16_t x165 = INT16_MIN;
int32_t x167 = -1;
static uint8_t x170 = 1U;
volatile int64_t t29 = 3927089LL;
uint64_t x183 = UINT64_MAX;
int64_t x184 = -1LL;
uint32_t x197 = 355U;
static int8_t x200 = 0;
volatile int32_t x206 = -6246;
volatile int8_t x212 = -1;
volatile int16_t x226 = INT16_MIN;
int16_t x227 = -1;
static uint32_t x228 = 458488U;
int32_t x229 = -2;
int16_t x231 = -285;
uint64_t x233 = UINT64_MAX;
uint32_t x236 = UINT32_MAX;
int16_t x245 = -1;
uint8_t x246 = 1U;
static uint16_t x247 = 5669U;
static uint32_t t42 = 2564517U;
volatile uint8_t x256 = 2U;
volatile uint32_t t43 = 123U;
uint16_t x261 = UINT16_MAX;
static uint64_t t45 = UINT64_MAX;
uint32_t x269 = 12132U;
static int8_t x271 = INT8_MIN;
uint8_t x283 = 2U;
static int64_t t49 = 26852804627672924LL;
static uint16_t x297 = 14U;
uint64_t x299 = UINT64_MAX;
volatile uint64_t t51 = 4687974398225463LLU;
int32_t t52 = 11210449;
volatile int16_t x310 = 28;
int64_t x318 = -1LL;
int8_t x351 = INT8_MIN;
int64_t t58 = -3LL;
uint16_t x380 = UINT16_MAX;
static uint64_t t63 = 42528006LLU;
int8_t x402 = INT8_MIN;
int8_t x403 = INT8_MIN;
volatile int32_t t65 = -506891565;
uint64_t x418 = 147827085655707942LLU;
volatile int8_t x433 = -43;
int64_t x437 = -1LL;
static int64_t x440 = -279156277419974046LL;
int64_t x448 = -691349844956543020LL;
volatile int64_t t73 = 2787963984944080LL;
int8_t x478 = INT8_MIN;
int8_t x482 = INT8_MAX;
int8_t x485 = -1;
int16_t x486 = INT16_MIN;
int8_t x491 = 0;
volatile int16_t x493 = INT16_MAX;
int8_t x495 = -1;
volatile int64_t t82 = -88LL;
volatile uint8_t x501 = UINT8_MAX;
static int16_t x522 = 173;
static volatile int16_t x524 = -1;
volatile int32_t t86 = -1;
volatile int8_t x547 = INT8_MAX;
int32_t x548 = -116702272;
static volatile uint32_t x559 = UINT32_MAX;
int16_t x563 = INT16_MAX;
uint8_t x568 = 0U;
uint64_t x571 = 138780LLU;
static int64_t t94 = -8037861LL;
int32_t x581 = INT32_MIN;
int32_t x595 = 102;
int64_t t98 = 369032986953241LL;
static volatile uint32_t t99 = 10180U;
uint32_t x601 = 111847660U;
static int8_t x625 = INT8_MAX;
static int16_t x626 = INT16_MAX;
static int8_t x628 = INT8_MIN;
int8_t x645 = INT8_MAX;
uint64_t x653 = UINT64_MAX;
static int16_t x661 = -1;
int16_t x663 = INT16_MIN;
static volatile int16_t x667 = -4;
volatile uint32_t x669 = 3298842U;
uint32_t t108 = 384U;
volatile int32_t t109 = INT32_MIN;
int64_t x689 = -537673443295LL;
static int64_t t111 = -1803964LL;
static int16_t x695 = INT16_MIN;
int32_t t112 = 1;
int8_t x698 = INT8_MIN;
static int8_t x706 = 12;
uint64_t t116 = 62709224LLU;
int8_t x721 = 56;
int16_t x728 = -1;
volatile uint8_t x738 = 0U;
int64_t x741 = -1LL;
uint8_t x750 = 58U;
volatile uint8_t x754 = 95U;
int8_t x756 = -1;
volatile int64_t t123 = 40650LL;
int64_t x761 = INT64_MIN;
uint64_t x762 = 19726LLU;
uint16_t x768 = UINT16_MAX;
uint16_t x769 = 5580U;
uint32_t x771 = UINT32_MAX;
uint32_t t127 = 52U;
uint16_t x791 = 0U;
int16_t x792 = INT16_MAX;
int64_t t130 = -133949499LL;
volatile uint32_t x806 = UINT32_MAX;
volatile uint16_t x808 = UINT16_MAX;
static volatile int8_t x810 = -1;
int8_t x812 = INT8_MIN;
static int32_t x813 = -1;
int64_t x824 = INT64_MIN;
static uint16_t x831 = 1U;
volatile int32_t x837 = 3;
static uint16_t x838 = 782U;
static int16_t x839 = -1;
int16_t x843 = INT16_MIN;
int32_t x844 = INT32_MIN;
static volatile uint64_t x845 = 2142064162LLU;
int8_t x846 = INT8_MAX;
int64_t x848 = -3583415735892185576LL;
uint8_t x854 = 24U;
int8_t x862 = INT8_MIN;
uint16_t x864 = 156U;
static int8_t x874 = INT8_MAX;
int8_t x879 = INT8_MIN;
uint32_t x880 = 64186952U;
int64_t t145 = 179877335501029103LL;
uint8_t x882 = 56U;
int8_t x888 = -30;
int64_t t150 = 8998963923039LL;
uint64_t x902 = 58332469144LLU;
static volatile uint8_t x903 = UINT8_MAX;
uint64_t t151 = 39LLU;
int64_t x911 = 493327148LL;
uint64_t x915 = 465567288391252LLU;
volatile int64_t x929 = 610LL;
int32_t x932 = -1249326;
static volatile uint32_t x937 = 19502U;
int16_t x954 = INT16_MAX;
int32_t x961 = -238987391;
volatile uint32_t t162 = 503962U;
uint64_t x983 = 3009LLU;
volatile int32_t x985 = -186863;
int32_t x989 = -109;
int32_t x994 = -1;
int64_t x995 = 2741LL;
int32_t x1000 = INT32_MIN;
uint8_t x1004 = UINT8_MAX;
volatile int32_t t169 = 218208;
volatile int64_t x1005 = -1LL;
volatile int32_t x1013 = INT32_MAX;
uint64_t x1014 = 554166488526005LLU;
int8_t x1020 = INT8_MAX;
uint64_t x1032 = UINT64_MAX;
static int8_t x1037 = INT8_MAX;
static volatile uint16_t x1038 = 2U;
int32_t t176 = -468405765;
uint8_t x1043 = 10U;
uint8_t x1051 = 2U;
int64_t t178 = -346291854242698LL;
int16_t x1056 = 49;
int16_t x1062 = 2134;
static uint32_t x1067 = UINT32_MAX;
int16_t x1068 = -1;
static volatile uint64_t t184 = UINT64_MAX;
int8_t x1077 = INT8_MAX;
uint16_t x1078 = 27860U;
volatile uint64_t t185 = UINT64_MAX;
int16_t x1091 = -5321;
int32_t x1103 = 10859;
uint32_t x1104 = 6030427U;
int32_t x1105 = -1;
volatile int8_t x1111 = INT8_MAX;
uint16_t x1118 = UINT16_MAX;
uint64_t t193 = 431997939203LLU;
static volatile uint64_t t195 = 16063081LLU;
int16_t x1138 = -3;
int8_t x1139 = -1;
int64_t t196 = -3665LL;
int8_t x1147 = INT8_MAX;
uint32_t t198 = 20U;
uint32_t x1149 = 4636893U;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	int32_t x2 = 74462;
	int16_t x3 = -1;
	static int64_t x4 = 589965438135LL;
	static volatile int64_t t0 = -131302036320LL;

    t0 = ((x1-(x2*x3))|x4);

    if (t0 != -9223371446889271553LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 100LLU;
	int8_t x7 = INT8_MAX;
	int16_t x8 = 72;
	uint64_t t1 = 5LLU;

    t1 = ((x5-(x6*x7))|x8);

    if (t1 != 52843LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x21 = -3278;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	static int32_t x24 = INT32_MIN;
	int32_t t2 = -48;

    t2 = ((x21-(x22*x23))|x24);

    if (t2 != -36046) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x25 = UINT8_MAX;
	static int32_t x26 = 4;
	static int32_t x27 = 33312;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t3 = 40;

    t3 = ((x25-(x26*x27))|x28);

    if (t3 != -132993) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x33 = UINT64_MAX;
	static volatile uint64_t x35 = 675LLU;
	int8_t x36 = 10;
	uint64_t t4 = 2106979201355157412LLU;

    t4 = ((x33-(x34*x35))|x36);

    if (t4 != 18446744073665315498LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x37 = 93U;
	uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = 408601169LLU;
	volatile uint16_t x40 = 57U;
	uint64_t t5 = 27566792LLU;

    t5 = ((x37-(x38*x39))|x40);

    if (t5 != 408601279LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x42 = UINT16_MAX;
	static int8_t x43 = -9;

    t6 = ((x41-(x42*x43))|x44);

    if (t6 != 590591) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x47 = INT8_MIN;
	volatile int32_t t7 = -5487107;

    t7 = ((x45-(x46*x47))|x48);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x50 = 80000419U;
	uint32_t x51 = 1066414162U;
	uint8_t x52 = 0U;

    t8 = ((x49-(x50*x51))|x52);

    if (t8 != 1312768489U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x53 = 1758505779U;
	uint64_t x54 = 6460307628667239292LLU;
	uint32_t x55 = 47U;
	static uint32_t x56 = UINT32_MAX;
	volatile uint64_t t9 = 484LLU;

    t9 = ((x53-(x54*x55))|x56);

    if (t9 != 9960190710323871743LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x61 = UINT64_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x61-(x62*x63))|x64);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x69 = 2;
	int16_t x70 = INT16_MIN;
	int16_t x71 = 875;
	static int32_t x72 = INT32_MIN;
	static volatile int32_t t11 = 15577421;

    t11 = ((x69-(x70*x71))|x72);

    if (t11 != -2118811646) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = INT32_MAX;
	volatile uint64_t x74 = 485152358LLU;
	int64_t x75 = INT64_MAX;
	volatile int32_t x76 = 1;

    t12 = ((x73-(x74*x75))|x76);

    if (t12 != 2632636005LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x78 = 8451176055292383LLU;
	static int8_t x79 = -7;
	static volatile uint8_t x80 = 13U;
	volatile uint64_t t13 = 10038LLU;

    t13 = ((x77-(x78*x79))|x80);

    if (t13 != 59158232387046701LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x81 = INT32_MIN;
	uint64_t x82 = 90976361117932786LLU;
	uint64_t x83 = 120LLU;
	static int64_t x84 = INT64_MIN;
	uint64_t t14 = 29449326831804LLU;

    t14 = ((x81-(x82*x83))|x84);

    if (t14 != 16752952774264909456LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x89 = 190;
	static volatile uint8_t x90 = UINT8_MAX;
	volatile int32_t x91 = -73;
	uint32_t x92 = UINT32_MAX;

    t15 = ((x89-(x90*x91))|x92);

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x98 = INT32_MAX;
	int8_t x100 = -62;
	uint64_t t16 = 876533453982686LLU;

    t16 = ((x97-(x98*x99))|x100);

    if (t16 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x106 = INT8_MIN;
	static int16_t x107 = INT16_MIN;
	static uint32_t x108 = UINT32_MAX;
	volatile int64_t t17 = 78LL;

    t17 = ((x105-(x106*x107))|x108);

    if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = 3U;
	uint64_t t18 = 183709LLU;

    t18 = ((x109-(x110*x111))|x112);

    if (t18 != 9223372034707292163LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x113 = 52575706U;
	uint8_t x114 = 6U;
	uint64_t x115 = 322997978028433244LLU;
	volatile uint64_t x116 = UINT64_MAX;

    t19 = ((x113-(x114*x115))|x116);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	volatile uint32_t x119 = 1029196U;
	int8_t x120 = -20;
	static volatile uint32_t t20 = 3U;

    t20 = ((x117-(x118*x119))|x120);

    if (t20 != 4294967276U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x125 = INT16_MAX;
	volatile uint16_t x126 = 12001U;
	uint64_t x127 = UINT64_MAX;
	volatile uint32_t x128 = UINT32_MAX;
	uint64_t t21 = 166LLU;

    t21 = ((x125-(x126*x127))|x128);

    if (t21 != 4294967295LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x133 = 10;
	uint8_t x134 = 0U;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;

    t22 = ((x133-(x134*x135))|x136);

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x137 = -1LL;
	volatile uint8_t x140 = 2U;
	volatile int64_t t23 = 570003LL;

    t23 = ((x137-(x138*x139))|x140);

    if (t23 != 32766LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x141 = -1;
	static volatile int8_t x142 = 1;
	volatile int32_t x143 = INT32_MIN;
	static volatile int16_t x144 = -750;

    t24 = ((x141-(x142*x143))|x144);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x157 = 264093260215068988LLU;
	volatile uint32_t x159 = 278215778U;
	uint64_t t25 = 64824979LLU;

    t25 = ((x157-(x158*x159))|x160);

    if (t25 != 264093259241403582LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 130947196U;
	uint8_t x163 = 2U;
	static uint32_t t26 = 3777U;

    t26 = ((x161-(x162*x163))|x164);

    if (t26 != 4034391847U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x166 = UINT8_MAX;
	uint32_t x168 = 34007919U;
	volatile uint32_t t27 = 6089922U;

    t27 = ((x165-(x166*x167))|x168);

    if (t27 != 4294962175U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x169 = 390;
	int16_t x171 = -92;
	int32_t x172 = INT32_MAX;
	static int32_t t28 = INT32_MAX;

    t28 = ((x169-(x170*x171))|x172);

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x177 = INT16_MAX;
	int64_t x178 = 1619596LL;
	uint32_t x179 = 60390583U;
	static volatile int8_t x180 = INT8_MIN;

    t29 = ((x177-(x178*x179))|x180);

    if (t29 != -21LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint64_t x182 = 182106704257151509LLU;
	static uint64_t t30 = UINT64_MAX;

    t30 = ((x181-(x182*x183))|x184);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x193 = INT64_MIN;
	int8_t x194 = -50;
	uint16_t x195 = UINT16_MAX;
	static int64_t x196 = -677514224830LL;
	int64_t t31 = 5018651226LL;

    t31 = ((x193-(x194*x195))|x196);

    if (t31 != -677511036978LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	uint64_t t32 = 730LLU;

    t32 = ((x197-(x198*x199))|x200);

    if (t32 != 354LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x201 = UINT16_MAX;
	static uint16_t x202 = 230U;
	volatile uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MIN;
	volatile uint64_t t33 = 13803531436LLU;

    t33 = ((x201-(x202*x203))|x204);

    if (t33 != 9223372036854841573LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x205 = -1;
	uint8_t x207 = UINT8_MAX;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

    t34 = ((x205-(x206*x207))|x208);

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x209 = UINT32_MAX;
	int8_t x210 = 0;
	static uint16_t x211 = 7U;
	uint32_t t35 = UINT32_MAX;

    t35 = ((x209-(x210*x211))|x212);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x213 = UINT16_MAX;
	int32_t x214 = 84;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t36 = -57;

    t36 = ((x213-(x214*x215))|x216);

    if (t36 != -45) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x221 = 154U;
	static int32_t x222 = -1;
	int8_t x223 = 4;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t37 = -200711716;

    t37 = ((x221-(x222*x223))|x224);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x225 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

    t38 = ((x225-(x226*x227))|x228);

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x230 = 0U;
	static int64_t x232 = -9655LL;
	static volatile int64_t t39 = -77283344LL;

    t39 = ((x229-(x230*x231))|x232);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x234 = -1;
	uint8_t x235 = 114U;
	uint64_t t40 = 200653LLU;

    t40 = ((x233-(x234*x235))|x236);

    if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x248 = 28U;
	int32_t t41 = -16975455;

    t41 = ((x245-(x246*x247))|x248);

    if (t41 != -5666) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x249 = 172U;
	volatile int32_t x250 = 4027;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = 446182342U;

    t42 = ((x249-(x250*x251))|x252);

    if (t42 != 4294456295U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x253 = 2705662U;
	static uint8_t x254 = 7U;
	volatile int32_t x255 = -1;

    t43 = ((x253-(x254*x255))|x256);

    if (t43 != 2705671U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x257 = INT64_MIN;
	volatile int64_t x258 = INT64_MAX;
	int8_t x259 = -1;
	uint16_t x260 = 16081U;
	int64_t t44 = -252629002142487904LL;

    t44 = ((x257-(x258*x259))|x260);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x262 = UINT64_MAX;
	int8_t x263 = 1;
	uint64_t x264 = UINT64_MAX;

    t45 = ((x261-(x262*x263))|x264);

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x270 = 994842LLU;
	volatile int64_t x272 = INT64_MAX;
	volatile uint64_t t46 = 334031401225LLU;

    t46 = ((x269-(x270*x271))|x272);

    if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x273 = 3023U;
	int32_t x274 = -1;
	volatile int8_t x275 = INT8_MAX;
	int8_t x276 = -1;
	int32_t t47 = 2105889;

    t47 = ((x273-(x274*x275))|x276);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x281 = 1188211130U;
	static uint8_t x282 = 7U;
	int32_t x284 = 374466;
	static volatile uint32_t t48 = 59U;

    t48 = ((x281-(x282*x283))|x284);

    if (t48 != 1188544494U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x289 = 15;
	int64_t x290 = -1LL;
	int16_t x291 = 1;
	int16_t x292 = INT16_MIN;

    t49 = ((x289-(x290*x291))|x292);

    if (t49 != -32752LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x293 = INT8_MIN;
	uint64_t x294 = 27256512198133LLU;
	int32_t x295 = -1;
	int64_t x296 = -1LL;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = ((x293-(x294*x295))|x296);

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x298 = 66446298LLU;
	int16_t x300 = INT16_MAX;

    t51 = ((x297-(x298*x299))|x300);

    if (t51 != 66453503LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MAX;
	static int16_t x303 = -1;
	uint8_t x304 = 8U;

    t52 = ((x301-(x302*x303))|x304);

    if (t52 != 65662) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x309 = INT64_MIN;
	int32_t x311 = -13655;
	volatile uint16_t x312 = 0U;
	static int64_t t53 = 1191655911488882LL;

    t53 = ((x309-(x310*x311))|x312);

    if (t53 != -9223372036854393468LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x317 = INT16_MIN;
	volatile uint32_t x319 = 24742389U;
	int64_t x320 = INT64_MAX;
	static int64_t t54 = INT64_MAX;

    t54 = ((x317-(x318*x319))|x320);

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x325 = 7U;
	int8_t x326 = INT8_MAX;
	int32_t x327 = -1;
	uint16_t x328 = 88U;
	int32_t t55 = -109;

    t55 = ((x325-(x326*x327))|x328);

    if (t55 != 222) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x333 = INT16_MIN;
	static int8_t x334 = -1;
	uint16_t x335 = 31462U;
	volatile int8_t x336 = INT8_MAX;
	volatile int32_t t56 = -1362;

    t56 = ((x333-(x334*x335))|x336);

    if (t56 != -1281) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x345 = -15;
	int16_t x346 = INT16_MAX;
	volatile int16_t x347 = INT16_MIN;
	static uint16_t x348 = 1015U;
	int32_t t57 = -27154502;

    t57 = ((x345-(x346*x347))|x348);

    if (t57 != 1073709047) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x349 = 1517;
	static int16_t x350 = 1;
	int64_t x352 = 164286483191LL;

    t58 = ((x349-(x350*x351))|x352);

    if (t58 != 164286484223LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x353 = -1LL;
	uint16_t x354 = 24633U;
	int64_t x355 = -1LL;
	uint64_t x356 = 4205367109LLU;
	volatile uint64_t t59 = 652352562586LLU;

    t59 = ((x353-(x354*x355))|x356);

    if (t59 != 4205375357LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x361 = INT8_MIN;
	uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 33U;
	volatile int32_t x364 = -387881834;
	static uint64_t t60 = 237548786413LLU;

    t60 = ((x361-(x362*x363))|x364);

    if (t60 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x365 = INT32_MIN;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 0U;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t61 = -5031LL;

    t61 = ((x365-(x366*x367))|x368);

    if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x373 = -562169626283129LL;
	volatile int64_t x374 = -86688480028227252LL;
	static volatile int8_t x375 = 2;
	int8_t x376 = 2;
	int64_t t62 = 117328932292343217LL;

    t62 = ((x373-(x374*x375))|x376);

    if (t62 != 172814790430171375LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x377 = 56U;
	int64_t x378 = INT64_MAX;
	volatile uint64_t x379 = 5320911131101LLU;

    t63 = ((x377-(x378*x379))|x380);

    if (t63 != 9223377357765935103LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x393 = 41U;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile uint64_t x396 = 662824265LLU;
	volatile uint64_t t64 = 116301481163829LLU;

    t64 = ((x393-(x394*x395))|x396);

    if (t64 != 18446744073705481577LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x401 = INT8_MIN;
	static uint16_t x404 = 7054U;

    t65 = ((x401-(x402*x403))|x404);

    if (t65 != -16498) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x405 = 0;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = 96363LL;
	int64_t t66 = -2759495780261LL;

    t66 = ((x405-(x406*x407))|x408);

    if (t66 != 98283LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x409 = -1;
	uint8_t x410 = 42U;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t67 = UINT32_MAX;

    t67 = ((x409-(x410*x411))|x412);

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;
	uint64_t x416 = UINT64_MAX;
	static uint64_t t68 = UINT64_MAX;

    t68 = ((x413-(x414*x415))|x416);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x417 = INT8_MIN;
	uint8_t x419 = 8U;
	int16_t x420 = 1;
	volatile uint64_t t69 = 50126235629LLU;

    t69 = ((x417-(x418*x419))|x420);

    if (t69 != 17264127388463887953LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x429 = 3;
	uint8_t x430 = 0U;
	int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MAX;
	int32_t t70 = 0;

    t70 = ((x429-(x430*x431))|x432);

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x434 = 1U;
	uint64_t x435 = 2088616370568222LLU;
	uint32_t x436 = UINT32_MAX;
	static volatile uint64_t t71 = 31143204845764LLU;

    t71 = ((x433-(x434*x435))|x436);

    if (t71 != 18444655461178277887LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x438 = 3005U;
	int16_t x439 = -1;
	static int64_t t72 = 116715LL;

    t72 = ((x437-(x438*x439))|x440);

    if (t72 != -279156277419971586LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int8_t x446 = INT8_MAX;
	static int32_t x447 = 0;

    t73 = ((x445-(x446*x447))|x448);

    if (t73 != -691349843276201985LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x457 = 15;
	int16_t x458 = 7324;
	static volatile int64_t x459 = 50109648LL;
	uint64_t x460 = 167763LLU;
	uint64_t t74 = 8021950453647789914LLU;

    t74 = ((x457-(x458*x459))|x460);

    if (t74 != 18446743706706624351LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x465 = UINT8_MAX;
	int8_t x466 = -1;
	static volatile uint8_t x467 = UINT8_MAX;
	int32_t x468 = -1;
	volatile int32_t t75 = 1;

    t75 = ((x465-(x466*x467))|x468);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x473 = 2U;
	volatile uint32_t x474 = UINT32_MAX;
	volatile int16_t x475 = INT16_MIN;
	static int16_t x476 = 0;
	volatile uint32_t t76 = 903911905U;

    t76 = ((x473-(x474*x475))|x476);

    if (t76 != 4294934530U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x477 = INT16_MAX;
	uint8_t x479 = 5U;
	volatile int8_t x480 = -21;
	volatile int32_t t77 = -758956511;

    t77 = ((x477-(x478*x479))|x480);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x481 = UINT16_MAX;
	uint8_t x483 = 57U;
	volatile int64_t x484 = -29740145774866155LL;
	static int64_t t78 = 104313483404LL;

    t78 = ((x481-(x482*x483))|x484);

    if (t78 != -29740145774824515LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x487 = 0U;
	int64_t x488 = INT64_MIN;
	volatile int64_t t79 = 3LL;

    t79 = ((x485-(x486*x487))|x488);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x489 = UINT8_MAX;
	int8_t x490 = INT8_MIN;
	int8_t x492 = 7;
	int32_t t80 = -2029805;

    t80 = ((x489-(x490*x491))|x492);

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x494 = 2;
	int16_t x496 = INT16_MIN;
	volatile int32_t t81 = 0;

    t81 = ((x493-(x494*x495))|x496);

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x497 = 455U;
	int64_t x498 = -454347820964LL;
	int16_t x499 = INT16_MIN;
	volatile int8_t x500 = -1;

    t82 = ((x497-(x498*x499))|x500);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x502 = INT8_MAX;
	int8_t x503 = -1;
	uint32_t x504 = 48155U;
	uint32_t t83 = 224989499U;

    t83 = ((x501-(x502*x503))|x504);

    if (t83 != 48511U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x509 = -1;
	static uint32_t x510 = 7368U;
	int32_t x511 = 61304;
	int64_t x512 = -1LL;
	volatile int64_t t84 = -91306650264621LL;

    t84 = ((x509-(x510*x511))|x512);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x513 = 102U;
	volatile int8_t x514 = -1;
	volatile uint64_t x515 = UINT64_MAX;
	static int16_t x516 = INT16_MAX;
	uint64_t t85 = 365056966714886444LLU;

    t85 = ((x513-(x514*x515))|x516);

    if (t85 != 32767LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x521 = 6082U;
	volatile int16_t x523 = INT16_MIN;

    t86 = ((x521-(x522*x523))|x524);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x525 = -5;
	static int64_t x526 = -1LL;
	static uint64_t x527 = UINT64_MAX;
	int64_t x528 = -19LL;
	static volatile uint64_t t87 = UINT64_MAX;

    t87 = ((x525-(x526*x527))|x528);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x529 = INT16_MIN;
	static int16_t x530 = INT16_MAX;
	int8_t x531 = 14;
	uint64_t x532 = UINT64_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

    t88 = ((x529-(x530*x531))|x532);

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x545 = INT8_MIN;
	volatile int8_t x546 = -1;
	volatile int32_t t89 = 1;

    t89 = ((x545-(x546*x547))|x548);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x557 = 174U;
	int32_t x558 = INT32_MAX;
	volatile int16_t x560 = 9;
	volatile uint32_t t90 = 476U;

    t90 = ((x557-(x558*x559))|x560);

    if (t90 != 2147483821U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x561 = 815951U;
	uint64_t x562 = 8209028516431040449LLU;
	uint16_t x564 = 4537U;
	volatile uint64_t t91 = 362995542249532LLU;

    t91 = ((x561-(x562*x563))|x564);

    if (t91 != 5184684936780092345LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x565 = -1;
	int32_t x566 = 0;
	static int16_t x567 = INT16_MIN;
	int32_t t92 = -24849;

    t92 = ((x565-(x566*x567))|x568);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x569 = 1880U;
	int32_t x570 = 31826333;
	int64_t x572 = INT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = ((x569-(x570*x571))|x572);

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x573 = -54LL;
	uint16_t x574 = 0U;
	int8_t x575 = 29;
	volatile uint8_t x576 = 0U;

    t94 = ((x573-(x574*x575))|x576);

    if (t94 != -54LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x577 = 2;
	static int8_t x578 = INT8_MIN;
	int8_t x579 = 0;
	volatile uint16_t x580 = 7U;
	volatile int32_t t95 = -79186;

    t95 = ((x577-(x578*x579))|x580);

    if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x582 = -1LL;
	int64_t x583 = -2309LL;
	uint8_t x584 = 0U;
	volatile int64_t t96 = 1LL;

    t96 = ((x581-(x582*x583))|x584);

    if (t96 != -2147485957LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x589 = -1;
	int8_t x590 = INT8_MAX;
	volatile int8_t x591 = INT8_MIN;
	int16_t x592 = -148;
	volatile int32_t t97 = -349;

    t97 = ((x589-(x590*x591))|x592);

    if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x593 = -119654855758090LL;
	volatile int8_t x594 = 0;
	int64_t x596 = INT64_MAX;

    t98 = ((x593-(x594*x595))|x596);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x597 = -1;
	uint32_t x598 = 107U;
	int16_t x599 = INT16_MAX;
	int8_t x600 = INT8_MAX;

    t99 = ((x597-(x598*x599))|x600);

    if (t99 != 4291461247U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x602 = 67944551821810LLU;
	volatile uint16_t x603 = UINT16_MAX;
	volatile uint64_t x604 = 72027384649254500LLU;
	uint64_t t100 = 6417975103463323LLU;

    t100 = ((x601-(x602*x603))|x604);

    if (t100 != 14051212074690731774LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x627 = UINT64_MAX;
	volatile uint64_t t101 = 5208158314LLU;

    t101 = ((x625-(x626*x627))|x628);

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x629 = -1LL;
	volatile int32_t x630 = -1;
	static int16_t x631 = INT16_MIN;
	int8_t x632 = -1;
	static volatile int64_t t102 = 101664LL;

    t102 = ((x629-(x630*x631))|x632);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x633 = 1040;
	uint64_t x634 = UINT64_MAX;
	volatile int8_t x635 = -1;
	int8_t x636 = -1;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = ((x633-(x634*x635))|x636);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x646 = UINT32_MAX;
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = 1100399;
	volatile uint64_t t104 = 3LLU;

    t104 = ((x645-(x646*x647))|x648);

    if (t104 != 4296067711LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x654 = 12934454U;
	int32_t x655 = 7323;
	int32_t x656 = 3;
	volatile uint64_t t105 = 16586091647266973LLU;

    t105 = ((x653-(x654*x655))|x656);

    if (t105 != 18446744073479825487LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x662 = INT8_MIN;
	static int16_t x664 = INT16_MIN;
	int32_t t106 = -71;

    t106 = ((x661-(x662*x663))|x664);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x665 = 4U;
	uint64_t x666 = 88350020LLU;
	int8_t x668 = 57;
	volatile uint64_t t107 = 3580908LLU;

    t107 = ((x665-(x666*x667))|x668);

    if (t107 != 353400125LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x670 = INT8_MIN;
	int16_t x671 = 909;
	int8_t x672 = INT8_MIN;

    t108 = ((x669-(x670*x671))|x672);

    if (t108 != 4294967194U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x677 = -1;
	volatile uint8_t x678 = 1U;
	static int32_t x679 = INT32_MAX;
	int32_t x680 = INT32_MIN;

    t109 = ((x677-(x678*x679))|x680);

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x681 = 7237942558329567094LLU;
	volatile int16_t x682 = 508;
	volatile int16_t x683 = -1;
	uint32_t x684 = UINT32_MAX;
	uint64_t t110 = 1892844LLU;

    t110 = ((x681-(x682*x683))|x684);

    if (t110 != 7237942560109363199LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint16_t x690 = 9U;
	int8_t x691 = -1;
	int16_t x692 = -1;

    t111 = ((x689-(x690*x691))|x692);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x693 = 63U;
	static volatile uint16_t x694 = 14020U;
	static int16_t x696 = INT16_MIN;

    t112 = ((x693-(x694*x695))|x696);

    if (t112 != -32705) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x697 = 428;
	uint16_t x699 = UINT16_MAX;
	uint32_t x700 = 58995786U;
	volatile uint32_t t113 = 427102U;

    t113 = ((x697-(x698*x699))|x700);

    if (t113 != 58996078U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x705 = -30;
	int16_t x707 = 832;
	int8_t x708 = -4;
	volatile int32_t t114 = -41;

    t114 = ((x705-(x706*x707))|x708);

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x709 = INT64_MIN;
	uint64_t x710 = 11LLU;
	volatile uint32_t x711 = 14533083U;
	volatile int16_t x712 = -1091;
	volatile uint64_t t115 = 13012LLU;

    t115 = ((x709-(x710*x711))|x712);

    if (t115 != 18446744073709550527LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x717 = -41;
	uint64_t x718 = 287981652291923893LLU;
	int32_t x719 = -1;
	int16_t x720 = -1069;

    t116 = ((x717-(x718*x719))|x720);

    if (t116 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x722 = INT8_MAX;
	int8_t x723 = INT8_MIN;
	int32_t x724 = 38343168;
	static volatile int32_t t117 = 259820897;

    t117 = ((x721-(x722*x723))|x724);

    if (t117 != 38354872) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x725 = INT16_MIN;
	uint64_t x726 = 23819714719178995LLU;
	static volatile uint64_t x727 = 29850046180079LLU;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = ((x725-(x726*x727))|x728);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x729 = -1;
	int8_t x730 = INT8_MIN;
	uint32_t x731 = 1261790U;
	static int8_t x732 = INT8_MIN;
	uint32_t t119 = UINT32_MAX;

    t119 = ((x729-(x730*x731))|x732);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x737 = 1;
	volatile uint16_t x739 = UINT16_MAX;
	volatile int64_t x740 = INT64_MIN;
	volatile int64_t t120 = 19789426773LL;

    t120 = ((x737-(x738*x739))|x740);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x742 = 0;
	static int16_t x743 = -448;
	volatile int32_t x744 = 11160;
	int64_t t121 = 45032LL;

    t121 = ((x741-(x742*x743))|x744);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	volatile int16_t x751 = INT16_MIN;
	uint16_t x752 = UINT16_MAX;
	volatile uint32_t t122 = 85398U;

    t122 = ((x749-(x750*x751))|x752);

    if (t122 != 1900543U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x753 = INT16_MAX;
	int64_t x755 = 20LL;

    t123 = ((x753-(x754*x755))|x756);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x757 = -1;
	int32_t x758 = 10586811;
	int8_t x759 = 3;
	int8_t x760 = INT8_MIN;
	int32_t t124 = -765;

    t124 = ((x757-(x758*x759))|x760);

    if (t124 != -50) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x763 = UINT16_MAX;
	static int8_t x764 = 2;
	uint64_t t125 = 7618230LLU;

    t125 = ((x761-(x762*x763))|x764);

    if (t125 != 9223372035562032398LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x765 = -1;
	int8_t x766 = INT8_MIN;
	int8_t x767 = INT8_MIN;
	int32_t t126 = -520867351;

    t126 = ((x765-(x766*x767))|x768);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x770 = INT16_MIN;
	uint32_t x772 = 2000233831U;

    t127 = ((x769-(x770*x771))|x772);

    if (t127 != 4294948335U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x777 = 0;
	int8_t x778 = -1;
	uint8_t x779 = 1U;
	int8_t x780 = 9;
	volatile int32_t t128 = 3;

    t128 = ((x777-(x778*x779))|x780);

    if (t128 != 9) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x785 = -1;
	int8_t x786 = -1;
	static volatile int16_t x787 = -6;
	static int32_t x788 = INT32_MIN;
	int32_t t129 = 56729322;

    t129 = ((x785-(x786*x787))|x788);

    if (t129 != -7) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x789 = INT8_MIN;
	int64_t x790 = INT64_MIN;

    t130 = ((x789-(x790*x791))|x792);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x801 = -1;
	volatile uint8_t x802 = 1U;
	int64_t x803 = -19503671773770792LL;
	uint8_t x804 = 0U;
	int64_t t131 = -665933541LL;

    t131 = ((x801-(x802*x803))|x804);

    if (t131 != 19503671773770791LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x805 = INT64_MAX;
	int8_t x807 = -1;
	static int64_t t132 = INT64_MAX;

    t132 = ((x805-(x806*x807))|x808);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x809 = INT16_MAX;
	int64_t x811 = -7LL;
	volatile int64_t t133 = 970255649919830LL;

    t133 = ((x809-(x810*x811))|x812);

    if (t133 != -8LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x814 = -1;
	static uint64_t x815 = 43084174287LLU;
	int16_t x816 = INT16_MAX;
	static uint64_t t134 = 1081625899LLU;

    t134 = ((x813-(x814*x815))|x816);

    if (t134 != 43084185599LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x821 = 3002U;
	int64_t x822 = -1LL;
	uint64_t x823 = 61LLU;
	volatile uint64_t t135 = 1968041LLU;

    t135 = ((x821-(x822*x823))|x824);

    if (t135 != 9223372036854778871LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x825 = 2;
	uint64_t x826 = 29053497929LLU;
	volatile int32_t x827 = INT32_MIN;
	int64_t x828 = -1LL;
	uint64_t t136 = UINT64_MAX;

    t136 = ((x825-(x826*x827))|x828);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x829 = INT8_MAX;
	uint8_t x830 = UINT8_MAX;
	uint64_t x832 = UINT64_MAX;
	uint64_t t137 = UINT64_MAX;

    t137 = ((x829-(x830*x831))|x832);

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x840 = INT16_MAX;
	static int32_t t138 = 1;

    t138 = ((x837-(x838*x839))|x840);

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x841 = INT64_MAX;
	uint32_t x842 = 817U;
	int64_t t139 = 896866084820444LL;

    t139 = ((x841-(x842*x843))|x844);

    if (t139 != -2120712193LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x847 = 166;
	uint64_t t140 = 720159929LLU;

    t140 = ((x845-(x846*x847))|x848);

    if (t140 != 14863328338960580568LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x849 = -1LL;
	int64_t x850 = -27914LL;
	uint8_t x851 = UINT8_MAX;
	int32_t x852 = -1;
	static int64_t t141 = -28309545341LL;

    t141 = ((x849-(x850*x851))|x852);

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x853 = UINT8_MAX;
	static volatile int32_t x855 = 1;
	int16_t x856 = INT16_MAX;
	int32_t t142 = 5;

    t142 = ((x853-(x854*x855))|x856);

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x861 = -29LL;
	int8_t x863 = INT8_MAX;
	int64_t t143 = -1778619532LL;

    t143 = ((x861-(x862*x863))|x864);

    if (t143 != 16383LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x873 = -1;
	static int64_t x875 = 15550LL;
	static int16_t x876 = 11;
	volatile int64_t t144 = 129052LL;

    t144 = ((x873-(x874*x875))|x876);

    if (t144 != -1974849LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x877 = 845LL;
	static volatile uint8_t x878 = 1U;

    t145 = ((x877-(x878*x879))|x880);

    if (t145 != 64187341LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x881 = -67;
	int32_t x883 = 7;
	int8_t x884 = INT8_MIN;
	volatile int32_t t146 = 0;

    t146 = ((x881-(x882*x883))|x884);

    if (t146 != -75) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x885 = INT8_MIN;
	uint8_t x886 = 66U;
	volatile int8_t x887 = INT8_MIN;
	int32_t t147 = 1;

    t147 = ((x885-(x886*x887))|x888);

    if (t147 != -30) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x889 = -1253952092950325LL;
	static volatile uint8_t x890 = 113U;
	uint16_t x891 = 2U;
	int8_t x892 = INT8_MIN;
	volatile int64_t t148 = -7415284896283LL;

    t148 = ((x889-(x890*x891))|x892);

    if (t148 != -23LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x893 = INT32_MAX;
	uint16_t x894 = 0U;
	int32_t x895 = 91952189;
	static uint64_t x896 = 1161LLU;
	static uint64_t t149 = 308692151197LLU;

    t149 = ((x893-(x894*x895))|x896);

    if (t149 != 2147483647LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x897 = -1;
	volatile int16_t x898 = -1;
	int8_t x899 = INT8_MIN;
	int64_t x900 = INT64_MAX;

    t150 = ((x897-(x898*x899))|x900);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x901 = -1LL;
	int16_t x904 = INT16_MAX;

    t151 = ((x901-(x902*x903))|x904);

    if (t151 != 18446729198929936383LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x905 = -1;
	volatile int8_t x906 = INT8_MIN;
	static int64_t x907 = -1LL;
	int32_t x908 = -430480906;
	int64_t t152 = 1216LL;

    t152 = ((x905-(x906*x907))|x908);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x909 = INT32_MIN;
	uint32_t x910 = 38126U;
	int32_t x912 = 17;
	int64_t t153 = -1755328418862458705LL;

    t153 = ((x909-(x910*x911))|x912);

    if (t153 != -18810738328295LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x913 = -3;
	static int16_t x914 = 726;
	int16_t x916 = INT16_MIN;
	uint64_t t154 = 14794906552357LLU;

    t154 = ((x913-(x914*x915))|x916);

    if (t154 != 18446744073709546949LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x917 = 860250;
	uint32_t x918 = 8290986U;
	int8_t x919 = -1;
	volatile int64_t x920 = -951943097847184884LL;
	volatile int64_t t155 = -27810505357LL;

    t155 = ((x917-(x918*x919))|x920);

    if (t155 != -951943097838755060LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x930 = 16952LL;
	int16_t x931 = -9955;
	int64_t t156 = 12480LL;

    t156 = ((x929-(x930*x931))|x932);

    if (t156 != -1052710LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x938 = -31;
	uint8_t x939 = 1U;
	uint64_t x940 = 2595892428361LLU;
	uint64_t t157 = 288979035790LLU;

    t157 = ((x937-(x938*x939))|x940);

    if (t157 != 2595892428365LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x945 = INT64_MIN;
	uint64_t x946 = 22812224263933406LLU;
	int64_t x947 = 4012373992LL;
	int16_t x948 = INT16_MIN;
	volatile uint64_t t158 = 47669LLU;

    t158 = ((x945-(x946*x947))|x948);

    if (t158 != 18446744073709534416LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x953 = INT16_MIN;
	int8_t x955 = INT8_MIN;
	int32_t x956 = 9814797;
	volatile int32_t t159 = 31;

    t159 = ((x953-(x954*x955))|x956);

    if (t159 != 12582797) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x957 = 0U;
	int64_t x958 = -1LL;
	int16_t x959 = INT16_MIN;
	uint8_t x960 = UINT8_MAX;
	static volatile int64_t t160 = -24084533494512329LL;

    t160 = ((x957-(x958*x959))|x960);

    if (t160 != -32513LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x962 = 6694969U;
	int16_t x963 = INT16_MIN;
	uint32_t x964 = 8098U;
	volatile uint32_t t161 = 1470405682U;

    t161 = ((x961-(x962*x963))|x964);

    if (t161 != 98426787U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x965 = INT8_MAX;
	volatile int32_t x966 = -115521;
	uint32_t x967 = 3651898U;
	uint16_t x968 = 7U;

    t162 = ((x965-(x966*x967))|x968);

    if (t162 != 964113983U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x969 = INT32_MIN;
	volatile int16_t x970 = INT16_MIN;
	uint64_t x971 = 13848669338635559LLU;
	volatile int8_t x972 = INT8_MIN;
	uint64_t t163 = 101447224LLU;

    t163 = ((x969-(x970*x971))|x972);

    if (t163 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x981 = 5417;
	int16_t x982 = INT16_MAX;
	volatile int32_t x984 = INT32_MIN;
	static uint64_t t164 = 236439478LLU;

    t164 = ((x981-(x982*x983))|x984);

    if (t164 != 18446744073610961130LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x986 = -1;
	static int8_t x987 = 12;
	uint64_t x988 = 387339886LLU;
	volatile uint64_t t165 = 4LLU;

    t165 = ((x985-(x986*x987))|x988);

    if (t165 != 18446744073709516415LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x990 = 9255015;
	uint32_t x991 = 7733109U;
	volatile int64_t x992 = INT64_MIN;
	int64_t t166 = 558647867709LL;

    t166 = ((x989-(x990*x991))|x992);

    if (t166 != -9223372035559547008LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x993 = -1;
	uint64_t x996 = 43433LLU;
	static uint64_t t167 = 3267528467LLU;

    t167 = ((x993-(x994*x995))|x996);

    if (t167 != 43965LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x997 = 21442U;
	volatile int8_t x998 = INT8_MIN;
	uint64_t x999 = 1LLU;
	volatile uint64_t t168 = 1793754539357LLU;

    t168 = ((x997-(x998*x999))|x1000);

    if (t168 != 18446744071562089538LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1001 = 18;
	uint8_t x1002 = 48U;
	int16_t x1003 = -1;

    t169 = ((x1001-(x1002*x1003))|x1004);

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x1006 = 4U;
	static volatile int8_t x1007 = -1;
	static int32_t x1008 = 6;
	int64_t t170 = 25390656LL;

    t170 = ((x1005-(x1006*x1007))|x1008);

    if (t170 != 7LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1009 = INT8_MAX;
	int8_t x1010 = INT8_MIN;
	int64_t x1011 = -14538368029639028LL;
	int8_t x1012 = INT8_MIN;
	int64_t t171 = -5001LL;

    t171 = ((x1009-(x1010*x1011))|x1012);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1015 = -1LL;
	int16_t x1016 = -1;
	uint64_t t172 = UINT64_MAX;

    t172 = ((x1013-(x1014*x1015))|x1016);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1017 = 19150124031LLU;
	static int8_t x1018 = -14;
	int8_t x1019 = -1;
	static volatile uint64_t t173 = 4064LLU;

    t173 = ((x1017-(x1018*x1019))|x1020);

    if (t173 != 19150124031LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x1029 = INT8_MAX;
	int32_t x1030 = 0;
	int32_t x1031 = INT32_MAX;
	volatile uint64_t t174 = UINT64_MAX;

    t174 = ((x1029-(x1030*x1031))|x1032);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x1033 = 61280LL;
	int64_t x1034 = -1LL;
	static volatile int8_t x1035 = INT8_MIN;
	int32_t x1036 = -343346;
	int64_t t175 = -16382884656943986LL;

    t175 = ((x1033-(x1034*x1035))|x1036);

    if (t175 != -332050LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1039 = -1;
	static int8_t x1040 = INT8_MAX;

    t176 = ((x1037-(x1038*x1039))|x1040);

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1041 = UINT16_MAX;
	static int8_t x1042 = -1;
	int32_t x1044 = -1;
	int32_t t177 = -224;

    t177 = ((x1041-(x1042*x1043))|x1044);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1049 = 2;
	int16_t x1050 = INT16_MAX;
	static int64_t x1052 = -1LL;

    t178 = ((x1049-(x1050*x1051))|x1052);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1053 = INT32_MAX;
	volatile int32_t x1054 = 429269;
	uint32_t x1055 = 26U;
	volatile uint32_t t179 = 8741U;

    t179 = ((x1053-(x1054*x1055))|x1056);

    if (t179 != 2136322685U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1057 = 69939LLU;
	volatile int32_t x1058 = -1;
	uint32_t x1059 = 8672336U;
	volatile int64_t x1060 = INT64_MIN;
	volatile uint64_t t180 = 43114396276802LLU;

    t180 = ((x1057-(x1058*x1059))|x1060);

    if (t180 != 18446744069423326595LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1061 = 229834553950350LLU;
	uint16_t x1063 = UINT16_MAX;
	volatile int16_t x1064 = 415;
	volatile uint64_t t181 = 7280129974330364994LLU;

    t181 = ((x1061-(x1062*x1063))|x1064);

    if (t181 != 229834414098943LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1065 = 18;
	int8_t x1066 = 0;
	static volatile uint32_t t182 = UINT32_MAX;

    t182 = ((x1065-(x1066*x1067))|x1068);

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1069 = 54;
	static int32_t x1070 = -3;
	int8_t x1071 = INT8_MIN;
	int16_t x1072 = -1;
	int32_t t183 = -10229;

    t183 = ((x1069-(x1070*x1071))|x1072);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1073 = -31;
	static uint8_t x1074 = 10U;
	uint64_t x1075 = 3651634824254503LLU;
	int64_t x1076 = INT64_MAX;

    t184 = ((x1073-(x1074*x1075))|x1076);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1079 = -1;
	uint64_t x1080 = UINT64_MAX;

    t185 = ((x1077-(x1078*x1079))|x1080);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1081 = 245310LL;
	uint32_t x1082 = 2U;
	uint16_t x1083 = 2U;
	static int32_t x1084 = -1;
	int64_t t186 = -44LL;

    t186 = ((x1081-(x1082*x1083))|x1084);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1089 = 28506115792LL;
	uint64_t x1090 = 112407LLU;
	int32_t x1092 = 21897;
	uint64_t t187 = 468573333118LLU;

    t187 = ((x1089-(x1090*x1091))|x1092);

    if (t187 != 29104234463LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1093 = -1;
	volatile uint8_t x1094 = 0U;
	int64_t x1095 = INT64_MIN;
	static volatile int64_t x1096 = INT64_MIN;
	int64_t t188 = -44386891908477243LL;

    t188 = ((x1093-(x1094*x1095))|x1096);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1097 = 354995305293905294LLU;
	volatile int16_t x1098 = -1;
	int16_t x1099 = INT16_MAX;
	int64_t x1100 = INT64_MIN;
	uint64_t t189 = 1722345925599213LLU;

    t189 = ((x1097-(x1098*x1099))|x1100);

    if (t189 != 9578367342148713869LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1101 = 1071568473835799LL;
	int8_t x1102 = INT8_MAX;
	int64_t t190 = -62681534879LL;

    t190 = ((x1101-(x1102*x1103))|x1104);

    if (t190 != 1071568478223963LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1106 = 698177201U;
	static volatile uint64_t x1107 = UINT64_MAX;
	int64_t x1108 = 7LL;
	static volatile uint64_t t191 = 68777LLU;

    t191 = ((x1105-(x1106*x1107))|x1108);

    if (t191 != 698177207LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1109 = 181547983;
	uint32_t x1110 = UINT32_MAX;
	uint32_t x1112 = UINT32_MAX;
	volatile uint32_t t192 = UINT32_MAX;

    t192 = ((x1109-(x1110*x1111))|x1112);

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1117 = INT32_MIN;
	static int16_t x1119 = INT16_MIN;
	uint64_t x1120 = 99644664617763487LLU;

    t193 = ((x1117-(x1118*x1119))|x1120);

    if (t193 != 18446744073709519519LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1125 = -1;
	uint32_t x1126 = 7U;
	static int8_t x1127 = INT8_MAX;
	volatile int8_t x1128 = -1;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = ((x1125-(x1126*x1127))|x1128);

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1129 = INT64_MIN;
	static int64_t x1130 = 0LL;
	uint64_t x1131 = 2114184864249520578LLU;
	uint16_t x1132 = UINT16_MAX;

    t195 = ((x1129-(x1130*x1131))|x1132);

    if (t195 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1137 = -31;
	volatile int64_t x1140 = INT64_MIN;

    t196 = ((x1137-(x1138*x1139))|x1140);

    if (t196 != -34LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1141 = UINT64_MAX;
	uint16_t x1142 = 805U;
	uint8_t x1143 = UINT8_MAX;
	uint8_t x1144 = 21U;
	uint64_t t197 = 7862918125354LLU;

    t197 = ((x1141-(x1142*x1143))|x1144);

    if (t197 != 18446744073709346357LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1145 = INT16_MAX;
	uint32_t x1146 = UINT32_MAX;
	volatile uint8_t x1148 = 1U;

    t198 = ((x1145-(x1146*x1147))|x1148);

    if (t198 != 32895U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1150 = -4559844LL;
	static uint16_t x1151 = UINT16_MAX;
	int64_t x1152 = INT64_MIN;
	int64_t t199 = -8422022763LL;

    t199 = ((x1149-(x1150*x1151))|x1152);

    if (t199 != -9223371738020762375LL) { NG(); } else { ; }
	
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

