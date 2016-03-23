
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

static volatile int16_t x1 = INT16_MIN;
uint8_t x6 = UINT8_MAX;
int16_t x19 = INT16_MIN;
uint16_t x21 = 1742U;
int32_t x23 = -1;
volatile int32_t x26 = INT32_MAX;
volatile uint8_t x31 = UINT8_MAX;
int64_t x35 = INT64_MIN;
static volatile int32_t x36 = 227452185;
static int8_t x50 = INT8_MIN;
int64_t x51 = INT64_MIN;
int8_t x52 = -15;
int64_t x56 = 1434864251731110178LL;
int16_t x61 = -8;
uint32_t x66 = 343461U;
int8_t x68 = INT8_MIN;
volatile uint64_t x72 = 17244771LLU;
volatile int16_t x83 = INT16_MIN;
int32_t x86 = -1;
int32_t t22 = 12;
volatile int32_t x110 = -29;
volatile int32_t t27 = -4;
int32_t x116 = INT32_MAX;
static volatile int16_t x120 = INT16_MIN;
static int8_t x121 = INT8_MIN;
int16_t x122 = INT16_MIN;
uint32_t x123 = UINT32_MAX;
int64_t x126 = 46852342398LL;
int32_t x142 = INT32_MIN;
int64_t x146 = 1LL;
static int8_t x149 = INT8_MIN;
static uint32_t x152 = 1880699U;
uint32_t x155 = UINT32_MAX;
static int64_t x157 = -1LL;
int32_t t39 = 1973;
uint16_t x168 = UINT16_MAX;
int8_t x172 = INT8_MAX;
uint64_t x173 = 57288LLU;
uint32_t x176 = 2U;
int8_t x178 = 3;
int64_t x183 = INT64_MAX;
int8_t x188 = INT8_MIN;
int8_t x193 = 3;
static int16_t x195 = 1;
int64_t x203 = -1LL;
volatile int16_t x207 = 6730;
int8_t x209 = -1;
static uint64_t x212 = 20LLU;
int64_t x221 = INT64_MAX;
int8_t x222 = INT8_MIN;
int32_t x228 = -1;
int32_t t56 = -33178436;
int8_t x231 = -1;
static int32_t t57 = -11292;
static volatile int16_t x233 = -1;
int32_t t58 = 1;
int32_t x240 = INT32_MIN;
volatile int32_t t59 = -7;
int16_t x247 = 3;
uint64_t x248 = 176022244193117858LLU;
int32_t x249 = INT32_MAX;
volatile int8_t x250 = 15;
static int8_t x253 = INT8_MIN;
uint32_t x259 = 256924447U;
int32_t x265 = -1;
volatile uint16_t x271 = 3U;
uint32_t x278 = 1576618U;
int32_t t69 = 30328120;
static int8_t x284 = INT8_MIN;
uint64_t x285 = UINT64_MAX;
volatile int64_t x292 = -1LL;
int64_t x297 = INT64_MIN;
static int16_t x298 = -2;
volatile int32_t t75 = 172177;
uint64_t x309 = 122519501469596LLU;
static int8_t x317 = INT8_MIN;
int32_t t80 = 767;
static uint8_t x331 = 0U;
int32_t t82 = 16155827;
int64_t x339 = INT64_MIN;
static uint8_t x341 = 0U;
int64_t x346 = INT64_MAX;
volatile uint64_t x355 = 57956047145755LLU;
int32_t t89 = -961;
uint64_t x367 = 234LLU;
volatile int32_t t92 = -60;
static volatile int32_t x374 = -3508382;
int32_t t94 = -457768823;
int8_t x393 = -1;
uint16_t x394 = 0U;
volatile uint16_t x395 = UINT16_MAX;
volatile int32_t t101 = 106496883;
volatile int32_t t104 = 5;
static int64_t x423 = -2141896802625LL;
int32_t t106 = -27591;
int64_t x429 = -1LL;
uint32_t x431 = 33U;
static volatile int32_t x433 = -1;
int32_t t108 = -39684254;
volatile uint8_t x453 = 1U;
int32_t x462 = -1;
static volatile int32_t x464 = 499;
int32_t t116 = 11435287;
static uint8_t x469 = UINT8_MAX;
int32_t x473 = 30;
uint16_t x480 = 9838U;
volatile int8_t x485 = 6;
int64_t x486 = 109LL;
volatile uint16_t x493 = 2U;
uint64_t x495 = 167LLU;
static volatile int64_t x498 = -1LL;
volatile int32_t x501 = -1;
uint16_t x504 = UINT16_MAX;
int16_t x509 = -1;
int64_t x510 = 40873LL;
int32_t t127 = 36746;
static uint32_t x515 = 51252U;
static int64_t x518 = -1LL;
volatile int64_t x519 = -1LL;
int16_t x521 = -1;
int8_t x531 = -1;
int32_t x536 = INT32_MAX;
int32_t x538 = INT32_MIN;
volatile int32_t x539 = INT32_MIN;
volatile int32_t t134 = -6421;
static volatile uint8_t x545 = 8U;
static int64_t x550 = 2009817261983083996LL;
static int64_t x556 = -772486232323161LL;
int64_t x560 = -1LL;
static int32_t x563 = INT32_MIN;
int8_t x564 = -4;
uint32_t x565 = 14059U;
int64_t x567 = -1LL;
uint64_t x579 = UINT64_MAX;
volatile int32_t t144 = 203318893;
static int32_t x582 = 110462015;
volatile int32_t t145 = -16019764;
volatile int32_t t146 = 90187414;
static int8_t x589 = -9;
uint64_t x590 = 0LLU;
static int8_t x593 = -1;
int32_t x596 = -3341;
static volatile int32_t t149 = 114026500;
uint64_t x609 = 32213947601LLU;
static uint32_t x613 = 160683586U;
uint32_t x615 = 25U;
int32_t x617 = INT32_MIN;
static volatile int64_t x624 = -1LL;
int32_t x627 = INT32_MIN;
uint8_t x629 = 19U;
int8_t x631 = -62;
int64_t x636 = INT64_MAX;
volatile uint64_t x638 = 49600125953LLU;
uint16_t x643 = 1414U;
volatile int32_t x644 = -45238;
int32_t x648 = INT32_MAX;
int64_t x649 = INT64_MAX;
volatile int8_t x654 = INT8_MIN;
int32_t t163 = -60;
int16_t x660 = INT16_MIN;
int64_t x664 = -19416932LL;
int64_t x673 = 94641919161460372LL;
int32_t x675 = -1;
int16_t x679 = INT16_MAX;
static volatile int64_t x686 = -9LL;
volatile uint16_t x687 = 20U;
volatile int16_t x692 = INT16_MIN;
volatile uint16_t x693 = 1754U;
int16_t x697 = -60;
static int64_t x698 = -1LL;
static uint8_t x702 = 4U;
volatile uint32_t x705 = 228488U;
static uint16_t x708 = 1997U;
int8_t x714 = 1;
volatile int32_t t178 = -1662;
volatile uint32_t x719 = 6515U;
int64_t x729 = -1631214420633847LL;
int64_t x731 = INT64_MAX;
volatile int32_t x733 = -1;
int32_t x735 = 1;
int16_t x736 = INT16_MIN;
int32_t t183 = 54750;
uint64_t x737 = UINT64_MAX;
uint32_t x742 = 1104U;
volatile int64_t x745 = INT64_MAX;
int64_t x747 = -292419385LL;
static int32_t x751 = INT32_MIN;
int32_t x752 = -1;
int8_t x757 = INT8_MIN;
uint32_t x769 = 1U;
volatile uint8_t x770 = 82U;
uint64_t x777 = 413LLU;
int8_t x786 = INT8_MIN;
uint32_t x787 = 8349U;
int16_t x789 = -14633;
static uint64_t x793 = UINT64_MAX;


