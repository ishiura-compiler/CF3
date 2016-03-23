
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

static int8_t x1 = INT8_MIN;
int32_t x3 = INT32_MIN;
volatile int64_t x7 = 938524528953358555LL;
int64_t x8 = 1LL;
volatile int8_t x10 = 0;
int64_t x11 = INT64_MAX;
static volatile uint64_t x15 = UINT64_MAX;
int16_t x18 = INT16_MIN;
int32_t x20 = INT32_MIN;
volatile int32_t t4 = 62231;
volatile uint16_t x22 = 7U;
uint16_t x24 = UINT16_MAX;
volatile uint8_t x44 = 32U;
static int64_t x46 = -1LL;
int16_t x48 = INT16_MAX;
static int32_t t10 = -3;
int8_t x55 = 0;
int8_t x64 = INT8_MIN;
int32_t x68 = 18550683;
static volatile int32_t t15 = 1106;
volatile int32_t t16 = -710091793;
static int16_t x74 = INT16_MIN;
int32_t t17 = -310;
volatile int32_t x78 = 9;
volatile int32_t x80 = INT32_MIN;
int32_t x83 = INT32_MAX;
int32_t x84 = -1;
int8_t x86 = 3;
int16_t x91 = -1;
volatile int64_t x98 = 8231173125851LL;
uint16_t x104 = UINT16_MAX;
uint64_t x105 = UINT64_MAX;
int64_t x113 = -1LL;
static volatile uint8_t x116 = UINT8_MAX;
int32_t x122 = INT32_MAX;
int32_t x123 = 122207;
volatile int32_t t28 = -2617;
volatile int32_t t29 = 123347;
volatile int32_t x135 = -1;
static volatile int8_t x144 = INT8_MIN;
int64_t x146 = INT64_MIN;
int32_t x148 = 3;
volatile int32_t x150 = INT32_MAX;
int32_t t36 = -28241;
volatile uint32_t x162 = 291482U;
static int32_t x174 = INT32_MIN;
int16_t x180 = INT16_MAX;
uint16_t x182 = 151U;
uint32_t x184 = 14U;
int32_t t41 = 1;
int16_t x196 = INT16_MAX;
uint16_t x198 = UINT16_MAX;
int32_t t45 = -2257739;
int16_t x201 = INT16_MIN;
uint8_t x205 = UINT8_MAX;
uint32_t x209 = 7276U;
static int64_t x212 = -1LL;
int32_t t50 = 3;
uint8_t x231 = 3U;
int32_t x234 = -1;
int16_t x237 = 203;
volatile uint32_t x242 = 0U;
uint64_t x250 = 13LLU;
int64_t x273 = -1LL;
int8_t x275 = INT8_MAX;
int8_t x281 = -1;
volatile int32_t t63 = -6;
static uint8_t x288 = 0U;
int32_t x292 = INT32_MAX;
int64_t x293 = INT64_MAX;
int16_t x294 = INT16_MAX;
uint32_t x296 = UINT32_MAX;
static uint16_t x298 = 1581U;
uint64_t x300 = 124974247088995683LLU;
static int32_t t67 = -817250;
uint16_t x305 = UINT16_MAX;
int64_t x311 = -1LL;
int32_t t70 = -1;
int8_t x321 = 0;
int32_t x331 = INT32_MAX;
volatile int32_t x343 = 0;
volatile int32_t t79 = -238876;
volatile uint8_t x359 = UINT8_MAX;
uint32_t x366 = UINT32_MAX;
uint8_t x367 = 8U;
volatile uint64_t x368 = 24LLU;
int16_t x372 = INT16_MIN;
uint32_t x373 = 16531U;
int8_t x374 = INT8_MAX;
int16_t x385 = INT16_MIN;
int64_t x387 = INT64_MIN;
int32_t x389 = -234650;
int16_t x398 = INT16_MAX;
uint8_t x400 = UINT8_MAX;
int16_t x403 = 674;
volatile int32_t t92 = 74657;
volatile uint8_t x409 = 0U;
int16_t x411 = -1;
uint8_t x419 = UINT8_MAX;
static uint64_t x425 = 1LLU;
int32_t x432 = -1;
volatile int8_t x441 = 7;
uint16_t x447 = 141U;
uint16_t x448 = 2174U;
static volatile int8_t x459 = 3;
int8_t x463 = -1;
uint32_t x472 = 369227451U;
volatile uint32_t x474 = 1711999085U;
uint32_t x479 = 9497040U;
uint16_t x485 = UINT16_MAX;
volatile int32_t t111 = 200408;
int32_t t112 = 0;
int64_t x500 = -11185049993LL;
int8_t x507 = -1;
int32_t t115 = 29835505;
uint8_t x509 = 48U;
volatile int64_t x513 = INT64_MIN;
static int64_t x516 = INT64_MIN;
int16_t x518 = INT16_MAX;
static volatile uint16_t x520 = 7U;
volatile int16_t x521 = INT16_MAX;
int64_t x527 = INT64_MAX;
volatile int32_t t120 = -1450;
static int8_t x530 = 6;
int8_t x533 = INT8_MIN;
static uint64_t x535 = UINT64_MAX;
volatile int32_t t122 = -4036404;
uint64_t x539 = UINT64_MAX;
volatile int32_t t124 = 1588389;
int32_t t125 = 3048;
int32_t t126 = -83;
static int32_t x553 = -1;
volatile int8_t x554 = INT8_MAX;
uint8_t x555 = 11U;
static int64_t x556 = INT64_MIN;
int32_t x561 = INT32_MIN;
int8_t x566 = -1;
uint16_t x577 = 123U;
static volatile int16_t x578 = -198;
int32_t t133 = 9459622;
int16_t x593 = INT16_MAX;
uint16_t x594 = UINT16_MAX;
int32_t x600 = INT32_MIN;
int8_t x606 = INT8_MIN;
int32_t t138 = -19;
int64_t x609 = INT64_MAX;
int32_t x614 = INT32_MIN;
uint64_t x620 = 3295LLU;
int32_t t141 = 1;
volatile int16_t x626 = -198;
static int64_t x627 = INT64_MIN;
int32_t t143 = -494308;
int16_t x631 = 7722;
static uint8_t x632 = 106U;
static int32_t t144 = 1;
int32_t x633 = 990655845;
static int32_t t145 = 42273;
int8_t x653 = 0;
int64_t x667 = INT64_MIN;
int16_t x668 = INT16_MAX;
volatile int32_t t152 = -511734;
static int8_t x674 = INT8_MIN;
volatile int32_t t154 = -3366;
volatile int16_t x694 = INT16_MIN;
int64_t x697 = -4627084668144LL;
int16_t x698 = INT16_MAX;
int8_t x700 = INT8_MIN;
volatile int32_t t159 = 0;
volatile int8_t x707 = INT8_MAX;
int32_t x715 = INT32_MIN;
uint64_t x721 = 799685620692681LLU;
uint16_t x723 = UINT16_MAX;
uint8_t x730 = UINT8_MAX;
volatile int32_t t165 = 1;
int64_t x733 = INT64_MIN;
uint64_t x735 = 23308LLU;
static volatile int32_t t167 = 61483600;
static int64_t x749 = -15712932708512LL;
int64_t x751 = INT64_MAX;
int16_t x764 = INT16_MIN;
static int32_t t175 = -74734634;
int16_t x773 = -7;
volatile uint64_t x777 = UINT64_MAX;
int8_t x782 = INT8_MIN;
int16_t x790 = INT16_MIN;
int16_t x805 = INT16_MIN;
int32_t x812 = INT32_MIN;
volatile int64_t x819 = INT64_MIN;
int64_t x827 = INT64_MIN;
static uint8_t x841 = UINT8_MAX;
volatile int16_t x842 = -3850;
int8_t x846 = -1;
volatile int32_t t192 = -56;
int32_t x850 = -495;
int32_t x851 = INT32_MAX;
static volatile int32_t x861 = INT32_MIN;
uint64_t x870 = UINT64_MAX;
int8_t x880 = -1;


