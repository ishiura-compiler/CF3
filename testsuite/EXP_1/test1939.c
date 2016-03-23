
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

int32_t x8 = INT32_MAX;
volatile uint8_t x9 = 0U;
int32_t x10 = INT32_MIN;
int16_t x13 = INT16_MAX;
static uint32_t x15 = 1U;
volatile int32_t t3 = 15;
uint64_t x18 = UINT64_MAX;
int64_t x22 = -1LL;
static int64_t x25 = -2600873318510LL;
int32_t t6 = -25532886;
volatile int32_t t7 = 155422991;
static int64_t x36 = INT64_MIN;
static int32_t t9 = 7064181;
int64_t x44 = -14666LL;
int32_t t10 = -40;
int32_t x56 = INT32_MAX;
int16_t x58 = INT16_MIN;
volatile int8_t x66 = INT8_MIN;
volatile int32_t t16 = -1889;
uint64_t x70 = UINT64_MAX;
int8_t x72 = -6;
int32_t t17 = 11822;
int32_t x86 = INT32_MIN;
static int64_t x89 = 327285950LL;
static int16_t x94 = -2;
uint32_t x100 = 191U;
volatile int16_t x104 = -1;
int32_t t25 = 10;
int8_t x107 = 1;
volatile int32_t x108 = INT32_MAX;
uint32_t x112 = UINT32_MAX;
volatile uint16_t x117 = UINT16_MAX;
static volatile int16_t x120 = -1;
volatile int32_t t29 = 105282;
volatile int32_t x126 = -801312619;
static volatile int32_t x132 = INT32_MIN;
int32_t x140 = -1;
static volatile int64_t x141 = -1LL;
volatile int32_t t35 = 1;
int32_t x149 = INT32_MIN;
volatile int32_t t37 = -18;
int32_t x164 = -43;
uint64_t x165 = 71LLU;
uint16_t x166 = 5U;
int64_t x167 = -29802568808LL;
uint64_t x169 = 450472402LLU;
static int8_t x170 = INT8_MAX;
int32_t x173 = INT32_MIN;
volatile int32_t t43 = -114;
uint32_t x178 = 2U;
static int8_t x180 = INT8_MIN;
volatile int32_t t44 = -3522;
int32_t x181 = 1;
int64_t x182 = -1LL;
volatile int32_t t45 = 25;
int32_t t46 = 17;
static uint8_t x192 = UINT8_MAX;
int8_t x199 = 1;
uint16_t x202 = UINT16_MAX;
static int64_t x205 = INT64_MIN;
volatile int16_t x209 = -593;
static uint32_t x210 = 18406U;
volatile int64_t x214 = -1LL;
static uint64_t x215 = UINT64_MAX;
uint8_t x224 = 14U;
uint64_t x225 = 960214659154895LLU;
uint8_t x227 = 33U;
int8_t x228 = 3;
int32_t t56 = -926136;
volatile uint8_t x237 = 34U;
uint16_t x245 = UINT16_MAX;
int16_t x246 = INT16_MIN;
int16_t x248 = 0;
int32_t t62 = -21938;
int32_t x264 = INT32_MIN;
uint8_t x269 = 45U;
volatile int64_t x271 = INT64_MAX;
volatile int8_t x273 = INT8_MIN;
int16_t x275 = 0;
volatile int32_t t70 = -709014;
static int16_t x292 = -1;
uint16_t x301 = 27163U;
int32_t x305 = INT32_MIN;
static int32_t t76 = -1628236;
static int64_t x316 = 2008912LL;
int8_t x317 = INT8_MAX;
uint16_t x318 = 5U;
volatile uint16_t x321 = UINT16_MAX;
int16_t x325 = INT16_MIN;
int8_t x330 = -1;
uint8_t x333 = UINT8_MAX;
int64_t x335 = -1LL;
static uint64_t x340 = 1594LLU;
int16_t x350 = 0;
uint16_t x351 = UINT16_MAX;
volatile int8_t x354 = INT8_MAX;
volatile int32_t t88 = 51932;
int16_t x364 = -233;
volatile int16_t x368 = 8;
int32_t x370 = INT32_MIN;
int16_t x374 = -131;
int16_t x376 = INT16_MIN;
int32_t x377 = INT32_MAX;
int16_t x380 = -1;
volatile uint64_t x381 = 15LLU;
int8_t x384 = INT8_MIN;
int16_t x388 = INT16_MAX;
int16_t x394 = -61;
int32_t x400 = -11568;
uint32_t x423 = 17285314U;
static volatile int32_t t105 = -1;
int64_t x434 = INT64_MAX;
int64_t x436 = INT64_MAX;
uint8_t x438 = UINT8_MAX;
static int16_t x439 = -1;
int64_t x447 = INT64_MAX;
static int8_t x448 = INT8_MIN;
int16_t x449 = -1;
static uint16_t x450 = UINT16_MAX;
int32_t t114 = -52868863;
int64_t x463 = INT64_MAX;
volatile int16_t x475 = INT16_MIN;
static int32_t x479 = -23;
static int16_t x482 = INT16_MAX;
uint8_t x496 = 8U;
volatile int32_t t126 = 30048;
int32_t t127 = 1;
uint64_t x515 = 446661686LLU;
static uint32_t x518 = UINT32_MAX;
volatile int8_t x520 = INT8_MIN;
int32_t x521 = 240019;
uint64_t x538 = 1829865781745341LLU;
static int32_t x540 = INT32_MIN;
int64_t x546 = INT64_MAX;
int8_t x549 = -1;
volatile int32_t t137 = 0;
uint32_t x553 = 40U;
static uint16_t x560 = UINT16_MAX;
int32_t x562 = INT32_MAX;
uint16_t x565 = 87U;
volatile int32_t x568 = INT32_MAX;
int32_t x570 = INT32_MAX;
int32_t t142 = 1;
volatile int32_t t143 = 735485;
int32_t x579 = 492467675;
volatile uint32_t x583 = 9U;
uint64_t x592 = 511268LLU;
volatile int64_t x596 = INT64_MAX;
volatile int32_t t148 = -40497;
int8_t x597 = INT8_MAX;
int8_t x603 = -1;
int8_t x609 = 32;
uint16_t x613 = UINT16_MAX;
uint16_t x614 = 117U;
int64_t x623 = INT64_MIN;
static int32_t x625 = -1;
static uint32_t x626 = UINT32_MAX;
int64_t x629 = -14647097LL;
int64_t x630 = -1LL;
volatile int8_t x639 = INT8_MIN;
volatile uint16_t x650 = 7U;
int16_t x655 = INT16_MIN;
static int32_t t163 = 868;
uint64_t x658 = UINT64_MAX;
int8_t x660 = -26;
uint64_t x670 = UINT64_MAX;
static int64_t x686 = INT64_MIN;
volatile int32_t t171 = -35926108;
int32_t x689 = -144283290;
volatile uint8_t x690 = 6U;
int32_t x694 = INT32_MIN;
static int32_t t174 = 10;
int8_t x701 = INT8_MIN;
volatile int16_t x702 = -76;
static int16_t x705 = INT16_MIN;
uint64_t x707 = 11590LLU;
int32_t t178 = 611;
static volatile int32_t t179 = 272;
volatile int16_t x724 = INT16_MAX;
static volatile int32_t t180 = 1363;
int8_t x733 = -3;
static uint8_t x743 = UINT8_MAX;
int8_t x744 = 1;
uint64_t x756 = UINT64_MAX;
volatile int32_t t189 = -1;
static int32_t x762 = INT32_MAX;
int8_t x764 = 56;
volatile int32_t t192 = -62548;
static volatile int8_t x773 = -3;
int32_t x782 = INT32_MIN;
int32_t t195 = 368;
int16_t x786 = INT16_MAX;
int16_t x789 = INT16_MIN;
int16_t x793 = INT16_MIN;


