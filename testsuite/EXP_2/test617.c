
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

int16_t x2 = -8;
int8_t x8 = -1;
uint8_t x12 = UINT8_MAX;
int32_t t2 = 264014081;
uint32_t x15 = 1631U;
int64_t x19 = -1LL;
uint8_t x27 = UINT8_MAX;
uint64_t x31 = 1117741550937702376LLU;
int16_t x32 = INT16_MIN;
static volatile uint16_t x34 = UINT16_MAX;
static int8_t x35 = INT8_MAX;
static int32_t t8 = 4913099;
int64_t x37 = INT64_MAX;
uint16_t x46 = UINT16_MAX;
int8_t x47 = INT8_MIN;
int64_t x48 = -1LL;
volatile int64_t x49 = INT64_MAX;
volatile int64_t t11 = 41833120335LL;
int8_t x56 = -1;
static int8_t x60 = INT8_MIN;
volatile int16_t x68 = INT16_MAX;
volatile uint64_t t15 = 15LLU;
uint16_t x73 = 302U;
volatile uint32_t x74 = 223530225U;
int64_t x76 = INT64_MAX;
uint32_t x85 = 227187061U;
int8_t x95 = INT8_MAX;
int64_t x96 = INT64_MIN;
static uint32_t t22 = 213U;
int16_t x105 = -11;
uint32_t t24 = 1422642U;
volatile uint64_t t25 = 81492LLU;
uint8_t x122 = 0U;
int32_t x129 = -1;
static volatile int8_t x130 = INT8_MIN;
uint32_t t29 = 2U;
uint64_t x136 = UINT64_MAX;
volatile int32_t x137 = -4;
static volatile uint64_t t31 = 3467LLU;
int16_t x141 = 5505;
uint32_t x142 = UINT32_MAX;
int64_t t32 = 6001842LL;
uint64_t x145 = 1LLU;
int8_t x147 = INT8_MAX;
uint32_t x150 = 421089422U;
static uint8_t x169 = 35U;
uint16_t x170 = 2U;
uint64_t x171 = 197414013125508LLU;
int32_t x177 = INT32_MIN;
static volatile int8_t x178 = INT8_MIN;
int8_t x181 = INT8_MIN;
int8_t x187 = INT8_MIN;
int64_t t40 = -9LL;
uint16_t x190 = 979U;
int8_t x192 = 8;
uint16_t x206 = UINT16_MAX;
volatile uint32_t x210 = 326U;
volatile uint32_t x217 = 126910890U;
uint32_t t46 = 26U;
volatile int64_t t48 = 199226916857158368LL;
volatile int64_t x233 = 12030LL;
static uint8_t x234 = UINT8_MAX;
int8_t x237 = INT8_MIN;
static int16_t x248 = -1;
static volatile uint32_t t53 = UINT32_MAX;
int64_t x272 = INT64_MIN;
static uint64_t t57 = 11055452749LLU;
uint16_t x275 = 11U;
int32_t x276 = 12;
volatile uint64_t t59 = 868430241269979663LLU;
int16_t x283 = -28;
int32_t t60 = 123977575;
int32_t x286 = -1969631;
uint8_t x297 = UINT8_MAX;
int16_t x303 = INT16_MIN;
volatile int32_t t65 = 88;
volatile uint16_t x308 = 268U;
int8_t x315 = -1;
int16_t x321 = INT16_MAX;
int8_t x322 = INT8_MAX;
int64_t x324 = -35265258243341641LL;
int16_t x343 = INT16_MAX;
int16_t x346 = INT16_MIN;
volatile int8_t x348 = INT8_MAX;
int16_t x353 = INT16_MIN;
int32_t x356 = -1;
uint8_t x361 = UINT8_MAX;
volatile int64_t x363 = -63484LL;
volatile int64_t t77 = -2024863230612415LL;
static uint16_t x365 = 4U;
int32_t x367 = INT32_MIN;
volatile int32_t t79 = INT32_MIN;
int16_t x375 = 241;
uint64_t t80 = 15087344LLU;
int16_t x377 = INT16_MIN;
uint32_t x380 = UINT32_MAX;
volatile int64_t t81 = -107631682154469LL;
int64_t t82 = 17571944LL;
int64_t x389 = -22183024830016110LL;
int16_t x392 = 3;
uint16_t x394 = UINT16_MAX;
volatile int64_t t85 = -2054359344786087637LL;
static int16_t x400 = INT16_MIN;
static int8_t x409 = -1;
volatile uint64_t t89 = 8429826081055LLU;
int16_t x415 = INT16_MIN;
int32_t t90 = -62;
static volatile int32_t x417 = -1;
volatile int8_t x418 = -1;
volatile int64_t t93 = 1067052582LL;
int64_t x443 = -1LL;
int64_t x450 = -1LL;
volatile int16_t x451 = INT16_MIN;
int64_t x453 = INT64_MIN;
int8_t x456 = -5;
int8_t x459 = -1;
int32_t x462 = -1;
int64_t x477 = INT64_MIN;
uint16_t x478 = 0U;
int64_t t103 = -4765012091626LL;
static int8_t x484 = 5;
int8_t x493 = INT8_MIN;
volatile int32_t x496 = -1;
int16_t x498 = 0;
static uint64_t x507 = 7LLU;
int32_t x510 = 28;
volatile int16_t x512 = 26;
static int64_t x515 = -1LL;
static int32_t x516 = INT32_MIN;
volatile int64_t t112 = 28468064410LL;
volatile int8_t x517 = 1;
int64_t x539 = INT64_MAX;
uint64_t x548 = UINT64_MAX;
uint64_t t118 = 3241500360223473008LLU;
static int8_t x553 = INT8_MIN;
static uint16_t x558 = UINT16_MAX;
int8_t x560 = 39;
volatile int64_t t121 = 296643817LL;
volatile int64_t t122 = 365663904122556860LL;
int32_t x570 = INT32_MIN;
int64_t x578 = 1002693LL;
static uint64_t t128 = 86773LLU;
static int64_t x589 = -1LL;
int32_t x596 = -1;
uint32_t t131 = 3439707U;
volatile uint16_t x607 = 1263U;
static int8_t x618 = INT8_MIN;
int8_t x625 = 5;
volatile uint64_t t137 = 6828648679584124657LLU;
static volatile uint64_t t138 = 1124057220LLU;
static volatile uint32_t t141 = UINT32_MAX;
int8_t x653 = INT8_MIN;
volatile uint8_t x660 = 23U;
int64_t x663 = INT64_MIN;
uint32_t x665 = UINT32_MAX;
int32_t x666 = 238;
int8_t x668 = INT8_MAX;
int16_t x685 = INT16_MIN;
uint8_t x689 = UINT8_MAX;
volatile int16_t x697 = -1;
int16_t x698 = INT16_MIN;
volatile uint8_t x699 = 51U;
int32_t x715 = -1;
volatile int8_t x722 = INT8_MIN;
int16_t x724 = 358;
uint8_t x726 = UINT8_MAX;
volatile uint64_t t157 = UINT64_MAX;
int16_t x733 = INT16_MIN;
int8_t x742 = INT8_MAX;
int64_t x743 = INT64_MIN;
int32_t x748 = INT32_MAX;
int16_t x751 = -2;
int8_t x758 = 9;
int8_t x760 = 27;
volatile uint64_t t163 = 6LLU;
int32_t x763 = INT32_MAX;
int64_t x764 = INT64_MIN;
static int16_t x766 = -392;
volatile int64_t t165 = -37718LL;
int64_t x777 = INT64_MAX;
volatile int16_t x778 = -1;
int64_t x794 = -1LL;
volatile int64_t x815 = INT64_MAX;
uint64_t t173 = 8966271LLU;
int8_t x820 = INT8_MIN;
static int64_t x822 = INT64_MIN;
int16_t x825 = 320;
volatile uint8_t x826 = 1U;
static int32_t t176 = 14;
uint8_t x834 = UINT8_MAX;
int64_t t178 = -44113696998261LL;
volatile int64_t t179 = -17371106859282LL;
uint32_t x841 = UINT32_MAX;
uint8_t x842 = 3U;
int8_t x844 = -8;
int16_t x851 = -1;
volatile int32_t t182 = 872;
static volatile int16_t x855 = INT16_MIN;
int64_t x856 = -1LL;
static int64_t t183 = 62906306328786342LL;
static volatile int8_t x875 = -21;
static int16_t x876 = INT16_MIN;
volatile int64_t t187 = 370751LL;
int16_t x882 = -7665;
int8_t x883 = INT8_MIN;
volatile int64_t t190 = -875033907449LL;
uint64_t t191 = 438LLU;
int8_t x897 = -6;
int8_t x899 = INT8_MIN;
static volatile int64_t x900 = INT64_MIN;
int16_t x916 = INT16_MIN;
uint64_t t198 = 9LLU;
volatile int32_t x930 = INT32_MAX;
volatile uint64_t t199 = 1657513078765969645LLU;


