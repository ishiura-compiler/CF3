
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

int8_t x4 = -1;
static int16_t x5 = INT16_MIN;
static int32_t x8 = -1;
static int64_t x10 = 1LL;
int32_t x18 = INT32_MIN;
static int32_t x21 = -32;
volatile int32_t t9 = -46244;
volatile int32_t x43 = -1;
static int8_t x51 = INT8_MIN;
int64_t x55 = -1LL;
static int8_t x61 = INT8_MIN;
static uint32_t t15 = 82U;
int64_t x67 = -2218167LL;
int32_t x70 = INT32_MIN;
volatile int32_t t17 = -380;
int64_t x73 = -8725110LL;
int8_t x76 = INT8_MIN;
int8_t x78 = 0;
volatile int32_t t21 = 16138070;
uint8_t x90 = 89U;
volatile int8_t x92 = INT8_MIN;
static int32_t t22 = 258879;
static int64_t x95 = INT64_MAX;
volatile uint32_t x99 = UINT32_MAX;
int8_t x108 = 1;
static volatile int8_t x114 = INT8_MIN;
static volatile int64_t t28 = 7928862251349705LL;
static volatile uint32_t x117 = UINT32_MAX;
volatile uint64_t t29 = 815165319LLU;
int16_t x124 = INT16_MIN;
uint64_t x125 = 253006376031581LLU;
volatile uint8_t x129 = 7U;
static int8_t x130 = -1;
static int16_t x131 = -20;
int8_t x134 = INT8_MIN;
uint16_t x140 = 3166U;
static int64_t x142 = INT64_MAX;
int8_t x146 = INT8_MIN;
int64_t x147 = -2LL;
int16_t x149 = INT16_MIN;
int32_t x150 = -1;
int8_t x156 = INT8_MAX;
volatile int32_t t38 = 28;
uint64_t x159 = 62971783LLU;
int32_t t39 = -34;
int8_t x163 = INT8_MIN;
uint64_t x166 = UINT64_MAX;
int64_t x170 = -1LL;
static int64_t x181 = INT64_MIN;
uint8_t x182 = 24U;
static int64_t x184 = -1275151431LL;
static int64_t t45 = -814241LL;
int32_t x190 = -1;
int8_t x204 = -1;
volatile int32_t t50 = -2;
int16_t x205 = -214;
static int32_t t51 = -10;
uint64_t x216 = 625LLU;
uint16_t x224 = 29902U;
int16_t x227 = -30;
static uint16_t x228 = 19U;
uint32_t x229 = 7709U;
static uint32_t x230 = 80891750U;
volatile uint64_t t60 = 63400770LLU;
volatile int16_t x247 = -4;
static uint8_t x248 = 6U;
int16_t x250 = INT16_MIN;
int8_t x255 = 21;
int8_t x262 = INT8_MIN;
static volatile uint32_t x263 = UINT32_MAX;
uint8_t x266 = UINT8_MAX;
uint8_t x274 = 6U;
volatile int64_t x275 = INT64_MIN;
int64_t t68 = 98609856008531LL;
volatile uint8_t x279 = 125U;
static volatile int8_t x287 = INT8_MIN;
volatile uint16_t x292 = 25U;
volatile int32_t t72 = 18572;
static volatile int32_t t73 = 14373202;
int16_t x298 = -1;
int32_t t74 = -1;
int8_t x306 = -1;
static uint32_t x311 = 3127U;
int32_t t77 = 1;
int64_t x324 = INT64_MIN;
int32_t t81 = -120910;
int8_t x336 = -1;
uint64_t x337 = UINT64_MAX;
volatile int64_t x341 = INT64_MIN;
static volatile uint64_t x342 = 1364LLU;
volatile int8_t x353 = -1;
volatile int8_t x370 = INT8_MAX;
uint32_t x375 = UINT32_MAX;
int8_t x376 = -2;
volatile int64_t t94 = -1LL;
int8_t x394 = 17;
int16_t x397 = -1;
int16_t x399 = INT16_MIN;
int64_t x402 = 1337587381656411LL;
int32_t t100 = 3;
int8_t x406 = INT8_MAX;
static uint64_t t101 = 6529271LLU;
static int32_t x417 = -1;
static int8_t x425 = INT8_MIN;
uint16_t x428 = UINT16_MAX;
static volatile uint32_t x431 = UINT32_MAX;
static int32_t x447 = -87;
int16_t x449 = -1;
uint16_t x455 = 1386U;
static uint32_t x456 = 4669U;
volatile int32_t x458 = -1;
static int32_t t114 = 1595;
uint8_t x461 = 13U;
int8_t x464 = INT8_MIN;
volatile int8_t x465 = INT8_MIN;
volatile int32_t x471 = INT32_MIN;
static volatile int8_t x476 = 3;
uint64_t x500 = 57365953LLU;
volatile uint64_t x501 = 49339LLU;
int32_t x510 = INT32_MIN;
static volatile int32_t t127 = 724139065;
volatile uint64_t x514 = 12494537676518LLU;
static int16_t x522 = INT16_MIN;
int16_t x530 = INT16_MIN;
uint32_t x534 = 419U;
int8_t x536 = -7;
int32_t t133 = 11;
int8_t x542 = INT8_MAX;
int64_t x543 = 61LL;
static uint16_t x544 = 12U;
int64_t x547 = INT64_MIN;
uint32_t x551 = 13U;
static int32_t x552 = INT32_MAX;
volatile int8_t x554 = 46;
int8_t x561 = 0;
int16_t x563 = -697;
int8_t x566 = INT8_MIN;
static volatile uint32_t x567 = 7964446U;
static int32_t t141 = -2024;
int64_t x574 = 2036031974261009689LL;
int8_t x578 = 1;
int8_t x583 = 14;
int64_t x586 = INT64_MAX;
volatile uint16_t x590 = UINT16_MAX;
static int16_t x591 = INT16_MAX;
int32_t x595 = -1;
uint64_t x600 = UINT64_MAX;
uint16_t x601 = 101U;
static int8_t x605 = 1;
static volatile int16_t x607 = -1;
int32_t t152 = -80;
int8_t x615 = INT8_MAX;
volatile int32_t t153 = -1;
volatile int16_t x628 = -1;
int16_t x632 = INT16_MIN;
volatile int32_t t157 = 3037;
volatile int64_t t158 = -57389959LL;
int16_t x640 = -14;
static uint32_t x646 = 420U;
static int16_t x648 = -1;
static volatile int32_t t161 = -2880;
int16_t x650 = INT16_MAX;
int8_t x652 = INT8_MAX;
volatile uint8_t x653 = 104U;
static int32_t t165 = 50;
static int32_t t166 = 124361;
volatile int64_t t167 = 2212559302521068865LL;
volatile int64_t x678 = -26LL;
int8_t x680 = INT8_MAX;
int32_t t169 = -14;
int32_t x682 = -3481464;
int8_t x693 = INT8_MIN;
static uint16_t x699 = 147U;
int32_t x700 = INT32_MAX;
uint64_t x706 = 34460LLU;
uint64_t x707 = 8369290429624LLU;
int8_t x715 = INT8_MIN;
volatile int64_t t179 = -9914LL;
uint64_t x724 = UINT64_MAX;
int8_t x727 = 36;
static int32_t t182 = 19666;
int8_t x734 = -1;
int32_t x736 = 147368;
volatile int32_t t183 = 0;
int32_t t185 = -47;
int16_t x746 = 145;
int64_t t187 = 537141850LL;
volatile uint16_t x765 = 3U;
int64_t x787 = -230302LL;
int32_t x789 = -1;
static uint32_t x796 = 432927U;


