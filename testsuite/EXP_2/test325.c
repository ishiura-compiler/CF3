
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

volatile int64_t x1 = 1LL;
static int8_t x11 = INT8_MAX;
uint8_t x13 = 2U;
static volatile uint64_t x16 = 6LLU;
uint64_t t3 = 47632354904LLU;
volatile int16_t x32 = INT16_MIN;
int8_t x33 = 8;
int16_t x35 = INT16_MIN;
static volatile int32_t x36 = INT32_MIN;
volatile int64_t x37 = -1LL;
uint8_t x39 = 0U;
volatile int16_t x51 = INT16_MIN;
volatile int32_t x62 = -1428740;
int64_t x64 = INT64_MIN;
uint8_t x77 = UINT8_MAX;
uint8_t x79 = 55U;
int32_t x82 = INT32_MIN;
int32_t x87 = -11;
uint8_t x89 = UINT8_MAX;
uint16_t x101 = UINT16_MAX;
int32_t x109 = INT32_MAX;
volatile int64_t x112 = 63973446788LL;
int64_t t24 = INT64_MAX;
uint16_t x118 = 17770U;
int8_t x120 = INT8_MAX;
int32_t t25 = 417386;
int32_t t27 = -22;
int16_t x138 = INT16_MIN;
volatile int32_t t30 = 4;
volatile int32_t t31 = 0;
int32_t x150 = 15;
static uint64_t x154 = 259103045582LLU;
uint64_t x159 = 4176687087LLU;
volatile int8_t x167 = -15;
static int32_t x168 = -1;
volatile int32_t t36 = 56388;
uint32_t x174 = UINT32_MAX;
static volatile uint32_t t38 = 232U;
int64_t x192 = INT64_MAX;
int32_t x195 = INT32_MIN;
uint16_t x200 = 23U;
volatile int64_t t45 = 25827363144LL;
static uint64_t x213 = UINT64_MAX;
volatile int64_t t46 = 124566052255LL;
static int8_t x223 = INT8_MAX;
uint64_t t49 = UINT64_MAX;
int16_t x229 = INT16_MIN;
int8_t x233 = INT8_MAX;
volatile int32_t t51 = 4;
uint64_t x240 = UINT64_MAX;
uint64_t t52 = 231727250718LLU;
volatile int32_t t53 = 1897822;
static volatile uint16_t x247 = 26003U;
volatile uint64_t t54 = 5LLU;
int64_t x255 = -56055395LL;
uint8_t x262 = UINT8_MAX;
int16_t x263 = INT16_MIN;
int16_t x265 = INT16_MAX;
int64_t x270 = INT64_MIN;
int8_t x271 = INT8_MIN;
uint64_t x273 = UINT64_MAX;
volatile int16_t x281 = INT16_MAX;
volatile int64_t x294 = INT64_MIN;
volatile uint8_t x296 = 4U;
volatile int32_t t65 = 137228060;
int8_t x304 = 0;
uint16_t x314 = UINT16_MAX;
uint16_t x318 = 4425U;
int16_t x326 = 33;
int32_t x329 = INT32_MIN;
volatile uint8_t x332 = 9U;
static int32_t t73 = INT32_MIN;
int16_t x343 = 1;
int32_t t79 = -7786370;
uint8_t x365 = UINT8_MAX;
uint16_t x368 = UINT16_MAX;
int8_t x369 = -1;
volatile uint64_t t81 = 116455LLU;
volatile uint16_t x374 = 7810U;
int32_t x375 = 6;
volatile int16_t x380 = 50;
int16_t x382 = -1;
uint16_t x385 = 988U;
int32_t x394 = 0;
volatile int32_t x402 = -190907;
volatile uint32_t t87 = 6U;
uint8_t x413 = 7U;
int64_t x415 = 7181675707087897LL;
int8_t x417 = INT8_MIN;
static volatile int64_t t91 = -3908193791LL;
volatile int64_t t93 = 816096987992536710LL;
static volatile int8_t x441 = 1;
int64_t x443 = INT64_MIN;
int32_t t96 = -36551;
int64_t x449 = INT64_MIN;
volatile int32_t x451 = -238378;
static uint8_t x455 = 31U;
int32_t x460 = INT32_MIN;
int32_t t100 = 2684672;
volatile uint32_t x462 = UINT32_MAX;
uint16_t x463 = 17151U;
uint8_t x464 = UINT8_MAX;
int32_t t103 = 3931;
volatile uint32_t t105 = UINT32_MAX;
static volatile int8_t x487 = INT8_MIN;
int64_t x490 = 30231599LL;
int32_t x495 = INT32_MIN;
volatile int64_t t108 = 1251LL;
static volatile uint32_t x499 = UINT32_MAX;
int64_t x501 = -4154380445282LL;
uint64_t x505 = 2783764538042LLU;
uint32_t x509 = UINT32_MAX;
static uint64_t x512 = UINT64_MAX;
uint64_t t112 = UINT64_MAX;
static volatile int64_t x515 = -1LL;
uint64_t x523 = 1773789595LLU;
int8_t x525 = -1;
static uint32_t x527 = UINT32_MAX;
int32_t x534 = 402150133;
uint32_t x535 = 632562000U;
int16_t x547 = INT16_MAX;
static int64_t t119 = INT64_MAX;
int64_t x558 = INT64_MAX;
volatile int8_t x561 = INT8_MAX;
volatile int32_t t122 = 31258;
uint32_t t124 = 2537U;
volatile int32_t t125 = 7422141;
int8_t x587 = INT8_MIN;
volatile int64_t x588 = INT64_MIN;
int16_t x591 = INT16_MAX;
static uint64_t x595 = 4671676681776429LLU;
int32_t t129 = -507;
static volatile int64_t t130 = -691930018342395569LL;
int64_t x609 = -1LL;
int32_t x613 = INT32_MAX;
volatile int8_t x614 = -1;
int32_t t134 = 161;
int32_t x625 = -1;
uint64_t x628 = UINT64_MAX;
int64_t x629 = -1LL;
uint32_t x634 = 16910466U;
uint32_t x636 = UINT32_MAX;
uint32_t t138 = 296317563U;
static int32_t x640 = 0;
uint64_t x647 = UINT64_MAX;
volatile int32_t t141 = 62;
uint64_t x650 = 2782LLU;
uint8_t x657 = 4U;
int8_t x664 = INT8_MIN;
static int32_t x666 = INT32_MIN;
int8_t x669 = -1;
int8_t x672 = INT8_MAX;
uint16_t x681 = 3473U;
static int16_t x696 = -108;
int64_t x712 = -1LL;
volatile int16_t x713 = 22;
uint16_t x714 = 116U;
int8_t x718 = -1;
uint64_t x722 = 21448233160973LLU;
int64_t x725 = INT64_MIN;
uint64_t x726 = 2412411LLU;
uint64_t x727 = UINT64_MAX;
uint8_t x728 = UINT8_MAX;
int16_t x737 = -1;
uint64_t x747 = UINT64_MAX;
int32_t x748 = 683;
int64_t x757 = -1LL;
volatile int32_t t165 = 14670;
static int32_t x769 = -1;
static uint16_t x771 = UINT16_MAX;
int64_t x777 = INT64_MIN;
volatile uint32_t x786 = UINT32_MAX;
static uint64_t x795 = 346103LLU;
volatile uint64_t t172 = 12185LLU;
int64_t x797 = INT64_MAX;
volatile int32_t t173 = 3502680;
int64_t x804 = 1631LL;
volatile uint8_t x805 = 0U;
static int32_t x806 = -122112;
static uint64_t t176 = 2243LLU;
int8_t x815 = INT8_MIN;
uint32_t x823 = 1966862738U;
volatile int32_t t178 = -318;
uint32_t x828 = 3U;
uint32_t t179 = 1U;
int16_t x829 = INT16_MIN;
int8_t x838 = INT8_MIN;
static int32_t x843 = -3;
int8_t x848 = -3;
uint16_t x850 = 677U;
uint8_t x852 = 61U;
int32_t t185 = -2061617;
int8_t x856 = INT8_MIN;
uint64_t x863 = 1379156114734074LLU;
static int16_t x864 = -1;
int8_t x865 = INT8_MIN;
int64_t x870 = -1LL;
static int64_t x872 = 26266LL;
int64_t x873 = 700482LL;
volatile uint8_t x876 = 1U;
int16_t x887 = INT16_MAX;
uint8_t x896 = UINT8_MAX;
int32_t t195 = -4;
static int64_t x898 = INT64_MAX;
int8_t x905 = -1;


