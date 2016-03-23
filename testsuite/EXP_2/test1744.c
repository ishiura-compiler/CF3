
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

int8_t x2 = INT8_MIN;
int16_t x3 = INT16_MAX;
uint8_t x5 = UINT8_MAX;
int64_t x8 = -4937LL;
int32_t t5 = -118992;
uint64_t x25 = UINT64_MAX;
volatile uint32_t x27 = UINT32_MAX;
volatile int32_t t7 = -15733;
static int64_t x40 = 5674127906LL;
int16_t x46 = INT16_MIN;
static uint8_t x49 = 6U;
static int8_t x52 = -1;
int8_t x55 = -2;
int32_t t13 = 8;
static int64_t x57 = -362LL;
volatile uint32_t x61 = UINT32_MAX;
static volatile int8_t x62 = -1;
uint32_t x64 = UINT32_MAX;
volatile int8_t x67 = INT8_MAX;
uint16_t x68 = 49U;
static volatile int16_t x76 = INT16_MIN;
int32_t t18 = 19770091;
static int64_t x81 = INT64_MIN;
int32_t t20 = -2843;
int8_t x87 = -48;
int32_t x88 = 224303179;
volatile int32_t t21 = -534067863;
int16_t x91 = -1;
int16_t x92 = INT16_MIN;
static volatile int16_t x93 = 140;
int64_t x95 = INT64_MAX;
volatile int32_t t24 = 1738733;
int8_t x101 = -1;
int8_t x103 = INT8_MAX;
int8_t x111 = -1;
int64_t x112 = INT64_MIN;
volatile int32_t x116 = -1;
static volatile int16_t x119 = INT16_MAX;
volatile uint32_t x122 = UINT32_MAX;
int8_t x127 = INT8_MAX;
static volatile int8_t x135 = -62;
uint8_t x137 = UINT8_MAX;
int32_t x138 = 1415312;
uint16_t x139 = 1U;
volatile int64_t x147 = -462486344591798LL;
static uint8_t x157 = UINT8_MAX;
static int32_t t39 = 1214;
int16_t x163 = -1;
int8_t x166 = -2;
volatile int32_t t41 = 14141;
static int32_t x172 = INT32_MIN;
uint8_t x176 = UINT8_MAX;
int64_t x177 = INT64_MIN;
int32_t x178 = -1;
volatile int32_t t44 = -1178;
volatile int32_t t45 = 139;
uint16_t x185 = UINT16_MAX;
volatile int32_t t46 = 24826;
int64_t x192 = INT64_MAX;
static int16_t x195 = 1285;
uint16_t x197 = UINT16_MAX;
volatile int32_t t50 = -180363;
uint32_t x207 = 13U;
volatile int32_t t51 = 0;
volatile int64_t x210 = 37LL;
uint16_t x211 = 7820U;
int64_t x219 = -144LL;
int64_t x221 = INT64_MAX;
static uint64_t x232 = 7066600142845266657LLU;
int64_t x240 = -1360231748722201313LL;
static uint32_t x242 = UINT32_MAX;
volatile int32_t t61 = 77;
static volatile uint64_t x262 = UINT64_MAX;
uint32_t x265 = UINT32_MAX;
int32_t x266 = INT32_MIN;
static volatile uint8_t x268 = UINT8_MAX;
volatile int8_t x272 = -54;
uint64_t x273 = 64624LLU;
volatile int8_t x276 = 0;
static volatile uint8_t x277 = 98U;
int8_t x278 = INT8_MAX;
static volatile int32_t t69 = -895;
volatile int64_t x284 = INT64_MIN;
int32_t t70 = -1;
int64_t x286 = INT64_MIN;
int16_t x292 = INT16_MAX;
int32_t t72 = -207;
static uint64_t x300 = 2457LLU;
static volatile uint64_t x303 = 49435LLU;
int32_t x309 = INT32_MIN;
volatile int32_t x311 = -1;
int32_t t77 = -375;
int16_t x313 = INT16_MIN;
volatile int32_t t79 = -1;
int64_t x322 = INT64_MAX;
int32_t x328 = -1;
int32_t t81 = -35261743;
uint32_t x336 = UINT32_MAX;
volatile int16_t x339 = -1795;
int32_t x344 = -1;
volatile int32_t t85 = 70326;
uint8_t x346 = 3U;
int32_t t86 = 153589;
int64_t x356 = INT64_MIN;
uint8_t x367 = UINT8_MAX;
uint32_t x369 = UINT32_MAX;
int32_t x371 = -1;
static int64_t x372 = -1LL;
volatile uint32_t x374 = 2U;
volatile int16_t x375 = -1;
int32_t x379 = -1;
volatile int16_t x381 = -1;
int64_t x383 = 1020783720846LL;
int16_t x397 = 1286;
volatile int32_t x398 = INT32_MAX;
volatile int8_t x401 = INT8_MIN;
int16_t x403 = INT16_MAX;
int32_t t100 = -1;
int64_t x408 = -1LL;
int8_t x414 = INT8_MIN;
volatile uint32_t x424 = 142U;
volatile uint64_t x425 = UINT64_MAX;
static uint8_t x428 = 2U;
static uint64_t x432 = 560597LLU;
int8_t x436 = INT8_MAX;
uint16_t x437 = UINT16_MAX;
uint64_t x438 = 31621585532128545LLU;
int32_t x440 = INT32_MIN;
int32_t t110 = 16292887;
uint64_t x454 = UINT64_MAX;
volatile int32_t t114 = -38738711;
uint16_t x461 = 113U;
int64_t x462 = INT64_MIN;
volatile int32_t t115 = -422243;
int32_t t116 = 219;
int64_t x469 = 23148235077190LL;
volatile int32_t t117 = -3404078;
volatile int64_t x473 = 1LL;
static uint32_t x478 = UINT32_MAX;
static uint8_t x479 = 1U;
int16_t x480 = -881;
uint32_t x487 = UINT32_MAX;
int16_t x493 = -1157;
int32_t x508 = 154730;
uint64_t x512 = 3171674125LLU;
static volatile int32_t t127 = 0;
volatile uint8_t x520 = UINT8_MAX;
int16_t x521 = 24;
int8_t x522 = 0;
int8_t x526 = INT8_MIN;
int16_t x527 = 1742;
volatile int32_t t131 = -859;
volatile int32_t t132 = 6223;
int64_t x533 = -1LL;
static uint64_t x534 = UINT64_MAX;
volatile int8_t x538 = INT8_MIN;
volatile uint32_t x540 = UINT32_MAX;
static uint16_t x546 = UINT16_MAX;
static uint16_t x547 = 21183U;
int32_t t137 = -40361;
static uint32_t x578 = 680513275U;
uint8_t x582 = 118U;
int32_t t145 = 230055;
int32_t x585 = 488;
int64_t x589 = INT64_MIN;
int8_t x590 = INT8_MAX;
int32_t x591 = -1;
uint32_t x595 = 1U;
uint64_t x596 = UINT64_MAX;
uint8_t x602 = UINT8_MAX;
uint32_t x603 = 2024U;
static int64_t x613 = -1LL;
int32_t t155 = -8;
static int32_t x625 = -1;
uint64_t x637 = 2140788090830149479LLU;
static int16_t x657 = INT16_MAX;
int64_t x667 = -1LL;
int32_t t166 = 9543;
int8_t x672 = INT8_MIN;
static int32_t t167 = 27;
volatile uint32_t x674 = 8U;
int64_t x675 = -1LL;
volatile uint16_t x676 = 6134U;
int64_t x678 = 1LL;
uint32_t x682 = UINT32_MAX;
static int64_t x684 = 8312635LL;
static uint32_t x690 = UINT32_MAX;
int8_t x692 = INT8_MIN;
volatile int8_t x704 = 37;
uint64_t x705 = 76449084LLU;
int32_t x710 = INT32_MIN;
uint8_t x713 = 6U;
int32_t t178 = -701653;
volatile int32_t x717 = INT32_MIN;
int16_t x718 = -1883;
volatile uint16_t x730 = 6U;
int32_t t182 = -504;
int64_t x739 = 1LL;
int64_t x743 = INT64_MIN;
volatile int32_t t185 = 122;
uint32_t x746 = 17001076U;
volatile int32_t t186 = -242850;
int64_t x754 = INT64_MIN;
volatile uint16_t x763 = 3U;
static volatile int32_t t190 = -9;
volatile uint8_t x770 = 6U;
int32_t x771 = 1;
uint64_t x776 = 260725LLU;
uint16_t x778 = 1880U;
int64_t x782 = -1LL;
static uint16_t x785 = UINT16_MAX;
int64_t x787 = -13636422251315923LL;
static uint64_t x794 = 116529112835LLU;
static int32_t x795 = -5762982;
int32_t t199 = -1;


