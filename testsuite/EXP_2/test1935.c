
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

int8_t x13 = INT8_MIN;
uint8_t x31 = 3U;
volatile int16_t x32 = 12752;
int8_t x33 = -1;
volatile int32_t x34 = INT32_MAX;
uint8_t x41 = UINT8_MAX;
uint64_t x44 = 935990225401892273LLU;
int16_t x46 = INT16_MAX;
int32_t x48 = -1;
volatile int16_t x49 = INT16_MAX;
uint8_t x55 = 18U;
volatile int64_t t8 = 2557152508463LL;
volatile int64_t x87 = -1LL;
uint8_t x88 = 11U;
volatile uint64_t t11 = 64912942LLU;
uint16_t x98 = 2U;
static int8_t x105 = 63;
uint32_t x106 = UINT32_MAX;
volatile int8_t x112 = INT8_MIN;
volatile int32_t t17 = 3603;
static int16_t x136 = INT16_MIN;
volatile int64_t x142 = -118LL;
int8_t x149 = INT8_MIN;
static int64_t x150 = 192884787LL;
volatile uint16_t x151 = 1250U;
volatile uint32_t x153 = 32U;
volatile int32_t t28 = 16;
static int32_t x194 = -66409628;
static uint8_t x199 = 31U;
int32_t x201 = -325180523;
static volatile uint8_t x205 = 1U;
volatile int64_t x210 = INT64_MAX;
uint16_t x213 = UINT16_MAX;
volatile int16_t x215 = INT16_MIN;
int16_t x224 = INT16_MIN;
int8_t x225 = 2;
uint32_t x244 = 0U;
uint32_t t39 = 11983457U;
int8_t x253 = INT8_MIN;
uint8_t x255 = 47U;
int16_t x270 = INT16_MIN;
static volatile int64_t x273 = -1LL;
int16_t x296 = INT16_MAX;
volatile uint32_t t47 = 403401479U;
int8_t x307 = -1;
volatile int64_t x308 = -1LL;
volatile int64_t t49 = -53647740235016489LL;
volatile uint32_t t52 = 43113U;
int8_t x321 = INT8_MIN;
volatile int16_t x323 = INT16_MIN;
int16_t x327 = 4575;
volatile int32_t t54 = 1;
int16_t x333 = -261;
static int8_t x334 = INT8_MIN;
int16_t x338 = INT16_MIN;
uint32_t x344 = 3927887U;
static int16_t x355 = -1;
int64_t x365 = -1604LL;
int16_t x368 = INT16_MIN;
int16_t x375 = INT16_MIN;
volatile uint64_t t62 = 64LLU;
static int8_t x382 = INT8_MAX;
int32_t x383 = 4870;
uint32_t x393 = UINT32_MAX;
uint32_t x397 = 120U;
int32_t x398 = 2;
static uint16_t x413 = 15810U;
int32_t x419 = INT32_MIN;
static uint16_t x421 = UINT16_MAX;
int32_t x422 = 72457197;
volatile int8_t x423 = -1;
int64_t t73 = 27413816840LL;
int32_t x432 = INT32_MAX;
static int64_t x437 = 1923234219LL;
static int64_t t75 = -1230579675LL;
static int64_t x444 = -1LL;
int64_t t76 = 116080LL;
volatile uint64_t x449 = 1131930632LLU;
volatile int64_t x450 = INT64_MAX;
static int64_t x452 = -1LL;
int64_t t78 = INT64_MAX;
static volatile uint8_t x463 = UINT8_MAX;
int64_t t80 = 11058187533LL;
static uint8_t x472 = 6U;
int8_t x474 = 3;
volatile int32_t x475 = -1;
int32_t x492 = -1;
int16_t x497 = INT16_MAX;
static int16_t x501 = -693;
int64_t t86 = -1224954LL;
uint16_t x513 = UINT16_MAX;
static uint16_t x524 = UINT16_MAX;
volatile uint64_t x526 = UINT64_MAX;
int64_t x531 = 261014416682LL;
int16_t x534 = INT16_MAX;
int16_t x536 = 239;
int16_t x537 = -1;
int8_t x540 = 14;
static int32_t x549 = -1;
volatile int8_t x550 = INT8_MIN;
static volatile int32_t t95 = 221;
int64_t x553 = -1LL;
static int16_t x574 = INT16_MAX;
int16_t x593 = -1;
uint16_t x596 = 38U;
volatile int32_t t103 = 106869035;
int16_t x628 = INT16_MIN;
uint16_t x636 = UINT16_MAX;
volatile int8_t x640 = 48;
static int64_t t109 = 14041897217451LL;
static int16_t x641 = 1622;
uint16_t x642 = UINT16_MAX;
int8_t x646 = INT8_MIN;
volatile int32_t t111 = 1;
uint8_t x649 = 1U;
volatile int8_t x650 = INT8_MIN;
uint32_t x652 = UINT32_MAX;
volatile int64_t x656 = INT64_MAX;
static int64_t x663 = INT64_MIN;
volatile int64_t x670 = INT64_MIN;
int8_t x671 = 3;
volatile uint64_t t118 = 6177LLU;
volatile int32_t t119 = -1116112;
uint16_t x701 = 135U;
volatile int32_t t121 = -6002043;
int32_t x708 = INT32_MIN;
volatile int64_t t122 = -184711462431LL;
int16_t x709 = INT16_MIN;
int32_t x710 = INT32_MAX;
int16_t x712 = INT16_MIN;
static uint16_t x713 = UINT16_MAX;
uint32_t x718 = 101609U;
int64_t t125 = INT64_MAX;
static int64_t x724 = -1LL;
volatile int64_t t126 = 419LL;
int16_t x725 = 188;
int16_t x731 = INT16_MAX;
static uint8_t x737 = 19U;
int8_t x756 = INT8_MIN;
uint64_t t133 = 967997LLU;
uint16_t x768 = 49U;
uint32_t x773 = 0U;
static uint16_t x774 = UINT16_MAX;
uint32_t x778 = 0U;
volatile int32_t x781 = -1;
int64_t x782 = -1LL;
int64_t x794 = INT64_MAX;
uint64_t x795 = 404914644LLU;
static uint32_t x801 = 4673053U;
volatile uint8_t x824 = 16U;
int32_t t145 = -34;
static volatile int32_t t146 = 95570255;
uint64_t t147 = 65965380523136956LLU;
uint64_t x847 = 6486206492450LLU;
static int32_t t149 = -3;
static int8_t x865 = INT8_MIN;
volatile int32_t t152 = 1;
int16_t x869 = INT16_MAX;
volatile int32_t t153 = 984867;
int64_t x879 = INT64_MAX;
int32_t x882 = INT32_MIN;
static int32_t x887 = INT32_MIN;
uint64_t t156 = 935840238589484LLU;
static int8_t x890 = INT8_MIN;
static uint8_t x891 = UINT8_MAX;
int32_t t157 = 5477;
volatile int32_t x895 = INT32_MIN;
uint8_t x899 = UINT8_MAX;
uint64_t t161 = 11081544872319997LLU;
int8_t x917 = 2;
int32_t x919 = 15715091;
int32_t x920 = -1;
uint64_t x925 = 8832LLU;
int8_t x926 = 26;
int64_t x927 = 740428334LL;
int8_t x930 = 1;
static uint8_t x932 = 0U;
int32_t t165 = 95849;
int64_t x939 = INT64_MIN;
uint16_t x940 = UINT16_MAX;
int32_t t167 = -447319;
uint64_t x941 = 2266765950LLU;
int32_t x944 = -1;
int32_t x947 = -1;
static int32_t x951 = -44760;
int32_t t170 = -6;
int32_t t171 = 1388;
uint8_t x957 = 6U;
uint16_t x961 = UINT16_MAX;
int32_t t173 = 1024199;
volatile uint32_t x965 = 190232177U;
uint32_t x967 = UINT32_MAX;
int64_t x968 = 25372LL;
volatile uint16_t x969 = 464U;
int8_t x971 = INT8_MAX;
int16_t x972 = INT16_MIN;
static int32_t t175 = -89727349;
volatile uint8_t x988 = 9U;
int8_t x1002 = -19;
int8_t x1008 = INT8_MIN;
static volatile uint8_t x1010 = 1U;
int64_t x1011 = -114543783630LL;
uint32_t x1014 = 92U;
int32_t x1015 = INT32_MIN;
int8_t x1029 = INT8_MIN;
int8_t x1033 = INT8_MIN;
volatile int64_t x1038 = INT64_MAX;
volatile int16_t x1045 = -1694;
int16_t x1046 = INT16_MIN;
static volatile uint8_t x1050 = 29U;
static int32_t t190 = 236251953;
int32_t x1073 = INT32_MAX;
static int32_t x1074 = INT32_MAX;
uint8_t x1084 = 10U;
volatile int32_t x1087 = INT32_MIN;
volatile int64_t x1092 = -1LL;
int32_t x1095 = -7320989;
int32_t t197 = 536628044;
static uint32_t t199 = 312384U;


