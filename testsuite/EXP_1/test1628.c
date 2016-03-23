
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

static int64_t x4 = INT64_MIN;
volatile uint64_t x5 = UINT64_MAX;
int32_t x7 = -1;
uint64_t x11 = 2020067364LLU;
static uint32_t x16 = UINT32_MAX;
int64_t x24 = INT64_MIN;
volatile uint64_t x33 = UINT64_MAX;
static volatile int64_t t8 = -2700909564LL;
static int8_t x49 = -1;
int32_t x52 = -1;
static int32_t x55 = INT32_MIN;
volatile int16_t x57 = INT16_MIN;
int16_t x63 = 113;
uint16_t x65 = UINT16_MAX;
uint16_t x74 = UINT16_MAX;
uint64_t x76 = 639124104634LLU;
static int64_t x84 = INT64_MAX;
int32_t x85 = INT32_MAX;
volatile int8_t x88 = 29;
static int32_t t20 = -106699;
int32_t x95 = -1;
int32_t x100 = -90561;
uint32_t x115 = UINT32_MAX;
int64_t x117 = 771792LL;
volatile int64_t t28 = -7268260910454LL;
int32_t x121 = INT32_MIN;
int8_t x122 = -1;
static volatile int32_t x136 = INT32_MAX;
int32_t x137 = INT32_MIN;
int64_t x140 = INT64_MIN;
uint32_t x144 = UINT32_MAX;
uint8_t x151 = 92U;
static uint32_t t36 = 1149799U;
uint16_t x154 = 238U;
int32_t x156 = -1508744;
int32_t t39 = -87750;
volatile uint32_t x173 = UINT32_MAX;
uint32_t x181 = 51U;
int8_t x186 = INT8_MAX;
int64_t x189 = INT64_MIN;
uint64_t x192 = 3181201563LLU;
int8_t x194 = INT8_MIN;
volatile int32_t x196 = INT32_MAX;
int8_t x198 = 1;
int8_t x199 = -1;
int16_t x200 = -1;
static uint64_t x205 = 363080067420215651LLU;
static uint64_t x206 = 2672321999262362LLU;
volatile uint64_t x208 = 2808172649LLU;
static volatile uint8_t x209 = 12U;
static volatile int64_t x212 = -1LL;
volatile uint64_t t52 = 0LLU;
volatile int16_t x226 = INT16_MIN;
volatile int8_t x231 = -1;
volatile int32_t t55 = -51;
int16_t x242 = -1;
volatile int32_t t59 = -1;
int16_t x254 = -1;
volatile uint64_t x257 = UINT64_MAX;
int8_t x262 = 17;
int64_t x268 = -211005827345027LL;
int64_t t63 = 3556175341689LL;
int64_t x275 = -45231534LL;
int64_t t65 = -19441LL;
int64_t x284 = INT64_MIN;
static uint64_t x289 = UINT64_MAX;
uint64_t x291 = 490816160213905LLU;
volatile uint32_t t70 = 156U;
static int8_t x304 = INT8_MIN;
int32_t t73 = -244;
static uint32_t x319 = 31927811U;
static int32_t x321 = INT32_MAX;
uint32_t x322 = UINT32_MAX;
uint64_t x334 = 430LLU;
int64_t x340 = -5127459LL;
uint8_t x342 = 9U;
uint64_t x343 = UINT64_MAX;
volatile uint16_t x353 = UINT16_MAX;
uint64_t x355 = 1597249020LLU;
uint16_t x356 = 113U;
uint64_t t82 = 3606316319LLU;
volatile uint32_t x360 = 8U;
uint32_t t83 = 2U;
uint64_t x364 = 2512618208873779724LLU;
volatile int64_t x369 = -1LL;
int8_t x370 = -7;
int16_t x371 = INT16_MIN;
int8_t x372 = 13;
int32_t x373 = -1;
uint16_t x374 = 233U;
volatile int32_t t87 = -1;
static volatile int32_t t88 = 285594099;
int16_t x382 = INT16_MIN;
volatile int64_t t89 = -19935614892692LL;
static int64_t x385 = -1LL;
uint64_t x391 = 75422728977304LLU;
volatile uint64_t t91 = 31814388824906LLU;
int64_t x394 = 244015911478LL;
volatile uint32_t t93 = 1937251U;
uint8_t x402 = UINT8_MAX;
static int16_t x404 = 4;
volatile int32_t x407 = INT32_MAX;
uint8_t x417 = UINT8_MAX;
int32_t x421 = INT32_MAX;
static int64_t x422 = -3055340079315716LL;
int64_t t99 = -8076LL;
int8_t x430 = INT8_MIN;
int32_t x435 = 20;
volatile int8_t x437 = INT8_MIN;
int8_t x462 = 12;
int8_t x464 = INT8_MIN;
static int64_t x467 = -1LL;
int64_t x474 = -138905472993811LL;
static int64_t x478 = INT64_MIN;
volatile int32_t t111 = -66848419;
volatile int64_t t113 = 41368464486828499LL;
int16_t x491 = INT16_MIN;
int32_t x496 = -2494;
int32_t t116 = 12382696;
int8_t x513 = INT8_MAX;
int64_t x515 = INT64_MIN;
int64_t x516 = INT64_MAX;
int32_t t122 = 18;
int8_t x528 = -1;
volatile int64_t x529 = INT64_MIN;
uint64_t t124 = 545621425920LLU;
int64_t x533 = 28LL;
int16_t x534 = 0;
int32_t x535 = 141;
volatile int32_t t126 = -238274693;
static uint16_t x543 = 85U;
uint64_t x553 = UINT64_MAX;
volatile uint32_t t130 = 364537U;
volatile int64_t x560 = INT64_MAX;
int32_t t132 = -26217245;
volatile int16_t x567 = INT16_MIN;
int32_t t134 = 56;
uint8_t x574 = 1U;
volatile int32_t t135 = 19116780;
int64_t x595 = INT64_MIN;
int64_t t140 = 46024585LL;
uint64_t x598 = 84638442LLU;
int8_t x600 = INT8_MIN;
static uint64_t x601 = UINT64_MAX;
static int32_t t142 = -700723198;
int8_t x609 = -1;
int64_t x614 = 5969628198397LL;
uint32_t x615 = 1U;
volatile int32_t t148 = 10;
static int32_t x629 = INT32_MIN;
volatile uint32_t t150 = 403U;
uint64_t x638 = UINT64_MAX;
volatile int64_t x643 = -352057780262765794LL;
int32_t x658 = -25;
static int16_t x666 = INT16_MIN;
volatile uint16_t x667 = 76U;
static int32_t t158 = -146;
volatile int32_t t163 = 16733934;
static uint16_t x694 = 47U;
static volatile uint8_t x696 = UINT8_MAX;
volatile int64_t t164 = 48313LL;
int64_t x710 = 617687805825949197LL;
static int64_t x716 = 946177603117013355LL;
static int8_t x718 = -1;
int64_t x722 = INT64_MIN;
static uint32_t x727 = 10U;
volatile int16_t x728 = INT16_MIN;
volatile int32_t t173 = -157035000;
int32_t x734 = INT32_MAX;
int64_t x735 = -33372312191LL;
int64_t t176 = -11302691LL;
int16_t x746 = INT16_MIN;
static int64_t x749 = INT64_MIN;
static uint8_t x750 = UINT8_MAX;
int8_t x773 = INT8_MIN;
int8_t x779 = 1;
static volatile int32_t t183 = 3580858;
int16_t x782 = INT16_MIN;
int32_t t184 = 1;
int64_t x786 = -216321135201449476LL;
uint64_t x790 = 180LLU;
int8_t x792 = INT8_MIN;
volatile int32_t x793 = 20;
volatile uint8_t x794 = 3U;
int8_t x795 = -37;
static int32_t x798 = INT32_MIN;
int64_t x799 = 1LL;
volatile int64_t x803 = INT64_MIN;
int8_t x804 = -24;
uint64_t t190 = 0LLU;
int16_t x809 = 122;
int16_t x835 = INT16_MAX;
volatile uint16_t x837 = 1U;
static int16_t x840 = INT16_MIN;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int8_t x2 = 3;
	int32_t x3 = INT32_MAX;
	int64_t t0 = -19876LL;

    t0 = (((x1>x2)%x3)/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 26;
	int16_t x8 = -1;
	int32_t t1 = -111678;

    t1 = (((x5>x6)%x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = INT16_MIN;
	volatile int32_t x10 = INT32_MAX;
	int64_t x12 = 1LL;
	volatile uint64_t t2 = 61232100LLU;

    t2 = (((x9>x10)%x11)/x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -9344;
	volatile uint64_t x14 = UINT64_MAX;
	static uint8_t x15 = UINT8_MAX;
	volatile uint32_t t3 = 59210817U;

    t3 = (((x13>x14)%x15)/x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int8_t x18 = 0;
	volatile int8_t x19 = INT8_MIN;
	int32_t x20 = -1;
	volatile int32_t t4 = 1893;

    t4 = (((x17>x18)%x19)/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	int32_t x23 = 37281390;
	static int64_t t5 = 8263554LL;

    t5 = (((x21>x22)%x23)/x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = -199320;
	int64_t x31 = -999229086LL;
	volatile int64_t x32 = INT64_MIN;
	int64_t t6 = -12744LL;

    t6 = (((x29>x30)%x31)/x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x34 = UINT32_MAX;
	int8_t x35 = INT8_MAX;
	int16_t x36 = -1;
	static volatile int32_t t7 = -259758;

    t7 = (((x33>x34)%x35)/x36);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = INT16_MIN;
	volatile uint32_t x38 = 49U;
	static uint16_t x39 = 30U;
	volatile int64_t x40 = 34877965362LL;

    t8 = (((x37>x38)%x39)/x40);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	static int64_t x42 = 3LL;
	volatile uint64_t x43 = 1048008430972463LLU;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t9 = 462373184841852553LLU;

    t9 = (((x41>x42)%x43)/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MAX;
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t10 = 3833707;

    t10 = (((x45>x46)%x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x50 = 86LLU;
	int8_t x51 = INT8_MAX;
	volatile int32_t t11 = 70399;

    t11 = (((x49>x50)%x51)/x52);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = 3;
	int16_t x54 = INT16_MIN;
	int16_t x56 = INT16_MAX;
	int32_t t12 = 1;

    t12 = (((x53>x54)%x55)/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x58 = -1LL;
	int16_t x59 = -72;
	int64_t x60 = INT64_MIN;
	int64_t t13 = 619899256324849LL;

    t13 = (((x57>x58)%x59)/x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	uint8_t x62 = 2U;
	int32_t x64 = INT32_MIN;
	static int32_t t14 = -12891;

    t14 = (((x61>x62)%x63)/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x66 = 0U;
	static uint64_t x67 = UINT64_MAX;
	int16_t x68 = 1;
	uint64_t t15 = 4740035LLU;

    t15 = (((x65>x66)%x67)/x68);

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	static uint64_t x70 = UINT64_MAX;
	static int16_t x71 = INT16_MIN;
	static volatile int16_t x72 = INT16_MIN;
	static volatile int32_t t16 = -1229414;

    t16 = (((x69>x70)%x71)/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	static int32_t x75 = INT32_MAX;
	volatile uint64_t t17 = 485077597510LLU;

    t17 = (((x73>x74)%x75)/x76);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = 6;
	int16_t x78 = -765;
	static int8_t x79 = INT8_MIN;
	static int16_t x80 = 44;
	static volatile int32_t t18 = 5681286;

    t18 = (((x77>x78)%x79)/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MAX;
	int64_t x83 = -642956056649LL;
	int64_t t19 = 2086268674252LL;

    t19 = (((x81>x82)%x83)/x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x86 = INT32_MIN;
	static int16_t x87 = INT16_MAX;

    t20 = (((x85>x86)%x87)/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int32_t x90 = 0;
	volatile int16_t x91 = INT16_MIN;
	int32_t x92 = -5;
	int32_t t21 = -1892076;

    t21 = (((x89>x90)%x91)/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;
	static uint16_t x94 = 1857U;
	static int16_t x96 = -1;
	int32_t t22 = -510;

    t22 = (((x93>x94)%x95)/x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = 739;
	int32_t t23 = 154183073;

    t23 = (((x97>x98)%x99)/x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -1;
	volatile uint64_t x102 = 461146515413428LLU;
	int8_t x103 = INT8_MIN;
	uint32_t x104 = 56194570U;
	uint32_t t24 = 848U;

    t24 = (((x101>x102)%x103)/x104);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 1U;
	int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t25 = -74371262;

    t25 = (((x105>x106)%x107)/x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x110 = -1;
	volatile int32_t x111 = 5586339;
	int64_t x112 = INT64_MAX;
	int64_t t26 = -250840LL;

    t26 = (((x109>x110)%x111)/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	uint16_t x114 = UINT16_MAX;
	int32_t x116 = -2263550;
	static volatile uint32_t t27 = 1790358U;

    t27 = (((x113>x114)%x115)/x116);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x118 = -10;
	static int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MIN;

    t28 = (((x117>x118)%x119)/x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x123 = 7;
	static uint16_t x124 = 11815U;
	volatile int32_t t29 = 8042219;

    t29 = (((x121>x122)%x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;
	int64_t t30 = -23800685583631LL;

    t30 = (((x125>x126)%x127)/x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	int16_t x131 = -2;
	static int8_t x132 = INT8_MAX;
	int32_t t31 = -62;

    t31 = (((x129>x130)%x131)/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = INT64_MIN;
	uint64_t x134 = 926292407648LLU;
	uint32_t x135 = 82U;
	uint32_t t32 = 82872U;

    t32 = (((x133>x134)%x135)/x136);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x138 = -1LL;
	int16_t x139 = 18;
	volatile int64_t t33 = 397815940494135LL;

    t33 = (((x137>x138)%x139)/x140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MIN;
	int8_t x142 = -1;
	int8_t x143 = -1;
	volatile uint32_t t34 = 2243U;

    t34 = (((x141>x142)%x143)/x144);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = 1U;
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	volatile int32_t x148 = INT32_MAX;
	int32_t t35 = -144697;

    t35 = (((x145>x146)%x147)/x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = 351U;
	static int8_t x150 = INT8_MIN;
	static uint32_t x152 = 201013253U;

    t36 = (((x149>x150)%x151)/x152);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = UINT8_MAX;
	int64_t x155 = 262859404033521241LL;
	static int64_t t37 = -38409040LL;

    t37 = (((x153>x154)%x155)/x156);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x157 = INT16_MIN;
	uint16_t x158 = 2U;
	uint16_t x159 = UINT16_MAX;
	volatile int16_t x160 = 713;
	volatile int32_t t38 = -25583;

    t38 = (((x157>x158)%x159)/x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x161 = 67U;
	int8_t x162 = INT8_MIN;
	int32_t x163 = -15041;
	int8_t x164 = INT8_MIN;

    t39 = (((x161>x162)%x163)/x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 5U;
	static volatile int16_t x171 = 71;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t40 = 1883;

    t40 = (((x169>x170)%x171)/x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x174 = INT32_MIN;
	volatile int16_t x175 = INT16_MIN;
	static volatile int32_t x176 = INT32_MIN;
	int32_t t41 = -14;

    t41 = (((x173>x174)%x175)/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = UINT8_MAX;
	static uint16_t x178 = 68U;
	int16_t x179 = -1292;
	int16_t x180 = 1123;
	int32_t t42 = 126;

    t42 = (((x177>x178)%x179)/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x182 = -2128452933436693770LL;
	uint64_t x183 = 179923225500317879LLU;
	int32_t x184 = INT32_MIN;
	uint64_t t43 = 121842513586013505LLU;

    t43 = (((x181>x182)%x183)/x184);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = -1;
	uint16_t x187 = 187U;
	int64_t x188 = 1557562452079LL;
	int64_t t44 = 1397916979LL;

    t44 = (((x185>x186)%x187)/x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x190 = INT16_MIN;
	static int16_t x191 = -3442;
	static uint64_t t45 = 3576054772LLU;

    t45 = (((x189>x190)%x191)/x192);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = -1LL;
	uint8_t x195 = 25U;
	static int32_t t46 = 2;

    t46 = (((x193>x194)%x195)/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = INT32_MIN;
	volatile int32_t t47 = 3;

    t47 = (((x197>x198)%x199)/x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x202 = 1U;
	static int8_t x203 = INT8_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t48 = -50;

    t48 = (((x201>x202)%x203)/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x207 = INT64_MIN;
	static uint64_t t49 = 7097172891LLU;

    t49 = (((x205>x206)%x207)/x208);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x210 = 8;
	uint64_t x211 = UINT64_MAX;
	uint64_t t50 = 6018284785LLU;

    t50 = (((x209>x210)%x211)/x212);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = INT16_MIN;
	uint32_t x214 = 1U;
	int8_t x215 = -16;
	static uint16_t x216 = 5U;
	volatile int32_t t51 = 995212;

    t51 = (((x213>x214)%x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x217 = INT16_MAX;
	volatile int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;

    t52 = (((x217>x218)%x219)/x220);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x221 = INT16_MIN;
	uint32_t x222 = 482U;
	int32_t x223 = 10774011;
	static int8_t x224 = INT8_MIN;
	int32_t t53 = -1760;

    t53 = (((x221>x222)%x223)/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = UINT8_MAX;
	uint16_t x227 = 1U;
	volatile uint8_t x228 = 57U;
	int32_t t54 = 6;

    t54 = (((x225>x226)%x227)/x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = UINT8_MAX;
	volatile int64_t x230 = INT64_MIN;
	int16_t x232 = -2;

    t55 = (((x229>x230)%x231)/x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = 5758U;
	int64_t x234 = 515944937LL;
	static int64_t x235 = -1LL;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t56 = -127LL;

    t56 = (((x233>x234)%x235)/x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x237 = 0U;
	int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MIN;
	int8_t x240 = -1;
	static int32_t t57 = 213487551;

    t57 = (((x237>x238)%x239)/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x241 = -723;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -837340042352509291LL;
	int64_t t58 = 1995LL;

    t58 = (((x241>x242)%x243)/x244);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x245 = 14656;
	int32_t x246 = -1556049;
	int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MAX;

    t59 = (((x245>x246)%x247)/x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int16_t x255 = INT16_MIN;
	volatile int64_t x256 = -1LL;
	static volatile int64_t t60 = -5211LL;

    t60 = (((x253>x254)%x255)/x256);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 10U;
	static int32_t x260 = INT32_MAX;
	uint32_t t61 = 59702219U;

    t61 = (((x257>x258)%x259)/x260);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = -1;
	int64_t x263 = 5847185657LL;
	int16_t x264 = INT16_MIN;
	volatile int64_t t62 = -89LL;

    t62 = (((x261>x262)%x263)/x264);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x265 = -25533741684LL;
	int8_t x266 = INT8_MAX;
	uint16_t x267 = 10729U;

    t63 = (((x265>x266)%x267)/x268);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x273 = 101826LLU;
	uint16_t x274 = UINT16_MAX;
	uint8_t x276 = 49U;
	int64_t t64 = 4825873410565LL;

    t64 = (((x273>x274)%x275)/x276);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = -15;
	int16_t x278 = -1;
	int64_t x279 = INT64_MIN;
	volatile int8_t x280 = INT8_MIN;

    t65 = (((x277>x278)%x279)/x280);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x281 = 24566U;
	int64_t x282 = -10035867820917LL;
	uint64_t x283 = 9362786909LLU;
	volatile uint64_t t66 = 804897831741620834LLU;

    t66 = (((x281>x282)%x283)/x284);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x285 = 4791173635026LLU;
	volatile int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MIN;
	int64_t t67 = -207721893574560LL;

    t67 = (((x285>x286)%x287)/x288);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x290 = -1;
	uint64_t x292 = 229LLU;
	uint64_t t68 = 19211LLU;

    t68 = (((x289>x290)%x291)/x292);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x293 = -10;
	int64_t x294 = -89420951747577LL;
	static uint8_t x295 = UINT8_MAX;
	int64_t x296 = -1LL;
	int64_t t69 = 186385864813626LL;

    t69 = (((x293>x294)%x295)/x296);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x297 = UINT16_MAX;
	static uint8_t x298 = 1U;
	int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;

    t70 = (((x297>x298)%x299)/x300);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x301 = 3U;
	volatile uint64_t x302 = 38924843LLU;
	volatile uint64_t x303 = 479840LLU;
	volatile uint64_t t71 = 2794777569789575064LLU;

    t71 = (((x301>x302)%x303)/x304);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x305 = 3U;
	uint32_t x306 = 664250099U;
	int16_t x307 = -1;
	int32_t x308 = INT32_MIN;
	int32_t t72 = -2198789;

    t72 = (((x305>x306)%x307)/x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x309 = -475;
	int32_t x310 = INT32_MIN;
	int16_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;

    t73 = (((x309>x310)%x311)/x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x313 = 119U;
	int64_t x314 = 1023LL;
	static int64_t x315 = INT64_MIN;
	volatile uint16_t x316 = 286U;
	volatile int64_t t74 = 1620526LL;

    t74 = (((x313>x314)%x315)/x316);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	uint8_t x320 = UINT8_MAX;
	uint32_t t75 = 38047466U;

    t75 = (((x317>x318)%x319)/x320);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x323 = 3;
	static int64_t x324 = INT64_MIN;
	volatile int64_t t76 = 311171060LL;

    t76 = (((x321>x322)%x323)/x324);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x329 = 730U;
	int32_t x330 = INT32_MIN;
	uint64_t x331 = UINT64_MAX;
	volatile int16_t x332 = 3109;
	volatile uint64_t t77 = 7357LLU;

    t77 = (((x329>x330)%x331)/x332);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x333 = 3590354U;
	uint64_t x335 = 6052492029388779745LLU;
	int8_t x336 = INT8_MAX;
	volatile uint64_t t78 = 193285LLU;

    t78 = (((x333>x334)%x335)/x336);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x337 = INT8_MIN;
	uint32_t x338 = 3U;
	volatile uint8_t x339 = 1U;
	int64_t t79 = 1970016422330608LL;

    t79 = (((x337>x338)%x339)/x340);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x341 = 7U;
	uint16_t x344 = UINT16_MAX;
	volatile uint64_t t80 = 0LLU;

    t80 = (((x341>x342)%x343)/x344);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x345 = 25U;
	static uint8_t x346 = 79U;
	int64_t x347 = INT64_MIN;
	volatile int16_t x348 = -1;
	volatile int64_t t81 = 134055019LL;

    t81 = (((x345>x346)%x347)/x348);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x354 = INT32_MAX;

    t82 = (((x353>x354)%x355)/x356);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	static int8_t x359 = INT8_MAX;

    t83 = (((x357>x358)%x359)/x360);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x361 = -1LL;
	static uint8_t x362 = 8U;
	static int64_t x363 = -870904796053433596LL;
	uint64_t t84 = 489LLU;

    t84 = (((x361>x362)%x363)/x364);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = INT16_MIN;
	static uint64_t x366 = 1838301397019021955LLU;
	volatile uint8_t x367 = 12U;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t85 = 1;

    t85 = (((x365>x366)%x367)/x368);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t t86 = 1;

    t86 = (((x369>x370)%x371)/x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x375 = 1;
	uint8_t x376 = 68U;

    t87 = (((x373>x374)%x375)/x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x377 = INT8_MIN;
	int32_t x378 = -353667339;
	volatile uint16_t x379 = 7U;
	volatile uint8_t x380 = 5U;

    t88 = (((x377>x378)%x379)/x380);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x381 = INT64_MAX;
	static volatile int64_t x383 = 1130970874504744LL;
	static uint16_t x384 = 557U;

    t89 = (((x381>x382)%x383)/x384);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MIN;
	static int32_t t90 = -2795;

    t90 = (((x385>x386)%x387)/x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x389 = INT32_MIN;
	volatile int32_t x390 = INT32_MIN;
	int16_t x392 = 41;

    t91 = (((x389>x390)%x391)/x392);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x393 = -677033759794LL;
	static int16_t x395 = INT16_MAX;
	volatile int32_t x396 = INT32_MIN;
	int32_t t92 = 554484773;

    t92 = (((x393>x394)%x395)/x396);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x397 = -183LL;
	static volatile int32_t x398 = -1;
	volatile uint32_t x399 = 199U;
	int8_t x400 = -2;

    t93 = (((x397>x398)%x399)/x400);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x401 = INT64_MIN;
	int32_t x403 = -1343;
	int32_t t94 = 757;

    t94 = (((x401>x402)%x403)/x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	int32_t x408 = -2594;
	static volatile int32_t t95 = 977498127;

    t95 = (((x405>x406)%x407)/x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = 316;
	int32_t x414 = 6612039;
	int8_t x415 = -1;
	volatile int64_t x416 = -50042638LL;
	volatile int64_t t96 = -7329037489LL;

    t96 = (((x413>x414)%x415)/x416);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;
	int8_t x420 = -42;
	static volatile int64_t t97 = -620870258181LL;

    t97 = (((x417>x418)%x419)/x420);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x423 = 1;
	int8_t x424 = -46;
	static int32_t t98 = -2971410;

    t98 = (((x421>x422)%x423)/x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x425 = 64243718363498549LLU;
	int32_t x426 = -10595;
	static int64_t x427 = INT64_MIN;
	volatile int64_t x428 = INT64_MAX;

    t99 = (((x425>x426)%x427)/x428);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x429 = 201U;
	volatile int8_t x431 = INT8_MIN;
	int64_t x432 = 2019035117521343LL;
	static int64_t t100 = 13937325666577LL;

    t100 = (((x429>x430)%x431)/x432);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 238U;
	int32_t x434 = INT32_MIN;
	int8_t x436 = -1;
	int32_t t101 = -3;

    t101 = (((x433>x434)%x435)/x436);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x438 = UINT32_MAX;
	int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MIN;
	volatile int32_t t102 = 0;

    t102 = (((x437>x438)%x439)/x440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x441 = 30;
	static uint32_t x442 = 13356U;
	volatile int32_t x443 = INT32_MIN;
	volatile int64_t x444 = -1LL;
	volatile int64_t t103 = -852606959983LL;

    t103 = (((x441>x442)%x443)/x444);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x445 = 38279U;
	uint16_t x446 = 1058U;
	uint16_t x447 = 29U;
	static volatile int64_t x448 = -1LL;
	volatile int64_t t104 = -1279LL;

    t104 = (((x445>x446)%x447)/x448);

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x449 = 2U;
	int64_t x450 = 1823536212214570235LL;
	static uint8_t x451 = 82U;
	int16_t x452 = INT16_MAX;
	volatile int32_t t105 = 830706030;

    t105 = (((x449>x450)%x451)/x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x453 = INT8_MIN;
	static int64_t x454 = -1LL;
	uint64_t x455 = 388404816527565LLU;
	int16_t x456 = -3;
	static volatile uint64_t t106 = 666359041515513LLU;

    t106 = (((x453>x454)%x455)/x456);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x461 = 1;
	int8_t x463 = INT8_MIN;
	static volatile int32_t t107 = 70166277;

    t107 = (((x461>x462)%x463)/x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 399079303589581221LLU;
	uint8_t x468 = UINT8_MAX;
	int64_t t108 = -9147LL;

    t108 = (((x465>x466)%x467)/x468);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x469 = INT64_MIN;
	uint8_t x470 = 7U;
	uint8_t x471 = 4U;
	int32_t x472 = 44;
	int32_t t109 = 7;

    t109 = (((x469>x470)%x471)/x472);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x473 = INT32_MAX;
	int64_t x475 = -1LL;
	static uint64_t x476 = UINT64_MAX;
	volatile uint64_t t110 = 1305240154235608350LLU;

    t110 = (((x473>x474)%x475)/x476);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x477 = INT64_MIN;
	int16_t x479 = INT16_MIN;
	int8_t x480 = -51;

    t111 = (((x477>x478)%x479)/x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x481 = 31U;
	int32_t x482 = -1;
	static uint64_t x483 = 399441523024983LLU;
	int8_t x484 = INT8_MAX;
	static uint64_t t112 = 18439599518LLU;

    t112 = (((x481>x482)%x483)/x484);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = -24605;
	int8_t x486 = INT8_MIN;
	volatile int8_t x487 = 5;
	int64_t x488 = INT64_MAX;

    t113 = (((x485>x486)%x487)/x488);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x489 = INT16_MIN;
	int8_t x490 = INT8_MIN;
	int16_t x492 = INT16_MAX;
	static volatile int32_t t114 = 409;

    t114 = (((x489>x490)%x491)/x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x493 = UINT64_MAX;
	int8_t x494 = 7;
	int64_t x495 = INT64_MIN;
	static int64_t t115 = -2929416581478025086LL;

    t115 = (((x493>x494)%x495)/x496);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x497 = 46500236U;
	int32_t x498 = -1;
	int16_t x499 = -1;
	volatile int32_t x500 = 65340433;

    t116 = (((x497>x498)%x499)/x500);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x501 = 2U;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = UINT32_MAX;
	int16_t x504 = -806;
	volatile uint32_t t117 = 989365U;

    t117 = (((x501>x502)%x503)/x504);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x506 = -1;
	int16_t x507 = INT16_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t118 = -328355289;

    t118 = (((x505>x506)%x507)/x508);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x509 = INT8_MAX;
	uint32_t x510 = 76891U;
	int64_t x511 = 35111LL;
	int16_t x512 = INT16_MIN;
	volatile int64_t t119 = -38044LL;

    t119 = (((x509>x510)%x511)/x512);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x514 = 0;
	int64_t t120 = 149316LL;

    t120 = (((x513>x514)%x515)/x516);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x517 = 185413536714048104LL;
	volatile int16_t x518 = 4;
	int16_t x519 = INT16_MAX;
	uint64_t x520 = 86485LLU;
	static volatile uint64_t t121 = 29999LLU;

    t121 = (((x517>x518)%x519)/x520);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x521 = INT8_MIN;
	volatile uint8_t x522 = 113U;
	uint8_t x523 = 14U;
	volatile uint8_t x524 = 54U;

    t122 = (((x521>x522)%x523)/x524);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x525 = 0U;
	volatile int32_t x526 = -2;
	volatile int32_t x527 = INT32_MIN;
	volatile int32_t t123 = -8468;

    t123 = (((x525>x526)%x527)/x528);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x530 = INT8_MIN;
	volatile int64_t x531 = -5451565LL;
	uint64_t x532 = UINT64_MAX;

    t124 = (((x529>x530)%x531)/x532);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x536 = -4;
	static volatile int32_t t125 = -42395252;

    t125 = (((x533>x534)%x535)/x536);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x537 = 1428992168933LL;
	volatile int16_t x538 = -7;
	int8_t x539 = INT8_MIN;
	static volatile int32_t x540 = INT32_MIN;

    t126 = (((x537>x538)%x539)/x540);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x541 = INT16_MAX;
	int8_t x542 = INT8_MIN;
	volatile uint8_t x544 = 25U;
	volatile int32_t t127 = 7298661;

    t127 = (((x541>x542)%x543)/x544);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x545 = INT8_MIN;
	uint64_t x546 = 40LLU;
	int16_t x547 = -15122;
	uint16_t x548 = UINT16_MAX;
	int32_t t128 = 7;

    t128 = (((x545>x546)%x547)/x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x549 = -1;
	uint16_t x550 = 21893U;
	int8_t x551 = INT8_MAX;
	int32_t x552 = INT32_MIN;
	volatile int32_t t129 = -5249329;

    t129 = (((x549>x550)%x551)/x552);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x554 = -260204;
	int32_t x555 = -1;
	uint32_t x556 = UINT32_MAX;

    t130 = (((x553>x554)%x555)/x556);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x557 = INT16_MIN;
	uint8_t x558 = 0U;
	volatile uint32_t x559 = 1996798U;
	int64_t t131 = 22987313068LL;

    t131 = (((x557>x558)%x559)/x560);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x561 = 14U;
	uint16_t x562 = UINT16_MAX;
	volatile int16_t x563 = INT16_MAX;
	volatile int8_t x564 = 1;

    t132 = (((x561>x562)%x563)/x564);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x565 = 2181690;
	int16_t x566 = INT16_MIN;
	int16_t x568 = 1;
	int32_t t133 = -453114;

    t133 = (((x565>x566)%x567)/x568);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x569 = 2729U;
	int64_t x570 = 197706942LL;
	int8_t x571 = INT8_MIN;
	static int16_t x572 = -10;

    t134 = (((x569>x570)%x571)/x572);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x573 = UINT32_MAX;
	int16_t x575 = INT16_MAX;
	volatile int8_t x576 = INT8_MAX;

    t135 = (((x573>x574)%x575)/x576);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x577 = UINT32_MAX;
	volatile uint8_t x578 = 0U;
	int16_t x579 = INT16_MIN;
	volatile uint32_t x580 = 3U;
	volatile uint32_t t136 = 61831750U;

    t136 = (((x577>x578)%x579)/x580);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x581 = 1U;
	volatile int64_t x582 = 3LL;
	int32_t x583 = -1;
	int8_t x584 = -6;
	static volatile int32_t t137 = -2;

    t137 = (((x581>x582)%x583)/x584);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x585 = INT64_MIN;
	static int16_t x586 = 2015;
	uint64_t x587 = 21LLU;
	volatile int16_t x588 = -19;
	uint64_t t138 = 1519477112026018LLU;

    t138 = (((x585>x586)%x587)/x588);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x589 = INT32_MIN;
	int32_t x590 = -1;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = 8404LL;
	int64_t t139 = 0LL;

    t139 = (((x589>x590)%x591)/x592);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x593 = UINT16_MAX;
	uint64_t x594 = 38LLU;
	uint32_t x596 = UINT32_MAX;

    t140 = (((x593>x594)%x595)/x596);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x597 = INT64_MIN;
	int32_t x599 = INT32_MIN;
	static int32_t t141 = -5;

    t141 = (((x597>x598)%x599)/x600);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x602 = UINT64_MAX;
	static int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MIN;

    t142 = (((x601>x602)%x603)/x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x605 = -999075457LL;
	static uint16_t x606 = UINT16_MAX;
	int16_t x607 = -7;
	volatile int64_t x608 = INT64_MIN;
	static volatile int64_t t143 = -29706822300LL;

    t143 = (((x605>x606)%x607)/x608);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x610 = UINT8_MAX;
	int16_t x611 = INT16_MIN;
	static uint64_t x612 = 34039907072979059LLU;
	volatile uint64_t t144 = 1892LLU;

    t144 = (((x609>x610)%x611)/x612);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x613 = 4;
	static int32_t x616 = 215368774;
	uint32_t t145 = 29U;

    t145 = (((x613>x614)%x615)/x616);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x617 = INT8_MIN;
	int32_t x618 = 58620966;
	int64_t x619 = -1LL;
	int8_t x620 = INT8_MAX;
	volatile int64_t t146 = -49648582LL;

    t146 = (((x617>x618)%x619)/x620);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x621 = 0;
	volatile uint64_t x622 = 106195LLU;
	volatile int64_t x623 = INT64_MAX;
	static int64_t x624 = -175152443790892LL;
	int64_t t147 = -7539164643LL;

    t147 = (((x621>x622)%x623)/x624);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x625 = -1;
	static int32_t x626 = INT32_MIN;
	int32_t x627 = -1;
	int32_t x628 = INT32_MAX;

    t148 = (((x625>x626)%x627)/x628);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x630 = 5U;
	static uint32_t x631 = 468484853U;
	static int16_t x632 = INT16_MIN;
	volatile uint32_t t149 = 233511U;

    t149 = (((x629>x630)%x631)/x632);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x633 = INT64_MAX;
	int32_t x634 = -1;
	uint32_t x635 = 3581U;
	int16_t x636 = INT16_MAX;

    t150 = (((x633>x634)%x635)/x636);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x637 = -1;
	static int8_t x639 = -3;
	int32_t x640 = INT32_MIN;
	volatile int32_t t151 = -2045;

    t151 = (((x637>x638)%x639)/x640);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x641 = 4004532;
	uint16_t x642 = UINT16_MAX;
	uint8_t x644 = 21U;
	volatile int64_t t152 = 103499LL;

    t152 = (((x641>x642)%x643)/x644);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x645 = INT64_MIN;
	int64_t x646 = INT64_MIN;
	int32_t x647 = -54752526;
	uint16_t x648 = UINT16_MAX;
	int32_t t153 = -1;

    t153 = (((x645>x646)%x647)/x648);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x649 = -1;
	uint32_t x650 = 4U;
	static volatile int8_t x651 = 49;
	static uint64_t x652 = 1494039124092540317LLU;
	volatile uint64_t t154 = 10507743789323LLU;

    t154 = (((x649>x650)%x651)/x652);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x657 = 158147U;
	int32_t x659 = INT32_MIN;
	int16_t x660 = -1234;
	static int32_t t155 = 383451265;

    t155 = (((x657>x658)%x659)/x660);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x661 = 1187792291LLU;
	int8_t x662 = INT8_MIN;
	volatile int32_t x663 = INT32_MAX;
	int8_t x664 = -1;
	static int32_t t156 = -13873840;

    t156 = (((x661>x662)%x663)/x664);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x668 = -1;
	int32_t t157 = 3958;

    t157 = (((x665>x666)%x667)/x668);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x669 = UINT32_MAX;
	volatile int16_t x670 = -1;
	volatile int8_t x671 = 1;
	static int8_t x672 = INT8_MIN;

    t158 = (((x669>x670)%x671)/x672);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x673 = INT8_MIN;
	int16_t x674 = 1;
	static int64_t x675 = INT64_MIN;
	int16_t x676 = INT16_MAX;
	int64_t t159 = -10852137LL;

    t159 = (((x673>x674)%x675)/x676);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x677 = -16;
	static int16_t x678 = INT16_MAX;
	int8_t x679 = -7;
	volatile int64_t x680 = 131931009611196LL;
	volatile int64_t t160 = 1596422957LL;

    t160 = (((x677>x678)%x679)/x680);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x681 = 18U;
	uint32_t x682 = UINT32_MAX;
	volatile int32_t x683 = 5;
	uint8_t x684 = UINT8_MAX;
	int32_t t161 = 379743;

    t161 = (((x681>x682)%x683)/x684);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x685 = INT8_MIN;
	int8_t x686 = -7;
	static uint32_t x687 = UINT32_MAX;
	int16_t x688 = -1;
	uint32_t t162 = 0U;

    t162 = (((x685>x686)%x687)/x688);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x689 = -119;
	volatile int16_t x690 = INT16_MIN;
	volatile uint8_t x691 = UINT8_MAX;
	int8_t x692 = INT8_MIN;

    t163 = (((x689>x690)%x691)/x692);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x693 = UINT8_MAX;
	volatile int64_t x695 = INT64_MAX;

    t164 = (((x693>x694)%x695)/x696);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x697 = 6;
	int8_t x698 = INT8_MIN;
	int64_t x699 = -1LL;
	static int32_t x700 = -1;
	volatile int64_t t165 = 20127LL;

    t165 = (((x697>x698)%x699)/x700);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x701 = -10;
	int16_t x702 = INT16_MIN;
	int16_t x703 = -10116;
	uint8_t x704 = UINT8_MAX;
	static volatile int32_t t166 = -9848;

    t166 = (((x701>x702)%x703)/x704);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x705 = INT64_MIN;
	volatile int32_t x706 = INT32_MIN;
	uint64_t x707 = UINT64_MAX;
	int32_t x708 = INT32_MAX;
	volatile uint64_t t167 = 1185184LLU;

    t167 = (((x705>x706)%x707)/x708);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x709 = INT64_MAX;
	volatile uint32_t x711 = 92U;
	uint32_t x712 = 5U;
	uint32_t t168 = 1046U;

    t168 = (((x709>x710)%x711)/x712);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x713 = 184U;
	static int8_t x714 = INT8_MIN;
	int8_t x715 = 38;
	volatile int64_t t169 = -236281406181LL;

    t169 = (((x713>x714)%x715)/x716);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x717 = -29LL;
	uint64_t x719 = UINT64_MAX;
	int64_t x720 = 6211080364LL;
	volatile uint64_t t170 = 2985028198515LLU;

    t170 = (((x717>x718)%x719)/x720);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x721 = 12533U;
	int64_t x723 = -1LL;
	uint64_t x724 = 1708LLU;
	static volatile uint64_t t171 = 8290959665006390LLU;

    t171 = (((x721>x722)%x723)/x724);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x725 = INT32_MIN;
	static uint8_t x726 = 1U;
	static volatile uint32_t t172 = 30641483U;

    t172 = (((x725>x726)%x727)/x728);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x729 = INT16_MIN;
	volatile int32_t x730 = INT32_MIN;
	static int8_t x731 = INT8_MAX;
	static int32_t x732 = INT32_MIN;

    t173 = (((x729>x730)%x731)/x732);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x733 = -1LL;
	uint32_t x736 = UINT32_MAX;
	volatile int64_t t174 = -11520251616LL;

    t174 = (((x733>x734)%x735)/x736);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x737 = UINT64_MAX;
	int16_t x738 = INT16_MIN;
	uint8_t x739 = 105U;
	int32_t x740 = INT32_MIN;
	int32_t t175 = 0;

    t175 = (((x737>x738)%x739)/x740);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x741 = INT8_MIN;
	static int64_t x742 = INT64_MAX;
	volatile uint32_t x743 = UINT32_MAX;
	int64_t x744 = 20952509675388456LL;

    t176 = (((x741>x742)%x743)/x744);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x745 = INT8_MIN;
	static int32_t x747 = 94773;
	uint8_t x748 = 59U;
	static int32_t t177 = -142090;

    t177 = (((x745>x746)%x747)/x748);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x751 = -17;
	int64_t x752 = -1452LL;
	int64_t t178 = 30994081431185LL;

    t178 = (((x749>x750)%x751)/x752);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x753 = INT16_MIN;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = UINT64_MAX;
	uint8_t x756 = 7U;
	uint64_t t179 = 41981963025250361LLU;

    t179 = (((x753>x754)%x755)/x756);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x761 = INT64_MIN;
	static int32_t x762 = INT32_MAX;
	int64_t x763 = -1LL;
	static int32_t x764 = 1985;
	int64_t t180 = 968929388159086LL;

    t180 = (((x761>x762)%x763)/x764);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x765 = -197LL;
	static int8_t x766 = -1;
	int16_t x767 = 15;
	int16_t x768 = 5496;
	int32_t t181 = 228;

    t181 = (((x765>x766)%x767)/x768);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x774 = 184U;
	int64_t x775 = -1LL;
	uint32_t x776 = 3838295U;
	int64_t t182 = 30029LL;

    t182 = (((x773>x774)%x775)/x776);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x777 = 22U;
	int8_t x778 = INT8_MIN;
	int16_t x780 = -14634;

    t183 = (((x777>x778)%x779)/x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x781 = 11U;
	static int8_t x783 = 44;
	static uint8_t x784 = 49U;

    t184 = (((x781>x782)%x783)/x784);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x785 = 417052U;
	static volatile uint32_t x787 = 60179U;
	static int64_t x788 = 191797LL;
	int64_t t185 = 1723717718603LL;

    t185 = (((x785>x786)%x787)/x788);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x789 = INT8_MIN;
	static int16_t x791 = -1;
	static int32_t t186 = -104678;

    t186 = (((x789>x790)%x791)/x792);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x796 = UINT8_MAX;
	volatile int32_t t187 = 2051634;

    t187 = (((x793>x794)%x795)/x796);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x797 = 170U;
	static uint16_t x800 = 6507U;
	static volatile int64_t t188 = 7LL;

    t188 = (((x797>x798)%x799)/x800);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x801 = -13651;
	int32_t x802 = INT32_MIN;
	volatile int64_t t189 = -739467LL;

    t189 = (((x801>x802)%x803)/x804);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x805 = 17;
	uint16_t x806 = UINT16_MAX;
	int64_t x807 = 255200238795LL;
	static uint64_t x808 = UINT64_MAX;

    t190 = (((x805>x806)%x807)/x808);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x810 = -1;
	volatile int8_t x811 = INT8_MIN;
	volatile int16_t x812 = INT16_MIN;
	int32_t t191 = -9;

    t191 = (((x809>x810)%x811)/x812);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x813 = 2227121838LL;
	volatile int32_t x814 = -1;
	volatile int64_t x815 = INT64_MAX;
	int8_t x816 = INT8_MIN;
	volatile int64_t t192 = -437LL;

    t192 = (((x813>x814)%x815)/x816);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x817 = INT32_MAX;
	int8_t x818 = -1;
	int64_t x819 = INT64_MAX;
	int16_t x820 = INT16_MAX;
	int64_t t193 = -1988694LL;

    t193 = (((x817>x818)%x819)/x820);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x821 = INT16_MIN;
	uint8_t x822 = 118U;
	volatile uint32_t x823 = 5016U;
	uint16_t x824 = UINT16_MAX;
	volatile uint32_t t194 = 4712148U;

    t194 = (((x821>x822)%x823)/x824);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x825 = UINT64_MAX;
	uint32_t x826 = UINT32_MAX;
	uint32_t x827 = 87U;
	int64_t x828 = 4170399981LL;
	volatile int64_t t195 = -11986LL;

    t195 = (((x825>x826)%x827)/x828);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x829 = -664LL;
	int64_t x830 = INT64_MAX;
	int16_t x831 = 495;
	volatile int16_t x832 = INT16_MIN;
	int32_t t196 = -476;

    t196 = (((x829>x830)%x831)/x832);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x833 = 2079826954LLU;
	uint32_t x834 = UINT32_MAX;
	uint64_t x836 = 3LLU;
	volatile uint64_t t197 = 1182LLU;

    t197 = (((x833>x834)%x835)/x836);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x838 = -1LL;
	int64_t x839 = 35LL;
	int64_t t198 = -2LL;

    t198 = (((x837>x838)%x839)/x840);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x841 = INT8_MAX;
	int8_t x842 = -4;
	int8_t x843 = -1;
	volatile int32_t x844 = INT32_MIN;
	volatile int32_t t199 = -35121254;

    t199 = (((x841>x842)%x843)/x844);

    if (t199 != 0) { NG(); } else { ; }
	
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

