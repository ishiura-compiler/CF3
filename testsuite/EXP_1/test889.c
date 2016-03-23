
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

int32_t x2 = INT32_MAX;
uint8_t x3 = 42U;
int32_t t0 = 145827763;
uint16_t x6 = UINT16_MAX;
uint8_t x8 = UINT8_MAX;
uint8_t x9 = UINT8_MAX;
int8_t x11 = INT8_MIN;
int16_t x24 = -15;
int32_t t4 = 3192;
int8_t x28 = INT8_MIN;
int8_t x29 = INT8_MAX;
volatile int8_t x31 = INT8_MIN;
static int16_t x37 = -213;
static int16_t x41 = -2;
int32_t x50 = -9;
volatile int32_t t10 = -6760408;
volatile uint16_t x54 = 31U;
uint8_t x59 = 3U;
int32_t t13 = -15;
volatile int64_t x66 = -1LL;
uint16_t x72 = 16257U;
volatile uint64_t x75 = UINT64_MAX;
int8_t x76 = -1;
int16_t x77 = -1;
int32_t t17 = 55243;
int32_t t19 = -78361;
int16_t x91 = INT16_MIN;
int32_t t20 = 289217795;
int64_t x93 = -1LL;
int32_t x99 = -99230263;
int8_t x100 = -1;
static uint32_t x101 = UINT32_MAX;
int32_t t23 = 86956;
int8_t x105 = INT8_MAX;
int64_t x108 = INT64_MAX;
static volatile int32_t t25 = 1;
int16_t x114 = -1;
uint8_t x115 = 66U;
int16_t x118 = INT16_MIN;
int64_t x119 = INT64_MIN;
int32_t x121 = INT32_MIN;
int16_t x125 = -4;
static uint64_t x126 = 13LLU;
volatile int8_t x128 = INT8_MIN;
static int16_t x134 = -1;
uint32_t x137 = 205610224U;
int32_t t32 = 56317;
int32_t x141 = INT32_MAX;
static int32_t x146 = INT32_MIN;
static int32_t t34 = -13882;
int32_t t36 = 12972023;
static int32_t t37 = -363687;
volatile int32_t x162 = -6259140;
int64_t x163 = -21037155629LL;
volatile int8_t x166 = -1;
static volatile int32_t t39 = 1150767;
uint8_t x170 = 79U;
static uint32_t x175 = UINT32_MAX;
int32_t t41 = 54934960;
uint16_t x184 = UINT16_MAX;
static int32_t t44 = -1;
static int64_t x194 = -1LL;
static int16_t x197 = -1;
uint64_t x198 = UINT64_MAX;
volatile int32_t x207 = -1;
volatile int16_t x209 = INT16_MIN;
static uint64_t x210 = 2966LLU;
int64_t x211 = INT64_MIN;
volatile int32_t t49 = 6541;
int32_t x218 = -761;
int32_t t51 = -1394600;
uint64_t x225 = 182169332200992682LLU;
int8_t x229 = INT8_MIN;
uint32_t x232 = 3744886U;
uint8_t x234 = 58U;
volatile uint64_t x238 = UINT64_MAX;
volatile int32_t t56 = 678470554;
volatile int32_t t57 = 51697;
int64_t x247 = INT64_MIN;
int64_t x248 = INT64_MAX;
int64_t x252 = 9950LL;
int16_t x257 = 20;
static int32_t x258 = 38389408;
static uint16_t x261 = 29169U;
int32_t x268 = INT32_MAX;
static uint64_t x275 = 432LLU;
static volatile int32_t t65 = -200918762;
int16_t x277 = INT16_MIN;
int8_t x280 = INT8_MIN;
volatile uint32_t x281 = UINT32_MAX;
int8_t x282 = INT8_MIN;
int16_t x293 = 0;
int64_t x299 = INT64_MIN;
uint32_t x304 = 111190524U;
static int32_t t72 = 905445429;
static int64_t x312 = INT64_MAX;
int8_t x313 = 0;
volatile int32_t t75 = 203248942;
volatile uint64_t x325 = 8099624039487280LLU;
int32_t t78 = -2;
static uint8_t x329 = UINT8_MAX;
volatile int64_t x331 = INT64_MIN;
int32_t x334 = INT32_MIN;
int8_t x335 = INT8_MAX;
int32_t x338 = -1;
int32_t t81 = -13;
uint16_t x345 = UINT16_MAX;
int32_t x348 = INT32_MIN;
volatile int64_t x350 = -1LL;
uint32_t x352 = 14605U;
uint64_t x355 = UINT64_MAX;
volatile int32_t t85 = -1;
int32_t t86 = -2;
int16_t x365 = 1846;
int32_t x367 = INT32_MAX;
static int32_t x370 = INT32_MIN;
int16_t x372 = -1;
int32_t t89 = 876441133;
static int32_t t91 = 59;
volatile int64_t x381 = INT64_MIN;
int8_t x382 = -1;
int16_t x383 = -1;
volatile int8_t x385 = -1;
int32_t x386 = INT32_MIN;
volatile int8_t x390 = INT8_MIN;
int32_t x391 = -1;
int32_t x393 = INT32_MIN;
uint16_t x414 = UINT16_MAX;
uint16_t x416 = 3U;
int8_t x420 = INT8_MAX;
int8_t x426 = INT8_MIN;
static volatile int32_t t103 = -6424;
static int16_t x434 = INT16_MAX;
static int8_t x437 = INT8_MIN;
uint8_t x442 = 1U;
int16_t x444 = -2;
volatile uint64_t x450 = 7018561281LLU;
int16_t x452 = -1;
int32_t x454 = 28;
int32_t x455 = INT32_MIN;
static uint16_t x459 = 13401U;
int16_t x460 = 0;
volatile int32_t t110 = 638875658;
int32_t x463 = 8124;
uint8_t x465 = 13U;
int16_t x466 = INT16_MAX;
int32_t t112 = -44;
static int32_t x472 = -1;
int8_t x478 = INT8_MIN;
static volatile uint16_t x480 = UINT16_MAX;
uint32_t x482 = 1947358U;
volatile int64_t x488 = -2893008185LL;
int64_t x493 = -1LL;
int16_t x498 = -1269;
int16_t x506 = INT16_MIN;
volatile int16_t x507 = INT16_MIN;
static int32_t t123 = -7231813;
int32_t x515 = INT32_MIN;
static volatile int32_t t124 = -61;
volatile int16_t x517 = 3;
volatile int32_t t126 = 10793;
static volatile int16_t x531 = -1;
int32_t t127 = -106277;
volatile int16_t x534 = INT16_MIN;
uint8_t x545 = UINT8_MAX;
static int32_t t131 = 7895847;
int32_t x552 = -75;
int32_t x554 = 11892633;
volatile uint8_t x556 = UINT8_MAX;
uint32_t x559 = 5106371U;
static uint64_t x562 = 236178108396766715LLU;
volatile int32_t t135 = -111;
static int32_t x570 = -93799;
uint8_t x572 = 19U;
int8_t x576 = INT8_MAX;
int32_t x579 = INT32_MIN;
static int16_t x584 = INT16_MAX;
uint64_t x596 = 4083LLU;
int32_t t143 = 26389001;
uint32_t x612 = 57926543U;
uint8_t x616 = UINT8_MAX;
static int32_t t149 = 104;
static int8_t x624 = -1;
int16_t x633 = -2;
static int64_t x637 = INT64_MIN;
uint16_t x646 = UINT16_MAX;
int16_t x649 = -108;
int32_t x653 = -1;
int64_t x654 = 436269705LL;
uint16_t x667 = 672U;
volatile uint8_t x668 = 62U;
int32_t x671 = 45;
int64_t x677 = 5002852026842311LL;
int64_t x678 = -1175659695386842LL;
uint16_t x682 = UINT16_MAX;
volatile int16_t x686 = INT16_MIN;
static int16_t x687 = INT16_MIN;
int64_t x688 = 48LL;
int16_t x691 = INT16_MIN;
int8_t x694 = INT8_MIN;
uint16_t x696 = 539U;
static int64_t x699 = INT64_MAX;
int32_t x703 = 97075;
int64_t x707 = INT64_MIN;
int32_t t172 = -124468;
volatile uint16_t x720 = UINT16_MAX;
int32_t t174 = 10580783;
volatile uint8_t x732 = UINT8_MAX;
uint16_t x733 = 1U;
volatile int32_t t178 = 106962552;
volatile int32_t t179 = -176864671;
uint64_t x748 = 1808028611849224LLU;
uint16_t x751 = UINT16_MAX;
int8_t x753 = INT8_MAX;
int8_t x756 = INT8_MIN;
volatile int64_t x761 = -1LL;
volatile int64_t x765 = 673LL;
int32_t x768 = INT32_MIN;
int32_t x776 = -1;
uint64_t x777 = UINT64_MAX;
int32_t x778 = -210;
volatile int32_t t190 = 3135;
int16_t x788 = -1535;
uint8_t x790 = 85U;
int8_t x793 = -6;
volatile int32_t t193 = 2165;
int8_t x798 = -1;
int16_t x814 = -2596;
uint8_t x818 = 5U;
int32_t t198 = -9629;
uint32_t x821 = 26758631U;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	uint32_t x4 = 3U;

    t0 = (((x1%x2)==x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 1813U;
	static uint64_t x7 = 501460266365614477LLU;
	volatile int32_t t1 = 12;

    t1 = (((x5%x6)==x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = INT32_MAX;
	uint16_t x12 = 108U;
	int32_t t2 = 50234411;

    t2 = (((x9%x10)==x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = INT16_MAX;
	static int8_t x18 = -1;
	static int16_t x19 = -109;
	volatile uint16_t x20 = 3U;
	int32_t t3 = -24656;

    t3 = (((x17%x18)==x19)!=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x21 = 9U;
	volatile int32_t x22 = 92;
	int64_t x23 = INT64_MIN;

    t4 = (((x21%x22)==x23)!=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 1;
	int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	int32_t t5 = -272;

    t5 = (((x25%x26)==x27)!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = -1;
	int8_t x32 = -58;
	int32_t t6 = -2053237;

    t6 = (((x29%x30)==x31)!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x38 = 56495537516186LLU;
	volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 16LLU;
	int32_t t7 = 9661;

    t7 = (((x37%x38)==x39)!=x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x42 = 4;
	static uint16_t x43 = 1025U;
	uint64_t x44 = 18216444371LLU;
	int32_t t8 = 3;

    t8 = (((x41%x42)==x43)!=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = 1131;
	int64_t x46 = INT64_MAX;
	int16_t x47 = -4;
	uint8_t x48 = UINT8_MAX;
	static volatile int32_t t9 = 0;

    t9 = (((x45%x46)==x47)!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MAX;
	static int16_t x51 = INT16_MIN;
	uint16_t x52 = 35U;

    t10 = (((x49%x50)==x51)!=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = -1212;
	volatile int64_t x55 = -1LL;
	int8_t x56 = -12;
	int32_t t11 = -80382;

    t11 = (((x53%x54)==x55)!=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 6LLU;
	static int16_t x58 = -1;
	int64_t x60 = -1LL;
	static int32_t t12 = 11320123;

    t12 = (((x57%x58)==x59)!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MIN;

    t13 = (((x61%x62)==x63)!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = INT64_MIN;
	uint16_t x67 = 56U;
	uint8_t x68 = 51U;
	int32_t t14 = -2828;

    t14 = (((x65%x66)==x67)!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = -1;
	static int64_t x70 = 41162311105018422LL;
	static int32_t x71 = INT32_MIN;
	volatile int32_t t15 = -3216;

    t15 = (((x69%x70)==x71)!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = UINT32_MAX;
	int8_t x74 = -1;
	int32_t t16 = 4171;

    t16 = (((x73%x74)==x75)!=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x78 = -1;
	int8_t x79 = INT8_MAX;
	int16_t x80 = 5085;

    t17 = (((x77%x78)==x79)!=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	static uint64_t x82 = 162606854617LLU;
	static volatile uint8_t x83 = 0U;
	int8_t x84 = -34;
	static int32_t t18 = 2617609;

    t18 = (((x81%x82)==x83)!=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MAX;
	int32_t x87 = INT32_MIN;
	volatile int64_t x88 = -7415033816710LL;

    t19 = (((x85%x86)==x87)!=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x89 = 66434773LLU;
	int8_t x90 = -7;
	static volatile uint32_t x92 = UINT32_MAX;

    t20 = (((x89%x90)==x91)!=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = INT32_MAX;
	uint16_t x95 = 29347U;
	int64_t x96 = -1LL;
	static volatile int32_t t21 = -151528177;

    t21 = (((x93%x94)==x95)!=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	static int32_t t22 = 563994;

    t22 = (((x97%x98)==x99)!=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x102 = UINT16_MAX;
	static volatile int32_t x103 = INT32_MIN;
	static volatile int64_t x104 = -71271934751470794LL;

    t23 = (((x101%x102)==x103)!=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x106 = INT8_MIN;
	volatile int8_t x107 = INT8_MIN;
	volatile int32_t t24 = 0;

    t24 = (((x105%x106)==x107)!=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	volatile int64_t x110 = INT64_MAX;
	static volatile int32_t x111 = 319;
	static int64_t x112 = -1LL;

    t25 = (((x109%x110)==x111)!=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -113709049;
	uint16_t x116 = 18892U;
	volatile int32_t t26 = 0;

    t26 = (((x113%x114)==x115)!=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MAX;
	int16_t x120 = -1;
	static int32_t t27 = -577920680;

    t27 = (((x117%x118)==x119)!=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x122 = 121U;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;
	int32_t t28 = 8;

    t28 = (((x121%x122)==x123)!=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x127 = 83U;
	static int32_t t29 = -1;

    t29 = (((x125%x126)==x127)!=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	uint16_t x130 = 19585U;
	int64_t x131 = -1LL;
	volatile int64_t x132 = 3149111506LL;
	int32_t t30 = -121627179;

    t30 = (((x129%x130)==x131)!=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	static uint32_t x135 = 3178U;
	int8_t x136 = -58;
	int32_t t31 = -2319;

    t31 = (((x133%x134)==x135)!=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x138 = 1U;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 31U;

    t32 = (((x137%x138)==x139)!=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x142 = INT16_MIN;
	static int16_t x143 = 1524;
	static int32_t x144 = INT32_MIN;
	int32_t t33 = -52714;

    t33 = (((x141%x142)==x143)!=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x145 = INT64_MAX;
	static int16_t x147 = -1;
	int64_t x148 = INT64_MIN;

    t34 = (((x145%x146)==x147)!=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = 182392324;
	static volatile int64_t x150 = -1LL;
	int16_t x151 = -3251;
	int8_t x152 = -1;
	static volatile int32_t t35 = 25872686;

    t35 = (((x149%x150)==x151)!=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x153 = UINT16_MAX;
	uint64_t x154 = 1333055LLU;
	static uint8_t x155 = 13U;
	static uint32_t x156 = 2015933U;

    t36 = (((x153%x154)==x155)!=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 1699U;
	uint32_t x158 = 11749519U;
	uint8_t x159 = 21U;
	static uint32_t x160 = 2786U;

    t37 = (((x157%x158)==x159)!=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x161 = 44;
	volatile int16_t x164 = INT16_MIN;
	int32_t t38 = 38709;

    t38 = (((x161%x162)==x163)!=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	int8_t x168 = -37;

    t39 = (((x165%x166)==x167)!=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x169 = -1;
	uint64_t x171 = UINT64_MAX;
	volatile int8_t x172 = INT8_MAX;
	int32_t t40 = 8259;

    t40 = (((x169%x170)==x171)!=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MAX;
	static int64_t x176 = -184158LL;

    t41 = (((x173%x174)==x175)!=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = -1;
	uint8_t x178 = 37U;
	int16_t x179 = -1;
	int64_t x180 = INT64_MAX;
	volatile int32_t t42 = 13867;

    t42 = (((x177%x178)==x179)!=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MAX;
	volatile uint16_t x182 = 117U;
	static volatile uint16_t x183 = UINT16_MAX;
	int32_t t43 = -105449;

    t43 = (((x181%x182)==x183)!=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	volatile uint64_t x191 = 2162033329524526872LLU;
	int32_t x192 = INT32_MAX;

    t44 = (((x189%x190)==x191)!=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = 129U;
	uint8_t x195 = UINT8_MAX;
	static volatile uint8_t x196 = UINT8_MAX;
	static volatile int32_t t45 = -4166342;

    t45 = (((x193%x194)==x195)!=x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x199 = 4663U;
	volatile int8_t x200 = 0;
	volatile int32_t t46 = -1;

    t46 = (((x197%x198)==x199)!=x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = 21754U;
	uint64_t x204 = UINT64_MAX;
	int32_t t47 = -5738;

    t47 = (((x201%x202)==x203)!=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = INT16_MAX;
	volatile uint32_t x206 = 1801656197U;
	static volatile int16_t x208 = -1;
	static int32_t t48 = 0;

    t48 = (((x205%x206)==x207)!=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x212 = UINT32_MAX;

    t49 = (((x209%x210)==x211)!=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x213 = 5U;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = -1;
	int32_t t50 = -12250;

    t50 = (((x213%x214)==x215)!=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x217 = -1;
	uint64_t x219 = 52186520916353LLU;
	int32_t x220 = 3930606;

    t51 = (((x217%x218)==x219)!=x220);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	uint32_t x224 = 911388U;
	int32_t t52 = 1;

    t52 = (((x221%x222)==x223)!=x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x226 = INT16_MAX;
	static int32_t x227 = 26158;
	static int8_t x228 = INT8_MAX;
	static volatile int32_t t53 = 166163;

    t53 = (((x225%x226)==x227)!=x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x230 = 1162095U;
	int32_t x231 = INT32_MAX;
	volatile int32_t t54 = 7242769;

    t54 = (((x229%x230)==x231)!=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x233 = UINT8_MAX;
	uint64_t x235 = 33056523899LLU;
	volatile int16_t x236 = INT16_MIN;
	int32_t t55 = -424305;

    t55 = (((x233%x234)==x235)!=x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	uint32_t x239 = 4U;
	int8_t x240 = INT8_MIN;

    t56 = (((x237%x238)==x239)!=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = 125;
	int64_t x242 = 251762841LL;
	int32_t x243 = INT32_MIN;
	volatile uint16_t x244 = 1U;

    t57 = (((x241%x242)==x243)!=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	volatile int32_t t58 = 6683779;

    t58 = (((x245%x246)==x247)!=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = -1;
	static int32_t x250 = 59;
	static volatile int8_t x251 = 50;
	volatile int32_t t59 = 5;

    t59 = (((x249%x250)==x251)!=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = UINT16_MAX;
	volatile int16_t x254 = INT16_MAX;
	static int16_t x255 = -1;
	static volatile int8_t x256 = INT8_MIN;
	volatile int32_t t60 = 510787757;

    t60 = (((x253%x254)==x255)!=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x259 = 170208202038343LLU;
	volatile uint64_t x260 = 4637603LLU;
	volatile int32_t t61 = 3274390;

    t61 = (((x257%x258)==x259)!=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x262 = 71145780109LLU;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t62 = -17582194;

    t62 = (((x261%x262)==x263)!=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MIN;
	volatile int32_t t63 = -68110667;

    t63 = (((x265%x266)==x267)!=x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = INT8_MIN;
	uint32_t x270 = 331708U;
	uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 109833LLU;
	volatile int32_t t64 = 57537841;

    t64 = (((x269%x270)==x271)!=x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = 114494785U;
	int8_t x274 = 1;
	int8_t x276 = -1;

    t65 = (((x273%x274)==x275)!=x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x278 = 15LL;
	int64_t x279 = INT64_MIN;
	static volatile int32_t t66 = 6059484;

    t66 = (((x277%x278)==x279)!=x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x283 = UINT8_MAX;
	int32_t x284 = INT32_MAX;
	volatile int32_t t67 = -639;

    t67 = (((x281%x282)==x283)!=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x285 = 58U;
	uint8_t x286 = 2U;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 32295U;
	volatile int32_t t68 = -6548581;

    t68 = (((x285%x286)==x287)!=x288);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = -3860051800604LL;
	int8_t x290 = INT8_MAX;
	static uint32_t x291 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t69 = -7476305;

    t69 = (((x289%x290)==x291)!=x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x294 = -1;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = -7;
	int32_t t70 = 135484115;

    t70 = (((x293%x294)==x295)!=x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x297 = 1626U;
	int8_t x298 = INT8_MAX;
	volatile int64_t x300 = -1LL;
	int32_t t71 = 4137440;

    t71 = (((x297%x298)==x299)!=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = INT32_MIN;
	static volatile int8_t x302 = -1;
	static int16_t x303 = INT16_MIN;

    t72 = (((x301%x302)==x303)!=x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 16547U;
	uint64_t x307 = 8509493517354340156LLU;
	uint64_t x308 = 587LLU;
	volatile int32_t t73 = -6878275;

    t73 = (((x305%x306)==x307)!=x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x309 = 30880840LL;
	static uint16_t x310 = 3U;
	uint32_t x311 = UINT32_MAX;
	volatile int32_t t74 = -502830;

    t74 = (((x309%x310)==x311)!=x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x314 = INT32_MIN;
	uint32_t x315 = 26122U;
	volatile uint16_t x316 = 2U;

    t75 = (((x313%x314)==x315)!=x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	static uint16_t x318 = 30864U;
	static int64_t x319 = INT64_MAX;
	uint8_t x320 = 18U;
	int32_t t76 = 14753724;

    t76 = (((x317%x318)==x319)!=x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = INT64_MIN;
	volatile int32_t x322 = -221141869;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t77 = 60;

    t77 = (((x321%x322)==x323)!=x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x326 = -1;
	static volatile uint64_t x327 = 2182470472196775LLU;
	static int8_t x328 = 14;

    t78 = (((x325%x326)==x327)!=x328);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x330 = INT64_MIN;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t79 = 7803998;

    t79 = (((x329%x330)==x331)!=x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x333 = 456U;
	int8_t x336 = 3;
	volatile int32_t t80 = 0;

    t80 = (((x333%x334)==x335)!=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = INT8_MAX;
	static int64_t x339 = INT64_MIN;
	volatile uint64_t x340 = UINT64_MAX;

    t81 = (((x337%x338)==x339)!=x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MIN;
	static int8_t x342 = -1;
	int32_t x343 = INT32_MAX;
	int64_t x344 = INT64_MIN;
	volatile int32_t t82 = 46092;

    t82 = (((x341%x342)==x343)!=x344);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	volatile int32_t t83 = -1;

    t83 = (((x345%x346)==x347)!=x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x351 = 1;
	int32_t t84 = -16952792;

    t84 = (((x349%x350)==x351)!=x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;

    t85 = (((x353%x354)==x355)!=x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = 388503056442468587LLU;
	uint64_t x358 = 58578638988LLU;
	int32_t x359 = INT32_MIN;
	static int64_t x360 = INT64_MIN;

    t86 = (((x357%x358)==x359)!=x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x361 = 1479057903939712838LLU;
	uint32_t x362 = UINT32_MAX;
	uint64_t x363 = 0LLU;
	int16_t x364 = INT16_MIN;
	int32_t t87 = 1;

    t87 = (((x361%x362)==x363)!=x364);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x366 = -1;
	volatile int32_t x368 = -6;
	int32_t t88 = -15;

    t88 = (((x365%x366)==x367)!=x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x369 = -141;
	volatile uint32_t x371 = UINT32_MAX;

    t89 = (((x369%x370)==x371)!=x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x374 = -1;
	uint64_t x375 = 1481513278218726LLU;
	uint32_t x376 = 258U;
	int32_t t90 = 10133;

    t90 = (((x373%x374)==x375)!=x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x377 = 312U;
	static int64_t x378 = -489331LL;
	uint16_t x379 = 0U;
	int64_t x380 = INT64_MAX;

    t91 = (((x377%x378)==x379)!=x380);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x384 = 2154U;
	int32_t t92 = -1;

    t92 = (((x381%x382)==x383)!=x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x387 = INT8_MAX;
	static uint16_t x388 = 21U;
	volatile int32_t t93 = 4092;

    t93 = (((x385%x386)==x387)!=x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x389 = INT8_MIN;
	uint64_t x392 = 7LLU;
	static int32_t t94 = -10725;

    t94 = (((x389%x390)==x391)!=x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x394 = 14U;
	static volatile uint8_t x395 = 14U;
	int8_t x396 = INT8_MIN;
	int32_t t95 = -1908;

    t95 = (((x393%x394)==x395)!=x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x397 = INT32_MAX;
	volatile int8_t x398 = -1;
	int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MAX;
	volatile int32_t t96 = 3698;

    t96 = (((x397%x398)==x399)!=x400);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 27U;
	static volatile int8_t x403 = INT8_MAX;
	volatile int32_t x404 = -13;
	static volatile int32_t t97 = 0;

    t97 = (((x401%x402)==x403)!=x404);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = 6;
	static volatile int64_t x406 = -1LL;
	int64_t x407 = 31LL;
	static int8_t x408 = INT8_MIN;
	int32_t t98 = -96455;

    t98 = (((x405%x406)==x407)!=x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = -1;
	uint16_t x415 = UINT16_MAX;
	int32_t t99 = -97140247;

    t99 = (((x413%x414)==x415)!=x416);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x417 = INT32_MIN;
	int16_t x418 = 3816;
	int64_t x419 = -1LL;
	volatile int32_t t100 = -545;

    t100 = (((x417%x418)==x419)!=x420);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = -1;
	volatile int16_t x422 = 1;
	int64_t x423 = -12575080LL;
	uint64_t x424 = 744446999LLU;
	volatile int32_t t101 = 1721782;

    t101 = (((x421%x422)==x423)!=x424);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x425 = 292U;
	int32_t x427 = -1;
	uint16_t x428 = 339U;
	int32_t t102 = 0;

    t102 = (((x425%x426)==x427)!=x428);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = -1;
	int8_t x430 = -1;
	volatile int64_t x431 = INT64_MIN;
	static uint64_t x432 = 14195767689933LLU;

    t103 = (((x429%x430)==x431)!=x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x433 = 1334U;
	int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t104 = 0;

    t104 = (((x433%x434)==x435)!=x436);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x438 = INT8_MIN;
	int64_t x439 = -1LL;
	int16_t x440 = INT16_MIN;
	volatile int32_t t105 = 200731;

    t105 = (((x437%x438)==x439)!=x440);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x441 = INT64_MAX;
	uint64_t x443 = 437382598LLU;
	int32_t t106 = -470053916;

    t106 = (((x441%x442)==x443)!=x444);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x445 = 1524023712LL;
	int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	int64_t x448 = 27969591LL;
	int32_t t107 = 63977;

    t107 = (((x445%x446)==x447)!=x448);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = -2096368796LL;
	volatile uint32_t x451 = 3672034U;
	int32_t t108 = 141695650;

    t108 = (((x449%x450)==x451)!=x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x453 = INT16_MIN;
	int8_t x456 = INT8_MIN;
	static int32_t t109 = -268;

    t109 = (((x453%x454)==x455)!=x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x457 = UINT32_MAX;
	volatile uint64_t x458 = 1791580881LLU;

    t110 = (((x457%x458)==x459)!=x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = -1;
	int32_t x462 = -1;
	int16_t x464 = INT16_MAX;
	int32_t t111 = 303;

    t111 = (((x461%x462)==x463)!=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x467 = 1U;
	static int64_t x468 = INT64_MIN;

    t112 = (((x465%x466)==x467)!=x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x469 = UINT16_MAX;
	static volatile int16_t x470 = 383;
	uint32_t x471 = 47U;
	static volatile int32_t t113 = -28315788;

    t113 = (((x469%x470)==x471)!=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x473 = UINT8_MAX;
	int8_t x474 = 33;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;
	int32_t t114 = -1;

    t114 = (((x473%x474)==x475)!=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x477 = UINT64_MAX;
	int8_t x479 = 0;
	static int32_t t115 = -637990181;

    t115 = (((x477%x478)==x479)!=x480);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	volatile uint64_t x483 = 1359LLU;
	int64_t x484 = INT64_MIN;
	int32_t t116 = 29987;

    t116 = (((x481%x482)==x483)!=x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x485 = UINT16_MAX;
	int32_t x486 = INT32_MAX;
	volatile int8_t x487 = 8;
	static int32_t t117 = 979104;

    t117 = (((x485%x486)==x487)!=x488);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x489 = INT16_MIN;
	int64_t x490 = INT64_MIN;
	int8_t x491 = -33;
	uint32_t x492 = 693723010U;
	volatile int32_t t118 = -232904;

    t118 = (((x489%x490)==x491)!=x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x494 = INT32_MIN;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t119 = 2312;

    t119 = (((x493%x494)==x495)!=x496);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x497 = 3443108;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = UINT32_MAX;
	static volatile int32_t t120 = 809;

    t120 = (((x497%x498)==x499)!=x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MIN;
	volatile int16_t x502 = INT16_MIN;
	volatile int32_t x503 = -88047709;
	volatile uint32_t x504 = 133789793U;
	int32_t t121 = 133931;

    t121 = (((x501%x502)==x503)!=x504);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x505 = UINT32_MAX;
	static int8_t x508 = -1;
	int32_t t122 = 119;

    t122 = (((x505%x506)==x507)!=x508);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x509 = 83656405627073031LLU;
	uint32_t x510 = 334562U;
	int64_t x511 = INT64_MIN;
	static int64_t x512 = INT64_MAX;

    t123 = (((x509%x510)==x511)!=x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x513 = 7U;
	static volatile int64_t x514 = INT64_MIN;
	uint8_t x516 = 1U;

    t124 = (((x513%x514)==x515)!=x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x518 = 69293144251290LLU;
	int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t125 = 0;

    t125 = (((x517%x518)==x519)!=x520);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = 25753760LL;
	int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MAX;
	int16_t x524 = INT16_MIN;

    t126 = (((x521%x522)==x523)!=x524);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x529 = UINT32_MAX;
	int64_t x530 = INT64_MAX;
	int64_t x532 = INT64_MIN;

    t127 = (((x529%x530)==x531)!=x532);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = -1LL;
	uint32_t x535 = UINT32_MAX;
	uint32_t x536 = 209109U;
	volatile int32_t t128 = -1023557774;

    t128 = (((x533%x534)==x535)!=x536);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x537 = UINT8_MAX;
	static int8_t x538 = INT8_MIN;
	static uint8_t x539 = 0U;
	int64_t x540 = INT64_MIN;
	volatile int32_t t129 = -342;

    t129 = (((x537%x538)==x539)!=x540);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = -314;
	static int16_t x542 = -1;
	int8_t x543 = INT8_MIN;
	int64_t x544 = INT64_MIN;
	static int32_t t130 = 4086;

    t130 = (((x541%x542)==x543)!=x544);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x546 = -1LL;
	uint16_t x547 = 361U;
	int16_t x548 = INT16_MIN;

    t131 = (((x545%x546)==x547)!=x548);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x549 = INT32_MIN;
	int16_t x550 = INT16_MAX;
	uint64_t x551 = UINT64_MAX;
	volatile int32_t t132 = -102599;

    t132 = (((x549%x550)==x551)!=x552);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x553 = -5LL;
	int16_t x555 = 92;
	int32_t t133 = -1949311;

    t133 = (((x553%x554)==x555)!=x556);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x557 = INT16_MIN;
	static uint16_t x558 = UINT16_MAX;
	uint32_t x560 = 1109U;
	volatile int32_t t134 = -87446197;

    t134 = (((x557%x558)==x559)!=x560);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = -3991;
	int16_t x563 = INT16_MIN;
	static int16_t x564 = INT16_MIN;

    t135 = (((x561%x562)==x563)!=x564);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = -2634;
	volatile uint8_t x566 = UINT8_MAX;
	int32_t x567 = -1;
	int32_t x568 = INT32_MAX;
	int32_t t136 = 45039;

    t136 = (((x565%x566)==x567)!=x568);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = -13;
	int64_t x571 = -178430205LL;
	volatile int32_t t137 = -1;

    t137 = (((x569%x570)==x571)!=x572);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x573 = INT64_MIN;
	volatile uint8_t x574 = 7U;
	static int8_t x575 = INT8_MAX;
	int32_t t138 = -26;

    t138 = (((x573%x574)==x575)!=x576);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x577 = -77;
	int16_t x578 = -14;
	static int32_t x580 = -1;
	volatile int32_t t139 = 1;

    t139 = (((x577%x578)==x579)!=x580);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = INT8_MAX;
	int32_t x583 = INT32_MIN;
	int32_t t140 = -20718;

    t140 = (((x581%x582)==x583)!=x584);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x585 = 19488U;
	static int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MIN;
	static uint32_t x588 = 631390818U;
	volatile int32_t t141 = 64563648;

    t141 = (((x585%x586)==x587)!=x588);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x589 = -1LL;
	int32_t x590 = INT32_MIN;
	int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MAX;
	volatile int32_t t142 = -534570481;

    t142 = (((x589%x590)==x591)!=x592);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x593 = UINT16_MAX;
	int8_t x594 = INT8_MIN;
	int32_t x595 = 68237721;

    t143 = (((x593%x594)==x595)!=x596);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x597 = 41U;
	static int32_t x598 = INT32_MIN;
	volatile uint16_t x599 = UINT16_MAX;
	static int8_t x600 = INT8_MIN;
	int32_t t144 = -6;

    t144 = (((x597%x598)==x599)!=x600);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x601 = 729;
	int64_t x602 = 42988339375822742LL;
	volatile uint16_t x603 = UINT16_MAX;
	volatile int8_t x604 = INT8_MAX;
	static volatile int32_t t145 = 1;

    t145 = (((x601%x602)==x603)!=x604);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x605 = UINT8_MAX;
	int32_t x606 = INT32_MIN;
	static uint8_t x607 = 9U;
	int32_t x608 = INT32_MAX;
	volatile int32_t t146 = -40;

    t146 = (((x605%x606)==x607)!=x608);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x609 = 371403U;
	uint16_t x610 = 18U;
	static int32_t x611 = 1;
	int32_t t147 = -32400327;

    t147 = (((x609%x610)==x611)!=x612);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x613 = -1;
	int32_t x614 = INT32_MAX;
	static int16_t x615 = INT16_MIN;
	volatile int32_t t148 = -586930;

    t148 = (((x613%x614)==x615)!=x616);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x617 = INT8_MIN;
	static int8_t x618 = -3;
	int16_t x619 = INT16_MAX;
	uint16_t x620 = 2U;

    t149 = (((x617%x618)==x619)!=x620);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = 431;
	volatile int32_t x622 = -528;
	volatile int64_t x623 = INT64_MAX;
	volatile int32_t t150 = -1;

    t150 = (((x621%x622)==x623)!=x624);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x625 = -1LL;
	int64_t x626 = INT64_MAX;
	int16_t x627 = INT16_MIN;
	int64_t x628 = INT64_MAX;
	int32_t t151 = 5900;

    t151 = (((x625%x626)==x627)!=x628);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x629 = INT8_MIN;
	volatile int16_t x630 = INT16_MIN;
	int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	int32_t t152 = 23668030;

    t152 = (((x629%x630)==x631)!=x632);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x634 = INT16_MIN;
	uint8_t x635 = 14U;
	static int64_t x636 = 25606902215265LL;
	volatile int32_t t153 = -18884976;

    t153 = (((x633%x634)==x635)!=x636);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x638 = INT8_MIN;
	volatile int16_t x639 = INT16_MAX;
	int8_t x640 = INT8_MIN;
	int32_t t154 = 6;

    t154 = (((x637%x638)==x639)!=x640);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = 76506855100928LL;
	int16_t x642 = -1;
	uint8_t x643 = 13U;
	int32_t x644 = INT32_MIN;
	int32_t t155 = -2377108;

    t155 = (((x641%x642)==x643)!=x644);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x645 = INT16_MAX;
	volatile uint64_t x647 = 16774388643716878LLU;
	int64_t x648 = 3452798003LL;
	static volatile int32_t t156 = 1047960;

    t156 = (((x645%x646)==x647)!=x648);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x650 = INT32_MAX;
	static int32_t x651 = INT32_MIN;
	static int8_t x652 = INT8_MIN;
	volatile int32_t t157 = 0;

    t157 = (((x649%x650)==x651)!=x652);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x655 = 38;
	int64_t x656 = -1LL;
	volatile int32_t t158 = 1;

    t158 = (((x653%x654)==x655)!=x656);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x657 = 1U;
	int32_t x658 = INT32_MAX;
	uint8_t x659 = 76U;
	int64_t x660 = -1LL;
	volatile int32_t t159 = 202462314;

    t159 = (((x657%x658)==x659)!=x660);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x661 = 14374;
	int32_t x662 = -1;
	volatile uint16_t x663 = 5U;
	int32_t x664 = -93;
	int32_t t160 = -236610;

    t160 = (((x661%x662)==x663)!=x664);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x665 = 0U;
	int64_t x666 = INT64_MIN;
	volatile int32_t t161 = -1;

    t161 = (((x665%x666)==x667)!=x668);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x669 = 2638676194810859LL;
	int64_t x670 = INT64_MIN;
	static int8_t x672 = INT8_MAX;
	static volatile int32_t t162 = -2834;

    t162 = (((x669%x670)==x671)!=x672);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = 1697;
	static uint8_t x674 = 81U;
	uint8_t x675 = 3U;
	static volatile int8_t x676 = -16;
	int32_t t163 = -763;

    t163 = (((x673%x674)==x675)!=x676);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x679 = -298689;
	int8_t x680 = INT8_MIN;
	volatile int32_t t164 = 55905819;

    t164 = (((x677%x678)==x679)!=x680);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = 0;
	volatile int64_t x683 = -1LL;
	static volatile int32_t x684 = INT32_MIN;
	volatile int32_t t165 = -46373;

    t165 = (((x681%x682)==x683)!=x684);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = -1;
	volatile int32_t t166 = 0;

    t166 = (((x685%x686)==x687)!=x688);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x689 = 0;
	int64_t x690 = INT64_MAX;
	int32_t x692 = -154800;
	int32_t t167 = -1191317;

    t167 = (((x689%x690)==x691)!=x692);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x693 = INT16_MIN;
	int64_t x695 = -1LL;
	static volatile int32_t t168 = -22082711;

    t168 = (((x693%x694)==x695)!=x696);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = INT8_MIN;
	static int32_t x698 = INT32_MIN;
	int32_t x700 = 3441473;
	int32_t t169 = -631;

    t169 = (((x697%x698)==x699)!=x700);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x701 = -13400528331929161LL;
	int64_t x702 = INT64_MAX;
	int8_t x704 = -1;
	volatile int32_t t170 = 13058;

    t170 = (((x701%x702)==x703)!=x704);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x705 = 41U;
	static int16_t x706 = -1;
	int32_t x708 = 235699;
	int32_t t171 = -91;

    t171 = (((x705%x706)==x707)!=x708);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x709 = -220162896;
	int16_t x710 = 10;
	static int16_t x711 = -7859;
	uint16_t x712 = 2400U;

    t172 = (((x709%x710)==x711)!=x712);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x713 = 5166;
	volatile uint32_t x714 = 26U;
	int8_t x715 = -1;
	volatile int64_t x716 = -1LL;
	volatile int32_t t173 = -54589419;

    t173 = (((x713%x714)==x715)!=x716);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x717 = 131728LL;
	static volatile int8_t x718 = INT8_MIN;
	int64_t x719 = INT64_MIN;

    t174 = (((x717%x718)==x719)!=x720);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x721 = INT64_MIN;
	static int16_t x722 = 275;
	int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	volatile int32_t t175 = 5;

    t175 = (((x721%x722)==x723)!=x724);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = -196358529891366LL;
	uint64_t x726 = 1LLU;
	int16_t x727 = INT16_MIN;
	volatile uint16_t x728 = UINT16_MAX;
	volatile int32_t t176 = -256;

    t176 = (((x725%x726)==x727)!=x728);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = INT32_MIN;
	volatile int8_t x730 = INT8_MIN;
	volatile int32_t x731 = INT32_MIN;
	volatile int32_t t177 = -76616171;

    t177 = (((x729%x730)==x731)!=x732);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x734 = INT16_MAX;
	int16_t x735 = INT16_MAX;
	uint16_t x736 = 82U;

    t178 = (((x733%x734)==x735)!=x736);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = -1;
	int32_t x739 = -258907;
	static int8_t x740 = INT8_MIN;

    t179 = (((x737%x738)==x739)!=x740);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x741 = -18;
	uint32_t x742 = 46U;
	int64_t x743 = INT64_MAX;
	static int8_t x744 = -1;
	int32_t t180 = -457730898;

    t180 = (((x741%x742)==x743)!=x744);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x745 = 6U;
	uint16_t x746 = 15612U;
	uint64_t x747 = 4398668341706389LLU;
	int32_t t181 = 975808;

    t181 = (((x745%x746)==x747)!=x748);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x749 = 31071U;
	volatile int8_t x750 = -2;
	static uint16_t x752 = 14U;
	volatile int32_t t182 = 16;

    t182 = (((x749%x750)==x751)!=x752);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x754 = 37264U;
	int32_t x755 = INT32_MIN;
	int32_t t183 = 13732849;

    t183 = (((x753%x754)==x755)!=x756);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x757 = -1LL;
	volatile int32_t x758 = 452874010;
	volatile int32_t x759 = -1;
	int64_t x760 = -1LL;
	static volatile int32_t t184 = 2227;

    t184 = (((x757%x758)==x759)!=x760);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x762 = INT32_MIN;
	volatile uint32_t x763 = UINT32_MAX;
	int16_t x764 = INT16_MIN;
	volatile int32_t t185 = -371721614;

    t185 = (((x761%x762)==x763)!=x764);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x766 = 3218200090321LL;
	int64_t x767 = INT64_MAX;
	int32_t t186 = 3;

    t186 = (((x765%x766)==x767)!=x768);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x769 = INT16_MAX;
	uint8_t x770 = 2U;
	int16_t x771 = 411;
	int16_t x772 = INT16_MIN;
	static int32_t t187 = 17309;

    t187 = (((x769%x770)==x771)!=x772);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x773 = 27U;
	int8_t x774 = 12;
	int8_t x775 = -1;
	int32_t t188 = 30251706;

    t188 = (((x773%x774)==x775)!=x776);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x779 = INT16_MIN;
	uint8_t x780 = 20U;
	volatile int32_t t189 = 92906550;

    t189 = (((x777%x778)==x779)!=x780);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x781 = -1;
	int64_t x782 = INT64_MIN;
	static int16_t x783 = INT16_MIN;
	uint16_t x784 = UINT16_MAX;

    t190 = (((x781%x782)==x783)!=x784);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x785 = 12;
	static volatile uint16_t x786 = UINT16_MAX;
	int8_t x787 = 8;
	int32_t t191 = -602367;

    t191 = (((x785%x786)==x787)!=x788);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x789 = -14652277;
	volatile uint64_t x791 = 38173609629638LLU;
	static uint8_t x792 = 9U;
	int32_t t192 = 1;

    t192 = (((x789%x790)==x791)!=x792);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x794 = -3034;
	static volatile uint16_t x795 = 375U;
	int32_t x796 = INT32_MAX;

    t193 = (((x793%x794)==x795)!=x796);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x797 = INT16_MIN;
	static int32_t x799 = 546;
	int64_t x800 = -1LL;
	volatile int32_t t194 = -3;

    t194 = (((x797%x798)==x799)!=x800);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x801 = 22284512564306LL;
	int64_t x802 = -1LL;
	uint64_t x803 = 30692303LLU;
	volatile int32_t x804 = 12146;
	volatile int32_t t195 = 472;

    t195 = (((x801%x802)==x803)!=x804);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x805 = 2LLU;
	uint32_t x806 = UINT32_MAX;
	int16_t x807 = INT16_MAX;
	int64_t x808 = -1LL;
	static volatile int32_t t196 = -21851;

    t196 = (((x805%x806)==x807)!=x808);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = -1;
	uint32_t x815 = 789U;
	static volatile int64_t x816 = INT64_MIN;
	int32_t t197 = 298664;

    t197 = (((x813%x814)==x815)!=x816);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x817 = 1U;
	int64_t x819 = INT64_MIN;
	int16_t x820 = INT16_MIN;

    t198 = (((x817%x818)==x819)!=x820);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x822 = INT16_MIN;
	volatile uint32_t x823 = 104245902U;
	int32_t x824 = -1;
	static volatile int32_t t199 = 90;

    t199 = (((x821%x822)==x823)!=x824);

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

