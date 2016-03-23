
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

static int8_t x4 = 35;
int8_t x8 = INT8_MIN;
int8_t x14 = INT8_MAX;
uint8_t x16 = 2U;
int32_t t3 = 4;
volatile int32_t t4 = 330594;
int64_t x25 = INT64_MAX;
static volatile int32_t t6 = -6889;
static volatile uint16_t x30 = UINT16_MAX;
static int32_t x31 = INT32_MAX;
static int32_t t7 = 267086926;
volatile int32_t t8 = 28560166;
int64_t x38 = INT64_MIN;
int64_t x40 = INT64_MIN;
int32_t t9 = 428521830;
int64_t x50 = INT64_MAX;
uint64_t x52 = 55703864548309LLU;
uint32_t x53 = UINT32_MAX;
int8_t x54 = INT8_MIN;
int8_t x56 = 3;
volatile int32_t x60 = -1;
int32_t t14 = -16580693;
volatile uint32_t x65 = 1186774005U;
volatile uint64_t x77 = 1902LLU;
uint64_t x79 = 670237827LLU;
int16_t x82 = INT16_MIN;
uint8_t x92 = 31U;
static int8_t x94 = 15;
int8_t x99 = INT8_MAX;
uint32_t x101 = 88478504U;
int16_t x103 = 1;
static int32_t t26 = 4431;
int32_t x119 = INT32_MAX;
volatile int32_t t29 = -3531854;
int32_t x124 = 4081553;
volatile int64_t x125 = -1LL;
volatile int64_t x127 = -1432621728818894575LL;
int32_t x139 = INT32_MAX;
int64_t x146 = INT64_MAX;
int16_t x147 = INT16_MIN;
int8_t x148 = -1;
int32_t x153 = 17;
volatile uint32_t x155 = UINT32_MAX;
int8_t x161 = INT8_MAX;
static int32_t t41 = 3079;
static volatile int32_t t42 = -217750;
int32_t x173 = INT32_MIN;
static volatile int32_t t43 = -25675047;
int16_t x177 = -1;
volatile int32_t x178 = -1;
int64_t x181 = INT64_MIN;
volatile int16_t x184 = INT16_MIN;
static volatile int32_t t45 = 23552328;
int32_t x192 = 19192;
static int16_t x193 = INT16_MAX;
volatile int64_t x198 = -481822340LL;
static int32_t t49 = 19794;
int32_t t50 = 3208;
int32_t t52 = -664951480;
static volatile int8_t x213 = INT8_MIN;
static volatile int32_t t53 = -31917771;
volatile uint64_t x218 = 190LLU;
int64_t x222 = INT64_MIN;
static int32_t x223 = 88024;
uint32_t x231 = 0U;
int64_t x234 = INT64_MIN;
int32_t t59 = -169552679;
volatile int64_t x242 = INT64_MAX;
volatile int8_t x243 = INT8_MIN;
int32_t t60 = -3696;
volatile uint8_t x254 = 0U;
int32_t x265 = INT32_MIN;
int8_t x275 = -1;
uint32_t x277 = 15U;
int32_t t69 = -16915263;
volatile int64_t x281 = INT64_MIN;
uint8_t x283 = UINT8_MAX;
volatile int32_t t70 = 4849;
volatile int8_t x293 = INT8_MIN;
uint16_t x301 = UINT16_MAX;
int32_t t75 = 29290;
static int16_t x307 = 0;
uint8_t x308 = 0U;
int16_t x311 = INT16_MIN;
uint64_t x321 = UINT64_MAX;
int32_t t80 = 6259;
static int32_t x328 = INT32_MIN;
volatile int32_t t82 = 32;
int8_t x334 = INT8_MAX;
uint16_t x336 = UINT16_MAX;
static int32_t t84 = -20225177;
volatile int32_t t86 = 2338;
volatile int32_t t87 = -1;
uint8_t x354 = 67U;
static int32_t t88 = -282786496;
static volatile uint64_t x361 = 1292327064LLU;
int8_t x365 = INT8_MAX;
uint64_t x372 = 2098393535663163LLU;
uint64_t x373 = 953046801286966LLU;
volatile int32_t x377 = -1;
int64_t x383 = INT64_MIN;
int8_t x387 = INT8_MIN;
uint32_t x389 = UINT32_MAX;
uint64_t x391 = 14007658107LLU;
volatile int16_t x398 = INT16_MAX;
volatile int32_t t100 = -165549953;
uint64_t x414 = UINT64_MAX;
uint32_t x417 = 7947920U;
int8_t x420 = -1;
int32_t t104 = 1;
uint16_t x427 = 16334U;
int64_t x428 = INT64_MAX;
int64_t x430 = 477241178424443160LL;
static int16_t x433 = INT16_MIN;
uint64_t x436 = 22328148019LLU;
int32_t t108 = 479877;
volatile int16_t x440 = INT16_MIN;
int32_t t109 = 630;
int32_t t111 = 944966;
static volatile int32_t x451 = -1;
volatile int8_t x453 = INT8_MIN;
int64_t x454 = -99861712761LL;
int16_t x460 = 29;
static volatile uint16_t x463 = 3U;
volatile int32_t t116 = -47;
volatile int32_t t118 = -216;
volatile int16_t x477 = INT16_MIN;
int64_t x482 = -1LL;
int32_t x483 = INT32_MIN;
int32_t t120 = -214524;
static int32_t t121 = 95327946;
int16_t x489 = -1;
int8_t x491 = -1;
uint8_t x493 = 42U;
uint16_t x497 = 19303U;
int64_t x500 = -1LL;
uint32_t x502 = UINT32_MAX;
int16_t x505 = -3;
uint16_t x506 = 16U;
volatile int32_t x509 = INT32_MIN;
int32_t t127 = 509;
int16_t x516 = -1;
static volatile int16_t x517 = INT16_MAX;
int8_t x523 = -1;
volatile int32_t t131 = -61397000;
int64_t x530 = 92632048LL;
int8_t x533 = INT8_MAX;
static int16_t x548 = INT16_MIN;
int32_t x552 = INT32_MIN;
int64_t x557 = 899LL;
int32_t t139 = 767;
int8_t x564 = -1;
volatile int32_t t140 = 1;
int32_t t141 = 60913878;
int32_t x571 = INT32_MAX;
int64_t x574 = -1LL;
uint8_t x575 = 3U;
int32_t x580 = INT32_MAX;
volatile int32_t t146 = 5034;
volatile int32_t t149 = 2;
static uint32_t x601 = 186325103U;
static int32_t x603 = INT32_MIN;
volatile uint8_t x608 = 28U;
int16_t x613 = INT16_MIN;
static int16_t x615 = INT16_MIN;
int16_t x617 = INT16_MIN;
uint64_t x618 = 4587400429905848931LLU;
int8_t x619 = INT8_MAX;
int64_t x620 = 33552246786794LL;
uint32_t x623 = 1U;
int32_t x624 = INT32_MIN;
static int16_t x629 = -1;
int8_t x633 = -1;
static int32_t t158 = -502918811;
uint16_t x638 = UINT16_MAX;
int64_t x641 = INT64_MIN;
int32_t x658 = INT32_MAX;
int8_t x661 = -1;
uint16_t x665 = UINT16_MAX;
uint64_t x668 = UINT64_MAX;
int32_t t166 = -253599659;
int32_t x674 = 233;
static volatile int32_t x676 = -1;
int16_t x677 = INT16_MAX;
volatile int32_t t169 = 273;
static int32_t x682 = -17745;
volatile int32_t x687 = INT32_MIN;
int32_t x702 = 118489493;
static int16_t x712 = INT16_MIN;
volatile uint32_t x715 = 816U;
uint8_t x716 = 22U;
volatile int32_t x718 = -1;
volatile uint64_t x720 = 13541046909753LLU;
int64_t x733 = -114384706839761LL;
uint64_t x737 = 9164026787LLU;
int64_t x738 = -2046750368LL;
static uint64_t x743 = UINT64_MAX;
int16_t x751 = INT16_MAX;
int8_t x753 = -1;
uint16_t x756 = UINT16_MAX;
int8_t x760 = 1;
volatile int64_t x774 = INT64_MAX;
static int8_t x776 = -1;
static uint64_t x777 = 179779733221LLU;
uint32_t x778 = 398U;
int8_t x782 = 14;
volatile int64_t x788 = INT64_MIN;
static volatile uint16_t x790 = UINT16_MAX;
uint8_t x793 = 9U;
volatile int32_t t198 = 119945681;


