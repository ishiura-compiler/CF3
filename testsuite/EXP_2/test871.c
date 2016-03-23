
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

uint16_t x2 = 0U;
volatile uint8_t x3 = 1U;
static uint16_t x9 = 305U;
uint16_t x20 = 0U;
int32_t x22 = INT32_MAX;
static int32_t x23 = -1902;
volatile uint32_t x24 = 1U;
volatile uint32_t t4 = 119764534U;
int32_t x31 = INT32_MAX;
int8_t x38 = -18;
volatile int32_t x39 = -126986524;
int8_t x42 = INT8_MAX;
static int16_t x46 = 1;
static int64_t x58 = INT64_MIN;
int8_t x60 = INT8_MAX;
int16_t x61 = -1557;
volatile uint64_t x63 = UINT64_MAX;
volatile int32_t t12 = 65716;
int32_t x66 = -1;
int8_t x68 = -1;
volatile int32_t t14 = 1;
int32_t t15 = INT32_MIN;
static int8_t x83 = INT8_MAX;
static int64_t x102 = INT64_MAX;
int64_t x105 = INT64_MIN;
static uint32_t t24 = 27U;
int8_t x114 = 17;
static uint64_t x115 = 226655LLU;
static int32_t t26 = -9;
int64_t x127 = -1LL;
volatile int64_t x134 = -1LL;
uint16_t x135 = 327U;
static uint64_t x136 = 14LLU;
static int64_t x152 = INT64_MIN;
int64_t x155 = INT64_MAX;
int32_t t33 = -854782;
static int64_t x157 = INT64_MAX;
static uint16_t x165 = 369U;
int32_t t37 = -9591;
int16_t x173 = -1;
volatile int64_t x179 = INT64_MIN;
int64_t x186 = 615117984465029358LL;
int64_t x191 = -1LL;
volatile uint16_t x192 = 49U;
int8_t x193 = -1;
int64_t x195 = -207LL;
int8_t x196 = INT8_MIN;
static int32_t x201 = 201129;
int64_t x202 = 1LL;
static int8_t x204 = 8;
static int32_t x205 = -1;
static int16_t x217 = 0;
volatile int32_t t49 = INT32_MIN;
int32_t x223 = -84175644;
int64_t x224 = INT64_MAX;
uint8_t x228 = UINT8_MAX;
int32_t x232 = INT32_MAX;
int64_t x235 = -11256446742LL;
volatile int32_t x236 = 66492426;
int32_t x243 = INT32_MAX;
uint64_t x259 = UINT64_MAX;
int8_t x262 = 20;
uint16_t x278 = UINT16_MAX;
static uint64_t x280 = 68645152934867LLU;
uint32_t x281 = UINT32_MAX;
volatile int32_t t64 = INT32_MIN;
int64_t x285 = INT64_MIN;
int8_t x291 = -34;
static uint64_t x296 = 38408618355LLU;
uint64_t t67 = 1418846073306186LLU;
uint16_t x299 = 5488U;
uint64_t x317 = 75624258171135762LLU;
volatile int64_t x326 = -369386130LL;
uint16_t x327 = 8U;
static uint32_t x337 = 1793U;
static int32_t x339 = INT32_MAX;
int32_t x345 = -93;
int32_t t80 = -91686501;
int32_t x354 = -17;
volatile uint32_t x355 = UINT32_MAX;
int32_t x356 = -837537;
static uint32_t x358 = UINT32_MAX;
int16_t x363 = INT16_MAX;
uint16_t x364 = UINT16_MAX;
static int32_t t83 = 1;
volatile int64_t t87 = -52159LL;
int64_t x388 = 641179640LL;
volatile int64_t x389 = INT64_MAX;
int8_t x390 = -1;
uint16_t x391 = 8U;
int32_t t92 = 341406;
int64_t t94 = 36415508418563LL;
int32_t x410 = 3;
int64_t x413 = -2LL;
int8_t x415 = INT8_MIN;
static uint8_t x416 = UINT8_MAX;
uint8_t x417 = 1U;
volatile int64_t t98 = INT64_MAX;
volatile int32_t x433 = INT32_MAX;
int64_t x434 = -1LL;
int64_t x438 = -1LL;
static int32_t x440 = -1;
static volatile uint32_t x443 = 54677U;
uint32_t x448 = 293180U;
static int16_t x465 = INT16_MAX;
uint32_t x466 = UINT32_MAX;
uint32_t x468 = 5691037U;
int16_t x470 = 5;
uint64_t x480 = 62213542785LLU;
int16_t x484 = INT16_MIN;
int16_t x486 = -1;
int16_t x488 = -1;
int64_t x491 = -1LL;
int8_t x495 = -1;
int64_t x497 = -1LL;
int32_t t117 = 1;
static uint64_t x502 = 2263469739LLU;
int8_t x508 = 43;
volatile int32_t t119 = -10597;
int64_t t121 = INT64_MIN;
volatile uint64_t t122 = 199879710347059LLU;
int8_t x531 = INT8_MAX;
static int32_t t125 = -77541038;
int32_t t126 = 249228;
int32_t x543 = INT32_MIN;
uint32_t t127 = 1050917505U;
int8_t x545 = 2;
int16_t x546 = INT16_MIN;
uint8_t x548 = 4U;
static volatile int32_t t129 = INT32_MIN;
int32_t t130 = -26276;
int32_t x557 = -1;
int8_t x560 = 3;
static int32_t t131 = -1215;
static int32_t x561 = INT32_MIN;
int64_t x563 = INT64_MIN;
static uint16_t x571 = 3477U;
int32_t x576 = 8607;
uint16_t x577 = 13993U;
int16_t x582 = INT16_MIN;
int16_t x587 = -115;
volatile int32_t t137 = 9;
volatile int32_t t138 = INT32_MIN;
volatile uint64_t x595 = 4065LLU;
volatile int8_t x596 = -2;
uint32_t x599 = 1514570U;
int16_t x600 = -299;
int8_t x601 = INT8_MIN;
int8_t x609 = -3;
static int16_t x610 = 3442;
int16_t x615 = -1201;
uint8_t x622 = 1U;
static uint8_t x624 = UINT8_MAX;
volatile int16_t x625 = INT16_MIN;
int16_t x636 = INT16_MIN;
uint8_t x640 = 17U;
static uint32_t x645 = 88344521U;
int64_t x648 = -34147738128LL;
static uint64_t x658 = UINT64_MAX;
volatile int16_t x659 = 1436;
volatile int64_t t155 = -21855373704469LL;
uint16_t x666 = 1010U;
static int32_t x673 = -998536;
uint32_t x680 = UINT32_MAX;
int32_t x695 = -1;
uint8_t x705 = UINT8_MAX;
uint32_t x709 = UINT32_MAX;
volatile int32_t x729 = -1;
uint32_t x732 = 71381361U;
static volatile int64_t x744 = 15372605166071LL;
static volatile uint32_t x748 = UINT32_MAX;
uint64_t x752 = 603264174220405376LLU;
static volatile int64_t t177 = 6270LL;
int32_t t180 = 535377;
volatile int32_t t181 = 506;
int8_t x774 = -1;
volatile int32_t t184 = 1;
volatile int32_t x792 = INT32_MIN;
static volatile uint64_t x794 = UINT64_MAX;
static int16_t x796 = INT16_MIN;
int8_t x797 = INT8_MIN;
volatile int16_t x800 = INT16_MAX;
int8_t x808 = INT8_MIN;
volatile int32_t t191 = 15826;
volatile uint64_t t192 = UINT64_MAX;
volatile uint32_t x819 = 1202323179U;
int64_t x820 = INT64_MIN;
uint32_t x821 = UINT32_MAX;
uint64_t x824 = 2015LLU;
static int16_t x825 = -1;
static int32_t x831 = -166732137;
int32_t x834 = INT32_MIN;
int64_t x843 = INT64_MAX;


