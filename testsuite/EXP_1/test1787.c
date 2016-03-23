
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

volatile int32_t x8 = INT32_MIN;
volatile int32_t t0 = 0;
uint64_t x9 = UINT64_MAX;
volatile int32_t x11 = -1;
volatile int32_t t1 = 880484;
uint64_t x23 = UINT64_MAX;
uint32_t x24 = 260468U;
int8_t x25 = INT8_MIN;
static uint64_t x26 = 432085372687049174LLU;
uint64_t x46 = 1792928LLU;
volatile int32_t x47 = INT32_MAX;
volatile int32_t t10 = -5762885;
static int16_t x54 = INT16_MIN;
int32_t x60 = 779745062;
volatile int16_t x67 = 14196;
int64_t x76 = -175561746476538163LL;
int64_t x77 = -1LL;
volatile int32_t t18 = 42823;
int16_t x96 = INT16_MAX;
static int8_t x100 = INT8_MAX;
static volatile int16_t x106 = -938;
static int16_t x109 = 34;
volatile uint8_t x119 = 29U;
volatile int32_t t27 = -3867228;
int8_t x130 = -1;
volatile int64_t x131 = INT64_MAX;
int64_t x137 = INT64_MIN;
uint64_t x147 = 73432LLU;
int32_t x148 = INT32_MAX;
static volatile int8_t x151 = -1;
uint8_t x153 = 30U;
volatile int16_t x156 = -1;
uint16_t x158 = 276U;
volatile int32_t t36 = 20592;
uint32_t x161 = 2042U;
volatile int8_t x164 = INT8_MAX;
uint64_t x169 = 3378904031850077457LLU;
int64_t x170 = -1LL;
static volatile int64_t x173 = INT64_MIN;
int32_t t40 = 2771755;
static int64_t x177 = INT64_MAX;
volatile int32_t t42 = -968;
static int16_t x187 = INT16_MIN;
int32_t t43 = -2534558;
volatile int32_t t46 = -18744;
int16_t x209 = INT16_MIN;
volatile int8_t x212 = 1;
uint8_t x213 = 1U;
static volatile int32_t t49 = 24896;
static uint64_t x217 = UINT64_MAX;
uint8_t x219 = 101U;
int16_t x224 = INT16_MIN;
uint32_t x225 = UINT32_MAX;
int8_t x230 = INT8_MAX;
volatile int32_t t55 = -966145;
static int32_t x241 = INT32_MIN;
static int32_t x243 = 38;
uint64_t x244 = 16590098LLU;
static volatile int32_t t56 = 20667819;
static volatile int32_t t57 = 35090809;
int32_t t58 = -420784;
volatile uint32_t x253 = UINT32_MAX;
uint8_t x254 = 26U;
uint32_t x257 = UINT32_MAX;
uint64_t x263 = UINT64_MAX;
static volatile uint8_t x264 = 5U;
int64_t x276 = INT64_MIN;
int32_t x284 = INT32_MAX;
static int8_t x289 = INT8_MAX;
uint8_t x296 = 7U;
int32_t t69 = -16605098;
volatile int32_t x299 = INT32_MAX;
uint8_t x311 = 13U;
static int8_t x316 = -4;
int16_t x320 = -1;
static int32_t t74 = -8340370;
volatile uint32_t x321 = 268U;
int8_t x323 = INT8_MIN;
static int8_t x327 = 12;
uint8_t x330 = 22U;
uint16_t x335 = 3U;
uint8_t x348 = 3U;
int32_t x349 = INT32_MIN;
uint8_t x351 = 5U;
static int32_t x363 = -1;
int32_t x365 = INT32_MIN;
static uint64_t x368 = 1007724716334584LLU;
int64_t x371 = -1LL;
int64_t x374 = INT64_MAX;
volatile int32_t t87 = -222945;
static int16_t x388 = -1;
int16_t x393 = INT16_MIN;
static int64_t x395 = INT64_MAX;
uint16_t x404 = UINT16_MAX;
int64_t x414 = INT64_MIN;
int8_t x422 = -1;
int32_t x426 = INT32_MIN;
volatile int32_t t100 = 53518;
static uint32_t x434 = 763969155U;
volatile int64_t x435 = 0LL;
int8_t x437 = INT8_MIN;
uint64_t x439 = 1861LLU;
static int8_t x442 = INT8_MIN;
static uint16_t x450 = 18U;
int16_t x454 = -28;
uint16_t x455 = UINT16_MAX;
static int64_t x456 = -1LL;
volatile uint32_t x473 = 2538238U;
uint64_t x474 = 1875263924768LLU;
uint64_t x480 = 122967404664386LLU;
volatile int32_t t113 = 54541594;
uint16_t x488 = UINT16_MAX;
int32_t x498 = INT32_MIN;
volatile int16_t x504 = INT16_MIN;
int64_t x507 = INT64_MAX;
uint8_t x510 = 28U;
uint64_t x513 = UINT64_MAX;
int32_t t122 = 52830318;
int8_t x525 = INT8_MAX;
volatile int16_t x526 = -320;
static volatile int8_t x527 = 0;
int32_t t123 = 3815388;
uint8_t x529 = 43U;
volatile int32_t t124 = -42;
int32_t t125 = 791158612;
static volatile int32_t x553 = INT32_MIN;
int32_t t128 = 0;
int32_t x559 = INT32_MAX;
int64_t x565 = INT64_MIN;
volatile uint16_t x566 = 29U;
volatile int64_t x569 = 4602267858228933835LL;
volatile uint16_t x570 = UINT16_MAX;
volatile int32_t t131 = -806724429;
uint8_t x587 = 0U;
int16_t x588 = -1;
int32_t x592 = INT32_MAX;
static int8_t x593 = INT8_MIN;
volatile int64_t x596 = INT64_MIN;
uint32_t x599 = 44U;
int32_t t138 = -47683314;
int8_t x614 = INT8_MIN;
int32_t x619 = -116;
uint16_t x621 = 2U;
static volatile uint32_t x634 = 6476U;
int64_t x635 = 257LL;
volatile int32_t x640 = -2592534;
int64_t x646 = INT64_MIN;
uint32_t x651 = 503U;
int32_t t150 = -2013100;
static uint16_t x656 = 210U;
uint32_t x676 = 298U;
static volatile int32_t x685 = -74258602;
int16_t x691 = 151;
static volatile int16_t x692 = INT16_MIN;
static int64_t x695 = -21039987LL;
int32_t t157 = 517075216;
uint64_t x697 = 275047263LLU;
int32_t x705 = INT32_MIN;
static int16_t x707 = 32;
int16_t x708 = INT16_MAX;
volatile int32_t t160 = 640;
int32_t x713 = INT32_MIN;
int8_t x714 = INT8_MIN;
int16_t x727 = 1;
volatile uint64_t x730 = 241852158812708LLU;
int64_t x739 = INT64_MAX;
int64_t x740 = INT64_MIN;
uint32_t x753 = 2831275U;
uint8_t x754 = 8U;
volatile uint16_t x761 = 2U;
uint64_t x764 = 89188557LLU;
int64_t x765 = INT64_MIN;
uint64_t x767 = 2420499019020LLU;
int8_t x771 = INT8_MAX;
int32_t x781 = -1;
int32_t x784 = INT32_MAX;
int32_t x788 = -1;
static uint16_t x792 = UINT16_MAX;
static volatile int32_t t180 = 1909;
volatile uint64_t x796 = 46074390651210734LLU;
uint64_t x800 = UINT64_MAX;
static volatile uint32_t x802 = 15709U;
int8_t x804 = 5;
static volatile int8_t x805 = -1;
volatile int8_t x812 = -1;
static volatile int32_t t187 = 117;
static int16_t x822 = INT16_MIN;
static uint16_t x831 = 90U;
uint16_t x841 = 9U;
volatile int32_t t192 = 7;
static int64_t x856 = -1LL;
volatile int32_t t195 = 176;
uint8_t x859 = 51U;
int64_t x866 = INT64_MIN;
volatile uint32_t x872 = 1812740U;


