
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

int8_t x3 = -1;
int64_t t2 = -8LL;
int8_t x20 = -1;
static uint16_t x23 = UINT16_MAX;
int32_t t5 = 0;
int16_t x26 = INT16_MIN;
uint32_t x31 = UINT32_MAX;
volatile int32_t t8 = -23;
uint16_t x37 = 6U;
uint64_t x39 = UINT64_MAX;
int64_t x44 = INT64_MIN;
uint32_t x47 = 7097477U;
int32_t t11 = 1729;
volatile uint64_t x53 = UINT64_MAX;
static int8_t x61 = INT8_MIN;
int32_t t15 = 1;
uint64_t x69 = 1479LLU;
static int64_t x70 = INT64_MAX;
int16_t x72 = 73;
static int64_t x80 = INT64_MIN;
static volatile uint32_t t19 = 363U;
uint64_t x85 = 598532LLU;
uint16_t x98 = 5U;
volatile int32_t t24 = 225;
uint32_t x104 = 2327U;
volatile int16_t x105 = INT16_MAX;
uint32_t x110 = UINT32_MAX;
uint32_t x115 = 15U;
uint8_t x139 = 24U;
static int8_t x142 = INT8_MIN;
volatile int64_t x145 = -1LL;
static volatile uint64_t x147 = 218312318285872240LLU;
int8_t x154 = INT8_MAX;
int32_t x157 = INT32_MAX;
volatile int32_t x159 = INT32_MIN;
uint64_t x162 = 64693LLU;
volatile uint16_t x163 = 3274U;
int64_t x175 = -1LL;
int64_t x193 = -1LL;
uint32_t x195 = UINT32_MAX;
uint32_t x200 = 603U;
int8_t x205 = INT8_MAX;
int64_t x206 = -191541LL;
int32_t x209 = -1;
static volatile int32_t t52 = 62090;
int64_t x214 = INT64_MIN;
uint16_t x218 = 18564U;
int64_t x219 = -26220LL;
volatile int32_t x223 = INT32_MIN;
int64_t x224 = INT64_MIN;
volatile uint64_t x226 = UINT64_MAX;
static int32_t x229 = -1686957;
volatile int32_t t57 = 172347;
int16_t x233 = -359;
uint64_t x235 = UINT64_MAX;
static volatile int8_t x241 = -13;
int64_t x245 = -72234259943793LL;
volatile int16_t x248 = 1;
int8_t x251 = 4;
static uint64_t x253 = 3526521470688209LLU;
volatile uint64_t t63 = 49558844805LLU;
uint8_t x257 = 2U;
static int64_t x263 = -1LL;
static uint32_t x264 = UINT32_MAX;
int8_t x279 = INT8_MIN;
int16_t x288 = INT16_MAX;
int64_t x292 = INT64_MAX;
int64_t t72 = -46LL;
int8_t x294 = INT8_MAX;
uint32_t x306 = UINT32_MAX;
static int8_t x310 = INT8_MAX;
int16_t x316 = -62;
int16_t x317 = INT16_MIN;
int16_t x322 = INT16_MAX;
volatile int16_t x323 = 2;
volatile int8_t x324 = INT8_MIN;
volatile int8_t x327 = INT8_MIN;
int64_t x329 = -187561472365029717LL;
int64_t x330 = 2934758455209537587LL;
volatile uint8_t x331 = 8U;
uint16_t x335 = 234U;
uint16_t x337 = 14269U;
int16_t x341 = INT16_MAX;
uint64_t x343 = 10305102687865121LLU;
volatile int32_t x347 = -1;
volatile int64_t x360 = 3411059854176LL;
static int32_t t89 = 3561;
int32_t x361 = INT32_MIN;
int32_t x363 = 65675927;
int64_t x369 = INT64_MIN;
int16_t x377 = -30;
static volatile int32_t t94 = 973343;
static volatile int8_t x385 = INT8_MIN;
int16_t x394 = INT16_MAX;
volatile int32_t t99 = -390;
int32_t t100 = 165;
volatile uint64_t x405 = 0LLU;
static uint8_t x406 = UINT8_MAX;
int16_t x408 = INT16_MAX;
volatile int32_t t102 = 376872123;
static int8_t x413 = 0;
static int32_t x417 = INT32_MAX;
volatile int32_t t104 = INT32_MAX;
int16_t x421 = INT16_MAX;
static uint64_t x428 = UINT64_MAX;
static int32_t t108 = -717453;
static int64_t x442 = INT64_MIN;
int16_t x454 = -304;
int32_t t113 = 841244;
int32_t x458 = INT32_MIN;
int8_t x463 = INT8_MAX;
volatile int64_t x464 = -1LL;
uint8_t x467 = 2U;
int32_t x469 = INT32_MAX;
int32_t x481 = INT32_MIN;
volatile int32_t t120 = 6;
static int32_t t123 = -430;
int32_t x501 = INT32_MIN;
uint64_t x505 = 4638568361631LLU;
uint8_t x515 = 2U;
volatile int8_t x516 = -3;
int64_t x517 = INT64_MIN;
int32_t x519 = -100156;
int16_t x520 = -1;
volatile int64_t x523 = INT64_MIN;
int8_t x524 = INT8_MIN;
int64_t x527 = 4023922480204LL;
volatile int32_t t132 = -1122764;
int64_t x535 = -1LL;
int32_t t133 = 2;
volatile int16_t x538 = 4542;
int32_t x539 = INT32_MAX;
static int64_t x546 = -1341243LL;
int32_t t137 = 8092;
int8_t x555 = -8;
int32_t x556 = 330920;
int64_t x561 = INT64_MIN;
uint8_t x563 = 3U;
volatile int16_t x567 = INT16_MIN;
int64_t t141 = INT64_MIN;
volatile int64_t t142 = INT64_MIN;
int16_t x576 = INT16_MAX;
uint8_t x579 = UINT8_MAX;
int32_t x581 = INT32_MIN;
int16_t x583 = 12756;
volatile int32_t t145 = -23430;
int32_t x586 = 0;
int16_t x588 = INT16_MIN;
int32_t t146 = 112820;
int64_t x601 = -1LL;
int64_t t150 = 428986LL;
uint16_t x622 = 5U;
int32_t x625 = INT32_MIN;
uint8_t x626 = UINT8_MAX;
int64_t x635 = 235455LL;
int64_t x637 = INT64_MIN;
volatile int16_t x643 = 0;
static int64_t x646 = INT64_MAX;
int32_t t161 = 15;
int8_t x651 = -1;
int32_t x656 = 338501;
int32_t t163 = -56542558;
int8_t x659 = -1;
static uint32_t t164 = 186U;
int32_t x664 = INT32_MIN;
static volatile int32_t t165 = -454742;
volatile uint16_t x671 = 2062U;
int64_t x678 = -1LL;
uint16_t x684 = UINT16_MAX;
volatile int32_t t170 = -17;
uint16_t x687 = UINT16_MAX;
uint64_t x689 = 9238446018670935LLU;
volatile uint64_t t172 = 1882LLU;
static uint32_t x694 = 24349758U;
static volatile int32_t x701 = INT32_MIN;
uint64_t x703 = UINT64_MAX;
static volatile int32_t t178 = 9;
int32_t x720 = -1;
uint16_t x723 = UINT16_MAX;
int8_t x730 = INT8_MIN;
volatile int32_t t182 = -299491;
int8_t x745 = INT8_MAX;
int64_t x747 = -1LL;
uint8_t x749 = 21U;
volatile int32_t t188 = -126452;
volatile int32_t t190 = -21;
int16_t x767 = -1;
int32_t x768 = -94;
int64_t x770 = -1LL;
uint64_t x779 = 5833129558LLU;
int32_t x780 = INT32_MIN;
int8_t x784 = 2;
int64_t x787 = INT64_MAX;
int32_t x791 = INT32_MIN;
static int32_t t197 = -155525;
volatile int32_t t198 = 4015;
int32_t x797 = 254715;
int8_t x798 = INT8_MIN;
int32_t x800 = -1;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	int64_t x4 = -63529723408LL;
	volatile int32_t t0 = -4;

    t0 = (x1*(x2>(x3&x4)));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1088;
	uint8_t x6 = 2U;
	uint64_t x7 = 71770722660LLU;
	static uint64_t x8 = 5LLU;
	static int32_t t1 = -252;

    t1 = (x5*(x6>(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	uint8_t x10 = 26U;
	int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MAX;

    t2 = (x9*(x10>(x11&x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 43U;
	uint16_t x14 = UINT16_MAX;
	static int64_t x15 = -225LL;
	static volatile int64_t x16 = INT64_MIN;
	int32_t t3 = 14;

    t3 = (x13*(x14>(x15&x16)));

    if (t3 != 43) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = UINT64_MAX;
	static int8_t x18 = 0;
	int32_t x19 = 14190;
	uint64_t t4 = 577122LLU;

    t4 = (x17*(x18>(x19&x20)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	int32_t x22 = INT32_MIN;
	int8_t x24 = 10;

    t5 = (x21*(x22>(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -11;
	int16_t x27 = INT16_MIN;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 707;

    t6 = (x25*(x26>(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 64886U;
	int32_t x30 = 346626;
	int64_t x32 = INT64_MIN;
	volatile uint32_t t7 = 10893714U;

    t7 = (x29*(x30>(x31&x32)));

    if (t7 != 64886U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int8_t x34 = -1;
	int64_t x35 = -120658851LL;
	uint64_t x36 = UINT64_MAX;

    t8 = (x33*(x34>(x35&x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = 814;
	uint16_t x40 = 2U;
	int32_t t9 = -29142122;

    t9 = (x37*(x38>(x39&x40)));

    if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	volatile uint8_t x43 = 0U;
	static int32_t t10 = 1;

    t10 = (x41*(x42>(x43&x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -1;
	uint32_t x46 = 93U;
	int8_t x48 = INT8_MAX;

    t11 = (x45*(x46>(x47&x48)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 3301LL;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 1U;
	uint16_t x52 = 3167U;
	static int64_t t12 = 1LL;

    t12 = (x49*(x50>(x51&x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	int16_t x56 = -1;
	volatile uint64_t t13 = 9LLU;

    t13 = (x53*(x54>(x55&x56)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 1U;
	static volatile uint16_t x58 = 215U;
	uint64_t x59 = 11093LLU;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 289150;

    t14 = (x57*(x58>(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = 11U;
	static volatile int32_t x63 = 2894;
	volatile int16_t x64 = INT16_MAX;

    t15 = (x61*(x62>(x63&x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	int32_t x66 = -6395063;
	int64_t x67 = INT64_MIN;
	uint16_t x68 = 195U;
	int32_t t16 = 5173684;

    t16 = (x65*(x66>(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x71 = 6U;
	uint64_t t17 = 0LLU;

    t17 = (x69*(x70>(x71&x72)));

    if (t17 != 1479LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x73 = INT16_MAX;
	volatile int8_t x74 = INT8_MIN;
	volatile int8_t x75 = -1;
	volatile int32_t x76 = -711120;
	static volatile int32_t t18 = -3065279;

    t18 = (x73*(x74>(x75&x76)));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 5597U;
	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MAX;

    t19 = (x77*(x78>(x79&x80)));

    if (t19 != 5597U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -3307;
	static int8_t x82 = -1;
	uint64_t x83 = 110018LLU;
	volatile int8_t x84 = INT8_MAX;
	int32_t t20 = -13625053;

    t20 = (x81*(x82>(x83&x84)));

    if (t20 != -3307) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = 1189172814627LL;
	static uint16_t x87 = UINT16_MAX;
	static int32_t x88 = -47;
	volatile uint64_t t21 = 347074814475171LLU;

    t21 = (x85*(x86>(x87&x88)));

    if (t21 != 598532LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -4201797084804996LL;
	uint32_t x90 = 192056U;
	uint32_t x91 = 271563795U;
	static int8_t x92 = INT8_MAX;
	int64_t t22 = -6546207904063634LL;

    t22 = (x89*(x90>(x91&x92)));

    if (t22 != -4201797084804996LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	static volatile int32_t x94 = INT32_MIN;
	volatile int64_t x95 = -2552784887264358LL;
	static int32_t x96 = -1;
	static int32_t t23 = -233120;

    t23 = (x93*(x94>(x95&x96)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile uint64_t x100 = 66640LLU;

    t24 = (x97*(x98>(x99&x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 10893U;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MAX;
	static volatile int32_t t25 = -333554;

    t25 = (x101*(x102>(x103&x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = 1U;
	uint16_t x107 = 7U;
	uint8_t x108 = 36U;
	volatile int32_t t26 = -136;

    t26 = (x105*(x106>(x107&x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 26594;

    t27 = (x109*(x110>(x111&x112)));

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = INT32_MAX;
	volatile int64_t x116 = 250447445108571315LL;
	volatile int32_t t28 = -33;

    t28 = (x113*(x114>(x115&x116)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -29139162711LL;
	int64_t x118 = INT64_MIN;
	static uint8_t x119 = UINT8_MAX;
	static volatile uint32_t x120 = 335606U;
	static volatile int64_t t29 = 456889478LL;

    t29 = (x117*(x118>(x119&x120)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 25U;
	static uint8_t x122 = UINT8_MAX;
	static volatile int32_t x123 = -1;
	uint32_t x124 = 474059U;
	volatile int32_t t30 = -32;

    t30 = (x121*(x122>(x123&x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	int8_t x127 = 1;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -12;

    t31 = (x125*(x126>(x127&x128)));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MAX;
	volatile int8_t x130 = 9;
	volatile int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	static int32_t t32 = 1341904;

    t32 = (x129*(x130>(x131&x132)));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = INT32_MIN;
	volatile int8_t x134 = INT8_MIN;
	uint64_t x135 = 1741604036224613280LLU;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = INT32_MIN;

    t33 = (x133*(x134>(x135&x136)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 20290452643559790LLU;
	uint32_t x138 = 104270U;
	int32_t x140 = INT32_MAX;
	uint64_t t34 = 5LLU;

    t34 = (x137*(x138>(x139&x140)));

    if (t34 != 20290452643559790LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 10U;
	uint16_t x143 = 13U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -750032844;

    t35 = (x141*(x142>(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = -9149;
	int64_t x148 = INT64_MIN;
	static int64_t t36 = 2085000906200LL;

    t36 = (x145*(x146>(x147&x148)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 27923U;
	int64_t x150 = -3309999899078LL;
	int16_t x151 = -1;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -263939391;

    t37 = (x149*(x150>(x151&x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MAX;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = 6U;
	volatile int32_t t38 = -722;

    t38 = (x153*(x154>(x155&x156)));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -2156837133473LL;
	int32_t x160 = INT32_MIN;
	int32_t t39 = 234103472;

    t39 = (x157*(x158>(x159&x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int32_t x164 = 913;
	int32_t t40 = INT32_MAX;

    t40 = (x161*(x162>(x163&x164)));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 2LLU;
	static uint16_t x166 = 0U;
	static int16_t x167 = INT16_MAX;
	int16_t x168 = INT16_MAX;
	uint64_t t41 = 8292647918849095LLU;

    t41 = (x165*(x166>(x167&x168)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = 1U;
	int32_t x171 = 1010262129;
	uint16_t x172 = 1U;
	volatile uint64_t t42 = 0LLU;

    t42 = (x169*(x170>(x171&x172)));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int64_t x174 = 8020594944187LL;
	int64_t x176 = INT64_MAX;
	volatile int64_t t43 = -88LL;

    t43 = (x173*(x174>(x175&x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	static volatile uint8_t x178 = 0U;
	int32_t x179 = INT32_MIN;
	volatile int32_t x180 = 4204;
	int64_t t44 = -31549LL;

    t44 = (x177*(x178>(x179&x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = 21;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 1392LLU;
	int16_t x184 = -94;
	volatile int32_t t45 = 473492812;

    t45 = (x181*(x182>(x183&x184)));

    if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 10U;
	volatile int32_t x186 = INT32_MIN;
	static volatile int64_t x187 = INT64_MIN;
	static volatile uint8_t x188 = 1U;
	int32_t t46 = 32967304;

    t46 = (x185*(x186>(x187&x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 119U;
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = -26378725;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = -3754;

    t47 = (x189*(x190>(x191&x192)));

    if (t47 != 119) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = -1;
	int8_t x196 = 6;
	volatile int64_t t48 = -35589778762LL;

    t48 = (x193*(x194>(x195&x196)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = -3146113156575LL;
	uint64_t x198 = UINT64_MAX;
	volatile int64_t x199 = 8637888934755883LL;
	volatile int64_t t49 = -37LL;

    t49 = (x197*(x198>(x199&x200)));

    if (t49 != -3146113156575LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -2LL;
	int8_t x202 = 3;
	int16_t x203 = INT16_MIN;
	static volatile int16_t x204 = INT16_MIN;
	int64_t t50 = 2998415334LL;

    t50 = (x201*(x202>(x203&x204)));

    if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x207 = INT32_MAX;
	static int8_t x208 = -6;
	int32_t t51 = 16611371;

    t51 = (x205*(x206>(x207&x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x210 = 48U;
	volatile int32_t x211 = -1;
	static volatile uint8_t x212 = UINT8_MAX;

    t52 = (x209*(x210>(x211&x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = -1;
	static int64_t x215 = 49826883929641LL;
	static int8_t x216 = 2;
	int32_t t53 = 5177512;

    t53 = (x213*(x214>(x215&x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 0;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -21590;

    t54 = (x217*(x218>(x219&x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	uint16_t x222 = 86U;
	volatile int64_t t55 = INT64_MIN;

    t55 = (x221*(x222>(x223&x224)));

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	uint32_t x227 = 64U;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -688;

    t56 = (x225*(x226>(x227&x228)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = INT64_MIN;
	static volatile uint32_t x231 = 1U;
	volatile int8_t x232 = -1;

    t57 = (x229*(x230>(x231&x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x234 = 5613976U;
	static uint32_t x236 = UINT32_MAX;
	int32_t t58 = -1;

    t58 = (x233*(x234>(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = UINT8_MAX;
	volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t59 = 17109221;

    t59 = (x237*(x238>(x239&x240)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x242 = INT8_MIN;
	int8_t x243 = -9;
	static uint16_t x244 = 32414U;
	volatile int32_t t60 = -299075;

    t60 = (x241*(x242>(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	int64_t t61 = -2055986339627LL;

    t61 = (x245*(x246>(x247&x248)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1058622039;
	uint8_t x250 = 26U;
	volatile uint32_t x252 = 137U;
	static int32_t t62 = 389216;

    t62 = (x249*(x250>(x251&x252)));

    if (t62 != -1058622039) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = UINT64_MAX;
	int8_t x255 = 27;
	int16_t x256 = INT16_MAX;

    t63 = (x253*(x254>(x255&x256)));

    if (t63 != 3526521470688209LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x258 = UINT16_MAX;
	volatile int8_t x259 = INT8_MAX;
	int64_t x260 = INT64_MAX;
	volatile int32_t t64 = -3;

    t64 = (x257*(x258>(x259&x260)));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	static int64_t x262 = INT64_MAX;
	static int64_t t65 = INT64_MIN;

    t65 = (x261*(x262>(x263&x264)));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = 6998042U;
	volatile uint16_t x266 = 4231U;
	int16_t x267 = 18;
	volatile uint32_t x268 = 21205996U;
	volatile uint32_t t66 = 56822U;

    t66 = (x265*(x266>(x267&x268)));

    if (t66 != 6998042U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = 1185554;
	uint8_t x270 = 14U;
	int8_t x271 = -1;
	volatile int32_t x272 = -1;
	volatile int32_t t67 = -228829003;

    t67 = (x269*(x270>(x271&x272)));

    if (t67 != 1185554) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 8U;
	uint64_t x274 = UINT64_MAX;
	uint16_t x275 = 231U;
	uint16_t x276 = 126U;
	static volatile int32_t t68 = -91992789;

    t68 = (x273*(x274>(x275&x276)));

    if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MIN;
	uint8_t x278 = 1U;
	uint64_t x280 = 14290LLU;
	static int32_t t69 = 204723;

    t69 = (x277*(x278>(x279&x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 884423559LLU;
	uint8_t x282 = 13U;
	int32_t x283 = -1;
	int8_t x284 = -4;
	static uint64_t t70 = 122316LLU;

    t70 = (x281*(x282>(x283&x284)));

    if (t70 != 884423559LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = -4LL;
	volatile int64_t x287 = -1LL;
	static int32_t t71 = -652073;

    t71 = (x285*(x286>(x287&x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int8_t x291 = -27;

    t72 = (x289*(x290>(x291&x292)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	int32_t x295 = -109220;
	int64_t x296 = INT64_MIN;
	static int64_t t73 = INT64_MIN;

    t73 = (x293*(x294>(x295&x296)));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 2U;
	uint8_t x298 = 1U;
	int8_t x299 = -13;
	uint64_t x300 = 32930850205046LLU;
	volatile int32_t t74 = 498130764;

    t74 = (x297*(x298>(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MAX;
	static int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -243546;

    t75 = (x301*(x302>(x303&x304)));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 168;
	static int64_t x307 = INT64_MAX;
	volatile int8_t x308 = -1;
	volatile int32_t t76 = -837811072;

    t76 = (x305*(x306>(x307&x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	int8_t x311 = -5;
	uint8_t x312 = 4U;
	static uint32_t t77 = UINT32_MAX;

    t77 = (x309*(x310>(x311&x312)));

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 10U;
	uint8_t x314 = UINT8_MAX;
	uint32_t x315 = UINT32_MAX;
	int32_t t78 = 0;

    t78 = (x313*(x314>(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x318 = 7U;
	static int16_t x319 = -676;
	static volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = 0;

    t79 = (x317*(x318>(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 44897830517LLU;
	static volatile uint64_t t80 = 150954250193099LLU;

    t80 = (x321*(x322>(x323&x324)));

    if (t80 != 44897830517LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int32_t x328 = -7175765;
	volatile int32_t t81 = -2;

    t81 = (x325*(x326>(x327&x328)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x332 = INT32_MIN;
	volatile int64_t t82 = -3063816821433450LL;

    t82 = (x329*(x330>(x331&x332)));

    if (t82 != -187561472365029717LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = 75101283U;
	static uint16_t x334 = 37U;
	static uint64_t x336 = UINT64_MAX;
	volatile uint32_t t83 = 383U;

    t83 = (x333*(x334>(x335&x336)));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MAX;
	static volatile int64_t x339 = -63972LL;
	volatile int64_t x340 = -4046907857500288LL;
	int32_t t84 = -21474;

    t84 = (x337*(x338>(x339&x340)));

    if (t84 != 14269) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x342 = 0U;
	volatile int8_t x344 = -1;
	volatile int32_t t85 = 1062;

    t85 = (x341*(x342>(x343&x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int64_t x346 = 92789954860214630LL;
	uint16_t x348 = 6U;
	int32_t t86 = 19699095;

    t86 = (x345*(x346>(x347&x348)));

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x349 = 1U;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -268162286;
	static uint8_t x352 = 25U;
	static uint32_t t87 = 24256068U;

    t87 = (x349*(x350>(x351&x352)));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 4LL;
	volatile uint32_t x354 = UINT32_MAX;
	volatile int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	volatile int64_t t88 = -4930722376LL;

    t88 = (x353*(x354>(x355&x356)));

    if (t88 != 4LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = -1;
	int8_t x358 = -33;
	uint32_t x359 = UINT32_MAX;

    t89 = (x357*(x358>(x359&x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = -1;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t90 = 3170307;

    t90 = (x361*(x362>(x363&x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = UINT16_MAX;
	static uint32_t x368 = 68767787U;
	static volatile int32_t t91 = -210611;

    t91 = (x365*(x366>(x367&x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = -3;
	volatile int8_t x371 = -1;
	int64_t x372 = 1471901LL;
	int64_t t92 = 0LL;

    t92 = (x369*(x370>(x371&x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	int8_t x374 = -3;
	static int32_t x375 = -51;
	int32_t x376 = -1;
	static int32_t t93 = -54087;

    t93 = (x373*(x374>(x375&x376)));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x378 = -1LL;
	volatile uint64_t x379 = 3320438538455LLU;
	int64_t x380 = INT64_MAX;

    t94 = (x377*(x378>(x379&x380)));

    if (t94 != -30) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = INT16_MIN;
	uint64_t x382 = 8187980LLU;
	volatile int32_t x383 = -96535;
	volatile uint64_t x384 = 327115050571886002LLU;
	volatile int32_t t95 = -1696;

    t95 = (x381*(x382>(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x386 = 114U;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = 2U;
	volatile int32_t t96 = -2067;

    t96 = (x385*(x386>(x387&x388)));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 14772;
	int64_t x390 = -1LL;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 13136;

    t97 = (x389*(x390>(x391&x392)));

    if (t97 != 14772) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MAX;
	static volatile int32_t t98 = 13501867;

    t98 = (x393*(x394>(x395&x396)));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x397 = 271U;
	volatile int32_t x398 = 59451406;
	int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 61254185315427LLU;

    t99 = (x397*(x398>(x399&x400)));

    if (t99 != 271) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 41U;
	uint32_t x402 = UINT32_MAX;
	uint64_t x403 = 1367454LLU;
	int8_t x404 = -1;

    t100 = (x401*(x402>(x403&x404)));

    if (t100 != 41) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x407 = 9174926094594109379LLU;
	volatile uint64_t t101 = 2903803382942LLU;

    t101 = (x405*(x406>(x407&x408)));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = INT32_MIN;
	volatile int32_t x411 = -1;
	int64_t x412 = 1132LL;

    t102 = (x409*(x410>(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x414 = -9964660427LL;
	volatile uint64_t x415 = 166568448478795263LLU;
	int64_t x416 = -10381314LL;
	static int32_t t103 = -144809124;

    t103 = (x413*(x414>(x415&x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MIN;
	volatile int64_t x419 = INT64_MIN;
	int32_t x420 = -1;

    t104 = (x417*(x418>(x419&x420)));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x422 = 406423185742967LLU;
	int8_t x423 = 1;
	volatile int64_t x424 = -1LL;
	volatile int32_t t105 = -4836612;

    t105 = (x421*(x422>(x423&x424)));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	uint32_t x426 = 74977324U;
	volatile int64_t x427 = 2105762863301999431LL;
	static int64_t t106 = -703LL;

    t106 = (x425*(x426>(x427&x428)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	int8_t x430 = INT8_MIN;
	int32_t x431 = -1;
	int8_t x432 = INT8_MAX;
	volatile int32_t t107 = -21317;

    t107 = (x429*(x430>(x431&x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	volatile int8_t x434 = -1;
	int16_t x435 = INT16_MAX;
	int32_t x436 = INT32_MAX;

    t108 = (x433*(x434>(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	int32_t x438 = -1;
	int16_t x439 = -5245;
	int64_t x440 = -14973272527031LL;
	int32_t t109 = 547287;

    t109 = (x437*(x438>(x439&x440)));

    if (t109 != 65535) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 22107U;
	static int16_t x443 = INT16_MAX;
	uint8_t x444 = 4U;
	uint32_t t110 = 1666776185U;

    t110 = (x441*(x442>(x443&x444)));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MIN;
	uint32_t x447 = 1U;
	static uint32_t x448 = 301334287U;
	int32_t t111 = -4346645;

    t111 = (x445*(x446>(x447&x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	static int32_t x450 = -1;
	volatile int32_t x451 = INT32_MIN;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t112 = 92252476;

    t112 = (x449*(x450>(x451&x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	uint64_t x455 = 459LLU;
	int32_t x456 = 454657;

    t113 = (x453*(x454>(x455&x456)));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	int32_t x459 = INT32_MAX;
	static int32_t x460 = INT32_MAX;
	int32_t t114 = 7632235;

    t114 = (x457*(x458>(x459&x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 4U;
	volatile int8_t x462 = INT8_MAX;
	int32_t t115 = 491924;

    t115 = (x461*(x462>(x463&x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	volatile int8_t x466 = 32;
	volatile int8_t x468 = -1;
	int64_t t116 = INT64_MIN;

    t116 = (x465*(x466>(x467&x468)));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = INT16_MIN;
	static uint16_t x471 = 15U;
	int64_t x472 = INT64_MIN;
	volatile int32_t t117 = -22328157;

    t117 = (x469*(x470>(x471&x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 64814U;
	static uint32_t x474 = UINT32_MAX;
	uint32_t x475 = UINT32_MAX;
	uint8_t x476 = 1U;
	volatile uint32_t t118 = 351579133U;

    t118 = (x473*(x474>(x475&x476)));

    if (t118 != 64814U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile uint16_t x478 = 16990U;
	static uint64_t x479 = 297573163644LLU;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t119 = 3726154323827576LLU;

    t119 = (x477*(x478>(x479&x480)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MIN;
	int32_t x483 = INT32_MIN;
	uint16_t x484 = UINT16_MAX;

    t120 = (x481*(x482>(x483&x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	static volatile int64_t x486 = 6356650095LL;
	uint8_t x487 = 70U;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t121 = 415;

    t121 = (x485*(x486>(x487&x488)));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 14935;
	int8_t x490 = -1;
	int32_t x491 = -15;
	volatile int16_t x492 = 142;
	static int32_t t122 = 11371;

    t122 = (x489*(x490>(x491&x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x493 = 1U;
	static int64_t x494 = 1072081965LL;
	int16_t x495 = INT16_MIN;
	uint64_t x496 = 68593504098954738LLU;

    t123 = (x493*(x494>(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = INT64_MIN;
	int64_t x498 = -1LL;
	int8_t x499 = INT8_MAX;
	int32_t x500 = INT32_MIN;
	int64_t t124 = -85LL;

    t124 = (x497*(x498>(x499&x500)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x502 = INT8_MAX;
	int32_t x503 = -1;
	int32_t x504 = INT32_MIN;
	int32_t t125 = INT32_MIN;

    t125 = (x501*(x502>(x503&x504)));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = INT16_MIN;
	uint8_t x507 = UINT8_MAX;
	uint64_t x508 = UINT64_MAX;
	static volatile uint64_t t126 = 488816923282LLU;

    t126 = (x505*(x506>(x507&x508)));

    if (t126 != 4638568361631LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = 14;
	int16_t x510 = -1;
	int64_t x511 = INT64_MAX;
	int8_t x512 = INT8_MIN;
	int32_t t127 = -5718989;

    t127 = (x509*(x510>(x511&x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int32_t x514 = INT32_MIN;
	volatile int32_t t128 = 771736062;

    t128 = (x513*(x514>(x515&x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x518 = UINT16_MAX;
	volatile int64_t t129 = INT64_MIN;

    t129 = (x517*(x518>(x519&x520)));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 251U;
	static volatile uint16_t x522 = 9U;
	int32_t t130 = 1;

    t130 = (x521*(x522>(x523&x524)));

    if (t130 != 251) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = 1903;
	volatile int32_t x526 = 248668;
	volatile int32_t x528 = 2441;
	int32_t t131 = -15443;

    t131 = (x525*(x526>(x527&x528)));

    if (t131 != 1903) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 550114;
	static int16_t x530 = -1;
	volatile int16_t x531 = INT16_MIN;
	int8_t x532 = INT8_MIN;

    t132 = (x529*(x530>(x531&x532)));

    if (t132 != 550114) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	uint32_t x534 = 1582356U;
	uint64_t x536 = 64655807227785261LLU;

    t133 = (x533*(x534>(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -664558309131126742LL;
	int64_t x540 = INT64_MAX;
	static volatile int64_t t134 = -103248894670004722LL;

    t134 = (x537*(x538>(x539&x540)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x542 = -1;
	int8_t x543 = 2;
	volatile int64_t x544 = -1LL;
	volatile int32_t t135 = 2902;

    t135 = (x541*(x542>(x543&x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	static int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MIN;
	int32_t t136 = -1;

    t136 = (x545*(x546>(x547&x548)));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 5U;
	int8_t x550 = -1;
	int64_t x551 = INT64_MAX;
	static uint64_t x552 = 1586099LLU;

    t137 = (x549*(x550>(x551&x552)));

    if (t137 != 5) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 156024613U;
	uint32_t x554 = UINT32_MAX;
	volatile uint32_t t138 = 1492661U;

    t138 = (x553*(x554>(x555&x556)));

    if (t138 != 156024613U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 1601U;
	int8_t x558 = INT8_MAX;
	static int8_t x559 = INT8_MAX;
	static uint64_t x560 = UINT64_MAX;
	static uint32_t t139 = 1003198U;

    t139 = (x557*(x558>(x559&x560)));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = -1;
	static int32_t x564 = -1;
	volatile int64_t t140 = -2LL;

    t140 = (x561*(x562>(x563&x564)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = INT64_MIN;
	volatile int64_t x566 = INT64_MAX;
	volatile int8_t x568 = 23;

    t141 = (x565*(x566>(x567&x568)));

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	volatile int64_t x570 = 344731212739192LL;
	int8_t x571 = INT8_MAX;
	int32_t x572 = -127124334;

    t142 = (x569*(x570>(x571&x572)));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x574 = INT32_MIN;
	uint16_t x575 = 373U;
	int32_t t143 = -646434;

    t143 = (x573*(x574>(x575&x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -11;
	static volatile uint16_t x578 = UINT16_MAX;
	int32_t x580 = INT32_MAX;
	volatile int32_t t144 = -109942119;

    t144 = (x577*(x578>(x579&x580)));

    if (t144 != -11) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x582 = INT16_MIN;
	static int32_t x584 = -1;

    t145 = (x581*(x582>(x583&x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -205;
	static uint32_t x587 = UINT32_MAX;

    t146 = (x585*(x586>(x587&x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	static int64_t x590 = INT64_MAX;
	int8_t x591 = INT8_MAX;
	int16_t x592 = -1;
	volatile int32_t t147 = 3465;

    t147 = (x589*(x590>(x591&x592)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	static int32_t x594 = -1;
	volatile uint8_t x595 = 0U;
	int16_t x596 = 84;
	volatile int32_t t148 = 5452;

    t148 = (x593*(x594>(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	int16_t x598 = -1;
	volatile int8_t x599 = INT8_MAX;
	uint64_t x600 = 51682753655023383LLU;
	volatile int32_t t149 = -24;

    t149 = (x597*(x598>(x599&x600)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x602 = 777U;
	int64_t x603 = INT64_MIN;
	static volatile int64_t x604 = 1209530556629671LL;

    t150 = (x601*(x602>(x603&x604)));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x605 = 14;
	uint64_t x606 = 2612LLU;
	uint32_t x607 = 16047U;
	static int64_t x608 = 18665950662LL;
	static int32_t t151 = -1078863;

    t151 = (x605*(x606>(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = INT32_MIN;
	int16_t x610 = 1;
	uint32_t x611 = UINT32_MAX;
	static int64_t x612 = 31669LL;
	volatile int32_t t152 = -79823;

    t152 = (x609*(x610>(x611&x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	static int8_t x614 = -1;
	int32_t x615 = INT32_MIN;
	int32_t x616 = INT32_MIN;
	volatile int32_t t153 = -101;

    t153 = (x613*(x614>(x615&x616)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -3;
	int16_t x618 = -1;
	int8_t x619 = INT8_MIN;
	int16_t x620 = INT16_MIN;
	volatile int32_t t154 = -478852;

    t154 = (x617*(x618>(x619&x620)));

    if (t154 != -3) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 467653U;
	int16_t x623 = -1;
	volatile int64_t x624 = 8740768LL;
	volatile uint32_t t155 = 5U;

    t155 = (x621*(x622>(x623&x624)));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x627 = -1;
	int64_t x628 = INT64_MIN;
	volatile int32_t t156 = INT32_MIN;

    t156 = (x625*(x626>(x627&x628)));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = UINT32_MAX;
	volatile int64_t x630 = 13654049LL;
	volatile int32_t x631 = 5;
	volatile int8_t x632 = INT8_MIN;
	volatile uint32_t t157 = UINT32_MAX;

    t157 = (x629*(x630>(x631&x632)));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 299U;
	static int32_t x634 = INT32_MAX;
	uint16_t x636 = 44U;
	int32_t t158 = 247042;

    t158 = (x633*(x634>(x635&x636)));

    if (t158 != 299) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = INT64_MAX;
	int8_t x639 = INT8_MIN;
	uint32_t x640 = 50270660U;
	volatile int64_t t159 = INT64_MIN;

    t159 = (x637*(x638>(x639&x640)));

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = INT32_MAX;
	int8_t x642 = INT8_MIN;
	static volatile int16_t x644 = INT16_MAX;
	int32_t t160 = 14;

    t160 = (x641*(x642>(x643&x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -482;
	static int16_t x647 = INT16_MIN;
	int64_t x648 = INT64_MAX;

    t161 = (x645*(x646>(x647&x648)));

    if (t161 != -482) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	uint8_t x650 = 29U;
	int8_t x652 = INT8_MAX;
	static volatile int32_t t162 = 2;

    t162 = (x649*(x650>(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 3U;
	volatile uint64_t x654 = UINT64_MAX;
	static int16_t x655 = INT16_MAX;

    t163 = (x653*(x654>(x655&x656)));

    if (t163 != 3) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 15U;
	int64_t x658 = 15014560LL;
	volatile uint32_t x660 = 41408060U;

    t164 = (x657*(x658>(x659&x660)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	int64_t x662 = INT64_MIN;
	int8_t x663 = 0;

    t165 = (x661*(x662>(x663&x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = -1;
	static uint8_t x666 = 25U;
	int32_t x667 = -499959;
	volatile int8_t x668 = INT8_MAX;
	volatile int32_t t166 = 294045484;

    t166 = (x665*(x666>(x667&x668)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 68444LLU;
	int64_t x670 = INT64_MAX;
	int16_t x672 = -1;
	volatile uint64_t t167 = 40914234391117407LLU;

    t167 = (x669*(x670>(x671&x672)));

    if (t167 != 68444LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MAX;
	uint8_t x674 = UINT8_MAX;
	int64_t x675 = INT64_MIN;
	volatile int8_t x676 = INT8_MAX;
	int32_t t168 = INT32_MAX;

    t168 = (x673*(x674>(x675&x676)));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x677 = -5897928LL;
	static int16_t x679 = -1;
	volatile int32_t x680 = -521;
	static int64_t t169 = -209702LL;

    t169 = (x677*(x678>(x679&x680)));

    if (t169 != -5897928LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	uint64_t x682 = 65384258351LLU;
	int16_t x683 = INT16_MIN;

    t170 = (x681*(x682>(x683&x684)));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	int8_t x686 = INT8_MIN;
	int32_t x688 = INT32_MIN;
	static int32_t t171 = -260267901;

    t171 = (x685*(x686>(x687&x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = INT8_MAX;
	uint32_t x691 = 1460688493U;
	static int16_t x692 = -1;

    t172 = (x689*(x690>(x691&x692)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x695 = INT16_MIN;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = -2;

    t173 = (x693*(x694>(x695&x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 26243U;
	static int8_t x698 = INT8_MIN;
	int64_t x699 = INT64_MAX;
	int8_t x700 = INT8_MIN;
	uint32_t t174 = 1U;

    t174 = (x697*(x698>(x699&x700)));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = 0U;
	static int8_t x704 = -1;
	int32_t t175 = -12447;

    t175 = (x701*(x702>(x703&x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 1;
	int16_t x706 = 1;
	static uint8_t x707 = 0U;
	int32_t x708 = INT32_MIN;
	int32_t t176 = 2557108;

    t176 = (x705*(x706>(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -4;
	static uint8_t x710 = 80U;
	static int32_t x711 = -1;
	int16_t x712 = 1;
	static int32_t t177 = 15500646;

    t177 = (x709*(x710>(x711&x712)));

    if (t177 != -4) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	volatile int8_t x714 = INT8_MIN;
	int16_t x715 = -299;
	static uint32_t x716 = 945U;

    t178 = (x713*(x714>(x715&x716)));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x717 = UINT8_MAX;
	int8_t x718 = INT8_MIN;
	uint16_t x719 = 1356U;
	static int32_t t179 = 125;

    t179 = (x717*(x718>(x719&x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MIN;
	int8_t x722 = 0;
	int16_t x724 = 23;
	volatile int32_t t180 = 0;

    t180 = (x721*(x722>(x723&x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	volatile int64_t x726 = 11821LL;
	uint16_t x727 = UINT16_MAX;
	int64_t x728 = -637254LL;
	static volatile int64_t t181 = 240239LL;

    t181 = (x725*(x726>(x727&x728)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	uint16_t x731 = 1U;
	int32_t x732 = -1;

    t182 = (x729*(x730>(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x733 = 15U;
	volatile int8_t x734 = 1;
	int8_t x735 = INT8_MIN;
	uint16_t x736 = 1U;
	int32_t t183 = -62830;

    t183 = (x733*(x734>(x735&x736)));

    if (t183 != 15) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	volatile int64_t x738 = 854968042892418LL;
	uint16_t x739 = 0U;
	int16_t x740 = -1;
	static int32_t t184 = 54;

    t184 = (x737*(x738>(x739&x740)));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x741 = 7138159600938931LLU;
	int16_t x742 = INT16_MAX;
	int32_t x743 = 158130039;
	uint64_t x744 = 13818150310LLU;
	uint64_t t185 = 3601448406366LLU;

    t185 = (x741*(x742>(x743&x744)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x746 = -24;
	static volatile int32_t x748 = -1;
	static int32_t t186 = 3;

    t186 = (x745*(x746>(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x750 = 1U;
	int32_t x751 = INT32_MIN;
	int64_t x752 = INT64_MAX;
	volatile int32_t t187 = -292;

    t187 = (x749*(x750>(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = -1;
	int8_t x754 = 13;
	int32_t x755 = INT32_MIN;
	static volatile int32_t x756 = INT32_MIN;

    t188 = (x753*(x754>(x755&x756)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	static int16_t x758 = -1;
	static uint8_t x759 = UINT8_MAX;
	int8_t x760 = -25;
	int32_t t189 = 466651;

    t189 = (x757*(x758>(x759&x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 424U;
	volatile uint16_t x762 = UINT16_MAX;
	uint16_t x763 = 7990U;
	uint16_t x764 = 0U;

    t190 = (x761*(x762>(x763&x764)));

    if (t190 != 424) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	volatile uint8_t x766 = UINT8_MAX;
	volatile int64_t t191 = INT64_MAX;

    t191 = (x765*(x766>(x767&x768)));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x769 = 6U;
	static uint16_t x771 = UINT16_MAX;
	int8_t x772 = -1;
	volatile int32_t t192 = -447825123;

    t192 = (x769*(x770>(x771&x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -9;
	int32_t x774 = 970;
	uint8_t x775 = 0U;
	uint32_t x776 = UINT32_MAX;
	int32_t t193 = 21842;

    t193 = (x773*(x774>(x775&x776)));

    if (t193 != -9) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	static uint8_t x778 = UINT8_MAX;
	uint32_t t194 = 144034479U;

    t194 = (x777*(x778>(x779&x780)));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = 1025431457805160LL;
	int64_t x783 = 17848289530LL;
	int32_t t195 = 0;

    t195 = (x781*(x782>(x783&x784)));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = 2;
	volatile int32_t x786 = -4874622;
	int8_t x788 = 1;
	volatile int32_t t196 = 680;

    t196 = (x785*(x786>(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = 26;
	int8_t x790 = 7;
	volatile int8_t x792 = INT8_MIN;

    t197 = (x789*(x790>(x791&x792)));

    if (t197 != 26) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 440U;
	int8_t x794 = INT8_MIN;
	int16_t x795 = INT16_MIN;
	volatile int64_t x796 = INT64_MIN;

    t198 = (x793*(x794>(x795&x796)));

    if (t198 != 440) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x799 = INT32_MIN;
	static volatile int32_t t199 = 9626570;

    t199 = (x797*(x798>(x799&x800)));

    if (t199 != 254715) { NG(); } else { ; }
	
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