void f0(void) {
    	volatile int8_t x1 = -1;
	int8_t x2 = -1;
	volatile int32_t x3 = INT32_MIN;
	static int32_t t0 = -1;

    t0 = (((x1>x2)|x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 19071730288LLU;
	static int16_t x7 = INT16_MIN;
	int32_t t1 = 5150;

    t1 = (((x5>x6)|x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 30152724821LL;
	int64_t x10 = -1LL;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -12415;

    t2 = (((x9>x10)|x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	int8_t x15 = -52;

    t3 = (((x13>x14)|x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	int64_t x18 = INT64_MAX;
	int64_t x19 = 242LL;
	int64_t x20 = INT64_MIN;

    t4 = (((x17>x18)|x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 28U;
	uint32_t x24 = 91U;
	volatile int32_t t5 = -5464598;

    t5 = (((x21>x22)|x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int16_t x27 = 362;
	int32_t x28 = INT32_MIN;

    t6 = (((x25>x26)|x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x29 = 8598U;
	uint16_t x32 = 0U;

    t7 = (((x29>x30)|x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = -1;
	int8_t x34 = -1;
	volatile int32_t x35 = -1;
	volatile uint64_t x36 = UINT64_MAX;

    t8 = (((x33>x34)|x35)!=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MAX;
	static int16_t x39 = INT16_MAX;

    t9 = (((x37>x38)|x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = 117LLU;
	int32_t t10 = 504667112;

    t10 = (((x41>x42)|x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 744;
	static volatile uint32_t x46 = UINT32_MAX;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 274313828;

    t11 = (((x45>x46)|x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 467410U;
	int8_t x51 = -37;
	volatile int32_t t12 = -611935;

    t12 = (((x49>x50)|x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x55 = 14585567742934LL;
	volatile int32_t t13 = 2;

    t13 = (((x53>x54)|x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -1;
	int8_t x58 = INT8_MIN;
	static uint32_t x59 = UINT32_MAX;

    t14 = (((x57>x58)|x59)!=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -4LL;
	int32_t x62 = INT32_MIN;
	int16_t x63 = INT16_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	int32_t t15 = -275538;

    t15 = (((x61>x62)|x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 1U;
	int8_t x67 = 56;
	uint64_t x68 = 1468LLU;
	static int32_t t16 = -448;

    t16 = (((x65>x66)|x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -867522824996239LL;
	uint8_t x70 = UINT8_MAX;
	volatile uint32_t x71 = UINT32_MAX;
	int32_t x72 = -1;
	static volatile int32_t t17 = -5;

    t17 = (((x69>x70)|x71)!=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = 2128608U;
	int8_t x75 = -15;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t18 = -962314159;

    t18 = (((x73>x74)|x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = -3;
	static volatile uint32_t x80 = UINT32_MAX;
	int32_t t19 = -13327378;

    t19 = (((x77>x78)|x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x81 = 7U;
	static volatile int8_t x83 = INT8_MIN;
	int8_t x84 = -1;
	int32_t t20 = 121697;

    t20 = (((x81>x82)|x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 221;
	uint16_t x86 = 12U;
	static uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;
	static int32_t t21 = -371703;

    t21 = (((x85>x86)|x87)!=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int64_t x90 = -1LL;
	static int8_t x91 = INT8_MAX;
	volatile int32_t t22 = -17746878;

    t22 = (((x89>x90)|x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 3U;
	int8_t x95 = -1;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -59449074;

    t23 = (((x93>x94)|x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 4U;
	int64_t x98 = 4617597033086561LL;
	int32_t x100 = -1;
	static volatile int32_t t24 = -1;

    t24 = (((x97>x98)|x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = 6;
	volatile int64_t x104 = -59763168827LL;
	int32_t t25 = 0;

    t25 = (((x101>x102)|x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MAX;
	static volatile uint16_t x106 = UINT16_MAX;
	int8_t x107 = 10;
	int32_t x108 = INT32_MAX;

    t26 = (((x105>x106)|x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	static uint8_t x110 = 58U;
	static int8_t x111 = INT8_MIN;
	int64_t x112 = 1LL;
	volatile int32_t t27 = 28615;

    t27 = (((x109>x110)|x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 17601619798184LLU;
	static int64_t x114 = 3451LL;
	volatile uint64_t x115 = 8789931LLU;
	int32_t x116 = -1;
	static int32_t t28 = 501748650;

    t28 = (((x113>x114)|x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 24;
	static uint32_t x118 = 98U;
	static uint64_t x120 = UINT64_MAX;

    t29 = (((x117>x118)|x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 6203U;
	int16_t x122 = 434;
	int16_t x123 = INT16_MIN;
	volatile int32_t t30 = -13;

    t30 = (((x121>x122)|x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	static volatile uint32_t x128 = 48497008U;
	volatile int32_t t31 = -1;

    t31 = (((x125>x126)|x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -1;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = UINT32_MAX;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = 1033978;

    t32 = (((x129>x130)|x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 242835U;
	static uint16_t x134 = 6U;
	int64_t x135 = 126LL;
	int16_t x136 = INT16_MAX;
	static int32_t t33 = -381768;

    t33 = (((x133>x134)|x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 94536;
	int16_t x138 = INT16_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 102;

    t34 = (((x137>x138)|x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	volatile uint32_t x142 = 748682U;
	static int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t35 = -214719;

    t35 = (((x141>x142)|x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -1;
	int32_t t36 = -13;

    t36 = (((x145>x146)|x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = 49900;
	int64_t x150 = INT64_MAX;
	int32_t x151 = 99723;
	uint32_t x152 = 29376U;
	volatile int32_t t37 = -18439;

    t37 = (((x149>x150)|x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x154 = 383509593U;
	int8_t x156 = 6;
	volatile int32_t t38 = 178;

    t38 = (((x153>x154)|x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 9751476958LLU;
	int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	int16_t x160 = -1;
	volatile int32_t t39 = 0;

    t39 = (((x157>x158)|x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x162 = 443LLU;
	static int64_t x163 = -1LL;
	int64_t x164 = INT64_MIN;
	int32_t t40 = 44284;

    t40 = (((x161>x162)|x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = 75;
	uint32_t x166 = 1U;
	volatile int16_t x167 = 1;
	int64_t x168 = INT64_MIN;

    t41 = (((x165>x166)|x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	static volatile int8_t x170 = INT8_MAX;
	static int32_t x171 = -6;
	static int64_t x172 = -1LL;

    t42 = (((x169>x170)|x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x174 = -1;
	int64_t x175 = INT64_MIN;
	static volatile int32_t x176 = 796;

    t43 = (((x173>x174)|x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x179 = -5707;
	int64_t x180 = -1LL;
	volatile int32_t t44 = 32540478;

    t44 = (((x177>x178)|x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	static int32_t x183 = INT32_MIN;

    t45 = (((x181>x182)|x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MAX;
	uint64_t x187 = UINT64_MAX;
	static volatile int64_t x188 = INT64_MIN;
	int32_t t46 = 1529;

    t46 = (((x185>x186)|x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	volatile uint64_t x191 = 46513138442414LLU;
	int32_t t47 = -2630;

    t47 = (((x189>x190)|x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x194 = 14U;
	int64_t x195 = INT64_MIN;
	volatile int64_t x196 = INT64_MIN;
	int32_t t48 = -2034;

    t48 = (((x193>x194)|x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int64_t x199 = INT64_MAX;
	uint64_t x200 = UINT64_MAX;

    t49 = (((x197>x198)|x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -15;
	int16_t x202 = -165;
	static int64_t x203 = INT64_MIN;
	volatile int8_t x204 = INT8_MAX;

    t50 = (((x201>x202)|x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x205 = -29;
	static int64_t x206 = -1LL;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 698441302U;
	static volatile int32_t t51 = -7366;

    t51 = (((x205>x206)|x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 1877;
	uint16_t x210 = 3U;
	static int16_t x211 = INT16_MIN;
	volatile int16_t x212 = INT16_MAX;

    t52 = (((x209>x210)|x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x214 = UINT8_MAX;
	int16_t x215 = INT16_MAX;
	int32_t x216 = INT32_MIN;

    t53 = (((x213>x214)|x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 6204;
	static volatile uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 1U;
	volatile int32_t t54 = -2965760;

    t54 = (((x217>x218)|x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	static int16_t x224 = -1;
	int32_t t55 = 59;

    t55 = (((x221>x222)|x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	uint8_t x226 = 116U;
	int8_t x227 = 1;
	static int32_t x228 = -67;
	static volatile int32_t t56 = -25877405;

    t56 = (((x225>x226)|x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MIN;
	volatile int32_t x230 = INT32_MIN;
	static int16_t x232 = -1;
	int32_t t57 = 12;

    t57 = (((x229>x230)|x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 49531251U;
	int32_t x235 = -1427;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -6;

    t58 = (((x233>x234)|x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 4290;
	int32_t x238 = -1;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 156692077U;

    t59 = (((x237>x238)|x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	int16_t x244 = INT16_MIN;

    t60 = (((x241>x242)|x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x245 = INT16_MIN;
	int64_t x246 = -830957LL;
	uint32_t x247 = 200326955U;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -22997;

    t61 = (((x245>x246)|x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 345938848814552LL;
	int16_t x251 = -792;
	volatile int64_t x252 = 30769828000LL;
	int32_t t62 = -74738923;

    t62 = (((x249>x250)|x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int16_t x255 = INT16_MAX;
	volatile uint16_t x256 = UINT16_MAX;
	static volatile int32_t t63 = -34467627;

    t63 = (((x253>x254)|x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	static int64_t x259 = 15211LL;
	int64_t x260 = -102947420759LL;
	volatile int32_t t64 = 832632;

    t64 = (((x257>x258)|x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 2252U;
	int64_t x262 = INT64_MIN;
	uint64_t x263 = 34LLU;
	int64_t x264 = 178434291441LL;
	volatile int32_t t65 = 580;

    t65 = (((x261>x262)|x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MAX;
	static uint8_t x267 = UINT8_MAX;
	uint16_t x268 = 1U;
	static int32_t t66 = -5;

    t66 = (((x265>x266)|x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MIN;
	static uint8_t x270 = UINT8_MAX;
	volatile int32_t x271 = -33659;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t67 = -498249845;

    t67 = (((x269>x270)|x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 3782524LLU;
	int32_t x274 = 0;
	int64_t x276 = -15274666748LL;
	static int32_t t68 = 329751;

    t68 = (((x273>x274)|x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x278 = 399U;
	static volatile uint8_t x279 = UINT8_MAX;
	int32_t x280 = INT32_MIN;

    t69 = (((x277>x278)|x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = 16301272LL;
	volatile int8_t x284 = INT8_MAX;

    t70 = (((x281>x282)|x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 21643217U;
	int32_t x286 = -334924947;
	static int16_t x287 = -1;
	static int64_t x288 = -4939LL;
	int32_t t71 = 73075418;

    t71 = (((x285>x286)|x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	static int8_t x290 = INT8_MAX;
	int64_t x291 = -108963013510255938LL;
	static volatile int16_t x292 = -1;
	volatile int32_t t72 = 83361;

    t72 = (((x289>x290)|x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = -877;

    t73 = (((x293>x294)|x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = 6U;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = -1;
	volatile int32_t x300 = INT32_MAX;
	int32_t t74 = 8036493;

    t74 = (((x297>x298)|x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x302 = 129415745U;
	static int64_t x303 = 2737525044160LL;
	uint8_t x304 = 4U;

    t75 = (((x301>x302)|x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 1682424LL;
	int16_t x306 = INT16_MIN;
	int32_t t76 = 989048;

    t76 = (((x305>x306)|x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	uint32_t x310 = 123398592U;
	static int8_t x312 = -34;
	volatile int32_t t77 = 1;

    t77 = (((x309>x310)|x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x313 = 4LLU;
	volatile int16_t x314 = 0;
	uint64_t x315 = 3613035LLU;
	volatile int32_t x316 = -1;
	volatile int32_t t78 = 37761;

    t78 = (((x313>x314)|x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MAX;
	int8_t x318 = INT8_MAX;
	static uint8_t x319 = 1U;
	int64_t x320 = 19406706672LL;
	static int32_t t79 = 565;

    t79 = (((x317>x318)|x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x322 = UINT32_MAX;
	static volatile int32_t x323 = -1;
	static uint16_t x324 = UINT16_MAX;

    t80 = (((x321>x322)|x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x325 = 11736383416206LLU;
	uint8_t x326 = 6U;
	int32_t x327 = INT32_MAX;
	int32_t t81 = 283322;

    t81 = (((x325>x326)|x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 5298185U;
	static uint8_t x332 = 7U;

    t82 = (((x329>x330)|x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 6U;
	int8_t x335 = -1;
	volatile int32_t t83 = -423920419;

    t83 = (((x333>x334)|x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 0;
	int32_t x338 = -1;
	static int32_t x339 = INT32_MIN;
	static int32_t x340 = INT32_MIN;

    t84 = (((x337>x338)|x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	static int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -390538381;

    t85 = (((x341>x342)|x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	volatile int16_t x346 = -5;
	int32_t x347 = -1;
	uint32_t x348 = UINT32_MAX;

    t86 = (((x345>x346)|x347)!=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = INT64_MAX;
	volatile int8_t x350 = INT8_MAX;
	int32_t x351 = -1;
	uint8_t x352 = 76U;

    t87 = (((x349>x350)|x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = 1;
	int64_t x355 = -1LL;
	int32_t x356 = -1;

    t88 = (((x353>x354)|x355)!=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = -2;
	int32_t x359 = -1;
	static volatile int32_t x360 = -1;
	static volatile int32_t t89 = -1650661;

    t89 = (((x357>x358)|x359)!=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x362 = 2;
	int64_t x363 = -1LL;
	volatile uint8_t x364 = 95U;
	int32_t t90 = -125855428;

    t90 = (((x361>x362)|x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = INT8_MIN;
	int32_t x367 = 14;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -197192450;

    t91 = (((x365>x366)|x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	static int16_t x371 = INT16_MIN;
	int32_t t92 = 351313801;

    t92 = (((x369>x370)|x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x374 = INT8_MAX;
	static uint8_t x375 = 1U;
	int8_t x376 = INT8_MAX;
	static int32_t t93 = -3491;

    t93 = (((x373>x374)|x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 10U;
	volatile int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 251;

    t94 = (((x377>x378)|x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -76;
	uint16_t x382 = 360U;
	int32_t x384 = -1;
	static volatile int32_t t95 = 0;

    t95 = (((x381>x382)|x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 2519;
	static int16_t x386 = INT16_MAX;
	int8_t x388 = -1;
	volatile int32_t t96 = 294;

    t96 = (((x385>x386)|x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x390 = 88246;
	int8_t x392 = -6;
	int32_t t97 = -79;

    t97 = (((x389>x390)|x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x393 = -1;
	static int64_t x394 = INT64_MIN;
	uint16_t x395 = 216U;
	uint64_t x396 = 1LLU;
	volatile int32_t t98 = -2196;

    t98 = (((x393>x394)|x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x397 = UINT8_MAX;
	int64_t x399 = INT64_MAX;
	volatile int32_t x400 = -1891;
	static int32_t t99 = -1064020791;

    t99 = (((x397>x398)|x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = 4083;
	volatile int64_t x402 = -1LL;
	uint64_t x403 = UINT64_MAX;
	static uint8_t x404 = 2U;

    t100 = (((x401>x402)|x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile int16_t x406 = INT16_MAX;
	volatile uint16_t x407 = 2966U;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t101 = 87988;

    t101 = (((x405>x406)|x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = 48U;
	volatile int32_t x410 = -1;
	static uint32_t x411 = 400243621U;
	static uint8_t x412 = UINT8_MAX;
	int32_t t102 = -48076053;

    t102 = (((x409>x410)|x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 1539U;
	uint32_t x415 = UINT32_MAX;
	int64_t x416 = INT64_MIN;
	static int32_t t103 = 2;

    t103 = (((x413>x414)|x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x418 = UINT16_MAX;
	int8_t x419 = 0;

    t104 = (((x417>x418)|x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	volatile int32_t x422 = -1;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 160U;
	int32_t t105 = 2;

    t105 = (((x421>x422)|x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 3;
	static int64_t x426 = -80260270437535790LL;
	volatile int32_t t106 = -31201;

    t106 = (((x425>x426)|x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = UINT64_MAX;
	uint16_t x431 = UINT16_MAX;
	static uint64_t x432 = UINT64_MAX;
	volatile int32_t t107 = -813;

    t107 = (((x429>x430)|x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -7;
	uint32_t x435 = 235238U;

    t108 = (((x433>x434)|x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 2835692051148464LLU;
	int8_t x438 = INT8_MAX;
	int32_t x439 = INT32_MIN;

    t109 = (((x437>x438)|x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 1;
	int32_t x442 = -13596677;
	static int8_t x443 = -1;
	uint64_t x444 = 20735528180627LLU;
	int32_t t110 = 3986898;

    t110 = (((x441>x442)|x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	static int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	volatile uint64_t x448 = 3846568128876952422LLU;

    t111 = (((x445>x446)|x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 55639U;
	int64_t x450 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	static int32_t t112 = -733711817;

    t112 = (((x449>x450)|x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x455 = 979454U;
	int16_t x456 = INT16_MAX;
	static volatile int32_t t113 = -1940883;

    t113 = (((x453>x454)|x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 28U;
	int8_t x458 = -15;
	static uint16_t x459 = 3667U;
	static int32_t t114 = 0;

    t114 = (((x457>x458)|x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = INT8_MIN;
	static uint16_t x462 = 6U;
	int64_t x464 = INT64_MIN;
	int32_t t115 = -3;

    t115 = (((x461>x462)|x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = INT8_MAX;
	uint64_t x466 = 5087384344924183765LLU;
	volatile uint8_t x467 = UINT8_MAX;
	static int8_t x468 = INT8_MAX;

    t116 = (((x465>x466)|x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x469 = 2U;
	static volatile int64_t x470 = -109778840111115LL;
	static volatile uint32_t x471 = 1201096145U;
	int64_t x472 = INT64_MAX;
	int32_t t117 = -1;

    t117 = (((x469>x470)|x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int64_t x474 = -12798LL;
	uint64_t x475 = 8321704030284942LLU;
	int64_t x476 = 362783759417410953LL;

    t118 = (((x473>x474)|x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MAX;
	int8_t x479 = -1;
	volatile int32_t x480 = -1;
	int32_t t119 = 2;

    t119 = (((x477>x478)|x479)!=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 9U;
	int64_t x484 = -12192987728504LL;

    t120 = (((x481>x482)|x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = -1LL;
	uint32_t x486 = UINT32_MAX;
	uint8_t x487 = UINT8_MAX;
	int16_t x488 = -1;

    t121 = (((x485>x486)|x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = INT32_MAX;
	int8_t x492 = 15;
	volatile int32_t t122 = 466415;

    t122 = (((x489>x490)|x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x494 = 14569158659LLU;
	int16_t x495 = -1;
	int8_t x496 = -1;
	int32_t t123 = -118;

    t123 = (((x493>x494)|x495)!=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x498 = UINT32_MAX;
	volatile int16_t x499 = INT16_MIN;
	volatile int32_t t124 = 1053862;

    t124 = (((x497>x498)|x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x501 = UINT8_MAX;
	uint32_t x503 = 1567020542U;
	static uint16_t x504 = 117U;
	volatile int32_t t125 = 1465;

    t125 = (((x501>x502)|x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x507 = 52384U;
	uint16_t x508 = 5U;
	volatile int32_t t126 = -20744;

    t126 = (((x505>x506)|x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = -1;
	int8_t x511 = INT8_MAX;
	static int16_t x512 = INT16_MIN;

    t127 = (((x509>x510)|x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = -1018328532LL;
	int8_t x514 = 0;
	int64_t x515 = -1LL;
	volatile int32_t t128 = 5088;

    t128 = (((x513>x514)|x515)!=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x518 = INT8_MAX;
	uint64_t x519 = 16322762864086973LLU;
	static int16_t x520 = 16105;
	volatile int32_t t129 = -507;

    t129 = (((x517>x518)|x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	uint32_t x522 = UINT32_MAX;
	uint8_t x524 = UINT8_MAX;
	int32_t t130 = -489878703;

    t130 = (((x521>x522)|x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x525 = -1;
	int32_t x526 = INT32_MAX;
	uint64_t x527 = 3307271LLU;
	uint16_t x528 = UINT16_MAX;

    t131 = (((x525>x526)|x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -1;
	static uint8_t x531 = 23U;
	int8_t x532 = -38;
	int32_t t132 = 1056;

    t132 = (((x529>x530)|x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = UINT16_MAX;
	int16_t x535 = -1;
	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = -6740;

    t133 = (((x533>x534)|x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = -1;
	int16_t x538 = 1685;
	uint32_t x539 = UINT32_MAX;
	uint32_t x540 = 111U;
	volatile int32_t t134 = -26683;

    t134 = (((x537>x538)|x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	static int32_t x542 = 1314;
	uint16_t x543 = 11177U;
	int8_t x544 = INT8_MAX;
	static int32_t t135 = 1045083;

    t135 = (((x541>x542)|x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 6102;
	uint8_t x546 = 1U;
	int32_t x547 = INT32_MAX;
	int32_t t136 = -10475196;

    t136 = (((x545>x546)|x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	uint8_t x550 = UINT8_MAX;
	volatile int32_t x551 = 1;
	int32_t t137 = -136;

    t137 = (((x549>x550)|x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int32_t x554 = INT32_MAX;
	int64_t x555 = -1LL;
	volatile int32_t x556 = INT32_MIN;
	int32_t t138 = -11047318;

    t138 = (((x553>x554)|x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MAX;
	volatile uint8_t x559 = 0U;
	volatile int64_t x560 = INT64_MIN;

    t139 = (((x557>x558)|x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MAX;
	uint64_t x563 = UINT64_MAX;

    t140 = (((x561>x562)|x563)!=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = UINT32_MAX;
	static int32_t x566 = -944;
	int64_t x567 = -349263531LL;
	static int64_t x568 = INT64_MIN;

    t141 = (((x565>x566)|x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x569 = -1LL;
	static uint8_t x570 = 9U;
	volatile int64_t x572 = INT64_MIN;
	static volatile int32_t t142 = -116523793;

    t142 = (((x569>x570)|x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = INT16_MAX;
	static uint32_t x576 = 143487260U;
	static volatile int32_t t143 = -6467006;

    t143 = (((x573>x574)|x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int64_t x578 = -2LL;
	volatile uint32_t x579 = UINT32_MAX;
	static volatile int32_t t144 = 2;

    t144 = (((x577>x578)|x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = -57;
	static int32_t x582 = -26753;
	uint32_t x583 = UINT32_MAX;
	int64_t x584 = 160LL;
	int32_t t145 = 206006381;

    t145 = (((x581>x582)|x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	int8_t x586 = 0;
	uint8_t x587 = UINT8_MAX;
	volatile int64_t x588 = 399195131038LL;

    t146 = (((x585>x586)|x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	int64_t x590 = INT64_MIN;
	volatile int64_t x591 = INT64_MIN;
	int64_t x592 = -1LL;
	volatile int32_t t147 = -386;

    t147 = (((x589>x590)|x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = INT64_MAX;
	uint16_t x594 = UINT16_MAX;
	uint8_t x595 = 6U;
	uint64_t x596 = 2LLU;
	static volatile int32_t t148 = 328050;

    t148 = (((x593>x594)|x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x597 = 5050228LLU;
	static int16_t x598 = INT16_MAX;
	volatile int64_t x599 = INT64_MIN;
	static int64_t x600 = 1064303612LL;

    t149 = (((x597>x598)|x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = 1;
	int8_t x604 = INT8_MIN;
	int32_t t150 = -74;

    t150 = (((x601>x602)|x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	static int16_t x606 = -1;
	int16_t x607 = 6;
	volatile int32_t t151 = 120650;

    t151 = (((x605>x606)|x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	volatile int32_t x610 = -1;
	int8_t x611 = INT8_MIN;
	int64_t x612 = -531439636LL;
	volatile int32_t t152 = 1;

    t152 = (((x609>x610)|x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x614 = -1;
	int32_t x616 = INT32_MIN;
	int32_t t153 = 68100553;

    t153 = (((x613>x614)|x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t t154 = 1981;

    t154 = (((x617>x618)|x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = 7;
	uint8_t x622 = 6U;
	volatile int32_t t155 = 885;

    t155 = (((x621>x622)|x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 18335U;
	static int32_t x626 = 181822376;
	uint64_t x627 = UINT64_MAX;
	static volatile uint16_t x628 = 2U;
	int32_t t156 = -6570991;

    t156 = (((x625>x626)|x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x630 = INT16_MIN;
	volatile int8_t x631 = INT8_MIN;
	int32_t x632 = -95809;
	volatile int32_t t157 = 461;

    t157 = (((x629>x630)|x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x634 = 0U;
	int8_t x635 = -1;
	uint64_t x636 = 181477842508433175LLU;

    t158 = (((x633>x634)|x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	int64_t x639 = INT64_MIN;
	int32_t x640 = -1;
	int32_t t159 = -350189;

    t159 = (((x637>x638)|x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x642 = 47U;
	static int64_t x643 = INT64_MAX;
	int32_t x644 = 16887367;
	volatile int32_t t160 = 2113;

    t160 = (((x641>x642)|x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 5;
	volatile int16_t x646 = INT16_MAX;
	int8_t x647 = -1;
	int8_t x648 = INT8_MIN;
	static volatile int32_t t161 = 52;

    t161 = (((x645>x646)|x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x649 = 2367098U;
	static int32_t x650 = INT32_MIN;
	int64_t x651 = -1445LL;
	int8_t x652 = -1;
	volatile int32_t t162 = -195602269;

    t162 = (((x649>x650)|x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 317489U;
	uint8_t x654 = 31U;
	int8_t x655 = INT8_MAX;
	static int16_t x656 = 0;
	int32_t t163 = 41858;

    t163 = (((x653>x654)|x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int64_t x659 = -3586578241760222LL;
	static uint32_t x660 = 1032036U;
	volatile int32_t t164 = -46;

    t164 = (((x657>x658)|x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	volatile int32_t x664 = INT32_MAX;
	static volatile int32_t t165 = 433;

    t165 = (((x661>x662)|x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x666 = INT16_MAX;
	int16_t x667 = INT16_MIN;

    t166 = (((x665>x666)|x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	volatile int16_t x670 = 4;
	int16_t x671 = INT16_MIN;
	int8_t x672 = INT8_MIN;
	int32_t t167 = 335112;

    t167 = (((x669>x670)|x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 215U;
	static int64_t x675 = -373023181837386LL;
	volatile int32_t t168 = -4641866;

    t168 = (((x673>x674)|x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = INT64_MIN;
	uint32_t x679 = UINT32_MAX;
	int64_t x680 = INT64_MIN;

    t169 = (((x677>x678)|x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	static volatile uint16_t x683 = 4U;
	uint64_t x684 = UINT64_MAX;
	int32_t t170 = 126;

    t170 = (((x681>x682)|x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = -15;
	volatile uint64_t x686 = UINT64_MAX;
	static uint64_t x688 = 1462252708710972975LLU;
	int32_t t171 = 23239;

    t171 = (((x685>x686)|x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MAX;
	int32_t x690 = INT32_MIN;
	static volatile uint64_t x691 = 107508LLU;
	int8_t x692 = INT8_MIN;
	int32_t t172 = 0;

    t172 = (((x689>x690)|x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	int32_t x694 = INT32_MAX;
	int32_t x695 = -1;
	int8_t x696 = 1;
	volatile int32_t t173 = 3910272;

    t173 = (((x693>x694)|x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x697 = 47;
	uint8_t x698 = 3U;
	int8_t x699 = -1;
	int64_t x700 = INT64_MAX;
	static int32_t t174 = 40;

    t174 = (((x697>x698)|x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x703 = -1;
	volatile int64_t x704 = INT64_MIN;
	volatile int32_t t175 = 11359473;

    t175 = (((x701>x702)|x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -131982079;
	int8_t x706 = 29;
	static int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MAX;
	volatile int32_t t176 = 152592;

    t176 = (((x705>x706)|x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -3;
	uint16_t x710 = 3172U;
	static uint64_t x711 = UINT64_MAX;
	int32_t t177 = 48283;

    t177 = (((x709>x710)|x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	static volatile int8_t x714 = 2;
	int32_t t178 = -64095251;

    t178 = (((x713>x714)|x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x719 = -464804;
	volatile int32_t t179 = -9926;

    t179 = (((x717>x718)|x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = 64974354;
	uint64_t x722 = UINT64_MAX;
	static uint8_t x723 = UINT8_MAX;
	uint32_t x724 = 2U;
	volatile int32_t t180 = 9;

    t180 = (((x721>x722)|x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = -1;
	static int16_t x727 = 3654;
	uint32_t x728 = UINT32_MAX;
	static volatile int32_t t181 = -3;

    t181 = (((x725>x726)|x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -60;
	int64_t x730 = INT64_MAX;
	volatile int16_t x731 = INT16_MAX;
	static uint8_t x732 = UINT8_MAX;
	volatile int32_t t182 = -370;

    t182 = (((x729>x730)|x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x734 = 1U;
	volatile int8_t x735 = INT8_MAX;
	uint64_t x736 = 0LLU;
	static volatile int32_t t183 = -90098271;

    t183 = (((x733>x734)|x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MAX;
	int32_t t184 = -5515;

    t184 = (((x737>x738)|x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	uint16_t x742 = 0U;
	int8_t x744 = INT8_MAX;
	static volatile int32_t t185 = -1612;

    t185 = (((x741>x742)|x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = INT8_MIN;
	int32_t x746 = INT32_MAX;
	int16_t x747 = -1;
	uint8_t x748 = 107U;
	int32_t t186 = -1273;

    t186 = (((x745>x746)|x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x749 = -1;
	int32_t x750 = 6814467;
	int8_t x752 = -1;
	volatile int32_t t187 = -63138;

    t187 = (((x749>x750)|x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MIN;
	uint16_t x755 = 123U;
	static int32_t t188 = -2040;

    t188 = (((x753>x754)|x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	uint32_t x758 = 28U;
	int32_t x759 = 35;
	int32_t t189 = 0;

    t189 = (((x757>x758)|x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 16U;
	int64_t x762 = INT64_MIN;
	int32_t x763 = -50717;
	uint64_t x764 = 184578556984529LLU;
	int32_t t190 = 1253;

    t190 = (((x761>x762)|x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	int8_t x766 = -2;
	int16_t x767 = -1;
	static volatile int8_t x768 = 0;
	int32_t t191 = -8470478;

    t191 = (((x765>x766)|x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -27383LL;
	uint64_t x770 = 66948139602346LLU;
	uint64_t x771 = 8073692LLU;
	volatile int64_t x772 = -1LL;
	static volatile int32_t t192 = 423014990;

    t192 = (((x769>x770)|x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = 109U;
	uint16_t x775 = 0U;
	volatile int32_t t193 = -6476;

    t193 = (((x773>x774)|x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x779 = -1LL;
	int32_t x780 = -1;
	volatile int32_t t194 = -341652;

    t194 = (((x777>x778)|x779)!=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 25;
	int8_t x783 = -24;
	int64_t x784 = 2774310LL;
	static volatile int32_t t195 = -2;

    t195 = (((x781>x782)|x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x785 = 28877386U;
	int8_t x786 = INT8_MIN;
	int16_t x787 = INT16_MIN;
	int32_t t196 = 1452315;

    t196 = (((x785>x786)|x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 0U;
	static uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MAX;
	int32_t t197 = 166;

    t197 = (((x789>x790)|x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MAX;
	int32_t x795 = -1;
	int32_t x796 = INT32_MIN;

    t198 = (((x793>x794)|x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	uint8_t x798 = 8U;
	static int16_t x799 = INT16_MIN;
	static int64_t x800 = INT64_MAX;
	int32_t t199 = 5;

    t199 = (((x797>x798)|x799)!=x800);

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

