
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

static int8_t x5 = INT8_MIN;
volatile int64_t x8 = -13LL;
int8_t x23 = -1;
static volatile int64_t x32 = INT64_MIN;
uint32_t x35 = 15255U;
static int8_t x43 = 3;
int32_t x44 = INT32_MAX;
int64_t x46 = INT64_MIN;
int32_t t11 = 58592;
static uint64_t x51 = UINT64_MAX;
int32_t t13 = 1;
int32_t x57 = -235;
volatile uint64_t x58 = UINT64_MAX;
int32_t t14 = 4051834;
uint16_t x65 = UINT16_MAX;
uint64_t x68 = 433LLU;
static int64_t x74 = 88669162573750455LL;
volatile int64_t t18 = 267050886LL;
volatile int16_t x79 = INT16_MIN;
volatile int32_t t19 = -932920;
int16_t x82 = 2;
uint32_t x83 = 1581340266U;
static int8_t x84 = INT8_MIN;
static int32_t t20 = 4871;
static uint16_t x88 = 2951U;
static int64_t x93 = -355714094430869864LL;
int32_t t24 = 340435246;
volatile int32_t x109 = -2892;
int64_t x110 = INT64_MIN;
volatile int64_t t27 = -167662809585LL;
int16_t x119 = INT16_MIN;
static int8_t x121 = INT8_MIN;
int8_t x123 = -1;
static int64_t x124 = INT64_MAX;
volatile int64_t t29 = -1LL;
int8_t x132 = -61;
uint32_t x133 = 1617U;
int32_t x137 = INT32_MIN;
uint16_t x146 = 1U;
volatile int64_t t36 = -3476029035631LL;
int16_t x154 = INT16_MIN;
volatile int64_t t37 = 1831551070133LL;
int8_t x159 = INT8_MIN;
int64_t x163 = INT64_MAX;
static int64_t x164 = INT64_MIN;
int64_t x165 = -1LL;
static int8_t x169 = -14;
int8_t x177 = INT8_MIN;
volatile int8_t x178 = INT8_MAX;
int32_t t44 = -2043379;
int32_t x190 = INT32_MAX;
uint32_t x192 = UINT32_MAX;
int32_t t51 = -961;
uint32_t x218 = 0U;
volatile int16_t x230 = 1786;
volatile int32_t t55 = -14;
int8_t x247 = INT8_MIN;
volatile int64_t t58 = 25777LL;
static int64_t x249 = INT64_MIN;
int32_t t59 = -250386323;
int16_t x254 = INT16_MIN;
volatile int32_t t61 = 9785;
static int64_t x263 = 124342LL;
volatile int32_t x264 = INT32_MIN;
int16_t x265 = 1966;
volatile int8_t x268 = INT8_MIN;
uint64_t t64 = 2471LLU;
int64_t x273 = 132629470613LL;
static int32_t x277 = 14363;
volatile int64_t x281 = -1LL;
int16_t x290 = INT16_MIN;
uint32_t x292 = 363699U;
int64_t x293 = -948723854506161670LL;
volatile int32_t t70 = -73610;
uint32_t x299 = 1414620U;
int8_t x301 = -1;
volatile int32_t x302 = 5705;
uint32_t x304 = UINT32_MAX;
volatile int64_t t74 = -3914210885252LL;
volatile int32_t t75 = 60;
int16_t x321 = -1;
static volatile int32_t t77 = 669;
volatile int16_t x331 = INT16_MIN;
uint16_t x339 = UINT16_MAX;
volatile uint8_t x347 = 12U;
volatile int64_t t83 = -415654612904LL;
int16_t x352 = INT16_MIN;
volatile int32_t t84 = 517;
int64_t x354 = INT64_MAX;
uint8_t x361 = UINT8_MAX;
volatile uint64_t t87 = 19349820834695428LLU;
int8_t x367 = -1;
volatile int16_t x368 = INT16_MIN;
int8_t x369 = INT8_MAX;
int32_t x382 = INT32_MAX;
int8_t x388 = INT8_MIN;
int32_t t93 = -142083;
int16_t x393 = 4;
int32_t t96 = -1884517;
uint32_t x402 = 0U;
volatile uint32_t x405 = 63939U;
static int16_t x444 = -1;
volatile uint32_t x446 = 2U;
volatile uint8_t x455 = 3U;
static int16_t x460 = -1;
static volatile int32_t t110 = 456551326;
uint16_t x462 = 6U;
int8_t x467 = INT8_MAX;
int8_t x468 = -1;
int16_t x474 = 26;
int8_t x476 = 10;
uint32_t x477 = 3749369U;
volatile int8_t x479 = 2;
uint64_t x480 = 4277318146477822LLU;
int64_t x481 = -1LL;
volatile uint8_t x484 = 56U;
volatile int32_t t116 = 0;
int16_t x490 = -1;
volatile uint32_t x496 = UINT32_MAX;
uint16_t x498 = UINT16_MAX;
int32_t x499 = INT32_MIN;
volatile int32_t t121 = -204893058;
volatile int32_t t122 = 0;
volatile uint32_t x522 = 780U;
static int64_t x528 = -1LL;
int8_t x538 = -1;
int32_t x547 = INT32_MAX;
uint16_t x551 = UINT16_MAX;
static int8_t x555 = 2;
int64_t x556 = -1LL;
volatile int64_t t134 = -107717762262700LL;
int32_t x561 = 66090147;
volatile int64_t x563 = INT64_MIN;
volatile int32_t t136 = 128761;
volatile uint32_t x565 = 2885U;
int8_t x568 = 2;
static int8_t x573 = -1;
int64_t t139 = 13657328356899LL;
static uint16_t x581 = UINT16_MAX;
uint8_t x584 = 4U;
int8_t x587 = INT8_MAX;
volatile int32_t t144 = -127314;
uint64_t x597 = UINT64_MAX;
static int8_t x599 = INT8_MAX;
volatile int32_t t145 = -18081300;
uint16_t x605 = 1862U;
int32_t x608 = INT32_MAX;
uint64_t x619 = 41595448290142802LLU;
int16_t x620 = INT16_MIN;
volatile int32_t t151 = -4956;
int64_t x625 = INT64_MAX;
int32_t x631 = INT32_MIN;
int16_t x634 = -1;
int8_t x645 = 9;
int32_t x646 = -1;
volatile uint8_t x652 = 15U;
uint16_t x653 = 27350U;
volatile int32_t t160 = -1;
uint32_t x671 = UINT32_MAX;
uint64_t t163 = 557332209150815719LLU;
volatile int64_t x678 = -1LL;
uint8_t x680 = 110U;
int8_t x683 = 1;
volatile int32_t t166 = 109125;
static int16_t x689 = -1;
uint32_t t168 = 9797991U;
int8_t x695 = INT8_MIN;
volatile int32_t x700 = INT32_MIN;
int64_t x703 = -1LL;
int32_t x710 = INT32_MAX;
static int32_t t173 = 145166;
int8_t x715 = INT8_MIN;
volatile int32_t x718 = -1;
uint8_t x724 = UINT8_MAX;
uint16_t x734 = 0U;
int16_t x738 = 31;
int64_t x740 = -1LL;
uint64_t x747 = UINT64_MAX;
int16_t x748 = -1;
volatile int32_t t181 = 1;
static int32_t t182 = -17;
int32_t x754 = INT32_MIN;
static volatile int32_t x766 = -354237809;
volatile int32_t t187 = -108;
int64_t x776 = 148LL;
volatile int64_t t188 = -3432528LL;
volatile int32_t x779 = INT32_MIN;
int32_t x788 = -1;
static uint16_t x795 = UINT16_MAX;
volatile int32_t t193 = 69232;
volatile int32_t t194 = -428314114;
volatile int32_t t197 = -420006207;
volatile uint64_t t198 = 13790559313LLU;
int32_t x825 = INT32_MIN;
static volatile uint16_t x826 = UINT16_MAX;
static uint8_t x828 = UINT8_MAX;
static volatile int32_t t199 = -109;