void f0(void) {
    	volatile int8_t x5 = INT8_MIN;
	volatile uint16_t x6 = 2U;
	static int16_t x7 = INT16_MAX;

    t0 = (((x5<=x6)-x7)>x8);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x10 = INT8_MIN;
	static int32_t x12 = INT32_MAX;

    t1 = (((x9<=x10)-x11)>x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 0U;
	int32_t x14 = 1513;
	static volatile int8_t x15 = INT8_MAX;
	uint16_t x16 = 2697U;
	int32_t t2 = -202452;

    t2 = (((x13<=x14)-x15)>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	int32_t x18 = 2041;
	int16_t x19 = -1;
	static int32_t x20 = INT32_MIN;
	int32_t t3 = 428;

    t3 = (((x17<=x18)-x19)>x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = -26178854LL;
	int16_t x22 = INT16_MIN;
	int32_t t4 = -12771;

    t4 = (((x21<=x22)-x23)>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x27 = INT8_MIN;
	static int32_t x28 = 1253819;
	int32_t t5 = -2437441;

    t5 = (((x25<=x26)-x27)>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = -233753110;
	int8_t x30 = 18;
	int8_t x31 = -1;
	volatile int32_t x32 = 9567778;
	int32_t t6 = -6;

    t6 = (((x29<=x30)-x31)>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	uint32_t x34 = 10491818U;
	volatile uint64_t x35 = 60190416395LLU;
	int32_t x36 = INT32_MIN;
	volatile int32_t t7 = -2022;

    t7 = (((x33<=x34)-x35)>x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	static int16_t x39 = INT16_MAX;
	volatile int16_t x40 = INT16_MAX;
	volatile int32_t t8 = -14600;

    t8 = (((x37<=x38)-x39)>x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	uint8_t x42 = 39U;
	int16_t x43 = INT16_MAX;
	int32_t x44 = -1;
	int32_t t9 = -187962164;

    t9 = (((x41<=x42)-x43)>x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = 10;
	static int64_t x48 = INT64_MAX;

    t10 = (((x45<=x46)-x47)>x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 14U;
	static volatile int8_t x50 = INT8_MAX;
	volatile uint64_t x51 = UINT64_MAX;
	int16_t x52 = -1;
	int32_t t11 = -173180;

    t11 = (((x49<=x50)-x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	uint8_t x55 = 13U;
	int64_t x56 = 59590562LL;
	int32_t t12 = -2735;

    t12 = (((x53<=x54)-x55)>x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MIN;
	uint32_t x58 = 1940211U;
	int64_t x59 = INT64_MAX;
	int32_t t13 = 0;

    t13 = (((x57<=x58)-x59)>x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	volatile int64_t x62 = INT64_MIN;
	uint8_t x63 = 89U;
	int32_t x64 = 150742002;
	static int32_t t14 = 7;

    t14 = (((x61<=x62)-x63)>x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 38;
	volatile uint64_t x66 = 90LLU;
	volatile int64_t x68 = 123308073306LL;
	int32_t t15 = -294940;

    t15 = (((x65<=x66)-x67)>x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = -1;
	static int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	volatile int32_t t16 = -955;

    t16 = (((x73<=x74)-x75)>x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x78 = 53463U;
	int16_t x79 = -5;
	int64_t x80 = -239LL;
	volatile int32_t t17 = 26;

    t17 = (((x77<=x78)-x79)>x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = UINT64_MAX;
	uint8_t x82 = UINT8_MAX;
	uint64_t x83 = 2726138345LLU;
	static int32_t x84 = -7;

    t18 = (((x81<=x82)-x83)>x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 21008U;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	static volatile uint32_t x88 = 272999U;
	volatile int32_t t19 = -1;

    t19 = (((x85<=x86)-x87)>x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x89 = 10559884LLU;
	volatile int16_t x90 = 5;
	static int16_t x91 = INT16_MIN;
	int64_t x92 = -29072LL;
	int32_t t20 = -412781565;

    t20 = (((x89<=x90)-x91)>x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 7U;
	static int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	volatile int32_t t21 = -13;

    t21 = (((x93<=x94)-x95)>x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x97 = INT32_MIN;
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = 47203623LL;
	int32_t t22 = -1097179;

    t22 = (((x97<=x98)-x99)>x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MAX;
	static uint32_t x103 = UINT32_MAX;
	int16_t x104 = -1;
	volatile int32_t t23 = -2591;

    t23 = (((x101<=x102)-x103)>x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = 1U;
	volatile int8_t x107 = 0;
	int32_t x108 = INT32_MAX;
	volatile int32_t t24 = 241860157;

    t24 = (((x105<=x106)-x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x110 = INT16_MAX;
	volatile int16_t x111 = 390;
	volatile uint16_t x112 = 252U;
	int32_t t25 = 2193540;

    t25 = (((x109<=x110)-x111)>x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x113 = 3U;
	int64_t x114 = 11089030562230LL;
	int8_t x115 = 63;
	uint16_t x116 = UINT16_MAX;
	static volatile int32_t t26 = -2729;

    t26 = (((x113<=x114)-x115)>x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x117 = INT32_MIN;
	static volatile uint8_t x118 = 14U;
	int16_t x120 = INT16_MIN;

    t27 = (((x117<=x118)-x119)>x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x121 = -1;
	int32_t x122 = 19;
	int16_t x123 = INT16_MIN;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t28 = -990399;

    t28 = (((x121<=x122)-x123)>x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x129 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t29 = -14828;

    t29 = (((x129<=x130)-x131)>x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MIN;
	volatile int16_t x134 = INT16_MIN;
	uint16_t x135 = 1U;
	volatile int8_t x136 = 1;
	volatile int32_t t30 = 411526;

    t30 = (((x133<=x134)-x135)>x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x138 = INT8_MAX;
	int32_t x139 = INT32_MAX;
	static volatile int32_t x140 = -1;
	int32_t t31 = 10476;

    t31 = (((x137<=x138)-x139)>x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -1LL;
	uint16_t x142 = 148U;
	int16_t x143 = -1;
	int32_t x144 = INT32_MIN;
	int32_t t32 = -26988;

    t32 = (((x141<=x142)-x143)>x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = 2;
	volatile int32_t x146 = INT32_MAX;
	int32_t t33 = -493564;

    t33 = (((x145<=x146)-x147)>x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x149 = 34731569126950LLU;
	int8_t x150 = INT8_MAX;
	uint16_t x152 = 3562U;
	int32_t t34 = -202214;

    t34 = (((x149<=x150)-x151)>x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x154 = 865691000772535517LLU;
	int8_t x155 = 40;
	volatile int32_t t35 = -5171102;

    t35 = (((x153<=x154)-x155)>x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = 398745U;
	int8_t x159 = -6;
	int16_t x160 = INT16_MIN;

    t36 = (((x157<=x158)-x159)>x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x162 = 7LLU;
	static int8_t x163 = INT8_MIN;
	int32_t t37 = -250391794;

    t37 = (((x161<=x162)-x163)>x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x165 = -1;
	static uint32_t x166 = 2003U;
	int64_t x167 = -10LL;
	int32_t x168 = INT32_MIN;
	volatile int32_t t38 = 44500;

    t38 = (((x165<=x166)-x167)>x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x171 = 433791729U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t39 = -47457;

    t39 = (((x169<=x170)-x171)>x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x174 = INT64_MIN;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = -4;

    t40 = (((x173<=x174)-x175)>x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x178 = -1;
	int64_t x179 = INT64_MAX;
	static int64_t x180 = INT64_MIN;
	int32_t t41 = -7331;

    t41 = (((x177<=x178)-x179)>x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = UINT16_MAX;
	int32_t x182 = -1;
	static uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MIN;

    t42 = (((x181<=x182)-x183)>x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MIN;
	uint64_t x186 = 914606741LLU;
	int64_t x188 = -551706LL;

    t43 = (((x185<=x186)-x187)>x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = -179589895;
	volatile int8_t x190 = -1;
	volatile int8_t x191 = INT8_MAX;
	int8_t x192 = 0;
	static int32_t t44 = 118280;

    t44 = (((x189<=x190)-x191)>x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 23U;
	int64_t x194 = -713336624302331LL;
	volatile uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MAX;
	int32_t t45 = -1781917;

    t45 = (((x193<=x194)-x195)>x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = 8;
	int16_t x198 = -1;
	int16_t x199 = INT16_MIN;
	volatile int32_t x200 = INT32_MIN;

    t46 = (((x197<=x198)-x199)>x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = INT64_MAX;
	volatile int32_t x206 = -1111115;
	volatile uint16_t x207 = UINT16_MAX;
	static volatile uint32_t x208 = 275U;
	static int32_t t47 = -15;

    t47 = (((x205<=x206)-x207)>x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x210 = 105;
	int16_t x211 = -2761;
	int32_t t48 = 119;

    t48 = (((x209<=x210)-x211)>x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x214 = -1;
	static int32_t x215 = -7726751;
	static int16_t x216 = -1;

    t49 = (((x213<=x214)-x215)>x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x218 = 0U;
	int32_t x220 = INT32_MIN;
	volatile int32_t t50 = -193554;

    t50 = (((x217<=x218)-x219)>x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x221 = INT64_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	volatile uint32_t x223 = 8596278U;
	int32_t t51 = 377851;

    t51 = (((x221<=x222)-x223)>x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x226 = 4U;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	volatile int32_t t52 = 867594;

    t52 = (((x225<=x226)-x227)>x228);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x229 = INT8_MIN;
	int32_t x231 = -1269;
	volatile int64_t x232 = 20301983774847341LL;
	static volatile int32_t t53 = -380126;

    t53 = (((x229<=x230)-x231)>x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = INT64_MAX;
	static volatile uint8_t x234 = UINT8_MAX;
	static uint32_t x235 = 23U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t54 = 504505;

    t54 = (((x233<=x234)-x235)>x236);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x237 = UINT16_MAX;
	int32_t x238 = -1;
	int16_t x239 = 92;
	uint8_t x240 = UINT8_MAX;

    t55 = (((x237<=x238)-x239)>x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x242 = INT64_MAX;

    t56 = (((x241<=x242)-x243)>x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x245 = 3860927;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 23527460515547LLU;
	uint16_t x248 = 477U;

    t57 = (((x245<=x246)-x247)>x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = -1LL;
	volatile int16_t x250 = INT16_MIN;
	volatile int32_t x251 = INT32_MAX;
	int32_t x252 = 895425768;

    t58 = (((x249<=x250)-x251)>x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x255 = INT16_MIN;
	uint32_t x256 = 41U;
	volatile int32_t t59 = 28773;

    t59 = (((x253<=x254)-x255)>x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x258 = 6U;
	uint8_t x259 = UINT8_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t60 = 168317940;

    t60 = (((x257<=x258)-x259)>x260);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = 517515813185328LL;
	int32_t t61 = -41700;

    t61 = (((x261<=x262)-x263)>x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x265 = INT32_MAX;
	int32_t x266 = INT32_MIN;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = -240;
	volatile int32_t t62 = 263043884;

    t62 = (((x265<=x266)-x267)>x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x269 = INT8_MIN;
	int16_t x270 = -744;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = 31U;
	volatile int32_t t63 = 0;

    t63 = (((x269<=x270)-x271)>x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MIN;
	int64_t x274 = 880208749LL;
	static uint64_t x275 = 8735849LLU;
	int32_t t64 = 190;

    t64 = (((x273<=x274)-x275)>x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x277 = 1U;
	volatile int8_t x278 = -1;
	static uint16_t x279 = 28114U;
	volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t65 = -316120679;

    t65 = (((x277<=x278)-x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = INT64_MIN;
	static int16_t x282 = -1;
	int32_t x283 = INT32_MAX;
	int32_t t66 = -337;

    t66 = (((x281<=x282)-x283)>x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x285 = INT64_MIN;
	volatile int16_t x286 = 7;
	int8_t x287 = INT8_MIN;
	static int8_t x288 = INT8_MAX;
	int32_t t67 = -426546023;

    t67 = (((x285<=x286)-x287)>x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x290 = INT8_MIN;
	int32_t x291 = 12;
	static uint64_t x292 = 300150688745694536LLU;
	int32_t t68 = -12718;

    t68 = (((x289<=x290)-x291)>x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x293 = 0U;
	int16_t x294 = INT16_MIN;
	static int8_t x295 = INT8_MAX;

    t69 = (((x293<=x294)-x295)>x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x297 = 290942838LLU;
	uint32_t x298 = UINT32_MAX;
	int16_t x300 = 6263;
	static volatile int32_t t70 = -173625;

    t70 = (((x297<=x298)-x299)>x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x301 = 179056437192939LLU;
	uint32_t x302 = UINT32_MAX;
	static int8_t x303 = INT8_MAX;
	static int16_t x304 = -1;
	volatile int32_t t71 = -1781;

    t71 = (((x301<=x302)-x303)>x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x309 = UINT16_MAX;
	int32_t x310 = INT32_MAX;
	uint32_t x312 = 24076557U;
	int32_t t72 = -805;

    t72 = (((x309<=x310)-x311)>x312);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	volatile int8_t x315 = 0;
	int32_t t73 = 19545;

    t73 = (((x313<=x314)-x315)>x316);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x317 = 1204524033LLU;
	uint16_t x318 = UINT16_MAX;
	static volatile uint32_t x319 = 2U;

    t74 = (((x317<=x318)-x319)>x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x322 = UINT64_MAX;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t75 = -2936;

    t75 = (((x321<=x322)-x323)>x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MAX;
	int16_t x328 = -1;
	static volatile int32_t t76 = 551;

    t76 = (((x325<=x326)-x327)>x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x329 = UINT64_MAX;
	volatile uint32_t x331 = UINT32_MAX;
	uint64_t x332 = 13636495246296LLU;
	volatile int32_t t77 = 899415;

    t77 = (((x329<=x330)-x331)>x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x333 = UINT32_MAX;
	uint32_t x334 = UINT32_MAX;
	volatile uint16_t x336 = UINT16_MAX;
	volatile int32_t t78 = -218810721;

    t78 = (((x333<=x334)-x335)>x336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	uint32_t x338 = 12688841U;
	int32_t x339 = -1;
	uint8_t x340 = 22U;
	static volatile int32_t t79 = 38;

    t79 = (((x337<=x338)-x339)>x340);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = -17517LL;
	int16_t x343 = INT16_MAX;
	int64_t x344 = -1LL;
	volatile int32_t t80 = 167447;

    t80 = (((x341<=x342)-x343)>x344);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x345 = 5U;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	int32_t t81 = -8;

    t81 = (((x345<=x346)-x347)>x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x350 = -12;
	static int32_t x352 = -1;
	static volatile int32_t t82 = 1;

    t82 = (((x349<=x350)-x351)>x352);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x361 = INT8_MIN;
	static uint64_t x362 = UINT64_MAX;
	volatile int8_t x364 = -29;
	volatile int32_t t83 = -5143126;

    t83 = (((x361<=x362)-x363)>x364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x366 = -1;
	volatile int16_t x367 = INT16_MAX;
	int32_t t84 = 25;

    t84 = (((x365<=x366)-x367)>x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x369 = -1;
	int32_t x370 = INT32_MIN;
	static int16_t x372 = -1;
	int32_t t85 = 756887;

    t85 = (((x369<=x370)-x371)>x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x373 = 0U;
	volatile uint64_t x375 = 106530989103LLU;
	static int32_t x376 = -1;
	volatile int32_t t86 = 50273;

    t86 = (((x373<=x374)-x375)>x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x377 = -352249013612LL;
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 15677U;
	int64_t x380 = 23LL;

    t87 = (((x377<=x378)-x379)>x380);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 37023144LLU;
	int32_t x382 = 4116;
	int64_t x383 = -893LL;
	static int8_t x384 = -1;
	static volatile int32_t t88 = 4;

    t88 = (((x381<=x382)-x383)>x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = 1;
	uint64_t x387 = 541LLU;
	volatile int32_t t89 = 1;

    t89 = (((x385<=x386)-x387)>x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x389 = 1U;
	volatile int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = 14;
	static int32_t t90 = 180;

    t90 = (((x389<=x390)-x391)>x392);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x394 = UINT8_MAX;
	int64_t x396 = INT64_MAX;
	int32_t t91 = -162685;

    t91 = (((x393<=x394)-x395)>x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x397 = UINT64_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MAX;
	int32_t x400 = -1;
	volatile int32_t t92 = -17;

    t92 = (((x397<=x398)-x399)>x400);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = -335421;
	volatile int8_t x403 = -7;
	volatile int32_t t93 = 83377;

    t93 = (((x401<=x402)-x403)>x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x405 = 421528084176039360LL;
	int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	volatile int8_t x408 = INT8_MIN;
	int32_t t94 = 1650403;

    t94 = (((x405<=x406)-x407)>x408);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x409 = 328400U;
	uint64_t x410 = 14384912LLU;
	static volatile int64_t x411 = -1LL;
	static int64_t x412 = INT64_MIN;
	int32_t t95 = 742187072;

    t95 = (((x409<=x410)-x411)>x412);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = INT16_MIN;
	static uint64_t x415 = 58LLU;
	int32_t x416 = 2;
	volatile int32_t t96 = -29919235;

    t96 = (((x413<=x414)-x415)>x416);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x417 = -1;
	int8_t x418 = 1;
	uint32_t x419 = 3U;
	uint64_t x420 = 102811401563LLU;
	int32_t t97 = 4902;

    t97 = (((x417<=x418)-x419)>x420);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x421 = -1;
	static int8_t x423 = -23;
	int64_t x424 = 1831405LL;
	static int32_t t98 = -109;

    t98 = (((x421<=x422)-x423)>x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x425 = -1056715675138722987LL;
	volatile int8_t x427 = INT8_MAX;
	static int64_t x428 = 108618311818428LL;
	volatile int32_t t99 = 205;

    t99 = (((x425<=x426)-x427)>x428);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = 1782323LL;
	static uint32_t x430 = 2841592U;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;

    t100 = (((x429<=x430)-x431)>x432);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x433 = INT32_MAX;
	uint64_t x436 = 32313LLU;
	volatile int32_t t101 = -480632196;

    t101 = (((x433<=x434)-x435)>x436);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x438 = UINT32_MAX;
	static int64_t x440 = INT64_MAX;
	volatile int32_t t102 = 717557173;

    t102 = (((x437<=x438)-x439)>x440);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x441 = -1LL;
	uint16_t x443 = UINT16_MAX;
	int32_t x444 = 12697;
	int32_t t103 = 2;

    t103 = (((x441<=x442)-x443)>x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x445 = -1LL;
	int32_t x446 = -1;
	volatile int8_t x447 = -1;
	int64_t x448 = -630501749207478LL;
	int32_t t104 = 26096610;

    t104 = (((x445<=x446)-x447)>x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x449 = 7440397917324550LL;
	static volatile int16_t x451 = 180;
	int8_t x452 = 0;
	int32_t t105 = -218;

    t105 = (((x449<=x450)-x451)>x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x453 = -1;
	int32_t t106 = 10905;

    t106 = (((x453<=x454)-x455)>x456);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x457 = -2372452;
	int32_t x458 = INT32_MIN;
	uint8_t x459 = UINT8_MAX;
	volatile int32_t x460 = -1;
	volatile int32_t t107 = 14020908;

    t107 = (((x457<=x458)-x459)>x460);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x461 = -1;
	int16_t x462 = -1;
	volatile int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MIN;
	volatile int32_t t108 = -138;

    t108 = (((x461<=x462)-x463)>x464);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = -1;
	static int32_t x466 = INT32_MIN;
	int16_t x467 = 1;
	volatile int32_t x468 = INT32_MIN;
	int32_t t109 = -1;

    t109 = (((x465<=x466)-x467)>x468);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = -7;
	uint16_t x470 = 500U;
	volatile int32_t x471 = 2871340;
	int64_t x472 = INT64_MIN;
	int32_t t110 = 1383107;

    t110 = (((x469<=x470)-x471)>x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x475 = -8393472200522606LL;
	uint32_t x476 = UINT32_MAX;
	int32_t t111 = -269;

    t111 = (((x473<=x474)-x475)>x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x477 = INT32_MIN;
	int16_t x478 = -11;
	uint64_t x479 = 487153078LLU;
	volatile int32_t t112 = 1;

    t112 = (((x477<=x478)-x479)>x480);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x481 = -1LL;
	uint16_t x482 = UINT16_MAX;
	static volatile int8_t x483 = INT8_MAX;
	int32_t x484 = INT32_MAX;

    t113 = (((x481<=x482)-x483)>x484);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x485 = 3074LLU;
	int8_t x486 = INT8_MIN;
	uint8_t x487 = 88U;
	int32_t t114 = -392522;

    t114 = (((x485<=x486)-x487)>x488);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x489 = INT32_MIN;
	volatile int64_t x490 = INT64_MIN;
	static int8_t x491 = -20;
	static uint16_t x492 = UINT16_MAX;
	static int32_t t115 = 27;

    t115 = (((x489<=x490)-x491)>x492);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x494 = INT16_MAX;
	uint32_t x495 = UINT32_MAX;
	uint64_t x496 = 117583602LLU;
	int32_t t116 = 7;

    t116 = (((x493<=x494)-x495)>x496);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x499 = 217;
	volatile int64_t x500 = -373496121LL;
	volatile int32_t t117 = -12;

    t117 = (((x497<=x498)-x499)>x500);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x501 = -4070LL;
	static int32_t x502 = -1;
	uint64_t x503 = 433142800630554252LLU;
	int32_t t118 = 7;

    t118 = (((x501<=x502)-x503)>x504);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MAX;
	volatile uint8_t x508 = UINT8_MAX;
	volatile int32_t t119 = -302651891;

    t119 = (((x505<=x506)-x507)>x508);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = INT32_MIN;
	int8_t x511 = 0;
	int64_t x512 = INT64_MIN;
	int32_t t120 = -20968;

    t120 = (((x509<=x510)-x511)>x512);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x514 = INT64_MAX;
	volatile int8_t x515 = -1;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t121 = 2008928;

    t121 = (((x513<=x514)-x515)>x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x517 = UINT32_MAX;
	int16_t x518 = INT16_MAX;
	static int8_t x519 = 9;
	int32_t x520 = -1;

    t122 = (((x517<=x518)-x519)>x520);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x528 = -132;

    t123 = (((x525<=x526)-x527)>x528);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x530 = -1668;
	uint64_t x531 = 407870181829LLU;
	static int64_t x532 = 1892232625LL;

    t124 = (((x529<=x530)-x531)>x532);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x537 = UINT32_MAX;
	int8_t x538 = -29;
	uint8_t x539 = UINT8_MAX;
	volatile int32_t x540 = -1;

    t125 = (((x537<=x538)-x539)>x540);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x545 = 5904289U;
	volatile uint64_t x546 = 63LLU;
	int8_t x547 = -1;
	uint32_t x548 = 106987941U;
	volatile int32_t t126 = -429806521;

    t126 = (((x545<=x546)-x547)>x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x549 = UINT8_MAX;
	uint64_t x550 = UINT64_MAX;
	volatile int8_t x551 = INT8_MIN;
	static uint16_t x552 = 15U;
	int32_t t127 = -19;

    t127 = (((x549<=x550)-x551)>x552);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x554 = -9;
	uint8_t x555 = 0U;
	uint16_t x556 = 26U;

    t128 = (((x553<=x554)-x555)>x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x557 = -1;
	static int32_t x558 = INT32_MIN;
	uint32_t x560 = UINT32_MAX;
	int32_t t129 = 258909;

    t129 = (((x557<=x558)-x559)>x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x567 = -1;
	int16_t x568 = 235;
	volatile int32_t t130 = 8639;

    t130 = (((x565<=x566)-x567)>x568);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x571 = INT8_MIN;
	uint16_t x572 = 1U;

    t131 = (((x569<=x570)-x571)>x572);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x577 = 63758614156LLU;
	uint16_t x578 = 11626U;
	uint16_t x579 = UINT16_MAX;
	static uint16_t x580 = 123U;
	volatile int32_t t132 = 3;

    t132 = (((x577<=x578)-x579)>x580);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x581 = INT32_MIN;
	int16_t x582 = INT16_MIN;
	static int64_t x583 = -1LL;
	volatile int64_t x584 = -1LL;
	int32_t t133 = 77218;

    t133 = (((x581<=x582)-x583)>x584);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x585 = 0U;
	int8_t x586 = INT8_MAX;
	volatile int32_t t134 = 13798;

    t134 = (((x585<=x586)-x587)>x588);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x589 = INT64_MAX;
	volatile int32_t x590 = INT32_MAX;
	volatile int16_t x591 = INT16_MAX;
	int32_t t135 = 0;

    t135 = (((x589<=x590)-x591)>x592);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x594 = INT32_MIN;
	uint32_t x595 = UINT32_MAX;
	int32_t t136 = -7272863;

    t136 = (((x593<=x594)-x595)>x596);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x597 = INT16_MIN;
	volatile int8_t x598 = INT8_MIN;
	volatile uint8_t x600 = 72U;
	volatile int32_t t137 = -529529492;

    t137 = (((x597<=x598)-x599)>x600);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MIN;
	uint32_t x603 = 1023062403U;
	uint32_t x604 = 267983378U;

    t138 = (((x601<=x602)-x603)>x604);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x605 = INT16_MIN;
	uint64_t x606 = UINT64_MAX;
	volatile int32_t x607 = -587660;
	static int16_t x608 = INT16_MAX;
	int32_t t139 = 615101;

    t139 = (((x605<=x606)-x607)>x608);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x609 = 4200597777LLU;
	uint16_t x610 = 1987U;
	uint8_t x611 = 2U;
	volatile int32_t x612 = INT32_MAX;
	static volatile int32_t t140 = -39;

    t140 = (((x609<=x610)-x611)>x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x613 = UINT16_MAX;
	volatile uint16_t x615 = UINT16_MAX;
	uint32_t x616 = 35185168U;
	volatile int32_t t141 = -364;

    t141 = (((x613<=x614)-x615)>x616);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x617 = 6U;
	volatile int32_t x618 = -1;
	volatile int8_t x620 = INT8_MIN;
	static int32_t t142 = 41310578;

    t142 = (((x617<=x618)-x619)>x620);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x622 = 3015031791841343742LLU;
	static uint16_t x623 = 1563U;
	uint64_t x624 = 236220266090LLU;
	volatile int32_t t143 = 22385409;

    t143 = (((x621<=x622)-x623)>x624);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;
	int64_t x628 = INT64_MAX;
	int32_t t144 = 939591056;

    t144 = (((x625<=x626)-x627)>x628);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x629 = INT16_MAX;
	static volatile uint16_t x630 = 3U;
	volatile int16_t x631 = INT16_MIN;
	int8_t x632 = -1;
	int32_t t145 = 228;

    t145 = (((x629<=x630)-x631)>x632);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x633 = INT64_MIN;
	volatile int64_t x636 = -1LL;
	volatile int32_t t146 = -248263165;

    t146 = (((x633<=x634)-x635)>x636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x637 = UINT16_MAX;
	int16_t x638 = -8;
	int16_t x639 = -1;
	volatile int32_t t147 = 224366;

    t147 = (((x637<=x638)-x639)>x640);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x641 = 45428386185072151LLU;
	int32_t x642 = INT32_MIN;
	static int32_t x643 = -1;
	static uint8_t x644 = 10U;
	volatile int32_t t148 = 95;

    t148 = (((x641<=x642)-x643)>x644);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x645 = UINT8_MAX;
	uint8_t x647 = 0U;
	int32_t x648 = -1672;
	int32_t t149 = 459547968;

    t149 = (((x645<=x646)-x647)>x648);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x649 = INT64_MAX;
	volatile uint16_t x650 = 12U;
	static uint8_t x652 = 48U;

    t150 = (((x649<=x650)-x651)>x652);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x653 = -1;
	int32_t x654 = INT32_MIN;
	volatile int8_t x655 = 0;
	int32_t t151 = 342351722;

    t151 = (((x653<=x654)-x655)>x656);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x661 = INT64_MIN;
	int8_t x662 = -1;
	int16_t x663 = -1;
	int32_t x664 = -1;
	volatile int32_t t152 = 2;

    t152 = (((x661<=x662)-x663)>x664);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x669 = 14774LLU;
	uint64_t x670 = 4120274817302052LLU;
	volatile int64_t x671 = INT64_MAX;
	uint8_t x672 = 5U;
	volatile int32_t t153 = 4;

    t153 = (((x669<=x670)-x671)>x672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x673 = 45;
	int32_t x674 = INT32_MIN;
	static volatile int16_t x675 = -1;
	volatile int32_t t154 = 39;

    t154 = (((x673<=x674)-x675)>x676);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x686 = -167064374;
	volatile int8_t x687 = INT8_MIN;
	volatile int64_t x688 = INT64_MIN;
	static int32_t t155 = 972677814;

    t155 = (((x685<=x686)-x687)>x688);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x689 = INT16_MAX;
	static uint32_t x690 = UINT32_MAX;
	int32_t t156 = 5465;

    t156 = (((x689<=x690)-x691)>x692);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x693 = INT64_MIN;
	static int8_t x694 = INT8_MIN;
	static uint16_t x696 = 1186U;

    t157 = (((x693<=x694)-x695)>x696);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x698 = INT32_MIN;
	int8_t x699 = INT8_MIN;
	uint8_t x700 = UINT8_MAX;
	volatile int32_t t158 = 105787791;

    t158 = (((x697<=x698)-x699)>x700);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x701 = UINT16_MAX;
	int32_t x702 = INT32_MAX;
	static int16_t x703 = -1;
	uint8_t x704 = 1U;
	volatile int32_t t159 = -844120;

    t159 = (((x701<=x702)-x703)>x704);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x706 = 82U;

    t160 = (((x705<=x706)-x707)>x708);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x709 = -1;
	int64_t x710 = INT64_MAX;
	uint16_t x711 = 457U;
	int64_t x712 = INT64_MAX;
	int32_t t161 = 42;

    t161 = (((x709<=x710)-x711)>x712);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x715 = -1;
	int16_t x716 = INT16_MIN;
	int32_t t162 = -53612721;

    t162 = (((x713<=x714)-x715)>x716);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x717 = 80025496423002696LLU;
	volatile int16_t x718 = INT16_MIN;
	static int16_t x719 = INT16_MAX;
	int32_t x720 = INT32_MAX;
	int32_t t163 = -1272966;

    t163 = (((x717<=x718)-x719)>x720);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x721 = 10081357;
	int64_t x722 = 124LL;
	int32_t x723 = -7;
	uint32_t x724 = 6549U;
	volatile int32_t t164 = 213599858;

    t164 = (((x721<=x722)-x723)>x724);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x725 = INT64_MIN;
	volatile int64_t x726 = -1LL;
	int64_t x728 = INT64_MAX;
	int32_t t165 = -3041420;

    t165 = (((x725<=x726)-x727)>x728);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x729 = 270;
	int8_t x731 = INT8_MIN;
	volatile uint64_t x732 = UINT64_MAX;
	int32_t t166 = 5677;

    t166 = (((x729<=x730)-x731)>x732);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x733 = INT32_MIN;
	uint16_t x734 = 2529U;
	static uint64_t x735 = UINT64_MAX;
	int8_t x736 = -15;
	volatile int32_t t167 = -362675189;

    t167 = (((x733<=x734)-x735)>x736);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x737 = UINT64_MAX;
	static int8_t x738 = -60;
	int32_t t168 = 994;

    t168 = (((x737<=x738)-x739)>x740);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x741 = 3618U;
	int8_t x742 = -1;
	int16_t x743 = -373;
	volatile int16_t x744 = 259;
	volatile int32_t t169 = -2002864;

    t169 = (((x741<=x742)-x743)>x744);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x745 = 3U;
	uint8_t x746 = 2U;
	int8_t x747 = -1;
	static int8_t x748 = INT8_MAX;
	int32_t t170 = 237640;

    t170 = (((x745<=x746)-x747)>x748);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x755 = 231LLU;
	volatile int32_t x756 = INT32_MIN;
	int32_t t171 = -612649454;

    t171 = (((x753<=x754)-x755)>x756);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x757 = INT64_MAX;
	int8_t x758 = -1;
	int64_t x759 = 999142LL;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t172 = -8195118;

    t172 = (((x757<=x758)-x759)>x760);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x762 = INT64_MAX;
	int16_t x763 = INT16_MAX;
	volatile int32_t t173 = 584;

    t173 = (((x761<=x762)-x763)>x764);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x766 = 0;
	static int8_t x768 = -29;
	int32_t t174 = 55492066;

    t174 = (((x765<=x766)-x767)>x768);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x769 = 3U;
	static uint8_t x770 = UINT8_MAX;
	int16_t x772 = 188;
	int32_t t175 = -566156;

    t175 = (((x769<=x770)-x771)>x772);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x773 = -1;
	int8_t x774 = INT8_MAX;
	int64_t x775 = INT64_MAX;
	static volatile int8_t x776 = INT8_MIN;
	int32_t t176 = 7;

    t176 = (((x773<=x774)-x775)>x776);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x777 = -298352870225LL;
	int32_t x778 = INT32_MIN;
	int64_t x779 = -1LL;
	int64_t x780 = -70480161425LL;
	int32_t t177 = -1562103;

    t177 = (((x777<=x778)-x779)>x780);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x782 = INT8_MAX;
	uint32_t x783 = 32868U;
	volatile int32_t t178 = -708;

    t178 = (((x781<=x782)-x783)>x784);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x785 = INT64_MAX;
	static int64_t x786 = INT64_MAX;
	int64_t x787 = -1LL;
	static int32_t t179 = -4057934;

    t179 = (((x785<=x786)-x787)>x788);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	int16_t x790 = INT16_MAX;
	int8_t x791 = -1;

    t180 = (((x789<=x790)-x791)>x792);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x793 = INT8_MIN;
	static int8_t x794 = INT8_MIN;
	static uint64_t x795 = UINT64_MAX;
	int32_t t181 = -19;

    t181 = (((x793<=x794)-x795)>x796);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x797 = -1LL;
	static int16_t x798 = -291;
	volatile int64_t x799 = INT64_MAX;
	int32_t t182 = -41;

    t182 = (((x797<=x798)-x799)>x800);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x801 = INT32_MAX;
	static int8_t x803 = INT8_MIN;
	volatile int32_t t183 = 3063717;

    t183 = (((x801<=x802)-x803)>x804);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x806 = 3;
	static uint32_t x807 = UINT32_MAX;
	volatile int16_t x808 = INT16_MIN;
	volatile int32_t t184 = -29663201;

    t184 = (((x805<=x806)-x807)>x808);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	uint8_t x810 = 10U;
	int16_t x811 = INT16_MIN;
	int32_t t185 = -2;

    t185 = (((x809<=x810)-x811)>x812);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x813 = -1;
	volatile int64_t x814 = -1LL;
	static volatile int16_t x815 = 225;
	uint8_t x816 = 106U;
	int32_t t186 = 34319147;

    t186 = (((x813<=x814)-x815)>x816);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x817 = 5LL;
	int64_t x818 = -2809655LL;
	int16_t x819 = -1;
	int32_t x820 = -13078;

    t187 = (((x817<=x818)-x819)>x820);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x821 = INT32_MIN;
	uint32_t x823 = 72379460U;
	int16_t x824 = INT16_MIN;
	int32_t t188 = 4254397;

    t188 = (((x821<=x822)-x823)>x824);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x829 = 7;
	volatile int8_t x830 = -49;
	static int8_t x832 = INT8_MIN;
	int32_t t189 = -1;

    t189 = (((x829<=x830)-x831)>x832);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x833 = UINT32_MAX;
	int16_t x834 = -1;
	volatile uint8_t x835 = 16U;
	int64_t x836 = INT64_MIN;
	volatile int32_t t190 = 203109;

    t190 = (((x833<=x834)-x835)>x836);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x837 = INT16_MIN;
	static int8_t x838 = INT8_MIN;
	static uint8_t x839 = 3U;
	uint8_t x840 = UINT8_MAX;
	int32_t t191 = 273028937;

    t191 = (((x837<=x838)-x839)>x840);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x842 = 14;
	int16_t x843 = -1;
	int8_t x844 = -1;

    t192 = (((x841<=x842)-x843)>x844);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x845 = INT8_MIN;
	volatile uint8_t x846 = UINT8_MAX;
	static uint32_t x847 = UINT32_MAX;
	int64_t x848 = -3LL;
	int32_t t193 = 3758506;

    t193 = (((x845<=x846)-x847)>x848);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x849 = 1;
	static int16_t x850 = INT16_MIN;
	int32_t x851 = 5056;
	volatile int32_t x852 = INT32_MIN;
	int32_t t194 = -26;

    t194 = (((x849<=x850)-x851)>x852);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x853 = -47513877LL;
	int8_t x854 = INT8_MIN;
	static int64_t x855 = -378720116LL;

    t195 = (((x853<=x854)-x855)>x856);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x857 = INT16_MIN;
	uint8_t x858 = 14U;
	int64_t x860 = INT64_MIN;
	static volatile int32_t t196 = -1;

    t196 = (((x857<=x858)-x859)>x860);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x861 = 46;
	int16_t x862 = 7;
	int16_t x863 = -1;
	int16_t x864 = INT16_MIN;
	volatile int32_t t197 = 0;

    t197 = (((x861<=x862)-x863)>x864);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x865 = INT8_MIN;
	static int8_t x867 = 0;
	int8_t x868 = -1;
	volatile int32_t t198 = -215;

    t198 = (((x865<=x866)-x867)>x868);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x869 = 10746U;
	static int8_t x870 = -6;
	int8_t x871 = INT8_MIN;
	static volatile int32_t t199 = 118681;

    t199 = (((x869<=x870)-x871)>x872);

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