void f0(void) {
    	uint64_t x2 = 27483205254834LLU;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 182411549;

    t0 = (((x1-x2)==x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 95312225U;
	uint64_t x6 = UINT64_MAX;
	volatile int32_t t1 = -7722816;

    t1 = (((x5-x6)==x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 0;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 22;

    t2 = (((x9-x10)==x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 264160LLU;
	static uint8_t x14 = 15U;
	int16_t x16 = -1;
	volatile int32_t t3 = 63;

    t3 = (((x13-x14)==x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int64_t x19 = -1LL;

    t4 = (((x17-x18)==x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -2035136847246285LL;
	volatile int8_t x23 = INT8_MIN;
	int32_t t5 = 3848;

    t5 = (((x21-x22)==x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	volatile uint64_t x26 = 516905649280LLU;
	int64_t x27 = 219781544140532LL;
	uint32_t x28 = 77149U;
	volatile int32_t t6 = -2;

    t6 = (((x25-x26)==x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 1LLU;
	int64_t x30 = 0LL;
	static int8_t x31 = INT8_MIN;
	int64_t x32 = -1697LL;
	static volatile int32_t t7 = -117756708;

    t7 = (((x29-x30)==x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x34 = 1219U;
	volatile int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MAX;
	static volatile int32_t t8 = 873;

    t8 = (((x33-x34)==x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	uint32_t x42 = 772145U;
	uint8_t x43 = UINT8_MAX;
	int32_t t9 = 3;

    t9 = (((x41-x42)==x43)<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	int32_t x47 = INT32_MAX;

    t10 = (((x45-x46)==x47)<=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 247858;
	uint32_t x50 = 9525U;
	volatile int16_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	static volatile int32_t t11 = -12;

    t11 = (((x49-x50)==x51)<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 176U;
	uint64_t x54 = 35922LLU;
	int32_t x56 = 3697515;
	int32_t t12 = -13;

    t12 = (((x53-x54)==x55)<=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	int64_t x59 = INT64_MAX;
	int32_t x60 = -18;
	int32_t t13 = 13844;

    t13 = (((x57-x58)==x59)<=x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	volatile int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	int32_t t14 = -6015707;

    t14 = (((x61-x62)==x63)<=x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	uint64_t x66 = 5092LLU;
	int8_t x67 = INT8_MIN;

    t15 = (((x65-x66)==x67)<=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 254U;
	static int32_t x70 = -1842391;
	volatile int32_t x71 = 2314586;
	uint8_t x72 = 79U;

    t16 = (((x69-x70)==x71)<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int8_t x75 = 1;
	volatile int64_t x76 = 715101278218680LL;

    t17 = (((x73-x74)==x75)<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MAX;
	int8_t x79 = INT8_MAX;
	static volatile int32_t t18 = -51618;

    t18 = (((x77-x78)==x79)<=x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x81 = 874;
	uint8_t x82 = UINT8_MAX;
	volatile int32_t t19 = -522064946;

    t19 = (((x81-x82)==x83)<=x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MAX;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = 36U;
	int32_t t20 = 0;

    t20 = (((x85-x86)==x87)<=x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x89 = 1U;
	uint64_t x90 = 904472311LLU;
	volatile int64_t x92 = -83564715LL;
	volatile int32_t t21 = 21816536;

    t21 = (((x89-x90)==x91)<=x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x97 = 78574LLU;
	int16_t x99 = 206;
	int64_t x100 = INT64_MAX;
	volatile int32_t t22 = -101;

    t22 = (((x97-x98)==x99)<=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = 44259;
	volatile int32_t x102 = INT32_MAX;
	int32_t x103 = -1;
	int32_t t23 = 203;

    t23 = (((x101-x102)==x103)<=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = INT32_MAX;
	volatile int16_t x107 = 7852;
	int32_t x108 = INT32_MIN;
	int32_t t24 = -1919779;

    t24 = (((x105-x106)==x107)<=x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = 12861U;
	uint64_t x110 = 4694061833503338LLU;
	int8_t x111 = -2;
	static int32_t x112 = -1;
	volatile int32_t t25 = 489803;

    t25 = (((x109-x110)==x111)<=x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x114 = 3U;
	volatile int64_t x115 = -1LL;
	int32_t t26 = 17143161;

    t26 = (((x113-x114)==x115)<=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x121 = -1LL;
	int16_t x124 = INT16_MIN;
	int32_t t27 = 6;

    t27 = (((x121-x122)==x123)<=x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = -1;
	uint16_t x126 = 0U;
	int16_t x127 = INT16_MAX;
	int16_t x128 = 20;

    t28 = (((x125-x126)==x127)<=x128);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = 577;
	static volatile uint64_t x130 = 230850LLU;
	static int8_t x131 = INT8_MIN;
	uint16_t x132 = 316U;

    t29 = (((x129-x130)==x131)<=x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = -520;
	volatile uint32_t x134 = 173711070U;
	int16_t x136 = -1;
	static volatile int32_t t30 = 6865;

    t30 = (((x133-x134)==x135)<=x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = UINT8_MAX;
	volatile uint8_t x138 = 1U;
	volatile uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	static int32_t t31 = 55;

    t31 = (((x137-x138)==x139)<=x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x141 = 0;
	uint8_t x142 = 94U;
	static uint32_t x143 = 1249U;
	int32_t t32 = -3097;

    t32 = (((x141-x142)==x143)<=x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	volatile int64_t x147 = INT64_MIN;
	int32_t t33 = 42;

    t33 = (((x145-x146)==x147)<=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = 116U;
	uint64_t x151 = 237LLU;
	int64_t x152 = -1LL;
	volatile int32_t t34 = -1;

    t34 = (((x149-x150)==x151)<=x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MAX;
	static uint64_t x154 = 1559571042354LLU;
	int8_t x155 = 0;
	uint64_t x156 = UINT64_MAX;
	int32_t t35 = 3034;

    t35 = (((x153-x154)==x155)<=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x157 = INT8_MAX;
	static int8_t x158 = -1;
	volatile uint16_t x159 = 9U;
	int32_t x160 = INT32_MAX;

    t36 = (((x157-x158)==x159)<=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = 10170584U;
	int64_t x163 = 1005LL;
	uint16_t x164 = 19508U;
	static volatile int32_t t37 = 3366;

    t37 = (((x161-x162)==x163)<=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x170 = 1;
	static int32_t x171 = INT32_MIN;
	volatile int8_t x172 = -16;
	volatile int32_t t38 = -2081736;

    t38 = (((x169-x170)==x171)<=x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x173 = -1;
	volatile uint32_t x175 = 4182544U;
	static int16_t x176 = -1;
	volatile int32_t t39 = -35900941;

    t39 = (((x173-x174)==x175)<=x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	int32_t t40 = -2;

    t40 = (((x177-x178)==x179)<=x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x181 = 172U;
	uint64_t x183 = 6130998250856007840LLU;

    t41 = (((x181-x182)==x183)<=x184);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x185 = -1;
	uint16_t x186 = 11408U;
	int16_t x187 = INT16_MIN;
	int32_t x188 = -611730063;
	static int32_t t42 = 113327238;

    t42 = (((x185-x186)==x187)<=x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = -1;
	static int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	volatile int16_t x192 = 5354;
	int32_t t43 = -71;

    t43 = (((x189-x190)==x191)<=x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = -1LL;
	int8_t x194 = -50;
	int16_t x195 = -1;
	volatile int32_t t44 = -27322;

    t44 = (((x193-x194)==x195)<=x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 133U;
	static uint8_t x199 = 20U;
	uint16_t x200 = 10176U;

    t45 = (((x197-x198)==x199)<=x200);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x202 = INT8_MIN;
	volatile uint32_t x203 = 1939U;
	static int64_t x204 = 38039657LL;
	volatile int32_t t46 = 385;

    t46 = (((x201-x202)==x203)<=x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x206 = INT32_MAX;
	int64_t x207 = INT64_MIN;
	int64_t x208 = 4815798064371387LL;
	int32_t t47 = 1;

    t47 = (((x205-x206)==x207)<=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x210 = INT8_MAX;
	uint32_t x211 = 836594U;
	volatile int32_t t48 = -6183173;

    t48 = (((x209-x210)==x211)<=x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x213 = 30440654LL;
	volatile int32_t x214 = -2;
	volatile int8_t x215 = 25;
	static volatile int8_t x216 = INT8_MIN;
	volatile int32_t t49 = -1;

    t49 = (((x213-x214)==x215)<=x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x217 = UINT16_MAX;
	static uint32_t x218 = 121445U;
	volatile int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;

    t50 = (((x217-x218)==x219)<=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x225 = -1;
	volatile int16_t x226 = INT16_MIN;
	int64_t x227 = 26LL;
	int16_t x228 = -1;
	static int32_t t51 = -3;

    t51 = (((x225-x226)==x227)<=x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x229 = -766;
	int16_t x230 = INT16_MIN;
	static uint64_t x232 = 2LLU;
	int32_t t52 = -1430;

    t52 = (((x229-x230)==x231)<=x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = INT16_MAX;
	int16_t x235 = -55;
	static int32_t x236 = -1;
	int32_t t53 = 80;

    t53 = (((x233-x234)==x235)<=x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x238 = -1;
	uint8_t x239 = 44U;
	volatile uint16_t x240 = 51U;
	int32_t t54 = -14;

    t54 = (((x237-x238)==x239)<=x240);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x241 = UINT8_MAX;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	static volatile int32_t t55 = -13975;

    t55 = (((x241-x242)==x243)<=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x245 = 30;
	static volatile int16_t x246 = 221;
	volatile int16_t x247 = INT16_MIN;
	uint64_t x248 = 1144LLU;
	volatile int32_t t56 = -422478393;

    t56 = (((x245-x246)==x247)<=x248);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x249 = 17375352;
	volatile int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t57 = -230898;

    t57 = (((x249-x250)==x251)<=x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = 711168224U;
	uint8_t x260 = 0U;
	int32_t t58 = -60;

    t58 = (((x257-x258)==x259)<=x260);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x265 = 174446U;
	uint8_t x266 = UINT8_MAX;
	uint16_t x267 = 4U;
	static int64_t x268 = INT64_MIN;
	int32_t t59 = 0;

    t59 = (((x265-x266)==x267)<=x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x269 = -1LL;
	uint32_t x270 = 1734530U;
	static uint64_t x271 = 298912438LLU;
	static uint8_t x272 = 16U;
	static int32_t t60 = -21;

    t60 = (((x269-x270)==x271)<=x272);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x274 = INT64_MIN;
	int64_t x276 = 1268739613827265LL;
	volatile int32_t t61 = 2;

    t61 = (((x273-x274)==x275)<=x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = -1LL;
	int32_t x278 = 25590;
	int32_t x279 = -32;
	static int64_t x280 = -145608135021LL;
	int32_t t62 = -7511;

    t62 = (((x277-x278)==x279)<=x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 8286498789LLU;
	int32_t x284 = 1;

    t63 = (((x281-x282)==x283)<=x284);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	static int64_t x287 = INT64_MIN;
	static volatile int32_t t64 = 32863428;

    t64 = (((x285-x286)==x287)<=x288);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = INT16_MAX;
	int16_t x290 = -1;
	static int16_t x291 = -1;
	int32_t t65 = 22307;

    t65 = (((x289-x290)==x291)<=x292);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x295 = INT8_MIN;
	volatile int32_t t66 = 417442;

    t66 = (((x293-x294)==x295)<=x296);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x297 = UINT32_MAX;
	uint16_t x299 = 28985U;

    t67 = (((x297-x298)==x299)<=x300);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x301 = -1697758560878638051LL;
	static uint8_t x302 = 1U;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -1;
	static int32_t t68 = 11379;

    t68 = (((x301-x302)==x303)<=x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x306 = 0LLU;
	int64_t x307 = INT64_MIN;
	volatile int16_t x308 = INT16_MIN;
	int32_t t69 = 0;

    t69 = (((x305-x306)==x307)<=x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = INT64_MAX;
	uint32_t x310 = 13466599U;
	static uint32_t x312 = 79U;

    t70 = (((x309-x310)==x311)<=x312);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x313 = INT32_MIN;
	uint64_t x314 = 1915LLU;
	int8_t x315 = -50;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t71 = 833;

    t71 = (((x313-x314)==x315)<=x316);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = INT64_MIN;
	static int8_t x318 = -1;
	static uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 1U;
	int32_t t72 = 0;

    t72 = (((x317-x318)==x319)<=x320);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x322 = -2404134;
	uint16_t x323 = 362U;
	volatile int32_t x324 = INT32_MAX;
	static volatile int32_t t73 = -191129784;

    t73 = (((x321-x322)==x323)<=x324);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	static int64_t x327 = -4230453153401LL;
	int16_t x328 = INT16_MIN;
	static int32_t t74 = 98229;

    t74 = (((x325-x326)==x327)<=x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x329 = -37452478;
	static uint64_t x330 = UINT64_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t75 = -265427052;

    t75 = (((x329-x330)==x331)<=x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x333 = 0;
	uint64_t x334 = 1397957693806LLU;
	volatile int16_t x335 = INT16_MIN;
	static volatile int64_t x336 = INT64_MAX;
	int32_t t76 = -12364;

    t76 = (((x333-x334)==x335)<=x336);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x337 = 36U;
	uint32_t x338 = 369857U;
	volatile uint64_t x339 = 99108581902269LLU;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t77 = -504;

    t77 = (((x337-x338)==x339)<=x340);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x341 = -6;
	int16_t x342 = 13440;
	static uint8_t x344 = UINT8_MAX;
	volatile int32_t t78 = -64275143;

    t78 = (((x341-x342)==x343)<=x344);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x346 = 508;
	int32_t x347 = -20190;
	static int32_t x348 = -505463;

    t79 = (((x345-x346)==x347)<=x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x353 = INT32_MAX;
	static volatile int16_t x354 = 52;
	uint16_t x355 = 32636U;
	uint16_t x356 = 1U;
	volatile int32_t t80 = 109807014;

    t80 = (((x353-x354)==x355)<=x356);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x357 = 2U;
	volatile int16_t x358 = -1;
	static volatile int32_t x360 = 5884;
	static int32_t t81 = -84;

    t81 = (((x357-x358)==x359)<=x360);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = 349665854LL;
	volatile int32_t t82 = -213655483;

    t82 = (((x361-x362)==x363)<=x364);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x365 = -1;
	int32_t t83 = 0;

    t83 = (((x365-x366)==x367)<=x368);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int32_t t84 = 1;

    t84 = (((x369-x370)==x371)<=x372);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x375 = -878079352LL;
	uint8_t x376 = 55U;
	static int32_t t85 = 16;

    t85 = (((x373-x374)==x375)<=x376);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x377 = 0LLU;
	uint16_t x378 = 182U;
	static volatile int64_t x379 = -7856LL;
	uint64_t x380 = UINT64_MAX;
	static volatile int32_t t86 = -12665;

    t86 = (((x377-x378)==x379)<=x380);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x381 = 1089725246553871LLU;
	uint64_t x382 = UINT64_MAX;
	volatile uint64_t x383 = 23LLU;
	uint64_t x384 = 4508022LLU;
	volatile int32_t t87 = -537;

    t87 = (((x381-x382)==x383)<=x384);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x386 = -22;
	uint16_t x388 = 6751U;
	volatile int32_t t88 = 153;

    t88 = (((x385-x386)==x387)<=x388);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x390 = -1;
	int8_t x391 = -1;
	volatile uint64_t x392 = 3345LLU;
	int32_t t89 = 6723;

    t89 = (((x389-x390)==x391)<=x392);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x393 = UINT64_MAX;
	static uint64_t x394 = 36LLU;
	static int32_t x395 = -1086;
	int32_t x396 = -1;
	volatile int32_t t90 = 0;

    t90 = (((x393-x394)==x395)<=x396);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x397 = INT8_MAX;
	int64_t x399 = 7204LL;
	static int32_t t91 = -689564;

    t91 = (((x397-x398)==x399)<=x400);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x401 = INT8_MIN;
	uint8_t x402 = 55U;
	int8_t x404 = -28;

    t92 = (((x401-x402)==x403)<=x404);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x405 = 1U;
	volatile int64_t x406 = -1LL;
	uint32_t x407 = 89461369U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t93 = 15;

    t93 = (((x405-x406)==x407)<=x408);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x410 = 109138;
	uint64_t x412 = 457491121705377LLU;
	int32_t t94 = 60347426;

    t94 = (((x409-x410)==x411)<=x412);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x413 = -122680320727506LL;
	int32_t x414 = INT32_MIN;
	static int16_t x415 = -1;
	uint16_t x416 = 61U;
	int32_t t95 = -32690671;

    t95 = (((x413-x414)==x415)<=x416);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x417 = -53;
	uint16_t x418 = 627U;
	static volatile int16_t x420 = INT16_MIN;
	static volatile int32_t t96 = 299481483;

    t96 = (((x417-x418)==x419)<=x420);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MAX;
	uint64_t x424 = 56578LLU;
	volatile int32_t t97 = -1;

    t97 = (((x421-x422)==x423)<=x424);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MAX;
	uint32_t x428 = 670U;
	volatile int32_t t98 = 1;

    t98 = (((x425-x426)==x427)<=x428);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x429 = 52054539U;
	volatile int8_t x430 = -1;
	int32_t x431 = INT32_MIN;
	volatile int32_t t99 = 1;

    t99 = (((x429-x430)==x431)<=x432);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x437 = 2438126LLU;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MAX;
	volatile int32_t t100 = 699;

    t100 = (((x437-x438)==x439)<=x440);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x442 = 0LL;
	uint32_t x443 = 77697950U;
	uint16_t x444 = 1U;
	int32_t t101 = 163541;

    t101 = (((x441-x442)==x443)<=x444);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x445 = 148U;
	static uint64_t x446 = UINT64_MAX;
	volatile int32_t t102 = 9213510;

    t102 = (((x445-x446)==x447)<=x448);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x449 = 4;
	int16_t x450 = 4599;
	static int64_t x451 = INT64_MIN;
	uint64_t x452 = 350017487628LLU;
	volatile int32_t t103 = 16;

    t103 = (((x449-x450)==x451)<=x452);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x453 = INT8_MAX;
	uint64_t x454 = 31584222LLU;
	static uint8_t x455 = 6U;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t104 = -54600682;

    t104 = (((x453-x454)==x455)<=x456);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x457 = -7411LL;
	uint8_t x458 = 14U;
	int64_t x460 = -1182746544468LL;
	static int32_t t105 = 10;

    t105 = (((x457-x458)==x459)<=x460);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = INT16_MIN;
	static uint16_t x462 = UINT16_MAX;
	int32_t x464 = INT32_MAX;
	volatile int32_t t106 = -1;

    t106 = (((x461-x462)==x463)<=x464);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x465 = -1;
	int8_t x466 = -1;
	int32_t x467 = 542396;
	int8_t x468 = INT8_MIN;
	static int32_t t107 = -7215336;

    t107 = (((x465-x466)==x467)<=x468);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x469 = 261976503U;
	volatile int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MIN;
	static int32_t t108 = -19;

    t108 = (((x469-x470)==x471)<=x472);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x473 = -7;
	volatile int8_t x475 = -54;
	static uint32_t x476 = 6U;
	int32_t t109 = -16023110;

    t109 = (((x473-x474)==x475)<=x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x477 = -1LL;
	uint64_t x478 = UINT64_MAX;
	static int16_t x480 = -98;
	static int32_t t110 = -149;

    t110 = (((x477-x478)==x479)<=x480);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x486 = 256998LLU;
	uint32_t x487 = 700692049U;
	static volatile int64_t x488 = INT64_MAX;

    t111 = (((x485-x486)==x487)<=x488);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x493 = UINT32_MAX;
	int8_t x494 = INT8_MAX;
	int64_t x495 = INT64_MIN;
	int64_t x496 = INT64_MIN;

    t112 = (((x493-x494)==x495)<=x496);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x497 = 26361U;
	volatile uint8_t x498 = UINT8_MAX;
	volatile int8_t x499 = INT8_MIN;
	int32_t t113 = 247573761;

    t113 = (((x497-x498)==x499)<=x500);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x501 = -1LL;
	int64_t x502 = INT64_MAX;
	volatile int64_t x503 = 47234LL;
	int8_t x504 = INT8_MIN;
	static int32_t t114 = -197274;

    t114 = (((x501-x502)==x503)<=x504);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x505 = -38730786;
	static volatile uint8_t x506 = UINT8_MAX;
	int8_t x508 = INT8_MIN;

    t115 = (((x505-x506)==x507)<=x508);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x510 = -1;
	int16_t x511 = INT16_MAX;
	static int8_t x512 = INT8_MIN;
	static int32_t t116 = 1;

    t116 = (((x509-x510)==x511)<=x512);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x514 = INT16_MIN;
	volatile int16_t x515 = -1;
	int32_t t117 = 431320;

    t117 = (((x513-x514)==x515)<=x516);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x517 = 18;
	volatile int64_t x519 = INT64_MIN;
	int32_t t118 = 29;

    t118 = (((x517-x518)==x519)<=x520);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x522 = UINT64_MAX;
	volatile uint64_t x523 = UINT64_MAX;
	static int8_t x524 = 55;
	int32_t t119 = 3058;

    t119 = (((x521-x522)==x523)<=x524);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x525 = -1;
	int8_t x526 = -51;
	int64_t x528 = 202767676330173110LL;

    t120 = (((x525-x526)==x527)<=x528);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x529 = -50;
	static int64_t x531 = 120078299119LL;
	volatile int64_t x532 = -1LL;
	static int32_t t121 = -156424762;

    t121 = (((x529-x530)==x531)<=x532);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x534 = 117U;
	volatile int32_t x536 = 197;

    t122 = (((x533-x534)==x535)<=x536);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x537 = INT8_MIN;
	volatile int8_t x538 = INT8_MIN;
	int8_t x540 = 24;
	volatile int32_t t123 = 318;

    t123 = (((x537-x538)==x539)<=x540);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x541 = -7;
	static volatile int64_t x542 = INT64_MIN;
	static uint8_t x543 = UINT8_MAX;
	int8_t x544 = INT8_MIN;

    t124 = (((x541-x542)==x543)<=x544);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x545 = 54896730390212LL;
	int16_t x546 = -75;
	int64_t x547 = INT64_MIN;
	volatile uint32_t x548 = UINT32_MAX;

    t125 = (((x545-x546)==x547)<=x548);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x549 = INT32_MAX;
	static uint8_t x550 = 50U;
	int8_t x551 = INT8_MAX;
	int64_t x552 = -1LL;

    t126 = (((x549-x550)==x551)<=x552);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t t127 = 13;

    t127 = (((x553-x554)==x555)<=x556);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x562 = 0;
	int8_t x563 = -2;
	uint32_t x564 = UINT32_MAX;
	static volatile int32_t t128 = 3595;

    t128 = (((x561-x562)==x563)<=x564);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x565 = -214636045;
	int16_t x567 = 0;
	uint64_t x568 = UINT64_MAX;
	volatile int32_t t129 = -191;

    t129 = (((x565-x566)==x567)<=x568);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x569 = UINT8_MAX;
	uint64_t x570 = 10LLU;
	static volatile int64_t x571 = INT64_MIN;
	uint64_t x572 = UINT64_MAX;
	static int32_t t130 = 0;

    t130 = (((x569-x570)==x571)<=x572);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x573 = 3U;
	static volatile uint16_t x574 = 6U;
	int8_t x575 = 1;
	static volatile uint32_t x576 = 3U;
	volatile int32_t t131 = -1287;

    t131 = (((x573-x574)==x575)<=x576);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x579 = 29U;
	int64_t x580 = INT64_MIN;
	volatile int32_t t132 = 200123652;

    t132 = (((x577-x578)==x579)<=x580);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x585 = UINT32_MAX;
	int8_t x586 = -1;
	int64_t x587 = INT64_MIN;
	int32_t x588 = -61423987;

    t133 = (((x585-x586)==x587)<=x588);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x589 = UINT8_MAX;
	static int8_t x590 = INT8_MAX;
	static int16_t x591 = INT16_MIN;
	int32_t x592 = -2974;
	int32_t t134 = -3;

    t134 = (((x589-x590)==x591)<=x592);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x595 = 41U;
	int32_t x596 = INT32_MIN;
	volatile int32_t t135 = 9943100;

    t135 = (((x593-x594)==x595)<=x596);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x597 = INT64_MAX;
	int8_t x598 = INT8_MAX;
	static uint8_t x599 = 1U;
	static volatile int32_t t136 = 6438194;

    t136 = (((x597-x598)==x599)<=x600);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x601 = INT16_MAX;
	volatile uint8_t x602 = 1U;
	int8_t x603 = 2;
	int8_t x604 = -1;
	volatile int32_t t137 = 5;

    t137 = (((x601-x602)==x603)<=x604);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x605 = 802LLU;
	static int8_t x607 = INT8_MIN;
	uint16_t x608 = UINT16_MAX;

    t138 = (((x605-x606)==x607)<=x608);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x610 = INT16_MAX;
	uint16_t x611 = 2U;
	int16_t x612 = INT16_MAX;
	static volatile int32_t t139 = -14783;

    t139 = (((x609-x610)==x611)<=x612);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x613 = -1;
	int8_t x615 = INT8_MIN;
	int64_t x616 = INT64_MAX;
	int32_t t140 = 375328497;

    t140 = (((x613-x614)==x615)<=x616);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x617 = -1;
	volatile uint64_t x618 = UINT64_MAX;
	int32_t x619 = -770832853;

    t141 = (((x617-x618)==x619)<=x620);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x621 = -1;
	static uint64_t x622 = 121295009469LLU;
	int32_t x623 = -1;
	int16_t x624 = INT16_MAX;
	volatile int32_t t142 = 432;

    t142 = (((x621-x622)==x623)<=x624);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x625 = UINT64_MAX;
	int64_t x628 = INT64_MAX;

    t143 = (((x625-x626)==x627)<=x628);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x629 = INT8_MIN;
	int8_t x630 = INT8_MIN;

    t144 = (((x629-x630)==x631)<=x632);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x634 = 1597U;
	int16_t x635 = INT16_MIN;
	static volatile int16_t x636 = -5;

    t145 = (((x633-x634)==x635)<=x636);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x637 = INT32_MIN;
	volatile int32_t x638 = -1;
	uint32_t x639 = 51U;
	uint8_t x640 = UINT8_MAX;
	static int32_t t146 = 1376;

    t146 = (((x637-x638)==x639)<=x640);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x641 = 0;
	volatile int8_t x642 = -9;
	int64_t x643 = -724312642894391LL;
	volatile int32_t x644 = 306465693;
	int32_t t147 = 488103;

    t147 = (((x641-x642)==x643)<=x644);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x645 = INT16_MIN;
	volatile int8_t x646 = INT8_MAX;
	int64_t x647 = 4038811064770117LL;
	volatile int8_t x648 = -40;
	int32_t t148 = 253227;

    t148 = (((x645-x646)==x647)<=x648);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x649 = INT8_MIN;
	uint8_t x650 = 0U;
	uint32_t x651 = 3070620U;
	volatile int64_t x652 = -42200LL;
	volatile int32_t t149 = -2897652;

    t149 = (((x649-x650)==x651)<=x652);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x654 = -1;
	int16_t x655 = -724;
	static volatile int8_t x656 = -1;
	int32_t t150 = -55035480;

    t150 = (((x653-x654)==x655)<=x656);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x661 = -1;
	static uint64_t x662 = 919959621004LLU;
	int32_t x663 = INT32_MAX;
	int32_t x664 = 17693774;
	int32_t t151 = 16018035;

    t151 = (((x661-x662)==x663)<=x664);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x665 = -563163;
	int8_t x666 = -1;

    t152 = (((x665-x666)==x667)<=x668);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x669 = 1U;
	static uint8_t x670 = UINT8_MAX;
	int64_t x671 = -179387173080LL;
	int16_t x672 = INT16_MIN;
	int32_t t153 = -1;

    t153 = (((x669-x670)==x671)<=x672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x673 = INT8_MAX;
	int8_t x675 = INT8_MIN;
	int32_t x676 = 4395;

    t154 = (((x673-x674)==x675)<=x676);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x681 = INT32_MIN;
	uint32_t x682 = UINT32_MAX;
	int64_t x683 = -1LL;
	uint32_t x684 = 215995U;
	static int32_t t155 = -68228;

    t155 = (((x681-x682)==x683)<=x684);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x685 = INT16_MAX;
	int16_t x686 = INT16_MAX;
	uint32_t x687 = 54900369U;
	int16_t x688 = INT16_MIN;
	volatile int32_t t156 = 3421345;

    t156 = (((x685-x686)==x687)<=x688);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x693 = INT8_MAX;
	uint16_t x695 = 10U;
	int32_t x696 = INT32_MIN;
	int32_t t157 = -3;

    t157 = (((x693-x694)==x695)<=x696);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x699 = INT32_MIN;
	int32_t t158 = -50390;

    t158 = (((x697-x698)==x699)<=x700);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x701 = INT8_MAX;
	int16_t x702 = -1;
	static uint16_t x703 = 1660U;
	int8_t x704 = INT8_MIN;

    t159 = (((x701-x702)==x703)<=x704);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = -260;
	static uint32_t x706 = UINT32_MAX;
	static int8_t x708 = INT8_MIN;
	int32_t t160 = 459;

    t160 = (((x705-x706)==x707)<=x708);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x709 = -1;
	uint64_t x710 = UINT64_MAX;
	int16_t x711 = 1;
	int32_t x712 = INT32_MAX;
	volatile int32_t t161 = 7539455;

    t161 = (((x709-x710)==x711)<=x712);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x713 = 130638757LL;
	int8_t x714 = INT8_MIN;
	static int32_t x716 = 194353304;
	int32_t t162 = -16;

    t162 = (((x713-x714)==x715)<=x716);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x722 = INT32_MAX;
	static uint16_t x724 = 5U;
	int32_t t163 = -3;

    t163 = (((x721-x722)==x723)<=x724);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x725 = 73U;
	static uint8_t x726 = 1U;
	int64_t x727 = INT64_MIN;
	volatile int64_t x728 = INT64_MIN;
	int32_t t164 = -2981286;

    t164 = (((x725-x726)==x727)<=x728);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x729 = 1;
	int8_t x731 = -1;
	volatile int64_t x732 = -1LL;

    t165 = (((x729-x730)==x731)<=x732);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x734 = 2377790291806LLU;
	volatile int8_t x736 = -43;
	volatile int32_t t166 = 96176741;

    t166 = (((x733-x734)==x735)<=x736);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x737 = 124709;
	static volatile int16_t x738 = INT16_MAX;
	uint64_t x739 = UINT64_MAX;
	int8_t x740 = INT8_MIN;

    t167 = (((x737-x738)==x739)<=x740);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x741 = -19452676;
	volatile int16_t x742 = -1;
	uint64_t x743 = 2294007LLU;
	volatile uint16_t x744 = 44U;
	volatile int32_t t168 = 26;

    t168 = (((x741-x742)==x743)<=x744);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x745 = INT32_MIN;
	static volatile int64_t x746 = INT64_MIN;
	int8_t x747 = INT8_MIN;
	static uint64_t x748 = UINT64_MAX;
	int32_t t169 = 195850;

    t169 = (((x745-x746)==x747)<=x748);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x750 = INT64_MIN;
	volatile uint8_t x752 = 38U;
	static volatile int32_t t170 = -1330;

    t170 = (((x749-x750)==x751)<=x752);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x753 = -1;
	int32_t x754 = INT32_MIN;
	int64_t x755 = INT64_MIN;
	int16_t x756 = INT16_MAX;
	int32_t t171 = -6439123;

    t171 = (((x753-x754)==x755)<=x756);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x757 = 12060233U;
	int16_t x758 = 1;
	volatile int64_t x759 = -3LL;
	uint8_t x760 = UINT8_MAX;
	int32_t t172 = 958897214;

    t172 = (((x757-x758)==x759)<=x760);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x761 = 6195295708LLU;
	uint64_t x762 = UINT64_MAX;
	volatile int32_t x763 = -45637168;
	int32_t t173 = 722536230;

    t173 = (((x761-x762)==x763)<=x764);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x765 = 1022214953480LL;
	static volatile int16_t x766 = 2416;
	uint8_t x767 = UINT8_MAX;
	int8_t x768 = INT8_MIN;
	int32_t t174 = 61782328;

    t174 = (((x765-x766)==x767)<=x768);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x769 = INT8_MIN;
	uint64_t x770 = 51771552LLU;
	volatile uint16_t x771 = 187U;
	int8_t x772 = INT8_MIN;

    t175 = (((x769-x770)==x771)<=x772);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x774 = 14LLU;
	int16_t x775 = -1;
	volatile int32_t x776 = INT32_MIN;
	int32_t t176 = 3;

    t176 = (((x773-x774)==x775)<=x776);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x778 = INT32_MIN;
	int16_t x779 = 7;
	uint8_t x780 = UINT8_MAX;
	volatile int32_t t177 = 6;

    t177 = (((x777-x778)==x779)<=x780);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x781 = 27U;
	static int64_t x783 = INT64_MAX;
	volatile int16_t x784 = INT16_MIN;
	volatile int32_t t178 = -119;

    t178 = (((x781-x782)==x783)<=x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x785 = INT8_MAX;
	uint16_t x786 = 10U;
	int32_t x787 = INT32_MIN;
	int32_t x788 = -1;
	static volatile int32_t t179 = 33435461;

    t179 = (((x785-x786)==x787)<=x788);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x789 = UINT64_MAX;
	uint16_t x791 = UINT16_MAX;
	static int16_t x792 = 1;
	volatile int32_t t180 = 303;

    t180 = (((x789-x790)==x791)<=x792);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x793 = 18U;
	int16_t x794 = -1;
	int16_t x795 = INT16_MIN;
	static int64_t x796 = INT64_MIN;
	static volatile int32_t t181 = 29;

    t181 = (((x793-x794)==x795)<=x796);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x797 = 501583649U;
	int8_t x798 = -35;
	int16_t x799 = INT16_MIN;
	static volatile int8_t x800 = -1;
	volatile int32_t t182 = 1072321215;

    t182 = (((x797-x798)==x799)<=x800);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x806 = INT8_MIN;
	int32_t x807 = INT32_MIN;
	static int8_t x808 = INT8_MIN;
	volatile int32_t t183 = -3;

    t183 = (((x805-x806)==x807)<=x808);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x809 = INT8_MIN;
	uint8_t x810 = 35U;
	int16_t x811 = -1;
	int32_t t184 = -1;

    t184 = (((x809-x810)==x811)<=x812);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x813 = UINT8_MAX;
	static volatile int64_t x814 = 448164308226LL;
	int64_t x815 = INT64_MIN;
	int64_t x816 = -1LL;
	volatile int32_t t185 = -1698;

    t185 = (((x813-x814)==x815)<=x816);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x817 = -1;
	volatile uint64_t x818 = 38657016476LLU;
	uint32_t x820 = 2969U;
	volatile int32_t t186 = -15081408;

    t186 = (((x817-x818)==x819)<=x820);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x825 = 44LLU;
	uint16_t x826 = 174U;
	int16_t x828 = 13625;
	volatile int32_t t187 = 6174;

    t187 = (((x825-x826)==x827)<=x828);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x829 = UINT32_MAX;
	int8_t x830 = INT8_MIN;
	static uint32_t x831 = 7033U;
	int32_t x832 = INT32_MAX;
	volatile int32_t t188 = 3392;

    t188 = (((x829-x830)==x831)<=x832);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x833 = INT8_MIN;
	volatile int64_t x834 = INT64_MIN;
	int8_t x835 = -1;
	uint64_t x836 = 5732087LLU;
	int32_t t189 = 0;

    t189 = (((x833-x834)==x835)<=x836);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x837 = -49722022LL;
	int32_t x838 = -1;
	int32_t x839 = INT32_MIN;
	int64_t x840 = INT64_MIN;
	volatile int32_t t190 = -13985;

    t190 = (((x837-x838)==x839)<=x840);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x843 = -1;
	static uint8_t x844 = 69U;
	int32_t t191 = -1923826;

    t191 = (((x841-x842)==x843)<=x844);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x845 = 7329148U;
	int64_t x847 = INT64_MIN;
	static volatile uint16_t x848 = 33U;

    t192 = (((x845-x846)==x847)<=x848);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x849 = -15;
	uint8_t x852 = UINT8_MAX;
	int32_t t193 = 273264369;

    t193 = (((x849-x850)==x851)<=x852);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x853 = INT8_MIN;
	static uint32_t x854 = UINT32_MAX;
	int8_t x855 = -1;
	volatile int64_t x856 = INT64_MIN;
	volatile int32_t t194 = -4065589;

    t194 = (((x853-x854)==x855)<=x856);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x857 = INT8_MIN;
	volatile uint16_t x858 = 25560U;
	static int64_t x859 = INT64_MIN;
	int8_t x860 = -1;
	int32_t t195 = 365162063;

    t195 = (((x857-x858)==x859)<=x860);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x862 = -33703485213457920LL;
	static int32_t x863 = 1;
	static int16_t x864 = 641;
	int32_t t196 = 337936900;

    t196 = (((x861-x862)==x863)<=x864);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x865 = INT32_MAX;
	uint8_t x866 = UINT8_MAX;
	volatile int16_t x867 = 26;
	int16_t x868 = INT16_MIN;
	static volatile int32_t t197 = 142412136;

    t197 = (((x865-x866)==x867)<=x868);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x869 = 6707669366957457243LLU;
	int8_t x871 = INT8_MIN;
	int64_t x872 = INT64_MAX;
	volatile int32_t t198 = 1013;

    t198 = (((x869-x870)==x871)<=x872);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x877 = -2;
	uint32_t x878 = UINT32_MAX;
	int32_t x879 = 8;
	volatile int32_t t199 = 6231;

    t199 = (((x877-x878)==x879)<=x880);

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

