
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

int32_t x2 = INT32_MIN;
uint8_t x3 = UINT8_MAX;
int32_t t2 = 8;
static uint64_t x16 = 174262611348LLU;
uint8_t x25 = UINT8_MAX;
static int16_t x27 = INT16_MIN;
static int32_t x32 = INT32_MAX;
volatile int32_t t7 = -26;
volatile int16_t x33 = INT16_MAX;
int16_t x35 = -1;
volatile uint64_t x36 = 996LLU;
volatile int32_t t10 = 1308;
uint8_t x50 = UINT8_MAX;
static int32_t x61 = -1;
static int8_t x62 = -13;
volatile int32_t t15 = -140933;
static uint32_t x67 = UINT32_MAX;
uint32_t x68 = 379872U;
static volatile int32_t t19 = -3814;
static int8_t x85 = INT8_MIN;
static int8_t x89 = 57;
int16_t x93 = -394;
int16_t x96 = INT16_MIN;
int8_t x99 = INT8_MIN;
volatile int64_t x101 = 239355426LL;
static int16_t x111 = INT16_MIN;
static int32_t x118 = INT32_MIN;
int32_t t29 = 3;
int16_t x125 = -1;
int8_t x126 = INT8_MIN;
int16_t x129 = -1;
static int8_t x130 = -9;
int16_t x134 = INT16_MIN;
volatile uint8_t x139 = 17U;
volatile int32_t t34 = -10709721;
int64_t x144 = INT64_MAX;
int32_t t35 = 4167;
int16_t x148 = -343;
int32_t t38 = 66;
int64_t x160 = -1LL;
uint16_t x161 = 0U;
uint8_t x165 = 34U;
volatile int32_t t41 = 29;
volatile int64_t x169 = INT64_MIN;
volatile int16_t x171 = INT16_MIN;
static int16_t x178 = 4;
int32_t x181 = -43;
int32_t x183 = INT32_MIN;
static int16_t x186 = 253;
volatile uint64_t x191 = 12029696745LLU;
static int32_t x192 = 3994;
int16_t x197 = 12100;
static int32_t t49 = 65491;
int64_t x202 = INT64_MAX;
uint64_t x207 = 7239042239LLU;
int32_t x210 = INT32_MIN;
uint16_t x214 = UINT16_MAX;
int32_t x217 = INT32_MIN;
uint8_t x219 = 0U;
int8_t x220 = INT8_MIN;
volatile int32_t t55 = -3607;
static uint16_t x225 = UINT16_MAX;
uint8_t x229 = 13U;
volatile uint8_t x231 = 7U;
int64_t x235 = INT64_MAX;
static int32_t t58 = -2497;
volatile uint8_t x238 = 20U;
uint64_t x240 = 39262078306312LLU;
volatile int32_t t59 = -1939;
int32_t x242 = INT32_MIN;
uint64_t x246 = 6764290410777LLU;
uint16_t x249 = 0U;
static uint32_t x260 = 318U;
volatile uint32_t x263 = UINT32_MAX;
uint64_t x266 = 9LLU;
int64_t x268 = INT64_MIN;
int32_t t68 = -34452;
static uint64_t x279 = 609LLU;
int16_t x281 = -1;
uint8_t x284 = 73U;
volatile int32_t t70 = -1023;
int64_t x285 = INT64_MAX;
volatile int32_t t71 = 12894;
uint64_t x301 = 9508496171521LLU;
uint16_t x305 = 26U;
static uint64_t x308 = UINT64_MAX;
uint32_t x315 = 2U;
int32_t t78 = 126;
static uint8_t x317 = UINT8_MAX;
volatile int32_t t80 = 818;
int64_t x325 = -7220088LL;
uint8_t x327 = UINT8_MAX;
int8_t x330 = -1;
volatile uint64_t x338 = UINT64_MAX;
volatile int32_t t84 = -2;
volatile int64_t x343 = -762750LL;
static volatile uint8_t x348 = 6U;
int16_t x351 = INT16_MIN;
int32_t x356 = -1;
int64_t x361 = -1LL;
volatile int32_t x371 = 282;
int8_t x372 = INT8_MAX;
volatile uint16_t x375 = 1571U;
uint8_t x380 = 1U;
volatile int8_t x384 = INT8_MIN;
static volatile uint16_t x391 = UINT16_MAX;
int64_t x392 = -1LL;
int64_t x395 = INT64_MIN;
uint32_t x400 = 27529U;
volatile int64_t x404 = INT64_MIN;
int32_t t102 = -4333131;
volatile uint16_t x415 = 3382U;
uint16_t x419 = UINT16_MAX;
static volatile uint16_t x423 = UINT16_MAX;
static int32_t t107 = 204898;
int32_t x433 = INT32_MIN;
volatile int8_t x438 = -2;
int16_t x441 = INT16_MIN;
volatile int16_t x448 = INT16_MAX;
uint16_t x449 = 290U;
int32_t t112 = 808;
int32_t x454 = INT32_MIN;
volatile int8_t x455 = 1;
volatile uint32_t x469 = UINT32_MAX;
volatile int32_t x479 = -232337;
volatile uint8_t x482 = 0U;
volatile int32_t t120 = 29;
static volatile int32_t t121 = 20;
uint16_t x491 = UINT16_MAX;
volatile int32_t x495 = INT32_MAX;
int32_t x496 = 15262697;
int8_t x499 = INT8_MIN;
static int64_t x517 = INT64_MIN;
static int32_t x518 = 7975695;
volatile int32_t t129 = 23;
int64_t x523 = INT64_MIN;
static uint64_t x525 = 10LLU;
int32_t x532 = INT32_MIN;
volatile uint32_t x533 = UINT32_MAX;
int64_t x534 = INT64_MAX;
static int64_t x544 = INT64_MIN;
int64_t x548 = -1LL;
volatile int16_t x549 = INT16_MAX;
int32_t t138 = -9518612;
int8_t x558 = 1;
int8_t x563 = INT8_MIN;
volatile int16_t x564 = INT16_MAX;
int32_t x578 = -1;
uint64_t x582 = UINT64_MAX;
static uint32_t x587 = UINT32_MAX;
uint64_t x588 = 8282135479668935LLU;
volatile int64_t x595 = INT64_MIN;
volatile int32_t t149 = 1;
volatile int32_t t151 = -757970544;
uint64_t x610 = 212273115548LLU;
static volatile int16_t x611 = INT16_MIN;
int8_t x612 = -1;
static int32_t t153 = -7;
uint16_t x620 = 194U;
static volatile int32_t t154 = -10;
uint8_t x621 = 3U;
int64_t x632 = INT64_MIN;
int16_t x636 = -1;
volatile int64_t x643 = INT64_MIN;
uint16_t x647 = 340U;
int64_t x656 = INT64_MAX;
volatile int32_t t163 = 475934997;
static int64_t x659 = INT64_MIN;
volatile int32_t t164 = -144;
static int8_t x665 = -1;
int8_t x666 = -31;
uint64_t x675 = UINT64_MAX;
static int64_t x676 = 3454070891LL;
int32_t t168 = 1;
volatile int16_t x677 = INT16_MIN;
int8_t x678 = INT8_MIN;
int32_t x679 = 46103797;
volatile int32_t t169 = 31875;
int64_t x682 = INT64_MIN;
int8_t x683 = INT8_MIN;
uint16_t x684 = 2113U;
int32_t t170 = 77771;
volatile uint8_t x687 = 3U;
int64_t x691 = INT64_MIN;
static uint16_t x692 = 31U;
int64_t x694 = 98474054681LL;
uint64_t x695 = UINT64_MAX;
volatile int32_t x701 = -10623416;
uint16_t x702 = 427U;
volatile int32_t x706 = INT32_MIN;
volatile int64_t x708 = INT64_MAX;
static uint64_t x709 = 299076067043876467LLU;
int64_t x711 = -161165LL;
volatile int32_t x713 = -447593;
int32_t t178 = 10;
int32_t x721 = -862420328;
volatile uint16_t x729 = 18127U;
int64_t x736 = -1LL;
volatile int64_t x738 = INT64_MIN;
int64_t x743 = INT64_MAX;
volatile int32_t t188 = 2;
static uint8_t x763 = 29U;
static int64_t x773 = INT64_MIN;
uint32_t x774 = 2463381U;
int8_t x775 = 3;
static int16_t x776 = INT16_MIN;
volatile int32_t t193 = -109;
int32_t t194 = -5;
int32_t t198 = 1;
uint64_t x798 = UINT64_MAX;
volatile int8_t x799 = INT8_MIN;