void f0(void) {
    	static volatile int8_t x1 = INT8_MIN;
	static int8_t x2 = -1;
	uint32_t x3 = 37348U;
	int32_t x4 = 459745459;
	int32_t t0 = 1031156055;

    t0 = (((x1<=x2)|x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 1U;
	int16_t x6 = -1;
	uint64_t x7 = 489011440LLU;
	static int32_t t1 = -167843;

    t1 = (((x5<=x6)|x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = 37U;
	int64_t x12 = 2582408643944601984LL;
	volatile int32_t t2 = 83855;

    t2 = (((x9<=x10)|x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	static uint8_t x16 = 1U;

    t3 = (((x13<=x14)|x15)!=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	int8_t x19 = INT8_MIN;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 55364;

    t4 = (((x17<=x18)|x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int64_t x23 = INT64_MAX;
	volatile int16_t x24 = -1273;
	int32_t t5 = 31;

    t5 = (((x21<=x22)|x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -1LL;
	uint64_t x27 = 1619921273083798LLU;
	static int64_t x28 = INT64_MAX;

    t6 = (((x25<=x26)|x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	static int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MAX;
	static int32_t x32 = INT32_MAX;

    t7 = (((x29<=x30)|x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -2;
	volatile int8_t x34 = INT8_MAX;
	static int16_t x35 = -1;
	static volatile int32_t t8 = 893670877;

    t8 = (((x33<=x34)|x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -229;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 1027811740U;
	int32_t x40 = 1;

    t9 = (((x37<=x38)|x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	uint16_t x43 = UINT16_MAX;

    t10 = (((x41<=x42)|x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -24882;
	int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MAX;
	int32_t x48 = -566089;
	int32_t t11 = 8637;

    t11 = (((x45<=x46)|x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 0;
	volatile int32_t x50 = INT32_MAX;
	static int32_t x51 = INT32_MIN;
	static int8_t x52 = -1;
	volatile int32_t t12 = 13;

    t12 = (((x49<=x50)|x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 55U;
	volatile uint16_t x54 = UINT16_MAX;
	static volatile uint8_t x55 = UINT8_MAX;
	static volatile int32_t t13 = -1147329;

    t13 = (((x53<=x54)|x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	int64_t x59 = 736LL;
	uint32_t x60 = 818U;
	int32_t t14 = -32645;

    t14 = (((x57<=x58)|x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x61 = -1;
	int32_t x62 = 0;
	static int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MIN;
	static int32_t t15 = 0;

    t15 = (((x61<=x62)|x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = 114U;

    t16 = (((x65<=x66)|x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int8_t x71 = INT8_MAX;

    t17 = (((x69<=x70)|x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 7U;
	int8_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = -31844;

    t18 = (((x73<=x74)|x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	int16_t x79 = -8;
	static uint8_t x80 = 70U;
	static int32_t t19 = 2447351;

    t19 = (((x77<=x78)|x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 1;
	int16_t x82 = -1;
	uint16_t x83 = 1248U;
	static int8_t x84 = INT8_MAX;
	int32_t t20 = 471;

    t20 = (((x81<=x82)|x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 20;
	int8_t x87 = -1;
	int64_t x88 = 88185LL;
	int32_t t21 = 47552281;

    t21 = (((x85<=x86)|x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = INT8_MAX;
	uint64_t x91 = 1LLU;
	static volatile uint32_t x92 = 937739163U;
	volatile int32_t t22 = 56;

    t22 = (((x89<=x90)|x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	static volatile int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 2482599;

    t23 = (((x93<=x94)|x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x97 = INT32_MIN;
	uint16_t x98 = 862U;
	int16_t x99 = INT16_MAX;
	int32_t t24 = -951837;

    t24 = (((x97<=x98)|x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	uint8_t x102 = 26U;
	static uint16_t x103 = UINT16_MAX;

    t25 = (((x101<=x102)|x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = 3849240500780480LL;
	int8_t x106 = INT8_MIN;
	volatile int32_t t26 = -90330428;

    t26 = (((x105<=x106)|x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MAX;
	int64_t x111 = -1LL;
	volatile int32_t t27 = -33323180;

    t27 = (((x109<=x110)|x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MAX;
	uint16_t x114 = 2U;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = -1LL;
	int32_t t28 = -5;

    t28 = (((x113<=x114)|x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MIN;
	static uint64_t x119 = UINT64_MAX;

    t29 = (((x117<=x118)|x119)!=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1;
	int32_t x122 = INT32_MAX;
	uint8_t x123 = UINT8_MAX;
	static int8_t x124 = 21;
	int32_t t30 = -907;

    t30 = (((x121<=x122)|x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	uint16_t x127 = UINT16_MAX;
	static int16_t x128 = INT16_MAX;
	int32_t t31 = -2193;

    t31 = (((x125<=x126)|x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 40455661106466LL;
	static uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 1466301402155LLU;
	volatile int32_t t32 = -358629075;

    t32 = (((x129<=x130)|x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = 40LLU;
	uint8_t x134 = 31U;
	volatile int64_t x135 = INT64_MIN;
	uint8_t x136 = 0U;
	int32_t t33 = -17589;

    t33 = (((x133<=x134)|x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 39820960U;
	int16_t x138 = -1;
	static volatile uint32_t x139 = 2U;
	int32_t t34 = 11347074;

    t34 = (((x137<=x138)|x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = 0;
	int32_t x143 = INT32_MAX;
	volatile uint16_t x144 = UINT16_MAX;

    t35 = (((x141<=x142)|x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 27;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = 1;
	volatile int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = 32794;

    t36 = (((x145<=x146)|x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = 32666820248380LL;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 6U;

    t37 = (((x149<=x150)|x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MAX;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = 29;

    t38 = (((x153<=x154)|x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	static int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;
	static int8_t x160 = -1;
	int32_t t39 = 20;

    t39 = (((x157<=x158)|x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	int32_t x162 = 113;
	volatile int8_t x163 = INT8_MIN;
	volatile int32_t t40 = -533315540;

    t40 = (((x161<=x162)|x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x168 = -6025670697341201LL;
	static int32_t t41 = -472;

    t41 = (((x165<=x166)|x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x171 = 213;
	int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -520076;

    t42 = (((x169<=x170)|x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = 105855LLU;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 100U;

    t43 = (((x173<=x174)|x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 25U;
	volatile int64_t x179 = -3909222941302022941LL;

    t44 = (((x177<=x178)|x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x183 = UINT64_MAX;
	int64_t x184 = 29188968692016357LL;

    t45 = (((x181<=x182)|x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 311U;
	int16_t x186 = -12;
	volatile uint8_t x187 = UINT8_MAX;
	volatile uint32_t x188 = 20494770U;

    t46 = (((x185<=x186)|x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 12U;
	static volatile int32_t t47 = -50;

    t47 = (((x189<=x190)|x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = INT8_MIN;
	static uint64_t x194 = 354339334LLU;
	volatile int64_t x195 = INT64_MIN;
	static uint64_t x196 = 535631794773LLU;
	static int32_t t48 = -1789059;

    t48 = (((x193<=x194)|x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = INT8_MIN;
	uint16_t x198 = 7295U;
	static int32_t x200 = -1;
	int32_t t49 = 1;

    t49 = (((x197<=x198)|x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	static int16_t x204 = 0;
	volatile int32_t t50 = -9496;

    t50 = (((x201<=x202)|x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	static int8_t x208 = INT8_MAX;
	int32_t t51 = -292196146;

    t51 = (((x205<=x206)|x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x211 = 2LLU;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -129007;

    t52 = (((x209<=x210)|x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int64_t x216 = 49094LL;
	volatile int32_t t53 = 314;

    t53 = (((x213<=x214)|x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	static uint8_t x218 = 125U;
	int32_t x219 = INT32_MAX;
	int16_t x220 = 2594;
	volatile int32_t t54 = -328;

    t54 = (((x217<=x218)|x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	int64_t x222 = -1LL;
	int32_t x223 = -1;
	static volatile int32_t t55 = 19005;

    t55 = (((x221<=x222)|x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = INT16_MAX;

    t56 = (((x225<=x226)|x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -452701527998481355LL;
	static uint16_t x230 = 24U;
	int8_t x231 = -5;
	volatile uint32_t x232 = 1U;
	volatile int32_t t57 = -14952804;

    t57 = (((x229<=x230)|x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	static uint64_t x234 = 160572776714LLU;
	static int32_t x235 = 31257682;
	int64_t x236 = INT64_MAX;
	int32_t t58 = 331114;

    t58 = (((x233<=x234)|x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = 45U;
	int16_t x239 = -7678;
	int8_t x240 = INT8_MIN;
	int32_t t59 = -10;

    t59 = (((x237<=x238)|x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = 7341385951517390301LLU;
	volatile int8_t x242 = INT8_MIN;
	volatile int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MAX;
	int32_t t60 = 30735225;

    t60 = (((x241<=x242)|x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x247 = INT16_MIN;
	volatile int32_t t61 = 2495;

    t61 = (((x245<=x246)|x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = 7269U;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	int16_t x252 = -1229;

    t62 = (((x249<=x250)|x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = -204143;

    t63 = (((x253<=x254)|x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MAX;
	uint64_t x260 = 22LLU;
	volatile int32_t t64 = 0;

    t64 = (((x257<=x258)|x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -26;
	static uint16_t x262 = UINT16_MAX;
	volatile int32_t x263 = INT32_MAX;
	static volatile int32_t t65 = -128753201;

    t65 = (((x261<=x262)|x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	uint16_t x266 = 245U;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = -32081;

    t66 = (((x265<=x266)|x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x270 = 386775940U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -152;

    t67 = (((x269<=x270)|x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = 27937955U;
	uint64_t x276 = UINT64_MAX;
	static int32_t t68 = -1021;

    t68 = (((x273<=x274)|x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 22783218LLU;
	volatile uint8_t x278 = 0U;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -61364864033500LL;
	static volatile int32_t t69 = 1750299;

    t69 = (((x277<=x278)|x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -227;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = -141;
	int64_t x284 = INT64_MAX;

    t70 = (((x281<=x282)|x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 1978584361065431LLU;
	static uint64_t x286 = 4059921LLU;
	int64_t x287 = INT64_MAX;
	static int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -61306;

    t71 = (((x285<=x286)|x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	volatile int32_t t72 = -2;

    t72 = (((x289<=x290)|x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MIN;
	int16_t x294 = -1;
	static uint64_t x295 = UINT64_MAX;
	int32_t x296 = 162172;
	static volatile int32_t t73 = 4889;

    t73 = (((x293<=x294)|x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MIN;
	volatile uint64_t x298 = 3727762340131430346LLU;
	int16_t x299 = 11715;
	int32_t x300 = -1;
	volatile int32_t t74 = -155644;

    t74 = (((x297<=x298)|x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x302 = 651932348890826611LL;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = 0U;
	static int32_t t75 = -3206333;

    t75 = (((x301<=x302)|x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 7U;

    t76 = (((x305<=x306)|x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MIN;
	static int8_t x310 = INT8_MIN;
	volatile uint16_t x311 = 0U;
	volatile int64_t x312 = -1LL;
	static volatile int32_t t77 = -1;

    t77 = (((x309<=x310)|x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 8855U;
	volatile int8_t x314 = -34;
	uint64_t x315 = 7126583LLU;
	int32_t t78 = 76450;

    t78 = (((x313<=x314)|x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x319 = INT16_MAX;
	uint16_t x320 = 3911U;
	volatile int32_t t79 = 5372020;

    t79 = (((x317<=x318)|x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = 1947U;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = -1;
	static volatile int32_t t80 = 202074;

    t80 = (((x321<=x322)|x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x326 = INT32_MAX;
	static int8_t x327 = 33;
	int16_t x328 = 4300;
	static volatile int32_t t81 = -31805353;

    t81 = (((x325<=x326)|x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = 14473U;
	uint32_t x331 = 2U;
	static int8_t x332 = -1;
	static volatile int32_t t82 = 41;

    t82 = (((x329<=x330)|x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x334 = -1LL;
	uint8_t x336 = UINT8_MAX;
	int32_t t83 = 18576893;

    t83 = (((x333<=x334)|x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 625061U;
	volatile int32_t x339 = INT32_MAX;
	static volatile int32_t t84 = 47;

    t84 = (((x337<=x338)|x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	uint16_t x342 = 35U;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = -3;

    t85 = (((x341<=x342)|x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	int64_t x346 = INT64_MAX;
	int32_t x347 = INT32_MAX;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 4098381;

    t86 = (((x345<=x346)|x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	uint32_t x352 = 479585U;
	volatile int32_t t87 = -382171;

    t87 = (((x349<=x350)|x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 9U;
	static int64_t x355 = -2502432523149LL;
	static int64_t x356 = INT64_MIN;

    t88 = (((x353<=x354)|x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 3082U;
	int32_t t89 = -184;

    t89 = (((x357<=x358)|x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 0;
	uint32_t x362 = 1154590795U;
	static int64_t x363 = INT64_MIN;
	volatile int32_t t90 = 5153;

    t90 = (((x361<=x362)|x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -195;
	uint32_t x366 = 3U;
	volatile int64_t x367 = INT64_MAX;
	int32_t t91 = -75;

    t91 = (((x365<=x366)|x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 1820100951U;
	uint8_t x371 = 6U;
	static volatile int32_t x372 = 0;
	int32_t t92 = 2;

    t92 = (((x369<=x370)|x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = -1LL;
	volatile int8_t x375 = -1;
	volatile int32_t t93 = -66838503;

    t93 = (((x373<=x374)|x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x378 = 15U;
	uint16_t x379 = 7149U;
	volatile int32_t t94 = 35581;

    t94 = (((x377<=x378)|x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = INT64_MAX;
	int16_t x383 = 1;
	volatile int32_t t95 = 94256;

    t95 = (((x381<=x382)|x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 1;
	volatile uint32_t x386 = UINT32_MAX;
	static uint16_t x387 = 23U;
	volatile int32_t t96 = 12;

    t96 = (((x385<=x386)|x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 11U;
	uint64_t x390 = 2LLU;
	static volatile int32_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -716082094;

    t97 = (((x389<=x390)|x391)!=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 27781247486221LLU;
	int32_t x395 = -3;
	uint64_t x396 = 178059069LLU;
	volatile int32_t t98 = 4038;

    t98 = (((x393<=x394)|x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	uint8_t x398 = 77U;
	volatile int64_t x399 = INT64_MAX;
	volatile int32_t t99 = 69074;

    t99 = (((x397<=x398)|x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint16_t x402 = 2U;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	static int32_t t100 = -2064703;

    t100 = (((x401<=x402)|x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 15480196;
	volatile int64_t x406 = INT64_MIN;
	uint64_t x407 = 207296871LLU;
	static int64_t x408 = -401LL;
	volatile int32_t t101 = 25784465;

    t101 = (((x405<=x406)|x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	static int16_t x410 = 55;
	static volatile int64_t x411 = -1LL;
	volatile uint8_t x412 = 50U;
	volatile int32_t t102 = -5902;

    t102 = (((x409<=x410)|x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 5U;
	volatile int32_t x415 = INT32_MAX;
	int8_t x416 = -1;
	static int32_t t103 = 650;

    t103 = (((x413<=x414)|x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int16_t x418 = -6928;
	int8_t x419 = -1;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t104 = -5939429;

    t104 = (((x417<=x418)|x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	volatile uint8_t x422 = UINT8_MAX;
	static volatile int32_t x424 = -202016504;

    t105 = (((x421<=x422)|x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x425 = INT16_MIN;
	int16_t x426 = -1;
	uint32_t x427 = 2075727664U;
	volatile int64_t x428 = INT64_MAX;
	int32_t t106 = -1149255;

    t106 = (((x425<=x426)|x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = 1223U;
	static int16_t x430 = -1;
	static volatile int32_t x431 = 29427633;
	int32_t x432 = -1;
	volatile int32_t t107 = 300419;

    t107 = (((x429<=x430)|x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = 7U;
	int32_t x435 = INT32_MAX;
	volatile int32_t t108 = -15584280;

    t108 = (((x433<=x434)|x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	uint16_t x440 = 22U;
	volatile int32_t t109 = -37574;

    t109 = (((x437<=x438)|x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 14564831731862580LL;
	uint32_t x442 = UINT32_MAX;
	uint8_t x443 = 1U;
	int32_t x444 = -1;
	int32_t t110 = 9582583;

    t110 = (((x441<=x442)|x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	volatile uint64_t x446 = UINT64_MAX;
	volatile int32_t t111 = 65023;

    t111 = (((x445<=x446)|x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x451 = INT64_MAX;
	uint16_t x452 = 1U;
	int32_t t112 = 733207;

    t112 = (((x449<=x450)|x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x453 = UINT16_MAX;
	uint64_t x454 = 338298528895451177LLU;
	static int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MAX;
	volatile int32_t t113 = 0;

    t113 = (((x453<=x454)|x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	uint8_t x458 = UINT8_MAX;
	int16_t x459 = -86;
	volatile int32_t x460 = -1;

    t114 = (((x457<=x458)|x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x461 = INT8_MIN;
	uint64_t x462 = 24901513LLU;
	volatile int64_t x464 = -174579394327LL;
	int32_t t115 = -232768;

    t115 = (((x461<=x462)|x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 228U;
	volatile int8_t x466 = INT8_MIN;
	uint16_t x467 = UINT16_MAX;
	int8_t x468 = INT8_MIN;
	volatile int32_t t116 = -470542916;

    t116 = (((x465<=x466)|x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = 14338;
	int16_t x470 = -1869;
	static int64_t x471 = -1LL;
	int64_t x472 = -40691508141LL;
	volatile int32_t t117 = -371657;

    t117 = (((x469<=x470)|x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = -1;
	uint32_t x474 = 1001U;
	int8_t x476 = 7;
	volatile int32_t t118 = 3959;

    t118 = (((x473<=x474)|x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	int8_t x478 = -3;
	uint16_t x480 = 232U;
	int32_t t119 = 6775;

    t119 = (((x477<=x478)|x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = INT32_MIN;
	int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MAX;
	int32_t t120 = 3;

    t120 = (((x481<=x482)|x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = -1;
	uint32_t x486 = UINT32_MAX;
	int64_t x487 = -111080LL;
	uint64_t x488 = 101243957LLU;
	int32_t t121 = 6526404;

    t121 = (((x485<=x486)|x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x489 = 0U;
	int8_t x490 = INT8_MAX;
	int8_t x491 = INT8_MAX;
	uint64_t x492 = UINT64_MAX;
	int32_t t122 = -83732722;

    t122 = (((x489<=x490)|x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = UINT32_MAX;
	volatile int32_t x494 = INT32_MIN;
	int64_t x495 = -220335433321491LL;
	int32_t t123 = 121232140;

    t123 = (((x493<=x494)|x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	volatile uint32_t x498 = UINT32_MAX;
	static uint32_t x499 = UINT32_MAX;
	uint16_t x500 = 52U;
	volatile int32_t t124 = 231259310;

    t124 = (((x497<=x498)|x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 921U;
	uint64_t x502 = 28LLU;
	uint16_t x503 = 679U;
	static int8_t x504 = INT8_MIN;
	int32_t t125 = 7786;

    t125 = (((x501<=x502)|x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = 1;
	uint64_t x506 = UINT64_MAX;
	int32_t x507 = -26525643;
	int64_t x508 = INT64_MIN;

    t126 = (((x505<=x506)|x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = INT8_MAX;
	uint16_t x510 = 3071U;
	int16_t x511 = INT16_MIN;
	int16_t x512 = 3;

    t127 = (((x509<=x510)|x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x513 = 4U;
	int8_t x514 = 1;
	static uint64_t x516 = 2440131840332856LLU;
	int32_t t128 = -592605298;

    t128 = (((x513<=x514)|x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = 49;
	int32_t x519 = INT32_MAX;
	volatile int32_t t129 = 104;

    t129 = (((x517<=x518)|x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -1;
	int16_t x523 = INT16_MIN;
	int8_t x524 = -1;
	int32_t t130 = -1;

    t130 = (((x521<=x522)|x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = 28U;
	volatile uint16_t x526 = 87U;
	uint64_t x527 = 722836366989LLU;
	int8_t x528 = -1;
	volatile int32_t t131 = 7;

    t131 = (((x525<=x526)|x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = -1LL;
	static volatile int8_t x530 = -1;
	int8_t x531 = -1;
	static volatile int8_t x532 = -1;
	int32_t t132 = 606189;

    t132 = (((x529<=x530)|x531)!=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	static uint8_t x534 = UINT8_MAX;
	int8_t x535 = INT8_MAX;
	int16_t x536 = INT16_MAX;
	static int32_t t133 = 30341730;

    t133 = (((x533<=x534)|x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	static volatile int64_t x539 = INT64_MIN;
	static int32_t t134 = -25459535;

    t134 = (((x537<=x538)|x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	static int64_t x542 = INT64_MAX;
	int8_t x543 = INT8_MIN;
	int64_t x544 = -1LL;
	int32_t t135 = 1019728074;

    t135 = (((x541<=x542)|x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MAX;
	int8_t x547 = INT8_MIN;
	uint64_t x548 = 60878653616858LLU;
	int32_t t136 = 3;

    t136 = (((x545<=x546)|x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x550 = 9006872U;
	static int64_t x551 = INT64_MIN;
	int32_t x552 = -1;

    t137 = (((x549<=x550)|x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = 0;
	volatile int64_t x555 = -236295LL;
	volatile uint16_t x556 = 31U;
	volatile int32_t t138 = -29083712;

    t138 = (((x553<=x554)|x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = -1898LL;
	static int32_t x558 = INT32_MAX;
	int16_t x559 = -1;
	volatile int32_t t139 = 1;

    t139 = (((x557<=x558)|x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = 5;
	uint8_t x563 = 2U;
	static int64_t x564 = INT64_MIN;
	int32_t t140 = -258189;

    t140 = (((x561<=x562)|x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -1;
	uint8_t x567 = 3U;
	volatile int32_t t141 = -348;

    t141 = (((x565<=x566)|x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 6U;
	int16_t x571 = 3463;
	static uint64_t x572 = UINT64_MAX;

    t142 = (((x569<=x570)|x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = -1;
	int32_t x574 = -115391183;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MIN;

    t143 = (((x573<=x574)|x575)!=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	uint64_t x578 = 53630654363303564LLU;
	volatile uint8_t x580 = 2U;
	int32_t t144 = 0;

    t144 = (((x577<=x578)|x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = 40031660339LL;
	int64_t x584 = 17512186316LL;
	volatile int32_t t145 = -62756719;

    t145 = (((x581<=x582)|x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	static volatile uint32_t x586 = 103513804U;
	uint8_t x587 = UINT8_MAX;
	uint16_t x588 = UINT16_MAX;
	static int32_t t146 = 256202;

    t146 = (((x585<=x586)|x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = -1;
	static int16_t x591 = INT16_MAX;
	volatile int32_t t147 = 3;

    t147 = (((x589<=x590)|x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	int32_t x594 = -7260027;
	int64_t x595 = INT64_MIN;

    t148 = (((x593<=x594)|x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MAX;
	volatile int8_t x599 = 13;
	static int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -10846;

    t149 = (((x597<=x598)|x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	static uint32_t x602 = 449U;
	volatile uint8_t x604 = 8U;
	int32_t t150 = 52;

    t150 = (((x601<=x602)|x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	static int64_t x606 = -393423649510625385LL;
	int16_t x607 = -1;
	uint16_t x608 = 126U;
	static volatile int32_t t151 = -271;

    t151 = (((x605<=x606)|x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x610 = 22318909944195306LLU;
	int8_t x611 = 0;
	volatile uint32_t x612 = UINT32_MAX;
	static volatile int32_t t152 = 1;

    t152 = (((x609<=x610)|x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x615 = INT16_MIN;
	static uint32_t x616 = 2812666U;
	int32_t t153 = -1;

    t153 = (((x613<=x614)|x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int64_t x618 = -1LL;
	static int64_t x619 = -111471290391983550LL;
	int64_t x620 = 242795027LL;
	volatile int32_t t154 = -205919427;

    t154 = (((x617<=x618)|x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = -1;
	static uint32_t x622 = 10466U;
	static int8_t x624 = 45;
	int32_t t155 = -15;

    t155 = (((x621<=x622)|x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x627 = INT8_MAX;
	volatile int16_t x628 = 1636;
	static int32_t t156 = -1;

    t156 = (((x625<=x626)|x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x631 = INT64_MAX;
	uint16_t x632 = 122U;
	volatile int32_t t157 = 0;

    t157 = (((x629<=x630)|x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = UINT16_MAX;
	int8_t x634 = -1;
	static int16_t x635 = 95;
	int8_t x636 = INT8_MIN;
	int32_t t158 = 30369;

    t158 = (((x633<=x634)|x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	volatile uint16_t x638 = 0U;
	static volatile int32_t x640 = -1;
	volatile int32_t t159 = -693654196;

    t159 = (((x637<=x638)|x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = -1;
	volatile int8_t x642 = INT8_MIN;
	uint64_t x643 = 11450608096666LLU;
	int64_t x644 = INT64_MIN;
	int32_t t160 = -9656;

    t160 = (((x641<=x642)|x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	int16_t x646 = INT16_MAX;
	uint8_t x647 = 124U;
	uint32_t x648 = 47325317U;
	int32_t t161 = 1;

    t161 = (((x645<=x646)|x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = UINT16_MAX;
	uint32_t x651 = 3U;
	int64_t x652 = INT64_MIN;
	volatile int32_t t162 = 76;

    t162 = (((x649<=x650)|x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int64_t x654 = INT64_MIN;
	uint32_t x656 = UINT32_MAX;

    t163 = (((x653<=x654)|x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 224U;
	volatile int32_t x659 = -19;
	int32_t t164 = 2192;

    t164 = (((x657<=x658)|x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 14U;
	int8_t x662 = -1;
	volatile int64_t x663 = INT64_MIN;
	int64_t x664 = INT64_MAX;
	volatile int32_t t165 = -5998;

    t165 = (((x661<=x662)|x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 6U;
	volatile int32_t x666 = INT32_MIN;
	int32_t x667 = -8;
	int64_t x668 = INT64_MIN;
	int32_t t166 = -50688178;

    t166 = (((x665<=x666)|x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x669 = 1751592308U;
	static int64_t x671 = 13807LL;
	int8_t x672 = -1;
	volatile int32_t t167 = 2168181;

    t167 = (((x669<=x670)|x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -344;
	int64_t x674 = INT64_MAX;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = -1;
	int32_t t168 = 523877;

    t168 = (((x673<=x674)|x675)!=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MIN;
	volatile uint8_t x678 = 25U;
	static uint64_t x679 = UINT64_MAX;
	int64_t x680 = 1LL;
	int32_t t169 = 4;

    t169 = (((x677<=x678)|x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 30567306LLU;
	int16_t x682 = INT16_MIN;
	static uint8_t x683 = 4U;
	int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 18158366;

    t170 = (((x681<=x682)|x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MAX;
	int16_t x687 = -1437;
	volatile uint8_t x688 = 50U;

    t171 = (((x685<=x686)|x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x691 = INT16_MAX;
	volatile int64_t x692 = INT64_MAX;
	static volatile int32_t t172 = -296;

    t172 = (((x689<=x690)|x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MIN;
	int16_t x695 = 8713;
	int16_t x696 = -7;
	volatile int32_t t173 = 21577;

    t173 = (((x693<=x694)|x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = -31;
	static int32_t x698 = INT32_MAX;
	int16_t x699 = INT16_MIN;
	int8_t x700 = -1;

    t174 = (((x697<=x698)|x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x703 = 72021954;
	int16_t x704 = INT16_MAX;
	static int32_t t175 = 1056648994;

    t175 = (((x701<=x702)|x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x706 = -8;
	int8_t x708 = INT8_MIN;
	int32_t t176 = -79399;

    t176 = (((x705<=x706)|x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 4U;
	static uint32_t x710 = UINT32_MAX;
	int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MIN;
	int32_t t177 = 3009;

    t177 = (((x709<=x710)|x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -1LL;
	volatile uint8_t x714 = 7U;
	uint16_t x715 = 13U;
	int8_t x716 = -1;

    t178 = (((x713<=x714)|x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	volatile int16_t x718 = INT16_MAX;
	volatile int64_t x719 = INT64_MAX;
	uint8_t x720 = 1U;

    t179 = (((x717<=x718)|x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 12U;
	static int8_t x722 = 0;
	static volatile uint32_t x723 = UINT32_MAX;

    t180 = (((x721<=x722)|x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int32_t x726 = INT32_MIN;
	volatile uint32_t x727 = 61060U;
	static int64_t x728 = -1LL;
	volatile int32_t t181 = -3;

    t181 = (((x725<=x726)|x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -5;
	int16_t x730 = -1;
	int8_t x731 = 23;
	static int32_t x732 = INT32_MAX;
	int32_t t182 = 17849385;

    t182 = (((x729<=x730)|x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x734 = -1;
	int8_t x735 = -1;
	static int64_t x736 = INT64_MIN;
	int32_t t183 = -13724;

    t183 = (((x733<=x734)|x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = -1;
	int64_t x739 = INT64_MIN;
	int8_t x740 = -1;
	volatile int32_t t184 = 27353;

    t184 = (((x737<=x738)|x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	volatile int8_t x742 = INT8_MIN;
	volatile int32_t t185 = -612;

    t185 = (((x741<=x742)|x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 78062U;
	int8_t x746 = -45;
	static uint64_t x747 = 77013313274447103LLU;
	volatile uint16_t x748 = 2U;
	int32_t t186 = 335537;

    t186 = (((x745<=x746)|x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 23U;
	static int64_t x750 = 2548225886750057127LL;
	int64_t x751 = -7032LL;
	volatile int16_t x752 = 0;
	volatile int32_t t187 = -5076833;

    t187 = (((x749<=x750)|x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = 13239188LL;
	int16_t x754 = INT16_MAX;
	static uint64_t x755 = 333904228839603LLU;
	int32_t t188 = 1;

    t188 = (((x753<=x754)|x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = -1;
	static volatile int16_t x758 = INT16_MAX;
	int32_t x759 = INT32_MIN;
	int8_t x760 = INT8_MAX;

    t189 = (((x757<=x758)|x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x761 = -1;
	volatile uint16_t x763 = UINT16_MAX;
	static int32_t t190 = -2020;

    t190 = (((x761<=x762)|x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	int64_t x766 = INT64_MIN;
	int8_t x767 = -1;
	uint8_t x768 = 11U;
	int32_t t191 = 91;

    t191 = (((x765<=x766)|x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MIN;
	int64_t x770 = INT64_MAX;
	volatile int16_t x771 = 43;
	static volatile uint32_t x772 = UINT32_MAX;

    t192 = (((x769<=x770)|x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MIN;
	uint64_t x775 = 6984214879163LLU;
	int64_t x776 = -1LL;
	int32_t t193 = -527;

    t193 = (((x773<=x774)|x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -24388946351040LL;
	static int32_t x778 = 4022707;
	static int16_t x779 = INT16_MIN;
	static int16_t x780 = INT16_MIN;
	static volatile int32_t t194 = 1;

    t194 = (((x777<=x778)|x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = INT32_MIN;
	int8_t x783 = INT8_MIN;
	static int64_t x784 = -1LL;

    t195 = (((x781<=x782)|x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = INT32_MIN;
	uint64_t x787 = 9315323671295LLU;
	int32_t x788 = -1;
	static int32_t t196 = -56158943;

    t196 = (((x785<=x786)|x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x790 = 16U;
	int16_t x791 = INT16_MIN;
	uint16_t x792 = 0U;
	volatile int32_t t197 = 1;

    t197 = (((x789<=x790)|x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x794 = -12;
	volatile int32_t x795 = INT32_MIN;
	uint16_t x796 = 32109U;
	volatile int32_t t198 = 5897;

    t198 = (((x793<=x794)|x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 55327U;
	int64_t x798 = 16701462868LL;
	uint32_t x799 = 119741U;
	uint8_t x800 = 7U;
	int32_t t199 = 62400;

    t199 = (((x797<=x798)|x799)!=x800);

    if (t199 != 1) { NG(); } else { ; }
	
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