void f0(void) {
    	int16_t x1 = -85;
	volatile int32_t x3 = INT32_MIN;
	static volatile uint32_t x4 = 588523U;
	volatile uint32_t t0 = 11U;

    t0 = ((x1*(x2/x3))+x4);

    if (t0 != 588523U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 4;
	static uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MAX;
	volatile int32_t t1 = -11;

    t1 = ((x5*(x6/x7))+x8);

    if (t1 != 2063) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int8_t x10 = 48;
	uint16_t x11 = UINT16_MAX;

    t2 = ((x9*(x10/x11))+x12);

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	volatile int32_t x14 = -1;
	volatile int64_t x16 = INT64_MIN;
	int64_t t3 = 62009992026471LL;

    t3 = ((x13*(x14/x15))+x16);

    if (t3 != -9223372032949518336LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	volatile int32_t x18 = INT32_MIN;
	static uint64_t x20 = 0LLU;
	uint64_t t4 = 1597240959027846LLU;

    t4 = ((x17*(x18/x19))+x20);

    if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	volatile uint8_t x22 = 1U;
	int16_t x23 = INT16_MAX;
	uint16_t x24 = 2U;
	static uint32_t t5 = 9U;

    t5 = ((x21*(x22/x23))+x24);

    if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int64_t x26 = -1LL;
	int16_t x28 = 564;
	volatile int64_t t6 = -1LL;

    t6 = ((x25*(x26/x27))+x28);

    if (t6 != 564LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = UINT16_MAX;
	volatile int16_t x30 = -1;
	uint64_t t7 = 7460952092LLU;

    t7 = ((x29*(x30/x31))+x32);

    if (t7 != 1015792LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	int32_t x36 = 254;

    t8 = ((x33*(x34/x35))+x36);

    if (t8 != -65794) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = 8LL;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = INT64_MIN;
	int64_t t9 = INT64_MIN;

    t9 = ((x37*(x38/x39))+x40);

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x45 = 3U;
	volatile int64_t t10 = -1975302021112212831LL;

    t10 = ((x45*(x46/x47))+x48);

    if (t10 != -1534LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = INT8_MIN;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -55970924184145LL;

    t11 = ((x49*(x50/x51))+x52);

    if (t11 != -55970924184145LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	uint32_t x54 = 1046143544U;
	int16_t x55 = -1;
	uint32_t t12 = UINT32_MAX;

    t12 = ((x53*(x54/x55))+x56);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = -1;
	int8_t x58 = INT8_MIN;
	volatile uint8_t x59 = UINT8_MAX;
	int32_t t13 = -372;

    t13 = ((x57*(x58/x59))+x60);

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x65 = 62U;
	int16_t x66 = -1;
	int16_t x67 = -1;
	volatile int32_t t14 = 110533985;

    t14 = ((x65*(x66/x67))+x68);

    if (t14 != 32829) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x69 = 57471298999LLU;
	int8_t x70 = -14;
	static uint8_t x71 = 11U;
	volatile int64_t x72 = -3542316973LL;

    t15 = ((x69*(x70/x71))+x72);

    if (t15 != 18446744012695935644LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x75 = -1;
	volatile int64_t t16 = INT64_MAX;

    t16 = ((x73*(x74/x75))+x76);

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x77 = 143919725U;
	static volatile int8_t x78 = INT8_MAX;
	int64_t x79 = -1LL;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t17 = 34573348798235LLU;

    t17 = ((x77*(x78/x79))+x80);

    if (t17 != 18446744055431746540LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = -1;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = -1;
	int8_t x84 = 1;
	volatile int32_t t18 = 1;

    t18 = ((x81*(x82/x83))+x84);

    if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x86 = 537;
	static int16_t x87 = 1;
	int64_t x88 = 522LL;
	int64_t t19 = 130210273428797313LL;

    t19 = ((x85*(x86/x87))+x88);

    if (t19 != 1740367991LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -5;
	int8_t x90 = INT8_MAX;
	volatile int16_t x91 = INT16_MIN;
	static volatile int8_t x92 = 1;
	volatile int32_t t20 = -1;

    t20 = ((x89*(x90/x91))+x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 11U;
	int32_t x94 = INT32_MAX;
	volatile int64_t t21 = -3435413634663828LL;

    t21 = ((x93*(x94/x95))+x96);

    if (t21 != -9223372036668773288LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	volatile uint8_t x98 = 1U;
	uint16_t x99 = 450U;
	uint32_t x100 = 451381U;

    t22 = ((x97*(x98/x99))+x100);

    if (t22 != 451381U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = UINT64_MAX;
	static int8_t x102 = INT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	uint64_t x104 = 10644621LLU;
	static volatile uint64_t t23 = 228LLU;

    t23 = ((x101*(x102/x103))+x104);

    if (t23 != 10644621LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x106 = 34778U;
	volatile int8_t x107 = 12;
	volatile int8_t x108 = 0;

    t24 = ((x105*(x106/x107))+x108);

    if (t24 != 4294935418U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x113 = 22288U;
	volatile uint32_t x114 = UINT32_MAX;
	static volatile uint64_t x115 = UINT64_MAX;
	int8_t x116 = INT8_MIN;

    t25 = ((x113*(x114/x115))+x116);

    if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x117 = INT16_MIN;
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 19623042LLU;
	uint8_t x120 = 7U;
	volatile uint64_t t26 = 418871LLU;

    t26 = ((x117*(x118/x119))+x120);

    if (t26 != 7LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = UINT32_MAX;
	uint8_t x123 = 20U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t27 = INT64_MIN;

    t27 = ((x121*(x122/x123))+x124);

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x125 = 0U;
	volatile int64_t x126 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MIN;
	int64_t t28 = 814489686LL;

    t28 = ((x125*(x126/x127))+x128);

    if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x131 = 6814913U;
	int8_t x132 = -24;

    t29 = ((x129*(x130/x131))+x132);

    if (t29 != 4294966642U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x133 = INT16_MAX;
	volatile int32_t x134 = -2;
	volatile int16_t x135 = INT16_MIN;
	uint64_t t30 = UINT64_MAX;

    t30 = ((x133*(x134/x135))+x136);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x138 = 47318486749000LLU;
	static volatile int32_t x139 = INT32_MIN;
	uint64_t x140 = 7785326284308LLU;

    t31 = ((x137*(x138/x139))+x140);

    if (t31 != 7785326284308LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x143 = 7128LL;
	int8_t x144 = -20;

    t32 = ((x141*(x142/x143))+x144);

    if (t32 != 3317026720LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x146 = 1U;
	int64_t x148 = 1366980LL;
	volatile uint64_t t33 = 3LLU;

    t33 = ((x145*(x146/x147))+x148);

    if (t33 != 1366980LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x149 = 244880746320843392LLU;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MIN;
	uint64_t t34 = 70019385670050LLU;

    t34 = ((x149*(x150/x151))+x152);

    if (t34 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = UINT8_MAX;
	volatile int32_t x158 = -442;
	static uint8_t x159 = UINT8_MAX;
	int8_t x160 = -1;
	static int32_t t35 = 437020;

    t35 = ((x157*(x158/x159))+x160);

    if (t35 != -256) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x161 = 1476U;
	static uint16_t x162 = UINT16_MAX;
	uint8_t x163 = UINT8_MAX;
	volatile int64_t x164 = INT64_MIN;
	int64_t t36 = -90086019844144LL;

    t36 = ((x161*(x162/x163))+x164);

    if (t36 != -9223372036854396476LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x172 = 1565U;
	static volatile uint64_t t37 = 65673100673528544LLU;

    t37 = ((x169*(x170/x171))+x172);

    if (t37 != 1565LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x179 = INT32_MIN;
	uint8_t x180 = 24U;
	volatile int32_t t38 = 2;

    t38 = ((x177*(x178/x179))+x180);

    if (t38 != 24) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x182 = INT8_MAX;
	static int32_t x183 = INT32_MAX;
	static int64_t x184 = INT64_MIN;
	static volatile int64_t t39 = INT64_MIN;

    t39 = ((x181*(x182/x183))+x184);

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x185 = -1LL;
	static int8_t x186 = INT8_MIN;
	volatile uint8_t x188 = UINT8_MAX;

    t40 = ((x185*(x186/x187))+x188);

    if (t40 != 254LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x189 = 5LLU;
	volatile uint64_t x191 = 7LLU;
	uint64_t t41 = 3105LLU;

    t41 = ((x189*(x190/x191))+x192);

    if (t41 != 703LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x197 = INT16_MAX;
	static volatile int32_t x198 = -1;
	static uint64_t x199 = UINT64_MAX;
	uint32_t x200 = 2U;
	volatile uint64_t t42 = 5940746300403961209LLU;

    t42 = ((x197*(x198/x199))+x200);

    if (t42 != 32769LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -1;
	int8_t x204 = INT8_MAX;
	int32_t t43 = 216143406;

    t43 = ((x201*(x202/x203))+x204);

    if (t43 != -4194177) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x205 = -53;
	int64_t x207 = INT64_MAX;
	volatile int8_t x208 = INT8_MIN;
	volatile int64_t t44 = 588586729356LL;

    t44 = ((x205*(x206/x207))+x208);

    if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x209 = -1LL;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = -16;
	volatile int64_t t45 = -88LL;

    t45 = ((x209*(x210/x211))+x212);

    if (t45 != -16LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x218 = INT32_MAX;
	uint32_t x219 = 5109651U;
	int16_t x220 = 2178;

    t46 = ((x217*(x218/x219))+x220);

    if (t46 != 1762968426U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = -1LL;
	int8_t x222 = INT8_MAX;
	volatile int8_t x223 = -1;
	int16_t x224 = 533;
	int64_t t47 = 93966LL;

    t47 = ((x221*(x222/x223))+x224);

    if (t47 != 660LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x229 = 0;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int8_t x232 = -13;

    t48 = ((x229*(x230/x231))+x232);

    if (t48 != -13LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x235 = INT64_MIN;
	int8_t x236 = 10;
	int64_t t49 = -651129081967439546LL;

    t49 = ((x233*(x234/x235))+x236);

    if (t49 != 10LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x238 = -12;
	uint32_t x239 = 35542U;
	static uint32_t x240 = 765534189U;
	volatile uint32_t t50 = 757362530U;

    t50 = ((x237*(x238/x239))+x240);

    if (t50 != 750066413U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = 1U;
	int8_t x242 = -1;
	volatile int64_t x243 = INT64_MIN;
	uint8_t x244 = UINT8_MAX;
	volatile int64_t t51 = -586756406148LL;

    t51 = ((x241*(x242/x243))+x244);

    if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MAX;
	static uint16_t x247 = UINT16_MAX;
	int32_t t52 = 500796457;

    t52 = ((x245*(x246/x247))+x248);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x249 = INT8_MAX;
	volatile int16_t x250 = INT16_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int8_t x252 = -1;

    t53 = ((x249*(x250/x251))+x252);

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x253 = UINT32_MAX;
	static uint8_t x254 = 10U;
	volatile int16_t x255 = -1091;
	static int32_t x256 = -457;
	volatile uint32_t t54 = 1651767U;

    t54 = ((x253*(x254/x255))+x256);

    if (t54 != 4294966839U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = -1;
	static int32_t x258 = INT32_MIN;
	volatile int32_t x259 = -119191;
	volatile uint16_t x260 = 25U;
	volatile int32_t t55 = 118;

    t55 = ((x257*(x258/x259))+x260);

    if (t55 != -17992) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = 0;
	uint8_t x262 = 0U;
	int32_t x263 = 992151081;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t56 = -52;

    t56 = ((x261*(x262/x263))+x264);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	volatile uint64_t x271 = 3743895LLU;

    t57 = ((x269*(x270/x271))+x272);

    if (t57 != 9061919082162618368LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x273 = INT8_MIN;
	static int16_t x274 = -1;
	volatile int32_t t58 = -177;

    t58 = ((x273*(x274/x275))+x276);

    if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x277 = INT8_MIN;
	static int64_t x278 = -1LL;
	int32_t x279 = INT32_MIN;
	static uint64_t x280 = 6419261898738002LLU;

    t59 = ((x277*(x278/x279))+x280);

    if (t59 != 6419261898738002LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x281 = INT16_MAX;
	volatile int8_t x282 = -1;
	static int32_t x284 = -25;

    t60 = ((x281*(x282/x283))+x284);

    if (t60 != -25) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = INT8_MIN;
	uint16_t x287 = 25239U;
	int32_t x288 = -1;
	volatile int32_t t61 = 66536816;

    t61 = ((x285*(x286/x287))+x288);

    if (t61 != 9983) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x289 = -358;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 80U;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t62 = 47829;

    t62 = ((x289*(x290/x291))+x292);

    if (t62 != 113654) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x293 = -1LL;
	int32_t x294 = -1;
	int8_t x295 = -1;
	static uint32_t x296 = UINT32_MAX;
	int64_t t63 = 12668497218080202LL;

    t63 = ((x293*(x294/x295))+x296);

    if (t63 != 4294967294LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x298 = -1LL;
	int8_t x299 = INT8_MAX;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = ((x297*(x298/x299))+x300);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x301 = 1U;
	static uint16_t x302 = UINT16_MAX;
	uint8_t x304 = UINT8_MAX;

    t65 = ((x301*(x302/x303))+x304);

    if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x305 = 125U;
	static volatile int16_t x306 = INT16_MIN;
	uint32_t x307 = 1131010U;
	static volatile uint32_t t66 = 1085687586U;

    t66 = ((x305*(x306/x307))+x308);

    if (t66 != 474893U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x309 = 36509843358292628LLU;
	int64_t x310 = INT64_MAX;
	volatile uint8_t x311 = 1U;
	int16_t x312 = INT16_MIN;
	static volatile uint64_t t67 = 126008692715LLU;

    t67 = ((x309*(x310/x311))+x312);

    if (t67 != 18410234230351226220LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t68 = 6748LLU;

    t68 = ((x313*(x314/x315))+x316);

    if (t68 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x323 = UINT8_MAX;
	int64_t t69 = 273928025710LL;

    t69 = ((x321*(x322/x323))+x324);

    if (t69 != -35265258243341641LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	volatile int32_t x331 = INT32_MIN;
	static int8_t x332 = INT8_MIN;
	int32_t t70 = -16642;

    t70 = ((x329*(x330/x331))+x332);

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x337 = -295830;
	int64_t x338 = -31930LL;
	volatile int16_t x339 = INT16_MIN;
	static int64_t x340 = INT64_MAX;
	volatile int64_t t71 = INT64_MAX;

    t71 = ((x337*(x338/x339))+x340);

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x341 = -1;
	volatile uint64_t x342 = UINT64_MAX;
	volatile uint32_t x344 = UINT32_MAX;
	volatile uint64_t t72 = 2314LLU;

    t72 = ((x341*(x342/x343))+x344);

    if (t72 != 18446181110870704111LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x345 = UINT64_MAX;
	static volatile uint8_t x347 = 1U;
	uint64_t t73 = 604605556548703LLU;

    t73 = ((x345*(x346/x347))+x348);

    if (t73 != 32895LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x349 = -14062;
	volatile int16_t x350 = 4120;
	static int32_t x351 = INT32_MIN;
	uint16_t x352 = 1U;
	volatile int32_t t74 = 392;

    t74 = ((x349*(x350/x351))+x352);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MAX;
	static int64_t t75 = -90LL;

    t75 = ((x353*(x354/x355))+x356);

    if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x357 = 6;
	int64_t x358 = 7LL;
	volatile int32_t x359 = 26;
	int32_t x360 = 251598;
	static int64_t t76 = -5310628LL;

    t76 = ((x357*(x358/x359))+x360);

    if (t76 != 251598LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x362 = -1;
	int32_t x364 = INT32_MAX;

    t77 = ((x361*(x362/x363))+x364);

    if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x366 = -1;
	uint32_t x368 = 13U;
	static uint32_t t78 = 613568378U;

    t78 = ((x365*(x366/x367))+x368);

    if (t78 != 13U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x369 = INT16_MIN;
	static volatile int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MIN;

    t79 = ((x369*(x370/x371))+x372);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x373 = INT8_MIN;
	uint64_t x374 = 211LLU;
	volatile int16_t x376 = INT16_MIN;

    t80 = ((x373*(x374/x375))+x376);

    if (t80 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x378 = 5U;
	int64_t x379 = -79824019649071LL;

    t81 = ((x377*(x378/x379))+x380);

    if (t81 != 4294967295LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x381 = UINT32_MAX;
	uint16_t x382 = UINT16_MAX;
	volatile int64_t x383 = INT64_MIN;
	int32_t x384 = -1;

    t82 = ((x381*(x382/x383))+x384);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x385 = -1;
	static uint16_t x386 = UINT16_MAX;
	int64_t x387 = 995982406352LL;
	int8_t x388 = INT8_MIN;
	static volatile int64_t t83 = 1473LL;

    t83 = ((x385*(x386/x387))+x388);

    if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x390 = 342LLU;
	static int16_t x391 = -1;
	uint64_t t84 = 57280862026939467LLU;

    t84 = ((x389*(x390/x391))+x392);

    if (t84 != 3LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x393 = -140826442255LL;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;

    t85 = ((x393*(x394/x395))+x396);

    if (t85 != -9223300074542783503LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x397 = -4;
	uint32_t x398 = UINT32_MAX;
	uint64_t x399 = 2347668939609052LLU;
	volatile uint64_t t86 = 5101728674529074206LLU;

    t86 = ((x397*(x398/x399))+x400);

    if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x401 = -1;
	static int64_t x402 = -57871831893806LL;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;
	int64_t t87 = -12LL;

    t87 = ((x401*(x402/x403))+x404);

    if (t87 != 27203LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	static volatile int32_t x407 = INT32_MIN;
	static int8_t x408 = INT8_MAX;
	static volatile int64_t t88 = -1LL;

    t88 = ((x405*(x406/x407))+x408);

    if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x410 = 30LLU;
	static volatile uint16_t x411 = UINT16_MAX;
	int64_t x412 = -22385775772LL;

    t89 = ((x409*(x410/x411))+x412);

    if (t89 != 18446744051323775844LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x413 = UINT8_MAX;
	int16_t x414 = INT16_MIN;
	int16_t x416 = INT16_MIN;

    t90 = ((x413*(x414/x415))+x416);

    if (t90 != -32513) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x419 = -1987510938792042LL;
	volatile int64_t x420 = INT64_MIN;
	int64_t t91 = INT64_MIN;

    t91 = ((x417*(x418/x419))+x420);

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x421 = -1;
	int32_t x422 = 155565075;
	int16_t x423 = -1;
	uint16_t x424 = 231U;
	int32_t t92 = -31;

    t92 = ((x421*(x422/x423))+x424);

    if (t92 != 155565306) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x425 = -45;
	static int8_t x426 = -1;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MIN;

    t93 = ((x425*(x426/x427))+x428);

    if (t93 != -2147483648LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x429 = UINT16_MAX;
	uint64_t x430 = 11082895221111778LLU;
	int32_t x431 = 1;
	int8_t x432 = -1;
	uint64_t t94 = 1907660830856306739LLU;

    t94 = ((x429*(x430/x431))+x432);

    if (t94 != 6894519440887858205LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = -1;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	volatile int16_t x436 = 11694;
	int32_t t95 = 5;

    t95 = ((x433*(x434/x435))+x436);

    if (t95 != -53842) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x437 = UINT16_MAX;
	static int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t96 = 269537198U;

    t96 = ((x437*(x438/x439))+x440);

    if (t96 != 4294901760U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x441 = INT8_MAX;
	int8_t x442 = INT8_MIN;
	volatile int64_t x444 = -1LL;
	static int64_t t97 = -126293LL;

    t97 = ((x441*(x442/x443))+x444);

    if (t97 != 16255LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x449 = 279;
	uint64_t x452 = UINT64_MAX;
	static volatile uint64_t t98 = UINT64_MAX;

    t98 = ((x449*(x450/x451))+x452);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x454 = UINT16_MAX;
	static uint64_t x455 = UINT64_MAX;
	uint64_t t99 = 99497344371LLU;

    t99 = ((x453*(x454/x455))+x456);

    if (t99 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x457 = UINT32_MAX;
	int16_t x458 = 40;
	int16_t x460 = INT16_MIN;
	uint32_t t100 = 111U;

    t100 = ((x457*(x458/x459))+x460);

    if (t100 != 4294934568U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x461 = INT16_MIN;
	uint16_t x463 = UINT16_MAX;
	uint64_t x464 = UINT64_MAX;
	uint64_t t101 = UINT64_MAX;

    t101 = ((x461*(x462/x463))+x464);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x465 = 155352023LLU;
	int8_t x466 = INT8_MIN;
	uint8_t x467 = UINT8_MAX;
	volatile uint64_t x468 = UINT64_MAX;
	uint64_t t102 = UINT64_MAX;

    t102 = ((x465*(x466/x467))+x468);

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x479 = 5U;
	int64_t x480 = 1LL;

    t103 = ((x477*(x478/x479))+x480);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x481 = UINT64_MAX;
	static int8_t x482 = -1;
	static volatile int64_t x483 = -1LL;
	uint64_t t104 = 8LLU;

    t104 = ((x481*(x482/x483))+x484);

    if (t104 != 4LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x485 = -411305;
	int32_t x486 = INT32_MAX;
	static int64_t x487 = -49477985962986101LL;
	uint64_t x488 = 131595759600384014LLU;
	volatile uint64_t t105 = 35929854545305770LLU;

    t105 = ((x485*(x486/x487))+x488);

    if (t105 != 131595759600384014LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x489 = -1;
	volatile uint16_t x490 = 5578U;
	static int8_t x491 = -1;
	volatile int32_t x492 = -1;
	int32_t t106 = 61;

    t106 = ((x489*(x490/x491))+x492);

    if (t106 != 5577) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x494 = -1;
	static int64_t x495 = INT64_MIN;
	int64_t t107 = 2480915243379LL;

    t107 = ((x493*(x494/x495))+x496);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x497 = INT32_MAX;
	static int32_t x499 = 6;
	static volatile uint16_t x500 = UINT16_MAX;
	static int32_t t108 = -1;

    t108 = ((x497*(x498/x499))+x500);

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = INT16_MAX;
	static uint16_t x502 = 52U;
	int8_t x503 = -1;
	volatile int64_t x504 = 1482013782LL;
	int64_t t109 = 1403272849057125LL;

    t109 = ((x501*(x502/x503))+x504);

    if (t109 != 1480309898LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x505 = UINT8_MAX;
	volatile int32_t x506 = -71;
	volatile int16_t x508 = 2;
	uint64_t t110 = 62684920932073LLU;

    t110 = ((x505*(x506/x507))+x508);

    if (t110 != 7905747460161233786LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x509 = UINT16_MAX;
	int64_t x511 = INT64_MIN;
	volatile int64_t t111 = 8185LL;

    t111 = ((x509*(x510/x511))+x512);

    if (t111 != 26LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x513 = INT32_MIN;
	static uint32_t x514 = 9491U;

    t112 = ((x513*(x514/x515))+x516);

    if (t112 != 20379619819520LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x518 = 30;
	int8_t x519 = -1;
	uint32_t x520 = 58416U;
	uint32_t t113 = 60545U;

    t113 = ((x517*(x518/x519))+x520);

    if (t113 != 58386U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x521 = INT16_MAX;
	int64_t x522 = 444554LL;
	uint64_t x523 = 7766LLU;
	volatile uint64_t x524 = 14LLU;
	uint64_t t114 = 335LLU;

    t114 = ((x521*(x522/x523))+x524);

    if (t114 != 1867733LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x529 = 1875133434U;
	static int8_t x530 = -1;
	volatile int8_t x531 = INT8_MIN;
	int64_t x532 = -7325628935LL;
	int64_t t115 = 336251LL;

    t115 = ((x529*(x530/x531))+x532);

    if (t115 != -7325628935LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x537 = 2304LLU;
	volatile uint32_t x538 = 260815705U;
	volatile int64_t x540 = INT64_MIN;
	static volatile uint64_t t116 = 27333378884009LLU;

    t116 = ((x537*(x538/x539))+x540);

    if (t116 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x541 = -1LL;
	uint64_t x542 = 3533963205LLU;
	int16_t x543 = INT16_MAX;
	static int32_t x544 = -6898610;
	static uint64_t t117 = 16517198217518451LLU;

    t117 = ((x541*(x542/x543))+x544);

    if (t117 != 18446744073702545155LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x545 = INT64_MAX;
	int32_t x546 = -625;
	uint16_t x547 = 599U;

    t118 = ((x545*(x546/x547))+x548);

    if (t118 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x549 = -16289;
	volatile int16_t x550 = INT16_MAX;
	int8_t x551 = 1;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t119 = 3;

    t119 = ((x549*(x550/x551))+x552);

    if (t119 != -533741408) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x554 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	uint8_t x556 = 53U;
	volatile int64_t t120 = -10419204976LL;

    t120 = ((x553*(x554/x555))+x556);

    if (t120 != -549755813835LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x557 = 1U;
	int64_t x559 = INT64_MIN;

    t121 = ((x557*(x558/x559))+x560);

    if (t121 != 39LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x561 = INT8_MAX;
	int32_t x562 = -199903695;
	static uint16_t x563 = UINT16_MAX;
	int64_t x564 = 3652130986014117983LL;

    t122 = ((x561*(x562/x563))+x564);

    if (t122 != 3652130986013730633LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x565 = -24321448;
	int32_t x566 = INT32_MIN;
	volatile int64_t x567 = 200891076817806128LL;
	static volatile uint64_t x568 = UINT64_MAX;
	volatile uint64_t t123 = UINT64_MAX;

    t123 = ((x565*(x566/x567))+x568);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x569 = 181487LLU;
	volatile uint16_t x571 = UINT16_MAX;
	int8_t x572 = 0;
	uint64_t t124 = 4LLU;

    t124 = ((x569*(x570/x571))+x572);

    if (t124 != 18446744067762585600LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x573 = 15198516;
	volatile int16_t x574 = INT16_MIN;
	static uint8_t x575 = UINT8_MAX;
	static uint32_t x576 = UINT32_MAX;
	volatile uint32_t t125 = 14556U;

    t125 = ((x573*(x574/x575))+x576);

    if (t125 != 2349557247U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x577 = INT32_MAX;
	int16_t x579 = -1;
	int32_t x580 = INT32_MIN;
	static int64_t t126 = -17LL;

    t126 = ((x577*(x578/x579))+x580);

    if (t126 != -2153268967945019LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x581 = INT8_MAX;
	static volatile int8_t x582 = INT8_MIN;
	int16_t x583 = INT16_MIN;
	static int8_t x584 = -1;
	static volatile int32_t t127 = 78032;

    t127 = ((x581*(x582/x583))+x584);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x585 = 7563007962468518LLU;
	int16_t x586 = INT16_MIN;
	volatile uint64_t x587 = 39971889528418LLU;
	int32_t x588 = -1;

    t128 = ((x585*(x586/x587))+x588);

    if (t128 != 3833040684416053431LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x590 = INT8_MIN;
	static int16_t x591 = -866;
	int8_t x592 = 4;
	volatile int64_t t129 = -3267465035LL;

    t129 = ((x589*(x590/x591))+x592);

    if (t129 != 4LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x593 = 3643640157310LLU;
	volatile int64_t x594 = INT64_MIN;
	uint32_t x595 = 67681389U;
	volatile uint64_t t130 = 26032LLU;

    t130 = ((x593*(x594/x595))+x596);

    if (t130 != 7508949213970656747LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint32_t x598 = 41815722U;
	static int8_t x599 = INT8_MIN;
	int8_t x600 = INT8_MIN;

    t131 = ((x597*(x598/x599))+x600);

    if (t131 != 4294967168U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x605 = INT32_MAX;
	volatile uint8_t x606 = 18U;
	static int64_t x608 = -1LL;
	volatile int64_t t132 = -466844448LL;

    t132 = ((x605*(x606/x607))+x608);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x613 = INT64_MIN;
	uint8_t x614 = 33U;
	volatile int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MAX;
	static int64_t t133 = 46186200766711LL;

    t133 = ((x613*(x614/x615))+x616);

    if (t133 != 127LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x617 = -4254;
	int16_t x619 = INT16_MIN;
	static int16_t x620 = 0;
	int32_t t134 = -253;

    t134 = ((x617*(x618/x619))+x620);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x626 = 1061035203U;
	volatile int32_t x627 = 247479;
	uint16_t x628 = 1232U;
	uint32_t t135 = 638U;

    t135 = ((x625*(x626/x627))+x628);

    if (t135 != 22667U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x629 = UINT32_MAX;
	int32_t x630 = INT32_MIN;
	volatile uint64_t x631 = 28558LLU;
	uint16_t x632 = 8U;
	volatile uint64_t t136 = 2684480034LLU;

    t136 = ((x629*(x630/x631))+x632);

    if (t136 != 9974922798013851934LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x633 = INT16_MIN;
	uint64_t x634 = UINT64_MAX;
	volatile int16_t x635 = INT16_MAX;
	static uint8_t x636 = UINT8_MAX;

    t137 = ((x633*(x634/x635))+x636);

    if (t137 != 18446181106575737087LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int32_t x638 = INT32_MIN;
	uint16_t x639 = UINT16_MAX;
	uint32_t x640 = UINT32_MAX;

    t138 = ((x637*(x638/x639))+x640);

    if (t138 != 4295000063LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x641 = INT32_MIN;
	int8_t x642 = 23;
	int32_t x643 = INT32_MIN;
	int16_t x644 = 96;
	volatile int32_t t139 = -5529;

    t139 = ((x641*(x642/x643))+x644);

    if (t139 != 96) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x645 = INT16_MIN;
	int64_t x646 = 209906LL;
	uint32_t x647 = UINT32_MAX;
	int32_t x648 = 1354972;
	volatile int64_t t140 = 879485891836LL;

    t140 = ((x645*(x646/x647))+x648);

    if (t140 != 1354972LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x649 = INT16_MAX;
	uint32_t x650 = 1206228U;
	int16_t x651 = -1;
	volatile uint32_t x652 = UINT32_MAX;

    t141 = ((x649*(x650/x651))+x652);

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x654 = INT64_MAX;
	int32_t x655 = INT32_MIN;
	int8_t x656 = -22;
	int64_t t142 = -91LL;

    t142 = ((x653*(x654/x655))+x656);

    if (t142 != 549755813738LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x657 = INT64_MAX;
	uint64_t x658 = 681997966437LLU;
	volatile int16_t x659 = INT16_MIN;
	uint64_t t143 = 245LLU;

    t143 = ((x657*(x658/x659))+x660);

    if (t143 != 23LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x661 = UINT64_MAX;
	volatile int16_t x662 = INT16_MIN;
	int8_t x664 = -1;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = ((x661*(x662/x663))+x664);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x667 = INT8_MAX;
	uint32_t t145 = 3613U;

    t145 = ((x665*(x666/x667))+x668);

    if (t145 != 126U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x669 = 2U;
	int16_t x670 = INT16_MAX;
	volatile int16_t x671 = INT16_MIN;
	uint32_t x672 = 2126711902U;
	volatile uint32_t t146 = 110U;

    t146 = ((x669*(x670/x671))+x672);

    if (t146 != 2126711902U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x673 = 2461590LLU;
	int64_t x674 = INT64_MIN;
	volatile int32_t x675 = INT32_MAX;
	uint32_t x676 = UINT32_MAX;
	uint64_t t147 = 119999589562LLU;

    t147 = ((x673*(x674/x675))+x676);

    if (t147 != 18436171629453435091LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x677 = -1LL;
	volatile uint8_t x678 = 6U;
	uint8_t x679 = UINT8_MAX;
	int16_t x680 = 1;
	int64_t t148 = -38595859306639395LL;

    t148 = ((x677*(x678/x679))+x680);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x681 = 3792283680454250LLU;
	int16_t x682 = -97;
	int64_t x683 = -1LL;
	int64_t x684 = INT64_MIN;
	volatile uint64_t t149 = 3023LLU;

    t149 = ((x681*(x682/x683))+x684);

    if (t149 != 9591223553858838058LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x686 = INT64_MAX;
	static int64_t x687 = INT64_MIN;
	static volatile int8_t x688 = INT8_MAX;
	int64_t t150 = 683327673LL;

    t150 = ((x685*(x686/x687))+x688);

    if (t150 != 127LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x690 = INT64_MAX;
	uint32_t x691 = 7851721U;
	volatile uint64_t x692 = 0LLU;
	volatile uint64_t t151 = 3633175507LLU;

    t151 = ((x689*(x690/x691))+x692);

    if (t151 != 299547050818170LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x700 = 353U;
	volatile int32_t t152 = -1;

    t152 = ((x697*(x698/x699))+x700);

    if (t152 != 995) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x709 = 1U;
	uint16_t x710 = 467U;
	uint8_t x711 = 13U;
	static int32_t x712 = -1;
	volatile uint32_t t153 = 0U;

    t153 = ((x709*(x710/x711))+x712);

    if (t153 != 34U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x713 = 7;
	int16_t x714 = INT16_MIN;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t154 = 2016998LLU;

    t154 = ((x713*(x714/x715))+x716);

    if (t154 != 229375LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x717 = UINT64_MAX;
	int8_t x718 = INT8_MIN;
	int16_t x719 = -1;
	uint16_t x720 = 30849U;
	static uint64_t t155 = 3727LLU;

    t155 = ((x717*(x718/x719))+x720);

    if (t155 != 30721LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x721 = INT64_MAX;
	uint16_t x723 = UINT16_MAX;
	static volatile int64_t t156 = 45LL;

    t156 = ((x721*(x722/x723))+x724);

    if (t156 != 358LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x725 = 7U;
	uint64_t x727 = 2097577422670216LLU;
	uint64_t x728 = UINT64_MAX;

    t157 = ((x725*(x726/x727))+x728);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x734 = INT64_MAX;
	static int64_t x735 = INT64_MAX;
	int32_t x736 = INT32_MIN;
	volatile int64_t t158 = -2LL;

    t158 = ((x733*(x734/x735))+x736);

    if (t158 != -2147516416LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x737 = 4449LL;
	int8_t x738 = -1;
	static int8_t x739 = 27;
	uint8_t x740 = 0U;
	static int64_t t159 = -54238648LL;

    t159 = ((x737*(x738/x739))+x740);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x741 = UINT32_MAX;
	int32_t x744 = INT32_MIN;
	int64_t t160 = -5622878919LL;

    t160 = ((x741*(x742/x743))+x744);

    if (t160 != -2147483648LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x745 = INT16_MIN;
	uint8_t x746 = UINT8_MAX;
	int64_t x747 = INT64_MAX;
	volatile int64_t t161 = -56507269753LL;

    t161 = ((x745*(x746/x747))+x748);

    if (t161 != 2147483647LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x749 = 2U;
	uint8_t x750 = UINT8_MAX;
	uint64_t x752 = UINT64_MAX;
	static volatile uint64_t t162 = 563631126564594331LLU;

    t162 = ((x749*(x750/x751))+x752);

    if (t162 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	static int16_t x759 = -58;

    t163 = ((x757*(x758/x759))+x760);

    if (t163 != 27LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x761 = 646900555848409420LLU;
	int8_t x762 = 0;
	volatile uint64_t t164 = 40898944698002LLU;

    t164 = ((x761*(x762/x763))+x764);

    if (t164 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x765 = INT16_MIN;
	int64_t x767 = -1248624107438LL;
	static uint32_t x768 = UINT32_MAX;

    t165 = ((x765*(x766/x767))+x768);

    if (t165 != 4294967295LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x779 = INT32_MIN;
	int32_t x780 = INT32_MIN;
	static int64_t t166 = 157943586903919LL;

    t166 = ((x777*(x778/x779))+x780);

    if (t166 != -2147483648LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x785 = 2U;
	static volatile uint64_t x786 = UINT64_MAX;
	static int8_t x787 = -1;
	int8_t x788 = INT8_MAX;
	uint64_t t167 = 470918LLU;

    t167 = ((x785*(x786/x787))+x788);

    if (t167 != 129LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x789 = 1607240274445015090LLU;
	int64_t x790 = INT64_MIN;
	int32_t x791 = INT32_MIN;
	int64_t x792 = 9367LL;
	uint64_t t168 = 2808367LLU;

    t168 = ((x789*(x790/x791))+x792);

    if (t168 != 11168672203929560215LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x793 = INT8_MIN;
	uint8_t x795 = UINT8_MAX;
	volatile uint32_t x796 = 3954U;
	volatile int64_t t169 = 57179LL;

    t169 = ((x793*(x794/x795))+x796);

    if (t169 != 3954LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x801 = 182U;
	int16_t x802 = 0;
	uint32_t x803 = 163405446U;
	uint32_t x804 = 622959U;
	volatile uint32_t t170 = 993064U;

    t170 = ((x801*(x802/x803))+x804);

    if (t170 != 622959U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x805 = INT16_MIN;
	int8_t x806 = INT8_MIN;
	static int16_t x807 = 1623;
	int64_t x808 = INT64_MAX;
	int64_t t171 = INT64_MAX;

    t171 = ((x805*(x806/x807))+x808);

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x809 = 37267U;
	volatile int8_t x810 = -1;
	int8_t x811 = INT8_MIN;
	uint8_t x812 = 68U;
	volatile uint32_t t172 = 173636U;

    t172 = ((x809*(x810/x811))+x812);

    if (t172 != 68U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x813 = -1;
	volatile int8_t x814 = INT8_MIN;
	uint64_t x816 = 270LLU;

    t173 = ((x813*(x814/x815))+x816);

    if (t173 != 270LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x817 = 1U;
	int16_t x818 = -1;
	static uint32_t x819 = UINT32_MAX;
	volatile uint32_t t174 = 51206U;

    t174 = ((x817*(x818/x819))+x820);

    if (t174 != 4294967169U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x821 = 2;
	static uint8_t x823 = UINT8_MAX;
	int8_t x824 = INT8_MIN;
	volatile int64_t t175 = 47299193660321LL;

    t175 = ((x821*(x822/x823))+x824);

    if (t175 != -72340172838076800LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x827 = -1;
	static volatile uint8_t x828 = UINT8_MAX;

    t176 = ((x825*(x826/x827))+x828);

    if (t176 != -65) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x829 = INT8_MIN;
	int32_t x830 = INT32_MIN;
	uint32_t x831 = UINT32_MAX;
	static volatile int64_t x832 = 12895065LL;
	int64_t t177 = 1209994244711300980LL;

    t177 = ((x829*(x830/x831))+x832);

    if (t177 != 12895065LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x833 = INT16_MIN;
	int64_t x835 = 35775065LL;
	uint16_t x836 = UINT16_MAX;

    t178 = ((x833*(x834/x835))+x836);

    if (t178 != 65535LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = 25;
	int64_t x839 = INT64_MAX;
	static uint16_t x840 = UINT16_MAX;

    t179 = ((x837*(x838/x839))+x840);

    if (t179 != 65535LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x843 = 1U;
	uint32_t t180 = 917291331U;

    t180 = ((x841*(x842/x843))+x844);

    if (t180 != 4294967285U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x845 = 408256093;
	int16_t x846 = INT16_MIN;
	static int16_t x847 = INT16_MAX;
	int64_t x848 = -3425LL;
	int64_t t181 = 39736809051475LL;

    t181 = ((x845*(x846/x847))+x848);

    if (t181 != -408259518LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x849 = -1;
	uint8_t x850 = UINT8_MAX;
	uint16_t x852 = UINT16_MAX;

    t182 = ((x849*(x850/x851))+x852);

    if (t182 != 65790) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x853 = 982242;
	uint8_t x854 = UINT8_MAX;

    t183 = ((x853*(x854/x855))+x856);

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x857 = INT64_MIN;
	static volatile uint16_t x858 = 16U;
	static uint16_t x859 = 263U;
	int8_t x860 = INT8_MAX;
	volatile int64_t t184 = 0LL;

    t184 = ((x857*(x858/x859))+x860);

    if (t184 != 127LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x865 = -1;
	int32_t x866 = 909;
	uint16_t x867 = UINT16_MAX;
	uint8_t x868 = UINT8_MAX;
	volatile int32_t t185 = -1441333;

    t185 = ((x865*(x866/x867))+x868);

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x873 = 6;
	uint8_t x874 = 5U;
	volatile int32_t t186 = -1123780;

    t186 = ((x873*(x874/x875))+x876);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x877 = 1199086807U;
	int32_t x878 = -1;
	volatile int64_t x879 = INT64_MIN;
	int16_t x880 = INT16_MAX;

    t187 = ((x877*(x878/x879))+x880);

    if (t187 != 32767LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x881 = 30;
	uint32_t x884 = UINT32_MAX;
	volatile uint32_t t188 = 20432U;

    t188 = ((x881*(x882/x883))+x884);

    if (t188 != 1769U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x885 = UINT16_MAX;
	static int16_t x886 = INT16_MAX;
	uint16_t x887 = 1U;
	uint8_t x888 = 62U;
	volatile int32_t t189 = -89;

    t189 = ((x885*(x886/x887))+x888);

    if (t189 != 2147385407) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x889 = INT64_MAX;
	int16_t x890 = INT16_MAX;
	int16_t x891 = INT16_MIN;
	int8_t x892 = -8;

    t190 = ((x889*(x890/x891))+x892);

    if (t190 != -8LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x893 = -2;
	int16_t x894 = INT16_MAX;
	uint64_t x895 = 86861LLU;
	int64_t x896 = INT64_MIN;

    t191 = ((x893*(x894/x895))+x896);

    if (t191 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x898 = INT64_MAX;
	volatile int64_t t192 = -3335716415006LL;

    t192 = ((x897*(x898/x899))+x900);

    if (t192 != -8791026472627208198LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x901 = INT64_MAX;
	int8_t x902 = -33;
	int32_t x903 = -382862;
	int8_t x904 = INT8_MAX;
	volatile int64_t t193 = 300991010238522LL;

    t193 = ((x901*(x902/x903))+x904);

    if (t193 != 127LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x905 = 350419868165191LL;
	volatile int64_t x906 = -23LL;
	volatile int16_t x907 = 2475;
	static volatile int16_t x908 = INT16_MAX;
	volatile int64_t t194 = 81575045742LL;

    t194 = ((x905*(x906/x907))+x908);

    if (t194 != 32767LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x913 = INT64_MAX;
	int8_t x914 = -1;
	int8_t x915 = 2;
	static int64_t t195 = 5209LL;

    t195 = ((x913*(x914/x915))+x916);

    if (t195 != -32768LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x917 = UINT16_MAX;
	uint16_t x918 = UINT16_MAX;
	int64_t x919 = 38212056822472215LL;
	int32_t x920 = INT32_MAX;
	int64_t t196 = -4048300165799886LL;

    t196 = ((x917*(x918/x919))+x920);

    if (t196 != 2147483647LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x921 = 5983323;
	uint64_t x922 = 10941LLU;
	int16_t x923 = -3039;
	uint32_t x924 = 4594U;
	static volatile uint64_t t197 = 9304021785807LLU;

    t197 = ((x921*(x922/x923))+x924);

    if (t197 != 4594LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x925 = -6121;
	volatile int16_t x926 = 0;
	uint32_t x927 = UINT32_MAX;
	volatile uint64_t x928 = 8479644032815264108LLU;

    t198 = ((x925*(x926/x927))+x928);

    if (t198 != 8479644032815264108LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x929 = 48171880787LLU;
	int32_t x931 = 152972624;
	volatile int32_t x932 = INT32_MIN;

    t199 = ((x929*(x930/x931))+x932);

    if (t199 != 672258847370LLU) { NG(); } else { ; }
	
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

