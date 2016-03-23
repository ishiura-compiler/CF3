
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

static volatile int8_t x1 = -1;
int16_t x8 = INT16_MIN;
static int64_t x10 = INT64_MAX;
int8_t x12 = INT8_MIN;
int32_t x13 = 643103;
uint32_t x15 = 3U;
static uint64_t x16 = UINT64_MAX;
uint64_t t3 = 240LLU;
int64_t x34 = INT64_MIN;
int8_t x36 = INT8_MIN;
uint8_t x37 = 36U;
static volatile int64_t x40 = -2397LL;
static int32_t x42 = -1;
volatile int16_t x45 = INT16_MIN;
static uint16_t x49 = 741U;
int32_t x60 = INT32_MAX;
int32_t t12 = -118957;
uint8_t x62 = UINT8_MAX;
volatile uint32_t x64 = UINT32_MAX;
static volatile int8_t x67 = INT8_MIN;
int32_t t16 = 245;
static int16_t x86 = 1630;
int32_t t18 = 36560;
volatile uint16_t x90 = UINT16_MAX;
int32_t x91 = -1;
int16_t x92 = -1;
static volatile int32_t t19 = -14723251;
int64_t x99 = INT64_MIN;
uint32_t x103 = 8U;
int64_t x105 = 325535702LL;
int64_t x106 = INT64_MIN;
int16_t x113 = -1;
static volatile int64_t x118 = INT64_MAX;
uint64_t x120 = 6588361713115LLU;
uint8_t x131 = 1U;
uint64_t x139 = 3876772785108LLU;
volatile uint8_t x141 = 6U;
int32_t x142 = -1;
int32_t x145 = -1;
uint8_t x146 = UINT8_MAX;
int16_t x153 = INT16_MAX;
int8_t x155 = 6;
static volatile uint32_t t35 = 336U;
int32_t x169 = INT32_MIN;
int32_t x170 = INT32_MIN;
int8_t x175 = INT8_MAX;
uint32_t x184 = 874U;
uint32_t x186 = 160U;
static int8_t x188 = INT8_MIN;
uint32_t t41 = 105964U;
int64_t x190 = INT64_MIN;
volatile int64_t t42 = 64LL;
uint16_t x194 = UINT16_MAX;
int64_t t45 = 103027909629998797LL;
int16_t x214 = INT16_MAX;
static int64_t x219 = 343LL;
volatile int64_t t49 = 3696495LL;
uint8_t x221 = UINT8_MAX;
static uint8_t x223 = 3U;
volatile int8_t x226 = -1;
uint64_t x230 = 1637324576103LLU;
volatile int32_t t55 = 870;
int16_t x248 = -1;
int64_t x252 = INT64_MIN;
static volatile int32_t t59 = -5;
uint16_t x261 = 86U;
int64_t x264 = -1LL;
uint32_t x277 = 26996U;
int32_t x279 = -1;
int8_t x285 = INT8_MIN;
static int32_t x287 = INT32_MIN;
int8_t x290 = 0;
int8_t x295 = INT8_MIN;
int16_t x297 = INT16_MIN;
int64_t x307 = INT64_MIN;
uint32_t x312 = 2127798U;
static int32_t x313 = INT32_MIN;
static uint32_t x317 = UINT32_MAX;
int8_t x332 = INT8_MAX;
int16_t x335 = -1;
static uint8_t x338 = 6U;
uint8_t x339 = 4U;
volatile int32_t t77 = -14403662;
uint8_t x342 = 1U;
volatile int64_t x343 = 17800803379LL;
volatile int32_t t79 = 4161;
volatile int8_t x349 = 0;
volatile int64_t t81 = 396364586212LL;
volatile int32_t x359 = 284782059;
uint32_t x363 = 1U;
uint32_t x367 = 2026U;
static volatile uint16_t x377 = UINT16_MAX;
static int64_t x381 = INT64_MIN;
static uint8_t x387 = 19U;
uint64_t x388 = 248931986435LLU;
int64_t x389 = INT64_MAX;
volatile int16_t x395 = 11;
int32_t x399 = -1768206;
uint8_t x404 = 3U;
int32_t x405 = -1;
static int16_t x406 = INT16_MAX;
int16_t x407 = INT16_MIN;
static int32_t t93 = 5224458;
int8_t x413 = -1;
volatile int32_t x415 = 0;
volatile uint64_t t95 = 45LLU;
static int32_t x417 = INT32_MAX;
int8_t x419 = INT8_MIN;
int8_t x423 = 0;
int16_t x429 = -1;
volatile int64_t t99 = -277959792755709LL;
volatile int16_t x436 = INT16_MAX;
int32_t t100 = -10183;
static volatile int16_t x439 = INT16_MIN;
uint8_t x443 = UINT8_MAX;
uint16_t x444 = 165U;
int16_t x445 = INT16_MIN;
static uint32_t x446 = UINT32_MAX;
uint64_t x452 = 6402346262LLU;
uint64_t t104 = 40907906458458064LLU;
int32_t x455 = INT32_MIN;
int64_t t107 = 1007551LL;
int16_t x468 = INT16_MIN;
int16_t x470 = INT16_MIN;
int16_t x484 = INT16_MAX;
int32_t t112 = -27636;
static volatile uint32_t x487 = 13U;
static int16_t x491 = INT16_MIN;
volatile int32_t t114 = -2381521;
uint16_t x496 = 383U;
volatile int32_t t115 = 242317872;
volatile int32_t t116 = -4749;
uint64_t x507 = 320315721504LLU;
volatile uint64_t t117 = 16774531073568189LLU;
volatile int32_t t120 = -1698;
static int16_t x521 = INT16_MAX;
static volatile uint64_t t121 = 111464LLU;
volatile int16_t x526 = INT16_MAX;
int16_t x528 = INT16_MIN;
int16_t x535 = -1;
int16_t x536 = INT16_MIN;
int64_t t125 = -2562514286LL;
volatile uint32_t x541 = 2283442U;
int32_t x544 = -33;
volatile int32_t t126 = 38;
volatile uint8_t x547 = 1U;
uint64_t x548 = 18LLU;
volatile uint64_t t127 = 97230907349597LLU;
static uint32_t x553 = UINT32_MAX;
uint8_t x555 = 63U;
uint64_t t129 = 8129180827200179144LLU;
volatile int16_t x562 = INT16_MIN;
static int32_t t131 = -39324;
volatile uint64_t x577 = 708875981LLU;
volatile int8_t x580 = 48;
int8_t x581 = -1;
int64_t x584 = INT64_MIN;
int8_t x586 = -4;
int8_t x587 = -1;
int64_t x592 = -1397LL;
static int64_t x599 = -1LL;
int64_t x600 = -27798LL;
int16_t x608 = INT16_MIN;
uint64_t x610 = 1150856680492940111LLU;
int32_t t144 = -384775318;
int16_t x621 = INT16_MIN;
volatile int16_t x625 = INT16_MAX;
int8_t x628 = INT8_MIN;
uint8_t x632 = 13U;
int8_t x638 = 1;
static int64_t x644 = -1LL;
static int32_t x645 = 17;
int8_t x655 = INT8_MAX;
int8_t x659 = -1;
static volatile int32_t t154 = -5443;
uint64_t x661 = UINT64_MAX;
static uint64_t t156 = 1359208LLU;
static int64_t x672 = INT64_MAX;
int16_t x673 = 63;
int16_t x676 = INT16_MIN;
int32_t t158 = 1017515;
volatile uint16_t x678 = UINT16_MAX;
uint32_t x681 = 1515U;
int64_t x683 = INT64_MIN;
uint8_t x686 = 0U;
volatile int32_t t162 = 263;
uint16_t x695 = 15489U;
static int32_t t165 = 532724;
uint8_t x706 = 0U;
static int64_t x711 = INT64_MAX;
int16_t x712 = INT16_MAX;
int64_t t167 = -8627949960119214LL;
int64_t x722 = -1LL;
uint64_t x727 = 57331221LLU;
int16_t x730 = INT16_MIN;
uint16_t x736 = 540U;
static uint16_t x740 = 12525U;
uint16_t x741 = 1855U;
static int8_t x743 = 61;
uint64_t x744 = 44517155880LLU;
static volatile int16_t x749 = -1;
int64_t t177 = 8LL;
static uint64_t x763 = 103248152619LLU;
int16_t x767 = INT16_MIN;
int64_t x768 = -1LL;
uint64_t x782 = 14287LLU;
int64_t x793 = INT64_MAX;
uint8_t x795 = UINT8_MAX;
int64_t x797 = INT64_MIN;
int8_t x803 = INT8_MIN;
int16_t x811 = INT16_MAX;
int8_t x826 = 3;
volatile uint64_t x827 = 478418306020527112LLU;
int8_t x833 = INT8_MIN;


