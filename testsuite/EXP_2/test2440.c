
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

int16_t x1 = -4;
volatile int64_t x4 = INT64_MAX;
int64_t x6 = INT64_MIN;
volatile uint64_t t1 = 206049LLU;
static int32_t x9 = INT32_MIN;
static uint8_t x16 = 102U;
volatile uint16_t x28 = 105U;
int16_t x30 = 0;
static int16_t x31 = INT16_MIN;
static int8_t x39 = -1;
int64_t x48 = INT64_MAX;
static int32_t x51 = INT32_MIN;
volatile int16_t x53 = INT16_MAX;
int32_t t14 = 11731912;
int64_t x67 = -76LL;
volatile int64_t x70 = INT64_MIN;
uint64_t x77 = UINT64_MAX;
int64_t x78 = INT64_MIN;
uint8_t x83 = UINT8_MAX;
volatile int32_t t19 = -8;
volatile int32_t x92 = -1;
static int8_t x93 = INT8_MIN;
static uint8_t x95 = 116U;
static int64_t x105 = -624311415523509278LL;
int8_t x106 = INT8_MIN;
static uint64_t x121 = UINT64_MAX;
uint16_t x124 = UINT16_MAX;
uint16_t x132 = UINT16_MAX;
volatile int32_t t31 = -372;
int64_t x133 = 107LL;
int32_t t32 = 0;
uint16_t x137 = 1956U;
static uint16_t x138 = 0U;
int32_t t33 = 13;
uint16_t x141 = 59U;
int32_t x145 = INT32_MAX;
int32_t x146 = INT32_MIN;
uint32_t x151 = 4U;
int64_t x155 = INT64_MIN;
int32_t t39 = 1698350;
int32_t x175 = -43399958;
volatile uint32_t x178 = UINT32_MAX;
uint32_t x179 = 0U;
static volatile int8_t x180 = -5;
int64_t x184 = -306503141204878123LL;
int8_t x186 = INT8_MIN;
static int32_t x188 = -3390;
static int8_t x195 = 1;
int8_t x198 = INT8_MIN;
int8_t x200 = -1;
int8_t x205 = 0;
volatile int32_t t53 = 620586669;
int32_t x227 = 102922975;
int16_t x231 = INT16_MAX;
volatile int32_t x233 = 31272460;
int64_t x240 = INT64_MIN;
uint32_t x243 = 27583U;
volatile int32_t t58 = 4256942;
int32_t t60 = -52;
uint32_t x259 = 15584080U;
int64_t x274 = -1LL;
int64_t x279 = INT64_MIN;
int8_t x280 = INT8_MIN;
int16_t x283 = INT16_MIN;
static int32_t x288 = INT32_MIN;
volatile int16_t x292 = 20;
volatile int64_t x293 = INT64_MIN;
static int16_t x294 = INT16_MIN;
int64_t x295 = 373898316LL;
static uint16_t x302 = 3U;
int64_t x308 = INT64_MAX;
uint32_t x310 = UINT32_MAX;
uint8_t x315 = 31U;
int64_t x318 = INT64_MIN;
volatile int32_t x323 = 62288800;
static volatile int8_t x337 = -1;
static volatile int32_t x340 = INT32_MIN;
static volatile int32_t t81 = 2;
int64_t x342 = INT64_MIN;
int8_t x348 = 9;
int16_t x353 = -1;
static volatile int32_t x354 = INT32_MIN;
int32_t t85 = -3421;
int32_t x364 = 738700;
static int16_t x369 = -1460;
int64_t x378 = -1LL;
volatile uint64_t x383 = 2LLU;
int64_t x395 = -4020LL;
volatile int32_t t94 = 123473;
static uint8_t x401 = UINT8_MAX;
static int32_t x402 = INT32_MAX;
volatile int64_t x410 = -5311LL;
static volatile int16_t x411 = 156;
static volatile int32_t t97 = -7144;
int32_t x414 = INT32_MIN;
static volatile int64_t x421 = INT64_MAX;
int32_t x422 = -1;
uint8_t x423 = UINT8_MAX;
int32_t x424 = -1;
int32_t t100 = 128189938;
uint8_t x427 = 58U;
volatile int16_t x428 = -43;
uint32_t x438 = UINT32_MAX;
int8_t x441 = INT8_MIN;
uint8_t x445 = 31U;
int32_t x454 = -1;
volatile int32_t t108 = -51924;
uint64_t x459 = 5418944947754972LLU;
volatile int32_t t110 = 29;
int16_t x465 = INT16_MIN;
static int16_t x466 = -26;
uint32_t x476 = 14643987U;
int64_t x477 = -1LL;
int64_t x479 = -1LL;
int8_t x489 = INT8_MIN;
int32_t x496 = INT32_MIN;
int16_t x505 = INT16_MIN;
static int16_t x506 = INT16_MIN;
static int8_t x507 = INT8_MIN;
int8_t x520 = -1;
int32_t x529 = INT32_MAX;
int16_t x530 = -1;
static volatile int32_t t127 = -421;
uint8_t x534 = 1U;
static volatile int64_t t128 = -6LL;
int64_t x540 = INT64_MIN;
int8_t x547 = INT8_MIN;
volatile int32_t x549 = 31358;
static int8_t x555 = INT8_MIN;
static volatile int64_t t134 = -21510277LL;
static int32_t x568 = INT32_MIN;
int32_t x570 = INT32_MAX;
int32_t x577 = INT32_MIN;
int32_t x594 = INT32_MIN;
int64_t x597 = -8278426023157LL;
volatile int32_t t143 = -10623;
static int8_t x603 = INT8_MIN;
int64_t x606 = -1568407047776863LL;
uint32_t t146 = 6811U;
volatile int16_t x618 = INT16_MAX;
uint8_t x624 = 2U;
volatile int32_t t150 = 388527476;
int16_t x637 = -1;
int64_t t153 = 3850640639650LL;
static volatile uint64_t x644 = UINT64_MAX;
static uint8_t x650 = 7U;
volatile uint64_t t156 = 117539LLU;
int8_t x654 = -2;
int64_t x656 = -13796LL;
volatile int64_t t157 = -305913942756LL;
int16_t x659 = 1144;
volatile uint64_t x661 = 512LLU;
int32_t t159 = -1084;
volatile int32_t x665 = INT32_MIN;
volatile uint16_t x667 = 21436U;
int8_t x671 = INT8_MIN;
int32_t t163 = -385609500;
int64_t x689 = 886LL;
uint8_t x693 = 1U;
uint64_t x700 = UINT64_MAX;
int8_t x701 = 0;
int64_t x713 = INT64_MIN;
int8_t x715 = 0;
int16_t x720 = 14712;
int64_t x723 = INT64_MIN;
int32_t x728 = -1;
static volatile int16_t x731 = 8359;
int64_t x736 = INT64_MIN;
uint8_t x745 = 83U;
volatile int8_t x754 = 2;
uint8_t x759 = 13U;
volatile int32_t t183 = 1;
int64_t x762 = 2002630714LL;
int32_t x768 = -421;
static volatile uint64_t t188 = 57LLU;
uint32_t x782 = 3225911U;
static int32_t x785 = INT32_MAX;
static int16_t x790 = -196;
uint16_t x792 = 418U;
volatile int32_t x801 = 117;
int64_t x803 = 1LL;
int8_t x806 = 33;
int8_t x811 = INT8_MIN;
uint32_t t197 = 5663685U;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	uint8_t x3 = 0U;
	int64_t t0 = -95LL;

    t0 = ((x1!=(x2|x3))/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static int32_t x7 = INT32_MAX;
	uint64_t x8 = 369230259LLU;

    t1 = ((x5!=(x6|x7))/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x10 = 26U;
	static uint64_t x11 = 576866932LLU;
	static int32_t x12 = 3;
	int32_t t2 = 87;

    t2 = ((x9!=(x10|x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = -10;
	uint32_t x14 = 537801U;
	uint64_t x15 = UINT64_MAX;
	int32_t t3 = 1;

    t3 = ((x13!=(x14|x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MAX;
	uint64_t x18 = 9562205322LLU;
	uint64_t x19 = 13LLU;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 69808LL;

    t4 = ((x17!=(x18|x19))/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	int64_t x22 = 0LL;
	static int8_t x23 = INT8_MIN;
	int64_t x24 = 1937388338627LL;
	volatile int64_t t5 = -62LL;

    t5 = ((x21!=(x22|x23))/x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	uint8_t x26 = 3U;
	uint8_t x27 = UINT8_MAX;
	int32_t t6 = 3627788;

    t6 = ((x25!=(x26|x27))/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 1071U;
	int16_t x32 = INT16_MAX;
	static int32_t t7 = 15538559;

    t7 = ((x29!=(x30|x31))/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 47;
	uint8_t x38 = UINT8_MAX;
	uint16_t x40 = 17196U;
	volatile int32_t t8 = 5742791;

    t8 = ((x37!=(x38|x39))/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MAX;
	static int64_t x42 = -1LL;
	static uint32_t x43 = 162315U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = 25414730531039LL;

    t9 = ((x41!=(x42|x43))/x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = 992;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;
	volatile int64_t t10 = 5086118008345534LL;

    t10 = ((x45!=(x46|x47))/x48);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 8U;
	int8_t x50 = INT8_MAX;
	int32_t x52 = 1348379;
	volatile int32_t t11 = -80190;

    t11 = ((x49!=(x50|x51))/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x54 = UINT32_MAX;
	int16_t x55 = 28;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = 102647;

    t12 = ((x53!=(x54|x55))/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 7U;
	uint8_t x58 = 11U;
	uint16_t x59 = 1U;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -3430;

    t13 = ((x57!=(x58|x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	uint16_t x62 = 2U;
	volatile int64_t x63 = INT64_MAX;
	uint16_t x64 = UINT16_MAX;

    t14 = ((x61!=(x62|x63))/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x65 = 71U;
	int8_t x66 = INT8_MAX;
	volatile int64_t x68 = -1LL;
	int64_t t15 = 1287058792714LL;

    t15 = ((x65!=(x66|x67))/x68);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = -61;
	static uint8_t x71 = UINT8_MAX;
	uint64_t x72 = 12077559958900LLU;
	uint64_t t16 = 7548997323LLU;

    t16 = ((x69!=(x70|x71))/x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -7770236338615LL;
	int64_t x76 = -1LL;
	volatile int64_t t17 = -148LL;

    t17 = ((x73!=(x74|x75))/x76);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x79 = 22U;
	int32_t x80 = INT32_MIN;
	int32_t t18 = -374888;

    t18 = ((x77!=(x78|x79))/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	static uint8_t x82 = 1U;
	int16_t x84 = INT16_MIN;

    t19 = ((x81!=(x82|x83))/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	volatile int64_t x86 = 3431202656744LL;
	int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t20 = 680505;

    t20 = ((x85!=(x86|x87))/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 63844079U;
	int64_t x90 = -37695LL;
	static int32_t x91 = INT32_MIN;
	static int32_t t21 = 13499;

    t21 = ((x89!=(x90|x91))/x92);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x94 = -1;
	uint32_t x96 = 392U;
	volatile uint32_t t22 = 875839U;

    t22 = ((x93!=(x94|x95))/x96);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 18483072837116370LL;
	int8_t x98 = -1;
	uint64_t x99 = 3017053896LLU;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t23 = 10LL;

    t23 = ((x97!=(x98|x99))/x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 30867U;
	int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	int32_t x104 = 61477644;
	int32_t t24 = 989725369;

    t24 = ((x101!=(x102|x103))/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x107 = -1;
	int8_t x108 = -1;
	volatile int32_t t25 = 28551892;

    t25 = ((x105!=(x106|x107))/x108);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x109 = INT16_MIN;
	volatile int16_t x110 = INT16_MAX;
	volatile uint8_t x111 = 0U;
	uint32_t x112 = 14U;
	uint32_t t26 = 3U;

    t26 = ((x109!=(x110|x111))/x112);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	uint16_t x114 = 9376U;
	volatile int16_t x115 = INT16_MIN;
	uint64_t x116 = 4129135LLU;
	uint64_t t27 = 232442LLU;

    t27 = ((x113!=(x114|x115))/x116);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	static int8_t x120 = 14;
	static int32_t t28 = -2;

    t28 = ((x117!=(x118|x119))/x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x122 = -5;
	static volatile int64_t x123 = -15181743LL;
	volatile int32_t t29 = 0;

    t29 = ((x121!=(x122|x123))/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = -1LL;
	volatile uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t30 = -493;

    t30 = ((x125!=(x126|x127))/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x129 = -811957745639LL;
	int16_t x130 = INT16_MIN;
	int8_t x131 = 1;

    t31 = ((x129!=(x130|x131))/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x134 = 17815U;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = -1;

    t32 = ((x133!=(x134|x135))/x136);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x139 = INT32_MAX;
	int32_t x140 = -1;

    t33 = ((x137!=(x138|x139))/x140);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x142 = 468780719LL;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = -1;
	volatile int32_t t34 = -7784193;

    t34 = ((x141!=(x142|x143))/x144);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x147 = 634U;
	static int8_t x148 = -3;
	int32_t t35 = -718528673;

    t35 = ((x145!=(x146|x147))/x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = -21;
	int32_t x150 = INT32_MAX;
	uint32_t x152 = 13244571U;
	volatile uint32_t t36 = 133754173U;

    t36 = ((x149!=(x150|x151))/x152);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = -1;
	volatile int64_t x154 = -7211402082LL;
	uint64_t x156 = 5153361671930LLU;
	uint64_t t37 = 22401044328301800LLU;

    t37 = ((x153!=(x154|x155))/x156);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x161 = UINT16_MAX;
	static uint16_t x162 = 2U;
	int64_t x163 = -6LL;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t38 = 2527;

    t38 = ((x161!=(x162|x163))/x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x165 = INT8_MIN;
	static int8_t x166 = -1;
	int32_t x167 = -1008085;
	static int32_t x168 = -1;

    t39 = ((x165!=(x166|x167))/x168);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = -2;
	volatile uint16_t x170 = 32105U;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = -1;
	int32_t t40 = 0;

    t40 = ((x169!=(x170|x171))/x172);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	uint32_t x174 = 156802735U;
	int64_t x176 = -1LL;
	int64_t t41 = -89160237124184742LL;

    t41 = ((x173!=(x174|x175))/x176);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = -1;
	int32_t t42 = -5347;

    t42 = ((x177!=(x178|x179))/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	static int64_t x183 = 1573545760032LL;
	volatile int64_t t43 = -24095411326LL;

    t43 = ((x181!=(x182|x183))/x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x185 = 11U;
	int16_t x187 = -7879;
	static int32_t t44 = -16124;

    t44 = ((x185!=(x186|x187))/x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x189 = -476;
	static int64_t x190 = INT64_MIN;
	static int16_t x191 = -11405;
	uint8_t x192 = 2U;
	static volatile int32_t t45 = 12822140;

    t45 = ((x189!=(x190|x191))/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x193 = 7;
	int32_t x194 = -1;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t46 = 132429;

    t46 = ((x193!=(x194|x195))/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = 10U;
	uint32_t x199 = UINT32_MAX;
	int32_t t47 = -1;

    t47 = ((x197!=(x198|x199))/x200);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = UINT8_MAX;
	int32_t x202 = 750975876;
	uint32_t x203 = 2627357U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t48 = 15481;

    t48 = ((x201!=(x202|x203))/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x206 = 888894212820355LLU;
	int32_t x207 = -1;
	static int16_t x208 = -1;
	volatile int32_t t49 = 974;

    t49 = ((x205!=(x206|x207))/x208);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = -2141548118LL;
	int64_t x210 = 458408733000661946LL;
	int16_t x211 = INT16_MIN;
	int64_t x212 = -1190774699909963200LL;
	volatile int64_t t50 = -4912484060160076LL;

    t50 = ((x209!=(x210|x211))/x212);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = INT16_MAX;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = -4120155330338313LL;

    t51 = ((x213!=(x214|x215))/x216);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = -404;
	int16_t x220 = 11554;
	static int32_t t52 = -31;

    t52 = ((x217!=(x218|x219))/x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = 22;
	uint64_t x222 = 1LLU;
	static int64_t x223 = INT64_MIN;
	int32_t x224 = -1;

    t53 = ((x221!=(x222|x223))/x224);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = INT8_MIN;
	static uint64_t x226 = 597649908539648LLU;
	static int16_t x228 = -1;
	int32_t t54 = 1;

    t54 = ((x225!=(x226|x227))/x228);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = 71;
	int64_t x230 = INT64_MIN;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t55 = -35505079967LL;

    t55 = ((x229!=(x230|x231))/x232);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x234 = -1;
	uint16_t x235 = 92U;
	int64_t x236 = -1LL;
	int64_t t56 = -2492785LL;

    t56 = ((x233!=(x234|x235))/x236);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x237 = 1910U;
	int64_t x238 = -3355110055LL;
	static uint8_t x239 = 56U;
	int64_t t57 = 171724LL;

    t57 = ((x237!=(x238|x239))/x240);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = -170539610;
	int32_t x244 = 606194857;

    t58 = ((x241!=(x242|x243))/x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = -379;
	static uint8_t x246 = 0U;
	static uint16_t x247 = UINT16_MAX;
	int64_t x248 = INT64_MIN;
	int64_t t59 = -1542691019980793LL;

    t59 = ((x245!=(x246|x247))/x248);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	uint64_t x250 = 5712604567607LLU;
	int8_t x251 = INT8_MAX;
	int16_t x252 = 8077;

    t60 = ((x249!=(x250|x251))/x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 565U;
	int16_t x256 = INT16_MIN;
	int32_t t61 = -31259;

    t61 = ((x253!=(x254|x255))/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	int16_t x258 = -1;
	int64_t x260 = -1LL;
	static volatile int64_t t62 = 170039950246LL;

    t62 = ((x257!=(x258|x259))/x260);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = INT64_MAX;
	int64_t x262 = -6231217LL;
	volatile int32_t x263 = INT32_MIN;
	uint64_t x264 = 2792667215345423052LLU;
	volatile uint64_t t63 = 9LLU;

    t63 = ((x261!=(x262|x263))/x264);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x266 = -18;
	int8_t x267 = -2;
	int16_t x268 = INT16_MAX;
	static volatile int32_t t64 = 2493281;

    t64 = ((x265!=(x266|x267))/x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x273 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	static int8_t x276 = 1;
	volatile int32_t t65 = -3388412;

    t65 = ((x273!=(x274|x275))/x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = -4537;
	int8_t x278 = INT8_MIN;
	volatile int32_t t66 = -716819029;

    t66 = ((x277!=(x278|x279))/x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = -142;
	uint32_t x282 = UINT32_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t67 = 400;

    t67 = ((x281!=(x282|x283))/x284);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = UINT32_MAX;
	int64_t x286 = 502LL;
	static uint64_t x287 = 55LLU;
	int32_t t68 = -215416;

    t68 = ((x285!=(x286|x287))/x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x289 = INT64_MAX;
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = INT64_MAX;
	int32_t t69 = -75645057;

    t69 = ((x289!=(x290|x291))/x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x296 = 39139222U;
	static uint32_t t70 = 2417U;

    t70 = ((x293!=(x294|x295))/x296);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MAX;
	uint8_t x298 = 1U;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = 5U;
	int32_t t71 = 255571;

    t71 = ((x297!=(x298|x299))/x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x301 = 635589U;
	volatile int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t72 = 61966U;

    t72 = ((x301!=(x302|x303))/x304);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MAX;
	int64_t x307 = -1LL;
	volatile int64_t t73 = 122LL;

    t73 = ((x305!=(x306|x307))/x308);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = INT8_MIN;
	volatile int64_t x311 = -1LL;
	static uint64_t x312 = 738LLU;
	static volatile uint64_t t74 = 14LLU;

    t74 = ((x309!=(x310|x311))/x312);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -56;
	uint64_t x314 = UINT64_MAX;
	static volatile uint64_t x316 = 2962224LLU;
	static volatile uint64_t t75 = 626250313LLU;

    t75 = ((x313!=(x314|x315))/x316);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x317 = -68;
	static int8_t x319 = INT8_MIN;
	static volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t76 = 467214344945594LLU;

    t76 = ((x317!=(x318|x319))/x320);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x321 = INT32_MAX;
	volatile uint32_t x322 = 389847684U;
	int32_t x324 = INT32_MIN;
	int32_t t77 = -232;

    t77 = ((x321!=(x322|x323))/x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x325 = UINT32_MAX;
	static uint16_t x326 = 28U;
	static int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	int64_t t78 = 32885LL;

    t78 = ((x325!=(x326|x327))/x328);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	int16_t x330 = -29;
	uint64_t x331 = 941278LLU;
	int64_t x332 = -1LL;
	volatile int64_t t79 = 1072LL;

    t79 = ((x329!=(x330|x331))/x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 3U;
	uint32_t t80 = 16U;

    t80 = ((x333!=(x334|x335))/x336);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x338 = INT32_MAX;
	int16_t x339 = -1;

    t81 = ((x337!=(x338|x339))/x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = -464821911LL;
	int64_t t82 = -1481354648457LL;

    t82 = ((x341!=(x342|x343))/x344);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x345 = INT8_MIN;
	volatile uint16_t x346 = UINT16_MAX;
	static int16_t x347 = INT16_MAX;
	volatile int32_t t83 = 1;

    t83 = ((x345!=(x346|x347))/x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x355 = 14685809U;
	int16_t x356 = 372;
	static int32_t t84 = 889946;

    t84 = ((x353!=(x354|x355))/x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MIN;
	volatile int8_t x360 = INT8_MAX;

    t85 = ((x357!=(x358|x359))/x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x361 = INT64_MAX;
	int8_t x362 = 1;
	uint32_t x363 = UINT32_MAX;
	int32_t t86 = 95480433;

    t86 = ((x361!=(x362|x363))/x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x370 = -1LL;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t87 = 27004U;

    t87 = ((x369!=(x370|x371))/x372);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x373 = 0U;
	volatile int16_t x374 = INT16_MAX;
	int32_t x375 = -124144;
	static uint8_t x376 = 21U;
	int32_t t88 = -4376505;

    t88 = ((x373!=(x374|x375))/x376);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x377 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t89 = -114;

    t89 = ((x377!=(x378|x379))/x380);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = 1;
	int16_t x382 = INT16_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t90 = 29588874908LLU;

    t90 = ((x381!=(x382|x383))/x384);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = -1;
	int32_t x386 = 648404505;
	volatile int32_t x387 = 95950407;
	int16_t x388 = -1;
	int32_t t91 = 233051;

    t91 = ((x385!=(x386|x387))/x388);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MAX;
	int64_t x391 = INT64_MAX;
	static volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t92 = -540003;

    t92 = ((x389!=(x390|x391))/x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x393 = 553503650750476LLU;
	int32_t x394 = INT32_MIN;
	static int64_t x396 = -617096035038375LL;
	static int64_t t93 = 8LL;

    t93 = ((x393!=(x394|x395))/x396);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x397 = 3511U;
	int64_t x398 = INT64_MIN;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = -3563;

    t94 = ((x397!=(x398|x399))/x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x403 = INT8_MIN;
	uint8_t x404 = 1U;
	int32_t t95 = 4;

    t95 = ((x401!=(x402|x403))/x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x405 = UINT64_MAX;
	int16_t x406 = -1;
	uint64_t x407 = 4428842LLU;
	int64_t x408 = INT64_MIN;
	volatile int64_t t96 = -2336166699218LL;

    t96 = ((x405!=(x406|x407))/x408);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x409 = INT8_MAX;
	static int32_t x412 = INT32_MAX;

    t97 = ((x409!=(x410|x411))/x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x413 = 2LL;
	static int64_t x415 = 231935107434562313LL;
	uint8_t x416 = 6U;
	int32_t t98 = 373696;

    t98 = ((x413!=(x414|x415))/x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 17;
	int16_t x418 = -1;
	int32_t x419 = -14633;
	int8_t x420 = -1;
	int32_t t99 = -7175;

    t99 = ((x417!=(x418|x419))/x420);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    

    t100 = ((x421!=(x422|x423))/x424);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x425 = INT8_MIN;
	int8_t x426 = -55;
	static volatile int32_t t101 = -4327;

    t101 = ((x425!=(x426|x427))/x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x429 = INT32_MIN;
	int16_t x430 = -1;
	uint64_t x431 = 10583778961LLU;
	int64_t x432 = -1LL;
	static volatile int64_t t102 = 818LL;

    t102 = ((x429!=(x430|x431))/x432);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x433 = UINT8_MAX;
	volatile int64_t x434 = -14181LL;
	volatile int32_t x435 = INT32_MAX;
	static volatile int16_t x436 = INT16_MIN;
	static int32_t t103 = 836863;

    t103 = ((x433!=(x434|x435))/x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = -22;
	static int8_t x439 = -1;
	int64_t x440 = INT64_MIN;
	volatile int64_t t104 = -7755662LL;

    t104 = ((x437!=(x438|x439))/x440);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x442 = -3739250067637369LL;
	volatile uint8_t x443 = 7U;
	uint64_t x444 = 233578601742033213LLU;
	uint64_t t105 = 45601458326471LLU;

    t105 = ((x441!=(x442|x443))/x444);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x446 = INT8_MAX;
	int8_t x447 = -1;
	static uint16_t x448 = 1001U;
	volatile int32_t t106 = -3916;

    t106 = ((x445!=(x446|x447))/x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x449 = -1;
	int16_t x450 = -1;
	volatile int32_t x451 = -997422;
	static int64_t x452 = 44902293877LL;
	int64_t t107 = -75121664285830281LL;

    t107 = ((x449!=(x450|x451))/x452);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x453 = 6463790322618317637LLU;
	uint8_t x455 = 32U;
	int32_t x456 = INT32_MIN;

    t108 = ((x453!=(x454|x455))/x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x457 = 3U;
	int32_t x458 = INT32_MIN;
	static volatile uint8_t x460 = UINT8_MAX;
	int32_t t109 = 10;

    t109 = ((x457!=(x458|x459))/x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x461 = -1;
	volatile int64_t x462 = 81096LL;
	static uint64_t x463 = 34991358227132LLU;
	int16_t x464 = INT16_MIN;

    t110 = ((x461!=(x462|x463))/x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x467 = UINT8_MAX;
	volatile int64_t x468 = 15600LL;
	volatile int64_t t111 = 84091131168274678LL;

    t111 = ((x465!=(x466|x467))/x468);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x469 = UINT8_MAX;
	int64_t x470 = 1864558292184922LL;
	uint32_t x471 = 77U;
	uint8_t x472 = 2U;
	int32_t t112 = -1608421;

    t112 = ((x469!=(x470|x471))/x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x473 = 3U;
	uint8_t x474 = 0U;
	static volatile uint16_t x475 = 0U;
	uint32_t t113 = 400234U;

    t113 = ((x473!=(x474|x475))/x476);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x478 = 498U;
	static uint16_t x480 = 4815U;
	static volatile int32_t t114 = -10696049;

    t114 = ((x477!=(x478|x479))/x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x481 = 0U;
	int64_t x482 = -1LL;
	static int64_t x483 = INT64_MIN;
	static uint64_t x484 = 58394LLU;
	uint64_t t115 = 3357580248283463667LLU;

    t115 = ((x481!=(x482|x483))/x484);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = INT8_MAX;
	static volatile int64_t x486 = INT64_MIN;
	int64_t x487 = -1LL;
	int64_t x488 = INT64_MIN;
	int64_t t116 = -27370736148534LL;

    t116 = ((x485!=(x486|x487))/x488);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x490 = INT8_MAX;
	int32_t x491 = INT32_MIN;
	int8_t x492 = INT8_MIN;
	static int32_t t117 = 441983949;

    t117 = ((x489!=(x490|x491))/x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x493 = -1860;
	int64_t x494 = INT64_MIN;
	int16_t x495 = -1;
	int32_t t118 = 1;

    t118 = ((x493!=(x494|x495))/x496);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x497 = 1483U;
	volatile uint64_t x498 = 655LLU;
	int8_t x499 = INT8_MAX;
	volatile int8_t x500 = -1;
	int32_t t119 = -422156377;

    t119 = ((x497!=(x498|x499))/x500);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x501 = 14U;
	int32_t x502 = INT32_MAX;
	volatile uint64_t x503 = 11970528882LLU;
	int8_t x504 = INT8_MIN;
	volatile int32_t t120 = 2876337;

    t120 = ((x501!=(x502|x503))/x504);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x508 = -1;
	int32_t t121 = 5637;

    t121 = ((x505!=(x506|x507))/x508);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x509 = -1;
	int16_t x510 = INT16_MIN;
	int64_t x511 = INT64_MIN;
	int64_t x512 = -1LL;
	volatile int64_t t122 = 940498LL;

    t122 = ((x509!=(x510|x511))/x512);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x513 = -199;
	static uint64_t x514 = 708578298284858740LLU;
	volatile uint64_t x515 = 7LLU;
	int64_t x516 = INT64_MAX;
	volatile int64_t t123 = -1457180783124LL;

    t123 = ((x513!=(x514|x515))/x516);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x517 = UINT8_MAX;
	static volatile int8_t x518 = INT8_MAX;
	int16_t x519 = INT16_MIN;
	volatile int32_t t124 = -176180;

    t124 = ((x517!=(x518|x519))/x520);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x521 = 3U;
	static int32_t x522 = INT32_MIN;
	static volatile int64_t x523 = -1LL;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t125 = -32751203;

    t125 = ((x521!=(x522|x523))/x524);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = 2095908994874981LL;
	volatile uint32_t x526 = UINT32_MAX;
	static uint8_t x527 = 1U;
	int16_t x528 = INT16_MIN;
	volatile int32_t t126 = 228637;

    t126 = ((x525!=(x526|x527))/x528);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x531 = -6;
	volatile int8_t x532 = -1;

    t127 = ((x529!=(x530|x531))/x532);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x533 = 3604822294155LLU;
	int8_t x535 = INT8_MAX;
	volatile int64_t x536 = INT64_MIN;

    t128 = ((x533!=(x534|x535))/x536);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x537 = INT16_MIN;
	uint32_t x538 = UINT32_MAX;
	int32_t x539 = -1;
	int64_t t129 = 234780507LL;

    t129 = ((x537!=(x538|x539))/x540);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x545 = -105629;
	int16_t x546 = -679;
	uint16_t x548 = UINT16_MAX;
	int32_t t130 = 1530;

    t130 = ((x545!=(x546|x547))/x548);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x550 = 134;
	uint8_t x551 = UINT8_MAX;
	int8_t x552 = -1;
	int32_t t131 = -118495;

    t131 = ((x549!=(x550|x551))/x552);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MAX;
	volatile int8_t x556 = INT8_MIN;
	int32_t t132 = -4906;

    t132 = ((x553!=(x554|x555))/x556);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x557 = INT8_MIN;
	uint64_t x558 = 39LLU;
	int8_t x559 = INT8_MIN;
	int8_t x560 = INT8_MIN;
	static int32_t t133 = 0;

    t133 = ((x557!=(x558|x559))/x560);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x561 = INT32_MIN;
	volatile int8_t x562 = INT8_MIN;
	volatile uint8_t x563 = UINT8_MAX;
	int64_t x564 = INT64_MAX;

    t134 = ((x561!=(x562|x563))/x564);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x565 = 3994U;
	volatile int64_t x566 = 1578749364120187LL;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t t135 = -10;

    t135 = ((x565!=(x566|x567))/x568);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	uint16_t x571 = UINT16_MAX;
	uint8_t x572 = 1U;
	static int32_t t136 = -115532;

    t136 = ((x569!=(x570|x571))/x572);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = 13027040101126290LL;
	volatile int64_t x574 = 301813538LL;
	static int8_t x575 = 0;
	int64_t x576 = INT64_MAX;
	volatile int64_t t137 = 1800577373340825LL;

    t137 = ((x573!=(x574|x575))/x576);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x578 = INT64_MAX;
	uint16_t x579 = 27664U;
	static uint8_t x580 = 7U;
	static int32_t t138 = 61093643;

    t138 = ((x577!=(x578|x579))/x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x581 = INT16_MAX;
	uint16_t x582 = 2U;
	static uint64_t x583 = 376603331626LLU;
	volatile int8_t x584 = INT8_MIN;
	int32_t t139 = -1871160;

    t139 = ((x581!=(x582|x583))/x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x585 = INT8_MAX;
	static uint8_t x586 = 10U;
	static int16_t x587 = -1;
	int32_t x588 = 5343;
	volatile int32_t t140 = -453983;

    t140 = ((x585!=(x586|x587))/x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x589 = 0;
	volatile int64_t x590 = INT64_MIN;
	uint64_t x591 = 2693100LLU;
	int8_t x592 = INT8_MAX;
	int32_t t141 = 1414298;

    t141 = ((x589!=(x590|x591))/x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x593 = INT32_MAX;
	int16_t x595 = INT16_MIN;
	static int64_t x596 = 3895882729367461LL;
	int64_t t142 = 17580731199200LL;

    t142 = ((x593!=(x594|x595))/x596);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x598 = 3U;
	int8_t x599 = INT8_MIN;
	volatile int16_t x600 = INT16_MIN;

    t143 = ((x597!=(x598|x599))/x600);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x601 = 0;
	int64_t x602 = 14240742LL;
	int8_t x604 = -1;
	static int32_t t144 = -1;

    t144 = ((x601!=(x602|x603))/x604);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = -1;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MAX;
	static int64_t t145 = -1886967369448216072LL;

    t145 = ((x605!=(x606|x607))/x608);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x609 = 30U;
	uint64_t x610 = UINT64_MAX;
	uint8_t x611 = UINT8_MAX;
	uint32_t x612 = UINT32_MAX;

    t146 = ((x609!=(x610|x611))/x612);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x613 = -11980;
	static int32_t x614 = INT32_MIN;
	static int64_t x615 = INT64_MAX;
	int8_t x616 = 17;
	volatile int32_t t147 = -2;

    t147 = ((x613!=(x614|x615))/x616);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x617 = INT32_MAX;
	uint64_t x619 = UINT64_MAX;
	uint64_t x620 = 417720349253209752LLU;
	uint64_t t148 = 111768512LLU;

    t148 = ((x617!=(x618|x619))/x620);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x621 = 232371705563998276LL;
	volatile uint32_t x622 = 4791U;
	static int8_t x623 = INT8_MAX;
	volatile int32_t t149 = -14289885;

    t149 = ((x621!=(x622|x623))/x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x625 = INT32_MIN;
	uint32_t x626 = UINT32_MAX;
	static uint32_t x627 = 134129327U;
	int32_t x628 = -1;

    t150 = ((x625!=(x626|x627))/x628);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x629 = INT16_MIN;
	volatile int8_t x630 = INT8_MAX;
	uint32_t x631 = 13513U;
	static int16_t x632 = -966;
	int32_t t151 = -985995;

    t151 = ((x629!=(x630|x631))/x632);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x633 = INT8_MAX;
	uint64_t x634 = 110382839440614LLU;
	uint8_t x635 = 100U;
	uint32_t x636 = 1415U;
	uint32_t t152 = 234541U;

    t152 = ((x633!=(x634|x635))/x636);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x638 = UINT16_MAX;
	volatile int8_t x639 = INT8_MIN;
	int64_t x640 = -1LL;

    t153 = ((x637!=(x638|x639))/x640);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x641 = 54U;
	volatile uint64_t x642 = 101456LLU;
	static uint32_t x643 = 1363943U;
	uint64_t t154 = 1917098238399766803LLU;

    t154 = ((x641!=(x642|x643))/x644);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x645 = UINT8_MAX;
	volatile int8_t x646 = -4;
	int16_t x647 = 120;
	int8_t x648 = INT8_MAX;
	int32_t t155 = -485544;

    t155 = ((x645!=(x646|x647))/x648);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = -185386LL;
	int64_t x651 = INT64_MAX;
	static uint64_t x652 = 58563134607LLU;

    t156 = ((x649!=(x650|x651))/x652);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x653 = 2U;
	uint32_t x655 = 26U;

    t157 = ((x653!=(x654|x655))/x656);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x657 = INT64_MAX;
	volatile int32_t x658 = -169176426;
	int32_t x660 = 186;
	volatile int32_t t158 = -405212;

    t158 = ((x657!=(x658|x659))/x660);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x662 = INT8_MAX;
	uint64_t x663 = 2394244LLU;
	static uint16_t x664 = 18U;

    t159 = ((x661!=(x662|x663))/x664);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x666 = 0U;
	int32_t x668 = -1;
	int32_t t160 = -863;

    t160 = ((x665!=(x666|x667))/x668);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x669 = INT32_MIN;
	static int32_t x670 = INT32_MAX;
	int64_t x672 = INT64_MIN;
	static volatile int64_t t161 = 1711LL;

    t161 = ((x669!=(x670|x671))/x672);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x673 = INT64_MIN;
	static int8_t x674 = INT8_MAX;
	static int32_t x675 = INT32_MIN;
	volatile int32_t x676 = INT32_MAX;
	volatile int32_t t162 = 0;

    t162 = ((x673!=(x674|x675))/x676);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x677 = UINT32_MAX;
	static int64_t x678 = INT64_MIN;
	int16_t x679 = -1;
	volatile int16_t x680 = INT16_MIN;

    t163 = ((x677!=(x678|x679))/x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x681 = 51727121U;
	volatile int8_t x682 = 1;
	volatile int64_t x683 = INT64_MIN;
	static uint16_t x684 = 229U;
	int32_t t164 = -13097;

    t164 = ((x681!=(x682|x683))/x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x685 = UINT32_MAX;
	uint8_t x686 = 50U;
	uint16_t x687 = 111U;
	int32_t x688 = -1;
	int32_t t165 = 377844;

    t165 = ((x685!=(x686|x687))/x688);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x690 = -1354;
	int64_t x691 = -1LL;
	int8_t x692 = INT8_MAX;
	static volatile int32_t t166 = 1005812;

    t166 = ((x689!=(x690|x691))/x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x694 = 312;
	static int32_t x695 = -8247929;
	uint64_t x696 = 368100LLU;
	uint64_t t167 = 7008829332024502LLU;

    t167 = ((x693!=(x694|x695))/x696);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x697 = -1;
	static int64_t x698 = INT64_MAX;
	uint32_t x699 = 26U;
	static uint64_t t168 = 9539LLU;

    t168 = ((x697!=(x698|x699))/x700);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x702 = INT16_MIN;
	int8_t x703 = 0;
	int8_t x704 = INT8_MIN;
	int32_t t169 = 115029425;

    t169 = ((x701!=(x702|x703))/x704);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x705 = UINT16_MAX;
	uint32_t x706 = UINT32_MAX;
	int64_t x707 = INT64_MIN;
	int8_t x708 = INT8_MIN;
	int32_t t170 = -40934533;

    t170 = ((x705!=(x706|x707))/x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MIN;
	int8_t x711 = 1;
	int32_t x712 = INT32_MIN;
	static int32_t t171 = 46824;

    t171 = ((x709!=(x710|x711))/x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x714 = UINT16_MAX;
	uint32_t x716 = 25U;
	volatile uint32_t t172 = 170U;

    t172 = ((x713!=(x714|x715))/x716);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x717 = 116LLU;
	int32_t x718 = -1;
	int32_t x719 = 592;
	static int32_t t173 = -7530;

    t173 = ((x717!=(x718|x719))/x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x721 = INT16_MAX;
	int64_t x722 = INT64_MIN;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t174 = -39351645;

    t174 = ((x721!=(x722|x723))/x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x725 = 41U;
	int64_t x726 = -22885761LL;
	int64_t x727 = INT64_MAX;
	static int32_t t175 = -1559;

    t175 = ((x725!=(x726|x727))/x728);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = INT8_MIN;
	static uint16_t x730 = 25U;
	volatile int64_t x732 = INT64_MIN;
	static int64_t t176 = 398165674LL;

    t176 = ((x729!=(x730|x731))/x732);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = INT8_MAX;
	static int8_t x734 = -1;
	volatile int8_t x735 = -1;
	static int64_t t177 = 24938LL;

    t177 = ((x733!=(x734|x735))/x736);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x737 = INT16_MAX;
	volatile int16_t x738 = INT16_MIN;
	volatile int16_t x739 = INT16_MAX;
	volatile int8_t x740 = INT8_MIN;
	volatile int32_t t178 = -5202750;

    t178 = ((x737!=(x738|x739))/x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x741 = 141;
	int32_t x742 = INT32_MIN;
	volatile int32_t x743 = INT32_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t179 = 31608;

    t179 = ((x741!=(x742|x743))/x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x746 = INT64_MIN;
	int8_t x747 = INT8_MIN;
	int64_t x748 = -9227245LL;
	static volatile int64_t t180 = 59082274LL;

    t180 = ((x745!=(x746|x747))/x748);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x749 = -1;
	int8_t x750 = INT8_MIN;
	int8_t x751 = 1;
	uint16_t x752 = 236U;
	volatile int32_t t181 = -975;

    t181 = ((x749!=(x750|x751))/x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = 3LL;
	int64_t x755 = INT64_MAX;
	uint32_t x756 = UINT32_MAX;
	volatile uint32_t t182 = 919U;

    t182 = ((x753!=(x754|x755))/x756);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x757 = INT64_MIN;
	int64_t x758 = -5217149708LL;
	int8_t x760 = 6;

    t183 = ((x757!=(x758|x759))/x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = 12224987;
	uint64_t x763 = 31983044LLU;
	int16_t x764 = -27;
	int32_t t184 = -2;

    t184 = ((x761!=(x762|x763))/x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x765 = -3;
	static int64_t x766 = INT64_MIN;
	uint8_t x767 = 14U;
	int32_t t185 = 289976;

    t185 = ((x765!=(x766|x767))/x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = 99;
	uint32_t x770 = 50182893U;
	int16_t x771 = INT16_MAX;
	int8_t x772 = -1;
	static int32_t t186 = 1651;

    t186 = ((x769!=(x770|x771))/x772);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MIN;
	uint16_t x774 = 8U;
	int8_t x775 = -1;
	int32_t x776 = INT32_MIN;
	static int32_t t187 = 1736823;

    t187 = ((x773!=(x774|x775))/x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x777 = 8;
	volatile uint64_t x778 = 28436014795651476LLU;
	uint32_t x779 = 1U;
	static uint64_t x780 = 626414LLU;

    t188 = ((x777!=(x778|x779))/x780);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x781 = INT8_MAX;
	uint8_t x783 = UINT8_MAX;
	uint64_t x784 = 75783420055647LLU;
	static volatile uint64_t t189 = 3406634419462611975LLU;

    t189 = ((x781!=(x782|x783))/x784);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x786 = INT8_MAX;
	static volatile int64_t x787 = -95617LL;
	int32_t x788 = INT32_MAX;
	static int32_t t190 = -3;

    t190 = ((x785!=(x786|x787))/x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = 30;
	static int8_t x791 = INT8_MIN;
	volatile int32_t t191 = -98135555;

    t191 = ((x789!=(x790|x791))/x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x793 = -217LL;
	static uint64_t x794 = 37557LLU;
	int16_t x795 = -1;
	uint32_t x796 = 968969664U;
	uint32_t t192 = 290549U;

    t192 = ((x793!=(x794|x795))/x796);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x797 = -149534298;
	static int32_t x798 = -1135043;
	static volatile int16_t x799 = INT16_MIN;
	uint32_t x800 = UINT32_MAX;
	uint32_t t193 = 27910919U;

    t193 = ((x797!=(x798|x799))/x800);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x802 = 78U;
	volatile int8_t x804 = INT8_MIN;
	static int32_t t194 = 97258;

    t194 = ((x801!=(x802|x803))/x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x805 = INT64_MIN;
	int16_t x807 = INT16_MIN;
	static int32_t x808 = INT32_MIN;
	static volatile int32_t t195 = -130960830;

    t195 = ((x805!=(x806|x807))/x808);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x809 = INT32_MAX;
	int64_t x810 = INT64_MIN;
	volatile int64_t x812 = 818505746LL;
	int64_t t196 = 424849820402LL;

    t196 = ((x809!=(x810|x811))/x812);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x813 = UINT64_MAX;
	uint32_t x814 = 30U;
	uint32_t x815 = UINT32_MAX;
	uint32_t x816 = UINT32_MAX;

    t197 = ((x813!=(x814|x815))/x816);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x817 = -3428;
	int64_t x818 = -1LL;
	static int32_t x819 = 233330919;
	int16_t x820 = INT16_MIN;
	static int32_t t198 = 14;

    t198 = ((x817!=(x818|x819))/x820);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x821 = INT8_MAX;
	volatile int8_t x822 = INT8_MIN;
	int32_t x823 = 52332138;
	int16_t x824 = -1;
	volatile int32_t t199 = 56;

    t199 = ((x821!=(x822|x823))/x824);

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