void f0(void) {
    	uint32_t x1 = 64496399U;
	int64_t x2 = -753454703LL;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 83U;
	volatile int32_t t0 = -98;

    t0 = (((x1>x2)==x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 42832U;
	volatile uint8_t x7 = 13U;
	static int64_t t1 = 16840542LL;

    t1 = (((x5>x6)==x7)/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 28690LL;
	static uint8_t x10 = 82U;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = -1;
	int32_t t2 = -151592040;

    t2 = (((x9>x10)==x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = 1;
	volatile int32_t x14 = -1;
	static int16_t x15 = 8487;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 531226;

    t3 = (((x13>x14)==x15)/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 6331U;
	static int16_t x18 = INT16_MIN;
	int32_t x19 = -1763;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 63LLU;

    t4 = (((x17>x18)==x19)/x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x24 = INT32_MIN;
	int32_t t5 = -94974;

    t5 = (((x21>x22)==x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 51206412LL;
	volatile int16_t x26 = INT16_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	int16_t x28 = -246;
	int32_t t6 = 4846317;

    t6 = (((x25>x26)==x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	static int8_t x30 = 0;
	int8_t x31 = INT8_MIN;
	static volatile int64_t t7 = -5230643734078443LL;

    t7 = (((x29>x30)==x31)/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	uint8_t x34 = 2U;
	static int16_t x36 = INT16_MIN;
	int32_t t8 = -779;

    t8 = (((x33>x34)==x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = 80;
	uint8_t x38 = 15U;
	uint32_t x39 = 74708U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -22272;

    t9 = (((x37>x38)==x39)/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 1;
	static int64_t x42 = INT64_MIN;
	volatile int32_t t10 = 6324867;

    t10 = (((x41>x42)==x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int64_t x47 = -1LL;
	int16_t x48 = 944;

    t11 = (((x45>x46)==x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 89U;
	uint8_t x50 = 98U;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -2;

    t12 = (((x49>x50)==x51)/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 59307U;
	int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 6U;

    t13 = (((x53>x54)==x55)/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MIN;

    t14 = (((x57>x58)==x59)/x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint16_t x62 = 422U;
	int16_t x63 = -1;
	uint8_t x64 = 14U;
	int32_t t15 = 756589;

    t15 = (((x61>x62)==x63)/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = INT32_MIN;
	int32_t x67 = -9863;
	volatile uint64_t t16 = 434676174LLU;

    t16 = (((x65>x66)==x67)/x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	volatile uint32_t x70 = UINT32_MAX;
	int16_t x71 = 5;
	int64_t x72 = INT64_MIN;
	int64_t t17 = 15909443734LL;

    t17 = (((x69>x70)==x71)/x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MAX;

    t18 = (((x73>x74)==x75)/x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 2905U;
	int32_t x78 = -26;
	volatile int8_t x80 = INT8_MAX;

    t19 = (((x77>x78)==x79)/x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 0;

    t20 = (((x81>x82)==x83)/x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MAX;
	static int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	static int32_t t21 = -63;

    t21 = (((x85>x86)==x87)/x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 3724730141930LLU;
	uint16_t x90 = 8954U;
	int16_t x91 = 7366;
	uint32_t x92 = 15695508U;
	volatile uint32_t t22 = 552447U;

    t22 = (((x89>x90)==x91)/x92);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x94 = 1368U;
	static int64_t x95 = 10930054LL;
	static volatile int8_t x96 = -1;
	int32_t t23 = 117445362;

    t23 = (((x93>x94)==x95)/x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 2U;
	int8_t x98 = 1;
	int32_t x99 = -59;
	static int32_t x100 = INT32_MIN;

    t24 = (((x97>x98)==x99)/x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 56855U;
	static int8_t x102 = INT8_MIN;
	int32_t x103 = 431748;
	volatile uint64_t x104 = 2263123447409LLU;
	static volatile uint64_t t25 = 8479LLU;

    t25 = (((x101>x102)==x103)/x104);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x111 = -15LL;
	int8_t x112 = INT8_MAX;
	int32_t t26 = 491061;

    t26 = (((x109>x110)==x111)/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -138508LL;
	int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	int64_t x116 = -1LL;

    t27 = (((x113>x114)==x115)/x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	static int8_t x120 = 63;
	volatile int32_t t28 = 803794731;

    t28 = (((x117>x118)==x119)/x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x122 = INT64_MIN;

    t29 = (((x121>x122)==x123)/x124);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = -113;
	static uint8_t x126 = 4U;
	volatile uint8_t x127 = 16U;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t30 = -1294305;

    t30 = (((x125>x126)==x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -30;
	static int8_t x130 = -1;
	int16_t x131 = INT16_MAX;
	int32_t t31 = 439098351;

    t31 = (((x129>x130)==x131)/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x134 = INT64_MAX;
	volatile int64_t x135 = -1LL;
	int32_t x136 = 3388026;
	static int32_t t32 = 470334714;

    t32 = (((x133>x134)==x135)/x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x138 = 242287997U;
	static uint32_t x139 = 10827U;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t33 = 386415317;

    t33 = (((x137>x138)==x139)/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	uint64_t x143 = UINT64_MAX;
	static uint8_t x144 = 9U;
	int32_t t34 = -114202;

    t34 = (((x141>x142)==x143)/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x145 = 0U;
	volatile uint8_t x147 = UINT8_MAX;
	volatile uint32_t x148 = UINT32_MAX;
	volatile uint32_t t35 = 3635945U;

    t35 = (((x145>x146)==x147)/x148);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x149 = UINT16_MAX;
	uint64_t x150 = 2092938423501LLU;
	int32_t x151 = INT32_MAX;
	static int64_t x152 = 200716372LL;

    t36 = (((x149>x150)==x151)/x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	static volatile int8_t x155 = -1;
	int64_t x156 = -1LL;

    t37 = (((x153>x154)==x155)/x156);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 273U;
	int8_t x158 = -1;
	volatile uint8_t x160 = 6U;
	volatile int32_t t38 = 177653358;

    t38 = (((x157>x158)==x159)/x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	static volatile int16_t x162 = INT16_MIN;
	int64_t t39 = 13501608LL;

    t39 = (((x161>x162)==x163)/x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x166 = 15144283143LL;
	int16_t x167 = -1;
	static volatile int64_t x168 = INT64_MIN;
	volatile int64_t t40 = 25316LL;

    t40 = (((x165>x166)==x167)/x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x170 = INT16_MAX;
	static int16_t x171 = 0;
	int32_t x172 = -1;
	volatile int32_t t41 = 226242727;

    t41 = (((x169>x170)==x171)/x172);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	static uint8_t x175 = 13U;
	uint64_t x176 = 7LLU;
	static volatile uint64_t t42 = 2041572378LLU;

    t42 = (((x173>x174)==x175)/x176);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x179 = 527882994292575LLU;
	int32_t x180 = -1;
	int32_t t43 = 5;

    t43 = (((x177>x178)==x179)/x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x181 = 6;
	volatile int64_t x182 = INT64_MIN;
	static volatile int16_t x183 = INT16_MIN;
	int8_t x184 = -1;

    t44 = (((x181>x182)==x183)/x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -1;
	static volatile int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t45 = -489LL;

    t45 = (((x185>x186)==x187)/x188);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x189 = 0U;
	int8_t x191 = INT8_MAX;
	uint32_t t46 = 14545374U;

    t46 = (((x189>x190)==x191)/x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x193 = 5U;
	uint64_t x194 = 172LLU;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = -1;
	static int32_t t47 = 5;

    t47 = (((x193>x194)==x195)/x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x197 = UINT64_MAX;
	int64_t x198 = -51LL;
	static uint8_t x199 = 10U;
	volatile int32_t x200 = -1;
	volatile int32_t t48 = -33473159;

    t48 = (((x197>x198)==x199)/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x205 = -1LL;
	uint8_t x206 = UINT8_MAX;
	volatile uint8_t x207 = 2U;
	int64_t x208 = -1LL;
	volatile int64_t t49 = -1LL;

    t49 = (((x205>x206)==x207)/x208);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = 41545240473251LLU;
	volatile int8_t x210 = 17;
	int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	static int32_t t50 = -84;

    t50 = (((x209>x210)==x211)/x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = -1;
	static int64_t x214 = -62641148449188LL;
	static uint16_t x215 = 119U;
	volatile int32_t x216 = INT32_MAX;

    t51 = (((x213>x214)==x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x217 = INT16_MIN;
	int32_t x219 = 21769524;
	int32_t x220 = INT32_MAX;
	int32_t t52 = -95265;

    t52 = (((x217>x218)==x219)/x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x221 = 23639U;
	uint16_t x222 = 20U;
	static int16_t x223 = INT16_MIN;
	volatile int64_t x224 = INT64_MIN;
	static volatile int64_t t53 = 1560562340LL;

    t53 = (((x221>x222)==x223)/x224);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x225 = 38257;
	int64_t x226 = -2LL;
	int64_t x227 = INT64_MAX;
	int16_t x228 = -20;
	volatile int32_t t54 = 947854;

    t54 = (((x225>x226)==x227)/x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x229 = INT64_MIN;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;

    t55 = (((x229>x230)==x231)/x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = -29793;
	uint16_t x234 = 52U;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MIN;
	int64_t t56 = 9LL;

    t56 = (((x233>x234)==x235)/x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = 6202462LLU;
	volatile uint16_t x242 = 1U;
	uint64_t x243 = 842LLU;
	int8_t x244 = -10;
	int32_t t57 = -48;

    t57 = (((x241>x242)==x243)/x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = 4;
	int32_t x246 = INT32_MIN;
	int64_t x248 = INT64_MIN;

    t58 = (((x245>x246)==x247)/x248);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x250 = 53510790U;
	int8_t x251 = 0;
	int16_t x252 = INT16_MIN;

    t59 = (((x249>x250)==x251)/x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = 9U;
	int16_t x255 = INT16_MIN;
	volatile int32_t x256 = -1;
	int32_t t60 = -55660;

    t60 = (((x253>x254)==x255)/x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x257 = 3U;
	int32_t x258 = 137;
	static uint16_t x259 = UINT16_MAX;
	volatile int32_t x260 = -1;

    t61 = (((x257>x258)==x259)/x260);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x261 = INT16_MAX;
	volatile uint32_t x262 = 20U;
	int32_t t62 = -119483003;

    t62 = (((x261>x262)==x263)/x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x266 = -1LL;
	static int64_t x267 = -670350656LL;
	volatile int32_t t63 = -28138;

    t63 = (((x265>x266)==x267)/x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int8_t x270 = INT8_MAX;
	int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;

    t64 = (((x269>x270)==x271)/x272);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x274 = -62100LL;
	uint32_t x275 = UINT32_MAX;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t65 = 100035;

    t65 = (((x273>x274)==x275)/x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x278 = 105U;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 4832U;
	int32_t t66 = -406041995;

    t66 = (((x277>x278)==x279)/x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x282 = 2595;
	static int32_t x283 = 214255753;
	int32_t x284 = INT32_MIN;
	int32_t t67 = 604903932;

    t67 = (((x281>x282)==x283)/x284);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile uint8_t x286 = 8U;
	static int32_t x287 = -2809;
	int16_t x288 = INT16_MIN;
	int32_t t68 = 1917;

    t68 = (((x285>x286)==x287)/x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	volatile uint32_t t69 = 4168U;

    t69 = (((x289>x290)==x291)/x292);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = UINT8_MAX;

    t70 = (((x293>x294)==x295)/x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x297 = -96071676265048091LL;
	uint8_t x298 = 14U;
	int32_t x300 = -1;
	volatile int32_t t71 = 123;

    t71 = (((x297>x298)==x299)/x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x303 = INT32_MIN;
	static volatile uint32_t t72 = 3U;

    t72 = (((x301>x302)==x303)/x304);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = INT32_MAX;
	static int16_t x306 = INT16_MIN;
	static int32_t x307 = -1;
	int8_t x308 = -3;
	volatile int32_t t73 = -25;

    t73 = (((x305>x306)==x307)/x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x309 = 16254U;
	int64_t x310 = INT64_MIN;
	volatile int32_t x311 = 589102493;
	int64_t x312 = INT64_MAX;

    t74 = (((x309>x310)==x311)/x312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = -1LL;
	static volatile uint32_t x314 = 1316611U;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = INT16_MAX;

    t75 = (((x313>x314)==x315)/x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x317 = UINT64_MAX;
	uint16_t x318 = UINT16_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	int16_t x320 = -570;
	int32_t t76 = -104760;

    t76 = (((x317>x318)==x319)/x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x322 = UINT64_MAX;
	int32_t x323 = -4;
	static volatile uint16_t x324 = 1124U;

    t77 = (((x321>x322)==x323)/x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = INT16_MIN;
	int64_t x326 = 3214517LL;
	int8_t x327 = INT8_MIN;
	volatile uint8_t x328 = 27U;
	volatile int32_t t78 = 150;

    t78 = (((x325>x326)==x327)/x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	static volatile int8_t x330 = INT8_MIN;
	uint64_t x332 = 46804059790191582LLU;
	volatile uint64_t t79 = 799237419746883851LLU;

    t79 = (((x329>x330)==x331)/x332);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	volatile uint16_t x335 = 7U;
	uint16_t x336 = 228U;
	static int32_t t80 = -120841;

    t80 = (((x333>x334)==x335)/x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x337 = INT8_MIN;
	int16_t x338 = 1431;
	int16_t x340 = -1;
	static int32_t t81 = -96;

    t81 = (((x337>x338)==x339)/x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x341 = 2807722247704LLU;
	static int8_t x342 = INT8_MAX;
	int8_t x343 = INT8_MIN;
	static int32_t x344 = -1;
	int32_t t82 = -163932;

    t82 = (((x341>x342)==x343)/x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x345 = -11063693;
	static int16_t x346 = 455;
	int64_t x348 = 185LL;

    t83 = (((x345>x346)==x347)/x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = UINT8_MAX;
	static volatile int64_t x350 = INT64_MIN;
	volatile int16_t x351 = -1;

    t84 = (((x349>x350)==x351)/x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = -1;
	static uint16_t x355 = 18642U;
	int64_t x356 = -6607LL;
	volatile int64_t t85 = 220535LL;

    t85 = (((x353>x354)==x355)/x356);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = 1;
	uint8_t x358 = 3U;
	int8_t x359 = INT8_MAX;
	int64_t x360 = 1895917LL;
	int64_t t86 = -7321527885300LL;

    t86 = (((x357>x358)==x359)/x360);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = UINT8_MAX;
	static volatile uint64_t x364 = 102963618938381LLU;

    t87 = (((x361>x362)==x363)/x364);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x365 = 211073U;
	int32_t x366 = INT32_MIN;
	volatile int32_t t88 = 1803198;

    t88 = (((x365>x366)==x367)/x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x370 = INT8_MAX;
	int8_t x371 = INT8_MAX;
	volatile int32_t x372 = -10464451;
	volatile int32_t t89 = -98;

    t89 = (((x369>x370)==x371)/x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x373 = 177U;
	int64_t x374 = 878862761307555LL;
	volatile uint16_t x375 = 9906U;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t90 = 714546077;

    t90 = (((x373>x374)==x375)/x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x377 = 0;
	uint32_t x378 = 5144U;
	int32_t x379 = INT32_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t91 = -5039;

    t91 = (((x377>x378)==x379)/x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x381 = UINT64_MAX;
	uint64_t x383 = 34LLU;
	int16_t x384 = 4;
	static int32_t t92 = -1526688;

    t92 = (((x381>x382)==x383)/x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = -57;
	int64_t x386 = -125689774LL;
	int32_t x387 = -1;

    t93 = (((x385>x386)==x387)/x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x389 = -1;
	int16_t x390 = 5;
	uint16_t x391 = 13U;
	volatile uint16_t x392 = 24U;
	volatile int32_t t94 = -144;

    t94 = (((x389>x390)==x391)/x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x394 = UINT8_MAX;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t95 = -213053686698473753LL;

    t95 = (((x393>x394)==x395)/x396);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x397 = 30U;
	int32_t x398 = 10733;
	int32_t x399 = 10916;
	int16_t x400 = INT16_MIN;

    t96 = (((x397>x398)==x399)/x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x401 = 28;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MAX;
	int32_t t97 = -128041;

    t97 = (((x401>x402)==x403)/x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x406 = UINT8_MAX;
	static int64_t x407 = INT64_MIN;
	uint16_t x408 = 1U;
	int32_t t98 = 9707669;

    t98 = (((x405>x406)==x407)/x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x409 = 16836LLU;
	int8_t x410 = INT8_MAX;
	static int8_t x411 = INT8_MIN;
	static uint32_t x412 = UINT32_MAX;
	volatile uint32_t t99 = 3U;

    t99 = (((x409>x410)==x411)/x412);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = 104935U;
	static volatile int32_t x414 = -1;
	int32_t x415 = -146169582;
	int64_t x416 = INT64_MAX;
	int64_t t100 = -964918112395194449LL;

    t100 = (((x413>x414)==x415)/x416);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = 4066789LL;
	uint64_t x418 = 4865441431942543LLU;
	static int16_t x419 = 23;
	int64_t x420 = -944LL;
	int64_t t101 = -2LL;

    t101 = (((x417>x418)==x419)/x420);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = 1;
	int16_t x422 = INT16_MIN;
	static volatile uint32_t x423 = UINT32_MAX;
	static int8_t x424 = -9;
	static int32_t t102 = 21495;

    t102 = (((x421>x422)==x423)/x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x425 = 20U;
	volatile int64_t x426 = INT64_MIN;
	int64_t x427 = -114LL;
	uint64_t x428 = 246640657423670LLU;
	static uint64_t t103 = 57684LLU;

    t103 = (((x425>x426)==x427)/x428);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MIN;
	int8_t x431 = 50;
	uint32_t x432 = 26U;
	volatile uint32_t t104 = 20014427U;

    t104 = (((x429>x430)==x431)/x432);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x433 = INT8_MAX;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = -460;
	volatile int64_t x436 = INT64_MIN;
	volatile int64_t t105 = 4092744185336370007LL;

    t105 = (((x433>x434)==x435)/x436);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x437 = 39;
	volatile int16_t x438 = -1;
	static int32_t x439 = 5;
	uint32_t x440 = 296U;
	uint32_t t106 = 11077U;

    t106 = (((x437>x438)==x439)/x440);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x441 = INT8_MIN;
	static int32_t x442 = -1;
	static int32_t x443 = INT32_MIN;
	static volatile int32_t t107 = 0;

    t107 = (((x441>x442)==x443)/x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x445 = 9707U;
	uint64_t x447 = 1911768228LLU;
	static uint16_t x448 = UINT16_MAX;
	volatile int32_t t108 = 11;

    t108 = (((x445>x446)==x447)/x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x453 = INT16_MIN;
	int32_t x454 = INT32_MAX;
	int16_t x456 = -1;
	volatile int32_t t109 = 61925507;

    t109 = (((x453>x454)==x455)/x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x457 = 217133830618LLU;
	int8_t x458 = INT8_MIN;
	static uint16_t x459 = UINT16_MAX;

    t110 = (((x457>x458)==x459)/x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x461 = 485207U;
	volatile int16_t x463 = INT16_MAX;
	static uint64_t x464 = 4028800LLU;
	uint64_t t111 = 37253947LLU;

    t111 = (((x461>x462)==x463)/x464);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = INT16_MIN;
	volatile int32_t x466 = -1;
	int32_t t112 = -2882;

    t112 = (((x465>x466)==x467)/x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = -1;
	int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	static volatile int64_t x472 = INT64_MIN;
	volatile int64_t t113 = 2514890763465253425LL;

    t113 = (((x469>x470)==x471)/x472);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x473 = -1;
	int16_t x475 = -1;
	volatile int32_t t114 = 1;

    t114 = (((x473>x474)==x475)/x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x478 = INT64_MIN;
	volatile uint64_t t115 = 208487LLU;

    t115 = (((x477>x478)==x479)/x480);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x482 = UINT32_MAX;
	int16_t x483 = -3541;

    t116 = (((x481>x482)==x483)/x484);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = INT8_MIN;
	volatile int16_t x486 = -73;
	uint16_t x487 = UINT16_MAX;
	int16_t x488 = INT16_MIN;
	static volatile int32_t t117 = 1368835;

    t117 = (((x485>x486)==x487)/x488);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = -767;
	uint16_t x491 = 19867U;
	volatile uint32_t x492 = UINT32_MAX;
	static uint32_t t118 = 96605532U;

    t118 = (((x489>x490)==x491)/x492);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x493 = 174U;
	static volatile uint32_t x494 = 56U;
	uint64_t x495 = UINT64_MAX;
	static volatile uint32_t t119 = 301298907U;

    t119 = (((x493>x494)==x495)/x496);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = -2;
	uint64_t x500 = UINT64_MAX;
	uint64_t t120 = 0LLU;

    t120 = (((x497>x498)==x499)/x500);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x501 = INT32_MIN;
	static int64_t x502 = INT64_MIN;
	int8_t x503 = 25;
	static int8_t x504 = 3;

    t121 = (((x501>x502)==x503)/x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x505 = 4269U;
	int16_t x506 = INT16_MIN;
	static volatile int8_t x507 = INT8_MIN;
	int8_t x508 = -5;

    t122 = (((x505>x506)==x507)/x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x509 = UINT8_MAX;
	uint8_t x510 = UINT8_MAX;
	int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MIN;
	static int32_t t123 = 2769084;

    t123 = (((x509>x510)==x511)/x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = -121;
	uint8_t x514 = 1U;
	static uint64_t x515 = UINT64_MAX;
	uint16_t x516 = 244U;
	volatile int32_t t124 = 129002;

    t124 = (((x513>x514)==x515)/x516);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MIN;
	int8_t x519 = INT8_MIN;
	int32_t x520 = -1;
	volatile int32_t t125 = 0;

    t125 = (((x517>x518)==x519)/x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = -1LL;
	int16_t x523 = -1;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t126 = -4;

    t126 = (((x521>x522)==x523)/x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x525 = INT8_MIN;
	volatile uint16_t x526 = 30U;
	volatile int32_t x527 = -1;
	int64_t t127 = -28LL;

    t127 = (((x525>x526)==x527)/x528);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 889U;
	uint8_t x530 = UINT8_MAX;
	int8_t x531 = INT8_MIN;
	static volatile int64_t x532 = -5704LL;
	volatile int64_t t128 = 27089LL;

    t128 = (((x529>x530)==x531)/x532);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x533 = 1LLU;
	int8_t x534 = INT8_MIN;
	uint8_t x535 = 17U;
	int16_t x536 = -1;
	int32_t t129 = -445;

    t129 = (((x533>x534)==x535)/x536);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x537 = -7;
	volatile uint16_t x539 = 435U;
	volatile int8_t x540 = INT8_MIN;
	int32_t t130 = -1038;

    t130 = (((x537>x538)==x539)/x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x541 = -1LL;
	int32_t x542 = INT32_MAX;
	uint64_t x543 = UINT64_MAX;
	static int64_t x544 = -24097LL;
	volatile int64_t t131 = 57199429240687LL;

    t131 = (((x541>x542)==x543)/x544);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = 100082544LL;
	volatile int16_t x546 = INT16_MIN;
	static volatile int32_t x548 = INT32_MIN;
	int32_t t132 = -1;

    t132 = (((x545>x546)==x547)/x548);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = -2;
	int8_t x550 = -1;
	static int32_t x552 = 4;
	static volatile int32_t t133 = 0;

    t133 = (((x549>x550)==x551)/x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x553 = 8165U;
	uint64_t x554 = 4362131037095493375LLU;

    t134 = (((x553>x554)==x555)/x556);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x557 = -13LL;
	int8_t x558 = -1;
	static int32_t x559 = -1;
	static uint64_t x560 = 9681624534364LLU;
	volatile uint64_t t135 = 7425341267465LLU;

    t135 = (((x557>x558)==x559)/x560);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x562 = UINT8_MAX;
	static uint16_t x564 = 132U;

    t136 = (((x561>x562)==x563)/x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x566 = 63U;
	uint16_t x567 = 24U;
	static int32_t t137 = -36550834;

    t137 = (((x565>x566)==x567)/x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x569 = -1;
	static int16_t x570 = -55;
	uint32_t x571 = 77125330U;
	volatile int32_t x572 = 548548;
	static int32_t t138 = -1;

    t138 = (((x569>x570)==x571)/x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x574 = 17U;
	static uint8_t x575 = UINT8_MAX;
	static int64_t x576 = INT64_MIN;

    t139 = (((x573>x574)==x575)/x576);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MAX;
	int64_t x579 = INT64_MIN;
	int64_t x580 = 473207223510773616LL;
	int64_t t140 = -100090LL;

    t140 = (((x577>x578)==x579)/x580);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x582 = UINT8_MAX;
	int32_t x583 = INT32_MIN;
	int32_t t141 = 7915604;

    t141 = (((x581>x582)==x583)/x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = 1;
	volatile int64_t x586 = 33516LL;
	static volatile uint32_t x588 = 2U;
	volatile uint32_t t142 = 224U;

    t142 = (((x585>x586)==x587)/x588);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x589 = INT16_MAX;
	volatile uint8_t x590 = 0U;
	int8_t x591 = -12;
	uint32_t x592 = UINT32_MAX;
	uint32_t t143 = 179U;

    t143 = (((x589>x590)==x591)/x592);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x593 = INT64_MIN;
	uint32_t x594 = UINT32_MAX;
	volatile int64_t x595 = INT64_MAX;
	static int16_t x596 = -1;

    t144 = (((x593>x594)==x595)/x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x598 = INT32_MAX;
	int32_t x600 = INT32_MAX;

    t145 = (((x597>x598)==x599)/x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x601 = INT32_MIN;
	int32_t x602 = 26;
	volatile uint64_t x603 = 122540388LLU;
	static int16_t x604 = -4;
	volatile int32_t t146 = -2251;

    t146 = (((x601>x602)==x603)/x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x606 = -75768382LL;
	int32_t x607 = -1;
	int32_t t147 = -11;

    t147 = (((x605>x606)==x607)/x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x609 = -237LL;
	uint64_t x610 = UINT64_MAX;
	int32_t x611 = INT32_MIN;
	static int16_t x612 = INT16_MIN;
	static volatile int32_t t148 = -12;

    t148 = (((x609>x610)==x611)/x612);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = -6;
	static int16_t x614 = INT16_MAX;
	int32_t x615 = 0;
	int8_t x616 = INT8_MAX;
	int32_t t149 = 20254058;

    t149 = (((x613>x614)==x615)/x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x617 = 140LL;
	static uint64_t x618 = UINT64_MAX;
	volatile int32_t t150 = 2970;

    t150 = (((x617>x618)==x619)/x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x621 = 1993563520731023LLU;
	static int64_t x622 = INT64_MIN;
	uint64_t x623 = 1359988LLU;
	int8_t x624 = -1;

    t151 = (((x621>x622)==x623)/x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x626 = 1194LLU;
	int16_t x627 = INT16_MIN;
	uint16_t x628 = 14U;
	int32_t t152 = 129447644;

    t152 = (((x625>x626)==x627)/x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x629 = INT32_MIN;
	int64_t x630 = INT64_MIN;
	int8_t x632 = -1;
	static volatile int32_t t153 = -333;

    t153 = (((x629>x630)==x631)/x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x633 = -1LL;
	volatile uint16_t x635 = 11281U;
	int32_t x636 = INT32_MIN;
	volatile int32_t t154 = -97409650;

    t154 = (((x633>x634)==x635)/x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x637 = 2314U;
	volatile int8_t x638 = INT8_MAX;
	uint8_t x639 = 9U;
	static uint8_t x640 = 113U;
	static volatile int32_t t155 = 112932735;

    t155 = (((x637>x638)==x639)/x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = 50U;
	int64_t x642 = -1038656596007LL;
	volatile uint16_t x643 = 7183U;
	int16_t x644 = 125;
	volatile int32_t t156 = -57412842;

    t156 = (((x641>x642)==x643)/x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x647 = INT16_MAX;
	static uint64_t x648 = UINT64_MAX;
	volatile uint64_t t157 = 1944950LLU;

    t157 = (((x645>x646)==x647)/x648);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = INT64_MIN;
	static int32_t x650 = -1;
	int8_t x651 = -1;
	volatile int32_t t158 = -209795795;

    t158 = (((x649>x650)==x651)/x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x654 = -25510010LL;
	int64_t x655 = -27739LL;
	uint64_t x656 = 22172208352LLU;
	uint64_t t159 = 2LLU;

    t159 = (((x653>x654)==x655)/x656);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = INT32_MIN;
	static int8_t x658 = -14;
	int16_t x659 = INT16_MAX;
	int32_t x660 = INT32_MAX;

    t160 = (((x657>x658)==x659)/x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x661 = -1LL;
	static int64_t x662 = INT64_MIN;
	uint8_t x663 = 38U;
	volatile int64_t x664 = INT64_MIN;
	static int64_t t161 = 244068700095679LL;

    t161 = (((x661>x662)==x663)/x664);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x665 = UINT32_MAX;
	uint16_t x666 = 6759U;
	int64_t x667 = INT64_MIN;
	uint64_t x668 = UINT64_MAX;
	uint64_t t162 = 132310285353096245LLU;

    t162 = (((x665>x666)==x667)/x668);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = INT64_MIN;
	uint64_t x672 = 16233LLU;

    t163 = (((x669>x670)==x671)/x672);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x673 = -1;
	static uint16_t x674 = UINT16_MAX;
	int8_t x675 = 21;
	volatile int16_t x676 = INT16_MAX;
	int32_t t164 = 1;

    t164 = (((x673>x674)==x675)/x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x677 = -1;
	uint64_t x679 = 1885905948067205LLU;
	volatile int32_t t165 = 0;

    t165 = (((x677>x678)==x679)/x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x681 = INT16_MIN;
	uint64_t x682 = UINT64_MAX;
	static int16_t x684 = -725;

    t166 = (((x681>x682)==x683)/x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = -207;
	static uint64_t x686 = UINT64_MAX;
	uint32_t x687 = 27U;
	uint8_t x688 = UINT8_MAX;
	int32_t t167 = -5158;

    t167 = (((x685>x686)==x687)/x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x690 = INT32_MAX;
	int16_t x691 = -1;
	uint32_t x692 = UINT32_MAX;

    t168 = (((x689>x690)==x691)/x692);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x693 = UINT64_MAX;
	uint64_t x694 = 152836432LLU;
	uint16_t x696 = 15U;
	volatile int32_t t169 = 11329;

    t169 = (((x693>x694)==x695)/x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x697 = INT64_MIN;
	int8_t x698 = INT8_MIN;
	int16_t x699 = INT16_MIN;
	int32_t t170 = 20;

    t170 = (((x697>x698)==x699)/x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x701 = 178LLU;
	static int8_t x702 = INT8_MAX;
	uint16_t x704 = 15819U;
	volatile int32_t t171 = 7616;

    t171 = (((x701>x702)==x703)/x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = 9724216;
	int32_t x706 = INT32_MIN;
	int32_t x707 = -1;
	int32_t x708 = 84203971;
	int32_t t172 = 2902;

    t172 = (((x705>x706)==x707)/x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x709 = -1;
	uint16_t x711 = UINT16_MAX;
	static int8_t x712 = -27;

    t173 = (((x709>x710)==x711)/x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = INT32_MAX;
	volatile int64_t x714 = 26447862948158LL;
	int32_t x716 = -1;
	volatile int32_t t174 = -5862;

    t174 = (((x713>x714)==x715)/x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x717 = INT64_MIN;
	int64_t x719 = INT64_MAX;
	int64_t x720 = 182LL;
	int64_t t175 = -38180351181LL;

    t175 = (((x717>x718)==x719)/x720);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x721 = 5U;
	int32_t x722 = 1955;
	int8_t x723 = -7;
	volatile int32_t t176 = 2;

    t176 = (((x721>x722)==x723)/x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	volatile int64_t x728 = -1LL;
	volatile int64_t t177 = -50413047807LL;

    t177 = (((x725>x726)==x727)/x728);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x729 = UINT8_MAX;
	volatile uint8_t x730 = UINT8_MAX;
	uint8_t x731 = 61U;
	int64_t x732 = 549901363160LL;
	static int64_t t178 = -1663402746839819702LL;

    t178 = (((x729>x730)==x731)/x732);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x733 = -1;
	volatile int16_t x735 = -1;
	int8_t x736 = -1;
	volatile int32_t t179 = 9;

    t179 = (((x733>x734)==x735)/x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x737 = -6;
	int64_t x739 = -1LL;
	int64_t t180 = 19335281387420LL;

    t180 = (((x737>x738)==x739)/x740);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x745 = INT32_MIN;
	uint32_t x746 = 15256U;

    t181 = (((x745>x746)==x747)/x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x749 = INT64_MAX;
	uint64_t x750 = UINT64_MAX;
	static uint64_t x751 = 94846897LLU;
	volatile int8_t x752 = INT8_MIN;

    t182 = (((x749>x750)==x751)/x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x753 = -791;
	int8_t x755 = INT8_MIN;
	int64_t x756 = INT64_MIN;
	volatile int64_t t183 = -11337378LL;

    t183 = (((x753>x754)==x755)/x756);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x757 = -8LL;
	static int16_t x758 = -1;
	static volatile uint64_t x759 = 34425055586811LLU;
	uint32_t x760 = UINT32_MAX;
	volatile uint32_t t184 = 9U;

    t184 = (((x757>x758)==x759)/x760);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x761 = -1LL;
	static int64_t x762 = INT64_MAX;
	uint8_t x763 = 103U;
	volatile int64_t x764 = INT64_MIN;
	int64_t t185 = -92536101LL;

    t185 = (((x761>x762)==x763)/x764);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x765 = 1U;
	uint8_t x767 = 27U;
	int8_t x768 = INT8_MAX;
	int32_t t186 = -7576565;

    t186 = (((x765>x766)==x767)/x768);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x769 = UINT64_MAX;
	int8_t x770 = -29;
	static volatile int32_t x771 = -1;
	int16_t x772 = INT16_MIN;

    t187 = (((x769>x770)==x771)/x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x773 = UINT64_MAX;
	int16_t x774 = 0;
	volatile uint32_t x775 = 1104524827U;

    t188 = (((x773>x774)==x775)/x776);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x777 = INT8_MIN;
	int64_t x778 = -1LL;
	uint8_t x780 = 61U;
	volatile int32_t t189 = -1513;

    t189 = (((x777>x778)==x779)/x780);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x781 = INT8_MAX;
	static uint16_t x782 = 169U;
	static volatile int8_t x783 = -1;
	volatile int8_t x784 = 3;
	static int32_t t190 = 28349744;

    t190 = (((x781>x782)==x783)/x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x785 = UINT64_MAX;
	int64_t x786 = INT64_MIN;
	int64_t x787 = -6247LL;
	int32_t t191 = 1004150;

    t191 = (((x785>x786)==x787)/x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x789 = 262196167240LLU;
	int32_t x790 = -230;
	static int16_t x791 = -694;
	static int16_t x792 = INT16_MIN;
	volatile int32_t t192 = 13;

    t192 = (((x789>x790)==x791)/x792);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x793 = 82LLU;
	uint32_t x794 = UINT32_MAX;
	uint8_t x796 = 5U;

    t193 = (((x793>x794)==x795)/x796);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = INT8_MIN;
	uint64_t x806 = 185LLU;
	volatile int16_t x807 = INT16_MAX;
	int16_t x808 = INT16_MIN;

    t194 = (((x805>x806)==x807)/x808);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x809 = UINT64_MAX;
	int16_t x810 = -1;
	volatile uint16_t x811 = UINT16_MAX;
	uint32_t x812 = 42U;
	static volatile uint32_t t195 = 24033156U;

    t195 = (((x809>x810)==x811)/x812);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x813 = 71750301828800LLU;
	int64_t x814 = -1LL;
	uint32_t x815 = 6865925U;
	uint64_t x816 = 27350LLU;
	uint64_t t196 = 17485570534892LLU;

    t196 = (((x813>x814)==x815)/x816);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x818 = -1;
	int16_t x819 = 526;
	volatile uint16_t x820 = 2U;

    t197 = (((x817>x818)==x819)/x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x821 = 267U;
	static int16_t x822 = INT16_MIN;
	uint64_t x823 = UINT64_MAX;
	static uint64_t x824 = UINT64_MAX;

    t198 = (((x821>x822)==x823)/x824);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x827 = 91U;

    t199 = (((x825>x826)==x827)/x828);

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

