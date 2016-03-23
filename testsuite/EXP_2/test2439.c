
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

static int32_t x1 = -1;
volatile int32_t x2 = 25;
int32_t x4 = INT32_MIN;
int16_t x12 = -1;
uint64_t x17 = UINT64_MAX;
int16_t x19 = -1;
static int32_t t4 = -399049960;
volatile int32_t t6 = -1;
volatile int64_t t7 = INT64_MAX;
int16_t x34 = -1;
int32_t x36 = INT32_MAX;
uint16_t x37 = 1U;
int8_t x38 = INT8_MIN;
uint32_t x43 = 2U;
static int32_t x46 = INT32_MAX;
int32_t x48 = INT32_MAX;
int32_t t12 = 378088;
volatile int64_t x53 = INT64_MAX;
static volatile int32_t t13 = 1;
int64_t t14 = -59692LL;
int32_t x67 = 357;
uint32_t x68 = UINT32_MAX;
uint32_t t16 = UINT32_MAX;
static volatile int64_t x73 = INT64_MIN;
uint64_t x76 = UINT64_MAX;
uint64_t t18 = UINT64_MAX;
volatile uint16_t x82 = UINT16_MAX;
uint64_t x83 = 29511LLU;
static volatile int16_t x85 = INT16_MIN;
uint64_t x92 = UINT64_MAX;
int16_t x93 = -223;
volatile uint32_t x98 = 753769772U;
volatile uint16_t x101 = UINT16_MAX;
int16_t x104 = INT16_MAX;
volatile int32_t t25 = 67674671;
volatile int64_t x110 = INT64_MIN;
uint8_t x111 = UINT8_MAX;
int32_t t27 = 393690;
volatile int16_t x117 = -1;
int64_t x124 = INT64_MIN;
volatile int64_t t30 = INT64_MIN;
static volatile int32_t t33 = INT32_MAX;
int16_t x142 = -1;
uint32_t x157 = 119555U;
int32_t x163 = INT32_MAX;
static int64_t x168 = INT64_MAX;
int64_t x176 = 1799220407LL;
uint16_t x179 = UINT16_MAX;
int32_t t45 = -499;
int8_t x202 = -1;
static volatile uint32_t x203 = UINT32_MAX;
volatile int8_t x208 = INT8_MIN;
volatile uint16_t x215 = 1463U;
static int64_t x216 = -16406724111434022LL;
int64_t t53 = -9777692267527LL;
static volatile uint32_t x219 = UINT32_MAX;
int16_t x220 = INT16_MIN;
volatile int64_t t56 = 831163231522LL;
static int8_t x230 = INT8_MIN;
static int32_t x232 = INT32_MIN;
volatile int8_t x233 = -1;
int16_t x234 = 147;
volatile int32_t t58 = -31;
volatile int16_t x240 = INT16_MAX;
static int64_t t60 = 38703903541169LL;
int8_t x246 = INT8_MAX;
volatile int32_t t61 = 188;
volatile int16_t x249 = 2;
int32_t x250 = 61574731;
int32_t x251 = INT32_MIN;
uint32_t x257 = 6101U;
static volatile int64_t x262 = 1LL;
uint32_t x265 = 2813U;
int64_t x269 = -47LL;
int8_t x270 = INT8_MIN;
uint64_t x274 = 55LLU;
volatile int16_t x278 = INT16_MIN;
int64_t t69 = INT64_MIN;
int64_t x281 = INT64_MIN;
uint16_t x284 = 1U;
static volatile int64_t x285 = 21415LL;
static int16_t x288 = INT16_MIN;
volatile int32_t t72 = 53145;
int8_t x294 = INT8_MIN;
volatile int32_t t73 = -247;
uint32_t x297 = UINT32_MAX;
volatile int8_t x300 = INT8_MAX;
int32_t t74 = -452851117;
static int8_t x302 = INT8_MIN;
int32_t x308 = INT32_MIN;
volatile int32_t t77 = INT32_MAX;
uint64_t x330 = 464LLU;
volatile int32_t x333 = -1;
static uint16_t x343 = UINT16_MAX;
int16_t x345 = INT16_MIN;
volatile int64_t x349 = INT64_MIN;
int64_t x351 = -128LL;
uint8_t x353 = UINT8_MAX;
int64_t x355 = -206974648LL;
int32_t t89 = 1301327;
uint32_t x364 = 9145U;
int32_t x366 = INT32_MIN;
static uint64_t x367 = 651606715411606LLU;
static uint32_t x368 = 98940U;
uint32_t t91 = 815U;
static int8_t x375 = -1;
int32_t t93 = 38332187;
int8_t x379 = -1;
static int32_t x380 = INT32_MIN;
volatile int32_t x385 = 7467484;
uint16_t x390 = 1U;
int8_t x397 = -1;
uint8_t x403 = 0U;
int16_t x405 = 769;
static int64_t x406 = 1118581449468LL;
int8_t x408 = -1;
volatile uint32_t t104 = 50U;
static volatile int32_t x425 = 2084640;
int16_t x428 = INT16_MIN;
int16_t x431 = INT16_MIN;
uint32_t x434 = 73977U;
int16_t x437 = INT16_MIN;
static int32_t x447 = -59348;
int8_t x448 = INT8_MAX;
static int32_t t111 = 0;
int8_t x449 = INT8_MIN;
static uint64_t x452 = 3653384225LLU;
int16_t x456 = 2169;
int8_t x457 = -5;
int32_t x458 = 232286;
static uint32_t t115 = UINT32_MAX;
volatile int64_t x470 = INT64_MIN;
int32_t x473 = INT32_MIN;
volatile int64_t x479 = 887498LL;
static uint8_t x482 = UINT8_MAX;
static volatile int32_t t121 = 4106572;
uint32_t x489 = UINT32_MAX;
volatile int64_t x490 = 55203588LL;
int16_t x492 = -1;
static uint16_t x494 = UINT16_MAX;
int64_t x500 = -1LL;
int32_t x506 = 30458841;
int64_t x515 = INT64_MIN;
volatile int32_t t128 = -112572869;
volatile uint16_t x517 = 29U;
int32_t t129 = -209319541;
uint32_t x524 = 119127448U;
uint16_t x525 = 195U;
uint64_t x530 = 423125200LLU;
int8_t x531 = -1;
static int64_t x533 = INT64_MIN;
int64_t x538 = INT64_MIN;
volatile int64_t x541 = 116755567326084781LL;
static int32_t t135 = -1;
int64_t x546 = INT64_MAX;
volatile int32_t t136 = 107759211;
int32_t x549 = INT32_MAX;
volatile int8_t x550 = INT8_MIN;
int8_t x569 = 0;
static int32_t x571 = INT32_MIN;
int8_t x574 = INT8_MIN;
volatile int16_t x575 = -2;
uint8_t x583 = 0U;
volatile int32_t t145 = -2426513;
int32_t t147 = -195858;
static uint16_t x594 = 6U;
volatile int64_t t149 = -1314572580312443LL;
volatile uint64_t t151 = 21481408112760LLU;
int32_t x619 = INT32_MIN;
static volatile int64_t t154 = 391216LL;
uint32_t x622 = 1433416201U;
static int8_t x626 = INT8_MIN;
uint16_t x627 = 2U;
volatile int64_t x630 = INT64_MAX;
static uint64_t x633 = 1786227874087165767LLU;
uint8_t x634 = 40U;
static int32_t t158 = 828653;
uint16_t x640 = UINT16_MAX;
int32_t x641 = INT32_MIN;
static int8_t x642 = 3;
volatile int64_t x648 = INT64_MAX;
int32_t x649 = INT32_MIN;
volatile uint8_t x650 = UINT8_MAX;
uint64_t x655 = 281094964446LLU;
int32_t x656 = -1;
int32_t x658 = INT32_MIN;
static int16_t x659 = 5;
int16_t x664 = 53;
uint8_t x667 = 7U;
int16_t x671 = 100;
volatile uint8_t x678 = 24U;
uint16_t x682 = 162U;
static int32_t x685 = -1;
int32_t x687 = -1;
int16_t x698 = -3;
int8_t x707 = INT8_MIN;
volatile uint32_t t177 = 706U;
static int32_t t178 = 887647912;
int32_t t179 = 41175532;
int64_t t180 = INT64_MIN;
int8_t x725 = INT8_MIN;
uint16_t x726 = 7U;
static int8_t x731 = -1;
int32_t t184 = 49330013;
int8_t x748 = INT8_MIN;
volatile int32_t t188 = 418;
int16_t x759 = -1;
int32_t x760 = -1;
static volatile int64_t x764 = -1LL;
int32_t x766 = INT32_MIN;
uint16_t x768 = 0U;
volatile int32_t x770 = -1;
int8_t x772 = -1;
volatile int32_t t192 = -10753;
int16_t x773 = INT16_MIN;
int64_t x774 = INT64_MIN;
uint32_t x779 = UINT32_MAX;
static int8_t x783 = INT8_MIN;
int8_t x785 = INT8_MIN;
static int16_t x789 = 157;
static int16_t x791 = INT16_MAX;


