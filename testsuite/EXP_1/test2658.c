
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

static uint16_t x3 = 6U;
uint64_t x4 = 496LLU;
volatile uint32_t t1 = 3531945U;
static volatile uint64_t x10 = 91454836003LLU;
int64_t x12 = INT64_MIN;
volatile uint64_t x23 = UINT64_MAX;
volatile int32_t t5 = -7018;
volatile int8_t x27 = INT8_MIN;
volatile int32_t t6 = -969071;
int8_t x32 = INT8_MAX;
int64_t x33 = INT64_MIN;
int16_t x41 = INT16_MIN;
uint16_t x44 = 29U;
int8_t x45 = 0;
static uint8_t x53 = 3U;
int16_t x55 = -1;
int32_t t15 = -1;
static volatile int16_t x66 = -395;
static volatile int16_t x71 = INT16_MAX;
volatile uint32_t t17 = 19U;
volatile uint32_t x73 = 373U;
volatile int8_t x77 = -1;
int8_t x79 = INT8_MIN;
uint64_t x81 = 98109853LLU;
int16_t x85 = -1;
int8_t x86 = INT8_MAX;
volatile int16_t x92 = 4544;
volatile int32_t x94 = 4449;
volatile int32_t t23 = 848623;
volatile uint32_t x97 = 1333579U;
uint64_t x100 = 50740789920850084LLU;
uint8_t x121 = 6U;
static int16_t x126 = 26;
int8_t x127 = INT8_MAX;
int16_t x129 = INT16_MIN;
int32_t x131 = -25935;
volatile int32_t t32 = -7301697;
uint8_t x133 = 7U;
int16_t x134 = 2020;
uint8_t x138 = 79U;
static volatile int32_t t35 = 190260231;
int32_t t38 = 25503;
volatile int32_t x159 = INT32_MIN;
int64_t x172 = INT64_MAX;
uint32_t x173 = UINT32_MAX;
static uint16_t x175 = 204U;
uint64_t x181 = 94726117583801700LLU;
uint64_t x183 = 192320715231230978LLU;
static uint8_t x184 = 5U;
volatile uint64_t x185 = UINT64_MAX;
static volatile int8_t x188 = 0;
static int64_t t48 = -5835076065LL;
int32_t x198 = -1;
uint32_t x200 = UINT32_MAX;
int32_t x202 = INT32_MIN;
uint16_t x203 = UINT16_MAX;
int16_t x207 = INT16_MAX;
int8_t x212 = -5;
uint16_t x214 = 0U;
volatile int64_t x223 = -33663462739901LL;
int8_t x226 = -1;
static int64_t x228 = -44108696711333532LL;
volatile int64_t x242 = INT64_MIN;
int64_t x243 = INT64_MIN;
int16_t x245 = INT16_MIN;
int32_t x246 = -436812;
int64_t x251 = 1477996452922LL;
static uint64_t x254 = 3LLU;
int32_t x256 = INT32_MIN;
int32_t x261 = -1;
volatile uint32_t x267 = UINT32_MAX;
int32_t x272 = INT32_MIN;
int32_t t67 = 3560290;
uint16_t x275 = 3550U;
int32_t x279 = INT32_MIN;
uint8_t x280 = 14U;
int32_t x289 = INT32_MAX;
int32_t t74 = 4186219;
int8_t x315 = 14;
static uint8_t x332 = 36U;
int32_t t82 = -42;
uint64_t x334 = 1013280LLU;
int32_t t84 = 28210;
int16_t x341 = INT16_MAX;
static int16_t x345 = INT16_MAX;
int64_t t86 = 274381586405582LL;
static int32_t t88 = 1006091;
int16_t x363 = 7810;
volatile uint8_t x364 = 3U;
volatile int32_t t90 = 199053767;
int32_t x365 = INT32_MIN;
volatile int32_t x376 = INT32_MAX;
volatile uint16_t x383 = 6U;
int64_t x389 = INT64_MIN;
volatile int32_t x390 = -61072916;
int32_t t99 = 191966;
uint16_t x403 = UINT16_MAX;
int32_t x411 = INT32_MIN;
static int32_t t102 = 1;
int8_t x414 = -5;
volatile int8_t x421 = -35;
int16_t x427 = -2;
volatile int32_t t107 = -907970;
uint64_t x433 = 13LLU;
uint16_t x435 = UINT16_MAX;
int32_t t108 = 2473;
uint64_t x439 = 4045170063769193902LLU;
uint32_t x440 = 18U;
uint32_t t109 = 36313U;
volatile int64_t t110 = -54915790986272LL;
volatile int16_t x445 = 41;
static int16_t x449 = INT16_MAX;
volatile int32_t x450 = INT32_MIN;
uint64_t x459 = 208362LLU;
volatile int8_t x460 = 8;
int32_t t114 = -35253876;
int32_t x461 = INT32_MAX;
static uint8_t x462 = UINT8_MAX;
int16_t x463 = INT16_MIN;
int64_t x465 = -824LL;
int32_t x468 = INT32_MAX;
static int16_t x469 = -415;
int8_t x470 = INT8_MIN;
int64_t x472 = -1LL;
volatile uint16_t x478 = 4U;
int64_t x482 = INT64_MIN;
int32_t x483 = 78;
int8_t x484 = INT8_MAX;
static volatile int8_t x485 = -1;
static uint16_t x487 = UINT16_MAX;
int32_t t121 = 1;
int16_t x490 = INT16_MAX;
static uint16_t x492 = UINT16_MAX;
static int64_t x503 = INT64_MIN;
static volatile int32_t t127 = 319176;
uint16_t x513 = UINT16_MAX;
int32_t t129 = 501;
int64_t x521 = INT64_MIN;
int16_t x538 = INT16_MAX;
int16_t x539 = INT16_MIN;
int64_t x544 = -1LL;
int16_t x546 = -1;
uint64_t x549 = UINT64_MAX;
int16_t x550 = 0;
uint16_t x556 = 784U;
int16_t x559 = -1;
volatile int32_t t139 = -10211;
uint8_t x571 = UINT8_MAX;
static int64_t x579 = -1LL;
volatile int32_t x581 = INT32_MIN;
uint8_t x584 = 51U;
uint64_t x587 = 211416254663LLU;
static int16_t x594 = 233;
int64_t x601 = -1LL;
static int64_t x602 = -1LL;
int32_t t150 = -1;
static int64_t x605 = INT64_MIN;
int32_t x608 = INT32_MIN;
int32_t x609 = INT32_MIN;
uint8_t x612 = 1U;
static int8_t x614 = 30;
volatile uint16_t x617 = 863U;
uint64_t x620 = UINT64_MAX;
volatile uint64_t t154 = 444705679LLU;
int32_t x627 = INT32_MIN;
static int16_t x628 = INT16_MAX;
int8_t x638 = INT8_MIN;
uint64_t x642 = 212463950041LLU;
volatile int8_t x644 = INT8_MAX;
static int32_t t160 = -3;
uint64_t x652 = 15552298745158LLU;
volatile uint64_t t162 = 6691796LLU;
int8_t x659 = -1;
int16_t x665 = -1;
int8_t x668 = INT8_MIN;
volatile int32_t t167 = -14;
int16_t x677 = INT16_MIN;
int32_t x680 = INT32_MIN;
static int8_t x683 = INT8_MIN;
static int16_t x684 = -1;
volatile int16_t x685 = INT16_MAX;
int32_t x695 = INT32_MAX;
volatile uint32_t t173 = 242U;
int64_t x701 = INT64_MIN;
volatile int32_t t175 = 11;
static int64_t x709 = INT64_MIN;
int8_t x710 = 1;
int32_t x718 = INT32_MIN;
int64_t t179 = 100554568841002953LL;
static volatile uint32_t x723 = UINT32_MAX;
volatile int32_t t180 = -125;
volatile uint8_t x728 = 2U;
static int8_t x729 = INT8_MIN;
int32_t x732 = INT32_MAX;
int32_t t182 = -126705600;
int8_t x736 = -11;
int16_t x746 = INT16_MAX;
int32_t t186 = 1054020;
int32_t x750 = -2740913;
int64_t x752 = -1LL;
int8_t x753 = INT8_MIN;
int32_t t188 = 9798719;
int64_t x758 = -1LL;
int16_t x765 = 1;
static uint8_t x773 = 0U;
int32_t x774 = INT32_MIN;
int32_t t195 = 1960;
static int16_t x786 = -31;
int32_t t196 = 0;
uint32_t x794 = UINT32_MAX;
volatile int64_t t198 = -12171856713LL;
uint8_t x797 = UINT8_MAX;
volatile int32_t t199 = 48;


