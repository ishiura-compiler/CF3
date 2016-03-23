
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

uint32_t x4 = UINT32_MAX;
int64_t x11 = -1LL;
uint16_t x13 = 1809U;
int8_t x18 = -11;
uint64_t x25 = 3384174466103360LLU;
static int16_t x34 = -1;
static volatile int16_t x35 = INT16_MIN;
int64_t x36 = -1LL;
volatile uint16_t x40 = 10U;
static int64_t x43 = INT64_MIN;
volatile int32_t t10 = -22049;
int16_t x54 = -11;
int32_t t12 = 235448860;
int32_t x57 = INT32_MAX;
static int16_t x62 = -1;
uint8_t x66 = 119U;
static int64_t x68 = -1LL;
int32_t t15 = -208262950;
static volatile uint32_t x73 = UINT32_MAX;
uint16_t x82 = UINT16_MAX;
uint16_t x85 = UINT16_MAX;
int16_t x92 = INT16_MAX;
int32_t t21 = -1562;
int64_t x101 = 20LL;
volatile int16_t x103 = 6627;
int32_t t23 = 25826;
static int64_t x112 = -1LL;
int16_t x115 = -2;
volatile int8_t x125 = 0;
int32_t t29 = -1008;
uint64_t x146 = 255882607792746LLU;
static int32_t x147 = -831;
volatile int32_t t33 = -5107;
uint32_t x162 = 0U;
int64_t x163 = 6938478495044922LL;
volatile int32_t t37 = -33936;
static int32_t t38 = 0;
uint32_t x173 = 7U;
static int64_t x176 = INT64_MIN;
int32_t t39 = 57;
int32_t x185 = -1;
int16_t x188 = -1;
volatile uint32_t x189 = 10190756U;
int64_t x190 = INT64_MIN;
volatile int16_t x209 = INT16_MAX;
int32_t t44 = 4732952;
int8_t x221 = -1;
static volatile int64_t x223 = 1695365966271LL;
volatile int64_t x224 = INT64_MIN;
volatile uint32_t x227 = 47706509U;
static int64_t x228 = INT64_MIN;
volatile int32_t t47 = -9;
uint64_t x256 = 1921838390585214024LLU;
volatile int32_t t49 = 8;
volatile int32_t t50 = 506;
uint32_t x264 = 1047624249U;
uint8_t x266 = 1U;
int16_t x267 = INT16_MIN;
volatile int32_t t52 = 60;
int32_t x274 = -218751;
int8_t x283 = INT8_MIN;
static int32_t t55 = 0;
uint32_t x292 = UINT32_MAX;
int16_t x300 = INT16_MIN;
static int32_t t58 = -135;
int32_t x315 = INT32_MIN;
volatile int16_t x316 = INT16_MIN;
int32_t t61 = -455899901;
uint16_t x329 = 693U;
static int32_t t64 = -1962045;
volatile int32_t t66 = -2640214;
int16_t x347 = -1;
uint16_t x355 = 7523U;
uint8_t x358 = UINT8_MAX;
int32_t x360 = -983734341;
volatile int32_t t71 = 12;
int64_t x369 = 12049975374LL;
static int64_t x370 = INT64_MIN;
static int32_t t72 = 13;
volatile uint16_t x373 = UINT16_MAX;
int8_t x374 = -1;
int16_t x382 = -3542;
volatile uint64_t x383 = 56885147LLU;
static volatile int8_t x385 = -1;
uint32_t x387 = 30U;
volatile uint32_t x388 = 1415U;
volatile int32_t t77 = 74670;
static int64_t x415 = INT64_MAX;
uint32_t x423 = 10255U;
volatile int8_t x426 = 10;
static volatile int32_t x428 = 252885544;
int16_t x432 = 4;
volatile int32_t t85 = -1;
int32_t x434 = INT32_MIN;
int8_t x444 = 1;
static volatile int32_t t88 = -9105363;
int64_t x446 = -2273726100955656LL;
volatile int32_t x447 = INT32_MAX;
uint16_t x469 = 35U;
volatile int32_t t96 = 100249;
int32_t x497 = INT32_MAX;
volatile uint8_t x510 = 74U;
int32_t x515 = -1;
int16_t x519 = INT16_MIN;
int16_t x522 = -2404;
static uint64_t x524 = UINT64_MAX;
int32_t t102 = -12188203;
volatile int16_t x548 = 234;
uint64_t x551 = 44271264873LLU;
int32_t x552 = INT32_MAX;
int32_t t106 = 49602017;
volatile int8_t x554 = -1;
volatile uint32_t x562 = 87U;
int8_t x569 = INT8_MIN;
volatile int32_t t112 = 3;
int16_t x582 = INT16_MIN;
uint16_t x583 = 7472U;
int64_t x584 = INT64_MIN;
int16_t x591 = INT16_MAX;
int32_t t115 = 2110785;
volatile int8_t x594 = INT8_MIN;
int16_t x597 = 473;
int16_t x601 = 69;
int64_t x607 = -1LL;
static int32_t t120 = -3559;
uint16_t x615 = 64U;
static uint64_t x631 = 5665125700069772871LLU;
int64_t x641 = INT64_MIN;
int32_t x655 = -24084;
int32_t t130 = 50920382;
int32_t x666 = INT32_MAX;
volatile int8_t x668 = INT8_MAX;
volatile int32_t t133 = 1;
int16_t x673 = INT16_MIN;
static uint32_t x679 = UINT32_MAX;
static uint64_t x680 = 2166LLU;
int32_t x694 = -234275943;
int64_t x698 = 67234865287069441LL;
int64_t x706 = INT64_MIN;
uint64_t x707 = UINT64_MAX;
int16_t x708 = 1;
int32_t t141 = 1;
int8_t x718 = 0;
static int32_t x719 = -5021;
uint8_t x723 = 5U;
int32_t t145 = -133;
int64_t x737 = INT64_MIN;
int16_t x742 = INT16_MIN;
static volatile int32_t t149 = -31;
int32_t t155 = 2448829;
int16_t x785 = INT16_MIN;
int64_t x794 = INT64_MAX;
volatile int32_t t157 = -4892978;
static int16_t x818 = -1;
static uint64_t x823 = 3LLU;
static int16_t x824 = 14203;
static int32_t t164 = 10;
static int16_t x839 = 4728;
int16_t x850 = 1;
int64_t x852 = -21732LL;
volatile uint16_t x854 = 17656U;
volatile int32_t t169 = 558502908;
static int16_t x858 = INT16_MIN;
volatile int16_t x860 = INT16_MIN;
uint16_t x862 = 208U;
int64_t x876 = 20996808129424LL;
uint32_t x878 = UINT32_MAX;
volatile int32_t t176 = 19854116;
int64_t x903 = INT64_MIN;
static int32_t x906 = -1;
uint16_t x907 = UINT16_MAX;
int32_t t180 = 1;
volatile int32_t x916 = INT32_MIN;
volatile int64_t x917 = INT64_MAX;
static int64_t x923 = INT64_MIN;
volatile uint64_t x927 = UINT64_MAX;
uint32_t x929 = UINT32_MAX;
volatile int32_t x931 = INT32_MAX;
uint8_t x938 = UINT8_MAX;
uint8_t x940 = 13U;
int16_t x942 = -1;
int32_t t191 = -714520550;
uint64_t x954 = UINT64_MAX;
uint64_t x959 = 15139289517736364LLU;
uint32_t x962 = 1546945U;
static int8_t x963 = INT8_MIN;
static int16_t x985 = -20;