void f0(void) {
    	static volatile uint64_t x3 = 4656933173885103072LLU;
	static volatile int32_t t0 = INT32_MIN;

    t0 = ((x1!=(x2|x3))*x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = 13;
	volatile int32_t t1 = 168506;

    t1 = ((x5!=(x6|x7))*x8);

    if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int8_t x10 = 27;
	int32_t x11 = -1;
	static int32_t t2 = 110798600;

    t2 = ((x9!=(x10|x11))*x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int32_t x14 = -1;
	int8_t x15 = -44;
	int64_t x16 = -534100687156329LL;
	static volatile int64_t t3 = -4349924LL;

    t3 = ((x13!=(x14|x15))*x16);

    if (t3 != -534100687156329LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MAX;
	static int32_t x20 = INT32_MIN;

    t4 = ((x17!=(x18|x19))*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 1202;
	int64_t x22 = INT64_MIN;
	volatile int32_t x23 = -77326733;
	static int32_t x24 = -28955;
	int32_t t5 = -6491;

    t5 = ((x21!=(x22|x23))*x24);

    if (t5 != -28955) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 5U;
	int16_t x28 = 0;

    t6 = ((x25!=(x26|x27))*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MAX;

    t7 = ((x29!=(x30|x31))*x32);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static uint8_t x35 = 102U;
	volatile int32_t t8 = INT32_MAX;

    t8 = ((x33!=(x34|x35))*x36);

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x39 = 22U;
	static int8_t x40 = INT8_MAX;
	static int32_t t9 = 4093015;

    t9 = ((x37!=(x38|x39))*x40);

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint16_t x42 = UINT16_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = INT32_MIN;

    t10 = ((x41!=(x42|x43))*x44);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 106316735907525LLU;
	volatile int64_t x47 = 1LL;
	int32_t t11 = INT32_MAX;

    t11 = ((x45!=(x46|x47))*x48);

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = 25;
	static volatile int16_t x50 = -2;
	int8_t x51 = 7;
	uint8_t x52 = 15U;

    t12 = ((x49!=(x50|x51))*x52);

    if (t12 != 15) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int32_t x56 = -1;

    t13 = ((x53!=(x54|x55))*x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = UINT32_MAX;
	int64_t x58 = -1LL;
	uint16_t x59 = 239U;
	int64_t x60 = -1LL;

    t14 = ((x57!=(x58|x59))*x60);

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 5U;
	uint64_t x62 = 210643346550876856LLU;
	uint16_t x63 = 3U;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 827382290;

    t15 = ((x61!=(x62|x63))*x64);

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MIN;

    t16 = ((x65!=(x66|x67))*x68);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	static uint64_t x70 = 183355867LLU;
	int8_t x71 = 44;
	static volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -206598047;

    t17 = ((x69!=(x70|x71))*x72);

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = -1;
	uint64_t x75 = 5508LLU;

    t18 = ((x73!=(x74|x75))*x76);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	int64_t x78 = -2LL;
	int32_t x79 = -2;
	uint64_t x80 = 8LLU;
	static uint64_t t19 = 6219LLU;

    t19 = ((x77!=(x78|x79))*x80);

    if (t19 != 8LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 1;
	static uint64_t x84 = 6295LLU;
	volatile uint64_t t20 = 19LLU;

    t20 = ((x81!=(x82|x83))*x84);

    if (t20 != 6295LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -1;
	int32_t x87 = 0;
	volatile int64_t x88 = 0LL;
	int64_t t21 = -3287156231LL;

    t21 = ((x85!=(x86|x87))*x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -2279;
	int16_t x90 = 412;
	uint16_t x91 = UINT16_MAX;
	static uint64_t t22 = UINT64_MAX;

    t22 = ((x89!=(x90|x91))*x92);

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	volatile uint32_t x95 = UINT32_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -79;

    t23 = ((x93!=(x94|x95))*x96);

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = 14558645;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = -7;
	static int32_t t24 = -3769;

    t24 = ((x97!=(x98|x99))*x100);

    if (t24 != -7) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -343164LL;
	volatile int8_t x103 = INT8_MAX;

    t25 = ((x101!=(x102|x103))*x104);

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x105 = -69773727341LL;
	int8_t x106 = -1;
	int64_t x107 = -1634816LL;
	static int16_t x108 = 11;
	volatile int32_t t26 = -52645277;

    t26 = ((x105!=(x106|x107))*x108);

    if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 29140786U;
	int8_t x112 = INT8_MIN;

    t27 = ((x109!=(x110|x111))*x112);

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x114 = 144576U;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t28 = INT32_MAX;

    t28 = ((x113!=(x114|x115))*x116);

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = 428;
	static int32_t x119 = -1;
	static int64_t x120 = 4136364094LL;
	volatile int64_t t29 = 33972546982692LL;

    t29 = ((x117!=(x118|x119))*x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 10059LLU;
	int8_t x122 = -1;
	int32_t x123 = INT32_MIN;

    t30 = ((x121!=(x122|x123))*x124);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	int8_t x126 = 48;
	int32_t x127 = INT32_MAX;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 537483;

    t31 = ((x125!=(x126|x127))*x128);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = 1961;
	int8_t x130 = INT8_MIN;
	int16_t x131 = 1;
	uint8_t x132 = UINT8_MAX;
	static int32_t t32 = -307123;

    t32 = ((x129!=(x130|x131))*x132);

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 0U;
	int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	static int32_t x136 = INT32_MAX;

    t33 = ((x133!=(x134|x135))*x136);

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 7414LL;
	uint64_t x138 = 148303978LLU;
	static uint32_t x139 = 17U;
	uint32_t x140 = 9899U;
	uint32_t t34 = 19U;

    t34 = ((x137!=(x138|x139))*x140);

    if (t34 != 9899U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x141 = 5;
	int32_t x143 = INT32_MIN;
	static uint32_t x144 = UINT32_MAX;
	uint32_t t35 = UINT32_MAX;

    t35 = ((x141!=(x142|x143))*x144);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = UINT32_MAX;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	static volatile int64_t x148 = INT64_MAX;
	int64_t t36 = INT64_MAX;

    t36 = ((x145!=(x146|x147))*x148);

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 2563U;
	static volatile int32_t x150 = INT32_MAX;
	static int32_t x151 = INT32_MIN;
	volatile int8_t x152 = -1;
	volatile int32_t t37 = 7007;

    t37 = ((x149!=(x150|x151))*x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 401833155;
	volatile uint64_t x154 = 201LLU;
	static int16_t x155 = 58;
	int8_t x156 = INT8_MAX;
	int32_t t38 = -165323110;

    t38 = ((x153!=(x154|x155))*x156);

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x158 = INT8_MAX;
	uint64_t x159 = 2011632793968677905LLU;
	int8_t x160 = -1;
	int32_t t39 = -91;

    t39 = ((x157!=(x158|x159))*x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MIN;
	volatile int32_t x162 = INT32_MAX;
	uint64_t x164 = UINT64_MAX;
	uint64_t t40 = UINT64_MAX;

    t40 = ((x161!=(x162|x163))*x164);

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	int64_t x166 = -1LL;
	static int64_t x167 = INT64_MAX;
	static volatile int64_t t41 = INT64_MAX;

    t41 = ((x165!=(x166|x167))*x168);

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	static int8_t x170 = INT8_MIN;
	uint32_t x171 = 31436U;
	static int16_t x172 = 23;
	static int32_t t42 = -297;

    t42 = ((x169!=(x170|x171))*x172);

    if (t42 != 23) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -8930;
	uint32_t x174 = 36332U;
	int16_t x175 = INT16_MIN;
	static volatile int64_t t43 = 24538163002LL;

    t43 = ((x173!=(x174|x175))*x176);

    if (t43 != 1799220407LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 1U;
	uint8_t x178 = 13U;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = 7725;

    t44 = ((x177!=(x178|x179))*x180);

    if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	uint64_t x182 = 7527324462885160801LLU;
	uint32_t x183 = 846U;
	uint8_t x184 = 4U;

    t45 = ((x181!=(x182|x183))*x184);

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x185 = 6053;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = 30U;
	int32_t x188 = INT32_MIN;
	int32_t t46 = INT32_MIN;

    t46 = ((x185!=(x186|x187))*x188);

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = 106150U;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = 7U;
	volatile int32_t x192 = -1;
	int32_t t47 = -120;

    t47 = ((x189!=(x190|x191))*x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	volatile int8_t x194 = -1;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -625558174;

    t48 = ((x193!=(x194|x195))*x196);

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = 20;
	volatile int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	int64_t x200 = INT64_MIN;
	static volatile int64_t t49 = INT64_MIN;

    t49 = ((x197!=(x198|x199))*x200);

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 5LL;
	uint64_t x204 = 0LLU;
	volatile uint64_t t50 = 4212298278677584661LLU;

    t50 = ((x201!=(x202|x203))*x204);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -766029503924228333LL;
	uint32_t x206 = UINT32_MAX;
	uint16_t x207 = 1U;
	volatile int32_t t51 = 6909;

    t51 = ((x205!=(x206|x207))*x208);

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	volatile int32_t x210 = INT32_MIN;
	static uint8_t x211 = UINT8_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = 91;

    t52 = ((x209!=(x210|x211))*x212);

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 13U;
	int16_t x214 = INT16_MIN;

    t53 = ((x213!=(x214|x215))*x216);

    if (t53 != -16406724111434022LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = -149427LL;
	int64_t x218 = -13979682LL;
	volatile int32_t t54 = -1918561;

    t54 = ((x217!=(x218|x219))*x220);

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 1090U;
	int8_t x224 = -1;
	static volatile int32_t t55 = -975;

    t55 = ((x221!=(x222|x223))*x224);

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	int64_t x226 = 626LL;
	static int8_t x227 = -1;
	static int64_t x228 = INT64_MIN;

    t56 = ((x225!=(x226|x227))*x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 1763870312LLU;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t57 = INT32_MIN;

    t57 = ((x229!=(x230|x231))*x232);

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x235 = 2U;
	uint8_t x236 = 1U;

    t58 = ((x233!=(x234|x235))*x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -50;
	int16_t x238 = -1;
	int64_t x239 = INT64_MIN;
	int32_t t59 = 14644;

    t59 = ((x237!=(x238|x239))*x240);

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MIN;
	int64_t x244 = 696198110LL;

    t60 = ((x241!=(x242|x243))*x244);

    if (t60 != 696198110LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	int8_t x247 = -18;
	int16_t x248 = INT16_MIN;

    t61 = ((x245!=(x246|x247))*x248);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x252 = INT8_MAX;
	static volatile int32_t t62 = -255;

    t62 = ((x249!=(x250|x251))*x252);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = UINT32_MAX;
	int64_t x254 = INT64_MIN;
	volatile int64_t x255 = 641204LL;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 1428;

    t63 = ((x253!=(x254|x255))*x256);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = 71767LLU;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = -1;
	int32_t t64 = 10900;

    t64 = ((x257!=(x258|x259))*x260);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 7702130900138LL;
	static int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MAX;
	int64_t t65 = INT64_MAX;

    t65 = ((x261!=(x262|x263))*x264);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x266 = 124U;
	static int16_t x267 = -1;
	static int64_t x268 = 13399LL;
	int64_t t66 = 54234847148372470LL;

    t66 = ((x265!=(x266|x267))*x268);

    if (t66 != 13399LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x271 = UINT64_MAX;
	int32_t x272 = 83;
	volatile int32_t t67 = -115508;

    t67 = ((x269!=(x270|x271))*x272);

    if (t67 != 83) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -329;
	int64_t x275 = -2197675155857258LL;
	int8_t x276 = -23;
	static volatile int32_t t68 = -125944;

    t68 = ((x273!=(x274|x275))*x276);

    if (t68 != -23) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 1569U;
	static int64_t x279 = 379448049949LL;
	volatile int64_t x280 = INT64_MIN;

    t69 = ((x277!=(x278|x279))*x280);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = 3994U;
	static int8_t x283 = INT8_MAX;
	int32_t t70 = -254;

    t70 = ((x281!=(x282|x283))*x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x286 = INT16_MIN;
	int64_t x287 = 24686398LL;
	volatile int32_t t71 = 6;

    t71 = ((x285!=(x286|x287))*x288);

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MAX;
	uint8_t x291 = 14U;
	int8_t x292 = INT8_MIN;

    t72 = ((x289!=(x290|x291))*x292);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x295 = 21510301146LLU;
	uint8_t x296 = 11U;

    t73 = ((x293!=(x294|x295))*x296);

    if (t73 != 11) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = -3213LL;
	int16_t x299 = INT16_MIN;

    t74 = ((x297!=(x298|x299))*x300);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 7U;
	int16_t x303 = -7492;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = INT32_MIN;

    t75 = ((x301!=(x302|x303))*x304);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 108U;
	int64_t x306 = INT64_MAX;
	static int64_t x307 = INT64_MIN;
	int32_t t76 = INT32_MIN;

    t76 = ((x305!=(x306|x307))*x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	uint16_t x310 = 17961U;
	static int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MAX;

    t77 = ((x309!=(x310|x311))*x312);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	uint16_t x314 = 337U;
	uint8_t x315 = 1U;
	uint8_t x316 = 1U;
	volatile int32_t t78 = 169980173;

    t78 = ((x313!=(x314|x315))*x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MAX;
	int8_t x319 = 0;
	volatile uint64_t x320 = 118LLU;
	uint64_t t79 = 4866068919581LLU;

    t79 = ((x317!=(x318|x319))*x320);

    if (t79 != 118LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 739;
	uint8_t x322 = 31U;
	int32_t x323 = -1;
	int8_t x324 = INT8_MAX;
	int32_t t80 = -145756367;

    t80 = ((x321!=(x322|x323))*x324);

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MAX;
	volatile int16_t x327 = 1;
	int64_t x328 = INT64_MIN;
	int64_t t81 = INT64_MIN;

    t81 = ((x325!=(x326|x327))*x328);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = INT32_MAX;
	static int16_t x331 = INT16_MIN;
	int32_t x332 = 10;
	int32_t t82 = 3296;

    t82 = ((x329!=(x330|x331))*x332);

    if (t82 != 10) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = 14201920938123836LL;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	int32_t t83 = -8307;

    t83 = ((x333!=(x334|x335))*x336);

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t84 = -775900;

    t84 = ((x337!=(x338|x339))*x340);

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MIN;
	volatile int32_t x344 = -1;
	int32_t t85 = 512970;

    t85 = ((x341!=(x342|x343))*x344);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x346 = 98U;
	int8_t x347 = 3;
	int64_t x348 = -1LL;
	static int64_t t86 = -356079LL;

    t86 = ((x345!=(x346|x347))*x348);

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x350 = 1;
	int8_t x352 = -1;
	int32_t t87 = -1;

    t87 = ((x349!=(x350|x351))*x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MAX;
	volatile int8_t x356 = 55;
	int32_t t88 = 133253;

    t88 = ((x353!=(x354|x355))*x356);

    if (t88 != 55) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	static int32_t x358 = -1;
	int16_t x359 = -1239;
	int8_t x360 = -4;

    t89 = ((x357!=(x358|x359))*x360);

    if (t89 != -4) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	volatile int64_t x362 = INT64_MIN;
	int64_t x363 = 1293LL;
	volatile uint32_t t90 = 26566557U;

    t90 = ((x361!=(x362|x363))*x364);

    if (t90 != 9145U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = -1;

    t91 = ((x365!=(x366|x367))*x368);

    if (t91 != 98940U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -20;
	volatile int32_t x370 = 30263;
	static int16_t x371 = -1;
	uint16_t x372 = 2U;
	volatile int32_t t92 = -938227348;

    t92 = ((x369!=(x370|x371))*x372);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = 5U;
	uint16_t x374 = 1U;
	int8_t x376 = INT8_MAX;

    t93 = ((x373!=(x374|x375))*x376);

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	int64_t x378 = 28333LL;
	volatile int32_t t94 = INT32_MIN;

    t94 = ((x377!=(x378|x379))*x380);

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = -1;
	int64_t x382 = 172851LL;
	int8_t x383 = -1;
	int16_t x384 = -14;
	int32_t t95 = 17;

    t95 = ((x381!=(x382|x383))*x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -1;
	uint16_t x387 = 7629U;
	int32_t x388 = INT32_MIN;
	int32_t t96 = INT32_MIN;

    t96 = ((x385!=(x386|x387))*x388);

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -227233;
	int64_t x391 = -1LL;
	int8_t x392 = 7;
	int32_t t97 = 763;

    t97 = ((x389!=(x390|x391))*x392);

    if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 1;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile uint32_t x396 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

    t98 = ((x393!=(x394|x395))*x396);

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x398 = INT64_MAX;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = 0U;
	static uint32_t t99 = 231969U;

    t99 = ((x397!=(x398|x399))*x400);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 8676;
	int32_t x402 = 251902;
	uint16_t x404 = 1397U;
	static int32_t t100 = -17581;

    t100 = ((x401!=(x402|x403))*x404);

    if (t100 != 1397) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x407 = -1;
	static volatile int32_t t101 = -32933810;

    t101 = ((x405!=(x406|x407))*x408);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MAX;
	volatile int16_t x411 = INT16_MIN;
	volatile int64_t x412 = -32102838201LL;
	int64_t t102 = -22752LL;

    t102 = ((x409!=(x410|x411))*x412);

    if (t102 != -32102838201LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -3619966LL;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = 1U;
	uint64_t x416 = UINT64_MAX;
	static volatile uint64_t t103 = UINT64_MAX;

    t103 = ((x413!=(x414|x415))*x416);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	static uint32_t x420 = UINT32_MAX;

    t104 = ((x417!=(x418|x419))*x420);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = 273841573425211LL;
	uint32_t x422 = 818U;
	static int32_t x423 = INT32_MIN;
	int8_t x424 = -1;
	volatile int32_t t105 = -15;

    t105 = ((x421!=(x422|x423))*x424);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x426 = -1LL;
	static int16_t x427 = -3;
	int32_t t106 = -10;

    t106 = ((x425!=(x426|x427))*x428);

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 2U;
	uint32_t x430 = UINT32_MAX;
	int64_t x432 = -2743449442650LL;
	static volatile int64_t t107 = 1753294424128101677LL;

    t107 = ((x429!=(x430|x431))*x432);

    if (t107 != -2743449442650LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -124292735293LL;
	uint32_t x435 = UINT32_MAX;
	uint8_t x436 = UINT8_MAX;
	static volatile int32_t t108 = 117;

    t108 = ((x433!=(x434|x435))*x436);

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 0LLU;
	int16_t x439 = 1;
	int64_t x440 = INT64_MIN;
	volatile int64_t t109 = INT64_MIN;

    t109 = ((x437!=(x438|x439))*x440);

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = UINT32_MAX;
	static uint32_t x442 = UINT32_MAX;
	uint16_t x443 = UINT16_MAX;
	volatile int32_t x444 = -1;
	int32_t t110 = -22167172;

    t110 = ((x441!=(x442|x443))*x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = 5;
	int16_t x446 = -2626;

    t111 = ((x445!=(x446|x447))*x448);

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x450 = UINT8_MAX;
	uint8_t x451 = UINT8_MAX;
	uint64_t t112 = 6718LLU;

    t112 = ((x449!=(x450|x451))*x452);

    if (t112 != 3653384225LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	int16_t x454 = 8;
	int32_t x455 = INT32_MIN;
	static volatile int32_t t113 = 0;

    t113 = ((x453!=(x454|x455))*x456);

    if (t113 != 2169) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x459 = INT8_MIN;
	volatile int32_t x460 = INT32_MIN;
	int32_t t114 = INT32_MIN;

    t114 = ((x457!=(x458|x459))*x460);

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	volatile uint8_t x462 = 3U;
	uint16_t x463 = 2U;
	uint32_t x464 = UINT32_MAX;

    t115 = ((x461!=(x462|x463))*x464);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	int32_t x466 = -1;
	volatile int32_t x467 = INT32_MAX;
	int32_t x468 = -252;
	volatile int32_t t116 = -815;

    t116 = ((x465!=(x466|x467))*x468);

    if (t116 != -252) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 7301U;
	volatile int32_t x471 = -1;
	int8_t x472 = -5;
	volatile int32_t t117 = 1058727944;

    t117 = ((x469!=(x470|x471))*x472);

    if (t117 != -5) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = 7401699265LL;
	int16_t x475 = -1;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = INT32_MIN;

    t118 = ((x473!=(x474|x475))*x476);

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = -1LL;
	int16_t x478 = -1;
	int16_t x480 = INT16_MIN;
	volatile int32_t t119 = 5;

    t119 = ((x477!=(x478|x479))*x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 3392LLU;
	uint16_t x483 = UINT16_MAX;
	int8_t x484 = -25;
	int32_t t120 = -509;

    t120 = ((x481!=(x482|x483))*x484);

    if (t120 != -25) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	static uint32_t x486 = 113384U;
	static uint64_t x487 = UINT64_MAX;
	int16_t x488 = -1;

    t121 = ((x485!=(x486|x487))*x488);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x491 = UINT64_MAX;
	volatile int32_t t122 = 1630257;

    t122 = ((x489!=(x490|x491))*x492);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = -1LL;
	uint64_t x495 = 7608565069643567077LLU;
	int32_t x496 = INT32_MIN;
	int32_t t123 = INT32_MIN;

    t123 = ((x493!=(x494|x495))*x496);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 3U;
	static int8_t x498 = 6;
	volatile uint32_t x499 = 4054U;
	static volatile int64_t t124 = -10370LL;

    t124 = ((x497!=(x498|x499))*x500);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = INT8_MIN;
	uint8_t x502 = UINT8_MAX;
	uint16_t x503 = UINT16_MAX;
	int8_t x504 = -1;
	volatile int32_t t125 = 1;

    t125 = ((x501!=(x502|x503))*x504);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -13;
	uint32_t x507 = 57736421U;
	uint8_t x508 = 6U;
	int32_t t126 = -2074069;

    t126 = ((x505!=(x506|x507))*x508);

    if (t126 != 6) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = 7849931U;
	uint16_t x510 = 1U;
	volatile uint64_t x511 = 13964452629LLU;
	uint16_t x512 = UINT16_MAX;
	int32_t t127 = 1;

    t127 = ((x509!=(x510|x511))*x512);

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	volatile int64_t x514 = -1LL;
	int16_t x516 = -1;

    t128 = ((x513!=(x514|x515))*x516);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x518 = 22787U;
	uint32_t x519 = 16298U;
	int8_t x520 = -16;

    t129 = ((x517!=(x518|x519))*x520);

    if (t129 != -16) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	static uint64_t x522 = UINT64_MAX;
	volatile uint64_t x523 = UINT64_MAX;
	uint32_t t130 = 2008502U;

    t130 = ((x521!=(x522|x523))*x524);

    if (t130 != 119127448U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x526 = -1;
	static uint32_t x527 = 49175U;
	uint32_t x528 = 155U;
	uint32_t t131 = 3392U;

    t131 = ((x525!=(x526|x527))*x528);

    if (t131 != 155U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	uint64_t x532 = 11787LLU;
	uint64_t t132 = 1806011162849510025LLU;

    t132 = ((x529!=(x530|x531))*x532);

    if (t132 != 11787LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x534 = 3U;
	volatile uint16_t x535 = 1716U;
	volatile int32_t x536 = INT32_MAX;
	volatile int32_t t133 = INT32_MAX;

    t133 = ((x533!=(x534|x535))*x536);

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	static int32_t x540 = -1;
	int32_t t134 = 2306;

    t134 = ((x537!=(x538|x539))*x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x542 = -1LL;
	int16_t x543 = INT16_MAX;
	uint8_t x544 = 6U;

    t135 = ((x541!=(x542|x543))*x544);

    if (t135 != 6) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint16_t x545 = 4U;
	static uint32_t x547 = UINT32_MAX;
	int16_t x548 = -1;

    t136 = ((x545!=(x546|x547))*x548);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x551 = INT64_MIN;
	int8_t x552 = INT8_MIN;
	volatile int32_t t137 = 3;

    t137 = ((x549!=(x550|x551))*x552);

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = INT16_MIN;
	int16_t x554 = INT16_MIN;
	static int8_t x555 = INT8_MIN;
	uint16_t x556 = 32U;
	volatile int32_t t138 = -16661762;

    t138 = ((x553!=(x554|x555))*x556);

    if (t138 != 32) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MIN;
	static uint32_t x558 = 905989004U;
	int8_t x559 = INT8_MIN;
	volatile int32_t x560 = 617379;
	volatile int32_t t139 = 0;

    t139 = ((x557!=(x558|x559))*x560);

    if (t139 != 617379) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	int64_t x562 = 18067149LL;
	int16_t x563 = -1362;
	int64_t x564 = -1LL;
	int64_t t140 = 5837LL;

    t140 = ((x561!=(x562|x563))*x564);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 8U;
	int16_t x566 = -1;
	int32_t x567 = INT32_MAX;
	static uint16_t x568 = 29424U;
	int32_t t141 = 340085;

    t141 = ((x565!=(x566|x567))*x568);

    if (t141 != 29424) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = INT32_MAX;
	static int32_t x572 = 2232;
	int32_t t142 = 262;

    t142 = ((x569!=(x570|x571))*x572);

    if (t142 != 2232) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = -1LL;
	int16_t x576 = -1;
	int32_t t143 = -5;

    t143 = ((x573!=(x574|x575))*x576);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	int8_t x578 = INT8_MIN;
	volatile int16_t x579 = 3704;
	uint16_t x580 = 13U;
	volatile int32_t t144 = -247435637;

    t144 = ((x577!=(x578|x579))*x580);

    if (t144 != 13) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = INT64_MIN;
	int16_t x582 = INT16_MIN;
	uint16_t x584 = 0U;

    t145 = ((x581!=(x582|x583))*x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = -1;
	static volatile uint8_t x586 = 85U;
	int16_t x587 = 54;
	uint64_t x588 = 26006985411362LLU;
	volatile uint64_t t146 = 1009939238519LLU;

    t146 = ((x585!=(x586|x587))*x588);

    if (t146 != 26006985411362LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = UINT8_MAX;
	uint16_t x590 = 2652U;
	int16_t x591 = -1;
	volatile int8_t x592 = -1;

    t147 = ((x589!=(x590|x591))*x592);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	int64_t x595 = -1LL;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = INT32_MIN;

    t148 = ((x593!=(x594|x595))*x596);

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	uint32_t x598 = 178U;
	int8_t x599 = 56;
	int64_t x600 = -1LL;

    t149 = ((x597!=(x598|x599))*x600);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	int32_t x602 = INT32_MAX;
	static uint16_t x603 = UINT16_MAX;
	uint16_t x604 = 0U;
	int32_t t150 = -170443;

    t150 = ((x601!=(x602|x603))*x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 6268236634389LLU;
	uint16_t x606 = UINT16_MAX;
	int32_t x607 = 238002;
	static uint64_t x608 = 5916112LLU;

    t151 = ((x605!=(x606|x607))*x608);

    if (t151 != 5916112LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = INT64_MAX;
	int16_t x610 = -459;
	int16_t x611 = INT16_MIN;
	int64_t x612 = -7555900LL;
	volatile int64_t t152 = 18LL;

    t152 = ((x609!=(x610|x611))*x612);

    if (t152 != -7555900LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 768354257574LLU;
	int64_t x614 = INT64_MAX;
	static int64_t x615 = INT64_MAX;
	uint16_t x616 = UINT16_MAX;
	volatile int32_t t153 = -13397476;

    t153 = ((x613!=(x614|x615))*x616);

    if (t153 != 65535) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -1;
	int32_t x618 = INT32_MIN;
	int64_t x620 = 4443LL;

    t154 = ((x617!=(x618|x619))*x620);

    if (t154 != 4443LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = -1;
	uint8_t x623 = 2U;
	static uint32_t x624 = 96853U;
	uint32_t t155 = 15U;

    t155 = ((x621!=(x622|x623))*x624);

    if (t155 != 96853U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 4;
	int8_t x628 = 5;
	int32_t t156 = -1;

    t156 = ((x625!=(x626|x627))*x628);

    if (t156 != 5) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = -1LL;
	uint64_t x631 = UINT64_MAX;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t157 = -4924924;

    t157 = ((x629!=(x630|x631))*x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x635 = -2;
	uint16_t x636 = 23591U;

    t158 = ((x633!=(x634|x635))*x636);

    if (t158 != 23591) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int16_t x638 = -254;
	static int8_t x639 = -56;
	int32_t t159 = -6282157;

    t159 = ((x637!=(x638|x639))*x640);

    if (t159 != 65535) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x643 = UINT64_MAX;
	int8_t x644 = INT8_MIN;
	volatile int32_t t160 = -450302;

    t160 = ((x641!=(x642|x643))*x644);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	uint8_t x646 = 36U;
	static volatile int8_t x647 = -1;
	volatile int64_t t161 = INT64_MAX;

    t161 = ((x645!=(x646|x647))*x648);

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x651 = INT64_MAX;
	uint64_t x652 = 854LLU;
	static volatile uint64_t t162 = 663LLU;

    t162 = ((x649!=(x650|x651))*x652);

    if (t162 != 854LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MAX;
	static uint32_t x654 = 30U;
	int32_t t163 = -39487062;

    t163 = ((x653!=(x654|x655))*x656);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = INT32_MAX;

    t164 = ((x657!=(x658|x659))*x660);

    if (t164 != INT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = 77839977;
	int64_t x663 = INT64_MIN;
	volatile int32_t t165 = -1;

    t165 = ((x661!=(x662|x663))*x664);

    if (t165 != 53) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 1286200436U;
	static int32_t x666 = 8146;
	volatile int8_t x668 = 1;
	int32_t t166 = 27464980;

    t166 = ((x665!=(x666|x667))*x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 1181U;
	int8_t x670 = 0;
	volatile int32_t x672 = INT32_MIN;
	static volatile int32_t t167 = INT32_MIN;

    t167 = ((x669!=(x670|x671))*x672);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MIN;
	volatile int8_t x674 = -1;
	volatile int16_t x675 = -171;
	static int64_t x676 = INT64_MIN;
	static volatile int64_t t168 = INT64_MIN;

    t168 = ((x673!=(x674|x675))*x676);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	uint64_t x679 = UINT64_MAX;
	int8_t x680 = -1;
	volatile int32_t t169 = 749423;

    t169 = ((x677!=(x678|x679))*x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 83U;
	int8_t x683 = -48;
	int64_t x684 = -13210845LL;
	volatile int64_t t170 = -18997673402LL;

    t170 = ((x681!=(x682|x683))*x684);

    if (t170 != -13210845LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x686 = 162349U;
	int64_t x688 = 90949LL;
	static int64_t t171 = 863524884419LL;

    t171 = ((x685!=(x686|x687))*x688);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 121U;
	int64_t x690 = INT64_MIN;
	int16_t x691 = -1;
	int64_t x692 = -1LL;
	int64_t t172 = -2160690LL;

    t172 = ((x689!=(x690|x691))*x692);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = 4;
	static uint32_t x694 = 13U;
	int8_t x695 = INT8_MIN;
	static int32_t x696 = -1;
	int32_t t173 = 0;

    t173 = ((x693!=(x694|x695))*x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	static int32_t x699 = -1;
	static uint8_t x700 = UINT8_MAX;
	static int32_t t174 = -17;

    t174 = ((x697!=(x698|x699))*x700);

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	int8_t x702 = -1;
	int16_t x703 = 32;
	volatile uint32_t x704 = 91U;
	uint32_t t175 = 1270864U;

    t175 = ((x701!=(x702|x703))*x704);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	int8_t x706 = INT8_MIN;
	volatile int16_t x708 = -711;
	static volatile int32_t t176 = -4;

    t176 = ((x705!=(x706|x707))*x708);

    if (t176 != -711) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 112U;
	static int64_t x710 = INT64_MAX;
	int8_t x711 = -2;
	volatile uint32_t x712 = 129880U;

    t177 = ((x709!=(x710|x711))*x712);

    if (t177 != 129880U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	volatile int16_t x714 = -1;
	int64_t x715 = 101576LL;
	uint8_t x716 = UINT8_MAX;

    t178 = ((x713!=(x714|x715))*x716);

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile uint32_t x718 = 437306175U;
	volatile int8_t x719 = INT8_MAX;
	int16_t x720 = -288;

    t179 = ((x717!=(x718|x719))*x720);

    if (t179 != -288) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x721 = 2U;
	uint32_t x722 = UINT32_MAX;
	int64_t x723 = -1LL;
	int64_t x724 = INT64_MIN;

    t180 = ((x721!=(x722|x723))*x724);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x727 = UINT16_MAX;
	int16_t x728 = INT16_MIN;
	int32_t t181 = -188;

    t181 = ((x725!=(x726|x727))*x728);

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint64_t x730 = 61862550205381LLU;
	int32_t x732 = INT32_MAX;
	static int32_t t182 = INT32_MAX;

    t182 = ((x729!=(x730|x731))*x732);

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint8_t x733 = 12U;
	int32_t x734 = INT32_MIN;
	int64_t x735 = 29389LL;
	static uint8_t x736 = 124U;
	int32_t t183 = 382;

    t183 = ((x733!=(x734|x735))*x736);

    if (t183 != 124) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 18095232657LLU;
	uint32_t x738 = UINT32_MAX;
	uint64_t x739 = UINT64_MAX;
	static volatile uint16_t x740 = UINT16_MAX;

    t184 = ((x737!=(x738|x739))*x740);

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	int64_t x742 = INT64_MIN;
	uint64_t x743 = UINT64_MAX;
	int16_t x744 = INT16_MAX;
	volatile int32_t t185 = -20342371;

    t185 = ((x741!=(x742|x743))*x744);

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	volatile uint8_t x746 = 0U;
	volatile uint16_t x747 = 1U;
	volatile int32_t t186 = 404;

    t186 = ((x745!=(x746|x747))*x748);

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	uint32_t x750 = UINT32_MAX;
	int64_t x751 = -272885024LL;
	int16_t x752 = -1757;
	int32_t t187 = -203337116;

    t187 = ((x749!=(x750|x751))*x752);

    if (t187 != -1757) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x754 = -1LL;
	int64_t x755 = INT64_MIN;
	volatile int32_t x756 = 699;

    t188 = ((x753!=(x754|x755))*x756);

    if (t188 != 699) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	static uint16_t x758 = UINT16_MAX;
	int32_t t189 = 1;

    t189 = ((x757!=(x758|x759))*x760);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	int32_t x762 = INT32_MIN;
	static uint64_t x763 = 22534423145LLU;
	volatile int64_t t190 = 2403330436999810992LL;

    t190 = ((x761!=(x762|x763))*x764);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x765 = 6U;
	int16_t x767 = 3227;
	volatile int32_t t191 = -16147565;

    t191 = ((x765!=(x766|x767))*x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = -246;
	int64_t x771 = INT64_MAX;

    t192 = ((x769!=(x770|x771))*x772);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x775 = 759U;
	static int16_t x776 = INT16_MIN;
	int32_t t193 = -508459574;

    t193 = ((x773!=(x774|x775))*x776);

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	volatile uint64_t x778 = 125208LLU;
	int8_t x780 = -7;
	int32_t t194 = -75;

    t194 = ((x777!=(x778|x779))*x780);

    if (t194 != -7) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	static uint16_t x782 = UINT16_MAX;
	static int32_t x784 = INT32_MIN;
	int32_t t195 = INT32_MIN;

    t195 = ((x781!=(x782|x783))*x784);

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = 1;
	volatile uint16_t x787 = 14906U;
	int32_t x788 = 224438245;
	static int32_t t196 = -9465729;

    t196 = ((x785!=(x786|x787))*x788);

    if (t196 != 224438245) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x790 = 26U;
	uint16_t x792 = 2918U;
	volatile int32_t t197 = -67140758;

    t197 = ((x789!=(x790|x791))*x792);

    if (t197 != 2918) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 0U;
	uint8_t x794 = UINT8_MAX;
	int32_t x795 = INT32_MIN;
	static volatile int64_t x796 = 24862561LL;
	static int64_t t198 = 37724864038LL;

    t198 = ((x793!=(x794|x795))*x796);

    if (t198 != 24862561LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = -2;
	volatile int8_t x798 = INT8_MIN;
	static int32_t x799 = -1;
	static int32_t x800 = -1;
	int32_t t199 = -210988914;

    t199 = ((x797!=(x798|x799))*x800);

    if (t199 != -1) { NG(); } else { ; }
	
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