void f0(void) {
    	static uint16_t x2 = UINT16_MAX;
	volatile uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -72490203;

    t0 = ((x1<=x2)*(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint8_t x6 = UINT8_MAX;
	static int32_t x7 = INT32_MAX;
	int32_t t1 = -21;

    t1 = ((x5<=x6)*(x7/x8));

    if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int32_t t2 = 0;

    t2 = ((x9<=x10)*(x11/x12));

    if (t2 != 256) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x14 = UINT8_MAX;

    t3 = ((x13<=x14)*(x15/x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	static volatile int8_t x18 = -1;
	static volatile uint64_t x19 = 2993648LLU;
	static uint16_t x20 = UINT16_MAX;
	uint64_t t4 = 30368484597LLU;

    t4 = ((x17<=x18)*(x19/x20));

    if (t4 != 45LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1426296829LLU;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = -1;
	static int64_t x24 = -1LL;
	int64_t t5 = -1304479767352513094LL;

    t5 = ((x21<=x22)*(x23/x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = INT64_MAX;
	static volatile int32_t x35 = INT32_MAX;
	int32_t t6 = -6;

    t6 = ((x33<=x34)*(x35/x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x38 = INT8_MIN;
	volatile int32_t x39 = INT32_MIN;
	static int64_t t7 = -1085199087988141743LL;

    t7 = ((x37<=x38)*(x39/x40));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MIN;
	volatile int32_t x43 = INT32_MIN;
	int32_t x44 = -28;
	static int32_t t8 = 848;

    t8 = ((x41<=x42)*(x43/x44));

    if (t8 != 76695844) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x46 = 115U;
	static int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t9 = -688610;

    t9 = ((x45<=x46)*(x47/x48));

    if (t9 != 16777216) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x50 = -97LL;
	int64_t x51 = -4299459463LL;
	int64_t x52 = -1LL;
	static int64_t t10 = 426849710846LL;

    t10 = ((x49<=x50)*(x51/x52));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x53 = INT64_MIN;
	static int32_t x54 = INT32_MAX;
	int8_t x55 = -33;
	uint16_t x56 = 1U;
	static volatile int32_t t11 = -791;

    t11 = ((x53<=x54)*(x55/x56));

    if (t11 != -33) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = -1477;
	volatile int64_t x58 = -1LL;
	static volatile int16_t x59 = -1;

    t12 = ((x57<=x58)*(x59/x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -1;
	int8_t x63 = -4;
	static volatile uint32_t t13 = 1U;

    t13 = ((x61<=x62)*(x63/x64));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MAX;
	int64_t x68 = INT64_MIN;
	int64_t t14 = -264162623631LL;

    t14 = ((x65<=x66)*(x67/x68));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -32988020552209008LL;
	int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MIN;
	int8_t x72 = 39;
	int32_t t15 = 412;

    t15 = ((x69<=x70)*(x71/x72));

    if (t15 != -840) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	static int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = INT16_MIN;

    t16 = ((x73<=x74)*(x75/x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MAX;
	static int8_t x83 = -6;
	volatile int16_t x84 = 56;
	volatile int32_t t17 = -501823647;

    t17 = ((x81<=x82)*(x83/x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = -95227;
	int32_t x87 = 52;
	int8_t x88 = -6;

    t18 = ((x85<=x86)*(x87/x88));

    if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = INT64_MIN;

    t19 = ((x89<=x90)*(x91/x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x93 = UINT16_MAX;
	static uint8_t x94 = UINT8_MAX;
	static int16_t x95 = INT16_MIN;
	static uint8_t x96 = UINT8_MAX;
	int32_t t20 = 377;

    t20 = ((x93<=x94)*(x95/x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -8428LL;

    t21 = ((x97<=x98)*(x99/x100));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MAX;
	int32_t x104 = INT32_MIN;
	static volatile uint32_t t22 = 6721U;

    t22 = ((x101<=x102)*(x103/x104));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MAX;
	int64_t t23 = -1697836694221LL;

    t23 = ((x105<=x106)*(x107/x108));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x109 = 19U;
	static int16_t x110 = INT16_MIN;
	uint32_t x111 = 34U;
	static int32_t x112 = INT32_MIN;
	uint32_t t24 = 26U;

    t24 = ((x109<=x110)*(x111/x112));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t25 = 2838LL;

    t25 = ((x113<=x114)*(x115/x116));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x117 = INT64_MIN;
	static volatile int32_t x119 = INT32_MIN;
	volatile uint64_t t26 = 47949270489260LLU;

    t26 = ((x117<=x118)*(x119/x120));

    if (t26 != 2799898LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = UINT64_MAX;
	int16_t x122 = INT16_MAX;
	int64_t x123 = 30439764LL;
	int16_t x124 = -1;
	static int64_t t27 = -513LL;

    t27 = ((x121<=x122)*(x123/x124));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = -1;
	int64_t x126 = 331107037637LL;
	static int32_t x127 = INT32_MIN;
	uint32_t x128 = 3U;
	volatile uint32_t t28 = 41U;

    t28 = ((x125<=x126)*(x127/x128));

    if (t28 != 715827882U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = 5917LL;
	int8_t x130 = INT8_MAX;
	int8_t x132 = -1;
	volatile int32_t t29 = -11951547;

    t29 = ((x129<=x130)*(x131/x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = UINT8_MAX;
	int8_t x138 = -1;
	volatile int64_t x140 = INT64_MIN;
	uint64_t t30 = 8282502464605322LLU;

    t30 = ((x137<=x138)*(x139/x140));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x143 = INT16_MIN;
	static int16_t x144 = -1;
	static int32_t t31 = 22872;

    t31 = ((x141<=x142)*(x143/x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x147 = 11708U;
	int16_t x148 = 3;
	int32_t t32 = -902749418;

    t32 = ((x145<=x146)*(x147/x148));

    if (t32 != 3902) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x149 = -9;
	volatile int64_t x150 = -2606019733692624LL;
	volatile uint64_t x151 = 7441LLU;
	uint32_t x152 = UINT32_MAX;
	uint64_t t33 = 13LLU;

    t33 = ((x149<=x150)*(x151/x152));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x154 = 86LL;
	static int64_t x156 = INT64_MIN;
	static int64_t t34 = 2926292497143401LL;

    t34 = ((x153<=x154)*(x155/x156));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x161 = 3904114864635LL;
	static int64_t x162 = INT64_MAX;
	uint32_t x163 = 75745U;
	volatile int16_t x164 = -4;

    t35 = ((x161<=x162)*(x163/x164));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x165 = 46742U;
	static uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MIN;
	int32_t x168 = -473512213;
	static int32_t t36 = 3;

    t36 = ((x165<=x166)*(x167/x168));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x171 = INT16_MIN;
	static int64_t x172 = INT64_MAX;
	volatile int64_t t37 = 0LL;

    t37 = ((x169<=x170)*(x171/x172));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x173 = 9;
	int32_t x174 = -1;
	int32_t x176 = INT32_MAX;
	volatile int32_t t38 = -480;

    t38 = ((x173<=x174)*(x175/x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MIN;
	uint16_t x178 = 18U;
	int8_t x179 = -5;
	static int8_t x180 = INT8_MAX;
	volatile int32_t t39 = 53904602;

    t39 = ((x177<=x178)*(x179/x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = -50556;
	volatile int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MIN;
	volatile uint32_t t40 = 1U;

    t40 = ((x181<=x182)*(x183/x184));

    if (t40 != 4914112U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = 504U;
	volatile uint32_t x187 = 5U;

    t41 = ((x185<=x186)*(x187/x188));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = 12614U;
	static int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;

    t42 = ((x189<=x190)*(x191/x192));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x193 = UINT8_MAX;
	int32_t x195 = 0;
	volatile int32_t x196 = -13243;
	volatile int32_t t43 = 726561663;

    t43 = ((x193<=x194)*(x195/x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = 5U;
	int8_t x198 = -1;
	volatile int16_t x199 = 1;
	volatile int32_t x200 = INT32_MIN;
	int32_t t44 = -9120923;

    t44 = ((x197<=x198)*(x199/x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x201 = 440488495993049LLU;
	static int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	uint32_t x204 = 85214U;

    t45 = ((x201<=x202)*(x203/x204));

    if (t45 != -108237754792108LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	static uint16_t x207 = 775U;
	uint64_t x208 = 356110536212LLU;
	volatile uint64_t t46 = 302234139894LLU;

    t46 = ((x205<=x206)*(x207/x208));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	static int32_t x211 = INT32_MIN;
	static volatile int32_t x212 = INT32_MIN;
	volatile int32_t t47 = -4725;

    t47 = ((x209<=x210)*(x211/x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x213 = INT16_MAX;
	int64_t x215 = 1188706181723LL;
	int64_t x216 = 18187214060LL;
	int64_t t48 = -1LL;

    t48 = ((x213<=x214)*(x215/x216));

    if (t48 != 65LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MAX;
	static int8_t x218 = INT8_MAX;
	uint16_t x220 = 7832U;

    t49 = ((x217<=x218)*(x219/x220));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x222 = INT32_MAX;
	static volatile uint32_t x224 = 21U;
	static volatile uint32_t t50 = 1U;

    t50 = ((x221<=x222)*(x223/x224));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = INT32_MIN;
	volatile int16_t x227 = -3;
	static uint32_t x228 = 280U;
	static volatile uint32_t t51 = 40846030U;

    t51 = ((x225<=x226)*(x227/x228));

    if (t51 != 15339168U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x229 = -1;
	int64_t x231 = 1039414769LL;
	uint32_t x232 = UINT32_MAX;
	int64_t t52 = -1100463565744210117LL;

    t52 = ((x229<=x230)*(x231/x232));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x233 = 15836394870LLU;
	uint64_t x234 = UINT64_MAX;
	static uint8_t x235 = UINT8_MAX;
	static volatile int16_t x236 = -12;
	static int32_t t53 = 0;

    t53 = ((x233<=x234)*(x235/x236));

    if (t53 != -21) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	int8_t x238 = -1;
	uint16_t x239 = 2742U;
	int64_t x240 = INT64_MIN;
	volatile int64_t t54 = -3337666601LL;

    t54 = ((x237<=x238)*(x239/x240));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = 1;
	static int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	static uint16_t x244 = UINT16_MAX;

    t55 = ((x241<=x242)*(x243/x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = -21;
	int8_t x246 = INT8_MIN;
	uint64_t x247 = 69770108200474696LLU;
	static uint64_t t56 = 45992393872LLU;

    t56 = ((x245<=x246)*(x247/x248));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x249 = 697264706351005588LLU;
	int16_t x250 = -1;
	int64_t x251 = 31461859268828407LL;
	volatile int64_t t57 = 190517737LL;

    t57 = ((x249<=x250)*(x251/x252));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x253 = 31U;
	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MIN;
	uint32_t x256 = 1366U;
	static uint32_t t58 = 53U;

    t58 = ((x253<=x254)*(x255/x256));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	static int8_t x259 = -9;
	int32_t x260 = INT32_MIN;

    t59 = ((x257<=x258)*(x259/x260));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x262 = INT8_MIN;
	int16_t x263 = -1;
	volatile int64_t t60 = 0LL;

    t60 = ((x261<=x262)*(x263/x264));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = -10;
	int8_t x266 = INT8_MAX;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = 17940U;
	int64_t t61 = -145897772LL;

    t61 = ((x265<=x266)*(x267/x268));

    if (t61 != -514123301942852LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = -1LL;
	int8_t x270 = 1;
	static int64_t x271 = 1026187056513728LL;
	uint8_t x272 = 25U;
	volatile int64_t t62 = 0LL;

    t62 = ((x269<=x270)*(x271/x272));

    if (t62 != 41047482260549LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x273 = 3U;
	uint32_t x274 = UINT32_MAX;
	static int16_t x275 = 5303;
	static uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t63 = 202402355290727255LLU;

    t63 = ((x273<=x274)*(x275/x276));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x278 = INT8_MAX;
	int32_t x280 = 234147432;
	static int32_t t64 = -13;

    t64 = ((x277<=x278)*(x279/x280));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x286 = UINT16_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t65 = 1030095;

    t65 = ((x285<=x286)*(x287/x288));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x289 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	int16_t x292 = -638;
	static volatile int32_t t66 = 6;

    t66 = ((x289<=x290)*(x291/x292));

    if (t66 != 3365961) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x293 = INT8_MIN;
	static int32_t x294 = INT32_MAX;
	static uint8_t x296 = 7U;
	int32_t t67 = -1;

    t67 = ((x293<=x294)*(x295/x296));

    if (t67 != -18) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	int32_t t68 = 1;

    t68 = ((x297<=x298)*(x299/x300));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x305 = 6U;
	static volatile uint16_t x306 = UINT16_MAX;
	uint32_t x308 = 2U;
	int64_t t69 = 260124800348LL;

    t69 = ((x305<=x306)*(x307/x308));

    if (t69 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x309 = 1U;
	uint32_t x310 = 30166U;
	int8_t x311 = 23;
	uint32_t t70 = 456621U;

    t70 = ((x309<=x310)*(x311/x312));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x314 = -1;
	int64_t x315 = -1LL;
	uint32_t x316 = 1446077992U;
	int64_t t71 = 101290217756755559LL;

    t71 = ((x313<=x314)*(x315/x316));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x318 = -1;
	volatile uint64_t x319 = UINT64_MAX;
	int64_t x320 = 9346554752LL;
	static volatile uint64_t t72 = 3221261859LLU;

    t72 = ((x317<=x318)*(x319/x320));

    if (t72 != 1973641043LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x321 = INT16_MAX;
	uint64_t x322 = 949630507LLU;
	static int16_t x323 = -1;
	int16_t x324 = INT16_MAX;
	volatile int32_t t73 = -1;

    t73 = ((x321<=x322)*(x323/x324));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 166394089U;
	volatile uint16_t x327 = 1708U;
	static volatile int32_t x328 = -1;
	int32_t t74 = -43064495;

    t74 = ((x325<=x326)*(x327/x328));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = -1;
	uint32_t x331 = 1198320782U;
	uint32_t t75 = 11127U;

    t75 = ((x329<=x330)*(x331/x332));

    if (t75 != 9435596U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x336 = 988141LL;
	volatile int64_t t76 = -1107LL;

    t76 = ((x333<=x334)*(x335/x336));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x337 = INT8_MIN;
	volatile int16_t x340 = INT16_MIN;

    t77 = ((x337<=x338)*(x339/x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x341 = 0;
	static int16_t x344 = INT16_MIN;
	int64_t t78 = 3321135174783LL;

    t78 = ((x341<=x342)*(x343/x344));

    if (t78 != -543237LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x345 = -9;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = -1;
	int32_t x348 = INT32_MIN;

    t79 = ((x345<=x346)*(x347/x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x350 = UINT8_MAX;
	uint64_t x351 = UINT64_MAX;
	uint16_t x352 = 1926U;
	volatile uint64_t t80 = 22509310222LLU;

    t80 = ((x349<=x350)*(x351/x352));

    if (t80 != 9577748740243796LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x353 = -1;
	static int8_t x354 = -9;
	int16_t x355 = -1;
	int64_t x356 = INT64_MIN;

    t81 = ((x353<=x354)*(x355/x356));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x357 = 33397748604699LL;
	volatile int32_t x358 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t82 = -28781;

    t82 = ((x357<=x358)*(x359/x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x361 = 242914U;
	static volatile int64_t x362 = INT64_MIN;
	uint32_t x364 = 410606490U;
	volatile uint32_t t83 = 1U;

    t83 = ((x361<=x362)*(x363/x364));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x365 = INT8_MAX;
	volatile int64_t x366 = INT64_MAX;
	static int16_t x368 = INT16_MIN;
	static volatile uint32_t t84 = 2314U;

    t84 = ((x365<=x366)*(x367/x368));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	int16_t x376 = -467;
	int32_t t85 = 6;

    t85 = ((x373<=x374)*(x375/x376));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x378 = INT32_MIN;
	uint8_t x379 = 6U;
	int16_t x380 = 911;
	int32_t t86 = 3534606;

    t86 = ((x377<=x378)*(x379/x380));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x382 = -17;
	int32_t x383 = -1;
	static volatile int64_t x384 = INT64_MIN;
	static int64_t t87 = 201LL;

    t87 = ((x381<=x382)*(x383/x384));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int16_t x386 = -636;
	volatile uint64_t t88 = 276LLU;

    t88 = ((x385<=x386)*(x387/x388));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MIN;
	volatile int64_t x392 = INT64_MIN;
	volatile int64_t t89 = 1459003514070646LL;

    t89 = ((x389<=x390)*(x391/x392));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x393 = 2456U;
	uint16_t x394 = UINT16_MAX;
	static volatile uint16_t x396 = UINT16_MAX;
	static volatile int32_t t90 = 4707643;

    t90 = ((x393<=x394)*(x395/x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x397 = INT64_MIN;
	uint32_t x398 = UINT32_MAX;
	static int32_t x400 = -1;
	volatile int32_t t91 = 3224368;

    t91 = ((x397<=x398)*(x399/x400));

    if (t91 != 1768206) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x401 = -1;
	uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = -1;
	volatile int32_t t92 = 10141713;

    t92 = ((x401<=x402)*(x403/x404));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x408 = UINT16_MAX;

    t93 = ((x405<=x406)*(x407/x408));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x409 = 1378139724U;
	static int8_t x410 = INT8_MAX;
	uint16_t x411 = UINT16_MAX;
	static volatile uint64_t x412 = 257472357290LLU;
	volatile uint64_t t94 = 2086746189527508LLU;

    t94 = ((x409<=x410)*(x411/x412));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x414 = 15754;
	uint64_t x416 = UINT64_MAX;

    t95 = ((x413<=x414)*(x415/x416));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x418 = -61;
	volatile uint8_t x420 = 16U;
	static volatile int32_t t96 = 8784;

    t96 = ((x417<=x418)*(x419/x420));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x421 = INT32_MIN;
	int64_t x422 = -4124102LL;
	uint8_t x424 = 3U;
	volatile int32_t t97 = -1129289;

    t97 = ((x421<=x422)*(x423/x424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x425 = -1;
	static volatile int32_t x426 = INT32_MIN;
	int64_t x427 = 4769LL;
	static int32_t x428 = 1207;
	volatile int64_t t98 = 14LL;

    t98 = ((x425<=x426)*(x427/x428));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x430 = 2U;
	uint32_t x431 = 0U;
	int64_t x432 = INT64_MIN;

    t99 = ((x429<=x430)*(x431/x432));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MAX;
	volatile int32_t x435 = INT32_MAX;

    t100 = ((x433<=x434)*(x435/x436));

    if (t100 != 65538) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x437 = 877099U;
	static volatile int64_t x438 = 12667533027974971LL;
	int64_t x440 = INT64_MAX;
	int64_t t101 = 14094409LL;

    t101 = ((x437<=x438)*(x439/x440));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x441 = -32346209016622839LL;
	uint64_t x442 = 47378705815LLU;
	volatile int32_t t102 = -22726387;

    t102 = ((x441<=x442)*(x443/x444));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x447 = 3118U;
	uint32_t x448 = 241U;
	volatile uint32_t t103 = 214608U;

    t103 = ((x445<=x446)*(x447/x448));

    if (t103 != 12U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = INT16_MIN;
	volatile uint64_t x450 = 62LLU;
	static volatile uint16_t x451 = 884U;

    t104 = ((x449<=x450)*(x451/x452));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x453 = UINT8_MAX;
	volatile uint64_t x454 = 28LLU;
	int16_t x456 = INT16_MAX;
	int32_t t105 = 1;

    t105 = ((x453<=x454)*(x455/x456));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = -337;
	int8_t x458 = INT8_MAX;
	int32_t x459 = INT32_MIN;
	volatile int64_t x460 = INT64_MAX;
	volatile int64_t t106 = -1621678679370LL;

    t106 = ((x457<=x458)*(x459/x460));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x461 = 32U;
	int32_t x462 = INT32_MAX;
	uint8_t x463 = 41U;
	int64_t x464 = INT64_MIN;

    t107 = ((x461<=x462)*(x463/x464));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x465 = -1;
	int64_t x466 = INT64_MIN;
	int32_t x467 = 0;
	volatile int32_t t108 = 826850917;

    t108 = ((x465<=x466)*(x467/x468));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x469 = 2720U;
	int32_t x471 = -1;
	static int8_t x472 = INT8_MAX;
	volatile int32_t t109 = 604288;

    t109 = ((x469<=x470)*(x471/x472));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x473 = -14178;
	volatile uint16_t x474 = 70U;
	volatile uint16_t x475 = 1U;
	uint32_t x476 = 38840107U;
	volatile uint32_t t110 = 1U;

    t110 = ((x473<=x474)*(x475/x476));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x477 = UINT32_MAX;
	uint8_t x478 = 7U;
	static int16_t x479 = 8;
	uint16_t x480 = 97U;
	volatile int32_t t111 = 3;

    t111 = ((x477<=x478)*(x479/x480));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MAX;
	int32_t x483 = INT32_MIN;

    t112 = ((x481<=x482)*(x483/x484));

    if (t112 != -65538) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x485 = INT64_MAX;
	static uint64_t x486 = 40595310144LLU;
	static int16_t x488 = INT16_MAX;
	volatile uint32_t t113 = 3U;

    t113 = ((x485<=x486)*(x487/x488));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x489 = -28;
	uint64_t x490 = 4300787565LLU;
	volatile int16_t x492 = -1;

    t114 = ((x489<=x490)*(x491/x492));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = INT32_MIN;
	volatile uint16_t x495 = 2033U;

    t115 = ((x493<=x494)*(x495/x496));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x497 = 1;
	volatile int16_t x498 = -1;
	volatile int32_t x499 = INT32_MAX;
	int8_t x500 = INT8_MIN;

    t116 = ((x497<=x498)*(x499/x500));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	static volatile int64_t x508 = INT64_MIN;

    t117 = ((x505<=x506)*(x507/x508));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x509 = -1LL;
	volatile int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	static volatile int8_t x512 = -1;
	int32_t t118 = -1;

    t118 = ((x509<=x510)*(x511/x512));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x513 = -1LL;
	volatile uint64_t x514 = 2202053LLU;
	int32_t x515 = INT32_MIN;
	volatile int8_t x516 = -2;
	static int32_t t119 = 1;

    t119 = ((x513<=x514)*(x515/x516));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = -128;
	int16_t x518 = 77;
	int16_t x519 = INT16_MIN;
	int8_t x520 = 1;

    t120 = ((x517<=x518)*(x519/x520));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x522 = -1LL;
	static volatile uint64_t x523 = UINT64_MAX;
	int16_t x524 = 2673;

    t121 = ((x521<=x522)*(x523/x524));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x525 = 1;
	int64_t x527 = INT64_MIN;
	volatile int64_t t122 = -64162501086597LL;

    t122 = ((x525<=x526)*(x527/x528));

    if (t122 != 281474976710656LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x529 = UINT32_MAX;
	int8_t x530 = -52;
	int16_t x531 = INT16_MIN;
	volatile int16_t x532 = INT16_MIN;
	volatile int32_t t123 = -20700;

    t123 = ((x529<=x530)*(x531/x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x533 = 2212024606927870LLU;
	int16_t x534 = INT16_MIN;
	int32_t t124 = -14371;

    t124 = ((x533<=x534)*(x535/x536));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x537 = -1;
	int32_t x538 = 2091951;
	int8_t x539 = 22;
	int64_t x540 = INT64_MAX;

    t125 = ((x537<=x538)*(x539/x540));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x542 = UINT32_MAX;
	static uint16_t x543 = 24167U;

    t126 = ((x541<=x542)*(x543/x544));

    if (t126 != -732) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x545 = 5;
	uint64_t x546 = UINT64_MAX;

    t127 = ((x545<=x546)*(x547/x548));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x549 = UINT8_MAX;
	int16_t x550 = -3;
	int8_t x551 = INT8_MAX;
	int64_t x552 = INT64_MAX;
	static volatile int64_t t128 = -1252340LL;

    t128 = ((x549<=x550)*(x551/x552));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x554 = 3840U;
	uint64_t x556 = UINT64_MAX;

    t129 = ((x553<=x554)*(x555/x556));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x557 = INT8_MIN;
	volatile int64_t x558 = INT64_MIN;
	int64_t x559 = INT64_MIN;
	static volatile int32_t x560 = INT32_MIN;
	int64_t t130 = 29790274LL;

    t130 = ((x557<=x558)*(x559/x560));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x561 = 340090871100654LLU;
	uint16_t x563 = UINT16_MAX;
	static int8_t x564 = INT8_MIN;

    t131 = ((x561<=x562)*(x563/x564));

    if (t131 != -511) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x565 = 3U;
	static volatile int16_t x566 = INT16_MIN;
	volatile uint64_t x567 = 48421838LLU;
	uint64_t x568 = 7296616LLU;
	uint64_t t132 = 525537156972LLU;

    t132 = ((x565<=x566)*(x567/x568));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x569 = -31;
	int64_t x570 = INT64_MAX;
	int64_t x571 = INT64_MAX;
	int8_t x572 = INT8_MIN;
	volatile int64_t t133 = 188097011185LL;

    t133 = ((x569<=x570)*(x571/x572));

    if (t133 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x573 = -1;
	int32_t x574 = INT32_MIN;
	int32_t x575 = INT32_MIN;
	int64_t x576 = INT64_MIN;
	int64_t t134 = -196185850620215180LL;

    t134 = ((x573<=x574)*(x575/x576));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x578 = 86U;
	int64_t x579 = INT64_MAX;
	volatile int64_t t135 = 88100177719850687LL;

    t135 = ((x577<=x578)*(x579/x580));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x582 = INT16_MIN;
	static uint8_t x583 = 3U;
	static volatile int64_t t136 = 31365975724LL;

    t136 = ((x581<=x582)*(x583/x584));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x585 = -1;
	uint64_t x588 = UINT64_MAX;
	uint64_t t137 = 32886890423LLU;

    t137 = ((x585<=x586)*(x587/x588));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x589 = 37334U;
	volatile int8_t x590 = INT8_MIN;
	int8_t x591 = -1;
	int64_t t138 = -72LL;

    t138 = ((x589<=x590)*(x591/x592));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x593 = INT32_MIN;
	static volatile int16_t x594 = INT16_MAX;
	volatile int8_t x595 = INT8_MAX;
	int64_t x596 = 28739LL;
	int64_t t139 = -39LL;

    t139 = ((x593<=x594)*(x595/x596));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x597 = INT16_MAX;
	volatile uint16_t x598 = UINT16_MAX;
	volatile int64_t t140 = 510906531LL;

    t140 = ((x597<=x598)*(x599/x600));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x601 = -1;
	int32_t x602 = 63407556;
	int16_t x603 = INT16_MIN;
	int64_t x604 = -309579048106LL;
	static volatile int64_t t141 = 47440960359LL;

    t141 = ((x601<=x602)*(x603/x604));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x605 = INT8_MIN;
	volatile int64_t x606 = -2369889LL;
	uint64_t x607 = 2205796773870557LLU;
	volatile uint64_t t142 = 56512LLU;

    t142 = ((x605<=x606)*(x607/x608));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x609 = 209U;
	int8_t x611 = INT8_MAX;
	int32_t x612 = 345;
	static int32_t t143 = 1479135;

    t143 = ((x609<=x610)*(x611/x612));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x613 = -1;
	uint8_t x614 = UINT8_MAX;
	int16_t x615 = -1;
	uint16_t x616 = UINT16_MAX;

    t144 = ((x613<=x614)*(x615/x616));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x617 = -1LL;
	volatile int16_t x618 = INT16_MIN;
	uint32_t x619 = 0U;
	int16_t x620 = INT16_MAX;
	static uint32_t t145 = 1164326606U;

    t145 = ((x617<=x618)*(x619/x620));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x622 = -1;
	int32_t x623 = INT32_MAX;
	int64_t x624 = INT64_MIN;
	static volatile int64_t t146 = -72LL;

    t146 = ((x621<=x622)*(x623/x624));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x626 = INT64_MIN;
	volatile uint8_t x627 = UINT8_MAX;
	volatile int32_t t147 = -10;

    t147 = ((x625<=x626)*(x627/x628));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x629 = 491U;
	static int64_t x630 = INT64_MIN;
	static volatile int64_t x631 = -828429622LL;
	int64_t t148 = -1251006LL;

    t148 = ((x629<=x630)*(x631/x632));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x637 = 4858U;
	int8_t x639 = -5;
	int8_t x640 = -11;
	int32_t t149 = 6995401;

    t149 = ((x637<=x638)*(x639/x640));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x641 = UINT32_MAX;
	volatile uint16_t x642 = 7U;
	uint16_t x643 = UINT16_MAX;
	volatile int64_t t150 = -121404LL;

    t150 = ((x641<=x642)*(x643/x644));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x646 = UINT64_MAX;
	uint32_t x647 = 88207409U;
	uint16_t x648 = 31U;
	volatile uint32_t t151 = 1464U;

    t151 = ((x645<=x646)*(x647/x648));

    if (t151 != 2845400U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x649 = -1LL;
	int64_t x650 = INT64_MIN;
	int64_t x651 = INT64_MIN;
	static uint8_t x652 = 5U;
	volatile int64_t t152 = 1LL;

    t152 = ((x649<=x650)*(x651/x652));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x653 = UINT32_MAX;
	static uint32_t x654 = 1U;
	uint32_t x656 = UINT32_MAX;
	uint32_t t153 = 27U;

    t153 = ((x653<=x654)*(x655/x656));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x657 = 0;
	static int32_t x658 = -1;
	int16_t x660 = INT16_MAX;

    t154 = ((x657<=x658)*(x659/x660));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x662 = INT16_MAX;
	volatile int8_t x663 = -1;
	int64_t x664 = INT64_MIN;
	int64_t t155 = -71592047898043LL;

    t155 = ((x661<=x662)*(x663/x664));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x665 = 17U;
	int16_t x666 = INT16_MIN;
	int8_t x667 = INT8_MAX;
	uint64_t x668 = 105956064338LLU;

    t156 = ((x665<=x666)*(x667/x668));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x669 = INT8_MAX;
	volatile uint64_t x670 = 17317729865170LLU;
	static uint32_t x671 = 11312502U;
	int64_t t157 = 8884422523LL;

    t157 = ((x669<=x670)*(x671/x672));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x674 = 1039U;
	static volatile int8_t x675 = INT8_MIN;

    t158 = ((x673<=x674)*(x675/x676));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x677 = -1;
	int16_t x679 = -124;
	volatile int8_t x680 = INT8_MIN;
	static volatile int32_t t159 = 4;

    t159 = ((x677<=x678)*(x679/x680));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x682 = INT16_MIN;
	uint16_t x684 = UINT16_MAX;
	int64_t t160 = -15LL;

    t160 = ((x681<=x682)*(x683/x684));

    if (t160 != -140739635871744LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x685 = UINT8_MAX;
	static uint32_t x687 = UINT32_MAX;
	uint32_t x688 = 28535014U;
	uint32_t t161 = 219525U;

    t161 = ((x685<=x686)*(x687/x688));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x689 = -1;
	int64_t x690 = -31787902629193849LL;
	uint8_t x691 = UINT8_MAX;
	static int16_t x692 = INT16_MIN;

    t162 = ((x689<=x690)*(x691/x692));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x693 = UINT8_MAX;
	static int32_t x694 = -26;
	static volatile uint8_t x696 = 1U;
	int32_t t163 = -280674;

    t163 = ((x693<=x694)*(x695/x696));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x697 = 61U;
	uint64_t x698 = UINT64_MAX;
	uint8_t x699 = 7U;
	int16_t x700 = -1;
	volatile int32_t t164 = -51902785;

    t164 = ((x697<=x698)*(x699/x700));

    if (t164 != -7) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x701 = INT32_MIN;
	uint16_t x702 = 57U;
	static int16_t x703 = INT16_MIN;
	int16_t x704 = INT16_MIN;

    t165 = ((x701<=x702)*(x703/x704));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x705 = INT64_MIN;
	volatile int16_t x707 = INT16_MIN;
	static uint16_t x708 = UINT16_MAX;
	int32_t t166 = -4422218;

    t166 = ((x705<=x706)*(x707/x708));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x709 = 1948U;
	volatile int8_t x710 = -1;

    t167 = ((x709<=x710)*(x711/x712));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x713 = -1;
	volatile uint16_t x714 = UINT16_MAX;
	int8_t x715 = -1;
	static volatile int32_t x716 = INT32_MAX;
	volatile int32_t t168 = -5807296;

    t168 = ((x713<=x714)*(x715/x716));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x717 = 0;
	volatile int64_t x718 = INT64_MIN;
	volatile int32_t x719 = INT32_MIN;
	volatile int32_t x720 = INT32_MIN;
	static volatile int32_t t169 = 766048;

    t169 = ((x717<=x718)*(x719/x720));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x721 = UINT8_MAX;
	uint8_t x723 = 62U;
	int64_t x724 = INT64_MAX;
	static int64_t t170 = 92663070LL;

    t170 = ((x721<=x722)*(x723/x724));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x725 = -9308;
	uint16_t x726 = 694U;
	volatile int32_t x728 = INT32_MAX;
	uint64_t t171 = 3997041681062036LLU;

    t171 = ((x725<=x726)*(x727/x728));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x729 = INT16_MAX;
	static int8_t x731 = INT8_MAX;
	int64_t x732 = INT64_MIN;
	volatile int64_t t172 = 29LL;

    t172 = ((x729<=x730)*(x731/x732));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x733 = INT32_MIN;
	uint32_t x734 = UINT32_MAX;
	int32_t x735 = INT32_MIN;
	int32_t t173 = -12;

    t173 = ((x733<=x734)*(x735/x736));

    if (t173 != -3976821) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x737 = -2;
	uint64_t x738 = 1478768110478141LLU;
	uint8_t x739 = UINT8_MAX;
	static volatile int32_t t174 = -104;

    t174 = ((x737<=x738)*(x739/x740));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x742 = UINT32_MAX;
	static volatile uint64_t t175 = 29497117339280LLU;

    t175 = ((x741<=x742)*(x743/x744));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x745 = 139U;
	static volatile int32_t x746 = INT32_MIN;
	int8_t x747 = INT8_MIN;
	int8_t x748 = INT8_MIN;
	int32_t t176 = 5544;

    t176 = ((x745<=x746)*(x747/x748));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x750 = INT32_MIN;
	int16_t x751 = -1;
	static int64_t x752 = INT64_MIN;

    t177 = ((x749<=x750)*(x751/x752));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x753 = INT16_MAX;
	static uint64_t x754 = UINT64_MAX;
	volatile int32_t x755 = INT32_MAX;
	static int64_t x756 = -414360479439356LL;
	static volatile int64_t t178 = 37350LL;

    t178 = ((x753<=x754)*(x755/x756));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x757 = INT8_MAX;
	uint16_t x758 = UINT16_MAX;
	uint64_t x759 = 139956859677LLU;
	volatile int64_t x760 = -2011078LL;
	uint64_t t179 = 1301731753LLU;

    t179 = ((x757<=x758)*(x759/x760));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x761 = INT16_MAX;
	uint32_t x762 = 17U;
	int8_t x764 = -1;
	uint64_t t180 = 19070850117LLU;

    t180 = ((x761<=x762)*(x763/x764));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x765 = UINT16_MAX;
	uint8_t x766 = 0U;
	volatile int64_t t181 = -3257386860838447LL;

    t181 = ((x765<=x766)*(x767/x768));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x769 = 50U;
	volatile uint64_t x770 = 200589499336LLU;
	uint16_t x771 = 27U;
	int64_t x772 = 58361942097LL;
	volatile int64_t t182 = -18277LL;

    t182 = ((x769<=x770)*(x771/x772));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x773 = INT8_MIN;
	uint32_t x774 = 3436689U;
	static int8_t x775 = -1;
	volatile int64_t x776 = -18993353LL;
	volatile int64_t t183 = 3473765694558494571LL;

    t183 = ((x773<=x774)*(x775/x776));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x777 = 0U;
	uint64_t x778 = 585LLU;
	uint8_t x779 = 1U;
	int64_t x780 = INT64_MAX;
	static volatile int64_t t184 = 9LL;

    t184 = ((x777<=x778)*(x779/x780));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x781 = INT16_MAX;
	int32_t x783 = -1;
	volatile int16_t x784 = -1;
	volatile int32_t t185 = -11;

    t185 = ((x781<=x782)*(x783/x784));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x785 = -21;
	uint16_t x786 = UINT16_MAX;
	volatile uint32_t x787 = UINT32_MAX;
	static volatile int8_t x788 = -1;
	uint32_t t186 = 57U;

    t186 = ((x785<=x786)*(x787/x788));

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x789 = INT8_MIN;
	static uint64_t x790 = 1LLU;
	volatile uint32_t x791 = UINT32_MAX;
	static volatile int32_t x792 = -1;
	volatile uint32_t t187 = 2016U;

    t187 = ((x789<=x790)*(x791/x792));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x794 = 4572U;
	uint64_t x796 = 14686LLU;
	volatile uint64_t t188 = 11LLU;

    t188 = ((x793<=x794)*(x795/x796));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x798 = INT8_MIN;
	volatile int32_t x799 = INT32_MIN;
	static int32_t x800 = -4;
	int32_t t189 = 246818217;

    t189 = ((x797<=x798)*(x799/x800));

    if (t189 != 536870912) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x801 = 3;
	uint16_t x802 = UINT16_MAX;
	volatile uint32_t x804 = 15567584U;
	uint32_t t190 = 1761473897U;

    t190 = ((x801<=x802)*(x803/x804));

    if (t190 != 275U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x805 = -1LL;
	int16_t x806 = -69;
	int64_t x807 = INT64_MAX;
	int32_t x808 = INT32_MAX;
	static int64_t t191 = 4284405799641LL;

    t191 = ((x805<=x806)*(x807/x808));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x809 = INT32_MIN;
	volatile int8_t x810 = INT8_MIN;
	int8_t x812 = INT8_MIN;
	volatile int32_t t192 = 69739591;

    t192 = ((x809<=x810)*(x811/x812));

    if (t192 != -255) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x813 = INT32_MAX;
	int32_t x814 = INT32_MIN;
	static int16_t x815 = INT16_MIN;
	int8_t x816 = -1;
	static volatile int32_t t193 = -191030;

    t193 = ((x813<=x814)*(x815/x816));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x817 = INT64_MIN;
	static uint32_t x818 = UINT32_MAX;
	int16_t x819 = 0;
	static int8_t x820 = INT8_MIN;
	static int32_t t194 = 33;

    t194 = ((x817<=x818)*(x819/x820));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x821 = -1LL;
	int16_t x822 = 5712;
	uint16_t x823 = UINT16_MAX;
	int16_t x824 = INT16_MAX;
	static int32_t t195 = -177113127;

    t195 = ((x821<=x822)*(x823/x824));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x825 = -1LL;
	int8_t x828 = INT8_MAX;
	static volatile uint64_t t196 = 2777380LLU;

    t196 = ((x825<=x826)*(x827/x828));

    if (t196 != 3767073275752181LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x829 = 2883385LLU;
	volatile uint16_t x830 = 3931U;
	uint32_t x831 = 40U;
	static uint32_t x832 = UINT32_MAX;
	uint32_t t197 = 190U;

    t197 = ((x829<=x830)*(x831/x832));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x834 = -528;
	int64_t x835 = INT64_MIN;
	int32_t x836 = INT32_MIN;
	int64_t t198 = -429562724353LL;

    t198 = ((x833<=x834)*(x835/x836));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x837 = 13U;
	uint16_t x838 = UINT16_MAX;
	int32_t x839 = INT32_MIN;
	uint8_t x840 = UINT8_MAX;
	volatile int32_t t199 = 3110;

    t199 = ((x837<=x838)*(x839/x840));

    if (t199 != -8421504) { NG(); } else { ; }
	
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

