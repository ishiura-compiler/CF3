
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

int32_t x5 = INT32_MIN;
volatile uint8_t x6 = 3U;
int16_t x7 = -1;
uint64_t x15 = UINT64_MAX;
uint64_t x22 = 32141759338LLU;
int8_t x26 = -1;
uint8_t x29 = UINT8_MAX;
uint16_t x33 = UINT16_MAX;
int16_t x34 = INT16_MAX;
uint8_t x42 = 13U;
static volatile int16_t x44 = 46;
int8_t x46 = INT8_MAX;
static volatile int32_t t11 = 66813632;
uint32_t x54 = UINT32_MAX;
int32_t t15 = 112;
int8_t x72 = 0;
int32_t t18 = 1600;
static int64_t x83 = INT64_MAX;
static int32_t t19 = 13997;
int64_t x86 = -1LL;
int64_t x91 = -1LL;
static int16_t x103 = -7264;
uint32_t x105 = 414251086U;
int64_t x116 = -713494988440LL;
int16_t x118 = -754;
volatile int16_t x119 = INT16_MAX;
static volatile int16_t x120 = INT16_MIN;
static volatile uint16_t x122 = 28417U;
volatile int8_t x124 = -42;
uint16_t x126 = UINT16_MAX;
int64_t x127 = 87188731549263LL;
uint64_t x145 = 475345417LLU;
volatile int8_t x147 = 12;
static int32_t t33 = -189919;
int8_t x176 = INT8_MAX;
int64_t x177 = -1555545LL;
int8_t x185 = INT8_MAX;
volatile int32_t t42 = 472;
int64_t x193 = INT64_MAX;
static volatile int32_t x195 = INT32_MIN;
volatile int32_t t45 = -3;
int16_t x215 = -548;
uint32_t x219 = 473U;
uint64_t x227 = 551049LLU;
int32_t t51 = 11101;
int64_t x229 = INT64_MIN;
volatile uint8_t x247 = 13U;
static uint8_t x250 = UINT8_MAX;
int8_t x254 = INT8_MIN;
static int16_t x267 = INT16_MIN;
volatile int16_t x274 = INT16_MIN;
uint64_t x282 = UINT64_MAX;
uint8_t x288 = UINT8_MAX;
volatile uint16_t x291 = 19591U;
int64_t x294 = INT64_MAX;
volatile int32_t t66 = -1688665;
volatile int32_t t67 = 302;
volatile int32_t x312 = INT32_MAX;
int16_t x314 = 0;
uint16_t x316 = UINT16_MAX;
int64_t x320 = -1LL;
uint64_t x321 = 0LLU;
int64_t x328 = -373LL;
uint16_t x334 = 2238U;
int16_t x336 = 14451;
int32_t t73 = -3;
volatile int8_t x349 = INT8_MAX;
int8_t x353 = INT8_MAX;
int64_t x354 = INT64_MIN;
int8_t x356 = INT8_MIN;
volatile int32_t t78 = 22;
int8_t x368 = 1;
int8_t x371 = -1;
static uint32_t x373 = 696578U;
int8_t x374 = 2;
static int8_t x376 = INT8_MIN;
static volatile int32_t t84 = -260516;
int16_t x385 = INT16_MIN;
uint64_t x403 = 254LLU;
int16_t x410 = INT16_MIN;
int8_t x411 = -1;
static volatile uint32_t x412 = UINT32_MAX;
static volatile int16_t x418 = INT16_MIN;
uint8_t x421 = UINT8_MAX;
static volatile int64_t x423 = 6806059LL;
int64_t x424 = -1667304561457LL;
int16_t x427 = -3;
int32_t t96 = -2760;
int32_t x429 = INT32_MAX;
uint32_t x433 = 519129U;
int8_t x445 = -18;
uint8_t x446 = 7U;
int16_t x453 = INT16_MAX;
int32_t x462 = 2957517;
uint16_t x464 = 32654U;
uint8_t x470 = 8U;
volatile uint32_t x471 = 25030U;
uint32_t x472 = 0U;
uint16_t x477 = 1U;
int32_t t108 = 482785;
static uint32_t x483 = UINT32_MAX;
int8_t x487 = 31;
int64_t x488 = INT64_MIN;
int32_t t110 = 229236;
static uint32_t x494 = 4824U;
int32_t t111 = 45255218;
uint8_t x497 = UINT8_MAX;
int8_t x504 = 1;
static int16_t x506 = 12720;
int8_t x508 = -1;
volatile int8_t x509 = -1;
int16_t x511 = -1;
int16_t x521 = INT16_MAX;
int16_t x528 = INT16_MIN;
int32_t t120 = 59106970;
volatile int32_t t122 = 5064523;
uint16_t x545 = UINT16_MAX;
volatile uint64_t x548 = 696307101LLU;
volatile int16_t x553 = 9759;
volatile int16_t x557 = 290;
int16_t x563 = 10601;
uint64_t x570 = UINT64_MAX;
volatile int16_t x572 = 1637;
static uint32_t x574 = 39520U;
int64_t x576 = INT64_MAX;
volatile int32_t t130 = -288;
static int64_t x582 = -50729676525LL;
int32_t x589 = INT32_MAX;
static int8_t x590 = 1;
int32_t x591 = INT32_MAX;
volatile int32_t t134 = -97622881;
int8_t x599 = 0;
int64_t x601 = 771LL;
static volatile int32_t t136 = 622258;
static int16_t x615 = INT16_MIN;
static int16_t x621 = INT16_MAX;
int32_t t139 = -338;
int32_t x626 = -234;
uint16_t x628 = 1576U;
int32_t t141 = 295989;
uint8_t x643 = UINT8_MAX;
static volatile int32_t t144 = -4042297;
volatile int32_t t145 = 29619;
volatile int16_t x650 = INT16_MAX;
int32_t x657 = -30;
static int8_t x664 = 22;
int32_t x666 = -1;
int16_t x667 = INT16_MIN;
uint64_t x677 = 16856LLU;
int32_t t153 = -5;
int64_t x689 = 668LL;
volatile int32_t t154 = 122471;
uint64_t x697 = 118170LLU;
int32_t x699 = INT32_MAX;
int16_t x701 = INT16_MIN;
int16_t x704 = 39;
uint32_t x705 = 101555U;
int32_t x713 = INT32_MIN;
volatile int32_t t159 = -60180854;
int16_t x724 = INT16_MIN;
int8_t x725 = -1;
uint64_t x730 = 82300483720466LLU;
uint16_t x737 = 7U;
int64_t x744 = INT64_MIN;
volatile int32_t t164 = 2881;
int8_t x754 = -34;
static int32_t x756 = -18;
uint8_t x761 = 19U;
uint64_t x762 = UINT64_MAX;
int64_t x764 = INT64_MIN;
uint16_t x772 = 62U;
uint32_t x788 = UINT32_MAX;
volatile uint64_t x808 = 2393755LLU;
int32_t x816 = 4050;
uint32_t x824 = 1999872808U;
static volatile int32_t t182 = -334290601;
int64_t x830 = -1LL;
int8_t x836 = -1;
int8_t x846 = 35;
int32_t t187 = -1992514;
int64_t x857 = -1LL;
int64_t x859 = -1LL;
volatile int32_t t191 = -39;
volatile int8_t x872 = INT8_MIN;
uint32_t x873 = 74662U;
volatile int32_t x874 = INT32_MIN;
volatile uint32_t x876 = 1279U;
int64_t x878 = -1LL;
static int16_t x881 = -1;
uint64_t x882 = 41LLU;
static int32_t x885 = 13052;
static int8_t x893 = INT8_MIN;
uint8_t x907 = UINT8_MAX;
int16_t x908 = -1;


