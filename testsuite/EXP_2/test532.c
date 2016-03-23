
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

uint32_t x8 = 102U;
int64_t t2 = INT64_MIN;
int64_t x16 = INT64_MIN;
uint8_t x18 = UINT8_MAX;
static volatile uint64_t x20 = UINT64_MAX;
int8_t x21 = -16;
int64_t x23 = -1LL;
int8_t x36 = INT8_MIN;
int32_t x41 = -1;
static volatile int32_t t8 = -21;
uint64_t x50 = 54LLU;
int8_t x51 = 0;
int32_t t10 = 447500;
int64_t x59 = INT64_MAX;
volatile int16_t x60 = -34;
uint8_t x63 = UINT8_MAX;
volatile uint64_t x66 = 13604086699LLU;
uint8_t x70 = UINT8_MAX;
volatile uint64_t x71 = UINT64_MAX;
volatile uint8_t x74 = UINT8_MAX;
static uint32_t x109 = UINT32_MAX;
int64_t x110 = -278148LL;
int16_t x118 = -1;
int32_t x120 = -81;
volatile uint32_t t23 = 508U;
volatile int32_t x133 = -1;
int16_t x139 = -1;
int32_t t25 = 989;
static uint16_t x141 = 0U;
uint64_t x144 = 9LLU;
static int64_t t27 = INT64_MAX;
int64_t x166 = 32218LL;
int8_t x167 = -1;
int32_t t32 = -582372;
int64_t x183 = INT64_MAX;
static int16_t x185 = -1;
static int64_t x189 = INT64_MIN;
int64_t x201 = -1LL;
static volatile uint64_t t37 = UINT64_MAX;
int16_t x214 = INT16_MIN;
static volatile int64_t t38 = -245664LL;
int64_t x225 = 5LL;
int16_t x230 = -1;
int16_t x249 = INT16_MIN;
static int64_t x256 = -1LL;
int32_t x268 = INT32_MIN;
volatile int32_t t46 = INT32_MIN;
static uint16_t x270 = UINT16_MAX;
static volatile int64_t x272 = INT64_MIN;
int32_t x273 = -127855;
static int32_t x287 = 6036;
int8_t x307 = INT8_MIN;
volatile int64_t x309 = -4238683688984746LL;
uint64_t x310 = 87LLU;
int16_t x311 = INT16_MIN;
volatile uint64_t x312 = UINT64_MAX;
int16_t x319 = 0;
int32_t x325 = -66;
volatile int8_t x340 = INT8_MIN;
int32_t t57 = 802333;
uint32_t x342 = UINT32_MAX;
static uint64_t x346 = 472LLU;
volatile int64_t x348 = 453941580LL;
static volatile int8_t x352 = 8;
int32_t t61 = -4885;
static volatile int32_t t64 = -38774587;
volatile uint16_t x377 = 21639U;
int64_t x380 = INT64_MIN;
static int64_t x387 = -1LL;
int64_t x399 = -1LL;
int32_t x401 = INT32_MIN;
static int64_t x402 = -1LL;
int8_t x404 = -1;
int32_t x405 = INT32_MAX;
uint8_t x412 = UINT8_MAX;
volatile uint16_t x414 = 2023U;
int8_t x415 = INT8_MIN;
int8_t x416 = INT8_MIN;
volatile uint64_t x422 = 125177990911630739LLU;
volatile int32_t t76 = 17;
int32_t x425 = -23;
static uint64_t x426 = UINT64_MAX;
int32_t x427 = INT32_MIN;
volatile int64_t x436 = -2024887LL;
static uint32_t x446 = UINT32_MAX;
int32_t t80 = 824;
int32_t t81 = -405225093;
volatile int64_t x454 = -1LL;
int64_t t82 = -117884919889LL;
uint64_t x463 = UINT64_MAX;
int32_t t83 = -1;
int64_t x465 = -1LL;
uint16_t x470 = 2U;
uint64_t x474 = UINT64_MAX;
static int8_t x479 = INT8_MAX;
volatile int32_t x486 = -1;
uint16_t x495 = 7864U;
static volatile int32_t t90 = INT32_MIN;
uint8_t x498 = 3U;
static volatile uint16_t x504 = UINT16_MAX;
int32_t x505 = 2449231;
volatile int32_t t93 = 12;
volatile int64_t x515 = -1LL;
int64_t t95 = 2760836957487894617LL;
volatile int64_t x522 = -1005LL;
volatile int32_t x524 = INT32_MIN;
int32_t t97 = INT32_MIN;
int32_t t98 = INT32_MAX;
int64_t x537 = INT64_MAX;
volatile int8_t x541 = INT8_MAX;
volatile int32_t x552 = INT32_MAX;
int64_t x558 = -124525135LL;
volatile uint32_t x571 = 12363U;
uint8_t x572 = 1U;
uint64_t t108 = 29LLU;
int64_t t110 = -7731LL;
uint16_t x593 = 771U;
uint64_t x594 = 82099923670502LLU;
volatile int64_t t112 = -47413267400095101LL;
static int16_t x606 = -1;
int16_t x607 = INT16_MIN;
volatile int32_t t114 = INT32_MIN;
int64_t x613 = INT64_MAX;
int8_t x624 = -44;
int16_t x636 = -3387;
static int8_t x644 = 0;
int32_t x645 = -1;
static int32_t x646 = 257;
int16_t x659 = -1;
volatile uint32_t x670 = 4792151U;
int64_t x673 = INT64_MIN;
uint32_t x678 = 590267395U;
uint64_t x682 = 17527201LLU;
static uint16_t x683 = 58U;
uint64_t x690 = 1LLU;
volatile uint8_t x693 = UINT8_MAX;
uint16_t x696 = UINT16_MAX;
int32_t t128 = -33012171;
volatile int32_t t129 = -43153;
int64_t x701 = 18LL;
volatile int64_t x704 = 710106629860474541LL;
volatile int64_t t130 = -57036628422LL;
int32_t t133 = -1490;
int64_t x726 = 3276819012768789623LL;
volatile int32_t t135 = -941014;
int16_t x749 = INT16_MAX;
static int8_t x758 = INT8_MIN;
volatile int8_t x759 = INT8_MIN;
int64_t x761 = INT64_MIN;
int8_t x764 = INT8_MIN;
static int8_t x769 = 6;
uint8_t x777 = 1U;
int16_t x798 = 1913;
static int32_t t147 = 430;
int64_t x813 = INT64_MAX;
int8_t x815 = INT8_MIN;
int64_t x828 = -1LL;
uint8_t x831 = 7U;
volatile int16_t x842 = INT16_MAX;
volatile int64_t t155 = INT64_MAX;
int16_t x861 = INT16_MIN;
uint32_t x862 = 13376827U;
int64_t x865 = INT64_MIN;
int64_t x866 = -1LL;
int16_t x867 = -1;
static volatile int64_t x876 = -1LL;
uint32_t x877 = 2710076U;
uint32_t x879 = 116551U;
int16_t x884 = INT16_MIN;
volatile int32_t t160 = 0;
int64_t x889 = INT64_MAX;
int16_t x891 = INT16_MIN;
volatile uint16_t x892 = 12U;
volatile int64_t x898 = -1LL;
volatile int64_t x900 = INT64_MIN;
uint16_t x901 = 3171U;
volatile uint8_t x902 = UINT8_MAX;
int64_t t164 = 13603970607956161LL;
volatile uint32_t t165 = 29351U;
uint64_t x909 = 366406790719421305LLU;
int32_t t166 = -1;
volatile uint8_t x916 = UINT8_MAX;
volatile int32_t t169 = -38982838;
volatile uint8_t x941 = 0U;
uint64_t x944 = 2750824051LLU;
uint64_t t170 = 5623533208859715393LLU;
int32_t x947 = INT32_MAX;
int64_t x949 = -50124408LL;
uint16_t x959 = 1728U;
int8_t x974 = INT8_MIN;
int16_t x986 = 468;
uint16_t x993 = 1798U;
int32_t x994 = -1;
volatile uint64_t x999 = 25055687959680400LLU;
uint32_t x1000 = 24U;
int8_t x1008 = 21;
volatile int32_t x1012 = 3451;
static int64_t x1014 = -218980LL;
static int8_t x1020 = 0;
volatile int64_t x1031 = -1LL;
static int64_t x1035 = -1LL;
volatile uint16_t x1040 = UINT16_MAX;
static int64_t x1042 = -26663LL;
uint16_t x1045 = 10U;
volatile int32_t x1046 = -3;
static volatile int32_t t199 = 0;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int16_t x2 = INT16_MIN;
	volatile int16_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -90931033;

    t0 = ((x1<=(x2*x3))^x4);

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = 3LL;
	volatile uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MAX;
	volatile uint32_t t1 = 972878162U;

    t1 = ((x5<=(x6*x7))^x8);

    if (t1 != 103U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 22;
	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = INT8_MAX;
	static volatile int64_t x12 = INT64_MIN;

    t2 = ((x9<=(x10*x11))^x12);

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	int8_t x14 = 44;
	uint64_t x15 = UINT64_MAX;
	int64_t t3 = 4397414162925304658LL;

    t3 = ((x13<=(x14*x15))^x16);

    if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	volatile uint64_t x19 = 0LLU;
	static uint64_t t4 = UINT64_MAX;

    t4 = ((x17<=(x18*x19))^x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	int8_t x24 = -1;
	int32_t t5 = 22;

    t5 = ((x21<=(x22*x23))^x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x25 = -56LL;
	int8_t x26 = INT8_MIN;
	static int16_t x27 = 671;
	volatile int64_t x28 = INT64_MIN;
	static int64_t t6 = INT64_MIN;

    t6 = ((x25<=(x26*x27))^x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x33 = INT8_MIN;
	uint16_t x34 = UINT16_MAX;
	uint32_t x35 = 549697U;
	static volatile int32_t t7 = 685;

    t7 = ((x33<=(x34*x35))^x36);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x42 = UINT64_MAX;
	volatile int32_t x43 = INT32_MIN;
	volatile int8_t x44 = INT8_MAX;

    t8 = ((x41<=(x42*x43))^x44);

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x45 = -1;
	int16_t x46 = -1;
	int64_t x47 = -5671691803LL;
	int64_t x48 = INT64_MIN;
	volatile int64_t t9 = -766887323691LL;

    t9 = ((x45<=(x46*x47))^x48);

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	uint8_t x52 = 1U;

    t10 = ((x49<=(x50*x51))^x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = 216033015620202622LLU;
	volatile int32_t x56 = -1;
	int32_t t11 = 12485223;

    t11 = ((x53<=(x54*x55))^x56);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x57 = 15;
	uint64_t x58 = UINT64_MAX;
	int32_t t12 = 9127;

    t12 = ((x57<=(x58*x59))^x60);

    if (t12 != -33) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 15867546144LLU;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t13 = -6;

    t13 = ((x61<=(x62*x63))^x64);

    if (t13 != 65534) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 110U;
	volatile int16_t x67 = 0;
	int64_t x68 = INT64_MIN;
	int64_t t14 = INT64_MIN;

    t14 = ((x65<=(x66*x67))^x68);

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	static volatile int8_t x72 = INT8_MIN;
	volatile int32_t t15 = -636;

    t15 = ((x69<=(x70*x71))^x72);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x73 = 30227U;
	int8_t x75 = 36;
	int16_t x76 = 99;
	int32_t t16 = 140535324;

    t16 = ((x73<=(x74*x75))^x76);

    if (t16 != 99) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = INT8_MAX;
	int16_t x90 = -1;
	static uint16_t x91 = 0U;
	uint64_t x92 = 16227554754LLU;
	volatile uint64_t t17 = 6LLU;

    t17 = ((x89<=(x90*x91))^x92);

    if (t17 != 16227554754LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x101 = 784LLU;
	int16_t x102 = 6886;
	volatile uint32_t x103 = 22478U;
	uint64_t x104 = 269883222098115982LLU;
	volatile uint64_t t18 = 8279950LLU;

    t18 = ((x101<=(x102*x103))^x104);

    if (t18 != 269883222098115983LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x105 = UINT16_MAX;
	static uint8_t x106 = 31U;
	int8_t x107 = -3;
	int8_t x108 = INT8_MIN;
	int32_t t19 = 0;

    t19 = ((x105<=(x106*x107))^x108);

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x111 = 3056U;
	static int8_t x112 = 0;
	volatile int32_t t20 = 86263;

    t20 = ((x109<=(x110*x111))^x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x113 = INT64_MIN;
	static int8_t x114 = INT8_MAX;
	uint16_t x115 = 103U;
	int32_t x116 = -361;
	int32_t t21 = -34801201;

    t21 = ((x113<=(x114*x115))^x116);

    if (t21 != -362) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x117 = INT32_MAX;
	uint8_t x119 = UINT8_MAX;
	int32_t t22 = 491607;

    t22 = ((x117<=(x118*x119))^x120);

    if (t22 != -81) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x121 = -1LL;
	volatile int64_t x122 = -3971LL;
	static uint32_t x123 = 2U;
	static uint32_t x124 = 145U;

    t23 = ((x121<=(x122*x123))^x124);

    if (t23 != 145U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x134 = INT32_MAX;
	int32_t x135 = -1;
	static uint8_t x136 = UINT8_MAX;
	int32_t t24 = -4122814;

    t24 = ((x133<=(x134*x135))^x136);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MAX;
	int8_t x140 = 0;

    t25 = ((x137<=(x138*x139))^x140);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	uint64_t t26 = 3LLU;

    t26 = ((x141<=(x142*x143))^x144);

    if (t26 != 8LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x149 = INT8_MAX;
	volatile int32_t x150 = -1;
	int32_t x151 = INT32_MAX;
	int64_t x152 = INT64_MAX;

    t27 = ((x149<=(x150*x151))^x152);

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x153 = 43U;
	int8_t x154 = 1;
	static int64_t x155 = -1LL;
	uint64_t x156 = 216093518LLU;
	static volatile uint64_t t28 = 186053320LLU;

    t28 = ((x153<=(x154*x155))^x156);

    if (t28 != 216093518LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x161 = 0U;
	int16_t x162 = -583;
	uint8_t x163 = 1U;
	volatile int16_t x164 = -1;
	int32_t t29 = -19225192;

    t29 = ((x161<=(x162*x163))^x164);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x165 = 1LLU;
	int64_t x168 = -1LL;
	static volatile int64_t t30 = 22LL;

    t30 = ((x165<=(x166*x167))^x168);

    if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x169 = 0U;
	int32_t x170 = -1;
	uint64_t x171 = 16587592307LLU;
	static int16_t x172 = INT16_MIN;
	int32_t t31 = 14288;

    t31 = ((x169<=(x170*x171))^x172);

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x173 = INT16_MIN;
	uint8_t x174 = UINT8_MAX;
	volatile int8_t x175 = 1;
	int16_t x176 = -1;

    t32 = ((x173<=(x174*x175))^x176);

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x181 = INT64_MAX;
	int32_t x182 = -1;
	int8_t x184 = INT8_MIN;
	static int32_t t33 = 1;

    t33 = ((x181<=(x182*x183))^x184);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x186 = 112;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 1U;
	int32_t t34 = 17361109;

    t34 = ((x185<=(x186*x187))^x188);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x190 = UINT16_MAX;
	int8_t x191 = INT8_MAX;
	int8_t x192 = -3;
	volatile int32_t t35 = 0;

    t35 = ((x189<=(x190*x191))^x192);

    if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x202 = UINT16_MAX;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 63U;
	int32_t t36 = 39453866;

    t36 = ((x201<=(x202*x203))^x204);

    if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x209 = 4039U;
	int16_t x210 = 16028;
	static int8_t x211 = -1;
	volatile uint64_t x212 = UINT64_MAX;

    t37 = ((x209<=(x210*x211))^x212);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x213 = UINT32_MAX;
	static int16_t x215 = INT16_MIN;
	static int64_t x216 = -10440033753089608LL;

    t38 = ((x213<=(x214*x215))^x216);

    if (t38 != -10440033753089608LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = 30;
	uint32_t x219 = 116829U;
	int64_t x220 = INT64_MAX;
	volatile int64_t t39 = 1088426304566277LL;

    t39 = ((x217<=(x218*x219))^x220);

    if (t39 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x221 = -7;
	int64_t x222 = 182LL;
	uint8_t x223 = 5U;
	volatile int64_t x224 = INT64_MAX;
	volatile int64_t t40 = 597956976LL;

    t40 = ((x221<=(x222*x223))^x224);

    if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x226 = -1595;
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 0U;
	static volatile int32_t t41 = 3;

    t41 = ((x225<=(x226*x227))^x228);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x229 = 85;
	int16_t x231 = INT16_MIN;
	int64_t x232 = 1626706208LL;
	volatile int64_t t42 = 43031789113112LL;

    t42 = ((x229<=(x230*x231))^x232);

    if (t42 != 1626706209LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -863786151LL;
	int32_t x252 = -11994;
	int32_t t43 = 123453;

    t43 = ((x249<=(x250*x251))^x252);

    if (t43 != -11994) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x253 = -1LL;
	int16_t x254 = INT16_MAX;
	uint64_t x255 = 84LLU;
	static int64_t t44 = -19453028LL;

    t44 = ((x253<=(x254*x255))^x256);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x261 = INT32_MAX;
	int8_t x262 = -1;
	volatile int8_t x263 = -12;
	uint16_t x264 = 1056U;
	int32_t t45 = 773483;

    t45 = ((x261<=(x262*x263))^x264);

    if (t45 != 1056) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x265 = 17869U;
	int16_t x266 = -251;
	int16_t x267 = INT16_MAX;

    t46 = ((x265<=(x266*x267))^x268);

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x269 = INT32_MAX;
	volatile int32_t x271 = -1;
	volatile int64_t t47 = INT64_MIN;

    t47 = ((x269<=(x270*x271))^x272);

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x274 = 6093129445304LLU;
	int32_t x275 = INT32_MIN;
	static volatile uint64_t x276 = 4141619524LLU;
	uint64_t t48 = 2364474234LLU;

    t48 = ((x273<=(x274*x275))^x276);

    if (t48 != 4141619524LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x285 = INT32_MAX;
	int16_t x286 = INT16_MIN;
	static uint64_t x288 = 499404915927073LLU;
	uint64_t t49 = 9987144753LLU;

    t49 = ((x285<=(x286*x287))^x288);

    if (t49 != 499404915927073LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	int64_t x299 = 6020197LL;
	volatile int16_t x300 = -1;
	volatile int32_t t50 = 62991;

    t50 = ((x297<=(x298*x299))^x300);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x305 = 224478698LL;
	int32_t x306 = -1;
	int8_t x308 = INT8_MAX;
	volatile int32_t t51 = -7;

    t51 = ((x305<=(x306*x307))^x308);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t t52 = 278181652808920836LLU;

    t52 = ((x309<=(x310*x311))^x312);

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x313 = 9084164637741516506LLU;
	uint32_t x314 = 45U;
	static int32_t x315 = -2869292;
	int32_t x316 = 175913587;
	int32_t t53 = 0;

    t53 = ((x313<=(x314*x315))^x316);

    if (t53 != 175913587) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x317 = 7U;
	uint64_t x318 = UINT64_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	int32_t t54 = 6;

    t54 = ((x317<=(x318*x319))^x320);

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x326 = -1;
	int16_t x327 = -1;
	volatile int64_t x328 = 176010755010236414LL;
	int64_t t55 = -28830622161LL;

    t55 = ((x325<=(x326*x327))^x328);

    if (t55 != 176010755010236415LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x329 = 9;
	static volatile int32_t x330 = 75;
	int8_t x331 = INT8_MAX;
	static uint16_t x332 = 56U;
	volatile int32_t t56 = 157856;

    t56 = ((x329<=(x330*x331))^x332);

    if (t56 != 57) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x337 = INT32_MIN;
	int8_t x338 = -1;
	uint32_t x339 = 505U;

    t57 = ((x337<=(x338*x339))^x340);

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x341 = 883U;
	uint8_t x343 = 20U;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t58 = -1600;

    t58 = ((x341<=(x342*x343))^x344);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x345 = INT8_MIN;
	static uint64_t x347 = UINT64_MAX;
	volatile int64_t t59 = -95749437806LL;

    t59 = ((x345<=(x346*x347))^x348);

    if (t59 != 453941580LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x349 = UINT64_MAX;
	static uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	int32_t t60 = -1855;

    t60 = ((x349<=(x350*x351))^x352);

    if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x353 = 54664653487LLU;
	int16_t x354 = INT16_MAX;
	uint8_t x355 = 40U;
	int8_t x356 = -1;

    t61 = ((x353<=(x354*x355))^x356);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x357 = -1;
	int32_t x358 = 0;
	static int16_t x359 = -1;
	volatile int32_t x360 = 0;
	static int32_t t62 = 22748262;

    t62 = ((x357<=(x358*x359))^x360);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = -1;
	static int8_t x363 = -1;
	static uint32_t x364 = UINT32_MAX;
	volatile uint32_t t63 = 242198224U;

    t63 = ((x361<=(x362*x363))^x364);

    if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x365 = -1;
	int16_t x366 = 66;
	int32_t x367 = -1243951;
	int8_t x368 = INT8_MIN;

    t64 = ((x365<=(x366*x367))^x368);

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x369 = 11;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 182752;
	int16_t x372 = -374;
	volatile int32_t t65 = -607;

    t65 = ((x369<=(x370*x371))^x372);

    if (t65 != -374) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t66 = 3615753;

    t66 = ((x373<=(x374*x375))^x376);

    if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x378 = 9;
	uint8_t x379 = UINT8_MAX;
	volatile int64_t t67 = INT64_MIN;

    t67 = ((x377<=(x378*x379))^x380);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x381 = -1;
	int8_t x382 = 6;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	int64_t t68 = -60956502LL;

    t68 = ((x381<=(x382*x383))^x384);

    if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t69 = 467195;

    t69 = ((x385<=(x386*x387))^x388);

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x389 = INT32_MAX;
	static volatile int8_t x390 = 7;
	static int16_t x391 = INT16_MAX;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t70 = INT64_MIN;

    t70 = ((x389<=(x390*x391))^x392);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x397 = 0U;
	uint64_t x398 = UINT64_MAX;
	int8_t x400 = -1;
	int32_t t71 = 101;

    t71 = ((x397<=(x398*x399))^x400);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x403 = -1;
	int32_t t72 = -2041044;

    t72 = ((x401<=(x402*x403))^x404);

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x406 = -1;
	int32_t x407 = 5432;
	int16_t x408 = 16323;
	volatile int32_t t73 = 3736;

    t73 = ((x405<=(x406*x407))^x408);

    if (t73 != 16323) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x409 = 166938618U;
	static int8_t x410 = INT8_MAX;
	int64_t x411 = -1923472356LL;
	static volatile int32_t t74 = 611044936;

    t74 = ((x409<=(x410*x411))^x412);

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x413 = UINT8_MAX;
	volatile int32_t t75 = 15218767;

    t75 = ((x413<=(x414*x415))^x416);

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x421 = INT8_MAX;
	int8_t x423 = -1;
	volatile int8_t x424 = INT8_MIN;

    t76 = ((x421<=(x422*x423))^x424);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x428 = 818U;
	volatile uint32_t t77 = 25U;

    t77 = ((x425<=(x426*x427))^x428);

    if (t77 != 818U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x433 = 7;
	static uint64_t x434 = 6786986510LLU;
	int8_t x435 = -1;
	volatile int64_t t78 = -46457944348855341LL;

    t78 = ((x433<=(x434*x435))^x436);

    if (t78 != -2024888LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x437 = -49;
	int16_t x438 = -1;
	int16_t x439 = INT16_MIN;
	int8_t x440 = 1;
	static int32_t t79 = 96619;

    t79 = ((x437<=(x438*x439))^x440);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x445 = -2LL;
	static int8_t x447 = INT8_MIN;
	volatile int32_t x448 = INT32_MIN;

    t80 = ((x445<=(x446*x447))^x448);

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x449 = 3;
	volatile uint8_t x450 = 8U;
	static uint32_t x451 = UINT32_MAX;
	volatile int16_t x452 = INT16_MIN;

    t81 = ((x449<=(x450*x451))^x452);

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x453 = -144;
	volatile uint16_t x455 = 20156U;
	static int64_t x456 = -975268790275080546LL;

    t82 = ((x453<=(x454*x455))^x456);

    if (t82 != -975268790275080546LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x461 = 1199790U;
	uint16_t x462 = 27U;
	volatile uint16_t x464 = 20654U;

    t83 = ((x461<=(x462*x463))^x464);

    if (t83 != 20655) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x466 = -1;
	volatile uint8_t x467 = 0U;
	int64_t x468 = 837179512115LL;
	volatile int64_t t84 = 217909LL;

    t84 = ((x465<=(x466*x467))^x468);

    if (t84 != 837179512114LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x469 = -6319163236172LL;
	int64_t x471 = -1169LL;
	uint32_t x472 = 3432U;
	uint32_t t85 = 791U;

    t85 = ((x469<=(x470*x471))^x472);

    if (t85 != 3433U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x473 = UINT16_MAX;
	int8_t x475 = INT8_MAX;
	int16_t x476 = -1;
	static int32_t t86 = 4021;

    t86 = ((x473<=(x474*x475))^x476);

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MAX;
	int16_t x480 = -1;
	volatile int32_t t87 = 4961446;

    t87 = ((x477<=(x478*x479))^x480);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x485 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	static volatile int64_t x488 = 27LL;
	static volatile int64_t t88 = 266966480251LL;

    t88 = ((x485<=(x486*x487))^x488);

    if (t88 != 26LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x489 = 498U;
	volatile uint32_t x490 = 4U;
	int64_t x491 = -168830LL;
	volatile uint16_t x492 = 15U;
	int32_t t89 = 1585700;

    t89 = ((x489<=(x490*x491))^x492);

    if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x493 = -1;
	int8_t x494 = -26;
	int32_t x496 = INT32_MIN;

    t90 = ((x493<=(x494*x495))^x496);

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x497 = 105LLU;
	int16_t x499 = 3080;
	uint8_t x500 = UINT8_MAX;
	int32_t t91 = -10408;

    t91 = ((x497<=(x498*x499))^x500);

    if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x501 = 97547134U;
	int16_t x502 = -11;
	uint32_t x503 = UINT32_MAX;
	volatile int32_t t92 = 517692;

    t92 = ((x501<=(x502*x503))^x504);

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x506 = UINT32_MAX;
	static int16_t x507 = -1;
	int16_t x508 = INT16_MAX;

    t93 = ((x505<=(x506*x507))^x508);

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x509 = INT8_MAX;
	volatile uint8_t x510 = 11U;
	uint16_t x511 = 697U;
	int16_t x512 = -81;
	int32_t t94 = 732;

    t94 = ((x509<=(x510*x511))^x512);

    if (t94 != -82) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x513 = -1;
	uint32_t x514 = UINT32_MAX;
	int64_t x516 = -1LL;

    t95 = ((x513<=(x514*x515))^x516);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x517 = 5U;
	static uint32_t x518 = 6828453U;
	uint16_t x519 = 1U;
	volatile int64_t x520 = -95302619672470119LL;
	int64_t t96 = -6375987485LL;

    t96 = ((x517<=(x518*x519))^x520);

    if (t96 != -95302619672470120LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x521 = INT8_MIN;
	volatile int32_t x523 = INT32_MAX;

    t97 = ((x521<=(x522*x523))^x524);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x525 = 496U;
	static int64_t x526 = -1LL;
	int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MAX;

    t98 = ((x525<=(x526*x527))^x528);

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x533 = INT64_MIN;
	volatile int8_t x534 = 2;
	int16_t x535 = 1;
	int64_t x536 = INT64_MIN;
	int64_t t99 = -7565641712848LL;

    t99 = ((x533<=(x534*x535))^x536);

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x538 = INT8_MIN;
	int32_t x539 = -1;
	int64_t x540 = INT64_MAX;
	int64_t t100 = INT64_MAX;

    t100 = ((x537<=(x538*x539))^x540);

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x542 = INT8_MIN;
	int16_t x543 = 6268;
	int64_t x544 = INT64_MIN;
	static volatile int64_t t101 = INT64_MIN;

    t101 = ((x541<=(x542*x543))^x544);

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x549 = 11636313815360522LL;
	uint64_t x550 = 505LLU;
	volatile uint8_t x551 = 24U;
	volatile int32_t t102 = INT32_MAX;

    t102 = ((x549<=(x550*x551))^x552);

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x553 = INT64_MIN;
	volatile int64_t x554 = -1LL;
	int64_t x555 = INT64_MAX;
	int8_t x556 = -25;
	volatile int32_t t103 = 1012;

    t103 = ((x553<=(x554*x555))^x556);

    if (t103 != -26) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x557 = -242;
	uint16_t x559 = 162U;
	int64_t x560 = -13467515634LL;
	int64_t t104 = 16LL;

    t104 = ((x557<=(x558*x559))^x560);

    if (t104 != -13467515634LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x561 = 7061;
	volatile int32_t x562 = 0;
	uint64_t x563 = UINT64_MAX;
	uint32_t x564 = 18286U;
	uint32_t t105 = 1996532483U;

    t105 = ((x561<=(x562*x563))^x564);

    if (t105 != 18286U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x565 = 0;
	int64_t x566 = 21LL;
	static int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MAX;
	volatile int32_t t106 = -10;

    t106 = ((x565<=(x566*x567))^x568);

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x569 = INT8_MAX;
	volatile int16_t x570 = INT16_MAX;
	int32_t t107 = -107433217;

    t107 = ((x569<=(x570*x571))^x572);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x577 = UINT32_MAX;
	int64_t x578 = -1LL;
	uint32_t x579 = UINT32_MAX;
	volatile uint64_t x580 = 2651652824378759LLU;

    t108 = ((x577<=(x578*x579))^x580);

    if (t108 != 2651652824378759LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x581 = 3178U;
	static int8_t x582 = -1;
	int64_t x583 = -827LL;
	volatile uint32_t x584 = 6U;
	volatile uint32_t t109 = 144764U;

    t109 = ((x581<=(x582*x583))^x584);

    if (t109 != 6U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x585 = 150;
	uint64_t x586 = 619537524756LLU;
	uint8_t x587 = UINT8_MAX;
	int64_t x588 = -1LL;

    t110 = ((x585<=(x586*x587))^x588);

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x595 = 1263U;
	int64_t x596 = 3127LL;
	volatile int64_t t111 = 6008LL;

    t111 = ((x593<=(x594*x595))^x596);

    if (t111 != 3126LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x601 = -7207;
	uint16_t x602 = 46U;
	int8_t x603 = 1;
	int64_t x604 = 13280827560033578LL;

    t112 = ((x601<=(x602*x603))^x604);

    if (t112 != 13280827560033579LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x605 = 0U;
	static uint64_t x608 = UINT64_MAX;
	uint64_t t113 = 0LLU;

    t113 = ((x605<=(x606*x607))^x608);

    if (t113 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x609 = 2207869228343149LLU;
	int8_t x610 = -1;
	int64_t x611 = -13079006691777LL;
	int32_t x612 = INT32_MIN;

    t114 = ((x609<=(x610*x611))^x612);

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x614 = UINT16_MAX;
	volatile uint8_t x615 = 0U;
	int32_t x616 = 486751023;
	int32_t t115 = -1;

    t115 = ((x613<=(x614*x615))^x616);

    if (t115 != 486751023) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x621 = -1;
	static int8_t x622 = INT8_MIN;
	volatile uint16_t x623 = UINT16_MAX;
	volatile int32_t t116 = 11108;

    t116 = ((x621<=(x622*x623))^x624);

    if (t116 != -44) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x629 = UINT8_MAX;
	static int16_t x630 = -1;
	volatile uint64_t x631 = 2880665774295LLU;
	static volatile uint32_t x632 = 107U;
	volatile uint32_t t117 = 28786631U;

    t117 = ((x629<=(x630*x631))^x632);

    if (t117 != 106U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x633 = -1;
	int32_t x634 = 90880;
	uint64_t x635 = 3767975899388759LLU;
	volatile int32_t t118 = 3;

    t118 = ((x633<=(x634*x635))^x636);

    if (t118 != -3387) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x641 = 0;
	int64_t x642 = -1LL;
	uint8_t x643 = 54U;
	volatile int32_t t119 = -95535;

    t119 = ((x641<=(x642*x643))^x644);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x647 = INT8_MIN;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t120 = -357733;

    t120 = ((x645<=(x646*x647))^x648);

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x653 = 155;
	static int16_t x654 = INT16_MIN;
	uint64_t x655 = 77LLU;
	static uint32_t x656 = UINT32_MAX;
	static uint32_t t121 = 16U;

    t121 = ((x653<=(x654*x655))^x656);

    if (t121 != 4294967294U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x657 = -7056;
	static volatile int64_t x658 = -1LL;
	static int16_t x660 = INT16_MIN;
	int32_t t122 = 1479903;

    t122 = ((x657<=(x658*x659))^x660);

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x669 = 1;
	uint64_t x671 = 1014LLU;
	int16_t x672 = INT16_MIN;
	int32_t t123 = 3467025;

    t123 = ((x669<=(x670*x671))^x672);

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x674 = UINT8_MAX;
	int32_t x675 = 221978;
	int8_t x676 = INT8_MAX;
	volatile int32_t t124 = -32536335;

    t124 = ((x673<=(x674*x675))^x676);

    if (t124 != 126) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x679 = INT32_MIN;
	int32_t x680 = INT32_MIN;
	int32_t t125 = 5;

    t125 = ((x677<=(x678*x679))^x680);

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x681 = INT32_MIN;
	int16_t x684 = 0;
	volatile int32_t t126 = 945058696;

    t126 = ((x681<=(x682*x683))^x684);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x689 = 7;
	uint64_t x691 = UINT64_MAX;
	int16_t x692 = INT16_MIN;
	int32_t t127 = 49660;

    t127 = ((x689<=(x690*x691))^x692);

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x694 = 214U;
	static uint16_t x695 = 14U;

    t128 = ((x693<=(x694*x695))^x696);

    if (t128 != 65534) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x697 = 216U;
	volatile int32_t x698 = -1;
	volatile int16_t x699 = 9704;
	static uint8_t x700 = 56U;

    t129 = ((x697<=(x698*x699))^x700);

    if (t129 != 56) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = 0U;

    t130 = ((x701<=(x702*x703))^x704);

    if (t130 != 710106629860474541LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x705 = 1U;
	int32_t x706 = INT32_MIN;
	int64_t x707 = 162909951LL;
	int16_t x708 = -1;
	int32_t t131 = -19010;

    t131 = ((x705<=(x706*x707))^x708);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x709 = 2008228;
	int64_t x710 = -1LL;
	static int64_t x711 = -1LL;
	int8_t x712 = -1;
	volatile int32_t t132 = 2851232;

    t132 = ((x709<=(x710*x711))^x712);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x718 = -4157443742735LL;
	uint8_t x719 = 1U;
	uint16_t x720 = 1U;

    t133 = ((x717<=(x718*x719))^x720);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x721 = INT8_MAX;
	int16_t x722 = -1;
	volatile int8_t x723 = -1;
	volatile int8_t x724 = 0;
	int32_t t134 = 1;

    t134 = ((x721<=(x722*x723))^x724);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x725 = INT32_MIN;
	uint8_t x727 = 1U;
	static int32_t x728 = INT32_MIN;

    t135 = ((x725<=(x726*x727))^x728);

    if (t135 != -2147483647) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x741 = 112390U;
	static int8_t x742 = -1;
	uint8_t x743 = 10U;
	uint64_t x744 = 41097082690235816LLU;
	volatile uint64_t t136 = 564006293LLU;

    t136 = ((x741<=(x742*x743))^x744);

    if (t136 != 41097082690235817LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x750 = UINT8_MAX;
	uint64_t x751 = UINT64_MAX;
	volatile int16_t x752 = -1;
	int32_t t137 = 0;

    t137 = ((x749<=(x750*x751))^x752);

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x753 = INT64_MIN;
	int8_t x754 = INT8_MIN;
	int8_t x755 = INT8_MIN;
	int32_t x756 = INT32_MAX;
	volatile int32_t t138 = -4478;

    t138 = ((x753<=(x754*x755))^x756);

    if (t138 != 2147483646) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x757 = INT32_MAX;
	volatile int16_t x760 = 1758;
	int32_t t139 = 215;

    t139 = ((x757<=(x758*x759))^x760);

    if (t139 != 1758) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x762 = 5227LLU;
	uint16_t x763 = 2U;
	volatile int32_t t140 = -364040;

    t140 = ((x761<=(x762*x763))^x764);

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x770 = -7183;
	int16_t x771 = INT16_MIN;
	static uint8_t x772 = 8U;
	int32_t t141 = -1;

    t141 = ((x769<=(x770*x771))^x772);

    if (t141 != 9) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x773 = 192046599217182314LLU;
	int8_t x774 = INT8_MIN;
	uint8_t x775 = 1U;
	int64_t x776 = 4004579704282LL;
	static volatile int64_t t142 = 302828626492747092LL;

    t142 = ((x773<=(x774*x775))^x776);

    if (t142 != 4004579704283LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x778 = 56LL;
	int32_t x779 = INT32_MAX;
	int16_t x780 = INT16_MAX;
	int32_t t143 = -3456;

    t143 = ((x777<=(x778*x779))^x780);

    if (t143 != 32766) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x781 = 124571LLU;
	int32_t x782 = 62;
	static uint8_t x783 = 1U;
	volatile uint64_t x784 = UINT64_MAX;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = ((x781<=(x782*x783))^x784);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x789 = UINT32_MAX;
	int32_t x790 = -1;
	int64_t x791 = -1LL;
	volatile int16_t x792 = -62;
	int32_t t145 = 96365022;

    t145 = ((x789<=(x790*x791))^x792);

    if (t145 != -62) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x793 = 7;
	int64_t x794 = INT64_MIN;
	uint64_t x795 = 2681910909029099792LLU;
	int8_t x796 = INT8_MIN;
	int32_t t146 = 324994397;

    t146 = ((x793<=(x794*x795))^x796);

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x797 = 706498989865LLU;
	int64_t x799 = 3870LL;
	int16_t x800 = INT16_MIN;

    t147 = ((x797<=(x798*x799))^x800);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x805 = 148647827LLU;
	static uint64_t x806 = UINT64_MAX;
	volatile uint64_t x807 = UINT64_MAX;
	volatile int64_t x808 = 28037482531LL;
	int64_t t148 = 4350486198949LL;

    t148 = ((x805<=(x806*x807))^x808);

    if (t148 != 28037482531LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x814 = 350057LLU;
	volatile int16_t x816 = INT16_MAX;
	volatile int32_t t149 = -10;

    t149 = ((x813<=(x814*x815))^x816);

    if (t149 != 32766) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x821 = 665943U;
	int8_t x822 = INT8_MAX;
	static uint16_t x823 = UINT16_MAX;
	uint8_t x824 = 30U;
	int32_t t150 = 391;

    t150 = ((x821<=(x822*x823))^x824);

    if (t150 != 31) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x825 = -18;
	int16_t x826 = -380;
	volatile uint64_t x827 = 7852984371LLU;
	int64_t t151 = 15010510159096959LL;

    t151 = ((x825<=(x826*x827))^x828);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x829 = -1;
	int8_t x830 = INT8_MIN;
	static int64_t x832 = 328389609LL;
	int64_t t152 = -638LL;

    t152 = ((x829<=(x830*x831))^x832);

    if (t152 != 328389609LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x841 = INT16_MAX;
	uint64_t x843 = 5694089530943662LLU;
	int64_t x844 = INT64_MIN;
	volatile int64_t t153 = -1500074524496594957LL;

    t153 = ((x841<=(x842*x843))^x844);

    if (t153 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x845 = INT32_MIN;
	volatile uint8_t x846 = UINT8_MAX;
	uint64_t x847 = 114407LLU;
	static volatile uint8_t x848 = UINT8_MAX;
	int32_t t154 = 0;

    t154 = ((x845<=(x846*x847))^x848);

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x857 = INT32_MAX;
	static uint8_t x858 = UINT8_MAX;
	static int8_t x859 = INT8_MIN;
	static int64_t x860 = INT64_MAX;

    t155 = ((x857<=(x858*x859))^x860);

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x863 = -1;
	volatile int32_t x864 = INT32_MIN;
	int32_t t156 = INT32_MIN;

    t156 = ((x861<=(x862*x863))^x864);

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x868 = UINT8_MAX;
	int32_t t157 = 3214;

    t157 = ((x865<=(x866*x867))^x868);

    if (t157 != 254) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x873 = -1;
	int32_t x874 = INT32_MIN;
	static uint64_t x875 = 11011918LLU;
	volatile int64_t t158 = 103129LL;

    t158 = ((x873<=(x874*x875))^x876);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x878 = INT8_MAX;
	int16_t x880 = -48;
	volatile int32_t t159 = -1;

    t159 = ((x877<=(x878*x879))^x880);

    if (t159 != -47) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x881 = 0;
	int8_t x882 = -1;
	uint16_t x883 = 225U;

    t160 = ((x881<=(x882*x883))^x884);

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x885 = UINT8_MAX;
	static int64_t x886 = -1LL;
	uint8_t x887 = UINT8_MAX;
	uint8_t x888 = 107U;
	int32_t t161 = 105;

    t161 = ((x885<=(x886*x887))^x888);

    if (t161 != 107) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x890 = 5748340961LL;
	volatile int32_t t162 = -229641;

    t162 = ((x889<=(x890*x891))^x892);

    if (t162 != 12) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x897 = 8U;
	static int8_t x899 = 37;
	volatile int64_t t163 = INT64_MIN;

    t163 = ((x897<=(x898*x899))^x900);

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x903 = 9889132LL;
	volatile int64_t x904 = 150162036918251947LL;

    t164 = ((x901<=(x902*x903))^x904);

    if (t164 != 150162036918251946LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x905 = 34796654U;
	int64_t x906 = INT64_MIN;
	static volatile uint16_t x907 = 1U;
	uint32_t x908 = 10U;

    t165 = ((x905<=(x906*x907))^x908);

    if (t165 != 10U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x910 = -1;
	int16_t x911 = -1;
	int8_t x912 = 1;

    t166 = ((x909<=(x910*x911))^x912);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x913 = INT8_MIN;
	uint16_t x914 = 2314U;
	uint64_t x915 = 0LLU;
	static int32_t t167 = 242435202;

    t167 = ((x913<=(x914*x915))^x916);

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x925 = -4216;
	int32_t x926 = -84578;
	volatile int8_t x927 = -1;
	volatile int64_t x928 = 2038910085477488852LL;
	static volatile int64_t t168 = 11541LL;

    t168 = ((x925<=(x926*x927))^x928);

    if (t168 != 2038910085477488853LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x929 = 39;
	uint8_t x930 = UINT8_MAX;
	volatile int16_t x931 = 2;
	static int8_t x932 = INT8_MAX;

    t169 = ((x929<=(x930*x931))^x932);

    if (t169 != 126) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x942 = -1;
	int16_t x943 = INT16_MIN;

    t170 = ((x941<=(x942*x943))^x944);

    if (t170 != 2750824050LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x945 = INT16_MIN;
	int8_t x946 = -1;
	uint64_t x948 = UINT64_MAX;
	uint64_t t171 = UINT64_MAX;

    t171 = ((x945<=(x946*x947))^x948);

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x950 = INT16_MIN;
	static int8_t x951 = INT8_MIN;
	int8_t x952 = -1;
	volatile int32_t t172 = -1;

    t172 = ((x949<=(x950*x951))^x952);

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x953 = INT64_MIN;
	int8_t x954 = INT8_MIN;
	volatile int8_t x955 = -1;
	volatile int8_t x956 = -1;
	int32_t t173 = -3;

    t173 = ((x953<=(x954*x955))^x956);

    if (t173 != -2) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x957 = INT8_MIN;
	static volatile int8_t x958 = INT8_MAX;
	uint64_t x960 = 1023LLU;
	uint64_t t174 = 46255LLU;

    t174 = ((x957<=(x958*x959))^x960);

    if (t174 != 1022LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x961 = INT8_MIN;
	volatile int64_t x962 = -1LL;
	int8_t x963 = INT8_MIN;
	uint8_t x964 = 0U;
	int32_t t175 = 1503;

    t175 = ((x961<=(x962*x963))^x964);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x965 = INT32_MIN;
	static int64_t x966 = -1LL;
	static volatile uint64_t x967 = UINT64_MAX;
	uint16_t x968 = 310U;
	int32_t t176 = -674418;

    t176 = ((x965<=(x966*x967))^x968);

    if (t176 != 310) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x973 = 0U;
	volatile uint32_t x975 = UINT32_MAX;
	static int16_t x976 = 0;
	volatile int32_t t177 = 6827;

    t177 = ((x973<=(x974*x975))^x976);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x981 = 243U;
	volatile uint32_t x982 = 7233125U;
	uint64_t x983 = 286891009285352163LLU;
	int32_t x984 = INT32_MIN;
	int32_t t178 = 14875752;

    t178 = ((x981<=(x982*x983))^x984);

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x985 = -321;
	uint64_t x987 = 514546161739714LLU;
	uint64_t x988 = 749010LLU;
	uint64_t t179 = 8277697173582971170LLU;

    t179 = ((x985<=(x986*x987))^x988);

    if (t179 != 749010LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x989 = 3U;
	volatile int8_t x990 = 6;
	static int16_t x991 = 1;
	static int16_t x992 = 16064;
	volatile int32_t t180 = -450;

    t180 = ((x989<=(x990*x991))^x992);

    if (t180 != 16065) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x995 = UINT32_MAX;
	int8_t x996 = INT8_MAX;
	volatile int32_t t181 = -8;

    t181 = ((x993<=(x994*x995))^x996);

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x997 = INT32_MAX;
	uint64_t x998 = UINT64_MAX;
	static uint32_t t182 = 41U;

    t182 = ((x997<=(x998*x999))^x1000);

    if (t182 != 25U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1001 = -1;
	int8_t x1002 = -53;
	static volatile uint32_t x1003 = UINT32_MAX;
	volatile uint32_t x1004 = 536833321U;
	uint32_t t183 = 3U;

    t183 = ((x1001<=(x1002*x1003))^x1004);

    if (t183 != 536833321U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1005 = INT16_MAX;
	static uint16_t x1006 = UINT16_MAX;
	static volatile int64_t x1007 = -1LL;
	volatile int32_t t184 = -387077208;

    t184 = ((x1005<=(x1006*x1007))^x1008);

    if (t184 != 21) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x1009 = INT32_MIN;
	int32_t x1010 = INT32_MAX;
	int8_t x1011 = -1;
	int32_t t185 = -14345423;

    t185 = ((x1009<=(x1010*x1011))^x1012);

    if (t185 != 3450) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1013 = UINT8_MAX;
	volatile uint8_t x1015 = 13U;
	int8_t x1016 = -1;
	int32_t t186 = 984019;

    t186 = ((x1013<=(x1014*x1015))^x1016);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x1017 = 31U;
	volatile int16_t x1018 = -1;
	uint8_t x1019 = 6U;
	volatile int32_t t187 = -946488133;

    t187 = ((x1017<=(x1018*x1019))^x1020);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1021 = 33779997LLU;
	int32_t x1022 = 2509486;
	static int8_t x1023 = 61;
	int32_t x1024 = INT32_MIN;
	volatile int32_t t188 = 35154976;

    t188 = ((x1021<=(x1022*x1023))^x1024);

    if (t188 != -2147483647) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1029 = INT32_MAX;
	uint32_t x1030 = 33U;
	volatile int16_t x1032 = -1;
	int32_t t189 = 10936380;

    t189 = ((x1029<=(x1030*x1031))^x1032);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1033 = 1;
	volatile int32_t x1034 = INT32_MIN;
	uint8_t x1036 = UINT8_MAX;
	volatile int32_t t190 = -806336167;

    t190 = ((x1033<=(x1034*x1035))^x1036);

    if (t190 != 254) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1037 = 0;
	uint32_t x1038 = UINT32_MAX;
	int32_t x1039 = INT32_MAX;
	int32_t t191 = -11;

    t191 = ((x1037<=(x1038*x1039))^x1040);

    if (t191 != 65534) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1041 = INT64_MAX;
	int16_t x1043 = -1;
	static volatile uint64_t x1044 = 3900862672155942LLU;
	uint64_t t192 = 622574275310LLU;

    t192 = ((x1041<=(x1042*x1043))^x1044);

    if (t192 != 3900862672155942LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x1047 = 43080038U;
	static volatile int8_t x1048 = 0;
	int32_t t193 = -124092;

    t193 = ((x1045<=(x1046*x1047))^x1048);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1049 = INT64_MIN;
	volatile int64_t x1050 = -3479LL;
	volatile uint8_t x1051 = UINT8_MAX;
	volatile uint64_t x1052 = UINT64_MAX;
	volatile uint64_t t194 = 33002106389LLU;

    t194 = ((x1049<=(x1050*x1051))^x1052);

    if (t194 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x1053 = UINT16_MAX;
	volatile uint32_t x1054 = 407U;
	int32_t x1055 = INT32_MIN;
	uint8_t x1056 = 10U;
	int32_t t195 = 14851;

    t195 = ((x1053<=(x1054*x1055))^x1056);

    if (t195 != 11) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1057 = 3;
	uint64_t x1058 = UINT64_MAX;
	int32_t x1059 = INT32_MAX;
	int8_t x1060 = 4;
	int32_t t196 = 917;

    t196 = ((x1057<=(x1058*x1059))^x1060);

    if (t196 != 5) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x1061 = INT8_MAX;
	uint8_t x1062 = 0U;
	static int32_t x1063 = INT32_MIN;
	static int64_t x1064 = 29LL;
	int64_t t197 = 14501636490LL;

    t197 = ((x1061<=(x1062*x1063))^x1064);

    if (t197 != 29LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1065 = INT32_MAX;
	volatile int64_t x1066 = 335367622458516LL;
	int16_t x1067 = 94;
	int16_t x1068 = INT16_MIN;
	volatile int32_t t198 = -76227;

    t198 = ((x1065<=(x1066*x1067))^x1068);

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1073 = -1LL;
	int32_t x1074 = -15;
	volatile int16_t x1075 = INT16_MIN;
	uint16_t x1076 = 2U;

    t199 = ((x1073<=(x1074*x1075))^x1076);

    if (t199 != 3) { NG(); } else { ; }
	
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

