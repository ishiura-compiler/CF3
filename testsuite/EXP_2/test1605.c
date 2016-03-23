
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

static int8_t x2 = -5;
uint32_t x4 = 599750U;
int8_t x7 = -1;
volatile uint16_t x9 = 2U;
int16_t x18 = -701;
volatile int16_t x25 = -1;
uint16_t x27 = 22832U;
int64_t x28 = INT64_MIN;
volatile uint8_t x31 = UINT8_MAX;
int64_t x42 = INT64_MIN;
uint8_t x44 = 23U;
volatile int32_t t10 = 4066;
uint32_t x45 = 92920U;
int8_t x49 = -1;
static volatile int32_t t13 = -63762922;
int8_t x59 = INT8_MIN;
int32_t t15 = 200;
int8_t x65 = INT8_MIN;
uint16_t x67 = UINT16_MAX;
static int16_t x68 = INT16_MIN;
int64_t x72 = INT64_MIN;
uint64_t x76 = UINT64_MAX;
uint64_t x79 = 152691610253975LLU;
uint32_t x82 = UINT32_MAX;
volatile int16_t x86 = -1;
volatile int32_t t21 = -40555214;
uint32_t x89 = UINT32_MAX;
int64_t x93 = INT64_MIN;
volatile int64_t x105 = INT64_MAX;
int32_t x107 = -382177;
int16_t x110 = -6;
int32_t x114 = INT32_MAX;
static volatile int16_t x116 = INT16_MIN;
volatile int32_t t28 = -132454705;
int8_t x118 = -1;
static uint16_t x121 = 38U;
int8_t x123 = -1;
int64_t x129 = -1LL;
static int64_t x132 = INT64_MIN;
int32_t t32 = -2097;
volatile int64_t x135 = -31372LL;
static int64_t x139 = INT64_MAX;
int8_t x140 = INT8_MIN;
volatile int32_t x141 = INT32_MIN;
static int8_t x144 = -1;
uint32_t x151 = 18U;
uint32_t x152 = UINT32_MAX;
int32_t x153 = INT32_MIN;
volatile int64_t x159 = -1LL;
static int64_t x163 = INT64_MIN;
int32_t x166 = 31742256;
static volatile int16_t x167 = INT16_MIN;
int32_t x168 = INT32_MAX;
int64_t x181 = INT64_MIN;
int32_t x183 = 254801182;
int64_t x187 = INT64_MAX;
int32_t x189 = 1;
int32_t x190 = -325945;
int32_t t47 = -10;
int16_t x204 = INT16_MIN;
int32_t t51 = -10;
volatile int32_t t52 = 6609;
static volatile uint16_t x217 = 248U;
int16_t x221 = -1;
uint8_t x222 = 113U;
int64_t x223 = -1LL;
int64_t x225 = INT64_MAX;
uint64_t x233 = 3416LLU;
uint16_t x234 = 3729U;
int32_t x235 = INT32_MIN;
int64_t x236 = 38508LL;
int32_t t59 = 64699461;
int64_t x241 = -1LL;
int64_t x245 = INT64_MIN;
int16_t x250 = INT16_MAX;
static int16_t x253 = INT16_MIN;
uint64_t x257 = 2085LLU;
uint64_t x264 = 23676195673574LLU;
volatile int32_t t66 = 380;
uint64_t x275 = 1LLU;
uint32_t x276 = 11782806U;
volatile int32_t t68 = 157715;
int32_t t69 = 2;
uint64_t x282 = 3009LLU;
int16_t x283 = 0;
int64_t x288 = -980677533191530920LL;
static uint8_t x289 = 3U;
int8_t x290 = -1;
int32_t t72 = 15897885;
static int16_t x296 = 0;
static uint8_t x297 = UINT8_MAX;
uint16_t x299 = 27U;
uint16_t x307 = UINT16_MAX;
int32_t x313 = -1;
int64_t x318 = INT64_MIN;
int16_t x322 = INT16_MAX;
static int8_t x324 = INT8_MAX;
int16_t x331 = -1;
uint16_t x332 = UINT16_MAX;
int64_t x338 = -1LL;
uint16_t x342 = 29494U;
volatile int16_t x343 = 0;
int16_t x344 = INT16_MIN;
int64_t x345 = INT64_MAX;
int8_t x347 = INT8_MIN;
int32_t t86 = -9822;
volatile int32_t t87 = -27344281;
volatile int32_t x356 = -887629;
volatile int32_t t90 = -773955833;
uint64_t x367 = UINT64_MAX;
volatile int32_t t91 = -920;
int64_t x370 = 0LL;
volatile int32_t x371 = INT32_MAX;
volatile int16_t x373 = -1;
int8_t x374 = 19;
uint16_t x376 = 14U;
int16_t x379 = 0;
static int64_t x388 = 8041LL;
uint8_t x391 = 2U;
static volatile int32_t x393 = -1;
int32_t t102 = 165;
int32_t x413 = -1;
int64_t x419 = INT64_MAX;
volatile int32_t t104 = -5120;
int32_t x424 = INT32_MIN;
int16_t x429 = INT16_MIN;
uint32_t x430 = UINT32_MAX;
int8_t x435 = INT8_MIN;
int32_t x443 = -1;
uint64_t x444 = UINT64_MAX;
int16_t x447 = INT16_MIN;
volatile int32_t t111 = 1;
int32_t x452 = 5391;
int32_t t113 = -55175;
uint64_t x458 = 4428456490749LLU;
static int16_t x463 = INT16_MIN;
int8_t x465 = 2;
int8_t x467 = 1;
uint8_t x468 = UINT8_MAX;
int16_t x470 = -48;
volatile int32_t t117 = -15;
uint16_t x478 = UINT16_MAX;
volatile uint64_t x483 = UINT64_MAX;
uint32_t x488 = 14953U;
int32_t t121 = 1;
int32_t x490 = -1;
volatile int32_t t122 = -2353165;
uint64_t x494 = 8788364LLU;
uint8_t x495 = 4U;
int32_t x498 = INT32_MAX;
int32_t t124 = -126368565;
int32_t t127 = -10871136;
int16_t x514 = INT16_MIN;
static int16_t x515 = INT16_MAX;
int32_t t128 = -2813;
static int64_t x520 = INT64_MIN;
volatile int16_t x525 = INT16_MIN;
uint64_t x533 = 8468815412836786367LLU;
uint16_t x534 = 5491U;
volatile int16_t x536 = -1;
int16_t x539 = 14;
int8_t x542 = INT8_MIN;
int8_t x546 = 0;
volatile int16_t x548 = INT16_MAX;
int8_t x554 = INT8_MIN;
static int16_t x560 = -392;
static volatile int32_t t139 = 1;
int32_t x564 = -703412;
uint32_t x566 = 4999U;
static int32_t x572 = 1;
static int64_t x576 = INT64_MAX;
static int16_t x577 = INT16_MIN;
volatile int8_t x581 = -9;
int32_t t145 = -37791202;
volatile int8_t x586 = -13;
volatile int32_t t146 = 1;
int32_t x592 = INT32_MIN;
static uint64_t x593 = 107790610216661LLU;
uint16_t x595 = 2454U;
static int32_t x599 = -1;
volatile int32_t x602 = INT32_MAX;
int16_t x605 = INT16_MIN;
int32_t x606 = -1;
volatile int8_t x608 = INT8_MAX;
volatile int32_t t153 = 937;
int64_t x620 = -254291786533874669LL;
volatile int32_t t157 = -10;
int32_t x633 = 47789;
static volatile int32_t t158 = 33099;
static volatile int8_t x646 = INT8_MIN;
uint32_t x648 = UINT32_MAX;
static uint16_t x650 = 932U;
int64_t x652 = 7703334555LL;
volatile int32_t t162 = 81;
volatile int32_t x658 = -33245;
uint16_t x661 = UINT16_MAX;
int32_t t165 = -165127;
volatile int32_t t166 = -459584;
int16_t x674 = INT16_MAX;
volatile uint16_t x675 = UINT16_MAX;
uint64_t x677 = 1641LLU;
int8_t x685 = -1;
int8_t x687 = INT8_MAX;
volatile uint32_t x699 = 28297719U;
uint16_t x700 = 1132U;
static int16_t x712 = -66;
uint64_t x716 = UINT64_MAX;
uint64_t x717 = UINT64_MAX;
volatile int32_t x724 = -68640;
int16_t x727 = INT16_MAX;
int64_t x729 = INT64_MIN;
volatile int32_t t182 = -4;
int64_t x734 = INT64_MIN;
volatile uint32_t x740 = 1259984066U;
static int16_t x741 = INT16_MAX;
volatile int8_t x749 = INT8_MAX;
volatile int64_t x756 = INT64_MIN;
static uint32_t x757 = UINT32_MAX;
int32_t x767 = 1;
static int64_t x771 = 8872623LL;
volatile int64_t x776 = -1LL;
volatile int32_t t193 = -251036;
volatile uint16_t x784 = 138U;
int32_t t195 = -861;
volatile uint32_t x795 = 4286081U;
volatile uint64_t x796 = UINT64_MAX;


