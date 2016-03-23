
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

volatile int16_t x4 = 0;
int8_t x14 = INT8_MAX;
static volatile int32_t x15 = 3;
uint32_t x20 = 78382480U;
uint64_t x22 = 2279331847378165915LLU;
int32_t t9 = 1058625;
static int64_t x48 = INT64_MIN;
volatile uint16_t x49 = 3U;
volatile int32_t x50 = INT32_MIN;
volatile int32_t x59 = -4;
int32_t t13 = 0;
int64_t x64 = -56784LL;
volatile int64_t t14 = 3LL;
volatile int32_t x71 = -1;
volatile int16_t x79 = INT16_MAX;
uint64_t x87 = 3871709296789LLU;
uint32_t x89 = 1542U;
uint8_t x93 = 3U;
static volatile int16_t x95 = INT16_MIN;
volatile uint32_t t20 = UINT32_MAX;
volatile int8_t x110 = -1;
volatile int64_t x121 = INT64_MIN;
int32_t t24 = 295194852;
int32_t x127 = INT32_MIN;
int8_t x135 = INT8_MIN;
volatile uint32_t t27 = UINT32_MAX;
static volatile int64_t t29 = INT64_MIN;
int16_t x147 = INT16_MAX;
volatile int32_t t30 = -979983;
uint32_t x149 = 418578U;
int16_t x167 = -1;
int16_t x170 = INT16_MIN;
uint64_t x172 = 2LLU;
uint64_t t37 = UINT64_MAX;
int32_t x202 = -190446;
uint64_t x204 = 98245719141LLU;
int32_t x215 = 476177699;
volatile int64_t x216 = -1LL;
int32_t x224 = -1;
volatile int32_t x225 = 89777288;
int16_t x234 = -1959;
int16_t x239 = 9823;
uint8_t x244 = 21U;
volatile uint16_t x257 = UINT16_MAX;
int16_t x261 = 1;
int16_t x262 = INT16_MAX;
static int64_t x270 = -1LL;
static volatile int64_t t56 = 1LL;
volatile int16_t x277 = 1;
volatile int8_t x281 = INT8_MIN;
int32_t t60 = INT32_MIN;
static uint8_t x292 = 2U;
uint64_t x293 = UINT64_MAX;
int32_t t62 = INT32_MIN;
volatile uint32_t x302 = 1263476U;
uint64_t x303 = 36376204204241LLU;
int64_t x310 = INT64_MIN;
static int8_t x312 = INT8_MIN;
uint32_t x315 = 66612U;
int32_t x317 = 117730;
uint64_t x320 = 27458599719LLU;
volatile int16_t x327 = -1;
volatile int8_t x333 = -1;
int16_t x334 = 102;
int32_t x337 = -1;
uint8_t x339 = 17U;
static uint8_t x342 = 0U;
static int8_t x347 = 3;
int32_t t75 = -109670801;
uint8_t x353 = 7U;
int64_t x355 = INT64_MIN;
int8_t x357 = 3;
int32_t t78 = INT32_MIN;
uint16_t x365 = UINT16_MAX;
int32_t x366 = INT32_MIN;
int64_t x377 = -95765523621040LL;
uint64_t x380 = 1363316753803106LLU;
uint64_t t82 = 4085051314228LLU;
uint8_t x384 = 1U;
uint8_t x388 = 55U;
volatile int32_t t84 = -13540;
static int8_t x391 = -1;
static int32_t t85 = 128592872;
volatile int32_t t86 = -208448604;
static volatile int8_t x401 = -1;
int64_t x402 = INT64_MAX;
int8_t x403 = -1;
volatile int32_t x406 = 1425;
static uint16_t x411 = UINT16_MAX;
int64_t x415 = INT64_MIN;
int64_t t91 = 3LL;
int32_t x424 = INT32_MIN;
volatile uint32_t x425 = UINT32_MAX;
volatile int32_t x426 = INT32_MIN;
volatile uint8_t x428 = UINT8_MAX;
uint16_t x433 = UINT16_MAX;
uint16_t x437 = 20U;
int32_t t97 = -2193;
static int8_t x447 = -1;
int32_t x449 = INT32_MIN;
int32_t t99 = -50597;
int32_t x457 = INT32_MAX;
int16_t x459 = -1;
volatile int16_t x461 = INT16_MIN;
uint32_t x468 = 4U;
uint8_t x470 = 21U;
int64_t t104 = INT64_MIN;
volatile int16_t x480 = -1;
uint16_t x483 = 6U;
int32_t t107 = 2;
volatile uint8_t x487 = 13U;
int32_t x491 = INT32_MIN;
int64_t t110 = INT64_MIN;
volatile int32_t x502 = INT32_MAX;
volatile int8_t x508 = 1;
uint64_t x511 = 13483263229561LLU;
int8_t x516 = 0;
static volatile int64_t t115 = -42165LL;
int32_t t117 = 4474459;
volatile int32_t x541 = INT32_MAX;
int8_t x542 = INT8_MIN;
volatile int32_t x553 = -1;
uint16_t x563 = 15501U;
static int32_t t123 = 53177637;
volatile int16_t x569 = 6;
int32_t x575 = -1;
uint32_t t125 = 60943485U;
int16_t x581 = INT16_MIN;
volatile uint32_t x588 = UINT32_MAX;
int64_t t128 = INT64_MIN;
int16_t x600 = INT16_MIN;
uint8_t x602 = 1U;
static int16_t x603 = 15307;
static volatile uint8_t x613 = 56U;
uint32_t x624 = UINT32_MAX;
int8_t x625 = -1;
static uint16_t x626 = 61U;
int64_t x630 = -1LL;
static volatile int32_t t135 = 348963;
uint8_t x637 = UINT8_MAX;
static volatile int32_t t137 = 59379;
int32_t x646 = INT32_MIN;
volatile int32_t t139 = 14800;
int64_t x652 = INT64_MAX;
int16_t x656 = -155;
static int32_t t141 = 6268;
static volatile int16_t x670 = 1838;
int16_t x673 = INT16_MIN;
uint64_t x678 = UINT64_MAX;
volatile int16_t x679 = INT16_MAX;
volatile int32_t t146 = 1887;
static int8_t x690 = 1;
int16_t x700 = INT16_MAX;
int32_t t151 = 1;
static uint32_t x713 = 13U;
uint32_t x714 = 7U;
uint16_t x720 = 25U;
uint8_t x722 = 11U;
static int64_t x724 = -67400233560LL;
int32_t t157 = -79;
volatile int32_t t158 = -479485741;
int8_t x743 = 41;
volatile int8_t x748 = INT8_MAX;
int64_t x751 = 407159223118764495LL;
int64_t x756 = INT64_MIN;
int8_t x759 = -5;
volatile int16_t x760 = INT16_MIN;
static int8_t x766 = 27;
static volatile int32_t x767 = INT32_MAX;
uint8_t x770 = UINT8_MAX;
static uint8_t x771 = 0U;
static int32_t x780 = INT32_MIN;
volatile int64_t t169 = 1LL;
int16_t x802 = -24;
volatile int16_t x808 = -15508;
uint32_t x809 = UINT32_MAX;
int32_t x812 = -52867;
uint8_t x814 = 2U;
uint16_t x818 = 28U;
static int64_t x825 = -852965LL;
int8_t x826 = INT8_MIN;
int16_t x833 = -231;
static int8_t x835 = -4;
int64_t x836 = INT64_MAX;
int32_t x837 = 167696869;
int32_t x839 = 58667;
uint32_t t180 = UINT32_MAX;
int8_t x841 = INT8_MIN;
int64_t t181 = INT64_MIN;
static volatile int32_t x848 = -107069;
int64_t t183 = -108577334781189236LL;
int64_t x875 = INT64_MIN;
volatile uint32_t t188 = 8537815U;
int16_t x891 = -9945;
uint16_t x900 = 3369U;
volatile uint64_t t194 = 142857022646380LLU;
int32_t x909 = -704;
uint32_t x913 = 1914434758U;
static uint32_t x915 = UINT32_MAX;
int8_t x928 = -59;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MAX;
	volatile int16_t x3 = INT16_MAX;
	int32_t t0 = -129378;

    t0 = (((x1+x2)==x3)^x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MAX;
	uint16_t x10 = 2U;
	uint16_t x11 = 204U;
	uint32_t x12 = 444045U;
	static uint32_t t1 = 67U;

    t1 = (((x9+x10)==x11)^x12);

    if (t1 != 444045U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	volatile uint16_t x16 = UINT16_MAX;
	static int32_t t2 = -2;

    t2 = (((x13+x14)==x15)^x16);

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = 1933U;
	int8_t x19 = -26;
	static uint32_t t3 = 1U;

    t3 = (((x17+x18)==x19)^x20);

    if (t3 != 78382480U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = -242963961;

    t4 = (((x21+x22)==x23)^x24);

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	int64_t x26 = -1LL;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t5 = INT32_MIN;

    t5 = (((x25+x26)==x27)^x28);

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = -1;
	volatile uint16_t x30 = 11336U;
	int8_t x31 = INT8_MAX;
	volatile int64_t x32 = INT64_MAX;
	int64_t t6 = INT64_MAX;

    t6 = (((x29+x30)==x31)^x32);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -6;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	uint16_t x36 = 22029U;
	volatile int32_t t7 = 97935163;

    t7 = (((x33+x34)==x35)^x36);

    if (t7 != 22029) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	int16_t x38 = -1;
	uint64_t x39 = 5890153326782LLU;
	uint16_t x40 = 28U;
	volatile int32_t t8 = 3855;

    t8 = (((x37+x38)==x39)^x40);

    if (t8 != 28) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	uint64_t x42 = 330601723561LLU;
	static uint8_t x43 = 4U;
	uint16_t x44 = 6U;

    t9 = (((x41+x42)==x43)^x44);

    if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x45 = 40U;
	uint8_t x46 = 1U;
	int64_t x47 = -1LL;
	int64_t t10 = INT64_MIN;

    t10 = (((x45+x46)==x47)^x48);

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x51 = -1;
	volatile int64_t x52 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

    t11 = (((x49+x50)==x51)^x52);

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = 13986;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -1LL;
	int8_t x56 = -1;
	volatile int32_t t12 = -363;

    t12 = (((x53+x54)==x55)^x56);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MAX;
	uint64_t x58 = 1862LLU;
	uint16_t x60 = 43U;

    t13 = (((x57+x58)==x59)^x60);

    if (t13 != 43) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -1LL;
	uint16_t x62 = 897U;
	static int16_t x63 = INT16_MIN;

    t14 = (((x61+x62)==x63)^x64);

    if (t14 != -56784LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = -3316;

    t15 = (((x69+x70)==x71)^x72);

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = 19265LLU;
	static uint32_t x78 = 19937U;
	int8_t x80 = -1;
	volatile int32_t t16 = -2;

    t16 = (((x77+x78)==x79)^x80);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x85 = 1061795519382LL;
	uint32_t x86 = 5U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t17 = 16;

    t17 = (((x85+x86)==x87)^x88);

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x90 = INT32_MAX;
	int64_t x91 = INT64_MIN;
	static uint32_t x92 = 5586U;
	uint32_t t18 = 360197345U;

    t18 = (((x89+x90)==x91)^x92);

    if (t18 != 5586U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x94 = -1;
	static uint64_t x96 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

    t19 = (((x93+x94)==x95)^x96);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = 0;
	int32_t x102 = INT32_MAX;
	static uint64_t x103 = UINT64_MAX;
	uint32_t x104 = UINT32_MAX;

    t20 = (((x101+x102)==x103)^x104);

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = -1;
	int64_t x111 = -1LL;
	int32_t x112 = 1;
	static int32_t t21 = -26;

    t21 = (((x109+x110)==x111)^x112);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MIN;
	static volatile uint16_t x115 = 3U;
	int64_t x116 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

    t22 = (((x113+x114)==x115)^x116);

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	uint32_t x119 = 248222U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t23 = INT32_MAX;

    t23 = (((x117+x118)==x119)^x120);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x122 = 6U;
	static uint16_t x123 = 17480U;
	int8_t x124 = -1;

    t24 = (((x121+x122)==x123)^x124);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x125 = 3035U;
	int64_t x126 = -246552029128973145LL;
	int8_t x128 = INT8_MAX;
	int32_t t25 = -112056305;

    t25 = (((x125+x126)==x127)^x128);

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 364784LLU;
	int32_t x130 = INT32_MAX;
	int16_t x131 = 1424;
	static uint16_t x132 = UINT16_MAX;
	static volatile int32_t t26 = -7853049;

    t26 = (((x129+x130)==x131)^x132);

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x133 = -61820;
	int8_t x134 = INT8_MIN;
	static uint32_t x136 = UINT32_MAX;

    t27 = (((x133+x134)==x135)^x136);

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x137 = 0;
	volatile uint32_t x138 = 2U;
	static int32_t x139 = INT32_MAX;
	static volatile int32_t x140 = -5232532;
	int32_t t28 = -4185680;

    t28 = (((x137+x138)==x139)^x140);

    if (t28 != -5232532) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x141 = INT64_MAX;
	int8_t x142 = -1;
	static int8_t x143 = 1;
	int64_t x144 = INT64_MIN;

    t29 = (((x141+x142)==x143)^x144);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = -1;
	int64_t x146 = -1LL;
	int32_t x148 = -753;

    t30 = (((x145+x146)==x147)^x148);

    if (t30 != -753) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x150 = -1227741559091588LL;
	volatile uint16_t x151 = 0U;
	int64_t x152 = INT64_MIN;
	static int64_t t31 = INT64_MIN;

    t31 = (((x149+x150)==x151)^x152);

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x157 = -1LL;
	volatile uint16_t x158 = 7U;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -856235423870LL;
	int64_t t32 = -2887922716222491LL;

    t32 = (((x157+x158)==x159)^x160);

    if (t32 != -856235423870LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x165 = 14;
	int8_t x166 = INT8_MIN;
	int64_t x168 = INT64_MAX;
	static int64_t t33 = INT64_MAX;

    t33 = (((x165+x166)==x167)^x168);

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x169 = -1;
	int64_t x171 = INT64_MIN;
	uint64_t t34 = 25LLU;

    t34 = (((x169+x170)==x171)^x172);

    if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -1LL;
	int64_t x175 = INT64_MIN;
	static uint64_t x176 = 4362686212LLU;
	volatile uint64_t t35 = 49480722064515465LLU;

    t35 = (((x173+x174)==x175)^x176);

    if (t35 != 4362686212LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x177 = 16;
	uint8_t x178 = 1U;
	static volatile int64_t x179 = -261788463LL;
	volatile uint16_t x180 = 32U;
	volatile int32_t t36 = -44432;

    t36 = (((x177+x178)==x179)^x180);

    if (t36 != 32) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = -1;
	int64_t x186 = -1LL;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = UINT64_MAX;

    t37 = (((x185+x186)==x187)^x188);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x189 = 121805063U;
	int16_t x190 = INT16_MIN;
	static volatile uint64_t x191 = UINT64_MAX;
	int32_t x192 = 0;
	volatile int32_t t38 = 17;

    t38 = (((x189+x190)==x191)^x192);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x193 = -1;
	static uint64_t x194 = 15425LLU;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t39 = -2;

    t39 = (((x193+x194)==x195)^x196);

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x197 = UINT64_MAX;
	volatile int64_t x198 = INT64_MIN;
	int16_t x199 = -188;
	int8_t x200 = INT8_MAX;
	volatile int32_t t40 = 68;

    t40 = (((x197+x198)==x199)^x200);

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x201 = UINT8_MAX;
	volatile uint64_t x203 = 1033965198251669LLU;
	uint64_t t41 = 9195LLU;

    t41 = (((x201+x202)==x203)^x204);

    if (t41 != 98245719141LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x205 = INT8_MIN;
	uint16_t x206 = 1U;
	volatile int8_t x207 = INT8_MAX;
	int32_t x208 = INT32_MIN;
	static int32_t t42 = INT32_MIN;

    t42 = (((x205+x206)==x207)^x208);

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	uint64_t x210 = 255LLU;
	int32_t x211 = INT32_MIN;
	static volatile int8_t x212 = INT8_MAX;
	int32_t t43 = 1;

    t43 = (((x209+x210)==x211)^x212);

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x213 = -61;
	static int64_t x214 = 123436452LL;
	volatile int64_t t44 = -2LL;

    t44 = (((x213+x214)==x215)^x216);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x221 = UINT64_MAX;
	int8_t x222 = -1;
	uint64_t x223 = 25918749LLU;
	volatile int32_t t45 = 14890;

    t45 = (((x221+x222)==x223)^x224);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x226 = INT64_MIN;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = INT16_MAX;
	int32_t t46 = -1144671;

    t46 = (((x225+x226)==x227)^x228);

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = 0;
	int64_t x230 = INT64_MAX;
	uint8_t x231 = 8U;
	volatile uint8_t x232 = 110U;
	int32_t t47 = -4488918;

    t47 = (((x229+x230)==x231)^x232);

    if (t47 != 110) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x233 = 125622;
	static int64_t x235 = INT64_MIN;
	uint32_t x236 = 480010616U;
	volatile uint32_t t48 = 797425390U;

    t48 = (((x233+x234)==x235)^x236);

    if (t48 != 480010616U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x237 = 3U;
	volatile int16_t x238 = INT16_MIN;
	uint64_t x240 = 2LLU;
	volatile uint64_t t49 = 45471008759LLU;

    t49 = (((x237+x238)==x239)^x240);

    if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x241 = -1;
	int64_t x242 = 16714124202LL;
	volatile int8_t x243 = INT8_MAX;
	volatile int32_t t50 = 1;

    t50 = (((x241+x242)==x243)^x244);

    if (t50 != 21) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x245 = INT16_MAX;
	int32_t x246 = -3515319;
	volatile uint64_t x247 = UINT64_MAX;
	uint8_t x248 = 0U;
	static int32_t t51 = 429698385;

    t51 = (((x245+x246)==x247)^x248);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x249 = UINT32_MAX;
	int32_t x250 = 1641;
	int8_t x251 = 1;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t52 = -6720;

    t52 = (((x249+x250)==x251)^x252);

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x258 = INT32_MIN;
	static uint16_t x259 = 11U;
	static int16_t x260 = -1;
	volatile int32_t t53 = -1265;

    t53 = (((x257+x258)==x259)^x260);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x263 = INT64_MIN;
	uint64_t x264 = 150317225154LLU;
	uint64_t t54 = 12313587LLU;

    t54 = (((x261+x262)==x263)^x264);

    if (t54 != 150317225154LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x265 = INT16_MIN;
	volatile int8_t x266 = -1;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = 2474148U;
	uint32_t t55 = 48U;

    t55 = (((x265+x266)==x267)^x268);

    if (t55 != 2474148U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = INT8_MIN;
	uint16_t x271 = 170U;
	static int64_t x272 = -98372LL;

    t56 = (((x269+x270)==x271)^x272);

    if (t56 != -98372LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x273 = -1LL;
	volatile uint32_t x274 = 446724088U;
	uint16_t x275 = 951U;
	uint32_t x276 = 7145U;
	volatile uint32_t t57 = 3825U;

    t57 = (((x273+x274)==x275)^x276);

    if (t57 != 7145U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x278 = 178651346LL;
	int64_t x279 = INT64_MIN;
	uint16_t x280 = 12U;
	volatile int32_t t58 = -5529;

    t58 = (((x277+x278)==x279)^x280);

    if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 5U;
	uint64_t x284 = 12502LLU;
	static volatile uint64_t t59 = 57495153285LLU;

    t59 = (((x281+x282)==x283)^x284);

    if (t59 != 12502LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x285 = 1U;
	int16_t x286 = 0;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;

    t60 = (((x285+x286)==x287)^x288);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x289 = 0U;
	int32_t x290 = 8488882;
	volatile int32_t x291 = -379459688;
	volatile int32_t t61 = 517744299;

    t61 = (((x289+x290)==x291)^x292);

    if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x294 = INT16_MIN;
	uint32_t x295 = 1955805250U;
	static int32_t x296 = INT32_MIN;

    t62 = (((x293+x294)==x295)^x296);

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x297 = 1;
	uint8_t x298 = 84U;
	int64_t x299 = INT64_MAX;
	uint16_t x300 = 47U;
	int32_t t63 = 15089;

    t63 = (((x297+x298)==x299)^x300);

    if (t63 != 47) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x301 = -2141658264LL;
	uint16_t x304 = UINT16_MAX;
	int32_t t64 = -3772;

    t64 = (((x301+x302)==x303)^x304);

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x305 = -1LL;
	int8_t x306 = 17;
	int64_t x307 = INT64_MIN;
	volatile int16_t x308 = INT16_MIN;
	int32_t t65 = 239798;

    t65 = (((x305+x306)==x307)^x308);

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x309 = 71733656226332LLU;
	int16_t x311 = INT16_MAX;
	int32_t t66 = -2538402;

    t66 = (((x309+x310)==x311)^x312);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x313 = INT16_MIN;
	static int16_t x314 = INT16_MIN;
	int32_t x316 = -28;
	int32_t t67 = 326;

    t67 = (((x313+x314)==x315)^x316);

    if (t67 != -28) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MAX;
	uint64_t t68 = 676688LLU;

    t68 = (((x317+x318)==x319)^x320);

    if (t68 != 27458599719LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x321 = 74U;
	uint32_t x322 = 977U;
	uint64_t x323 = 36694677349359LLU;
	int32_t x324 = 0;
	int32_t t69 = -3933;

    t69 = (((x321+x322)==x323)^x324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = 0;
	static uint64_t x326 = 1595938551LLU;
	int64_t x328 = -1LL;
	volatile int64_t t70 = -99944325253877659LL;

    t70 = (((x325+x326)==x327)^x328);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x335 = -1;
	static int64_t x336 = -1LL;
	volatile int64_t t71 = 4162106868506057LL;

    t71 = (((x333+x334)==x335)^x336);

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x338 = INT32_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t72 = 3801013;

    t72 = (((x337+x338)==x339)^x340);

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x341 = 7U;
	int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MAX;
	int32_t t73 = -13187108;

    t73 = (((x341+x342)==x343)^x344);

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x345 = INT16_MIN;
	uint32_t x346 = 1373303U;
	int8_t x348 = INT8_MAX;
	int32_t t74 = -8490058;

    t74 = (((x345+x346)==x347)^x348);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x349 = 14049202334839LL;
	uint16_t x350 = 6473U;
	uint16_t x351 = 5533U;
	int16_t x352 = -1;

    t75 = (((x349+x350)==x351)^x352);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x354 = INT64_MIN;
	static uint64_t x356 = 4372651LLU;
	static uint64_t t76 = 870871807652109LLU;

    t76 = (((x353+x354)==x355)^x356);

    if (t76 != 4372651LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x358 = -194;
	volatile int32_t x359 = -1;
	static int16_t x360 = 5454;
	int32_t t77 = 1443520;

    t77 = (((x357+x358)==x359)^x360);

    if (t77 != 5454) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x361 = -1;
	uint8_t x362 = 0U;
	int64_t x363 = -975403218936759LL;
	int32_t x364 = INT32_MIN;

    t78 = (((x361+x362)==x363)^x364);

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x367 = -831656;
	volatile int64_t x368 = 624311012754487LL;
	int64_t t79 = -2686689796LL;

    t79 = (((x365+x366)==x367)^x368);

    if (t79 != 624311012754487LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x369 = 4136;
	uint64_t x370 = 6246555674389LLU;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t80 = -24111;

    t80 = (((x369+x370)==x371)^x372);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = INT8_MIN;
	uint16_t x374 = UINT16_MAX;
	volatile int64_t x375 = 149909539LL;
	uint32_t x376 = 10U;
	uint32_t t81 = 5538U;

    t81 = (((x373+x374)==x375)^x376);

    if (t81 != 10U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x378 = -1688;
	static int64_t x379 = -1LL;

    t82 = (((x377+x378)==x379)^x380);

    if (t82 != 1363316753803106LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x381 = UINT8_MAX;
	int8_t x382 = -1;
	uint8_t x383 = UINT8_MAX;
	int32_t t83 = 11551;

    t83 = (((x381+x382)==x383)^x384);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x385 = INT8_MAX;
	volatile uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MIN;

    t84 = (((x385+x386)==x387)^x388);

    if (t84 != 55) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x389 = UINT64_MAX;
	volatile int64_t x390 = INT64_MIN;
	int16_t x392 = INT16_MIN;

    t85 = (((x389+x390)==x391)^x392);

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x393 = 477;
	static int16_t x394 = INT16_MIN;
	volatile int32_t x395 = -1;
	int32_t x396 = 1;

    t86 = (((x393+x394)==x395)^x396);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x397 = -1LL;
	uint16_t x398 = 14U;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t87 = 31;

    t87 = (((x397+x398)==x399)^x400);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x404 = -1;
	volatile int32_t t88 = -47;

    t88 = (((x401+x402)==x403)^x404);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x405 = INT32_MIN;
	uint8_t x407 = 8U;
	static int8_t x408 = INT8_MIN;
	int32_t t89 = 135496143;

    t89 = (((x405+x406)==x407)^x408);

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	volatile int64_t x410 = 352LL;
	int16_t x412 = INT16_MIN;
	volatile int32_t t90 = -1301;

    t90 = (((x409+x410)==x411)^x412);

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x413 = 6U;
	volatile int16_t x414 = INT16_MAX;
	static int64_t x416 = 1249LL;

    t91 = (((x413+x414)==x415)^x416);

    if (t91 != 1249LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x421 = 0LL;
	int32_t x422 = -29;
	static int8_t x423 = INT8_MIN;
	int32_t t92 = INT32_MIN;

    t92 = (((x421+x422)==x423)^x424);

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x427 = -1LL;
	int32_t t93 = 13314;

    t93 = (((x425+x426)==x427)^x428);

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = INT16_MIN;
	uint32_t x430 = 21825U;
	int8_t x431 = 13;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t94 = -1;

    t94 = (((x429+x430)==x431)^x432);

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x434 = -27;
	uint8_t x435 = UINT8_MAX;
	int16_t x436 = INT16_MIN;
	volatile int32_t t95 = 849271556;

    t95 = (((x433+x434)==x435)^x436);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x438 = 54596692155355266LLU;
	int16_t x439 = INT16_MAX;
	int16_t x440 = INT16_MAX;
	static volatile int32_t t96 = 50436726;

    t96 = (((x437+x438)==x439)^x440);

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x441 = UINT64_MAX;
	int16_t x442 = -1;
	volatile int32_t x443 = -61775;
	int16_t x444 = 4625;

    t97 = (((x441+x442)==x443)^x444);

    if (t97 != 4625) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x445 = -1;
	int32_t x446 = 2;
	int8_t x448 = 0;
	volatile int32_t t98 = -2;

    t98 = (((x445+x446)==x447)^x448);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x450 = 243U;
	int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MIN;

    t99 = (((x449+x450)==x451)^x452);

    if (t99 != -128) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x453 = UINT16_MAX;
	static uint64_t x454 = 11325995309616061LLU;
	int8_t x455 = -1;
	uint8_t x456 = 2U;
	volatile int32_t t100 = 51010;

    t100 = (((x453+x454)==x455)^x456);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x458 = 30594981681972LLU;
	int16_t x460 = INT16_MIN;
	int32_t t101 = 438;

    t101 = (((x457+x458)==x459)^x460);

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x462 = UINT16_MAX;
	uint16_t x463 = 0U;
	int16_t x464 = 51;
	int32_t t102 = -28449;

    t102 = (((x461+x462)==x463)^x464);

    if (t102 != 51) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x466 = -22;
	int64_t x467 = -1932110705056LL;
	uint32_t t103 = 1646351787U;

    t103 = (((x465+x466)==x467)^x468);

    if (t103 != 4U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x469 = 3996U;
	int64_t x471 = INT64_MIN;
	int64_t x472 = INT64_MIN;

    t104 = (((x469+x470)==x471)^x472);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x473 = 3194U;
	int16_t x474 = INT16_MIN;
	volatile int64_t x475 = -1LL;
	int16_t x476 = -1;
	volatile int32_t t105 = 1826738;

    t105 = (((x473+x474)==x475)^x476);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x477 = -1;
	int8_t x478 = INT8_MIN;
	int32_t x479 = INT32_MIN;
	static volatile int32_t t106 = 22190990;

    t106 = (((x477+x478)==x479)^x480);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x481 = 3U;
	int8_t x482 = INT8_MIN;
	int8_t x484 = -1;

    t107 = (((x481+x482)==x483)^x484);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x485 = UINT32_MAX;
	volatile uint16_t x486 = 14U;
	int8_t x488 = INT8_MAX;
	static int32_t t108 = -215359;

    t108 = (((x485+x486)==x487)^x488);

    if (t108 != 126) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = 22;
	volatile uint32_t x490 = 25U;
	int32_t x492 = 265;
	volatile int32_t t109 = 71306333;

    t109 = (((x489+x490)==x491)^x492);

    if (t109 != 265) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x497 = 0;
	static int32_t x498 = INT32_MIN;
	uint32_t x499 = UINT32_MAX;
	static volatile int64_t x500 = INT64_MIN;

    t110 = (((x497+x498)==x499)^x500);

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x501 = -28303;
	int64_t x503 = -1LL;
	int16_t x504 = INT16_MAX;
	static volatile int32_t t111 = -38;

    t111 = (((x501+x502)==x503)^x504);

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x505 = INT8_MIN;
	int32_t x506 = -1;
	uint16_t x507 = 211U;
	int32_t t112 = -257;

    t112 = (((x505+x506)==x507)^x508);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x509 = 3U;
	int16_t x510 = INT16_MIN;
	static int16_t x512 = -1;
	static int32_t t113 = -235888027;

    t113 = (((x509+x510)==x511)^x512);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x513 = -1LL;
	int16_t x514 = INT16_MIN;
	uint8_t x515 = 103U;
	static int32_t t114 = -1753851;

    t114 = (((x513+x514)==x515)^x516);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x525 = 826066LLU;
	int8_t x526 = INT8_MAX;
	int8_t x527 = -1;
	int64_t x528 = 48LL;

    t115 = (((x525+x526)==x527)^x528);

    if (t115 != 48LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = INT16_MIN;
	volatile int8_t x530 = -62;
	volatile int32_t x531 = -1;
	int8_t x532 = INT8_MIN;
	static volatile int32_t t116 = 252;

    t116 = (((x529+x530)==x531)^x532);

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x537 = 15212908139342LLU;
	uint8_t x538 = 4U;
	volatile int64_t x539 = 8605901209045LL;
	uint16_t x540 = UINT16_MAX;

    t117 = (((x537+x538)==x539)^x540);

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x543 = 2U;
	volatile int8_t x544 = INT8_MIN;
	int32_t t118 = -24637943;

    t118 = (((x541+x542)==x543)^x544);

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x545 = INT16_MAX;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = UINT64_MAX;
	uint16_t x548 = 215U;
	int32_t t119 = -235223936;

    t119 = (((x545+x546)==x547)^x548);

    if (t119 != 215) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x554 = 198212U;
	volatile uint32_t x555 = UINT32_MAX;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t120 = -12704;

    t120 = (((x553+x554)==x555)^x556);

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x557 = -18;
	uint32_t x558 = 30U;
	int32_t x559 = -1;
	int8_t x560 = -1;
	int32_t t121 = -20475161;

    t121 = (((x557+x558)==x559)^x560);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x562 = -1LL;
	int32_t x564 = INT32_MIN;
	int32_t t122 = INT32_MIN;

    t122 = (((x561+x562)==x563)^x564);

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x565 = -3;
	uint16_t x566 = 17025U;
	volatile uint8_t x567 = 5U;
	volatile int8_t x568 = INT8_MIN;

    t123 = (((x565+x566)==x567)^x568);

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x570 = INT16_MIN;
	volatile int32_t x571 = 1026255863;
	int8_t x572 = -1;
	static int32_t t124 = 3;

    t124 = (((x569+x570)==x571)^x572);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x573 = INT8_MIN;
	uint64_t x574 = 8161005724906639LLU;
	uint32_t x576 = 23U;

    t125 = (((x573+x574)==x575)^x576);

    if (t125 != 23U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x582 = UINT16_MAX;
	static uint16_t x583 = 2U;
	uint64_t x584 = UINT64_MAX;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (((x581+x582)==x583)^x584);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x585 = -1;
	int8_t x586 = -1;
	int64_t x587 = 28241566054260LL;
	uint32_t t127 = UINT32_MAX;

    t127 = (((x585+x586)==x587)^x588);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x589 = -207121396833202691LL;
	int8_t x590 = INT8_MAX;
	uint32_t x591 = UINT32_MAX;
	static volatile int64_t x592 = INT64_MIN;

    t128 = (((x589+x590)==x591)^x592);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x597 = 15U;
	volatile uint64_t x598 = UINT64_MAX;
	uint16_t x599 = 266U;
	static volatile int32_t t129 = -208;

    t129 = (((x597+x598)==x599)^x600);

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x601 = -2;
	uint64_t x604 = 13136742172137LLU;
	static uint64_t t130 = 4659585LLU;

    t130 = (((x601+x602)==x603)^x604);

    if (t130 != 13136742172137LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x614 = 987U;
	int8_t x615 = INT8_MIN;
	uint64_t x616 = UINT64_MAX;
	uint64_t t131 = UINT64_MAX;

    t131 = (((x613+x614)==x615)^x616);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x617 = -120;
	volatile int32_t x618 = -1;
	volatile int16_t x619 = INT16_MAX;
	int16_t x620 = -1;
	volatile int32_t t132 = 15215;

    t132 = (((x617+x618)==x619)^x620);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x621 = 13U;
	static uint16_t x622 = 26393U;
	int8_t x623 = -1;
	uint32_t t133 = UINT32_MAX;

    t133 = (((x621+x622)==x623)^x624);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x627 = 0LL;
	int64_t x628 = -51904529LL;
	int64_t t134 = 92708104909220459LL;

    t134 = (((x625+x626)==x627)^x628);

    if (t134 != -51904529LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x629 = INT16_MAX;
	static int16_t x631 = -3239;
	int8_t x632 = -11;

    t135 = (((x629+x630)==x631)^x632);

    if (t135 != -11) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x633 = 170552U;
	int32_t x634 = INT32_MIN;
	uint16_t x635 = 79U;
	static volatile int16_t x636 = 0;
	int32_t t136 = 188525;

    t136 = (((x633+x634)==x635)^x636);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x638 = INT8_MIN;
	int32_t x639 = -1;
	int32_t x640 = -1;

    t137 = (((x637+x638)==x639)^x640);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x641 = INT32_MIN;
	int64_t x642 = -104930897525911601LL;
	static int16_t x643 = INT16_MIN;
	volatile uint16_t x644 = UINT16_MAX;
	volatile int32_t t138 = 1;

    t138 = (((x641+x642)==x643)^x644);

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x645 = INT8_MAX;
	uint8_t x647 = 3U;
	int8_t x648 = INT8_MAX;

    t139 = (((x645+x646)==x647)^x648);

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x650 = INT16_MIN;
	static uint64_t x651 = 395542455129055LLU;
	static int64_t t140 = INT64_MAX;

    t140 = (((x649+x650)==x651)^x652);

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x653 = -1;
	volatile int64_t x654 = -1LL;
	uint16_t x655 = 12674U;

    t141 = (((x653+x654)==x655)^x656);

    if (t141 != -155) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x657 = 34607690LLU;
	static volatile uint32_t x658 = 52616762U;
	static uint32_t x659 = 3U;
	int32_t x660 = INT32_MAX;
	int32_t t142 = INT32_MAX;

    t142 = (((x657+x658)==x659)^x660);

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x665 = 537LL;
	uint8_t x666 = 7U;
	uint8_t x667 = 2U;
	uint64_t x668 = UINT64_MAX;
	static volatile uint64_t t143 = UINT64_MAX;

    t143 = (((x665+x666)==x667)^x668);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x669 = INT16_MAX;
	static volatile int32_t x671 = INT32_MAX;
	static int16_t x672 = 11;
	volatile int32_t t144 = -80357134;

    t144 = (((x669+x670)==x671)^x672);

    if (t144 != 11) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x674 = -51;
	int8_t x675 = INT8_MIN;
	int64_t x676 = -1LL;
	int64_t t145 = 394630998LL;

    t145 = (((x673+x674)==x675)^x676);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x677 = INT16_MIN;
	int32_t x680 = -123751205;

    t146 = (((x677+x678)==x679)^x680);

    if (t146 != -123751205) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x681 = 0;
	volatile int32_t x682 = INT32_MIN;
	int16_t x683 = 2;
	int32_t x684 = INT32_MIN;
	volatile int32_t t147 = INT32_MIN;

    t147 = (((x681+x682)==x683)^x684);

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x685 = -1LL;
	static volatile int32_t x686 = 32257029;
	static int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MIN;
	volatile int32_t t148 = 256521872;

    t148 = (((x685+x686)==x687)^x688);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x689 = INT16_MIN;
	static int64_t x691 = -1LL;
	volatile int32_t x692 = 1;
	int32_t t149 = 4;

    t149 = (((x689+x690)==x691)^x692);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x697 = 7U;
	int32_t x698 = INT32_MIN;
	volatile uint16_t x699 = UINT16_MAX;
	static int32_t t150 = 0;

    t150 = (((x697+x698)==x699)^x700);

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x705 = -1146646017010958320LL;
	int32_t x706 = INT32_MIN;
	static volatile int8_t x707 = INT8_MAX;
	int8_t x708 = INT8_MIN;

    t151 = (((x705+x706)==x707)^x708);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x709 = -29023938;
	int16_t x710 = -1;
	int32_t x711 = INT32_MAX;
	static uint8_t x712 = 0U;
	volatile int32_t t152 = 27472;

    t152 = (((x709+x710)==x711)^x712);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x715 = 188419705486064LLU;
	uint32_t x716 = 111208U;
	static volatile uint32_t t153 = 88569U;

    t153 = (((x713+x714)==x715)^x716);

    if (t153 != 111208U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x717 = UINT64_MAX;
	uint64_t x718 = 1232865LLU;
	int16_t x719 = 907;
	static int32_t t154 = -2;

    t154 = (((x717+x718)==x719)^x720);

    if (t154 != 25) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x721 = INT8_MIN;
	static int8_t x723 = INT8_MIN;
	int64_t t155 = -134115289379LL;

    t155 = (((x721+x722)==x723)^x724);

    if (t155 != -67400233560LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x725 = -52;
	int32_t x726 = -1;
	volatile int8_t x727 = INT8_MIN;
	int8_t x728 = INT8_MIN;
	volatile int32_t t156 = 81;

    t156 = (((x725+x726)==x727)^x728);

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x733 = 2007U;
	int16_t x734 = INT16_MIN;
	static int8_t x735 = 0;
	uint16_t x736 = UINT16_MAX;

    t157 = (((x733+x734)==x735)^x736);

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x737 = 374676U;
	int32_t x738 = 164100637;
	uint8_t x739 = 3U;
	volatile int16_t x740 = INT16_MIN;

    t158 = (((x737+x738)==x739)^x740);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x741 = INT16_MIN;
	int16_t x742 = -1;
	static int64_t x744 = INT64_MAX;
	volatile int64_t t159 = INT64_MAX;

    t159 = (((x741+x742)==x743)^x744);

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x745 = INT16_MIN;
	uint8_t x746 = 3U;
	uint32_t x747 = UINT32_MAX;
	int32_t t160 = -71743983;

    t160 = (((x745+x746)==x747)^x748);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x749 = 28U;
	volatile int16_t x750 = INT16_MIN;
	static int16_t x752 = 150;
	int32_t t161 = -27;

    t161 = (((x749+x750)==x751)^x752);

    if (t161 != 150) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x753 = INT16_MIN;
	volatile int32_t x754 = -1;
	int8_t x755 = INT8_MIN;
	volatile int64_t t162 = INT64_MIN;

    t162 = (((x753+x754)==x755)^x756);

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x757 = -1;
	int8_t x758 = INT8_MIN;
	int32_t t163 = -8;

    t163 = (((x757+x758)==x759)^x760);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x761 = -1;
	static int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MIN;
	uint32_t x764 = UINT32_MAX;
	uint32_t t164 = UINT32_MAX;

    t164 = (((x761+x762)==x763)^x764);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x765 = INT8_MAX;
	static int8_t x768 = -1;
	volatile int32_t t165 = 101;

    t165 = (((x765+x766)==x767)^x768);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x769 = 21236013U;
	int8_t x772 = -1;
	int32_t t166 = -127;

    t166 = (((x769+x770)==x771)^x772);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x777 = INT16_MIN;
	static int64_t x778 = 61733452283285488LL;
	static volatile int64_t x779 = 1LL;
	volatile int32_t t167 = INT32_MIN;

    t167 = (((x777+x778)==x779)^x780);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x781 = 13942584029LLU;
	int64_t x782 = -672112490452426LL;
	int32_t x783 = INT32_MAX;
	int64_t x784 = -1LL;
	volatile int64_t t168 = -56101757549LL;

    t168 = (((x781+x782)==x783)^x784);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x789 = INT16_MIN;
	uint64_t x790 = 9089069186LLU;
	static int8_t x791 = INT8_MAX;
	volatile int64_t x792 = 4207842889868LL;

    t169 = (((x789+x790)==x791)^x792);

    if (t169 != 4207842889868LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x793 = 6;
	int64_t x794 = INT64_MIN;
	int64_t x795 = 731544169449LL;
	int8_t x796 = -1;
	volatile int32_t t170 = -429;

    t170 = (((x793+x794)==x795)^x796);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x797 = -1;
	int16_t x798 = INT16_MAX;
	volatile int8_t x799 = -1;
	volatile uint16_t x800 = 312U;
	volatile int32_t t171 = -1;

    t171 = (((x797+x798)==x799)^x800);

    if (t171 != 312) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x801 = -3;
	int16_t x803 = INT16_MAX;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t172 = -2;

    t172 = (((x801+x802)==x803)^x804);

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x805 = 80365U;
	uint8_t x806 = UINT8_MAX;
	static int16_t x807 = -1;
	int32_t t173 = -61959176;

    t173 = (((x805+x806)==x807)^x808);

    if (t173 != -15508) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x810 = INT16_MIN;
	uint8_t x811 = 1U;
	volatile int32_t t174 = 184;

    t174 = (((x809+x810)==x811)^x812);

    if (t174 != -52867) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x813 = INT16_MAX;
	static int32_t x815 = INT32_MIN;
	static uint32_t x816 = UINT32_MAX;
	volatile uint32_t t175 = UINT32_MAX;

    t175 = (((x813+x814)==x815)^x816);

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x817 = INT32_MIN;
	static uint64_t x819 = UINT64_MAX;
	uint16_t x820 = 2U;
	volatile int32_t t176 = -86;

    t176 = (((x817+x818)==x819)^x820);

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x827 = UINT32_MAX;
	static int64_t x828 = INT64_MIN;
	static int64_t t177 = INT64_MIN;

    t177 = (((x825+x826)==x827)^x828);

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x829 = 1LL;
	static int32_t x830 = 61;
	int8_t x831 = INT8_MIN;
	static volatile int16_t x832 = 81;
	int32_t t178 = -734188961;

    t178 = (((x829+x830)==x831)^x832);

    if (t178 != 81) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x834 = 306U;
	volatile int64_t t179 = INT64_MAX;

    t179 = (((x833+x834)==x835)^x836);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x838 = -1LL;
	static volatile uint32_t x840 = UINT32_MAX;

    t180 = (((x837+x838)==x839)^x840);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x842 = 7U;
	uint64_t x843 = UINT64_MAX;
	int64_t x844 = INT64_MIN;

    t181 = (((x841+x842)==x843)^x844);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x845 = INT16_MIN;
	uint32_t x846 = 8U;
	uint8_t x847 = UINT8_MAX;
	volatile int32_t t182 = -48630;

    t182 = (((x845+x846)==x847)^x848);

    if (t182 != -107069) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x857 = UINT8_MAX;
	int8_t x858 = INT8_MIN;
	uint64_t x859 = 1650027718226629150LLU;
	volatile int64_t x860 = 32825LL;

    t183 = (((x857+x858)==x859)^x860);

    if (t183 != 32825LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x861 = 166LLU;
	int8_t x862 = INT8_MAX;
	static int64_t x863 = INT64_MAX;
	volatile int64_t x864 = 3LL;
	int64_t t184 = 149389900819812699LL;

    t184 = (((x861+x862)==x863)^x864);

    if (t184 != 3LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x865 = UINT64_MAX;
	uint32_t x866 = 51U;
	uint16_t x867 = UINT16_MAX;
	uint8_t x868 = 13U;
	volatile int32_t t185 = -28;

    t185 = (((x865+x866)==x867)^x868);

    if (t185 != 13) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x869 = 1U;
	static int16_t x870 = INT16_MIN;
	uint32_t x871 = UINT32_MAX;
	static uint8_t x872 = 1U;
	int32_t t186 = 536180244;

    t186 = (((x869+x870)==x871)^x872);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x873 = -30;
	volatile int16_t x874 = -1;
	int64_t x876 = -1LL;
	int64_t t187 = 1227758LL;

    t187 = (((x873+x874)==x875)^x876);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x877 = INT32_MIN;
	volatile uint64_t x878 = UINT64_MAX;
	int16_t x879 = 0;
	uint32_t x880 = 17U;

    t188 = (((x877+x878)==x879)^x880);

    if (t188 != 17U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x881 = 25U;
	uint8_t x882 = UINT8_MAX;
	static int64_t x883 = INT64_MIN;
	int8_t x884 = INT8_MAX;
	int32_t t189 = -96070;

    t189 = (((x881+x882)==x883)^x884);

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x885 = -22;
	int64_t x886 = -13510944468362593LL;
	int32_t x887 = 889646;
	uint32_t x888 = UINT32_MAX;
	uint32_t t190 = UINT32_MAX;

    t190 = (((x885+x886)==x887)^x888);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x889 = INT8_MIN;
	int32_t x890 = 398;
	int16_t x892 = INT16_MAX;
	volatile int32_t t191 = 221471;

    t191 = (((x889+x890)==x891)^x892);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x893 = 268994159539403LLU;
	static int64_t x894 = -1LL;
	int32_t x895 = -1;
	int64_t x896 = INT64_MAX;
	volatile int64_t t192 = INT64_MAX;

    t192 = (((x893+x894)==x895)^x896);

    if (t192 != INT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x897 = 214416541222663LL;
	int8_t x898 = INT8_MAX;
	static int8_t x899 = -4;
	int32_t t193 = -1391196;

    t193 = (((x897+x898)==x899)^x900);

    if (t193 != 3369) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x905 = 264093127696708795LLU;
	int16_t x906 = 5315;
	volatile int8_t x907 = -1;
	volatile uint64_t x908 = 36155136120068206LLU;

    t194 = (((x905+x906)==x907)^x908);

    if (t194 != 36155136120068206LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x910 = 2U;
	static volatile uint16_t x911 = 99U;
	int16_t x912 = -681;
	int32_t t195 = 1839400;

    t195 = (((x909+x910)==x911)^x912);

    if (t195 != -681) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x914 = -2628;
	int32_t x916 = INT32_MAX;
	volatile int32_t t196 = INT32_MAX;

    t196 = (((x913+x914)==x915)^x916);

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x917 = 4U;
	volatile int16_t x918 = INT16_MIN;
	int64_t x919 = INT64_MIN;
	int64_t x920 = INT64_MIN;
	volatile int64_t t197 = INT64_MIN;

    t197 = (((x917+x918)==x919)^x920);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x921 = 1;
	int32_t x922 = INT32_MIN;
	int32_t x923 = INT32_MIN;
	uint64_t x924 = 2664370916047LLU;
	static uint64_t t198 = 44218765573LLU;

    t198 = (((x921+x922)==x923)^x924);

    if (t198 != 2664370916047LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x925 = 10;
	uint64_t x926 = UINT64_MAX;
	static int8_t x927 = INT8_MAX;
	volatile int32_t t199 = -124477246;

    t199 = (((x925+x926)==x927)^x928);

    if (t199 != -59) { NG(); } else { ; }
	
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