void f0(void) {
    	uint64_t x1 = 0LLU;
	static int16_t x2 = -1;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 50;

    t0 = ((x1-(x2-x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	static uint8_t x6 = 16U;
	int16_t x7 = INT16_MAX;
	volatile uint8_t x8 = 0U;
	static int32_t t1 = 10170;

    t1 = ((x5-(x6-x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	static int32_t x10 = -1;
	static volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 304433044;

    t2 = ((x9-(x10-x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = UINT32_MAX;
	int16_t x15 = 111;
	uint32_t x16 = 10524U;
	static int32_t t3 = -1044253;

    t3 = ((x13-(x14-x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = 50744046598779LL;
	static volatile uint64_t x19 = 8444142LLU;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -229;

    t4 = ((x17-(x18-x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1262739913U;
	int32_t x22 = -483;
	static volatile int16_t x23 = INT16_MAX;
	static int64_t x24 = -293352301387LL;
	int32_t t5 = -117261;

    t5 = ((x21-(x22-x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -1LL;
	static int8_t x27 = -1;
	static int8_t x28 = -1;
	static int32_t t6 = -138710511;

    t6 = ((x25-(x26-x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int32_t x30 = -1;
	uint64_t x31 = 73291260099176323LLU;
	uint64_t x32 = 91LLU;
	int32_t t7 = 8352731;

    t7 = ((x29-(x30-x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	int32_t t8 = -30;

    t8 = ((x33-(x34-x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 544U;
	int32_t x38 = INT32_MIN;
	uint64_t x39 = 3808032965LLU;
	volatile int32_t t9 = 1;

    t9 = ((x37-(x38-x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = UINT64_MAX;
	static int32_t x42 = INT32_MIN;
	int8_t x44 = INT8_MIN;

    t10 = ((x41-(x42-x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x49 = INT16_MIN;
	int64_t x50 = -661153416769LL;
	int32_t x51 = -1;
	volatile int64_t x52 = INT64_MAX;
	int32_t t11 = 0;

    t11 = ((x49-(x50-x51))!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1LL;
	volatile uint8_t x55 = 14U;
	static int8_t x56 = INT8_MIN;

    t12 = ((x53-(x54-x55))!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = -1;
	static uint32_t x59 = 1710U;
	int16_t x60 = 3;
	static int32_t t13 = 383;

    t13 = ((x57-(x58-x59))!=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	static int64_t x63 = -1529166421074645031LL;
	volatile uint8_t x64 = UINT8_MAX;
	static int32_t t14 = 451910;

    t14 = ((x61-(x62-x63))!=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MAX;
	int8_t x67 = INT8_MIN;

    t15 = ((x65-(x66-x67))!=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x69 = 147187LLU;
	volatile int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	volatile int32_t t16 = -7;

    t16 = ((x69-(x70-x71))!=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = UINT16_MAX;
	uint64_t x75 = 10LLU;
	static int64_t x76 = -2404950850LL;
	int32_t t17 = 7753;

    t17 = ((x73-(x74-x75))!=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 256380262U;
	volatile int32_t x78 = -2;
	uint8_t x79 = 79U;
	int32_t x80 = -797917454;
	int32_t t18 = 138712157;

    t18 = ((x77-(x78-x79))!=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = UINT8_MAX;
	int16_t x83 = -1;
	int8_t x84 = INT8_MIN;
	volatile int32_t t19 = 51782;

    t19 = ((x81-(x82-x83))!=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x86 = INT8_MIN;
	static int8_t x87 = INT8_MIN;
	static int64_t x88 = -850860LL;
	int32_t t20 = 117;

    t20 = ((x85-(x86-x87))!=x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 67U;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;

    t21 = ((x89-(x90-x91))!=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	uint16_t x100 = 107U;
	static int32_t t22 = -4867;

    t22 = ((x97-(x98-x99))!=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x102 = 838U;
	int16_t x104 = -1;

    t23 = ((x101-(x102-x103))!=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 6;
	uint64_t x106 = 7524630LLU;
	volatile int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t24 = -2425;

    t24 = ((x105-(x106-x107))!=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	static uint32_t x111 = 36146U;
	static volatile int32_t t25 = -53387;

    t25 = ((x109-(x110-x111))!=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x113 = INT8_MIN;
	static uint16_t x114 = UINT16_MAX;
	int32_t x116 = INT32_MIN;
	static int32_t t26 = -955;

    t26 = ((x113-(x114-x115))!=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	int32_t x118 = 3284;
	int16_t x119 = INT16_MAX;
	static int8_t x120 = 4;
	static volatile int32_t t27 = 2286;

    t27 = ((x117-(x118-x119))!=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x126 = -1;
	static volatile uint64_t x127 = 10827030606LLU;
	int32_t x128 = -1;
	volatile int32_t t28 = -1465552;

    t28 = ((x125-(x126-x127))!=x128);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x129 = 5U;
	uint16_t x130 = 5U;
	static volatile uint16_t x131 = 1U;
	int64_t x132 = -84529LL;

    t29 = ((x129-(x130-x131))!=x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -1;
	uint32_t x134 = 664589518U;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 6376U;
	int32_t t30 = 691726578;

    t30 = ((x133-(x134-x135))!=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x141 = 1;
	int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MAX;
	static uint8_t x144 = 52U;
	volatile int32_t t31 = -3829;

    t31 = ((x141-(x142-x143))!=x144);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x145 = INT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t32 = -5;

    t32 = ((x145-(x146-x147))!=x148);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x149 = 669961578610LLU;
	int32_t x150 = 305;
	uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MIN;

    t33 = ((x149-(x150-x151))!=x152);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = 8705LL;
	int8_t x154 = -1;
	volatile uint32_t x155 = UINT32_MAX;
	volatile uint64_t x156 = UINT64_MAX;
	volatile int32_t t34 = -24;

    t34 = ((x153-(x154-x155))!=x156);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 12708U;
	int16_t x160 = INT16_MAX;
	int32_t t35 = -3047;

    t35 = ((x157-(x158-x159))!=x160);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x161 = 35;
	uint64_t x164 = 465206518888370LLU;
	static volatile int32_t t36 = -101789097;

    t36 = ((x161-(x162-x163))!=x164);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = INT16_MIN;
	int8_t x166 = -15;
	uint16_t x167 = 3U;
	uint32_t x168 = 57556U;

    t37 = ((x165-(x166-x167))!=x168);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = -3668034LL;
	volatile int8_t x170 = -1;
	volatile uint8_t x171 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;

    t38 = ((x169-(x170-x171))!=x172);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x174 = INT32_MIN;
	uint32_t x175 = UINT32_MAX;

    t39 = ((x173-(x174-x175))!=x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x177 = 3377U;
	int16_t x178 = INT16_MIN;
	int64_t x179 = 342083055492673LL;
	static int64_t x180 = -1LL;
	volatile int32_t t40 = 1192056;

    t40 = ((x177-(x178-x179))!=x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x186 = UINT32_MAX;
	int8_t x187 = INT8_MIN;
	volatile int32_t t41 = -248;

    t41 = ((x185-(x186-x187))!=x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MAX;
	static volatile int32_t t42 = 335553133;

    t42 = ((x189-(x190-x191))!=x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x205 = 4U;
	int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MAX;
	volatile int32_t t43 = -124;

    t43 = ((x205-(x206-x207))!=x208);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x210 = 181;
	uint64_t x211 = 55940LLU;
	uint16_t x212 = UINT16_MAX;

    t44 = ((x209-(x210-x211))!=x212);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = INT8_MIN;
	uint16_t x214 = 42U;
	uint8_t x215 = 3U;
	int64_t x216 = 239524527526LL;
	int32_t t45 = 1674;

    t45 = ((x213-(x214-x215))!=x216);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x222 = 39U;
	int32_t t46 = 177940137;

    t46 = ((x221-(x222-x223))!=x224);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x225 = INT16_MAX;
	uint16_t x226 = UINT16_MAX;

    t47 = ((x225-(x226-x227))!=x228);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x229 = INT32_MIN;
	uint64_t x230 = 6LLU;
	int16_t x231 = -1;
	volatile int64_t x232 = INT64_MAX;
	int32_t t48 = 6;

    t48 = ((x229-(x230-x231))!=x232);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x253 = 1765284;
	uint32_t x254 = UINT32_MAX;
	uint32_t x255 = UINT32_MAX;

    t49 = ((x253-(x254-x255))!=x256);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x257 = UINT16_MAX;
	uint32_t x258 = 17U;
	int64_t x259 = 6220572473023579LL;
	static volatile int64_t x260 = INT64_MIN;

    t50 = ((x257-(x258-x259))!=x260);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	int64_t x262 = -1LL;
	int64_t x263 = 53500515LL;
	static int32_t t51 = 33092;

    t51 = ((x261-(x262-x263))!=x264);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x265 = UINT32_MAX;
	static uint16_t x268 = 11U;

    t52 = ((x265-(x266-x267))!=x268);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x273 = UINT16_MAX;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint16_t x276 = 196U;
	volatile int32_t t53 = -1175;

    t53 = ((x273-(x274-x275))!=x276);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x277 = 18386789;
	uint8_t x278 = 11U;
	uint64_t x279 = UINT64_MAX;
	static volatile int32_t x280 = INT32_MIN;
	static volatile int32_t t54 = -1956208;

    t54 = ((x277-(x278-x279))!=x280);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x281 = INT8_MIN;
	uint32_t x282 = 68572062U;
	int32_t x284 = INT32_MIN;

    t55 = ((x281-(x282-x283))!=x284);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x285 = 140507;
	int16_t x286 = 40;
	int32_t x287 = -1;
	static int64_t x288 = INT64_MIN;
	static int32_t t56 = -32881925;

    t56 = ((x285-(x286-x287))!=x288);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x289 = UINT16_MAX;
	int16_t x290 = -1;
	int16_t x291 = -1;
	static volatile int32_t t57 = -13613;

    t57 = ((x289-(x290-x291))!=x292);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MIN;
	static uint64_t x299 = UINT64_MAX;

    t58 = ((x297-(x298-x299))!=x300);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x309 = 3;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = 8;
	int64_t x312 = INT64_MIN;
	int32_t t59 = -11643623;

    t59 = ((x309-(x310-x311))!=x312);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x313 = 1735100593412077LL;
	int16_t x314 = -30;
	volatile int32_t t60 = -103549994;

    t60 = ((x313-(x314-x315))!=x316);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x317 = -12;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = 6146U;

    t61 = ((x317-(x318-x319))!=x320);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x321 = -1;
	static volatile int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	static int16_t x324 = -1;
	volatile int32_t t62 = 344434050;

    t62 = ((x321-(x322-x323))!=x324);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x325 = INT16_MIN;
	int64_t x326 = -4048LL;
	int32_t x327 = 0;
	int16_t x328 = INT16_MIN;
	int32_t t63 = -291;

    t63 = ((x325-(x326-x327))!=x328);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x330 = -14802LL;
	int8_t x331 = 5;
	int32_t x332 = -1;

    t64 = ((x329-(x330-x331))!=x332);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x333 = 99962826U;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	static int16_t x336 = -1;
	int32_t t65 = 17;

    t65 = ((x333-(x334-x335))!=x336);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x337 = 80U;
	volatile int32_t x338 = 3895;
	int8_t x339 = 1;
	int64_t x340 = 123LL;

    t66 = ((x337-(x338-x339))!=x340);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x345 = 9LLU;
	static int16_t x346 = 107;
	volatile int8_t x348 = INT8_MIN;
	int32_t t67 = 7949934;

    t67 = ((x345-(x346-x347))!=x348);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x349 = -1LL;
	static volatile uint32_t x350 = 7117U;
	volatile int64_t x351 = -1LL;
	uint8_t x352 = 4U;
	volatile int32_t t68 = 59152;

    t68 = ((x349-(x350-x351))!=x352);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	volatile uint32_t x356 = 10315U;
	static int32_t t69 = -3889751;

    t69 = ((x353-(x354-x355))!=x356);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x357 = -490;
	int16_t x359 = -3168;
	static volatile int32_t t70 = -59653;

    t70 = ((x357-(x358-x359))!=x360);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x365 = 2960U;
	int8_t x366 = -1;
	int64_t x367 = INT64_MIN;
	static int64_t x368 = INT64_MIN;

    t71 = ((x365-(x366-x367))!=x368);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;

    t72 = ((x369-(x370-x371))!=x372);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x375 = 2868LL;
	static int64_t x376 = INT64_MIN;
	static int32_t t73 = -1390324;

    t73 = ((x373-(x374-x375))!=x376);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x377 = 6;
	static uint8_t x378 = UINT8_MAX;
	static uint32_t x379 = UINT32_MAX;
	static int32_t x380 = INT32_MAX;
	int32_t t74 = -7748;

    t74 = ((x377-(x378-x379))!=x380);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x381 = UINT32_MAX;
	uint8_t x384 = 6U;
	int32_t t75 = -8969130;

    t75 = ((x381-(x382-x383))!=x384);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x386 = -136405981872129698LL;
	int32_t t76 = 318975636;

    t76 = ((x385-(x386-x387))!=x388);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	int64_t x391 = 61204192909LL;
	static int16_t x392 = INT16_MAX;

    t77 = ((x389-(x390-x391))!=x392);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x393 = -1;
	int8_t x394 = 13;
	int64_t x395 = 657503085121LL;
	int64_t x396 = -115161214LL;
	volatile int32_t t78 = 1279737;

    t78 = ((x393-(x394-x395))!=x396);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x405 = INT64_MIN;
	volatile int8_t x406 = -37;
	volatile int16_t x407 = 1;
	static int16_t x408 = -2873;
	static int32_t t79 = 20526;

    t79 = ((x405-(x406-x407))!=x408);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x409 = 9106U;
	uint64_t x410 = 1033000330424LLU;
	int32_t x411 = INT32_MAX;
	static int16_t x412 = -1;
	int32_t t80 = 77021;

    t80 = ((x409-(x410-x411))!=x412);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x413 = -23;
	uint32_t x414 = 58U;
	static int16_t x416 = -14;
	int32_t t81 = -569655;

    t81 = ((x413-(x414-x415))!=x416);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	volatile uint8_t x418 = 2U;
	volatile uint8_t x419 = UINT8_MAX;
	int32_t x420 = -197;
	static volatile int32_t t82 = 16051046;

    t82 = ((x417-(x418-x419))!=x420);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x421 = -1;
	int16_t x422 = INT16_MAX;
	int32_t x424 = -5150;
	static int32_t t83 = 2;

    t83 = ((x421-(x422-x423))!=x424);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x425 = 3LL;
	int8_t x427 = -4;
	int32_t t84 = -145842;

    t84 = ((x425-(x426-x427))!=x428);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x429 = 357713LLU;
	uint8_t x430 = UINT8_MAX;
	volatile uint16_t x431 = 4353U;

    t85 = ((x429-(x430-x431))!=x432);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x433 = -1LL;
	int8_t x435 = -1;
	int32_t x436 = INT32_MAX;
	int32_t t86 = -1531;

    t86 = ((x433-(x434-x435))!=x436);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x437 = INT16_MAX;
	uint32_t x438 = 25299841U;
	int16_t x439 = 1;
	int8_t x440 = 0;
	static int32_t t87 = 69;

    t87 = ((x437-(x438-x439))!=x440);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x441 = UINT32_MAX;
	static volatile int64_t x442 = -1LL;
	int32_t x443 = INT32_MAX;

    t88 = ((x441-(x442-x443))!=x444);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x445 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t89 = 44067;

    t89 = ((x445-(x446-x447))!=x448);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x457 = INT32_MAX;
	int16_t x458 = INT16_MAX;
	int64_t x459 = -1LL;
	volatile uint64_t x460 = 91198133241LLU;
	int32_t t90 = 1043609933;

    t90 = ((x457-(x458-x459))!=x460);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x461 = INT64_MIN;
	uint64_t x462 = UINT64_MAX;
	uint16_t x463 = 1921U;
	int32_t x464 = INT32_MIN;
	volatile int32_t t91 = -81;

    t91 = ((x461-(x462-x463))!=x464);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MAX;
	static uint16_t x467 = 4U;
	volatile int16_t x468 = INT16_MAX;
	int32_t t92 = -877;

    t92 = ((x465-(x466-x467))!=x468);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x470 = 118424520056253LL;
	uint16_t x471 = 2018U;
	static volatile uint8_t x472 = 19U;
	static int32_t t93 = -711;

    t93 = ((x469-(x470-x471))!=x472);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x473 = 268060624;
	volatile int16_t x474 = -1;
	static int16_t x475 = -1;
	int32_t x476 = -1;
	int32_t t94 = 268;

    t94 = ((x473-(x474-x475))!=x476);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x481 = 44373LLU;
	volatile int64_t x482 = 134LL;
	int16_t x483 = -1;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t95 = 3;

    t95 = ((x481-(x482-x483))!=x484);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x493 = 708476510U;
	int8_t x494 = 1;
	uint16_t x495 = UINT16_MAX;
	static int32_t x496 = -1;

    t96 = ((x493-(x494-x495))!=x496);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x498 = INT8_MIN;
	int16_t x499 = -4047;
	static int8_t x500 = -2;
	volatile int32_t t97 = -274;

    t97 = ((x497-(x498-x499))!=x500);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x509 = INT64_MAX;
	uint8_t x511 = 7U;
	static uint32_t x512 = 1028530U;
	int32_t t98 = -3291954;

    t98 = ((x509-(x510-x511))!=x512);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x513 = INT16_MAX;
	uint32_t x514 = UINT32_MAX;
	int32_t x516 = -1;
	volatile int32_t t99 = -1540;

    t99 = ((x513-(x514-x515))!=x516);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x517 = 3210U;
	int32_t x518 = -1;
	uint16_t x520 = UINT16_MAX;
	int32_t t100 = -39516;

    t100 = ((x517-(x518-x519))!=x520);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x521 = INT8_MIN;
	static int64_t x523 = 61205522LL;
	static int32_t t101 = -12768798;

    t101 = ((x521-(x522-x523))!=x524);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x525 = 87LL;
	int64_t x526 = 3LL;
	uint64_t x527 = UINT64_MAX;
	static int8_t x528 = INT8_MIN;

    t102 = ((x525-(x526-x527))!=x528);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x529 = 16824458875401LL;
	int8_t x530 = INT8_MIN;
	uint32_t x531 = UINT32_MAX;
	int16_t x532 = 693;
	int32_t t103 = -615020224;

    t103 = ((x529-(x530-x531))!=x532);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x541 = INT16_MAX;
	uint16_t x542 = 9183U;
	static uint16_t x543 = 3U;
	static uint8_t x544 = 1U;
	volatile int32_t t104 = 443441565;

    t104 = ((x541-(x542-x543))!=x544);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x545 = INT8_MAX;
	volatile uint8_t x546 = 0U;
	static volatile int8_t x547 = INT8_MIN;
	int32_t t105 = -592248;

    t105 = ((x545-(x546-x547))!=x548);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x549 = 1416U;
	uint64_t x550 = 7419546683154966858LLU;

    t106 = ((x549-(x550-x551))!=x552);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x553 = INT16_MIN;
	volatile uint16_t x555 = UINT16_MAX;
	int16_t x556 = 65;
	int32_t t107 = 14;

    t107 = ((x553-(x554-x555))!=x556);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x557 = UINT64_MAX;
	int32_t x558 = -1;
	int32_t x559 = 44;
	volatile uint8_t x560 = 99U;
	static volatile int32_t t108 = -4184;

    t108 = ((x557-(x558-x559))!=x560);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x561 = INT16_MIN;
	volatile int16_t x563 = INT16_MIN;
	volatile int8_t x564 = -1;
	int32_t t109 = -1138;

    t109 = ((x561-(x562-x563))!=x564);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x565 = -149270;
	int8_t x566 = 6;
	static int8_t x567 = INT8_MIN;
	int32_t x568 = 1521021;
	int32_t t110 = 1;

    t110 = ((x565-(x566-x567))!=x568);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x570 = 1U;
	volatile uint8_t x571 = 0U;
	int16_t x572 = INT16_MAX;
	int32_t t111 = -239;

    t111 = ((x569-(x570-x571))!=x572);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x573 = 3116;
	int16_t x574 = -1;
	int64_t x575 = 1LL;
	static int64_t x576 = INT64_MIN;

    t112 = ((x573-(x574-x575))!=x576);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x577 = INT64_MIN;
	int64_t x578 = INT64_MIN;
	static uint64_t x579 = 6584981806234419LLU;
	int16_t x580 = -1;
	int32_t t113 = -6547;

    t113 = ((x577-(x578-x579))!=x580);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x581 = UINT32_MAX;
	int32_t t114 = -1;

    t114 = ((x581-(x582-x583))!=x584);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x589 = -1LL;
	static uint16_t x590 = 11053U;
	volatile uint16_t x592 = 0U;

    t115 = ((x589-(x590-x591))!=x592);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x593 = UINT32_MAX;
	uint64_t x595 = 8884315727LLU;
	uint8_t x596 = 3U;
	int32_t t116 = 12344066;

    t116 = ((x593-(x594-x595))!=x596);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x598 = INT32_MIN;
	int64_t x599 = 63LL;
	static int64_t x600 = 1161606LL;
	static volatile int32_t t117 = -225551477;

    t117 = ((x597-(x598-x599))!=x600);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x602 = UINT32_MAX;
	uint64_t x603 = 1581493LLU;
	int64_t x604 = INT64_MAX;
	int32_t t118 = -12943;

    t118 = ((x601-(x602-x603))!=x604);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x605 = -1LL;
	int16_t x606 = INT16_MAX;
	int8_t x608 = -33;
	volatile int32_t t119 = 150069029;

    t119 = ((x605-(x606-x607))!=x608);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x609 = -12;
	int32_t x610 = 2721835;
	uint8_t x611 = 2U;
	int8_t x612 = 0;

    t120 = ((x609-(x610-x611))!=x612);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x613 = -101060561;
	volatile uint16_t x614 = 88U;
	int32_t x616 = INT32_MIN;
	volatile int32_t t121 = -85132;

    t121 = ((x613-(x614-x615))!=x616);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x617 = 7286LLU;
	int16_t x618 = INT16_MIN;
	uint16_t x619 = UINT16_MAX;
	uint16_t x620 = 16586U;
	static volatile int32_t t122 = -169630671;

    t122 = ((x617-(x618-x619))!=x620);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x621 = 6;
	uint16_t x622 = 79U;
	int16_t x623 = INT16_MAX;
	int64_t x624 = -50LL;
	int32_t t123 = 26975;

    t123 = ((x621-(x622-x623))!=x624);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x625 = 2380U;
	static int32_t x626 = -88;
	uint32_t x627 = UINT32_MAX;
	int64_t x628 = INT64_MIN;
	int32_t t124 = -430552723;

    t124 = ((x625-(x626-x627))!=x628);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x629 = 16;
	uint64_t x630 = 1199962118707LLU;
	volatile int8_t x632 = INT8_MIN;
	int32_t t125 = 1197949;

    t125 = ((x629-(x630-x631))!=x632);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x633 = -1LL;
	static volatile int8_t x634 = INT8_MIN;
	int8_t x635 = -1;
	uint16_t x636 = UINT16_MAX;
	int32_t t126 = -2;

    t126 = ((x633-(x634-x635))!=x636);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x642 = 2026U;
	uint64_t x643 = 3263610LLU;
	uint16_t x644 = 7U;
	static volatile int32_t t127 = -141013029;

    t127 = ((x641-(x642-x643))!=x644);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x645 = INT8_MIN;
	uint64_t x646 = 112993602LLU;
	volatile int64_t x647 = -7882LL;
	uint16_t x648 = 905U;
	volatile int32_t t128 = -478580;

    t128 = ((x645-(x646-x647))!=x648);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x649 = INT8_MIN;
	uint16_t x650 = 2U;
	static uint16_t x651 = UINT16_MAX;
	volatile int8_t x652 = 32;
	int32_t t129 = -5193859;

    t129 = ((x649-(x650-x651))!=x652);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x653 = 15442840LLU;
	int32_t x654 = INT32_MIN;
	int8_t x656 = -1;

    t130 = ((x653-(x654-x655))!=x656);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x657 = 49LLU;
	int16_t x658 = 161;
	static volatile int32_t x659 = INT32_MAX;
	int64_t x660 = INT64_MIN;
	int32_t t131 = 806574;

    t131 = ((x657-(x658-x659))!=x660);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x661 = INT8_MIN;
	int32_t x662 = INT32_MIN;
	volatile int8_t x663 = INT8_MIN;
	volatile int16_t x664 = -1;
	int32_t t132 = 1;

    t132 = ((x661-(x662-x663))!=x664);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x665 = -1;
	int8_t x667 = 1;

    t133 = ((x665-(x666-x667))!=x668);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x674 = INT8_MAX;
	int64_t x675 = -626963514199564836LL;
	uint64_t x676 = 25391533266776LLU;
	volatile int32_t t134 = 943719;

    t134 = ((x673-(x674-x675))!=x676);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x677 = INT16_MIN;
	volatile int64_t x678 = INT64_MAX;
	int32_t t135 = 0;

    t135 = ((x677-(x678-x679))!=x680);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x681 = INT32_MAX;
	int32_t x682 = INT32_MAX;
	int64_t x683 = INT64_MAX;
	uint64_t x684 = 0LLU;
	volatile int32_t t136 = 9;

    t136 = ((x681-(x682-x683))!=x684);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x685 = UINT64_MAX;
	volatile uint64_t x686 = 68279401871330LLU;
	uint8_t x687 = 5U;
	int64_t x688 = -1LL;
	int32_t t137 = -206820563;

    t137 = ((x685-(x686-x687))!=x688);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x693 = 45U;
	volatile int32_t x695 = -1;
	int16_t x696 = -1;
	int32_t t138 = 4;

    t138 = ((x693-(x694-x695))!=x696);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x697 = 47U;
	uint16_t x699 = 0U;
	volatile int8_t x700 = INT8_MIN;
	volatile int32_t t139 = -23349;

    t139 = ((x697-(x698-x699))!=x700);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x701 = -3166460966269000LL;
	uint16_t x702 = UINT16_MAX;
	static int16_t x703 = -1;
	static int64_t x704 = INT64_MIN;
	static volatile int32_t t140 = 41419963;

    t140 = ((x701-(x702-x703))!=x704);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x705 = -1;

    t141 = ((x705-(x706-x707))!=x708);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x709 = 0;
	int32_t x710 = 839094737;
	int16_t x711 = INT16_MAX;
	volatile uint32_t x712 = 176163756U;
	volatile int32_t t142 = -3696708;

    t142 = ((x709-(x710-x711))!=x712);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x713 = -1;
	int64_t x714 = INT64_MIN;
	int32_t x715 = INT32_MIN;
	static volatile int16_t x716 = INT16_MIN;
	volatile int32_t t143 = 1676;

    t143 = ((x713-(x714-x715))!=x716);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x717 = INT8_MIN;
	uint8_t x720 = 19U;
	volatile int32_t t144 = 8327515;

    t144 = ((x717-(x718-x719))!=x720);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x721 = -1;
	volatile int64_t x722 = 2LL;
	static uint64_t x724 = UINT64_MAX;

    t145 = ((x721-(x722-x723))!=x724);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x725 = 747387282899092LLU;
	int8_t x726 = INT8_MIN;
	static int64_t x727 = 280LL;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t146 = -39;

    t146 = ((x725-(x726-x727))!=x728);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x738 = 2;
	uint16_t x739 = UINT16_MAX;
	int8_t x740 = -1;
	int32_t t147 = -20460;

    t147 = ((x737-(x738-x739))!=x740);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int16_t x743 = -1;
	static uint8_t x744 = 2U;
	int32_t t148 = -23176;

    t148 = ((x741-(x742-x743))!=x744);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x753 = 0U;
	volatile uint32_t x754 = UINT32_MAX;
	volatile uint16_t x755 = UINT16_MAX;
	volatile uint8_t x756 = UINT8_MAX;

    t149 = ((x753-(x754-x755))!=x756);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x757 = 58465LL;
	int8_t x758 = INT8_MAX;
	int8_t x759 = 5;
	static volatile int16_t x760 = 1407;
	volatile int32_t t150 = 2054238;

    t150 = ((x757-(x758-x759))!=x760);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x761 = INT16_MIN;
	uint32_t x762 = 239629084U;
	static int32_t x763 = -1;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t151 = 125328;

    t151 = ((x761-(x762-x763))!=x764);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x765 = -1;
	volatile int32_t x766 = INT32_MAX;
	volatile uint8_t x767 = 2U;
	uint32_t x768 = UINT32_MAX;
	volatile int32_t t152 = 1775;

    t152 = ((x765-(x766-x767))!=x768);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = -27;
	uint16_t x771 = 14390U;
	uint32_t x772 = 1U;
	volatile int32_t t153 = -252;

    t153 = ((x769-(x770-x771))!=x772);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x773 = 48439714U;
	static int16_t x774 = -1;
	volatile int8_t x775 = 0;
	int32_t x776 = -1;
	static volatile int32_t t154 = 7;

    t154 = ((x773-(x774-x775))!=x776);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x781 = INT8_MAX;
	static uint16_t x782 = 9U;
	uint8_t x783 = UINT8_MAX;
	volatile uint32_t x784 = 124U;

    t155 = ((x781-(x782-x783))!=x784);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x786 = INT8_MIN;
	volatile int32_t x787 = 67635963;
	uint16_t x788 = 96U;
	volatile int32_t t156 = 1546;

    t156 = ((x785-(x786-x787))!=x788);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x795 = INT64_MAX;
	static volatile int64_t x796 = INT64_MIN;

    t157 = ((x793-(x794-x795))!=x796);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x805 = 7588542;
	uint64_t x806 = UINT64_MAX;
	int64_t x807 = INT64_MIN;
	volatile int8_t x808 = INT8_MIN;
	int32_t t158 = -112134875;

    t158 = ((x805-(x806-x807))!=x808);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x809 = -1;
	int64_t x810 = INT64_MAX;
	volatile int32_t x811 = INT32_MAX;
	volatile uint64_t x812 = 230281969302073LLU;
	volatile int32_t t159 = 10832163;

    t159 = ((x809-(x810-x811))!=x812);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x813 = INT64_MAX;
	volatile uint64_t x814 = UINT64_MAX;
	uint32_t x815 = 129991403U;
	static uint32_t x816 = 504U;
	int32_t t160 = 0;

    t160 = ((x813-(x814-x815))!=x816);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x817 = -4;
	int8_t x819 = -1;
	uint16_t x820 = UINT16_MAX;
	static volatile int32_t t161 = 1;

    t161 = ((x817-(x818-x819))!=x820);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x822 = INT32_MAX;
	volatile int32_t t162 = 1138091;

    t162 = ((x821-(x822-x823))!=x824);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x825 = -1;
	int8_t x826 = INT8_MIN;
	int64_t x827 = 241LL;
	uint8_t x828 = 91U;
	volatile int32_t t163 = 315850;

    t163 = ((x825-(x826-x827))!=x828);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x829 = INT8_MIN;
	uint16_t x830 = UINT16_MAX;
	int32_t x831 = -1;
	int16_t x832 = -15;

    t164 = ((x829-(x830-x831))!=x832);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x837 = -1;
	uint8_t x838 = 63U;
	int32_t x840 = -1;
	int32_t t165 = 22548;

    t165 = ((x837-(x838-x839))!=x840);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x841 = 8U;
	volatile int32_t x842 = INT32_MIN;
	uint64_t x843 = 14LLU;
	uint64_t x844 = 2034959881166258LLU;
	int32_t t166 = 2195;

    t166 = ((x841-(x842-x843))!=x844);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x845 = -1;
	volatile uint32_t x846 = UINT32_MAX;
	int8_t x847 = 1;
	int32_t x848 = INT32_MIN;
	int32_t t167 = 351135995;

    t167 = ((x845-(x846-x847))!=x848);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x849 = 5686U;
	static uint16_t x851 = UINT16_MAX;
	volatile int32_t t168 = -53363479;

    t168 = ((x849-(x850-x851))!=x852);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x853 = -1;
	volatile int32_t x855 = 43650731;
	uint64_t x856 = UINT64_MAX;

    t169 = ((x853-(x854-x855))!=x856);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x857 = INT16_MAX;
	volatile uint16_t x859 = 7U;
	int32_t t170 = 0;

    t170 = ((x857-(x858-x859))!=x860);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x861 = INT16_MAX;
	volatile uint64_t x863 = 1595281145LLU;
	uint32_t x864 = 1000U;
	static volatile int32_t t171 = 13833;

    t171 = ((x861-(x862-x863))!=x864);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x869 = -154;
	int8_t x870 = INT8_MAX;
	volatile uint8_t x871 = UINT8_MAX;
	int64_t x872 = INT64_MIN;
	int32_t t172 = -3796;

    t172 = ((x869-(x870-x871))!=x872);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x873 = INT16_MIN;
	static int8_t x874 = INT8_MIN;
	int32_t x875 = -38;
	volatile int32_t t173 = -12513374;

    t173 = ((x873-(x874-x875))!=x876);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x877 = INT8_MIN;
	static int32_t x879 = -823;
	int8_t x880 = -8;
	volatile int32_t t174 = -346975;

    t174 = ((x877-(x878-x879))!=x880);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x885 = -1;
	uint8_t x886 = 6U;
	int64_t x887 = INT64_MAX;
	volatile uint8_t x888 = 27U;
	static volatile int32_t t175 = 0;

    t175 = ((x885-(x886-x887))!=x888);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x889 = INT32_MAX;
	static volatile int64_t x890 = -1LL;
	int32_t x891 = INT32_MIN;
	int8_t x892 = INT8_MAX;

    t176 = ((x889-(x890-x891))!=x892);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x893 = -790667956308LL;
	uint64_t x894 = 4537LLU;
	uint32_t x895 = UINT32_MAX;
	uint64_t x896 = 3971705279798053431LLU;
	int32_t t177 = 3;

    t177 = ((x893-(x894-x895))!=x896);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x897 = INT8_MIN;
	int64_t x898 = -1LL;
	int32_t x899 = -16211898;
	volatile uint32_t x900 = 22941607U;
	int32_t t178 = -25838;

    t178 = ((x897-(x898-x899))!=x900);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x901 = INT16_MIN;
	uint64_t x902 = UINT64_MAX;
	int8_t x904 = -1;
	int32_t t179 = -1;

    t179 = ((x901-(x902-x903))!=x904);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x905 = INT8_MAX;
	int32_t x908 = INT32_MIN;

    t180 = ((x905-(x906-x907))!=x908);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x909 = 1008487555U;
	int64_t x910 = INT64_MAX;
	int8_t x911 = INT8_MAX;
	int32_t x912 = -6871964;
	int32_t t181 = 0;

    t181 = ((x909-(x910-x911))!=x912);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x913 = 402U;
	int8_t x914 = -15;
	uint8_t x915 = UINT8_MAX;
	int32_t t182 = -86751522;

    t182 = ((x913-(x914-x915))!=x916);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x918 = -132LL;
	int16_t x919 = -267;
	int16_t x920 = INT16_MAX;
	static volatile int32_t t183 = -3677737;

    t183 = ((x917-(x918-x919))!=x920);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x921 = -1;
	static int8_t x922 = INT8_MIN;
	uint16_t x924 = UINT16_MAX;
	int32_t t184 = -164214731;

    t184 = ((x921-(x922-x923))!=x924);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x925 = INT32_MIN;
	volatile int64_t x926 = INT64_MIN;
	static int16_t x928 = 16;
	volatile int32_t t185 = -12806;

    t185 = ((x925-(x926-x927))!=x928);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x930 = -1LL;
	int32_t x932 = INT32_MIN;
	volatile int32_t t186 = -6563532;

    t186 = ((x929-(x930-x931))!=x932);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x933 = INT64_MIN;
	int32_t x934 = INT32_MIN;
	int16_t x935 = INT16_MIN;
	int64_t x936 = -248512831LL;
	int32_t t187 = 982;

    t187 = ((x933-(x934-x935))!=x936);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x937 = UINT16_MAX;
	volatile int16_t x939 = 52;
	int32_t t188 = -6766;

    t188 = ((x937-(x938-x939))!=x940);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x941 = INT8_MIN;
	static int32_t x943 = 529566397;
	static int8_t x944 = -1;
	int32_t t189 = -10;

    t189 = ((x941-(x942-x943))!=x944);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x945 = INT16_MIN;
	int32_t x946 = INT32_MIN;
	static uint64_t x947 = UINT64_MAX;
	static volatile uint8_t x948 = UINT8_MAX;
	static volatile int32_t t190 = -13;

    t190 = ((x945-(x946-x947))!=x948);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x949 = INT16_MAX;
	int32_t x950 = 18;
	uint16_t x951 = 12U;
	int16_t x952 = 0;

    t191 = ((x949-(x950-x951))!=x952);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x953 = UINT32_MAX;
	uint16_t x955 = 20U;
	int64_t x956 = -9282793006LL;
	int32_t t192 = 0;

    t192 = ((x953-(x954-x955))!=x956);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x957 = 0;
	int64_t x958 = INT64_MIN;
	volatile uint8_t x960 = 9U;
	volatile int32_t t193 = -6187;

    t193 = ((x957-(x958-x959))!=x960);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x961 = INT32_MIN;
	int64_t x964 = INT64_MAX;
	int32_t t194 = -214;

    t194 = ((x961-(x962-x963))!=x964);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x965 = UINT8_MAX;
	uint16_t x966 = UINT16_MAX;
	int16_t x967 = INT16_MAX;
	int32_t x968 = INT32_MAX;
	int32_t t195 = -186;

    t195 = ((x965-(x966-x967))!=x968);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x969 = 35;
	uint64_t x970 = UINT64_MAX;
	static volatile int8_t x971 = INT8_MIN;
	static volatile int16_t x972 = INT16_MIN;
	static volatile int32_t t196 = 23403838;

    t196 = ((x969-(x970-x971))!=x972);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x981 = INT32_MIN;
	volatile int8_t x982 = -1;
	static int8_t x983 = -1;
	int32_t x984 = INT32_MIN;
	volatile int32_t t197 = 3829702;

    t197 = ((x981-(x982-x983))!=x984);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x986 = 59U;
	int32_t x987 = -36;
	int32_t x988 = INT32_MAX;
	static int32_t t198 = -4186306;

    t198 = ((x985-(x986-x987))!=x988);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x989 = 7U;
	volatile int8_t x990 = -1;
	uint16_t x991 = UINT16_MAX;
	int16_t x992 = INT16_MAX;
	static int32_t t199 = -15371597;

    t199 = ((x989-(x990-x991))!=x992);

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

