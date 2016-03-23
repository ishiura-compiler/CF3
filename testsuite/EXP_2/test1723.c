
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

int16_t x3 = -1;
int16_t x5 = -136;
uint16_t x8 = UINT16_MAX;
int32_t t1 = 454;
static int64_t x19 = INT64_MIN;
volatile uint8_t x20 = 119U;
volatile uint16_t x21 = 13381U;
int8_t x25 = INT8_MIN;
int32_t t6 = -1437135;
int16_t x29 = -1;
static volatile int64_t x31 = -4532686243767371441LL;
uint32_t x32 = 61526889U;
static volatile uint32_t x33 = 63877U;
volatile uint32_t t8 = 198U;
int64_t x39 = -1LL;
volatile int32_t x42 = 32092;
uint32_t x49 = 446044484U;
uint32_t x52 = UINT32_MAX;
int64_t t13 = 9949843114LL;
volatile int64_t x60 = -399096853536748286LL;
int64_t t14 = -13202LL;
volatile int8_t x65 = -3;
uint32_t x68 = 357133476U;
int64_t x72 = 3632973568456LL;
int64_t t17 = -4439607358115190LL;
volatile int64_t x74 = -656545935901915660LL;
volatile uint32_t t19 = UINT32_MAX;
volatile int32_t t20 = 26550;
int16_t x85 = INT16_MIN;
uint64_t x88 = 3878018064756030LLU;
int32_t x93 = INT32_MIN;
int8_t x100 = 2;
int64_t x102 = INT64_MIN;
volatile uint32_t t24 = 10678U;
volatile int8_t x105 = 0;
uint8_t x109 = 0U;
uint64_t x112 = 1406LLU;
volatile uint32_t x114 = UINT32_MAX;
uint64_t t27 = 1620211823LLU;
uint16_t x119 = UINT16_MAX;
int8_t x122 = -36;
volatile int32_t x125 = -7334;
int32_t x136 = -1;
volatile int8_t x138 = -1;
int32_t x147 = -127;
volatile uint32_t x148 = 1U;
volatile int16_t x150 = INT16_MIN;
volatile int8_t x151 = INT8_MIN;
volatile int64_t t36 = -112554095149LL;
int64_t x154 = INT64_MIN;
uint32_t x159 = 1U;
static uint16_t x161 = 1057U;
static uint32_t x167 = UINT32_MAX;
uint8_t x169 = 0U;
uint16_t x176 = 414U;
volatile int64_t t43 = -363932479685LL;
static int16_t x184 = INT16_MIN;
int64_t x185 = 28254LL;
int8_t x191 = INT8_MAX;
int64_t t46 = 1749LL;
static volatile int32_t x195 = 6270261;
int8_t x210 = -1;
uint32_t x212 = UINT32_MAX;
int16_t x216 = -1;
uint64_t x217 = UINT64_MAX;
int8_t x219 = 0;
int16_t x222 = INT16_MAX;
int8_t x226 = INT8_MAX;
uint64_t t55 = 350731130261934LLU;
uint32_t t59 = 1746U;
static uint16_t x249 = 6853U;
volatile int32_t t61 = 49272;
uint16_t x259 = 254U;
volatile int32_t t64 = 0;
volatile int32_t x271 = 419832218;
volatile uint16_t x272 = 5U;
uint64_t x278 = 435LLU;
int8_t x282 = -1;
static int64_t x289 = -1LL;
static uint8_t x294 = 0U;
uint8_t x300 = 29U;
static uint16_t x304 = UINT16_MAX;
uint32_t x308 = 11U;
static int8_t x312 = INT8_MIN;
int8_t x317 = INT8_MIN;
static volatile uint16_t x319 = 2692U;
int64_t x320 = INT64_MIN;
int8_t x338 = INT8_MIN;
int32_t x342 = -82286688;
uint16_t x348 = UINT16_MAX;
uint16_t x359 = UINT16_MAX;
volatile uint32_t t88 = 266087U;
uint8_t x372 = 1U;
int16_t x376 = 2;
int32_t x378 = -1;
static volatile int8_t x379 = -1;
volatile uint32_t t93 = 109318U;
int64_t x388 = INT64_MAX;
uint16_t x391 = 23167U;
static uint32_t t96 = 442883U;
uint64_t x396 = 668501LLU;
uint64_t t97 = 2LLU;
static volatile int64_t x399 = -2170325957825633626LL;
uint32_t x404 = 30959567U;
uint8_t x408 = UINT8_MAX;
volatile int32_t t100 = -9642262;
volatile int32_t x409 = 1;
static int32_t x411 = -1;
int32_t x413 = INT32_MIN;
int8_t x420 = -1;
int16_t x430 = 1496;
static int16_t x431 = 1797;
int32_t t107 = INT32_MAX;
int32_t t111 = 23;
static uint8_t x455 = 5U;
int64_t x460 = INT64_MAX;
uint8_t x475 = 0U;
int16_t x477 = INT16_MIN;
static volatile int32_t t118 = 31;
uint8_t x495 = UINT8_MAX;
uint8_t x496 = 14U;
uint32_t x498 = 6243727U;
uint8_t x511 = 9U;
int16_t x513 = -1;
static uint8_t x519 = 20U;
volatile uint64_t x520 = UINT64_MAX;
int64_t x524 = INT64_MIN;
static int64_t x527 = -1LL;
volatile uint64_t t130 = 1028855LLU;
int8_t x529 = -1;
int16_t x538 = INT16_MIN;
static int64_t x541 = INT64_MAX;
static int32_t x545 = INT32_MIN;
int64_t x550 = -1LL;
volatile int64_t t136 = INT64_MAX;
int16_t x556 = -1;
uint32_t x558 = 42729188U;
int16_t x572 = INT16_MIN;
volatile uint64_t t141 = 2211301LLU;
int16_t x576 = -1;
volatile int64_t t142 = -678464302116010681LL;
uint8_t x579 = UINT8_MAX;
int64_t x581 = INT64_MIN;
uint64_t x585 = 2469LLU;
volatile uint64_t t146 = 28919623455439LLU;
static int32_t x597 = INT32_MAX;
volatile int32_t t149 = -108;
volatile int16_t x607 = -1;
volatile int8_t x609 = -1;
int32_t t151 = 1;
static int16_t x613 = -1;
volatile int64_t x619 = INT64_MAX;
uint32_t t153 = UINT32_MAX;
volatile int64_t x624 = INT64_MIN;
volatile int16_t x626 = INT16_MIN;
int64_t x627 = 1LL;
int32_t x628 = INT32_MAX;
uint32_t x629 = 7U;
volatile int16_t x636 = INT16_MIN;
int32_t x638 = INT32_MAX;
uint16_t x644 = 3U;
volatile int32_t t159 = -29706753;
static uint64_t x645 = UINT64_MAX;
volatile int8_t x648 = INT8_MIN;
uint16_t x668 = 9U;
volatile int64_t x674 = -48459547497LL;
uint8_t x678 = UINT8_MAX;
static int32_t x686 = INT32_MIN;
int32_t x689 = -2;
uint16_t x696 = 5021U;
static int32_t x697 = -193610380;
int8_t x708 = 3;
uint8_t x718 = UINT8_MAX;
static int8_t x720 = -1;
volatile int32_t t178 = -2;
uint16_t x721 = UINT16_MAX;
uint64_t t179 = 22LLU;
static int16_t x725 = INT16_MAX;
uint32_t x727 = UINT32_MAX;
int64_t x734 = -107682681736138860LL;
int16_t x738 = INT16_MIN;
int32_t x751 = -1;
int16_t x754 = -1;
int64_t x757 = 7918333714859457LL;
int8_t x760 = -1;
static uint32_t x762 = UINT32_MAX;
uint16_t x763 = 6U;
int8_t x765 = -1;
int16_t x771 = -1;
int8_t x772 = INT8_MIN;
uint64_t t191 = 40LLU;
int8_t x773 = INT8_MAX;
int32_t x777 = INT32_MIN;
int16_t x782 = INT16_MAX;
int16_t x783 = INT16_MAX;
int32_t x794 = -146;
volatile int32_t x795 = INT32_MIN;
static int8_t x797 = -1;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int8_t x4 = 1;
	uint32_t t0 = 3797U;

    t0 = ((x1&(x2>x3))+x4);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;

    t1 = ((x5&(x6>x7))+x8);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 225U;
	int8_t x10 = INT8_MIN;
	int8_t x11 = 2;
	int32_t x12 = INT32_MAX;
	static volatile int32_t t2 = INT32_MAX;

    t2 = ((x9&(x10>x11))+x12);

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static uint32_t x14 = 16U;
	uint8_t x15 = 112U;
	int16_t x16 = 29;
	int32_t t3 = -209798;

    t3 = ((x13&(x14>x15))+x16);

    if (t3 != 29) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	uint16_t x18 = 0U;
	volatile int32_t t4 = 39;

    t4 = ((x17&(x18>x19))+x20);

    if (t4 != 119) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 484U;
	static uint16_t x23 = 20826U;
	static uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = UINT32_MAX;

    t5 = ((x21&(x22>x23))+x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -1;
	static volatile uint16_t x27 = 37U;
	volatile int32_t x28 = -1;

    t6 = ((x25&(x26>x27))+x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x30 = INT8_MIN;
	static volatile uint32_t t7 = 213822U;

    t7 = ((x29&(x30>x31))+x32);

    if (t7 != 61526890U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 687237031580460066LLU;
	uint64_t x35 = UINT64_MAX;
	uint32_t x36 = 1127355280U;

    t8 = ((x33&(x34>x35))+x36);

    if (t8 != 1127355280U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = 451652;
	static int8_t x40 = INT8_MAX;
	static volatile int32_t t9 = -1;

    t9 = ((x37&(x38>x39))+x40);

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 7237U;
	uint32_t x43 = 531676711U;
	int32_t x44 = INT32_MIN;
	uint32_t t10 = 125U;

    t10 = ((x41&(x42>x43))+x44);

    if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int32_t x46 = INT32_MIN;
	volatile int8_t x47 = 1;
	static int16_t x48 = 3922;
	int64_t t11 = 47881LL;

    t11 = ((x45&(x46>x47))+x48);

    if (t11 != 3922LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	volatile uint32_t t12 = UINT32_MAX;

    t12 = ((x49&(x50>x51))+x52);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = -1LL;
	int8_t x54 = 40;
	uint16_t x55 = 363U;
	volatile int64_t x56 = -23712350200960LL;

    t13 = ((x53&(x54>x55))+x56);

    if (t13 != -23712350200960LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	volatile uint64_t x58 = UINT64_MAX;
	int8_t x59 = -1;

    t14 = ((x57&(x58>x59))+x60);

    if (t14 != -399096853536748286LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -19990907714105072LL;
	volatile int64_t x62 = 60748175LL;
	uint16_t x63 = 983U;
	int32_t x64 = INT32_MIN;
	volatile int64_t t15 = 29768051219126LL;

    t15 = ((x61&(x62>x63))+x64);

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -16087;
	int16_t x67 = INT16_MIN;
	static uint32_t t16 = 169689U;

    t16 = ((x65&(x66>x67))+x68);

    if (t16 != 357133477U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 19314U;
	int8_t x70 = 1;
	int64_t x71 = -272275036612581520LL;

    t17 = ((x69&(x70>x71))+x72);

    if (t17 != 3632973568456LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -5957382;
	volatile int64_t x75 = 10706514268689331LL;
	uint64_t x76 = 13LLU;
	volatile uint64_t t18 = 116490976645LLU;

    t18 = ((x73&(x74>x75))+x76);

    if (t18 != 13LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 2U;
	static volatile uint64_t x78 = 5197309LLU;
	static uint32_t x79 = 2536616U;
	static volatile uint32_t x80 = UINT32_MAX;

    t19 = ((x77&(x78>x79))+x80);

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = INT16_MAX;
	int16_t x82 = 13417;
	static int16_t x83 = INT16_MIN;
	volatile int16_t x84 = -5670;

    t20 = ((x81&(x82>x83))+x84);

    if (t20 != -5669) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 51241U;
	int8_t x87 = -55;
	uint64_t t21 = 34582377621809LLU;

    t21 = ((x85&(x86>x87))+x88);

    if (t21 != 3878018064756030LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x94 = UINT8_MAX;
	volatile int32_t x95 = INT32_MIN;
	int16_t x96 = -1;
	int32_t t22 = 15740;

    t22 = ((x93&(x94>x95))+x96);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = 14188632;
	int64_t x98 = -1LL;
	uint8_t x99 = 28U;
	int32_t t23 = 338;

    t23 = ((x97&(x98>x99))+x100);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = UINT32_MAX;
	static int8_t x103 = -5;
	uint16_t x104 = 2595U;

    t24 = ((x101&(x102>x103))+x104);

    if (t24 != 2595U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x106 = 25895U;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MIN;
	int32_t t25 = -1184781;

    t25 = ((x105&(x106>x107))+x108);

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x110 = INT32_MIN;
	uint16_t x111 = 7U;
	static uint64_t t26 = 730599477LLU;

    t26 = ((x109&(x110>x111))+x112);

    if (t26 != 1406LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x113 = 15353868LLU;
	uint32_t x115 = 1506706730U;
	uint64_t x116 = 215092LLU;

    t27 = ((x113&(x114>x115))+x116);

    if (t27 != 215092LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = -1;
	uint8_t x118 = 60U;
	int16_t x120 = INT16_MAX;
	volatile int32_t t28 = -228846955;

    t28 = ((x117&(x118>x119))+x120);

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	uint64_t x123 = 869LLU;
	uint16_t x124 = 15U;
	int32_t t29 = 176721119;

    t29 = ((x121&(x122>x123))+x124);

    if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x126 = INT64_MAX;
	uint32_t x127 = 552U;
	int16_t x128 = INT16_MIN;
	volatile int32_t t30 = -214478702;

    t30 = ((x125&(x126>x127))+x128);

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MIN;
	uint16_t x130 = 132U;
	volatile int8_t x131 = -2;
	static volatile int64_t x132 = INT64_MAX;
	static int64_t t31 = INT64_MAX;

    t31 = ((x129&(x130>x131))+x132);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x133 = 82U;
	uint8_t x134 = 112U;
	int32_t x135 = INT32_MIN;
	volatile int32_t t32 = -10;

    t32 = ((x133&(x134>x135))+x136);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	int32_t x140 = 44;
	volatile int32_t t33 = 310004288;

    t33 = ((x137&(x138>x139))+x140);

    if (t33 != 44) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MAX;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t34 = -10871;

    t34 = ((x141&(x142>x143))+x144);

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 88U;
	static volatile int8_t x146 = -1;
	static uint32_t t35 = 1173217392U;

    t35 = ((x145&(x146>x147))+x148);

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MAX;
	int8_t x152 = -1;

    t36 = ((x149&(x150>x151))+x152);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x153 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	volatile int32_t x156 = 19;
	static volatile int32_t t37 = -8;

    t37 = ((x153&(x154>x155))+x156);

    if (t37 != 19) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = 3;
	uint32_t x158 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t38 = -1919043;

    t38 = ((x157&(x158>x159))+x160);

    if (t38 != 65536) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x162 = INT64_MAX;
	uint32_t x163 = UINT32_MAX;
	static uint32_t x164 = 17452929U;
	uint32_t t39 = 5272U;

    t39 = ((x161&(x162>x163))+x164);

    if (t39 != 17452930U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x165 = UINT32_MAX;
	uint8_t x166 = 6U;
	static int8_t x168 = 0;
	uint32_t t40 = 409248U;

    t40 = ((x165&(x166>x167))+x168);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 3U;
	uint16_t x171 = 24037U;
	volatile int32_t x172 = -199;
	int32_t t41 = 28296010;

    t41 = ((x169&(x170>x171))+x172);

    if (t41 != -199) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;
	int64_t t42 = 4407677255296895435LL;

    t42 = ((x173&(x174>x175))+x176);

    if (t42 != 414LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = -997884380LL;
	int64_t x178 = 1LL;
	int64_t x179 = 4523111051LL;
	int16_t x180 = -342;

    t43 = ((x177&(x178>x179))+x180);

    if (t43 != -342LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MIN;
	static volatile int8_t x183 = -1;
	int32_t t44 = 704455;

    t44 = ((x181&(x182>x183))+x184);

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = INT8_MIN;
	int64_t x188 = -23367165LL;
	volatile int64_t t45 = -91LL;

    t45 = ((x185&(x186>x187))+x188);

    if (t45 != -23367165LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = -56483608LL;
	int32_t x190 = INT32_MAX;
	uint8_t x192 = 1U;

    t46 = ((x189&(x190>x191))+x192);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MIN;
	static int16_t x196 = INT16_MIN;
	volatile int64_t t47 = 54771127012192LL;

    t47 = ((x193&(x194>x195))+x196);

    if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	uint16_t x198 = 5374U;
	volatile int8_t x199 = INT8_MAX;
	int32_t x200 = 1949;
	static int32_t t48 = -81494;

    t48 = ((x197&(x198>x199))+x200);

    if (t48 != 1949) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MIN;
	volatile int32_t x202 = -211966;
	int8_t x203 = INT8_MAX;
	volatile int16_t x204 = 3627;
	int32_t t49 = 31936358;

    t49 = ((x201&(x202>x203))+x204);

    if (t49 != 3627) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 7271U;
	uint32_t x206 = 11427440U;
	static uint32_t x207 = 15547849U;
	uint8_t x208 = 2U;
	static int32_t t50 = -71441832;

    t50 = ((x205&(x206>x207))+x208);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = 4050577744252095LL;
	static volatile int16_t x211 = INT16_MIN;
	int64_t t51 = -7911797LL;

    t51 = ((x209&(x210>x211))+x212);

    if (t51 != 4294967296LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MIN;
	volatile uint16_t x214 = 13U;
	int32_t x215 = 78;
	int64_t t52 = -77485331477344866LL;

    t52 = ((x213&(x214>x215))+x216);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x218 = INT8_MIN;
	volatile int16_t x220 = INT16_MIN;
	volatile uint64_t t53 = 0LLU;

    t53 = ((x217&(x218>x219))+x220);

    if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = 10U;
	uint16_t x223 = UINT16_MAX;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t54 = -10070;

    t54 = ((x221&(x222>x223))+x224);

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x225 = -1LL;
	int64_t x227 = -1LL;
	uint64_t x228 = UINT64_MAX;

    t55 = ((x225&(x226>x227))+x228);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t56 = 126255710;

    t56 = ((x229&(x230>x231))+x232);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	int16_t x234 = 84;
	int64_t x235 = INT64_MIN;
	int16_t x236 = -1;
	int32_t t57 = -2;

    t57 = ((x233&(x234>x235))+x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x237 = 3;
	static uint64_t x238 = UINT64_MAX;
	int64_t x239 = 29772699660LL;
	static int32_t x240 = -1;
	static int32_t t58 = -5207;

    t58 = ((x237&(x238>x239))+x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x241 = UINT32_MAX;
	int64_t x242 = 21086037998758LL;
	int32_t x243 = 313027074;
	static uint8_t x244 = 95U;

    t59 = ((x241&(x242>x243))+x244);

    if (t59 != 96U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x245 = 1027U;
	int8_t x246 = INT8_MAX;
	static volatile int8_t x247 = 0;
	static uint16_t x248 = 474U;
	volatile int32_t t60 = 953;

    t60 = ((x245&(x246>x247))+x248);

    if (t60 != 475) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x250 = 155036U;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = -1509926;

    t61 = ((x249&(x250>x251))+x252);

    if (t61 != -1509926) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x253 = -1;
	uint16_t x254 = 3682U;
	static volatile uint32_t x255 = 102027757U;
	volatile int16_t x256 = INT16_MAX;
	int32_t t62 = -96;

    t62 = ((x253&(x254>x255))+x256);

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = UINT16_MAX;
	volatile uint8_t x258 = 10U;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t63 = -164;

    t63 = ((x257&(x258>x259))+x260);

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = INT32_MIN;
	static int8_t x262 = INT8_MIN;
	uint16_t x263 = 32183U;
	int8_t x264 = -1;

    t64 = ((x261&(x262>x263))+x264);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = 53U;
	volatile int64_t x266 = INT64_MAX;
	static volatile int32_t x267 = -125773;
	uint64_t x268 = 6112105LLU;
	uint64_t t65 = 5139269LLU;

    t65 = ((x265&(x266>x267))+x268);

    if (t65 != 6112106LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x269 = INT64_MAX;
	volatile int32_t x270 = INT32_MAX;
	int64_t t66 = 1064439911052LL;

    t66 = ((x269&(x270>x271))+x272);

    if (t66 != 6LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	volatile uint64_t x275 = UINT64_MAX;
	volatile int8_t x276 = -9;
	int32_t t67 = -4135;

    t67 = ((x273&(x274>x275))+x276);

    if (t67 != -9) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = -1LL;
	int32_t x279 = -2119;
	volatile int8_t x280 = INT8_MIN;
	static volatile int64_t t68 = 64275838111638LL;

    t68 = ((x277&(x278>x279))+x280);

    if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x281 = INT16_MAX;
	uint16_t x283 = 2U;
	volatile int16_t x284 = -9765;
	int32_t t69 = -415;

    t69 = ((x281&(x282>x283))+x284);

    if (t69 != -9765) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = 2045;
	static int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MAX;
	int16_t x288 = -1;
	static int32_t t70 = 1;

    t70 = ((x285&(x286>x287))+x288);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	static int64_t x292 = INT64_MIN;
	int64_t t71 = INT64_MIN;

    t71 = ((x289&(x290>x291))+x292);

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = INT16_MIN;
	volatile int32_t x295 = INT32_MIN;
	int16_t x296 = -1;
	int32_t t72 = -14;

    t72 = ((x293&(x294>x295))+x296);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x297 = INT64_MAX;
	volatile uint8_t x298 = 2U;
	int8_t x299 = -1;
	int64_t t73 = 180550213944LL;

    t73 = ((x297&(x298>x299))+x300);

    if (t73 != 30LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x301 = INT32_MAX;
	static volatile int32_t x302 = -1;
	int32_t x303 = -7461;
	int32_t t74 = -117;

    t74 = ((x301&(x302>x303))+x304);

    if (t74 != 65536) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	volatile int32_t x306 = -47807;
	static int8_t x307 = -1;
	volatile uint32_t t75 = 986154485U;

    t75 = ((x305&(x306>x307))+x308);

    if (t75 != 11U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x309 = 13935731784090LLU;
	volatile int8_t x310 = -2;
	uint16_t x311 = 21143U;
	uint64_t t76 = 26418793079821LLU;

    t76 = ((x309&(x310>x311))+x312);

    if (t76 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x313 = 7240543U;
	int64_t x314 = INT64_MAX;
	int64_t x315 = 23986LL;
	int8_t x316 = INT8_MIN;
	volatile uint32_t t77 = 56U;

    t77 = ((x313&(x314>x315))+x316);

    if (t77 != 4294967169U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x318 = INT64_MAX;
	int64_t t78 = INT64_MIN;

    t78 = ((x317&(x318>x319))+x320);

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 69U;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 5U;
	uint16_t x324 = 1U;
	static volatile int32_t t79 = -216;

    t79 = ((x321&(x322>x323))+x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x325 = -1LL;
	volatile uint16_t x326 = UINT16_MAX;
	int16_t x327 = -1;
	int64_t x328 = 16142507LL;
	static int64_t t80 = 1186430LL;

    t80 = ((x325&(x326>x327))+x328);

    if (t80 != 16142508LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x329 = 18415034904372360LL;
	int8_t x330 = INT8_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	static uint8_t x332 = UINT8_MAX;
	static volatile int64_t t81 = 1LL;

    t81 = ((x329&(x330>x331))+x332);

    if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x333 = INT8_MIN;
	int16_t x334 = -4;
	volatile uint8_t x335 = 85U;
	uint64_t x336 = 182499084104018552LLU;
	volatile uint64_t t82 = 27611771541408LLU;

    t82 = ((x333&(x334>x335))+x336);

    if (t82 != 182499084104018552LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x337 = 5;
	int8_t x339 = 11;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

    t83 = ((x337&(x338>x339))+x340);

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x341 = UINT8_MAX;
	static volatile uint16_t x343 = 137U;
	static int8_t x344 = INT8_MIN;
	static volatile int32_t t84 = 3497;

    t84 = ((x341&(x342>x343))+x344);

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x345 = 82U;
	int8_t x346 = INT8_MAX;
	static int64_t x347 = INT64_MAX;
	volatile int32_t t85 = 2;

    t85 = ((x345&(x346>x347))+x348);

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x349 = -1LL;
	int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	int8_t x352 = -1;
	int64_t t86 = 229264047LL;

    t86 = ((x349&(x350>x351))+x352);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MIN;
	uint16_t x354 = UINT16_MAX;
	uint8_t x355 = UINT8_MAX;
	static int64_t x356 = 33LL;
	volatile int64_t t87 = -1645930534986LL;

    t87 = ((x353&(x354>x355))+x356);

    if (t87 != 33LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x357 = 12197826U;
	int16_t x358 = 32;
	int8_t x360 = 1;

    t88 = ((x357&(x358>x359))+x360);

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x361 = 65600LLU;
	int64_t x362 = -2923351088407252281LL;
	int16_t x363 = -1;
	static volatile int64_t x364 = INT64_MAX;
	uint64_t t89 = 39597538LLU;

    t89 = ((x361&(x362>x363))+x364);

    if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = 3785U;
	static int16_t x366 = -26;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t90 = 3477LLU;

    t90 = ((x365&(x366>x367))+x368);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = INT64_MIN;
	uint8_t x370 = 0U;
	int32_t x371 = INT32_MAX;
	int64_t t91 = 6291059179860LL;

    t91 = ((x369&(x370>x371))+x372);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x373 = 5980526412LLU;
	int8_t x374 = 0;
	uint16_t x375 = 22374U;
	uint64_t t92 = 67LLU;

    t92 = ((x373&(x374>x375))+x376);

    if (t92 != 2LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = INT8_MAX;
	uint32_t x380 = 0U;

    t93 = ((x377&(x378>x379))+x380);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MIN;
	volatile uint16_t x383 = UINT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile int64_t t94 = 62084133LL;

    t94 = ((x381&(x382>x383))+x384);

    if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = 1;
	int64_t x386 = INT64_MIN;
	static volatile int16_t x387 = -1;
	static int64_t t95 = INT64_MAX;

    t95 = ((x385&(x386>x387))+x388);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	static int8_t x390 = INT8_MIN;
	uint8_t x392 = 2U;

    t96 = ((x389&(x390>x391))+x392);

    if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x393 = INT8_MIN;
	int16_t x394 = 1;
	static int32_t x395 = INT32_MIN;

    t97 = ((x393&(x394>x395))+x396);

    if (t97 != 668501LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	uint64_t x398 = 17418641119167846LLU;
	int16_t x400 = INT16_MAX;
	static int32_t t98 = -199;

    t98 = ((x397&(x398>x399))+x400);

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x401 = UINT32_MAX;
	static int16_t x402 = INT16_MIN;
	volatile uint8_t x403 = UINT8_MAX;
	volatile uint32_t t99 = 455600U;

    t99 = ((x401&(x402>x403))+x404);

    if (t99 != 30959567U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;

    t100 = ((x405&(x406>x407))+x408);

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x410 = 28U;
	uint16_t x412 = 130U;
	static volatile int32_t t101 = -239915;

    t101 = ((x409&(x410>x411))+x412);

    if (t101 != 131) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x414 = -26326;
	int16_t x415 = -1;
	volatile uint8_t x416 = 4U;
	int32_t t102 = -427293;

    t102 = ((x413&(x414>x415))+x416);

    if (t102 != 4) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x417 = 9U;
	uint16_t x418 = UINT16_MAX;
	int64_t x419 = INT64_MIN;
	volatile int32_t t103 = 93594419;

    t103 = ((x417&(x418>x419))+x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = -1;
	int16_t x422 = INT16_MAX;
	volatile uint16_t x423 = UINT16_MAX;
	int32_t x424 = INT32_MIN;
	volatile int32_t t104 = INT32_MIN;

    t104 = ((x421&(x422>x423))+x424);

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x425 = -1;
	int32_t x426 = 2951;
	int16_t x427 = -1;
	uint32_t x428 = UINT32_MAX;
	static volatile uint32_t t105 = 111037707U;

    t105 = ((x425&(x426>x427))+x428);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x429 = 0U;
	int32_t x432 = INT32_MIN;
	int32_t t106 = INT32_MIN;

    t106 = ((x429&(x430>x431))+x432);

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x433 = 6U;
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = INT32_MIN;
	static int32_t x436 = INT32_MAX;

    t107 = ((x433&(x434>x435))+x436);

    if (t107 != INT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x437 = 1097U;
	int16_t x438 = -1;
	uint32_t x439 = 862110994U;
	int16_t x440 = -1;
	volatile int32_t t108 = -31128;

    t108 = ((x437&(x438>x439))+x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x441 = 1U;
	int8_t x442 = 0;
	volatile uint16_t x443 = UINT16_MAX;
	int32_t x444 = INT32_MAX;
	volatile int32_t t109 = INT32_MAX;

    t109 = ((x441&(x442>x443))+x444);

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x445 = 32026182101LLU;
	uint16_t x446 = 38U;
	uint64_t x447 = 1362985LLU;
	volatile int64_t x448 = INT64_MIN;
	volatile uint64_t t110 = 2365470494981754LLU;

    t110 = ((x445&(x446>x447))+x448);

    if (t110 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = -1;
	int8_t x450 = -1;
	int32_t x451 = -540735;
	int16_t x452 = INT16_MAX;

    t111 = ((x449&(x450>x451))+x452);

    if (t111 != 32768) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x453 = INT16_MIN;
	int16_t x454 = INT16_MAX;
	uint8_t x456 = UINT8_MAX;
	int32_t t112 = -253377;

    t112 = ((x453&(x454>x455))+x456);

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x457 = 0U;
	static int16_t x458 = INT16_MAX;
	uint32_t x459 = UINT32_MAX;
	int64_t t113 = INT64_MAX;

    t113 = ((x457&(x458>x459))+x460);

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MIN;
	static uint64_t x463 = 22905852438LLU;
	uint64_t x464 = UINT64_MAX;
	uint64_t t114 = UINT64_MAX;

    t114 = ((x461&(x462>x463))+x464);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x465 = 12103773169551LLU;
	int32_t x466 = INT32_MIN;
	int64_t x467 = 904042LL;
	volatile int32_t x468 = 2;
	uint64_t t115 = 191604LLU;

    t115 = ((x465&(x466>x467))+x468);

    if (t115 != 2LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x469 = 18225884U;
	int64_t x470 = INT64_MIN;
	static int8_t x471 = -53;
	static volatile int64_t x472 = -1622012287991308567LL;
	volatile int64_t t116 = -26LL;

    t116 = ((x469&(x470>x471))+x472);

    if (t116 != -1622012287991308567LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x473 = 116U;
	volatile int16_t x474 = -19;
	volatile int64_t x476 = -1LL;
	static volatile int64_t t117 = 54489765LL;

    t117 = ((x473&(x474>x475))+x476);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x478 = 3535LL;
	uint32_t x479 = 609U;
	int32_t x480 = -1;

    t118 = ((x477&(x478>x479))+x480);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x481 = UINT8_MAX;
	int8_t x482 = -1;
	int16_t x483 = -115;
	int8_t x484 = 0;
	static volatile int32_t t119 = -177158051;

    t119 = ((x481&(x482>x483))+x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x485 = INT64_MIN;
	int32_t x486 = -1;
	int64_t x487 = -222LL;
	int8_t x488 = -1;
	int64_t t120 = 13903694356LL;

    t120 = ((x485&(x486>x487))+x488);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x489 = 21U;
	uint64_t x490 = UINT64_MAX;
	volatile int8_t x491 = -1;
	volatile int64_t x492 = -1LL;
	volatile int64_t t121 = 63014320LL;

    t121 = ((x489&(x490>x491))+x492);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x493 = INT64_MAX;
	volatile uint8_t x494 = 3U;
	int64_t t122 = 1053017LL;

    t122 = ((x493&(x494>x495))+x496);

    if (t122 != 14LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x497 = UINT32_MAX;
	uint8_t x499 = 64U;
	int32_t x500 = INT32_MIN;
	volatile uint32_t t123 = 2640U;

    t123 = ((x497&(x498>x499))+x500);

    if (t123 != 2147483649U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x501 = INT32_MIN;
	int16_t x502 = -1;
	volatile int8_t x503 = INT8_MAX;
	int32_t x504 = 833226;
	volatile int32_t t124 = -8;

    t124 = ((x501&(x502>x503))+x504);

    if (t124 != 833226) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x505 = -198800199500LL;
	int32_t x506 = -1;
	int64_t x507 = 5259478790432LL;
	static int16_t x508 = INT16_MIN;
	int64_t t125 = -57LL;

    t125 = ((x505&(x506>x507))+x508);

    if (t125 != -32768LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x509 = 4;
	int64_t x510 = -52290732275721LL;
	volatile int8_t x512 = -1;
	static int32_t t126 = -119232399;

    t126 = ((x509&(x510>x511))+x512);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x514 = 26365100LLU;
	int64_t x515 = -1LL;
	int64_t x516 = INT64_MAX;
	volatile int64_t t127 = INT64_MAX;

    t127 = ((x513&(x514>x515))+x516);

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x517 = -1LL;
	uint32_t x518 = 4U;
	uint64_t t128 = UINT64_MAX;

    t128 = ((x517&(x518>x519))+x520);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x521 = 4847;
	uint8_t x522 = 2U;
	int8_t x523 = 2;
	int64_t t129 = INT64_MIN;

    t129 = ((x521&(x522>x523))+x524);

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x525 = 84209418470LLU;
	static int64_t x526 = INT64_MAX;
	int8_t x528 = INT8_MIN;

    t130 = ((x525&(x526>x527))+x528);

    if (t130 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x530 = UINT8_MAX;
	int32_t x531 = -178;
	uint64_t x532 = UINT64_MAX;
	volatile uint64_t t131 = 20LLU;

    t131 = ((x529&(x530>x531))+x532);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x533 = INT32_MAX;
	uint32_t x534 = 777068U;
	uint64_t x535 = 307696948LLU;
	static uint32_t x536 = 218U;
	uint32_t t132 = 277U;

    t132 = ((x533&(x534>x535))+x536);

    if (t132 != 218U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x537 = INT16_MIN;
	volatile uint16_t x539 = UINT16_MAX;
	uint16_t x540 = UINT16_MAX;
	static int32_t t133 = 175856;

    t133 = ((x537&(x538>x539))+x540);

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x542 = 22U;
	int8_t x543 = INT8_MIN;
	static int32_t x544 = -1;
	volatile int64_t t134 = 344529LL;

    t134 = ((x541&(x542>x543))+x544);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x546 = -1;
	volatile int32_t x547 = INT32_MIN;
	int16_t x548 = INT16_MIN;
	static int32_t t135 = 1070;

    t135 = ((x545&(x546>x547))+x548);

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x549 = 14498U;
	static int16_t x551 = INT16_MIN;
	static volatile int64_t x552 = INT64_MAX;

    t136 = ((x549&(x550>x551))+x552);

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	int16_t x554 = -15;
	uint16_t x555 = UINT16_MAX;
	int32_t t137 = -1181;

    t137 = ((x553&(x554>x555))+x556);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x557 = 0U;
	int8_t x559 = -1;
	volatile uint16_t x560 = 8U;
	int32_t t138 = -37725976;

    t138 = ((x557&(x558>x559))+x560);

    if (t138 != 8) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = INT64_MIN;
	volatile int16_t x562 = 97;
	int64_t x563 = -1LL;
	int8_t x564 = 0;
	int64_t t139 = 2840175306189057LL;

    t139 = ((x561&(x562>x563))+x564);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x565 = 3552U;
	int32_t x566 = INT32_MAX;
	uint16_t x567 = UINT16_MAX;
	uint8_t x568 = 1U;
	volatile int32_t t140 = -60291857;

    t140 = ((x565&(x566>x567))+x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x570 = -35;
	int16_t x571 = 83;

    t141 = ((x569&(x570>x571))+x572);

    if (t141 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x573 = INT64_MAX;
	int32_t x574 = INT32_MIN;
	uint8_t x575 = 3U;

    t142 = ((x573&(x574>x575))+x576);

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x577 = INT16_MAX;
	volatile uint8_t x578 = 2U;
	static int16_t x580 = -1;
	static volatile int32_t t143 = 174774659;

    t143 = ((x577&(x578>x579))+x580);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x582 = -1;
	int64_t x583 = 1LL;
	uint64_t x584 = UINT64_MAX;
	static uint64_t t144 = UINT64_MAX;

    t144 = ((x581&(x582>x583))+x584);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x586 = 1U;
	static uint16_t x587 = UINT16_MAX;
	volatile int32_t x588 = 179308117;
	volatile uint64_t t145 = 867756626581033911LLU;

    t145 = ((x585&(x586>x587))+x588);

    if (t145 != 179308117LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	static int8_t x590 = -1;
	int8_t x591 = -1;
	uint8_t x592 = 123U;

    t146 = ((x589&(x590>x591))+x592);

    if (t146 != 123LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x593 = 5824LLU;
	volatile int8_t x594 = INT8_MIN;
	int8_t x595 = INT8_MIN;
	int64_t x596 = INT64_MIN;
	volatile uint64_t t147 = 4LLU;

    t147 = ((x593&(x594>x595))+x596);

    if (t147 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x598 = -1LL;
	int16_t x599 = INT16_MAX;
	int16_t x600 = INT16_MIN;
	int32_t t148 = -130286;

    t148 = ((x597&(x598>x599))+x600);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x601 = INT32_MAX;
	uint32_t x602 = 1402256U;
	volatile uint64_t x603 = 7890750105643187LLU;
	int8_t x604 = INT8_MIN;

    t149 = ((x601&(x602>x603))+x604);

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x605 = 1095631U;
	volatile int64_t x606 = INT64_MIN;
	uint8_t x608 = UINT8_MAX;
	volatile uint32_t t150 = 881842U;

    t150 = ((x605&(x606>x607))+x608);

    if (t150 != 255U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MAX;
	uint16_t x612 = 7504U;

    t151 = ((x609&(x610>x611))+x612);

    if (t151 != 7504) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x614 = 5022;
	uint8_t x615 = UINT8_MAX;
	int8_t x616 = 29;
	volatile int32_t t152 = -242799265;

    t152 = ((x613&(x614>x615))+x616);

    if (t152 != 30) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x617 = INT32_MAX;
	volatile uint64_t x618 = 690542526LLU;
	static volatile uint32_t x620 = UINT32_MAX;

    t153 = ((x617&(x618>x619))+x620);

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x621 = 1716U;
	static uint32_t x622 = UINT32_MAX;
	uint64_t x623 = 181463225LLU;
	volatile int64_t t154 = INT64_MIN;

    t154 = ((x621&(x622>x623))+x624);

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x625 = UINT32_MAX;
	volatile uint32_t t155 = 0U;

    t155 = ((x625&(x626>x627))+x628);

    if (t155 != 2147483647U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x630 = INT64_MIN;
	int32_t x631 = 72;
	int64_t x632 = 51226332429298LL;
	volatile int64_t t156 = 620701394LL;

    t156 = ((x629&(x630>x631))+x632);

    if (t156 != 51226332429298LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x633 = -2188;
	uint64_t x634 = 0LLU;
	static int32_t x635 = 6684;
	static int32_t t157 = -421;

    t157 = ((x633&(x634>x635))+x636);

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x637 = 1;
	int16_t x639 = -1;
	int16_t x640 = INT16_MIN;
	int32_t t158 = -1;

    t158 = ((x637&(x638>x639))+x640);

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x641 = UINT16_MAX;
	static uint16_t x642 = 896U;
	static int16_t x643 = -2;

    t159 = ((x641&(x642>x643))+x644);

    if (t159 != 4) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x646 = INT16_MAX;
	int32_t x647 = 147254;
	volatile uint64_t t160 = 27513700154LLU;

    t160 = ((x645&(x646>x647))+x648);

    if (t160 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x649 = -1;
	int64_t x650 = -53512LL;
	volatile int16_t x651 = -1;
	int32_t x652 = 12;
	int32_t t161 = 1467477;

    t161 = ((x649&(x650>x651))+x652);

    if (t161 != 12) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x653 = 5U;
	static volatile int64_t x654 = -120053961LL;
	int32_t x655 = INT32_MAX;
	int8_t x656 = 0;
	volatile uint32_t t162 = 226U;

    t162 = ((x653&(x654>x655))+x656);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x657 = -1LL;
	static volatile uint32_t x658 = 520418476U;
	volatile uint64_t x659 = UINT64_MAX;
	uint32_t x660 = 265613910U;
	volatile int64_t t163 = 7LL;

    t163 = ((x657&(x658>x659))+x660);

    if (t163 != 265613910LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x661 = -1LL;
	int64_t x662 = INT64_MIN;
	uint8_t x663 = 1U;
	volatile int32_t x664 = 1;
	int64_t t164 = 587045308LL;

    t164 = ((x661&(x662>x663))+x664);

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x665 = 1444899U;
	int8_t x666 = 13;
	int16_t x667 = -20;
	uint32_t t165 = 2879U;

    t165 = ((x665&(x666>x667))+x668);

    if (t165 != 10U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x669 = INT16_MIN;
	volatile uint16_t x670 = UINT16_MAX;
	int8_t x671 = 41;
	volatile uint8_t x672 = 2U;
	int32_t t166 = 454;

    t166 = ((x669&(x670>x671))+x672);

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x673 = INT32_MIN;
	uint16_t x675 = 201U;
	uint32_t x676 = UINT32_MAX;
	uint32_t t167 = UINT32_MAX;

    t167 = ((x673&(x674>x675))+x676);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x677 = 2886;
	int16_t x679 = -1;
	int64_t x680 = INT64_MIN;
	static volatile int64_t t168 = INT64_MIN;

    t168 = ((x677&(x678>x679))+x680);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x681 = 370U;
	int32_t x682 = INT32_MIN;
	volatile int16_t x683 = INT16_MIN;
	int64_t x684 = INT64_MAX;
	volatile int64_t t169 = INT64_MAX;

    t169 = ((x681&(x682>x683))+x684);

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x685 = INT8_MIN;
	int8_t x687 = INT8_MIN;
	volatile int8_t x688 = -1;
	static int32_t t170 = -351;

    t170 = ((x685&(x686>x687))+x688);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x690 = -1LL;
	int64_t x691 = 293LL;
	static uint32_t x692 = 2269133U;
	static uint32_t t171 = 308065U;

    t171 = ((x689&(x690>x691))+x692);

    if (t171 != 2269133U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x693 = 151LL;
	volatile int64_t x694 = INT64_MIN;
	uint8_t x695 = UINT8_MAX;
	volatile int64_t t172 = 1LL;

    t172 = ((x693&(x694>x695))+x696);

    if (t172 != 5021LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x698 = 247U;
	uint64_t x699 = UINT64_MAX;
	int64_t x700 = INT64_MIN;
	static volatile int64_t t173 = INT64_MIN;

    t173 = ((x697&(x698>x699))+x700);

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x701 = UINT16_MAX;
	int64_t x702 = INT64_MIN;
	int16_t x703 = 2;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t174 = UINT64_MAX;

    t174 = ((x701&(x702>x703))+x704);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x706 = 87U;
	int16_t x707 = 0;
	volatile int32_t t175 = 3;

    t175 = ((x705&(x706>x707))+x708);

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x709 = INT8_MIN;
	int16_t x710 = -1506;
	int64_t x711 = -1LL;
	int8_t x712 = -1;
	volatile int32_t t176 = 183;

    t176 = ((x709&(x710>x711))+x712);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x713 = INT32_MIN;
	volatile int8_t x714 = INT8_MAX;
	uint16_t x715 = 571U;
	int8_t x716 = 13;
	volatile int32_t t177 = -8286;

    t177 = ((x713&(x714>x715))+x716);

    if (t177 != 13) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x717 = UINT8_MAX;
	uint8_t x719 = 115U;

    t178 = ((x717&(x718>x719))+x720);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x722 = 6009044LL;
	volatile int8_t x723 = -1;
	uint64_t x724 = UINT64_MAX;

    t179 = ((x721&(x722>x723))+x724);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x726 = INT32_MAX;
	uint16_t x728 = 8654U;
	int32_t t180 = -890244;

    t180 = ((x725&(x726>x727))+x728);

    if (t180 != 8654) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x729 = UINT64_MAX;
	static uint64_t x730 = UINT64_MAX;
	int64_t x731 = INT64_MIN;
	int64_t x732 = -1LL;
	uint64_t t181 = 78362343036751073LLU;

    t181 = ((x729&(x730>x731))+x732);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x733 = INT64_MIN;
	uint16_t x735 = 302U;
	volatile int16_t x736 = -17;
	volatile int64_t t182 = 939498LL;

    t182 = ((x733&(x734>x735))+x736);

    if (t182 != -17LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x737 = 1824431U;
	uint8_t x739 = UINT8_MAX;
	int8_t x740 = INT8_MIN;
	uint32_t t183 = 275049U;

    t183 = ((x737&(x738>x739))+x740);

    if (t183 != 4294967168U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x741 = INT32_MIN;
	static uint64_t x742 = 133LLU;
	static uint64_t x743 = UINT64_MAX;
	int64_t x744 = -1LL;
	volatile int64_t t184 = 58LL;

    t184 = ((x741&(x742>x743))+x744);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x746 = INT64_MIN;
	uint8_t x747 = 3U;
	int32_t x748 = 4151012;
	volatile int32_t t185 = 6;

    t185 = ((x745&(x746>x747))+x748);

    if (t185 != 4151012) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x749 = INT64_MAX;
	uint64_t x750 = 42641150837LLU;
	volatile uint32_t x752 = 121163U;
	volatile int64_t t186 = 1229034686577LL;

    t186 = ((x749&(x750>x751))+x752);

    if (t186 != 121163LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x753 = 597644U;
	uint16_t x755 = 2813U;
	int64_t x756 = -1LL;
	volatile int64_t t187 = 21372LL;

    t187 = ((x753&(x754>x755))+x756);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x758 = -1LL;
	int8_t x759 = -1;
	volatile int64_t t188 = 121508LL;

    t188 = ((x757&(x758>x759))+x760);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x761 = INT64_MIN;
	int8_t x764 = 58;
	volatile int64_t t189 = 5909558LL;

    t189 = ((x761&(x762>x763))+x764);

    if (t189 != 58LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x766 = INT16_MIN;
	int8_t x767 = 23;
	volatile uint32_t x768 = 9361528U;
	uint32_t t190 = 68569U;

    t190 = ((x765&(x766>x767))+x768);

    if (t190 != 9361528U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x769 = UINT64_MAX;
	uint16_t x770 = 1U;

    t191 = ((x769&(x770>x771))+x772);

    if (t191 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x774 = INT32_MIN;
	static uint16_t x775 = UINT16_MAX;
	static volatile int32_t x776 = -1;
	static int32_t t192 = 126;

    t192 = ((x773&(x774>x775))+x776);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x778 = INT8_MIN;
	int64_t x779 = -1LL;
	int64_t x780 = -6033130569426LL;
	volatile int64_t t193 = 3LL;

    t193 = ((x777&(x778>x779))+x780);

    if (t193 != -6033130569426LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x781 = INT32_MIN;
	int8_t x784 = -1;
	int32_t t194 = 3147075;

    t194 = ((x781&(x782>x783))+x784);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x785 = UINT16_MAX;
	int8_t x786 = INT8_MIN;
	static int32_t x787 = INT32_MIN;
	uint32_t x788 = 12U;
	uint32_t t195 = 28195U;

    t195 = ((x785&(x786>x787))+x788);

    if (t195 != 13U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x789 = 64980088U;
	volatile int64_t x790 = -66334654556850LL;
	uint64_t x791 = 19150923118LLU;
	int8_t x792 = -1;
	volatile uint32_t t196 = UINT32_MAX;

    t196 = ((x789&(x790>x791))+x792);

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x793 = UINT32_MAX;
	int64_t x796 = 3723LL;
	volatile int64_t t197 = -102LL;

    t197 = ((x793&(x794>x795))+x796);

    if (t197 != 3724LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x798 = INT16_MAX;
	static volatile int32_t x799 = INT32_MAX;
	int64_t x800 = INT64_MAX;
	int64_t t198 = INT64_MAX;

    t198 = ((x797&(x798>x799))+x800);

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MAX;
	volatile uint16_t x803 = 22380U;
	int32_t x804 = INT32_MIN;
	volatile int32_t t199 = INT32_MIN;

    t199 = ((x801&(x802>x803))+x804);

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