void f0(void) {
    	int8_t x1 = 7;
	uint32_t x4 = 2447293U;
	static volatile int32_t t0 = 7176346;

    t0 = ((x1|(x2!=x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint16_t x6 = 11895U;
	static int8_t x7 = 36;
	int64_t x8 = 639806348150231833LL;
	volatile int32_t t1 = -1;

    t1 = ((x5|(x6!=x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -26;
	int32_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;

    t2 = ((x9|(x10!=x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 228979771595LLU;
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = 47701924355520LLU;
	volatile int32_t t3 = -710336900;

    t3 = ((x13|(x14!=x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	static int8_t x18 = -1;
	volatile int8_t x19 = INT8_MAX;
	int16_t x20 = -1;
	static volatile int32_t t4 = 12080892;

    t4 = ((x17|(x18!=x19))!=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	volatile uint16_t x22 = 29U;
	int64_t x23 = 3471519457334340LL;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -104592006;

    t5 = ((x21|(x22!=x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = -1LL;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = 242547630;

    t6 = ((x25|(x26!=x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -123040097020793839LL;
	uint16_t x30 = 2U;
	int8_t x31 = INT8_MAX;

    t7 = ((x29|(x30!=x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = 2218251LLU;
	int32_t t8 = 4517;

    t8 = ((x33|(x34!=x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = -1;
	volatile uint16_t x40 = 213U;
	static volatile int32_t t9 = 14;

    t9 = ((x37|(x38!=x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x41 = UINT16_MAX;
	int64_t x42 = 1LL;
	static volatile uint8_t x43 = 50U;
	int32_t x44 = -1;

    t10 = ((x41|(x42!=x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -39;
	int8_t x46 = 63;
	static int32_t x47 = INT32_MIN;
	static int64_t x48 = -3322686LL;
	static int32_t t11 = -183971691;

    t11 = ((x45|(x46!=x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	static int64_t x52 = -1LL;
	int32_t t12 = 442805451;

    t12 = ((x49|(x50!=x51))!=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -258005642;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	static volatile int64_t x56 = INT64_MAX;
	static int32_t t13 = 46919;

    t13 = ((x53|(x54!=x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x57 = 13108930534LL;
	uint16_t x58 = 357U;
	int8_t x59 = INT8_MAX;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = -116423;

    t14 = ((x57|(x58!=x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x63 = INT64_MIN;
	static uint32_t x64 = UINT32_MAX;

    t15 = ((x61|(x62!=x63))!=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 363LL;
	uint32_t x66 = UINT32_MAX;
	volatile int32_t t16 = -42683;

    t16 = ((x65|(x66!=x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 3415480488425808LLU;
	volatile int16_t x71 = 4443;
	int64_t x72 = -3864704826595279LL;
	int32_t t17 = 4378;

    t17 = ((x69|(x70!=x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = 33U;
	int64_t x74 = 5432981141382384LL;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 260508820;

    t18 = ((x73|(x74!=x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 13U;
	volatile int16_t x78 = INT16_MIN;
	static uint64_t x79 = 124LLU;
	volatile uint32_t x80 = UINT32_MAX;

    t19 = ((x77|(x78!=x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	volatile int32_t x82 = INT32_MAX;
	int16_t x83 = -4;
	static int64_t x84 = INT64_MAX;
	int32_t t20 = -1;

    t20 = ((x81|(x82!=x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = -1;
	uint8_t x87 = 4U;
	uint8_t x88 = 4U;
	volatile int32_t t21 = 46;

    t21 = ((x85|(x86!=x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = 3U;
	volatile int64_t x91 = -1LL;
	int8_t x92 = -17;
	volatile int32_t t22 = 798142;

    t22 = ((x89|(x90!=x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int32_t t23 = -341848;

    t23 = ((x93|(x94!=x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = -1;
	static int8_t x98 = INT8_MIN;
	static int8_t x100 = INT8_MIN;
	int32_t t24 = 0;

    t24 = ((x97|(x98!=x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x102 = 4529LLU;
	static int16_t x103 = INT16_MIN;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 507;

    t25 = ((x101|(x102!=x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -214872;
	static int64_t x106 = INT64_MIN;
	volatile int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -5313920;

    t26 = ((x105|(x106!=x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MAX;
	int32_t x110 = INT32_MAX;
	uint64_t x112 = 525574679753535658LLU;
	volatile int32_t t27 = 2002689;

    t27 = ((x109|(x110!=x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	int64_t x114 = -1LL;
	volatile uint32_t x115 = 11729U;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -243;

    t28 = ((x113|(x114!=x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MAX;
	volatile int64_t x119 = INT64_MIN;
	volatile uint64_t x120 = 663074LLU;

    t29 = ((x117|(x118!=x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = UINT8_MAX;
	static int8_t x122 = 13;
	int64_t x123 = INT64_MAX;
	int32_t x124 = -1;
	int32_t t30 = -447;

    t30 = ((x121|(x122!=x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x127 = INT16_MAX;
	volatile uint16_t x128 = 1576U;
	volatile int32_t t31 = -28;

    t31 = ((x125|(x126!=x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x131 = 396U;
	volatile int32_t x132 = INT32_MAX;
	int32_t t32 = -57998356;

    t32 = ((x129|(x130!=x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 0U;
	volatile int16_t x135 = -5832;
	uint16_t x136 = 3U;
	volatile int32_t t33 = 287359;

    t33 = ((x133|(x134!=x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = 22;
	int8_t x138 = -2;
	static int8_t x140 = INT8_MIN;

    t34 = ((x137|(x138!=x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = -1LL;
	uint16_t x142 = UINT16_MAX;
	static volatile int16_t x143 = -1;

    t35 = ((x141|(x142!=x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 30U;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MIN;
	volatile int32_t t36 = 923093678;

    t36 = ((x145|(x146!=x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	static int8_t x150 = INT8_MAX;
	volatile int16_t x151 = INT16_MIN;
	uint16_t x152 = 1U;
	volatile int32_t t37 = 397;

    t37 = ((x149|(x150!=x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	uint16_t x154 = 5329U;
	volatile int64_t x155 = INT64_MIN;
	uint16_t x156 = UINT16_MAX;

    t38 = ((x153|(x154!=x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -568;
	volatile int32_t x158 = INT32_MIN;
	int64_t x159 = -137734142124LL;
	volatile int32_t t39 = -193;

    t39 = ((x157|(x158!=x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x162 = 138U;
	volatile uint64_t x163 = 14876806LLU;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 355836;

    t40 = ((x161|(x162!=x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = -1;
	static int8_t x167 = -1;
	volatile int32_t x168 = INT32_MAX;

    t41 = ((x165|(x166!=x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x170 = 24U;
	int8_t x172 = -2;
	volatile int32_t t42 = 1;

    t42 = ((x169|(x170!=x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 54948928162831360LLU;
	int8_t x174 = INT8_MIN;
	int32_t x175 = 792604190;
	volatile int32_t x176 = 15743;
	int32_t t43 = 0;

    t43 = ((x173|(x174!=x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x177 = 0;
	uint16_t x179 = UINT16_MAX;
	static int8_t x180 = INT8_MIN;
	int32_t t44 = -9781;

    t44 = ((x177|(x178!=x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = INT8_MIN;
	static int32_t x184 = INT32_MIN;
	int32_t t45 = -201296;

    t45 = ((x181|(x182!=x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x187 = -1;
	int8_t x188 = -57;
	static volatile int32_t t46 = 39081467;

    t46 = ((x185|(x186!=x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 3723157447048LLU;
	volatile int32_t t47 = 6146519;

    t47 = ((x189|(x190!=x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = 24535088U;
	int64_t x194 = -1LL;
	int32_t x195 = -1;
	volatile int32_t x196 = 343257963;
	int32_t t48 = 489529;

    t48 = ((x193|(x194!=x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = -26;
	static volatile uint8_t x199 = 17U;
	int16_t x200 = INT16_MIN;

    t49 = ((x197|(x198!=x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 33958699595210068LLU;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = 13548;

    t50 = ((x201|(x202!=x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x205 = -1;
	uint64_t x206 = 126174181LLU;
	volatile int8_t x208 = -1;
	static volatile int32_t t51 = -375680;

    t51 = ((x205|(x206!=x207))!=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = INT8_MAX;
	int32_t x211 = INT32_MAX;
	static volatile uint64_t x212 = 505LLU;
	int32_t t52 = -13;

    t52 = ((x209|(x210!=x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 4U;
	volatile int32_t x215 = 5;
	uint16_t x216 = 199U;
	int32_t t53 = -1102;

    t53 = ((x213|(x214!=x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = INT8_MIN;
	volatile int32_t t54 = 1055575069;

    t54 = ((x217|(x218!=x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -4018;
	uint64_t x222 = 6093LLU;
	volatile int8_t x223 = -1;
	uint64_t x224 = 2462070LLU;

    t55 = ((x221|(x222!=x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = -2118;
	int32_t x227 = INT32_MIN;
	static int64_t x228 = INT64_MIN;
	static volatile int32_t t56 = -375224189;

    t56 = ((x225|(x226!=x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x230 = 34U;
	volatile uint8_t x232 = 3U;
	static int32_t t57 = -1;

    t57 = ((x229|(x230!=x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	int32_t x234 = -1;
	int8_t x236 = 19;

    t58 = ((x233|(x234!=x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 1;
	uint8_t x239 = UINT8_MAX;

    t59 = ((x237|(x238!=x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = -1;
	static int8_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -6;

    t60 = ((x241|(x242!=x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	static volatile int16_t x247 = 6044;
	uint64_t x248 = 3388702650163928LLU;
	volatile int32_t t61 = -542373668;

    t61 = ((x245|(x246!=x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -2080;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = UINT32_MAX;
	int32_t t62 = 11;

    t62 = ((x249|(x250!=x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	int64_t x254 = -2392802516140324503LL;
	volatile int16_t x255 = -1;
	int64_t x256 = 42874248563158594LL;
	int32_t t63 = -434;

    t63 = ((x253|(x254!=x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -1;
	volatile uint32_t x258 = 270410584U;
	volatile int16_t x259 = INT16_MIN;
	volatile int32_t t64 = 40476;

    t64 = ((x257|(x258!=x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 47U;
	static int8_t x262 = INT8_MIN;
	static uint64_t x264 = UINT64_MAX;
	static int32_t t65 = -9236;

    t65 = ((x261|(x262!=x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 8;
	int32_t x267 = INT32_MIN;
	volatile int32_t t66 = -5;

    t66 = ((x265|(x266!=x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 51U;
	uint64_t x270 = 121092585663857LLU;
	int64_t x271 = INT64_MIN;
	volatile int64_t x272 = INT64_MAX;
	volatile int32_t t67 = 1943798;

    t67 = ((x269|(x270!=x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1266LL;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = 27;
	int8_t x276 = INT8_MIN;

    t68 = ((x273|(x274!=x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x277 = INT32_MIN;
	int32_t x278 = -13152429;
	static uint64_t x280 = 51LLU;
	int32_t t69 = -2233463;

    t69 = ((x277|(x278!=x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x282 = 101U;
	static int8_t x283 = INT8_MIN;

    t70 = ((x281|(x282!=x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x286 = -1832901966760426LL;
	uint8_t x287 = 4U;
	uint16_t x288 = UINT16_MAX;

    t71 = ((x285|(x286!=x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	int64_t x290 = -476LL;
	uint32_t x291 = UINT32_MAX;
	uint16_t x292 = 1141U;
	int32_t t72 = -117958;

    t72 = ((x289|(x290!=x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x293 = UINT32_MAX;
	uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = 0;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 1;

    t73 = ((x293|(x294!=x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MAX;
	uint16_t x298 = 11646U;
	static volatile int8_t x299 = 1;
	static int32_t x300 = INT32_MIN;
	int32_t t74 = 63502503;

    t74 = ((x297|(x298!=x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -1;
	int32_t x303 = INT32_MAX;
	volatile int32_t x304 = 511;
	int32_t t75 = -2752031;

    t75 = ((x301|(x302!=x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x306 = 90U;
	int32_t x307 = INT32_MIN;
	static int32_t t76 = 15;

    t76 = ((x305|(x306!=x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 26412508405LLU;
	int32_t x310 = -1;
	int16_t x311 = -1;
	int8_t x312 = 1;
	int32_t t77 = 265745840;

    t77 = ((x309|(x310!=x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	static uint64_t x314 = 496407453508516098LLU;
	int64_t x316 = INT64_MIN;

    t78 = ((x313|(x314!=x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x318 = 0U;
	uint64_t x319 = 15043699315452LLU;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = 3994239;

    t79 = ((x317|(x318!=x319))!=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	static int64_t x322 = -31LL;
	uint32_t x323 = 152709U;
	int64_t x324 = 1LL;

    t80 = ((x321|(x322!=x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x326 = INT16_MAX;
	int64_t x328 = -3231588243LL;
	volatile int32_t t81 = 22709;

    t81 = ((x325|(x326!=x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 157LLU;
	int32_t x331 = INT32_MIN;
	int16_t x332 = 3565;
	volatile int32_t t82 = -1;

    t82 = ((x329|(x330!=x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 3U;
	static int16_t x334 = INT16_MIN;
	int8_t x335 = -1;
	uint8_t x336 = UINT8_MAX;
	static volatile int32_t t83 = -55329;

    t83 = ((x333|(x334!=x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	uint8_t x339 = 5U;
	int8_t x340 = INT8_MIN;

    t84 = ((x337|(x338!=x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	int64_t x342 = 52287261418838360LL;
	int8_t x344 = -29;
	int32_t t85 = -30;

    t85 = ((x341|(x342!=x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x345 = 19U;
	uint16_t x346 = 6991U;
	uint32_t x347 = 912099896U;
	volatile int32_t t86 = -11;

    t86 = ((x345|(x346!=x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	int16_t x350 = -109;
	int16_t x352 = -1;
	volatile int32_t t87 = 6125054;

    t87 = ((x349|(x350!=x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int8_t x354 = 0;
	int16_t x355 = INT16_MAX;
	static int32_t t88 = 35536782;

    t88 = ((x353|(x354!=x355))!=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = -1;
	volatile uint16_t x358 = 448U;
	uint32_t x359 = UINT32_MAX;
	volatile int16_t x360 = -11728;
	volatile int32_t t89 = -3;

    t89 = ((x357|(x358!=x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -7;
	int64_t x363 = INT64_MAX;
	volatile int8_t x364 = 19;
	volatile int32_t t90 = -643419289;

    t90 = ((x361|(x362!=x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = -45384730443600LL;
	uint8_t x366 = 3U;
	int16_t x367 = INT16_MAX;
	int64_t x368 = 7779269686LL;
	volatile int32_t t91 = -304;

    t91 = ((x365|(x366!=x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = 2;
	int64_t x370 = INT64_MAX;
	int32_t t92 = -28009;

    t92 = ((x369|(x370!=x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MAX;
	uint16_t x376 = 63U;
	volatile int32_t t93 = 461;

    t93 = ((x373|(x374!=x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MIN;
	volatile int16_t x378 = 0;
	static volatile uint8_t x379 = 15U;
	volatile int32_t t94 = 3600837;

    t94 = ((x377|(x378!=x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 7480400232234LL;
	int8_t x382 = -1;
	int64_t x383 = 24866LL;
	int32_t t95 = -147767570;

    t95 = ((x381|(x382!=x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = INT16_MIN;
	volatile int8_t x386 = INT8_MIN;
	uint64_t x387 = 880LLU;
	int16_t x388 = -1;
	int32_t t96 = -756108;

    t96 = ((x385|(x386!=x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x389 = INT32_MAX;
	uint64_t x390 = 390944587058757LLU;
	volatile int32_t t97 = 334481;

    t97 = ((x389|(x390!=x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 46741506;

    t98 = ((x393|(x394!=x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -297LL;
	static int8_t x398 = INT8_MIN;
	int64_t x399 = -1LL;
	volatile int32_t t99 = 88718554;

    t99 = ((x397|(x398!=x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = -1;
	uint64_t x402 = UINT64_MAX;
	uint16_t x403 = 225U;
	volatile int32_t t100 = 3843620;

    t100 = ((x401|(x402!=x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 10U;
	int64_t x406 = INT64_MIN;
	uint8_t x407 = 3U;
	static int32_t x408 = INT32_MAX;
	volatile int32_t t101 = 28997379;

    t101 = ((x405|(x406!=x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 58U;
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = -4;
	uint16_t x412 = 191U;

    t102 = ((x409|(x410!=x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x413 = 19311697LLU;
	static int16_t x414 = -13;
	static uint32_t x416 = UINT32_MAX;
	int32_t t103 = -527201771;

    t103 = ((x413|(x414!=x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = -1;
	static int8_t x418 = 63;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = 165;

    t104 = ((x417|(x418!=x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = INT32_MIN;
	static int8_t x422 = INT8_MIN;
	uint16_t x424 = 364U;
	static volatile int32_t t105 = 674;

    t105 = ((x421|(x422!=x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 252860838U;
	uint8_t x426 = 7U;
	volatile uint64_t x427 = 1405LLU;
	static uint32_t x428 = UINT32_MAX;
	volatile int32_t t106 = -235;

    t106 = ((x425|(x426!=x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	static int16_t x430 = -1;
	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = -1;

    t107 = ((x429|(x430!=x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x434 = INT16_MAX;
	uint16_t x435 = 1U;
	uint64_t x436 = 1902908789588134958LLU;
	static int32_t t108 = 1038;

    t108 = ((x433|(x434!=x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	int64_t x439 = -1LL;
	int32_t x440 = INT32_MIN;
	volatile int32_t t109 = 20660;

    t109 = ((x437|(x438!=x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = UINT16_MAX;
	int16_t x443 = INT16_MIN;
	static volatile int16_t x444 = INT16_MIN;
	static int32_t t110 = -778;

    t110 = ((x441|(x442!=x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x445 = 3U;
	uint32_t x446 = 50734634U;
	int16_t x447 = 0;
	static volatile int32_t t111 = 19;

    t111 = ((x445|(x446!=x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MIN;
	uint64_t x452 = 49965LLU;

    t112 = ((x449|(x450!=x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = -899;
	int16_t x456 = -102;
	int32_t t113 = -1;

    t113 = ((x453|(x454!=x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MIN;
	volatile int64_t x458 = INT64_MIN;
	static uint32_t x459 = UINT32_MAX;
	int64_t x460 = -1LL;
	volatile int32_t t114 = 6448;

    t114 = ((x457|(x458!=x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	static int8_t x462 = -2;
	static uint32_t x463 = 920U;
	int32_t x464 = -1;
	int32_t t115 = -13362447;

    t115 = ((x461|(x462!=x463))!=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int64_t x466 = INT64_MAX;
	int16_t x467 = -820;
	int64_t x468 = INT64_MIN;
	int32_t t116 = -133831428;

    t116 = ((x465|(x466!=x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = UINT32_MAX;
	int64_t x471 = -1LL;
	uint64_t x472 = 2740865917LLU;
	static int32_t t117 = -899;

    t117 = ((x469|(x470!=x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	uint16_t x474 = 7729U;
	int16_t x475 = INT16_MIN;
	static int8_t x476 = INT8_MIN;
	int32_t t118 = 1054177679;

    t118 = ((x473|(x474!=x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x477 = INT64_MAX;
	int8_t x478 = INT8_MIN;
	int64_t x480 = INT64_MIN;
	int32_t t119 = -8124;

    t119 = ((x477|(x478!=x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 63896U;
	uint8_t x483 = 13U;
	int64_t x484 = INT64_MAX;

    t120 = ((x481|(x482!=x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 7U;
	int32_t x486 = 21588;
	volatile int64_t x487 = INT64_MAX;
	int8_t x488 = -1;

    t121 = ((x485|(x486!=x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = INT64_MAX;
	static uint32_t x490 = 1639U;
	int16_t x492 = INT16_MIN;
	volatile int32_t t122 = -19;

    t122 = ((x489|(x490!=x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = 1;
	uint64_t x494 = 1025956380457651LLU;
	volatile int32_t t123 = -5886;

    t123 = ((x493|(x494!=x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	uint32_t x498 = UINT32_MAX;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t124 = -2;

    t124 = ((x497|(x498!=x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	volatile int32_t x502 = -81496;
	int16_t x503 = -562;
	volatile int64_t x504 = -1LL;
	volatile int32_t t125 = -12404;

    t125 = ((x501|(x502!=x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	volatile int32_t x506 = INT32_MIN;
	volatile int64_t x507 = INT64_MIN;
	int64_t x508 = -297006180LL;
	volatile int32_t t126 = -565;

    t126 = ((x505|(x506!=x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -26;
	int64_t x510 = INT64_MIN;
	int64_t x511 = 2783670803814LL;
	int64_t x512 = -12132673LL;
	int32_t t127 = -6;

    t127 = ((x509|(x510!=x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	volatile uint64_t x514 = 1LLU;
	volatile uint16_t x515 = UINT16_MAX;
	volatile int16_t x516 = INT16_MAX;
	static volatile int32_t t128 = -7823;

    t128 = ((x513|(x514!=x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x519 = INT64_MAX;
	volatile uint32_t x520 = 60U;

    t129 = ((x517|(x518!=x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = -1;
	volatile uint64_t x522 = UINT64_MAX;
	volatile int64_t x524 = INT64_MAX;
	volatile int32_t t130 = 2005;

    t130 = ((x521|(x522!=x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = INT16_MAX;
	int64_t x527 = -35565090930282205LL;
	static int8_t x528 = -1;
	int32_t t131 = -148129;

    t131 = ((x525|(x526!=x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -106;
	volatile int16_t x530 = -2984;
	static uint8_t x531 = UINT8_MAX;
	volatile int32_t t132 = -15;

    t132 = ((x529|(x530!=x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = 753181280;
	uint32_t x536 = 65U;
	volatile int32_t t133 = -66069757;

    t133 = ((x533|(x534!=x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x538 = 1992;
	static uint32_t x539 = UINT32_MAX;
	int64_t x540 = -1LL;
	int32_t t134 = 1040409543;

    t134 = ((x537|(x538!=x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	int64_t x542 = INT64_MIN;
	int16_t x543 = INT16_MIN;
	int32_t t135 = 4233528;

    t135 = ((x541|(x542!=x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -1;
	uint8_t x546 = UINT8_MAX;
	int32_t x547 = -1;
	int32_t t136 = -17978;

    t136 = ((x545|(x546!=x547))!=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MIN;
	int32_t x551 = 22;
	uint64_t x552 = 4799182753884109LLU;
	volatile int32_t t137 = 210007546;

    t137 = ((x549|(x550!=x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	static uint16_t x554 = 1200U;
	static uint8_t x555 = UINT8_MAX;
	int8_t x556 = INT8_MAX;

    t138 = ((x553|(x554!=x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	uint64_t x559 = 156315844LLU;
	int64_t x560 = 17185496369717LL;
	volatile int32_t t139 = 496624;

    t139 = ((x557|(x558!=x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	uint8_t x562 = UINT8_MAX;
	int32_t t140 = -1;

    t140 = ((x561|(x562!=x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 158716U;
	int32_t x566 = INT32_MIN;
	volatile int32_t x567 = -63030901;
	uint16_t x568 = 12784U;
	volatile int32_t t141 = -492;

    t141 = ((x565|(x566!=x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int8_t x570 = 3;
	int8_t x571 = -1;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = 560;

    t142 = ((x569|(x570!=x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = 1;
	uint32_t x574 = UINT32_MAX;
	static int8_t x575 = INT8_MIN;
	static uint64_t x576 = UINT64_MAX;
	volatile int32_t t143 = -6736;

    t143 = ((x573|(x574!=x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 4490LL;
	volatile int16_t x579 = INT16_MAX;
	static int16_t x580 = INT16_MIN;
	int32_t t144 = -23583;

    t144 = ((x577|(x578!=x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	volatile uint8_t x583 = UINT8_MAX;
	int16_t x584 = INT16_MAX;
	volatile int32_t t145 = 160070657;

    t145 = ((x581|(x582!=x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	static volatile int16_t x586 = -1;
	volatile int32_t t146 = 46475241;

    t146 = ((x585|(x586!=x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = 0U;
	int32_t x590 = -1;
	static uint64_t x591 = 50LLU;
	volatile uint32_t x592 = UINT32_MAX;
	volatile int32_t t147 = -1;

    t147 = ((x589|(x590!=x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = -1;
	static uint16_t x594 = UINT16_MAX;
	static volatile int32_t x596 = -16;
	int32_t t148 = 768;

    t148 = ((x593|(x594!=x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = INT16_MIN;
	int32_t x598 = 30;
	int8_t x599 = INT8_MAX;
	int64_t x600 = INT64_MAX;

    t149 = ((x597|(x598!=x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	uint8_t x602 = 0U;
	int64_t x603 = -1LL;
	int8_t x604 = INT8_MAX;
	volatile int32_t t150 = -15026230;

    t150 = ((x601|(x602!=x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	uint8_t x606 = 2U;
	uint8_t x607 = 20U;
	uint64_t x608 = 181166LLU;

    t151 = ((x605|(x606!=x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = INT32_MIN;
	int32_t t152 = 89;

    t152 = ((x609|(x610!=x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MAX;
	int8_t x614 = 40;
	int32_t x615 = INT32_MAX;
	int16_t x616 = INT16_MIN;

    t153 = ((x613|(x614!=x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = 3U;
	int8_t x618 = -1;
	volatile uint64_t x619 = UINT64_MAX;

    t154 = ((x617|(x618!=x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = INT8_MIN;
	static int32_t x623 = 3716463;
	volatile uint8_t x624 = 34U;
	volatile int32_t t155 = 0;

    t155 = ((x621|(x622!=x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	int16_t x626 = INT16_MAX;
	static volatile int8_t x627 = -1;
	static uint64_t x628 = 76225LLU;
	volatile int32_t t156 = 51;

    t156 = ((x625|(x626!=x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 887U;
	uint64_t x630 = 498257323LLU;
	int64_t x631 = INT64_MAX;
	static int32_t t157 = -182;

    t157 = ((x629|(x630!=x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	volatile uint32_t x634 = UINT32_MAX;
	volatile int8_t x635 = INT8_MAX;
	volatile int32_t t158 = 116387715;

    t158 = ((x633|(x634!=x635))!=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x637 = 4325259LLU;
	static int16_t x638 = INT16_MAX;
	static volatile uint64_t x639 = UINT64_MAX;
	int8_t x640 = -1;
	volatile int32_t t159 = -11;

    t159 = ((x637|(x638!=x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	int32_t x642 = -831648111;
	volatile int16_t x644 = INT16_MIN;
	static volatile int32_t t160 = 454458895;

    t160 = ((x641|(x642!=x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = -11786;
	int32_t x646 = INT32_MAX;
	int64_t x648 = 3892LL;
	volatile int32_t t161 = 15;

    t161 = ((x645|(x646!=x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 773U;
	volatile uint8_t x650 = 2U;
	uint16_t x651 = UINT16_MAX;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t162 = -152293;

    t162 = ((x649|(x650!=x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x654 = INT64_MIN;
	uint64_t x655 = 0LLU;

    t163 = ((x653|(x654!=x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x658 = INT64_MAX;
	int32_t x660 = INT32_MAX;

    t164 = ((x657|(x658!=x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 1;
	volatile int32_t x662 = INT32_MIN;
	uint8_t x663 = 0U;
	int32_t x664 = -1;
	static volatile int32_t t165 = 2597622;

    t165 = ((x661|(x662!=x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x667 = UINT8_MAX;
	static volatile int32_t x668 = -236091;
	volatile int32_t t166 = -112428596;

    t166 = ((x665|(x666!=x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = 46;
	uint8_t x670 = UINT8_MAX;
	static uint16_t x671 = UINT16_MAX;
	uint64_t x672 = 17576193LLU;
	volatile int32_t t167 = -697085847;

    t167 = ((x669|(x670!=x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	volatile int8_t x674 = INT8_MIN;

    t168 = ((x673|(x674!=x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x680 = -1;

    t169 = ((x677|(x678!=x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;

    t170 = ((x681|(x682!=x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 26922388144291028LL;
	static int64_t x686 = 1846635429LL;
	volatile int32_t x688 = INT32_MAX;
	static volatile int32_t t171 = 9919;

    t171 = ((x685|(x686!=x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MAX;
	volatile int32_t x690 = -431;
	int32_t t172 = 46;

    t172 = ((x689|(x690!=x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	static volatile uint32_t x696 = 33U;
	volatile int32_t t173 = -1;

    t173 = ((x693|(x694!=x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x697 = -1;
	int16_t x698 = INT16_MIN;
	int32_t x699 = -66503;
	int16_t x700 = 9788;
	int32_t t174 = 358857562;

    t174 = ((x697|(x698!=x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x703 = INT64_MIN;
	int32_t x704 = INT32_MIN;
	volatile int32_t t175 = 109615;

    t175 = ((x701|(x702!=x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 15901U;
	int16_t x707 = -402;
	volatile int32_t t176 = -13479;

    t176 = ((x705|(x706!=x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = -1;
	uint16_t x712 = 8302U;
	int32_t t177 = -1;

    t177 = ((x709|(x710!=x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = -1;
	int64_t x715 = -380204855LL;
	volatile int8_t x716 = INT8_MAX;

    t178 = ((x713|(x714!=x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile int8_t x718 = INT8_MIN;
	int32_t x719 = INT32_MIN;
	int8_t x720 = 1;
	int32_t t179 = 5;

    t179 = ((x717|(x718!=x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x722 = UINT8_MAX;
	uint64_t x723 = 34462LLU;
	int8_t x724 = INT8_MIN;
	volatile int32_t t180 = 96305;

    t180 = ((x721|(x722!=x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	static uint32_t x726 = UINT32_MAX;
	static int32_t x727 = INT32_MIN;
	int32_t x728 = 1624566;
	int32_t t181 = 936857;

    t181 = ((x725|(x726!=x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = -1;
	uint32_t x731 = 61U;
	int16_t x732 = 4134;
	volatile int32_t t182 = -20366230;

    t182 = ((x729|(x730!=x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x733 = 291U;
	int8_t x734 = INT8_MAX;
	int16_t x735 = -1;
	volatile int32_t t183 = 267800;

    t183 = ((x733|(x734!=x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 640456LLU;
	int16_t x739 = -78;
	uint64_t x740 = 1061713LLU;
	int32_t t184 = 25;

    t184 = ((x737|(x738!=x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -1LL;
	int32_t x742 = INT32_MIN;
	int64_t x744 = 10405056577LL;
	volatile int32_t t185 = -7592;

    t185 = ((x741|(x742!=x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	int16_t x746 = -1;
	int16_t x747 = 1;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 3486556;

    t186 = ((x745|(x746!=x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = INT64_MIN;
	int8_t x750 = 4;
	int16_t x751 = INT16_MIN;
	static int8_t x752 = -1;
	volatile int32_t t187 = 566727309;

    t187 = ((x749|(x750!=x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = -26;
	uint64_t x754 = 50591148LLU;
	uint8_t x755 = 1U;
	uint16_t x756 = UINT16_MAX;

    t188 = ((x753|(x754!=x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = 1;
	static uint16_t x758 = 2124U;
	int64_t x759 = -1LL;
	int64_t x760 = -119396691LL;
	volatile int32_t t189 = -202180;

    t189 = ((x757|(x758!=x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -36;
	uint64_t x762 = UINT64_MAX;
	volatile uint16_t x764 = 26U;
	int32_t t190 = 369879105;

    t190 = ((x761|(x762!=x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x765 = UINT64_MAX;
	uint32_t x766 = 30215119U;
	int8_t x767 = INT8_MIN;
	uint32_t x768 = 79825459U;
	static volatile int32_t t191 = 6;

    t191 = ((x765|(x766!=x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 4U;
	static uint16_t x770 = 6U;
	uint64_t x771 = 31118LLU;
	int64_t x772 = -1LL;
	static volatile int32_t t192 = -2922127;

    t192 = ((x769|(x770!=x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    

    t193 = ((x773|(x774!=x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	int16_t x778 = -1;
	volatile uint64_t x779 = 40816702662531LLU;
	int8_t x780 = INT8_MIN;

    t194 = ((x777|(x778!=x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 379641416LLU;
	int8_t x782 = INT8_MIN;
	int32_t x783 = INT32_MIN;
	uint64_t x784 = 60LLU;
	volatile int32_t t195 = 924;

    t195 = ((x781|(x782!=x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int16_t x786 = INT16_MIN;
	static int32_t x787 = INT32_MIN;
	int32_t x788 = -15196349;
	static volatile int32_t t196 = -4481;

    t196 = ((x785|(x786!=x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	uint64_t x790 = 8920LLU;
	int8_t x791 = INT8_MIN;
	static int8_t x792 = INT8_MAX;
	int32_t t197 = 8256672;

    t197 = ((x789|(x790!=x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	int16_t x794 = 6;
	volatile int8_t x795 = -1;
	uint8_t x796 = 112U;

    t198 = ((x793|(x794!=x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 66U;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t199 = -3536723;

    t199 = ((x797|(x798!=x799))!=x800);

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