void f0(void) {
    	int16_t x1 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 1973792;

    t0 = ((x1|(x2>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = 4044713876585495899LL;
	uint16_t x7 = UINT16_MAX;
	int32_t t1 = 1;

    t1 = ((x5|(x6>x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = INT64_MIN;
	uint8_t x10 = 125U;
	int8_t x11 = -3;
	volatile int32_t x12 = -391;
	volatile int32_t t2 = -1948;

    t2 = ((x9|(x10>x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	uint32_t x15 = UINT32_MAX;
	volatile uint8_t x16 = UINT8_MAX;
	int32_t t3 = -450477084;

    t3 = ((x13|(x14>x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	volatile uint8_t x19 = 103U;
	uint8_t x20 = 111U;
	volatile int32_t t4 = 10373396;

    t4 = ((x17|(x18>x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	static volatile int8_t x22 = INT8_MAX;
	static volatile int8_t x23 = INT8_MIN;
	uint16_t x24 = 3406U;

    t5 = ((x21|(x22>x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MAX;
	uint16_t x28 = UINT16_MAX;
	static int32_t t6 = 26;

    t6 = ((x25|(x26>x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	int64_t x30 = 47LL;
	int32_t x31 = -1;
	int64_t x32 = -961987093LL;

    t7 = ((x29|(x30>x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 0;
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 237;

    t8 = ((x33|(x34>x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	uint32_t x38 = 2U;
	static uint64_t x39 = 60844LLU;
	int32_t t9 = 4858;

    t9 = ((x37|(x38>x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	volatile uint32_t x42 = 119448758U;
	volatile uint32_t x43 = 318301U;
	int16_t x44 = 7;
	volatile int32_t t10 = -14;

    t10 = ((x41|(x42>x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = -1;
	int32_t t11 = -1107654;

    t11 = ((x45|(x46>x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MAX;
	static uint64_t x51 = 1598364LLU;
	volatile int32_t t12 = 990473;

    t12 = ((x49|(x50>x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	volatile uint16_t x54 = UINT16_MAX;
	int8_t x56 = INT8_MIN;

    t13 = ((x53|(x54>x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	uint16_t x60 = 2480U;
	volatile int32_t t14 = -848;

    t14 = ((x57|(x58>x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = 1;
	volatile int32_t t15 = -15;

    t15 = ((x61|(x62>x63))==x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MAX;
	uint32_t x66 = UINT32_MAX;
	static volatile int32_t t16 = -183;

    t16 = ((x65|(x66>x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	int64_t x72 = -3643538908622LL;
	int32_t t17 = 6727419;

    t17 = ((x69|(x70>x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 2U;
	uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = -285;

    t18 = ((x73|(x74>x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = 55;
	volatile int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = 90503409;

    t19 = ((x77|(x78>x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x82 = UINT64_MAX;
	static volatile uint64_t x83 = 889109295908LLU;
	volatile int16_t x84 = INT16_MAX;

    t20 = ((x81|(x82>x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MIN;

    t21 = ((x85|(x86>x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	int32_t t22 = 116079;

    t22 = ((x89|(x90>x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = UINT64_MAX;
	uint32_t x96 = 8419607U;
	int32_t t23 = -289;

    t23 = ((x93|(x94>x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;

    t24 = ((x97|(x98>x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x102 = 0U;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -1012580717;

    t25 = ((x101|(x102>x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 32958358U;
	uint32_t x108 = 85042432U;
	static int32_t t26 = 771;

    t26 = ((x105|(x106>x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	int32_t t27 = -81922527;

    t27 = ((x109|(x110>x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	uint32_t x114 = 99956849U;
	volatile int64_t x115 = -1LL;
	volatile int32_t t28 = 7074;

    t28 = ((x113|(x114>x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	int64_t x118 = -1LL;
	int32_t x120 = 51;
	int32_t t29 = 4;

    t29 = ((x117|(x118>x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 13U;
	volatile int8_t x123 = 5;
	uint8_t x124 = 32U;
	volatile int32_t t30 = 6174123;

    t30 = ((x121|(x122>x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	static int16_t x126 = INT16_MAX;
	volatile uint32_t x128 = 20U;
	static int32_t t31 = -548217;

    t31 = ((x125|(x126>x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MAX;
	int64_t x130 = INT64_MAX;
	volatile uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t32 = 495270330;

    t32 = ((x129|(x130>x131))==x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	uint8_t x134 = 0U;
	uint16_t x136 = 7U;
	static int32_t t33 = 187462020;

    t33 = ((x133|(x134>x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x140 = -1;
	volatile int32_t t34 = 16652322;

    t34 = ((x137|(x138>x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 66U;
	int32_t x142 = -1;
	int64_t x143 = INT64_MAX;
	int8_t x144 = -1;
	int32_t t35 = -47487172;

    t35 = ((x141|(x142>x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = INT64_MIN;
	int16_t x146 = -148;
	int32_t x148 = INT32_MAX;
	static volatile int32_t t36 = 25686640;

    t36 = ((x145|(x146>x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static int8_t x150 = 3;
	static int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 28747876;

    t37 = ((x149|(x150>x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	uint16_t x154 = 4U;
	int64_t x155 = -1LL;
	int32_t x156 = -1;
	volatile int32_t t38 = -277;

    t38 = ((x153|(x154>x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MAX;
	int8_t x159 = 1;
	uint8_t x160 = UINT8_MAX;

    t39 = ((x157|(x158>x159))==x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int32_t x162 = INT32_MIN;
	static int32_t x164 = INT32_MIN;
	static int32_t t40 = 3169926;

    t40 = ((x161|(x162>x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	int32_t x167 = INT32_MIN;
	volatile int32_t x168 = -7112853;

    t41 = ((x165|(x166>x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = 14U;
	static int32_t t42 = -3103;

    t42 = ((x169|(x170>x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	uint16_t x174 = UINT16_MAX;
	volatile int8_t x175 = INT8_MIN;
	int32_t t43 = -11256;

    t43 = ((x173|(x174>x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x179 = 5;
	volatile int8_t x180 = INT8_MIN;

    t44 = ((x177|(x178>x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 82437157712LL;
	int8_t x182 = 3;
	int16_t x183 = 119;
	volatile int64_t x184 = INT64_MIN;

    t45 = ((x181|(x182>x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = 4000072U;
	static volatile int32_t x187 = INT32_MAX;
	static int32_t x188 = INT32_MAX;

    t46 = ((x185|(x186>x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x189 = 26;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = UINT8_MAX;
	static volatile int32_t t47 = -240;

    t47 = ((x189|(x190>x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -10LL;
	volatile int16_t x194 = -2220;
	int64_t x196 = INT64_MIN;
	int32_t t48 = -15685330;

    t48 = ((x193|(x194>x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x198 = 89U;
	uint8_t x199 = 0U;
	int8_t x200 = -1;
	volatile int32_t t49 = -418421219;

    t49 = ((x197|(x198>x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	static int64_t x202 = -1903927LL;
	static uint8_t x203 = 1U;
	uint16_t x204 = UINT16_MAX;

    t50 = ((x201|(x202>x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = 5U;
	volatile int64_t x206 = -1LL;
	uint64_t x208 = 1LLU;

    t51 = ((x205|(x206>x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 1922LL;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = 12034;

    t52 = ((x209|(x210>x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = UINT64_MAX;
	int16_t x214 = -1;
	volatile uint8_t x215 = 5U;
	int16_t x216 = 237;
	int32_t t53 = 4891;

    t53 = ((x213|(x214>x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -25245732;

    t54 = ((x217|(x218>x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x222 = -7LL;
	volatile int8_t x223 = -2;
	static int16_t x224 = -1;
	volatile int32_t t55 = 3;

    t55 = ((x221|(x222>x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 1374U;
	volatile uint64_t x226 = UINT64_MAX;
	int8_t x227 = 6;
	int8_t x228 = -2;
	static int32_t t56 = 14;

    t56 = ((x225|(x226>x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 7803U;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 30U;
	int32_t t57 = -392;

    t57 = ((x229|(x230>x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MAX;
	static volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = UINT16_MAX;
	static int32_t t58 = 2;

    t58 = ((x233|(x234>x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int16_t x238 = 3461;
	uint32_t x239 = UINT32_MAX;
	static int32_t t59 = 172280908;

    t59 = ((x237|(x238>x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -1;
	static int64_t x243 = INT64_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -2;

    t60 = ((x241|(x242>x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = -1;
	volatile int64_t x246 = 5LL;
	int8_t x247 = -1;
	int32_t x248 = -1;

    t61 = ((x245|(x246>x247))==x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	uint32_t x250 = 52U;
	int64_t x251 = -1LL;
	volatile int8_t x252 = 18;
	volatile int32_t t62 = 5122;

    t62 = ((x249|(x250>x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	uint64_t x254 = 23175166206748246LLU;
	uint64_t x255 = 98413521LLU;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -7;

    t63 = ((x253|(x254>x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MAX;
	volatile uint32_t x258 = 1583561992U;
	static volatile int32_t x259 = 37760751;
	static int8_t x260 = INT8_MIN;
	int32_t t64 = -416;

    t64 = ((x257|(x258>x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	static uint64_t x263 = UINT64_MAX;
	static volatile uint16_t x264 = 31U;
	volatile int32_t t65 = 27;

    t65 = ((x261|(x262>x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x267 = -261616590;
	static volatile int32_t t66 = -601890342;

    t66 = ((x265|(x266>x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MAX;
	int8_t x271 = 10;
	int32_t t67 = -27;

    t67 = ((x269|(x270>x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x274 = 1U;
	static uint8_t x275 = UINT8_MAX;
	volatile int32_t t68 = 176668;

    t68 = ((x273|(x274>x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x279 = UINT16_MAX;
	volatile uint8_t x280 = 24U;

    t69 = ((x277|(x278>x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 88U;
	int64_t x282 = INT64_MIN;
	int8_t x283 = -33;

    t70 = ((x281|(x282>x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = INT8_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = 177547251;

    t71 = ((x285|(x286>x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 227299U;
	volatile uint32_t x290 = 63U;
	static uint8_t x291 = 1U;

    t72 = ((x289|(x290>x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = INT16_MIN;
	int8_t x294 = -2;
	volatile uint8_t x295 = UINT8_MAX;
	int8_t x296 = -1;
	int32_t t73 = -44086951;

    t73 = ((x293|(x294>x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = 1303U;
	int16_t x298 = -2789;
	static uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = 109250802;

    t74 = ((x297|(x298>x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = -1;
	static uint16_t x302 = 12261U;
	int64_t x304 = 5LL;
	volatile int32_t t75 = -486;

    t75 = ((x301|(x302>x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int64_t x306 = -1LL;
	static int8_t x307 = -7;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -30548;

    t76 = ((x305|(x306>x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = -1;
	int32_t x312 = -1;

    t77 = ((x309|(x310>x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = 352U;
	static int32_t x315 = -1;
	int64_t x316 = -1LL;
	static volatile int32_t t78 = 131840807;

    t78 = ((x313|(x314>x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 0U;
	volatile uint8_t x318 = 0U;
	static int16_t x319 = INT16_MAX;
	uint32_t x320 = 1517085129U;

    t79 = ((x317|(x318>x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	int16_t x323 = -151;
	volatile int16_t x324 = -1;
	int32_t t80 = 197246027;

    t80 = ((x321|(x322>x323))==x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MIN;
	int32_t x326 = -735;
	static volatile int64_t x327 = INT64_MAX;

    t81 = ((x325|(x326>x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = INT64_MIN;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = INT8_MIN;
	int16_t x332 = -1;
	volatile int32_t t82 = 2720818;

    t82 = ((x329|(x330>x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	uint16_t x334 = 97U;
	int16_t x335 = INT16_MAX;
	volatile int32_t t83 = 26098;

    t83 = ((x333|(x334>x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 24U;
	static uint32_t x338 = 13233766U;
	int32_t x340 = -754;
	int32_t t84 = -57;

    t84 = ((x337|(x338>x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint32_t x342 = 7489U;
	int64_t x343 = INT64_MIN;

    t85 = ((x341|(x342>x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 30U;
	volatile uint8_t x347 = UINT8_MAX;
	volatile int8_t x348 = INT8_MAX;

    t86 = ((x345|(x346>x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = -1LL;
	volatile int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t87 = 708;

    t87 = ((x349|(x350>x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = INT64_MIN;
	uint64_t x354 = 318492296LLU;
	int8_t x355 = -12;
	static int32_t t88 = -15232143;

    t88 = ((x353|(x354>x355))==x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -11;

    t89 = ((x357|(x358>x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = -252530876;

    t90 = ((x361|(x362>x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = 110182848LLU;
	int16_t x366 = INT16_MIN;
	uint64_t x368 = 4751615LLU;
	int32_t t91 = -41101;

    t91 = ((x365|(x366>x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x370 = INT32_MAX;
	static volatile int32_t t92 = 438;

    t92 = ((x369|(x370>x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 40840LLU;
	static uint16_t x376 = UINT16_MAX;
	int32_t t93 = -3206;

    t93 = ((x373|(x374>x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t94 = -2163;

    t94 = ((x377|(x378>x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = -31;
	uint32_t x384 = 25123U;
	int32_t t95 = -113;

    t95 = ((x381|(x382>x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 8456;
	int32_t x386 = -3;
	volatile uint16_t x387 = 25U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = 3;

    t96 = ((x385|(x386>x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	int64_t x391 = 445538698401131LL;
	volatile int16_t x392 = -351;
	volatile int32_t t97 = 1;

    t97 = ((x389|(x390>x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	static volatile int32_t x394 = 13678891;
	int32_t x395 = INT32_MIN;
	int32_t x396 = -43338023;
	volatile int32_t t98 = 2505;

    t98 = ((x393|(x394>x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x399 = 0LLU;
	static volatile int64_t x400 = -1LL;
	volatile int32_t t99 = -1258251;

    t99 = ((x397|(x398>x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x402 = 834U;
	uint64_t x404 = 692LLU;

    t100 = ((x401|(x402>x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 117940899061778762LLU;
	int64_t x406 = -774226462LL;
	uint8_t x407 = 0U;
	volatile int32_t t101 = 232;

    t101 = ((x405|(x406>x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	int16_t x410 = 816;
	int32_t x411 = INT32_MAX;
	static uint32_t x412 = UINT32_MAX;
	int32_t t102 = -17097;

    t102 = ((x409|(x410>x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 1947253LL;
	int32_t x415 = -21419;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = -1;

    t103 = ((x413|(x414>x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 63192494381LLU;
	int8_t x418 = INT8_MIN;
	static uint32_t x419 = 10021U;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t104 = 10;

    t104 = ((x417|(x418>x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -76;
	static int32_t x422 = 13184;
	uint32_t x423 = 954255U;
	volatile int32_t t105 = -7;

    t105 = ((x421|(x422>x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x426 = 4;
	volatile int64_t x427 = INT64_MIN;
	int32_t t106 = 1418395;

    t106 = ((x425|(x426>x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	uint16_t x430 = 621U;
	int32_t x431 = -1;
	static volatile int32_t t107 = 744796177;

    t107 = ((x429|(x430>x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	uint8_t x434 = 0U;
	volatile int32_t x435 = 272;
	volatile int32_t t108 = -75720;

    t108 = ((x433|(x434>x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x439 = -1;
	static volatile int32_t t109 = 1;

    t109 = ((x437|(x438>x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	int8_t x442 = 1;
	volatile int32_t x443 = 1;
	static volatile int8_t x444 = INT8_MAX;

    t110 = ((x441|(x442>x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	uint16_t x446 = 17366U;
	int8_t x447 = -1;
	int16_t x448 = -1;
	static volatile int32_t t111 = -12;

    t111 = ((x445|(x446>x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = -3684609;
	static volatile int8_t x451 = -42;
	uint16_t x452 = UINT16_MAX;
	static volatile int32_t t112 = 211;

    t112 = ((x449|(x450>x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	static int32_t x456 = INT32_MAX;
	static int32_t t113 = -15380;

    t113 = ((x453|(x454>x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 493946U;
	int64_t x458 = 661907LL;
	int8_t x459 = INT8_MIN;
	volatile uint32_t x460 = UINT32_MAX;

    t114 = ((x457|(x458>x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x463 = INT64_MAX;
	volatile int32_t x464 = INT32_MIN;

    t115 = ((x461|(x462>x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	static uint16_t x466 = 56U;
	int8_t x467 = INT8_MAX;
	int64_t x468 = INT64_MAX;

    t116 = ((x465|(x466>x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x470 = -1;
	uint16_t x471 = 0U;
	uint16_t x472 = 17U;

    t117 = ((x469|(x470>x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = 1U;
	int64_t x475 = -1LL;
	int8_t x476 = INT8_MIN;
	volatile int32_t t118 = 2907;

    t118 = ((x473|(x474>x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x477 = 0U;
	volatile int32_t t119 = 116208;

    t119 = ((x477|(x478>x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x481 = 36U;
	int32_t x482 = -1;
	static int16_t x483 = -1;
	static uint32_t x484 = UINT32_MAX;
	int32_t t120 = -110;

    t120 = ((x481|(x482>x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = -4033LL;
	int16_t x486 = INT16_MAX;
	int32_t x488 = 0;
	static int32_t t121 = -453365;

    t121 = ((x485|(x486>x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MAX;
	volatile int64_t x491 = -1LL;
	int16_t x492 = INT16_MAX;
	int32_t t122 = -114;

    t122 = ((x489|(x490>x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x494 = INT8_MAX;
	int16_t x495 = -1;
	int64_t x496 = 189781761LL;
	int32_t t123 = -1341860;

    t123 = ((x493|(x494>x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MIN;
	uint64_t x499 = 909642756LLU;
	uint32_t x500 = UINT32_MAX;
	static int32_t t124 = 140071327;

    t124 = ((x497|(x498>x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -2210LL;
	int8_t x502 = INT8_MAX;
	int64_t x503 = INT64_MIN;
	int64_t x504 = INT64_MIN;
	volatile int32_t t125 = 0;

    t125 = ((x501|(x502>x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	uint32_t x506 = 422931U;
	uint16_t x507 = UINT16_MAX;
	static volatile int32_t t126 = -542392531;

    t126 = ((x505|(x506>x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	uint8_t x510 = UINT8_MAX;
	uint16_t x511 = 18U;

    t127 = ((x509|(x510>x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 427U;
	static volatile int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	uint16_t x516 = 499U;
	int32_t t128 = -26232;

    t128 = ((x513|(x514>x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = 300063864;
	int64_t x518 = INT64_MIN;
	static int64_t x519 = INT64_MIN;
	volatile int32_t t129 = -63775683;

    t129 = ((x517|(x518>x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x523 = INT64_MAX;
	static uint64_t x524 = 218026LLU;
	int32_t t130 = 7755;

    t130 = ((x521|(x522>x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 37U;
	volatile int8_t x528 = INT8_MIN;

    t131 = ((x525|(x526>x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MIN;
	int8_t x530 = 13;
	volatile int8_t x531 = INT8_MIN;
	int8_t x532 = INT8_MIN;

    t132 = ((x529|(x530>x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x535 = 37U;
	int64_t x536 = -131086999878927LL;
	volatile int32_t t133 = -76065208;

    t133 = ((x533|(x534>x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 11U;
	int8_t x539 = -1;
	int32_t t134 = 67852654;

    t134 = ((x537|(x538>x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 50U;
	int32_t x542 = INT32_MIN;
	int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MIN;
	volatile int32_t t135 = 13157;

    t135 = ((x541|(x542>x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = INT8_MIN;
	static uint8_t x548 = 3U;
	int32_t t136 = 358112253;

    t136 = ((x545|(x546>x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x549 = UINT16_MAX;
	int16_t x550 = INT16_MIN;
	static uint8_t x551 = 106U;
	int8_t x552 = INT8_MIN;

    t137 = ((x549|(x550>x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	static uint16_t x554 = 93U;
	static int16_t x555 = -1;
	int64_t x556 = 39491476LL;
	static int32_t t138 = -864836;

    t138 = ((x553|(x554>x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 10U;
	int16_t x558 = INT16_MIN;
	static int32_t x559 = -69;
	uint64_t x560 = 554LLU;
	int32_t t139 = -242;

    t139 = ((x557|(x558>x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	int32_t x562 = INT32_MIN;
	uint32_t x563 = 879032U;
	uint64_t x564 = 646904285576LLU;
	int32_t t140 = 47547;

    t140 = ((x561|(x562>x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x565 = 54841729693496599LLU;
	int64_t x566 = -1423LL;
	uint64_t x567 = 71057973217089LLU;
	int16_t x568 = INT16_MAX;
	volatile int32_t t141 = -101791;

    t141 = ((x565|(x566>x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MAX;
	int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t142 = 0;

    t142 = ((x569|(x570>x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	int8_t x574 = -10;
	volatile uint16_t x575 = UINT16_MAX;
	volatile int64_t x576 = -1LL;
	volatile int32_t t143 = 1;

    t143 = ((x573|(x574>x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x579 = 7U;
	static int32_t x580 = 6;
	volatile int32_t t144 = -47;

    t144 = ((x577|(x578>x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	volatile int32_t x583 = 0;
	int32_t x584 = INT32_MIN;

    t145 = ((x581|(x582>x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x586 = UINT16_MAX;
	static uint8_t x587 = 22U;
	int16_t x588 = INT16_MIN;
	volatile int32_t t146 = -52744965;

    t146 = ((x585|(x586>x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x592 = -1;
	volatile int32_t t147 = -1;

    t147 = ((x589|(x590>x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = 27541;
	static uint64_t x594 = 3242192829483LLU;
	volatile int32_t t148 = -858;

    t148 = ((x593|(x594>x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	static int32_t x598 = 94;
	uint8_t x599 = UINT8_MAX;
	uint64_t x600 = 131297100112LLU;
	volatile int32_t t149 = -127;

    t149 = ((x597|(x598>x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = 425LL;
	volatile uint8_t x604 = 14U;
	volatile int32_t t150 = 1;

    t150 = ((x601|(x602>x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 51U;
	uint32_t x606 = 127772416U;
	static uint16_t x607 = 81U;
	int64_t x608 = INT64_MIN;
	static int32_t t151 = -13597;

    t151 = ((x605|(x606>x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = -1;
	uint32_t x610 = 5U;
	static uint16_t x611 = 7662U;
	uint16_t x612 = 1831U;
	int32_t t152 = -91149;

    t152 = ((x609|(x610>x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x614 = 1846U;
	static volatile uint16_t x615 = UINT16_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -14577;

    t153 = ((x613|(x614>x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 1U;
	int32_t x618 = -3478;
	uint64_t x619 = 2537879LLU;
	static uint16_t x620 = 29354U;
	int32_t t154 = -293612;

    t154 = ((x617|(x618>x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = 7517U;
	static uint16_t x624 = 9552U;

    t155 = ((x621|(x622>x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x626 = INT32_MAX;
	uint32_t x627 = 4U;
	int32_t x628 = 109265;
	volatile int32_t t156 = 334;

    t156 = ((x625|(x626>x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -41365LL;
	volatile int8_t x630 = -1;
	int32_t x631 = -1;
	int64_t x632 = -61339990099603LL;
	int32_t t157 = -228;

    t157 = ((x629|(x630>x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	int16_t x634 = INT16_MIN;
	int64_t x635 = -1LL;
	uint16_t x636 = UINT16_MAX;
	static volatile int32_t t158 = -2372963;

    t158 = ((x633|(x634>x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = UINT32_MAX;
	volatile int64_t x639 = INT64_MAX;
	int64_t x640 = INT64_MAX;
	static int32_t t159 = 1;

    t159 = ((x637|(x638>x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	uint16_t x642 = 25477U;
	int32_t x643 = INT32_MIN;
	int16_t x644 = -1;
	volatile int32_t t160 = 16;

    t160 = ((x641|(x642>x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = INT64_MAX;
	int8_t x646 = INT8_MIN;
	int64_t x647 = INT64_MIN;
	static int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 25957898;

    t161 = ((x645|(x646>x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = 26083408390572634LL;
	int64_t x651 = -1LL;
	uint64_t x652 = 12306740968001642LLU;
	volatile int32_t t162 = -232402668;

    t162 = ((x649|(x650>x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 9234U;
	static volatile int16_t x654 = -1;
	int16_t x655 = -3489;
	int64_t x656 = -1LL;
	static volatile int32_t t163 = -37419;

    t163 = ((x653|(x654>x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x658 = 8370008792204450085LLU;
	static int16_t x659 = 6319;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t164 = -14;

    t164 = ((x657|(x658>x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = 11452;
	int16_t x662 = -6269;
	int64_t x663 = -1LL;
	int16_t x664 = INT16_MIN;
	volatile int32_t t165 = 349;

    t165 = ((x661|(x662>x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = -1;
	int16_t x666 = INT16_MIN;
	uint32_t x668 = UINT32_MAX;

    t166 = ((x665|(x666>x667))==x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 3U;
	static uint32_t x670 = UINT32_MAX;
	volatile uint32_t x671 = 1U;

    t167 = ((x669|(x670>x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	int32_t t168 = -412743;

    t168 = ((x673|(x674>x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	static int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MIN;
	int32_t t169 = 187784858;

    t169 = ((x677|(x678>x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = -1;
	volatile uint32_t x683 = UINT32_MAX;
	volatile int32_t t170 = 0;

    t170 = ((x681|(x682>x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = UINT16_MAX;
	int64_t x686 = INT64_MAX;
	int8_t x687 = INT8_MAX;
	static uint16_t x688 = UINT16_MAX;
	int32_t t171 = -14;

    t171 = ((x685|(x686>x687))==x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	uint16_t x691 = 1400U;
	volatile int32_t t172 = 46055;

    t172 = ((x689|(x690>x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 1U;
	int32_t x694 = INT32_MAX;
	uint32_t x695 = UINT32_MAX;
	int16_t x696 = INT16_MAX;
	volatile int32_t t173 = -2592;

    t173 = ((x693|(x694>x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = INT64_MIN;
	volatile int8_t x698 = INT8_MIN;
	int16_t x699 = INT16_MAX;
	int64_t x700 = INT64_MAX;
	static int32_t t174 = -4;

    t174 = ((x697|(x698>x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x701 = 1LLU;
	uint16_t x702 = 0U;
	uint64_t x703 = 542060469576335025LLU;
	volatile int32_t t175 = 3;

    t175 = ((x701|(x702>x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = UINT16_MAX;
	static int64_t x707 = -2034105LL;
	uint16_t x708 = 28107U;
	volatile int32_t t176 = -125;

    t176 = ((x705|(x706>x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	int16_t x711 = -1;
	int64_t x712 = -1056LL;
	volatile int32_t t177 = -3070726;

    t177 = ((x709|(x710>x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = INT8_MAX;
	int32_t x715 = INT32_MAX;
	static int64_t x716 = -1LL;

    t178 = ((x713|(x714>x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x719 = -1;
	volatile uint8_t x720 = UINT8_MAX;
	int32_t t179 = 17812;

    t179 = ((x717|(x718>x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = 496;
	int8_t x723 = -56;
	static volatile int8_t x724 = -6;
	static volatile int32_t t180 = -31;

    t180 = ((x721|(x722>x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	int16_t x726 = INT16_MIN;
	volatile int64_t x727 = INT64_MIN;
	int8_t x728 = 51;
	static volatile int32_t t181 = -643;

    t181 = ((x725|(x726>x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x729 = UINT32_MAX;
	static volatile int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MIN;

    t182 = ((x729|(x730>x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint64_t x734 = UINT64_MAX;
	uint8_t x735 = 108U;
	uint32_t x736 = 21180862U;
	volatile int32_t t183 = -1358207;

    t183 = ((x733|(x734>x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = 3117804664LL;
	uint16_t x738 = UINT16_MAX;
	uint8_t x740 = 3U;
	int32_t t184 = 31;

    t184 = ((x737|(x738>x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 37U;
	static uint64_t x742 = UINT64_MAX;
	uint8_t x744 = 1U;

    t185 = ((x741|(x742>x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 816U;
	volatile int8_t x747 = -1;
	static int16_t x748 = INT16_MIN;

    t186 = ((x745|(x746>x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 0;
	uint16_t x750 = 103U;
	int16_t x751 = INT16_MIN;
	int16_t x752 = -1;
	int32_t t187 = 38986;

    t187 = ((x749|(x750>x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MIN;
	uint16_t x755 = 620U;
	uint32_t x756 = 63U;
	volatile int32_t t188 = 7429615;

    t188 = ((x753|(x754>x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	int16_t x758 = 1;
	volatile int64_t x759 = INT64_MAX;
	int32_t x760 = -1;
	static int32_t t189 = -1;

    t189 = ((x757|(x758>x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MAX;
	static uint16_t x762 = 25U;
	int64_t x764 = -10304494LL;

    t190 = ((x761|(x762>x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = 1400;
	int64_t x766 = INT64_MIN;
	int32_t x767 = -277;
	static int64_t x768 = INT64_MIN;
	volatile int32_t t191 = 861;

    t191 = ((x765|(x766>x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x769 = -1;
	static uint64_t x772 = UINT64_MAX;
	volatile int32_t t192 = -14;

    t192 = ((x769|(x770>x771))==x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	volatile uint64_t x774 = UINT64_MAX;
	uint16_t x775 = UINT16_MAX;
	volatile int32_t t193 = -1351600;

    t193 = ((x773|(x774>x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 1U;
	int8_t x779 = 60;
	static volatile int64_t x780 = INT64_MIN;
	volatile int32_t t194 = 21843532;

    t194 = ((x777|(x778>x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 280U;
	static int64_t x783 = INT64_MIN;
	volatile int16_t x784 = 1887;
	volatile int32_t t195 = -73;

    t195 = ((x781|(x782>x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x786 = 70LLU;
	uint16_t x788 = 15U;
	volatile int32_t t196 = 0;

    t196 = ((x785|(x786>x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	int32_t x790 = -1;
	static uint16_t x791 = 7U;
	uint32_t x792 = 2853U;
	int32_t t197 = -1;

    t197 = ((x789|(x790>x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	int16_t x796 = -1;
	static int32_t t198 = -6750647;

    t198 = ((x793|(x794>x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = -1;
	volatile int32_t x798 = INT32_MIN;
	uint32_t x799 = 9954665U;
	volatile uint64_t x800 = 1456618618206997LLU;

    t199 = ((x797|(x798>x799))==x800);

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