void f0(void) {
    	uint32_t x1 = 1U;
	uint16_t x3 = 3U;
	static int32_t t0 = 351500;

    t0 = ((x1*(x2>x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 5U;
	static int64_t x6 = INT64_MIN;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -189078;

    t1 = ((x5*(x6>x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x10 = -4;
	int64_t x11 = 170532974LL;
	uint64_t x12 = 3386224214LLU;
	int32_t t2 = -3237;

    t2 = ((x9*(x10>x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int32_t x14 = -386;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 350039U;
	volatile int32_t t3 = 1;

    t3 = ((x13*(x14>x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	static uint8_t x19 = 9U;
	uint16_t x20 = 941U;
	int32_t t4 = 30229037;

    t4 = ((x17*(x18>x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MAX;
	uint8_t x23 = 1U;
	uint8_t x24 = 7U;
	volatile int32_t t5 = -76;

    t5 = ((x21*(x22>x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x26 = 24080U;
	static int32_t t6 = 24223;

    t6 = ((x25*(x26>x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	uint16_t x32 = 0U;
	int32_t t7 = 875;

    t7 = ((x29*(x30>x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	volatile int32_t x34 = INT32_MAX;
	int16_t x35 = -1;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = -10;

    t8 = ((x33*(x34>x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 6564765804823LLU;
	volatile int8_t x38 = -57;
	uint8_t x39 = 55U;
	static int32_t x40 = INT32_MAX;
	int32_t t9 = -1;

    t9 = ((x37*(x38>x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 2314LLU;
	int16_t x43 = INT16_MIN;

    t10 = ((x41*(x42>x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -9;

    t11 = ((x45*(x46>x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = UINT64_MAX;
	int16_t x51 = -4;
	int64_t x52 = -75LL;
	volatile int32_t t12 = -74;

    t12 = ((x49*(x50>x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	int32_t x55 = 141;
	int32_t x56 = INT32_MIN;

    t13 = ((x53*(x54>x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -1;
	int8_t x58 = INT8_MAX;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -1;

    t14 = ((x57*(x58>x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = UINT64_MAX;
	int64_t x62 = INT64_MAX;
	static int16_t x63 = INT16_MIN;
	volatile int32_t x64 = 28351;

    t15 = ((x61*(x62>x63))>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -1;
	volatile int32_t t16 = 107152;

    t16 = ((x65*(x66>x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 51704590944480886LLU;
	volatile int64_t x70 = -6318837884604659LL;
	volatile int32_t x71 = 209205;
	int32_t t17 = -1;

    t17 = ((x69*(x70>x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MAX;
	static volatile int16_t x74 = INT16_MIN;
	volatile uint16_t x75 = 0U;
	int32_t t18 = 1946;

    t18 = ((x73*(x74>x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -354618981;
	uint8_t x78 = 54U;
	int64_t x80 = -1LL;
	int32_t t19 = -2683154;

    t19 = ((x77*(x78>x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 730574;
	uint16_t x83 = 1U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 1;

    t20 = ((x81*(x82>x83))>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 4U;
	int64_t x87 = -1LL;
	volatile uint32_t x88 = UINT32_MAX;

    t21 = ((x85*(x86>x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = 0U;
	int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -262548;

    t22 = ((x89*(x90>x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = -1;
	int32_t x95 = 94783;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = 5;

    t23 = ((x93*(x94>x95))>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = UINT16_MAX;
	static uint32_t x98 = 8102462U;
	static int16_t x99 = INT16_MIN;
	volatile int8_t x100 = -20;
	volatile int32_t t24 = 435;

    t24 = ((x97*(x98>x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int64_t x102 = -7149906311552LL;
	volatile int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -1514678;

    t25 = ((x101*(x102>x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = 3;
	uint16_t x108 = 32U;
	static volatile int32_t t26 = -509283772;

    t26 = ((x105*(x106>x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = -1;
	int16_t x111 = 0;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 28598431;

    t27 = ((x109*(x110>x111))>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MIN;
	uint16_t x115 = 24U;

    t28 = ((x113*(x114>x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = INT8_MAX;
	int16_t x119 = -1720;
	int64_t x120 = INT64_MIN;
	int32_t t29 = 516419817;

    t29 = ((x117*(x118>x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = 12494723LL;
	volatile int16_t x124 = INT16_MIN;
	int32_t t30 = 47;

    t30 = ((x121*(x122>x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 7;
	volatile int32_t x126 = 238082;
	int64_t x127 = -15951LL;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -32635294;

    t31 = ((x125*(x126>x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x130 = -284922LL;
	static uint16_t x131 = 11002U;

    t32 = ((x129*(x130>x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	volatile int32_t x134 = INT32_MIN;
	int32_t x136 = -1030982118;
	volatile int32_t t33 = -3;

    t33 = ((x133*(x134>x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = -42;
	static int16_t x138 = -1;
	volatile int32_t t34 = 19471;

    t34 = ((x137*(x138>x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	int32_t t35 = -100053;

    t35 = ((x141*(x142>x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x146 = 24;
	volatile int16_t x147 = INT16_MIN;
	uint64_t x148 = 30362320LLU;
	static int32_t t36 = 3345;

    t36 = ((x145*(x146>x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	volatile int32_t t37 = -802664;

    t37 = ((x149*(x150>x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MIN;
	volatile int64_t x155 = -1LL;
	int8_t x156 = -1;
	int32_t t38 = -122148;

    t38 = ((x153*(x154>x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 140109991U;
	int8_t x158 = -1;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -220033621;

    t39 = ((x157*(x158>x159))>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 31U;
	static uint64_t x162 = 4062427874020826298LLU;
	int8_t x164 = -1;
	volatile int32_t t40 = 2;

    t40 = ((x161*(x162>x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int32_t t41 = 206;

    t41 = ((x165*(x166>x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = 7960;
	volatile uint16_t x170 = 76U;
	int64_t x171 = INT64_MAX;
	int64_t x172 = -10LL;
	static int32_t t42 = -933;

    t42 = ((x169*(x170>x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 5250U;
	static volatile int64_t x176 = -1LL;
	volatile int32_t t43 = 7967;

    t43 = ((x173*(x174>x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MAX;
	uint32_t x178 = 1988841857U;
	int64_t x179 = -856503928293922352LL;
	int16_t x180 = 1;
	volatile int32_t t44 = 6283541;

    t44 = ((x177*(x178>x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -962;

    t45 = ((x181*(x182>x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MAX;
	static uint8_t x188 = UINT8_MAX;
	int32_t t46 = -29;

    t46 = ((x185*(x186>x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x191 = 25U;
	volatile int32_t x192 = 1574640;

    t47 = ((x189*(x190>x191))>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 192513110644584183LL;
	volatile uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 153681498204790820LLU;
	static int8_t x196 = INT8_MIN;
	static int32_t t48 = -238320169;

    t48 = ((x193*(x194>x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = 2458;
	int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	int16_t x200 = -629;
	static volatile int32_t t49 = -119;

    t49 = ((x197*(x198>x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	int32_t x203 = -2;
	int32_t t50 = -35;

    t50 = ((x201*(x202>x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	static int64_t x207 = -26439LL;
	int8_t x208 = INT8_MAX;

    t51 = ((x205*(x206>x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 90737164;
	uint8_t x210 = UINT8_MAX;
	volatile uint64_t x211 = 513895292LLU;
	int64_t x212 = INT64_MIN;

    t52 = ((x209*(x210>x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	int32_t x214 = INT32_MIN;
	volatile uint8_t x215 = 54U;
	int64_t x216 = INT64_MIN;
	static int32_t t53 = 93;

    t53 = ((x213*(x214>x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -1;
	int8_t x219 = -1;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 26;

    t54 = ((x217*(x218>x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x224 = INT32_MIN;
	static int32_t t55 = 2035861;

    t55 = ((x221*(x222>x223))>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x226 = INT64_MAX;
	static uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 100797;

    t56 = ((x225*(x226>x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 1889LLU;
	static int64_t x230 = -1LL;
	int32_t x231 = 96809;
	static uint64_t x232 = 94442LLU;
	volatile int32_t t57 = -59908569;

    t57 = ((x229*(x230>x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t t58 = -132334707;

    t58 = ((x233*(x234>x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 1U;
	volatile int32_t x238 = INT32_MIN;
	int64_t x239 = -1LL;
	volatile uint8_t x240 = 7U;

    t59 = ((x237*(x238>x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MAX;
	volatile int16_t x243 = INT16_MIN;
	volatile int16_t x244 = -1;
	int32_t t60 = -63;

    t60 = ((x241*(x242>x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	volatile int64_t x248 = -16511142956080008LL;
	int32_t t61 = 218549;

    t61 = ((x245*(x246>x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	static int8_t x251 = -1;
	uint32_t x252 = 15972U;
	volatile int32_t t62 = 14589;

    t62 = ((x249*(x250>x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = INT64_MAX;
	int8_t x255 = -1;
	uint16_t x256 = 19256U;
	int32_t t63 = 55038448;

    t63 = ((x253*(x254>x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MIN;
	volatile int8_t x259 = INT8_MAX;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 418;

    t64 = ((x257*(x258>x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MAX;
	static uint16_t x262 = 187U;
	int64_t x263 = -1LL;
	static volatile int32_t t65 = -3;

    t65 = ((x261*(x262>x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 10;
	static int8_t x266 = INT8_MIN;
	uint8_t x267 = 1U;
	int8_t x268 = 51;

    t66 = ((x265*(x266>x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x269 = 867U;
	int16_t x270 = INT16_MAX;
	uint8_t x271 = 0U;
	uint16_t x272 = UINT16_MAX;
	int32_t t67 = 237;

    t67 = ((x269*(x270>x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	int8_t x274 = -1;

    t68 = ((x273*(x274>x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MAX;
	volatile int16_t x279 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;

    t69 = ((x277*(x278>x279))>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	static int16_t x284 = -1;
	int32_t t70 = -261765;

    t70 = ((x281*(x282>x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 0U;
	static volatile int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t71 = 73;

    t71 = ((x285*(x286>x287))>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x291 = UINT16_MAX;
	uint16_t x292 = 1487U;

    t72 = ((x289*(x290>x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x293 = UINT8_MAX;
	int16_t x294 = -1;
	int32_t x295 = -1;
	volatile int32_t t73 = 0;

    t73 = ((x293*(x294>x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = INT8_MAX;
	static int8_t x300 = INT8_MIN;
	int32_t t74 = 982;

    t74 = ((x297*(x298>x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x301 = UINT32_MAX;
	static int64_t x302 = 24015585LL;
	int16_t x303 = -1;
	int64_t x304 = -1LL;
	volatile int32_t t75 = 776;

    t75 = ((x301*(x302>x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -55436903696LL;
	uint8_t x306 = 91U;
	uint32_t x308 = 196254U;
	int32_t t76 = -4278811;

    t76 = ((x305*(x306>x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -25;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = -18;
	int16_t x312 = -1937;
	volatile int32_t t77 = -944011;

    t77 = ((x309*(x310>x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MAX;
	volatile int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MAX;
	int32_t t78 = 445;

    t78 = ((x313*(x314>x315))>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 57U;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 83;

    t79 = ((x317*(x318>x319))>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 1;
	static int8_t x323 = -1;
	int32_t t80 = -1;

    t80 = ((x321*(x322>x323))>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x325 = UINT16_MAX;
	int8_t x326 = -3;
	int8_t x327 = -3;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 1105;

    t81 = ((x325*(x326>x327))>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = INT32_MIN;
	static int32_t x330 = -1;
	int32_t t82 = -159919;

    t82 = ((x329*(x330>x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 129466U;
	volatile int64_t x334 = INT64_MIN;
	static int8_t x335 = INT8_MAX;
	volatile int8_t x336 = INT8_MIN;
	static volatile int32_t t83 = -7988707;

    t83 = ((x333*(x334>x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 12U;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 1U;
	volatile int32_t t84 = 28272;

    t84 = ((x337*(x338>x339))>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MAX;
	static volatile int32_t t85 = -6754455;

    t85 = ((x341*(x342>x343))>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = 11;
	int64_t x348 = INT64_MIN;

    t86 = ((x345*(x346>x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	volatile uint8_t x350 = 5U;
	uint16_t x351 = UINT16_MAX;
	volatile int8_t x352 = INT8_MAX;

    t87 = ((x349*(x350>x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = -1;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = 0U;
	volatile int32_t t88 = -64259145;

    t88 = ((x353*(x354>x355))>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 0U;
	static volatile uint64_t x358 = UINT64_MAX;
	uint32_t x359 = 2272306U;
	int64_t x360 = -1LL;
	volatile int32_t t89 = 0;

    t89 = ((x357*(x358>x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = UINT64_MAX;
	uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 121U;
	int32_t x364 = -21815126;

    t90 = ((x361*(x362>x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -9397065;
	static uint16_t x366 = UINT16_MAX;
	int8_t x368 = INT8_MIN;

    t91 = ((x365*(x366>x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 0U;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -306154;

    t92 = ((x369*(x370>x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x375 = INT8_MIN;
	int32_t t93 = -73;

    t93 = ((x373*(x374>x375))>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 8U;
	volatile int16_t x378 = INT16_MAX;
	static volatile int16_t x380 = -1;
	int32_t t94 = -10377876;

    t94 = ((x377*(x378>x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	int64_t x382 = INT64_MIN;
	uint32_t x383 = 9U;
	int8_t x384 = -1;
	int32_t t95 = -7728851;

    t95 = ((x381*(x382>x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 83531;
	int16_t x386 = -1;
	volatile int64_t x387 = -53307667LL;
	volatile int32_t t96 = 163;

    t96 = ((x385*(x386>x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = 1U;
	int64_t x390 = 33243169822801LL;
	int16_t x392 = 4;
	volatile int32_t t97 = -56;

    t97 = ((x389*(x390>x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x394 = UINT8_MAX;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t98 = -116636157;

    t98 = ((x393*(x394>x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	int32_t x398 = -1;
	static uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = INT64_MAX;
	int32_t t99 = -762;

    t99 = ((x397*(x398>x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = 28U;
	static volatile int32_t x402 = INT32_MIN;
	int8_t x403 = -7;
	int32_t x404 = 1;
	volatile int32_t t100 = 1387114;

    t100 = ((x401*(x402>x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MAX;
	int16_t x406 = INT16_MAX;
	volatile int64_t x407 = INT64_MIN;
	uint16_t x408 = 15769U;
	volatile int32_t t101 = 6395940;

    t101 = ((x405*(x406>x407))>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 1U;
	volatile int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MIN;
	int16_t x412 = INT16_MIN;

    t102 = ((x409*(x410>x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = -1;
	static int32_t x415 = INT32_MAX;
	int8_t x416 = -1;
	volatile int32_t t103 = 27;

    t103 = ((x413*(x414>x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 6907032665443788216LLU;
	int64_t x418 = -11LL;
	int16_t x420 = INT16_MIN;

    t104 = ((x417*(x418>x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	uint8_t x423 = 1U;
	volatile int32_t t105 = -3301732;

    t105 = ((x421*(x422>x423))>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	int64_t x426 = 13LL;
	int64_t x427 = -1LL;
	int8_t x428 = -3;
	int32_t t106 = 432593904;

    t106 = ((x425*(x426>x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x431 = INT8_MIN;
	volatile uint16_t x432 = UINT16_MAX;
	volatile int32_t t107 = 4378405;

    t107 = ((x429*(x430>x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 957838U;
	static int8_t x434 = INT8_MIN;
	volatile int64_t x436 = INT64_MAX;
	int32_t t108 = 26527101;

    t108 = ((x433*(x434>x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	static int32_t x438 = -130647;
	int64_t x439 = INT64_MAX;
	int16_t x440 = -1;
	static int32_t t109 = -1318475;

    t109 = ((x437*(x438>x439))>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = UINT32_MAX;
	uint16_t x442 = 4U;
	int32_t t110 = -957;

    t110 = ((x441*(x442>x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int32_t x446 = INT32_MAX;
	volatile uint32_t x448 = 1943691321U;

    t111 = ((x445*(x446>x447))>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = INT64_MAX;
	uint16_t x450 = 31U;
	static volatile int16_t x451 = INT16_MIN;
	volatile int32_t t112 = -58057580;

    t112 = ((x449*(x450>x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 1U;
	volatile int8_t x454 = -54;
	static int32_t x455 = INT32_MIN;
	static int16_t x456 = INT16_MIN;

    t113 = ((x453*(x454>x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	static int8_t x459 = 1;
	int16_t x460 = 14;
	int32_t t114 = 11157755;

    t114 = ((x457*(x458>x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = 53;
	static volatile int32_t x462 = INT32_MIN;
	volatile uint16_t x464 = UINT16_MAX;
	volatile int32_t t115 = -186030;

    t115 = ((x461*(x462>x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x466 = INT64_MIN;
	int32_t t116 = 14821374;

    t116 = ((x465*(x466>x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	static int16_t x471 = INT16_MIN;
	static int64_t x472 = INT64_MAX;

    t117 = ((x469*(x470>x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -53529825LL;
	static volatile uint64_t x474 = 95716791379LLU;
	static volatile int64_t x475 = 12345243987LL;
	int16_t x476 = -1;
	volatile int32_t t118 = 0;

    t118 = ((x473*(x474>x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	static volatile uint8_t x479 = 29U;
	volatile int64_t x480 = INT64_MIN;
	volatile int32_t t119 = 523;

    t119 = ((x477*(x478>x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 12;
	int64_t x482 = -1LL;
	uint16_t x484 = 106U;
	int32_t t120 = 34420467;

    t120 = ((x481*(x482>x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x485 = 21U;
	uint8_t x486 = 44U;
	volatile uint64_t x487 = UINT64_MAX;

    t121 = ((x485*(x486>x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = 3;
	int32_t x491 = INT32_MAX;
	uint8_t x492 = 54U;

    t122 = ((x489*(x490>x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	static uint64_t x496 = 11203LLU;
	volatile int32_t t123 = 212;

    t123 = ((x493*(x494>x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int64_t x499 = -284LL;
	int16_t x500 = INT16_MIN;

    t124 = ((x497*(x498>x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 1728LL;
	int16_t x502 = INT16_MIN;
	volatile int32_t x503 = -2215;
	int64_t x504 = -1LL;
	int32_t t125 = -3919438;

    t125 = ((x501*(x502>x503))>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 3U;
	static int8_t x506 = 19;
	uint32_t x507 = 2339254U;
	int32_t x508 = -3302;
	volatile int32_t t126 = 76279571;

    t126 = ((x505*(x506>x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = 6;
	uint64_t x510 = UINT64_MAX;
	int16_t x511 = -1;
	int8_t x512 = INT8_MIN;

    t127 = ((x509*(x510>x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x513 = 21308U;
	int64_t x516 = INT64_MIN;

    t128 = ((x513*(x514>x515))>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	int32_t x518 = INT32_MIN;
	int64_t x519 = INT64_MAX;
	volatile int32_t t129 = -720809;

    t129 = ((x517*(x518>x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = 88LLU;
	volatile int32_t x522 = INT32_MIN;
	int32_t x523 = INT32_MIN;
	uint16_t x524 = 9756U;
	volatile int32_t t130 = 31065901;

    t130 = ((x521*(x522>x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = -1;
	int16_t x527 = INT16_MAX;
	static int16_t x528 = INT16_MAX;
	volatile int32_t t131 = -391;

    t131 = ((x525*(x526>x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MIN;
	int16_t x530 = -1;
	int32_t x531 = INT32_MAX;
	int8_t x532 = -1;
	int32_t t132 = 3208769;

    t132 = ((x529*(x530>x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = INT32_MIN;
	int32_t t133 = 18751518;

    t133 = ((x533*(x534>x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	int64_t x538 = 47LL;
	static int32_t x540 = INT32_MIN;
	volatile int32_t t134 = 1002;

    t134 = ((x537*(x538>x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 51U;
	int64_t x543 = INT64_MIN;
	static int64_t x544 = INT64_MIN;
	volatile int32_t t135 = -249061378;

    t135 = ((x541*(x542>x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x547 = UINT32_MAX;
	int32_t t136 = 6865253;

    t136 = ((x545*(x546>x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = -1;
	volatile int64_t x550 = -1LL;
	static volatile int16_t x551 = INT16_MIN;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t137 = -1;

    t137 = ((x549*(x550>x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	uint32_t x555 = 2U;
	int8_t x556 = 2;
	int32_t t138 = -755725463;

    t138 = ((x553*(x554>x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	uint16_t x558 = 436U;
	volatile uint64_t x559 = UINT64_MAX;

    t139 = ((x557*(x558>x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1LL;
	static uint8_t x562 = 108U;
	int16_t x563 = INT16_MIN;
	int32_t t140 = -14532692;

    t140 = ((x561*(x562>x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -807921;
	static uint32_t x567 = 260U;
	int32_t x568 = 2516;
	volatile int32_t t141 = -125278;

    t141 = ((x565*(x566>x567))>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	uint8_t x570 = 0U;
	static int64_t x571 = 0LL;
	volatile int32_t t142 = 1646;

    t142 = ((x569*(x570>x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 0U;
	uint32_t x574 = UINT32_MAX;
	int16_t x575 = INT16_MAX;
	int32_t t143 = 19308;

    t143 = ((x573*(x574>x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MIN;
	static volatile int8_t x580 = 0;
	int32_t t144 = -22;

    t144 = ((x577*(x578>x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x582 = -1;
	uint16_t x583 = 209U;
	int16_t x584 = INT16_MIN;

    t145 = ((x581*(x582>x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = -105;
	int32_t x587 = -228204030;
	int8_t x588 = -7;

    t146 = ((x585*(x586>x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	static int16_t x590 = -1;
	int64_t x591 = -90758670LL;
	int32_t t147 = -42871867;

    t147 = ((x589*(x590>x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MIN;
	static volatile uint16_t x596 = UINT16_MAX;
	volatile int32_t t148 = 2;

    t148 = ((x593*(x594>x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = INT16_MIN;
	volatile int32_t x598 = -2006;
	int32_t x600 = INT32_MIN;
	volatile int32_t t149 = 222774;

    t149 = ((x597*(x598>x599))>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -30913025982731337LL;
	int16_t x603 = INT16_MAX;
	int64_t x604 = -1LL;
	int32_t t150 = -99720;

    t150 = ((x601*(x602>x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x607 = INT64_MIN;
	int32_t t151 = -1323;

    t151 = ((x605*(x606>x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 40U;
	static int64_t x610 = 48789LL;
	int8_t x611 = INT8_MIN;
	int16_t x612 = 0;
	volatile int32_t t152 = -341;

    t152 = ((x609*(x610>x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = UINT32_MAX;
	static volatile uint16_t x614 = 514U;
	static uint64_t x615 = UINT64_MAX;
	int16_t x616 = INT16_MAX;

    t153 = ((x613*(x614>x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x617 = UINT32_MAX;
	uint64_t x618 = UINT64_MAX;
	int64_t x619 = -1LL;
	volatile int32_t t154 = 11;

    t154 = ((x617*(x618>x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -3;
	volatile int64_t x622 = 1332982289761LL;
	uint32_t x623 = 23236U;
	uint8_t x624 = 12U;
	int32_t t155 = 26642;

    t155 = ((x621*(x622>x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = 27849023LL;
	volatile int32_t x626 = -1;
	static uint64_t x627 = 8871862388482288LLU;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t156 = 22;

    t156 = ((x625*(x626>x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 76U;
	static volatile int16_t x630 = 25;
	uint16_t x631 = 6U;
	int8_t x632 = INT8_MIN;

    t157 = ((x629*(x630>x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x634 = INT64_MIN;
	static volatile int32_t x635 = -49258849;
	static int64_t x636 = -1LL;

    t158 = ((x633*(x634>x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 51880581LL;
	volatile int32_t x638 = INT32_MAX;
	static volatile int32_t x639 = -773;
	int32_t x640 = -28;
	volatile int32_t t159 = 2573097;

    t159 = ((x637*(x638>x639))>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -5;
	static uint8_t x642 = 3U;
	int64_t x643 = -1LL;
	volatile int16_t x644 = INT16_MAX;
	int32_t t160 = -1811255;

    t160 = ((x641*(x642>x643))>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -65;
	int32_t x647 = INT32_MIN;
	int32_t t161 = -486583;

    t161 = ((x645*(x646>x647))>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 1U;
	int64_t x651 = -1LL;

    t162 = ((x649*(x650>x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 9U;
	static uint64_t x654 = UINT64_MAX;
	uint16_t x655 = UINT16_MAX;
	static int8_t x656 = INT8_MIN;
	static int32_t t163 = -1;

    t163 = ((x653*(x654>x655))>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = 10566294U;
	uint32_t x659 = 2U;
	uint8_t x660 = 0U;
	volatile int32_t t164 = 1783;

    t164 = ((x657*(x658>x659))>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x662 = INT32_MAX;
	int64_t x663 = INT64_MAX;
	int64_t x664 = INT64_MIN;

    t165 = ((x661*(x662>x663))>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x665 = INT16_MIN;
	static volatile int16_t x666 = -1;
	int32_t x667 = 7;
	int64_t x668 = -1LL;

    t166 = ((x665*(x666>x667))>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 127U;
	uint8_t x670 = 5U;
	static int16_t x671 = -1;
	int64_t x672 = -55390634LL;
	static volatile int32_t t167 = -1;

    t167 = ((x669*(x670>x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	uint16_t x676 = 1104U;
	volatile int32_t t168 = -1724267;

    t168 = ((x673*(x674>x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x678 = -7;
	static int32_t x679 = INT32_MIN;
	volatile int64_t x680 = -1LL;
	int32_t t169 = -22;

    t169 = ((x677*(x678>x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	int16_t x682 = -114;
	int32_t x683 = 41776;
	int32_t x684 = INT32_MAX;
	int32_t t170 = -3467;

    t170 = ((x681*(x682>x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x686 = -1LL;
	uint32_t x688 = UINT32_MAX;
	volatile int32_t t171 = -149129381;

    t171 = ((x685*(x686>x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -4806350;
	int32_t x690 = INT32_MAX;
	static int8_t x691 = -3;
	int8_t x692 = -1;
	int32_t t172 = 27739;

    t172 = ((x689*(x690>x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	int8_t x694 = 2;
	static int64_t x695 = -1LL;
	static int64_t x696 = -12125882920315LL;
	int32_t t173 = 25015;

    t173 = ((x693*(x694>x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x697 = 0U;
	uint8_t x698 = 3U;
	volatile int32_t t174 = -430;

    t174 = ((x697*(x698>x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 2387261265LLU;
	int32_t x702 = 1094967;
	int64_t x703 = -1LL;
	int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 0;

    t175 = ((x701*(x702>x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	uint16_t x706 = 9382U;
	static uint16_t x707 = UINT16_MAX;
	static volatile int32_t x708 = INT32_MIN;
	volatile int32_t t176 = 407514062;

    t176 = ((x705*(x706>x707))>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 419LLU;
	int16_t x710 = -1;
	int32_t x711 = 4115;
	int32_t t177 = 7170;

    t177 = ((x709*(x710>x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 26861U;
	int32_t x714 = -81;
	int32_t x715 = 181906324;
	volatile int32_t t178 = -84;

    t178 = ((x713*(x714>x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MAX;
	int64_t x720 = INT64_MIN;
	int32_t t179 = -3;

    t179 = ((x717*(x718>x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	static int64_t x722 = INT64_MIN;
	int64_t x723 = INT64_MIN;
	int32_t t180 = -102;

    t180 = ((x721*(x722>x723))>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 786959690851314LLU;
	int64_t x726 = INT64_MIN;
	static int16_t x728 = 0;
	static int32_t t181 = -20;

    t181 = ((x725*(x726>x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = 144;
	static uint8_t x731 = 7U;
	int64_t x732 = -1LL;

    t182 = ((x729*(x730>x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 155;
	int16_t x735 = -1;
	static int8_t x736 = INT8_MIN;
	static volatile int32_t t183 = -707532;

    t183 = ((x733*(x734>x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	uint32_t x738 = UINT32_MAX;
	static uint64_t x739 = 0LLU;
	int32_t t184 = 10144329;

    t184 = ((x737*(x738>x739))>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x742 = 8356762037LLU;
	int16_t x743 = 1;
	volatile int16_t x744 = INT16_MIN;
	int32_t t185 = -17302;

    t185 = ((x741*(x742>x743))>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	int8_t x746 = INT8_MIN;
	static volatile uint16_t x747 = UINT16_MAX;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = -11;

    t186 = ((x745*(x746>x747))>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = 30;
	uint32_t x751 = 5126U;
	uint64_t x752 = 6LLU;
	volatile int32_t t187 = 124578799;

    t187 = ((x749*(x750>x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	uint8_t x754 = 90U;
	volatile int32_t x755 = -121;
	static int32_t t188 = -3;

    t188 = ((x753*(x754>x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x758 = 1U;
	static uint8_t x759 = 0U;
	int64_t x760 = 23LL;
	static volatile int32_t t189 = -132117878;

    t189 = ((x757*(x758>x759))>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	static uint32_t x762 = 254228U;
	int16_t x763 = INT16_MAX;
	static uint64_t x764 = 2077908172880151808LLU;
	int32_t t190 = 1;

    t190 = ((x761*(x762>x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 10487U;
	int8_t x766 = 6;
	int8_t x768 = -1;
	volatile int32_t t191 = -7402;

    t191 = ((x765*(x766>x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 52;
	uint32_t x770 = UINT32_MAX;
	int64_t x772 = -17097164287LL;
	int32_t t192 = 58653;

    t192 = ((x769*(x770>x771))>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = INT8_MIN;
	volatile uint64_t x774 = 869LLU;
	int16_t x775 = INT16_MIN;

    t193 = ((x773*(x774>x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = 488U;
	int32_t x778 = -155323570;
	volatile uint32_t x779 = UINT32_MAX;
	int16_t x780 = -462;
	int32_t t194 = -1870028;

    t194 = ((x777*(x778>x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	uint64_t x782 = UINT64_MAX;
	uint16_t x783 = 33U;

    t195 = ((x781*(x782>x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 116U;
	volatile int32_t x786 = 6170571;
	uint8_t x787 = 22U;
	int16_t x788 = -2;
	volatile int32_t t196 = 225146;

    t196 = ((x785*(x786>x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	uint32_t x790 = 66422206U;
	int32_t x791 = INT32_MIN;
	static int16_t x792 = -1;
	volatile int32_t t197 = -1278;

    t197 = ((x789*(x790>x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 427090U;
	uint32_t x794 = UINT32_MAX;
	static int32_t t198 = -241;

    t198 = ((x793*(x794>x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 1565U;
	int8_t x798 = INT8_MAX;
	volatile int8_t x799 = -1;
	static uint64_t x800 = 194727LLU;
	int32_t t199 = -4006;

    t199 = ((x797*(x798>x799))>x800);

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

