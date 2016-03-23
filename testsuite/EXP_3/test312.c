
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

int32_t x2 = INT32_MIN;
static int8_t x13 = INT8_MIN;
static uint32_t x15 = 4020416U;
uint16_t x17 = UINT16_MAX;
volatile int16_t x18 = INT16_MAX;
uint32_t x22 = UINT32_MAX;
uint64_t x23 = UINT64_MAX;
int32_t x24 = -121763;
static volatile uint64_t t5 = 7104666793LLU;
volatile uint32_t x33 = UINT32_MAX;
int16_t x34 = -1;
int8_t x35 = -1;
int32_t t6 = -105;
uint64_t x40 = 1219LLU;
uint64_t x46 = 10125216733418610LLU;
uint64_t x60 = 129963690LLU;
int8_t x64 = INT8_MIN;
uint32_t x65 = UINT32_MAX;
int64_t x68 = -1LL;
int8_t x69 = INT8_MIN;
static volatile uint32_t x70 = UINT32_MAX;
int16_t x71 = -89;
static int64_t x72 = -1LL;
volatile int32_t t16 = -3016;
uint16_t x89 = UINT16_MAX;
uint32_t x97 = UINT32_MAX;
volatile uint32_t x99 = 0U;
uint32_t t20 = 73811U;
uint8_t x101 = UINT8_MAX;
volatile int16_t x104 = INT16_MIN;
volatile int32_t t21 = -31156;
int64_t x105 = -1LL;
int32_t t22 = 2943;
uint16_t x110 = UINT16_MAX;
volatile int16_t x112 = -16;
uint32_t x117 = UINT32_MAX;
uint32_t t26 = 45182U;
volatile int32_t x130 = INT32_MIN;
int8_t x132 = -4;
int64_t t29 = 1425639737651898LL;
int16_t x139 = 384;
static volatile uint8_t x142 = 10U;
static volatile int16_t x144 = INT16_MIN;
int32_t x155 = INT32_MAX;
volatile int8_t x157 = -1;
int8_t x165 = -14;
volatile uint64_t t37 = 84365846559LLU;
static uint64_t x170 = 1709594778600LLU;
static int64_t x172 = -4LL;
int64_t t42 = -465084LL;
static int64_t x196 = 96491LL;
volatile int64_t t43 = 127691086849683LL;
uint16_t x201 = UINT16_MAX;
volatile int64_t t45 = -1916939155883854338LL;
uint64_t t46 = 50069517486799LLU;
static int16_t x225 = 1139;
static volatile int16_t x230 = -1;
int16_t x232 = -1;
int16_t x234 = -556;
int8_t x245 = INT8_MIN;
int8_t x246 = 1;
volatile uint64_t t53 = 116667571454LLU;
int8_t x249 = -1;
uint32_t x252 = 1333U;
uint64_t x255 = 55178352103794928LLU;
static int8_t x256 = -2;
uint8_t x263 = 1U;
int16_t x265 = -1;
int64_t x268 = 15199160LL;
uint64_t x273 = UINT64_MAX;
int32_t x274 = INT32_MIN;
uint16_t x279 = UINT16_MAX;
int32_t t60 = 3608;
static uint8_t x285 = UINT8_MAX;
int8_t x287 = INT8_MIN;
uint32_t x290 = UINT32_MAX;
volatile int32_t x293 = 249490;
static uint64_t x294 = 12LLU;
uint64_t x295 = UINT64_MAX;
volatile int8_t x304 = -5;
int32_t x306 = INT32_MAX;
uint8_t x308 = 3U;
uint8_t x319 = 12U;
int8_t x320 = -1;
volatile int64_t x325 = INT64_MIN;
static int16_t x326 = -1;
int32_t x327 = -170;
int8_t x335 = INT8_MAX;
int64_t x336 = INT64_MAX;
volatile int64_t t69 = -23LL;
int32_t x338 = 0;
int16_t x351 = INT16_MAX;
int8_t x352 = INT8_MAX;
uint32_t x356 = 53612U;
volatile int32_t t73 = -13804;
uint32_t x362 = UINT32_MAX;
static volatile uint64_t x363 = UINT64_MAX;
static volatile uint64_t t74 = 46LLU;
volatile int64_t x380 = -1LL;
int32_t x387 = 0;
volatile uint64_t x388 = 6847LLU;
uint64_t t78 = 34721545LLU;
int32_t x395 = -1;
int32_t t79 = 4;
int8_t x399 = 3;
int32_t t80 = 2845367;
int64_t x401 = INT64_MIN;
int32_t x403 = 1;
uint8_t x412 = 112U;
uint16_t x413 = UINT16_MAX;
int8_t x416 = 7;
int32_t t83 = -4082684;
uint64_t t84 = 619691357014975LLU;
uint16_t x429 = 24513U;
int8_t x430 = INT8_MIN;
int16_t x433 = -1;
volatile int64_t x436 = INT64_MIN;
volatile uint64_t x438 = UINT64_MAX;
uint8_t x440 = 58U;
static int16_t x445 = -1;
int64_t x459 = 21745871884305LL;
int8_t x461 = 0;
int32_t x464 = INT32_MIN;
static uint8_t x466 = 38U;
int32_t x479 = -1;
static int16_t x484 = -1;
volatile uint64_t t100 = 228262777918738337LLU;
int16_t x506 = -3;
uint8_t x522 = UINT8_MAX;
int16_t x532 = INT16_MAX;
uint32_t x535 = 3775689U;
uint64_t x537 = 14815LLU;
uint64_t x538 = 47666LLU;
int64_t x544 = -1LL;
static uint16_t x551 = 5U;
int32_t x556 = INT32_MIN;
int64_t t113 = -3992211271272410LL;
volatile int8_t x566 = -1;
static volatile uint16_t x570 = 26U;
uint32_t x581 = 41U;
static int8_t x584 = -1;
int64_t x589 = 265739867LL;
uint8_t x590 = 1U;
uint16_t x591 = 26U;
static int8_t x592 = INT8_MIN;
static int32_t t118 = -734105;
volatile uint64_t x594 = UINT64_MAX;
static int8_t x596 = INT8_MIN;
uint16_t x599 = 688U;
static volatile uint32_t t120 = 0U;
int32_t t122 = -12862426;
int32_t x609 = INT32_MIN;
static int32_t x611 = INT32_MAX;
int16_t x613 = -1;
static int32_t t124 = -4721;
static int8_t x618 = 1;
static volatile int64_t x645 = INT64_MAX;
int32_t x648 = INT32_MIN;
int8_t x651 = INT8_MAX;
volatile int32_t t133 = -19485645;
static uint32_t x669 = UINT32_MAX;
uint8_t x670 = UINT8_MAX;
static uint16_t x672 = 427U;
uint64_t t135 = 22485LLU;
volatile uint64_t x678 = 131378138LLU;
int32_t x681 = 46852022;
uint32_t x684 = 427898386U;
int32_t x690 = 27574673;
uint64_t t140 = 1391509347772234LLU;
int64_t x697 = -4271672465194311LL;
uint32_t t142 = 40238U;
int64_t x708 = -1LL;
uint32_t x717 = UINT32_MAX;
uint8_t x718 = 24U;
volatile uint8_t x721 = 5U;
int32_t x726 = INT32_MIN;
static int32_t x728 = INT32_MIN;
int64_t x733 = 5729788LL;
static uint8_t x736 = 1U;
int32_t t150 = -99065785;
int32_t t151 = 59827;
uint32_t x750 = 24634U;
volatile int16_t x757 = -39;
static volatile uint32_t t156 = 1647731412U;
volatile uint8_t x769 = 51U;
int16_t x781 = 0;
int64_t t160 = -6310459LL;
volatile uint16_t x793 = 64U;
int16_t x798 = INT16_MIN;
volatile int8_t x802 = INT8_MIN;
int16_t x809 = -1;
static int16_t x810 = INT16_MIN;
volatile int32_t t166 = 120411805;
static int32_t x818 = INT32_MIN;
int64_t x825 = INT64_MAX;
volatile uint32_t x834 = UINT32_MAX;
static volatile int64_t t170 = 440250305328156LL;
uint8_t x840 = 27U;
uint32_t t172 = 66769U;
static uint32_t x856 = 1239U;
int32_t x868 = INT32_MIN;
volatile int32_t t177 = 1;
int64_t x891 = INT64_MIN;
static volatile int8_t x894 = INT8_MIN;
static volatile int8_t x898 = -1;
int32_t x900 = -1;
uint16_t x903 = 58U;
static int32_t t182 = -3;
static int64_t x914 = 6948004684678LL;
uint8_t x923 = 14U;
uint16_t x928 = 2U;
uint32_t x933 = 10134U;
volatile uint32_t t190 = 98U;
volatile int8_t x938 = -1;
int8_t x939 = INT8_MAX;
int32_t x942 = INT32_MAX;
static uint8_t x943 = 0U;
int32_t t192 = 5528;
int16_t x956 = INT16_MAX;
static int8_t x968 = INT8_MAX;
int16_t x969 = 25;
uint8_t x970 = UINT8_MAX;
volatile uint8_t x971 = 0U;
int32_t t198 = -931;
static uint8_t x976 = 61U;
uint64_t t199 = 42595LLU;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int32_t x3 = -195;
	int8_t x4 = INT8_MAX;
	static int32_t t0 = 547673762;

    t0 = ((x1>x2)/(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	volatile uint64_t x6 = 4277301054555298004LLU;
	volatile int16_t x7 = INT16_MAX;
	int16_t x8 = 12;
	volatile int32_t t1 = 541695;

    t1 = ((x5>x6)/(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int16_t x11 = INT16_MAX;
	int16_t x12 = 558;
	volatile int32_t t2 = -20800;

    t2 = ((x9>x10)/(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MAX;
	static int32_t x16 = 1;
	volatile uint32_t t3 = 50438U;

    t3 = ((x13>x14)/(x15-x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x19 = 2;
	static int16_t x20 = 60;
	int32_t t4 = -435096513;

    t4 = ((x17>x18)/(x19-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;

    t5 = ((x21>x22)/(x23-x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x36 = UINT8_MAX;

    t6 = ((x33>x34)/(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -373;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = -1LL;
	volatile uint64_t t7 = 9LLU;

    t7 = ((x37>x38)/(x39-x40));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -1;
	volatile int16_t x42 = 1;
	int64_t x43 = -1LL;
	volatile int32_t x44 = INT32_MIN;
	volatile int64_t t8 = 723351LL;

    t8 = ((x41>x42)/(x43-x44));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = -225;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t9 = 257424LLU;

    t9 = ((x45>x46)/(x47-x48));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x49 = -23;
	static volatile uint16_t x50 = 603U;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t10 = -90924;

    t10 = ((x49>x50)/(x51-x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = -1;
	volatile uint64_t x58 = 0LLU;
	volatile int64_t x59 = INT64_MAX;
	volatile uint64_t t11 = 1761451592039372LLU;

    t11 = ((x57>x58)/(x59-x60));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = 9;
	int64_t x62 = INT64_MIN;
	static int64_t x63 = INT64_MIN;
	static int64_t t12 = 1058LL;

    t12 = ((x61>x62)/(x63-x64));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x66 = 366508U;
	uint32_t x67 = 12U;
	static int64_t t13 = -2339054574055115LL;

    t13 = ((x65>x66)/(x67-x68));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t t14 = 30142244LL;

    t14 = ((x69>x70)/(x71-x72));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = UINT64_MAX;
	static volatile int64_t x74 = -1LL;
	uint32_t x75 = 2506161U;
	uint64_t x76 = 90379528170319LLU;
	static volatile uint64_t t15 = 330LLU;

    t15 = ((x73>x74)/(x75-x76));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x77 = 56;
	int8_t x78 = -1;
	static uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MIN;

    t16 = ((x77>x78)/(x79-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x85 = -2;
	static uint8_t x86 = UINT8_MAX;
	static int16_t x87 = INT16_MAX;
	int32_t x88 = -255;
	int32_t t17 = -408010;

    t17 = ((x85>x86)/(x87-x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x90 = 2761U;
	uint8_t x91 = 45U;
	uint16_t x92 = 14U;
	static int32_t t18 = 4;

    t18 = ((x89>x90)/(x91-x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = 8688363764849LLU;
	int16_t x94 = 45;
	int16_t x95 = INT16_MAX;
	uint8_t x96 = 59U;
	volatile int32_t t19 = -13166103;

    t19 = ((x93>x94)/(x95-x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint64_t x98 = UINT64_MAX;
	int16_t x100 = INT16_MIN;

    t20 = ((x97>x98)/(x99-x100));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x102 = INT16_MIN;
	static volatile uint8_t x103 = 63U;

    t21 = ((x101>x102)/(x103-x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x106 = INT64_MIN;
	static uint8_t x107 = 118U;
	volatile uint16_t x108 = 6091U;

    t22 = ((x105>x106)/(x107-x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x109 = 779LLU;
	int64_t x111 = INT64_MIN;
	volatile int64_t t23 = 264657225642634LL;

    t23 = ((x109>x110)/(x111-x112));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x113 = -6408912LL;
	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = 33812249745LL;
	volatile int16_t x116 = INT16_MIN;
	int64_t t24 = 377149LL;

    t24 = ((x113>x114)/(x115-x116));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x118 = 0U;
	int8_t x119 = INT8_MAX;
	uint32_t x120 = 53829U;
	volatile uint32_t t25 = 3792717U;

    t25 = ((x117>x118)/(x119-x120));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = INT32_MAX;
	volatile int16_t x122 = -1;
	static uint8_t x123 = 127U;
	uint32_t x124 = UINT32_MAX;

    t26 = ((x121>x122)/(x123-x124));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x125 = UINT64_MAX;
	uint32_t x126 = 22U;
	static volatile int64_t x127 = -1LL;
	uint16_t x128 = 162U;
	volatile int64_t t27 = 7161908LL;

    t27 = ((x125>x126)/(x127-x128));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x131 = 1843;
	static int32_t t28 = -3746545;

    t28 = ((x129>x130)/(x131-x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 1U;
	static volatile int16_t x134 = INT16_MAX;
	int16_t x135 = -1;
	volatile int64_t x136 = INT64_MIN;

    t29 = ((x133>x134)/(x135-x136));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = 3494;
	volatile int32_t x138 = -1;
	static int64_t x140 = -1LL;
	static volatile int64_t t30 = 51290871455LL;

    t30 = ((x137>x138)/(x139-x140));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = INT32_MIN;
	uint16_t x143 = 56U;
	volatile int32_t t31 = 188;

    t31 = ((x141>x142)/(x143-x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x145 = INT16_MIN;
	uint8_t x146 = 30U;
	int8_t x147 = -1;
	volatile uint32_t x148 = 20U;
	uint32_t t32 = 6247U;

    t32 = ((x145>x146)/(x147-x148));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = -1;
	volatile int16_t x150 = 1;
	uint8_t x151 = 3U;
	static volatile int8_t x152 = 1;
	int32_t t33 = -12;

    t33 = ((x149>x150)/(x151-x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x153 = 14U;
	static int16_t x154 = -7994;
	uint8_t x156 = 43U;
	int32_t t34 = 29745627;

    t34 = ((x153>x154)/(x155-x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x158 = UINT64_MAX;
	volatile uint64_t x159 = 605591LLU;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t35 = 1926076768286819556LLU;

    t35 = ((x157>x158)/(x159-x160));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x161 = -29357036923LL;
	static uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 1U;
	volatile int64_t x164 = INT64_MAX;
	volatile int64_t t36 = -3LL;

    t36 = ((x161>x162)/(x163-x164));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x166 = 1U;
	int32_t x167 = -1;
	uint64_t x168 = 39384544507337896LLU;

    t37 = ((x165>x166)/(x167-x168));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x169 = INT32_MIN;
	uint8_t x171 = 0U;
	static volatile int64_t t38 = 21354LL;

    t38 = ((x169>x170)/(x171-x172));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x173 = 2592U;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x175 = -6904;
	uint32_t x176 = 23U;
	uint32_t t39 = 989U;

    t39 = ((x173>x174)/(x175-x176));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = -1;
	int16_t x182 = INT16_MIN;
	volatile int16_t x183 = INT16_MIN;
	int64_t x184 = -1LL;
	int64_t t40 = 2960760483772312209LL;

    t40 = ((x181>x182)/(x183-x184));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = 2U;
	volatile int64_t x186 = INT64_MIN;
	int8_t x187 = -3;
	int64_t x188 = INT64_MIN;
	volatile int64_t t41 = -60550801775304231LL;

    t41 = ((x185>x186)/(x187-x188));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;

    t42 = ((x189>x190)/(x191-x192));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -240968813LL;

    t43 = ((x193>x194)/(x195-x196));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x197 = UINT16_MAX;
	static volatile uint64_t x198 = 1021126818371391LLU;
	int16_t x199 = INT16_MIN;
	volatile uint16_t x200 = 37U;
	volatile int32_t t44 = 0;

    t44 = ((x197>x198)/(x199-x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x202 = INT64_MIN;
	int32_t x203 = -34;
	volatile int64_t x204 = 342421114263LL;

    t45 = ((x201>x202)/(x203-x204));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x209 = 279271417409176LLU;
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MAX;
	uint64_t x212 = 20175828LLU;

    t46 = ((x209>x210)/(x211-x212));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = INT32_MIN;
	static uint32_t x214 = 2919U;
	uint32_t x215 = 1618U;
	int16_t x216 = INT16_MIN;
	volatile uint32_t t47 = 300441236U;

    t47 = ((x213>x214)/(x215-x216));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x217 = INT16_MAX;
	int16_t x218 = -1;
	uint16_t x219 = 12U;
	static uint64_t x220 = UINT64_MAX;
	static uint64_t t48 = 515197LLU;

    t48 = ((x217>x218)/(x219-x220));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x226 = 17994576805931LLU;
	static int16_t x227 = INT16_MIN;
	static int64_t x228 = -1LL;
	int64_t t49 = -2LL;

    t49 = ((x225>x226)/(x227-x228));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x229 = UINT32_MAX;
	uint16_t x231 = 12393U;
	int32_t t50 = 7989580;

    t50 = ((x229>x230)/(x231-x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = 22170962;
	int8_t x235 = INT8_MIN;
	static volatile int8_t x236 = INT8_MAX;
	int32_t t51 = 0;

    t51 = ((x233>x234)/(x235-x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = 13340;
	int64_t x238 = INT64_MAX;
	volatile int16_t x239 = -2274;
	volatile int16_t x240 = INT16_MAX;
	int32_t t52 = 4028876;

    t52 = ((x237>x238)/(x239-x240));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x247 = 2U;
	uint64_t x248 = UINT64_MAX;

    t53 = ((x245>x246)/(x247-x248));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x250 = 21;
	volatile int32_t x251 = -3477242;
	static uint32_t t54 = 2545U;

    t54 = ((x249>x250)/(x251-x252));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x253 = 1522U;
	volatile uint64_t x254 = 7289516230825LLU;
	static uint64_t t55 = 86LLU;

    t55 = ((x253>x254)/(x255-x256));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x257 = UINT8_MAX;
	static volatile int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int16_t x260 = 111;
	int32_t t56 = 64369654;

    t56 = ((x257>x258)/(x259-x260));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x261 = 42;
	int64_t x262 = -1LL;
	int32_t x264 = -1;
	int32_t t57 = 1;

    t57 = ((x261>x262)/(x263-x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x266 = UINT8_MAX;
	int64_t x267 = -1LL;
	int64_t t58 = 3575144347673955LL;

    t58 = ((x265>x266)/(x267-x268));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x275 = 1766U;
	volatile int16_t x276 = -1;
	static int32_t t59 = 32;

    t59 = ((x273>x274)/(x275-x276));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x277 = 1141LLU;
	int16_t x278 = -1;
	uint8_t x280 = UINT8_MAX;

    t60 = ((x277>x278)/(x279-x280));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x286 = INT64_MIN;
	uint32_t x288 = 1195452U;
	uint32_t t61 = 6U;

    t61 = ((x285>x286)/(x287-x288));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint8_t x289 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = 0U;
	volatile int32_t t62 = -1;

    t62 = ((x289>x290)/(x291-x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x296 = INT64_MIN;
	volatile uint64_t t63 = 6585770827386380LLU;

    t63 = ((x293>x294)/(x295-x296));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x301 = 593U;
	volatile int8_t x302 = 0;
	int32_t x303 = INT32_MIN;
	int32_t t64 = 1;

    t64 = ((x301>x302)/(x303-x304));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x305 = UINT8_MAX;
	static int64_t x307 = -380LL;
	static volatile int64_t t65 = -3120349357730794388LL;

    t65 = ((x305>x306)/(x307-x308));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x309 = UINT64_MAX;
	static int8_t x310 = 4;
	uint8_t x311 = 56U;
	volatile uint64_t x312 = UINT64_MAX;
	volatile uint64_t t66 = 480300LLU;

    t66 = ((x309>x310)/(x311-x312));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x317 = INT32_MAX;
	uint8_t x318 = UINT8_MAX;
	int32_t t67 = -3053;

    t67 = ((x317>x318)/(x319-x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x328 = 4041U;
	static volatile int32_t t68 = -810124;

    t68 = ((x325>x326)/(x327-x328));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x333 = 2;
	int64_t x334 = 851193544666LL;

    t69 = ((x333>x334)/(x335-x336));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x337 = 5033560757LLU;
	static volatile int16_t x339 = INT16_MIN;
	volatile uint32_t x340 = 888858127U;
	uint32_t t70 = 22U;

    t70 = ((x337>x338)/(x339-x340));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x349 = 220;
	static int8_t x350 = INT8_MIN;
	int32_t t71 = 602;

    t71 = ((x349>x350)/(x351-x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x353 = 643;
	int16_t x354 = INT16_MAX;
	static volatile uint64_t x355 = 680263989LLU;
	uint64_t t72 = 2LLU;

    t72 = ((x353>x354)/(x355-x356));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x357 = UINT8_MAX;
	volatile uint64_t x358 = 764549LLU;
	volatile int8_t x359 = -2;
	int16_t x360 = INT16_MIN;

    t73 = ((x357>x358)/(x359-x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x361 = 6137934808699LL;
	uint8_t x364 = 16U;

    t74 = ((x361>x362)/(x363-x364));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile uint16_t x366 = 11408U;
	volatile uint64_t x367 = UINT64_MAX;
	int64_t x368 = -13850LL;
	uint64_t t75 = 225452499330582LLU;

    t75 = ((x365>x366)/(x367-x368));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x377 = INT64_MIN;
	int64_t x378 = -1674807657LL;
	int8_t x379 = INT8_MIN;
	volatile int64_t t76 = 26009296216078595LL;

    t76 = ((x377>x378)/(x379-x380));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x385 = 12923;
	int16_t x386 = INT16_MIN;
	volatile uint64_t t77 = 55118728077LLU;

    t77 = ((x385>x386)/(x387-x388));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x389 = INT8_MAX;
	int64_t x390 = -1LL;
	uint64_t x391 = 51911485338164622LLU;
	int8_t x392 = INT8_MAX;

    t78 = ((x389>x390)/(x391-x392));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MIN;
	int16_t x396 = INT16_MAX;

    t79 = ((x393>x394)/(x395-x396));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	uint16_t x400 = UINT16_MAX;

    t80 = ((x397>x398)/(x399-x400));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x402 = 5U;
	static uint8_t x404 = 45U;
	int32_t t81 = 95216;

    t81 = ((x401>x402)/(x403-x404));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x409 = 32712U;
	static uint64_t x410 = UINT64_MAX;
	int64_t x411 = -2596704136251LL;
	volatile int64_t t82 = 5478353943970LL;

    t82 = ((x409>x410)/(x411-x412));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x414 = INT8_MAX;
	int16_t x415 = 20;

    t83 = ((x413>x414)/(x415-x416));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x417 = -1;
	int64_t x418 = INT64_MIN;
	static uint64_t x419 = UINT64_MAX;
	volatile uint64_t x420 = 2803LLU;

    t84 = ((x417>x418)/(x419-x420));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x421 = INT8_MIN;
	static int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	volatile uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t85 = 534349587673284943LLU;

    t85 = ((x421>x422)/(x423-x424));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x425 = INT64_MIN;
	volatile int32_t x426 = INT32_MIN;
	uint64_t x427 = 3446662LLU;
	int64_t x428 = INT64_MIN;
	static volatile uint64_t t86 = 6323673910286021LLU;

    t86 = ((x425>x426)/(x427-x428));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x431 = INT8_MAX;
	int16_t x432 = 763;
	static volatile int32_t t87 = -826893210;

    t87 = ((x429>x430)/(x431-x432));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x434 = 2;
	int16_t x435 = INT16_MIN;
	volatile int64_t t88 = -126LL;

    t88 = ((x433>x434)/(x435-x436));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x437 = INT16_MAX;
	static int16_t x439 = 12461;
	int32_t t89 = -12650;

    t89 = ((x437>x438)/(x439-x440));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x441 = -1;
	int8_t x442 = INT8_MIN;
	int64_t x443 = 3372333122659LL;
	volatile int8_t x444 = 1;
	int64_t t90 = 62051LL;

    t90 = ((x441>x442)/(x443-x444));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x446 = UINT32_MAX;
	int8_t x447 = -1;
	int32_t x448 = 3307824;
	static int32_t t91 = 535;

    t91 = ((x445>x446)/(x447-x448));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x449 = INT16_MIN;
	volatile uint32_t x450 = 42459330U;
	int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MIN;
	volatile int64_t t92 = -27075713LL;

    t92 = ((x449>x450)/(x451-x452));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x453 = -1;
	int64_t x454 = INT64_MIN;
	volatile uint16_t x455 = 0U;
	int16_t x456 = INT16_MIN;
	volatile int32_t t93 = 689;

    t93 = ((x453>x454)/(x455-x456));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x457 = UINT32_MAX;
	static uint32_t x458 = 100545592U;
	static int64_t x460 = -1LL;
	int64_t t94 = -781369792LL;

    t94 = ((x457>x458)/(x459-x460));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x462 = INT8_MAX;
	int8_t x463 = -1;
	volatile int32_t t95 = -185117122;

    t95 = ((x461>x462)/(x463-x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x465 = INT16_MAX;
	int16_t x467 = INT16_MAX;
	uint32_t x468 = 12100U;
	static volatile uint32_t t96 = 3163U;

    t96 = ((x465>x466)/(x467-x468));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x477 = 588363667770LLU;
	uint16_t x478 = UINT16_MAX;
	int32_t x480 = -1652714;
	volatile int32_t t97 = -3860257;

    t97 = ((x477>x478)/(x479-x480));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x481 = INT16_MAX;
	int16_t x482 = INT16_MAX;
	int32_t x483 = 1;
	int32_t t98 = -16157479;

    t98 = ((x481>x482)/(x483-x484));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x485 = INT64_MIN;
	uint32_t x486 = UINT32_MAX;
	uint8_t x487 = 4U;
	int16_t x488 = INT16_MIN;
	volatile int32_t t99 = -1067553817;

    t99 = ((x485>x486)/(x487-x488));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x489 = 14U;
	int64_t x490 = -1LL;
	int16_t x491 = INT16_MIN;
	uint64_t x492 = UINT64_MAX;

    t100 = ((x489>x490)/(x491-x492));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x493 = 0;
	int16_t x494 = 69;
	uint32_t x495 = UINT32_MAX;
	int32_t x496 = INT32_MIN;
	uint32_t t101 = 21U;

    t101 = ((x493>x494)/(x495-x496));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x497 = 848;
	static uint8_t x498 = 1U;
	uint64_t x499 = UINT64_MAX;
	static int16_t x500 = INT16_MAX;
	uint64_t t102 = 163465088784084343LLU;

    t102 = ((x497>x498)/(x499-x500));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x501 = 0;
	int64_t x502 = -1LL;
	volatile int32_t x503 = INT32_MAX;
	int64_t x504 = -8275519189633023LL;
	volatile int64_t t103 = 513963LL;

    t103 = ((x501>x502)/(x503-x504));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x505 = INT16_MAX;
	int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t104 = 22;

    t104 = ((x505>x506)/(x507-x508));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x509 = -1;
	int8_t x510 = INT8_MIN;
	static int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t105 = 1560634;

    t105 = ((x509>x510)/(x511-x512));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x521 = -227;
	static uint32_t x523 = UINT32_MAX;
	int16_t x524 = INT16_MIN;
	static uint32_t t106 = 3U;

    t106 = ((x521>x522)/(x523-x524));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MIN;
	static uint32_t x531 = 500901U;
	uint32_t t107 = 118046U;

    t107 = ((x529>x530)/(x531-x532));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x533 = 1;
	uint8_t x534 = 5U;
	static int64_t x536 = INT64_MAX;
	int64_t t108 = -442LL;

    t108 = ((x533>x534)/(x535-x536));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x539 = -207;
	static uint64_t x540 = 7LLU;
	uint64_t t109 = 68451189022602038LLU;

    t109 = ((x537>x538)/(x539-x540));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x541 = -1;
	static int8_t x542 = INT8_MIN;
	static int8_t x543 = -2;
	volatile int64_t t110 = -3478001LL;

    t110 = ((x541>x542)/(x543-x544));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x545 = -1580131988738038LL;
	volatile int64_t x546 = -1LL;
	static int32_t x547 = 28;
	static int64_t x548 = 95484226131088LL;
	volatile int64_t t111 = 1727058208362887997LL;

    t111 = ((x545>x546)/(x547-x548));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x549 = -1;
	uint16_t x550 = UINT16_MAX;
	int8_t x552 = -1;
	volatile int32_t t112 = -170594;

    t112 = ((x549>x550)/(x551-x552));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x553 = INT16_MIN;
	int64_t x554 = INT64_MIN;
	volatile int64_t x555 = 4063154113634568458LL;

    t113 = ((x553>x554)/(x555-x556));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x565 = UINT64_MAX;
	volatile int8_t x567 = -9;
	volatile uint8_t x568 = 0U;
	volatile int32_t t114 = 129000197;

    t114 = ((x565>x566)/(x567-x568));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x569 = 1588603942414232LLU;
	int16_t x571 = INT16_MIN;
	volatile int16_t x572 = -737;
	int32_t t115 = -4;

    t115 = ((x569>x570)/(x571-x572));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x577 = INT64_MAX;
	volatile int8_t x578 = INT8_MIN;
	static int8_t x579 = INT8_MIN;
	uint32_t x580 = 170U;
	uint32_t t116 = 5530U;

    t116 = ((x577>x578)/(x579-x580));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x582 = 1U;
	static volatile int8_t x583 = 2;
	volatile int32_t t117 = -596038;

    t117 = ((x581>x582)/(x583-x584));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    

    t118 = ((x589>x590)/(x591-x592));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x593 = 23;
	static int16_t x595 = -485;
	int32_t t119 = 502210999;

    t119 = ((x593>x594)/(x595-x596));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x597 = 1U;
	static int16_t x598 = INT16_MAX;
	static uint32_t x600 = 16160U;

    t120 = ((x597>x598)/(x599-x600));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x601 = 124U;
	uint32_t x602 = 21U;
	static int32_t x603 = INT32_MIN;
	int32_t x604 = -1;
	int32_t t121 = -327;

    t121 = ((x601>x602)/(x603-x604));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x605 = -480408330691473763LL;
	static int32_t x606 = INT32_MAX;
	uint8_t x607 = 5U;
	static uint16_t x608 = 197U;

    t122 = ((x605>x606)/(x607-x608));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x610 = INT16_MAX;
	uint32_t x612 = UINT32_MAX;
	volatile uint32_t t123 = 6020874U;

    t123 = ((x609>x610)/(x611-x612));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x614 = UINT64_MAX;
	uint8_t x615 = 10U;
	volatile int8_t x616 = 0;

    t124 = ((x613>x614)/(x615-x616));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x617 = 14LLU;
	uint64_t x619 = 17LLU;
	int64_t x620 = INT64_MAX;
	volatile uint64_t t125 = 515134LLU;

    t125 = ((x617>x618)/(x619-x620));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x621 = INT16_MIN;
	static int64_t x622 = INT64_MIN;
	uint64_t x623 = 4814044LLU;
	static uint16_t x624 = UINT16_MAX;
	uint64_t t126 = 3LLU;

    t126 = ((x621>x622)/(x623-x624));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x629 = INT8_MAX;
	volatile int64_t x630 = INT64_MAX;
	uint16_t x631 = 7176U;
	uint32_t x632 = 733467U;
	uint32_t t127 = 131366U;

    t127 = ((x629>x630)/(x631-x632));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x633 = -12703;
	int32_t x634 = -1;
	uint16_t x635 = UINT16_MAX;
	int64_t x636 = INT64_MAX;
	volatile int64_t t128 = 4859187236182LL;

    t128 = ((x633>x634)/(x635-x636));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint32_t x638 = 448509716U;
	int32_t x639 = -962256074;
	uint16_t x640 = 70U;
	volatile int32_t t129 = -1033679;

    t129 = ((x637>x638)/(x639-x640));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x641 = 973U;
	int16_t x642 = -48;
	volatile int64_t x643 = -2645061031125LL;
	volatile int32_t x644 = INT32_MIN;
	int64_t t130 = 996765152LL;

    t130 = ((x641>x642)/(x643-x644));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x646 = INT8_MIN;
	volatile int8_t x647 = -1;
	int32_t t131 = 102866;

    t131 = ((x645>x646)/(x647-x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x649 = 14U;
	static uint32_t x650 = UINT32_MAX;
	static int32_t x652 = -1;
	int32_t t132 = -214;

    t132 = ((x649>x650)/(x651-x652));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x661 = 11264646;
	int64_t x662 = INT64_MIN;
	int32_t x663 = 16;
	static int16_t x664 = INT16_MAX;

    t133 = ((x661>x662)/(x663-x664));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x665 = -1;
	static uint32_t x666 = 7U;
	static int32_t x667 = -1;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t134 = -15805;

    t134 = ((x665>x666)/(x667-x668));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x671 = 5LLU;

    t135 = ((x669>x670)/(x671-x672));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x673 = 7U;
	static uint32_t x674 = 280U;
	uint16_t x675 = 0U;
	int16_t x676 = INT16_MIN;
	volatile int32_t t136 = 4784;

    t136 = ((x673>x674)/(x675-x676));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x677 = UINT32_MAX;
	uint16_t x679 = 47U;
	uint64_t x680 = 449639218LLU;
	static uint64_t t137 = 271LLU;

    t137 = ((x677>x678)/(x679-x680));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x682 = UINT8_MAX;
	static int16_t x683 = -1;
	volatile uint32_t t138 = 119741989U;

    t138 = ((x681>x682)/(x683-x684));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x685 = 14LLU;
	static uint64_t x686 = 104LLU;
	int16_t x687 = -777;
	volatile int8_t x688 = 0;
	int32_t t139 = -1844;

    t139 = ((x685>x686)/(x687-x688));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x689 = 1342802417LLU;
	static uint64_t x691 = 16700LLU;
	int8_t x692 = -2;

    t140 = ((x689>x690)/(x691-x692));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	static int16_t x694 = -1;
	static volatile uint64_t x695 = 884855238384431937LLU;
	uint32_t x696 = 5533U;
	static volatile uint64_t t141 = 502456851344232595LLU;

    t141 = ((x693>x694)/(x695-x696));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x698 = 26;
	static uint32_t x699 = 2313956U;
	int8_t x700 = 1;

    t142 = ((x697>x698)/(x699-x700));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x701 = 2562131022206061994LLU;
	int8_t x702 = -49;
	int64_t x703 = -1LL;
	int16_t x704 = INT16_MAX;
	volatile int64_t t143 = -86833707807739LL;

    t143 = ((x701>x702)/(x703-x704));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x705 = -8377;
	static volatile int64_t x706 = INT64_MIN;
	int8_t x707 = 51;
	int64_t t144 = -1726733017487LL;

    t144 = ((x705>x706)/(x707-x708));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x713 = UINT32_MAX;
	uint64_t x714 = 134104856816LLU;
	int8_t x715 = -14;
	static int8_t x716 = 5;
	volatile int32_t t145 = 1981;

    t145 = ((x713>x714)/(x715-x716));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x719 = 403LLU;
	int8_t x720 = -7;
	uint64_t t146 = 31467LLU;

    t146 = ((x717>x718)/(x719-x720));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x722 = -328;
	int32_t x723 = INT32_MIN;
	int16_t x724 = 0;
	volatile int32_t t147 = 7;

    t147 = ((x721>x722)/(x723-x724));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x725 = INT64_MIN;
	static volatile int64_t x727 = -4518891825161096LL;
	static volatile int64_t t148 = 218952813LL;

    t148 = ((x725>x726)/(x727-x728));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x729 = INT16_MIN;
	static int8_t x730 = -5;
	int8_t x731 = INT8_MIN;
	uint64_t x732 = 11508LLU;
	volatile uint64_t t149 = 10605609900LLU;

    t149 = ((x729>x730)/(x731-x732));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x734 = 14;
	int8_t x735 = INT8_MAX;

    t150 = ((x733>x734)/(x735-x736));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x737 = INT32_MIN;
	int32_t x738 = -1;
	int32_t x739 = -226;
	static int16_t x740 = INT16_MIN;

    t151 = ((x737>x738)/(x739-x740));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x741 = INT8_MIN;
	uint32_t x742 = 1436072887U;
	volatile int64_t x743 = -41LL;
	volatile uint32_t x744 = 13U;
	int64_t t152 = 52847159LL;

    t152 = ((x741>x742)/(x743-x744));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x749 = -1;
	static int16_t x751 = INT16_MAX;
	int8_t x752 = 61;
	int32_t t153 = 3457;

    t153 = ((x749>x750)/(x751-x752));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x753 = INT32_MIN;
	int16_t x754 = 13788;
	int16_t x755 = -1;
	static int8_t x756 = INT8_MIN;
	int32_t t154 = -3755647;

    t154 = ((x753>x754)/(x755-x756));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x758 = INT64_MAX;
	uint32_t x759 = UINT32_MAX;
	volatile int32_t x760 = 1;
	uint32_t t155 = 782485U;

    t155 = ((x757>x758)/(x759-x760));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x765 = UINT8_MAX;
	static int64_t x766 = INT64_MIN;
	uint32_t x767 = 43U;
	static int32_t x768 = INT32_MAX;

    t156 = ((x765>x766)/(x767-x768));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x770 = 2707;
	static uint16_t x771 = 8U;
	int8_t x772 = INT8_MAX;
	volatile int32_t t157 = 88014848;

    t157 = ((x769>x770)/(x771-x772));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x773 = 1015216U;
	int16_t x774 = INT16_MIN;
	static volatile int16_t x775 = -1;
	int16_t x776 = 1;
	volatile int32_t t158 = -13;

    t158 = ((x773>x774)/(x775-x776));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x782 = -751798;
	volatile uint8_t x783 = 62U;
	uint32_t x784 = 3313440U;
	static volatile uint32_t t159 = 4870U;

    t159 = ((x781>x782)/(x783-x784));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x789 = 1;
	static int32_t x790 = -1;
	int64_t x791 = INT64_MIN;
	volatile int64_t x792 = -48177820741816LL;

    t160 = ((x789>x790)/(x791-x792));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x794 = INT16_MIN;
	uint16_t x795 = UINT16_MAX;
	int8_t x796 = INT8_MIN;
	int32_t t161 = 1;

    t161 = ((x793>x794)/(x795-x796));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x797 = 193;
	int8_t x799 = -1;
	int32_t x800 = 39171;
	int32_t t162 = 2637;

    t162 = ((x797>x798)/(x799-x800));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x801 = -26700030;
	int64_t x803 = INT64_MAX;
	volatile uint32_t x804 = 3815U;
	static volatile int64_t t163 = 601992530777836443LL;

    t163 = ((x801>x802)/(x803-x804));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x805 = INT8_MIN;
	uint64_t x806 = UINT64_MAX;
	static volatile int8_t x807 = 10;
	static uint64_t x808 = 317960897533876LLU;
	uint64_t t164 = 7115823207282LLU;

    t164 = ((x805>x806)/(x807-x808));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x811 = UINT64_MAX;
	uint16_t x812 = UINT16_MAX;
	uint64_t t165 = 16085LLU;

    t165 = ((x809>x810)/(x811-x812));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x813 = INT32_MIN;
	int32_t x814 = 6100912;
	volatile uint8_t x815 = 24U;
	static int8_t x816 = INT8_MAX;

    t166 = ((x813>x814)/(x815-x816));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x817 = 112U;
	static int64_t x819 = -1068859867361LL;
	static int8_t x820 = INT8_MIN;
	static int64_t t167 = 1961LL;

    t167 = ((x817>x818)/(x819-x820));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x826 = 194376;
	static uint64_t x827 = UINT64_MAX;
	uint64_t x828 = 87273358147790748LLU;
	uint64_t t168 = 336575645937LLU;

    t168 = ((x825>x826)/(x827-x828));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x829 = INT32_MIN;
	static volatile int16_t x830 = -1;
	uint64_t x831 = 69364735614155LLU;
	int16_t x832 = INT16_MIN;
	static volatile uint64_t t169 = 50921513405476247LLU;

    t169 = ((x829>x830)/(x831-x832));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x833 = -1;
	volatile int64_t x835 = INT64_MAX;
	uint8_t x836 = 3U;

    t170 = ((x833>x834)/(x835-x836));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x837 = INT32_MAX;
	uint16_t x838 = 1320U;
	int8_t x839 = INT8_MIN;
	int32_t t171 = -243;

    t171 = ((x837>x838)/(x839-x840));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x841 = INT8_MIN;
	volatile int8_t x842 = INT8_MIN;
	int16_t x843 = INT16_MIN;
	static uint32_t x844 = 34U;

    t172 = ((x841>x842)/(x843-x844));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x853 = -1;
	volatile int64_t x854 = -1655538LL;
	static uint64_t x855 = UINT64_MAX;
	static volatile uint64_t t173 = 24LLU;

    t173 = ((x853>x854)/(x855-x856));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x857 = -950;
	volatile uint64_t x858 = 2810834096158LLU;
	volatile int16_t x859 = -793;
	int64_t x860 = -6707185701722182LL;
	volatile int64_t t174 = 201LL;

    t174 = ((x857>x858)/(x859-x860));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x861 = 0LLU;
	uint8_t x862 = 123U;
	uint64_t x863 = 10706438315052LLU;
	static volatile int8_t x864 = INT8_MIN;
	static uint64_t t175 = 182808033254105085LLU;

    t175 = ((x861>x862)/(x863-x864));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x865 = -1LL;
	int8_t x866 = -1;
	uint64_t x867 = 519785486LLU;
	uint64_t t176 = 468LLU;

    t176 = ((x865>x866)/(x867-x868));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x881 = 17444621295LL;
	static volatile uint32_t x882 = 18U;
	volatile int16_t x883 = -1;
	uint16_t x884 = UINT16_MAX;

    t177 = ((x881>x882)/(x883-x884));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x885 = 668336;
	uint16_t x886 = UINT16_MAX;
	volatile uint64_t x887 = UINT64_MAX;
	uint16_t x888 = 7U;
	volatile uint64_t t178 = 2665162089273972387LLU;

    t178 = ((x885>x886)/(x887-x888));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x889 = UINT64_MAX;
	uint8_t x890 = UINT8_MAX;
	volatile int32_t x892 = -59387431;
	int64_t t179 = -2387444240583540LL;

    t179 = ((x889>x890)/(x891-x892));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x893 = INT64_MIN;
	static uint8_t x895 = 0U;
	int64_t x896 = INT64_MAX;
	volatile int64_t t180 = -4142522692LL;

    t180 = ((x893>x894)/(x895-x896));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x897 = INT32_MAX;
	static int64_t x899 = INT64_MIN;
	int64_t t181 = -3327968000931LL;

    t181 = ((x897>x898)/(x899-x900));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x901 = 9027075863504LLU;
	int64_t x902 = -1LL;
	static int32_t x904 = -1;

    t182 = ((x901>x902)/(x903-x904));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x905 = 105U;
	int32_t x906 = -1;
	static int32_t x907 = INT32_MAX;
	int64_t x908 = INT64_MAX;
	int64_t t183 = 1821758077LL;

    t183 = ((x905>x906)/(x907-x908));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x909 = 0;
	int64_t x910 = INT64_MIN;
	int16_t x911 = INT16_MIN;
	int64_t x912 = INT64_MIN;
	static int64_t t184 = -84803249620668339LL;

    t184 = ((x909>x910)/(x911-x912));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x913 = INT32_MIN;
	int32_t x915 = INT32_MIN;
	static int16_t x916 = -2805;
	int32_t t185 = 705878457;

    t185 = ((x913>x914)/(x915-x916));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x917 = INT64_MAX;
	int16_t x918 = INT16_MAX;
	int16_t x919 = INT16_MAX;
	int8_t x920 = INT8_MIN;
	volatile int32_t t186 = -6;

    t186 = ((x917>x918)/(x919-x920));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x921 = 0U;
	static volatile int32_t x922 = -1;
	uint64_t x924 = 1605537LLU;
	uint64_t t187 = 10LLU;

    t187 = ((x921>x922)/(x923-x924));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x925 = -1;
	int64_t x926 = INT64_MIN;
	static int16_t x927 = -1;
	volatile int32_t t188 = -309012848;

    t188 = ((x925>x926)/(x927-x928));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x929 = UINT16_MAX;
	static int64_t x930 = INT64_MIN;
	static uint16_t x931 = 77U;
	volatile int16_t x932 = -1;
	volatile int32_t t189 = 136403;

    t189 = ((x929>x930)/(x931-x932));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x934 = -1;
	uint32_t x935 = UINT32_MAX;
	int16_t x936 = -24;

    t190 = ((x933>x934)/(x935-x936));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x937 = 11;
	uint8_t x940 = 38U;
	static int32_t t191 = -20090627;

    t191 = ((x937>x938)/(x939-x940));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x941 = INT8_MAX;
	volatile int16_t x944 = -242;

    t192 = ((x941>x942)/(x943-x944));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x949 = UINT8_MAX;
	static int32_t x950 = INT32_MIN;
	volatile int8_t x951 = -1;
	int8_t x952 = INT8_MIN;
	volatile int32_t t193 = 9;

    t193 = ((x949>x950)/(x951-x952));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x953 = -1LL;
	int64_t x954 = -1LL;
	int8_t x955 = INT8_MIN;
	int32_t t194 = 12;

    t194 = ((x953>x954)/(x955-x956));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x957 = 12U;
	volatile int32_t x958 = -1;
	volatile int32_t x959 = -1;
	int8_t x960 = 2;
	static volatile int32_t t195 = 789;

    t195 = ((x957>x958)/(x959-x960));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x961 = -1;
	volatile int8_t x962 = -1;
	int32_t x963 = -904341755;
	static int8_t x964 = 2;
	int32_t t196 = -973694;

    t196 = ((x961>x962)/(x963-x964));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x965 = -153;
	int32_t x966 = -952506;
	int16_t x967 = INT16_MIN;
	int32_t t197 = 13355;

    t197 = ((x965>x966)/(x967-x968));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x972 = INT8_MIN;

    t198 = ((x969>x970)/(x971-x972));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x973 = 24U;
	int16_t x974 = 21;
	volatile uint64_t x975 = UINT64_MAX;

    t199 = ((x973>x974)/(x975-x976));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