void f0(void) {
    	int16_t x9 = -1;
	int16_t x10 = INT16_MIN;
	int16_t x11 = 6;
	uint64_t x12 = 97969LLU;
	volatile uint64_t t0 = 1786101188625LLU;

    t0 = ((x9|(x10<=x11))*x12);

    if (t0 != 18446744073709453647LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x14 = INT32_MAX;
	volatile uint64_t x15 = 506031LLU;
	int16_t x16 = INT16_MAX;
	volatile int32_t t1 = 12242108;

    t1 = ((x13|(x14<=x15))*x16);

    if (t1 != -4194176) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = INT32_MAX;
	static uint32_t t2 = 1013021U;

    t2 = ((x29|(x30<=x31))*x32);

    if (t2 != 4294954544U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x35 = INT8_MIN;
	int16_t x36 = 247;
	int32_t t3 = 2080159;

    t3 = ((x33|(x34<=x35))*x36);

    if (t3 != -247) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x42 = -1;
	uint8_t x43 = 3U;
	uint64_t t4 = 1842663588671LLU;

    t4 = ((x41|(x42<=x43))*x44);

    if (t4 != 17316578592967910223LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x45 = -1;
	static int16_t x47 = 0;
	volatile int32_t t5 = -1722971;

    t5 = ((x45|(x46<=x47))*x48);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x50 = INT32_MIN;
	int8_t x51 = -2;
	volatile uint8_t x52 = 61U;
	int32_t t6 = 202565924;

    t6 = ((x49|(x50<=x51))*x52);

    if (t6 != 1998787) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x53 = 14U;
	int8_t x54 = INT8_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t7 = 123579760;

    t7 = ((x53|(x54<=x55))*x56);

    if (t7 != -1792) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x61 = -1LL;
	static int32_t x62 = -1;
	int8_t x63 = INT8_MIN;
	static volatile int16_t x64 = -10;

    t8 = ((x61|(x62<=x63))*x64);

    if (t8 != 10LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x65 = -106533;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 0U;
	static volatile int8_t x68 = -5;
	int32_t t9 = -80;

    t9 = ((x65|(x66<=x67))*x68);

    if (t9 != 532665) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x77 = -1;
	static uint64_t x78 = UINT64_MAX;
	volatile int64_t x79 = -1LL;
	static int8_t x80 = 0;
	volatile int32_t t10 = -1422;

    t10 = ((x77|(x78<=x79))*x80);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x85 = 7836LLU;
	int8_t x86 = -1;

    t11 = ((x85|(x86<=x87))*x88);

    if (t11 != 86207LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x89 = 696473149321507LLU;
	volatile int64_t x90 = 2754777566078077LL;
	int16_t x91 = 12;
	uint16_t x92 = 3556U;
	static volatile uint64_t t12 = 61LLU;

    t12 = ((x89|(x90<=x91))*x92);

    if (t12 != 2476658518987278892LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x93 = -1634371LL;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 2U;
	static volatile int64_t t13 = 536222288LL;

    t13 = ((x93|(x94<=x95))*x96);

    if (t13 != -3268742LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x99 = -1LL;
	int8_t x100 = 0;
	volatile int32_t t14 = 838164496;

    t14 = ((x97|(x98<=x99))*x100);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x101 = 1;
	int64_t x102 = INT64_MIN;
	static uint64_t x103 = 119797336LLU;
	int64_t x104 = -34391016LL;
	int64_t t15 = -58659021451133LL;

    t15 = ((x101|(x102<=x103))*x104);

    if (t15 != -34391016LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x107 = -4;
	volatile int16_t x108 = -1;
	int32_t t16 = -165964;

    t16 = ((x105|(x106<=x107))*x108);

    if (t16 != -63) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x109 = INT8_MAX;
	uint64_t x110 = 1757780LLU;
	uint16_t x111 = UINT16_MAX;

    t17 = ((x109|(x110<=x111))*x112);

    if (t17 != -16256) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x113 = UINT16_MAX;
	volatile int8_t x114 = -1;
	int64_t x115 = INT64_MIN;
	volatile uint64_t x116 = 6283LLU;
	volatile uint64_t t18 = 17473908704226040LLU;

    t18 = ((x113|(x114<=x115))*x116);

    if (t18 != 411756405LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x117 = INT16_MIN;
	static int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	static int32_t t19 = -26;

    t19 = ((x117|(x118<=x119))*x120);

    if (t19 != -2147385345) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	uint8_t x127 = 0U;
	volatile int8_t x128 = -1;
	int32_t t20 = -167;

    t20 = ((x125|(x126<=x127))*x128);

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x129 = 7U;
	int8_t x130 = INT8_MAX;
	volatile int32_t x131 = 1266316;
	static int16_t x132 = -1;
	volatile int32_t t21 = 31;

    t21 = ((x129|(x130<=x131))*x132);

    if (t21 != -7) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x133 = UINT8_MAX;
	static volatile int32_t x134 = 12563;
	static int16_t x135 = -29;
	int32_t t22 = 7066760;

    t22 = ((x133|(x134<=x135))*x136);

    if (t22 != -8355840) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x141 = -38;
	int8_t x143 = INT8_MAX;
	uint64_t x144 = UINT64_MAX;
	uint64_t t23 = 534LLU;

    t23 = ((x141|(x142<=x143))*x144);

    if (t23 != 37LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x145 = 870589U;
	static int32_t x146 = -1;
	static int8_t x147 = -1;
	uint64_t x148 = 8898545472573994512LLU;
	uint64_t t24 = 11383LLU;

    t24 = ((x145|(x146<=x147))*x148);

    if (t24 != 7376251363173345744LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x152 = 11878;
	volatile int32_t t25 = -224;

    t25 = ((x149|(x150<=x151))*x152);

    if (t25 != -1520384) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x154 = UINT32_MAX;
	static int32_t x155 = -1;
	uint8_t x156 = UINT8_MAX;
	static uint32_t t26 = 98890312U;

    t26 = ((x153|(x154<=x155))*x156);

    if (t26 != 8415U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	volatile int32_t x175 = -343;
	int64_t x176 = INT64_MAX;
	volatile int64_t t27 = 188715LL;

    t27 = ((x173|(x174<=x175))*x176);

    if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x177 = INT8_MAX;
	uint64_t x178 = 3332485280779834861LLU;
	volatile uint64_t x179 = UINT64_MAX;
	volatile int16_t x180 = INT16_MAX;

    t28 = ((x177|(x178<=x179))*x180);

    if (t28 != 4161409) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x189 = INT16_MAX;
	uint32_t x190 = 267347831U;
	static int16_t x191 = -1;
	uint32_t x192 = 615295933U;
	volatile uint32_t t29 = 491396769U;

    t29 = ((x189|(x190<=x191))*x192);

    if (t29 != 825349187U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	static int64_t x195 = INT64_MAX;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t30 = -715541161;

    t30 = ((x193|(x194<=x195))*x196);

    if (t30 != -32640) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x197 = -1;
	static uint16_t x198 = 26417U;
	uint64_t x200 = 30393LLU;
	static uint64_t t31 = 40619971016LLU;

    t31 = ((x197|(x198<=x199))*x200);

    if (t31 != 18446744073709521223LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x202 = INT32_MAX;
	static int32_t x203 = -1;
	uint32_t x204 = 2475U;
	uint32_t t32 = 8U;

    t32 = ((x201|(x202<=x203))*x204);

    if (t32 != 2632057223U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x206 = 570739556143LLU;
	int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	static int32_t t33 = INT32_MIN;

    t33 = ((x205|(x206<=x207))*x208);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x209 = INT32_MAX;
	int64_t x211 = INT64_MIN;
	static volatile uint32_t x212 = 1701996U;
	volatile uint32_t t34 = 1U;

    t34 = ((x209|(x210<=x211))*x212);

    if (t34 != 4293265300U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x214 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t35 = -1544;

    t35 = ((x213|(x214<=x215))*x216);

    if (t35 != 16711425) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MAX;
	static int8_t x223 = INT8_MAX;
	int32_t t36 = 2912;

    t36 = ((x221|(x222<=x223))*x224);

    if (t36 != 1073741824) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x226 = UINT64_MAX;
	volatile int64_t x227 = 1LL;
	volatile uint32_t x228 = 4246705U;
	uint32_t t37 = 112332859U;

    t37 = ((x225|(x226<=x227))*x228);

    if (t37 != 8493410U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x237 = -818066LL;
	int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MAX;
	volatile int64_t t38 = -705LL;

    t38 = ((x237|(x238<=x239))*x240);

    if (t38 != -103894382LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x241 = INT32_MIN;
	int64_t x242 = -3264475LL;
	volatile int64_t x243 = INT64_MIN;

    t39 = ((x241|(x242<=x243))*x244);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x254 = UINT64_MAX;
	int16_t x256 = -1;
	static volatile int32_t t40 = -13574;

    t40 = ((x253|(x254<=x255))*x256);

    if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x257 = 5586226876099LLU;
	int64_t x258 = INT64_MIN;
	volatile int8_t x259 = -22;
	static int16_t x260 = -10327;
	uint64_t t41 = 6192LLU;

    t41 = ((x257|(x258<=x259))*x260);

    if (t41 != 18389055108760077243LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x269 = 1104LLU;
	uint64_t x271 = 131887547424125169LLU;
	int64_t x272 = -1LL;
	uint64_t t42 = 10987959125661LLU;

    t42 = ((x269|(x270<=x271))*x272);

    if (t42 != 18446744073709550512LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x274 = INT32_MAX;
	uint64_t x275 = 392902LLU;
	int8_t x276 = INT8_MAX;
	volatile int64_t t43 = 2273LL;

    t43 = ((x273|(x274<=x275))*x276);

    if (t43 != -127LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x281 = 5238U;
	static uint64_t x282 = 2404714LLU;
	int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MIN;
	static volatile uint32_t t44 = 1288563200U;

    t44 = ((x281|(x282<=x283))*x284);

    if (t44 != 4123295744U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x285 = 140;
	int8_t x286 = INT8_MIN;
	volatile int8_t x287 = 21;
	int8_t x288 = 1;
	int32_t t45 = 0;

    t45 = ((x285|(x286<=x287))*x288);

    if (t45 != 141) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MAX;
	static int32_t x291 = -1811;
	int16_t x292 = INT16_MIN;
	volatile int32_t t46 = -342;

    t46 = ((x289|(x290<=x291))*x292);

    if (t46 != 1073741824) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x293 = 49764U;
	uint64_t x294 = 915489766750809LLU;
	volatile uint16_t x295 = UINT16_MAX;

    t47 = ((x293|(x294<=x295))*x296);

    if (t47 != 1630616988U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x301 = INT16_MAX;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t48 = 598;

    t48 = ((x301|(x302<=x303))*x304);

    if (t48 != -4194176) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x306 = -1;

    t49 = ((x305|(x306<=x307))*x308);

    if (t49 != -4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x309 = 6U;
	int64_t x310 = -1249053254LL;
	uint16_t x311 = 15439U;
	uint8_t x312 = 33U;
	int32_t t50 = 28;

    t50 = ((x309|(x310<=x311))*x312);

    if (t50 != 231) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x313 = 41333LL;
	static volatile uint64_t x314 = 28107259988563LLU;
	volatile uint16_t x315 = 57U;
	static uint32_t x316 = 2061322U;
	int64_t t51 = 6LL;

    t51 = ((x313|(x314<=x315))*x316);

    if (t51 != 85200622226LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x317 = UINT32_MAX;
	int8_t x318 = -1;
	int32_t x319 = -199;
	int16_t x320 = INT16_MIN;

    t52 = ((x317|(x318<=x319))*x320);

    if (t52 != 32768U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x322 = INT64_MIN;
	uint8_t x324 = 16U;
	static volatile int32_t t53 = -49898;

    t53 = ((x321|(x322<=x323))*x324);

    if (t53 != -2032) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x325 = 34U;
	uint32_t x326 = 2460371U;
	int16_t x328 = -1;

    t54 = ((x325|(x326<=x327))*x328);

    if (t54 != -34) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	volatile int16_t x331 = 0;
	int64_t x332 = -1LL;
	int64_t t55 = 1306559718LL;

    t55 = ((x329|(x330<=x331))*x332);

    if (t55 != -32767LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x335 = UINT32_MAX;
	volatile int32_t x336 = -81;
	volatile int32_t t56 = 29313825;

    t56 = ((x333|(x334<=x335))*x336);

    if (t56 != 21141) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x337 = 0LLU;
	int64_t x339 = 831030879986LL;
	int32_t x340 = INT32_MIN;
	uint64_t t57 = 8LLU;

    t57 = ((x337|(x338<=x339))*x340);

    if (t57 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	static uint32_t t58 = 2028U;

    t58 = ((x341|(x342<=x343))*x344);

    if (t58 != 3796125647U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x349 = -1;
	int32_t x350 = -1;
	int32_t x351 = 12;
	uint32_t x352 = 0U;
	static uint32_t t59 = 115U;

    t59 = ((x349|(x350<=x351))*x352);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x353 = 47U;
	int8_t x354 = INT8_MIN;
	static uint64_t x356 = 108350983889LLU;
	volatile uint64_t t60 = 2807844223258205LLU;

    t60 = ((x353|(x354<=x355))*x356);

    if (t60 != 5092496242783LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x366 = 13218U;
	static int64_t x367 = -2017405LL;
	int64_t t61 = 12457304633928LL;

    t61 = ((x365|(x366<=x367))*x368);

    if (t61 != 52559872LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x373 = INT32_MIN;
	uint16_t x374 = UINT16_MAX;
	uint64_t x376 = 7LLU;

    t62 = ((x373|(x374<=x375))*x376);

    if (t62 != 18446744058677166080LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t63 = 480;

    t63 = ((x377|(x378<=x379))*x380);

    if (t63 != -8388480) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x381 = 5;
	int64_t x384 = -522757LL;
	static int64_t t64 = -2599190670152347LL;

    t64 = ((x381|(x382<=x383))*x384);

    if (t64 != -2613785LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x385 = 3U;
	int64_t x386 = INT64_MAX;
	static int16_t x387 = INT16_MIN;
	uint32_t x388 = 237819U;
	volatile uint32_t t65 = 874825941U;

    t65 = ((x385|(x386<=x387))*x388);

    if (t65 != 713457U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x394 = -81;
	int32_t x395 = -138770;
	volatile uint8_t x396 = 1U;
	volatile uint32_t t66 = UINT32_MAX;

    t66 = ((x393|(x394<=x395))*x396);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x399 = 1U;
	volatile int8_t x400 = INT8_MIN;
	uint32_t t67 = 0U;

    t67 = ((x397|(x398<=x399))*x400);

    if (t67 != 4294951936U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x401 = 0U;
	int16_t x402 = -5;
	volatile uint8_t x403 = 12U;
	int16_t x404 = INT16_MIN;
	int32_t t68 = 197;

    t68 = ((x401|(x402<=x403))*x404);

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MAX;
	int8_t x412 = -1;
	int32_t t69 = -1028;

    t69 = ((x409|(x410<=x411))*x412);

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x414 = -1333;
	int8_t x415 = -17;
	uint64_t x416 = 917LLU;
	uint64_t t70 = 7013240014675LLU;

    t70 = ((x413|(x414<=x415))*x416);

    if (t70 != 14498687LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x417 = -1;
	int16_t x418 = 63;
	int64_t x420 = -40374228LL;
	volatile int64_t t71 = -3985894372680040085LL;

    t71 = ((x417|(x418<=x419))*x420);

    if (t71 != 40374228LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x424 = 22LLU;
	static volatile uint64_t t72 = 17448LLU;

    t72 = ((x421|(x422<=x423))*x424);

    if (t72 != 1441770LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x425 = 3832963LL;
	int64_t x426 = -628352LL;
	static int64_t x427 = -1LL;
	int32_t x428 = 203;

    t73 = ((x425|(x426<=x427))*x428);

    if (t73 != 778091489LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x429 = -1;
	static uint32_t x430 = UINT32_MAX;
	int16_t x431 = -1;
	volatile int32_t t74 = -432441;

    t74 = ((x429|(x430<=x431))*x432);

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x438 = 14617814946651LLU;
	int32_t x439 = INT32_MAX;
	volatile int32_t x440 = INT32_MIN;

    t75 = ((x437|(x438<=x439))*x440);

    if (t75 != -4130114036576550912LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x441 = 4U;
	int32_t x442 = INT32_MIN;
	uint64_t x443 = 86797542259590492LLU;

    t76 = ((x441|(x442<=x443))*x444);

    if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x451 = -636;
	volatile uint64_t t77 = 57046879738786LLU;

    t77 = ((x449|(x450<=x451))*x452);

    if (t77 != 18446744072577620984LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x453 = INT64_MIN;
	uint32_t x454 = 271U;
	int64_t x455 = INT64_MAX;
	int32_t x456 = -1;

    t78 = ((x453|(x454<=x455))*x456);

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x457 = 0LL;
	int64_t x458 = INT64_MIN;
	int64_t x459 = INT64_MAX;
	int8_t x460 = INT8_MIN;
	static volatile int64_t t79 = -1858907LL;

    t79 = ((x457|(x458<=x459))*x460);

    if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x461 = INT64_MAX;
	uint8_t x462 = UINT8_MAX;
	volatile int64_t x464 = -1LL;

    t80 = ((x461|(x462<=x463))*x464);

    if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x465 = UINT8_MAX;
	uint16_t x466 = 5U;
	int64_t x467 = -2LL;
	int16_t x468 = -1;
	int32_t t81 = 176;

    t81 = ((x465|(x466<=x467))*x468);

    if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x469 = 0;
	int8_t x470 = -1;
	int32_t x471 = INT32_MIN;
	volatile int32_t t82 = 4122287;

    t82 = ((x469|(x470<=x471))*x472);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x473 = INT16_MAX;
	int16_t x476 = INT16_MAX;
	static int32_t t83 = 637812548;

    t83 = ((x473|(x474<=x475))*x476);

    if (t83 != 1073676289) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x489 = UINT8_MAX;
	uint16_t x490 = 11132U;
	static uint32_t x491 = 0U;
	int32_t t84 = -5243;

    t84 = ((x489|(x490<=x491))*x492);

    if (t84 != -255) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x498 = 1466U;
	volatile uint16_t x499 = UINT16_MAX;
	int32_t x500 = 1;
	volatile int32_t t85 = -19;

    t85 = ((x497|(x498<=x499))*x500);

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x502 = 448U;
	volatile int8_t x503 = -1;
	int64_t x504 = -1LL;

    t86 = ((x501|(x502<=x503))*x504);

    if (t86 != 693LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x514 = -1;
	int64_t x515 = 16191919132248LL;
	static volatile int64_t x516 = -15334716310512LL;
	volatile int64_t t87 = 836036867077726LL;

    t87 = ((x513|(x514<=x515))*x516);

    if (t87 != -1004960633409403920LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x517 = 17LLU;
	int8_t x518 = -28;
	int32_t x519 = -1;
	int8_t x520 = INT8_MIN;
	uint64_t t88 = 19011703727695LLU;

    t88 = ((x517|(x518<=x519))*x520);

    if (t88 != 18446744073709549440LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x521 = INT8_MIN;
	uint32_t x522 = 277067U;
	int8_t x523 = INT8_MIN;
	volatile int32_t t89 = 2194585;

    t89 = ((x521|(x522<=x523))*x524);

    if (t89 != -8322945) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x525 = 126;
	static int64_t x527 = INT64_MIN;
	uint8_t x528 = 22U;
	volatile int32_t t90 = -1989247;

    t90 = ((x525|(x526<=x527))*x528);

    if (t90 != 2772) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x529 = -1011;
	volatile int64_t x530 = -34623793508021LL;
	int8_t x532 = INT8_MAX;
	volatile int32_t t91 = -941793474;

    t91 = ((x529|(x530<=x531))*x532);

    if (t91 != -128397) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x533 = -1;
	int32_t x535 = -1;
	volatile int32_t t92 = -613476;

    t92 = ((x533|(x534<=x535))*x536);

    if (t92 != -239) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x538 = -62;
	int16_t x539 = INT16_MAX;
	int32_t t93 = -2;

    t93 = ((x537|(x538<=x539))*x540);

    if (t93 != -14) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	uint64_t x542 = UINT64_MAX;
	int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MAX;
	uint32_t t94 = 2584U;

    t94 = ((x541|(x542<=x543))*x544);

    if (t94 != 4294967169U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x551 = INT32_MIN;
	int16_t x552 = -1;

    t95 = ((x549|(x550<=x551))*x552);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x554 = -1;
	int16_t x555 = INT16_MAX;
	static volatile int64_t x556 = INT64_MAX;
	volatile int64_t t96 = -1LL;

    t96 = ((x553|(x554<=x555))*x556);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x557 = 136;
	volatile uint64_t x558 = UINT64_MAX;
	int8_t x559 = INT8_MAX;
	int16_t x560 = INT16_MIN;
	int32_t t97 = -1882;

    t97 = ((x557|(x558<=x559))*x560);

    if (t97 != -4456448) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x561 = -1;
	uint16_t x562 = 1805U;
	static int32_t x563 = 1;
	volatile int16_t x564 = -4;
	volatile int32_t t98 = 1438;

    t98 = ((x561|(x562<=x563))*x564);

    if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x565 = -1;
	int16_t x566 = INT16_MAX;
	int16_t x567 = -1;
	int16_t x568 = INT16_MAX;
	volatile int32_t t99 = 88159328;

    t99 = ((x565|(x566<=x567))*x568);

    if (t99 != -32767) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x569 = 125;
	int16_t x570 = 190;
	static volatile int64_t x571 = -1LL;
	int16_t x572 = -1;
	static volatile int32_t t100 = 728120386;

    t100 = ((x569|(x570<=x571))*x572);

    if (t100 != -125) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x573 = -1LL;
	volatile int8_t x575 = INT8_MAX;
	static int32_t x576 = -1;
	volatile int64_t t101 = 0LL;

    t101 = ((x573|(x574<=x575))*x576);

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MIN;
	uint64_t x583 = 93LLU;
	uint64_t x584 = 172LLU;
	static uint64_t t102 = 499101LLU;

    t102 = ((x581|(x582<=x583))*x584);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x594 = 3408;
	int32_t x595 = 1;

    t103 = ((x593|(x594<=x595))*x596);

    if (t103 != -38) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x617 = 11362U;
	int16_t x618 = -7237;
	int64_t x619 = 1450116758764741930LL;
	int16_t x620 = -1;
	int32_t t104 = 46;

    t104 = ((x617|(x618<=x619))*x620);

    if (t104 != -11363) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x621 = 1511U;
	uint32_t x622 = UINT32_MAX;
	static int64_t x623 = -2146393551379LL;
	static int16_t x624 = INT16_MAX;
	int32_t t105 = 49;

    t105 = ((x621|(x622<=x623))*x624);

    if (t105 != 49510937) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x625 = -1LL;
	uint16_t x626 = 3646U;
	int64_t x627 = 27467291502581LL;
	static volatile int64_t t106 = 66521561LL;

    t106 = ((x625|(x626<=x627))*x628);

    if (t106 != 32768LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x629 = 1U;
	static volatile int16_t x630 = -1;
	volatile uint8_t x631 = 10U;
	volatile uint64_t x632 = 1572525LLU;
	volatile uint64_t t107 = 3024843LLU;

    t107 = ((x629|(x630<=x631))*x632);

    if (t107 != 1572525LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x633 = -1LL;
	uint64_t x634 = 1608LLU;
	static int64_t x635 = INT64_MAX;
	volatile int64_t t108 = -2746340884278430625LL;

    t108 = ((x633|(x634<=x635))*x636);

    if (t108 != -65535LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x637 = 2807LL;
	volatile int8_t x638 = 1;
	int16_t x639 = -1;

    t109 = ((x637|(x638<=x639))*x640);

    if (t109 != 134736LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x643 = 427311698U;
	volatile int16_t x644 = INT16_MAX;
	int32_t t110 = -204;

    t110 = ((x641|(x642<=x643))*x644);

    if (t110 != 53180841) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x645 = INT8_MIN;
	uint8_t x647 = 67U;
	static uint8_t x648 = 1U;

    t111 = ((x645|(x646<=x647))*x648);

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x651 = -1LL;
	uint32_t t112 = UINT32_MAX;

    t112 = ((x649|(x650<=x651))*x652);

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x653 = 1;
	uint64_t x654 = UINT64_MAX;
	static int8_t x655 = INT8_MAX;
	int64_t t113 = INT64_MAX;

    t113 = ((x653|(x654<=x655))*x656);

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x657 = -1102;
	int16_t x658 = INT16_MIN;
	int16_t x659 = 93;
	static int32_t x660 = -1;
	volatile int32_t t114 = -33485563;

    t114 = ((x657|(x658<=x659))*x660);

    if (t114 != 1101) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x661 = -3;
	int8_t x662 = 3;
	static uint16_t x664 = 492U;
	volatile int32_t t115 = 2335541;

    t115 = ((x661|(x662<=x663))*x664);

    if (t115 != -1476) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x665 = -1;
	int8_t x666 = 29;
	int8_t x667 = -1;
	uint16_t x668 = 2597U;
	static volatile int32_t t116 = 127637;

    t116 = ((x665|(x666<=x667))*x668);

    if (t116 != -2597) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x669 = INT8_MIN;
	static volatile int16_t x672 = INT16_MAX;
	int32_t t117 = -1;

    t117 = ((x669|(x670<=x671))*x672);

    if (t117 != -4161409) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x677 = 32690885LLU;
	int64_t x678 = INT64_MIN;
	volatile uint32_t x679 = UINT32_MAX;
	int16_t x680 = INT16_MAX;

    t118 = ((x677|(x678<=x679))*x680);

    if (t118 != 1071182228795LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x685 = 0U;
	static int8_t x686 = INT8_MAX;
	int64_t x687 = INT64_MAX;
	int16_t x688 = -607;

    t119 = ((x685|(x686<=x687))*x688);

    if (t119 != -607) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x693 = -1;
	uint64_t x694 = 43LLU;
	volatile int32_t x695 = INT32_MAX;
	volatile int64_t x696 = -1LL;
	int64_t t120 = 31542169LL;

    t120 = ((x693|(x694<=x695))*x696);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x702 = 756181195U;
	static uint64_t x703 = 26748LLU;
	uint16_t x704 = UINT16_MAX;

    t121 = ((x701|(x702<=x703))*x704);

    if (t121 != 8847225) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x705 = -1LL;
	volatile int32_t x706 = 121;
	static int16_t x707 = -1;

    t122 = ((x705|(x706<=x707))*x708);

    if (t122 != 2147483648LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x711 = 7009894889989070LLU;
	volatile int32_t t123 = -849656;

    t123 = ((x709|(x710<=x711))*x712);

    if (t123 != 1073709056) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x714 = 197;
	uint32_t x715 = 6U;
	uint64_t x716 = 340958220112305LLU;
	volatile uint64_t t124 = 504355496118597658LLU;

    t124 = ((x713|(x714<=x715))*x716);

    if (t124 != 3897952881350356559LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x717 = INT64_MIN;
	volatile int64_t x719 = INT64_MAX;
	static int64_t x720 = -1LL;

    t125 = ((x717|(x718<=x719))*x720);

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x721 = INT8_MAX;
	static int16_t x722 = -1;
	int32_t x723 = -4078200;

    t126 = ((x721|(x722<=x723))*x724);

    if (t126 != -127LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x726 = 528017966U;
	int16_t x727 = INT16_MIN;
	uint16_t x728 = 3239U;
	int32_t t127 = 1;

    t127 = ((x725|(x726<=x727))*x728);

    if (t127 != 612171) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x729 = 1917U;
	int32_t x730 = INT32_MAX;
	volatile int8_t x732 = INT8_MIN;
	volatile uint32_t t128 = 2U;

    t128 = ((x729|(x730<=x731))*x732);

    if (t128 != 4294721920U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x738 = -5;
	volatile int8_t x739 = 0;
	int64_t x740 = -22658771349LL;
	volatile int64_t t129 = -276944576852070351LL;

    t129 = ((x737|(x738<=x739))*x740);

    if (t129 != -430516655631LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x741 = INT16_MIN;
	uint8_t x742 = UINT8_MAX;
	static int16_t x743 = INT16_MAX;
	uint64_t x744 = 966464LLU;
	volatile uint64_t t130 = 27908337975364LLU;

    t130 = ((x741|(x742<=x743))*x744);

    if (t130 != 18446744042041425728LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x753 = -4203101133041LL;
	int8_t x754 = -1;
	static int16_t x755 = INT16_MAX;
	volatile int64_t t131 = -8380641781331371LL;

    t131 = ((x753|(x754<=x755))*x756);

    if (t131 != 537996945029248LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x757 = 11U;
	static volatile uint8_t x758 = 63U;
	int16_t x759 = INT16_MIN;
	static int16_t x760 = -1;
	int32_t t132 = 6961;

    t132 = ((x757|(x758<=x759))*x760);

    if (t132 != -11) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x761 = 3239361105LLU;
	int16_t x762 = INT16_MAX;
	uint8_t x763 = 107U;
	uint16_t x764 = 16U;

    t133 = ((x761|(x762<=x763))*x764);

    if (t133 != 51829777680LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x765 = 1;
	int8_t x766 = 7;
	int64_t x767 = INT64_MAX;
	volatile int32_t t134 = -1910;

    t134 = ((x765|(x766<=x767))*x768);

    if (t134 != 49) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x769 = INT16_MAX;
	int16_t x770 = -426;
	int16_t x771 = INT16_MIN;
	static uint16_t x772 = 30U;
	volatile int32_t t135 = -4357257;

    t135 = ((x769|(x770<=x771))*x772);

    if (t135 != 983010) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x775 = INT32_MAX;
	static volatile int8_t x776 = INT8_MIN;
	uint32_t t136 = 2666U;

    t136 = ((x773|(x774<=x775))*x776);

    if (t136 != 4294967168U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x777 = 111U;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = 0;
	int32_t t137 = -7;

    t137 = ((x777|(x778<=x779))*x780);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x783 = UINT16_MAX;
	static volatile uint8_t x784 = 50U;
	volatile int32_t t138 = 227718591;

    t138 = ((x781|(x782<=x783))*x784);

    if (t138 != -50) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x793 = 49800LLU;
	static int64_t x796 = -1LL;
	static uint64_t t139 = 10069987132202LLU;

    t139 = ((x793|(x794<=x795))*x796);

    if (t139 != 18446744073709501816LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x802 = 102U;
	int16_t x803 = -951;
	static int64_t x804 = -1055277LL;
	volatile int64_t t140 = -428280221LL;

    t140 = ((x801|(x802<=x803))*x804);

    if (t140 != -4931365350681LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x805 = INT16_MIN;
	uint64_t x806 = 581299LLU;
	uint32_t x807 = 42U;
	int64_t x808 = 3LL;
	volatile int64_t t141 = -226266814484179649LL;

    t141 = ((x805|(x806<=x807))*x808);

    if (t141 != -98304LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x821 = -10798LL;
	int16_t x822 = INT16_MIN;
	static uint32_t x823 = 22011280U;
	static int64_t t142 = -452185628LL;

    t142 = ((x821|(x822<=x823))*x824);

    if (t142 != -172768LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x825 = 1;
	volatile int32_t x826 = INT32_MIN;
	volatile uint64_t x827 = 934LLU;
	int8_t x828 = 1;
	int32_t t143 = -326818;

    t143 = ((x825|(x826<=x827))*x828);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x829 = -1;
	uint16_t x830 = UINT16_MAX;
	int16_t x831 = INT16_MAX;
	int16_t x832 = INT16_MIN;
	static int32_t t144 = -153;

    t144 = ((x829|(x830<=x831))*x832);

    if (t144 != 32768) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x833 = 13U;
	static int32_t x834 = INT32_MIN;
	static int64_t x835 = 7742974758123912LL;
	int16_t x836 = -4634;

    t145 = ((x833|(x834<=x835))*x836);

    if (t145 != -60242) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x837 = -159;
	uint32_t x838 = UINT32_MAX;
	int8_t x839 = 3;
	uint16_t x840 = 1913U;

    t146 = ((x837|(x838<=x839))*x840);

    if (t146 != -304167) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x841 = 3566LLU;
	uint64_t x842 = 107154LLU;
	int8_t x843 = 11;
	int64_t x844 = -2161LL;

    t147 = ((x841|(x842<=x843))*x844);

    if (t147 != 18446744073701845490LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x845 = INT16_MIN;
	static int8_t x846 = INT8_MIN;
	volatile int16_t x848 = INT16_MIN;
	int32_t t148 = 24927;

    t148 = ((x845|(x846<=x847))*x848);

    if (t148 != 1073741824) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x849 = UINT16_MAX;
	int16_t x850 = INT16_MIN;
	uint64_t x851 = 1526127375791562LLU;
	static uint8_t x852 = 1U;

    t149 = ((x849|(x850<=x851))*x852);

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x853 = -1;
	volatile int32_t x854 = -1798970;
	uint64_t x855 = 48317177LLU;
	int32_t x856 = INT32_MAX;
	int32_t t150 = -7;

    t150 = ((x853|(x854<=x855))*x856);

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x857 = INT16_MAX;
	int16_t x858 = 0;
	uint64_t x859 = UINT64_MAX;
	volatile int64_t x860 = 3LL;
	static int64_t t151 = 6493352065LL;

    t151 = ((x857|(x858<=x859))*x860);

    if (t151 != 98301LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x866 = INT16_MIN;
	static int32_t x867 = INT32_MAX;
	int16_t x868 = 0;

    t152 = ((x865|(x866<=x867))*x868);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x870 = 0U;
	uint16_t x871 = UINT16_MAX;
	int32_t x872 = -1;

    t153 = ((x869|(x870<=x871))*x872);

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x877 = UINT8_MAX;
	static int64_t x878 = 27LL;
	int8_t x880 = -1;
	static volatile int32_t t154 = 7;

    t154 = ((x877|(x878<=x879))*x880);

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x881 = 4515532878026347484LLU;
	static int16_t x883 = -2;
	int64_t x884 = 42385476309681LL;
	static volatile uint64_t t155 = 15287329LLU;

    t155 = ((x881|(x882<=x883))*x884);

    if (t155 != 2853349623767500237LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x885 = INT8_MAX;
	int8_t x886 = INT8_MIN;
	uint64_t x888 = 51210LLU;

    t156 = ((x885|(x886<=x887))*x888);

    if (t156 != 6503670LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x889 = 752U;
	uint8_t x892 = 22U;

    t157 = ((x889|(x890<=x891))*x892);

    if (t157 != 16566) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x893 = INT8_MAX;
	int16_t x894 = INT16_MAX;
	volatile int16_t x896 = INT16_MIN;
	volatile int32_t t158 = -4169546;

    t158 = ((x893|(x894<=x895))*x896);

    if (t158 != -4161536) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x897 = 3001273835208343LLU;
	volatile int8_t x898 = INT8_MAX;
	int64_t x900 = -242LL;
	volatile uint64_t t159 = 11LLU;

    t159 = ((x897|(x898<=x899))*x900);

    if (t159 != 17720435805589132610LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x901 = 53;
	int16_t x902 = 0;
	uint8_t x903 = 0U;
	uint64_t x904 = 4218744LLU;
	uint64_t t160 = 411255328155740222LLU;

    t160 = ((x901|(x902<=x903))*x904);

    if (t160 != 223593432LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x905 = 85769356LLU;
	uint64_t x906 = 0LLU;
	int32_t x907 = -3086079;
	int64_t x908 = 2570715909LL;

    t161 = ((x905|(x906<=x907))*x908);

    if (t161 != 220488650544600513LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x913 = UINT32_MAX;
	static uint32_t x914 = 133368976U;
	volatile int64_t x915 = INT64_MAX;
	uint8_t x916 = 57U;
	static volatile uint32_t t162 = 0U;

    t162 = ((x913|(x914<=x915))*x916);

    if (t162 != 4294967239U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x918 = INT16_MIN;
	volatile int32_t t163 = 959250148;

    t163 = ((x917|(x918<=x919))*x920);

    if (t163 != -3) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x928 = INT16_MIN;
	uint64_t t164 = 9747322642714LLU;

    t164 = ((x925|(x926<=x927))*x928);

    if (t164 != 18446744073420111872LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x929 = INT8_MIN;
	uint32_t x931 = 2266U;

    t165 = ((x929|(x930<=x931))*x932);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x933 = -180LL;
	int8_t x934 = -1;
	volatile int64_t x935 = -29141LL;
	static int8_t x936 = 1;
	int64_t t166 = -214517221678239LL;

    t166 = ((x933|(x934<=x935))*x936);

    if (t166 != -180LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x937 = 1539U;
	static volatile int8_t x938 = INT8_MIN;

    t167 = ((x937|(x938<=x939))*x940);

    if (t167 != 100858365) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x942 = 26;
	uint8_t x943 = 20U;
	static uint64_t t168 = 446274LLU;

    t168 = ((x941|(x942<=x943))*x944);

    if (t168 != 18446744071442785666LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x945 = INT16_MIN;
	static uint64_t x946 = UINT64_MAX;
	int16_t x948 = INT16_MIN;
	volatile int32_t t169 = 117694;

    t169 = ((x945|(x946<=x947))*x948);

    if (t169 != 1073709056) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x949 = -7;
	static uint64_t x950 = 4872LLU;
	volatile int16_t x952 = 73;

    t170 = ((x949|(x950<=x951))*x952);

    if (t170 != -511) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x953 = -1596;
	static int64_t x954 = INT64_MAX;
	int8_t x955 = -56;
	int32_t x956 = -1;

    t171 = ((x953|(x954<=x955))*x956);

    if (t171 != 1596) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x958 = INT64_MAX;
	uint8_t x959 = UINT8_MAX;
	uint16_t x960 = 782U;
	int32_t t172 = 30425901;

    t172 = ((x957|(x958<=x959))*x960);

    if (t172 != 4692) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x962 = UINT32_MAX;
	int8_t x963 = INT8_MIN;
	int32_t x964 = 7;

    t173 = ((x961|(x962<=x963))*x964);

    if (t173 != 458745) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x966 = INT16_MIN;
	int64_t t174 = -71397754364LL;

    t174 = ((x965|(x966<=x967))*x968);

    if (t174 != 4826570794844LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x970 = INT8_MIN;

    t175 = ((x969|(x970<=x971))*x972);

    if (t175 != -15237120) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x977 = UINT8_MAX;
	int8_t x978 = INT8_MIN;
	volatile int64_t x979 = INT64_MIN;
	int64_t x980 = -10LL;
	static volatile int64_t t176 = 154137380498LL;

    t176 = ((x977|(x978<=x979))*x980);

    if (t176 != -2550LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x985 = 1;
	int16_t x986 = INT16_MIN;
	int8_t x987 = -20;
	int32_t t177 = 62945941;

    t177 = ((x985|(x986<=x987))*x988);

    if (t177 != 9) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x989 = -1;
	int8_t x990 = -1;
	volatile int32_t x991 = INT32_MIN;
	uint64_t x992 = UINT64_MAX;
	uint64_t t178 = 0LLU;

    t178 = ((x989|(x990<=x991))*x992);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1001 = INT16_MAX;
	int32_t x1003 = 1560264;
	volatile int64_t x1004 = 333583499LL;
	volatile int64_t t179 = 7943LL;

    t179 = ((x1001|(x1002<=x1003))*x1004);

    if (t179 != 10930530511733LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1005 = UINT32_MAX;
	int32_t x1006 = -7017692;
	int16_t x1007 = INT16_MAX;
	volatile uint32_t t180 = 4172678U;

    t180 = ((x1005|(x1006<=x1007))*x1008);

    if (t180 != 128U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1009 = 1U;
	int8_t x1012 = -14;
	uint32_t t181 = 1964286216U;

    t181 = ((x1009|(x1010<=x1011))*x1012);

    if (t181 != 4294967282U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1013 = -21;
	uint8_t x1016 = UINT8_MAX;
	int32_t t182 = -34543;

    t182 = ((x1013|(x1014<=x1015))*x1016);

    if (t182 != -5355) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1025 = -11287;
	volatile uint8_t x1026 = 6U;
	uint8_t x1027 = 5U;
	uint32_t x1028 = 84115U;
	uint32_t t183 = 375636670U;

    t183 = ((x1025|(x1026<=x1027))*x1028);

    if (t183 != 3345561291U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x1030 = UINT8_MAX;
	static int16_t x1031 = -1;
	uint64_t x1032 = 779LLU;
	uint64_t t184 = 600LLU;

    t184 = ((x1029|(x1030<=x1031))*x1032);

    if (t184 != 18446744073709451904LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x1034 = 362056403U;
	int8_t x1035 = INT8_MIN;
	static int8_t x1036 = INT8_MIN;
	volatile int32_t t185 = -9915;

    t185 = ((x1033|(x1034<=x1035))*x1036);

    if (t185 != 16256) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1037 = INT16_MAX;
	uint32_t x1039 = 33U;
	int8_t x1040 = -56;
	int32_t t186 = -26781;

    t186 = ((x1037|(x1038<=x1039))*x1040);

    if (t186 != -1834952) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1047 = UINT16_MAX;
	uint16_t x1048 = UINT16_MAX;
	int32_t t187 = 474382;

    t187 = ((x1045|(x1046<=x1047))*x1048);

    if (t187 != -110950755) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1049 = INT16_MAX;
	static uint16_t x1051 = UINT16_MAX;
	uint32_t x1052 = 1461106400U;
	uint32_t t188 = 8912U;

    t188 = ((x1049|(x1050<=x1051))*x1052);

    if (t188 != 72960288U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1053 = 56U;
	volatile int32_t x1054 = 131656;
	int32_t x1055 = 0;
	uint32_t x1056 = 78679387U;
	uint32_t t189 = 44280U;

    t189 = ((x1053|(x1054<=x1055))*x1056);

    if (t189 != 111078376U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1057 = INT8_MAX;
	int16_t x1058 = INT16_MIN;
	uint32_t x1059 = UINT32_MAX;
	uint8_t x1060 = 8U;

    t190 = ((x1057|(x1058<=x1059))*x1060);

    if (t190 != 1016) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1061 = UINT32_MAX;
	static uint8_t x1062 = 14U;
	volatile int64_t x1063 = -183736LL;
	int8_t x1064 = INT8_MIN;
	uint32_t t191 = 29U;

    t191 = ((x1061|(x1062<=x1063))*x1064);

    if (t191 != 128U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1065 = INT32_MIN;
	volatile int64_t x1066 = INT64_MIN;
	volatile int16_t x1067 = INT16_MIN;
	uint64_t x1068 = UINT64_MAX;
	uint64_t t192 = 10745618978834LLU;

    t192 = ((x1065|(x1066<=x1067))*x1068);

    if (t192 != 2147483647LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1075 = 26030952051047537LLU;
	int16_t x1076 = -1;
	static volatile int32_t t193 = -944162747;

    t193 = ((x1073|(x1074<=x1075))*x1076);

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1081 = -1LL;
	uint64_t x1082 = 2115677938136LLU;
	static uint32_t x1083 = UINT32_MAX;
	static volatile int64_t t194 = 17411075927206LL;

    t194 = ((x1081|(x1082<=x1083))*x1084);

    if (t194 != -10LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1085 = -716982;
	uint8_t x1086 = 1U;
	int64_t x1088 = -1LL;
	int64_t t195 = -730839901LL;

    t195 = ((x1085|(x1086<=x1087))*x1088);

    if (t195 != 716982LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1089 = INT32_MIN;
	int16_t x1090 = -10805;
	int32_t x1091 = -36;
	int64_t t196 = 12056682933LL;

    t196 = ((x1089|(x1090<=x1091))*x1092);

    if (t196 != 2147483647LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1093 = 3U;
	int8_t x1094 = INT8_MIN;
	int8_t x1096 = INT8_MIN;

    t197 = ((x1093|(x1094<=x1095))*x1096);

    if (t197 != -384) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1097 = 5424;
	volatile uint64_t x1098 = UINT64_MAX;
	static int64_t x1099 = 0LL;
	uint8_t x1100 = 1U;
	int32_t t198 = 3;

    t198 = ((x1097|(x1098<=x1099))*x1100);

    if (t198 != 5424) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1101 = INT32_MIN;
	static uint8_t x1102 = UINT8_MAX;
	uint32_t x1103 = 13U;
	static uint32_t x1104 = UINT32_MAX;

    t199 = ((x1101|(x1102<=x1103))*x1104);

    if (t199 != 2147483648U) { NG(); } else { ; }
	
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

