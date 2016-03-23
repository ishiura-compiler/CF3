
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

uint64_t x8 = 68LLU;
int64_t x11 = INT64_MIN;
volatile int64_t x15 = -1LL;
volatile int16_t x21 = -1;
int16_t x25 = 24;
int32_t x28 = INT32_MIN;
static int32_t t6 = -14287;
static uint32_t t8 = UINT32_MAX;
volatile int32_t t9 = 187;
uint32_t x44 = 286832585U;
volatile int64_t x45 = INT64_MIN;
uint16_t x47 = 162U;
int8_t x48 = INT8_MIN;
volatile int32_t t11 = -428;
int16_t x52 = 9;
volatile int32_t x57 = -1;
volatile int64_t x64 = INT64_MAX;
int64_t x66 = INT64_MIN;
int8_t x69 = -1;
int32_t t17 = -577905517;
volatile int32_t x76 = INT32_MIN;
int64_t x87 = -1741133836LL;
uint64_t x93 = 3790131782568192LLU;
int16_t x110 = -1;
int32_t x125 = -1;
int32_t x126 = -58893831;
uint8_t x131 = 1U;
int32_t t30 = 140903298;
volatile int64_t x133 = INT64_MIN;
uint16_t x142 = 11737U;
volatile uint8_t x148 = UINT8_MAX;
uint16_t x149 = 136U;
volatile int32_t t35 = 1628288;
volatile int32_t x155 = INT32_MAX;
volatile int32_t t36 = 58088;
int32_t x163 = INT32_MIN;
uint16_t x168 = 7U;
volatile int8_t x183 = -46;
volatile uint32_t t43 = 393U;
uint64_t x200 = 221484899320307LLU;
uint64_t t46 = 2991439356785170667LLU;
volatile int32_t t49 = 75;
int32_t x219 = 23393;
volatile int32_t x224 = INT32_MIN;
volatile int32_t t53 = INT32_MAX;
int32_t x233 = INT32_MIN;
volatile int16_t x236 = 9;
uint64_t x242 = 1726LLU;
static volatile uint32_t t62 = UINT32_MAX;
int64_t x265 = INT64_MAX;
int64_t x273 = INT64_MIN;
static int32_t x275 = INT32_MIN;
int32_t x280 = INT32_MIN;
volatile int32_t t66 = 0;
static uint16_t x282 = 254U;
int32_t x287 = -1;
uint16_t x288 = 1783U;
uint16_t x289 = 5700U;
static int16_t x292 = INT16_MIN;
volatile uint8_t x294 = 0U;
static uint8_t x295 = 3U;
int32_t t70 = -22012411;
int32_t x297 = INT32_MIN;
volatile uint32_t t71 = 60632U;
int64_t x314 = -2531836LL;
uint16_t x323 = UINT16_MAX;
uint8_t x324 = 27U;
volatile int32_t t77 = -632319;
static int8_t x331 = INT8_MIN;
int32_t t79 = 41;
uint8_t x334 = 114U;
static int16_t x352 = -1;
uint8_t x356 = 53U;
uint64_t x357 = 288448805944032LLU;
int8_t x361 = INT8_MAX;
uint8_t x371 = 0U;
int64_t x393 = INT64_MAX;
int16_t x394 = INT16_MIN;
int16_t x397 = INT16_MAX;
volatile int32_t t96 = 11162329;
uint32_t x407 = UINT32_MAX;
static int32_t t97 = INT32_MIN;
int8_t x414 = INT8_MAX;
int64_t x420 = INT64_MAX;
uint64_t x421 = UINT64_MAX;
static volatile uint64_t x429 = UINT64_MAX;
uint32_t x431 = 1U;
volatile int32_t t104 = INT32_MAX;
static volatile uint16_t x438 = 103U;
static int16_t x439 = INT16_MIN;
int16_t x445 = 63;
volatile int32_t x446 = INT32_MIN;
uint8_t x448 = 39U;
volatile int32_t t107 = -167;
uint32_t x459 = UINT32_MAX;
uint8_t x461 = 3U;
volatile int16_t x466 = 81;
static uint32_t x467 = 282603325U;
static int64_t t113 = -200365528LL;
int64_t x478 = 2195358344594829044LL;
int64_t x480 = -158655101LL;
int32_t x482 = INT32_MIN;
int32_t x487 = INT32_MAX;
int64_t x498 = INT64_MIN;
int32_t x502 = INT32_MAX;
volatile int8_t x512 = INT8_MAX;
static volatile int32_t t122 = 334;
static volatile int32_t t126 = INT32_MIN;
int64_t x532 = INT64_MIN;
volatile int64_t t127 = 46526746925563355LL;
static uint8_t x535 = UINT8_MAX;
uint8_t x550 = 98U;
int32_t x551 = INT32_MIN;
uint16_t x553 = UINT16_MAX;
uint32_t x560 = UINT32_MAX;
uint32_t x561 = 13857976U;
static int64_t x563 = -385LL;
static uint64_t t136 = 818LLU;
int16_t x571 = -1141;
uint8_t x575 = UINT8_MAX;
static volatile int16_t x577 = -1434;
int32_t x578 = INT32_MIN;
uint64_t x580 = 483463085861LLU;
volatile int16_t x584 = INT16_MIN;
uint8_t x592 = UINT8_MAX;
static volatile int32_t t142 = -11055;
uint32_t x597 = 1200U;
uint8_t x607 = UINT8_MAX;
volatile int8_t x618 = -1;
int64_t x620 = INT64_MAX;
volatile int32_t t150 = -59855;
int8_t x628 = -1;
volatile int64_t t153 = INT64_MIN;
volatile uint32_t x637 = UINT32_MAX;
uint16_t x639 = UINT16_MAX;
uint32_t t157 = UINT32_MAX;
volatile int32_t t158 = 311762;
volatile int64_t x661 = INT64_MAX;
int32_t t162 = -26;
uint16_t x684 = 10U;
int32_t x687 = -1;
static uint8_t x695 = UINT8_MAX;
int32_t x697 = INT32_MAX;
int16_t x698 = -1;
uint32_t x704 = 354892757U;
int64_t x708 = 1486058LL;
static uint16_t x712 = 468U;
volatile int32_t t170 = 78463;
uint16_t x713 = UINT16_MAX;
int16_t x716 = -1;
static uint64_t x717 = 19435508511177347LLU;
uint8_t x718 = UINT8_MAX;
volatile int16_t x723 = INT16_MIN;
int64_t x725 = -1LL;
volatile uint64_t x726 = 1524483621667409641LLU;
volatile int8_t x727 = INT8_MIN;
uint64_t x734 = UINT64_MAX;
int64_t x738 = INT64_MIN;
volatile int8_t x740 = -1;
uint16_t x741 = 823U;
int32_t x743 = 27320;
int16_t x747 = INT16_MAX;
uint32_t x755 = 82U;
static int64_t x763 = INT64_MAX;
volatile int32_t t183 = 44216;
uint64_t x773 = 1597023LLU;
int64_t x777 = INT64_MAX;
volatile uint32_t x778 = 28U;
int32_t x780 = INT32_MIN;
volatile int32_t t187 = INT32_MIN;
uint16_t x784 = 0U;
int16_t x796 = INT16_MIN;
int32_t t191 = -52185332;
volatile int32_t t192 = 2;
static volatile int64_t x804 = INT64_MIN;
volatile int32_t t194 = 70;
volatile uint32_t x817 = 48U;
static uint16_t x818 = UINT16_MAX;
volatile int32_t t197 = INT32_MAX;
volatile int8_t x821 = 7;
volatile uint32_t x822 = UINT32_MAX;
int16_t x824 = INT16_MIN;
int64_t x825 = INT64_MAX;
static volatile uint32_t t199 = 13676659U;


