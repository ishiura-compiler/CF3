
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

int64_t x4 = INT64_MAX;
int32_t x5 = -1;
int8_t x6 = 1;
static uint8_t x7 = 10U;
int32_t t3 = -254;
static int32_t t4 = 63;
int32_t t5 = -2;
int8_t x25 = 6;
int32_t x29 = -373005947;
volatile int32_t t8 = -5522;
int8_t x43 = 36;
static volatile int32_t t9 = 27;
int16_t x54 = INT16_MIN;
uint16_t x55 = 1U;
static uint32_t x60 = 14075800U;
int32_t x62 = -1009;
uint8_t x63 = 24U;
volatile int32_t t13 = -485928;
int16_t x65 = INT16_MAX;
static int8_t x69 = 3;
int32_t t15 = 717423175;
uint16_t x73 = 11U;
volatile uint16_t x74 = 204U;
int8_t x76 = INT8_MIN;
uint64_t x83 = UINT64_MAX;
uint32_t x88 = UINT32_MAX;
int64_t x92 = INT64_MIN;
int32_t t20 = -12;
static uint32_t x109 = UINT32_MAX;
int8_t x115 = INT8_MAX;
uint8_t x122 = 0U;
volatile int16_t x123 = INT16_MIN;
int32_t x124 = INT32_MIN;
volatile int32_t t28 = 249;
int8_t x127 = INT8_MIN;
static int64_t x130 = -1LL;
volatile int32_t t31 = 41239;
int64_t x139 = INT64_MAX;
int8_t x140 = INT8_MAX;
int32_t x143 = 14893;
uint16_t x146 = 9744U;
int32_t x148 = -1;
int64_t x150 = 5855LL;
uint8_t x152 = UINT8_MAX;
int32_t x154 = -1;
volatile int32_t t36 = 54;
static volatile int32_t t37 = -61113337;
uint64_t x164 = 339LLU;
int32_t x168 = INT32_MIN;
volatile int32_t t41 = 87564;
uint64_t x178 = 40741LLU;
uint8_t x180 = 4U;
volatile int8_t x181 = INT8_MIN;
uint64_t x188 = UINT64_MAX;
volatile int32_t t44 = 3;
static int64_t x193 = INT64_MAX;
volatile uint16_t x194 = 200U;
int32_t t46 = 3627;
int32_t x198 = 59;
static int32_t x201 = INT32_MIN;
static int64_t x206 = INT64_MAX;
int64_t x207 = -15LL;
int64_t x210 = 14LL;
int64_t x215 = 4592135LL;
volatile int32_t t52 = 5178;
volatile uint16_t x223 = 1U;
uint32_t x224 = UINT32_MAX;
volatile int32_t t53 = -1;
int32_t x228 = INT32_MIN;
int32_t t54 = 0;
volatile uint32_t x236 = 3055U;
int64_t x246 = -136960596LL;
volatile int32_t t59 = -3854;
volatile int16_t x255 = -1;
int32_t t61 = 421307;
uint64_t x260 = 8612606819LLU;
static int64_t x262 = 61807588LL;
static uint32_t x265 = 2U;
int32_t t65 = 246;
int32_t x275 = INT32_MIN;
static volatile int8_t x277 = 8;
static volatile uint64_t x280 = 153737370972969825LLU;
int16_t x281 = INT16_MAX;
int8_t x282 = INT8_MAX;
static int16_t x288 = INT16_MIN;
uint32_t x289 = 45698495U;
volatile int64_t x299 = 6922765409109815LL;
int32_t t72 = 946753;
int32_t t75 = 79037;
int16_t x316 = INT16_MIN;
int8_t x325 = INT8_MIN;
static int64_t x327 = INT64_MIN;
static uint16_t x336 = 4182U;
volatile int8_t x337 = -7;
volatile int32_t x345 = 4;
int16_t x346 = INT16_MIN;
uint32_t x351 = UINT32_MAX;
int32_t t85 = 8;
static volatile uint16_t x358 = 11U;
volatile uint16_t x369 = 2421U;
int32_t t88 = 8;
uint16_t x373 = UINT16_MAX;
volatile int16_t x376 = INT16_MIN;
volatile int16_t x383 = 0;
volatile int64_t x387 = -971LL;
int32_t t93 = -1083;
int64_t x394 = -1LL;
volatile int64_t x396 = INT64_MAX;
int8_t x403 = -38;
int64_t x413 = INT64_MAX;
volatile int32_t t98 = -2935;
static int32_t x426 = 1333332;
uint16_t x428 = 3099U;
volatile int32_t t100 = -350676;
static int16_t x432 = -2175;
static int32_t x438 = 25008;
int8_t x443 = 63;
uint8_t x446 = 2U;
volatile int32_t t104 = 1479879;
int16_t x451 = INT16_MIN;
int64_t x454 = 9284580121LL;
int8_t x457 = -1;
static int64_t x461 = INT64_MIN;
volatile int16_t x473 = -2305;
int8_t x474 = -25;
static uint32_t x475 = UINT32_MAX;
volatile int32_t t111 = -42;
volatile uint32_t x478 = 5079768U;
uint8_t x479 = 35U;
uint8_t x484 = UINT8_MAX;
int32_t t113 = -9717454;
uint64_t x486 = UINT64_MAX;
static int32_t x497 = INT32_MAX;
uint8_t x498 = 2U;
uint64_t x501 = UINT64_MAX;
volatile int32_t x502 = INT32_MIN;
static int16_t x503 = -1;
volatile int16_t x506 = INT16_MIN;
static uint32_t x511 = UINT32_MAX;
uint64_t x519 = UINT64_MAX;
int64_t x522 = -5392719951886LL;
uint32_t x524 = 13165978U;
static int64_t x528 = -1LL;
volatile int32_t t124 = 4371224;
int32_t x538 = -1;
int32_t t127 = 94429212;
static volatile int32_t t129 = 105;
static volatile int32_t t131 = 266414656;
static uint32_t x568 = UINT32_MAX;
volatile int64_t x588 = 3550526059LL;
static int32_t t134 = -1021385;
static int32_t x599 = 58440953;
int32_t x600 = INT32_MAX;
static volatile uint32_t x606 = 573U;
static int8_t x608 = INT8_MIN;
static uint8_t x613 = UINT8_MAX;
int32_t x618 = -1;
volatile int32_t t140 = -1;
uint64_t x625 = 162598726LLU;
static volatile int16_t x626 = INT16_MAX;
static volatile int8_t x631 = -11;
static int8_t x638 = -4;
uint32_t x640 = 3135U;
volatile int64_t x641 = INT64_MAX;
int16_t x643 = INT16_MAX;
uint32_t x644 = 17463691U;
int16_t x645 = -1;
uint64_t x655 = UINT64_MAX;
int64_t x658 = -8LL;
volatile int32_t t150 = -861;
int32_t x661 = 203781533;
uint32_t x663 = 41U;
int32_t x681 = 63733063;
int32_t t157 = 99;
uint8_t x701 = UINT8_MAX;
static uint8_t x702 = 28U;
uint64_t x704 = UINT64_MAX;
static int32_t t161 = 1019053;
int32_t x708 = INT32_MAX;
static int64_t x715 = -222772935090678LL;
int32_t t165 = 26286;
static int8_t x734 = -20;
int16_t x738 = INT16_MAX;
int16_t x741 = INT16_MIN;
static int8_t x747 = INT8_MIN;
int8_t x753 = INT8_MIN;
int64_t x776 = INT64_MIN;
volatile int32_t t177 = -15335;
int16_t x781 = INT16_MIN;
int32_t t179 = 14808685;
int32_t x792 = INT32_MIN;
volatile int8_t x799 = 0;
int64_t x800 = -1LL;
uint32_t x803 = 1365011834U;
int16_t x809 = -1;
uint8_t x810 = 20U;
int64_t x815 = -23335057729117LL;
int16_t x823 = INT16_MIN;
static volatile int16_t x830 = INT16_MIN;
int8_t x833 = INT8_MIN;
int32_t x840 = 1;
int32_t t190 = -22;
uint64_t x844 = 1893468142507140LLU;
volatile int32_t x845 = INT32_MIN;
int64_t x856 = INT64_MAX;
static int64_t x858 = 0LL;
volatile uint8_t x861 = 3U;
int16_t x862 = INT16_MIN;
uint64_t x870 = UINT64_MAX;
static int16_t x873 = -1;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int64_t x2 = 4294281364637585LL;
	int8_t x3 = -1;
	volatile int32_t t0 = 2445;

    t0 = (x1<=(x2-(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x8 = -1;
	static volatile int32_t t1 = 407351264;

    t1 = (x5<=(x6-(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint64_t x10 = 6157950249553277LLU;
	int32_t x11 = INT32_MIN;
	uint64_t x12 = 7LLU;
	volatile int32_t t2 = -3058759;

    t2 = (x9<=(x10-(x11!=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 1U;
	uint64_t x14 = 29105028229LLU;
	static int32_t x15 = -98792;
	volatile uint8_t x16 = 5U;

    t3 = (x13<=(x14-(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 52206914LLU;
	static int32_t x18 = INT32_MAX;
	static int32_t x19 = 0;
	int32_t x20 = INT32_MIN;

    t4 = (x17<=(x18-(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 49U;
	uint16_t x22 = 14963U;
	int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MAX;

    t5 = (x21<=(x22-(x23!=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -1LL;
	volatile int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = 445827313;

    t6 = (x25<=(x26-(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = -1;
	uint32_t x31 = 31U;
	int8_t x32 = -8;
	volatile int32_t t7 = -92;

    t7 = (x29<=(x30-(x31!=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -162317990;
	uint64_t x38 = 22LLU;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = 1044837119969284LLU;

    t8 = (x37<=(x38-(x39!=x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = -1LL;
	volatile uint32_t x42 = 437764468U;
	volatile uint16_t x44 = UINT16_MAX;

    t9 = (x41<=(x42-(x43!=x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	volatile uint8_t x46 = 13U;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 3221U;
	int32_t t10 = 41957;

    t10 = (x45<=(x46-(x47!=x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = 114U;
	static uint32_t x56 = 3U;
	int32_t t11 = -60098;

    t11 = (x53<=(x54-(x55!=x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MIN;
	static volatile uint8_t x58 = UINT8_MAX;
	volatile int32_t x59 = -1;
	volatile int32_t t12 = 230839;

    t12 = (x57<=(x58-(x59!=x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -2931;
	uint8_t x64 = 112U;

    t13 = (x61<=(x62-(x63!=x64)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x66 = INT8_MIN;
	static int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = 48U;
	volatile int32_t t14 = -1;

    t14 = (x65<=(x66-(x67!=x68)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x70 = 2;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;

    t15 = (x69<=(x70-(x71!=x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x75 = 201U;
	volatile int32_t t16 = 45207;

    t16 = (x73<=(x74-(x75!=x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x77 = 0U;
	uint32_t x78 = 1000617U;
	int32_t x79 = -1;
	uint64_t x80 = 24415LLU;
	int32_t t17 = 419;

    t17 = (x77<=(x78-(x79!=x80)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x82 = 35LL;
	static uint16_t x84 = 1U;
	int32_t t18 = 2;

    t18 = (x81<=(x82-(x83!=x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 28981U;
	static int64_t x86 = -1LL;
	int8_t x87 = 0;
	volatile int32_t t19 = -1727;

    t19 = (x85<=(x86-(x87!=x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = -37;
	static int32_t x90 = INT32_MAX;
	int16_t x91 = -1;

    t20 = (x89<=(x90-(x91!=x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = 3684U;
	static uint64_t x94 = 4230099417531736730LLU;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = -1;
	volatile int32_t t21 = 1;

    t21 = (x93<=(x94-(x95!=x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MIN;
	volatile int8_t x98 = INT8_MAX;
	uint8_t x99 = 14U;
	int64_t x100 = 47166240727154007LL;
	int32_t t22 = 830;

    t22 = (x97<=(x98-(x99!=x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x101 = 485LLU;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -1;
	static uint32_t x104 = 8174U;
	volatile int32_t t23 = -151490947;

    t23 = (x101<=(x102-(x103!=x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 43965350U;
	static int64_t x106 = INT64_MAX;
	uint16_t x107 = 0U;
	int32_t x108 = INT32_MIN;
	int32_t t24 = -85460787;

    t24 = (x105<=(x106-(x107!=x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x110 = INT16_MAX;
	static int16_t x111 = -1;
	volatile int8_t x112 = 8;
	volatile int32_t t25 = 57;

    t25 = (x109<=(x110-(x111!=x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = INT64_MIN;
	static int64_t x114 = 180925018456LL;
	volatile uint64_t x116 = UINT64_MAX;
	int32_t t26 = 522265791;

    t26 = (x113<=(x114-(x115!=x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = 14U;
	static uint32_t x118 = 242366091U;
	int64_t x119 = -1LL;
	volatile int16_t x120 = -22;
	int32_t t27 = -675629;

    t27 = (x117<=(x118-(x119!=x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x121 = -2033;

    t28 = (x121<=(x122-(x123!=x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x125 = INT32_MAX;
	volatile uint32_t x126 = UINT32_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t29 = 2962707;

    t29 = (x125<=(x126-(x127!=x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 466006U;
	int8_t x131 = -46;
	int8_t x132 = -2;
	volatile int32_t t30 = 231781;

    t30 = (x129<=(x130-(x131!=x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x133 = 520U;
	uint64_t x134 = 6426401280LLU;
	int64_t x135 = INT64_MAX;
	int32_t x136 = -1;

    t31 = (x133<=(x134-(x135!=x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x137 = 1U;
	uint8_t x138 = 2U;
	volatile int32_t t32 = 426703845;

    t32 = (x137<=(x138-(x139!=x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = 195782LLU;
	int16_t x142 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t33 = 100;

    t33 = (x141<=(x142-(x143!=x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x145 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	volatile int32_t t34 = -40029;

    t34 = (x145<=(x146-(x147!=x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = -1;
	int32_t x151 = -1;
	volatile int32_t t35 = -34;

    t35 = (x149<=(x150-(x151!=x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x153 = 1;
	static int16_t x155 = INT16_MAX;
	int8_t x156 = 50;

    t36 = (x153<=(x154-(x155!=x156)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = 9U;
	volatile int8_t x159 = INT8_MAX;
	static int64_t x160 = -2441391902LL;

    t37 = (x157<=(x158-(x159!=x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = 56;
	uint8_t x162 = 5U;
	volatile int8_t x163 = INT8_MIN;
	volatile int32_t t38 = 17;

    t38 = (x161<=(x162-(x163!=x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x165 = 6816822U;
	volatile int8_t x166 = -1;
	uint16_t x167 = 6552U;
	int32_t t39 = 6;

    t39 = (x165<=(x166-(x167!=x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x169 = 870;
	static int32_t x170 = INT32_MAX;
	int32_t x171 = 107840;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t40 = -12056047;

    t40 = (x169<=(x170-(x171!=x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 1494469535086LLU;
	uint32_t x174 = 11192109U;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;

    t41 = (x173<=(x174-(x175!=x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x177 = -1;
	static int8_t x179 = INT8_MIN;
	static int32_t t42 = -1;

    t42 = (x177<=(x178-(x179!=x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x182 = 6;
	int16_t x183 = -24;
	static int8_t x184 = INT8_MIN;
	int32_t t43 = -5879;

    t43 = (x181<=(x182-(x183!=x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = 976;
	volatile uint8_t x186 = UINT8_MAX;
	int32_t x187 = -1108;

    t44 = (x185<=(x186-(x187!=x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x189 = 492749447230138792LL;
	uint64_t x190 = 25681LLU;
	uint8_t x191 = 6U;
	static volatile int64_t x192 = INT64_MIN;
	volatile int32_t t45 = 21;

    t45 = (x189<=(x190-(x191!=x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x195 = 1U;
	static int64_t x196 = INT64_MIN;

    t46 = (x193<=(x194-(x195!=x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MIN;
	static int64_t x199 = 365311599LL;
	uint64_t x200 = UINT64_MAX;
	static volatile int32_t t47 = 12841;

    t47 = (x197<=(x198-(x199!=x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x202 = 152876011772331971LLU;
	static int32_t x203 = INT32_MIN;
	static uint32_t x204 = 3895484U;
	static volatile int32_t t48 = -1;

    t48 = (x201<=(x202-(x203!=x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 89U;
	static uint8_t x208 = 36U;
	int32_t t49 = -1050;

    t49 = (x205<=(x206-(x207!=x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x209 = -1;
	int32_t x211 = -1;
	static volatile int64_t x212 = INT64_MIN;
	int32_t t50 = 3373551;

    t50 = (x209<=(x210-(x211!=x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = 18U;
	int8_t x214 = INT8_MIN;
	volatile int32_t x216 = -1;
	int32_t t51 = -1023175092;

    t51 = (x213<=(x214-(x215!=x216)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x217 = UINT16_MAX;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	int64_t x220 = 515389452140724393LL;

    t52 = (x217<=(x218-(x219!=x220)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MAX;
	uint64_t x222 = UINT64_MAX;

    t53 = (x221<=(x222-(x223!=x224)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x225 = 38266LLU;
	int8_t x226 = -8;
	int8_t x227 = INT8_MIN;

    t54 = (x225<=(x226-(x227!=x228)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x229 = 835806735U;
	int8_t x230 = 13;
	static volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t55 = 861;

    t55 = (x229<=(x230-(x231!=x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = 917079244U;
	static int32_t x234 = INT32_MAX;
	static int32_t x235 = -55521849;
	volatile int32_t t56 = -37872199;

    t56 = (x233<=(x234-(x235!=x236)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x237 = -1;
	int16_t x238 = -1;
	int32_t x239 = -1;
	int8_t x240 = INT8_MAX;
	static int32_t t57 = -2;

    t57 = (x237<=(x238-(x239!=x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x241 = UINT8_MAX;
	int64_t x242 = 29LL;
	int32_t x243 = -1197;
	uint32_t x244 = UINT32_MAX;
	int32_t t58 = -320382781;

    t58 = (x241<=(x242-(x243!=x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = UINT32_MAX;
	volatile int16_t x247 = INT16_MIN;
	static int64_t x248 = -2084828195320LL;

    t59 = (x245<=(x246-(x247!=x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x249 = 2397302LLU;
	int64_t x250 = 1687176600LL;
	int64_t x251 = -12548648214LL;
	uint64_t x252 = 645456LLU;
	static int32_t t60 = 17;

    t60 = (x249<=(x250-(x251!=x252)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 129U;
	static int16_t x254 = -1;
	uint32_t x256 = UINT32_MAX;

    t61 = (x253<=(x254-(x255!=x256)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x257 = UINT32_MAX;
	int64_t x258 = -14LL;
	static int32_t x259 = INT32_MIN;
	int32_t t62 = -350;

    t62 = (x257<=(x258-(x259!=x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x261 = -368;
	int64_t x263 = 31149743269LL;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t63 = 15;

    t63 = (x261<=(x262-(x263!=x264)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x266 = 55U;
	int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MAX;
	int32_t t64 = 16931;

    t64 = (x265<=(x266-(x267!=x268)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x269 = -1464541347521696896LL;
	uint8_t x270 = 3U;
	int16_t x271 = -7;
	uint16_t x272 = 0U;

    t65 = (x269<=(x270-(x271!=x272)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = -1LL;
	int64_t x274 = 91LL;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t66 = -5933;

    t66 = (x273<=(x274-(x275!=x276)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x278 = 3336;
	static int8_t x279 = 5;
	int32_t t67 = -191;

    t67 = (x277<=(x278-(x279!=x280)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x283 = INT32_MAX;
	static uint8_t x284 = UINT8_MAX;
	int32_t t68 = -1301;

    t68 = (x281<=(x282-(x283!=x284)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = INT32_MIN;
	volatile int8_t x286 = INT8_MIN;
	static int32_t x287 = INT32_MIN;
	volatile int32_t t69 = 514566852;

    t69 = (x285<=(x286-(x287!=x288)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x290 = INT8_MIN;
	uint16_t x291 = 1000U;
	int64_t x292 = -6LL;
	static int32_t t70 = -22139;

    t70 = (x289<=(x290-(x291!=x292)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = UINT16_MAX;
	volatile int32_t x294 = -1;
	static int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	volatile int32_t t71 = -6;

    t71 = (x293<=(x294-(x295!=x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x297 = 14630655;
	int32_t x298 = -1;
	int64_t x300 = -1LL;

    t72 = (x297<=(x298-(x299!=x300)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = INT16_MIN;
	static volatile int8_t x302 = 0;
	volatile uint16_t x303 = 9328U;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t73 = -464018;

    t73 = (x301<=(x302-(x303!=x304)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = -1;
	int16_t x306 = 37;
	static int8_t x307 = INT8_MIN;
	volatile int64_t x308 = INT64_MAX;
	volatile int32_t t74 = -23807900;

    t74 = (x305<=(x306-(x307!=x308)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MIN;
	static uint8_t x310 = 2U;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = 818289564LLU;

    t75 = (x309<=(x310-(x311!=x312)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x313 = -1;
	uint32_t x314 = 842630069U;
	static int16_t x315 = INT16_MAX;
	static int32_t t76 = 62250;

    t76 = (x313<=(x314-(x315!=x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x317 = 125U;
	int16_t x318 = INT16_MAX;
	int32_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	int32_t t77 = -5;

    t77 = (x317<=(x318-(x319!=x320)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x326 = -1LL;
	static int32_t x328 = INT32_MAX;
	int32_t t78 = -858;

    t78 = (x325<=(x326-(x327!=x328)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = -1;
	static uint32_t x330 = 10504329U;
	volatile int16_t x331 = -1;
	int64_t x332 = 3153588LL;
	static int32_t t79 = 1;

    t79 = (x329<=(x330-(x331!=x332)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = -1LL;
	int32_t x334 = -2;
	int16_t x335 = -1;
	volatile int32_t t80 = -132;

    t80 = (x333<=(x334-(x335!=x336)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x338 = UINT8_MAX;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = -1;
	int32_t t81 = 120468849;

    t81 = (x337<=(x338-(x339!=x340)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x341 = 6U;
	int8_t x342 = INT8_MIN;
	volatile int64_t x343 = -1LL;
	static int8_t x344 = INT8_MIN;
	int32_t t82 = -11;

    t82 = (x341<=(x342-(x343!=x344)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x347 = 1U;
	int32_t x348 = -1326135;
	int32_t t83 = 1419;

    t83 = (x345<=(x346-(x347!=x348)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x349 = INT16_MAX;
	uint8_t x350 = 14U;
	volatile uint64_t x352 = 932441613LLU;
	int32_t t84 = 0;

    t84 = (x349<=(x350-(x351!=x352)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MAX;
	int64_t x354 = -6084551237LL;
	int16_t x355 = 4061;
	static volatile uint32_t x356 = UINT32_MAX;

    t85 = (x353<=(x354-(x355!=x356)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x357 = 969U;
	uint64_t x359 = 12530LLU;
	volatile uint32_t x360 = 0U;
	int32_t t86 = -1;

    t86 = (x357<=(x358-(x359!=x360)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x361 = -1;
	static volatile uint16_t x362 = 928U;
	uint8_t x363 = 10U;
	volatile uint64_t x364 = 6572LLU;
	volatile int32_t t87 = -2356260;

    t87 = (x361<=(x362-(x363!=x364)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	static volatile int32_t x372 = INT32_MAX;

    t88 = (x369<=(x370-(x371!=x372)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x374 = INT16_MIN;
	int16_t x375 = -16;
	int32_t t89 = -2379;

    t89 = (x373<=(x374-(x375!=x376)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	int8_t x379 = 55;
	int16_t x380 = -3;
	static int32_t t90 = -195322;

    t90 = (x377<=(x378-(x379!=x380)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x381 = -269;
	int32_t x382 = 348400;
	volatile int32_t x384 = 225500;
	int32_t t91 = 7;

    t91 = (x381<=(x382-(x383!=x384)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = -17;
	uint32_t x386 = UINT32_MAX;
	static int64_t x388 = INT64_MIN;
	int32_t t92 = 56262;

    t92 = (x385<=(x386-(x387!=x388)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x389 = INT8_MIN;
	uint8_t x390 = 14U;
	volatile int64_t x391 = INT64_MIN;
	uint8_t x392 = 1U;

    t93 = (x389<=(x390-(x391!=x392)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = -400;
	volatile uint32_t x395 = UINT32_MAX;
	int32_t t94 = 2248925;

    t94 = (x393<=(x394-(x395!=x396)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 304286106806051990LLU;
	uint32_t x404 = 365839742U;
	volatile int32_t t95 = 14;

    t95 = (x401<=(x402-(x403!=x404)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x405 = UINT8_MAX;
	int32_t x406 = 24;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t96 = -229;

    t96 = (x405<=(x406-(x407!=x408)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x409 = 42599127490LLU;
	static int16_t x410 = -210;
	int32_t x411 = -2009160;
	uint16_t x412 = 2786U;
	static int32_t t97 = 51;

    t97 = (x409<=(x410-(x411!=x412)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x414 = -9868;
	volatile int8_t x415 = -5;
	volatile int16_t x416 = INT16_MIN;

    t98 = (x413<=(x414-(x415!=x416)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x421 = 258594396U;
	static int16_t x422 = INT16_MIN;
	int32_t x423 = -1;
	static int8_t x424 = 5;
	static int32_t t99 = -59567410;

    t99 = (x421<=(x422-(x423!=x424)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x425 = INT8_MIN;
	volatile int32_t x427 = -1;

    t100 = (x425<=(x426-(x427!=x428)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x429 = 5U;
	static uint8_t x430 = UINT8_MAX;
	volatile uint8_t x431 = 21U;
	int32_t t101 = 0;

    t101 = (x429<=(x430-(x431!=x432)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x437 = 1;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = UINT32_MAX;
	static volatile int32_t t102 = 160;

    t102 = (x437<=(x438-(x439!=x440)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x441 = INT16_MIN;
	int64_t x442 = 0LL;
	int16_t x444 = INT16_MIN;
	volatile int32_t t103 = -90315;

    t103 = (x441<=(x442-(x443!=x444)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = -1;
	int64_t x447 = INT64_MIN;
	uint32_t x448 = UINT32_MAX;

    t104 = (x445<=(x446-(x447!=x448)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x449 = 1259088379U;
	int16_t x450 = -1;
	volatile int16_t x452 = -1;
	volatile int32_t t105 = 3447;

    t105 = (x449<=(x450-(x451!=x452)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x453 = -1;
	int8_t x455 = 5;
	int16_t x456 = -1;
	static int32_t t106 = 6085;

    t106 = (x453<=(x454-(x455!=x456)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x458 = INT8_MIN;
	volatile uint32_t x459 = 6U;
	static int32_t x460 = 145163525;
	static int32_t t107 = -509168;

    t107 = (x457<=(x458-(x459!=x460)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x462 = UINT64_MAX;
	int8_t x463 = -1;
	volatile uint16_t x464 = 5U;
	int32_t t108 = 792122956;

    t108 = (x461<=(x462-(x463!=x464)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x465 = INT8_MAX;
	int8_t x466 = 0;
	int64_t x467 = -1LL;
	int8_t x468 = INT8_MIN;
	int32_t t109 = -3846286;

    t109 = (x465<=(x466-(x467!=x468)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x469 = UINT64_MAX;
	int16_t x470 = INT16_MAX;
	static int64_t x471 = INT64_MAX;
	volatile int16_t x472 = -1;
	static int32_t t110 = -1093516;

    t110 = (x469<=(x470-(x471!=x472)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x476 = 0U;

    t111 = (x473<=(x474-(x475!=x476)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = INT64_MAX;
	int16_t x480 = INT16_MIN;
	int32_t t112 = 1423766;

    t112 = (x477<=(x478-(x479!=x480)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x481 = INT64_MAX;
	int16_t x482 = INT16_MAX;
	int64_t x483 = INT64_MAX;

    t113 = (x481<=(x482-(x483!=x484)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x485 = -32;
	static uint8_t x487 = 4U;
	int32_t x488 = INT32_MIN;
	int32_t t114 = -21;

    t114 = (x485<=(x486-(x487!=x488)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x489 = 1LL;
	int32_t x490 = INT32_MAX;
	int8_t x491 = -1;
	static int32_t x492 = INT32_MAX;
	volatile int32_t t115 = -798;

    t115 = (x489<=(x490-(x491!=x492)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x499 = 20U;
	int32_t x500 = INT32_MIN;
	volatile int32_t t116 = -343602306;

    t116 = (x497<=(x498-(x499!=x500)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x504 = -1;
	volatile int32_t t117 = 111392;

    t117 = (x501<=(x502-(x503!=x504)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x505 = 11U;
	volatile int16_t x507 = -1;
	uint16_t x508 = 10U;
	volatile int32_t t118 = 207265;

    t118 = (x505<=(x506-(x507!=x508)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x509 = UINT64_MAX;
	volatile uint8_t x510 = 4U;
	static int16_t x512 = -3;
	volatile int32_t t119 = -6176;

    t119 = (x509<=(x510-(x511!=x512)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x513 = 0;
	static int8_t x514 = INT8_MIN;
	uint64_t x515 = 10LLU;
	int64_t x516 = INT64_MIN;
	volatile int32_t t120 = -44473;

    t120 = (x513<=(x514-(x515!=x516)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x517 = 1U;
	static int8_t x518 = -28;
	int16_t x520 = -13362;
	int32_t t121 = 663885;

    t121 = (x517<=(x518-(x519!=x520)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x521 = -148;
	uint16_t x523 = UINT16_MAX;
	volatile int32_t t122 = 65113;

    t122 = (x521<=(x522-(x523!=x524)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x525 = -2654;
	uint64_t x526 = 0LLU;
	static uint64_t x527 = 39LLU;
	volatile int32_t t123 = -1;

    t123 = (x525<=(x526-(x527!=x528)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x529 = 1787978U;
	int8_t x530 = -1;
	static uint8_t x531 = 6U;
	static uint64_t x532 = UINT64_MAX;

    t124 = (x529<=(x530-(x531!=x532)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x533 = -10;
	uint32_t x534 = UINT32_MAX;
	uint8_t x535 = 2U;
	volatile uint64_t x536 = UINT64_MAX;
	volatile int32_t t125 = 18710492;

    t125 = (x533<=(x534-(x535!=x536)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x537 = 1U;
	volatile int8_t x539 = INT8_MIN;
	uint64_t x540 = 47LLU;
	static volatile int32_t t126 = 306315872;

    t126 = (x537<=(x538-(x539!=x540)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x545 = -1;
	static volatile int64_t x546 = INT64_MAX;
	int16_t x547 = INT16_MIN;
	volatile uint8_t x548 = UINT8_MAX;

    t127 = (x545<=(x546-(x547!=x548)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x549 = 44893687U;
	volatile uint8_t x550 = 0U;
	int64_t x551 = 665597297512830394LL;
	volatile int8_t x552 = -1;
	int32_t t128 = 245479;

    t128 = (x549<=(x550-(x551!=x552)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x553 = 61171137;
	int64_t x554 = -6160925LL;
	int8_t x555 = INT8_MIN;
	int8_t x556 = 1;

    t129 = (x553<=(x554-(x555!=x556)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x557 = INT64_MIN;
	int16_t x558 = -1;
	int16_t x559 = INT16_MAX;
	int32_t x560 = -844534;
	volatile int32_t t130 = -248195019;

    t130 = (x557<=(x558-(x559!=x560)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x561 = INT32_MIN;
	int8_t x562 = 1;
	int64_t x563 = -1LL;
	static uint64_t x564 = UINT64_MAX;

    t131 = (x561<=(x562-(x563!=x564)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = INT16_MIN;
	int64_t x567 = INT64_MAX;
	int32_t t132 = -3;

    t132 = (x565<=(x566-(x567!=x568)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x573 = INT8_MIN;
	uint32_t x574 = UINT32_MAX;
	volatile int32_t x575 = -1;
	static int64_t x576 = 206LL;
	int32_t t133 = -3;

    t133 = (x573<=(x574-(x575!=x576)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x585 = 930533551U;
	int8_t x586 = INT8_MAX;
	volatile uint16_t x587 = UINT16_MAX;

    t134 = (x585<=(x586-(x587!=x588)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x593 = INT32_MIN;
	static int32_t x594 = INT32_MIN;
	int64_t x595 = -1LL;
	int16_t x596 = -1;
	static int32_t t135 = 333134115;

    t135 = (x593<=(x594-(x595!=x596)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x597 = UINT8_MAX;
	int8_t x598 = INT8_MAX;
	volatile int32_t t136 = 88;

    t136 = (x597<=(x598-(x599!=x600)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x601 = INT8_MIN;
	volatile int32_t x602 = INT32_MAX;
	static uint16_t x603 = 92U;
	volatile int32_t x604 = INT32_MIN;
	int32_t t137 = 438785;

    t137 = (x601<=(x602-(x603!=x604)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x605 = INT64_MIN;
	uint8_t x607 = 94U;
	int32_t t138 = 7;

    t138 = (x605<=(x606-(x607!=x608)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x614 = 755500;
	volatile int16_t x615 = -1;
	static int64_t x616 = -79LL;
	static volatile int32_t t139 = -49335477;

    t139 = (x613<=(x614-(x615!=x616)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x617 = 1630324939U;
	uint8_t x619 = UINT8_MAX;
	uint16_t x620 = 26U;

    t140 = (x617<=(x618-(x619!=x620)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x621 = 12328LLU;
	static volatile uint16_t x622 = UINT16_MAX;
	volatile int32_t x623 = 5887;
	static volatile int16_t x624 = INT16_MIN;
	volatile int32_t t141 = -7;

    t141 = (x621<=(x622-(x623!=x624)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x627 = 100907LLU;
	int64_t x628 = INT64_MAX;
	int32_t t142 = 119482;

    t142 = (x625<=(x626-(x627!=x628)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x629 = INT32_MAX;
	static int16_t x630 = 1027;
	static int8_t x632 = INT8_MAX;
	volatile int32_t t143 = 67;

    t143 = (x629<=(x630-(x631!=x632)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x633 = 77851996;
	int32_t x634 = -1457752;
	static volatile int8_t x635 = INT8_MIN;
	volatile int32_t x636 = -1;
	volatile int32_t t144 = -157950;

    t144 = (x633<=(x634-(x635!=x636)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x637 = INT32_MIN;
	int16_t x639 = INT16_MIN;
	static int32_t t145 = -1;

    t145 = (x637<=(x638-(x639!=x640)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x642 = 15U;
	int32_t t146 = -60;

    t146 = (x641<=(x642-(x643!=x644)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x646 = -235;
	uint16_t x647 = UINT16_MAX;
	static int64_t x648 = -1LL;
	int32_t t147 = -166491999;

    t147 = (x645<=(x646-(x647!=x648)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x649 = INT64_MAX;
	int64_t x650 = 57201934334LL;
	int8_t x651 = INT8_MIN;
	volatile int64_t x652 = -1LL;
	volatile int32_t t148 = -4017;

    t148 = (x649<=(x650-(x651!=x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x653 = UINT8_MAX;
	int8_t x654 = INT8_MAX;
	uint64_t x656 = 72542LLU;
	static volatile int32_t t149 = 193120907;

    t149 = (x653<=(x654-(x655!=x656)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x657 = 2;
	static int32_t x659 = INT32_MIN;
	static volatile int8_t x660 = -1;

    t150 = (x657<=(x658-(x659!=x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x662 = 11U;
	volatile int8_t x664 = INT8_MIN;
	static volatile int32_t t151 = 41068407;

    t151 = (x661<=(x662-(x663!=x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x665 = 0U;
	uint32_t x666 = UINT32_MAX;
	volatile int32_t x667 = INT32_MIN;
	uint32_t x668 = UINT32_MAX;
	int32_t t152 = -366528130;

    t152 = (x665<=(x666-(x667!=x668)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x669 = 194009191LL;
	static uint8_t x670 = UINT8_MAX;
	uint8_t x671 = UINT8_MAX;
	int16_t x672 = INT16_MIN;
	int32_t t153 = -28;

    t153 = (x669<=(x670-(x671!=x672)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x673 = -1;
	int8_t x674 = -7;
	int16_t x675 = -1;
	int64_t x676 = INT64_MIN;
	volatile int32_t t154 = 312;

    t154 = (x673<=(x674-(x675!=x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x677 = UINT32_MAX;
	int64_t x678 = INT64_MAX;
	int32_t x679 = -172;
	uint32_t x680 = 0U;
	volatile int32_t t155 = 12844456;

    t155 = (x677<=(x678-(x679!=x680)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x682 = UINT8_MAX;
	uint64_t x683 = 7133531448LLU;
	int64_t x684 = INT64_MIN;
	volatile int32_t t156 = -2263;

    t156 = (x681<=(x682-(x683!=x684)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x685 = 75U;
	int64_t x686 = -1666859LL;
	int8_t x687 = 10;
	static int8_t x688 = 1;

    t157 = (x685<=(x686-(x687!=x688)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x689 = 1409;
	int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MIN;
	int16_t x692 = -1;
	int32_t t158 = -94382;

    t158 = (x689<=(x690-(x691!=x692)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x693 = INT16_MIN;
	int16_t x694 = INT16_MIN;
	int16_t x695 = INT16_MAX;
	uint16_t x696 = 231U;
	volatile int32_t t159 = 235;

    t159 = (x693<=(x694-(x695!=x696)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x697 = 266LLU;
	volatile int64_t x698 = -1LL;
	volatile int16_t x699 = -1;
	int32_t x700 = INT32_MIN;
	volatile int32_t t160 = -986778692;

    t160 = (x697<=(x698-(x699!=x700)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x703 = INT16_MIN;

    t161 = (x701<=(x702-(x703!=x704)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x705 = 95654096953033906LL;
	static volatile uint16_t x706 = 842U;
	int32_t x707 = -1;
	static int32_t t162 = -26875;

    t162 = (x705<=(x706-(x707!=x708)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x709 = 7084922LL;
	static int8_t x710 = -1;
	volatile int16_t x711 = -2;
	int64_t x712 = -1LL;
	int32_t t163 = 564297162;

    t163 = (x709<=(x710-(x711!=x712)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x713 = 43723214U;
	int16_t x714 = INT16_MIN;
	int64_t x716 = INT64_MAX;
	volatile int32_t t164 = 7;

    t164 = (x713<=(x714-(x715!=x716)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x721 = UINT32_MAX;
	int16_t x722 = INT16_MIN;
	volatile uint64_t x723 = UINT64_MAX;
	uint32_t x724 = 6U;

    t165 = (x721<=(x722-(x723!=x724)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x729 = 1;
	uint16_t x730 = UINT16_MAX;
	volatile uint64_t x731 = 559133721LLU;
	int32_t x732 = INT32_MIN;
	volatile int32_t t166 = -198;

    t166 = (x729<=(x730-(x731!=x732)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x733 = INT32_MIN;
	static uint16_t x735 = 921U;
	volatile int64_t x736 = -1LL;
	int32_t t167 = 8;

    t167 = (x733<=(x734-(x735!=x736)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x737 = 580U;
	uint8_t x739 = 35U;
	int32_t x740 = INT32_MAX;
	volatile int32_t t168 = 572611633;

    t168 = (x737<=(x738-(x739!=x740)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x742 = 1;
	static int32_t x743 = INT32_MAX;
	static volatile int64_t x744 = INT64_MIN;
	int32_t t169 = 17758;

    t169 = (x741<=(x742-(x743!=x744)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x745 = -1LL;
	static int32_t x746 = 84886;
	int16_t x748 = INT16_MIN;
	int32_t t170 = 90;

    t170 = (x745<=(x746-(x747!=x748)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x749 = 17U;
	uint16_t x750 = 54U;
	int16_t x751 = INT16_MIN;
	uint32_t x752 = 1050769541U;
	volatile int32_t t171 = 675948711;

    t171 = (x749<=(x750-(x751!=x752)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x754 = INT8_MIN;
	uint64_t x755 = UINT64_MAX;
	static volatile int8_t x756 = -1;
	volatile int32_t t172 = 13;

    t172 = (x753<=(x754-(x755!=x756)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x757 = 123U;
	uint16_t x758 = UINT16_MAX;
	int16_t x759 = INT16_MIN;
	int16_t x760 = 13220;
	static int32_t t173 = 33076;

    t173 = (x757<=(x758-(x759!=x760)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x761 = 4975775925592LL;
	uint32_t x762 = UINT32_MAX;
	int64_t x763 = 786914350044457038LL;
	int64_t x764 = INT64_MIN;
	int32_t t174 = -162017;

    t174 = (x761<=(x762-(x763!=x764)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x765 = INT8_MAX;
	int8_t x766 = 11;
	int16_t x767 = INT16_MIN;
	volatile int8_t x768 = INT8_MIN;
	int32_t t175 = 85436;

    t175 = (x765<=(x766-(x767!=x768)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x769 = INT64_MIN;
	uint8_t x770 = UINT8_MAX;
	uint8_t x771 = 8U;
	volatile uint16_t x772 = UINT16_MAX;
	int32_t t176 = 7164;

    t176 = (x769<=(x770-(x771!=x772)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x773 = 285097267;
	volatile int8_t x774 = INT8_MIN;
	int32_t x775 = INT32_MAX;

    t177 = (x773<=(x774-(x775!=x776)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x777 = 48U;
	int32_t x778 = -1;
	int64_t x779 = -1LL;
	volatile int64_t x780 = INT64_MAX;
	volatile int32_t t178 = -1347665;

    t178 = (x777<=(x778-(x779!=x780)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x782 = INT8_MIN;
	volatile uint16_t x783 = UINT16_MAX;
	static uint64_t x784 = 2309908372115LLU;

    t179 = (x781<=(x782-(x783!=x784)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x789 = INT16_MIN;
	int8_t x790 = INT8_MIN;
	uint64_t x791 = 2076970689659759LLU;
	static volatile int32_t t180 = -2726;

    t180 = (x789<=(x790-(x791!=x792)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x797 = INT16_MIN;
	volatile int32_t x798 = 586385851;
	volatile int32_t t181 = -117268;

    t181 = (x797<=(x798-(x799!=x800)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x801 = 1U;
	int32_t x802 = -1;
	int32_t x804 = -1;
	volatile int32_t t182 = 4658;

    t182 = (x801<=(x802-(x803!=x804)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x805 = INT16_MAX;
	int32_t x806 = -213551562;
	static int64_t x807 = 55644343LL;
	static int16_t x808 = -1;
	int32_t t183 = -7;

    t183 = (x805<=(x806-(x807!=x808)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x811 = INT64_MAX;
	int16_t x812 = INT16_MAX;
	volatile int32_t t184 = -1982488;

    t184 = (x809<=(x810-(x811!=x812)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x813 = 5U;
	int8_t x814 = 24;
	static int32_t x816 = -800449;
	static int32_t t185 = 1101624;

    t185 = (x813<=(x814-(x815!=x816)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x818 = INT16_MIN;
	uint32_t x819 = 1428788U;
	static uint32_t x820 = 649U;
	static volatile int32_t t186 = 6208056;

    t186 = (x817<=(x818-(x819!=x820)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x821 = -232;
	uint8_t x822 = 5U;
	int64_t x824 = INT64_MIN;
	static volatile int32_t t187 = 9151514;

    t187 = (x821<=(x822-(x823!=x824)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x829 = UINT16_MAX;
	static uint8_t x831 = 73U;
	uint8_t x832 = UINT8_MAX;
	int32_t t188 = -1572495;

    t188 = (x829<=(x830-(x831!=x832)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x834 = UINT16_MAX;
	uint8_t x835 = 22U;
	uint64_t x836 = 8850756037690987739LLU;
	int32_t t189 = 22426;

    t189 = (x833<=(x834-(x835!=x836)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x837 = 473LLU;
	volatile uint32_t x838 = 39726112U;
	int64_t x839 = -1LL;

    t190 = (x837<=(x838-(x839!=x840)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x841 = -624LL;
	uint8_t x842 = UINT8_MAX;
	volatile uint32_t x843 = 15826U;
	static int32_t t191 = 1;

    t191 = (x841<=(x842-(x843!=x844)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x846 = 2;
	volatile int8_t x847 = -1;
	volatile int16_t x848 = INT16_MAX;
	int32_t t192 = 156624;

    t192 = (x845<=(x846-(x847!=x848)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x849 = -4517;
	uint8_t x850 = 0U;
	int16_t x851 = -1;
	volatile uint32_t x852 = UINT32_MAX;
	volatile int32_t t193 = 5294899;

    t193 = (x849<=(x850-(x851!=x852)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x853 = 17;
	int64_t x854 = -1LL;
	uint16_t x855 = 3U;
	volatile int32_t t194 = -469730;

    t194 = (x853<=(x854-(x855!=x856)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x857 = 5008917717LL;
	int32_t x859 = INT32_MAX;
	int8_t x860 = INT8_MIN;
	static volatile int32_t t195 = 6951600;

    t195 = (x857<=(x858-(x859!=x860)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x863 = 0;
	static int64_t x864 = INT64_MIN;
	static int32_t t196 = -1;

    t196 = (x861<=(x862-(x863!=x864)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x865 = INT64_MAX;
	volatile int8_t x866 = -1;
	volatile int32_t x867 = -28;
	static int64_t x868 = -61213589494550212LL;
	volatile int32_t t197 = 0;

    t197 = (x865<=(x866-(x867!=x868)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x869 = INT16_MIN;
	int8_t x871 = -1;
	int32_t x872 = -993;
	volatile int32_t t198 = 1;

    t198 = (x869<=(x870-(x871!=x872)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x874 = 13;
	uint32_t x875 = UINT32_MAX;
	volatile int32_t x876 = -1;
	volatile int32_t t199 = -15;

    t199 = (x873<=(x874-(x875!=x876)));

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

