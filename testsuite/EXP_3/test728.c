
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

static int32_t x3 = -1;
static int32_t x8 = 206761001;
uint8_t x13 = 0U;
uint32_t x14 = 445526886U;
volatile int16_t x18 = INT16_MIN;
uint64_t x33 = 48597178908260999LLU;
static int8_t x40 = -1;
volatile uint32_t t9 = 468724U;
int16_t x46 = 18;
int8_t x51 = INT8_MIN;
uint64_t x55 = 5951LLU;
static int32_t x58 = INT32_MIN;
volatile uint32_t x59 = UINT32_MAX;
int64_t x61 = 422LL;
uint64_t x64 = 212706271661343LLU;
uint64_t x66 = 5669260783604LLU;
uint8_t x68 = UINT8_MAX;
int32_t t15 = 12;
static uint16_t x80 = 22U;
static volatile int32_t t19 = 829057270;
uint16_t x86 = UINT16_MAX;
int64_t x88 = -1LL;
static volatile uint64_t t20 = 935175817671LLU;
static int16_t x92 = INT16_MIN;
static int32_t t22 = 2;
uint64_t x98 = 68910705995LLU;
int32_t t23 = -1;
uint32_t x102 = 1193528U;
volatile int32_t t24 = 85881;
volatile int64_t x106 = INT64_MIN;
static int32_t x107 = INT32_MIN;
static int32_t t25 = -392616207;
int32_t t26 = INT32_MIN;
volatile int16_t x121 = INT16_MAX;
static volatile uint8_t x122 = 5U;
volatile int32_t t29 = -1;
uint8_t x126 = 0U;
uint16_t x148 = UINT16_MAX;
volatile int32_t t35 = 139134;
static volatile int32_t t38 = -10873654;
uint32_t x162 = 91048094U;
uint8_t x164 = 27U;
volatile uint64_t t41 = 6574675891270322LLU;
int16_t x181 = -1;
int16_t x187 = -1;
int16_t x188 = -1;
volatile int32_t t45 = -11691818;
int32_t x201 = -1;
int8_t x202 = 3;
static volatile int16_t x209 = INT16_MIN;
int32_t x215 = -3199029;
int64_t x217 = INT64_MIN;
volatile int64_t x218 = -249621055907LL;
volatile int32_t x219 = -1;
int8_t x229 = -7;
uint64_t x247 = 171220883LLU;
uint64_t t58 = 5379563731455746566LLU;
static int32_t x255 = -1;
uint8_t x260 = UINT8_MAX;
volatile int64_t x264 = -1LL;
static volatile int16_t x267 = INT16_MAX;
int8_t x270 = -1;
uint8_t x271 = UINT8_MAX;
int32_t t67 = -3;
static int32_t t68 = 0;
volatile uint8_t x290 = 52U;
uint32_t x295 = 0U;
uint16_t x296 = 1514U;
int16_t x298 = 3;
int32_t x300 = 127;
volatile int32_t x304 = INT32_MIN;
int32_t t73 = -1891416;
uint8_t x311 = 17U;
uint8_t x318 = UINT8_MAX;
uint32_t x320 = UINT32_MAX;
int64_t t75 = -762491599672774LL;
static int8_t x322 = INT8_MIN;
int64_t t76 = -26LL;
int16_t x325 = 3;
uint8_t x328 = 55U;
static volatile int32_t x334 = INT32_MIN;
int16_t x345 = INT16_MIN;
volatile int64_t x349 = INT64_MIN;
static volatile int8_t x356 = INT8_MIN;
volatile int32_t t84 = 205137760;
int8_t x359 = INT8_MAX;
int16_t x364 = -1;
int32_t x367 = -1;
int16_t x368 = -31;
int32_t x371 = 2376;
volatile int16_t x375 = -5;
uint8_t x376 = 103U;
volatile int32_t t89 = -1;
volatile int64_t x385 = 1441310197187954532LL;
static uint64_t x386 = 5683LLU;
int64_t x403 = -1855611330LL;
volatile int64_t t95 = 67LL;
uint8_t x406 = UINT8_MAX;
uint8_t x408 = 6U;
int32_t x410 = INT32_MAX;
uint16_t x412 = 11982U;
volatile uint64_t t97 = 395308106LLU;
uint8_t x414 = 86U;
volatile int32_t t99 = 33319184;
uint8_t x423 = 1U;
static int32_t t101 = 25993603;
volatile int32_t t102 = -224596;
volatile uint16_t x437 = 1007U;
uint16_t x438 = UINT16_MAX;
int16_t x442 = INT16_MIN;
uint64_t x446 = UINT64_MAX;
static int32_t x448 = -21;
volatile int32_t x452 = INT32_MIN;
int8_t x457 = INT8_MAX;
static int8_t x464 = INT8_MAX;
volatile int32_t t110 = -31799114;
uint8_t x469 = 14U;
volatile int64_t x475 = -1LL;
volatile int64_t t113 = 2136963555LL;
int8_t x482 = INT8_MAX;
volatile int16_t x483 = INT16_MIN;
volatile int32_t t115 = -102;
int32_t t117 = -969570;
int8_t x501 = INT8_MIN;
uint32_t x518 = 356767U;
int16_t x527 = INT16_MIN;
int32_t x529 = INT32_MIN;
static uint64_t t127 = 79727LLU;
static int8_t x535 = -1;
int8_t x538 = -1;
uint32_t x543 = UINT32_MAX;
volatile uint64_t t132 = 85244131LLU;
volatile uint64_t t133 = 3978400LLU;
volatile int64_t x557 = -8864864316874276LL;
int8_t x558 = 0;
int16_t x564 = 1;
int32_t t135 = 177686;
static int16_t x571 = INT16_MAX;
static int8_t x575 = 20;
static int64_t x577 = -1LL;
int8_t x578 = INT8_MIN;
int32_t t141 = -1;
static volatile uint32_t x589 = UINT32_MAX;
static int32_t x592 = INT32_MIN;
uint16_t x600 = 8862U;
volatile uint64_t t145 = 1LLU;
int64_t t146 = -1432LL;
static int8_t x610 = INT8_MIN;
uint64_t x614 = 40658979LLU;
volatile int8_t x628 = INT8_MIN;
int32_t x632 = -6850125;
int16_t x635 = -3;
static int32_t x636 = -8755953;
uint8_t x653 = 63U;
volatile int16_t x655 = -1;
int16_t x657 = -1;
static int16_t x667 = INT16_MIN;
volatile uint32_t t161 = 1161U;
int16_t x672 = INT16_MIN;
volatile int32_t t163 = 27;
int8_t x678 = -1;
uint64_t x679 = 18781014702LLU;
static int8_t x687 = -50;
uint16_t x694 = 20U;
int64_t x697 = INT64_MIN;
int64_t t169 = 205166LL;
volatile uint32_t x704 = 12U;
static int64_t x709 = INT64_MAX;
int32_t x713 = -530075535;
int32_t x718 = INT32_MIN;
int32_t x724 = 6982410;
volatile uint32_t x727 = 1687316979U;
uint32_t x729 = UINT32_MAX;
int32_t x735 = INT32_MIN;
volatile int32_t t178 = -164609;
int32_t x739 = -233314;
uint8_t x744 = UINT8_MAX;
int8_t x749 = INT8_MAX;
uint64_t t182 = 641LLU;
uint16_t x753 = UINT16_MAX;
static volatile uint32_t t183 = 2043U;
uint32_t x758 = 33681439U;
uint16_t x768 = UINT16_MAX;
uint64_t x773 = UINT64_MAX;
int64_t x781 = INT64_MIN;
uint8_t x782 = UINT8_MAX;
uint16_t x799 = 0U;
int64_t t194 = 76007129LL;
volatile int32_t x803 = -1;
int64_t x811 = -1LL;
static int32_t x818 = INT32_MAX;
int32_t x820 = INT32_MIN;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int64_t x2 = -34786562339199LL;
	uint8_t x4 = 3U;
	volatile int32_t t0 = 370889097;

    t0 = ((x1<=x2)^(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int32_t t1 = 1561;

    t1 = ((x5<=x6)^(x7/x8));

    if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MIN;
	static int16_t x11 = -1;
	static int16_t x12 = 1;
	static int32_t t2 = -4;

    t2 = ((x9<=x10)^(x11/x12));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x15 = 11U;
	uint16_t x16 = 1999U;
	volatile int32_t t3 = -205;

    t3 = ((x13<=x14)^(x15/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = INT16_MAX;
	static volatile int32_t t4 = 330042;

    t4 = ((x17<=x18)^(x19/x20));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t x24 = 19319U;
	uint32_t t5 = 5697U;

    t5 = ((x21<=x22)^(x23/x24));

    if (t5 != 222318U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int32_t x26 = 4;
	int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 16223830249161679LL;

    t6 = ((x25<=x26)^(x27/x28));

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x34 = UINT16_MAX;
	int8_t x35 = 13;
	static int8_t x36 = INT8_MIN;
	int32_t t7 = -198;

    t7 = ((x33<=x34)^(x35/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x37 = -1;
	static uint8_t x38 = 0U;
	uint16_t x39 = 1U;
	volatile int32_t t8 = -159453559;

    t8 = ((x37<=x38)^(x39/x40));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MIN;
	static volatile int32_t x42 = -365423;
	int8_t x43 = 1;
	static uint32_t x44 = 227894258U;

    t9 = ((x41<=x42)^(x43/x44));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	volatile int16_t x47 = INT16_MAX;
	volatile int64_t x48 = INT64_MAX;
	volatile int64_t t10 = -221134545344LL;

    t10 = ((x45<=x46)^(x47/x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MAX;
	int16_t x50 = 1;
	static int16_t x52 = -49;
	int32_t t11 = 9278737;

    t11 = ((x49<=x50)^(x51/x52));

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 1136778511U;
	int8_t x54 = INT8_MIN;
	uint16_t x56 = 1737U;
	static uint64_t t12 = 7676LLU;

    t12 = ((x53<=x54)^(x55/x56));

    if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = -1;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t13 = 25724983U;

    t13 = ((x57<=x58)^(x59/x60));

    if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x62 = 3;
	int16_t x63 = 5394;
	volatile uint64_t t14 = 19LLU;

    t14 = ((x61<=x62)^(x63/x64));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = UINT16_MAX;
	static int8_t x67 = -1;

    t15 = ((x65<=x66)^(x67/x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 19U;
	uint32_t x70 = 49U;
	volatile uint64_t x71 = UINT64_MAX;
	volatile uint8_t x72 = 3U;
	uint64_t t16 = 9351LLU;

    t16 = ((x69<=x70)^(x71/x72));

    if (t16 != 6148914691236517204LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = 48;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	volatile int64_t t17 = 14989344141342627LL;

    t17 = ((x73<=x74)^(x75/x76));

    if (t17 != 72057594037927937LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;
	static int16_t x78 = 49;
	static volatile uint8_t x79 = 0U;
	int32_t t18 = 913752132;

    t18 = ((x77<=x78)^(x79/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 902U;
	int64_t x82 = 749551LL;
	int8_t x83 = -1;
	static uint16_t x84 = 24U;

    t19 = ((x81<=x82)^(x83/x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x85 = INT8_MIN;
	uint64_t x87 = 3805385588LLU;

    t20 = ((x85<=x86)^(x87/x88));

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	uint8_t x90 = 0U;
	volatile int32_t x91 = INT32_MIN;
	volatile int32_t t21 = 5;

    t21 = ((x89<=x90)^(x91/x92));

    if (t21 != 65537) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -1;
	volatile int8_t x94 = -5;
	static int16_t x95 = INT16_MIN;
	int8_t x96 = -1;

    t22 = ((x93<=x94)^(x95/x96));

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	static uint8_t x99 = 3U;
	int8_t x100 = INT8_MIN;

    t23 = ((x97<=x98)^(x99/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x101 = INT16_MIN;
	int16_t x103 = 556;
	volatile int16_t x104 = 54;

    t24 = ((x101<=x102)^(x103/x104));

    if (t24 != 10) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x105 = -1LL;
	static int16_t x108 = INT16_MAX;

    t25 = ((x105<=x106)^(x107/x108));

    if (t25 != -65538) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 3U;
	int16_t x110 = 1;
	int32_t x111 = INT32_MIN;
	volatile uint16_t x112 = 1U;

    t26 = ((x109<=x110)^(x111/x112));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 1871515U;
	static int16_t x114 = INT16_MIN;
	int8_t x115 = -3;
	int64_t x116 = -1LL;
	volatile int64_t t27 = -1121LL;

    t27 = ((x113<=x114)^(x115/x116));

    if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x117 = 2832U;
	uint16_t x118 = 1U;
	volatile int16_t x119 = INT16_MIN;
	volatile int32_t x120 = -1;
	int32_t t28 = -390519;

    t28 = ((x117<=x118)^(x119/x120));

    if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x123 = -5425;
	int8_t x124 = -3;

    t29 = ((x121<=x122)^(x123/x124));

    if (t29 != 1808) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x125 = 21U;
	static uint64_t x127 = 3540395470LLU;
	int32_t x128 = INT32_MIN;
	uint64_t t30 = 439558332339111LLU;

    t30 = ((x125<=x126)^(x127/x128));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x129 = 12U;
	uint32_t x130 = 7U;
	int8_t x131 = 10;
	int16_t x132 = INT16_MAX;
	int32_t t31 = 110577378;

    t31 = ((x129<=x130)^(x131/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 12414101198807301LLU;
	static uint64_t t32 = 790LLU;

    t32 = ((x133<=x134)^(x135/x136));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x137 = 1;
	volatile int16_t x138 = INT16_MAX;
	volatile int8_t x139 = -1;
	int64_t x140 = INT64_MAX;
	int64_t t33 = 318102885828481LL;

    t33 = ((x137<=x138)^(x139/x140));

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = UINT8_MAX;
	uint8_t x142 = 3U;
	int8_t x143 = -1;
	int16_t x144 = 6;
	int32_t t34 = 22440881;

    t34 = ((x141<=x142)^(x143/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = 9;
	int64_t x146 = INT64_MIN;
	int8_t x147 = -1;

    t35 = ((x145<=x146)^(x147/x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 6U;
	uint8_t x152 = 3U;
	static int32_t t36 = -451463;

    t36 = ((x149<=x150)^(x151/x152));

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = -1;
	int32_t x154 = -1;
	uint16_t x155 = 11335U;
	uint16_t x156 = 8U;
	static volatile int32_t t37 = 15354308;

    t37 = ((x153<=x154)^(x155/x156));

    if (t37 != 1417) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 1666930276810077565LLU;
	static int16_t x158 = INT16_MIN;
	uint16_t x159 = 4186U;
	int32_t x160 = -1;

    t38 = ((x157<=x158)^(x159/x160));

    if (t38 != -4185) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	volatile int32_t t39 = 380219122;

    t39 = ((x161<=x162)^(x163/x164));

    if (t39 != -1213) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = -311;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	int64_t x168 = 389040698239LL;
	volatile int64_t t40 = -3715188299151083677LL;

    t40 = ((x165<=x166)^(x167/x168));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x169 = INT64_MIN;
	uint32_t x170 = 10388425U;
	uint16_t x171 = 57U;
	uint64_t x172 = 279095LLU;

    t41 = ((x169<=x170)^(x171/x172));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x177 = 701U;
	uint32_t x178 = 33760807U;
	volatile int16_t x179 = -1;
	volatile uint32_t x180 = 30482U;
	uint32_t t42 = 53164248U;

    t42 = ((x177<=x178)^(x179/x180));

    if (t42 != 140900U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	uint32_t t43 = 296U;

    t43 = ((x181<=x182)^(x183/x184));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = -2;
	static int8_t x186 = -1;
	static volatile int32_t t44 = 250021453;

    t44 = ((x185<=x186)^(x187/x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x193 = INT8_MIN;
	uint8_t x194 = 59U;
	int8_t x195 = -39;
	int16_t x196 = 111;

    t45 = ((x193<=x194)^(x195/x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x197 = 92U;
	int16_t x198 = -1;
	uint64_t x199 = 4114LLU;
	int16_t x200 = INT16_MAX;
	volatile uint64_t t46 = 8882541386058532962LLU;

    t46 = ((x197<=x198)^(x199/x200));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x203 = UINT8_MAX;
	int32_t x204 = -1;
	int32_t t47 = -132437;

    t47 = ((x201<=x202)^(x203/x204));

    if (t47 != -256) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x205 = UINT8_MAX;
	uint64_t x206 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	volatile uint16_t x208 = 995U;
	static int32_t t48 = 9306080;

    t48 = ((x205<=x206)^(x207/x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x210 = UINT8_MAX;
	volatile uint64_t x211 = 102188285438638256LLU;
	int16_t x212 = INT16_MAX;
	uint64_t t49 = 507591LLU;

    t49 = ((x209<=x210)^(x211/x212));

    if (t49 != 3118634157495LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x213 = 7752;
	int8_t x214 = 10;
	volatile int64_t x216 = -3680776100200281LL;
	int64_t t50 = -124534LL;

    t50 = ((x213<=x214)^(x215/x216));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x220 = 3U;
	int32_t t51 = 199139640;

    t51 = ((x217<=x218)^(x219/x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = 1;
	volatile int32_t x222 = INT32_MAX;
	static volatile int8_t x223 = 32;
	int8_t x224 = INT8_MIN;
	volatile int32_t t52 = 5720074;

    t52 = ((x221<=x222)^(x223/x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x225 = 486U;
	int16_t x226 = -1;
	volatile int32_t x227 = -681177;
	static uint32_t x228 = 4047146U;
	uint32_t t53 = 65860927U;

    t53 = ((x225<=x226)^(x227/x228));

    if (t53 != 1061U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x230 = 0LL;
	uint64_t x231 = 15978511121LLU;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t54 = 25780064020LLU;

    t54 = ((x229<=x230)^(x231/x232));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x233 = 2U;
	uint8_t x234 = 2U;
	uint16_t x235 = UINT16_MAX;
	static uint8_t x236 = 54U;
	volatile int32_t t55 = 3295747;

    t55 = ((x233<=x234)^(x235/x236));

    if (t55 != 1212) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x237 = UINT8_MAX;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 14901364507664LLU;
	uint64_t x240 = 2LLU;
	uint64_t t56 = 69294631309929437LLU;

    t56 = ((x237<=x238)^(x239/x240));

    if (t56 != 7450682253832LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x241 = UINT8_MAX;
	static volatile int32_t x242 = -972;
	int8_t x243 = -1;
	uint64_t x244 = 965624LLU;
	static uint64_t t57 = 24LLU;

    t57 = ((x241<=x242)^(x243/x244));

    if (t57 != 19103444066955LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x245 = -38848;
	volatile int16_t x246 = -3;
	int64_t x248 = INT64_MIN;

    t58 = ((x245<=x246)^(x247/x248));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x249 = 33;
	int16_t x250 = 1;
	volatile int8_t x251 = 1;
	static uint32_t x252 = 952U;
	uint32_t t59 = 368U;

    t59 = ((x249<=x250)^(x251/x252));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x253 = INT8_MIN;
	static int8_t x254 = 28;
	volatile uint16_t x256 = UINT16_MAX;
	static int32_t t60 = 124;

    t60 = ((x253<=x254)^(x255/x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x257 = 5656952LLU;
	static int8_t x258 = -1;
	uint32_t x259 = UINT32_MAX;
	volatile uint32_t t61 = 385U;

    t61 = ((x257<=x258)^(x259/x260));

    if (t61 != 16843008U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MIN;
	uint16_t x262 = UINT16_MAX;
	volatile uint64_t x263 = 48884069984451LLU;
	uint64_t t62 = 675136639599524651LLU;

    t62 = ((x261<=x262)^(x263/x264));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = -540;
	uint32_t x266 = UINT32_MAX;
	uint16_t x268 = 14U;
	volatile int32_t t63 = 0;

    t63 = ((x265<=x266)^(x267/x268));

    if (t63 != 2341) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = -1;
	uint8_t x272 = UINT8_MAX;
	int32_t t64 = -44;

    t64 = ((x269<=x270)^(x271/x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = 61;
	int32_t x274 = INT32_MIN;
	int16_t x275 = -1;
	static uint16_t x276 = UINT16_MAX;
	volatile int32_t t65 = 47509;

    t65 = ((x273<=x274)^(x275/x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 14U;
	int32_t x280 = -969122;
	uint32_t t66 = 30U;

    t66 = ((x277<=x278)^(x279/x280));

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x281 = INT16_MIN;
	static int64_t x282 = INT64_MIN;
	uint8_t x283 = 2U;
	static int8_t x284 = INT8_MAX;

    t67 = ((x281<=x282)^(x283/x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x285 = -1;
	int32_t x286 = -242405;
	int8_t x287 = 0;
	int16_t x288 = -1;

    t68 = ((x285<=x286)^(x287/x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = -14689;
	volatile int32_t x291 = -68870230;
	uint64_t x292 = UINT64_MAX;
	uint64_t t69 = 11LLU;

    t69 = ((x289<=x290)^(x291/x292));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = INT8_MIN;
	int32_t x294 = 32179818;
	uint32_t t70 = 69163301U;

    t70 = ((x293<=x294)^(x295/x296));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MIN;
	static uint64_t x299 = 30LLU;
	uint64_t t71 = 8379741LLU;

    t71 = ((x297<=x298)^(x299/x300));

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x301 = 1U;
	uint8_t x302 = 0U;
	int16_t x303 = INT16_MIN;
	int32_t t72 = 250925654;

    t72 = ((x301<=x302)^(x303/x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x305 = 562U;
	uint16_t x306 = UINT16_MAX;
	static int8_t x307 = 1;
	uint16_t x308 = 25U;

    t73 = ((x305<=x306)^(x307/x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x309 = UINT64_MAX;
	static uint8_t x310 = 5U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t74 = 8007;

    t74 = ((x309<=x310)^(x311/x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x317 = 28;
	int64_t x319 = -1LL;

    t75 = ((x317<=x318)^(x319/x320));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = -1LL;
	volatile uint16_t x323 = 1U;
	int64_t x324 = INT64_MAX;

    t76 = ((x321<=x322)^(x323/x324));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x326 = INT64_MAX;
	uint64_t x327 = 25LLU;
	volatile uint64_t t77 = 464455LLU;

    t77 = ((x325<=x326)^(x327/x328));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x329 = 233006784520950772LL;
	int64_t x330 = 66LL;
	static int64_t x331 = INT64_MAX;
	int32_t x332 = INT32_MIN;
	volatile int64_t t78 = -85405847LL;

    t78 = ((x329<=x330)^(x331/x332));

    if (t78 != -4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x333 = 157906827U;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MAX;
	static volatile int32_t t79 = -544039;

    t79 = ((x333<=x334)^(x335/x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = -8;
	static volatile uint16_t x338 = 3549U;
	uint8_t x339 = 3U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t80 = 10798;

    t80 = ((x337<=x338)^(x339/x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = 1;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 49U;
	static volatile int16_t x344 = -57;
	int32_t t81 = -122669017;

    t81 = ((x341<=x342)^(x343/x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x346 = UINT16_MAX;
	volatile uint16_t x347 = UINT16_MAX;
	int16_t x348 = -1;
	int32_t t82 = 1;

    t82 = ((x345<=x346)^(x347/x348));

    if (t82 != -65536) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x350 = -500984609;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 6702206955226094LLU;
	uint64_t t83 = 121669859046LLU;

    t83 = ((x349<=x350)^(x351/x352));

    if (t83 != 2753LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x353 = 6U;
	int64_t x354 = INT64_MAX;
	int32_t x355 = INT32_MIN;

    t84 = ((x353<=x354)^(x355/x356));

    if (t84 != 16777217) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = -1;
	volatile int8_t x358 = INT8_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t85 = 201;

    t85 = ((x357<=x358)^(x359/x360));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x361 = INT64_MIN;
	uint16_t x362 = 1U;
	volatile int16_t x363 = -1;
	int32_t t86 = -2065358;

    t86 = ((x361<=x362)^(x363/x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x365 = -3739;
	static int16_t x366 = -1;
	volatile int32_t t87 = 25;

    t87 = ((x365<=x366)^(x367/x368));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = -665964206547LL;
	int32_t x370 = INT32_MAX;
	volatile int32_t x372 = -1;
	int32_t t88 = -6;

    t88 = ((x369<=x370)^(x371/x372));

    if (t88 != -2375) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x373 = 5U;
	static uint8_t x374 = 5U;

    t89 = ((x373<=x374)^(x375/x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = -49;
	volatile int64_t x382 = -3709419778171LL;
	uint16_t x383 = 3795U;
	int32_t x384 = -2664;
	static volatile int32_t t90 = -35754;

    t90 = ((x381<=x382)^(x383/x384));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x387 = -14335296506LL;
	int8_t x388 = 3;
	int64_t t91 = 3776534LL;

    t91 = ((x385<=x386)^(x387/x388));

    if (t91 != -4778432168LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = 178U;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = UINT8_MAX;
	static volatile int16_t x392 = -1;
	int32_t t92 = 9930;

    t92 = ((x389<=x390)^(x391/x392));

    if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x393 = 502U;
	int64_t x394 = INT64_MAX;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = 103948101U;
	uint32_t t93 = 61709U;

    t93 = ((x393<=x394)^(x395/x396));

    if (t93 != 40U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x397 = UINT16_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	static uint16_t x399 = 1803U;
	uint64_t x400 = 13321946LLU;
	static uint64_t t94 = 27127LLU;

    t94 = ((x397<=x398)^(x399/x400));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = 1;
	volatile uint64_t x402 = 1LLU;
	int64_t x404 = INT64_MIN;

    t95 = ((x401<=x402)^(x403/x404));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x405 = -1;
	int8_t x407 = 0;
	static volatile int32_t t96 = -420425603;

    t96 = ((x405<=x406)^(x407/x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = INT32_MIN;
	volatile uint64_t x411 = UINT64_MAX;

    t97 = ((x409<=x410)^(x411/x412));

    if (t97 != 1539537979778796LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = 60779606;
	volatile int64_t x415 = INT64_MIN;
	static volatile uint16_t x416 = 22U;
	volatile int64_t t98 = 967663LL;

    t98 = ((x413<=x414)^(x415/x416));

    if (t98 != -419244183493398900LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x417 = 131221LLU;
	int8_t x418 = INT8_MAX;
	int16_t x419 = -10;
	volatile uint16_t x420 = 2U;

    t99 = ((x417<=x418)^(x419/x420));

    if (t99 != -5) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MAX;
	uint64_t x424 = UINT64_MAX;
	uint64_t t100 = 978879788133LLU;

    t100 = ((x421<=x422)^(x423/x424));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x425 = 76U;
	uint8_t x426 = 26U;
	int8_t x427 = INT8_MAX;
	int32_t x428 = 1375;

    t101 = ((x425<=x426)^(x427/x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x429 = 0U;
	static int32_t x430 = INT32_MIN;
	volatile uint16_t x431 = 507U;
	uint8_t x432 = 22U;

    t102 = ((x429<=x430)^(x431/x432));

    if (t102 != 23) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = INT8_MAX;
	static int32_t x434 = INT32_MIN;
	volatile uint32_t x435 = UINT32_MAX;
	uint32_t x436 = 1U;
	uint32_t t103 = UINT32_MAX;

    t103 = ((x433<=x434)^(x435/x436));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x439 = INT64_MAX;
	volatile int32_t x440 = INT32_MIN;
	int64_t t104 = 568725LL;

    t104 = ((x437<=x438)^(x439/x440));

    if (t104 != -4294967296LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x441 = INT64_MAX;
	int32_t x443 = INT32_MAX;
	volatile uint64_t x444 = UINT64_MAX;
	uint64_t t105 = 3056107069281501LLU;

    t105 = ((x441<=x442)^(x443/x444));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x445 = INT32_MIN;
	static int16_t x447 = -1808;
	volatile int32_t t106 = 148;

    t106 = ((x445<=x446)^(x447/x448));

    if (t106 != 87) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x449 = 5936LLU;
	static int64_t x450 = 219370683LL;
	uint16_t x451 = 7U;
	volatile int32_t t107 = -5;

    t107 = ((x449<=x450)^(x451/x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = INT16_MIN;
	uint8_t x454 = 15U;
	int16_t x455 = INT16_MIN;
	int32_t x456 = 31681;
	static int32_t t108 = -251213;

    t108 = ((x453<=x454)^(x455/x456));

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x458 = UINT16_MAX;
	static uint16_t x459 = 508U;
	int8_t x460 = 1;
	int32_t t109 = -249585972;

    t109 = ((x457<=x458)^(x459/x460));

    if (t109 != 509) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = INT8_MIN;
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = INT16_MIN;

    t110 = ((x461<=x462)^(x463/x464));

    if (t110 != -257) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x465 = -1;
	int64_t x466 = INT64_MIN;
	int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MAX;
	static volatile int64_t t111 = -192LL;

    t111 = ((x465<=x466)^(x467/x468));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x470 = -1LL;
	int64_t x471 = INT64_MAX;
	int16_t x472 = -1;
	volatile int64_t t112 = -108018LL;

    t112 = ((x469<=x470)^(x471/x472));

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x473 = -1;
	static uint64_t x474 = 2590LLU;
	volatile int32_t x476 = INT32_MAX;

    t113 = ((x473<=x474)^(x475/x476));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x477 = INT8_MIN;
	volatile int32_t x478 = INT32_MAX;
	static uint64_t x479 = 9221482095422077403LLU;
	volatile int64_t x480 = -1LL;
	static uint64_t t114 = 3697984230LLU;

    t114 = ((x477<=x478)^(x479/x480));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = -1;
	volatile int16_t x484 = -910;

    t115 = ((x481<=x482)^(x483/x484));

    if (t115 != 37) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = -1;
	uint64_t x486 = UINT64_MAX;
	volatile int16_t x487 = INT16_MAX;
	int8_t x488 = -23;
	int32_t t116 = 2669991;

    t116 = ((x485<=x486)^(x487/x488));

    if (t116 != -1423) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	static int64_t x490 = INT64_MAX;
	static uint16_t x491 = UINT16_MAX;
	int16_t x492 = -1;

    t117 = ((x489<=x490)^(x491/x492));

    if (t117 != -65535) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x493 = 19U;
	volatile int16_t x494 = 4;
	static uint32_t x495 = 121198U;
	volatile int64_t x496 = INT64_MIN;
	int64_t t118 = 942489124871306420LL;

    t118 = ((x493<=x494)^(x495/x496));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = -1;
	int64_t x498 = 2261045419883047395LL;
	uint16_t x499 = 6526U;
	uint32_t x500 = 372049887U;
	volatile uint32_t t119 = 551358U;

    t119 = ((x497<=x498)^(x499/x500));

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x502 = INT64_MIN;
	static volatile uint16_t x503 = 57U;
	int32_t x504 = INT32_MIN;
	volatile int32_t t120 = -1194;

    t120 = ((x501<=x502)^(x503/x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x505 = -35;
	uint8_t x506 = UINT8_MAX;
	static volatile int64_t x507 = 212150LL;
	int16_t x508 = 4530;
	static int64_t t121 = -23686215735LL;

    t121 = ((x505<=x506)^(x507/x508));

    if (t121 != 47LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x509 = 26905735U;
	uint8_t x510 = 1U;
	uint32_t x511 = 437092U;
	static int8_t x512 = 56;
	static uint32_t t122 = 1369U;

    t122 = ((x509<=x510)^(x511/x512));

    if (t122 != 7805U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x513 = 341U;
	int64_t x514 = -2842511650494734LL;
	int32_t x515 = -108;
	uint8_t x516 = 25U;
	volatile int32_t t123 = 7718640;

    t123 = ((x513<=x514)^(x515/x516));

    if (t123 != -4) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = -1;
	int8_t x519 = 12;
	int64_t x520 = -612223047046LL;
	static volatile int64_t t124 = 53510980393095604LL;

    t124 = ((x517<=x518)^(x519/x520));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = -1;
	static uint16_t x522 = 49U;
	uint32_t x523 = UINT32_MAX;
	int64_t x524 = -1LL;
	volatile int64_t t125 = 411669238396LL;

    t125 = ((x521<=x522)^(x523/x524));

    if (t125 != -4294967296LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x525 = 46804LLU;
	int8_t x526 = 9;
	int32_t x528 = INT32_MIN;
	static int32_t t126 = 8;

    t126 = ((x525<=x526)^(x527/x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x530 = 0;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 908948LLU;

    t127 = ((x529<=x530)^(x531/x532));

    if (t127 != 20294608793583LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x533 = 119U;
	int8_t x534 = INT8_MIN;
	uint8_t x536 = UINT8_MAX;
	int32_t t128 = -24903;

    t128 = ((x533<=x534)^(x535/x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x537 = UINT32_MAX;
	uint64_t x539 = 222805325811289LLU;
	int16_t x540 = 1538;
	uint64_t t129 = 27534049139670457LLU;

    t129 = ((x537<=x538)^(x539/x540));

    if (t129 != 144866921852LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x541 = INT8_MAX;
	static volatile int8_t x542 = INT8_MIN;
	int8_t x544 = INT8_MAX;
	volatile uint32_t t130 = 0U;

    t130 = ((x541<=x542)^(x543/x544));

    if (t130 != 33818640U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x545 = 404;
	int64_t x546 = INT64_MIN;
	volatile int32_t x547 = INT32_MIN;
	int32_t x548 = -49063165;
	volatile int32_t t131 = -7587870;

    t131 = ((x545<=x546)^(x547/x548));

    if (t131 != 43) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x549 = INT32_MIN;
	static uint64_t x550 = 222615383057LLU;
	uint32_t x551 = UINT32_MAX;
	static uint64_t x552 = 6509003342412LLU;

    t132 = ((x549<=x550)^(x551/x552));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	int16_t x554 = 7;
	volatile uint64_t x555 = UINT64_MAX;
	int8_t x556 = -23;

    t133 = ((x553<=x554)^(x555/x556));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x559 = UINT8_MAX;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t134 = -332490;

    t134 = ((x557<=x558)^(x559/x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x561 = 13LLU;
	volatile uint8_t x562 = UINT8_MAX;
	volatile int16_t x563 = 0;

    t135 = ((x561<=x562)^(x563/x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = 115859979LL;
	uint16_t x567 = 92U;
	uint32_t x568 = 410U;
	static volatile uint32_t t136 = 1609365U;

    t136 = ((x565<=x566)^(x567/x568));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x569 = 14402501U;
	int8_t x570 = INT8_MIN;
	static volatile uint8_t x572 = UINT8_MAX;
	volatile int32_t t137 = -483621642;

    t137 = ((x569<=x570)^(x571/x572));

    if (t137 != 129) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x573 = INT64_MAX;
	int64_t x574 = -1LL;
	int8_t x576 = INT8_MAX;
	static int32_t t138 = -388258;

    t138 = ((x573<=x574)^(x575/x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x579 = 28U;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t139 = 2811618225162LLU;

    t139 = ((x577<=x578)^(x579/x580));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x581 = INT32_MIN;
	uint16_t x582 = UINT16_MAX;
	volatile int64_t x583 = 15152423526007LL;
	volatile int8_t x584 = -1;
	volatile int64_t t140 = 323560LL;

    t140 = ((x581<=x582)^(x583/x584));

    if (t140 != -15152423526008LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x585 = -581542;
	int64_t x586 = -1479LL;
	static int32_t x587 = INT32_MIN;
	static uint8_t x588 = 16U;

    t141 = ((x585<=x586)^(x587/x588));

    if (t141 != -134217727) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x590 = INT64_MIN;
	static volatile uint32_t x591 = UINT32_MAX;
	uint32_t t142 = 4U;

    t142 = ((x589<=x590)^(x591/x592));

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x593 = UINT8_MAX;
	int64_t x594 = 108660196371130LL;
	static int8_t x595 = 4;
	int8_t x596 = INT8_MIN;
	volatile int32_t t143 = -2;

    t143 = ((x593<=x594)^(x595/x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = INT8_MIN;
	int32_t x598 = 695;
	int8_t x599 = -2;
	int32_t t144 = 565315;

    t144 = ((x597<=x598)^(x599/x600));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x601 = INT32_MAX;
	int32_t x602 = INT32_MAX;
	uint64_t x603 = 7LLU;
	int8_t x604 = INT8_MIN;

    t145 = ((x601<=x602)^(x603/x604));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x605 = INT64_MAX;
	int32_t x606 = 129143475;
	volatile int16_t x607 = -211;
	static volatile int64_t x608 = -1LL;

    t146 = ((x605<=x606)^(x607/x608));

    if (t146 != 211LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = -1LL;
	volatile int32_t x611 = -359450;
	int16_t x612 = INT16_MAX;
	static volatile int32_t t147 = 1779;

    t147 = ((x609<=x610)^(x611/x612));

    if (t147 != -10) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x613 = 15U;
	uint32_t x615 = 37U;
	int64_t x616 = 623862860208LL;
	int64_t t148 = 9527355270952108LL;

    t148 = ((x613<=x614)^(x615/x616));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x617 = UINT16_MAX;
	int8_t x618 = INT8_MIN;
	volatile uint64_t x619 = 70198620338978LLU;
	volatile uint16_t x620 = 5U;
	uint64_t t149 = 12685418058LLU;

    t149 = ((x617<=x618)^(x619/x620));

    if (t149 != 14039724067795LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x622 = -1;
	uint16_t x623 = 162U;
	int8_t x624 = INT8_MIN;
	int32_t t150 = -1;

    t150 = ((x621<=x622)^(x623/x624));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x625 = UINT64_MAX;
	int8_t x626 = INT8_MIN;
	int64_t x627 = 55784092670762LL;
	volatile int64_t t151 = -15134884LL;

    t151 = ((x625<=x626)^(x627/x628));

    if (t151 != -435813223990LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x629 = 8U;
	static uint16_t x630 = 718U;
	int8_t x631 = -1;
	volatile int32_t t152 = 23975395;

    t152 = ((x629<=x630)^(x631/x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x633 = 15052;
	int32_t x634 = -2920850;
	int32_t t153 = -1050;

    t153 = ((x633<=x634)^(x635/x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x637 = 318940LLU;
	int16_t x638 = INT16_MIN;
	int32_t x639 = INT32_MIN;
	uint64_t x640 = 4190684071LLU;
	static volatile uint64_t t154 = 8640833054570LLU;

    t154 = ((x637<=x638)^(x639/x640));

    if (t154 != 4401845561LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x641 = UINT64_MAX;
	uint8_t x642 = 6U;
	int16_t x643 = 1;
	static uint32_t x644 = 218968U;
	volatile uint32_t t155 = 148123373U;

    t155 = ((x641<=x642)^(x643/x644));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x645 = INT64_MAX;
	uint32_t x646 = 7U;
	static volatile uint64_t x647 = 4687074138LLU;
	uint16_t x648 = UINT16_MAX;
	static volatile uint64_t t156 = 8667051496357607876LLU;

    t156 = ((x645<=x646)^(x647/x648));

    if (t156 != 71520LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x649 = 0U;
	int64_t x650 = INT64_MAX;
	int32_t x651 = 3;
	int64_t x652 = INT64_MIN;
	int64_t t157 = 4LL;

    t157 = ((x649<=x650)^(x651/x652));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x654 = INT32_MAX;
	int64_t x656 = INT64_MIN;
	volatile int64_t t158 = 127832810315LL;

    t158 = ((x653<=x654)^(x655/x656));

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x658 = 7U;
	uint8_t x659 = 0U;
	int64_t x660 = INT64_MIN;
	volatile int64_t t159 = 29697947251313656LL;

    t159 = ((x657<=x658)^(x659/x660));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x661 = UINT8_MAX;
	int16_t x662 = -1;
	static int16_t x663 = -1;
	static uint64_t x664 = 60764745288271522LLU;
	uint64_t t160 = 799170490752515700LLU;

    t160 = ((x661<=x662)^(x663/x664));

    if (t160 != 303LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x665 = INT32_MIN;
	uint16_t x666 = 4543U;
	volatile uint32_t x668 = 15U;

    t161 = ((x665<=x666)^(x667/x668));

    if (t161 != 286328969U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x669 = -1;
	static volatile int16_t x670 = INT16_MIN;
	int64_t x671 = -37949453423LL;
	static volatile int64_t t162 = 11750262969767LL;

    t162 = ((x669<=x670)^(x671/x672));

    if (t162 != 1158125LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x673 = 1U;
	int64_t x674 = -1LL;
	int16_t x675 = INT16_MIN;
	static uint16_t x676 = 1U;

    t163 = ((x673<=x674)^(x675/x676));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = INT64_MIN;
	uint32_t x680 = UINT32_MAX;
	volatile uint64_t t164 = 24115113168LLU;

    t164 = ((x677<=x678)^(x679/x680));

    if (t164 != 5LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = -1LL;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = INT32_MIN;
	int32_t x684 = 362501;
	int32_t t165 = -1;

    t165 = ((x681<=x682)^(x683/x684));

    if (t165 != -5923) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x685 = -1;
	int64_t x686 = INT64_MIN;
	volatile uint16_t x688 = 9402U;
	volatile int32_t t166 = 0;

    t166 = ((x685<=x686)^(x687/x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	int8_t x690 = INT8_MIN;
	int16_t x691 = -1;
	int8_t x692 = INT8_MAX;
	int32_t t167 = 42451;

    t167 = ((x689<=x690)^(x691/x692));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x693 = 1029545U;
	uint32_t x695 = UINT32_MAX;
	int16_t x696 = 133;
	static uint32_t t168 = 2783U;

    t168 = ((x693<=x694)^(x695/x696));

    if (t168 != 32292987U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x698 = 187LLU;
	int64_t x699 = INT64_MAX;
	int8_t x700 = 15;

    t169 = ((x697<=x698)^(x699/x700));

    if (t169 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = -141LL;
	volatile int16_t x702 = INT16_MIN;
	volatile uint64_t x703 = UINT64_MAX;
	volatile uint64_t t170 = 320277752LLU;

    t170 = ((x701<=x702)^(x703/x704));

    if (t170 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x705 = 7U;
	int32_t x706 = INT32_MAX;
	uint16_t x707 = UINT16_MAX;
	int64_t x708 = -1LL;
	volatile int64_t t171 = 61048819695282732LL;

    t171 = ((x705<=x706)^(x707/x708));

    if (t171 != -65536LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x710 = -1;
	int32_t x711 = INT32_MAX;
	volatile int64_t x712 = -1LL;
	int64_t t172 = -250214387218896279LL;

    t172 = ((x709<=x710)^(x711/x712));

    if (t172 != -2147483647LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x714 = 0U;
	uint8_t x715 = 6U;
	volatile uint32_t x716 = 1353144U;
	static uint32_t t173 = 874U;

    t173 = ((x713<=x714)^(x715/x716));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x717 = -11680LL;
	static volatile int32_t x719 = INT32_MIN;
	int16_t x720 = INT16_MIN;
	volatile int32_t t174 = -217334;

    t174 = ((x717<=x718)^(x719/x720));

    if (t174 != 65536) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x721 = INT16_MIN;
	uint16_t x722 = UINT16_MAX;
	int8_t x723 = 0;
	volatile int32_t t175 = -38671769;

    t175 = ((x721<=x722)^(x723/x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x725 = INT32_MAX;
	int32_t x726 = -1;
	int64_t x728 = INT64_MIN;
	int64_t t176 = -156999746168126629LL;

    t176 = ((x725<=x726)^(x727/x728));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x730 = INT32_MIN;
	int64_t x731 = -1LL;
	int8_t x732 = -1;
	static volatile int64_t t177 = -11795442314786421LL;

    t177 = ((x729<=x730)^(x731/x732));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x733 = UINT8_MAX;
	uint64_t x734 = UINT64_MAX;
	static int8_t x736 = INT8_MIN;

    t178 = ((x733<=x734)^(x735/x736));

    if (t178 != 16777217) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x737 = -1LL;
	volatile int32_t x738 = 6372;
	int64_t x740 = INT64_MIN;
	static int64_t t179 = -52410937674158LL;

    t179 = ((x737<=x738)^(x739/x740));

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = 1971LL;
	volatile int64_t x742 = -1085947256512436247LL;
	uint16_t x743 = 188U;
	static volatile int32_t t180 = -1;

    t180 = ((x741<=x742)^(x743/x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x745 = UINT64_MAX;
	static volatile int32_t x746 = INT32_MIN;
	int8_t x747 = 9;
	uint32_t x748 = 70601975U;
	uint32_t t181 = 94U;

    t181 = ((x745<=x746)^(x747/x748));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x750 = 1U;
	int16_t x751 = -63;
	volatile uint64_t x752 = 13740848364LLU;

    t182 = ((x749<=x750)^(x751/x752));

    if (t182 != 1342474902LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x754 = INT16_MIN;
	volatile uint32_t x755 = UINT32_MAX;
	int8_t x756 = -1;

    t183 = ((x753<=x754)^(x755/x756));

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x757 = 6733U;
	static uint8_t x759 = 12U;
	int8_t x760 = 30;
	volatile int32_t t184 = -7;

    t184 = ((x757<=x758)^(x759/x760));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x761 = INT16_MIN;
	static uint32_t x762 = 0U;
	uint8_t x763 = UINT8_MAX;
	static volatile int64_t x764 = INT64_MAX;
	volatile int64_t t185 = 3715034145LL;

    t185 = ((x761<=x762)^(x763/x764));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = 12;
	int64_t x766 = INT64_MIN;
	volatile uint16_t x767 = 7522U;
	static volatile int32_t t186 = 102;

    t186 = ((x765<=x766)^(x767/x768));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x769 = INT64_MAX;
	static int16_t x770 = 82;
	int8_t x771 = -3;
	uint16_t x772 = 423U;
	volatile int32_t t187 = 5;

    t187 = ((x769<=x770)^(x771/x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x774 = -1LL;
	volatile int8_t x775 = 43;
	volatile uint64_t x776 = 3225862023078912LLU;
	static volatile uint64_t t188 = 49245LLU;

    t188 = ((x773<=x774)^(x775/x776));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x777 = INT16_MIN;
	volatile int16_t x778 = -2729;
	int64_t x779 = -8635LL;
	uint64_t x780 = 1166LLU;
	uint64_t t189 = 20LLU;

    t189 = ((x777<=x778)^(x779/x780));

    if (t189 != 15820535226165989LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x783 = 0;
	volatile int8_t x784 = INT8_MIN;
	int32_t t190 = -2;

    t190 = ((x781<=x782)^(x783/x784));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = -1;
	int16_t x786 = -1;
	static int8_t x787 = -1;
	int64_t x788 = -64368321LL;
	volatile int64_t t191 = 289826291082LL;

    t191 = ((x785<=x786)^(x787/x788));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x789 = 12407531635LLU;
	static int64_t x790 = -1LL;
	int16_t x791 = 1;
	static uint16_t x792 = UINT16_MAX;
	int32_t t192 = -511;

    t192 = ((x789<=x790)^(x791/x792));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x793 = -1;
	static uint64_t x794 = 137505550259047LLU;
	uint64_t x795 = 1586032562626498801LLU;
	int8_t x796 = INT8_MIN;
	volatile uint64_t t193 = 3LLU;

    t193 = ((x793<=x794)^(x795/x796));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x797 = 35U;
	int64_t x798 = INT64_MAX;
	volatile int64_t x800 = INT64_MIN;

    t194 = ((x797<=x798)^(x799/x800));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x801 = -30;
	int32_t x802 = INT32_MIN;
	static int8_t x804 = -1;
	volatile int32_t t195 = -1;

    t195 = ((x801<=x802)^(x803/x804));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x805 = 1;
	static int8_t x806 = 0;
	int8_t x807 = -33;
	int8_t x808 = -1;
	int32_t t196 = -1580896;

    t196 = ((x805<=x806)^(x807/x808));

    if (t196 != 33) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = INT32_MAX;
	uint16_t x810 = 44U;
	int16_t x812 = INT16_MIN;
	static int64_t t197 = 32171LL;

    t197 = ((x809<=x810)^(x811/x812));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x813 = INT8_MAX;
	uint32_t x814 = 101U;
	int32_t x815 = -1;
	volatile int64_t x816 = INT64_MIN;
	volatile int64_t t198 = 42582LL;

    t198 = ((x813<=x814)^(x815/x816));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = 20;
	int16_t x819 = 7;
	int32_t t199 = -277728;

    t199 = ((x817<=x818)^(x819/x820));

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

