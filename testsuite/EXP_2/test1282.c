
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

int16_t x3 = INT16_MIN;
static int16_t x8 = INT16_MIN;
int32_t t1 = 60037;
int32_t x12 = 391;
volatile int16_t x17 = INT16_MAX;
static int8_t x21 = 8;
int32_t t5 = 538773452;
int8_t x28 = -5;
int32_t t6 = -820422;
int16_t x30 = 0;
int8_t x33 = INT8_MIN;
int64_t x36 = INT64_MIN;
volatile int32_t t8 = 20;
volatile uint16_t x47 = 176U;
static volatile int32_t t11 = -9249;
int64_t x49 = INT64_MIN;
int16_t x52 = 26;
static int8_t x58 = INT8_MIN;
volatile uint16_t x62 = 7535U;
volatile int32_t t15 = 0;
static volatile int16_t x67 = -1;
volatile int32_t x69 = INT32_MAX;
uint8_t x71 = UINT8_MAX;
volatile int32_t t17 = 128;
uint64_t x73 = 16329108231829LLU;
volatile int16_t x74 = INT16_MAX;
int32_t x76 = -346253;
int16_t x83 = INT16_MIN;
int8_t x86 = INT8_MIN;
int32_t x88 = -1453752;
int8_t x90 = -1;
int32_t x91 = INT32_MIN;
int32_t x92 = INT32_MIN;
int8_t x95 = -2;
volatile int32_t t23 = -731563614;
volatile int8_t x97 = INT8_MIN;
int32_t x98 = 0;
int8_t x103 = 18;
volatile uint64_t x104 = 154576286LLU;
int32_t t25 = -475164022;
int32_t x114 = -73193;
int64_t x119 = INT64_MIN;
static int64_t x123 = INT64_MAX;
int32_t x124 = -1;
int32_t t31 = -2;
uint32_t x145 = 319792U;
volatile int32_t t36 = -342121;
int8_t x149 = INT8_MAX;
int32_t t37 = -214;
static int32_t x157 = 174;
uint8_t x159 = 29U;
uint16_t x162 = 1116U;
volatile int8_t x179 = -1;
int16_t x184 = -1;
static int16_t x185 = -1;
volatile int32_t t47 = -12716;
int32_t t48 = -154768774;
volatile uint64_t x197 = UINT64_MAX;
uint64_t x202 = 199666LLU;
uint64_t x210 = 2788387881LLU;
uint32_t x219 = UINT32_MAX;
uint16_t x222 = 20U;
volatile int32_t x230 = -1;
int8_t x232 = INT8_MIN;
volatile int32_t t57 = -939598151;
int8_t x240 = INT8_MAX;
int32_t t59 = 275252731;
uint8_t x267 = 6U;
uint64_t x268 = 4218909079LLU;
static int32_t t66 = 203930;
int64_t x271 = -1LL;
int32_t t73 = -7587;
int64_t x297 = -3762193531974859LL;
int8_t x299 = 5;
uint64_t x311 = 876LLU;
uint8_t x314 = 52U;
int32_t x318 = INT32_MIN;
int8_t x320 = INT8_MIN;
uint8_t x326 = 25U;
int32_t t81 = 21556;
static volatile int32_t x329 = -512507218;
uint64_t x346 = UINT64_MAX;
int32_t x352 = -11164;
volatile int32_t t87 = -5693;
static int32_t x353 = -64558;
int64_t x355 = INT64_MAX;
int8_t x356 = -1;
int32_t t88 = 297;
static int64_t x357 = -5LL;
int32_t x358 = -34877442;
static uint32_t x366 = 436003328U;
int32_t t91 = -1943944;
uint16_t x373 = UINT16_MAX;
volatile uint16_t x380 = UINT16_MAX;
int8_t x384 = -6;
int64_t x385 = INT64_MAX;
uint16_t x390 = 34U;
int8_t x398 = -1;
volatile int32_t x399 = INT32_MIN;
volatile int32_t x407 = -1;
static uint64_t x408 = UINT64_MAX;
int64_t x409 = INT64_MIN;
volatile uint32_t x410 = UINT32_MAX;
static uint64_t x411 = 5339092007912LLU;
static uint64_t x427 = UINT64_MAX;
static int16_t x435 = -1;
int32_t x438 = INT32_MAX;
int16_t x448 = 0;
static volatile int32_t t112 = -1038;
int8_t x456 = INT8_MAX;
volatile int32_t t113 = -247807;
int8_t x462 = -1;
volatile uint16_t x465 = 6U;
int8_t x470 = INT8_MIN;
volatile uint32_t x471 = 750U;
int8_t x478 = -7;
volatile int32_t t119 = -212006;
uint8_t x481 = 31U;
volatile uint8_t x487 = 84U;
static volatile int64_t x494 = 175LL;
int64_t x495 = INT64_MIN;
int32_t t123 = -1750;
static volatile int16_t x502 = -1;
volatile int32_t t126 = 90011;
int32_t x513 = INT32_MAX;
uint32_t x517 = 8U;
static volatile uint16_t x524 = 146U;
int8_t x529 = -8;
int64_t x531 = -270141436110LL;
uint16_t x536 = 7930U;
int8_t x547 = -1;
volatile uint16_t x549 = UINT16_MAX;
int16_t x552 = -1;
int8_t x557 = -1;
int32_t x563 = INT32_MAX;
static uint32_t x566 = 6669621U;
int16_t x567 = -1;
uint64_t x568 = 2030LLU;
int64_t x575 = 2432128974121614LL;
int32_t t143 = -1151042;
uint16_t x581 = UINT16_MAX;
int16_t x583 = -25;
volatile int32_t t145 = -67;
volatile uint8_t x585 = 1U;
int64_t x590 = -226LL;
uint64_t x592 = 2338778602677LLU;
static volatile int64_t x597 = -260795776034865LL;
static uint32_t x598 = 33U;
uint32_t x599 = 30U;
uint16_t x600 = UINT16_MAX;
int8_t x606 = INT8_MIN;
int8_t x607 = INT8_MIN;
int16_t x608 = INT16_MAX;
int32_t x622 = INT32_MIN;
int8_t x623 = INT8_MIN;
volatile int64_t x624 = 262857824133LL;
volatile int8_t x627 = INT8_MIN;
int32_t x628 = INT32_MIN;
volatile int32_t t156 = 76476;
int32_t x632 = INT32_MIN;
volatile int32_t t157 = 15890956;
volatile uint8_t x638 = UINT8_MAX;
int16_t x642 = -6100;
int16_t x643 = -9802;
uint16_t x645 = UINT16_MAX;
uint16_t x646 = 11332U;
volatile int32_t x650 = -172195;
volatile int32_t x658 = INT32_MIN;
uint32_t x661 = UINT32_MAX;
int16_t x662 = INT16_MIN;
volatile uint16_t x669 = 14155U;
static int32_t t168 = 180158365;
static volatile int32_t t171 = -24;
volatile int64_t x689 = INT64_MAX;
volatile int64_t x695 = INT64_MAX;
int32_t t176 = 1736;
uint64_t x711 = 206665874641608LLU;
uint32_t x715 = UINT32_MAX;
int16_t x718 = INT16_MIN;
uint8_t x722 = 93U;
uint16_t x725 = 120U;
int32_t t183 = 214903639;
uint8_t x737 = 64U;
volatile uint64_t x740 = UINT64_MAX;
volatile uint16_t x748 = UINT16_MAX;
int32_t t186 = 754300868;
uint8_t x755 = 12U;
volatile int32_t t189 = 196;
volatile int64_t x762 = INT64_MIN;
int64_t x771 = -1LL;
int32_t t192 = -69246113;
int32_t x774 = 2;
volatile int32_t t194 = 57790635;
uint64_t x787 = 291217713988LLU;
uint16_t x788 = 12397U;
volatile int32_t t196 = 98182;
volatile int32_t x790 = INT32_MIN;
uint64_t x799 = UINT64_MAX;
int16_t x800 = INT16_MIN;