void f0(void) {
    	volatile int16_t x1 = -257;
	int16_t x2 = -182;
	volatile uint64_t t0 = 2161763136420655LLU;

    t0 = (((x1^x2)==x3)&x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int32_t x6 = INT32_MIN;
	static int8_t x7 = -1;
	static uint32_t x8 = 0U;

    t1 = (((x5^x6)==x7)&x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x11 = INT8_MAX;
	volatile int64_t t2 = 3919182151361LL;

    t2 = (((x9^x10)==x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 60;
	int32_t x14 = INT32_MAX;
	int8_t x15 = -1;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -50LL;

    t3 = (((x13^x14)==x15)&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = 3910U;
	int32_t x18 = -442556;
	uint8_t x19 = 24U;
	static uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 22680820562033LLU;

    t4 = (((x17^x18)==x19)&x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	uint64_t x22 = UINT64_MAX;
	int16_t x24 = INT16_MIN;

    t5 = (((x21^x22)==x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int64_t x26 = -421686401200LL;
	volatile int16_t x28 = INT16_MIN;

    t6 = (((x25^x26)==x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x29 = -1;
	static int16_t x30 = -11746;
	volatile int8_t x31 = INT8_MIN;
	int32_t t7 = 7;

    t7 = (((x29^x30)==x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	volatile int8_t x36 = -1;
	volatile int32_t t8 = 0;

    t8 = (((x33^x34)==x35)&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 2878619LLU;
	int64_t x38 = INT64_MAX;
	int8_t x39 = -9;
	volatile int64_t x40 = -25007206799LL;
	volatile int64_t t9 = 1263677167LL;

    t9 = (((x37^x38)==x39)&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = INT16_MAX;
	int8_t x43 = 5;
	volatile int32_t t10 = 4975;

    t10 = (((x41^x42)==x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = 1;
	int16_t x47 = INT16_MAX;
	static uint16_t x48 = 11353U;
	int32_t t11 = 26;

    t11 = (((x45^x46)==x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	volatile int32_t x50 = 2;
	volatile int16_t x51 = -1;
	uint8_t x52 = 6U;
	int32_t t12 = 24;

    t12 = (((x49^x50)==x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = INT32_MIN;
	static int64_t x56 = INT64_MAX;
	int64_t t13 = -3LL;

    t13 = (((x53^x54)==x55)&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	static volatile int8_t x58 = INT8_MAX;
	static uint64_t x59 = 200355328703LLU;
	static volatile int32_t x60 = INT32_MAX;
	int32_t t14 = -3785973;

    t14 = (((x57^x58)==x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MAX;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	static int8_t x64 = INT8_MIN;

    t15 = (((x61^x62)==x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 4441U;
	int64_t x67 = INT64_MIN;
	static uint16_t x68 = UINT16_MAX;
	int32_t t16 = -3979067;

    t16 = (((x65^x66)==x67)&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = 64U;
	uint64_t x70 = 3195884115946962649LLU;
	uint32_t x72 = 3U;

    t17 = (((x69^x70)==x71)&x72);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x74 = 199512600373LLU;
	uint8_t x75 = 10U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 4010223;

    t18 = (((x73^x74)==x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = INT8_MIN;
	int64_t x80 = INT64_MIN;
	volatile int64_t t19 = -167LL;

    t19 = (((x77^x78)==x79)&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x82 = INT8_MAX;
	uint64_t x83 = 4534048LLU;
	volatile int64_t x84 = INT64_MIN;
	int64_t t20 = -1LL;

    t20 = (((x81^x82)==x83)&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x87 = -1LL;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 418668424;

    t21 = (((x85^x86)==x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	volatile int64_t x90 = 667LL;
	int8_t x91 = 4;
	int32_t t22 = -9003;

    t22 = (((x89^x90)==x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	int16_t x96 = 84;

    t23 = (((x93^x94)==x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	static volatile int32_t x99 = -25059324;
	uint64_t t24 = 201878795279962589LLU;

    t24 = (((x97^x98)==x99)&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	volatile int32_t x104 = -1;
	volatile int32_t t25 = 618;

    t25 = (((x101^x102)==x103)&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile int32_t x106 = INT32_MIN;
	volatile int32_t x107 = -196453;
	int16_t x108 = 13309;
	int32_t t26 = -225536;

    t26 = (((x105^x106)==x107)&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	volatile uint16_t x110 = 105U;
	volatile uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 30U;
	volatile int32_t t27 = 517695;

    t27 = (((x109^x110)==x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = 3816;
	uint64_t x114 = 38626068850070079LLU;
	int8_t x115 = INT8_MAX;
	static int16_t x116 = -1;
	int32_t t28 = 397483069;

    t28 = (((x113^x114)==x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 4863487;
	static int8_t x118 = INT8_MIN;
	static int64_t x119 = INT64_MIN;
	static int8_t x120 = INT8_MAX;
	int32_t t29 = -3232;

    t29 = (((x117^x118)==x119)&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = -1LL;
	static int64_t x123 = INT64_MIN;
	static int32_t x124 = 540;
	int32_t t30 = -57312;

    t30 = (((x121^x122)==x123)&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 379781074U;
	uint16_t x128 = 103U;
	static volatile int32_t t31 = 38997;

    t31 = (((x125^x126)==x127)&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x130 = 22U;
	int32_t x132 = INT32_MIN;

    t32 = (((x129^x130)==x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x135 = 1040051818U;
	volatile uint8_t x136 = 5U;
	volatile int32_t t33 = -17245;

    t33 = (((x133^x134)==x135)&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	int64_t x139 = 0LL;
	int64_t x140 = 972084387297547LL;
	volatile int64_t t34 = -385067LL;

    t34 = (((x137^x138)==x139)&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = -3234775;
	uint64_t x142 = 299903579LLU;
	volatile uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MAX;

    t35 = (((x141^x142)==x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 858726LLU;
	int16_t x146 = 26;
	static int32_t x147 = -102064818;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = -946089;

    t36 = (((x145^x146)==x147)&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 920U;
	int64_t x150 = -1994510863314LL;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -184990395;

    t37 = (((x149^x150)==x151)&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = 48;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MAX;
	int8_t x156 = -1;

    t38 = (((x153^x154)==x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 0;
	uint8_t x158 = 5U;
	static int16_t x160 = INT16_MAX;
	static int32_t t39 = -8;

    t39 = (((x157^x158)==x159)&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = 4;
	int32_t x162 = 1627302;
	uint8_t x163 = 3U;
	uint16_t x164 = 14U;
	volatile int32_t t40 = -183;

    t40 = (((x161^x162)==x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	uint32_t x166 = UINT32_MAX;
	static int64_t x167 = -10LL;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -291;

    t41 = (((x165^x166)==x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 0;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = 6138066126512028545LLU;
	static int64_t t42 = 667434955707639835LL;

    t42 = (((x169^x170)==x171)&x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x174 = 0U;
	static volatile int32_t x176 = INT32_MAX;
	static int32_t t43 = -2;

    t43 = (((x173^x174)==x175)&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	volatile int8_t x178 = -4;
	uint32_t x179 = UINT32_MAX;
	uint16_t x180 = 114U;
	static volatile int32_t t44 = -8;

    t44 = (((x177^x178)==x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = -9;
	static volatile int32_t t45 = -363737;

    t45 = (((x181^x182)==x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x186 = 1564U;
	uint64_t x187 = 219691LLU;
	volatile int32_t t46 = -15046756;

    t46 = (((x185^x186)==x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = -47;
	static int64_t x190 = INT64_MIN;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = 8069;
	volatile int32_t t47 = -1;

    t47 = (((x189^x190)==x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -4;
	static int8_t x194 = INT8_MIN;
	volatile int8_t x195 = -4;
	int64_t x196 = 662668023459593LL;

    t48 = (((x193^x194)==x195)&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int16_t x199 = INT16_MAX;
	uint32_t t49 = 20U;

    t49 = (((x197^x198)==x199)&x200);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 2U;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -89808133;

    t50 = (((x201^x202)==x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	int16_t x206 = -59;
	int32_t x208 = -446660429;
	int32_t t51 = -1059;

    t51 = (((x205^x206)==x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	int64_t x210 = 48LL;
	static uint64_t x211 = UINT64_MAX;
	int32_t t52 = 163857;

    t52 = (((x209^x210)==x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	volatile int32_t x215 = -22576;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -391295;

    t53 = (((x213^x214)==x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	volatile int64_t x218 = -48522358996416LL;
	uint64_t x219 = 70499562640403743LLU;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t54 = 16048544LLU;

    t54 = (((x217^x218)==x219)&x220);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 1U;
	volatile int64_t x222 = INT64_MAX;
	uint8_t x224 = UINT8_MAX;
	static volatile int32_t t55 = 18;

    t55 = (((x221^x222)==x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -2;
	volatile int16_t x227 = INT16_MIN;
	int64_t t56 = -684321681LL;

    t56 = (((x225^x226)==x227)&x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MAX;
	int64_t x232 = INT64_MIN;
	int64_t t57 = 720LL;

    t57 = (((x229^x230)==x231)&x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	int64_t x234 = -1LL;
	static int64_t x235 = INT64_MIN;
	uint16_t x236 = UINT16_MAX;
	int32_t t58 = 5;

    t58 = (((x233^x234)==x235)&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MAX;
	static int32_t x238 = -5850;
	static int8_t x239 = INT8_MIN;
	uint8_t x240 = 16U;
	static volatile int32_t t59 = 356739986;

    t59 = (((x237^x238)==x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	int64_t x244 = INT64_MAX;
	volatile int64_t t60 = 54193220345LL;

    t60 = (((x241^x242)==x243)&x244);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x247 = UINT8_MAX;
	int32_t x248 = 2;
	int32_t t61 = 25;

    t61 = (((x245^x246)==x247)&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	int32_t x250 = -1;
	static int8_t x252 = INT8_MIN;
	static int32_t t62 = 11774409;

    t62 = (((x249^x250)==x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	int8_t x255 = -1;
	int32_t t63 = -279704934;

    t63 = (((x253^x254)==x255)&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	int16_t x258 = -6079;
	volatile int16_t x259 = -1;
	uint8_t x260 = 7U;
	volatile int32_t t64 = -254832550;

    t64 = (((x257^x258)==x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = -12;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = 106U;
	uint32_t t65 = 21522542U;

    t65 = (((x261^x262)==x263)&x264);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -436347;

    t66 = (((x265^x266)==x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MAX;
	int32_t x271 = -1;

    t67 = (((x269^x270)==x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	int8_t x274 = 6;
	volatile uint64_t x276 = 41LLU;
	uint64_t t68 = 13670102953LLU;

    t68 = (((x273^x274)==x275)&x276);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = 6078;
	int32_t t69 = 812933418;

    t69 = (((x277^x278)==x279)&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 59014;
	static int8_t x282 = INT8_MAX;
	static volatile uint16_t x283 = 47U;
	int64_t x284 = -1LL;
	int64_t t70 = -2LL;

    t70 = (((x281^x282)==x283)&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	static volatile int64_t x286 = INT64_MIN;
	volatile int16_t x287 = -1;
	int64_t x288 = -1LL;
	static volatile int64_t t71 = 64366LL;

    t71 = (((x285^x286)==x287)&x288);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = 3716764627546LL;
	volatile int8_t x291 = INT8_MIN;
	int16_t x292 = -201;
	int32_t t72 = -79514;

    t72 = (((x289^x290)==x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x293 = 26LL;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile int8_t x296 = -1;
	int32_t t73 = 857;

    t73 = (((x293^x294)==x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int32_t x299 = -1;
	static int16_t x300 = 200;

    t74 = (((x297^x298)==x299)&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 0U;
	int8_t x302 = -1;
	uint64_t x303 = 92938977240503LLU;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t75 = -175006;

    t75 = (((x301^x302)==x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	int16_t x306 = 1;
	int8_t x307 = -6;
	uint16_t x308 = 19675U;
	volatile int32_t t76 = -597936974;

    t76 = (((x305^x306)==x307)&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MAX;
	volatile uint16_t x311 = 29U;
	static uint16_t x312 = 396U;
	int32_t t77 = -27764121;

    t77 = (((x309^x310)==x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MIN;
	int16_t x316 = -1;
	volatile int32_t t78 = -58021;

    t78 = (((x313^x314)==x315)&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = UINT64_MAX;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t79 = 44981965338438LLU;

    t79 = (((x317^x318)==x319)&x320);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MAX;
	static int8_t x323 = INT8_MAX;
	int8_t x324 = 41;
	static int32_t t80 = 760015410;

    t80 = (((x321^x322)==x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MIN;
	static int32_t x326 = -86;
	uint8_t x327 = 0U;
	int8_t x328 = 0;
	volatile int32_t t81 = 31;

    t81 = (((x325^x326)==x327)&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MAX;
	int32_t x330 = INT32_MAX;
	int8_t x331 = -1;

    t82 = (((x329^x330)==x331)&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	volatile int32_t x335 = INT32_MIN;
	int8_t x336 = -1;
	int32_t t83 = -96985;

    t83 = (((x333^x334)==x335)&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 14U;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	volatile int16_t x340 = -1;

    t84 = (((x337^x338)==x339)&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = 50;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 1932U;
	int32_t t85 = 182471;

    t85 = (((x341^x342)==x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MIN;
	volatile int16_t x347 = -10;
	volatile int64_t x348 = 7653466LL;

    t86 = (((x345^x346)==x347)&x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = 0U;
	uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 724LLU;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 0;

    t87 = (((x349^x350)==x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 1U;
	int64_t x354 = INT64_MAX;
	volatile int32_t x355 = INT32_MAX;
	int8_t x356 = -1;

    t88 = (((x353^x354)==x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 1U;
	int64_t x358 = -1LL;
	volatile uint16_t x359 = 163U;
	int16_t x360 = -3;
	int32_t t89 = 6424;

    t89 = (((x357^x358)==x359)&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	int64_t x362 = -1LL;

    t90 = (((x361^x362)==x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x366 = UINT16_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	static int8_t x368 = INT8_MIN;
	int32_t t91 = 49653355;

    t91 = (((x365^x366)==x367)&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 433674677967LLU;
	volatile int16_t x370 = INT16_MIN;
	volatile int64_t x371 = 36738LL;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 3;

    t92 = (((x369^x370)==x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint8_t x374 = 1U;
	int16_t x375 = INT16_MIN;
	volatile int32_t t93 = -1163074;

    t93 = (((x373^x374)==x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 917307;
	int32_t x378 = INT32_MAX;
	static int64_t x379 = INT64_MAX;
	uint64_t x380 = UINT64_MAX;
	uint64_t t94 = 19921LLU;

    t94 = (((x377^x378)==x379)&x380);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	uint32_t x382 = UINT32_MAX;
	uint16_t x384 = 473U;
	int32_t t95 = 0;

    t95 = (((x381^x382)==x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 902823016U;
	static uint16_t x386 = 0U;
	int16_t x387 = INT16_MIN;
	static int16_t x388 = 16;
	volatile int32_t t96 = 563715;

    t96 = (((x385^x386)==x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x391 = INT8_MAX;
	uint32_t x392 = 106389830U;
	static uint32_t t97 = 434U;

    t97 = (((x389^x390)==x391)&x392);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 36049U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t98 = 9983884882330LLU;

    t98 = (((x393^x394)==x395)&x396);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x397 = UINT64_MAX;
	static uint16_t x398 = 473U;
	volatile uint16_t x399 = 1018U;
	int16_t x400 = INT16_MIN;

    t99 = (((x397^x398)==x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int16_t x402 = INT16_MAX;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t100 = 185;

    t100 = (((x401^x402)==x403)&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	volatile int16_t x406 = INT16_MIN;
	volatile int8_t x407 = 30;
	int8_t x408 = INT8_MIN;
	int32_t t101 = -230290;

    t101 = (((x405^x406)==x407)&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	uint32_t x410 = UINT32_MAX;
	int8_t x412 = 26;

    t102 = (((x409^x410)==x411)&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -3621661;
	uint32_t x415 = UINT32_MAX;
	uint8_t x416 = UINT8_MAX;
	int32_t t103 = 20322785;

    t103 = (((x413^x414)==x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x417 = UINT32_MAX;
	uint16_t x418 = UINT16_MAX;
	uint64_t x419 = 1769LLU;
	int8_t x420 = INT8_MIN;
	volatile int32_t t104 = -14114665;

    t104 = (((x417^x418)==x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x422 = 6797U;
	int8_t x423 = -1;
	uint32_t x424 = 313654U;
	uint32_t t105 = 28U;

    t105 = (((x421^x422)==x423)&x424);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = 108596117823LL;
	static int8_t x426 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t106 = 230590120;

    t106 = (((x425^x426)==x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 166620767U;
	static int8_t x430 = -1;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MAX;

    t107 = (((x429^x430)==x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x434 = -1;
	static int16_t x436 = 0;

    t108 = (((x433^x434)==x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = 1457168578627419LLU;
	static uint32_t x438 = 987U;

    t109 = (((x437^x438)==x439)&x440);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = INT32_MIN;
	int8_t x442 = 3;
	static volatile uint64_t x443 = 12297181LLU;
	int64_t x444 = INT64_MIN;

    t110 = (((x441^x442)==x443)&x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x446 = 16137U;
	int32_t x447 = INT32_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	static volatile uint32_t t111 = 5U;

    t111 = (((x445^x446)==x447)&x448);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x451 = -1LL;
	uint64_t x452 = 140619LLU;
	static uint64_t t112 = 2791551LLU;

    t112 = (((x449^x450)==x451)&x452);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	volatile int64_t x454 = -1LL;
	static int32_t x455 = INT32_MAX;
	int8_t x456 = 0;
	int32_t t113 = 0;

    t113 = (((x453^x454)==x455)&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 6U;
	static volatile int8_t x458 = -1;

    t114 = (((x457^x458)==x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x464 = UINT64_MAX;
	uint64_t t115 = 2316369834183941LLU;

    t115 = (((x461^x462)==x463)&x464);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x466 = UINT64_MAX;
	volatile uint32_t x467 = UINT32_MAX;
	static int32_t t116 = -601;

    t116 = (((x465^x466)==x467)&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x471 = UINT32_MAX;
	volatile int64_t t117 = -32285627711LL;

    t117 = (((x469^x470)==x471)&x472);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int16_t x474 = -1;
	volatile uint16_t x475 = 15U;
	volatile int32_t x476 = -40;
	int32_t t118 = 153148439;

    t118 = (((x473^x474)==x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -7;
	int64_t x479 = 3409LL;
	static int64_t x480 = INT64_MIN;
	int64_t t119 = -2953377248LL;

    t119 = (((x477^x478)==x479)&x480);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 129967113938516207LLU;
	int32_t t120 = -558232862;

    t120 = (((x481^x482)==x483)&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x486 = 221123504LL;
	static int16_t x488 = -5160;

    t121 = (((x485^x486)==x487)&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x489 = INT64_MAX;
	static int64_t x491 = INT64_MIN;
	int32_t t122 = 919758;

    t122 = (((x489^x490)==x491)&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 359U;
	int32_t x494 = INT32_MIN;
	uint8_t x495 = UINT8_MAX;
	int8_t x496 = 34;
	volatile int32_t t123 = 22848078;

    t123 = (((x493^x494)==x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x497 = INT64_MIN;
	uint32_t x498 = UINT32_MAX;
	volatile int64_t x499 = INT64_MIN;
	volatile uint16_t x500 = UINT16_MAX;
	volatile int32_t t124 = 26484;

    t124 = (((x497^x498)==x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	static int64_t x502 = INT64_MAX;
	static int16_t x504 = 93;
	static volatile int32_t t125 = -993;

    t125 = (((x501^x502)==x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = 1191611LL;
	int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = -1;

    t126 = (((x505^x506)==x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MIN;
	static uint16_t x510 = UINT16_MAX;
	int8_t x511 = INT8_MAX;
	int32_t x512 = -1;

    t127 = (((x509^x510)==x511)&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = UINT64_MAX;
	int32_t x515 = 122849410;
	static volatile int32_t x516 = -1;
	volatile int32_t t128 = -206;

    t128 = (((x513^x514)==x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 46U;
	static int16_t x518 = -3074;
	volatile int64_t x519 = -631LL;
	static volatile int16_t x520 = INT16_MAX;

    t129 = (((x517^x518)==x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x522 = 308621588LLU;
	int32_t x523 = -1;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t130 = 29892U;

    t130 = (((x521^x522)==x523)&x524);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 3U;
	volatile uint16_t x526 = 1U;
	int64_t x527 = -1LL;
	volatile uint64_t x528 = UINT64_MAX;
	volatile uint64_t t131 = 2280071245918175842LLU;

    t131 = (((x525^x526)==x527)&x528);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = INT16_MAX;
	uint16_t x531 = 0U;
	int64_t x532 = INT64_MIN;
	volatile int64_t t132 = -87819LL;

    t132 = (((x529^x530)==x531)&x532);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 3U;
	static uint16_t x534 = 0U;
	uint8_t x535 = UINT8_MAX;
	static int32_t x536 = INT32_MIN;
	volatile int32_t t133 = 2614815;

    t133 = (((x533^x534)==x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 58U;
	volatile int16_t x540 = -1;
	int32_t t134 = 2135023;

    t134 = (((x537^x538)==x539)&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 802239U;
	int32_t x542 = 5;
	static uint32_t x543 = 5482U;
	static int64_t t135 = -59770LL;

    t135 = (((x541^x542)==x543)&x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -518247665;
	int64_t x547 = 618796192220111309LL;
	int16_t x548 = INT16_MIN;
	volatile int32_t t136 = -6;

    t136 = (((x545^x546)==x547)&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x551 = UINT64_MAX;
	volatile int64_t x552 = -1054LL;
	static int64_t t137 = -550383057798908LL;

    t137 = (((x549^x550)==x551)&x552);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MAX;
	uint32_t x554 = UINT32_MAX;
	uint16_t x555 = UINT16_MAX;
	static int32_t t138 = 7538605;

    t138 = (((x553^x554)==x555)&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x557 = 1758879045U;
	int8_t x558 = INT8_MIN;
	int16_t x560 = -6441;

    t139 = (((x557^x558)==x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	int64_t x562 = INT64_MIN;
	static int16_t x563 = 1;
	int64_t x564 = INT64_MAX;
	int64_t t140 = 73979LL;

    t140 = (((x561^x562)==x563)&x564);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 69U;
	uint8_t x566 = 14U;
	uint64_t x567 = UINT64_MAX;
	int16_t x568 = -1;
	volatile int32_t t141 = -3848796;

    t141 = (((x565^x566)==x567)&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 7657LLU;
	volatile uint16_t x570 = 46U;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = 665;

    t142 = (((x569^x570)==x571)&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = 126U;
	static uint32_t x574 = 203U;
	static int16_t x575 = -193;
	volatile uint64_t x576 = 20385272345197648LLU;
	volatile uint64_t t143 = 263LLU;

    t143 = (((x573^x574)==x575)&x576);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	volatile int16_t x578 = -26;
	volatile uint16_t x580 = 456U;
	int32_t t144 = -2409536;

    t144 = (((x577^x578)==x579)&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x582 = 1217U;
	uint8_t x583 = 7U;
	volatile int32_t t145 = 11063;

    t145 = (((x581^x582)==x583)&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	volatile int64_t x586 = -2081653630287127639LL;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = 0;

    t146 = (((x585^x586)==x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MIN;
	int8_t x591 = 7;
	uint64_t x592 = UINT64_MAX;
	volatile uint64_t t147 = 13280LLU;

    t147 = (((x589^x590)==x591)&x592);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -6969305;
	volatile int16_t x595 = 56;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t148 = 11042;

    t148 = (((x593^x594)==x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	int64_t x598 = INT64_MAX;
	int16_t x599 = -7867;
	int64_t x600 = INT64_MIN;
	static volatile int64_t t149 = 3158006LL;

    t149 = (((x597^x598)==x599)&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x603 = 0;
	static int8_t x604 = -1;

    t150 = (((x601^x602)==x603)&x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = -6307;
	volatile int32_t x607 = INT32_MAX;
	volatile int32_t t151 = 0;

    t151 = (((x605^x606)==x607)&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MAX;
	uint16_t x611 = 55U;
	int32_t t152 = 67679;

    t152 = (((x609^x610)==x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	static volatile int16_t x615 = INT16_MAX;
	volatile uint64_t x616 = UINT64_MAX;
	uint64_t t153 = 82648664145833701LLU;

    t153 = (((x613^x614)==x615)&x616);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x618 = INT16_MIN;
	int8_t x619 = -1;

    t154 = (((x617^x618)==x619)&x620);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	uint8_t x622 = 0U;
	volatile uint32_t x623 = UINT32_MAX;
	static volatile int16_t x624 = INT16_MAX;
	static int32_t t155 = 7904074;

    t155 = (((x621^x622)==x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = -1;
	uint16_t x626 = 1100U;
	volatile int32_t t156 = -3099090;

    t156 = (((x625^x626)==x627)&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = 844083U;
	int16_t x630 = 0;
	int64_t x631 = 288437558713LL;
	volatile int16_t x632 = INT16_MAX;
	int32_t t157 = -924;

    t157 = (((x629^x630)==x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 3428745486301448812LLU;
	volatile int32_t x634 = INT32_MIN;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MAX;
	static volatile int32_t t158 = 833;

    t158 = (((x633^x634)==x635)&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 17U;
	int32_t x639 = -135;
	static uint16_t x640 = 35U;
	volatile int32_t t159 = -1;

    t159 = (((x637^x638)==x639)&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MIN;
	int8_t x643 = 5;

    t160 = (((x641^x642)==x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = INT16_MAX;
	static int16_t x646 = -1;
	uint8_t x647 = UINT8_MAX;
	static int64_t x648 = INT64_MIN;
	int64_t t161 = -5845522157325LL;

    t161 = (((x645^x646)==x647)&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x649 = 4629729LLU;
	volatile int64_t x650 = INT64_MIN;
	volatile uint32_t x651 = 21U;

    t162 = (((x649^x650)==x651)&x652);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -2376216;
	static int64_t x654 = INT64_MAX;
	int16_t x655 = -752;
	int16_t x656 = INT16_MAX;
	volatile int32_t t163 = 10;

    t163 = (((x653^x654)==x655)&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 1U;
	int32_t x658 = INT32_MAX;
	int32_t x660 = INT32_MIN;
	volatile int32_t t164 = 0;

    t164 = (((x657^x658)==x659)&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x661 = -1;
	int16_t x662 = -259;
	volatile int16_t x663 = -1;
	volatile uint64_t x664 = UINT64_MAX;
	static volatile uint64_t t165 = 6746485LLU;

    t165 = (((x661^x662)==x663)&x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MIN;
	int64_t x667 = 684998429210693LL;
	static volatile int32_t t166 = 0;

    t166 = (((x665^x666)==x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = -1LL;
	uint16_t x670 = UINT16_MAX;
	static volatile int16_t x671 = 291;
	int16_t x672 = INT16_MAX;

    t167 = (((x669^x670)==x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 22U;
	uint32_t x674 = 3292U;
	int8_t x675 = INT8_MIN;
	volatile int16_t x676 = -26;
	volatile int32_t t168 = -8764415;

    t168 = (((x673^x674)==x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x678 = 584930U;
	int64_t x679 = INT64_MIN;
	static int32_t t169 = 248297;

    t169 = (((x677^x678)==x679)&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = 5U;
	uint8_t x682 = 1U;
	int32_t t170 = 124606;

    t170 = (((x681^x682)==x683)&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = INT64_MIN;
	int64_t x687 = INT64_MIN;
	static volatile uint64_t x688 = UINT64_MAX;
	uint64_t t171 = 19797LLU;

    t171 = (((x685^x686)==x687)&x688);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 113U;
	volatile int64_t x690 = -10301371757LL;
	static uint64_t x691 = UINT64_MAX;
	volatile int16_t x692 = -1;
	int32_t t172 = 33;

    t172 = (((x689^x690)==x691)&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x693 = 246LLU;
	static int16_t x694 = INT16_MIN;
	static uint32_t x696 = UINT32_MAX;

    t173 = (((x693^x694)==x695)&x696);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -4347011LL;
	volatile uint16_t x698 = UINT16_MAX;
	static uint64_t x699 = 13LLU;
	uint16_t x700 = 30370U;
	static int32_t t174 = -212828;

    t174 = (((x697^x698)==x699)&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x702 = -1;
	int8_t x703 = 1;
	static int8_t x704 = INT8_MIN;

    t175 = (((x701^x702)==x703)&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	int64_t x706 = 224540LL;
	int32_t x707 = 0;
	int32_t x708 = INT32_MIN;
	volatile int32_t t176 = 1;

    t176 = (((x705^x706)==x707)&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x711 = -17LL;
	uint64_t x712 = 12763536223718LLU;
	uint64_t t177 = 348777LLU;

    t177 = (((x709^x710)==x711)&x712);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = 1;
	int32_t x714 = 0;
	uint16_t x715 = 7U;
	uint32_t x716 = 1443U;
	uint32_t t178 = 239912411U;

    t178 = (((x713^x714)==x715)&x716);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	uint16_t x719 = 5548U;
	volatile int64_t x720 = -1LL;

    t179 = (((x717^x718)==x719)&x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 1305789U;
	int32_t x722 = INT32_MAX;
	volatile int16_t x724 = -3;

    t180 = (((x721^x722)==x723)&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x726 = INT8_MIN;
	int8_t x727 = INT8_MIN;
	int32_t t181 = -79943;

    t181 = (((x725^x726)==x727)&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = 0;
	static uint32_t x731 = 1U;

    t182 = (((x729^x730)==x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = 33938023LLU;
	int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 20U;
	volatile int32_t t183 = -1;

    t183 = (((x733^x734)==x735)&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	static int32_t x738 = -1;
	int8_t x739 = INT8_MIN;
	int16_t x740 = INT16_MAX;
	int32_t t184 = 116373454;

    t184 = (((x737^x738)==x739)&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 3U;
	static int32_t x742 = -1;
	uint16_t x743 = UINT16_MAX;
	static int64_t x744 = -9LL;
	volatile int64_t t185 = 57795154018LL;

    t185 = (((x741^x742)==x743)&x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	static int64_t x747 = INT64_MAX;
	uint16_t x748 = 2U;

    t186 = (((x745^x746)==x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	static int64_t x751 = -1LL;
	volatile int64_t t187 = 196027724228LL;

    t187 = (((x749^x750)==x751)&x752);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x754 = 3020U;
	uint16_t x755 = 15441U;
	int16_t x756 = 336;

    t188 = (((x753^x754)==x755)&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = -52527113LL;
	static uint8_t x759 = 3U;
	static uint8_t x760 = 1U;
	static volatile int32_t t189 = 1;

    t189 = (((x757^x758)==x759)&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x761 = INT16_MIN;
	uint32_t x762 = 1632575479U;
	int64_t x763 = INT64_MIN;
	uint32_t x764 = 9093569U;
	volatile uint32_t t190 = 295U;

    t190 = (((x761^x762)==x763)&x764);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x766 = 15946U;
	uint8_t x767 = 25U;
	volatile int8_t x768 = -1;
	int32_t t191 = 38;

    t191 = (((x765^x766)==x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	uint8_t x770 = 40U;
	static volatile int64_t x771 = INT64_MAX;
	uint16_t x772 = 242U;
	volatile int32_t t192 = -369;

    t192 = (((x769^x770)==x771)&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x775 = INT16_MAX;
	int32_t x776 = INT32_MIN;
	volatile int32_t t193 = -89286627;

    t193 = (((x773^x774)==x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MIN;
	volatile uint16_t x778 = 175U;
	int16_t x779 = -1;
	int64_t x780 = INT64_MAX;
	static int64_t t194 = -1031404270484LL;

    t194 = (((x777^x778)==x779)&x780);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 9;
	int64_t x782 = INT64_MIN;
	int32_t x783 = -1;
	int16_t x784 = 12605;

    t195 = (((x781^x782)==x783)&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -44008640;
	int16_t x787 = -433;
	static volatile int8_t x788 = INT8_MIN;

    t196 = (((x785^x786)==x787)&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	int8_t x790 = -1;
	int8_t x791 = INT8_MIN;
	uint32_t x792 = 260395U;
	volatile uint32_t t197 = 36865659U;

    t197 = (((x789^x790)==x791)&x792);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = -1;
	int16_t x795 = -899;
	int64_t x796 = 0LL;

    t198 = (((x793^x794)==x795)&x796);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MIN;
	int64_t x799 = -1LL;
	volatile int16_t x800 = INT16_MIN;

    t199 = (((x797^x798)==x799)&x800);

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