void f0(void) {
    	int64_t x8 = -143413LL;
	int32_t t0 = -3618;

    t0 = (x5<=(x6>(x7+x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = INT8_MIN;
	volatile int8_t x10 = INT8_MIN;
	int32_t x11 = 836178265;
	int32_t x12 = -2070328;
	int32_t t1 = -2;

    t1 = (x9<=(x10>(x11+x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 1;
	uint64_t x14 = 37653LLU;
	int8_t x16 = -4;
	static volatile int32_t t2 = -36501481;

    t2 = (x13<=(x14>(x15+x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 4U;
	int32_t x18 = -13;
	volatile int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	int32_t t3 = 4869;

    t3 = (x17<=(x18>(x19+x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = 9;
	static int16_t x23 = 3;
	volatile int16_t x24 = INT16_MIN;
	static volatile int32_t t4 = -38679426;

    t4 = (x21<=(x22>(x23+x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = UINT8_MAX;
	uint64_t x27 = UINT64_MAX;
	static int32_t x28 = INT32_MAX;
	int32_t t5 = -722;

    t5 = (x25<=(x26>(x27+x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = INT64_MIN;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = -42287;
	volatile int32_t t6 = 151430;

    t6 = (x29<=(x30>(x31+x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x35 = UINT8_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t7 = -1548;

    t7 = (x33<=(x34>(x35+x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 56U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	uint32_t x40 = 667772798U;
	volatile int32_t t8 = -712;

    t8 = (x37<=(x38>(x39+x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = 1U;
	static int16_t x43 = 801;
	static int32_t t9 = 797226728;

    t9 = (x41<=(x42>(x43+x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = 10;
	static volatile int16_t x47 = INT16_MAX;
	volatile uint16_t x48 = 284U;
	volatile int32_t t10 = -6;

    t10 = (x45<=(x46>(x47+x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -25;
	uint16_t x50 = 1U;
	uint8_t x51 = UINT8_MAX;
	uint16_t x52 = UINT16_MAX;

    t11 = (x49<=(x50>(x51+x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MAX;
	int32_t t12 = 2;

    t12 = (x53<=(x54>(x55+x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 29U;
	static int64_t x58 = INT64_MIN;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -3837;

    t13 = (x57<=(x58>(x59+x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MAX;
	int8_t x62 = INT8_MAX;
	int32_t x63 = -702989607;
	int16_t x64 = -1;
	int32_t t14 = -23542990;

    t14 = (x61<=(x62>(x63+x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 212454984964LLU;
	static uint8_t x66 = 0U;
	int8_t x67 = INT8_MIN;
	int16_t x68 = -15931;

    t15 = (x65<=(x66>(x67+x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -12878320595346661LL;
	static uint32_t x70 = UINT32_MAX;
	uint8_t x71 = 20U;
	int32_t t16 = -7;

    t16 = (x69<=(x70>(x71+x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MAX;
	uint32_t x74 = 9U;
	int64_t x75 = -74734923965460322LL;
	int16_t x76 = -1;
	int32_t t17 = 225920;

    t17 = (x73<=(x74>(x75+x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -377;
	uint64_t x78 = 136LLU;
	uint64_t x79 = UINT64_MAX;
	static int16_t x80 = INT16_MIN;

    t18 = (x77<=(x78>(x79+x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x81 = 6U;
	volatile int32_t x82 = INT32_MIN;
	int64_t x84 = -1LL;

    t19 = (x81<=(x82>(x83+x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x85 = UINT64_MAX;
	volatile int8_t x87 = 0;
	int16_t x88 = -1;
	int32_t t20 = -6;

    t20 = (x85<=(x86>(x87+x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	int64_t x90 = -10684LL;
	int8_t x92 = INT8_MIN;
	volatile int32_t t21 = -7289;

    t21 = (x89<=(x90>(x91+x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x97 = INT32_MIN;
	static int32_t x98 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MAX;
	int32_t t22 = -97;

    t22 = (x97<=(x98>(x99+x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -1;
	volatile uint8_t x102 = 34U;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t23 = 186305337;

    t23 = (x101<=(x102>(x103+x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x106 = INT64_MAX;
	uint32_t x107 = UINT32_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t24 = 190498327;

    t24 = (x105<=(x106>(x107+x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	static uint16_t x111 = UINT16_MAX;
	volatile uint32_t x112 = UINT32_MAX;
	int32_t t25 = -43;

    t25 = (x109<=(x110>(x111+x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x113 = -3991254;
	int16_t x114 = INT16_MAX;
	volatile uint32_t x115 = 7577U;
	int32_t t26 = 0;

    t26 = (x113<=(x114>(x115+x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = INT16_MAX;
	int32_t t27 = 115;

    t27 = (x117<=(x118>(x119+x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = -18201921502813LL;
	int16_t x123 = 11740;
	volatile int32_t t28 = 360960;

    t28 = (x121<=(x122>(x123+x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t29 = 6793727;

    t29 = (x125<=(x126>(x127+x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MAX;
	static volatile int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	int8_t x132 = -1;
	int32_t t30 = -4;

    t30 = (x129<=(x130>(x131+x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x133 = -55;
	static volatile uint32_t x134 = 82U;
	int8_t x135 = -17;
	uint32_t x136 = 128882U;
	int32_t t31 = 10;

    t31 = (x133<=(x134>(x135+x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x141 = -1;
	static uint32_t x142 = 241885885U;
	static int32_t x143 = -344037;
	int64_t x144 = -98091LL;
	volatile int32_t t32 = 1887;

    t32 = (x141<=(x142>(x143+x144)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x146 = INT32_MIN;
	volatile uint64_t x148 = UINT64_MAX;

    t33 = (x145<=(x146>(x147+x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = 11U;
	int16_t x150 = INT16_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile int16_t x152 = -1;
	int32_t t34 = 843;

    t34 = (x149<=(x150>(x151+x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = 118157523LL;
	static int64_t x154 = -8000817946LL;
	int16_t x155 = 84;
	static int8_t x156 = -10;
	int32_t t35 = -75072429;

    t35 = (x153<=(x154>(x155+x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x157 = UINT16_MAX;
	static int8_t x158 = INT8_MIN;
	int64_t x159 = -40932520131117950LL;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t36 = 0;

    t36 = (x157<=(x158>(x159+x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 50U;
	uint16_t x163 = UINT16_MAX;
	static int8_t x164 = INT8_MIN;
	int32_t t37 = 1;

    t37 = (x161<=(x162>(x163+x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = 2;
	int16_t x174 = INT16_MAX;
	int64_t x175 = -61425266168806LL;
	volatile int32_t t38 = 1;

    t38 = (x173<=(x174>(x175+x176)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x178 = INT8_MAX;
	int8_t x179 = INT8_MIN;
	volatile int16_t x180 = -1;
	volatile int32_t t39 = 23168722;

    t39 = (x177<=(x178>(x179+x180)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x181 = 19LLU;
	uint32_t x182 = 3U;
	int32_t x183 = INT32_MIN;
	int64_t x184 = 2358578838LL;
	volatile int32_t t40 = -47;

    t40 = (x181<=(x182>(x183+x184)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	static uint32_t x188 = 15U;
	int32_t t41 = 881190;

    t41 = (x185<=(x186>(x187+x188)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	uint64_t x190 = 936345923LLU;
	int8_t x191 = INT8_MIN;
	int16_t x192 = 883;

    t42 = (x189<=(x190>(x191+x192)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x194 = INT32_MAX;
	uint16_t x196 = 2U;
	volatile int32_t t43 = 13709;

    t43 = (x193<=(x194>(x195+x196)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x197 = INT32_MAX;
	uint32_t x198 = UINT32_MAX;
	int32_t x199 = -1;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t44 = -9247280;

    t44 = (x197<=(x198>(x199+x200)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x201 = 1U;
	volatile int16_t x202 = 0;
	int8_t x203 = INT8_MAX;
	uint64_t x204 = 7620919925297756LLU;

    t45 = (x201<=(x202>(x203+x204)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x205 = 1677U;
	static int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = -1625;
	int32_t t46 = -1266656;

    t46 = (x205<=(x206>(x207+x208)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x209 = -5;
	int16_t x210 = INT16_MIN;
	int64_t x211 = 1LL;
	int64_t x212 = -1LL;
	volatile int32_t t47 = -117842477;

    t47 = (x209<=(x210>(x211+x212)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x213 = -1;
	int16_t x214 = 78;
	static int16_t x216 = 77;
	static volatile int32_t t48 = 2;

    t48 = (x213<=(x214>(x215+x216)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 249U;
	int32_t x220 = -7092361;
	volatile int32_t t49 = -2;

    t49 = (x217<=(x218>(x219+x220)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x221 = UINT32_MAX;
	uint64_t x222 = 3473507389686292158LLU;
	int8_t x223 = -17;
	int64_t x224 = -1LL;
	volatile int32_t t50 = 4610;

    t50 = (x221<=(x222>(x223+x224)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x225 = -1;
	int16_t x226 = INT16_MIN;
	static volatile uint64_t x228 = 23584LLU;

    t51 = (x225<=(x226>(x227+x228)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x230 = UINT16_MAX;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t52 = -94704745;

    t52 = (x229<=(x230>(x231+x232)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = 89040744835376LLU;
	int32_t x238 = -4665;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -383460620;
	static int32_t t53 = -22;

    t53 = (x237<=(x238>(x239+x240)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x241 = -14;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -164423502;
	uint16_t x244 = UINT16_MAX;
	static volatile int32_t t54 = -234;

    t54 = (x241<=(x242>(x243+x244)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = 6U;
	uint32_t x246 = 233875U;
	static int8_t x248 = INT8_MAX;
	static volatile int32_t t55 = 4;

    t55 = (x245<=(x246>(x247+x248)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = -1049187629;
	int16_t x251 = -51;
	int8_t x252 = -1;
	int32_t t56 = 7;

    t56 = (x249<=(x250>(x251+x252)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x253 = 27436139LLU;
	static int64_t x255 = 6942LL;
	int32_t x256 = INT32_MIN;
	volatile int32_t t57 = -121;

    t57 = (x253<=(x254>(x255+x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x257 = UINT8_MAX;
	int32_t x258 = 114;
	static int64_t x259 = -11LL;
	int16_t x260 = 91;
	int32_t t58 = -3;

    t58 = (x257<=(x258>(x259+x260)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x265 = -3368;
	static uint8_t x266 = 9U;
	int32_t x268 = -1;
	volatile int32_t t59 = -217;

    t59 = (x265<=(x266>(x267+x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = 4U;
	volatile int32_t x275 = INT32_MIN;
	static int8_t x276 = 1;
	int32_t t60 = 403;

    t60 = (x273<=(x274>(x275+x276)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x277 = 25;
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	volatile int64_t x280 = -431108768883LL;
	volatile int32_t t61 = -22;

    t61 = (x277<=(x278>(x279+x280)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x281 = INT16_MIN;
	int32_t x283 = -2;
	int16_t x284 = INT16_MIN;
	int32_t t62 = 174699;

    t62 = (x281<=(x282>(x283+x284)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = -1;
	volatile int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MAX;
	volatile int32_t t63 = 234266922;

    t63 = (x285<=(x286>(x287+x288)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x289 = INT32_MAX;
	volatile uint8_t x290 = 5U;
	int8_t x292 = 1;
	int32_t t64 = -383619;

    t64 = (x289<=(x290>(x291+x292)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x293 = 69U;
	int8_t x295 = INT8_MAX;
	int32_t x296 = -1;
	volatile int32_t t65 = 273;

    t65 = (x293<=(x294>(x295+x296)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MAX;

    t66 = (x297<=(x298>(x299+x300)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x305 = 6529U;
	static int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;
	int16_t x308 = 2775;

    t67 = (x305<=(x306>(x307+x308)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x309 = -14628;
	volatile int16_t x310 = 0;
	volatile int32_t x311 = -1;
	static int32_t t68 = -126517;

    t68 = (x309<=(x310>(x311+x312)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x313 = 3036231U;
	volatile int32_t x315 = -1;
	int32_t t69 = -659577625;

    t69 = (x313<=(x314>(x315+x316)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x317 = INT32_MIN;
	int8_t x318 = -1;
	uint16_t x319 = 2710U;
	volatile int32_t t70 = 62;

    t70 = (x317<=(x318>(x319+x320)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	int16_t x324 = -1;
	volatile int32_t t71 = 72418;

    t71 = (x321<=(x322>(x323+x324)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = -3;
	volatile int32_t x326 = -320061;
	volatile uint64_t x327 = 36839LLU;
	int32_t t72 = -6522476;

    t72 = (x325<=(x326>(x327+x328)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x333 = -1;
	static uint8_t x335 = 47U;

    t73 = (x333<=(x334>(x335+x336)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x337 = 8663878LL;
	volatile int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 927LLU;
	int32_t t74 = -23;

    t74 = (x337<=(x338>(x339+x340)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	volatile int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MAX;
	static int32_t t75 = -27856343;

    t75 = (x341<=(x342>(x343+x344)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x345 = -1307502LL;
	int32_t x346 = INT32_MAX;
	uint16_t x347 = UINT16_MAX;
	static volatile int16_t x348 = 4;
	int32_t t76 = -5737;

    t76 = (x345<=(x346>(x347+x348)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x350 = 827829522LL;
	int32_t x351 = -557;
	static int8_t x352 = -1;
	volatile int32_t t77 = -2640;

    t77 = (x349<=(x350>(x351+x352)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x355 = 1;

    t78 = (x353<=(x354>(x355+x356)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x357 = INT64_MAX;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MAX;
	volatile int32_t t79 = -290;

    t79 = (x357<=(x358>(x359+x360)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x361 = INT8_MIN;
	static int64_t x362 = INT64_MIN;
	int8_t x363 = -7;
	static volatile uint8_t x364 = 84U;
	volatile int32_t t80 = 115;

    t80 = (x361<=(x362>(x363+x364)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int16_t x366 = INT16_MIN;
	int64_t x367 = -1437931841979962307LL;
	int32_t t81 = -2533;

    t81 = (x365<=(x366>(x367+x368)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x369 = 6U;
	int64_t x370 = 6250422285LL;
	int64_t x372 = -1LL;
	int32_t t82 = -68614391;

    t82 = (x369<=(x370>(x371+x372)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x375 = UINT32_MAX;
	volatile int32_t t83 = -3997613;

    t83 = (x373<=(x374>(x375+x376)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x377 = 214LLU;
	int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MAX;
	static uint8_t x380 = UINT8_MAX;

    t84 = (x377<=(x378>(x379+x380)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x381 = UINT32_MAX;
	static int16_t x382 = 26;
	static int64_t x383 = 246924048971LL;
	static volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t85 = -3204197;

    t85 = (x381<=(x382>(x383+x384)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x386 = INT32_MIN;
	static int16_t x387 = -1;
	int8_t x388 = INT8_MAX;
	int32_t t86 = 145428;

    t86 = (x385<=(x386>(x387+x388)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = -1;
	int8_t x390 = -49;
	int8_t x391 = -1;
	uint32_t x392 = 48955U;
	int32_t t87 = 452891;

    t87 = (x389<=(x390>(x391+x392)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x393 = 0;
	static volatile int32_t x394 = 6769;
	int8_t x395 = INT8_MAX;
	static volatile uint32_t x396 = 4867870U;
	volatile int32_t t88 = -80198831;

    t88 = (x393<=(x394>(x395+x396)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 29773258U;
	int32_t t89 = -64022136;

    t89 = (x397<=(x398>(x399+x400)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x401 = 4U;
	volatile uint16_t x402 = 2U;
	static int16_t x404 = INT16_MIN;
	int32_t t90 = 0;

    t90 = (x401<=(x402>(x403+x404)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x405 = -1;
	int32_t x406 = INT32_MAX;
	static int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t91 = -47;

    t91 = (x405<=(x406>(x407+x408)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x409 = 340710398U;
	int32_t t92 = 441;

    t92 = (x409<=(x410>(x411+x412)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x413 = INT16_MIN;
	volatile int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	int64_t x416 = -1LL;
	static volatile int32_t t93 = -10;

    t93 = (x413<=(x414>(x415+x416)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x417 = INT32_MAX;
	int8_t x419 = INT8_MAX;
	static int16_t x420 = 79;
	volatile int32_t t94 = 869303;

    t94 = (x417<=(x418>(x419+x420)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x422 = 70U;
	int32_t t95 = -10;

    t95 = (x421<=(x422>(x423+x424)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = INT16_MAX;
	int16_t x426 = INT16_MIN;
	volatile int8_t x428 = INT8_MIN;

    t96 = (x425<=(x426>(x427+x428)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x430 = 111U;
	int16_t x431 = -1;
	volatile int64_t x432 = INT64_MAX;
	volatile int32_t t97 = 335291;

    t97 = (x429<=(x430>(x431+x432)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x434 = INT32_MAX;
	static volatile int64_t x435 = -1LL;
	uint32_t x436 = 93305U;
	int32_t t98 = -381770518;

    t98 = (x433<=(x434>(x435+x436)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = INT8_MAX;
	volatile int16_t x438 = 11404;
	static int8_t x439 = INT8_MIN;
	static uint16_t x440 = UINT16_MAX;
	int32_t t99 = -30827408;

    t99 = (x437<=(x438>(x439+x440)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x441 = 1;
	int16_t x442 = -1;
	volatile uint16_t x443 = 1U;
	int16_t x444 = INT16_MIN;
	int32_t t100 = -727;

    t100 = (x441<=(x442>(x443+x444)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x447 = INT64_MAX;
	int64_t x448 = INT64_MIN;
	static int32_t t101 = -11630075;

    t101 = (x445<=(x446>(x447+x448)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x449 = INT64_MAX;
	uint16_t x450 = 17940U;
	int16_t x451 = INT16_MIN;
	int64_t x452 = -1LL;
	volatile int32_t t102 = 14277327;

    t102 = (x449<=(x450>(x451+x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x454 = INT64_MAX;
	uint8_t x455 = 35U;
	int32_t x456 = -250983;
	int32_t t103 = 23;

    t103 = (x453<=(x454>(x455+x456)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x457 = -1;
	int32_t x458 = INT32_MAX;
	int32_t x459 = INT32_MIN;
	static volatile uint16_t x460 = UINT16_MAX;
	volatile int32_t t104 = 32579;

    t104 = (x457<=(x458>(x459+x460)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = INT64_MAX;
	volatile int8_t x463 = INT8_MIN;
	int32_t t105 = -40002567;

    t105 = (x461<=(x462>(x463+x464)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x469 = INT64_MAX;
	volatile int32_t t106 = 122475403;

    t106 = (x469<=(x470>(x471+x472)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x473 = -1;
	uint32_t x474 = 4162909U;
	volatile uint16_t x475 = UINT16_MAX;
	static int32_t x476 = 248;
	volatile int32_t t107 = 33;

    t107 = (x473<=(x474>(x475+x476)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x478 = 26U;
	int8_t x479 = 61;
	uint64_t x480 = UINT64_MAX;

    t108 = (x477<=(x478>(x479+x480)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x481 = INT8_MAX;
	uint8_t x482 = 22U;
	volatile int16_t x484 = -31;
	volatile int32_t t109 = 0;

    t109 = (x481<=(x482>(x483+x484)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x485 = -15;
	uint8_t x486 = UINT8_MAX;

    t110 = (x485<=(x486>(x487+x488)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x493 = -2476762911746371LL;
	uint16_t x495 = 238U;
	static uint8_t x496 = 2U;

    t111 = (x493<=(x494>(x495+x496)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x498 = INT32_MIN;
	int16_t x499 = -9;
	static uint16_t x500 = UINT16_MAX;
	int32_t t112 = -234530;

    t112 = (x497<=(x498>(x499+x500)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x501 = INT8_MIN;
	int16_t x502 = -2519;
	int32_t x503 = -1;
	volatile int32_t t113 = 7513;

    t113 = (x501<=(x502>(x503+x504)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x505 = -186974518;
	static int8_t x507 = -32;
	volatile int32_t t114 = -9864640;

    t114 = (x505<=(x506>(x507+x508)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x510 = 21LL;
	int64_t x512 = 25247911572LL;
	volatile int32_t t115 = 900191;

    t115 = (x509<=(x510>(x511+x512)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x513 = INT32_MAX;
	static uint8_t x514 = 53U;
	int64_t x515 = -1LL;
	volatile int32_t x516 = 45;
	static volatile int32_t t116 = -6;

    t116 = (x513<=(x514>(x515+x516)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x517 = -1;
	volatile int32_t x518 = -1;
	uint16_t x519 = 1U;
	uint8_t x520 = 0U;
	volatile int32_t t117 = -45;

    t117 = (x517<=(x518>(x519+x520)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x522 = -24;
	uint16_t x523 = 6245U;
	static int16_t x524 = -1;
	volatile int32_t t118 = 1;

    t118 = (x521<=(x522>(x523+x524)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x525 = 118U;
	static uint64_t x526 = UINT64_MAX;
	volatile int32_t x527 = 10914;
	volatile int32_t t119 = 1;

    t119 = (x525<=(x526>(x527+x528)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x529 = INT64_MIN;
	volatile int16_t x530 = INT16_MIN;
	static volatile int16_t x531 = INT16_MIN;
	uint64_t x532 = UINT64_MAX;

    t120 = (x529<=(x530>(x531+x532)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x537 = 68U;
	static uint8_t x538 = 0U;
	int8_t x539 = INT8_MIN;
	int16_t x540 = 1;
	volatile int32_t t121 = 0;

    t121 = (x537<=(x538>(x539+x540)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x541 = INT32_MAX;
	uint16_t x542 = 36U;
	static int16_t x543 = INT16_MIN;
	int32_t x544 = INT32_MAX;

    t122 = (x541<=(x542>(x543+x544)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x546 = INT64_MAX;
	int16_t x547 = INT16_MAX;
	static int32_t t123 = -12;

    t123 = (x545<=(x546>(x547+x548)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x549 = UINT32_MAX;
	int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MIN;
	int8_t x552 = INT8_MAX;
	int32_t t124 = 3;

    t124 = (x549<=(x550>(x551+x552)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x554 = 28268910953188LLU;
	uint16_t x555 = UINT16_MAX;
	int64_t x556 = 138299996080451883LL;
	volatile int32_t t125 = -1389678;

    t125 = (x553<=(x554>(x555+x556)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x558 = INT16_MAX;
	static volatile uint8_t x559 = 1U;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t126 = 18;

    t126 = (x557<=(x558>(x559+x560)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x561 = INT32_MAX;
	static int16_t x562 = -1;
	volatile uint64_t x564 = UINT64_MAX;
	int32_t t127 = -2827941;

    t127 = (x561<=(x562>(x563+x564)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x565 = 810349098063365LL;
	uint8_t x566 = UINT8_MAX;
	uint8_t x567 = UINT8_MAX;
	static int32_t x568 = INT32_MIN;
	static int32_t t128 = 4;

    t128 = (x565<=(x566>(x567+x568)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	int32_t t129 = 50;

    t129 = (x569<=(x570>(x571+x572)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x573 = INT16_MIN;
	uint64_t x575 = UINT64_MAX;

    t130 = (x573<=(x574>(x575+x576)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x577 = 3693986U;
	static volatile int16_t x578 = INT16_MIN;
	static int64_t x579 = INT64_MAX;
	int64_t x580 = -82680LL;
	volatile int32_t t131 = -2;

    t131 = (x577<=(x578>(x579+x580)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x581 = -1;
	int64_t x583 = INT64_MIN;
	volatile int16_t x584 = 1;
	static int32_t t132 = 78439;

    t132 = (x581<=(x582>(x583+x584)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x585 = -1;
	int8_t x586 = INT8_MAX;
	static volatile int16_t x587 = INT16_MAX;
	int16_t x588 = INT16_MIN;
	int32_t t133 = -37031;

    t133 = (x585<=(x586>(x587+x588)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x592 = INT16_MIN;

    t134 = (x589<=(x590>(x591+x592)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x597 = UINT8_MAX;
	static int8_t x598 = -50;
	uint8_t x600 = 15U;
	volatile int32_t t135 = 139228;

    t135 = (x597<=(x598>(x599+x600)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x602 = INT64_MIN;
	volatile uint8_t x603 = UINT8_MAX;
	volatile int32_t x604 = INT32_MIN;

    t136 = (x601<=(x602>(x603+x604)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x605 = -1;
	int32_t x606 = -224601575;
	uint16_t x607 = 11438U;
	volatile int64_t x608 = INT64_MIN;
	static volatile int32_t t137 = -5344;

    t137 = (x605<=(x606>(x607+x608)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x613 = UINT16_MAX;
	int8_t x614 = INT8_MIN;
	uint8_t x616 = UINT8_MAX;
	int32_t t138 = 1001525791;

    t138 = (x613<=(x614>(x615+x616)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x622 = 5676U;
	int8_t x623 = INT8_MIN;
	volatile int32_t x624 = -32711881;

    t139 = (x621<=(x622>(x623+x624)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x625 = 9731029126978LLU;
	uint8_t x627 = 3U;
	static volatile int32_t t140 = -7;

    t140 = (x625<=(x626>(x627+x628)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x629 = 949639U;
	static int8_t x630 = -3;
	uint16_t x631 = 2U;
	static volatile uint64_t x632 = 553824059328LLU;

    t141 = (x629<=(x630>(x631+x632)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x633 = INT64_MAX;
	uint8_t x634 = 8U;
	int64_t x635 = 5259LL;
	uint32_t x636 = UINT32_MAX;
	int32_t t142 = 12408287;

    t142 = (x633<=(x634>(x635+x636)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = -42;
	static uint16_t x638 = 327U;
	int16_t x639 = INT16_MIN;
	uint8_t x640 = 10U;
	volatile int32_t t143 = 3531;

    t143 = (x637<=(x638>(x639+x640)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x641 = 3U;
	volatile int32_t x642 = -16;
	int64_t x644 = -915110LL;

    t144 = (x641<=(x642>(x643+x644)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x645 = UINT16_MAX;
	int16_t x646 = 2;
	int32_t x647 = INT32_MIN;
	uint16_t x648 = 1U;

    t145 = (x645<=(x646>(x647+x648)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x649 = INT32_MAX;
	uint32_t x651 = UINT32_MAX;
	int16_t x652 = -1;
	static volatile int32_t t146 = -4796;

    t146 = (x649<=(x650>(x651+x652)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x653 = INT8_MAX;
	int32_t x654 = INT32_MIN;
	uint16_t x655 = 758U;
	uint64_t x656 = 1735LLU;
	volatile int32_t t147 = -25978;

    t147 = (x653<=(x654>(x655+x656)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x658 = INT64_MIN;
	static uint32_t x659 = 10886412U;
	static uint8_t x660 = 0U;
	volatile int32_t t148 = 4;

    t148 = (x657<=(x658>(x659+x660)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x661 = 1U;
	int16_t x662 = INT16_MIN;
	volatile int32_t x663 = 3709066;
	static int32_t t149 = 34123;

    t149 = (x661<=(x662>(x663+x664)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x665 = INT64_MIN;
	uint16_t x668 = 181U;
	static volatile int32_t t150 = 721018414;

    t150 = (x665<=(x666>(x667+x668)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x673 = 52U;
	volatile int64_t x674 = 2089493480652954LL;
	int8_t x675 = INT8_MIN;
	static int8_t x676 = -4;
	int32_t t151 = -4831;

    t151 = (x673<=(x674>(x675+x676)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x678 = 190U;
	volatile int64_t x679 = -1LL;
	static uint64_t x680 = 887LLU;
	int32_t t152 = -249577;

    t152 = (x677<=(x678>(x679+x680)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x681 = INT8_MIN;
	static int32_t x682 = INT32_MAX;
	uint16_t x683 = 1559U;
	int32_t x684 = 0;

    t153 = (x681<=(x682>(x683+x684)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x690 = INT32_MIN;
	volatile uint64_t x691 = 957947424LLU;
	volatile uint8_t x692 = 1U;

    t154 = (x689<=(x690>(x691+x692)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x698 = INT8_MIN;
	static uint32_t x700 = 4920505U;
	int32_t t155 = -363492;

    t155 = (x697<=(x698>(x699+x700)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x702 = INT32_MAX;
	volatile int16_t x703 = INT16_MAX;
	int32_t t156 = -2841;

    t156 = (x701<=(x702>(x703+x704)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x706 = 362779LLU;
	int8_t x707 = INT8_MIN;
	static int8_t x708 = INT8_MIN;
	volatile int32_t t157 = 460718;

    t157 = (x705<=(x706>(x707+x708)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x709 = 1;
	static int16_t x710 = INT16_MIN;
	uint8_t x711 = 0U;
	int32_t x712 = INT32_MIN;
	volatile int32_t t158 = 615;

    t158 = (x709<=(x710>(x711+x712)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x714 = UINT16_MAX;
	uint16_t x715 = UINT16_MAX;
	int8_t x716 = -10;

    t159 = (x713<=(x714>(x715+x716)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x721 = 1U;
	volatile uint16_t x722 = UINT16_MAX;
	uint8_t x723 = 15U;
	volatile int32_t t160 = 11;

    t160 = (x721<=(x722>(x723+x724)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x726 = 457907810U;
	int16_t x727 = INT16_MIN;
	uint8_t x728 = 0U;
	volatile int32_t t161 = -3;

    t161 = (x725<=(x726>(x727+x728)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x729 = INT64_MIN;
	static volatile uint8_t x731 = 7U;
	uint16_t x732 = 0U;
	static int32_t t162 = -1;

    t162 = (x729<=(x730>(x731+x732)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x738 = UINT32_MAX;
	int16_t x739 = -1;
	int16_t x740 = -1;
	int32_t t163 = -130766;

    t163 = (x737<=(x738>(x739+x740)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x741 = INT32_MAX;
	static int64_t x742 = 5512438LL;
	static uint64_t x743 = 243094462809738306LLU;

    t164 = (x741<=(x742>(x743+x744)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x745 = -1;
	uint64_t x746 = UINT64_MAX;
	int16_t x747 = INT16_MIN;
	int64_t x748 = -45350821362802LL;
	int32_t t165 = -6000217;

    t165 = (x745<=(x746>(x747+x748)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x749 = 47;
	int32_t x750 = -1;
	uint32_t x751 = 0U;
	static uint32_t x752 = UINT32_MAX;
	volatile int32_t t166 = 660359673;

    t166 = (x749<=(x750>(x751+x752)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x753 = INT8_MAX;
	uint64_t x755 = 112377913942358LLU;
	volatile int32_t t167 = -3038376;

    t167 = (x753<=(x754>(x755+x756)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x757 = -1;
	static int8_t x758 = -11;
	int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MIN;
	volatile int32_t t168 = -1;

    t168 = (x757<=(x758>(x759+x760)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x763 = 21U;
	int32_t t169 = -251951936;

    t169 = (x761<=(x762>(x763+x764)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x765 = 24445145U;
	int8_t x766 = -1;
	int64_t x767 = -1LL;
	int64_t x768 = INT64_MAX;
	int32_t t170 = 15;

    t170 = (x765<=(x766>(x767+x768)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x769 = 2U;
	int32_t x770 = -1;
	int16_t x771 = -3;
	static int32_t t171 = 361322314;

    t171 = (x769<=(x770>(x771+x772)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x773 = INT8_MIN;
	int8_t x774 = 1;
	static int8_t x775 = INT8_MIN;
	uint8_t x776 = 127U;
	volatile int32_t t172 = 131544007;

    t172 = (x773<=(x774>(x775+x776)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x781 = -910;
	int32_t x782 = INT32_MAX;
	static int64_t x783 = -2725044033LL;
	uint32_t x784 = 3U;
	int32_t t173 = 968882381;

    t173 = (x781<=(x782>(x783+x784)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x785 = 28585294470LL;
	int32_t x786 = 296;
	uint8_t x787 = UINT8_MAX;
	static volatile int32_t t174 = -65379;

    t174 = (x785<=(x786>(x787+x788)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x789 = INT32_MIN;
	uint64_t x790 = UINT64_MAX;
	volatile int16_t x791 = INT16_MIN;
	uint16_t x792 = 337U;
	int32_t t175 = 604384;

    t175 = (x789<=(x790>(x791+x792)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x793 = INT16_MIN;
	int32_t x794 = -1;
	static uint32_t x795 = 261678U;
	int32_t x796 = INT32_MIN;
	int32_t t176 = -4323;

    t176 = (x793<=(x794>(x795+x796)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x801 = -1;
	int32_t x802 = INT32_MAX;
	int32_t x803 = -1;
	uint64_t x804 = 22LLU;
	volatile int32_t t177 = 1;

    t177 = (x801<=(x802>(x803+x804)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x805 = 120455277828LLU;
	volatile int64_t x806 = INT64_MIN;
	int16_t x807 = -8;
	static volatile int32_t t178 = -64229;

    t178 = (x805<=(x806>(x807+x808)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x809 = -13139601134365539LL;
	uint32_t x810 = 10226232U;
	uint64_t x811 = UINT64_MAX;
	volatile int32_t x812 = -177789;
	volatile int32_t t179 = 358274;

    t179 = (x809<=(x810>(x811+x812)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x813 = -1;
	volatile int32_t x814 = -17087;
	int8_t x815 = INT8_MAX;
	int32_t t180 = -3214018;

    t180 = (x813<=(x814>(x815+x816)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x817 = 5664LLU;
	volatile int16_t x818 = -1;
	static volatile uint8_t x819 = 22U;
	uint8_t x820 = UINT8_MAX;
	int32_t t181 = 265018808;

    t181 = (x817<=(x818>(x819+x820)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x821 = 34U;
	int16_t x822 = -2850;
	static int16_t x823 = -1;

    t182 = (x821<=(x822>(x823+x824)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x825 = -1;
	int64_t x826 = -1LL;
	volatile int8_t x827 = INT8_MIN;
	volatile int16_t x828 = -1;
	volatile int32_t t183 = 5377;

    t183 = (x825<=(x826>(x827+x828)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x829 = -10928;
	uint8_t x831 = UINT8_MAX;
	volatile uint16_t x832 = 11632U;
	static int32_t t184 = -28560695;

    t184 = (x829<=(x830>(x831+x832)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x833 = 3U;
	uint8_t x834 = 32U;
	int8_t x835 = -1;
	volatile int32_t t185 = -3540;

    t185 = (x833<=(x834>(x835+x836)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x841 = -1;
	volatile int64_t x842 = 484327338308961LL;
	static uint32_t x843 = 54U;
	int8_t x844 = INT8_MIN;
	volatile int32_t t186 = 13;

    t186 = (x841<=(x842>(x843+x844)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	static int8_t x847 = INT8_MIN;
	int16_t x848 = -9358;

    t187 = (x845<=(x846>(x847+x848)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x849 = 246U;
	int32_t x850 = INT32_MIN;
	uint8_t x851 = 102U;
	volatile int8_t x852 = INT8_MIN;
	volatile int32_t t188 = 20;

    t188 = (x849<=(x850>(x851+x852)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x853 = INT8_MIN;
	static int8_t x854 = -1;
	static int32_t x855 = -1;
	int8_t x856 = -2;
	int32_t t189 = 123435995;

    t189 = (x853<=(x854>(x855+x856)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x858 = INT8_MIN;
	int64_t x860 = -1LL;
	int32_t t190 = -45;

    t190 = (x857<=(x858>(x859+x860)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x861 = INT8_MIN;
	static int8_t x862 = 0;
	int16_t x863 = -6;
	static int8_t x864 = INT8_MIN;

    t191 = (x861<=(x862>(x863+x864)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x865 = INT32_MIN;
	int32_t x866 = -1;
	volatile int8_t x867 = 5;
	uint8_t x868 = 64U;
	volatile int32_t t192 = 242589716;

    t192 = (x865<=(x866>(x867+x868)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x869 = INT16_MIN;
	uint8_t x870 = 1U;
	static int32_t x871 = -1;
	volatile int32_t t193 = -107673;

    t193 = (x869<=(x870>(x871+x872)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x875 = -1LL;
	static volatile int32_t t194 = 93697830;

    t194 = (x873<=(x874>(x875+x876)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x877 = 108442LLU;
	int16_t x879 = INT16_MIN;
	volatile uint16_t x880 = 497U;
	int32_t t195 = 0;

    t195 = (x877<=(x878>(x879+x880)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x883 = UINT64_MAX;
	static int16_t x884 = INT16_MIN;
	int32_t t196 = -73848;

    t196 = (x881<=(x882>(x883+x884)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x886 = INT32_MIN;
	int8_t x887 = -1;
	volatile int64_t x888 = INT64_MAX;
	int32_t t197 = -61;

    t197 = (x885<=(x886>(x887+x888)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x894 = UINT64_MAX;
	int32_t x895 = INT32_MAX;
	int64_t x896 = -454870846LL;
	volatile int32_t t198 = -17575151;

    t198 = (x893<=(x894>(x895+x896)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x905 = 1LLU;
	static int8_t x906 = INT8_MIN;
	int32_t t199 = -3002474;

    t199 = (x905<=(x906>(x907+x908)));

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

