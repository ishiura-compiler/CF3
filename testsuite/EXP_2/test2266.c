
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

uint32_t x1 = UINT32_MAX;
static volatile int8_t x6 = INT8_MAX;
int16_t x16 = INT16_MIN;
static int32_t x21 = 288;
int32_t x31 = 254;
uint32_t x32 = 485718040U;
int64_t x37 = -714496285380847867LL;
int8_t x48 = INT8_MAX;
int64_t x64 = INT64_MIN;
volatile int64_t t15 = -88983LL;
volatile int16_t x65 = -1;
int32_t x67 = 965221;
int16_t x68 = INT16_MIN;
int16_t x76 = -1;
int8_t x81 = INT8_MIN;
static int16_t x82 = -1;
int16_t x83 = -1;
static uint32_t x92 = UINT32_MAX;
int32_t x99 = -1;
static int32_t x103 = INT32_MIN;
uint64_t x111 = 224660165LLU;
volatile uint32_t t27 = 892772U;
uint64_t x115 = UINT64_MAX;
int64_t x123 = INT64_MAX;
int16_t x125 = 16;
int64_t x128 = INT64_MIN;
int32_t t32 = -142;
int32_t x146 = -755833;
int8_t x149 = -1;
uint64_t x151 = 0LLU;
volatile int32_t t40 = -2408;
uint8_t x166 = 0U;
volatile int32_t t42 = -57;
volatile int64_t x177 = INT64_MIN;
int32_t x178 = -714;
uint8_t x185 = UINT8_MAX;
static uint8_t x186 = 103U;
uint8_t x187 = UINT8_MAX;
static int32_t x202 = 378;
int64_t t50 = -252028889901LL;
int16_t x205 = -605;
static uint32_t x206 = 144477777U;
volatile int16_t x219 = INT16_MIN;
static int16_t x220 = -952;
int32_t x226 = INT32_MIN;
int32_t x228 = -105891;
static int32_t x239 = INT32_MIN;
volatile int32_t t59 = 81297;
int8_t x246 = INT8_MIN;
int8_t x248 = INT8_MIN;
static volatile int64_t x254 = INT64_MAX;
volatile int8_t x257 = INT8_MIN;
uint16_t x265 = 0U;
volatile int8_t x270 = INT8_MAX;
int64_t t68 = -1443754031289753273LL;
int32_t t70 = -56717710;
static int16_t x288 = INT16_MAX;
static volatile int32_t t72 = 28567;
static int32_t x301 = INT32_MIN;
static uint8_t x302 = 5U;
uint16_t x306 = UINT16_MAX;
int8_t x307 = -18;
volatile int64_t x310 = -1LL;
uint8_t x314 = UINT8_MAX;
int16_t x316 = -15;
static uint8_t x321 = UINT8_MAX;
int16_t x327 = 2293;
uint64_t x329 = 126356409LLU;
int64_t t82 = -392620449770252LL;
int8_t x337 = -5;
static volatile int32_t t84 = 1;
int16_t x348 = INT16_MIN;
uint16_t x358 = UINT16_MAX;
uint64_t x365 = 113736320506LLU;
int8_t x369 = INT8_MAX;
int32_t t92 = -4;
int64_t x375 = -1LL;
int16_t x377 = INT16_MAX;
int8_t x378 = INT8_MAX;
int16_t x383 = INT16_MAX;
volatile uint32_t x391 = UINT32_MAX;
int32_t t98 = 69979;
uint64_t x400 = UINT64_MAX;
int16_t x402 = INT16_MIN;
int16_t x405 = -1;
volatile int32_t x408 = -1;
uint32_t x410 = 75189U;
int16_t x413 = -1;
uint32_t x415 = UINT32_MAX;
volatile uint32_t x416 = 438070694U;
static uint64_t x425 = 57012376914608876LLU;
int8_t x426 = INT8_MIN;
static volatile int32_t t106 = -1;
volatile int16_t x434 = INT16_MIN;
int64_t x444 = INT64_MIN;
volatile uint8_t x455 = 35U;
uint8_t x458 = UINT8_MAX;
uint8_t x461 = 117U;
int16_t x468 = -199;
volatile int64_t x469 = -601377LL;
volatile int32_t t118 = -12255;
int64_t t120 = 456441LL;
int64_t x489 = INT64_MIN;
uint32_t x490 = 14884446U;
int64_t x496 = INT64_MIN;
int64_t t123 = -34155LL;
uint32_t x499 = 37631U;
int32_t t124 = -2530491;
int16_t x505 = INT16_MAX;
int32_t t128 = -3238;
uint8_t x518 = 2U;
static volatile int64_t x526 = -1LL;
static volatile uint16_t x533 = UINT16_MAX;
int32_t x542 = -33;
int32_t x552 = INT32_MAX;
int64_t x557 = 1751893832780506950LL;
uint32_t x563 = 5127486U;
int8_t x568 = INT8_MAX;
uint16_t x574 = 21671U;
volatile int32_t t143 = -951643994;
volatile int8_t x579 = -1;
volatile int16_t x596 = INT16_MAX;
uint16_t x599 = UINT16_MAX;
volatile int8_t x608 = -1;
volatile int32_t t151 = -54381690;
int64_t x612 = INT64_MAX;
uint64_t x631 = 4549130453LLU;
volatile int32_t x632 = -1;
int16_t x640 = -1313;
volatile int32_t t159 = 4981;
volatile int64_t x643 = -1993148396773760953LL;
volatile int32_t t160 = 1;
int64_t x645 = INT64_MIN;
static uint32_t x647 = 160806175U;
int64_t x648 = INT64_MIN;
int64_t t161 = 22446883140197321LL;
int32_t x656 = INT32_MAX;
int32_t x663 = INT32_MAX;
uint16_t x669 = 6U;
volatile int8_t x670 = -1;
uint16_t x672 = 893U;
static int64_t t168 = 2035888009588888LL;
uint32_t x686 = 1648U;
int8_t x695 = -1;
static int8_t x702 = -13;
volatile int8_t x708 = -1;
uint32_t x711 = 3963U;
int32_t t177 = -1;
int32_t t180 = 5005410;
int16_t x725 = -1;
int64_t t182 = 272019064973LL;
int16_t x742 = 25;
volatile uint32_t x745 = UINT32_MAX;
static uint16_t x747 = 263U;
uint32_t x750 = 31933810U;
int16_t x755 = -1;
int64_t x772 = INT64_MIN;
uint64_t x774 = 741LLU;
uint8_t x775 = UINT8_MAX;
uint16_t x777 = 1U;
int32_t x783 = INT32_MIN;
volatile uint64_t x788 = 6734LLU;
uint8_t x794 = 1U;
volatile int64_t t198 = -1126560215964261LL;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint64_t x3 = 7631002057LLU;
	static uint16_t x4 = 1U;
	static volatile int32_t t0 = -81804;

    t0 = ((x1==(x2&x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -39;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = 238411347;
	static int32_t t1 = -28042923;

    t1 = ((x5==(x6&x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -1;
	uint32_t x10 = 155930U;
	int64_t x11 = 346770751LL;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 3334478;

    t2 = ((x9==(x10&x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MAX;
	uint16_t x15 = 3U;
	static int32_t t3 = 12;

    t3 = ((x13==(x14&x15))&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	static volatile uint64_t x19 = UINT64_MAX;
	static volatile int32_t x20 = -132484827;
	volatile int32_t t4 = -71463266;

    t4 = ((x17==(x18&x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	uint32_t x23 = 794109515U;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 382;

    t5 = ((x21==(x22&x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = UINT8_MAX;
	static int64_t x26 = INT64_MIN;
	int8_t x27 = 0;
	static uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 138985U;

    t6 = ((x25==(x26&x27))&x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	volatile uint64_t x30 = 949217790493892643LLU;
	uint32_t t7 = 1U;

    t7 = ((x29==(x30&x31))&x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = -1;
	uint8_t x36 = 0U;
	int32_t t8 = 7367;

    t8 = ((x33==(x34&x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x38 = INT16_MAX;
	int64_t x39 = -14588128348482699LL;
	volatile uint64_t x40 = 182162080894161LLU;
	static volatile uint64_t t9 = 21553LLU;

    t9 = ((x37==(x38&x39))&x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	int8_t x42 = -1;
	static uint64_t x43 = UINT64_MAX;
	static uint32_t x44 = UINT32_MAX;
	volatile uint32_t t10 = 306330U;

    t10 = ((x41==(x42&x43))&x44);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MAX;
	uint32_t x46 = 10720982U;
	uint64_t x47 = 21640215940LLU;
	int32_t t11 = -315;

    t11 = ((x45==(x46&x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint64_t x50 = 10273LLU;
	static uint64_t x51 = 4598542833497765460LLU;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -2038645;

    t12 = ((x49==(x50&x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int32_t x54 = -1;
	uint32_t x55 = 83613920U;
	int8_t x56 = -17;
	static int32_t t13 = -2;

    t13 = ((x53==(x54&x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 0U;
	static int8_t x58 = -1;
	static volatile int16_t x59 = -1;
	volatile uint16_t x60 = 565U;
	int32_t t14 = 8;

    t14 = ((x57==(x58&x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	uint64_t x62 = 358869LLU;
	uint32_t x63 = 468138U;

    t15 = ((x61==(x62&x63))&x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = UINT8_MAX;
	volatile int32_t t16 = 204167;

    t16 = ((x65==(x66&x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -2728878530665732037LL;
	int8_t x70 = -1;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = 2;
	static volatile int32_t t17 = -567920;

    t17 = ((x69==(x70&x71))&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 86109U;
	int64_t x74 = -97366076940662LL;
	static volatile uint8_t x75 = 4U;
	int32_t t18 = -72905;

    t18 = ((x73==(x74&x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 55U;
	int64_t x78 = -1LL;
	int16_t x79 = INT16_MAX;
	uint16_t x80 = 2U;
	volatile int32_t t19 = -11958266;

    t19 = ((x77==(x78&x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x84 = -1LL;
	int64_t t20 = -815191LL;

    t20 = ((x81==(x82&x83))&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 443U;
	int16_t x86 = INT16_MAX;
	int32_t x87 = INT32_MIN;
	int32_t x88 = 2789;
	static volatile int32_t t21 = 1555;

    t21 = ((x85==(x86&x87))&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	int64_t x90 = -1LL;
	int16_t x91 = -1;
	uint32_t t22 = 9017222U;

    t22 = ((x89==(x90&x91))&x92);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 747655985029251303LLU;
	static int64_t x94 = INT64_MIN;
	int64_t x95 = -5372236557587574LL;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = 21695036;

    t23 = ((x93==(x94&x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	int16_t x98 = -1;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -293861;

    t24 = ((x97==(x98&x99))&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MAX;
	volatile int32_t x102 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 13382;

    t25 = ((x101==(x102&x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -1;
	int8_t x108 = 43;
	static int32_t t26 = 254;

    t26 = ((x105==(x106&x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	static uint8_t x110 = UINT8_MAX;
	uint32_t x112 = 992317U;

    t27 = ((x109==(x110&x111))&x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 3861060U;
	int16_t x114 = INT16_MIN;
	static volatile int32_t x116 = -1;
	static volatile int32_t t28 = 1;

    t28 = ((x113==(x114&x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 407665U;
	uint8_t x120 = 0U;
	volatile int32_t t29 = -417186528;

    t29 = ((x117==(x118&x119))&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 17268555290589LLU;
	uint32_t x122 = UINT32_MAX;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = 0LL;

    t30 = ((x121==(x122&x123))&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = INT32_MAX;
	uint8_t x127 = 0U;
	int64_t t31 = -5LL;

    t31 = ((x125==(x126&x127))&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -1;
	volatile int16_t x130 = 3403;
	uint16_t x131 = 4235U;
	int8_t x132 = INT8_MAX;

    t32 = ((x129==(x130&x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	volatile int32_t x134 = 1256;
	int32_t x135 = -1;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = 13;

    t33 = ((x133==(x134&x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = 0U;
	uint16_t x140 = 1U;
	int32_t t34 = 474867;

    t34 = ((x137==(x138&x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	static int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MAX;
	volatile int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = 14;

    t35 = ((x141==(x142&x143))&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 12U;
	int16_t x147 = 41;
	int32_t x148 = -11679587;
	volatile int32_t t36 = 413827;

    t36 = ((x145==(x146&x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = -1;
	int16_t x152 = -1;
	volatile int32_t t37 = 17;

    t37 = ((x149==(x150&x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 1U;
	static int32_t x154 = 55;
	int32_t x155 = -7;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 61;

    t38 = ((x153==(x154&x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x157 = 81U;
	int64_t x158 = 416764161921LL;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = 7;
	int32_t t39 = 22050965;

    t39 = ((x157==(x158&x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1610U;
	int8_t x162 = -30;
	volatile int64_t x163 = -1LL;
	int16_t x164 = INT16_MIN;

    t40 = ((x161==(x162&x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = 9;
	uint64_t x167 = 4211LLU;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = -24086;

    t41 = ((x165==(x166&x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 19U;
	static uint64_t x170 = 392443643721223LLU;
	volatile uint16_t x171 = 12118U;
	int32_t x172 = 1658;

    t42 = ((x169==(x170&x171))&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MIN;
	int64_t x174 = 29521922622139LL;
	int32_t x175 = -2041;
	uint8_t x176 = 30U;
	static volatile int32_t t43 = 682437979;

    t43 = ((x173==(x174&x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x179 = 56;
	uint16_t x180 = 1U;
	int32_t t44 = 461;

    t44 = ((x177==(x178&x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 2U;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 37;

    t45 = ((x181==(x182&x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x188 = 212U;
	static int32_t t46 = -12738128;

    t46 = ((x185==(x186&x187))&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 1;
	static volatile uint64_t x190 = UINT64_MAX;
	uint8_t x191 = 1U;
	int64_t x192 = INT64_MIN;
	static volatile int64_t t47 = 1886467LL;

    t47 = ((x189==(x190&x191))&x192);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	int64_t x194 = -249LL;
	int64_t x195 = INT64_MIN;
	int64_t x196 = 44858564066616225LL;
	static volatile int64_t t48 = 56739163480051674LL;

    t48 = ((x193==(x194&x195))&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int32_t x198 = INT32_MIN;
	int8_t x199 = -1;
	volatile int8_t x200 = INT8_MIN;
	int32_t t49 = 3099;

    t49 = ((x197==(x198&x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -1LL;
	uint16_t x203 = 1528U;
	int64_t x204 = INT64_MIN;

    t50 = ((x201==(x202&x203))&x204);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;
	static int32_t t51 = -3502;

    t51 = ((x205==(x206&x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -868;
	int16_t x210 = INT16_MIN;
	int64_t x211 = -1LL;
	int32_t x212 = 1883735;
	static volatile int32_t t52 = -416842;

    t52 = ((x209==(x210&x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -2803;
	static int64_t x214 = INT64_MIN;
	int64_t x215 = 300999446745148LL;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = -168528078306534036LL;

    t53 = ((x213==(x214&x215))&x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	volatile int8_t x218 = INT8_MIN;
	int32_t t54 = -242812403;

    t54 = ((x217==(x218&x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = 0U;
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	uint16_t x224 = 832U;
	volatile int32_t t55 = 58;

    t55 = ((x221==(x222&x223))&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 9U;
	static int8_t x227 = 1;
	volatile int32_t t56 = 9987640;

    t56 = ((x225==(x226&x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 125;
	int16_t x230 = INT16_MAX;
	static uint64_t x231 = UINT64_MAX;
	int32_t x232 = 51707;
	int32_t t57 = -698252;

    t57 = ((x229==(x230&x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	uint32_t x234 = 1988U;
	volatile int32_t x235 = -1830;
	static int64_t x236 = -1LL;
	int64_t t58 = 542742702793806287LL;

    t58 = ((x233==(x234&x235))&x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 2073U;
	int16_t x238 = -10672;
	uint16_t x240 = 1U;

    t59 = ((x237==(x238&x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = -196;
	int64_t x242 = -1LL;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	static int32_t t60 = 1149564;

    t60 = ((x241==(x242&x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = UINT16_MAX;
	uint64_t x247 = UINT64_MAX;
	static volatile int32_t t61 = 552;

    t61 = ((x245==(x246&x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	static int32_t x250 = -5224037;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = 30U;
	static int32_t t62 = 91;

    t62 = ((x249==(x250&x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 7910283804842811728LLU;
	uint16_t x255 = 2U;
	volatile int32_t x256 = -1;
	int32_t t63 = -2;

    t63 = ((x253==(x254&x255))&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x258 = INT16_MAX;
	uint16_t x259 = 2U;
	int16_t x260 = INT16_MAX;
	static int32_t t64 = 1002333241;

    t64 = ((x257==(x258&x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x261 = 4160203141LLU;
	int32_t x262 = -1981512;
	static int64_t x263 = INT64_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -191213;

    t65 = ((x261==(x262&x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = 25;
	uint8_t x267 = 3U;
	uint8_t x268 = 14U;
	volatile int32_t t66 = -80;

    t66 = ((x265==(x266&x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	int32_t x271 = INT32_MIN;
	static volatile int64_t x272 = -1LL;
	int64_t t67 = -300LL;

    t67 = ((x269==(x270&x271))&x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	uint32_t x274 = UINT32_MAX;
	uint64_t x275 = UINT64_MAX;
	static int64_t x276 = INT64_MIN;

    t68 = ((x273==(x274&x275))&x276);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	volatile uint64_t x279 = 83449122LLU;
	volatile int64_t x280 = INT64_MAX;
	volatile int64_t t69 = -67833090890951155LL;

    t69 = ((x277==(x278&x279))&x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static int64_t x282 = -1LL;
	volatile int8_t x283 = INT8_MIN;
	static uint16_t x284 = 6275U;

    t70 = ((x281==(x282&x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -24;
	int16_t x286 = -1;
	volatile int32_t x287 = INT32_MIN;
	int32_t t71 = -119;

    t71 = ((x285==(x286&x287))&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = INT32_MIN;
	volatile uint64_t x290 = 30LLU;
	volatile int64_t x291 = INT64_MAX;
	volatile int8_t x292 = INT8_MIN;

    t72 = ((x289==(x290&x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = -18141163LL;
	int16_t x294 = INT16_MIN;
	volatile uint32_t x295 = 492U;
	volatile int8_t x296 = -1;
	volatile int32_t t73 = -319;

    t73 = ((x293==(x294&x295))&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = 6803;
	uint32_t x298 = UINT32_MAX;
	static int32_t x299 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 10188;

    t74 = ((x297==(x298&x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -124279;

    t75 = ((x301==(x302&x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 13;

    t76 = ((x305==(x306&x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x311 = INT16_MAX;
	int16_t x312 = 136;
	volatile int32_t t77 = 1406;

    t77 = ((x309==(x310&x311))&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	uint16_t x315 = 3130U;
	volatile int32_t t78 = -1628;

    t78 = ((x313==(x314&x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -27;
	static int64_t x318 = INT64_MAX;
	static uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MIN;
	int64_t t79 = -102263511448LL;

    t79 = ((x317==(x318&x319))&x320);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x322 = UINT8_MAX;
	int64_t x323 = 71LL;
	volatile uint8_t x324 = 3U;
	int32_t t80 = -593;

    t80 = ((x321==(x322&x323))&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	uint32_t x326 = 676975U;
	volatile uint8_t x328 = 28U;
	int32_t t81 = -456518;

    t81 = ((x325==(x326&x327))&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -45;
	static int32_t x331 = -1;
	int64_t x332 = -1LL;

    t82 = ((x329==(x330&x331))&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x333 = 142911LLU;
	volatile int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MAX;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -557663;

    t83 = ((x333==(x334&x335))&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x338 = INT16_MIN;
	static int64_t x339 = -489473889LL;
	uint8_t x340 = 0U;

    t84 = ((x337==(x338&x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x341 = INT64_MIN;
	int8_t x342 = -3;
	static uint32_t x343 = UINT32_MAX;
	int8_t x344 = -46;
	int32_t t85 = 863058;

    t85 = ((x341==(x342&x343))&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 35U;
	static uint64_t x346 = 10LLU;
	uint16_t x347 = UINT16_MAX;
	int32_t t86 = 16487369;

    t86 = ((x345==(x346&x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -1LL;
	uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 1U;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -14;

    t87 = ((x349==(x350&x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -1LL;
	int32_t x354 = -1;
	uint16_t x355 = 22U;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 69;

    t88 = ((x353==(x354&x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	uint32_t x359 = 35U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 9;

    t89 = ((x357==(x358&x359))&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 0;
	int8_t x362 = 1;
	int8_t x363 = -9;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t90 = 347878U;

    t90 = ((x361==(x362&x363))&x364);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x366 = 812417014200804519LLU;
	int8_t x367 = INT8_MAX;
	int32_t x368 = -1;
	volatile int32_t t91 = -1;

    t91 = ((x365==(x366&x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MIN;
	int64_t x371 = 1195463909072296373LL;
	static uint8_t x372 = 0U;

    t92 = ((x369==(x370&x371))&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	static int32_t x374 = INT32_MIN;
	static volatile uint8_t x376 = 79U;
	static int32_t t93 = -7309;

    t93 = ((x373==(x374&x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x379 = 3;
	int16_t x380 = -1;
	volatile int32_t t94 = -246879385;

    t94 = ((x377==(x378&x379))&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = -411;
	volatile uint16_t x382 = 14U;
	uint32_t x384 = 2943U;
	uint32_t t95 = 16249375U;

    t95 = ((x381==(x382&x383))&x384);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 3813080779466LLU;
	int32_t x386 = INT32_MIN;
	volatile int64_t x387 = INT64_MAX;
	uint8_t x388 = 42U;
	volatile int32_t t96 = 0;

    t96 = ((x385==(x386&x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	static int64_t x390 = INT64_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t97 = 54624785U;

    t97 = ((x389==(x390&x391))&x392);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -47LL;
	int16_t x394 = 417;
	volatile int16_t x395 = INT16_MAX;
	uint16_t x396 = UINT16_MAX;

    t98 = ((x393==(x394&x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 367907739435LLU;
	int8_t x398 = INT8_MAX;
	volatile uint8_t x399 = UINT8_MAX;
	volatile uint64_t t99 = 2268098872755629890LLU;

    t99 = ((x397==(x398&x399))&x400);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = 31;
	static volatile int16_t x403 = -1;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t100 = 38;

    t100 = ((x401==(x402&x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = 121412LL;
	int16_t x407 = INT16_MIN;
	volatile int32_t t101 = 3;

    t101 = ((x405==(x406&x407))&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t102 = 219;

    t102 = ((x409==(x410&x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = INT32_MIN;
	volatile uint32_t t103 = 605644U;

    t103 = ((x413==(x414&x415))&x416);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 21678U;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 13337U;
	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t104 = -7759;

    t104 = ((x417==(x418&x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = 5133U;
	int32_t x422 = 4;
	static int8_t x423 = -47;
	int8_t x424 = -1;
	static volatile int32_t t105 = 3;

    t105 = ((x421==(x422&x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x427 = INT32_MIN;
	int16_t x428 = 1;

    t106 = ((x425==(x426&x427))&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x429 = INT16_MAX;
	volatile int64_t x430 = 816614126062433LL;
	int16_t x431 = INT16_MAX;
	uint16_t x432 = 1U;
	volatile int32_t t107 = 15;

    t107 = ((x429==(x430&x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	int16_t x435 = -1;
	int8_t x436 = 0;
	static volatile int32_t t108 = -7439;

    t108 = ((x433==(x434&x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	int64_t x438 = INT64_MIN;
	int16_t x439 = -115;
	uint8_t x440 = 0U;
	static volatile int32_t t109 = 557668074;

    t109 = ((x437==(x438&x439))&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	static uint16_t x442 = 13U;
	static volatile uint64_t x443 = 533327227101431LLU;
	volatile int64_t t110 = -1099053031435105020LL;

    t110 = ((x441==(x442&x443))&x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 810U;
	static int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	int32_t x448 = INT32_MIN;
	int32_t t111 = 0;

    t111 = ((x445==(x446&x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int16_t x450 = INT16_MIN;
	int64_t x451 = -1LL;
	uint32_t x452 = 47228U;
	uint32_t t112 = 1009121U;

    t112 = ((x449==(x450&x451))&x452);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	static int8_t x454 = INT8_MAX;
	int64_t x456 = INT64_MIN;
	volatile int64_t t113 = 23607600432LL;

    t113 = ((x453==(x454&x455))&x456);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -14LL;
	int16_t x459 = -16;
	static int64_t x460 = INT64_MAX;
	int64_t t114 = -75LL;

    t114 = ((x457==(x458&x459))&x460);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	int64_t x463 = -11501LL;
	volatile uint16_t x464 = 55U;
	int32_t t115 = -1;

    t115 = ((x461==(x462&x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -879;
	static int32_t x466 = -14237;
	int8_t x467 = -1;
	int32_t t116 = 1;

    t116 = ((x465==(x466&x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = -1;
	static int32_t x471 = -857467;
	int64_t x472 = 0LL;
	static volatile int64_t t117 = -49834612188496LL;

    t117 = ((x469==(x470&x471))&x472);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 3U;
	int32_t x474 = INT32_MIN;
	int32_t x475 = INT32_MAX;
	volatile int8_t x476 = -1;

    t118 = ((x473==(x474&x475))&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	int16_t x478 = -1;
	volatile int32_t x479 = INT32_MIN;
	volatile int8_t x480 = -17;
	volatile int32_t t119 = -474;

    t119 = ((x477==(x478&x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	uint32_t x482 = 38367U;
	uint16_t x483 = 20350U;
	int64_t x484 = INT64_MIN;

    t120 = ((x481==(x482&x483))&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 42U;
	int8_t x486 = -1;
	int64_t x487 = -1LL;
	uint64_t x488 = 74743LLU;
	uint64_t t121 = 3281199994824LLU;

    t121 = ((x485==(x486&x487))&x488);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x491 = 6U;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t122 = 123455;

    t122 = ((x489==(x490&x491))&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 2165U;
	int32_t x494 = -56371539;
	int32_t x495 = 1;

    t123 = ((x493==(x494&x495))&x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 0;
	int32_t x498 = INT32_MIN;
	static int16_t x500 = -1;

    t124 = ((x497==(x498&x499))&x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 0LL;
	volatile int32_t x502 = -65513;
	uint8_t x503 = UINT8_MAX;
	int16_t x504 = INT16_MIN;
	int32_t t125 = 1;

    t125 = ((x501==(x502&x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MIN;
	uint16_t x507 = UINT16_MAX;
	static int16_t x508 = -2026;
	int32_t t126 = 83038036;

    t126 = ((x505==(x506&x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 0;
	int32_t x510 = 74562;
	uint16_t x511 = 58U;
	static volatile int64_t x512 = INT64_MAX;
	int64_t t127 = -57478LL;

    t127 = ((x509==(x510&x511))&x512);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x513 = UINT64_MAX;
	volatile uint64_t x514 = 1030771676432233021LLU;
	int32_t x515 = INT32_MAX;
	int16_t x516 = 171;

    t128 = ((x513==(x514&x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = -71726254504113LL;
	uint8_t x519 = 65U;
	int8_t x520 = -9;
	volatile int32_t t129 = 52169;

    t129 = ((x517==(x518&x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x521 = 2077;
	volatile uint32_t x522 = 142920U;
	int16_t x523 = 2620;
	int16_t x524 = INT16_MAX;
	int32_t t130 = 88923603;

    t130 = ((x521==(x522&x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MAX;
	uint64_t x527 = 13427760639826067LLU;
	int8_t x528 = 1;
	volatile int32_t t131 = -480611;

    t131 = ((x525==(x526&x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 391U;
	int16_t x530 = INT16_MAX;
	volatile int32_t x531 = -64782422;
	int16_t x532 = INT16_MIN;
	int32_t t132 = -7;

    t132 = ((x529==(x530&x531))&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = 0U;
	uint32_t x535 = UINT32_MAX;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t133 = 28749980;

    t133 = ((x533==(x534&x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MAX;
	volatile int16_t x538 = 0;
	static uint16_t x539 = UINT16_MAX;
	uint8_t x540 = 20U;
	static volatile int32_t t134 = 2741;

    t134 = ((x537==(x538&x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	int8_t x543 = -1;
	uint16_t x544 = 103U;
	volatile int32_t t135 = 5;

    t135 = ((x541==(x542&x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int64_t x546 = 31576LL;
	uint8_t x547 = 1U;
	uint16_t x548 = UINT16_MAX;
	int32_t t136 = 37;

    t136 = ((x545==(x546&x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	int32_t x550 = INT32_MIN;
	volatile int8_t x551 = -1;
	int32_t t137 = -11;

    t137 = ((x549==(x550&x551))&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -160;
	static uint16_t x554 = 16739U;
	volatile int16_t x555 = -52;
	uint8_t x556 = UINT8_MAX;
	static int32_t t138 = 16714779;

    t138 = ((x553==(x554&x555))&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x558 = UINT64_MAX;
	uint8_t x559 = UINT8_MAX;
	volatile int64_t x560 = 2520878975LL;
	int64_t t139 = -383LL;

    t139 = ((x557==(x558&x559))&x560);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	static volatile int32_t x562 = INT32_MAX;
	uint8_t x564 = 2U;
	static int32_t t140 = 3740;

    t140 = ((x561==(x562&x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	int16_t x566 = 233;
	static volatile int32_t x567 = INT32_MIN;
	volatile int32_t t141 = 162332;

    t141 = ((x565==(x566&x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	int64_t x570 = INT64_MAX;
	static int8_t x571 = INT8_MIN;
	volatile int64_t x572 = 1LL;
	volatile int64_t t142 = -2LL;

    t142 = ((x569==(x570&x571))&x572);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	volatile uint64_t x575 = 20LLU;
	static int8_t x576 = 3;

    t143 = ((x573==(x574&x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	int64_t x578 = -1LL;
	uint8_t x580 = 2U;
	volatile int32_t t144 = -40913;

    t144 = ((x577==(x578&x579))&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x581 = UINT8_MAX;
	int16_t x582 = INT16_MAX;
	volatile int64_t x583 = INT64_MAX;
	int32_t x584 = -1;
	static volatile int32_t t145 = 1;

    t145 = ((x581==(x582&x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x585 = -1LL;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MAX;
	volatile uint8_t x588 = UINT8_MAX;
	int32_t t146 = 78589;

    t146 = ((x585==(x586&x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 29465412741LLU;
	int32_t x590 = INT32_MIN;
	int16_t x591 = -9;
	static int32_t x592 = INT32_MIN;
	int32_t t147 = 255;

    t147 = ((x589==(x590&x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x593 = INT32_MIN;
	uint16_t x594 = 1549U;
	uint8_t x595 = UINT8_MAX;
	static int32_t t148 = -6;

    t148 = ((x593==(x594&x595))&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -10933;
	int8_t x598 = INT8_MIN;
	volatile int32_t x600 = 1;
	volatile int32_t t149 = -4473982;

    t149 = ((x597==(x598&x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	uint64_t x602 = 2458315368212134250LLU;
	int32_t x603 = 74;
	int16_t x604 = -45;
	static volatile int32_t t150 = 319;

    t150 = ((x601==(x602&x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int64_t x606 = -66206LL;
	volatile int8_t x607 = -1;

    t151 = ((x605==(x606&x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = -13;
	int8_t x610 = INT8_MIN;
	int32_t x611 = INT32_MIN;
	static int64_t t152 = -51216775540671911LL;

    t152 = ((x609==(x610&x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int32_t x614 = INT32_MIN;
	uint8_t x615 = 33U;
	uint32_t x616 = UINT32_MAX;
	static volatile uint32_t t153 = 699U;

    t153 = ((x613==(x614&x615))&x616);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 1272U;
	static volatile int64_t x618 = 130766LL;
	static int64_t x619 = INT64_MIN;
	int32_t x620 = -111056;
	int32_t t154 = -18;

    t154 = ((x617==(x618&x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = INT64_MIN;
	int8_t x622 = INT8_MAX;
	volatile int32_t x623 = -1;
	uint32_t x624 = 48707U;
	uint32_t t155 = 1104890671U;

    t155 = ((x621==(x622&x623))&x624);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = INT64_MAX;
	volatile int32_t x626 = -1;
	int32_t x627 = INT32_MAX;
	int64_t x628 = -1LL;
	volatile int64_t t156 = 22050LL;

    t156 = ((x625==(x626&x627))&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = 3797U;
	static int64_t x630 = -59694LL;
	int32_t t157 = 180231;

    t157 = ((x629==(x630&x631))&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 0U;
	int64_t x634 = INT64_MIN;
	static volatile uint8_t x635 = 19U;
	int16_t x636 = 22;
	int32_t t158 = -490364;

    t158 = ((x633==(x634&x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	uint32_t x638 = UINT32_MAX;
	uint16_t x639 = 24267U;

    t159 = ((x637==(x638&x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	uint32_t x642 = UINT32_MAX;
	volatile int8_t x644 = INT8_MIN;

    t160 = ((x641==(x642&x643))&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x646 = INT8_MIN;

    t161 = ((x645==(x646&x647))&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MIN;
	int8_t x650 = INT8_MAX;
	int32_t x651 = -1;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t162 = 4065LLU;

    t162 = ((x649==(x650&x651))&x652);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int32_t x654 = 13;
	uint8_t x655 = UINT8_MAX;
	static int32_t t163 = -52;

    t163 = ((x653==(x654&x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	static int8_t x658 = INT8_MIN;
	int32_t x659 = -160323;
	volatile uint8_t x660 = 115U;
	int32_t t164 = -14;

    t164 = ((x657==(x658&x659))&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = -1LL;
	uint64_t x662 = 945178477689LLU;
	volatile int32_t x664 = 660;
	int32_t t165 = 2732451;

    t165 = ((x661==(x662&x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	int32_t x666 = INT32_MAX;
	volatile uint64_t x667 = 1337218669LLU;
	uint32_t x668 = 30265216U;
	volatile uint32_t t166 = 7610U;

    t166 = ((x665==(x666&x667))&x668);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x671 = INT16_MIN;
	volatile int32_t t167 = -7;

    t167 = ((x669==(x670&x671))&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = INT16_MIN;
	int32_t x674 = INT32_MIN;
	static int8_t x675 = INT8_MIN;
	static int64_t x676 = -1LL;

    t168 = ((x673==(x674&x675))&x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x677 = INT64_MIN;
	static uint8_t x678 = UINT8_MAX;
	static uint8_t x679 = UINT8_MAX;
	volatile uint32_t x680 = UINT32_MAX;
	volatile uint32_t t169 = 0U;

    t169 = ((x677==(x678&x679))&x680);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 2;
	int64_t x682 = INT64_MIN;
	static int8_t x683 = INT8_MIN;
	int8_t x684 = -1;
	int32_t t170 = -12597391;

    t170 = ((x681==(x682&x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	volatile int16_t x687 = INT16_MIN;
	volatile uint64_t x688 = 479562186050841327LLU;
	volatile uint64_t t171 = 2078LLU;

    t171 = ((x685==(x686&x687))&x688);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 3485;
	uint64_t x690 = UINT64_MAX;
	int8_t x691 = INT8_MAX;
	static uint32_t x692 = 7846U;
	static uint32_t t172 = 1U;

    t172 = ((x689==(x690&x691))&x692);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 481U;
	volatile uint64_t x694 = 376675505369043LLU;
	int32_t x696 = -550189;
	int32_t t173 = -136714;

    t173 = ((x693==(x694&x695))&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 268336568098153728LLU;
	int16_t x698 = -1;
	uint64_t x699 = 230LLU;
	int16_t x700 = 0;
	static volatile int32_t t174 = 577201;

    t174 = ((x697==(x698&x699))&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	volatile int32_t x703 = INT32_MIN;
	int16_t x704 = INT16_MIN;
	static int32_t t175 = 1;

    t175 = ((x701==(x702&x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = -1;
	static int64_t x706 = -4711LL;
	uint32_t x707 = 139U;
	volatile int32_t t176 = 23132;

    t176 = ((x705==(x706&x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = -18;
	int16_t x710 = 4;
	volatile int32_t x712 = INT32_MIN;

    t177 = ((x709==(x710&x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	static int8_t x715 = INT8_MIN;
	volatile int64_t x716 = INT64_MIN;
	volatile int64_t t178 = -6309229944LL;

    t178 = ((x713==(x714&x715))&x716);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 3755856710LLU;
	int64_t x718 = -1LL;
	uint32_t x719 = 7536567U;
	int16_t x720 = -485;
	int32_t t179 = -31191736;

    t179 = ((x717==(x718&x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 306795U;
	volatile int64_t x722 = INT64_MAX;
	static volatile int8_t x723 = 31;
	static int16_t x724 = INT16_MIN;

    t180 = ((x721==(x722&x723))&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = 33;
	int64_t x727 = INT64_MIN;
	int8_t x728 = -14;
	static volatile int32_t t181 = 16280;

    t181 = ((x725==(x726&x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	volatile int16_t x730 = INT16_MAX;
	volatile int64_t x731 = 1653666541LL;
	int64_t x732 = -1LL;

    t182 = ((x729==(x730&x731))&x732);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 667663;
	static uint64_t x734 = 760LLU;
	volatile int32_t x735 = -1;
	uint32_t x736 = 223U;
	uint32_t t183 = 4U;

    t183 = ((x733==(x734&x735))&x736);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int32_t x738 = INT32_MAX;
	static int64_t x739 = INT64_MIN;
	uint64_t x740 = UINT64_MAX;
	static uint64_t t184 = 14911272LLU;

    t184 = ((x737==(x738&x739))&x740);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	int16_t x743 = -1;
	volatile uint64_t x744 = 6599LLU;
	volatile uint64_t t185 = 74411554038611LLU;

    t185 = ((x741==(x742&x743))&x744);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MIN;
	static volatile uint8_t x748 = 3U;
	static volatile int32_t t186 = 15;

    t186 = ((x745==(x746&x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 5;
	static int16_t x751 = 1;
	int8_t x752 = INT8_MIN;
	volatile int32_t t187 = -1159418;

    t187 = ((x749==(x750&x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 29;
	int32_t x754 = 39960;
	static int64_t x756 = INT64_MAX;
	volatile int64_t t188 = -11564695057091514LL;

    t188 = ((x753==(x754&x755))&x756);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x757 = 85934LLU;
	int16_t x758 = INT16_MIN;
	static int8_t x759 = INT8_MAX;
	static volatile uint8_t x760 = UINT8_MAX;
	int32_t t189 = 43199;

    t189 = ((x757==(x758&x759))&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	volatile uint16_t x762 = 13742U;
	volatile int64_t x763 = INT64_MAX;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = 0;

    t190 = ((x761==(x762&x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	static int16_t x766 = INT16_MAX;
	int64_t x767 = INT64_MAX;
	static volatile int32_t x768 = INT32_MAX;
	volatile int32_t t191 = 0;

    t191 = ((x765==(x766&x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	uint8_t x770 = 2U;
	volatile int64_t x771 = 646373686LL;
	int64_t t192 = 96785124971643LL;

    t192 = ((x769==(x770&x771))&x772);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	uint32_t x776 = 19032883U;
	volatile uint32_t t193 = 2804U;

    t193 = ((x773==(x774&x775))&x776);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x778 = -1;
	int32_t x779 = -1;
	int64_t x780 = INT64_MAX;
	static int64_t t194 = -7680737077451972LL;

    t194 = ((x777==(x778&x779))&x780);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = -5;
	uint64_t x782 = UINT64_MAX;
	volatile int64_t x784 = INT64_MIN;
	int64_t t195 = 2LL;

    t195 = ((x781==(x782&x783))&x784);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x785 = -196354;
	uint16_t x786 = UINT16_MAX;
	static uint32_t x787 = 412U;
	volatile uint64_t t196 = 62605461271LLU;

    t196 = ((x785==(x786&x787))&x788);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	int32_t x790 = INT32_MIN;
	int64_t x791 = INT64_MIN;
	int16_t x792 = INT16_MIN;
	static int32_t t197 = 3038;

    t197 = ((x789==(x790&x791))&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = 1LL;
	int64_t x795 = INT64_MAX;
	int64_t x796 = INT64_MAX;

    t198 = ((x793==(x794&x795))&x796);

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x797 = UINT16_MAX;
	static uint16_t x798 = UINT16_MAX;
	int8_t x799 = INT8_MIN;
	int64_t x800 = -420732518LL;
	int64_t t199 = 16004641041LL;

    t199 = ((x797==(x798&x799))&x800);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