void f0(void) {
    	int32_t x1 = 0;
	uint16_t x2 = 1U;
	int32_t x4 = -255892;
	volatile int32_t t0 = 1;

    t0 = ((x1==(x2!=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MIN;
	uint16_t x7 = UINT16_MAX;

    t1 = ((x5==(x6!=x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 166;
	static volatile uint32_t x10 = 559060923U;
	int16_t x11 = -1;
	volatile int32_t t2 = -90;

    t2 = ((x9==(x10!=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint16_t x14 = 173U;
	static int32_t x15 = 111;
	static int8_t x16 = -1;
	volatile int32_t t3 = 218677;

    t3 = ((x13==(x14!=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 1U;
	volatile int32_t t4 = 55478;

    t4 = ((x17==(x18!=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 124;
	static uint8_t x23 = 5U;
	int16_t x24 = 95;

    t5 = ((x21==(x22!=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = -3022944LL;
	int8_t x27 = INT8_MIN;

    t6 = ((x25==(x26!=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	static int64_t x31 = INT64_MIN;
	int8_t x32 = -5;
	static int32_t t7 = -50388421;

    t7 = ((x29==(x30!=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -32168407598LL;
	int64_t x35 = INT64_MAX;

    t8 = ((x33==(x34!=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -319367;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = -12;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -62;

    t9 = ((x37==(x38!=x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint8_t x42 = 0U;
	static uint64_t x43 = 466446619696822983LLU;
	volatile uint16_t x44 = 941U;
	int32_t t10 = -1;

    t10 = ((x41==(x42!=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -10793;
	int32_t x46 = -1;
	int64_t x48 = -448132093344966LL;

    t11 = ((x45==(x46!=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -1LL;
	uint32_t x51 = 4451U;
	static volatile int32_t t12 = 24643601;

    t12 = ((x49==(x50!=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	uint32_t x54 = 118555690U;
	static int32_t x55 = -1;
	int16_t x56 = 57;
	volatile int32_t t13 = -120;

    t13 = ((x53==(x54!=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x57 = INT64_MIN;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;
	static int32_t t14 = -7165;

    t14 = ((x57==(x58!=x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int64_t x63 = -1LL;
	volatile uint64_t x64 = 335255875303LLU;

    t15 = ((x61==(x62!=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 108842LLU;
	uint16_t x66 = UINT16_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = 1023;

    t16 = ((x65==(x66!=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = 447167U;
	int32_t x72 = INT32_MIN;

    t17 = ((x69==(x70!=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = -1;
	int32_t t18 = 3854;

    t18 = ((x73==(x74!=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -3;
	int16_t x78 = INT16_MIN;
	int8_t x79 = -14;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 0;

    t19 = ((x77==(x78!=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	volatile uint8_t x82 = 49U;
	uint64_t x84 = 22563516LLU;
	volatile int32_t t20 = 0;

    t20 = ((x81==(x82!=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	int32_t t21 = -462;

    t21 = ((x85==(x86!=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 83U;
	volatile int32_t t22 = 4445762;

    t22 = ((x89==(x90!=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 46U;
	uint64_t x94 = UINT64_MAX;
	int32_t x96 = 3;

    t23 = ((x93==(x94!=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x99 = -9;
	int64_t x100 = -1LL;
	int32_t t24 = 2;

    t24 = ((x97==(x98!=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;

    t25 = ((x101==(x102!=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 2948072LLU;
	int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MAX;
	int8_t x108 = 54;
	int32_t t26 = 299950347;

    t26 = ((x105==(x106!=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = -45LL;
	uint16_t x111 = 24051U;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 8330219;

    t27 = ((x109==(x110!=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = -15LL;
	int32_t x115 = -161;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -35346;

    t28 = ((x113==(x114!=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int32_t x118 = 0;
	uint8_t x120 = 3U;
	int32_t t29 = -27018;

    t29 = ((x117==(x118!=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MAX;
	volatile int32_t t30 = -6502915;

    t30 = ((x121==(x122!=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	volatile int8_t x126 = INT8_MIN;
	uint32_t x127 = 69971U;
	int64_t x128 = INT64_MIN;

    t31 = ((x125==(x126!=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	static volatile uint16_t x130 = UINT16_MAX;
	static int8_t x131 = INT8_MIN;
	volatile int32_t x132 = INT32_MIN;
	int32_t t32 = -52064;

    t32 = ((x129==(x130!=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = INT32_MAX;
	uint8_t x136 = 1U;
	volatile int32_t t33 = -9198820;

    t33 = ((x133==(x134!=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 6U;
	int64_t x138 = INT64_MAX;
	static int32_t x139 = -1;
	uint64_t x140 = 679LLU;
	int32_t t34 = 1848;

    t34 = ((x137==(x138!=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int32_t x142 = INT32_MIN;
	static int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;
	static int32_t t35 = 5;

    t35 = ((x141==(x142!=x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = -1;
	volatile int64_t x147 = -1LL;
	uint64_t x148 = 0LLU;

    t36 = ((x145==(x146!=x147))==x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x150 = INT32_MIN;
	volatile int32_t x151 = 2847;
	volatile int32_t x152 = -1;

    t37 = ((x149==(x150!=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int32_t x154 = -31002066;
	uint16_t x155 = 633U;
	static int64_t x156 = -1LL;
	int32_t t38 = -7;

    t38 = ((x153==(x154!=x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = 380823362;
	volatile int16_t x160 = -1;
	int32_t t39 = 770920;

    t39 = ((x157==(x158!=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	volatile int64_t x163 = -1LL;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -41;

    t40 = ((x161==(x162!=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 122U;
	int8_t x166 = INT8_MIN;
	static int64_t x167 = INT64_MIN;
	volatile int8_t x168 = 2;
	static int32_t t41 = -44207;

    t41 = ((x165==(x166!=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	uint32_t x170 = 824U;
	uint16_t x171 = 1U;
	volatile int8_t x172 = INT8_MIN;
	int32_t t42 = -89391;

    t42 = ((x169==(x170!=x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = 858148239369159LL;
	int8_t x174 = 0;
	uint8_t x175 = 0U;
	static int32_t x176 = INT32_MAX;
	int32_t t43 = -3610;

    t43 = ((x173==(x174!=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = INT16_MAX;
	uint16_t x180 = 13607U;
	int32_t t44 = 3398041;

    t44 = ((x177==(x178!=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = INT8_MIN;
	uint8_t x183 = 21U;
	int32_t t45 = 64;

    t45 = ((x181==(x182!=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x186 = 1;
	int32_t x187 = INT32_MAX;
	int8_t x188 = 12;
	volatile int32_t t46 = 0;

    t46 = ((x185==(x186!=x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	uint8_t x190 = 1U;
	int16_t x191 = -12791;
	static int8_t x192 = INT8_MIN;

    t47 = ((x189==(x190!=x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	int16_t x194 = 2091;
	static uint32_t x195 = 955634395U;
	int64_t x196 = -1LL;

    t48 = ((x193==(x194!=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MIN;
	int16_t x199 = -1;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 704;

    t49 = ((x197==(x198!=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -1;
	int32_t x203 = INT32_MIN;
	int64_t x204 = 324555919063LL;
	int32_t t50 = 35143;

    t50 = ((x201==(x202!=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x205 = 2959LLU;
	uint64_t x206 = 86310LLU;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 1014823;

    t51 = ((x205==(x206!=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int32_t x211 = 83;
	volatile int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = 56;

    t52 = ((x209==(x210!=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MIN;
	volatile uint8_t x215 = 6U;
	int32_t x216 = INT32_MIN;
	int32_t t53 = -1276384;

    t53 = ((x213==(x214!=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 4U;
	uint64_t x218 = 4LLU;
	int32_t x220 = 0;
	int32_t t54 = -4642477;

    t54 = ((x217==(x218!=x219))==x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = 2817U;
	static uint32_t x223 = 36429660U;
	int16_t x224 = 30;
	volatile int32_t t55 = 0;

    t55 = ((x221==(x222!=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	uint64_t x226 = 29522LLU;
	int8_t x227 = 42;
	int16_t x228 = -7;
	int32_t t56 = -819440;

    t56 = ((x225==(x226!=x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -1;
	int8_t x231 = -6;

    t57 = ((x229==(x230!=x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = -1;
	int32_t x235 = -1;
	volatile int32_t x236 = INT32_MIN;
	int32_t t58 = 314989806;

    t58 = ((x233==(x234!=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	int16_t x238 = -450;
	int64_t x239 = INT64_MIN;

    t59 = ((x237==(x238!=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x242 = -59LL;
	int64_t x243 = INT64_MAX;
	int16_t x244 = 3;
	volatile int32_t t60 = -2262440;

    t60 = ((x241==(x242!=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 339578749U;
	uint32_t x246 = 709193398U;
	int32_t x247 = INT32_MAX;
	static uint8_t x248 = UINT8_MAX;
	int32_t t61 = -783028477;

    t61 = ((x245==(x246!=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -1;
	int8_t x250 = -1;
	volatile uint64_t x251 = 120225683736835LLU;
	static int32_t x252 = INT32_MIN;
	int32_t t62 = 15084946;

    t62 = ((x249==(x250!=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -12116665LL;
	static int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 521894452818071LLU;
	volatile int32_t t63 = 137442;

    t63 = ((x253==(x254!=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 7U;
	int16_t x258 = -1350;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = 28669U;
	static int32_t t64 = 26079450;

    t64 = ((x257==(x258!=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MIN;
	static int64_t x263 = INT64_MIN;
	static int16_t x264 = INT16_MAX;
	volatile int32_t t65 = -637;

    t65 = ((x261==(x262!=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = -1;
	int64_t x266 = INT64_MAX;

    t66 = ((x265==(x266!=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = UINT8_MAX;
	int8_t x270 = -62;
	uint64_t x272 = 84494LLU;
	int32_t t67 = -4;

    t67 = ((x269==(x270!=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = -16;
	int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t68 = -9854;

    t68 = ((x273==(x274!=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 1499U;
	int64_t x278 = INT64_MAX;
	int8_t x279 = INT8_MIN;
	static uint64_t x280 = 6LLU;
	int32_t t69 = -322073517;

    t69 = ((x277==(x278!=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	static uint32_t x282 = 8U;
	volatile uint64_t x283 = UINT64_MAX;
	static uint32_t x284 = 903510U;
	static volatile int32_t t70 = 1016054;

    t70 = ((x281==(x282!=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x287 = -1LL;
	int64_t x288 = 19440683LL;
	int32_t t71 = -104;

    t71 = ((x285==(x286!=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MIN;
	static uint64_t x290 = UINT64_MAX;
	volatile int16_t x291 = 1604;
	static uint16_t x292 = 32U;
	int32_t t72 = -107789;

    t72 = ((x289==(x290!=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	volatile int8_t x294 = 28;
	volatile int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;

    t73 = ((x293==(x294!=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = -1;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = 118;

    t74 = ((x297==(x298!=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 3452411LLU;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = INT32_MAX;
	int8_t x304 = -1;
	int32_t t75 = -20791640;

    t75 = ((x301==(x302!=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 566289016U;
	int32_t x306 = -1959;
	uint8_t x307 = 19U;
	static volatile uint32_t x308 = 652337U;
	volatile int32_t t76 = 1;

    t76 = ((x305==(x306!=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 1;
	uint32_t x310 = 3604224U;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -262793;

    t77 = ((x309==(x310!=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;
	volatile int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MAX;
	int32_t t78 = -254;

    t78 = ((x313==(x314!=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	int64_t x319 = INT64_MAX;
	volatile int32_t t79 = 421;

    t79 = ((x317==(x318!=x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x321 = -1;
	int32_t x322 = INT32_MAX;
	uint8_t x323 = 0U;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = -8077071;

    t80 = ((x321==(x322!=x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 85U;
	static int16_t x327 = -124;
	uint16_t x328 = 3U;

    t81 = ((x325==(x326!=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x330 = 5;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = -1;
	volatile int32_t t82 = 654478;

    t82 = ((x329==(x330!=x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	int32_t t83 = -10;

    t83 = ((x333==(x334!=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	volatile uint16_t x339 = 2668U;
	volatile uint8_t x340 = UINT8_MAX;
	volatile int32_t t84 = 43150797;

    t84 = ((x337==(x338!=x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x341 = 24382U;
	uint8_t x342 = 0U;
	static int16_t x343 = 0;
	uint32_t x344 = 919405U;
	volatile int32_t t85 = -147408;

    t85 = ((x341==(x342!=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	int8_t x347 = -1;
	int8_t x348 = -27;
	volatile int32_t t86 = -344170;

    t86 = ((x345==(x346!=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	int16_t x350 = -16;
	int32_t x351 = -4242373;

    t87 = ((x349==(x350!=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x354 = INT32_MAX;

    t88 = ((x353==(x354!=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x359 = 1;
	int8_t x360 = 54;
	int32_t t89 = 6;

    t89 = ((x357==(x358!=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	int64_t x363 = 3LL;
	uint8_t x364 = 4U;
	int32_t t90 = 35304;

    t90 = ((x361==(x362!=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = 387U;
	int64_t x367 = INT64_MAX;
	uint16_t x368 = 3U;

    t91 = ((x365==(x366!=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = INT64_MIN;
	volatile int32_t x370 = -470334;
	static int64_t x371 = INT64_MIN;
	static uint16_t x372 = 8U;
	int32_t t92 = 1483;

    t92 = ((x369==(x370!=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x374 = INT64_MIN;
	uint16_t x375 = 62U;
	int16_t x376 = 102;
	int32_t t93 = 464838;

    t93 = ((x373==(x374!=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x377 = INT32_MIN;
	volatile int8_t x378 = -1;
	int32_t x379 = INT32_MAX;
	volatile int32_t t94 = 55000;

    t94 = ((x377==(x378!=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	volatile uint8_t x382 = 101U;
	int32_t x383 = 21930540;
	static int32_t t95 = 128379;

    t95 = ((x381==(x382!=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x386 = UINT8_MAX;
	volatile uint8_t x387 = 2U;
	volatile int16_t x388 = INT16_MAX;
	int32_t t96 = 99269365;

    t96 = ((x385==(x386!=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = INT16_MAX;
	uint32_t x391 = 9U;
	int8_t x392 = 16;
	int32_t t97 = -39587;

    t97 = ((x389==(x390!=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -21;
	int64_t x394 = -1LL;
	uint8_t x395 = 5U;
	int16_t x396 = 3936;
	static volatile int32_t t98 = -114;

    t98 = ((x393==(x394!=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 20582520LLU;
	int32_t x400 = -609078;
	int32_t t99 = 5;

    t99 = ((x397==(x398!=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 0;
	volatile uint8_t x402 = UINT8_MAX;
	static int64_t x403 = -1LL;
	int32_t x404 = 674856;
	int32_t t100 = 19;

    t100 = ((x401==(x402!=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	volatile int32_t t101 = -3;

    t101 = ((x405==(x406!=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x412 = -1;
	int32_t t102 = -1754523;

    t102 = ((x409==(x410!=x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MIN;
	volatile uint32_t x415 = 48086481U;
	uint16_t x416 = 0U;
	int32_t t103 = 2439914;

    t103 = ((x413==(x414!=x415))==x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MIN;
	static volatile uint16_t x418 = 3765U;
	int8_t x419 = -1;
	int64_t x420 = 552304792686LL;
	volatile int32_t t104 = 6;

    t104 = ((x417==(x418!=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MIN;
	volatile uint16_t x423 = UINT16_MAX;
	int64_t x424 = INT64_MIN;
	int32_t t105 = -1263;

    t105 = ((x421==(x422!=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	int8_t x426 = 0;
	volatile int64_t x428 = 74LL;
	volatile int32_t t106 = -15171361;

    t106 = ((x425==(x426!=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = 38U;
	int16_t x430 = -271;
	int64_t x431 = -538LL;
	static uint32_t x432 = 22U;
	int32_t t107 = -220032;

    t107 = ((x429==(x430!=x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	int64_t x434 = -1LL;
	int32_t x436 = INT32_MIN;
	int32_t t108 = 62577;

    t108 = ((x433==(x434!=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	volatile int8_t x439 = INT8_MIN;
	volatile int32_t x440 = INT32_MAX;
	static int32_t t109 = 130257527;

    t109 = ((x437==(x438!=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x441 = 131275288514958679LLU;
	volatile uint32_t x442 = UINT32_MAX;
	int64_t x443 = 152740408799LL;
	uint8_t x444 = 0U;
	volatile int32_t t110 = -12769;

    t110 = ((x441==(x442!=x443))==x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MIN;
	static uint32_t x447 = 942U;
	int32_t t111 = 1730;

    t111 = ((x445==(x446!=x447))==x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MIN;
	uint8_t x450 = 60U;
	uint64_t x451 = 31783LLU;
	int8_t x452 = INT8_MIN;

    t112 = ((x449==(x450!=x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 3U;
	static volatile uint8_t x454 = 0U;
	int64_t x455 = INT64_MIN;

    t113 = ((x453==(x454!=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	int8_t x458 = -17;
	int16_t x459 = INT16_MIN;
	volatile int64_t x460 = 20LL;
	volatile int32_t t114 = 6;

    t114 = ((x457==(x458!=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x461 = -1LL;
	static uint64_t x463 = 7950069658LLU;
	int8_t x464 = 0;
	static volatile int32_t t115 = -7834;

    t115 = ((x461==(x462!=x463))==x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	static volatile int32_t x467 = -6;
	int8_t x468 = 0;
	volatile int32_t t116 = -1;

    t116 = ((x465==(x466!=x467))==x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	volatile int64_t x472 = INT64_MAX;
	int32_t t117 = -574633709;

    t117 = ((x469==(x470!=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	static uint32_t x474 = UINT32_MAX;
	volatile uint16_t x475 = 0U;
	uint8_t x476 = 3U;
	volatile int32_t t118 = -306443;

    t118 = ((x473==(x474!=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	volatile uint64_t x479 = UINT64_MAX;
	static int8_t x480 = INT8_MIN;

    t119 = ((x477==(x478!=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = -1;
	int16_t x483 = -7709;
	static uint64_t x484 = UINT64_MAX;
	volatile int32_t t120 = 98318;

    t120 = ((x481==(x482!=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	uint32_t x486 = 7579273U;
	int16_t x488 = INT16_MAX;
	int32_t t121 = -161897;

    t121 = ((x485==(x486!=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -140;
	int32_t x490 = -1;
	volatile int32_t x491 = INT32_MAX;
	uint64_t x492 = 5407535419LLU;
	volatile int32_t t122 = 6110947;

    t122 = ((x489==(x490!=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	volatile uint16_t x496 = UINT16_MAX;

    t123 = ((x493==(x494!=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = -119542320LL;
	uint8_t x498 = UINT8_MAX;
	int32_t x499 = INT32_MAX;
	volatile int16_t x500 = INT16_MIN;
	volatile int32_t t124 = 22388487;

    t124 = ((x497==(x498!=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 0;
	static uint8_t x503 = UINT8_MAX;
	int64_t x504 = INT64_MAX;
	int32_t t125 = -3887;

    t125 = ((x501==(x502!=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint32_t x506 = UINT32_MAX;
	int16_t x507 = 9100;
	uint16_t x508 = 7144U;

    t126 = ((x505==(x506!=x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = INT8_MIN;
	int8_t x510 = -1;
	int32_t x511 = 115378755;
	uint64_t x512 = 4574218LLU;
	volatile int32_t t127 = -590854;

    t127 = ((x509==(x510!=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x514 = 1;
	int16_t x515 = INT16_MAX;
	volatile uint32_t x516 = UINT32_MAX;
	volatile int32_t t128 = -78863312;

    t128 = ((x513==(x514!=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x518 = 106771112529465LL;
	volatile uint16_t x519 = 26021U;
	volatile uint64_t x520 = 3484063LLU;
	int32_t t129 = -3;

    t129 = ((x517==(x518!=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	volatile int64_t x522 = -1LL;
	int8_t x523 = 17;
	volatile int32_t t130 = 698894;

    t130 = ((x521==(x522!=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -1;
	volatile int32_t x526 = INT32_MIN;
	int16_t x527 = INT16_MIN;
	int8_t x528 = 31;
	volatile int32_t t131 = 12465;

    t131 = ((x525==(x526!=x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = INT32_MAX;
	volatile uint32_t x532 = 10U;
	volatile int32_t t132 = -20113581;

    t132 = ((x529==(x530!=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -4;
	uint16_t x534 = 3075U;
	uint8_t x535 = 2U;
	volatile int32_t t133 = -2716;

    t133 = ((x533==(x534!=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	int64_t x538 = -515073293945LL;
	static int16_t x539 = 261;
	static uint64_t x540 = 268110785LLU;
	static volatile int32_t t134 = 891898;

    t134 = ((x537==(x538!=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = INT32_MIN;
	uint16_t x542 = 988U;
	int16_t x543 = INT16_MIN;
	int16_t x544 = -1;
	volatile int32_t t135 = 7482;

    t135 = ((x541==(x542!=x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 25590486U;
	uint64_t x546 = 4311518957759834LLU;
	static int32_t x548 = INT32_MAX;
	volatile int32_t t136 = 3935;

    t136 = ((x545==(x546!=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = INT8_MIN;
	uint8_t x551 = 20U;
	int32_t t137 = 13020;

    t137 = ((x549==(x550!=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = -875;
	volatile int8_t x554 = 10;
	uint32_t x555 = 7200U;
	static uint32_t x556 = UINT32_MAX;
	volatile int32_t t138 = 58965;

    t138 = ((x553==(x554!=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x558 = INT16_MIN;
	int8_t x559 = 6;
	static uint8_t x560 = UINT8_MAX;
	static int32_t t139 = 8473148;

    t139 = ((x557==(x558!=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -175495LL;
	int8_t x562 = -6;
	int16_t x564 = INT16_MIN;
	volatile int32_t t140 = 227;

    t140 = ((x561==(x562!=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = UINT64_MAX;
	volatile int32_t t141 = -1;

    t141 = ((x565==(x566!=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	int64_t x570 = -1LL;
	int16_t x571 = 453;
	int16_t x572 = INT16_MAX;
	static int32_t t142 = -6376137;

    t142 = ((x569==(x570!=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 880781804824102LLU;
	int64_t x574 = 543657193619259LL;
	static int64_t x576 = -1LL;

    t143 = ((x573==(x574!=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 166;
	int64_t x578 = -982214024202LL;
	int16_t x579 = 28;
	uint32_t x580 = 4998U;
	volatile int32_t t144 = 38;

    t144 = ((x577==(x578!=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x582 = 102LLU;
	static uint8_t x584 = UINT8_MAX;

    t145 = ((x581==(x582!=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = INT64_MIN;
	int32_t x587 = -1;
	int64_t x588 = -1LL;
	volatile int32_t t146 = 84;

    t146 = ((x585==(x586!=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	uint16_t x591 = 1190U;
	static int32_t t147 = 2592127;

    t147 = ((x589==(x590!=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	uint64_t x594 = UINT64_MAX;
	int16_t x595 = -14742;
	static uint64_t x596 = 530005055802LLU;
	int32_t t148 = 221343096;

    t148 = ((x593==(x594!=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t t149 = 239;

    t149 = ((x597==(x598!=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int32_t x602 = -1;
	int32_t x603 = -1;
	int64_t x604 = INT64_MIN;
	int32_t t150 = -1;

    t150 = ((x601==(x602!=x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	static int32_t t151 = -154;

    t151 = ((x605==(x606!=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	int8_t x610 = INT8_MAX;
	static int64_t x611 = INT64_MIN;
	int32_t x612 = -319;
	int32_t t152 = -146965;

    t152 = ((x609==(x610!=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	volatile uint32_t x614 = 97108172U;
	int32_t x615 = INT32_MIN;
	static int64_t x616 = -404860205581903724LL;
	int32_t t153 = 216;

    t153 = ((x613==(x614!=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 25505999;
	int64_t x618 = INT64_MIN;
	uint32_t x619 = 2U;
	static int32_t x620 = INT32_MIN;
	volatile int32_t t154 = 6;

    t154 = ((x617==(x618!=x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = -1;
	int32_t t155 = 103829431;

    t155 = ((x621==(x622!=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int32_t x626 = 129686638;

    t156 = ((x625==(x626!=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = -1;
	uint64_t x630 = 3LLU;
	volatile int16_t x631 = -442;

    t157 = ((x629==(x630!=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	uint32_t x634 = UINT32_MAX;
	int64_t x635 = INT64_MIN;
	static volatile uint8_t x636 = 1U;
	static volatile int32_t t158 = -12054332;

    t158 = ((x633==(x634!=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -379724;
	uint16_t x639 = UINT16_MAX;
	static int16_t x640 = INT16_MIN;
	int32_t t159 = 14598252;

    t159 = ((x637==(x638!=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 1U;
	static int16_t x644 = INT16_MIN;
	volatile int32_t t160 = -5;

    t160 = ((x641==(x642!=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x647 = 64002U;
	uint32_t x648 = 184992224U;
	volatile int32_t t161 = -775;

    t161 = ((x645==(x646!=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	uint32_t x651 = UINT32_MAX;
	static int8_t x652 = INT8_MAX;
	volatile int32_t t162 = -203066880;

    t162 = ((x649==(x650!=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	static int32_t x654 = INT32_MAX;
	static volatile int32_t x655 = INT32_MIN;
	volatile uint64_t x656 = UINT64_MAX;
	static int32_t t163 = 391052;

    t163 = ((x653==(x654!=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x659 = -1LL;
	int64_t x660 = -1LL;
	volatile int32_t t164 = 21777;

    t164 = ((x657==(x658!=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x663 = 3725127048939624694LLU;
	int64_t x664 = -1LL;
	volatile int32_t t165 = -16;

    t165 = ((x661==(x662!=x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 239;
	int64_t x666 = -299079320824129LL;
	static int32_t x667 = INT32_MIN;
	static int64_t x668 = INT64_MAX;
	volatile int32_t t166 = -36;

    t166 = ((x665==(x666!=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x670 = UINT64_MAX;
	int8_t x671 = -22;
	static int32_t x672 = -96353290;
	int32_t t167 = 12017;

    t167 = ((x669==(x670!=x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	static int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MAX;
	int64_t x676 = -1LL;

    t168 = ((x673==(x674!=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 12380491468040LL;
	int32_t x678 = INT32_MIN;
	int16_t x679 = 3;
	int32_t x680 = -1;
	int32_t t169 = -4500;

    t169 = ((x677==(x678!=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 1883891572556238LL;
	uint16_t x682 = UINT16_MAX;
	volatile uint16_t x683 = 2556U;
	static uint16_t x684 = 12157U;
	int32_t t170 = -961;

    t170 = ((x681==(x682!=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 832;
	static int32_t x686 = -864464;
	int64_t x687 = 92LL;
	uint8_t x688 = 92U;

    t171 = ((x685==(x686!=x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = INT32_MIN;
	uint8_t x691 = 11U;
	int8_t x692 = INT8_MIN;
	int32_t t172 = -590010221;

    t172 = ((x689==(x690!=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MIN;
	static int32_t x694 = INT32_MIN;
	uint32_t x696 = 2822U;
	int32_t t173 = -45771;

    t173 = ((x693==(x694!=x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x697 = -1;
	static int64_t x698 = INT64_MIN;
	int64_t x699 = 56525192912085LL;
	static int16_t x700 = INT16_MIN;
	int32_t t174 = 6422;

    t174 = ((x697==(x698!=x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 15472777U;
	int8_t x702 = -1;
	int8_t x703 = -7;
	int32_t x704 = INT32_MAX;
	volatile int32_t t175 = 645;

    t175 = ((x701==(x702!=x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = INT64_MIN;
	int8_t x706 = -13;
	volatile int16_t x707 = -507;
	int32_t x708 = INT32_MAX;

    t176 = ((x705==(x706!=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 34;
	static volatile int64_t x710 = INT64_MIN;
	int16_t x712 = -1;
	static int32_t t177 = 3973;

    t177 = ((x709==(x710!=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -859510482LL;
	int32_t x714 = INT32_MAX;
	int32_t x716 = INT32_MAX;
	volatile int32_t t178 = 16277;

    t178 = ((x713==(x714!=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = 3316141960328946670LL;
	static volatile int8_t x719 = INT8_MIN;
	volatile uint8_t x720 = UINT8_MAX;
	int32_t t179 = -938;

    t179 = ((x717==(x718!=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = -2167;
	volatile int64_t x723 = -10242985153546LL;
	uint32_t x724 = 90229U;
	int32_t t180 = -105;

    t180 = ((x721==(x722!=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x726 = INT32_MIN;
	int16_t x727 = -149;
	uint16_t x728 = UINT16_MAX;
	static int32_t t181 = -175767;

    t181 = ((x725==(x726!=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = 151LLU;
	uint64_t x730 = 559LLU;
	uint8_t x731 = 26U;
	volatile int64_t x732 = INT64_MIN;
	int32_t t182 = -1;

    t182 = ((x729==(x730!=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 2141;
	volatile int16_t x734 = INT16_MIN;
	int8_t x735 = 11;
	uint64_t x736 = 1718126235LLU;

    t183 = ((x733==(x734!=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x738 = 33474627;
	static uint16_t x739 = 60U;
	volatile int32_t t184 = -14157;

    t184 = ((x737==(x738!=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = INT64_MIN;
	uint8_t x742 = UINT8_MAX;
	uint32_t x743 = 3135816U;
	int32_t x744 = -18408;
	int32_t t185 = -14998103;

    t185 = ((x741==(x742!=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = 132114951U;
	int16_t x746 = INT16_MIN;
	int8_t x747 = -1;

    t186 = ((x745==(x746!=x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static volatile int32_t x750 = INT32_MIN;
	volatile int8_t x751 = -4;
	volatile uint16_t x752 = 263U;
	int32_t t187 = 574972634;

    t187 = ((x749==(x750!=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MAX;
	volatile int16_t x754 = INT16_MIN;
	static int16_t x756 = -1;
	int32_t t188 = 1022633239;

    t188 = ((x753==(x754!=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 2439343806192LLU;
	uint64_t x758 = UINT64_MAX;
	int8_t x759 = INT8_MAX;
	static int64_t x760 = 1452061LL;

    t189 = ((x757==(x758!=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = INT16_MAX;
	uint16_t x763 = 22U;
	int64_t x764 = 519244LL;
	volatile int32_t t190 = 5;

    t190 = ((x761==(x762!=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 40U;
	volatile uint16_t x766 = 54U;
	volatile int32_t x767 = 25738;
	static volatile int64_t x768 = -798217035LL;
	volatile int32_t t191 = 723883;

    t191 = ((x765==(x766!=x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	int64_t x770 = -687LL;
	int8_t x772 = 1;

    t192 = ((x769==(x770!=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 2U;
	static int32_t x775 = INT32_MIN;
	static uint32_t x776 = UINT32_MAX;
	int32_t t193 = 589320;

    t193 = ((x773==(x774!=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = -1;
	int32_t x778 = INT32_MIN;
	int8_t x779 = -13;
	int16_t x780 = -1;

    t194 = ((x777==(x778!=x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	int64_t x782 = 48660299744932LL;
	uint32_t x783 = 29373U;
	int64_t x784 = INT64_MIN;
	volatile int32_t t195 = -218023232;

    t195 = ((x781==(x782!=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = INT16_MIN;
	static uint32_t x786 = 0U;

    t196 = ((x785==(x786!=x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = -1;
	static uint64_t x791 = 640025187339LLU;
	volatile int8_t x792 = 6;
	volatile int32_t t197 = -5698181;

    t197 = ((x789==(x790!=x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = UINT64_MAX;
	uint64_t x794 = UINT64_MAX;
	int64_t x795 = INT64_MIN;
	volatile int8_t x796 = 7;
	static volatile int32_t t198 = -2186;

    t198 = ((x793==(x794!=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = 40U;
	volatile int64_t x798 = INT64_MIN;
	volatile int32_t t199 = 2121;

    t199 = ((x797==(x798!=x799))==x800);

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

