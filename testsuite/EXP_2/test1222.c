
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

uint32_t x1 = 0U;
int64_t x2 = INT64_MIN;
int16_t x3 = INT16_MIN;
uint64_t x4 = UINT64_MAX;
int32_t x11 = 1;
int64_t x12 = INT64_MIN;
static volatile int64_t x13 = INT64_MAX;
static volatile int64_t t2 = -2542666974692595642LL;
static int16_t x24 = -115;
int32_t x25 = INT32_MAX;
static int16_t x28 = -1;
int64_t t6 = -66631531254995205LL;
int32_t x33 = -35;
int16_t x36 = INT16_MIN;
int32_t t7 = 181020;
uint64_t x41 = 58764882604LLU;
static uint8_t x50 = UINT8_MAX;
int16_t x54 = INT16_MAX;
volatile uint64_t t11 = 15420247458LLU;
uint16_t x65 = 12445U;
static volatile int32_t x71 = INT32_MAX;
int16_t x73 = INT16_MAX;
int8_t x77 = INT8_MIN;
int32_t x80 = INT32_MIN;
int16_t x89 = 0;
int64_t x90 = INT64_MIN;
uint8_t x91 = 98U;
static uint8_t x92 = UINT8_MAX;
volatile int64_t x93 = 1203LL;
static uint64_t x99 = 5876875LLU;
int8_t x101 = 2;
int8_t x108 = -1;
volatile uint64_t t24 = 1732507LLU;
uint64_t x115 = 943LLU;
static int64_t t25 = 130393LL;
int16_t x124 = INT16_MAX;
static int16_t x133 = 1;
volatile uint64_t t30 = 1LLU;
static uint64_t x138 = 2626399674835LLU;
volatile int8_t x141 = INT8_MIN;
static int8_t x142 = 1;
uint16_t x148 = UINT16_MAX;
static volatile uint32_t t34 = 0U;
uint16_t x154 = 86U;
int16_t x156 = INT16_MIN;
int32_t t35 = -121;
volatile int32_t x157 = 117560424;
volatile int32_t t36 = -205126;
volatile uint16_t x163 = 21U;
static int8_t x164 = INT8_MAX;
int64_t x165 = INT64_MAX;
uint64_t x173 = 179062184390134LLU;
static int16_t x174 = INT16_MIN;
static int64_t x182 = -1LL;
volatile uint8_t x191 = 1U;
volatile int16_t x193 = 0;
static int8_t x196 = INT8_MIN;
volatile int32_t t44 = -508005099;
int32_t x203 = INT32_MAX;
static int32_t t47 = 7562;
int8_t x219 = -1;
volatile int32_t x229 = -1;
uint16_t x232 = 1650U;
volatile int16_t x239 = 417;
uint64_t t53 = 40862379082292LLU;
int8_t x241 = -1;
static volatile int32_t t56 = 11974;
uint16_t x260 = 36U;
uint16_t x263 = 13601U;
int32_t t58 = -8535232;
uint64_t x266 = 4437200368872582LLU;
int32_t x275 = INT32_MIN;
int16_t x278 = INT16_MIN;
uint16_t x279 = 11103U;
static uint64_t x280 = UINT64_MAX;
int32_t x282 = -1;
int64_t x286 = INT64_MAX;
static volatile uint32_t x287 = 1U;
volatile int32_t t67 = 1;
static volatile int64_t x306 = INT64_MIN;
volatile int32_t x309 = INT32_MAX;
uint32_t x312 = 13098794U;
uint32_t x314 = 43609808U;
int8_t x317 = INT8_MAX;
volatile int32_t t72 = 5983;
static uint16_t x327 = 28231U;
int16_t x330 = 0;
int32_t x338 = INT32_MIN;
volatile uint32_t t75 = 58408U;
uint8_t x343 = 1U;
uint64_t x344 = UINT64_MAX;
static uint32_t x350 = UINT32_MAX;
uint16_t x351 = 12U;
int32_t t79 = -79964;
int32_t x363 = 19246;
volatile int8_t x370 = 12;
volatile int64_t x379 = INT64_MIN;
static volatile int16_t x383 = 1;
int32_t t86 = -783805750;
static uint32_t x385 = 413U;
uint8_t x387 = 5U;
uint16_t x393 = 7U;
int64_t x394 = -1LL;
int8_t x395 = INT8_MIN;
uint16_t x400 = 12U;
volatile uint32_t t90 = 692U;
int16_t x402 = -1;
static int32_t x404 = INT32_MAX;
int8_t x405 = -1;
volatile uint32_t t92 = 418747830U;
int8_t x410 = INT8_MIN;
uint16_t x415 = UINT16_MAX;
volatile int32_t t95 = 104061;
volatile int8_t x422 = INT8_MIN;
static int64_t x424 = -5938169679294374LL;
volatile int32_t t97 = 80;
int8_t x430 = INT8_MIN;
uint16_t x432 = UINT16_MAX;
uint16_t x433 = UINT16_MAX;
static uint32_t x434 = UINT32_MAX;
int32_t x435 = 20;
volatile uint32_t t99 = 7477716U;
static volatile uint32_t t101 = 32U;
int16_t x457 = INT16_MIN;
static int16_t x461 = -1;
static int16_t x467 = 2848;
static int16_t x468 = INT16_MIN;
volatile uint32_t x469 = UINT32_MAX;
int8_t x471 = -6;
int32_t x475 = INT32_MIN;
static volatile uint32_t t109 = 15934455U;
volatile int32_t x488 = INT32_MAX;
int64_t x489 = INT64_MIN;
static int16_t x495 = -1;
int64_t x497 = INT64_MIN;
volatile int64_t x502 = 481391413591576997LL;
int8_t x520 = -2;
int32_t x529 = INT32_MIN;
volatile int32_t x534 = INT32_MAX;
uint32_t x536 = UINT32_MAX;
int64_t x537 = INT64_MAX;
static volatile int16_t x541 = 1;
uint32_t t124 = 5681U;
static int8_t x552 = INT8_MIN;
int64_t x557 = INT64_MIN;
uint16_t x560 = 39U;
int8_t x561 = INT8_MAX;
int32_t x564 = -1;
volatile int16_t x565 = INT16_MIN;
int32_t x568 = INT32_MIN;
volatile int32_t t129 = 2690388;
uint16_t x569 = UINT16_MAX;
uint16_t x577 = UINT16_MAX;
int32_t x580 = -1;
static volatile int32_t x581 = INT32_MIN;
int8_t x588 = -2;
uint32_t x592 = 15700U;
int64_t x598 = INT64_MAX;
uint32_t x603 = UINT32_MAX;
static volatile uint8_t x604 = 24U;
int32_t x605 = 234292;
uint16_t x608 = 2U;
static int32_t t139 = -1283;
static volatile int32_t t140 = 0;
static uint32_t x614 = 183U;
uint32_t x618 = 17511U;
int64_t x637 = INT64_MAX;
static int32_t x639 = -151;
int32_t x645 = INT32_MAX;
volatile uint64_t t147 = 22645860055362971LLU;
static int8_t x651 = 37;
static int16_t x663 = INT16_MIN;
int64_t x665 = INT64_MIN;
int64_t x669 = 1LL;
static int16_t x670 = INT16_MAX;
int16_t x672 = INT16_MIN;
uint32_t x676 = 6818U;
int64_t t153 = 24857560LL;
volatile uint8_t x681 = 103U;
int16_t x688 = -1;
static volatile int32_t t156 = 7961131;
int32_t x692 = INT32_MAX;
int64_t x700 = -55136LL;
static int8_t x706 = INT8_MAX;
int64_t x714 = -1LL;
int32_t t163 = 21292;
static int32_t x717 = 10132322;
static uint8_t x723 = UINT8_MAX;
int32_t t165 = 7337373;
volatile int8_t x725 = INT8_MAX;
uint8_t x726 = 31U;
static int16_t x727 = INT16_MIN;
int16_t x729 = 1986;
int8_t x731 = 4;
volatile uint16_t x734 = UINT16_MAX;
static int64_t x735 = INT64_MIN;
uint32_t t168 = 77U;
volatile int8_t x742 = 0;
uint16_t x754 = UINT16_MAX;
volatile int64_t x755 = -7729LL;
volatile uint16_t x761 = UINT16_MAX;
volatile uint8_t x766 = 30U;
int16_t x767 = -69;
int8_t x769 = -1;
int32_t t177 = -854062499;
int8_t x775 = 42;
volatile int16_t x778 = -329;
int32_t x792 = INT32_MAX;
int32_t x795 = -296962143;
int16_t x797 = 0;
int64_t x799 = -66794450542044569LL;
int8_t x803 = INT8_MIN;
int32_t x806 = INT32_MIN;
uint8_t x812 = 28U;
int64_t x814 = -1LL;
int16_t x827 = 1;
static volatile uint64_t x828 = 459551815LLU;
uint64_t x837 = UINT64_MAX;
uint8_t x839 = UINT8_MAX;
volatile uint64_t t194 = 45LLU;
static uint32_t t195 = 9407018U;
static int8_t x845 = INT8_MIN;
volatile uint64_t t198 = 68027811594853LLU;
static uint64_t x857 = UINT64_MAX;
static volatile int64_t x859 = INT64_MAX;