void f0(void) {
    	uint64_t x1 = 55838LLU;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

    t0 = ((x1!=(x2%x3))*x4);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = INT16_MIN;
	uint16_t x11 = 9U;
	int16_t x12 = INT16_MIN;
	int32_t t1 = 160938;

    t1 = ((x9!=(x10%x11))*x12);

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MAX;
	int64_t x14 = 8423084704LL;
	int16_t x15 = INT16_MAX;
	int16_t x16 = -1;
	volatile int32_t t2 = 1;

    t2 = ((x13!=(x14%x15))*x16);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	volatile int64_t x18 = -1LL;
	uint8_t x19 = 15U;
	volatile int32_t t3 = -4549506;

    t3 = ((x17!=(x18%x19))*x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = INT32_MAX;

    t4 = ((x21!=(x22%x23))*x24);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x29 = 1U;
	int64_t x30 = -4650054767LL;
	uint64_t x32 = 16174135LLU;
	uint64_t t5 = 53LLU;

    t5 = ((x29!=(x30%x31))*x32);

    if (t5 != 16174135LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x33 = UINT16_MAX;
	int32_t x34 = -12939;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = -1;
	volatile int32_t t6 = 77610;

    t6 = ((x33!=(x34%x35))*x36);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 2846U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t7 = INT64_MAX;

    t7 = ((x37!=(x38%x39))*x40);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x41 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MIN;
	static int32_t t8 = 25;

    t8 = ((x41!=(x42%x43))*x44);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MIN;
	uint32_t x47 = 4092U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t9 = 1;

    t9 = ((x45!=(x46%x47))*x48);

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MIN;
	volatile int8_t x50 = 1;
	uint16_t x51 = UINT16_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t10 = -1323807;

    t10 = ((x49!=(x50%x51))*x52);

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x57 = UINT16_MAX;
	uint64_t x59 = 2LLU;
	int32_t t11 = 30981566;

    t11 = ((x57!=(x58%x59))*x60);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x62 = 81U;
	int16_t x64 = 1;

    t12 = ((x61!=(x62%x63))*x64);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	uint8_t x67 = UINT8_MAX;
	int32_t t13 = -61;

    t13 = ((x65!=(x66%x67))*x68);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x69 = 60U;
	static int16_t x70 = INT16_MAX;
	uint64_t x71 = 31057195491925259LLU;
	static int8_t x72 = -1;

    t14 = ((x69!=(x70%x71))*x72);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x73 = 6U;
	int64_t x74 = INT64_MIN;
	int8_t x75 = -2;
	volatile int32_t x76 = INT32_MIN;

    t15 = ((x73!=(x74%x75))*x76);

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x77 = INT16_MIN;
	volatile int16_t x78 = 4;
	volatile int64_t x79 = 1LL;
	int8_t x80 = INT8_MAX;
	static int32_t t16 = 5143189;

    t16 = ((x77!=(x78%x79))*x80);

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 687930704831041LLU;
	static int16_t x82 = INT16_MIN;
	int64_t x84 = -3975697290LL;
	static int64_t t17 = 14903734LL;

    t17 = ((x81!=(x82%x83))*x84);

    if (t17 != -3975697290LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = 69170618899577LLU;
	volatile int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	volatile int16_t x88 = INT16_MIN;
	int32_t t18 = 64;

    t18 = ((x85!=(x86%x87))*x88);

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x89 = 2231021740844897092LLU;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MIN;
	int64_t x92 = -10092906244LL;
	volatile int64_t t19 = 42306152452914LL;

    t19 = ((x89!=(x90%x91))*x92);

    if (t19 != -10092906244LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = -1;
	int16_t x94 = -51;
	int32_t x95 = -1;
	int8_t x96 = 2;
	volatile int32_t t20 = -102;

    t20 = ((x93!=(x94%x95))*x96);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MAX;
	static volatile int64_t x98 = -1LL;
	int64_t x99 = -13920943124199579LL;
	volatile uint64_t x100 = 8153LLU;
	volatile uint64_t t21 = 207593962LLU;

    t21 = ((x97!=(x98%x99))*x100);

    if (t21 != 8153LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = INT8_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	static uint64_t x104 = 3287925375939534106LLU;
	volatile uint64_t t22 = 8411340533468929LLU;

    t22 = ((x101!=(x102%x103))*x104);

    if (t22 != 3287925375939534106LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x106 = -4;
	uint16_t x107 = 1U;
	int8_t x108 = -7;
	volatile int32_t t23 = -1;

    t23 = ((x105!=(x106%x107))*x108);

    if (t23 != -7) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x109 = 15273U;
	volatile uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	uint32_t x112 = 472U;

    t24 = ((x109!=(x110%x111))*x112);

    if (t24 != 472U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = 1;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t25 = -3766;

    t25 = ((x113!=(x114%x115))*x116);

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = 441250854257032LLU;
	static int8_t x118 = INT8_MIN;
	int64_t x119 = -1073340LL;
	int8_t x120 = INT8_MIN;

    t26 = ((x117!=(x118%x119))*x120);

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x125 = 31068637188975234LL;
	int8_t x126 = -1;
	static int16_t x128 = -1;
	volatile int32_t t27 = 30;

    t27 = ((x125!=(x126%x127))*x128);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = UINT16_MAX;
	volatile int32_t x130 = INT32_MIN;
	uint64_t x131 = 2579LLU;
	static volatile int32_t x132 = -5239;
	volatile int32_t t28 = -648449;

    t28 = ((x129!=(x130%x131))*x132);

    if (t28 != -5239) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x133 = 2746471LLU;
	static uint64_t t29 = 7723052LLU;

    t29 = ((x133!=(x134%x135))*x136);

    if (t29 != 14LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = UINT64_MAX;
	static uint64_t x142 = UINT64_MAX;
	int16_t x143 = -1;
	int16_t x144 = 14943;
	volatile int32_t t30 = 183495731;

    t30 = ((x141!=(x142%x143))*x144);

    if (t30 != 14943) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = 28LLU;
	int16_t x146 = -1;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 193597573968447454LLU;
	static uint64_t t31 = 108LLU;

    t31 = ((x145!=(x146%x147))*x148);

    if (t31 != 193597573968447454LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = -1;
	uint64_t x150 = 1064LLU;
	static volatile int64_t x151 = INT64_MAX;
	int64_t t32 = INT64_MIN;

    t32 = ((x149!=(x150%x151))*x152);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = INT32_MAX;
	uint16_t x154 = 6853U;
	int8_t x156 = INT8_MIN;

    t33 = ((x153!=(x154%x155))*x156);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x158 = -6;
	int64_t x159 = -101481247765LL;
	int8_t x160 = INT8_MAX;
	volatile int32_t t34 = 9054586;

    t34 = ((x157!=(x158%x159))*x160);

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x161 = 908178LL;
	static int64_t x162 = -1LL;
	int64_t x163 = 7905LL;
	int64_t x164 = INT64_MIN;
	int64_t t35 = INT64_MIN;

    t35 = ((x161!=(x162%x163))*x164);

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x166 = -1;
	int8_t x167 = INT8_MAX;
	static volatile int8_t x168 = 0;
	volatile int32_t t36 = 5759;

    t36 = ((x165!=(x166%x167))*x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x169 = UINT32_MAX;
	int32_t x170 = -620087;
	uint32_t x171 = 46723914U;
	uint8_t x172 = 54U;

    t37 = ((x169!=(x170%x171))*x172);

    if (t37 != 54) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x174 = INT16_MIN;
	int32_t x175 = -1;
	static int32_t x176 = -1;
	static int32_t t38 = -11373;

    t38 = ((x173!=(x174%x175))*x176);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = 51578054702897LL;
	int16_t x178 = INT16_MIN;
	int8_t x180 = 13;
	volatile int32_t t39 = -3430;

    t39 = ((x177!=(x178%x179))*x180);

    if (t39 != 13) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x181 = 6078U;
	uint8_t x182 = 13U;
	int64_t x183 = 5659LL;
	int64_t x184 = INT64_MAX;
	volatile int64_t t40 = INT64_MAX;

    t40 = ((x181!=(x182%x183))*x184);

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x185 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	static int32_t t41 = -35;

    t41 = ((x185!=(x186%x187))*x188);

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x189 = INT64_MIN;
	int32_t x190 = -1;
	volatile int32_t t42 = 57;

    t42 = ((x189!=(x190%x191))*x192);

    if (t42 != 49) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x194 = 1061070LL;
	int32_t t43 = 5614;

    t43 = ((x193!=(x194%x195))*x196);

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x197 = 3472LL;
	int64_t x198 = INT64_MIN;
	static int64_t x199 = 209LL;
	int8_t x200 = 37;
	static volatile int32_t t44 = -2761;

    t44 = ((x197!=(x198%x199))*x200);

    if (t44 != 37) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x203 = -57974LL;
	static volatile int32_t t45 = -3;

    t45 = ((x201!=(x202%x203))*x204);

    if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x206 = INT32_MIN;
	int8_t x207 = 1;
	volatile int32_t x208 = 115;
	volatile int32_t t46 = -3;

    t46 = ((x205!=(x206%x207))*x208);

    if (t46 != 115) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x209 = INT8_MAX;
	static volatile int8_t x210 = -1;
	int64_t x211 = 171LL;
	int64_t x212 = -1LL;
	volatile int64_t t47 = -2565LL;

    t47 = ((x209!=(x210%x211))*x212);

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t48 = -503433405;

    t48 = ((x213!=(x214%x215))*x216);

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x218 = INT16_MIN;
	uint16_t x219 = 47U;
	int32_t x220 = INT32_MIN;

    t49 = ((x217!=(x218%x219))*x220);

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = -4;
	uint32_t x222 = 16198001U;
	static volatile int64_t t50 = INT64_MAX;

    t50 = ((x221!=(x222%x223))*x224);

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x225 = -41971442340581LL;
	int8_t x226 = -1;
	int64_t x227 = -215473678675060882LL;
	volatile int32_t t51 = 1;

    t51 = ((x225!=(x226%x227))*x228);

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = 194LL;
	static int8_t x230 = -1;
	uint8_t x231 = 33U;
	int32_t t52 = INT32_MAX;

    t52 = ((x229!=(x230%x231))*x232);

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x233 = 156U;
	static uint64_t x234 = 25567LLU;
	int32_t t53 = 0;

    t53 = ((x233!=(x234%x235))*x236);

    if (t53 != 66492426) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MAX;
	int64_t t54 = INT64_MAX;

    t54 = ((x237!=(x238%x239))*x240);

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x241 = -1LL;
	volatile int64_t x242 = -1LL;
	int64_t x244 = -1LL;
	int64_t t55 = -1973979783936782500LL;

    t55 = ((x241!=(x242%x243))*x244);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x245 = INT8_MIN;
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	uint64_t x248 = 20776351295803LLU;
	uint64_t t56 = 908938LLU;

    t56 = ((x245!=(x246%x247))*x248);

    if (t56 != 20776351295803LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x249 = UINT32_MAX;
	int16_t x250 = 58;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;
	volatile int32_t t57 = -9;

    t57 = ((x249!=(x250%x251))*x252);

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int32_t x255 = -11857;
	volatile int16_t x256 = -1;
	static int32_t t58 = 237;

    t58 = ((x253!=(x254%x255))*x256);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x257 = -1LL;
	int32_t x258 = -1;
	static int32_t x260 = -1;
	int32_t t59 = 30115930;

    t59 = ((x257!=(x258%x259))*x260);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = 257U;
	int32_t t60 = 25462619;

    t60 = ((x261!=(x262%x263))*x264);

    if (t60 != 257) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = INT32_MIN;
	uint32_t x270 = 30789833U;
	volatile int16_t x271 = -1;
	volatile int16_t x272 = INT16_MIN;
	int32_t t61 = 9462;

    t61 = ((x269!=(x270%x271))*x272);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = 5046947;
	static uint16_t x274 = UINT16_MAX;
	uint8_t x275 = UINT8_MAX;
	static int64_t x276 = 107LL;
	volatile int64_t t62 = 11128278LL;

    t62 = ((x273!=(x274%x275))*x276);

    if (t62 != 107LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x277 = 23U;
	volatile uint32_t x279 = 62895U;
	uint64_t t63 = 1834978752934LLU;

    t63 = ((x277!=(x278%x279))*x280);

    if (t63 != 68645152934867LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x282 = 42902178U;
	int8_t x283 = -1;
	int32_t x284 = INT32_MIN;

    t64 = ((x281!=(x282%x283))*x284);

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x286 = 10;
	uint16_t x287 = 141U;
	int8_t x288 = -1;
	int32_t t65 = 2047;

    t65 = ((x285!=(x286%x287))*x288);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x289 = 114529LL;
	int64_t x290 = -3148107565LL;
	int32_t x292 = 9;
	int32_t t66 = -1;

    t66 = ((x289!=(x290%x291))*x292);

    if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x293 = INT8_MIN;
	int64_t x294 = 240550595435LL;
	int8_t x295 = INT8_MIN;

    t67 = ((x293!=(x294%x295))*x296);

    if (t67 != 38408618355LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = -60;
	int64_t x300 = INT64_MIN;
	volatile int64_t t68 = INT64_MIN;

    t68 = ((x297!=(x298%x299))*x300);

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x301 = UINT64_MAX;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t69 = INT32_MIN;

    t69 = ((x301!=(x302%x303))*x304);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = INT64_MIN;
	int64_t x308 = -1LL;
	volatile int64_t t70 = -162266LL;

    t70 = ((x305!=(x306%x307))*x308);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = 15;
	static uint16_t x310 = 704U;
	int8_t x311 = -1;
	volatile int64_t x312 = INT64_MIN;
	int64_t t71 = INT64_MIN;

    t71 = ((x309!=(x310%x311))*x312);

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = INT8_MIN;
	static uint8_t x314 = UINT8_MAX;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t72 = -133810038;

    t72 = ((x313!=(x314%x315))*x316);

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x318 = 298309582LLU;
	int16_t x319 = INT16_MAX;
	static uint8_t x320 = UINT8_MAX;
	int32_t t73 = -419505771;

    t73 = ((x317!=(x318%x319))*x320);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x321 = 242894LLU;
	static int64_t x322 = INT64_MAX;
	volatile int32_t x323 = -96;
	int8_t x324 = INT8_MIN;
	volatile int32_t t74 = -6;

    t74 = ((x321!=(x322%x323))*x324);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x325 = 562919462U;
	uint8_t x328 = 0U;
	volatile int32_t t75 = -2311;

    t75 = ((x325!=(x326%x327))*x328);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x333 = INT8_MAX;
	volatile int8_t x334 = INT8_MAX;
	int32_t x335 = 1729;
	static volatile uint8_t x336 = 1U;
	volatile int32_t t76 = 4077115;

    t76 = ((x333!=(x334%x335))*x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x338 = INT8_MAX;
	int64_t x340 = -1703482520LL;
	int64_t t77 = 28737861201741LL;

    t77 = ((x337!=(x338%x339))*x340);

    if (t77 != -1703482520LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = 0U;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

    t78 = ((x341!=(x342%x343))*x344);

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x346 = 0LL;
	int64_t x347 = -1006LL;
	static int8_t x348 = INT8_MIN;
	int32_t t79 = 64871;

    t79 = ((x345!=(x346%x347))*x348);

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x349 = 3;
	int64_t x350 = INT64_MIN;
	static volatile int32_t x351 = -90361;
	uint16_t x352 = 20U;

    t80 = ((x349!=(x350%x351))*x352);

    if (t80 != 20) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x353 = 7698637LL;
	int32_t t81 = 64437273;

    t81 = ((x353!=(x354%x355))*x356);

    if (t81 != -837537) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x357 = 4;
	int8_t x359 = INT8_MAX;
	volatile uint32_t x360 = 403U;
	uint32_t t82 = 34U;

    t82 = ((x357!=(x358%x359))*x360);

    if (t82 != 403U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = 1239LL;
	int16_t x362 = -1;

    t83 = ((x361!=(x362%x363))*x364);

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x365 = 6940342291LLU;
	volatile uint64_t x366 = UINT64_MAX;
	static int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MAX;
	int64_t t84 = INT64_MAX;

    t84 = ((x365!=(x366%x367))*x368);

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	volatile uint32_t x372 = 5U;
	uint32_t t85 = 1079947251U;

    t85 = ((x369!=(x370%x371))*x372);

    if (t85 != 5U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x373 = -1;
	uint16_t x374 = 5U;
	int64_t x375 = INT64_MIN;
	volatile uint64_t x376 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = ((x373!=(x374%x375))*x376);

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = INT8_MIN;
	volatile int32_t x378 = INT32_MIN;
	static int32_t x379 = -317393;
	int64_t x380 = -1LL;

    t87 = ((x377!=(x378%x379))*x380);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x381 = -1;
	static int16_t x382 = INT16_MIN;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = -1;
	int32_t t88 = -1;

    t88 = ((x381!=(x382%x383))*x384);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x385 = INT16_MIN;
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = -1LL;
	int64_t t89 = -7070180LL;

    t89 = ((x385!=(x386%x387))*x388);

    if (t89 != 641179640LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x392 = -239353;
	int32_t t90 = 1;

    t90 = ((x389!=(x390%x391))*x392);

    if (t90 != -239353) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x393 = -1;
	static int64_t x394 = INT64_MIN;
	int64_t x395 = -84243110259221LL;
	int64_t x396 = -1LL;
	static volatile int64_t t91 = 1LL;

    t91 = ((x393!=(x394%x395))*x396);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x397 = UINT32_MAX;
	volatile uint8_t x398 = 79U;
	int32_t x399 = -419;
	static uint16_t x400 = 3U;

    t92 = ((x397!=(x398%x399))*x400);

    if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x401 = UINT8_MAX;
	static volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 35U;
	volatile uint8_t x404 = 0U;
	volatile int32_t t93 = -4558;

    t93 = ((x401!=(x402%x403))*x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x405 = 27U;
	volatile int8_t x406 = 27;
	int64_t x407 = 26461799538023LL;
	volatile int64_t x408 = INT64_MIN;

    t94 = ((x405!=(x406%x407))*x408);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	uint8_t x412 = 62U;
	volatile int32_t t95 = 33699829;

    t95 = ((x409!=(x410%x411))*x412);

    if (t95 != 62) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x414 = INT16_MAX;
	int32_t t96 = -13355;

    t96 = ((x413!=(x414%x415))*x416);

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x418 = 362U;
	volatile int32_t x419 = 85;
	volatile int32_t x420 = INT32_MAX;
	volatile int32_t t97 = INT32_MAX;

    t97 = ((x417!=(x418%x419))*x420);

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x421 = 3733U;
	uint8_t x422 = 1U;
	static uint16_t x423 = 23455U;
	int64_t x424 = INT64_MAX;

    t98 = ((x421!=(x422%x423))*x424);

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x425 = INT32_MAX;
	int8_t x426 = 1;
	int8_t x427 = -1;
	volatile uint64_t x428 = 279404225359440LLU;
	volatile uint64_t t99 = 5LLU;

    t99 = ((x425!=(x426%x427))*x428);

    if (t99 != 279404225359440LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x429 = 12U;
	static volatile int32_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	volatile uint64_t x432 = 8768176618571288932LLU;
	volatile uint64_t t100 = 4073572LLU;

    t100 = ((x429!=(x430%x431))*x432);

    if (t100 != 8768176618571288932LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x435 = -116;
	static uint8_t x436 = 19U;
	int32_t t101 = 0;

    t101 = ((x433!=(x434%x435))*x436);

    if (t101 != 19) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x437 = 1280294068LLU;
	volatile int8_t x439 = INT8_MAX;
	static volatile int32_t t102 = 12050;

    t102 = ((x437!=(x438%x439))*x440);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x441 = 13100LL;
	static int64_t x442 = -129405LL;
	uint16_t x444 = UINT16_MAX;
	int32_t t103 = -27514133;

    t103 = ((x441!=(x442%x443))*x444);

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x445 = INT32_MAX;
	static uint16_t x446 = 100U;
	uint64_t x447 = UINT64_MAX;
	volatile uint32_t t104 = 406U;

    t104 = ((x445!=(x446%x447))*x448);

    if (t104 != 293180U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x449 = 3U;
	int8_t x450 = INT8_MAX;
	static volatile int64_t x451 = -1LL;
	int64_t x452 = -2899326LL;
	static int64_t t105 = -228232062931474LL;

    t105 = ((x449!=(x450%x451))*x452);

    if (t105 != -2899326LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x453 = 798950U;
	uint64_t x454 = 4109193LLU;
	int8_t x455 = -1;
	static uint8_t x456 = 0U;
	int32_t t106 = 69738115;

    t106 = ((x453!=(x454%x455))*x456);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x457 = -20840516500LL;
	static int32_t x458 = INT32_MIN;
	int8_t x459 = -1;
	static int64_t x460 = -1LL;
	static volatile int64_t t107 = -62284323LL;

    t107 = ((x457!=(x458%x459))*x460);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x461 = INT8_MAX;
	uint64_t x462 = UINT64_MAX;
	volatile uint32_t x463 = 343342U;
	int64_t x464 = 933981334459907LL;
	int64_t t108 = 154376730761369LL;

    t108 = ((x461!=(x462%x463))*x464);

    if (t108 != 933981334459907LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x467 = INT64_MIN;
	volatile uint32_t t109 = 16592505U;

    t109 = ((x465!=(x466%x467))*x468);

    if (t109 != 5691037U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x469 = INT64_MAX;
	uint16_t x471 = UINT16_MAX;
	static volatile int16_t x472 = INT16_MIN;
	volatile int32_t t110 = 212754;

    t110 = ((x469!=(x470%x471))*x472);

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x473 = 435058LLU;
	static int64_t x474 = 846667690LL;
	volatile uint64_t x475 = UINT64_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t111 = 149732;

    t111 = ((x473!=(x474%x475))*x476);

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x477 = 0U;
	int8_t x478 = INT8_MIN;
	int64_t x479 = 1768974LL;
	uint64_t t112 = 136228440915LLU;

    t112 = ((x477!=(x478%x479))*x480);

    if (t112 != 62213542785LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x481 = INT32_MIN;
	int8_t x482 = INT8_MIN;
	int32_t x483 = INT32_MAX;
	volatile int32_t t113 = 103;

    t113 = ((x481!=(x482%x483))*x484);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x485 = INT8_MAX;
	volatile int32_t x487 = INT32_MIN;
	volatile int32_t t114 = -2;

    t114 = ((x485!=(x486%x487))*x488);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x489 = INT8_MIN;
	static volatile uint8_t x490 = UINT8_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t115 = UINT64_MAX;

    t115 = ((x489!=(x490%x491))*x492);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x493 = -1;
	static int16_t x494 = -1;
	static volatile uint8_t x496 = 9U;
	static volatile int32_t t116 = -64449714;

    t116 = ((x493!=(x494%x495))*x496);

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x498 = INT8_MAX;
	int32_t x499 = INT32_MAX;
	int16_t x500 = INT16_MIN;

    t117 = ((x497!=(x498%x499))*x500);

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	int32_t x503 = INT32_MIN;
	uint64_t x504 = 1690475713LLU;
	static uint64_t t118 = 6278241833532239843LLU;

    t118 = ((x501!=(x502%x503))*x504);

    if (t118 != 1690475713LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x505 = INT64_MAX;
	volatile int8_t x506 = INT8_MIN;
	int16_t x507 = INT16_MAX;

    t119 = ((x505!=(x506%x507))*x508);

    if (t119 != 43) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = INT32_MAX;
	int64_t x511 = INT64_MAX;
	int64_t x512 = -1LL;
	int64_t t120 = 1007632361197001516LL;

    t120 = ((x509!=(x510%x511))*x512);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x513 = INT8_MAX;
	volatile int32_t x514 = INT32_MIN;
	int64_t x515 = 16039912009LL;
	static int64_t x516 = INT64_MIN;

    t121 = ((x513!=(x514%x515))*x516);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint8_t x522 = UINT8_MAX;
	volatile int64_t x523 = -1LL;
	uint64_t x524 = 6676270LLU;

    t122 = ((x521!=(x522%x523))*x524);

    if (t122 != 6676270LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	volatile uint16_t x527 = UINT16_MAX;
	int64_t x528 = -1LL;
	int64_t t123 = -122521958309068185LL;

    t123 = ((x525!=(x526%x527))*x528);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x529 = 1;
	int16_t x530 = INT16_MAX;
	volatile int32_t x532 = INT32_MIN;
	int32_t t124 = 81;

    t124 = ((x529!=(x530%x531))*x532);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x533 = UINT8_MAX;
	int64_t x534 = INT64_MIN;
	int16_t x535 = -1042;
	int16_t x536 = INT16_MIN;

    t125 = ((x533!=(x534%x535))*x536);

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x537 = 67601961;
	static volatile uint8_t x538 = 21U;
	static int16_t x539 = INT16_MIN;
	static int8_t x540 = -1;

    t126 = ((x537!=(x538%x539))*x540);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x541 = INT32_MAX;
	int32_t x542 = INT32_MAX;
	static uint32_t x544 = UINT32_MAX;

    t127 = ((x541!=(x542%x543))*x544);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x547 = UINT64_MAX;
	static volatile int32_t t128 = 65315818;

    t128 = ((x545!=(x546%x547))*x548);

    if (t128 != 4) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x549 = 369864943;
	int64_t x550 = INT64_MIN;
	static int16_t x551 = INT16_MIN;
	static int32_t x552 = INT32_MIN;

    t129 = ((x549!=(x550%x551))*x552);

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x553 = INT16_MIN;
	static volatile int64_t x554 = 24902931444741304LL;
	volatile int16_t x555 = INT16_MIN;
	int8_t x556 = INT8_MAX;

    t130 = ((x553!=(x554%x555))*x556);

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x558 = 21U;
	volatile uint64_t x559 = UINT64_MAX;

    t131 = ((x557!=(x558%x559))*x560);

    if (t131 != 3) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x562 = 1909709U;
	static int16_t x564 = -9;
	int32_t t132 = -95;

    t132 = ((x561!=(x562%x563))*x564);

    if (t132 != -9) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x569 = -1;
	int32_t x570 = INT32_MAX;
	uint64_t x572 = UINT64_MAX;
	uint64_t t133 = UINT64_MAX;

    t133 = ((x569!=(x570%x571))*x572);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x573 = 1218U;
	uint64_t x574 = UINT64_MAX;
	int16_t x575 = 1;
	volatile int32_t t134 = -12661830;

    t134 = ((x573!=(x574%x575))*x576);

    if (t134 != 8607) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x578 = 5U;
	int64_t x579 = 1144376193025LL;
	static volatile uint16_t x580 = 1785U;
	static volatile int32_t t135 = 116562261;

    t135 = ((x577!=(x578%x579))*x580);

    if (t135 != 1785) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x581 = 0U;
	int16_t x583 = -8002;
	uint64_t x584 = 182281819LLU;
	static uint64_t t136 = 1499402224092374LLU;

    t136 = ((x581!=(x582%x583))*x584);

    if (t136 != 182281819LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x585 = 14U;
	int16_t x586 = INT16_MIN;
	int32_t x588 = 383;

    t137 = ((x585!=(x586%x587))*x588);

    if (t137 != 383) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x589 = INT8_MIN;
	int64_t x590 = INT64_MIN;
	int16_t x591 = -253;
	int32_t x592 = INT32_MIN;

    t138 = ((x589!=(x590%x591))*x592);

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x593 = UINT16_MAX;
	int32_t x594 = 1;
	int32_t t139 = -676;

    t139 = ((x593!=(x594%x595))*x596);

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x597 = -1;
	static int16_t x598 = 12614;
	int32_t t140 = -443;

    t140 = ((x597!=(x598%x599))*x600);

    if (t140 != -299) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x602 = 4U;
	int64_t x603 = 17LL;
	volatile uint8_t x604 = 15U;
	volatile int32_t t141 = -1;

    t141 = ((x601!=(x602%x603))*x604);

    if (t141 != 15) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x605 = INT64_MIN;
	int64_t x606 = INT64_MIN;
	int8_t x607 = -1;
	int8_t x608 = INT8_MIN;
	static volatile int32_t t142 = 4095619;

    t142 = ((x605!=(x606%x607))*x608);

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x611 = INT16_MIN;
	int16_t x612 = INT16_MIN;
	volatile int32_t t143 = -273;

    t143 = ((x609!=(x610%x611))*x612);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x613 = -1;
	uint16_t x614 = UINT16_MAX;
	int8_t x616 = INT8_MIN;
	int32_t t144 = -75406795;

    t144 = ((x613!=(x614%x615))*x616);

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x617 = INT64_MIN;
	volatile uint32_t x618 = 543U;
	volatile uint32_t x619 = 1398889648U;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = ((x617!=(x618%x619))*x620);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x621 = 23698;
	volatile int16_t x623 = 8423;
	int32_t t146 = -853;

    t146 = ((x621!=(x622%x623))*x624);

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x626 = UINT64_MAX;
	volatile int32_t x627 = INT32_MAX;
	int64_t x628 = -61LL;
	int64_t t147 = 758000LL;

    t147 = ((x625!=(x626%x627))*x628);

    if (t147 != -61LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x629 = 703U;
	int16_t x630 = 1;
	int32_t x631 = INT32_MIN;
	int16_t x632 = INT16_MIN;
	int32_t t148 = 0;

    t148 = ((x629!=(x630%x631))*x632);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	uint32_t x634 = 4U;
	int64_t x635 = INT64_MIN;
	int32_t t149 = -227719219;

    t149 = ((x633!=(x634%x635))*x636);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x637 = 8155U;
	volatile int32_t x638 = INT32_MAX;
	int64_t x639 = INT64_MAX;
	volatile int32_t t150 = -2;

    t150 = ((x637!=(x638%x639))*x640);

    if (t150 != 17) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x641 = INT32_MIN;
	static uint32_t x642 = UINT32_MAX;
	int32_t x643 = INT32_MIN;
	int64_t x644 = INT64_MIN;
	volatile int64_t t151 = INT64_MIN;

    t151 = ((x641!=(x642%x643))*x644);

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MAX;
	volatile int64_t t152 = -62LL;

    t152 = ((x645!=(x646%x647))*x648);

    if (t152 != -34147738128LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x650 = UINT64_MAX;
	int64_t x651 = INT64_MIN;
	static uint64_t x652 = UINT64_MAX;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = ((x649!=(x650%x651))*x652);

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x653 = INT8_MIN;
	uint32_t x654 = 25U;
	int64_t x655 = INT64_MAX;
	int8_t x656 = INT8_MIN;
	int32_t t154 = -15246;

    t154 = ((x653!=(x654%x655))*x656);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x657 = -988195LL;
	int64_t x660 = 2570673142LL;

    t155 = ((x657!=(x658%x659))*x660);

    if (t155 != 2570673142LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x662 = 3LL;
	int16_t x663 = -45;
	int64_t x664 = 1LL;
	volatile int64_t t156 = -446LL;

    t156 = ((x661!=(x662%x663))*x664);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x665 = INT16_MIN;
	static uint16_t x667 = 12U;
	static int8_t x668 = -42;
	volatile int32_t t157 = -59;

    t157 = ((x665!=(x666%x667))*x668);

    if (t157 != -42) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x674 = 7U;
	volatile uint8_t x675 = 6U;
	int8_t x676 = INT8_MAX;
	volatile int32_t t158 = -24;

    t158 = ((x673!=(x674%x675))*x676);

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x677 = INT8_MAX;
	int8_t x678 = INT8_MIN;
	volatile int32_t x679 = -1;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = ((x677!=(x678%x679))*x680);

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = INT64_MIN;
	uint8_t x686 = 4U;
	uint32_t x687 = 72194U;
	int32_t x688 = 19680264;
	int32_t t160 = 0;

    t160 = ((x685!=(x686%x687))*x688);

    if (t160 != 19680264) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x689 = 880;
	volatile int8_t x690 = 12;
	int64_t x691 = -3890275543844943979LL;
	static int16_t x692 = INT16_MIN;
	static int32_t t161 = 97961;

    t161 = ((x689!=(x690%x691))*x692);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x693 = 2U;
	static uint8_t x694 = 28U;
	uint32_t x696 = UINT32_MAX;
	uint32_t t162 = UINT32_MAX;

    t162 = ((x693!=(x694%x695))*x696);

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x697 = INT16_MIN;
	uint16_t x698 = 473U;
	volatile int32_t x699 = -45;
	uint64_t x700 = 684LLU;
	static uint64_t t163 = 980160058725LLU;

    t163 = ((x697!=(x698%x699))*x700);

    if (t163 != 684LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x701 = INT8_MIN;
	static int16_t x702 = -1;
	int16_t x703 = -107;
	uint8_t x704 = UINT8_MAX;
	int32_t t164 = -86464301;

    t164 = ((x701!=(x702%x703))*x704);

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x706 = 2U;
	int64_t x707 = -1LL;
	static int16_t x708 = -1;
	static volatile int32_t t165 = -379916;

    t165 = ((x705!=(x706%x707))*x708);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x710 = INT64_MIN;
	uint8_t x711 = 1U;
	volatile int16_t x712 = -1532;
	volatile int32_t t166 = 11325;

    t166 = ((x709!=(x710%x711))*x712);

    if (t166 != -1532) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x713 = -1LL;
	int16_t x714 = INT16_MIN;
	volatile int64_t x715 = -8477123712085060LL;
	int64_t x716 = INT64_MAX;
	int64_t t167 = INT64_MAX;

    t167 = ((x713!=(x714%x715))*x716);

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x717 = INT64_MIN;
	static int8_t x718 = -22;
	int64_t x719 = INT64_MAX;
	static volatile int8_t x720 = -1;
	volatile int32_t t168 = -391758920;

    t168 = ((x717!=(x718%x719))*x720);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x721 = 7755;
	static uint64_t x722 = 1LLU;
	volatile int8_t x723 = -1;
	volatile int64_t x724 = INT64_MAX;
	static volatile int64_t t169 = INT64_MAX;

    t169 = ((x721!=(x722%x723))*x724);

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x725 = INT32_MIN;
	volatile int8_t x726 = INT8_MIN;
	static uint16_t x727 = UINT16_MAX;
	uint32_t x728 = 152677108U;
	uint32_t t170 = 1U;

    t170 = ((x725!=(x726%x727))*x728);

    if (t170 != 152677108U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x730 = INT8_MIN;
	int16_t x731 = -76;
	uint32_t t171 = 165321U;

    t171 = ((x729!=(x730%x731))*x732);

    if (t171 != 71381361U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x733 = 640;
	uint32_t x734 = 264425165U;
	int16_t x735 = INT16_MAX;
	uint32_t x736 = UINT32_MAX;
	uint32_t t172 = UINT32_MAX;

    t172 = ((x733!=(x734%x735))*x736);

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x737 = INT16_MAX;
	uint64_t x738 = UINT64_MAX;
	volatile uint32_t x739 = 533849U;
	int8_t x740 = INT8_MIN;
	volatile int32_t t173 = -80888;

    t173 = ((x737!=(x738%x739))*x740);

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x741 = 3985802LLU;
	static uint8_t x742 = 1U;
	volatile int32_t x743 = INT32_MIN;
	static volatile int64_t t174 = 223LL;

    t174 = ((x741!=(x742%x743))*x744);

    if (t174 != 15372605166071LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x745 = -287604863247925LL;
	static int8_t x746 = INT8_MAX;
	uint64_t x747 = 58155707LLU;
	volatile uint32_t t175 = UINT32_MAX;

    t175 = ((x745!=(x746%x747))*x748);

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x749 = INT8_MAX;
	uint16_t x750 = 13U;
	volatile uint32_t x751 = 54554761U;
	uint64_t t176 = 361LLU;

    t176 = ((x749!=(x750%x751))*x752);

    if (t176 != 603264174220405376LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x753 = INT64_MAX;
	uint64_t x754 = UINT64_MAX;
	uint32_t x755 = 1958575U;
	volatile int64_t x756 = -1LL;

    t177 = ((x753!=(x754%x755))*x756);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x757 = 3U;
	uint16_t x758 = 9U;
	uint64_t x759 = 2LLU;
	int8_t x760 = INT8_MAX;
	int32_t t178 = -272;

    t178 = ((x757!=(x758%x759))*x760);

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x761 = -44632193;
	int32_t x762 = 319573;
	int64_t x763 = -178LL;
	int8_t x764 = 1;
	volatile int32_t t179 = -158;

    t179 = ((x761!=(x762%x763))*x764);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x765 = -1;
	int32_t x766 = INT32_MIN;
	int8_t x767 = INT8_MIN;
	int8_t x768 = INT8_MIN;

    t180 = ((x765!=(x766%x767))*x768);

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x769 = INT64_MAX;
	static int32_t x770 = 34;
	volatile int8_t x771 = INT8_MIN;
	int16_t x772 = 1;

    t181 = ((x769!=(x770%x771))*x772);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x773 = UINT8_MAX;
	int8_t x775 = INT8_MIN;
	int32_t x776 = INT32_MAX;
	int32_t t182 = INT32_MAX;

    t182 = ((x773!=(x774%x775))*x776);

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x777 = 0U;
	int16_t x778 = INT16_MIN;
	uint64_t x779 = 1LLU;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t183 = 88;

    t183 = ((x777!=(x778%x779))*x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x781 = INT16_MIN;
	int8_t x782 = -1;
	volatile int8_t x783 = INT8_MAX;
	int16_t x784 = INT16_MIN;

    t184 = ((x781!=(x782%x783))*x784);

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x785 = 285374980247LL;
	static int64_t x786 = INT64_MIN;
	static int32_t x787 = INT32_MAX;
	volatile uint64_t x788 = UINT64_MAX;
	uint64_t t185 = UINT64_MAX;

    t185 = ((x785!=(x786%x787))*x788);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = 121U;
	uint64_t x791 = 95673141851064470LLU;
	static int32_t t186 = INT32_MIN;

    t186 = ((x789!=(x790%x791))*x792);

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x793 = 30707590408LL;
	static int64_t x795 = INT64_MIN;
	volatile int32_t t187 = -11;

    t187 = ((x793!=(x794%x795))*x796);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x798 = -1LL;
	int64_t x799 = INT64_MIN;
	static volatile int32_t t188 = -425112670;

    t188 = ((x797!=(x798%x799))*x800);

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x801 = -1;
	int64_t x802 = INT64_MAX;
	int8_t x803 = INT8_MIN;
	int16_t x804 = INT16_MIN;
	static int32_t t189 = -959081738;

    t189 = ((x801!=(x802%x803))*x804);

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x805 = 1469U;
	uint8_t x806 = UINT8_MAX;
	uint32_t x807 = 1466949U;
	static int32_t t190 = 1015;

    t190 = ((x805!=(x806%x807))*x808);

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x809 = -11;
	uint64_t x810 = 4752956641475LLU;
	int8_t x811 = INT8_MIN;
	static int8_t x812 = -1;

    t191 = ((x809!=(x810%x811))*x812);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x813 = INT8_MAX;
	static uint8_t x814 = 1U;
	volatile int8_t x815 = INT8_MAX;
	volatile uint64_t x816 = UINT64_MAX;

    t192 = ((x813!=(x814%x815))*x816);

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x817 = INT8_MIN;
	int16_t x818 = INT16_MIN;
	volatile int64_t t193 = INT64_MIN;

    t193 = ((x817!=(x818%x819))*x820);

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x822 = 4;
	uint64_t x823 = 349LLU;
	volatile uint64_t t194 = 129657561999LLU;

    t194 = ((x821!=(x822%x823))*x824);

    if (t194 != 2015LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x826 = 481166497;
	int32_t x827 = 653675635;
	volatile int8_t x828 = INT8_MAX;
	int32_t t195 = -28;

    t195 = ((x825!=(x826%x827))*x828);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x829 = 8U;
	uint64_t x830 = UINT64_MAX;
	int16_t x832 = -1;
	int32_t t196 = -49;

    t196 = ((x829!=(x830%x831))*x832);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x833 = INT32_MAX;
	uint32_t x835 = 9U;
	uint64_t x836 = UINT64_MAX;
	volatile uint64_t t197 = UINT64_MAX;

    t197 = ((x833!=(x834%x835))*x836);

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x837 = INT32_MAX;
	int64_t x838 = -1LL;
	int32_t x839 = 504032466;
	int16_t x840 = INT16_MIN;
	int32_t t198 = -14536;

    t198 = ((x837!=(x838%x839))*x840);

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x841 = INT8_MIN;
	uint16_t x842 = 92U;
	uint32_t x844 = 485594465U;
	uint32_t t199 = 462U;

    t199 = ((x841!=(x842%x843))*x844);

    if (t199 != 485594465U) { NG(); } else { ; }
	
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