void f0(void) {
    	volatile uint16_t x1 = 1199U;
	volatile int8_t x2 = 0;
	static int32_t x3 = -1;
	volatile int32_t t0 = -99433217;

    t0 = ((x1<=(x2!=x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x6 = UINT64_MAX;
	volatile int64_t x7 = -5522192983566LL;
	static volatile int32_t t1 = 1387;

    t1 = ((x5<=(x6!=x7))&x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	static uint8_t x11 = UINT8_MAX;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 567896923;

    t2 = ((x9<=(x10!=x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 7597LLU;
	int64_t x14 = INT64_MIN;
	static volatile int16_t x15 = INT16_MAX;
	int64_t x16 = 14LL;
	volatile int64_t t3 = -889701093552996LL;

    t3 = ((x13<=(x14!=x15))&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint8_t x19 = 56U;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 1774794736U;

    t4 = ((x17<=(x18!=x19))&x20);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -20;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 45U;
	volatile int32_t t5 = -14411465;

    t5 = ((x21<=(x22!=x23))&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	volatile int16_t x26 = INT16_MAX;
	uint64_t x27 = 2843122598357347LLU;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -55123101;

    t6 = ((x25<=(x26!=x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = 7366U;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -76;

    t7 = ((x29<=(x30!=x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 141448655LLU;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -126;

    t8 = ((x33<=(x34!=x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -1;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -28;
	int16_t x40 = 9;

    t9 = ((x37<=(x38!=x39))&x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int16_t x42 = -4;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -1008562318;

    t10 = ((x41<=(x42!=x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 3955U;
	int16_t x46 = 3846;
	int16_t x47 = -1;
	volatile uint32_t x48 = UINT32_MAX;
	static volatile uint32_t t11 = 10689U;

    t11 = ((x45<=(x46!=x47))&x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	volatile uint16_t x52 = 1U;
	volatile int32_t t12 = -79236;

    t12 = ((x49<=(x50!=x51))&x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 12161390LLU;
	uint32_t x54 = 40U;
	volatile uint8_t x56 = 0U;
	int32_t t13 = -233221;

    t13 = ((x53<=(x54!=x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 44U;
	uint8_t x58 = 58U;
	int16_t x59 = -1;
	int64_t x60 = INT64_MIN;
	static volatile int64_t t14 = -13LL;

    t14 = ((x57<=(x58!=x59))&x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = 744519743;
	volatile int8_t x63 = 8;
	uint32_t x64 = 23457573U;

    t15 = ((x61<=(x62!=x63))&x64);

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MAX;
	static uint64_t x66 = 406817091LLU;
	uint64_t x68 = 27964LLU;
	static volatile uint64_t t16 = 85215761966LLU;

    t16 = ((x65<=(x66!=x67))&x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -3;
	volatile int64_t x71 = INT64_MIN;
	volatile int32_t x72 = INT32_MAX;

    t17 = ((x69<=(x70!=x71))&x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = INT64_MAX;
	uint64_t x75 = UINT64_MAX;
	volatile int32_t t18 = -1040955751;

    t18 = ((x73<=(x74!=x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -50562282;
	static uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 1861403U;
	static uint32_t t19 = 604U;

    t19 = ((x77<=(x78!=x79))&x80);

    if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	volatile int8_t x82 = -1;
	uint8_t x83 = 0U;
	static uint64_t x84 = 536790579784450LLU;
	uint64_t t20 = 14500LLU;

    t20 = ((x81<=(x82!=x83))&x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	static int32_t x86 = INT32_MIN;
	static int64_t x87 = INT64_MAX;
	int16_t x88 = -110;

    t21 = ((x85<=(x86!=x87))&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	int16_t x91 = INT16_MAX;

    t22 = ((x89<=(x90!=x91))&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	int8_t x94 = 29;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 1858;

    t23 = ((x93<=(x94!=x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x97 = 1U;
	static volatile int8_t x98 = -1;
	uint8_t x100 = 3U;
	volatile int32_t t24 = 17;

    t24 = ((x97<=(x98!=x99))&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = 1U;
	int32_t x102 = -1;
	static int16_t x103 = INT16_MIN;
	uint64_t x104 = 0LLU;
	volatile uint64_t t25 = 2058485374503LLU;

    t25 = ((x101<=(x102!=x103))&x104);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 586U;
	uint8_t x106 = 15U;
	static uint32_t x107 = UINT32_MAX;
	int32_t t26 = -2;

    t26 = ((x105<=(x106!=x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	volatile int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 0;

    t27 = ((x109<=(x110!=x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x113 = UINT16_MAX;
	int16_t x115 = -1;
	int64_t x116 = -1LL;

    t28 = ((x113<=(x114!=x115))&x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MAX;
	int64_t x119 = INT64_MAX;
	static uint64_t x120 = UINT64_MAX;

    t29 = ((x117<=(x118!=x119))&x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	int32_t t30 = -1;

    t30 = ((x121<=(x122!=x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MAX;
	volatile int64_t x128 = 1341563381834LL;
	volatile int64_t t31 = -104985831674LL;

    t31 = ((x125<=(x126!=x127))&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x132 = INT16_MAX;
	int32_t t32 = 1;

    t32 = ((x129<=(x130!=x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MIN;
	static int8_t x135 = 0;
	uint8_t x136 = 3U;
	int32_t t33 = -992156;

    t33 = ((x133<=(x134!=x135))&x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 83U;
	static int32_t x138 = -1;
	int64_t x139 = INT64_MAX;
	volatile int32_t t34 = -30161629;

    t34 = ((x137<=(x138!=x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = INT64_MAX;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;
	volatile int64_t t35 = -30490063643216985LL;

    t35 = ((x141<=(x142!=x143))&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 8682039617806LLU;
	int16_t x148 = 131;
	static volatile int32_t t36 = -171494;

    t36 = ((x145<=(x146!=x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x151 = INT8_MAX;
	uint32_t x152 = UINT32_MAX;
	static volatile uint32_t t37 = 27255620U;

    t37 = ((x149<=(x150!=x151))&x152);

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 193U;
	static volatile int8_t x154 = INT8_MIN;
	static uint32_t x155 = 564807U;

    t38 = ((x153<=(x154!=x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	static uint16_t x158 = 18U;
	int16_t x160 = INT16_MIN;

    t39 = ((x157<=(x158!=x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	uint64_t x162 = 4182835268LLU;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 724;

    t40 = ((x161<=(x162!=x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	int64_t x167 = INT64_MIN;
	static volatile int8_t x168 = INT8_MAX;
	volatile int32_t t41 = 47;

    t41 = ((x165<=(x166!=x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 1004LLU;
	int16_t x171 = INT16_MAX;
	uint16_t x172 = 13488U;
	int32_t t42 = -10409036;

    t42 = ((x169<=(x170!=x171))&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 11U;
	int32_t x174 = -4919687;
	int64_t x175 = INT64_MAX;
	volatile int64_t x176 = -1LL;
	int64_t t43 = -504LL;

    t43 = ((x173<=(x174!=x175))&x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile uint64_t x178 = 10595297888568LLU;
	int8_t x179 = -1;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = 313931461724805LL;

    t44 = ((x177<=(x178!=x179))&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x183 = INT32_MIN;

    t45 = ((x181<=(x182!=x183))&x184);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MAX;
	volatile uint8_t x188 = 25U;
	volatile int32_t t46 = 41;

    t46 = ((x185<=(x186!=x187))&x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	static int32_t x192 = INT32_MAX;
	int32_t t47 = 743424866;

    t47 = ((x189<=(x190!=x191))&x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 24070U;
	int64_t x194 = INT64_MIN;
	int16_t x195 = -1;
	volatile int32_t x196 = -1;
	volatile int32_t t48 = 2;

    t48 = ((x193<=(x194!=x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 74U;
	volatile int32_t t49 = -5218;

    t49 = ((x197<=(x198!=x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = INT8_MAX;
	static int8_t x202 = 5;
	uint16_t x203 = 3U;

    t50 = ((x201<=(x202!=x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = 2;
	static int16_t x207 = -1;
	int16_t x208 = 31;

    t51 = ((x205<=(x206!=x207))&x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 60U;
	int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MAX;
	int32_t x212 = 11179;
	volatile int32_t t52 = -52756844;

    t52 = ((x209<=(x210!=x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = UINT32_MAX;
	volatile uint64_t t53 = 18400787531LLU;

    t53 = ((x213<=(x214!=x215))&x216);

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	static volatile int32_t x218 = -1;
	static int16_t x219 = INT16_MIN;
	int32_t x220 = 7890;
	volatile int32_t t54 = -468;

    t54 = ((x217<=(x218!=x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -2;
	uint8_t x222 = 33U;
	int8_t x223 = -1;
	int32_t t55 = -372036526;

    t55 = ((x221<=(x222!=x223))&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 1456428645LLU;
	volatile int8_t x226 = 7;
	int32_t t56 = 49078758;

    t56 = ((x225<=(x226!=x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x231 = -258;
	static int8_t x232 = -1;
	static volatile int32_t t57 = -1565;

    t57 = ((x229<=(x230!=x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 1579053377905LL;
	int8_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 6041;

    t58 = ((x233<=(x234!=x235))&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 36381922LL;
	int16_t x238 = -1;
	uint32_t x239 = 108917595U;
	int8_t x240 = 50;
	int32_t t59 = 3400196;

    t59 = ((x237<=(x238!=x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 404083665U;
	static int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;

    t60 = ((x241<=(x242!=x243))&x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	int32_t t61 = 0;

    t61 = ((x245<=(x246!=x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = UINT64_MAX;
	static int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	static int32_t t62 = 2359055;

    t62 = ((x249<=(x250!=x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	uint32_t x256 = 5984280U;
	uint32_t t63 = 24000545U;

    t63 = ((x253<=(x254!=x255))&x256);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x257 = 333576266086LLU;
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = INT32_MIN;
	static int16_t x260 = INT16_MAX;
	volatile int32_t t64 = 3;

    t64 = ((x257<=(x258!=x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = 265;
	uint8_t x264 = 29U;
	volatile int32_t t65 = -1;

    t65 = ((x261<=(x262!=x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -644778;
	static int8_t x267 = -41;
	int16_t x268 = 0;
	volatile int32_t t66 = 23;

    t66 = ((x265<=(x266!=x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 35U;
	uint64_t x270 = 13621510LLU;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t67 = -3;

    t67 = ((x269<=(x270!=x271))&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 24U;
	static int64_t x276 = -1LL;

    t68 = ((x273<=(x274!=x275))&x276);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	int8_t x278 = INT8_MAX;
	volatile int64_t x280 = INT64_MIN;
	static volatile int64_t t69 = 6341998LL;

    t69 = ((x277<=(x278!=x279))&x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MIN;
	volatile uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 0U;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 982;

    t70 = ((x281<=(x282!=x283))&x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	volatile uint8_t x286 = 3U;
	volatile int64_t x288 = -390373437650618756LL;
	int64_t t71 = 1633224774793358LL;

    t71 = ((x285<=(x286!=x287))&x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x289 = UINT64_MAX;
	static uint16_t x290 = 29018U;
	static volatile int8_t x291 = -1;

    t72 = ((x289<=(x290!=x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 381LLU;
	static uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 14986U;
	static uint16_t x296 = UINT16_MAX;

    t73 = ((x293<=(x294!=x295))&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = 10;
	static int8_t x299 = 2;
	static int16_t x300 = 3426;

    t74 = ((x297<=(x298!=x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 8;
	uint16_t x302 = 3287U;
	uint32_t x303 = 3594U;
	int32_t x304 = 813281016;
	volatile int32_t t75 = 9;

    t75 = ((x301<=(x302!=x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	volatile int32_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t76 = -3733258032983852103LL;

    t76 = ((x305<=(x306!=x307))&x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = -1;
	int64_t x310 = -1LL;
	int32_t x312 = INT32_MAX;

    t77 = ((x309<=(x310!=x311))&x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 161335U;
	static int32_t x314 = 1044;
	static int64_t x315 = -1LL;
	int32_t x316 = -1;
	volatile int32_t t78 = 0;

    t78 = ((x313<=(x314!=x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x317 = -1;
	volatile int8_t x318 = 1;
	int64_t x319 = -3LL;
	volatile int32_t x320 = 833071;
	int32_t t79 = 13769;

    t79 = ((x317<=(x318!=x319))&x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	volatile int8_t x322 = INT8_MIN;
	volatile uint16_t x323 = UINT16_MAX;
	int64_t t80 = -3473578541207340785LL;

    t80 = ((x321<=(x322!=x323))&x324);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 412LLU;
	static volatile uint32_t x326 = 180681052U;
	volatile int32_t x327 = 1941317;
	static volatile uint8_t x328 = 114U;

    t81 = ((x325<=(x326!=x327))&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 124U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -220;

    t82 = ((x329<=(x330!=x331))&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = 0;
	static uint32_t x334 = UINT32_MAX;
	static int16_t x335 = INT16_MIN;
	int32_t t83 = 7583853;

    t83 = ((x333<=(x334!=x335))&x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -1LL;
	int16_t x339 = -1;
	int32_t x340 = -1;
	volatile int32_t t84 = 801738627;

    t84 = ((x337<=(x338!=x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 21U;
	int32_t t85 = 116856;

    t85 = ((x341<=(x342!=x343))&x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -7;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MAX;
	int32_t x348 = 23;
	static volatile int32_t t86 = -105212;

    t86 = ((x345<=(x346!=x347))&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MAX;
	int8_t x352 = 1;
	static int32_t t87 = 796784299;

    t87 = ((x349<=(x350!=x351))&x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = 0;
	volatile int8_t x355 = INT8_MAX;
	uint16_t x356 = 774U;
	int32_t t88 = -520938;

    t88 = ((x353<=(x354!=x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MAX;
	static volatile int8_t x358 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 407977;

    t89 = ((x357<=(x358!=x359))&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MAX;
	int64_t x362 = -1LL;
	static int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t90 = 8132141784850980317LLU;

    t90 = ((x361<=(x362!=x363))&x364);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	static int8_t x366 = INT8_MAX;
	uint16_t x367 = 22U;
	int64_t x368 = INT64_MIN;
	int64_t t91 = 1743294352LL;

    t91 = ((x365<=(x366!=x367))&x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	int64_t x371 = INT64_MAX;
	static uint16_t x372 = UINT16_MAX;
	int32_t t92 = 29;

    t92 = ((x369<=(x370!=x371))&x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 33U;
	static uint16_t x374 = 3U;
	volatile int32_t t93 = -586234;

    t93 = ((x373<=(x374!=x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MAX;
	static int32_t x378 = INT32_MAX;
	volatile uint32_t x379 = 12584506U;
	int64_t x380 = INT64_MIN;

    t94 = ((x377<=(x378!=x379))&x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -1LL;
	uint64_t x382 = UINT64_MAX;
	static uint16_t x383 = 29U;
	uint64_t x384 = 4429337LLU;
	volatile uint64_t t95 = 259LLU;

    t95 = ((x381<=(x382!=x383))&x384);

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	volatile int16_t x388 = -40;
	int32_t t96 = -7;

    t96 = ((x385<=(x386!=x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 11463357U;
	volatile int64_t x390 = INT64_MAX;
	int32_t x391 = 48176;
	int64_t x392 = 52739LL;
	int64_t t97 = -75573180256742LL;

    t97 = ((x389<=(x390!=x391))&x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = INT8_MAX;
	int64_t x395 = 6455760LL;
	int64_t x396 = INT64_MAX;
	static int64_t t98 = -1172811LL;

    t98 = ((x393<=(x394!=x395))&x396);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x398 = INT16_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 35336066;

    t99 = ((x397<=(x398!=x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = INT32_MIN;

    t100 = ((x401<=(x402!=x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = INT32_MIN;
	int16_t x407 = -6302;
	uint64_t x408 = 64015547797114671LLU;

    t101 = ((x405<=(x406!=x407))&x408);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	static uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t102 = 97546435;

    t102 = ((x409<=(x410!=x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = 7561289;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MAX;
	uint8_t x416 = 12U;
	volatile int32_t t103 = 99;

    t103 = ((x413<=(x414!=x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MIN;
	int8_t x419 = -1;
	static uint8_t x420 = 16U;
	volatile int32_t t104 = -162;

    t104 = ((x417<=(x418!=x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -2;
	int16_t x422 = INT16_MAX;
	int8_t x423 = 0;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = 11460;

    t105 = ((x421<=(x422!=x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = UINT64_MAX;
	int64_t x427 = INT64_MIN;
	volatile int32_t t106 = -121460872;

    t106 = ((x425<=(x426!=x427))&x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MIN;
	int8_t x430 = -54;
	int64_t x432 = INT64_MAX;
	int64_t t107 = 922017414661LL;

    t107 = ((x429<=(x430!=x431))&x432);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = UINT32_MAX;
	static uint32_t t108 = 2563463U;

    t108 = ((x433<=(x434!=x435))&x436);

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	static int64_t x439 = -382264252674075683LL;
	static int8_t x440 = -1;
	int32_t t109 = -21356083;

    t109 = ((x437<=(x438!=x439))&x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	uint16_t x442 = 853U;
	int8_t x443 = -1;
	volatile int32_t x444 = INT32_MIN;
	static int32_t t110 = 3755441;

    t110 = ((x441<=(x442!=x443))&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MIN;
	uint32_t x446 = UINT32_MAX;
	uint64_t x448 = 121LLU;
	uint64_t t111 = 18735529327LLU;

    t111 = ((x445<=(x446!=x447))&x448);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = 276LL;
	uint16_t x451 = UINT16_MAX;
	static uint16_t x452 = UINT16_MAX;
	volatile int32_t t112 = -824;

    t112 = ((x449<=(x450!=x451))&x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	uint64_t x454 = 1778168032659802429LLU;
	uint32_t t113 = 206038U;

    t113 = ((x453<=(x454!=x455))&x456);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	int32_t x459 = -209898;
	int8_t x460 = INT8_MAX;

    t114 = ((x457<=(x458!=x459))&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = INT8_MAX;
	static uint16_t x463 = 30U;
	int32_t t115 = 482390;

    t115 = ((x461<=(x462!=x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = -1;
	volatile int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	int32_t t116 = 339;

    t116 = ((x465<=(x466!=x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x469 = UINT8_MAX;
	static volatile uint8_t x470 = UINT8_MAX;
	int64_t x472 = INT64_MIN;
	volatile int64_t t117 = -6217781429LL;

    t117 = ((x469<=(x470!=x471))&x472);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	int32_t x475 = -451269;
	int32_t t118 = 12;

    t118 = ((x473<=(x474!=x475))&x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	uint8_t x478 = UINT8_MAX;
	volatile int64_t x479 = -1LL;
	int32_t x480 = 0;
	int32_t t119 = 244281957;

    t119 = ((x477<=(x478!=x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 12U;
	static int16_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	int8_t x484 = 1;
	int32_t t120 = 7414043;

    t120 = ((x481<=(x482!=x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static uint32_t x486 = UINT32_MAX;
	static volatile int64_t x487 = INT64_MIN;
	int32_t x488 = -5611410;
	static volatile int32_t t121 = 20860564;

    t121 = ((x485<=(x486!=x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -1LL;
	uint32_t x490 = 26632U;
	uint64_t x491 = 48934041759LLU;
	static volatile int32_t x492 = INT32_MIN;
	static volatile int32_t t122 = 147675;

    t122 = ((x489<=(x490!=x491))&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x493 = 58U;
	int16_t x494 = -1;
	static int64_t x495 = INT64_MAX;
	uint8_t x496 = UINT8_MAX;
	int32_t t123 = 285166733;

    t123 = ((x493<=(x494!=x495))&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	static int8_t x498 = INT8_MIN;
	static int32_t x499 = INT32_MIN;
	uint64_t t124 = 561613123084LLU;

    t124 = ((x497<=(x498!=x499))&x500);

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 18U;
	volatile int64_t x503 = -25325626265LL;
	static volatile int32_t x504 = -250189;
	int32_t t125 = 1;

    t125 = ((x501<=(x502!=x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	volatile uint64_t x506 = 1529LLU;
	uint8_t x507 = 80U;
	int32_t x508 = -1498041;
	static int32_t t126 = 431281305;

    t126 = ((x505<=(x506!=x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	static int8_t x511 = INT8_MIN;
	int32_t x512 = -1;

    t127 = ((x509<=(x510!=x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 26226903U;
	uint64_t x515 = 180741088LLU;
	static int64_t x516 = 14244085278822533LL;
	volatile int64_t t128 = -1053471755044582716LL;

    t128 = ((x513<=(x514!=x515))&x516);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = INT32_MIN;
	int64_t x518 = INT64_MIN;
	static volatile int32_t x519 = -1;
	int64_t x520 = INT64_MAX;
	volatile int64_t t129 = 61LL;

    t129 = ((x517<=(x518!=x519))&x520);

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -25618684680617LL;
	static uint16_t x523 = 1U;
	int16_t x524 = -3738;
	int32_t t130 = -9039;

    t130 = ((x521<=(x522!=x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -2923;
	int8_t x526 = -4;
	static int32_t x527 = -1;
	int32_t x528 = -1;
	volatile int32_t t131 = -728877006;

    t131 = ((x525<=(x526!=x527))&x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = INT8_MAX;
	int32_t x531 = INT32_MIN;
	volatile int64_t x532 = -1LL;
	int64_t t132 = 27282793LL;

    t132 = ((x529<=(x530!=x531))&x532);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x533 = INT64_MIN;
	int64_t x535 = INT64_MIN;

    t133 = ((x533<=(x534!=x535))&x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 0;
	uint16_t x538 = 87U;
	static volatile uint16_t x539 = 2540U;
	uint32_t x540 = UINT32_MAX;
	volatile uint32_t t134 = 13250493U;

    t134 = ((x537<=(x538!=x539))&x540);

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -114;
	volatile int32_t t135 = -3360705;

    t135 = ((x541<=(x542!=x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 12988670U;
	int32_t x546 = INT32_MAX;
	int8_t x548 = 0;
	int32_t t136 = -6861;

    t136 = ((x545<=(x546!=x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int16_t x550 = -1;
	static volatile int32_t t137 = 1991747;

    t137 = ((x549<=(x550!=x551))&x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	uint16_t x555 = 354U;
	int8_t x556 = -40;
	volatile int32_t t138 = -1412;

    t138 = ((x553<=(x554!=x555))&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	volatile int64_t x558 = INT64_MAX;
	static int64_t x559 = INT64_MAX;
	volatile int16_t x560 = INT16_MIN;
	volatile int32_t t139 = -353;

    t139 = ((x557<=(x558!=x559))&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x562 = 1814U;
	uint32_t x564 = UINT32_MAX;
	uint32_t t140 = 61764U;

    t140 = ((x561<=(x562!=x563))&x564);

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	static int32_t x568 = INT32_MIN;

    t141 = ((x565<=(x566!=x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	int64_t x570 = -874566702448LL;
	int64_t x571 = -1LL;
	int32_t x572 = 552;
	int32_t t142 = -15;

    t142 = ((x569<=(x570!=x571))&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = 22;
	static volatile int32_t x575 = INT32_MAX;
	static uint8_t x576 = 44U;
	volatile int32_t t143 = 3694547;

    t143 = ((x573<=(x574!=x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = INT16_MAX;
	int8_t x579 = INT8_MAX;
	static uint32_t x580 = 13635U;
	static volatile uint32_t t144 = 906401U;

    t144 = ((x577<=(x578!=x579))&x580);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	static volatile uint32_t x582 = 1161372820U;
	int8_t x584 = 0;
	volatile int32_t t145 = 862942;

    t145 = ((x581<=(x582!=x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	static int8_t x587 = INT8_MIN;
	int8_t x588 = -1;
	volatile int32_t t146 = 1091;

    t146 = ((x585<=(x586!=x587))&x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	int32_t x592 = -3218;
	int32_t t147 = -3060101;

    t147 = ((x589<=(x590!=x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MIN;
	int32_t x596 = INT32_MAX;
	int32_t t148 = -6277;

    t148 = ((x593<=(x594!=x595))&x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x597 = UINT8_MAX;
	int32_t x598 = INT32_MIN;
	static volatile uint32_t x599 = 1U;
	uint64_t t149 = 6784412247149028LLU;

    t149 = ((x597<=(x598!=x599))&x600);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = INT16_MIN;
	int32_t x603 = INT32_MIN;
	static uint64_t x604 = 824LLU;
	volatile uint64_t t150 = 261076415125LLU;

    t150 = ((x601<=(x602!=x603))&x604);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x606 = 5288327774209LLU;
	int64_t x608 = -3565912042429213LL;
	int64_t t151 = 235706LL;

    t151 = ((x605<=(x606!=x607))&x608);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	int32_t x610 = -61207376;
	uint32_t x611 = UINT32_MAX;
	static int32_t x612 = INT32_MAX;

    t152 = ((x609<=(x610!=x611))&x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x613 = 3003146420583LLU;
	volatile uint64_t x614 = 1LLU;
	static volatile int32_t x616 = INT32_MIN;

    t153 = ((x613<=(x614!=x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x617 = UINT32_MAX;
	volatile int32_t x618 = 57;
	int64_t x619 = 226531500LL;
	static volatile uint8_t x620 = 13U;
	volatile int32_t t154 = -37033817;

    t154 = ((x617<=(x618!=x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	int32_t x622 = -1;
	int64_t x623 = INT64_MIN;
	volatile int16_t x624 = -1;
	int32_t t155 = -949065211;

    t155 = ((x621<=(x622!=x623))&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = 6068;
	static volatile int16_t x626 = INT16_MIN;
	int16_t x627 = INT16_MIN;
	int32_t t156 = 170;

    t156 = ((x625<=(x626!=x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x629 = 11U;
	int16_t x630 = -2;
	int64_t x631 = 121420917LL;

    t157 = ((x629<=(x630!=x631))&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -6;
	uint8_t x634 = 111U;
	volatile int64_t x635 = INT64_MIN;
	int64_t x636 = 17273653587415LL;

    t158 = ((x633<=(x634!=x635))&x636);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	static int8_t x638 = INT8_MAX;
	int8_t x639 = INT8_MAX;
	int32_t t159 = -21;

    t159 = ((x637<=(x638!=x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	uint16_t x642 = UINT16_MAX;
	int8_t x643 = -1;
	static int64_t x644 = -4270LL;
	int64_t t160 = 1LL;

    t160 = ((x641<=(x642!=x643))&x644);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 0U;
	uint8_t x647 = UINT8_MAX;

    t161 = ((x645<=(x646!=x647))&x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x651 = INT8_MAX;
	static volatile int32_t t162 = 25941626;

    t162 = ((x649<=(x650!=x651))&x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x654 = INT32_MIN;
	volatile int64_t x655 = -2529LL;
	int8_t x656 = INT8_MAX;
	int32_t t163 = -223609;

    t163 = ((x653<=(x654!=x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = INT32_MIN;
	int16_t x658 = INT16_MAX;
	uint32_t x659 = UINT32_MAX;
	volatile int32_t x660 = -29;
	static int32_t t164 = 0;

    t164 = ((x657<=(x658!=x659))&x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MAX;
	uint64_t x662 = 444LLU;
	int32_t x663 = -1;
	volatile int32_t x664 = INT32_MIN;

    t165 = ((x661<=(x662!=x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 7LLU;
	volatile uint64_t x666 = 459328038055LLU;
	int64_t x667 = INT64_MAX;
	volatile uint8_t x668 = 1U;

    t166 = ((x665<=(x666!=x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	uint16_t x670 = UINT16_MAX;
	uint8_t x671 = UINT8_MAX;
	int64_t x672 = INT64_MIN;

    t167 = ((x669<=(x670!=x671))&x672);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 1U;
	int32_t x674 = 15186;
	int32_t x675 = INT32_MIN;
	int32_t x676 = 6238;
	volatile int32_t t168 = 509144;

    t168 = ((x673<=(x674!=x675))&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = 2632;
	static int8_t x679 = 6;

    t169 = ((x677<=(x678!=x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x681 = INT8_MIN;
	volatile int64_t x683 = 197466125LL;
	static int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 1255;

    t170 = ((x681<=(x682!=x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 370U;
	volatile int8_t x686 = INT8_MIN;
	uint32_t x687 = UINT32_MAX;
	static uint32_t x688 = UINT32_MAX;
	static uint32_t t171 = 623U;

    t171 = ((x685<=(x686!=x687))&x688);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -35;
	uint32_t x690 = 37609U;
	int16_t x691 = 0;
	uint32_t x692 = 1429U;
	volatile uint32_t t172 = 6180U;

    t172 = ((x689<=(x690!=x691))&x692);

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = INT16_MIN;
	int16_t x695 = INT16_MIN;
	volatile uint64_t x696 = 15033545154594LLU;
	static uint64_t t173 = 62LLU;

    t173 = ((x693<=(x694!=x695))&x696);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = 452;
	int32_t x698 = -9783;
	int32_t t174 = -3;

    t174 = ((x697<=(x698!=x699))&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	int8_t x702 = -7;
	int32_t x703 = INT32_MAX;
	int8_t x704 = INT8_MIN;
	int32_t t175 = 0;

    t175 = ((x701<=(x702!=x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	uint64_t x708 = 940826589016LLU;
	uint64_t t176 = 782763517955LLU;

    t176 = ((x705<=(x706!=x707))&x708);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x709 = INT8_MIN;
	int64_t x710 = -45324203LL;
	int16_t x711 = INT16_MIN;
	static volatile int32_t x712 = 529130;
	int32_t t177 = 1;

    t177 = ((x709<=(x710!=x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	int8_t x714 = INT8_MIN;
	uint16_t x716 = 24U;
	int32_t t178 = 3;

    t178 = ((x713<=(x714!=x715))&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -3170;
	uint8_t x718 = 6U;
	int16_t x719 = INT16_MIN;
	volatile int64_t x720 = -11877LL;

    t179 = ((x717<=(x718!=x719))&x720);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 1;
	int32_t x722 = INT32_MIN;
	volatile int16_t x723 = INT16_MAX;
	volatile uint64_t t180 = 5LLU;

    t180 = ((x721<=(x722!=x723))&x724);

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MAX;
	uint16_t x726 = UINT16_MAX;
	static int16_t x728 = 0;
	volatile int32_t t181 = -385968976;

    t181 = ((x725<=(x726!=x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -49;
	int32_t x730 = INT32_MAX;
	int64_t x731 = -1LL;
	uint16_t x732 = 592U;

    t182 = ((x729<=(x730!=x731))&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	static volatile int16_t x735 = 26;

    t183 = ((x733<=(x734!=x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	uint16_t x738 = 0U;
	int32_t x739 = INT32_MIN;
	static volatile uint16_t x740 = 229U;
	int32_t t184 = 2790151;

    t184 = ((x737<=(x738!=x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	uint8_t x742 = 21U;
	static int32_t x743 = 509503967;
	volatile int8_t x744 = INT8_MIN;

    t185 = ((x741<=(x742!=x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	volatile int16_t x747 = 3567;
	static volatile int32_t x748 = INT32_MAX;
	static volatile int32_t t186 = 393;

    t186 = ((x745<=(x746!=x747))&x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static int32_t x750 = INT32_MIN;
	static uint16_t x751 = 228U;
	int64_t x752 = INT64_MIN;

    t187 = ((x749<=(x750!=x751))&x752);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 6LLU;
	int8_t x754 = -36;
	volatile uint16_t x755 = UINT16_MAX;
	int16_t x756 = -13567;
	volatile int32_t t188 = -100425245;

    t188 = ((x753<=(x754!=x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MIN;
	int64_t x758 = INT64_MAX;
	int64_t x759 = 7LL;
	static volatile int8_t x760 = -1;
	volatile int32_t t189 = 23244207;

    t189 = ((x757<=(x758!=x759))&x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	static int16_t x762 = 1;
	volatile int64_t x763 = -893LL;
	int16_t x764 = INT16_MIN;
	int32_t t190 = 35115016;

    t190 = ((x761<=(x762!=x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 71U;
	int16_t x767 = INT16_MIN;
	static uint16_t x768 = 5U;
	static volatile int32_t t191 = 323023474;

    t191 = ((x765<=(x766!=x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	int64_t x770 = INT64_MAX;
	int64_t x771 = 7LL;
	volatile uint32_t x772 = 29254668U;
	static volatile uint32_t t192 = 41098146U;

    t192 = ((x769<=(x770!=x771))&x772);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MIN;
	int32_t x774 = -1;
	int8_t x775 = -1;
	static volatile uint32_t x776 = 1119641599U;
	volatile uint32_t t193 = 353U;

    t193 = ((x773<=(x774!=x775))&x776);

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	volatile uint16_t x778 = 20615U;
	int64_t x779 = -1LL;
	uint16_t x780 = 928U;
	int32_t t194 = -704078347;

    t194 = ((x777<=(x778!=x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MAX;
	uint64_t x782 = UINT64_MAX;
	volatile int16_t x783 = -128;
	int32_t x784 = 864285;
	volatile int32_t t195 = -13;

    t195 = ((x781<=(x782!=x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = INT8_MAX;
	int32_t x786 = 2300;
	static int16_t x788 = -1;
	int32_t t196 = -21;

    t196 = ((x785<=(x786!=x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MAX;
	volatile int64_t x791 = INT64_MIN;
	uint64_t x792 = 190856447184368316LLU;
	static volatile uint64_t t197 = 6761409LLU;

    t197 = ((x789<=(x790!=x791))&x792);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int32_t x794 = -64;
	int8_t x795 = INT8_MAX;
	volatile uint32_t t198 = 829227U;

    t198 = ((x793<=(x794!=x795))&x796);

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = 10U;
	int64_t x798 = -1LL;
	int32_t x799 = 3;
	static int16_t x800 = INT16_MAX;
	volatile int32_t t199 = -3331;

    t199 = ((x797<=(x798!=x799))&x800);

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