void f0(void) {
    	static volatile uint64_t t0 = 3LLU;

    t0 = ((x1/(x2!=x3))/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = UINT16_MAX;
	int16_t x10 = INT16_MIN;
	int64_t t1 = -587LL;

    t1 = ((x9/(x10!=x11))/x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x14 = -1LL;
	static volatile int64_t x15 = 2703459935LL;
	int64_t x16 = -51LL;

    t2 = ((x13/(x14!=x15))/x16);

    if (t2 != -180850432095191682LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x17 = 18147;
	volatile int8_t x18 = INT8_MIN;
	int64_t x19 = -1LL;
	int32_t x20 = INT32_MAX;
	volatile int32_t t3 = 508458870;

    t3 = ((x17/(x18!=x19))/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = 15U;
	static int64_t x22 = -1LL;
	volatile int32_t x23 = INT32_MAX;
	volatile int32_t t4 = 4760;

    t4 = ((x21/(x22!=x23))/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x26 = 3U;
	int64_t x27 = 417754425651LL;
	volatile int32_t t5 = -2886090;

    t5 = ((x25/(x26!=x27))/x28);

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = -1LL;
	volatile uint8_t x30 = 10U;
	uint16_t x31 = 3U;
	int64_t x32 = INT64_MAX;

    t6 = ((x29/(x30!=x31))/x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;

    t7 = ((x33/(x34!=x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = 6LL;
	int8_t x38 = -1;
	uint8_t x39 = 1U;
	static int8_t x40 = -1;
	int64_t t8 = 149095409164302LL;

    t8 = ((x37/(x38!=x39))/x40);

    if (t8 != -6LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x42 = -12780;
	uint8_t x43 = 0U;
	int64_t x44 = INT64_MIN;
	volatile uint64_t t9 = 13141LLU;

    t9 = ((x41/(x42!=x43))/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = INT8_MIN;
	volatile uint16_t x51 = 108U;
	volatile int32_t x52 = INT32_MAX;
	int32_t t10 = 2083442;

    t10 = ((x49/(x50!=x51))/x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x53 = INT8_MIN;
	uint16_t x55 = 122U;
	uint64_t x56 = 148LLU;

    t11 = ((x53/(x54!=x55))/x56);

    if (t11 != 124640162660199672LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MAX;
	volatile uint8_t x58 = 6U;
	static int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MIN;
	int64_t t12 = 991992623443496LL;

    t12 = ((x57/(x58!=x59))/x60);

    if (t12 != -281474976710655LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	int64_t x62 = INT64_MIN;
	volatile int16_t x63 = INT16_MIN;
	int16_t x64 = 117;
	int32_t t13 = -33188197;

    t13 = ((x61/(x62!=x63))/x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x66 = 632;
	uint64_t x67 = UINT64_MAX;
	static uint8_t x68 = 105U;
	volatile int32_t t14 = 273633509;

    t14 = ((x65/(x66!=x67))/x68);

    if (t14 != 118) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x69 = 0;
	int32_t x70 = -1;
	uint32_t x72 = UINT32_MAX;
	uint32_t t15 = 30836564U;

    t15 = ((x69/(x70!=x71))/x72);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x74 = 126020U;
	int16_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t16 = 6;

    t16 = ((x73/(x74!=x75))/x76);

    if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x78 = INT32_MAX;
	static uint8_t x79 = UINT8_MAX;
	int32_t t17 = 51;

    t17 = ((x77/(x78!=x79))/x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x85 = -1;
	int64_t x86 = -1LL;
	static volatile uint16_t x87 = UINT16_MAX;
	uint16_t x88 = 9040U;
	volatile int32_t t18 = -33488;

    t18 = ((x85/(x86!=x87))/x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t t19 = -63;

    t19 = ((x89/(x90!=x91))/x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -1;
	int64_t t20 = 318821361LL;

    t20 = ((x93/(x94!=x95))/x96);

    if (t20 != -1203LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = -1;
	int64_t x98 = INT64_MIN;
	static int32_t x100 = -3551;
	int32_t t21 = -4516;

    t21 = ((x97/(x98!=x99))/x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = 0;
	volatile uint16_t x103 = 11300U;
	volatile uint8_t x104 = 1U;
	int32_t t22 = 1013551;

    t22 = ((x101/(x102!=x103))/x104);

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = UINT64_MAX;
	volatile uint16_t x107 = 0U;
	int32_t t23 = 5950883;

    t23 = ((x105/(x106!=x107))/x108);

    if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 275606995849756LLU;
	volatile uint16_t x110 = 15087U;
	int8_t x111 = -1;
	volatile int32_t x112 = 5;

    t24 = ((x109/(x110!=x111))/x112);

    if (t24 != 55121399169951LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x113 = UINT16_MAX;
	static int8_t x114 = INT8_MIN;
	int64_t x116 = INT64_MIN;

    t25 = ((x113/(x114!=x115))/x116);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile uint32_t x118 = 3U;
	int32_t x119 = 91274948;
	static int64_t x120 = INT64_MIN;
	static volatile int64_t t26 = 4597143148865LL;

    t26 = ((x117/(x118!=x119))/x120);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x121 = 3U;
	int16_t x122 = -1;
	static int16_t x123 = INT16_MIN;
	volatile int32_t t27 = -38;

    t27 = ((x121/(x122!=x123))/x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x125 = -2842;
	static int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	static int64_t x128 = 1845994LL;
	volatile int64_t t28 = 2171566106190LL;

    t28 = ((x125/(x126!=x127))/x128);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x129 = 10034U;
	static int8_t x130 = -35;
	int64_t x131 = -986LL;
	uint32_t x132 = 27566U;
	uint32_t t29 = 9627U;

    t29 = ((x129/(x130!=x131))/x132);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x134 = 63U;
	int32_t x135 = -1679;
	volatile uint64_t x136 = 13LLU;

    t30 = ((x133/(x134!=x135))/x136);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x139 = -3;
	uint8_t x140 = UINT8_MAX;
	int64_t t31 = -463LL;

    t31 = ((x137/(x138!=x139))/x140);

    if (t31 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x143 = INT32_MIN;
	uint64_t x144 = 6530740548LLU;
	uint64_t t32 = 93325961LLU;

    t32 = ((x141/(x142!=x143))/x144);

    if (t32 != 2824602192LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x145 = 10LLU;
	volatile int8_t x146 = 4;
	int32_t x147 = -1;
	uint64_t t33 = 40199786LLU;

    t33 = ((x145/(x146!=x147))/x148);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x149 = 42U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = 3281336;
	static uint8_t x152 = 126U;

    t34 = ((x149/(x150!=x151))/x152);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = -1;
	volatile int8_t x155 = INT8_MIN;

    t35 = ((x153/(x154!=x155))/x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MIN;
	volatile int8_t x160 = INT8_MIN;

    t36 = ((x157/(x158!=x159))/x160);

    if (t36 != -918440) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	static uint16_t x162 = 1690U;
	volatile uint32_t t37 = 319U;

    t37 = ((x161/(x162!=x163))/x164);

    if (t37 != 33818640U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x166 = INT8_MAX;
	int64_t x167 = -1LL;
	int32_t x168 = INT32_MIN;
	volatile int64_t t38 = 326159LL;

    t38 = ((x165/(x166!=x167))/x168);

    if (t38 != -4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x169 = 15335U;
	static uint64_t x170 = 78453999574362245LLU;
	static volatile int16_t x171 = INT16_MAX;
	volatile int32_t x172 = -80003;
	volatile int32_t t39 = 52;

    t39 = ((x169/(x170!=x171))/x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x175 = 1238U;
	static uint8_t x176 = UINT8_MAX;
	volatile uint64_t t40 = 6LLU;

    t40 = ((x173/(x174!=x175))/x176);

    if (t40 != 702204644667LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = 10;
	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = -7130376519771068LL;
	volatile int64_t x180 = -3876178236941838LL;
	int64_t t41 = -507908LL;

    t41 = ((x177/(x178!=x179))/x180);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = INT64_MAX;
	int8_t x183 = -23;
	int64_t x184 = INT64_MIN;
	int64_t t42 = 3511103382852LL;

    t42 = ((x181/(x182!=x183))/x184);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x189 = INT32_MIN;
	int32_t x190 = -1;
	int32_t x192 = INT32_MIN;
	volatile int32_t t43 = -108133732;

    t43 = ((x189/(x190!=x191))/x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x194 = INT8_MIN;
	uint8_t x195 = 5U;

    t44 = ((x193/(x194!=x195))/x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x197 = INT64_MIN;
	uint16_t x198 = 18976U;
	volatile int32_t x199 = -1;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t45 = 1349346290116206600LLU;

    t45 = ((x197/(x198!=x199))/x200);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = -1;
	static uint8_t x202 = 32U;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t46 = 34312LLU;

    t46 = ((x201/(x202!=x203))/x204);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x205 = UINT8_MAX;
	int16_t x206 = -781;
	volatile uint64_t x207 = 309474LLU;
	static int16_t x208 = -105;

    t47 = ((x205/(x206!=x207))/x208);

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x213 = UINT64_MAX;
	uint8_t x214 = 5U;
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	volatile uint64_t t48 = 12124357442LLU;

    t48 = ((x213/(x214!=x215))/x216);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x217 = UINT64_MAX;
	volatile uint16_t x218 = UINT16_MAX;
	int8_t x220 = INT8_MIN;
	static volatile uint64_t t49 = 12LLU;

    t49 = ((x217/(x218!=x219))/x220);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MAX;
	int8_t x224 = -1;
	volatile int32_t t50 = 22246216;

    t50 = ((x221/(x222!=x223))/x224);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x225 = -1;
	int16_t x226 = 2;
	volatile uint16_t x227 = UINT16_MAX;
	static volatile uint64_t x228 = 71549624LLU;
	volatile uint64_t t51 = 173515005573LLU;

    t51 = ((x225/(x226!=x227))/x228);

    if (t51 != 257817484459LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x230 = -13LL;
	static volatile int64_t x231 = INT64_MIN;
	int32_t t52 = -917475896;

    t52 = ((x229/(x230!=x231))/x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = UINT64_MAX;
	int16_t x238 = 761;
	volatile int64_t x240 = -31217896756LL;

    t53 = ((x237/(x238!=x239))/x240);

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x242 = -1LL;
	volatile uint16_t x243 = 31590U;
	uint8_t x244 = 14U;
	volatile int32_t t54 = 501;

    t54 = ((x241/(x242!=x243))/x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x249 = INT32_MAX;
	volatile uint64_t x250 = 3281530983033386LLU;
	int32_t x251 = INT32_MIN;
	static volatile int8_t x252 = INT8_MIN;
	volatile int32_t t55 = -704011800;

    t55 = ((x249/(x250!=x251))/x252);

    if (t55 != -16777215) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	int8_t x256 = INT8_MIN;

    t56 = ((x253/(x254!=x255))/x256);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x257 = 124130144U;
	static volatile int16_t x258 = -7;
	static int32_t x259 = 657694723;
	volatile uint32_t t57 = 262791U;

    t57 = ((x257/(x258!=x259))/x260);

    if (t57 != 3448059U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x261 = 15308U;
	int32_t x262 = -1;
	int32_t x264 = INT32_MIN;

    t58 = ((x261/(x262!=x263))/x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x265 = INT64_MIN;
	uint64_t x267 = UINT64_MAX;
	uint16_t x268 = 94U;
	volatile int64_t t59 = -2155227822602LL;

    t59 = ((x265/(x266!=x267))/x268);

    if (t59 != -98120979115476338LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = INT32_MIN;
	int16_t x270 = -1;
	volatile int16_t x271 = 1;
	int32_t x272 = 3577;
	static volatile int32_t t60 = 66665102;

    t60 = ((x269/(x270!=x271))/x272);

    if (t60 != -600358) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x273 = INT16_MIN;
	uint32_t x274 = UINT32_MAX;
	static volatile int32_t x276 = -70985;
	int32_t t61 = -24273591;

    t61 = ((x273/(x274!=x275))/x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = INT8_MIN;
	uint64_t t62 = 680835LLU;

    t62 = ((x277/(x278!=x279))/x280);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = -1;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t63 = 394;

    t63 = ((x281/(x282!=x283))/x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x285 = 116U;
	uint16_t x288 = 7588U;
	int32_t t64 = -498954;

    t64 = ((x285/(x286!=x287))/x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;
	uint64_t t65 = 2726119043816781LLU;

    t65 = ((x289/(x290!=x291))/x292);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x293 = 1;
	volatile int32_t x294 = INT32_MAX;
	int32_t x295 = INT32_MIN;
	volatile uint8_t x296 = 7U;
	volatile int32_t t66 = -3;

    t66 = ((x293/(x294!=x295))/x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x297 = INT8_MAX;
	static int16_t x298 = -1264;
	static int64_t x299 = 1324654916700454467LL;
	uint16_t x300 = 47U;

    t67 = ((x297/(x298!=x299))/x300);

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 28829U;
	volatile int32_t t68 = -13;

    t68 = ((x301/(x302!=x303))/x304);

    if (t68 != -74490) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x305 = UINT8_MAX;
	int32_t x307 = 3484614;
	int64_t x308 = INT64_MAX;
	int64_t t69 = -570323LL;

    t69 = ((x305/(x306!=x307))/x308);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	uint32_t t70 = 1511942720U;

    t70 = ((x309/(x310!=x311))/x312);

    if (t70 != 163U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = -1;
	int8_t x315 = -57;
	int16_t x316 = 3;
	volatile int32_t t71 = 3;

    t71 = ((x313/(x314!=x315))/x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x318 = -160;
	int32_t x319 = 1325;
	int16_t x320 = INT16_MIN;

    t72 = ((x317/(x318!=x319))/x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x325 = -1;
	static int64_t x326 = -1LL;
	static volatile int32_t x328 = INT32_MIN;
	volatile int32_t t73 = -46887427;

    t73 = ((x325/(x326!=x327))/x328);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x329 = 507357LL;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MIN;
	static int64_t t74 = 3192811023832477LL;

    t74 = ((x329/(x330!=x331))/x332);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x337 = 7U;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -1819;

    t75 = ((x337/(x338!=x339))/x340);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = -1;
	uint64_t t76 = 7996552607LLU;

    t76 = ((x341/(x342!=x343))/x344);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	int64_t x347 = -113432LL;
	uint16_t x348 = 25715U;
	static volatile int32_t t77 = 930434306;

    t77 = ((x345/(x346!=x347))/x348);

    if (t77 != -83510) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x349 = INT16_MIN;
	int64_t x352 = 921582481080997LL;
	volatile int64_t t78 = 243073001446598055LL;

    t78 = ((x349/(x350!=x351))/x352);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x353 = INT8_MIN;
	int16_t x354 = 96;
	int16_t x355 = INT16_MIN;
	static uint8_t x356 = 3U;

    t79 = ((x353/(x354!=x355))/x356);

    if (t79 != -42) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x357 = UINT64_MAX;
	int32_t x358 = -1;
	volatile int16_t x359 = 509;
	int16_t x360 = -1;
	volatile uint64_t t80 = 43317LLU;

    t80 = ((x357/(x358!=x359))/x360);

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x361 = 16608149U;
	int32_t x362 = 243470503;
	uint16_t x364 = 18U;
	uint32_t t81 = 180706474U;

    t81 = ((x361/(x362!=x363))/x364);

    if (t81 != 922674U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = -20;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -1;
	int32_t t82 = -390876528;

    t82 = ((x365/(x366!=x367))/x368);

    if (t82 != 20) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x369 = 45531U;
	uint32_t x371 = 254468U;
	int8_t x372 = -1;
	uint32_t t83 = 15U;

    t83 = ((x369/(x370!=x371))/x372);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x373 = INT8_MAX;
	int16_t x374 = -1;
	uint32_t x375 = 61088994U;
	int32_t x376 = -1;
	volatile int32_t t84 = -71;

    t84 = ((x373/(x374!=x375))/x376);

    if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = 4;
	volatile int32_t x380 = 13809362;
	volatile int32_t t85 = -12140131;

    t85 = ((x377/(x378!=x379))/x380);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x381 = -4;
	uint32_t x382 = 0U;
	int32_t x384 = -35906557;

    t86 = ((x381/(x382!=x383))/x384);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x386 = INT16_MIN;
	volatile int8_t x388 = INT8_MIN;
	static uint32_t t87 = 982525U;

    t87 = ((x385/(x386!=x387))/x388);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x389 = INT32_MAX;
	int32_t x390 = -2;
	int64_t x391 = INT64_MIN;
	int8_t x392 = 11;
	volatile int32_t t88 = 4048205;

    t88 = ((x389/(x390!=x391))/x392);

    if (t88 != 195225786) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x396 = 1670895831027724LL;
	volatile int64_t t89 = 112113LL;

    t89 = ((x393/(x394!=x395))/x396);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x397 = UINT32_MAX;
	int32_t x398 = -1;
	int32_t x399 = 44374;

    t90 = ((x397/(x398!=x399))/x400);

    if (t90 != 357913941U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x401 = 8034096690LL;
	static uint8_t x403 = 0U;
	volatile int64_t t91 = 310151164535LL;

    t91 = ((x401/(x402!=x403))/x404);

    if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x406 = 1;
	static uint16_t x407 = 1261U;
	uint32_t x408 = 1735U;

    t92 = ((x405/(x406!=x407))/x408);

    if (t92 != 2475485U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x409 = INT16_MIN;
	int16_t x411 = -1678;
	int16_t x412 = 347;
	int32_t t93 = 400;

    t93 = ((x409/(x410!=x411))/x412);

    if (t93 != -94) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x413 = 239LL;
	volatile int8_t x414 = -28;
	int32_t x416 = INT32_MIN;
	static volatile int64_t t94 = 83725490141522LL;

    t94 = ((x413/(x414!=x415))/x416);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x417 = INT32_MIN;
	volatile int64_t x418 = INT64_MIN;
	int64_t x419 = INT64_MAX;
	uint16_t x420 = 12015U;

    t95 = ((x417/(x418!=x419))/x420);

    if (t95 != -178733) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x421 = -9;
	int64_t x423 = -220891306540684491LL;
	int64_t t96 = 63LL;

    t96 = ((x421/(x422!=x423))/x424);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x425 = 24U;
	uint8_t x426 = UINT8_MAX;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = 6;

    t97 = ((x425/(x426!=x427))/x428);

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x429 = INT64_MAX;
	uint8_t x431 = UINT8_MAX;
	int64_t t98 = -456LL;

    t98 = ((x429/(x430!=x431))/x432);

    if (t98 != 140739635871744LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x436 = UINT32_MAX;

    t99 = ((x433/(x434!=x435))/x436);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x437 = 22960U;
	uint8_t x438 = 61U;
	int32_t x439 = INT32_MIN;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t100 = 7469LLU;

    t100 = ((x437/(x438!=x439))/x440);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x449 = 18U;
	int16_t x450 = INT16_MIN;
	static int8_t x451 = -48;
	uint32_t x452 = UINT32_MAX;

    t101 = ((x449/(x450!=x451))/x452);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x453 = 1;
	uint32_t x454 = 1959U;
	static int16_t x455 = 0;
	int16_t x456 = INT16_MIN;
	static int32_t t102 = 97;

    t102 = ((x453/(x454!=x455))/x456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x458 = 27U;
	int64_t x459 = -1LL;
	int64_t x460 = 26670124LL;
	static volatile int64_t t103 = -21314174LL;

    t103 = ((x457/(x458!=x459))/x460);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x462 = INT16_MAX;
	uint16_t x463 = 1529U;
	static int64_t x464 = -284189131893707567LL;
	int64_t t104 = -4039277819LL;

    t104 = ((x461/(x462!=x463))/x464);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x465 = -184655309;
	uint8_t x466 = 9U;
	int32_t t105 = -1;

    t105 = ((x465/(x466!=x467))/x468);

    if (t105 != 5635) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x470 = UINT32_MAX;
	int64_t x472 = INT64_MIN;
	volatile int64_t t106 = 3544LL;

    t106 = ((x469/(x470!=x471))/x472);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = INT8_MIN;
	uint32_t x476 = 10298U;
	uint32_t t107 = 2029589U;

    t107 = ((x473/(x474!=x475))/x476);

    if (t107 != 208534U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x477 = INT16_MIN;
	int32_t x478 = INT32_MAX;
	uint64_t x479 = 485717LLU;
	int32_t x480 = -1;
	int32_t t108 = 1;

    t108 = ((x477/(x478!=x479))/x480);

    if (t108 != 32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x481 = INT8_MAX;
	uint8_t x482 = UINT8_MAX;
	int8_t x483 = INT8_MIN;
	uint32_t x484 = 14U;

    t109 = ((x481/(x482!=x483))/x484);

    if (t109 != 9U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MIN;
	volatile int64_t x487 = INT64_MIN;
	int32_t t110 = 539446;

    t110 = ((x485/(x486!=x487))/x488);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x490 = 60;
	int8_t x491 = -2;
	uint64_t x492 = UINT64_MAX;
	uint64_t t111 = 1436634124488437643LLU;

    t111 = ((x489/(x490!=x491))/x492);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x493 = INT64_MIN;
	static volatile int64_t x494 = -64440644375284385LL;
	static volatile int8_t x496 = INT8_MIN;
	int64_t t112 = 4536101LL;

    t112 = ((x493/(x494!=x495))/x496);

    if (t112 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x498 = 504U;
	int32_t x499 = -61;
	int32_t x500 = INT32_MAX;
	volatile int64_t t113 = -29377990LL;

    t113 = ((x497/(x498!=x499))/x500);

    if (t113 != -4294967298LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x501 = INT16_MIN;
	static uint8_t x503 = 0U;
	static volatile int64_t x504 = INT64_MIN;
	int64_t t114 = -28LL;

    t114 = ((x501/(x502!=x503))/x504);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x505 = UINT8_MAX;
	uint16_t x506 = 6U;
	int64_t x507 = -1LL;
	static int64_t x508 = 2173326925899LL;
	int64_t t115 = 64107LL;

    t115 = ((x505/(x506!=x507))/x508);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x509 = 11548U;
	int64_t x510 = INT64_MIN;
	int32_t x511 = 124;
	volatile int64_t x512 = 4633LL;
	int64_t t116 = -98LL;

    t116 = ((x509/(x510!=x511))/x512);

    if (t116 != 2LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x513 = -36;
	volatile uint64_t x514 = 15LLU;
	uint8_t x515 = UINT8_MAX;
	volatile int32_t x516 = INT32_MIN;
	int32_t t117 = 61993;

    t117 = ((x513/(x514!=x515))/x516);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x517 = 6649253LL;
	uint32_t x518 = 9930U;
	static int8_t x519 = 4;
	int64_t t118 = 1890886LL;

    t118 = ((x517/(x518!=x519))/x520);

    if (t118 != -3324626LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x521 = 0U;
	uint64_t x522 = UINT64_MAX;
	volatile int64_t x523 = INT64_MAX;
	uint8_t x524 = 52U;
	static int32_t t119 = 2;

    t119 = ((x521/(x522!=x523))/x524);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x525 = INT8_MAX;
	int16_t x526 = -6463;
	uint16_t x527 = UINT16_MAX;
	int64_t x528 = INT64_MIN;
	volatile int64_t t120 = -4592LL;

    t120 = ((x525/(x526!=x527))/x528);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MAX;
	int32_t t121 = -55;

    t121 = ((x529/(x530!=x531))/x532);

    if (t121 != -65538) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x533 = -1LL;
	volatile uint8_t x535 = UINT8_MAX;
	int64_t t122 = -2281144936726594335LL;

    t122 = ((x533/(x534!=x535))/x536);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x538 = -1;
	static int64_t x539 = INT64_MIN;
	uint8_t x540 = 1U;
	static volatile int64_t t123 = INT64_MAX;

    t123 = ((x537/(x538!=x539))/x540);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x542 = 39;
	int8_t x543 = INT8_MAX;
	uint32_t x544 = UINT32_MAX;

    t124 = ((x541/(x542!=x543))/x544);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = INT16_MIN;
	volatile int32_t x550 = INT32_MAX;
	volatile int16_t x551 = -1;
	volatile int32_t t125 = 56987;

    t125 = ((x549/(x550!=x551))/x552);

    if (t125 != 256) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x553 = 13U;
	uint64_t x554 = 43806110032484LLU;
	uint32_t x555 = 482U;
	int64_t x556 = -1LL;
	static volatile int64_t t126 = 6LL;

    t126 = ((x553/(x554!=x555))/x556);

    if (t126 != -13LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x558 = 505831U;
	static int16_t x559 = 3623;
	int64_t t127 = 1768342LL;

    t127 = ((x557/(x558!=x559))/x560);

    if (t127 != -236496718893712200LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x562 = 5U;
	int32_t x563 = -1;
	static int32_t t128 = 42;

    t128 = ((x561/(x562!=x563))/x564);

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x566 = INT8_MIN;
	uint8_t x567 = UINT8_MAX;

    t129 = ((x565/(x566!=x567))/x568);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x570 = 6771201253054LL;
	static volatile int32_t x571 = -1042;
	int8_t x572 = INT8_MAX;
	volatile int32_t t130 = -302309101;

    t130 = ((x569/(x570!=x571))/x572);

    if (t130 != 516) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x573 = 473LLU;
	int32_t x574 = -1;
	static int32_t x575 = 938456;
	int64_t x576 = -115422321LL;
	uint64_t t131 = 865LLU;

    t131 = ((x573/(x574!=x575))/x576);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x578 = INT16_MAX;
	int64_t x579 = INT64_MIN;
	volatile int32_t t132 = -56778;

    t132 = ((x577/(x578!=x579))/x580);

    if (t132 != -65535) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x582 = 211192881783064732LLU;
	static volatile int64_t x583 = INT64_MAX;
	volatile int64_t x584 = -1LL;
	int64_t t133 = 274228LL;

    t133 = ((x581/(x582!=x583))/x584);

    if (t133 != 2147483648LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x585 = INT8_MIN;
	volatile uint32_t x586 = 875719485U;
	volatile int32_t x587 = -1;
	static volatile int32_t t134 = 125741;

    t134 = ((x585/(x586!=x587))/x588);

    if (t134 != 64) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x589 = -1;
	uint8_t x590 = 1U;
	int16_t x591 = INT16_MIN;
	uint32_t t135 = 13253817U;

    t135 = ((x589/(x590!=x591))/x592);

    if (t135 != 273564U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x593 = 22476LL;
	int16_t x594 = INT16_MIN;
	volatile int8_t x595 = INT8_MAX;
	static int8_t x596 = INT8_MIN;
	volatile int64_t t136 = 3LL;

    t136 = ((x593/(x594!=x595))/x596);

    if (t136 != -175LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x597 = -182483025;
	volatile uint32_t x599 = 6352U;
	int64_t x600 = INT64_MIN;
	volatile int64_t t137 = 416150LL;

    t137 = ((x597/(x598!=x599))/x600);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x601 = INT32_MAX;
	volatile uint8_t x602 = 7U;
	static volatile int32_t t138 = -2;

    t138 = ((x601/(x602!=x603))/x604);

    if (t138 != 89478485) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x606 = -7727;
	uint8_t x607 = UINT8_MAX;

    t139 = ((x605/(x606!=x607))/x608);

    if (t139 != 117146) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x609 = INT16_MIN;
	volatile uint16_t x610 = UINT16_MAX;
	int8_t x611 = -1;
	volatile int32_t x612 = 60516;

    t140 = ((x609/(x610!=x611))/x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x613 = 44;
	uint64_t x615 = 17LLU;
	uint16_t x616 = 6U;
	int32_t t141 = -388580;

    t141 = ((x613/(x614!=x615))/x616);

    if (t141 != 7) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x617 = UINT32_MAX;
	int32_t x619 = 83863276;
	static uint16_t x620 = 8004U;
	volatile uint32_t t142 = 3794458U;

    t142 = ((x617/(x618!=x619))/x620);

    if (t142 != 536602U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x625 = 4358586258248LLU;
	int16_t x626 = INT16_MIN;
	int64_t x627 = 206850581401277922LL;
	int16_t x628 = INT16_MIN;
	static volatile uint64_t t143 = 5654LLU;

    t143 = ((x625/(x626!=x627))/x628);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = -1;
	int16_t x635 = 16;
	volatile uint32_t x636 = 40621261U;
	uint32_t t144 = 32101032U;

    t144 = ((x633/(x634!=x635))/x636);

    if (t144 != 105U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x638 = INT8_MIN;
	int64_t x640 = INT64_MIN;
	int64_t t145 = -15272LL;

    t145 = ((x637/(x638!=x639))/x640);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x641 = 123;
	int64_t x642 = 503LL;
	int64_t x643 = INT64_MIN;
	uint32_t x644 = 123369U;
	uint32_t t146 = 19U;

    t146 = ((x641/(x642!=x643))/x644);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x646 = -57;
	static uint16_t x647 = 12U;
	uint64_t x648 = 52665LLU;

    t147 = ((x645/(x646!=x647))/x648);

    if (t147 != 40776LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x649 = 1077;
	int64_t x650 = -280381608041LL;
	uint64_t x652 = 3091332LLU;
	static uint64_t t148 = 74LLU;

    t148 = ((x649/(x650!=x651))/x652);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x657 = 31U;
	uint8_t x658 = 50U;
	int32_t x659 = 793513;
	int16_t x660 = INT16_MAX;
	int32_t t149 = 8210334;

    t149 = ((x657/(x658!=x659))/x660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x661 = UINT8_MAX;
	static int64_t x662 = 0LL;
	volatile int32_t x664 = -1;
	volatile int32_t t150 = -85852;

    t150 = ((x661/(x662!=x663))/x664);

    if (t150 != -255) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x666 = INT32_MIN;
	int16_t x667 = 28;
	uint32_t x668 = UINT32_MAX;
	int64_t t151 = 0LL;

    t151 = ((x665/(x666!=x667))/x668);

    if (t151 != -2147483648LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x671 = 0U;
	volatile int64_t t152 = -92695645LL;

    t152 = ((x669/(x670!=x671))/x672);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x673 = 30352750480LL;
	int16_t x674 = -1;
	static uint32_t x675 = 31913568U;

    t153 = ((x673/(x674!=x675))/x676);

    if (t153 != 4451855LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x677 = 85;
	int64_t x678 = 1144942335LL;
	int32_t x679 = INT32_MIN;
	int8_t x680 = INT8_MIN;
	int32_t t154 = -80898;

    t154 = ((x677/(x678!=x679))/x680);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x682 = 30071579188LLU;
	static int16_t x683 = 245;
	uint8_t x684 = 2U;
	int32_t t155 = 3769;

    t155 = ((x681/(x682!=x683))/x684);

    if (t155 != 51) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x685 = -14;
	uint8_t x686 = UINT8_MAX;
	int64_t x687 = -139LL;

    t156 = ((x685/(x686!=x687))/x688);

    if (t156 != 14) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x689 = INT64_MIN;
	int8_t x690 = INT8_MIN;
	uint16_t x691 = 23204U;
	int64_t t157 = 1580LL;

    t157 = ((x689/(x690!=x691))/x692);

    if (t157 != -4294967298LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x693 = 3034U;
	int8_t x694 = INT8_MIN;
	volatile int32_t x695 = INT32_MAX;
	static volatile int64_t x696 = 2480966LL;
	int64_t t158 = -126027693501LL;

    t158 = ((x693/(x694!=x695))/x696);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x697 = INT8_MIN;
	uint64_t x698 = UINT64_MAX;
	static int8_t x699 = INT8_MIN;
	volatile int64_t t159 = -286857131519LL;

    t159 = ((x697/(x698!=x699))/x700);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x701 = -1;
	int64_t x702 = INT64_MAX;
	uint8_t x703 = 24U;
	static int16_t x704 = INT16_MIN;
	int32_t t160 = 6;

    t160 = ((x701/(x702!=x703))/x704);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x705 = INT8_MIN;
	uint32_t x707 = 1157586745U;
	int64_t x708 = 113623668112LL;
	static int64_t t161 = 0LL;

    t161 = ((x705/(x706!=x707))/x708);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x709 = -1;
	int16_t x710 = 7624;
	static uint32_t x711 = 62737U;
	int64_t x712 = INT64_MIN;
	volatile int64_t t162 = 1LL;

    t162 = ((x709/(x710!=x711))/x712);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x713 = -1;
	volatile uint64_t x715 = 59125LLU;
	int8_t x716 = 39;

    t163 = ((x713/(x714!=x715))/x716);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x718 = INT8_MIN;
	uint16_t x719 = 10716U;
	volatile uint16_t x720 = 340U;
	int32_t t164 = 7;

    t164 = ((x717/(x718!=x719))/x720);

    if (t164 != 29800) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x721 = INT8_MIN;
	volatile int32_t x722 = INT32_MIN;
	static uint8_t x724 = 2U;

    t165 = ((x721/(x722!=x723))/x724);

    if (t165 != -64) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x728 = -1;
	int32_t t166 = 0;

    t166 = ((x725/(x726!=x727))/x728);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x730 = UINT8_MAX;
	static int32_t x732 = 260712706;
	int32_t t167 = -713985878;

    t167 = ((x729/(x730!=x731))/x732);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x733 = 38U;
	uint32_t x736 = 8U;

    t168 = ((x733/(x734!=x735))/x736);

    if (t168 != 4U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x737 = 115U;
	int8_t x738 = 6;
	uint8_t x739 = 26U;
	uint16_t x740 = 2U;
	volatile int32_t t169 = -4;

    t169 = ((x737/(x738!=x739))/x740);

    if (t169 != 57) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x741 = 63U;
	int32_t x743 = -1;
	static uint32_t x744 = 22912636U;
	volatile uint32_t t170 = 832134U;

    t170 = ((x741/(x742!=x743))/x744);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x745 = 582907805;
	static uint16_t x746 = 11991U;
	int8_t x747 = INT8_MAX;
	int64_t x748 = INT64_MIN;
	int64_t t171 = 495293LL;

    t171 = ((x745/(x746!=x747))/x748);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x749 = -6LL;
	int64_t x750 = -1LL;
	uint8_t x751 = 81U;
	uint32_t x752 = UINT32_MAX;
	int64_t t172 = 31602LL;

    t172 = ((x749/(x750!=x751))/x752);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x753 = -1LL;
	uint8_t x756 = UINT8_MAX;
	int64_t t173 = -384LL;

    t173 = ((x753/(x754!=x755))/x756);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x757 = 6899980832LLU;
	static uint16_t x758 = 986U;
	uint8_t x759 = 44U;
	int8_t x760 = -1;
	volatile uint64_t t174 = 31538LLU;

    t174 = ((x757/(x758!=x759))/x760);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x762 = INT64_MIN;
	int64_t x763 = -674120258699LL;
	volatile uint32_t x764 = UINT32_MAX;
	static volatile uint32_t t175 = 1403116027U;

    t175 = ((x761/(x762!=x763))/x764);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x765 = -1;
	int64_t x768 = 162911523860LL;
	volatile int64_t t176 = 1204023884LL;

    t176 = ((x765/(x766!=x767))/x768);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x770 = INT8_MIN;
	int32_t x771 = 55520;
	int8_t x772 = -24;

    t177 = ((x769/(x770!=x771))/x772);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x773 = 185U;
	static uint16_t x774 = UINT16_MAX;
	static int16_t x776 = -1;
	static volatile uint32_t t178 = 8493U;

    t178 = ((x773/(x774!=x775))/x776);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x777 = INT16_MIN;
	uint16_t x779 = 26998U;
	volatile int8_t x780 = INT8_MAX;
	int32_t t179 = -51383302;

    t179 = ((x777/(x778!=x779))/x780);

    if (t179 != -258) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x781 = 64U;
	volatile int64_t x782 = -16271979LL;
	static volatile int64_t x783 = 291467259589LL;
	int8_t x784 = -29;
	volatile int32_t t180 = -390184;

    t180 = ((x781/(x782!=x783))/x784);

    if (t180 != -2) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x785 = 4886U;
	int32_t x786 = -1;
	uint16_t x787 = UINT16_MAX;
	int8_t x788 = INT8_MIN;
	volatile uint32_t t181 = 133408626U;

    t181 = ((x785/(x786!=x787))/x788);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x789 = -85373906LL;
	int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MIN;
	static int64_t t182 = -4LL;

    t182 = ((x789/(x790!=x791))/x792);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x793 = INT8_MAX;
	int64_t x794 = INT64_MIN;
	uint16_t x796 = 1U;
	volatile int32_t t183 = -3591411;

    t183 = ((x793/(x794!=x795))/x796);

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x798 = INT16_MIN;
	int64_t x800 = INT64_MIN;
	volatile int64_t t184 = 632LL;

    t184 = ((x797/(x798!=x799))/x800);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x801 = INT64_MAX;
	static uint32_t x802 = 341823961U;
	int32_t x804 = INT32_MIN;
	volatile int64_t t185 = 40090725122688LL;

    t185 = ((x801/(x802!=x803))/x804);

    if (t185 != -4294967295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x805 = -30;
	volatile int8_t x807 = 5;
	int64_t x808 = INT64_MIN;
	volatile int64_t t186 = -1LL;

    t186 = ((x805/(x806!=x807))/x808);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x809 = -1;
	uint32_t x810 = 1510704487U;
	static uint16_t x811 = 733U;
	int32_t t187 = 566;

    t187 = ((x809/(x810!=x811))/x812);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x813 = INT32_MIN;
	volatile uint64_t x815 = 304438439LLU;
	static int16_t x816 = INT16_MAX;
	volatile int32_t t188 = -140138;

    t188 = ((x813/(x814!=x815))/x816);

    if (t188 != -65538) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x817 = UINT16_MAX;
	int64_t x818 = -15632315073LL;
	int64_t x819 = -267633246164LL;
	uint16_t x820 = UINT16_MAX;
	static int32_t t189 = 202;

    t189 = ((x817/(x818!=x819))/x820);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x821 = 3186367LLU;
	int16_t x822 = INT16_MIN;
	int16_t x823 = -15;
	static int32_t x824 = -1;
	static volatile uint64_t t190 = 15LLU;

    t190 = ((x821/(x822!=x823))/x824);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x825 = INT32_MIN;
	volatile int16_t x826 = INT16_MIN;
	uint64_t t191 = 56912LLU;

    t191 = ((x825/(x826!=x827))/x828);

    if (t191 != 40140727268LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x829 = 31852U;
	uint16_t x830 = UINT16_MAX;
	volatile int8_t x831 = INT8_MIN;
	static volatile uint64_t x832 = 861293380134637LLU;
	uint64_t t192 = 3104545306418LLU;

    t192 = ((x829/(x830!=x831))/x832);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x833 = -1;
	int16_t x834 = -1;
	int8_t x835 = INT8_MIN;
	int32_t x836 = INT32_MIN;
	volatile int32_t t193 = -47;

    t193 = ((x833/(x834!=x835))/x836);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x838 = 15476U;
	uint64_t x840 = 22LLU;

    t194 = ((x837/(x838!=x839))/x840);

    if (t194 != 838488366986797800LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x841 = UINT32_MAX;
	static int16_t x842 = INT16_MIN;
	uint32_t x843 = 20U;
	int32_t x844 = -1;

    t195 = ((x841/(x842!=x843))/x844);

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x846 = -17;
	volatile int16_t x847 = INT16_MIN;
	uint32_t x848 = UINT32_MAX;
	volatile uint32_t t196 = 4868083U;

    t196 = ((x845/(x846!=x847))/x848);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x849 = 9U;
	uint32_t x850 = 521312607U;
	int32_t x851 = 60948;
	uint16_t x852 = 11U;
	static volatile int32_t t197 = -852;

    t197 = ((x849/(x850!=x851))/x852);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x853 = 22921349LLU;
	uint16_t x854 = 645U;
	uint32_t x855 = 2722U;
	uint32_t x856 = 3U;

    t198 = ((x853/(x854!=x855))/x856);

    if (t198 != 7640449LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x858 = 3112U;
	int8_t x860 = -1;
	static uint64_t t199 = 56321764873886642LLU;

    t199 = ((x857/(x858!=x859))/x860);

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

