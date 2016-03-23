
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

static uint32_t x2 = 646811U;
int8_t x4 = 1;
volatile int8_t x6 = INT8_MIN;
volatile uint64_t t1 = UINT64_MAX;
volatile uint64_t x12 = UINT64_MAX;
volatile int8_t x15 = -59;
uint8_t x19 = 0U;
int16_t x22 = -1;
int64_t x23 = 63387LL;
volatile int64_t t7 = -184950799082LL;
static uint16_t x38 = UINT16_MAX;
int32_t t13 = -376615656;
int8_t x59 = INT8_MIN;
uint16_t x69 = 1012U;
static int32_t x72 = INT32_MIN;
int8_t x79 = 40;
int8_t x81 = 1;
volatile uint32_t x82 = UINT32_MAX;
uint8_t x96 = 1U;
static volatile uint64_t x99 = 103989201217LLU;
int8_t x114 = -1;
static int64_t x115 = 517884604876141LL;
int32_t x120 = INT32_MAX;
static volatile int32_t x129 = INT32_MIN;
static uint32_t x148 = 1392491630U;
int64_t x150 = INT64_MAX;
int32_t x153 = -1;
static volatile int32_t x158 = -1;
int64_t x159 = INT64_MAX;
int64_t x160 = -917582068807798LL;
int64_t x168 = INT64_MIN;
int32_t x171 = -1;
static int32_t x172 = 388923;
uint16_t x179 = 388U;
uint64_t x193 = UINT64_MAX;
volatile int32_t x194 = INT32_MIN;
static uint8_t x195 = 21U;
int64_t x196 = -1LL;
volatile int32_t t49 = 7709;
static int64_t x202 = INT64_MIN;
int16_t x218 = 1297;
volatile int32_t t54 = -1;
int64_t x225 = INT64_MIN;
uint8_t x228 = 3U;
int32_t t56 = 1;
int32_t x232 = 39;
uint8_t x236 = 29U;
volatile int32_t x242 = INT32_MAX;
uint64_t x243 = 13640338837LLU;
uint16_t x244 = 66U;
uint32_t x246 = 553383U;
int8_t x250 = 0;
volatile int32_t t62 = 233;
int32_t x261 = INT32_MIN;
static volatile int32_t t66 = -849422143;
int8_t x270 = INT8_MIN;
uint8_t x271 = UINT8_MAX;
int8_t x275 = 52;
static volatile int32_t t68 = -14897427;
int64_t x277 = -1LL;
static int8_t x281 = -7;
int32_t x283 = INT32_MIN;
static int8_t x288 = -62;
volatile int32_t t71 = 5;
uint32_t x289 = 93U;
int64_t x291 = -9296LL;
int16_t x297 = -661;
volatile int32_t t75 = -138228512;
volatile uint64_t x306 = 99317338LLU;
static int16_t x308 = -1;
static uint64_t x311 = 0LLU;
int8_t x314 = -1;
int32_t x318 = 251975452;
int32_t x319 = INT32_MIN;
static volatile int32_t t79 = -26484;
static int8_t x321 = -1;
int64_t x326 = INT64_MIN;
int64_t x329 = INT64_MIN;
uint16_t x330 = 326U;
uint8_t x335 = UINT8_MAX;
static uint32_t x340 = 348313U;
static int64_t x341 = INT64_MAX;
volatile int8_t x342 = INT8_MIN;
int16_t x354 = INT16_MIN;
volatile int32_t t89 = 23;
int16_t x373 = 3;
volatile uint32_t t93 = 181U;
uint8_t x378 = UINT8_MAX;
volatile uint32_t x379 = 6U;
int32_t x388 = INT32_MIN;
int8_t x411 = -1;
volatile int32_t t102 = -933880;
int8_t x422 = INT8_MIN;
int64_t x424 = INT64_MIN;
static uint16_t x426 = UINT16_MAX;
uint16_t x431 = UINT16_MAX;
int16_t x435 = -3748;
uint64_t x437 = 895872561LLU;
static int16_t x445 = -1;
static int8_t x450 = -1;
int8_t x455 = 0;
uint8_t x459 = 1U;
uint8_t x464 = 2U;
uint8_t x465 = UINT8_MAX;
uint64_t t116 = 73858LLU;
int64_t x472 = -1LL;
static volatile int64_t x477 = INT64_MIN;
int32_t x480 = INT32_MAX;
volatile int64_t t120 = -60822551953900522LL;
volatile uint32_t x489 = 174590U;
int32_t x491 = -1;
volatile int32_t t122 = -15107;
uint32_t x493 = UINT32_MAX;
int64_t x496 = INT64_MIN;
int32_t x500 = 5678334;
static int16_t x503 = INT16_MIN;
uint64_t t126 = 1LLU;
static int32_t x512 = INT32_MAX;
int8_t x516 = -20;
int32_t x523 = INT32_MIN;
int8_t x528 = -57;
volatile int32_t t131 = 52453429;
int32_t x537 = 70;
static int8_t x538 = 0;
int32_t x540 = 4539;
uint32_t x542 = UINT32_MAX;
static int64_t x547 = INT64_MIN;
static int32_t x551 = -514069;
int64_t t139 = INT64_MIN;
int8_t x564 = INT8_MAX;
int32_t x567 = -1;
int64_t x576 = INT64_MIN;
int32_t x577 = 221310;
static int64_t t144 = 3358807523201968457LL;
volatile int32_t x583 = 41;
int8_t x584 = -1;
static int32_t x585 = INT32_MIN;
int32_t x588 = INT32_MIN;
static volatile uint64_t x592 = 335870088191LLU;
static int64_t x596 = -213685005089239552LL;
int16_t x598 = INT16_MIN;
static uint8_t x599 = 0U;
static int32_t x601 = -23822346;
volatile int32_t t150 = 334293957;
int64_t x605 = -1LL;
volatile int8_t x607 = INT8_MIN;
int32_t t151 = 56257;
int64_t x616 = -1LL;
static volatile int32_t t157 = -792;
volatile uint64_t t158 = UINT64_MAX;
int64_t x644 = INT64_MAX;
volatile uint64_t t162 = 20322LLU;
uint64_t t163 = 4905625943028321771LLU;
uint32_t x657 = UINT32_MAX;
int64_t x660 = INT64_MIN;
int64_t t164 = INT64_MIN;
int16_t x661 = -1;
uint16_t x668 = 4639U;
static volatile uint32_t x669 = 111218590U;
int32_t x671 = -1;
volatile int32_t t167 = -86728;
volatile uint64_t x673 = 471157511551646LLU;
volatile uint32_t t169 = 164492U;
volatile int64_t x686 = -23501748170LL;
volatile int32_t t171 = -16251568;
uint8_t x694 = 40U;
int16_t x698 = INT16_MIN;
uint64_t t174 = 3425045064LLU;
volatile int16_t x707 = INT16_MIN;
uint16_t x711 = UINT16_MAX;
int64_t t177 = 0LL;
int16_t x714 = INT16_MIN;
volatile uint16_t x718 = 714U;
volatile uint16_t x719 = 6U;
int8_t x720 = 0;
static int64_t t180 = INT64_MIN;
int64_t x726 = -4468668255847007245LL;
volatile int64_t x731 = 14LL;
int64_t t182 = 2287735628059LL;
int16_t x739 = 372;
volatile int16_t x740 = 5;
int16_t x752 = 1;
uint64_t x763 = 327319453301LLU;
int32_t t191 = -3186;
uint32_t x769 = 758520829U;
uint32_t x775 = 437752U;
int16_t x778 = -1;
uint32_t x782 = UINT32_MAX;
int32_t x783 = INT32_MIN;
volatile int32_t x784 = -824565629;
volatile uint32_t x785 = 514532212U;
int8_t x789 = 61;
int16_t x790 = INT16_MAX;
static uint64_t x800 = UINT64_MAX;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint32_t x3 = 807406U;
	uint32_t t0 = 488168093U;

    t0 = (((x1<=x2)^x3)&x4);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int16_t x7 = -1;
	uint64_t x8 = UINT64_MAX;

    t1 = (((x5<=x6)^x7)&x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = 847012;
	int64_t x10 = -119121LL;
	int16_t x11 = -3141;
	uint64_t t2 = 27246842601LLU;

    t2 = (((x9<=x10)^x11)&x12);

    if (t2 != 18446744073709548475LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint16_t x14 = 0U;
	int32_t x16 = -1161324;
	volatile int32_t t3 = -21;

    t3 = (((x13<=x14)^x15)&x16);

    if (t3 != -1161340) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -3LL;
	int64_t x18 = -107583LL;
	static int8_t x20 = 1;
	volatile int32_t t4 = -1017985;

    t4 = (((x17<=x18)^x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = 18;
	int64_t x24 = INT64_MAX;
	int64_t t5 = -381736494968LL;

    t5 = (((x21<=x22)^x23)&x24);

    if (t5 != 63387LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 830358LLU;
	volatile uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 46U;
	int16_t x28 = INT16_MAX;
	volatile uint32_t t6 = 312U;

    t6 = (((x25<=x26)^x27)&x28);

    if (t6 != 47U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 5764;
	volatile int16_t x30 = 121;
	int64_t x31 = -1LL;
	static int16_t x32 = INT16_MAX;

    t7 = (((x29<=x30)^x31)&x32);

    if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	static volatile int8_t x35 = -1;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 281460;

    t8 = (((x33<=x34)^x35)&x36);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	uint64_t x39 = 1129LLU;
	int8_t x40 = INT8_MIN;
	static volatile uint64_t t9 = 5116328LLU;

    t9 = (((x37<=x38)^x39)&x40);

    if (t9 != 1024LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 5U;
	int8_t x42 = 1;
	int16_t x43 = -1;
	int64_t x44 = INT64_MIN;
	int64_t t10 = INT64_MIN;

    t10 = (((x41<=x42)^x43)&x44);

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = 473347972471735370LLU;
	uint32_t x46 = 1147U;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t11 = INT64_MIN;

    t11 = (((x45<=x46)^x47)&x48);

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	static int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	static int32_t t12 = -957782;

    t12 = (((x49<=x50)^x51)&x52);

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int16_t x54 = 384;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = INT16_MAX;

    t13 = (((x53<=x54)^x55)&x56);

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = UINT16_MAX;
	static int64_t x58 = INT64_MAX;
	int8_t x60 = -57;
	volatile int32_t t14 = -12897953;

    t14 = (((x57<=x58)^x59)&x60);

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	int8_t x63 = 1;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -38680996455031LL;

    t15 = (((x61<=x62)^x63)&x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 2U;
	int32_t x66 = INT32_MAX;
	uint32_t x67 = 1U;
	uint32_t x68 = 102U;
	volatile uint32_t t16 = 43U;

    t16 = (((x65<=x66)^x67)&x68);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -1;
	int32_t x71 = -1;
	int32_t t17 = INT32_MIN;

    t17 = (((x69<=x70)^x71)&x72);

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	volatile int8_t x75 = -1;
	static int16_t x76 = -434;
	int32_t t18 = 1102;

    t18 = (((x73<=x74)^x75)&x76);

    if (t18 != -434) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -1LL;
	uint8_t x78 = 69U;
	uint32_t x80 = 2098137U;
	uint32_t t19 = 9331307U;

    t19 = (((x77<=x78)^x79)&x80);

    if (t19 != 9U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = -5833;

    t20 = (((x81<=x82)^x83)&x84);

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = INT16_MIN;
	uint32_t x86 = 5U;
	uint32_t x87 = 178674U;
	volatile int32_t x88 = INT32_MAX;
	uint32_t t21 = 1U;

    t21 = (((x85<=x86)^x87)&x88);

    if (t21 != 178674U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	int8_t x90 = -1;
	int32_t x91 = 12026;
	uint64_t x92 = 390282282874078564LLU;
	volatile uint64_t t22 = 1619179491188LLU;

    t22 = (((x89<=x90)^x91)&x92);

    if (t22 != 1120LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MAX;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = 7240;
	volatile int32_t t23 = 1;

    t23 = (((x93<=x94)^x95)&x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 8LLU;
	volatile uint8_t x98 = 59U;
	static int32_t x100 = 21;
	static uint64_t t24 = 888LLU;

    t24 = (((x97<=x98)^x99)&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 14;
	uint32_t x102 = UINT32_MAX;
	volatile uint32_t x103 = 10728U;
	volatile int32_t x104 = INT32_MIN;
	uint32_t t25 = 83777090U;

    t25 = (((x101<=x102)^x103)&x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = -988;
	int32_t x107 = -1;
	int64_t x108 = INT64_MAX;
	int64_t t26 = INT64_MAX;

    t26 = (((x105<=x106)^x107)&x108);

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	static int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	static volatile int32_t x112 = INT32_MIN;
	uint32_t t27 = 5337U;

    t27 = (((x109<=x110)^x111)&x112);

    if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	uint16_t x116 = 902U;
	static int64_t t28 = -26125252776LL;

    t28 = (((x113<=x114)^x115)&x116);

    if (t28 != 260LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	static int32_t x118 = -6283337;
	int16_t x119 = -1;
	int32_t t29 = INT32_MAX;

    t29 = (((x117<=x118)^x119)&x120);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = UINT16_MAX;
	uint32_t x122 = 2088702U;
	volatile uint16_t x123 = 119U;
	static int16_t x124 = INT16_MAX;
	int32_t t30 = -2440080;

    t30 = (((x121<=x122)^x123)&x124);

    if (t30 != 118) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	int32_t x126 = -389599452;
	int8_t x127 = INT8_MIN;
	volatile uint64_t x128 = 1293LLU;
	uint64_t t31 = 1250441814266545LLU;

    t31 = (((x125<=x126)^x127)&x128);

    if (t31 != 1280LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x130 = 12U;
	int8_t x131 = -24;
	uint8_t x132 = 59U;
	volatile int32_t t32 = -1526039;

    t32 = (((x129<=x130)^x131)&x132);

    if (t32 != 40) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -1LL;
	int32_t x134 = 12;
	volatile int8_t x135 = INT8_MAX;
	volatile int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 334653889LL;

    t33 = (((x133<=x134)^x135)&x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 9U;
	volatile uint16_t x138 = 1U;
	volatile int32_t x139 = -727625;
	uint16_t x140 = UINT16_MAX;
	static int32_t t34 = -11;

    t34 = (((x137<=x138)^x139)&x140);

    if (t34 != 58807) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MAX;
	int8_t x144 = INT8_MAX;
	static volatile int64_t t35 = -1016786742029LL;

    t35 = (((x141<=x142)^x143)&x144);

    if (t35 != 126LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -5;
	int64_t x146 = -1LL;
	int64_t x147 = -1421452767LL;
	int64_t t36 = -1351598LL;

    t36 = (((x145<=x146)^x147)&x148);

    if (t36 != 38148128LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x151 = 3533829283LLU;
	int64_t x152 = INT64_MIN;
	volatile uint64_t t37 = 349878750781445LLU;

    t37 = (((x149<=x150)^x151)&x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x154 = 437U;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t38 = 384455952;

    t38 = (((x153<=x154)^x155)&x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 41LLU;
	int64_t t39 = 167895059420617LL;

    t39 = (((x157<=x158)^x159)&x160);

    if (t39 != 9222454454785968010LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 4U;
	uint8_t x162 = UINT8_MAX;
	volatile int32_t x163 = INT32_MIN;
	uint32_t x164 = 3240U;
	static uint32_t t40 = 4U;

    t40 = (((x161<=x162)^x163)&x164);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	volatile int64_t x166 = 589291366LL;
	volatile uint16_t x167 = 3U;
	int64_t t41 = 404LL;

    t41 = (((x165<=x166)^x167)&x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = -1;
	int64_t x170 = INT64_MIN;
	volatile int32_t t42 = 1;

    t42 = (((x169<=x170)^x171)&x172);

    if (t42 != 388923) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	static uint16_t x174 = UINT16_MAX;
	static volatile int64_t x175 = -264LL;
	int16_t x176 = 1282;
	int64_t t43 = -590870LL;

    t43 = (((x173<=x174)^x175)&x176);

    if (t43 != 1024LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	uint32_t x178 = 25U;
	volatile uint64_t x180 = 18LLU;
	volatile uint64_t t44 = 1070780327864013LLU;

    t44 = (((x177<=x178)^x179)&x180);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 8375458U;
	int16_t x184 = 0;
	static volatile uint32_t t45 = 70011514U;

    t45 = (((x181<=x182)^x183)&x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 8580U;
	uint32_t x186 = UINT32_MAX;
	volatile int32_t x187 = 27651403;
	int8_t x188 = -1;
	int32_t t46 = -26281062;

    t46 = (((x185<=x186)^x187)&x188);

    if (t46 != 27651402) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MIN;
	static int64_t x190 = 0LL;
	int16_t x191 = -1;
	int16_t x192 = INT16_MIN;
	int32_t t47 = 11502669;

    t47 = (((x189<=x190)^x191)&x192);

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t t48 = 46373755234LL;

    t48 = (((x193<=x194)^x195)&x196);

    if (t48 != 21LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 1;
	static uint8_t x198 = 3U;
	int16_t x199 = INT16_MAX;
	volatile int32_t x200 = -525356508;

    t49 = (((x197<=x198)^x199)&x200);

    if (t49 != 12836) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x203 = 13;
	volatile int32_t x204 = -6950046;
	int32_t t50 = -23;

    t50 = (((x201<=x202)^x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -1;
	static uint8_t x206 = 3U;
	int16_t x207 = -19;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

    t51 = (((x205<=x206)^x207)&x208);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 2U;
	static int64_t x210 = 7LL;
	uint8_t x211 = 6U;
	uint8_t x212 = 8U;
	int32_t t52 = -3400846;

    t52 = (((x209<=x210)^x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -6;
	int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	int64_t x216 = 861013483503135738LL;
	static int64_t t53 = 1164LL;

    t53 = (((x213<=x214)^x215)&x216);

    if (t53 != 861013483503135616LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int32_t x219 = 0;
	int8_t x220 = INT8_MIN;

    t54 = (((x217<=x218)^x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x221 = INT32_MIN;
	uint16_t x222 = UINT16_MAX;
	static volatile int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MAX;
	static int32_t t55 = 8452;

    t55 = (((x221<=x222)^x223)&x224);

    if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = 27;
	volatile uint16_t x227 = UINT16_MAX;

    t56 = (((x225<=x226)^x227)&x228);

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	int32_t x230 = -1;
	int32_t x231 = INT32_MIN;
	volatile int32_t t57 = 5;

    t57 = (((x229<=x230)^x231)&x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	static int32_t x235 = INT32_MIN;
	int32_t t58 = 27290;

    t58 = (((x233<=x234)^x235)&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = -1662540LL;
	volatile uint16_t x238 = 18861U;
	static uint8_t x239 = 2U;
	int32_t x240 = 35455292;
	static volatile int32_t t59 = 59426;

    t59 = (((x237<=x238)^x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 7760U;
	volatile uint64_t t60 = 5809492524247259499LLU;

    t60 = (((x241<=x242)^x243)&x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 74U;
	uint16_t x247 = UINT16_MAX;
	static int32_t x248 = 432;
	int32_t t61 = -1;

    t61 = (((x245<=x246)^x247)&x248);

    if (t61 != 432) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = 803679;
	int8_t x251 = INT8_MAX;
	volatile int8_t x252 = INT8_MIN;

    t62 = (((x249<=x250)^x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int16_t x254 = -2;
	static int8_t x255 = 38;
	volatile uint32_t x256 = 1724U;
	uint32_t t63 = 4788306U;

    t63 = (((x253<=x254)^x255)&x256);

    if (t63 != 36U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MAX;
	int32_t x260 = INT32_MIN;
	int64_t t64 = -323746367035LL;

    t64 = (((x257<=x258)^x259)&x260);

    if (t64 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x262 = 913733270844913489LL;
	static int16_t x263 = -1;
	volatile int8_t x264 = INT8_MIN;
	int32_t t65 = -170;

    t65 = (((x261<=x262)^x263)&x264);

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 1U;
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;

    t66 = (((x265<=x266)^x267)&x268);

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MIN;
	volatile int16_t x272 = INT16_MIN;
	int32_t t67 = 2040;

    t67 = (((x269<=x270)^x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	static uint64_t x274 = 1670LLU;
	volatile int8_t x276 = -3;

    t68 = (((x273<=x274)^x275)&x276);

    if (t68 != 52) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x278 = INT8_MIN;
	uint8_t x279 = 7U;
	volatile uint32_t x280 = 5888U;
	static uint32_t t69 = 367296878U;

    t69 = (((x277<=x278)^x279)&x280);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MIN;

    t70 = (((x281<=x282)^x283)&x284);

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 49821LLU;
	static uint16_t x286 = 1251U;
	int16_t x287 = INT16_MAX;

    t71 = (((x285<=x286)^x287)&x288);

    if (t71 != 32706) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x290 = INT16_MIN;
	static volatile int32_t x292 = INT32_MIN;
	volatile int64_t t72 = -3698887247LL;

    t72 = (((x289<=x290)^x291)&x292);

    if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -2131192699233974665LL;
	volatile uint32_t x294 = UINT32_MAX;
	static volatile uint16_t x295 = 149U;
	uint16_t x296 = UINT16_MAX;
	static int32_t t73 = 9;

    t73 = (((x293<=x294)^x295)&x296);

    if (t73 != 148) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x298 = INT32_MIN;
	uint8_t x299 = 79U;
	int64_t x300 = 322674909177171448LL;
	volatile int64_t t74 = 8720037736546482LL;

    t74 = (((x297<=x298)^x299)&x300);

    if (t74 != 72LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 46985;
	int64_t x302 = -1LL;
	static volatile uint16_t x303 = 0U;
	int32_t x304 = INT32_MAX;

    t75 = (((x301<=x302)^x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = -4166145863962LL;
	int32_t x307 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

    t76 = (((x305<=x306)^x307)&x308);

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int16_t x310 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	static volatile uint64_t t77 = 38775370LLU;

    t77 = (((x309<=x310)^x311)&x312);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = 1775597683394058LL;
	int64_t t78 = 280418987260072324LL;

    t78 = (((x313<=x314)^x315)&x316);

    if (t78 != 50698LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 18207U;
	uint8_t x320 = 3U;

    t79 = (((x317<=x318)^x319)&x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x322 = 482153764LLU;
	volatile int64_t x323 = INT64_MIN;
	int32_t x324 = 125287;
	int64_t t80 = -406LL;

    t80 = (((x321<=x322)^x323)&x324);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 1LL;
	volatile int8_t x327 = -1;
	static volatile int16_t x328 = 9;
	volatile int32_t t81 = 15681;

    t81 = (((x325<=x326)^x327)&x328);

    if (t81 != 9) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x331 = -1;
	volatile int16_t x332 = 1;
	volatile int32_t t82 = -406;

    t82 = (((x329<=x330)^x331)&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	static int32_t x334 = 19468039;
	int8_t x336 = -1;
	int32_t t83 = 56058589;

    t83 = (((x333<=x334)^x335)&x336);

    if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	uint16_t x338 = 11U;
	static int32_t x339 = INT32_MAX;
	uint32_t t84 = 9U;

    t84 = (((x337<=x338)^x339)&x340);

    if (t84 != 348312U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x343 = INT8_MIN;
	uint32_t x344 = UINT32_MAX;
	uint32_t t85 = 75U;

    t85 = (((x341<=x342)^x343)&x344);

    if (t85 != 4294967168U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	volatile uint16_t x346 = 23582U;
	volatile int64_t x347 = INT64_MIN;
	uint8_t x348 = 0U;
	int64_t t86 = -3066919663LL;

    t86 = (((x345<=x346)^x347)&x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MAX;
	int8_t x350 = -10;
	int8_t x351 = -1;
	int16_t x352 = -1;
	int32_t t87 = 2;

    t87 = (((x349<=x350)^x351)&x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 26U;
	int16_t x355 = 3697;
	int64_t x356 = -22045750358LL;
	int64_t t88 = -9620LL;

    t88 = (((x353<=x354)^x355)&x356);

    if (t88 != 2592LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = UINT16_MAX;
	int8_t x358 = -1;
	uint8_t x359 = 112U;
	int16_t x360 = INT16_MAX;

    t89 = (((x357<=x358)^x359)&x360);

    if (t89 != 112) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = 22;
	int16_t x362 = 3;
	uint64_t x363 = 5521155823722017410LLU;
	volatile int16_t x364 = INT16_MIN;
	volatile uint64_t t90 = 515837339016735610LLU;

    t90 = (((x361<=x362)^x363)&x364);

    if (t90 != 5521155823722004480LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 186782U;
	uint8_t x366 = 0U;
	static int64_t x367 = INT64_MIN;
	volatile uint32_t x368 = UINT32_MAX;
	volatile int64_t t91 = 1807894LL;

    t91 = (((x365<=x366)^x367)&x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -56;
	volatile uint32_t x370 = UINT32_MAX;
	volatile int8_t x371 = 57;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -844843295130245644LL;

    t92 = (((x369<=x370)^x371)&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = -1571534LL;
	int8_t x375 = -1;
	uint32_t x376 = 2020007U;

    t93 = (((x373<=x374)^x375)&x376);

    if (t93 != 2020007U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = UINT32_MAX;
	int16_t x380 = -1;
	uint32_t t94 = 10226U;

    t94 = (((x377<=x378)^x379)&x380);

    if (t94 != 6U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x381 = -685;
	volatile int16_t x382 = INT16_MAX;
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -37921;

    t95 = (((x381<=x382)^x383)&x384);

    if (t95 != 32640) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 1057134137199LLU;
	int32_t x386 = INT32_MIN;
	static uint8_t x387 = 1U;
	static volatile int32_t t96 = 21420367;

    t96 = (((x385<=x386)^x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	int8_t x392 = 0;
	static int32_t t97 = -4273002;

    t97 = (((x389<=x390)^x391)&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 1748544314499LL;
	uint8_t x394 = 4U;
	volatile uint8_t x395 = UINT8_MAX;
	volatile int8_t x396 = 7;
	int32_t t98 = 957437390;

    t98 = (((x393<=x394)^x395)&x396);

    if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x397 = UINT16_MAX;
	uint32_t x398 = 896397342U;
	int8_t x399 = 46;
	int16_t x400 = 7;
	static int32_t t99 = 236044;

    t99 = (((x397<=x398)^x399)&x400);

    if (t99 != 7) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	volatile uint32_t x402 = 4361158U;
	int8_t x403 = INT8_MIN;
	int16_t x404 = -1;
	volatile int32_t t100 = 19050123;

    t100 = (((x401<=x402)^x403)&x404);

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int64_t x406 = -160766120697LL;
	int64_t x407 = -304LL;
	volatile int32_t x408 = INT32_MIN;
	static volatile int64_t t101 = -466233575704LL;

    t101 = (((x405<=x406)^x407)&x408);

    if (t101 != -2147483648LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MIN;
	volatile uint16_t x410 = UINT16_MAX;
	volatile int8_t x412 = INT8_MIN;

    t102 = (((x409<=x410)^x411)&x412);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = 109396401;
	static int64_t x415 = INT64_MIN;
	int32_t x416 = INT32_MAX;
	volatile int64_t t103 = 31579065149725LL;

    t103 = (((x413<=x414)^x415)&x416);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -7;
	static int32_t x418 = INT32_MAX;
	int16_t x419 = INT16_MIN;
	volatile int8_t x420 = -4;
	volatile int32_t t104 = -227757376;

    t104 = (((x417<=x418)^x419)&x420);

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 0;
	static uint32_t x423 = 8U;
	volatile int64_t t105 = 8983785910LL;

    t105 = (((x421<=x422)^x423)&x424);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 47U;
	volatile int16_t x427 = INT16_MAX;
	volatile uint64_t x428 = UINT64_MAX;
	uint64_t t106 = 3104590749912290891LLU;

    t106 = (((x425<=x426)^x427)&x428);

    if (t106 != 32766LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MIN;
	static int32_t x430 = INT32_MIN;
	int16_t x432 = INT16_MIN;
	volatile int32_t t107 = 501;

    t107 = (((x429<=x430)^x431)&x432);

    if (t107 != 32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int16_t x434 = INT16_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t108 = -17359069;

    t108 = (((x433<=x434)^x435)&x436);

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 1007196905631838724LLU;
	int32_t x439 = INT32_MAX;
	int32_t x440 = INT32_MIN;
	static volatile int32_t t109 = 0;

    t109 = (((x437<=x438)^x439)&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 591LL;
	int8_t x442 = 1;
	uint64_t x443 = 513LLU;
	static int16_t x444 = -24;
	uint64_t t110 = 4132317693714LLU;

    t110 = (((x441<=x442)^x443)&x444);

    if (t110 != 512LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = -1;
	static uint8_t x447 = 0U;
	volatile int32_t x448 = INT32_MIN;
	int32_t t111 = 37;

    t111 = (((x445<=x446)^x447)&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	uint8_t x451 = UINT8_MAX;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t112 = 125871787;

    t112 = (((x449<=x450)^x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	static uint8_t x454 = 32U;
	volatile int32_t x456 = INT32_MIN;
	volatile int32_t t113 = 1;

    t113 = (((x453<=x454)^x455)&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	static int8_t x458 = INT8_MAX;
	uint8_t x460 = 9U;
	volatile int32_t t114 = 84;

    t114 = (((x457<=x458)^x459)&x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x462 = INT64_MIN;
	int16_t x463 = -1;
	volatile int32_t t115 = 6915;

    t115 = (((x461<=x462)^x463)&x464);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = 263;
	static uint64_t x467 = 4253630885233195LLU;
	uint32_t x468 = UINT32_MAX;

    t116 = (((x465<=x466)^x467)&x468);

    if (t116 != 2649457194LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 404792LLU;
	int32_t x470 = -1;
	int8_t x471 = -1;
	static volatile int64_t t117 = -60998LL;

    t117 = (((x469<=x470)^x471)&x472);

    if (t117 != -2LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	uint16_t x474 = UINT16_MAX;
	static int32_t x475 = INT32_MAX;
	int8_t x476 = INT8_MAX;
	static int32_t t118 = 3607013;

    t118 = (((x473<=x474)^x475)&x476);

    if (t118 != 126) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	volatile int16_t x479 = -1;
	static volatile int32_t t119 = 1288800;

    t119 = (((x477<=x478)^x479)&x480);

    if (t119 != 2147483646) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 20;
	static int16_t x482 = -1;
	int64_t x483 = 953LL;
	static int32_t x484 = -365;

    t120 = (((x481<=x482)^x483)&x484);

    if (t120 != 657LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = UINT64_MAX;
	uint16_t x486 = 14347U;
	static volatile int16_t x487 = INT16_MIN;
	int8_t x488 = -1;
	int32_t t121 = -3;

    t121 = (((x485<=x486)^x487)&x488);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = INT32_MIN;
	volatile int32_t x492 = INT32_MAX;

    t122 = (((x489<=x490)^x491)&x492);

    if (t122 != 2147483646) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = -6711836LL;
	static int32_t x495 = -1;
	int64_t t123 = INT64_MIN;

    t123 = (((x493<=x494)^x495)&x496);

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	volatile uint8_t x498 = UINT8_MAX;
	static int32_t x499 = 2370;
	int32_t t124 = -3896;

    t124 = (((x497<=x498)^x499)&x500);

    if (t124 != 66) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 39031501345161428LL;
	volatile uint16_t x502 = 560U;
	static volatile uint16_t x504 = 1U;
	int32_t t125 = 70015996;

    t125 = (((x501<=x502)^x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = 78LL;
	int64_t x506 = INT64_MIN;
	volatile uint64_t x507 = UINT64_MAX;
	int8_t x508 = INT8_MIN;

    t126 = (((x505<=x506)^x507)&x508);

    if (t126 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	int64_t x510 = INT64_MAX;
	uint32_t x511 = 2292135U;
	volatile uint32_t t127 = 46861U;

    t127 = (((x509<=x510)^x511)&x512);

    if (t127 != 2292135U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	static volatile uint32_t x514 = 86836U;
	static volatile int32_t x515 = -206776398;
	static int32_t t128 = -1661;

    t128 = (((x513<=x514)^x515)&x516);

    if (t128 != -206776416) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = UINT32_MAX;
	int64_t x518 = -6261146LL;
	static uint16_t x519 = 2632U;
	uint64_t x520 = 0LLU;
	uint64_t t129 = 27612LLU;

    t129 = (((x517<=x518)^x519)&x520);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 2594135LLU;
	int8_t x522 = -3;
	static int32_t x524 = INT32_MIN;
	static int32_t t130 = INT32_MIN;

    t130 = (((x521<=x522)^x523)&x524);

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = 4283;
	uint64_t x526 = 172611716920425LLU;
	volatile uint16_t x527 = UINT16_MAX;

    t131 = (((x525<=x526)^x527)&x528);

    if (t131 != 65478) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -93300297;
	int32_t x530 = INT32_MIN;
	int8_t x531 = INT8_MIN;
	static uint8_t x532 = 15U;
	static volatile int32_t t132 = 5937435;

    t132 = (((x529<=x530)^x531)&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x533 = -1744063LL;
	volatile int64_t x534 = INT64_MAX;
	static volatile int64_t x535 = -1LL;
	static uint16_t x536 = 1U;
	int64_t t133 = 389644491LL;

    t133 = (((x533<=x534)^x535)&x536);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x539 = 34;
	volatile int32_t t134 = 15974835;

    t134 = (((x537<=x538)^x539)&x540);

    if (t134 != 34) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MAX;
	int64_t x543 = -1782183693277LL;
	int8_t x544 = INT8_MIN;
	int64_t t135 = -15868902159998LL;

    t135 = (((x541<=x542)^x543)&x544);

    if (t135 != -1782183693312LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = INT8_MIN;
	volatile uint64_t x546 = 2157893457512367LLU;
	volatile int8_t x548 = INT8_MIN;
	volatile int64_t t136 = INT64_MIN;

    t136 = (((x545<=x546)^x547)&x548);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	static int16_t x550 = INT16_MIN;
	static int32_t x552 = 59334;
	static volatile int32_t t137 = 1875;

    t137 = (((x549<=x550)^x551)&x552);

    if (t137 != 10178) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 114;
	volatile int16_t x554 = INT16_MAX;
	volatile uint16_t x555 = UINT16_MAX;
	int32_t x556 = -1;
	static int32_t t138 = 125;

    t138 = (((x553<=x554)^x555)&x556);

    if (t138 != 65534) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 629690954767579LLU;
	static uint8_t x558 = 108U;
	int64_t x559 = INT64_MIN;
	int32_t x560 = -1;

    t139 = (((x557<=x558)^x559)&x560);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = 5U;
	volatile int8_t x562 = INT8_MAX;
	uint8_t x563 = UINT8_MAX;
	volatile int32_t t140 = -2664;

    t140 = (((x561<=x562)^x563)&x564);

    if (t140 != 126) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = INT64_MIN;
	int32_t x566 = 358029182;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t141 = 8382820U;

    t141 = (((x565<=x566)^x567)&x568);

    if (t141 != 4294967294U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -56;
	static int16_t x570 = INT16_MAX;
	volatile uint64_t x571 = 0LLU;
	static int8_t x572 = -1;
	volatile uint64_t t142 = 365438142149442LLU;

    t142 = (((x569<=x570)^x571)&x572);

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int32_t x574 = -1;
	int8_t x575 = -12;
	int64_t t143 = INT64_MIN;

    t143 = (((x573<=x574)^x575)&x576);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = -1;
	int64_t x579 = 119662740LL;
	static int32_t x580 = INT32_MIN;

    t144 = (((x577<=x578)^x579)&x580);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	static uint32_t x582 = UINT32_MAX;
	volatile int32_t t145 = -162880;

    t145 = (((x581<=x582)^x583)&x584);

    if (t145 != 40) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x586 = 6074U;
	uint64_t x587 = 31826942364LLU;
	static volatile uint64_t t146 = 8301349023822797779LLU;

    t146 = (((x585<=x586)^x587)&x588);

    if (t146 != 30064771072LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = -10494771459133LL;
	uint64_t x590 = 35864120LLU;
	volatile int32_t x591 = -391;
	uint64_t t147 = 5556990507796LLU;

    t147 = (((x589<=x590)^x591)&x592);

    if (t147 != 335870087801LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 96U;
	uint64_t x594 = 60673344LLU;
	int64_t x595 = INT64_MIN;
	volatile int64_t t148 = INT64_MIN;

    t148 = (((x593<=x594)^x595)&x596);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = 14;
	int32_t x600 = INT32_MIN;
	static volatile int32_t t149 = -1798244;

    t149 = (((x597<=x598)^x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x602 = INT64_MAX;
	int8_t x603 = 0;
	uint16_t x604 = UINT16_MAX;

    t150 = (((x601<=x602)^x603)&x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x606 = 255LLU;
	int8_t x608 = -1;

    t151 = (((x605<=x606)^x607)&x608);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = -1;
	int16_t x610 = INT16_MAX;
	int8_t x611 = -29;
	int16_t x612 = -1;
	static volatile int32_t t152 = -2920194;

    t152 = (((x609<=x610)^x611)&x612);

    if (t152 != -30) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -5818;
	volatile uint8_t x614 = 14U;
	int64_t x615 = -230413760175388709LL;
	int64_t t153 = -119031557565611119LL;

    t153 = (((x613<=x614)^x615)&x616);

    if (t153 != -230413760175388710LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	int64_t x618 = INT64_MAX;
	static uint16_t x619 = 365U;
	uint8_t x620 = 40U;
	volatile int32_t t154 = -7453407;

    t154 = (((x617<=x618)^x619)&x620);

    if (t154 != 40) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x621 = UINT16_MAX;
	int16_t x622 = INT16_MAX;
	int32_t x623 = -226618;
	int8_t x624 = INT8_MIN;
	static int32_t t155 = -4690598;

    t155 = (((x621<=x622)^x623)&x624);

    if (t155 != -226688) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = 0;
	int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;
	uint8_t x628 = 18U;
	int32_t t156 = 167409;

    t156 = (((x625<=x626)^x627)&x628);

    if (t156 != 18) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x629 = UINT8_MAX;
	int16_t x630 = 649;
	int32_t x631 = -1;
	volatile int8_t x632 = INT8_MAX;

    t157 = (((x629<=x630)^x631)&x632);

    if (t157 != 126) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = 1;
	volatile int32_t x634 = -1;
	int64_t x635 = -1LL;
	uint64_t x636 = UINT64_MAX;

    t158 = (((x633<=x634)^x635)&x636);

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MAX;
	static uint32_t x638 = UINT32_MAX;
	int32_t x639 = -1;
	int8_t x640 = -11;
	int32_t t159 = -1215;

    t159 = (((x637<=x638)^x639)&x640);

    if (t159 != -12) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MAX;
	volatile uint16_t x642 = 3U;
	static int16_t x643 = INT16_MIN;
	volatile int64_t t160 = 16LL;

    t160 = (((x641<=x642)^x643)&x644);

    if (t160 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x645 = 12U;
	int8_t x646 = 10;
	static int16_t x647 = -1;
	static int32_t x648 = INT32_MIN;
	int32_t t161 = INT32_MIN;

    t161 = (((x645<=x646)^x647)&x648);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	static int16_t x650 = -13;
	int64_t x651 = -7552496458694LL;
	uint64_t x652 = 1878LLU;

    t162 = (((x649<=x650)^x651)&x652);

    if (t162 != 1042LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -31;
	int32_t x654 = -1995;
	int64_t x655 = INT64_MIN;
	uint64_t x656 = UINT64_MAX;

    t163 = (((x653<=x654)^x655)&x656);

    if (t163 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x658 = 22U;
	int32_t x659 = INT32_MIN;

    t164 = (((x657<=x658)^x659)&x660);

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -251;
	uint8_t x663 = UINT8_MAX;
	volatile uint8_t x664 = 71U;
	static int32_t t165 = -72334;

    t165 = (((x661<=x662)^x663)&x664);

    if (t165 != 71) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x666 = INT16_MIN;
	uint32_t x667 = 239521116U;
	volatile uint32_t t166 = 7871069U;

    t166 = (((x665<=x666)^x667)&x668);

    if (t166 != 28U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = INT64_MIN;
	static int8_t x672 = 0;

    t167 = (((x669<=x670)^x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x674 = UINT32_MAX;
	int32_t x675 = INT32_MAX;
	int64_t x676 = 141646LL;
	volatile int64_t t168 = -87LL;

    t168 = (((x673<=x674)^x675)&x676);

    if (t168 != 141646LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 676154403U;
	static int16_t x678 = -1;
	int16_t x679 = INT16_MIN;
	static uint32_t x680 = 443934U;

    t169 = (((x677<=x678)^x679)&x680);

    if (t169 != 425984U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = -81;
	volatile uint8_t x682 = 47U;
	int16_t x683 = INT16_MIN;
	volatile int32_t x684 = INT32_MAX;
	static volatile int32_t t170 = 11740;

    t170 = (((x681<=x682)^x683)&x684);

    if (t170 != 2147450881) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 66U;
	int32_t x687 = 814681;
	uint16_t x688 = 4280U;

    t171 = (((x685<=x686)^x687)&x688);

    if (t171 != 24) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x689 = UINT32_MAX;
	int32_t x690 = 7;
	volatile int16_t x691 = -6;
	uint64_t x692 = 185856LLU;
	volatile uint64_t t172 = 3615305562LLU;

    t172 = (((x689<=x690)^x691)&x692);

    if (t172 != 185856LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = 6468602;
	uint16_t x695 = 4U;
	int64_t x696 = -1LL;
	int64_t t173 = -38054819425LL;

    t173 = (((x693<=x694)^x695)&x696);

    if (t173 != 4LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = INT8_MAX;
	int32_t x699 = INT32_MAX;
	uint64_t x700 = 8042086884LLU;

    t174 = (((x697<=x698)^x699)&x700);

    if (t174 != 1599635940LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	volatile int32_t x702 = INT32_MIN;
	static int64_t x703 = -3498LL;
	static volatile uint16_t x704 = UINT16_MAX;
	int64_t t175 = 161733018622LL;

    t175 = (((x701<=x702)^x703)&x704);

    if (t175 != 62038LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -6;
	volatile uint8_t x706 = 5U;
	int32_t x708 = INT32_MAX;
	int32_t t176 = 36501;

    t176 = (((x705<=x706)^x707)&x708);

    if (t176 != 2147450881) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	static int32_t x710 = INT32_MIN;
	volatile int64_t x712 = INT64_MIN;

    t177 = (((x709<=x710)^x711)&x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = INT64_MIN;
	volatile int16_t x715 = -15;
	int8_t x716 = 1;
	int32_t t178 = 14192266;

    t178 = (((x713<=x714)^x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 22U;
	static volatile int32_t t179 = -3;

    t179 = (((x717<=x718)^x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int64_t x722 = INT64_MAX;
	int32_t x723 = INT32_MIN;
	volatile int64_t x724 = INT64_MIN;

    t180 = (((x721<=x722)^x723)&x724);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -6138603063289LL;
	static uint8_t x727 = 62U;
	int32_t x728 = -17035847;
	volatile int32_t t181 = -30611394;

    t181 = (((x725<=x726)^x727)&x728);

    if (t181 != 56) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = 2;
	static volatile int16_t x730 = 731;
	int8_t x732 = -1;

    t182 = (((x729<=x730)^x731)&x732);

    if (t182 != 15LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int32_t x734 = INT32_MIN;
	int64_t x735 = INT64_MIN;
	uint8_t x736 = UINT8_MAX;
	int64_t t183 = 993552785LL;

    t183 = (((x733<=x734)^x735)&x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x737 = 1309LLU;
	int64_t x738 = INT64_MIN;
	int32_t t184 = -235;

    t184 = (((x737<=x738)^x739)&x740);

    if (t184 != 5) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -13442;
	int64_t x742 = INT64_MIN;
	volatile int16_t x743 = -1;
	uint16_t x744 = 0U;
	int32_t t185 = -13653223;

    t185 = (((x741<=x742)^x743)&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	int32_t x746 = INT32_MIN;
	uint32_t x747 = 1695332U;
	static volatile int8_t x748 = 0;
	volatile uint32_t t186 = 2U;

    t186 = (((x745<=x746)^x747)&x748);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = -1;
	int32_t x750 = INT32_MIN;
	static uint64_t x751 = 415LLU;
	uint64_t t187 = 25799120634167552LLU;

    t187 = (((x749<=x750)^x751)&x752);

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 98U;
	int64_t x754 = 30593535321510219LL;
	int8_t x755 = -1;
	static uint16_t x756 = UINT16_MAX;
	static int32_t t188 = 1;

    t188 = (((x753<=x754)^x755)&x756);

    if (t188 != 65534) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	uint64_t x758 = 4081395758886014106LLU;
	static volatile int64_t x759 = INT64_MIN;
	uint16_t x760 = 1U;
	int64_t t189 = 0LL;

    t189 = (((x757<=x758)^x759)&x760);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = -240558988;
	int16_t x762 = INT16_MAX;
	uint8_t x764 = UINT8_MAX;
	volatile uint64_t t190 = 23LLU;

    t190 = (((x761<=x762)^x763)&x764);

    if (t190 != 116LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x765 = UINT8_MAX;
	volatile int32_t x766 = INT32_MIN;
	int16_t x767 = INT16_MIN;
	static int8_t x768 = 1;

    t191 = (((x765<=x766)^x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = -1;
	static volatile uint64_t x771 = 1691366336LLU;
	static volatile int8_t x772 = -1;
	volatile uint64_t t192 = 68598979450061139LLU;

    t192 = (((x769<=x770)^x771)&x772);

    if (t192 != 1691366337LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 4U;
	uint32_t x774 = UINT32_MAX;
	uint8_t x776 = 2U;
	uint32_t t193 = 1U;

    t193 = (((x773<=x774)^x775)&x776);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 1U;
	int16_t x779 = INT16_MAX;
	int32_t x780 = INT32_MIN;
	volatile int32_t t194 = 975341;

    t194 = (((x777<=x778)^x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	static int32_t t195 = 353213176;

    t195 = (((x781<=x782)^x783)&x784);

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = -52;
	int8_t x787 = 1;
	int32_t x788 = INT32_MAX;
	static volatile int32_t t196 = 463;

    t196 = (((x785<=x786)^x787)&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x791 = INT64_MIN;
	int32_t x792 = INT32_MAX;
	volatile int64_t t197 = 776290719098250LL;

    t197 = (((x789<=x790)^x791)&x792);

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = 875U;
	uint8_t x794 = UINT8_MAX;
	int8_t x795 = -1;
	int16_t x796 = INT16_MAX;
	int32_t t198 = 405017;

    t198 = (((x793<=x794)^x795)&x796);

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	uint8_t x798 = UINT8_MAX;
	uint64_t x799 = 71934592566404LLU;
	static uint64_t t199 = 646012628027565692LLU;

    t199 = (((x797<=x798)^x799)&x800);

    if (t199 != 71934592566405LLU) { NG(); } else { ; }
	
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