void f0(void) {
    	int32_t x2 = -10214062;
	int64_t x3 = -1LL;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 885;

    t0 = (((x1>x2)&x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	volatile int32_t x7 = 34;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -159335;

    t1 = (((x5>x6)&x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int32_t x10 = INT32_MIN;
	int32_t x11 = -1;
	int64_t x12 = -1LL;
	static int32_t t2 = 0;

    t2 = (((x9>x10)&x11)<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 2892413362976544531LLU;
	volatile int64_t x14 = INT64_MIN;
	int32_t x15 = -20;
	static int32_t x16 = INT32_MIN;
	int32_t t3 = 305317;

    t3 = (((x13>x14)&x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int8_t x18 = -1;
	int64_t x20 = -3154955862LL;
	volatile int32_t t4 = -2;

    t4 = (((x17>x18)&x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	volatile int64_t x24 = INT64_MIN;
	static int32_t t5 = 1182556;

    t5 = (((x21>x22)&x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	uint32_t x27 = 14763U;
	uint16_t x28 = UINT16_MAX;
	static int32_t t6 = 1920;

    t6 = (((x25>x26)&x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 2422967849662084308LLU;
	static int16_t x30 = 157;
	int8_t x32 = -1;
	int32_t t7 = 2;

    t7 = (((x29>x30)&x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	volatile int32_t t8 = 3308;

    t8 = (((x33>x34)&x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	int32_t x38 = -28063234;
	int64_t x39 = INT64_MAX;
	volatile uint64_t x40 = 358956887262LLU;
	int32_t t9 = -475992;

    t9 = (((x37>x38)&x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int8_t x42 = -15;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -1806247;

    t10 = (((x41>x42)&x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int32_t x46 = INT32_MIN;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -1968567;

    t11 = (((x45>x46)&x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = 2;
	volatile int32_t t12 = -123500;

    t12 = (((x49>x50)&x51)<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	static int64_t x54 = -1LL;
	static int16_t x55 = INT16_MAX;
	volatile int32_t t13 = -6746432;

    t13 = (((x53>x54)&x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 1184265773LLU;
	static int8_t x58 = INT8_MIN;
	uint32_t x59 = 137774U;
	int8_t x60 = -31;
	int32_t t14 = 7081328;

    t14 = (((x57>x58)&x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x62 = 2U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = -23;
	volatile int32_t t15 = -11600;

    t15 = (((x61>x62)&x63)<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 1;
	int8_t x67 = -1;
	int32_t t16 = -3397367;

    t16 = (((x65>x66)&x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = 0LL;
	static volatile uint16_t x70 = UINT16_MAX;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t17 = -171098737;

    t17 = (((x69>x70)&x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MIN;
	uint64_t x74 = 1851811140321468LLU;
	uint16_t x75 = 82U;
	static uint16_t x76 = 53U;
	int32_t t18 = 387;

    t18 = (((x73>x74)&x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 0;
	int16_t x78 = 3;
	volatile int64_t x79 = INT64_MIN;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 0;

    t19 = (((x77>x78)&x79)<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 237464U;
	static uint16_t x82 = UINT16_MAX;
	uint32_t x84 = 263U;
	int32_t t20 = 19;

    t20 = (((x81>x82)&x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x85 = INT16_MAX;
	int32_t x87 = INT32_MAX;
	int8_t x88 = -1;
	volatile int32_t t21 = 146;

    t21 = (((x85>x86)&x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1;
	uint64_t x90 = UINT64_MAX;
	uint8_t x91 = 62U;
	volatile int16_t x92 = 32;

    t22 = (((x89>x90)&x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 34494U;
	int16_t x94 = INT16_MIN;
	int8_t x95 = 16;
	int64_t x96 = 18822866749280658LL;
	int32_t t23 = -13;

    t23 = (((x93>x94)&x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	uint32_t x100 = 12U;
	int32_t t24 = 139;

    t24 = (((x97>x98)&x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	int64_t x103 = -335427242LL;
	volatile int64_t x104 = -1LL;
	volatile int32_t t25 = -24969771;

    t25 = (((x101>x102)&x103)<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x105 = 56U;
	static volatile int64_t x106 = INT64_MIN;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = -13;
	volatile int32_t t26 = 213;

    t26 = (((x105>x106)&x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int8_t x111 = 37;
	int32_t x112 = INT32_MIN;

    t27 = (((x109>x110)&x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 1U;
	volatile int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	static volatile int32_t t28 = -900099;

    t28 = (((x113>x114)&x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 150230396824297LLU;
	int64_t x118 = INT64_MAX;
	volatile int64_t x119 = INT64_MIN;
	int32_t t29 = -1;

    t29 = (((x117>x118)&x119)<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x124 = -1;
	volatile int32_t t30 = -8;

    t30 = (((x121>x122)&x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = 387643315934110LL;
	volatile uint64_t x127 = UINT64_MAX;
	static int64_t x128 = INT64_MIN;
	static int32_t t31 = -735586;

    t31 = (((x125>x126)&x127)<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 4511LLU;
	int64_t x130 = 2543079333LL;
	uint64_t x131 = 1006820294582647LLU;
	static int32_t x132 = INT32_MAX;
	volatile int32_t t32 = 58;

    t32 = (((x129>x130)&x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 2833LLU;
	int16_t x134 = INT16_MAX;
	int64_t x135 = -886LL;
	static int16_t x136 = INT16_MIN;
	static int32_t t33 = -1;

    t33 = (((x133>x134)&x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 7726001522736802607LLU;
	int64_t x138 = -105454LL;
	volatile int16_t x139 = INT16_MIN;
	volatile uint64_t x140 = UINT64_MAX;
	int32_t t34 = 58;

    t34 = (((x137>x138)&x139)<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = 141993601LL;
	static volatile int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 3951;

    t35 = (((x141>x142)&x143)<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint64_t x147 = 542084583LLU;
	volatile int8_t x148 = -1;
	int32_t t36 = 5;

    t36 = (((x145>x146)&x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x150 = -7LL;
	static int32_t x151 = -2;
	static volatile int32_t t37 = -683975320;

    t37 = (((x149>x150)&x151)<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -181851775791105LL;
	uint32_t x154 = UINT32_MAX;
	int8_t x156 = -1;
	static volatile int32_t t38 = -1230355;

    t38 = (((x153>x154)&x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 358225079U;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;

    t39 = (((x157>x158)&x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 351162754859LLU;
	int64_t x162 = -1LL;
	int8_t x163 = -45;
	int16_t x164 = -1;
	volatile int32_t t40 = 31287314;

    t40 = (((x161>x162)&x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = -1;
	int32_t x166 = -919533;
	volatile int16_t x167 = INT16_MIN;
	volatile int32_t t41 = 24171706;

    t41 = (((x165>x166)&x167)<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x170 = INT32_MIN;
	uint16_t x171 = 18282U;
	int32_t t42 = -237319328;

    t42 = (((x169>x170)&x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x174 = UINT32_MAX;
	static int64_t x175 = 10077LL;
	int32_t t43 = 3406750;

    t43 = (((x173>x174)&x175)<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	int8_t x179 = 0;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 257776;

    t44 = (((x177>x178)&x179)<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	int16_t x182 = -1;
	int32_t x184 = 3;
	volatile int32_t t45 = -784169;

    t45 = (((x181>x182)&x183)<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -793125LL;
	int8_t x186 = INT8_MIN;
	volatile int8_t x187 = 6;
	int32_t t46 = -1127;

    t46 = (((x185>x186)&x187)<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint32_t x189 = 503085U;
	volatile uint8_t x190 = 1U;
	uint16_t x191 = 30U;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = -168176604;

    t47 = (((x189>x190)&x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x194 = 1U;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = 6035529;

    t48 = (((x193>x194)&x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = 23;
	uint32_t x198 = 77563U;
	volatile int64_t x199 = 231000932192262786LL;
	uint16_t x200 = 22U;
	volatile int32_t t49 = -2;

    t49 = (((x197>x198)&x199)<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	int8_t x202 = -1;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -6807594;

    t50 = (((x201>x202)&x203)<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 586303LL;
	static uint8_t x206 = UINT8_MAX;
	volatile int8_t x208 = 45;
	volatile int32_t t51 = -2;

    t51 = (((x205>x206)&x207)<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x210 = UINT64_MAX;
	uint8_t x211 = 20U;
	volatile int32_t t52 = -12462217;

    t52 = (((x209>x210)&x211)<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MAX;
	uint64_t x215 = 8LLU;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -2505578;

    t53 = (((x213>x214)&x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	int16_t x218 = -29;
	int16_t x219 = 5674;
	int32_t x220 = 1004603;
	static int32_t t54 = 30940;

    t54 = (((x217>x218)&x219)<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x223 = INT8_MAX;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = -791;

    t55 = (((x221>x222)&x223)<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 712;
	uint64_t x226 = 25408836876908LLU;
	static int16_t x227 = -3;

    t56 = (((x225>x226)&x227)<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static uint8_t x230 = 0U;
	uint32_t x232 = 47348U;

    t57 = (((x229>x230)&x231)<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = -115;
	int32_t x235 = INT32_MAX;
	int16_t x236 = -1;

    t58 = (((x233>x234)&x235)<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x237 = 9572U;
	volatile int16_t x238 = INT16_MIN;
	uint32_t x239 = 8U;

    t59 = (((x237>x238)&x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 24;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = UINT8_MAX;
	uint8_t x244 = 25U;
	volatile int32_t t60 = 12;

    t60 = (((x241>x242)&x243)<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = 91874;
	static uint16_t x246 = 5427U;
	int32_t t61 = 160167;

    t61 = (((x245>x246)&x247)<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x251 = INT64_MAX;
	int32_t x252 = -6511446;
	volatile int32_t t62 = 311;

    t62 = (((x249>x250)&x251)<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = 31;
	static uint64_t x255 = 68LLU;
	uint64_t x256 = 4139472806068871792LLU;
	volatile int32_t t63 = -6281;

    t63 = (((x253>x254)&x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 10U;
	int16_t x258 = -1;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = -3639;

    t64 = (((x257>x258)&x259)<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MAX;
	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = 10055LL;
	static int32_t t65 = 21313;

    t65 = (((x261>x262)&x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x266 = 2U;
	uint32_t x267 = UINT32_MAX;
	static volatile int32_t x268 = INT32_MIN;
	static int32_t t66 = -12603;

    t66 = (((x265>x266)&x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = 0U;
	uint16_t x270 = 14372U;
	static int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 88;

    t67 = (((x269>x270)&x271)<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	static int16_t x274 = INT16_MIN;
	int8_t x275 = -4;
	static int64_t x276 = 222LL;
	static volatile int32_t t68 = -1253418;

    t68 = (((x273>x274)&x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = 1;
	uint16_t x279 = 166U;
	static uint32_t x280 = 535277U;

    t69 = (((x277>x278)&x279)<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 52U;
	int8_t x283 = INT8_MIN;
	volatile int32_t t70 = -784591;

    t70 = (((x281>x282)&x283)<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = 0;
	int32_t x287 = -1;
	volatile uint32_t x288 = UINT32_MAX;
	int32_t t71 = 81579;

    t71 = (((x285>x286)&x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	static int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	volatile int32_t t72 = -1;

    t72 = (((x289>x290)&x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	int16_t x295 = -1;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -59;

    t73 = (((x293>x294)&x295)<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x299 = INT32_MIN;
	static volatile uint16_t x300 = 207U;
	volatile int32_t t74 = 6;

    t74 = (((x297>x298)&x299)<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = -1LL;
	volatile uint8_t x302 = 1U;
	int32_t x303 = -1;
	volatile uint64_t x304 = 15154272693397LLU;

    t75 = (((x301>x302)&x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 148435U;
	static int16_t x306 = INT16_MAX;
	volatile int16_t x307 = -10265;
	int8_t x308 = INT8_MIN;
	static int32_t t76 = -70;

    t76 = (((x305>x306)&x307)<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x310 = 0;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 1940678866483116258LLU;
	static int32_t t77 = 1;

    t77 = (((x309>x310)&x311)<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x313 = 125U;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -1;
	int16_t x316 = INT16_MAX;
	int32_t t78 = -1;

    t78 = (((x313>x314)&x315)<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x318 = 8571U;
	int32_t x319 = INT32_MIN;
	int8_t x320 = -3;
	static volatile int32_t t79 = 983023;

    t79 = (((x317>x318)&x319)<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	static int64_t x322 = INT64_MAX;
	static volatile int64_t x323 = INT64_MIN;
	static volatile uint64_t x324 = UINT64_MAX;

    t80 = (((x321>x322)&x323)<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 16119U;
	volatile int64_t x326 = 215392062139724LL;
	int64_t x327 = 159LL;
	volatile uint16_t x328 = 6U;
	int32_t t81 = 1;

    t81 = (((x325>x326)&x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 10904LLU;
	volatile int32_t x330 = INT32_MIN;
	static int64_t x332 = INT64_MIN;

    t82 = (((x329>x330)&x331)<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = -15;
	uint16_t x334 = UINT16_MAX;
	uint64_t x335 = 3397420524418423LLU;
	int8_t x336 = 2;
	int32_t t83 = -404880260;

    t83 = (((x333>x334)&x335)<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = -1;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 42550;

    t84 = (((x337>x338)&x339)<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = -1;
	static volatile int64_t x343 = -15610255182LL;
	int8_t x344 = -1;
	volatile int32_t t85 = -303356;

    t85 = (((x341>x342)&x343)<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	int64_t x347 = -1LL;
	volatile int64_t x348 = 232329118541093LL;
	volatile int32_t t86 = 8380186;

    t86 = (((x345>x346)&x347)<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 1LLU;
	volatile int8_t x352 = INT8_MIN;
	static int32_t t87 = -52;

    t87 = (((x349>x350)&x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MAX;
	static int32_t x354 = -1;
	int64_t x356 = 355270LL;
	volatile int32_t t88 = 820;

    t88 = (((x353>x354)&x355)<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	volatile int32_t x358 = -1;
	uint32_t x359 = 60U;
	static uint32_t x360 = 1U;

    t89 = (((x357>x358)&x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	uint32_t x362 = 666U;
	int16_t x363 = -1;
	volatile int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 915;

    t90 = (((x361>x362)&x363)<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	uint8_t x366 = 2U;
	static volatile int8_t x368 = -1;
	int32_t t91 = -173626;

    t91 = (((x365>x366)&x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -168;
	uint8_t x370 = 6U;
	int32_t x371 = INT32_MIN;
	uint16_t x372 = UINT16_MAX;

    t92 = (((x369>x370)&x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 52;
	int16_t x375 = -1;
	static int16_t x376 = 21;
	static volatile int32_t t93 = 729277;

    t93 = (((x373>x374)&x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	volatile int32_t x378 = -2790;
	int8_t x379 = -1;
	int32_t x380 = INT32_MIN;

    t94 = (((x377>x378)&x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x381 = UINT8_MAX;
	static volatile int64_t x382 = INT64_MIN;
	int8_t x383 = 16;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = -1895678;

    t95 = (((x381>x382)&x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = INT32_MIN;
	volatile int32_t x386 = -1;
	static int32_t x387 = -611;
	static uint16_t x388 = 9696U;
	int32_t t96 = -530149147;

    t96 = (((x385>x386)&x387)<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	uint32_t x390 = 505U;
	volatile int64_t x391 = INT64_MAX;
	static volatile int64_t x392 = INT64_MIN;
	int32_t t97 = -982575;

    t97 = (((x389>x390)&x391)<=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x396 = 2090213U;
	int32_t t98 = -229305;

    t98 = (((x393>x394)&x395)<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -1;
	volatile uint8_t x398 = 83U;
	static int64_t x399 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = -6861554;

    t99 = (((x397>x398)&x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MIN;
	int32_t x402 = 1;
	int32_t x403 = -141326;
	int16_t x404 = -1;
	int32_t t100 = -3;

    t100 = (((x401>x402)&x403)<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MIN;
	int16_t x406 = -3;
	volatile int16_t x407 = -1;
	volatile int16_t x408 = INT16_MIN;

    t101 = (((x405>x406)&x407)<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	static uint32_t x410 = 161165U;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = 3269U;
	int32_t t102 = 1557082;

    t102 = (((x409>x410)&x411)<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MAX;
	int32_t x414 = -58835944;
	static int64_t x415 = -1LL;
	volatile int8_t x416 = 3;
	int32_t t103 = -6314169;

    t103 = (((x413>x414)&x415)<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	static uint16_t x418 = 17U;
	volatile uint64_t x419 = UINT64_MAX;
	volatile uint64_t x420 = 6146681640278528LLU;

    t104 = (((x417>x418)&x419)<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MIN;
	volatile int8_t x422 = -3;
	int64_t x424 = -1LL;
	volatile int32_t t105 = -166273730;

    t105 = (((x421>x422)&x423)<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 37LL;
	int32_t x426 = -50379175;
	volatile uint16_t x427 = 15U;
	int32_t x428 = -1;

    t106 = (((x425>x426)&x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x430 = 541759360371083197LLU;
	uint32_t x432 = 1048U;
	int32_t t107 = -226241;

    t107 = (((x429>x430)&x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = INT8_MIN;
	static uint32_t x435 = 417739U;
	static int64_t x436 = 1494602948654LL;

    t108 = (((x433>x434)&x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int8_t x438 = -1;
	int32_t x439 = INT32_MIN;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t109 = -1;

    t109 = (((x437>x438)&x439)<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int64_t x442 = 100103490LL;
	int16_t x443 = INT16_MAX;
	static volatile int16_t x444 = -13;
	int32_t t110 = 106;

    t110 = (((x441>x442)&x443)<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int16_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = UINT32_MAX;
	int32_t t111 = 3;

    t111 = (((x445>x446)&x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -10;
	volatile uint16_t x450 = 13758U;
	volatile int32_t x451 = 4;
	uint64_t x452 = 391509954125LLU;
	volatile int32_t t112 = 3;

    t112 = (((x449>x450)&x451)<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = 14U;
	static uint32_t x455 = UINT32_MAX;
	uint32_t x456 = 796U;
	volatile int32_t t113 = -46155544;

    t113 = (((x453>x454)&x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	int16_t x458 = INT16_MAX;
	static uint16_t x459 = UINT16_MAX;
	int64_t x460 = -1LL;
	volatile int32_t t114 = 14;

    t114 = (((x457>x458)&x459)<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 59U;
	int32_t x463 = INT32_MIN;
	int32_t t115 = 0;

    t115 = (((x461>x462)&x463)<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	static uint16_t x466 = UINT16_MAX;
	int32_t x467 = INT32_MIN;
	int16_t x468 = -1;

    t116 = (((x465>x466)&x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = UINT64_MAX;
	uint8_t x471 = 3U;
	static volatile int8_t x472 = INT8_MIN;
	static int32_t t117 = 16326576;

    t117 = (((x469>x470)&x471)<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x474 = 17929U;
	static int8_t x475 = -1;
	int32_t x476 = INT32_MIN;
	int32_t t118 = 514507096;

    t118 = (((x473>x474)&x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	static volatile int8_t x478 = -42;
	int8_t x479 = -1;
	int32_t t119 = 9;

    t119 = (((x477>x478)&x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	int32_t x482 = INT32_MIN;
	static int16_t x483 = INT16_MAX;
	int32_t x484 = -1;
	static volatile int32_t t120 = 690135395;

    t120 = (((x481>x482)&x483)<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x487 = INT64_MIN;
	uint32_t x488 = 26924U;
	int32_t t121 = -264943839;

    t121 = (((x485>x486)&x487)<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 2952;
	int32_t x490 = INT32_MAX;
	int32_t x491 = -1;
	volatile uint64_t x492 = 18415696855121057LLU;
	int32_t t122 = -109;

    t122 = (((x489>x490)&x491)<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x494 = 16U;
	int32_t x496 = INT32_MIN;
	static volatile int32_t t123 = -284272;

    t123 = (((x493>x494)&x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int32_t x499 = INT32_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t124 = 28945691;

    t124 = (((x497>x498)&x499)<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 8U;
	static int64_t x503 = INT64_MIN;
	volatile int32_t t125 = -3769;

    t125 = (((x501>x502)&x503)<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MAX;
	int64_t x506 = INT64_MIN;
	static int8_t x507 = INT8_MAX;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = 796331;

    t126 = (((x505>x506)&x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x511 = -26;
	uint8_t x512 = 35U;

    t127 = (((x509>x510)&x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int16_t x514 = INT16_MAX;
	volatile uint8_t x516 = 20U;
	static int32_t t128 = -15590;

    t128 = (((x513>x514)&x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -933LL;
	static volatile int8_t x520 = INT8_MIN;
	static int32_t t129 = -7465822;

    t129 = (((x517>x518)&x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x522 = 0U;
	uint16_t x523 = 337U;
	uint16_t x524 = 2033U;
	int32_t t130 = -199625582;

    t130 = (((x521>x522)&x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	uint8_t x526 = 88U;
	static uint32_t x527 = 42043U;
	volatile int32_t x528 = INT32_MIN;
	volatile int32_t t131 = 3;

    t131 = (((x525>x526)&x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -1;
	volatile int32_t x530 = -261653;
	static int8_t x532 = 1;
	volatile int32_t t132 = -363;

    t132 = (((x529>x530)&x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile uint32_t x534 = UINT32_MAX;
	uint64_t x535 = 860733780445211LLU;
	volatile int32_t t133 = -112548349;

    t133 = (((x533>x534)&x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	uint32_t x540 = 2U;

    t134 = (((x537>x538)&x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -134;
	int8_t x542 = 19;
	static int32_t x543 = INT32_MIN;
	int8_t x544 = -1;
	static volatile int32_t t135 = -2;

    t135 = (((x541>x542)&x543)<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x546 = -2;
	uint8_t x547 = UINT8_MAX;
	int16_t x548 = 281;
	int32_t t136 = -4608;

    t136 = (((x545>x546)&x547)<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 0U;
	static uint64_t x551 = 502878LLU;
	int64_t x552 = INT64_MIN;
	volatile int32_t t137 = 31;

    t137 = (((x549>x550)&x551)<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = INT16_MIN;
	int32_t x554 = INT32_MAX;
	int32_t x555 = -1;
	volatile int32_t t138 = -590058651;

    t138 = (((x553>x554)&x555)<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	int32_t x558 = INT32_MIN;
	int32_t x559 = INT32_MIN;
	int32_t t139 = 0;

    t139 = (((x557>x558)&x559)<=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = UINT32_MAX;
	int16_t x562 = INT16_MAX;
	volatile int32_t t140 = 435000;

    t140 = (((x561>x562)&x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x566 = INT32_MAX;
	static int32_t x568 = -12782;
	volatile int32_t t141 = -7;

    t141 = (((x565>x566)&x567)<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -62852;
	uint32_t x570 = UINT32_MAX;
	static int64_t x571 = -35773178381072LL;
	volatile int32_t x572 = -11;
	static int32_t t142 = 13611;

    t142 = (((x569>x570)&x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 310U;
	int8_t x574 = -1;
	static int64_t x575 = INT64_MIN;
	int32_t x576 = 1850;
	static volatile int32_t t143 = -81;

    t143 = (((x573>x574)&x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MAX;
	int8_t x578 = INT8_MIN;
	volatile uint16_t x580 = UINT16_MAX;

    t144 = (((x577>x578)&x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 1U;
	int8_t x583 = INT8_MIN;
	int16_t x584 = 1053;

    t145 = (((x581>x582)&x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int16_t x586 = 358;
	volatile int32_t x587 = INT32_MIN;
	static int32_t x588 = -1282814;

    t146 = (((x585>x586)&x587)<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x591 = -1;
	uint64_t x592 = 118178LLU;
	static int32_t t147 = -7;

    t147 = (((x589>x590)&x591)<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = INT64_MAX;
	uint64_t x595 = UINT64_MAX;
	int32_t t148 = 90135;

    t148 = (((x593>x594)&x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = 96940615;
	int64_t x598 = -2271898372902406LL;
	static int64_t x599 = INT64_MAX;
	volatile int32_t x600 = INT32_MAX;

    t149 = (((x597>x598)&x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = INT8_MAX;
	static int32_t x602 = INT32_MAX;
	uint16_t x603 = UINT16_MAX;
	uint8_t x604 = 1U;
	volatile int32_t t150 = 250183;

    t150 = (((x601>x602)&x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x606 = 2034322U;
	static int64_t x607 = 9745LL;
	volatile int16_t x608 = INT16_MIN;
	volatile int32_t t151 = -79947;

    t151 = (((x605>x606)&x607)<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = INT8_MAX;
	static int32_t x611 = 243635;
	volatile int32_t x612 = INT32_MIN;
	volatile int32_t t152 = 7;

    t152 = (((x609>x610)&x611)<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x614 = INT64_MIN;
	static volatile uint64_t x616 = UINT64_MAX;
	int32_t t153 = -6321442;

    t153 = (((x613>x614)&x615)<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x618 = -1LL;
	static int16_t x619 = 3648;
	static int16_t x620 = 3924;
	volatile int32_t t154 = 40310432;

    t154 = (((x617>x618)&x619)<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -15;
	int16_t x622 = 0;
	static int32_t x623 = INT32_MAX;
	static int32_t t155 = 3743871;

    t155 = (((x621>x622)&x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 7951318U;
	uint8_t x626 = 2U;
	volatile int32_t x628 = -1;
	int32_t t156 = 189182;

    t156 = (((x625>x626)&x627)<=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x630 = INT8_MIN;
	static uint32_t x632 = 6005U;
	int32_t t157 = 3010;

    t157 = (((x629>x630)&x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	static int64_t x634 = INT64_MAX;
	int64_t x635 = INT64_MIN;
	static volatile int32_t t158 = 62442;

    t158 = (((x633>x634)&x635)<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x637 = 36U;
	int16_t x639 = -1;
	static uint64_t x640 = 66246942093850LLU;
	int32_t t159 = -1;

    t159 = (((x637>x638)&x639)<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	uint8_t x642 = 4U;
	static int32_t t160 = 1928;

    t160 = (((x641>x642)&x643)<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	volatile int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MAX;
	int32_t t161 = -434;

    t161 = (((x645>x646)&x647)<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = 1758365275595142317LL;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = INT8_MIN;
	volatile int32_t t162 = -25508;

    t162 = (((x649>x650)&x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = -1;
	static volatile int32_t x655 = INT32_MIN;
	int16_t x656 = -7283;

    t163 = (((x653>x654)&x655)<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int8_t x658 = INT8_MAX;
	uint16_t x659 = UINT16_MAX;
	int32_t t164 = 36726618;

    t164 = (((x657>x658)&x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -6533805LL;
	volatile int64_t x662 = INT64_MIN;
	uint32_t x663 = 1U;
	volatile int32_t t165 = 2053538;

    t165 = (((x661>x662)&x663)<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 148U;
	volatile int8_t x666 = INT8_MIN;
	int32_t x667 = -1;
	uint64_t x668 = UINT64_MAX;
	volatile int32_t t166 = 362435598;

    t166 = (((x665>x666)&x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = -1;
	static volatile int16_t x670 = -60;
	int64_t x671 = -1LL;
	int16_t x672 = INT16_MIN;
	int32_t t167 = -12;

    t167 = (((x669>x670)&x671)<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = INT32_MIN;
	int16_t x676 = INT16_MIN;
	static volatile int32_t t168 = -358411;

    t168 = (((x673>x674)&x675)<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -190529;
	static uint16_t x678 = UINT16_MAX;
	int32_t x680 = -116054033;
	volatile int32_t t169 = 106;

    t169 = (((x677>x678)&x679)<=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	static int8_t x682 = INT8_MIN;
	int32_t x683 = -32379808;
	static volatile int32_t x684 = -1536;
	volatile int32_t t170 = -42;

    t170 = (((x681>x682)&x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = 1;
	int64_t x688 = INT64_MIN;
	volatile int32_t t171 = 26491748;

    t171 = (((x685>x686)&x687)<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -3181;
	static uint32_t x690 = UINT32_MAX;
	int32_t x691 = -30226;
	volatile int32_t t172 = -119213;

    t172 = (((x689>x690)&x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MAX;
	volatile int64_t x695 = 124710156LL;
	int16_t x696 = INT16_MAX;
	volatile int32_t t173 = -523278;

    t173 = (((x693>x694)&x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x699 = 2U;
	int16_t x700 = INT16_MAX;
	static int32_t t174 = -65312;

    t174 = (((x697>x698)&x699)<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = 57U;
	volatile uint64_t x703 = 379030LLU;
	volatile uint16_t x704 = 13U;
	int32_t t175 = -6;

    t175 = (((x701>x702)&x703)<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 2370LLU;
	volatile int8_t x707 = 0;
	volatile int32_t t176 = 3;

    t176 = (((x705>x706)&x707)<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 5U;
	int16_t x710 = -4948;
	int8_t x711 = INT8_MAX;
	int16_t x712 = INT16_MAX;
	static volatile int32_t t177 = 164;

    t177 = (((x709>x710)&x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -1;
	static int32_t x715 = -2835;
	int32_t x716 = INT32_MIN;

    t178 = (((x713>x714)&x715)<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	static volatile uint16_t x718 = 22U;
	static int64_t x720 = INT64_MIN;
	int32_t t179 = -588589722;

    t179 = (((x717>x718)&x719)<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = INT64_MIN;
	uint32_t x722 = 5737U;
	int64_t x723 = INT64_MIN;
	int16_t x724 = INT16_MAX;
	int32_t t180 = 128829;

    t180 = (((x721>x722)&x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	volatile int64_t x726 = 7638359241308042LL;
	int16_t x727 = INT16_MIN;
	int8_t x728 = -1;
	static int32_t t181 = 177304060;

    t181 = (((x725>x726)&x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = -6;
	volatile int64_t x732 = INT64_MIN;
	int32_t t182 = 231;

    t182 = (((x729>x730)&x731)<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = -1;

    t183 = (((x733>x734)&x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = INT32_MAX;
	static volatile uint32_t x739 = 7871588U;
	static int64_t x740 = 40524937337LL;
	int32_t t184 = -39605;

    t184 = (((x737>x738)&x739)<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MIN;
	volatile int8_t x743 = INT8_MIN;
	uint64_t x744 = 0LLU;
	static int32_t t185 = -118851;

    t185 = (((x741>x742)&x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x746 = INT32_MIN;
	uint64_t x748 = 28267392707LLU;
	int32_t t186 = 339488;

    t186 = (((x745>x746)&x747)<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	static int64_t x750 = INT64_MIN;
	static volatile int32_t t187 = -484;

    t187 = (((x749>x750)&x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 3U;
	uint64_t x754 = UINT64_MAX;
	int16_t x755 = -1;
	uint16_t x756 = UINT16_MAX;
	static volatile int32_t t188 = -120720160;

    t188 = (((x753>x754)&x755)<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = 8;
	int16_t x759 = INT16_MIN;
	int32_t x760 = INT32_MAX;
	static int32_t t189 = -63703;

    t189 = (((x757>x758)&x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = 2;
	int8_t x762 = INT8_MAX;
	int32_t x763 = INT32_MAX;
	uint64_t x764 = 18751129018724618LLU;
	static volatile int32_t t190 = -3494089;

    t190 = (((x761>x762)&x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint64_t x765 = 36243813954256716LLU;
	uint8_t x766 = 2U;
	int32_t x767 = -1;
	static uint16_t x768 = 12799U;
	static int32_t t191 = 32;

    t191 = (((x765>x766)&x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x771 = 2;
	volatile uint16_t x772 = 4892U;
	int32_t t192 = -24292;

    t192 = (((x769>x770)&x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	uint8_t x774 = 2U;
	int8_t x775 = -10;
	int8_t x776 = INT8_MIN;
	volatile int32_t t193 = -28945;

    t193 = (((x773>x774)&x775)<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = 1;
	static volatile int8_t x779 = 1;
	static volatile int16_t x780 = -1;
	int32_t t194 = 2;

    t194 = (((x777>x778)&x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = -1;
	int8_t x782 = 61;
	volatile uint32_t x783 = 925829541U;
	int16_t x784 = -1;
	int32_t t195 = -1515277;

    t195 = (((x781>x782)&x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 746U;
	int8_t x788 = -35;
	int32_t t196 = -27733;

    t196 = (((x785>x786)&x787)<=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x790 = UINT16_MAX;
	int16_t x791 = 3;
	int32_t x792 = -1;
	volatile int32_t t197 = 13004463;

    t197 = (((x789>x790)&x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MAX;
	uint8_t x795 = UINT8_MAX;
	int16_t x796 = -1;
	int32_t t198 = 1303027;

    t198 = (((x793>x794)&x795)<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -41464340038LL;
	static uint32_t x798 = 404U;
	int8_t x799 = INT8_MAX;
	int16_t x800 = -844;
	volatile int32_t t199 = 37902;

    t199 = (((x797>x798)&x799)<=x800);

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