void f0(void) {
    	uint8_t x1 = 1U;
	static uint64_t x2 = UINT64_MAX;
	volatile int8_t x3 = INT8_MIN;
	int16_t x4 = 225;
	volatile int32_t t0 = 140;

    t0 = (((x1>x2)>x3)+x4);

    if (t0 != 226) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 6U;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = -1;
	static uint64_t t1 = 1LLU;

    t1 = (((x5>x6)>x7)+x8);

    if (t1 != 69LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	static int32_t x12 = 1023;
	int32_t t2 = -44;

    t2 = (((x9>x10)>x11)+x12);

    if (t2 != 1024) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MAX;
	int32_t x16 = -1791646;
	volatile int32_t t3 = -33552;

    t3 = (((x13>x14)>x15)+x16);

    if (t3 != -1791645) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	static int32_t x18 = 1907724;
	int32_t x19 = -1;
	volatile int64_t x20 = 201621867940LL;
	int64_t t4 = -14631288LL;

    t4 = (((x17>x18)>x19)+x20);

    if (t4 != 201621867941LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 1686;
	static volatile int16_t x23 = 286;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1;

    t5 = (((x21>x22)>x23)+x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = -1215385394165LL;
	int8_t x27 = -1;

    t6 = (((x25>x26)>x27)+x28);

    if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	volatile int32_t x30 = -1;
	int64_t x31 = INT64_MAX;
	volatile int32_t x32 = 713100636;
	volatile int32_t t7 = 970;

    t7 = (((x29>x30)>x31)+x32);

    if (t7 != 713100636) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = 3015;
	volatile uint64_t x35 = 3082153411302151765LLU;
	uint32_t x36 = UINT32_MAX;

    t8 = (((x33>x34)>x35)+x36);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static int64_t x38 = 1199203057LL;
	volatile int64_t x39 = -210LL;
	volatile uint8_t x40 = 36U;

    t9 = (((x37>x38)>x39)+x40);

    if (t9 != 37) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	static uint32_t x42 = 329777258U;
	int64_t x43 = INT64_MIN;
	static volatile uint32_t t10 = 2957U;

    t10 = (((x41>x42)>x43)+x44);

    if (t10 != 286832586U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;

    t11 = (((x45>x46)>x47)+x48);

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	int32_t x51 = -52;
	static int32_t t12 = 57843;

    t12 = (((x49>x50)>x51)+x52);

    if (t12 != 10) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 19LLU;
	volatile uint64_t x54 = UINT64_MAX;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = -3;
	volatile int32_t t13 = -662979770;

    t13 = (((x53>x54)>x55)+x56);

    if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = -1;
	static int8_t x59 = INT8_MIN;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -885260946;

    t14 = (((x57>x58)>x59)+x60);

    if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	static int64_t x62 = -1LL;
	int64_t x63 = 426583LL;
	int64_t t15 = INT64_MAX;

    t15 = (((x61>x62)>x63)+x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x67 = 455;
	int32_t x68 = -3;
	volatile int32_t t16 = 1045070889;

    t16 = (((x65>x66)>x67)+x68);

    if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x70 = -1631535775572401104LL;
	int32_t x71 = -1;
	int16_t x72 = -1;

    t17 = (((x69>x70)>x71)+x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MAX;
	int8_t x75 = -1;
	int32_t t18 = -4;

    t18 = (((x73>x74)>x75)+x76);

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 2014415153LLU;
	volatile int16_t x78 = INT16_MIN;
	uint32_t x79 = 72761U;
	uint8_t x80 = 0U;
	static int32_t t19 = -3;

    t19 = (((x77>x78)>x79)+x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MAX;
	volatile int8_t x86 = -61;
	int16_t x88 = -1;
	volatile int32_t t20 = 1007;

    t20 = (((x85>x86)>x87)+x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 7LLU;
	static volatile uint32_t x90 = 63969632U;
	int32_t x91 = 12285201;
	volatile int32_t x92 = -1;
	volatile int32_t t21 = -1;

    t21 = (((x89>x90)>x91)+x92);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = -1LL;
	static int32_t x95 = INT32_MAX;
	int16_t x96 = -1;
	static volatile int32_t t22 = 0;

    t22 = (((x93>x94)>x95)+x96);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 3U;
	int32_t x98 = 7225;
	uint8_t x99 = 29U;
	int8_t x100 = -1;
	static volatile int32_t t23 = -351398;

    t23 = (((x97>x98)>x99)+x100);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MIN;
	volatile int32_t x102 = -1;
	volatile int16_t x103 = 422;
	volatile int32_t x104 = -3;
	volatile int32_t t24 = -38373134;

    t24 = (((x101>x102)>x103)+x104);

    if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = -1;
	int32_t x111 = INT32_MIN;
	volatile int8_t x112 = INT8_MIN;
	static volatile int32_t t25 = -200902;

    t25 = (((x109>x110)>x111)+x112);

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	int16_t x114 = -1;
	int8_t x115 = -15;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t26 = -7;

    t26 = (((x113>x114)>x115)+x116);

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = 835U;
	static int64_t x118 = INT64_MAX;
	int32_t x119 = -1;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t27 = 1;

    t27 = (((x117>x118)>x119)+x120);

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x121 = INT32_MIN;
	static int8_t x122 = -1;
	volatile int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MAX;
	int32_t t28 = 24452416;

    t28 = (((x121>x122)>x123)+x124);

    if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x127 = -6674889795921LL;
	int32_t x128 = -517079;
	int32_t t29 = -56;

    t29 = (((x125>x126)>x127)+x128);

    if (t29 != -517078) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	uint16_t x132 = 2715U;

    t30 = (((x129>x130)>x131)+x132);

    if (t30 != 2715) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x134 = 28704U;
	static uint8_t x135 = 21U;
	int32_t x136 = -1;
	int32_t t31 = 1022;

    t31 = (((x133>x134)>x135)+x136);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 38013U;
	volatile uint64_t x138 = 515464009050321LLU;
	int64_t x139 = -8543803940292LL;
	volatile uint16_t x140 = 3289U;
	volatile int32_t t32 = -22031;

    t32 = (((x137>x138)>x139)+x140);

    if (t32 != 3290) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = 127LLU;
	uint16_t x143 = 4U;
	int32_t x144 = -1291;
	int32_t t33 = 12334861;

    t33 = (((x141>x142)>x143)+x144);

    if (t33 != -1291) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x145 = INT64_MIN;
	int64_t x146 = 564LL;
	int16_t x147 = INT16_MAX;
	int32_t t34 = 6318;

    t34 = (((x145>x146)>x147)+x148);

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x150 = 431;
	static uint8_t x151 = 4U;
	int16_t x152 = 39;

    t35 = (((x149>x150)>x151)+x152);

    if (t35 != 39) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int8_t x156 = INT8_MIN;

    t36 = (((x153>x154)>x155)+x156);

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = 8423U;
	int64_t x158 = INT64_MIN;
	static int32_t x159 = -1;
	uint64_t x160 = 4460789208385474LLU;
	volatile uint64_t t37 = 1340971250594108LLU;

    t37 = (((x157>x158)>x159)+x160);

    if (t37 != 4460789208385475LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = UINT64_MAX;
	uint8_t x162 = 0U;
	uint16_t x164 = UINT16_MAX;
	static int32_t t38 = 137815655;

    t38 = (((x161>x162)>x163)+x164);

    if (t38 != 65536) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = UINT8_MAX;
	uint16_t x166 = 0U;
	int64_t x167 = 238457337153919LL;
	int32_t t39 = 1018108932;

    t39 = (((x165>x166)>x167)+x168);

    if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = -1LL;
	static volatile int16_t x174 = 75;
	static uint32_t x175 = UINT32_MAX;
	uint8_t x176 = UINT8_MAX;
	int32_t t40 = -1362;

    t40 = (((x173>x174)>x175)+x176);

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	static uint16_t x179 = 885U;
	static int16_t x180 = INT16_MIN;
	static int32_t t41 = 813329328;

    t41 = (((x177>x178)>x179)+x180);

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = -1;
	uint64_t x182 = 2135605580307048271LLU;
	uint64_t x184 = 166284853486LLU;
	uint64_t t42 = 7194416951880LLU;

    t42 = (((x181>x182)>x183)+x184);

    if (t42 != 166284853487LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x185 = 1U;
	volatile uint32_t x186 = 466U;
	uint8_t x187 = 3U;
	uint32_t x188 = 13473253U;

    t43 = (((x185>x186)>x187)+x188);

    if (t43 != 13473253U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x189 = 2492U;
	int8_t x190 = -3;
	uint64_t x191 = 7130256431LLU;
	static int8_t x192 = -1;
	volatile int32_t t44 = -1;

    t44 = (((x189>x190)>x191)+x192);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = INT8_MIN;
	static int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	volatile uint32_t x196 = 5710573U;
	uint32_t t45 = 57U;

    t45 = (((x193>x194)>x195)+x196);

    if (t45 != 5710574U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;

    t46 = (((x197>x198)>x199)+x200);

    if (t46 != 221484899320308LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x201 = 112U;
	volatile int32_t x202 = INT32_MAX;
	uint8_t x203 = 1U;
	int64_t x204 = -7285116473103LL;
	int64_t t47 = 15304386LL;

    t47 = (((x201>x202)>x203)+x204);

    if (t47 != -7285116473103LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = INT8_MIN;
	uint8_t x206 = 30U;
	static int8_t x207 = INT8_MAX;
	volatile uint64_t x208 = 436556379LLU;
	uint64_t t48 = 214634319728LLU;

    t48 = (((x205>x206)>x207)+x208);

    if (t48 != 436556379LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x209 = 4U;
	uint16_t x210 = 15721U;
	volatile int8_t x211 = -1;
	int32_t x212 = 570;

    t49 = (((x209>x210)>x211)+x212);

    if (t49 != 571) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = INT8_MIN;
	uint64_t x214 = 29LLU;
	int32_t x215 = -5;
	int32_t x216 = INT32_MIN;
	int32_t t50 = 703;

    t50 = (((x213>x214)>x215)+x216);

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x217 = 1U;
	int16_t x218 = INT16_MAX;
	int32_t x220 = -69;
	int32_t t51 = -9;

    t51 = (((x217>x218)>x219)+x220);

    if (t51 != -69) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x221 = INT8_MIN;
	int8_t x222 = 34;
	int32_t x223 = -646535;
	int32_t t52 = 0;

    t52 = (((x221>x222)>x223)+x224);

    if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	static uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MAX;

    t53 = (((x225>x226)>x227)+x228);

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = 780;
	int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t54 = 1038142;

    t54 = (((x229>x230)>x231)+x232);

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x234 = 9U;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t t55 = -4058;

    t55 = (((x233>x234)>x235)+x236);

    if (t55 != 9) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x237 = INT16_MAX;
	static int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	volatile int32_t x240 = INT32_MIN;
	int32_t t56 = -335;

    t56 = (((x237>x238)>x239)+x240);

    if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x241 = 10U;
	static int64_t x243 = INT64_MAX;
	volatile uint8_t x244 = 50U;
	static volatile int32_t t57 = -249;

    t57 = (((x241>x242)>x243)+x244);

    if (t57 != 50) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x245 = INT32_MAX;
	static int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t58 = 13;

    t58 = (((x245>x246)>x247)+x248);

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = -3225;
	int32_t x250 = 2;
	int16_t x251 = -39;
	int64_t x252 = -1913245571442168218LL;
	volatile int64_t t59 = -9LL;

    t59 = (((x249>x250)>x251)+x252);

    if (t59 != -1913245571442168217LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x253 = 45017822455LL;
	volatile uint32_t x254 = UINT32_MAX;
	uint32_t x255 = 1U;
	int64_t x256 = 705095500LL;
	volatile int64_t t60 = -14719LL;

    t60 = (((x253>x254)>x255)+x256);

    if (t60 != 705095500LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x257 = 26U;
	int16_t x258 = 639;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	volatile int32_t t61 = -10;

    t61 = (((x257>x258)>x259)+x260);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x261 = 4235U;
	int8_t x262 = INT8_MAX;
	uint8_t x263 = 12U;
	uint32_t x264 = UINT32_MAX;

    t62 = (((x261>x262)>x263)+x264);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x266 = UINT64_MAX;
	int16_t x267 = -25;
	volatile int16_t x268 = -43;
	int32_t t63 = -1;

    t63 = (((x265>x266)>x267)+x268);

    if (t63 != -42) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = 4479020;
	static int8_t x270 = 1;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t64 = 3;

    t64 = (((x269>x270)>x271)+x272);

    if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x274 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	volatile int32_t t65 = 232495;

    t65 = (((x273>x274)>x275)+x276);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x277 = UINT16_MAX;
	static int32_t x278 = INT32_MIN;
	static int16_t x279 = -1;

    t66 = (((x277>x278)>x279)+x280);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = 1U;
	static int32_t x283 = INT32_MAX;
	int64_t x284 = -2178610842600LL;
	volatile int64_t t67 = 1097552395415LL;

    t67 = (((x281>x282)>x283)+x284);

    if (t67 != -2178610842600LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = 14;
	int32_t x286 = 13085;
	static int32_t t68 = 180;

    t68 = (((x285>x286)>x287)+x288);

    if (t68 != 1784) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x290 = 5957LLU;
	uint16_t x291 = 1199U;
	static volatile int32_t t69 = 32919899;

    t69 = (((x289>x290)>x291)+x292);

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x293 = -840;
	uint8_t x296 = 65U;

    t70 = (((x293>x294)>x295)+x296);

    if (t70 != 65) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x298 = 5332;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;

    t71 = (((x297>x298)>x299)+x300);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	volatile uint32_t x302 = 9468U;
	int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t72 = 42690329LL;

    t72 = (((x301>x302)>x303)+x304);

    if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = -1LL;
	uint16_t x306 = UINT16_MAX;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = -3;
	int32_t t73 = -501983997;

    t73 = (((x305>x306)>x307)+x308);

    if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = INT16_MAX;
	uint8_t x310 = 44U;
	int32_t x311 = 7;
	volatile int8_t x312 = 0;
	int32_t t74 = -6600740;

    t74 = (((x309>x310)>x311)+x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -643;
	int32_t x315 = INT32_MAX;
	int64_t x316 = 1432298081573361LL;
	int64_t t75 = -2409356517807LL;

    t75 = (((x313>x314)>x315)+x316);

    if (t75 != 1432298081573361LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x317 = 55;
	int64_t x318 = -9089297879632LL;
	static int16_t x319 = 6;
	volatile uint16_t x320 = 3U;
	int32_t t76 = -157;

    t76 = (((x317>x318)>x319)+x320);

    if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = INT32_MAX;
	uint32_t x322 = UINT32_MAX;

    t77 = (((x321>x322)>x323)+x324);

    if (t77 != 27) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = 0;
	int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	int8_t x328 = 0;
	volatile int32_t t78 = 11;

    t78 = (((x325>x326)>x327)+x328);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x329 = INT8_MIN;
	uint32_t x330 = 1520U;
	static volatile uint8_t x332 = 76U;

    t79 = (((x329>x330)>x331)+x332);

    if (t79 != 77) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x335 = 216;
	int8_t x336 = -1;
	volatile int32_t t80 = -7964;

    t80 = (((x333>x334)>x335)+x336);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x337 = UINT8_MAX;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 1442145085943LLU;
	int8_t x340 = INT8_MIN;
	int32_t t81 = 292346426;

    t81 = (((x337>x338)>x339)+x340);

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x341 = UINT16_MAX;
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = UINT32_MAX;
	static volatile uint64_t x344 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

    t82 = (((x341>x342)>x343)+x344);

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = INT64_MAX;
	int8_t x346 = -2;
	volatile uint16_t x347 = UINT16_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

    t83 = (((x345>x346)>x347)+x348);

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x349 = INT64_MAX;
	int32_t x350 = -1;
	int16_t x351 = INT16_MAX;
	static int32_t t84 = 5749;

    t84 = (((x349>x350)>x351)+x352);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = -1;
	int32_t x354 = 2;
	volatile int64_t x355 = INT64_MAX;
	static int32_t t85 = -365751;

    t85 = (((x353>x354)>x355)+x356);

    if (t85 != 53) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x358 = UINT64_MAX;
	static int64_t x359 = -7280981LL;
	uint64_t x360 = 29947LLU;
	uint64_t t86 = 25LLU;

    t86 = (((x357>x358)>x359)+x360);

    if (t86 != 29948LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x362 = 3238115;
	uint8_t x363 = 104U;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t87 = -3;

    t87 = (((x361>x362)>x363)+x364);

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MAX;
	int8_t x367 = -8;
	int16_t x368 = -1;
	volatile int32_t t88 = -1;

    t88 = (((x365>x366)>x367)+x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = 57589;
	int8_t x370 = 4;
	volatile int64_t x372 = -1770620953140LL;
	static volatile int64_t t89 = -153953762LL;

    t89 = (((x369>x370)>x371)+x372);

    if (t89 != -1770620953139LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x373 = -39;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = -1;
	static int16_t x376 = INT16_MIN;
	volatile int32_t t90 = -105;

    t90 = (((x373>x374)>x375)+x376);

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 184404U;
	int32_t x378 = INT32_MIN;
	volatile int32_t x379 = -14573;
	int16_t x380 = -15;
	static int32_t t91 = 254;

    t91 = (((x377>x378)>x379)+x380);

    if (t91 != -14) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	volatile int32_t x382 = -1;
	int16_t x383 = INT16_MAX;
	int64_t x384 = -2LL;
	static int64_t t92 = -808LL;

    t92 = (((x381>x382)>x383)+x384);

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = INT64_MIN;
	int16_t x386 = -1;
	static int16_t x387 = -907;
	int8_t x388 = -7;
	volatile int32_t t93 = -1683559;

    t93 = (((x385>x386)>x387)+x388);

    if (t93 != -6) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x395 = INT16_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t94 = 332427;

    t94 = (((x393>x394)>x395)+x396);

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x398 = -15810;
	uint64_t x399 = 88640343LLU;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

    t95 = (((x397>x398)>x399)+x400);

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x401 = UINT32_MAX;
	int64_t x402 = INT64_MAX;
	uint64_t x403 = UINT64_MAX;
	static int32_t x404 = 108351;

    t96 = (((x401>x402)>x403)+x404);

    if (t96 != 108351) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x405 = -1LL;
	static uint32_t x406 = UINT32_MAX;
	int32_t x408 = INT32_MIN;

    t97 = (((x405>x406)>x407)+x408);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x409 = INT8_MAX;
	int64_t x410 = 14114220LL;
	uint32_t x411 = 4258890U;
	static int64_t x412 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

    t98 = (((x409>x410)>x411)+x412);

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	static volatile int32_t x416 = INT32_MIN;
	int32_t t99 = 6;

    t99 = (((x413>x414)>x415)+x416);

    if (t99 != -2147483647) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x417 = -1LL;
	uint8_t x418 = 4U;
	volatile uint16_t x419 = 3U;
	int64_t t100 = INT64_MAX;

    t100 = (((x417>x418)>x419)+x420);

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x422 = 5U;
	volatile int16_t x423 = -1;
	volatile int64_t x424 = INT64_MIN;
	int64_t t101 = -30953812LL;

    t101 = (((x421>x422)>x423)+x424);

    if (t101 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x425 = 722U;
	volatile int32_t x426 = 523697845;
	volatile uint64_t x427 = 178161468554832LLU;
	static int64_t x428 = INT64_MIN;
	int64_t t102 = INT64_MIN;

    t102 = (((x425>x426)>x427)+x428);

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x430 = 11245301LLU;
	uint8_t x432 = UINT8_MAX;
	int32_t t103 = -210;

    t103 = (((x429>x430)>x431)+x432);

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = 20U;
	volatile int64_t x435 = INT64_MAX;
	static int32_t x436 = INT32_MAX;

    t104 = (((x433>x434)>x435)+x436);

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x437 = -5;
	int8_t x440 = -1;
	volatile int32_t t105 = 712259017;

    t105 = (((x437>x438)>x439)+x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x441 = -36509LL;
	int16_t x442 = 0;
	volatile int32_t x443 = 120962;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t106 = -22858544;

    t106 = (((x441>x442)>x443)+x444);

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x447 = 0U;

    t107 = (((x445>x446)>x447)+x448);

    if (t107 != 40) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = -1;
	volatile int16_t x450 = 6490;
	volatile uint64_t x451 = 11426976013662LLU;
	uint16_t x452 = UINT16_MAX;
	static volatile int32_t t108 = -1;

    t108 = (((x449>x450)>x451)+x452);

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x453 = INT32_MIN;
	static int32_t x454 = INT32_MIN;
	int32_t x455 = INT32_MAX;
	volatile uint32_t x456 = 1094409U;
	volatile uint32_t t109 = 12307831U;

    t109 = (((x453>x454)>x455)+x456);

    if (t109 != 1094409U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x457 = 3606U;
	volatile int64_t x458 = INT64_MAX;
	uint32_t x460 = 26812743U;
	static volatile uint32_t t110 = 116U;

    t110 = (((x457>x458)>x459)+x460);

    if (t110 != 26812743U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x462 = INT32_MAX;
	volatile int64_t x463 = INT64_MIN;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t111 = -1;

    t111 = (((x461>x462)>x463)+x464);

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x465 = 1307992846377LLU;
	int32_t x468 = INT32_MAX;
	static volatile int32_t t112 = INT32_MAX;

    t112 = (((x465>x466)>x467)+x468);

    if (t112 != INT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = -58;
	volatile int8_t x470 = INT8_MAX;
	int32_t x471 = INT32_MIN;
	int64_t x472 = -1LL;

    t113 = (((x469>x470)>x471)+x472);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x473 = UINT8_MAX;
	int64_t x474 = INT64_MIN;
	volatile int32_t x475 = 4191;
	uint8_t x476 = 1U;
	static int32_t t114 = -602642802;

    t114 = (((x473>x474)>x475)+x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x477 = -1;
	static volatile int32_t x479 = -1;
	int64_t t115 = -685471420597948LL;

    t115 = (((x477>x478)>x479)+x480);

    if (t115 != -158655100LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = INT64_MAX;
	static int32_t x483 = 4;
	volatile int16_t x484 = INT16_MAX;
	int32_t t116 = -793764010;

    t116 = (((x481>x482)>x483)+x484);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x485 = INT8_MIN;
	uint32_t x486 = 13290U;
	int32_t x488 = INT32_MIN;
	volatile int32_t t117 = INT32_MIN;

    t117 = (((x485>x486)>x487)+x488);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = -1;
	int64_t x490 = INT64_MAX;
	int16_t x491 = INT16_MAX;
	int16_t x492 = -1;
	int32_t t118 = 82639;

    t118 = (((x489>x490)>x491)+x492);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x497 = INT32_MIN;
	static volatile uint8_t x499 = 0U;
	uint32_t x500 = 19142U;
	volatile uint32_t t119 = 3103U;

    t119 = (((x497>x498)>x499)+x500);

    if (t119 != 19143U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x501 = UINT64_MAX;
	int8_t x503 = INT8_MIN;
	int16_t x504 = -5;
	volatile int32_t t120 = 58059861;

    t120 = (((x501>x502)>x503)+x504);

    if (t120 != -4) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x505 = 1;
	int16_t x506 = INT16_MAX;
	uint64_t x507 = 118045521346LLU;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t121 = UINT64_MAX;

    t121 = (((x505>x506)>x507)+x508);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = -73161;
	volatile int8_t x511 = -15;

    t122 = (((x509>x510)>x511)+x512);

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x513 = INT64_MAX;
	int32_t x514 = 3572708;
	volatile int8_t x515 = INT8_MAX;
	uint64_t x516 = UINT64_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = (((x513>x514)>x515)+x516);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x517 = 3933488835LL;
	static int8_t x518 = INT8_MIN;
	int16_t x519 = -1;
	uint32_t x520 = 307U;
	static volatile uint32_t t124 = 225090601U;

    t124 = (((x517>x518)>x519)+x520);

    if (t124 != 308U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile int32_t x522 = -14592856;
	static int32_t x523 = -537437116;
	int16_t x524 = -1;
	volatile int32_t t125 = -61567;

    t125 = (((x521>x522)>x523)+x524);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x525 = INT64_MIN;
	uint8_t x526 = 11U;
	static uint16_t x527 = UINT16_MAX;
	static int32_t x528 = INT32_MIN;

    t126 = (((x525>x526)>x527)+x528);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x529 = 2;
	int32_t x530 = INT32_MIN;
	int32_t x531 = INT32_MIN;

    t127 = (((x529>x530)>x531)+x532);

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = INT64_MIN;
	int16_t x534 = 1530;
	static volatile int16_t x536 = 0;
	volatile int32_t t128 = 3139;

    t128 = (((x533>x534)>x535)+x536);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x537 = 91766426664794LL;
	int8_t x538 = -30;
	volatile int8_t x539 = 27;
	volatile int8_t x540 = INT8_MAX;
	int32_t t129 = 59924;

    t129 = (((x537>x538)>x539)+x540);

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x541 = -1LL;
	int8_t x542 = INT8_MIN;
	int64_t x543 = -1LL;
	uint64_t x544 = 2183853684LLU;
	uint64_t t130 = 19658LLU;

    t130 = (((x541>x542)>x543)+x544);

    if (t130 != 2183853685LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = -1;
	int16_t x546 = INT16_MAX;
	int32_t x547 = INT32_MIN;
	int16_t x548 = 6183;
	static int32_t t131 = 13426933;

    t131 = (((x545>x546)>x547)+x548);

    if (t131 != 6184) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x549 = 4487U;
	int16_t x552 = 1601;
	volatile int32_t t132 = 806495990;

    t132 = (((x549>x550)>x551)+x552);

    if (t132 != 1602) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x554 = -20;
	int64_t x555 = -534235814LL;
	uint32_t x556 = UINT32_MAX;
	uint32_t t133 = 99258033U;

    t133 = (((x553>x554)>x555)+x556);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x557 = -1LL;
	int8_t x558 = INT8_MIN;
	int32_t x559 = INT32_MAX;
	volatile uint32_t t134 = UINT32_MAX;

    t134 = (((x557>x558)>x559)+x560);

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x562 = INT8_MIN;
	uint8_t x564 = UINT8_MAX;
	int32_t t135 = -50431241;

    t135 = (((x561>x562)>x563)+x564);

    if (t135 != 256) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x565 = INT32_MIN;
	static int32_t x566 = INT32_MIN;
	static uint32_t x567 = 200131U;
	uint64_t x568 = 0LLU;

    t136 = (((x565>x566)>x567)+x568);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x569 = 70U;
	int64_t x570 = INT64_MIN;
	int16_t x572 = -1;
	volatile int32_t t137 = 9;

    t137 = (((x569>x570)>x571)+x572);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x573 = UINT16_MAX;
	int8_t x574 = INT8_MIN;
	int8_t x576 = INT8_MAX;
	int32_t t138 = 181;

    t138 = (((x573>x574)>x575)+x576);

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x579 = 12U;
	uint64_t t139 = 15575176LLU;

    t139 = (((x577>x578)>x579)+x580);

    if (t139 != 483463085861LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x581 = 247491941596LLU;
	static uint8_t x582 = 47U;
	int16_t x583 = INT16_MIN;
	volatile int32_t t140 = 23445;

    t140 = (((x581>x582)>x583)+x584);

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x585 = INT8_MAX;
	uint32_t x586 = 4U;
	int32_t x587 = INT32_MIN;
	uint16_t x588 = UINT16_MAX;
	int32_t t141 = 6;

    t141 = (((x585>x586)>x587)+x588);

    if (t141 != 65536) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x589 = 12073630623305539LL;
	static int64_t x590 = -4LL;
	uint8_t x591 = 88U;

    t142 = (((x589>x590)>x591)+x592);

    if (t142 != 255) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x593 = INT16_MIN;
	int16_t x594 = INT16_MAX;
	static int64_t x595 = 17287847LL;
	uint16_t x596 = 0U;
	volatile int32_t t143 = 319078417;

    t143 = (((x593>x594)>x595)+x596);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x598 = -1;
	volatile int16_t x599 = 1;
	volatile int32_t x600 = INT32_MIN;
	volatile int32_t t144 = INT32_MIN;

    t144 = (((x597>x598)>x599)+x600);

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = -1;
	uint16_t x602 = 7U;
	volatile int16_t x603 = INT16_MIN;
	int32_t x604 = -1;
	static volatile int32_t t145 = -610582;

    t145 = (((x601>x602)>x603)+x604);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x605 = UINT16_MAX;
	uint16_t x606 = 12749U;
	int8_t x608 = INT8_MAX;
	static volatile int32_t t146 = -38;

    t146 = (((x605>x606)>x607)+x608);

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x609 = 26;
	int32_t x610 = INT32_MIN;
	volatile int8_t x611 = INT8_MIN;
	uint64_t x612 = UINT64_MAX;
	static uint64_t t147 = 8776013859727921222LLU;

    t147 = (((x609>x610)>x611)+x612);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x613 = -413797695775LL;
	int64_t x614 = -95480590LL;
	int64_t x615 = 2267535986LL;
	int32_t x616 = INT32_MAX;
	int32_t t148 = INT32_MAX;

    t148 = (((x613>x614)>x615)+x616);

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x617 = 267205201290799045LLU;
	uint16_t x619 = UINT16_MAX;
	int64_t t149 = INT64_MAX;

    t149 = (((x617>x618)>x619)+x620);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x621 = INT32_MIN;
	static uint16_t x622 = 0U;
	volatile uint32_t x623 = 442U;
	int8_t x624 = -1;

    t150 = (((x621>x622)>x623)+x624);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x625 = 790U;
	uint8_t x626 = 51U;
	uint32_t x627 = 888882U;
	int32_t t151 = -76828332;

    t151 = (((x625>x626)>x627)+x628);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x629 = INT64_MIN;
	volatile int8_t x630 = INT8_MIN;
	uint16_t x631 = 28442U;
	static int8_t x632 = INT8_MIN;
	static int32_t t152 = 1;

    t152 = (((x629>x630)>x631)+x632);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = 29915672LL;
	volatile int16_t x634 = 1;
	uint16_t x635 = UINT16_MAX;
	int64_t x636 = INT64_MIN;

    t153 = (((x633>x634)>x635)+x636);

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x638 = -1;
	int8_t x640 = -3;
	int32_t t154 = 56292;

    t154 = (((x637>x638)>x639)+x640);

    if (t154 != -3) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = -1;
	volatile int64_t x642 = INT64_MIN;
	int32_t x643 = -1;
	int8_t x644 = INT8_MIN;
	int32_t t155 = -11653;

    t155 = (((x641>x642)>x643)+x644);

    if (t155 != -127) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = -1;
	int8_t x646 = INT8_MAX;
	int16_t x647 = INT16_MIN;
	int16_t x648 = -2;
	volatile int32_t t156 = -3;

    t156 = (((x645>x646)>x647)+x648);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = -204602;
	volatile int16_t x650 = INT16_MIN;
	static uint8_t x651 = UINT8_MAX;
	static uint32_t x652 = UINT32_MAX;

    t157 = (((x649>x650)>x651)+x652);

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = 55282;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = 7217LLU;
	uint16_t x656 = UINT16_MAX;

    t158 = (((x653>x654)>x655)+x656);

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = INT32_MAX;
	uint16_t x658 = 552U;
	volatile int32_t x659 = 13624;
	static int16_t x660 = -1;
	int32_t t159 = -3672;

    t159 = (((x657>x658)>x659)+x660);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x662 = INT64_MIN;
	volatile int8_t x663 = INT8_MAX;
	int16_t x664 = INT16_MAX;
	int32_t t160 = 4075;

    t160 = (((x661>x662)>x663)+x664);

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x669 = INT8_MAX;
	volatile int32_t x670 = INT32_MAX;
	int16_t x671 = INT16_MIN;
	int8_t x672 = 0;
	static int32_t t161 = -1;

    t161 = (((x669>x670)>x671)+x672);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x673 = UINT8_MAX;
	static int8_t x674 = INT8_MAX;
	int8_t x675 = 3;
	int32_t x676 = -7;

    t162 = (((x673>x674)>x675)+x676);

    if (t162 != -7) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x677 = 4U;
	int64_t x678 = INT64_MIN;
	uint16_t x679 = 1359U;
	static uint16_t x680 = UINT16_MAX;
	int32_t t163 = -25767753;

    t163 = (((x677>x678)>x679)+x680);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = INT64_MIN;
	uint64_t x683 = 0LLU;
	int32_t t164 = 6;

    t164 = (((x681>x682)>x683)+x684);

    if (t164 != 11) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x685 = 238750166LL;
	static int32_t x686 = INT32_MAX;
	uint16_t x688 = 11U;
	static int32_t t165 = 29548;

    t165 = (((x685>x686)>x687)+x688);

    if (t165 != 12) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x693 = -1;
	int16_t x694 = INT16_MIN;
	static int32_t x696 = -1053852;
	int32_t t166 = 980807;

    t166 = (((x693>x694)>x695)+x696);

    if (t166 != -1053852) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x699 = INT16_MIN;
	uint64_t x700 = 20LLU;
	uint64_t t167 = 86342890640792LLU;

    t167 = (((x697>x698)>x699)+x700);

    if (t167 != 21LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = -3;
	volatile int32_t x702 = -1;
	uint16_t x703 = UINT16_MAX;
	volatile uint32_t t168 = 119983314U;

    t168 = (((x701>x702)>x703)+x704);

    if (t168 != 354892757U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x705 = 2U;
	uint8_t x706 = UINT8_MAX;
	volatile uint8_t x707 = 2U;
	static int64_t t169 = -852721129282203LL;

    t169 = (((x705>x706)>x707)+x708);

    if (t169 != 1486058LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x709 = INT32_MIN;
	static volatile int64_t x710 = -3832233593624609LL;
	uint32_t x711 = UINT32_MAX;

    t170 = (((x709>x710)>x711)+x712);

    if (t170 != 468) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x714 = UINT8_MAX;
	uint16_t x715 = UINT16_MAX;
	volatile int32_t t171 = 73;

    t171 = (((x713>x714)>x715)+x716);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x719 = -1;
	static uint16_t x720 = 3670U;
	volatile int32_t t172 = -5318;

    t172 = (((x717>x718)>x719)+x720);

    if (t172 != 3671) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x721 = -1;
	int16_t x722 = INT16_MAX;
	uint64_t x724 = 340041LLU;
	uint64_t t173 = 1179941684776LLU;

    t173 = (((x721>x722)>x723)+x724);

    if (t173 != 340042LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x728 = 223U;
	int32_t t174 = 16887126;

    t174 = (((x725>x726)>x727)+x728);

    if (t174 != 224) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x729 = 13U;
	uint64_t x730 = 3171351957071060LLU;
	int32_t x731 = 3514;
	uint32_t x732 = 83556609U;
	static volatile uint32_t t175 = 117336187U;

    t175 = (((x729>x730)>x731)+x732);

    if (t175 != 83556609U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x733 = INT64_MIN;
	uint8_t x735 = UINT8_MAX;
	uint16_t x736 = 790U;
	volatile int32_t t176 = 3;

    t176 = (((x733>x734)>x735)+x736);

    if (t176 != 790) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x737 = INT8_MAX;
	volatile int16_t x739 = INT16_MIN;
	static volatile int32_t t177 = 0;

    t177 = (((x737>x738)>x739)+x740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x742 = 4U;
	int16_t x744 = -1763;
	static int32_t t178 = 1738989;

    t178 = (((x741>x742)>x743)+x744);

    if (t178 != -1763) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x745 = INT32_MIN;
	uint8_t x746 = 3U;
	int16_t x748 = INT16_MIN;
	volatile int32_t t179 = -23266896;

    t179 = (((x745>x746)>x747)+x748);

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x749 = INT64_MIN;
	uint16_t x750 = 3707U;
	uint32_t x751 = UINT32_MAX;
	uint8_t x752 = UINT8_MAX;
	int32_t t180 = -103928603;

    t180 = (((x749>x750)>x751)+x752);

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x753 = -1LL;
	volatile int32_t x754 = -1;
	int8_t x756 = INT8_MAX;
	int32_t t181 = 10094;

    t181 = (((x753>x754)>x755)+x756);

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x757 = INT64_MIN;
	int16_t x758 = 16280;
	static volatile uint32_t x759 = 2033965154U;
	volatile uint8_t x760 = 123U;
	volatile int32_t t182 = -9000328;

    t182 = (((x757>x758)>x759)+x760);

    if (t182 != 123) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x761 = INT16_MAX;
	int32_t x762 = INT32_MIN;
	static int8_t x764 = -1;

    t183 = (((x761>x762)>x763)+x764);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	static volatile int32_t x766 = -1;
	int8_t x767 = INT8_MAX;
	int8_t x768 = 0;
	int32_t t184 = 0;

    t184 = (((x765>x766)>x767)+x768);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x769 = INT64_MIN;
	uint64_t x770 = UINT64_MAX;
	int8_t x771 = INT8_MIN;
	int8_t x772 = 7;
	volatile int32_t t185 = 1;

    t185 = (((x769>x770)>x771)+x772);

    if (t185 != 8) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x774 = 1U;
	int8_t x775 = INT8_MIN;
	volatile int16_t x776 = INT16_MIN;
	int32_t t186 = 209116;

    t186 = (((x773>x774)>x775)+x776);

    if (t186 != -32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x779 = UINT16_MAX;

    t187 = (((x777>x778)>x779)+x780);

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x781 = 7U;
	volatile int8_t x782 = INT8_MIN;
	volatile int64_t x783 = 455LL;
	int32_t t188 = 13248649;

    t188 = (((x781>x782)>x783)+x784);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = 77;
	static int16_t x786 = INT16_MIN;
	static int16_t x787 = INT16_MIN;
	uint64_t x788 = 26287937636100536LLU;
	static volatile uint64_t t189 = 2763425964644LLU;

    t189 = (((x785>x786)>x787)+x788);

    if (t189 != 26287937636100537LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x789 = -1LL;
	int32_t x790 = INT32_MIN;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = -1;
	int32_t t190 = 16952552;

    t190 = (((x789>x790)>x791)+x792);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x794 = INT64_MAX;
	int32_t x795 = 7;

    t191 = (((x793>x794)>x795)+x796);

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = 408151152;
	int8_t x798 = -31;
	volatile int32_t x799 = -12859;
	int8_t x800 = -30;

    t192 = (((x797>x798)>x799)+x800);

    if (t192 != -29) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x801 = 2958U;
	volatile int8_t x802 = 31;
	int64_t x803 = -1587358301867413733LL;
	volatile int64_t t193 = 14258927225LL;

    t193 = (((x801>x802)>x803)+x804);

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x805 = UINT8_MAX;
	static volatile int8_t x806 = 2;
	volatile int32_t x807 = 8;
	volatile int32_t x808 = -739;

    t194 = (((x805>x806)>x807)+x808);

    if (t194 != -739) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x809 = 63U;
	static int32_t x810 = INT32_MAX;
	int16_t x811 = 4;
	volatile int8_t x812 = -6;
	int32_t t195 = 53078708;

    t195 = (((x809>x810)>x811)+x812);

    if (t195 != -6) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x813 = 49297527U;
	uint64_t x814 = UINT64_MAX;
	volatile int32_t x815 = -1;
	int32_t x816 = -1;
	static int32_t t196 = 5315;

    t196 = (((x813>x814)>x815)+x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x819 = INT8_MAX;
	static volatile int32_t x820 = INT32_MAX;

    t197 = (((x817>x818)>x819)+x820);

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x823 = 1;
	static int32_t t198 = -15;

    t198 = (((x821>x822)>x823)+x824);

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x826 = -1;
	static uint8_t x827 = 38U;
	uint32_t x828 = 318U;

    t199 = (((x825>x826)>x827)+x828);

    if (t199 != 318U) { NG(); } else { ; }
	
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