void f0(void) {
    	static int8_t x2 = INT8_MAX;
	int64_t x3 = -1LL;
	int64_t x4 = INT64_MAX;
	static volatile int64_t t0 = INT64_MAX;

    t0 = ((x1<=(x2-x3))*x4);

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = 0;
	uint8_t x7 = 2U;
	int32_t x8 = -1;
	static int32_t t1 = -91260714;

    t1 = ((x5<=(x6-x7))*x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -55;
	volatile int16_t x10 = INT16_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 15216;

    t2 = ((x9<=(x10-x11))*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = 1;
	static int16_t x15 = INT16_MIN;

    t3 = ((x13<=(x14-x15))*x16);

    if (t3 != 6LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x29 = -1;
	int8_t x30 = 7;
	uint8_t x31 = 4U;
	int32_t t4 = 11;

    t4 = ((x29<=(x30-x31))*x32);

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x34 = INT16_MIN;
	int32_t t5 = -471;

    t5 = ((x33<=(x34-x35))*x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x38 = UINT32_MAX;
	static int64_t x40 = -1LL;
	volatile int64_t t6 = -1588593155751LL;

    t6 = ((x37<=(x38-x39))*x40);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = INT32_MIN;
	static int64_t x42 = -24312131795LL;
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MAX;
	volatile int32_t t7 = 0;

    t7 = ((x41<=(x42-x43))*x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = UINT64_MAX;
	static int32_t x46 = -1;
	uint16_t x47 = 19U;
	int64_t x48 = 8979367LL;
	volatile int64_t t8 = -55299552919479028LL;

    t8 = ((x45<=(x46-x47))*x48);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x49 = 454319529LLU;
	uint32_t x50 = 11718582U;
	int64_t x52 = -1LL;
	int64_t t9 = -33789522LL;

    t9 = ((x49<=(x50-x51))*x52);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = 0;
	int32_t x54 = INT32_MAX;
	volatile uint32_t x55 = 1U;
	int64_t x56 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

    t10 = ((x53<=(x54-x55))*x56);

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	static uint8_t x58 = 14U;
	int64_t x59 = INT64_MAX;
	int32_t x60 = -36;
	static int32_t t11 = 25;

    t11 = ((x57<=(x58-x59))*x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x61 = INT32_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile int64_t t12 = INT64_MIN;

    t12 = ((x61<=(x62-x63))*x64);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = INT64_MIN;
	volatile uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t13 = 0;

    t13 = ((x65<=(x66-x67))*x68);

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	uint16_t x72 = 9132U;
	int32_t t14 = 26204;

    t14 = ((x69<=(x70-x71))*x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = -8LL;
	int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	static int32_t x76 = -1;
	volatile int32_t t15 = -181358813;

    t15 = ((x73<=(x74-x75))*x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x78 = 93828297LLU;
	uint32_t x80 = 0U;
	volatile uint32_t t16 = 49852899U;

    t16 = ((x77<=(x78-x79))*x80);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = -96883;
	int16_t x83 = INT16_MIN;
	volatile int64_t x84 = 129712038519459LL;
	volatile int64_t t17 = -533LL;

    t17 = ((x81<=(x82-x83))*x84);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	volatile uint16_t x88 = 3U;
	static volatile int32_t t18 = -63;

    t18 = ((x85<=(x86-x87))*x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x90 = -1;
	int64_t x91 = 602469LL;
	int32_t x92 = -86924886;
	static int32_t t19 = 11797;

    t19 = ((x89<=(x90-x91))*x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x97 = -1;
	static volatile uint16_t x98 = 10U;
	int16_t x99 = INT16_MAX;
	int32_t x100 = 120764;
	static volatile int32_t t20 = -126;

    t20 = ((x97<=(x98-x99))*x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x102 = -1476;
	volatile int32_t x103 = -1;
	uint64_t x104 = 890678135537980LLU;
	volatile uint64_t t21 = 73841346358LLU;

    t21 = ((x101<=(x102-x103))*x104);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x105 = INT64_MIN;
	static int32_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	int32_t x108 = 411715368;
	volatile int32_t t22 = -58;

    t22 = ((x105<=(x106-x107))*x108);

    if (t22 != 411715368) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x110 = -1356;
	int8_t x111 = -1;
	int64_t t23 = 971678LL;

    t23 = ((x109<=(x110-x111))*x112);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = -110282902907802362LL;
	int8_t x114 = -1;
	int32_t x115 = -1;
	static int64_t x116 = INT64_MAX;

    t24 = ((x113<=(x114-x115))*x116);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x117 = -57;
	int64_t x119 = -2LL;

    t25 = ((x117<=(x118-x119))*x120);

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x121 = UINT16_MAX;
	static uint16_t x122 = UINT16_MAX;
	volatile uint16_t x123 = 7249U;
	volatile int16_t x124 = INT16_MIN;
	int32_t t26 = -4297;

    t26 = ((x121<=(x122-x123))*x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = INT8_MIN;
	uint16_t x126 = 685U;
	static int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;

    t27 = ((x125<=(x126-x127))*x128);

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = INT64_MAX;
	static int32_t x134 = -1;
	static volatile int32_t x135 = INT32_MIN;
	uint16_t x136 = 55U;
	int32_t t28 = -1866;

    t28 = ((x133<=(x134-x135))*x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = INT32_MAX;
	static int32_t x139 = -132299;
	volatile int16_t x140 = INT16_MIN;
	int32_t t29 = -11;

    t29 = ((x137<=(x138-x139))*x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = INT8_MIN;
	uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 6750031466LLU;
	int16_t x144 = -1;

    t30 = ((x141<=(x142-x143))*x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = 213LLU;
	volatile int16_t x146 = -1;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MAX;

    t31 = ((x145<=(x146-x147))*x148);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x149 = INT16_MAX;
	static int32_t x151 = -4394363;
	int16_t x152 = 1830;
	int32_t t32 = 149;

    t32 = ((x149<=(x150-x151))*x152);

    if (t32 != 1830) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x153 = UINT32_MAX;
	static int32_t x155 = -17530;
	volatile int16_t x156 = 41;
	int32_t t33 = 722288;

    t33 = ((x153<=(x154-x155))*x156);

    if (t33 != 41) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = 1;
	uint8_t x158 = 1U;
	uint16_t x160 = 7U;
	volatile int32_t t34 = 161143638;

    t34 = ((x157<=(x158-x159))*x160);

    if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = -1LL;
	static int64_t x162 = 926469986LL;
	static int8_t x163 = 0;
	uint16_t x164 = 11U;
	volatile int32_t t35 = 374103;

    t35 = ((x161<=(x162-x163))*x164);

    if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = INT8_MIN;
	static int64_t x166 = INT64_MIN;

    t36 = ((x165<=(x166-x167))*x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x169 = 393764638953784139LLU;
	int8_t x170 = INT8_MAX;
	uint8_t x171 = 106U;
	int16_t x172 = -1;
	static int32_t t37 = 372656405;

    t37 = ((x169<=(x170-x171))*x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = 305152826;
	static int64_t x175 = INT64_MAX;
	uint32_t x176 = 4U;

    t38 = ((x173<=(x174-x175))*x176);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	int64_t x187 = -15286LL;
	int32_t x188 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = ((x185<=(x186-x187))*x188);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x189 = INT32_MAX;
	int16_t x190 = -50;
	static volatile uint16_t x191 = UINT16_MAX;
	static int64_t t40 = 27189117LL;

    t40 = ((x189<=(x190-x191))*x192);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x193 = INT8_MAX;
	uint32_t x194 = 6808191U;
	uint16_t x196 = 676U;
	static int32_t t41 = -5331;

    t41 = ((x193<=(x194-x195))*x196);

    if (t41 != 676) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x197 = 7345U;
	int64_t x198 = INT64_MIN;
	int32_t x199 = -14301053;
	int32_t t42 = -57;

    t42 = ((x197<=(x198-x199))*x200);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x201 = 498528;
	int8_t x202 = -2;
	static volatile int16_t x203 = INT16_MIN;
	uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t43 = 342453U;

    t43 = ((x201<=(x202-x203))*x204);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x206 = 86;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t44 = -29;

    t44 = ((x205<=(x206-x207))*x208);

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x209 = 78U;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MIN;

    t45 = ((x209<=(x210-x211))*x212);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x214 = UINT64_MAX;
	static int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;

    t46 = ((x213<=(x214-x215))*x216);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = 3555586LLU;
	int16_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t47 = -2700811433378409367LL;

    t47 = ((x217<=(x218-x219))*x220);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MAX;
	static int64_t x224 = INT64_MIN;
	static volatile int64_t t48 = 1LL;

    t48 = ((x221<=(x222-x223))*x224);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = -1;
	int64_t x226 = -1LL;
	int64_t x227 = -665096131369918LL;
	volatile uint64_t x228 = UINT64_MAX;

    t49 = ((x225<=(x226-x227))*x228);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t50 = -6;

    t50 = ((x229<=(x230-x231))*x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x234 = INT64_MAX;
	uint8_t x235 = UINT8_MAX;
	volatile int32_t x236 = 132537521;

    t51 = ((x233<=(x234-x235))*x236);

    if (t51 != 132537521) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x237 = 10875920937756LLU;
	volatile int8_t x238 = -10;
	uint32_t x239 = UINT32_MAX;

    t52 = ((x237<=(x238-x239))*x240);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x241 = 3U;
	static int32_t x242 = INT32_MIN;
	volatile int8_t x243 = -1;
	volatile int16_t x244 = INT16_MAX;

    t53 = ((x241<=(x242-x243))*x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x245 = 83917410;
	uint8_t x246 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;

    t54 = ((x245<=(x246-x247))*x248);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x249 = 1U;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	volatile int8_t x252 = INT8_MAX;
	static int32_t t55 = 302668;

    t55 = ((x249<=(x250-x251))*x252);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x253 = 4U;
	int32_t x254 = INT32_MIN;
	uint8_t x256 = 31U;
	int32_t t56 = 26;

    t56 = ((x253<=(x254-x255))*x256);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = 4;
	uint8_t x258 = 2U;
	int64_t x259 = -1LL;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t57 = 447901;

    t57 = ((x257<=(x258-x259))*x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x261 = INT16_MAX;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t58 = -179620464;

    t58 = ((x261<=(x262-x263))*x264);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x266 = INT16_MIN;
	int16_t x267 = -17;
	int16_t x268 = 25;
	int32_t t59 = -563643;

    t59 = ((x265<=(x266-x267))*x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x269 = INT32_MIN;
	int8_t x272 = -1;
	int32_t t60 = -173148;

    t60 = ((x269<=(x270-x271))*x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x274 = 10U;
	uint16_t x275 = 111U;
	int16_t x276 = 14;
	volatile int32_t t61 = -217906;

    t61 = ((x273<=(x274-x275))*x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = 1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t62 = INT32_MAX;

    t62 = ((x277<=(x278-x279))*x280);

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x282 = INT32_MIN;
	uint32_t x283 = 164858U;
	int32_t x284 = INT32_MAX;
	int32_t t63 = INT32_MAX;

    t63 = ((x281<=(x282-x283))*x284);

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MIN;
	uint16_t x286 = 1102U;
	uint16_t x287 = UINT16_MAX;
	uint8_t x288 = 2U;
	int32_t t64 = 47552;

    t64 = ((x285<=(x286-x287))*x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x293 = INT32_MIN;
	static int16_t x295 = -8821;

    t65 = ((x293<=(x294-x295))*x296);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x301 = INT64_MAX;
	int8_t x302 = 1;
	volatile uint8_t x303 = 47U;
	volatile int32_t t66 = 65775;

    t66 = ((x301<=(x302-x303))*x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x305 = INT8_MIN;
	uint64_t x306 = 1215517310271899LLU;
	static int32_t x307 = -1;
	uint16_t x308 = 13386U;
	int32_t t67 = 1;

    t67 = ((x305<=(x306-x307))*x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x313 = 7U;
	uint32_t x315 = 54727408U;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = ((x313<=(x314-x315))*x316);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	uint32_t x319 = 246808967U;
	int64_t x320 = -1LL;
	volatile int64_t t69 = 305597949561LL;

    t69 = ((x317<=(x318-x319))*x320);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x321 = 216172095LL;
	static int8_t x322 = INT8_MAX;
	static uint16_t x323 = 1350U;
	int16_t x324 = -11;
	volatile int32_t t70 = 1590090;

    t70 = ((x321<=(x322-x323))*x324);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x325 = -1;
	volatile int8_t x327 = -13;
	int8_t x328 = INT8_MIN;
	int32_t t71 = -5753029;

    t71 = ((x325<=(x326-x327))*x328);

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x330 = 490U;
	volatile int32_t x331 = -1;
	int32_t t72 = -257150244;

    t72 = ((x329<=(x330-x331))*x332);

    if (t72 != 9) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x333 = 26U;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MIN;

    t73 = ((x333<=(x334-x335))*x336);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x341 = 1U;
	volatile uint32_t x342 = 24916183U;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t74 = 154;

    t74 = ((x341<=(x342-x343))*x344);

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MAX;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = -4457;
	int32_t t75 = -1059266137;

    t75 = ((x345<=(x346-x347))*x348);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x349 = -1;
	static uint32_t x350 = 241819U;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = 6U;
	int32_t t76 = -100367;

    t76 = ((x349<=(x350-x351))*x352);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x353 = INT16_MAX;
	uint16_t x354 = 2586U;
	int64_t x355 = -1LL;
	volatile int64_t x356 = INT64_MAX;
	int64_t t77 = -783329065LL;

    t77 = ((x353<=(x354-x355))*x356);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x357 = 412;
	int8_t x358 = INT8_MAX;
	int16_t x359 = -1;
	int16_t x360 = -1;
	volatile int32_t t78 = -65891239;

    t78 = ((x357<=(x358-x359))*x360);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x361 = -1;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MAX;
	volatile uint16_t x364 = 16U;

    t79 = ((x361<=(x362-x363))*x364);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x366 = UINT16_MAX;
	int16_t x367 = 1;
	volatile int32_t t80 = 3;

    t80 = ((x365<=(x366-x367))*x368);

    if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x370 = 48;
	static uint32_t x371 = 34825677U;
	uint64_t x372 = UINT64_MAX;

    t81 = ((x369<=(x370-x371))*x372);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x373 = -8;
	uint32_t x376 = 143969U;
	uint32_t t82 = 104272044U;

    t82 = ((x373<=(x374-x375))*x376);

    if (t82 != 143969U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x377 = UINT32_MAX;
	int32_t x378 = -1;
	int32_t x379 = -1;
	volatile int32_t t83 = 6;

    t83 = ((x377<=(x378-x379))*x380);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x381 = 4U;
	uint16_t x383 = UINT16_MAX;
	static volatile int64_t x384 = INT64_MIN;
	volatile int64_t t84 = 199314514LL;

    t84 = ((x381<=(x382-x383))*x384);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x386 = -1;
	int8_t x387 = -2;
	int8_t x388 = -3;
	int32_t t85 = 341059;

    t85 = ((x385<=(x386-x387))*x388);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x393 = -1;
	volatile uint32_t x395 = 1337U;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t86 = 257088;

    t86 = ((x393<=(x394-x395))*x396);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x401 = -1LL;
	int64_t x403 = -1LL;
	uint32_t x404 = 25U;

    t87 = ((x401<=(x402-x403))*x404);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x409 = INT8_MAX;
	static int8_t x410 = 1;
	volatile int8_t x411 = 3;
	int8_t x412 = -31;
	static int32_t t88 = -790359898;

    t88 = ((x409<=(x410-x411))*x412);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x414 = 91088166925477010LLU;
	uint64_t x416 = UINT64_MAX;
	uint64_t t89 = UINT64_MAX;

    t89 = ((x413<=(x414-x415))*x416);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x418 = -1LL;
	int8_t x419 = -1;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = ((x417<=(x418-x419))*x420);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x421 = -1;
	uint16_t x422 = 5U;
	uint16_t x423 = UINT16_MAX;
	int64_t x424 = INT64_MIN;

    t91 = ((x421<=(x422-x423))*x424);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x425 = -243;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = 28409867U;
	uint32_t t92 = 32477606U;

    t92 = ((x425<=(x426-x427))*x428);

    if (t92 != 28409867U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x429 = -1961;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	int64_t x432 = -1LL;

    t93 = ((x429<=(x430-x431))*x432);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x433 = UINT8_MAX;
	int32_t x434 = -1;
	int8_t x435 = INT8_MAX;
	int32_t x436 = INT32_MAX;
	int32_t t94 = 19474;

    t94 = ((x433<=(x434-x435))*x436);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x437 = 277185779LLU;
	static uint64_t x438 = UINT64_MAX;
	uint8_t x439 = 39U;
	volatile uint64_t x440 = UINT64_MAX;
	uint64_t t95 = UINT64_MAX;

    t95 = ((x437<=(x438-x439))*x440);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x442 = INT16_MIN;
	volatile int8_t x444 = INT8_MIN;

    t96 = ((x441<=(x442-x443))*x444);

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x445 = 403437LLU;
	volatile int16_t x446 = INT16_MAX;
	int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MAX;
	int32_t t97 = 134195489;

    t97 = ((x445<=(x446-x447))*x448);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x450 = UINT32_MAX;
	volatile uint32_t x452 = 2U;
	volatile uint32_t t98 = 853279U;

    t98 = ((x449<=(x450-x451))*x452);

    if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x453 = -1;
	static volatile int8_t x454 = INT8_MIN;
	int16_t x456 = INT16_MIN;
	volatile int32_t t99 = 18153;

    t99 = ((x453<=(x454-x455))*x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x457 = UINT16_MAX;
	uint8_t x458 = 3U;
	int8_t x459 = -43;

    t100 = ((x457<=(x458-x459))*x460);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x461 = INT16_MIN;
	static int32_t t101 = -48079;

    t101 = ((x461<=(x462-x463))*x464);

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x465 = UINT16_MAX;
	int8_t x466 = -1;
	int64_t x467 = INT64_MAX;
	volatile int16_t x468 = INT16_MIN;
	int32_t t102 = -173717567;

    t102 = ((x465<=(x466-x467))*x468);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x469 = INT32_MAX;
	int32_t x470 = INT32_MAX;
	volatile uint8_t x471 = UINT8_MAX;
	int32_t x472 = INT32_MIN;

    t103 = ((x469<=(x470-x471))*x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x473 = -1;
	static volatile uint32_t x474 = 16521966U;
	uint64_t x475 = 26843877020251224LLU;
	int8_t x476 = INT8_MIN;
	volatile int32_t t104 = 7378;

    t104 = ((x473<=(x474-x475))*x476);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x481 = 2U;
	volatile int32_t x482 = INT32_MIN;
	static volatile uint64_t x483 = UINT64_MAX;
	uint32_t x484 = UINT32_MAX;

    t105 = ((x481<=(x482-x483))*x484);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x485 = UINT32_MAX;
	static int16_t x486 = 2327;
	static uint16_t x488 = 12934U;
	int32_t t106 = -17;

    t106 = ((x485<=(x486-x487))*x488);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x489 = -645598043076LL;
	int16_t x491 = -1;
	uint8_t x492 = UINT8_MAX;
	int32_t t107 = 31;

    t107 = ((x489<=(x490-x491))*x492);

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x493 = INT16_MAX;
	int64_t x494 = INT64_MIN;
	int64_t x496 = INT64_MAX;

    t108 = ((x493<=(x494-x495))*x496);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x497 = INT8_MIN;
	int8_t x498 = INT8_MAX;
	int32_t x500 = INT32_MAX;
	volatile int32_t t109 = 33417;

    t109 = ((x497<=(x498-x499))*x500);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x502 = 80U;
	int8_t x503 = INT8_MIN;
	int8_t x504 = 1;
	static volatile int32_t t110 = -870711;

    t110 = ((x501<=(x502-x503))*x504);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x506 = 467542658U;
	uint8_t x507 = 106U;
	int32_t x508 = INT32_MIN;
	int32_t t111 = 184724180;

    t111 = ((x505<=(x506-x507))*x508);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x510 = 1079315825079632220LLU;
	static int64_t x511 = -1LL;

    t112 = ((x509<=(x510-x511))*x512);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	uint8_t x514 = 1U;
	volatile int32_t x516 = 6030;
	volatile int32_t t113 = 3368564;

    t113 = ((x513<=(x514-x515))*x516);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x521 = UINT8_MAX;
	uint8_t x522 = UINT8_MAX;
	int32_t x524 = -95590634;
	volatile int32_t t114 = -430;

    t114 = ((x521<=(x522-x523))*x524);

    if (t114 != -95590634) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x526 = UINT16_MAX;
	int64_t x528 = INT64_MAX;
	int64_t t115 = 1537LL;

    t115 = ((x525<=(x526-x527))*x528);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x529 = INT8_MIN;
	int8_t x530 = -1;
	static uint8_t x531 = UINT8_MAX;
	static volatile uint64_t x532 = 1808646245LLU;
	volatile uint64_t t116 = 1433478737665LLU;

    t116 = ((x529<=(x530-x531))*x532);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x533 = -16801385876LL;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t117 = -255;

    t117 = ((x533<=(x534-x535))*x536);

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x541 = INT32_MIN;
	static int8_t x542 = -23;
	uint64_t x543 = 1007683875LLU;
	volatile int64_t x544 = -1LL;
	int64_t t118 = -22296018161LL;

    t118 = ((x541<=(x542-x543))*x544);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x545 = INT16_MIN;
	int16_t x546 = INT16_MAX;
	static int64_t x548 = INT64_MAX;

    t119 = ((x545<=(x546-x547))*x548);

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x557 = 498;
	static int32_t x559 = 0;
	volatile int32_t x560 = -3746820;
	int32_t t120 = 96896;

    t120 = ((x557<=(x558-x559))*x560);

    if (t120 != -3746820) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x562 = 872990507400619LLU;
	int32_t x563 = INT32_MIN;
	int8_t x564 = -1;
	int32_t t121 = 0;

    t121 = ((x561<=(x562-x563))*x564);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x569 = INT64_MIN;
	int8_t x570 = -1;
	int64_t x571 = -1LL;
	int32_t x572 = -1;

    t122 = ((x569<=(x570-x571))*x572);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x573 = 1LL;
	int16_t x574 = INT16_MIN;
	int8_t x575 = -1;
	static int64_t x576 = INT64_MIN;
	volatile int64_t t123 = -646LL;

    t123 = ((x573<=(x574-x575))*x576);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x577 = UINT32_MAX;
	int8_t x578 = INT8_MIN;
	int64_t x579 = 2183LL;
	uint32_t x580 = 603474000U;

    t124 = ((x577<=(x578-x579))*x580);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = -2063904862008LL;
	int8_t x583 = INT8_MIN;
	int8_t x584 = -1;

    t125 = ((x581<=(x582-x583))*x584);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x585 = INT32_MIN;
	volatile int16_t x586 = -2442;
	static int64_t t126 = INT64_MIN;

    t126 = ((x585<=(x586-x587))*x588);

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x589 = UINT8_MAX;
	volatile int8_t x590 = -7;
	volatile int64_t x592 = -1LL;
	volatile int64_t t127 = 1627398302LL;

    t127 = ((x589<=(x590-x591))*x592);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x593 = 1;
	int64_t x594 = -252LL;
	static int32_t x596 = -1;
	int32_t t128 = 397;

    t128 = ((x593<=(x594-x595))*x596);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	int8_t x598 = INT8_MIN;
	int64_t x599 = -1LL;
	int8_t x600 = 22;

    t129 = ((x597<=(x598-x599))*x600);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x601 = INT32_MIN;
	volatile int64_t x602 = 9293701065408LL;
	uint16_t x603 = UINT16_MAX;
	static int64_t x604 = -1LL;

    t130 = ((x601<=(x602-x603))*x604);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x605 = 6411U;
	int8_t x606 = 3;
	int32_t x607 = -1583407;
	uint16_t x608 = 135U;
	int32_t t131 = -835;

    t131 = ((x605<=(x606-x607))*x608);

    if (t131 != 135) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x610 = 15500248LL;
	volatile uint16_t x611 = 28U;
	static uint16_t x612 = 915U;
	static volatile int32_t t132 = -9124440;

    t132 = ((x609<=(x610-x611))*x612);

    if (t132 != 915) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x615 = INT8_MAX;
	uint64_t x616 = UINT64_MAX;
	uint64_t t133 = 1221510338009840573LLU;

    t133 = ((x613<=(x614-x615))*x616);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x617 = 1;
	int16_t x618 = -180;
	uint32_t x619 = 181898280U;
	uint16_t x620 = 6204U;

    t134 = ((x617<=(x618-x619))*x620);

    if (t134 != 6204) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x621 = 10910U;
	int16_t x622 = INT16_MIN;
	int16_t x623 = INT16_MAX;
	uint32_t x624 = 27U;
	uint32_t t135 = 867012515U;

    t135 = ((x621<=(x622-x623))*x624);

    if (t135 != 27U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x626 = 3529038523555LLU;
	int64_t x627 = INT64_MIN;
	volatile uint64_t t136 = 1673146287920571LLU;

    t136 = ((x625<=(x626-x627))*x628);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x630 = -384662665655268LL;
	static int8_t x631 = -1;
	int32_t x632 = -1;
	static int32_t t137 = -51746;

    t137 = ((x629<=(x630-x631))*x632);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x633 = INT32_MAX;
	uint64_t x635 = UINT64_MAX;

    t138 = ((x633<=(x634-x635))*x636);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x637 = 4244384769576LL;
	volatile uint16_t x638 = 1U;
	int32_t x639 = INT32_MAX;
	static int32_t t139 = 0;

    t139 = ((x637<=(x638-x639))*x640);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x641 = INT16_MIN;
	int8_t x642 = INT8_MIN;
	static volatile uint64_t x643 = 538031170627334580LLU;
	uint64_t x644 = UINT64_MAX;
	volatile uint64_t t140 = 110LLU;

    t140 = ((x641<=(x642-x643))*x644);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x645 = -4491209LL;
	uint8_t x646 = 1U;
	uint8_t x648 = 4U;

    t141 = ((x645<=(x646-x647))*x648);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x649 = -1;
	int8_t x651 = 23;
	static int16_t x652 = INT16_MIN;
	static int32_t t142 = 8;

    t142 = ((x649<=(x650-x651))*x652);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x653 = 43U;
	int16_t x654 = -5;
	int32_t x655 = -1;
	int16_t x656 = INT16_MIN;
	static int32_t t143 = 842890380;

    t143 = ((x653<=(x654-x655))*x656);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x658 = 247967976U;
	static int64_t x659 = -99410797554899LL;
	int16_t x660 = -4960;
	volatile int32_t t144 = -126209020;

    t144 = ((x657<=(x658-x659))*x660);

    if (t144 != -4960) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x661 = INT16_MIN;
	static uint64_t x662 = UINT64_MAX;
	volatile int8_t x663 = INT8_MIN;
	volatile int32_t t145 = 5098;

    t145 = ((x661<=(x662-x663))*x664);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x665 = -1;
	static int16_t x667 = INT16_MIN;
	uint16_t x668 = 3U;
	volatile int32_t t146 = -57004;

    t146 = ((x665<=(x666-x667))*x668);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x670 = 1U;
	volatile int8_t x671 = INT8_MAX;
	int32_t t147 = 993514;

    t147 = ((x669<=(x670-x671))*x672);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x677 = UINT16_MAX;
	static int16_t x678 = -3971;
	int8_t x679 = -3;
	int32_t x680 = -31;
	static int32_t t148 = -9;

    t148 = ((x677<=(x678-x679))*x680);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x682 = INT8_MAX;
	int32_t x683 = -55;
	static uint16_t x684 = 68U;
	volatile int32_t t149 = 4730;

    t149 = ((x681<=(x682-x683))*x684);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x693 = 918991LL;
	static volatile int8_t x694 = -1;
	static int32_t x695 = INT32_MIN;
	static volatile int32_t t150 = 7;

    t150 = ((x693<=(x694-x695))*x696);

    if (t150 != -108) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x697 = INT16_MIN;
	static int32_t x698 = INT32_MAX;
	int16_t x699 = 309;
	volatile int8_t x700 = INT8_MAX;
	int32_t t151 = 0;

    t151 = ((x697<=(x698-x699))*x700);

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x701 = INT16_MAX;
	uint64_t x702 = 3LLU;
	int32_t x703 = INT32_MIN;
	volatile uint8_t x704 = 15U;
	int32_t t152 = 191929;

    t152 = ((x701<=(x702-x703))*x704);

    if (t152 != 15) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x709 = 27LLU;
	volatile uint64_t x710 = 65898758630604837LLU;
	int8_t x711 = INT8_MAX;
	int64_t t153 = -17711069LL;

    t153 = ((x709<=(x710-x711))*x712);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x715 = INT8_MIN;
	volatile uint32_t x716 = UINT32_MAX;
	uint32_t t154 = UINT32_MAX;

    t154 = ((x713<=(x714-x715))*x716);

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x717 = INT64_MIN;
	uint16_t x719 = UINT16_MAX;
	static int32_t x720 = -5335099;
	int32_t t155 = -129061154;

    t155 = ((x717<=(x718-x719))*x720);

    if (t155 != -5335099) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x721 = INT8_MIN;
	int8_t x723 = -1;
	uint8_t x724 = 7U;
	volatile int32_t t156 = 430427;

    t156 = ((x721<=(x722-x723))*x724);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t t157 = 747;

    t157 = ((x725<=(x726-x727))*x728);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x729 = -1;
	volatile int16_t x730 = -2344;
	volatile int16_t x731 = -1;
	int8_t x732 = 10;
	volatile int32_t t158 = -6;

    t158 = ((x729<=(x730-x731))*x732);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x738 = UINT16_MAX;
	uint32_t x739 = 919097U;
	volatile int32_t x740 = INT32_MAX;
	int32_t t159 = 859279802;

    t159 = ((x737<=(x738-x739))*x740);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x745 = INT32_MAX;
	int16_t x746 = -5254;
	int32_t t160 = -1496535;

    t160 = ((x745<=(x746-x747))*x748);

    if (t160 != 683) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x749 = INT16_MIN;
	uint64_t x750 = UINT64_MAX;
	static int8_t x751 = -1;
	uint64_t x752 = 31881932195LLU;
	volatile uint64_t t161 = 2789273475994LLU;

    t161 = ((x749<=(x750-x751))*x752);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x753 = -1;
	volatile uint8_t x754 = 0U;
	uint32_t x755 = 2973U;
	int32_t x756 = -645;
	volatile int32_t t162 = -8255902;

    t162 = ((x753<=(x754-x755))*x756);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x758 = 197004180144036LLU;
	volatile uint32_t x759 = UINT32_MAX;
	volatile int16_t x760 = INT16_MIN;
	int32_t t163 = 30806;

    t163 = ((x757<=(x758-x759))*x760);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x761 = UINT32_MAX;
	uint8_t x762 = UINT8_MAX;
	volatile int8_t x763 = -1;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t164 = -496977959;

    t164 = ((x761<=(x762-x763))*x764);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x765 = 268957014U;
	static int8_t x766 = -1;
	int32_t x767 = 200373;
	uint8_t x768 = UINT8_MAX;

    t165 = ((x765<=(x766-x767))*x768);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x770 = UINT8_MAX;
	static int16_t x772 = -1;
	volatile int32_t t166 = -43;

    t166 = ((x769<=(x770-x771))*x772);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x773 = 7784LLU;
	int32_t x774 = 5;
	int8_t x775 = -12;
	uint64_t x776 = UINT64_MAX;
	uint64_t t167 = 5443LLU;

    t167 = ((x773<=(x774-x775))*x776);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x778 = 1853LLU;
	static int8_t x779 = INT8_MIN;
	uint32_t x780 = 923841U;
	volatile uint32_t t168 = 2U;

    t168 = ((x777<=(x778-x779))*x780);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x781 = -182391959;
	volatile int8_t x782 = -5;
	int16_t x783 = INT16_MIN;
	static uint64_t x784 = UINT64_MAX;
	uint64_t t169 = UINT64_MAX;

    t169 = ((x781<=(x782-x783))*x784);

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x785 = INT16_MAX;
	volatile int16_t x787 = INT16_MIN;
	volatile int16_t x788 = INT16_MIN;
	volatile int32_t t170 = 3;

    t170 = ((x785<=(x786-x787))*x788);

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x789 = INT64_MIN;
	static volatile int64_t x790 = 26263LL;
	int32_t x791 = -1307;
	volatile int64_t x792 = 1790958LL;
	volatile int64_t t171 = 1014LL;

    t171 = ((x789<=(x790-x791))*x792);

    if (t171 != 1790958LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x793 = 3231;
	static int16_t x794 = INT16_MIN;
	static uint64_t x796 = 1285393LLU;

    t172 = ((x793<=(x794-x795))*x796);

    if (t172 != 1285393LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x798 = INT16_MAX;
	volatile uint64_t x799 = 283699077210852118LLU;
	int16_t x800 = INT16_MIN;

    t173 = ((x797<=(x798-x799))*x800);

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x801 = INT16_MIN;
	uint16_t x802 = UINT16_MAX;
	int16_t x803 = INT16_MIN;
	volatile int64_t t174 = -1669LL;

    t174 = ((x801<=(x802-x803))*x804);

    if (t174 != 1631LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x807 = 19265895LLU;
	uint8_t x808 = 1U;
	static int32_t t175 = 166672;

    t175 = ((x805<=(x806-x807))*x808);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x809 = INT8_MIN;
	uint32_t x810 = 9888U;
	static int64_t x811 = INT64_MAX;
	uint64_t x812 = 5639LLU;

    t176 = ((x809<=(x810-x811))*x812);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x813 = -1LL;
	volatile int8_t x814 = 1;
	volatile int8_t x816 = 0;
	int32_t t177 = 332714;

    t177 = ((x813<=(x814-x815))*x816);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x821 = 812632799204LL;
	volatile int64_t x822 = 6556857LL;
	int8_t x824 = 1;

    t178 = ((x821<=(x822-x823))*x824);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x825 = -1;
	uint8_t x826 = UINT8_MAX;
	uint8_t x827 = 1U;

    t179 = ((x825<=(x826-x827))*x828);

    if (t179 != 3U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x830 = -1;
	volatile int32_t x831 = INT32_MAX;
	static int32_t x832 = 2374138;
	int32_t t180 = 5233953;

    t180 = ((x829<=(x830-x831))*x832);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x833 = 3U;
	int8_t x834 = 3;
	int32_t x835 = -1;
	volatile uint8_t x836 = 7U;
	volatile int32_t t181 = 27;

    t181 = ((x833<=(x834-x835))*x836);

    if (t181 != 7) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x837 = -1;
	int64_t x839 = -3593921149697201389LL;
	int8_t x840 = INT8_MIN;
	static volatile int32_t t182 = -741;

    t182 = ((x837<=(x838-x839))*x840);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x841 = INT8_MIN;
	int8_t x842 = INT8_MIN;
	static int8_t x844 = INT8_MIN;
	volatile int32_t t183 = 124723070;

    t183 = ((x841<=(x842-x843))*x844);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x845 = -26;
	volatile int8_t x846 = 15;
	int8_t x847 = 21;
	volatile int32_t t184 = -7554212;

    t184 = ((x845<=(x846-x847))*x848);

    if (t184 != -3) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x849 = 3U;
	uint32_t x851 = 74U;

    t185 = ((x849<=(x850-x851))*x852);

    if (t185 != 61) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x853 = 846307LL;
	volatile int16_t x854 = 3;
	int32_t x855 = -1;
	volatile int32_t t186 = -1296;

    t186 = ((x853<=(x854-x855))*x856);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x857 = -431LL;
	static volatile uint8_t x858 = 2U;
	int16_t x859 = 14702;
	uint64_t x860 = 3610554LLU;
	volatile uint64_t t187 = 126557549LLU;

    t187 = ((x857<=(x858-x859))*x860);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x861 = INT32_MIN;
	static int16_t x862 = -1;
	volatile int32_t t188 = 19;

    t188 = ((x861<=(x862-x863))*x864);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x866 = INT16_MIN;
	uint16_t x867 = 896U;
	static int64_t x868 = INT64_MAX;
	int64_t t189 = -50117LL;

    t189 = ((x865<=(x866-x867))*x868);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x869 = -78347938;
	volatile uint32_t x871 = 83549364U;
	volatile int64_t t190 = -110LL;

    t190 = ((x869<=(x870-x871))*x872);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x874 = -1;
	volatile uint8_t x875 = 70U;
	static int32_t t191 = 2;

    t191 = ((x873<=(x874-x875))*x876);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x877 = UINT8_MAX;
	uint64_t x878 = UINT64_MAX;
	static uint32_t x879 = 151347745U;
	uint64_t x880 = 95454355628571LLU;
	volatile uint64_t t192 = 15326619936LLU;

    t192 = ((x877<=(x878-x879))*x880);

    if (t192 != 95454355628571LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x881 = INT8_MAX;
	static volatile int64_t x882 = -1LL;
	static uint8_t x883 = UINT8_MAX;
	int16_t x884 = INT16_MIN;
	volatile int32_t t193 = -92880310;

    t193 = ((x881<=(x882-x883))*x884);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x885 = 107U;
	uint32_t x886 = 214825408U;
	volatile uint16_t x888 = 16126U;
	volatile int32_t t194 = 863;

    t194 = ((x885<=(x886-x887))*x888);

    if (t194 != 16126) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x893 = -88;
	volatile uint16_t x894 = 0U;
	int32_t x895 = -48905;

    t195 = ((x893<=(x894-x895))*x896);

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x897 = INT8_MIN;
	uint32_t x899 = 2481973U;
	int8_t x900 = -19;
	int32_t t196 = -768663904;

    t196 = ((x897<=(x898-x899))*x900);

    if (t196 != -19) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x906 = INT64_MIN;
	uint64_t x907 = UINT64_MAX;
	int8_t x908 = INT8_MAX;
	int32_t t197 = -28366391;

    t197 = ((x905<=(x906-x907))*x908);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x909 = -1LL;
	volatile int8_t x910 = -1;
	int16_t x911 = INT16_MAX;
	int8_t x912 = INT8_MIN;
	volatile int32_t t198 = -30312;

    t198 = ((x909<=(x910-x911))*x912);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x917 = 0;
	int32_t x918 = 199;
	int8_t x919 = -57;
	int32_t x920 = INT32_MAX;
	volatile int32_t t199 = INT32_MAX;

    t199 = ((x917<=(x918-x919))*x920);

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

