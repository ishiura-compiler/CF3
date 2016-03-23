
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

static int8_t x18 = -1;
uint16_t x23 = UINT16_MAX;
static int32_t x25 = -1;
static int64_t x31 = INT64_MAX;
int16_t x39 = INT16_MIN;
static int16_t x40 = INT16_MIN;
uint64_t x41 = UINT64_MAX;
volatile int32_t t10 = -1266386;
volatile uint8_t x46 = 1U;
volatile int32_t t11 = 1154;
int64_t x50 = INT64_MIN;
uint32_t x54 = UINT32_MAX;
uint64_t x58 = 34693LLU;
int16_t x68 = INT16_MAX;
static volatile int32_t t19 = 30;
static int32_t x81 = INT32_MIN;
int8_t x82 = -12;
static uint16_t x84 = 3320U;
static int16_t x88 = -1;
volatile int8_t x93 = INT8_MAX;
uint64_t x94 = 109245456886417061LLU;
uint16_t x95 = 14U;
volatile int64_t x101 = -222621879840996LL;
static int16_t x102 = INT16_MIN;
int8_t x105 = INT8_MIN;
int32_t t27 = -17;
int32_t x114 = INT32_MIN;
int32_t t29 = -1717843;
int32_t t30 = 332828;
int8_t x133 = INT8_MAX;
int8_t x140 = INT8_MIN;
int64_t x144 = INT64_MIN;
static volatile int32_t t35 = 17256;
int32_t t36 = 2586972;
volatile int16_t x154 = -1;
int64_t x159 = INT64_MAX;
int8_t x166 = -1;
volatile int16_t x167 = INT16_MIN;
uint64_t x175 = UINT64_MAX;
int16_t x180 = INT16_MIN;
int32_t t47 = -624;
uint8_t x196 = 17U;
int32_t t48 = -3;
static int16_t x202 = -3;
uint32_t x207 = 85425U;
int32_t t51 = 25742;
int32_t t52 = 107;
volatile int32_t t53 = 298244813;
volatile int8_t x217 = INT8_MIN;
volatile uint8_t x220 = 3U;
int8_t x222 = INT8_MIN;
uint8_t x224 = 15U;
static int16_t x226 = INT16_MIN;
volatile int32_t t56 = 232832;
uint16_t x229 = 15U;
int16_t x243 = INT16_MIN;
uint32_t x277 = 5095U;
int16_t x280 = INT16_MIN;
static int32_t t69 = -1;
static int32_t t70 = 130397425;
int16_t x285 = -1;
int8_t x286 = INT8_MIN;
uint16_t x289 = 1U;
int32_t t72 = -22;
static uint16_t x295 = 6U;
int32_t x302 = INT32_MIN;
static int64_t x304 = INT64_MIN;
volatile int32_t t75 = -32;
static int64_t x308 = INT64_MIN;
int32_t t80 = 42;
uint16_t x325 = UINT16_MAX;
volatile int64_t x334 = 638273139LL;
int8_t x335 = -1;
int32_t x338 = INT32_MAX;
int8_t x345 = -1;
int8_t x346 = 5;
static int64_t x349 = INT64_MAX;
int32_t t87 = 1602378;
uint64_t x354 = UINT64_MAX;
volatile uint16_t x356 = UINT16_MAX;
volatile uint64_t x362 = UINT64_MAX;
int32_t x371 = -1006834066;
int64_t x372 = INT64_MIN;
volatile int32_t t93 = 9;
volatile int16_t x378 = 0;
int16_t x380 = INT16_MAX;
volatile uint8_t x384 = UINT8_MAX;
uint64_t x388 = UINT64_MAX;
volatile uint64_t x394 = 175749709856568769LLU;
int64_t x402 = -1LL;
int32_t t101 = 267;
int16_t x413 = 194;
volatile int64_t x416 = INT64_MIN;
static uint64_t x418 = 24652879605777LLU;
int32_t t107 = 1815211;
static int64_t x435 = 15573114664752LL;
static volatile uint8_t x439 = UINT8_MAX;
uint32_t x441 = 11U;
int8_t x447 = INT8_MAX;
uint64_t x450 = 119884LLU;
uint64_t x452 = 712953627915727880LLU;
volatile int32_t t112 = -1074;
volatile int32_t t113 = 8;
int32_t x461 = INT32_MIN;
int32_t t117 = -125332062;
static volatile int32_t t119 = -16938;
volatile int32_t t122 = 9244704;
uint32_t x493 = 33669U;
int64_t x494 = 13179180944506LL;
int32_t x498 = INT32_MAX;
static uint8_t x503 = UINT8_MAX;
uint64_t x508 = UINT64_MAX;
static uint32_t x515 = UINT32_MAX;
int32_t t128 = 1;
uint16_t x522 = 0U;
int32_t t130 = -59;
volatile int32_t t131 = -495573918;
uint64_t x533 = 91LLU;
int8_t x535 = INT8_MIN;
int32_t t134 = -3;
int32_t x541 = INT32_MAX;
static int16_t x550 = -98;
int32_t x552 = INT32_MAX;
int16_t x553 = -3;
int8_t x554 = INT8_MIN;
volatile int64_t x557 = 15791600371597520LL;
int64_t x562 = INT64_MAX;
static volatile int16_t x566 = -1;
int32_t x578 = INT32_MIN;
static int16_t x580 = INT16_MIN;
uint32_t x581 = UINT32_MAX;
volatile uint64_t x593 = 2LLU;
static uint32_t x596 = UINT32_MAX;
int16_t x606 = INT16_MIN;
static int8_t x619 = INT8_MIN;
uint32_t x620 = 23924829U;
volatile int32_t t157 = 31;
static volatile int64_t x637 = 77017285661696LL;
int64_t x639 = -381206798004828LL;
int8_t x646 = 0;
static uint16_t x650 = UINT16_MAX;
static volatile int32_t t162 = -4253677;
int16_t x655 = INT16_MAX;
int64_t x657 = 23016066409LL;
static volatile uint64_t x663 = 112695LLU;
static int32_t t165 = 93490877;
int32_t x666 = -1;
uint16_t x667 = 103U;
static uint32_t x670 = 114029220U;
volatile int64_t x675 = INT64_MAX;
volatile int8_t x676 = -1;
static volatile int16_t x679 = -14341;
uint32_t x686 = 124676805U;
volatile int32_t t171 = 1027410878;
uint32_t x691 = 547U;
static int32_t x694 = 149242391;
int64_t x696 = -1LL;
uint16_t x699 = 426U;
static int8_t x700 = INT8_MAX;
int32_t t174 = -3;
int64_t x701 = -124LL;
static volatile int32_t t175 = 10708509;
int64_t x705 = -2279038488761LL;
int64_t x710 = -778197441973598940LL;
static int64_t x726 = -1LL;
uint8_t x734 = UINT8_MAX;
static uint32_t x736 = UINT32_MAX;
int32_t t184 = -4;
int64_t x744 = INT64_MAX;
static volatile int32_t x746 = INT32_MIN;
uint32_t x756 = UINT32_MAX;
volatile int32_t t188 = -592;
static volatile int8_t x757 = 41;
uint8_t x762 = 2U;
static volatile int32_t t190 = 7355206;
int32_t x773 = INT32_MAX;
uint32_t x775 = UINT32_MAX;
int8_t x777 = -1;
uint64_t x779 = 8918352706310958826LLU;
volatile int32_t t194 = 95400815;
volatile int32_t x792 = 3;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int32_t x2 = -14253259;
	static int16_t x3 = INT16_MAX;
	volatile int8_t x4 = 0;
	volatile int32_t t0 = -212;

    t0 = ((x1|x2)>(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int64_t x6 = -36961728LL;
	static uint16_t x7 = 13404U;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 337531655;

    t1 = ((x5|x6)>(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 3;
	volatile int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -303288;

    t2 = ((x9|x10)>(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	volatile int32_t x14 = INT32_MIN;
	int32_t x15 = 10;
	static volatile int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -227;

    t3 = ((x13|x14)>(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	int64_t x19 = -7070755795777LL;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 3298393;

    t4 = ((x17|x18)>(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -538813151156468967LL;
	int8_t x22 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 13920794;

    t5 = ((x21|x22)>(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x26 = -1;
	volatile int32_t x27 = -64519819;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -6571;

    t6 = ((x25|x26)>(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	static int16_t x30 = -1;
	int16_t x32 = INT16_MIN;
	static int32_t t7 = 0;

    t7 = ((x29|x30)>(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile int32_t x34 = 101291;
	volatile int32_t x35 = 772650775;
	static int64_t x36 = -2222539963697LL;
	static volatile int32_t t8 = 13723;

    t8 = ((x33|x34)>(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	int8_t x38 = 4;
	int32_t t9 = 164;

    t9 = ((x37|x38)>(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -21;
	uint32_t x43 = 158423U;
	uint16_t x44 = 25U;

    t10 = ((x41|x42)>(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int16_t x48 = INT16_MAX;

    t11 = ((x45|x46)>(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	int64_t x51 = INT64_MIN;
	volatile int8_t x52 = 17;
	int32_t t12 = -12;

    t12 = ((x49|x50)>(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 7LLU;
	int64_t x55 = -1LL;
	int8_t x56 = -4;
	static volatile int32_t t13 = -190496697;

    t13 = ((x53|x54)>(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = -1;
	uint64_t x59 = 19885892321944LLU;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t14 = 8259110;

    t14 = ((x57|x58)>(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static volatile int8_t x62 = INT8_MIN;
	uint32_t x63 = 54011480U;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 0;

    t15 = ((x61|x62)>(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 0;
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = -1LL;
	volatile int32_t t16 = -1;

    t16 = ((x65|x66)>(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int16_t x70 = -2267;
	static int16_t x71 = 4;
	uint32_t x72 = 5675U;
	volatile int32_t t17 = -56;

    t17 = ((x69|x70)>(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	volatile int16_t x74 = -22;
	volatile int16_t x75 = INT16_MIN;
	uint16_t x76 = 5204U;
	volatile int32_t t18 = -372;

    t18 = ((x73|x74)>(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int16_t x78 = -1;
	uint16_t x79 = UINT16_MAX;
	static int64_t x80 = INT64_MIN;

    t19 = ((x77|x78)>(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x83 = -1;
	volatile int32_t t20 = -21607;

    t20 = ((x81|x82)>(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 3LLU;
	int32_t x86 = -7101420;
	volatile int16_t x87 = 78;
	volatile int32_t t21 = -1173;

    t21 = ((x85|x86)>(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 12730U;
	int32_t x90 = -3162;
	static uint16_t x91 = 2741U;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -7721;

    t22 = ((x89|x90)>(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x96 = INT64_MIN;
	int32_t t23 = 1;

    t23 = ((x93|x94)>(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = 40U;
	uint16_t x99 = 1U;
	volatile int32_t x100 = -8;
	static int32_t t24 = -130132444;

    t24 = ((x97|x98)>(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -5531904;

    t25 = ((x101|x102)>(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = 7U;
	int64_t x107 = -698918LL;
	static volatile int32_t x108 = 1294096;
	static volatile int32_t t26 = 27172;

    t26 = ((x105|x106)>(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MAX;
	uint64_t x112 = 251679237858503LLU;

    t27 = ((x109|x110)>(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	static volatile int8_t x115 = -1;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = 13119;

    t28 = ((x113|x114)>(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -7632;
	volatile int32_t x118 = -1;
	volatile uint64_t x119 = UINT64_MAX;
	volatile uint32_t x120 = 21909670U;

    t29 = ((x117|x118)>(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 25102U;

    t30 = ((x121|x122)>(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	volatile int32_t x126 = INT32_MIN;
	static volatile int64_t x127 = 1799354019596527LL;
	int64_t x128 = 295LL;
	volatile int32_t t31 = 2;

    t31 = ((x125|x126)>(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	static uint64_t x131 = 1643277448766LLU;
	int64_t x132 = -5337186LL;
	int32_t t32 = -183959062;

    t32 = ((x129|x130)>(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x134 = -130357728;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = -1;
	static int32_t t33 = 45364926;

    t33 = ((x133|x134)>(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = UINT16_MAX;
	static uint32_t x138 = 0U;
	static int16_t x139 = -15802;
	volatile int32_t t34 = -38584249;

    t34 = ((x137|x138)>(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = -196;
	int64_t x142 = 635277043011878316LL;
	int16_t x143 = INT16_MIN;

    t35 = ((x141|x142)>(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 1519829;
	int8_t x146 = INT8_MIN;
	int8_t x147 = -4;
	int64_t x148 = INT64_MIN;

    t36 = ((x145|x146)>(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = -1;
	static uint32_t x150 = 6610605U;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 7588458;

    t37 = ((x149|x150)>(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int16_t x155 = INT16_MIN;
	volatile uint64_t x156 = 51687570739197LLU;
	int32_t t38 = -79587;

    t38 = ((x153|x154)>(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = -1;
	int8_t x158 = INT8_MAX;
	int32_t x160 = 55407470;
	int32_t t39 = 1719;

    t39 = ((x157|x158)>(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 1830680425388LLU;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -5;

    t40 = ((x161|x162)>(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	int8_t x168 = -1;
	int32_t t41 = -23;

    t41 = ((x165|x166)>(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x169 = -1;
	int32_t x170 = 9779;
	int16_t x171 = 2712;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 1;

    t42 = ((x169|x170)>(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	volatile int16_t x174 = -480;
	static int16_t x176 = INT16_MIN;
	static int32_t t43 = -408461365;

    t43 = ((x173|x174)>(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = -32866987576LL;
	int8_t x178 = -1;
	int16_t x179 = -32;
	volatile int32_t t44 = 54864;

    t44 = ((x177|x178)>(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	int64_t x184 = 1383588LL;
	static int32_t t45 = 65;

    t45 = ((x181|x182)>(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 10544U;
	uint16_t x186 = 20U;
	static uint16_t x187 = 49U;
	int32_t x188 = INT32_MAX;
	int32_t t46 = -2096293;

    t46 = ((x185|x186)>(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = 20196U;
	volatile uint32_t x192 = 12439644U;

    t47 = ((x189|x190)>(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 11U;
	int64_t x194 = -789LL;
	uint16_t x195 = UINT16_MAX;

    t48 = ((x193|x194)>(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = INT32_MIN;
	volatile int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MIN;
	volatile int16_t x200 = -4;
	int32_t t49 = 191722818;

    t49 = ((x197|x198)>(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -3;
	volatile uint32_t x203 = 19410902U;
	volatile int8_t x204 = INT8_MIN;
	int32_t t50 = -23379;

    t50 = ((x201|x202)>(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MIN;
	volatile uint64_t x206 = 105589315131950LLU;
	int32_t x208 = -1;

    t51 = ((x205|x206)>(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	volatile int64_t x210 = INT64_MIN;
	static uint64_t x211 = UINT64_MAX;
	volatile int8_t x212 = 2;

    t52 = ((x209|x210)>(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	volatile uint32_t x214 = 30U;
	volatile int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;

    t53 = ((x213|x214)>(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = -1;
	int8_t x219 = -1;
	static int32_t t54 = 46;

    t54 = ((x217|x218)>(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 3U;
	int32_t x223 = INT32_MIN;
	int32_t t55 = 296;

    t55 = ((x221|x222)>(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x225 = -2;
	volatile int32_t x227 = INT32_MAX;
	int64_t x228 = INT64_MIN;

    t56 = ((x225|x226)>(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MAX;
	int64_t x231 = INT64_MAX;
	static uint16_t x232 = 16660U;
	volatile int32_t t57 = 13642;

    t57 = ((x229|x230)>(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	int8_t x234 = 3;
	uint8_t x235 = 12U;
	uint32_t x236 = UINT32_MAX;
	int32_t t58 = 96;

    t58 = ((x233|x234)>(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int32_t x238 = -7932132;
	volatile uint64_t x239 = UINT64_MAX;
	static int16_t x240 = 94;
	int32_t t59 = 0;

    t59 = ((x237|x238)>(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = 129968273541223714LL;
	int16_t x242 = 218;
	volatile uint64_t x244 = UINT64_MAX;
	volatile int32_t t60 = -1809357;

    t60 = ((x241|x242)>(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	volatile int64_t x246 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	static int32_t x248 = INT32_MIN;
	int32_t t61 = -16;

    t61 = ((x245|x246)>(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = 116153832;
	int32_t x250 = INT32_MIN;
	static int8_t x251 = 6;
	static uint32_t x252 = UINT32_MAX;
	int32_t t62 = 6944;

    t62 = ((x249|x250)>(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 2;
	int64_t x254 = INT64_MAX;
	uint8_t x255 = 50U;
	static int64_t x256 = INT64_MAX;
	int32_t t63 = 988;

    t63 = ((x253|x254)>(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 1908U;
	static int32_t x258 = -38073563;
	volatile int64_t x259 = -27801704486514641LL;
	int64_t x260 = -1LL;
	static volatile int32_t t64 = 25994271;

    t64 = ((x257|x258)>(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x261 = 32624U;
	static uint64_t x262 = 8501112861LLU;
	static volatile int32_t x263 = -3;
	int8_t x264 = -12;
	static int32_t t65 = -44;

    t65 = ((x261|x262)>(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MIN;
	volatile int8_t x267 = 0;
	static volatile int32_t x268 = -1;
	static volatile int32_t t66 = 12;

    t66 = ((x265|x266)>(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MIN;
	static int8_t x271 = -1;
	int8_t x272 = INT8_MIN;
	int32_t t67 = -33089;

    t67 = ((x269|x270)>(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -2921042LL;
	volatile int8_t x274 = INT8_MIN;
	int16_t x275 = 0;
	volatile uint16_t x276 = 10495U;
	int32_t t68 = -1774191;

    t68 = ((x273|x274)>(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = -1;
	uint64_t x279 = 2001792059890861LLU;

    t69 = ((x277|x278)>(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int32_t x282 = -140173366;
	static uint64_t x283 = 6232943257562593988LLU;
	uint64_t x284 = UINT64_MAX;

    t70 = ((x281|x282)>(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x287 = -15;
	int16_t x288 = 496;
	static int32_t t71 = -432612253;

    t71 = ((x285|x286)>(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x290 = INT8_MIN;
	volatile int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;

    t72 = ((x289|x290)>(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = -9969556LL;
	uint32_t x294 = 707809623U;
	int64_t x296 = INT64_MIN;
	static volatile int32_t t73 = 5;

    t73 = ((x293|x294)>(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -62;
	int32_t x298 = -578;
	volatile int64_t x299 = INT64_MIN;
	uint64_t x300 = UINT64_MAX;
	int32_t t74 = 1681;

    t74 = ((x297|x298)>(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	int8_t x303 = INT8_MIN;

    t75 = ((x301|x302)>(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = 1;
	int32_t x307 = INT32_MIN;
	volatile int32_t t76 = 8112449;

    t76 = ((x305|x306)>(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = INT32_MIN;
	int32_t x312 = 67;
	int32_t t77 = 6059629;

    t77 = ((x309|x310)>(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	volatile int32_t x315 = INT32_MAX;
	static int8_t x316 = -6;
	static int32_t t78 = -85070209;

    t78 = ((x313|x314)>(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 31U;
	static uint64_t x318 = 2LLU;
	static int64_t x319 = INT64_MAX;
	int32_t x320 = 1;
	volatile int32_t t79 = -51650246;

    t79 = ((x317|x318)>(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	static volatile uint64_t x322 = UINT64_MAX;
	volatile uint64_t x323 = 1101478226049LLU;
	int32_t x324 = -6395;

    t80 = ((x321|x322)>(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = INT64_MIN;
	int16_t x327 = -1;
	uint64_t x328 = 2779048462LLU;
	int32_t t81 = -8881;

    t81 = ((x325|x326)>(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x329 = 13U;
	volatile int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	static int64_t x332 = 0LL;
	int32_t t82 = 1125;

    t82 = ((x329|x330)>(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -2;
	int8_t x336 = 0;
	volatile int32_t t83 = -99441934;

    t83 = ((x333|x334)>(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	volatile int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 5180;

    t84 = ((x337|x338)>(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 13U;
	volatile uint16_t x342 = 15995U;
	uint8_t x343 = 60U;
	volatile uint8_t x344 = 43U;
	volatile int32_t t85 = 1424614;

    t85 = ((x341|x342)>(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x347 = 76U;
	int64_t x348 = INT64_MIN;
	int32_t t86 = -15;

    t86 = ((x345|x346)>(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = INT64_MIN;
	int64_t x351 = -2851880197314982LL;
	uint16_t x352 = 3649U;

    t87 = ((x349|x350)>(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MIN;
	uint64_t x355 = 3535638583LLU;
	int32_t t88 = 111233546;

    t88 = ((x353|x354)>(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 55;
	int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	volatile uint32_t x360 = 0U;
	volatile int32_t t89 = 12;

    t89 = ((x357|x358)>(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = 10685984LL;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 2830262LLU;
	int32_t t90 = -170265;

    t90 = ((x361|x362)>(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 45712342LL;
	volatile uint32_t x366 = UINT32_MAX;
	int32_t x367 = -1;
	volatile int16_t x368 = 55;
	volatile int32_t t91 = -48;

    t91 = ((x365|x366)>(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 1U;
	int32_t x370 = -3;
	volatile int32_t t92 = 305050029;

    t92 = ((x369|x370)>(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MAX;
	static uint16_t x375 = 31861U;
	int16_t x376 = 207;

    t93 = ((x373|x374)>(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	int32_t t94 = -96;

    t94 = ((x377|x378)>(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 2187270475628848LLU;
	int32_t x382 = -449315;
	static int8_t x383 = INT8_MIN;
	volatile int32_t t95 = 1586257;

    t95 = ((x381|x382)>(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 474561077LLU;
	int32_t x386 = -67785961;
	uint16_t x387 = 0U;
	int32_t t96 = 341583;

    t96 = ((x385|x386)>(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MAX;
	static volatile int16_t x390 = INT16_MAX;
	int8_t x391 = INT8_MIN;
	volatile int64_t x392 = -450378322356028LL;
	int32_t t97 = 8841;

    t97 = ((x389|x390)>(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = 3U;
	int32_t t98 = -6693325;

    t98 = ((x393|x394)>(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = INT64_MIN;
	uint32_t x398 = 6308U;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = INT16_MAX;
	int32_t t99 = -6;

    t99 = ((x397|x398)>(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x401 = INT16_MAX;
	volatile int16_t x403 = -62;
	uint64_t x404 = UINT64_MAX;
	int32_t t100 = -1642261;

    t100 = ((x401|x402)>(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = -238;
	int32_t x406 = 14782487;
	volatile int64_t x407 = INT64_MIN;
	static uint32_t x408 = 9U;

    t101 = ((x405|x406)>(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 60368094792LLU;
	int32_t x410 = -1;
	uint16_t x411 = 7778U;
	volatile int16_t x412 = INT16_MAX;
	static int32_t t102 = -7600;

    t102 = ((x409|x410)>(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = INT32_MAX;
	volatile int16_t x415 = 3;
	volatile int32_t t103 = 13;

    t103 = ((x413|x414)>(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = UINT8_MAX;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = INT8_MIN;
	volatile int32_t t104 = 4096;

    t104 = ((x417|x418)>(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 3U;
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	volatile uint16_t x424 = 37U;
	volatile int32_t t105 = -1;

    t105 = ((x421|x422)>(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = 23;
	uint16_t x426 = 57U;
	static uint16_t x427 = UINT16_MAX;
	static int8_t x428 = -6;
	int32_t t106 = 0;

    t106 = ((x425|x426)>(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 4777042LLU;
	int64_t x430 = -3498LL;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = -1LL;

    t107 = ((x429|x430)>(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 20U;
	volatile int16_t x434 = INT16_MAX;
	uint32_t x436 = 0U;
	static volatile int32_t t108 = -92272012;

    t108 = ((x433|x434)>(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	int64_t x438 = INT64_MIN;
	uint8_t x440 = 83U;
	volatile int32_t t109 = -13718034;

    t109 = ((x437|x438)>(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = 20U;
	int64_t x443 = 135343721249566880LL;
	static int8_t x444 = -1;
	int32_t t110 = -208086;

    t110 = ((x441|x442)>(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	uint16_t x446 = 0U;
	static int8_t x448 = 2;
	volatile int32_t t111 = -72386023;

    t111 = ((x445|x446)>(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 4746U;
	static int8_t x451 = -1;

    t112 = ((x449|x450)>(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	static int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;

    t113 = ((x453|x454)>(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	uint8_t x458 = 1U;
	uint32_t x459 = UINT32_MAX;
	volatile uint64_t x460 = 143168414992678575LLU;
	volatile int32_t t114 = -2272647;

    t114 = ((x457|x458)>(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = 670642U;
	int64_t x463 = -113147839LL;
	static int16_t x464 = 15365;
	static volatile int32_t t115 = 160769374;

    t115 = ((x461|x462)>(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = 44U;
	uint64_t x466 = 10LLU;
	int32_t x467 = 15212839;
	uint64_t x468 = UINT64_MAX;
	static int32_t t116 = 0;

    t116 = ((x465|x466)>(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int8_t x470 = -9;
	static uint16_t x471 = 9U;
	uint32_t x472 = 5443U;

    t117 = ((x469|x470)>(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int16_t x474 = 23;
	volatile int8_t x475 = -1;
	static int16_t x476 = 2;
	int32_t t118 = -100545706;

    t118 = ((x473|x474)>(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 4796U;
	volatile uint16_t x478 = UINT16_MAX;
	int64_t x479 = INT64_MAX;
	int8_t x480 = INT8_MAX;

    t119 = ((x477|x478)>(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 62811;
	uint16_t x482 = 802U;
	int8_t x483 = INT8_MIN;
	volatile uint64_t x484 = 96442770749049242LLU;
	volatile int32_t t120 = 1;

    t120 = ((x481|x482)>(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	static int32_t x486 = INT32_MAX;
	int32_t x487 = 18;
	volatile uint8_t x488 = 11U;
	int32_t t121 = -522653096;

    t121 = ((x485|x486)>(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x489 = UINT64_MAX;
	int64_t x490 = INT64_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile int64_t x492 = -1LL;

    t122 = ((x489|x490)>(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x495 = 55;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = 762664;

    t123 = ((x493|x494)>(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	uint8_t x499 = 15U;
	static uint16_t x500 = UINT16_MAX;
	int32_t t124 = 3;

    t124 = ((x497|x498)>(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	int16_t x502 = INT16_MIN;
	int64_t x504 = INT64_MIN;
	int32_t t125 = -3;

    t125 = ((x501|x502)>(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	volatile uint32_t x506 = 33740762U;
	int16_t x507 = INT16_MIN;
	int32_t t126 = 985041153;

    t126 = ((x505|x506)>(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = -1;
	int16_t x510 = INT16_MAX;
	int64_t x511 = INT64_MIN;
	uint32_t x512 = UINT32_MAX;
	int32_t t127 = -104;

    t127 = ((x509|x510)>(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MAX;
	volatile uint32_t x516 = 265627821U;

    t128 = ((x513|x514)>(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	uint16_t x518 = UINT16_MAX;
	int8_t x519 = INT8_MIN;
	static uint64_t x520 = 5455512781LLU;
	volatile int32_t t129 = -202;

    t129 = ((x517|x518)>(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	int64_t x523 = INT64_MIN;
	static volatile int16_t x524 = 662;

    t130 = ((x521|x522)>(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 2081022LLU;
	int16_t x526 = INT16_MAX;
	int64_t x527 = INT64_MIN;
	int64_t x528 = -124600755299131LL;

    t131 = ((x525|x526)>(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -148546347444364LL;
	int8_t x530 = INT8_MAX;
	int8_t x531 = INT8_MAX;
	uint16_t x532 = 24U;
	volatile int32_t t132 = -1335383;

    t132 = ((x529|x530)>(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MIN;
	int8_t x536 = INT8_MAX;
	volatile int32_t t133 = 29933512;

    t133 = ((x533|x534)>(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	static uint32_t x538 = UINT32_MAX;
	uint16_t x539 = 1U;
	uint32_t x540 = UINT32_MAX;

    t134 = ((x537|x538)>(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = INT32_MAX;
	static uint32_t x543 = UINT32_MAX;
	volatile int64_t x544 = INT64_MAX;
	int32_t t135 = -50685;

    t135 = ((x541|x542)>(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = 2;
	int8_t x546 = INT8_MIN;
	static volatile int64_t x547 = INT64_MIN;
	int32_t x548 = INT32_MIN;
	volatile int32_t t136 = -22492;

    t136 = ((x545|x546)>(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = -1LL;
	int64_t x551 = 858766LL;
	static volatile int32_t t137 = -420206;

    t137 = ((x549|x550)>(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x555 = 6U;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t138 = 575060;

    t138 = ((x553|x554)>(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x558 = 709953800LL;
	volatile int32_t x559 = INT32_MAX;
	static uint32_t x560 = UINT32_MAX;
	volatile int32_t t139 = -2;

    t139 = ((x557|x558)>(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = INT8_MIN;
	uint16_t x563 = UINT16_MAX;
	uint16_t x564 = 52U;
	int32_t t140 = 22884;

    t140 = ((x561|x562)>(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x565 = UINT32_MAX;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = UINT8_MAX;
	int32_t t141 = -182241;

    t141 = ((x565|x566)>(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 3580U;
	static int64_t x570 = 71LL;
	int32_t x571 = INT32_MIN;
	static uint16_t x572 = 210U;
	int32_t t142 = -1;

    t142 = ((x569|x570)>(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = INT8_MIN;
	int16_t x574 = 9;
	int64_t x575 = INT64_MIN;
	uint8_t x576 = 37U;
	volatile int32_t t143 = 27282;

    t143 = ((x573|x574)>(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x577 = UINT32_MAX;
	int32_t x579 = INT32_MIN;
	int32_t t144 = -500260;

    t144 = ((x577|x578)>(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x582 = INT16_MIN;
	static volatile int16_t x583 = 328;
	int16_t x584 = -7;
	volatile int32_t t145 = 6717;

    t145 = ((x581|x582)>(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = -1;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = 4542LL;
	int64_t x588 = INT64_MIN;
	volatile int32_t t146 = -27689;

    t146 = ((x585|x586)>(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int16_t x590 = INT16_MIN;
	volatile int64_t x591 = -5210LL;
	static uint8_t x592 = UINT8_MAX;
	volatile int32_t t147 = 21;

    t147 = ((x589|x590)>(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = -1;
	int16_t x595 = -1;
	int32_t t148 = 1287;

    t148 = ((x593|x594)>(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = INT16_MIN;
	static uint64_t x598 = 46513698901242LLU;
	volatile uint32_t x599 = UINT32_MAX;
	int64_t x600 = INT64_MAX;
	volatile int32_t t149 = 1;

    t149 = ((x597|x598)>(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = 4;
	volatile int32_t x603 = INT32_MAX;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -22249;

    t150 = ((x601|x602)>(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int32_t x607 = INT32_MIN;
	static int8_t x608 = -1;
	int32_t t151 = -509203132;

    t151 = ((x605|x606)>(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	volatile uint32_t x610 = 310058311U;
	volatile uint32_t x611 = 369393421U;
	int32_t x612 = INT32_MIN;
	volatile int32_t t152 = -813;

    t152 = ((x609|x610)>(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int32_t x614 = -1;
	uint64_t x615 = 3938189472LLU;
	static int64_t x616 = INT64_MIN;
	int32_t t153 = 110156;

    t153 = ((x613|x614)>(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 1905U;
	volatile int16_t x618 = INT16_MIN;
	static volatile int32_t t154 = -201;

    t154 = ((x617|x618)>(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -962993908963760896LL;
	int32_t x622 = INT32_MIN;
	static int64_t x623 = -1769396039LL;
	int16_t x624 = INT16_MAX;
	volatile int32_t t155 = 1131122;

    t155 = ((x621|x622)>(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -1;
	int64_t x626 = -200328648382975716LL;
	int16_t x627 = INT16_MAX;
	static int32_t x628 = 141422;
	int32_t t156 = 1501939;

    t156 = ((x625|x626)>(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = UINT64_MAX;
	uint32_t x630 = 24891U;
	volatile int32_t x631 = INT32_MAX;
	int64_t x632 = 4662783852722165LL;

    t157 = ((x629|x630)>(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	volatile int32_t x634 = -1;
	static int32_t x635 = -368294800;
	int16_t x636 = INT16_MAX;
	volatile int32_t t158 = -3946;

    t158 = ((x633|x634)>(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x638 = 59400924656031LL;
	volatile int8_t x640 = -1;
	int32_t t159 = 2;

    t159 = ((x637|x638)>(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 29U;
	uint64_t x642 = 84LLU;
	static int32_t x643 = INT32_MIN;
	int8_t x644 = 0;
	volatile int32_t t160 = 44897672;

    t160 = ((x641|x642)>(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = 4;
	int8_t x647 = 3;
	uint64_t x648 = 4258LLU;
	volatile int32_t t161 = -16054153;

    t161 = ((x645|x646)>(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	int64_t x651 = INT64_MIN;
	uint16_t x652 = 2103U;

    t162 = ((x649|x650)>(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 3317U;
	int64_t x654 = -1806346464707680LL;
	int32_t x656 = INT32_MIN;
	static volatile int32_t t163 = 28;

    t163 = ((x653|x654)>(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x658 = INT8_MIN;
	int8_t x659 = -32;
	volatile int64_t x660 = -444843107574163LL;
	int32_t t164 = 0;

    t164 = ((x657|x658)>(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x661 = UINT32_MAX;
	int8_t x662 = 0;
	volatile int64_t x664 = -6667709LL;

    t165 = ((x661|x662)>(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -6410242935989568LL;
	uint32_t x668 = 324U;
	int32_t t166 = -4948699;

    t166 = ((x665|x666)>(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 356963U;
	static volatile int16_t x671 = INT16_MIN;
	volatile uint8_t x672 = 0U;
	int32_t t167 = 576;

    t167 = ((x669|x670)>(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = -1;
	static int64_t x674 = INT64_MIN;
	int32_t t168 = 860104;

    t168 = ((x673|x674)>(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint16_t x678 = 2822U;
	int8_t x680 = INT8_MAX;
	volatile int32_t t169 = 157638;

    t169 = ((x677|x678)>(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	static uint16_t x682 = UINT16_MAX;
	int16_t x683 = 1;
	int32_t x684 = 706774556;
	volatile int32_t t170 = 0;

    t170 = ((x681|x682)>(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 171U;
	volatile int64_t x687 = INT64_MAX;
	int16_t x688 = INT16_MIN;

    t171 = ((x685|x686)>(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	volatile uint32_t x690 = 231567U;
	uint32_t x692 = 260305U;
	volatile int32_t t172 = 11583;

    t172 = ((x689|x690)>(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 7U;
	int64_t x695 = -1490363277361187LL;
	volatile int32_t t173 = 6427;

    t173 = ((x693|x694)>(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MIN;
	int16_t x698 = 0;

    t174 = ((x697|x698)>(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x702 = INT8_MIN;
	int8_t x703 = 2;
	int64_t x704 = INT64_MAX;

    t175 = ((x701|x702)>(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MAX;
	volatile int8_t x707 = INT8_MIN;
	volatile int16_t x708 = INT16_MIN;
	static int32_t t176 = 435;

    t176 = ((x705|x706)>(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	static uint64_t x711 = 2260683LLU;
	int64_t x712 = INT64_MIN;
	volatile int32_t t177 = -66916452;

    t177 = ((x709|x710)>(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 502901671111052LL;
	volatile uint64_t x714 = 13048701LLU;
	volatile int32_t x715 = -210273;
	int16_t x716 = 148;
	int32_t t178 = 590743881;

    t178 = ((x713|x714)>(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 22167U;
	int8_t x718 = -1;
	int16_t x719 = -1;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = 2167015;

    t179 = ((x717|x718)>(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x721 = 0U;
	int32_t x722 = -1;
	uint32_t x723 = 32U;
	uint64_t x724 = 1662245114961LLU;
	int32_t t180 = -245649;

    t180 = ((x721|x722)>(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	static int64_t x727 = INT64_MIN;
	static uint32_t x728 = 2U;
	volatile int32_t t181 = -5;

    t181 = ((x725|x726)>(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MAX;
	static int8_t x730 = -1;
	volatile int64_t x731 = 1157LL;
	static int16_t x732 = INT16_MIN;
	volatile int32_t t182 = -441994;

    t182 = ((x729|x730)>(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	uint32_t x735 = 1230122U;
	int32_t t183 = 284737893;

    t183 = ((x733|x734)>(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = INT32_MAX;
	uint64_t x739 = 2LLU;
	static volatile int16_t x740 = INT16_MIN;

    t184 = ((x737|x738)>(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	volatile uint32_t x742 = 1U;
	uint32_t x743 = 2U;
	int32_t t185 = 1959117;

    t185 = ((x741|x742)>(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 66663427307966961LL;
	uint16_t x747 = UINT16_MAX;
	int16_t x748 = -61;
	static int32_t t186 = -4;

    t186 = ((x745|x746)>(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = -81;
	static volatile int16_t x750 = INT16_MAX;
	volatile int32_t x751 = INT32_MIN;
	int32_t x752 = 107729197;
	volatile int32_t t187 = -29;

    t187 = ((x749|x750)>(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -1LL;
	volatile uint8_t x754 = 111U;
	static int8_t x755 = INT8_MIN;

    t188 = ((x753|x754)>(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = -1;
	uint8_t x759 = 48U;
	uint16_t x760 = UINT16_MAX;
	static volatile int32_t t189 = -93;

    t189 = ((x757|x758)>(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -12;
	int8_t x763 = INT8_MIN;
	int64_t x764 = -189085125LL;

    t190 = ((x761|x762)>(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = 6889;
	volatile int16_t x766 = INT16_MIN;
	int32_t x767 = 753;
	int8_t x768 = INT8_MIN;
	volatile int32_t t191 = -12;

    t191 = ((x765|x766)>(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -1;
	static uint8_t x770 = UINT8_MAX;
	int64_t x771 = INT64_MIN;
	static int8_t x772 = -39;
	int32_t t192 = 6278;

    t192 = ((x769|x770)>(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = -1;
	int64_t x776 = INT64_MAX;
	volatile int32_t t193 = -345621559;

    t193 = ((x773|x774)>(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x778 = 2429LLU;
	int16_t x780 = 495;

    t194 = ((x777|x778)>(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int32_t x782 = 1;
	uint16_t x783 = UINT16_MAX;
	int16_t x784 = INT16_MAX;
	static int32_t t195 = -409;

    t195 = ((x781|x782)>(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 4U;
	uint8_t x786 = 42U;
	volatile int32_t x787 = INT32_MAX;
	volatile int8_t x788 = 0;
	int32_t t196 = -95644975;

    t196 = ((x785|x786)>(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = 3;
	int32_t x790 = -1;
	volatile int16_t x791 = INT16_MIN;
	int32_t t197 = 392175551;

    t197 = ((x789|x790)>(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 2U;
	volatile int64_t x794 = 1535027520402551394LL;
	static uint32_t x795 = 527296351U;
	int32_t x796 = INT32_MAX;
	int32_t t198 = 6895755;

    t198 = ((x793|x794)>(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MIN;
	int64_t x798 = -1LL;
	volatile int64_t x799 = -1LL;
	uint32_t x800 = UINT32_MAX;
	volatile int32_t t199 = -606539392;

    t199 = ((x797|x798)>(x799!=x800));

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

