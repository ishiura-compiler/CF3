
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

static volatile int16_t x2 = -1;
int16_t x13 = 3279;
int16_t x24 = INT16_MIN;
int8_t x29 = -4;
volatile int32_t t8 = -370635624;
int32_t t9 = 821165519;
int32_t x46 = -26903;
volatile int32_t t11 = -16903001;
int16_t x51 = -1;
volatile int32_t t14 = 0;
volatile int64_t x62 = -22740137LL;
static int64_t x65 = INT64_MIN;
uint32_t x68 = 88668U;
volatile int32_t x70 = -1931;
uint32_t x87 = UINT32_MAX;
int32_t x91 = INT32_MIN;
volatile int32_t t23 = 2835505;
volatile uint8_t x106 = UINT8_MAX;
volatile int8_t x122 = 28;
static uint32_t x126 = UINT32_MAX;
int32_t x127 = INT32_MIN;
static int64_t x131 = 51026263981517832LL;
int32_t t34 = -11065836;
uint32_t x161 = UINT32_MAX;
int64_t x165 = INT64_MIN;
int64_t x167 = INT64_MIN;
uint64_t x176 = 4328334834492LLU;
uint64_t x178 = 21960642LLU;
int8_t x180 = 0;
uint16_t x181 = UINT16_MAX;
volatile int16_t x190 = INT16_MIN;
int32_t t43 = 144363;
int32_t t45 = 11;
int32_t x204 = INT32_MAX;
uint16_t x205 = 58U;
volatile int32_t x211 = INT32_MAX;
uint32_t x213 = 977319585U;
uint32_t x218 = UINT32_MAX;
static int32_t x219 = INT32_MIN;
uint64_t x224 = UINT64_MAX;
uint16_t x248 = UINT16_MAX;
static volatile int32_t t56 = 15458636;
static volatile int32_t t57 = -96553758;
static int32_t x275 = INT32_MAX;
int16_t x276 = 55;
int32_t t63 = -46345291;
uint32_t x279 = 785781472U;
static volatile int64_t x283 = -5505437464LL;
uint16_t x285 = UINT16_MAX;
uint16_t x287 = 15334U;
int8_t x288 = INT8_MIN;
uint32_t x298 = 33959589U;
volatile int8_t x299 = INT8_MIN;
int32_t x301 = -1;
uint64_t x304 = 0LLU;
uint16_t x309 = UINT16_MAX;
int32_t x320 = -10;
static int16_t x325 = 5807;
int32_t x327 = -1;
uint64_t x334 = UINT64_MAX;
int32_t t78 = 9;
uint32_t x355 = 580U;
int16_t x375 = -1;
static int32_t x384 = INT32_MIN;
static int16_t x386 = -1;
int64_t x390 = INT64_MIN;
uint16_t x400 = UINT16_MAX;
int32_t t90 = -2044595;
uint32_t x402 = 324321U;
int32_t x419 = INT32_MAX;
volatile int16_t x423 = -1;
int32_t t95 = -22568739;
uint8_t x425 = UINT8_MAX;
int16_t x427 = 1930;
volatile uint64_t x430 = UINT64_MAX;
int8_t x443 = INT8_MAX;
uint64_t x446 = 42821924027888190LLU;
static int8_t x447 = INT8_MAX;
volatile int32_t x450 = INT32_MAX;
int16_t x452 = INT16_MIN;
volatile int16_t x455 = INT16_MIN;
int16_t x456 = 7169;
static int16_t x458 = INT16_MIN;
volatile int32_t t104 = 397;
static int32_t x461 = INT32_MAX;
int64_t x465 = INT64_MIN;
uint16_t x473 = 1U;
int8_t x478 = 60;
int16_t x485 = 105;
uint64_t x486 = UINT64_MAX;
int64_t x494 = 952859LL;
uint16_t x502 = 511U;
uint8_t x503 = 5U;
int16_t x505 = INT16_MAX;
int8_t x507 = -1;
uint16_t x509 = UINT16_MAX;
volatile int8_t x512 = -1;
volatile int32_t t115 = 4843;
int8_t x515 = INT8_MAX;
static int32_t x519 = -1;
int32_t x521 = -1;
uint16_t x528 = UINT16_MAX;
volatile int32_t t119 = 371;
volatile int32_t t120 = -448661899;
uint16_t x541 = 650U;
uint32_t x542 = 12958101U;
int32_t t123 = 18233;
volatile uint16_t x549 = UINT16_MAX;
int8_t x551 = 9;
uint32_t x560 = UINT32_MAX;
static volatile int16_t x561 = INT16_MIN;
static int16_t x562 = INT16_MIN;
uint64_t x574 = 26497280711748LLU;
int8_t x579 = 3;
volatile int32_t t131 = 2046;
volatile int64_t x597 = -31602LL;
int32_t x598 = 14236;
int32_t t135 = 38056712;
volatile int32_t x611 = 66;
int16_t x618 = INT16_MIN;
int32_t x634 = 1618;
uint32_t x642 = 5U;
int16_t x643 = -1;
uint32_t x648 = 1U;
uint8_t x652 = UINT8_MAX;
uint32_t x654 = UINT32_MAX;
static int8_t x656 = INT8_MAX;
volatile uint8_t x662 = UINT8_MAX;
static uint64_t x681 = UINT64_MAX;
static uint16_t x685 = 4704U;
uint64_t x686 = 3318462855026LLU;
static int64_t x688 = INT64_MIN;
static volatile int32_t t154 = 238;
volatile int8_t x690 = INT8_MAX;
volatile int64_t x694 = -172131202LL;
volatile int32_t x700 = -1;
static int8_t x715 = INT8_MIN;
uint64_t x725 = UINT64_MAX;
volatile int32_t t163 = -29272;
int16_t x734 = INT16_MAX;
volatile uint16_t x738 = 7772U;
volatile int32_t t165 = 104;
uint16_t x742 = UINT16_MAX;
int64_t x747 = INT64_MIN;
volatile int32_t t167 = 71;
uint32_t x750 = 685420132U;
uint8_t x751 = 2U;
uint16_t x753 = 1361U;
int64_t x757 = 6LL;
int32_t t170 = 151820778;
static int32_t x764 = INT32_MAX;
int32_t x766 = -1;
static int64_t x772 = INT64_MIN;
volatile int32_t t175 = -5181694;
static volatile int32_t t177 = -1;
int32_t x790 = -10008692;
uint16_t x797 = 40U;
static int8_t x811 = 27;
int32_t x813 = 1;
volatile int32_t t183 = -16480047;
int32_t x821 = INT32_MIN;
static int8_t x822 = -1;
static int32_t t187 = -1;
volatile uint32_t x833 = UINT32_MAX;
volatile int32_t t189 = -2267290;
int16_t x842 = -1;
volatile int64_t x865 = 104152128LL;
int32_t x871 = INT32_MAX;
volatile int8_t x880 = -1;


void f0(void) {
    	int32_t x1 = 3100;
	static int16_t x3 = 733;
	int32_t x4 = -1;
	volatile int32_t t0 = -46;

    t0 = ((x1!=(x2-x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = -1LL;
	volatile int32_t t1 = -103633;

    t1 = ((x5!=(x6-x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 17LLU;
	uint16_t x10 = 31U;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = -74213165;

    t2 = ((x9!=(x10-x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 11527399;

    t3 = ((x13!=(x14-x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = 1;
	uint64_t x18 = 123371LLU;
	int8_t x19 = INT8_MAX;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = -9;

    t4 = ((x17!=(x18-x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1837463879LLU;
	static int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int32_t t5 = -81156;

    t5 = ((x21!=(x22-x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 670677573023LLU;
	int16_t x26 = INT16_MAX;
	volatile int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = -30155913;

    t6 = ((x25!=(x26-x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x30 = 458059808U;
	static uint16_t x31 = UINT16_MAX;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -245599371;

    t7 = ((x29!=(x30-x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	int64_t x34 = INT64_MAX;
	int16_t x35 = INT16_MAX;
	static int64_t x36 = INT64_MIN;

    t8 = ((x33!=(x34-x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	volatile int32_t x38 = -336;
	volatile int64_t x39 = INT64_MIN;
	static volatile int16_t x40 = INT16_MAX;

    t9 = ((x37!=(x38-x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -6;
	int32_t x42 = INT32_MIN;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = 4;
	volatile int32_t t10 = 41;

    t10 = ((x41!=(x42-x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int64_t x47 = -1LL;
	int64_t x48 = INT64_MIN;

    t11 = ((x45!=(x46-x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 6816LLU;
	int8_t x50 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t12 = -862659291;

    t12 = ((x49!=(x50-x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	static volatile int64_t x54 = INT64_MAX;
	volatile int8_t x55 = 1;
	int8_t x56 = -12;
	int32_t t13 = 91979334;

    t13 = ((x53!=(x54-x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 59U;
	uint8_t x58 = UINT8_MAX;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = -1;

    t14 = ((x57!=(x58-x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int32_t x63 = -1;
	uint8_t x64 = 14U;
	volatile int32_t t15 = -13;

    t15 = ((x61!=(x62-x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 56U;
	int8_t x67 = -1;
	int32_t t16 = -1;

    t16 = ((x65!=(x66-x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	volatile int8_t x71 = INT8_MAX;
	uint64_t x72 = 317841212LLU;
	int32_t t17 = 111;

    t17 = ((x69!=(x70-x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x73 = 1U;
	volatile uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -2;
	static volatile int32_t t18 = 1;

    t18 = ((x73!=(x74-x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	int16_t x82 = 0;
	uint16_t x83 = 164U;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t19 = 37808;

    t19 = ((x81!=(x82-x83))==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x85 = 16774615370858409LLU;
	int16_t x86 = -17;
	static volatile uint16_t x88 = 3759U;
	int32_t t20 = 3;

    t20 = ((x85!=(x86-x87))==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x89 = 0U;
	int32_t x90 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t21 = 1984;

    t21 = ((x89!=(x90-x91))==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x93 = -4624;
	volatile uint16_t x94 = UINT16_MAX;
	volatile uint16_t x95 = 767U;
	int8_t x96 = 32;
	volatile int32_t t22 = 10;

    t22 = ((x93!=(x94-x95))==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = UINT32_MAX;
	static int8_t x98 = INT8_MIN;
	static volatile int64_t x99 = 92LL;
	static int8_t x100 = INT8_MIN;

    t23 = ((x97!=(x98-x99))==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x101 = INT32_MAX;
	uint8_t x102 = 1U;
	static int16_t x103 = 1359;
	int32_t x104 = -1;
	int32_t t24 = 12850586;

    t24 = ((x101!=(x102-x103))==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = UINT16_MAX;
	static int64_t x107 = 1276653LL;
	static volatile uint32_t x108 = UINT32_MAX;
	static volatile int32_t t25 = -2180;

    t25 = ((x105!=(x106-x107))==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = INT16_MIN;
	uint32_t x110 = 9769944U;
	static int64_t x111 = -934829363134LL;
	uint8_t x112 = UINT8_MAX;
	int32_t t26 = -24433;

    t26 = ((x109!=(x110-x111))==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = -1;
	uint8_t x114 = 1U;
	volatile int8_t x115 = INT8_MAX;
	uint8_t x116 = UINT8_MAX;
	static volatile int32_t t27 = 309519506;

    t27 = ((x113!=(x114-x115))==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x121 = -1LL;
	int16_t x123 = 2673;
	uint16_t x124 = UINT16_MAX;
	static int32_t t28 = 307252;

    t28 = ((x121!=(x122-x123))==x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 0U;
	static int8_t x128 = -30;
	volatile int32_t t29 = 4;

    t29 = ((x125!=(x126-x127))==x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = 9;
	static uint32_t x130 = 35314153U;
	int32_t x132 = INT32_MAX;
	static int32_t t30 = -11;

    t30 = ((x129!=(x130-x131))==x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = -1LL;
	int64_t x134 = INT64_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t31 = -7706;

    t31 = ((x133!=(x134-x135))==x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = -1;
	int64_t x142 = -1LL;
	static int32_t x143 = INT32_MAX;
	volatile int16_t x144 = 89;
	int32_t t32 = 52766953;

    t32 = ((x141!=(x142-x143))==x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = 213;
	int64_t x146 = INT64_MAX;
	uint16_t x147 = 15659U;
	volatile int32_t x148 = INT32_MIN;
	static int32_t t33 = 1;

    t33 = ((x145!=(x146-x147))==x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = 14;
	uint32_t x150 = 35U;
	static int64_t x151 = INT64_MAX;
	static uint16_t x152 = 83U;

    t34 = ((x149!=(x150-x151))==x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x157 = -4219;
	static int64_t x158 = -2415374924373LL;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t35 = 22295;

    t35 = ((x157!=(x158-x159))==x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x162 = INT16_MAX;
	static int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MIN;
	volatile int32_t t36 = -22;

    t36 = ((x161!=(x162-x163))==x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x166 = INT32_MIN;
	int32_t x168 = 21;
	volatile int32_t t37 = 1933114;

    t37 = ((x165!=(x166-x167))==x168);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x169 = 17650U;
	volatile int64_t x170 = -1LL;
	uint32_t x171 = 66U;
	int8_t x172 = 0;
	int32_t t38 = -242959;

    t38 = ((x169!=(x170-x171))==x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = INT16_MIN;
	static uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 23703U;
	volatile int32_t t39 = 1052;

    t39 = ((x173!=(x174-x175))==x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x177 = 114U;
	static int32_t x179 = INT32_MIN;
	int32_t t40 = -1;

    t40 = ((x177!=(x178-x179))==x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x182 = INT8_MIN;
	static int16_t x183 = -1;
	int32_t x184 = INT32_MAX;
	static volatile int32_t t41 = 2;

    t41 = ((x181!=(x182-x183))==x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x185 = -1;
	int32_t x186 = 219952;
	static int16_t x187 = INT16_MIN;
	uint32_t x188 = 7353866U;
	volatile int32_t t42 = 532008050;

    t42 = ((x185!=(x186-x187))==x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x189 = UINT8_MAX;
	static uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 84U;

    t43 = ((x189!=(x190-x191))==x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x193 = INT64_MIN;
	int16_t x194 = -44;
	volatile int16_t x195 = -9847;
	static volatile uint64_t x196 = 272LLU;
	int32_t t44 = -110602;

    t44 = ((x193!=(x194-x195))==x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x197 = 4U;
	int16_t x198 = -970;
	volatile uint32_t x199 = 988322U;
	int64_t x200 = -483051996LL;

    t45 = ((x197!=(x198-x199))==x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	uint64_t x203 = 13916LLU;
	int32_t t46 = 17;

    t46 = ((x201!=(x202-x203))==x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x206 = 1U;
	static int16_t x207 = INT16_MIN;
	int8_t x208 = -9;
	volatile int32_t t47 = -655512;

    t47 = ((x205!=(x206-x207))==x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = 1;
	static volatile uint64_t x210 = 1871949LLU;
	int16_t x212 = -3;
	static volatile int32_t t48 = 189325359;

    t48 = ((x209!=(x210-x211))==x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x214 = 36;
	volatile uint64_t x215 = 1367285310LLU;
	int32_t x216 = -32369908;
	volatile int32_t t49 = -478713;

    t49 = ((x213!=(x214-x215))==x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x217 = 73U;
	static volatile int32_t x220 = INT32_MIN;
	int32_t t50 = -1015150986;

    t50 = ((x217!=(x218-x219))==x220);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x221 = -8265LL;
	static volatile int32_t x222 = 295669299;
	int16_t x223 = INT16_MIN;
	volatile int32_t t51 = 22620582;

    t51 = ((x221!=(x222-x223))==x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x225 = INT16_MAX;
	int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 1U;
	volatile int32_t t52 = -16892;

    t52 = ((x225!=(x226-x227))==x228);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = INT32_MAX;
	volatile int16_t x230 = -1;
	static int32_t x231 = INT32_MIN;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t53 = -184057;

    t53 = ((x229!=(x230-x231))==x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = INT16_MIN;
	volatile int64_t x234 = INT64_MAX;
	uint16_t x235 = 14125U;
	uint8_t x236 = UINT8_MAX;
	static int32_t t54 = 1478633;

    t54 = ((x233!=(x234-x235))==x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x241 = 1U;
	volatile int64_t x242 = -1LL;
	int32_t x243 = 738220;
	volatile int32_t x244 = -1;
	volatile int32_t t55 = 10;

    t55 = ((x241!=(x242-x243))==x244);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x245 = UINT16_MAX;
	static uint16_t x246 = 225U;
	int64_t x247 = 163180718145018649LL;

    t56 = ((x245!=(x246-x247))==x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	int8_t x251 = 17;
	int64_t x252 = -1825310237LL;

    t57 = ((x249!=(x250-x251))==x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x253 = -1;
	static int8_t x254 = INT8_MIN;
	volatile int16_t x255 = -1;
	uint32_t x256 = 11684936U;
	int32_t t58 = 20487086;

    t58 = ((x253!=(x254-x255))==x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x257 = INT64_MIN;
	uint16_t x258 = 0U;
	uint32_t x259 = 982U;
	static volatile int32_t x260 = -1;
	static int32_t t59 = 1;

    t59 = ((x257!=(x258-x259))==x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = INT64_MAX;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = 478142LL;
	static volatile int32_t t60 = 754821;

    t60 = ((x261!=(x262-x263))==x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = -1LL;
	static uint16_t x266 = UINT16_MAX;
	int16_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t61 = 0;

    t61 = ((x265!=(x266-x267))==x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x269 = 6;
	uint32_t x270 = 2519U;
	static int16_t x271 = 351;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t62 = 0;

    t62 = ((x269!=(x270-x271))==x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MAX;

    t63 = ((x273!=(x274-x275))==x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MAX;
	static int8_t x278 = INT8_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t64 = 24;

    t64 = ((x277!=(x278-x279))==x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x281 = 1116;
	uint8_t x282 = 94U;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t65 = -2123;

    t65 = ((x281!=(x282-x283))==x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x286 = 3U;
	int32_t t66 = 196307;

    t66 = ((x285!=(x286-x287))==x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = -1;
	int16_t x294 = -86;
	int16_t x295 = INT16_MIN;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t67 = 57752;

    t67 = ((x293!=(x294-x295))==x296);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MAX;
	static uint32_t x300 = 1550851389U;
	int32_t t68 = -1;

    t68 = ((x297!=(x298-x299))==x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x302 = -1;
	static uint64_t x303 = UINT64_MAX;
	int32_t t69 = 873041;

    t69 = ((x301!=(x302-x303))==x304);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	uint32_t x312 = 5930940U;
	volatile int32_t t70 = -33149448;

    t70 = ((x309!=(x310-x311))==x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x313 = 1U;
	static volatile int32_t x314 = INT32_MIN;
	static int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	int32_t t71 = 112;

    t71 = ((x313!=(x314-x315))==x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = 1;
	int64_t x318 = 122201637LL;
	int64_t x319 = -84367142124023LL;
	volatile int32_t t72 = 7879898;

    t72 = ((x317!=(x318-x319))==x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x326 = 503404665LLU;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t73 = -2;

    t73 = ((x325!=(x326-x327))==x328);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x329 = INT32_MIN;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = -65098;
	int32_t x332 = 3609750;
	int32_t t74 = -3713;

    t74 = ((x329!=(x330-x331))==x332);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = -1404151LL;
	static volatile int16_t x335 = 13314;
	int32_t x336 = INT32_MAX;
	volatile int32_t t75 = -314411690;

    t75 = ((x333!=(x334-x335))==x336);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x337 = 1264288U;
	static volatile int64_t x338 = INT64_MIN;
	static int64_t x339 = 0LL;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t76 = -1357032;

    t76 = ((x337!=(x338-x339))==x340);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x341 = 22U;
	int8_t x342 = -1;
	int64_t x343 = INT64_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t77 = 28572399;

    t77 = ((x341!=(x342-x343))==x344);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	static volatile uint64_t x347 = UINT64_MAX;
	static uint8_t x348 = UINT8_MAX;

    t78 = ((x345!=(x346-x347))==x348);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x349 = 407625LL;
	int16_t x350 = INT16_MIN;
	static int16_t x351 = INT16_MIN;
	int64_t x352 = 4468394LL;
	int32_t t79 = 298;

    t79 = ((x349!=(x350-x351))==x352);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x353 = INT8_MIN;
	volatile int8_t x354 = INT8_MIN;
	static volatile int64_t x356 = 27134509027238013LL;
	volatile int32_t t80 = -189613328;

    t80 = ((x353!=(x354-x355))==x356);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x357 = INT32_MIN;
	volatile int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MAX;
	uint32_t x360 = 16961U;
	int32_t t81 = -63676866;

    t81 = ((x357!=(x358-x359))==x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int8_t x363 = 5;
	uint32_t x364 = 7U;
	static volatile int32_t t82 = -17;

    t82 = ((x361!=(x362-x363))==x364);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x365 = 2253;
	uint32_t x366 = 626212U;
	int8_t x367 = INT8_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t83 = -6371075;

    t83 = ((x365!=(x366-x367))==x368);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x369 = 1U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	volatile int16_t x372 = -1;
	int32_t t84 = 41876;

    t84 = ((x369!=(x370-x371))==x372);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = 29U;
	int16_t x374 = 6238;
	int8_t x376 = INT8_MIN;
	volatile int32_t t85 = 0;

    t85 = ((x373!=(x374-x375))==x376);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x381 = -172752;
	int32_t x382 = -17;
	int8_t x383 = -1;
	static volatile int32_t t86 = 11;

    t86 = ((x381!=(x382-x383))==x384);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x385 = 1;
	uint8_t x387 = 6U;
	static int32_t x388 = 1470487;
	int32_t t87 = -28346109;

    t87 = ((x385!=(x386-x387))==x388);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x389 = -3272476;
	static volatile int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	volatile int32_t t88 = 3840;

    t88 = ((x389!=(x390-x391))==x392);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x393 = 126U;
	volatile int8_t x394 = -1;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t89 = -618;

    t89 = ((x393!=(x394-x395))==x396);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x397 = 21012U;
	volatile int64_t x398 = INT64_MAX;
	uint64_t x399 = 3571567261168LLU;

    t90 = ((x397!=(x398-x399))==x400);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x401 = 928;
	static uint16_t x403 = 115U;
	int64_t x404 = INT64_MAX;
	static volatile int32_t t91 = 7820418;

    t91 = ((x401!=(x402-x403))==x404);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x409 = INT32_MAX;
	int8_t x410 = INT8_MIN;
	uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = INT8_MIN;
	int32_t t92 = -3670752;

    t92 = ((x409!=(x410-x411))==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x413 = 26LLU;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = 38U;
	int16_t x416 = INT16_MIN;
	volatile int32_t t93 = 459;

    t93 = ((x413!=(x414-x415))==x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MAX;
	volatile int8_t x420 = 6;
	int32_t t94 = -1;

    t94 = ((x417!=(x418-x419))==x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x421 = 2;
	int8_t x422 = 0;
	static uint32_t x424 = UINT32_MAX;

    t95 = ((x421!=(x422-x423))==x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x426 = 396;
	static uint64_t x428 = UINT64_MAX;
	int32_t t96 = -293;

    t96 = ((x425!=(x426-x427))==x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x429 = INT16_MIN;
	uint16_t x431 = 4U;
	static volatile int32_t x432 = INT32_MIN;
	int32_t t97 = 2917179;

    t97 = ((x429!=(x430-x431))==x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x434 = -1;
	static int64_t x435 = INT64_MIN;
	uint16_t x436 = 3463U;
	static volatile int32_t t98 = -358;

    t98 = ((x433!=(x434-x435))==x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x437 = 14U;
	uint16_t x438 = 6U;
	int16_t x439 = INT16_MAX;
	static int16_t x440 = INT16_MAX;
	volatile int32_t t99 = -12776;

    t99 = ((x437!=(x438-x439))==x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x441 = 775U;
	static int16_t x442 = INT16_MAX;
	uint16_t x444 = 0U;
	int32_t t100 = -582799;

    t100 = ((x441!=(x442-x443))==x444);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x445 = 324110393LLU;
	uint64_t x448 = 7001037LLU;
	volatile int32_t t101 = 2631301;

    t101 = ((x445!=(x446-x447))==x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x449 = 80254701LLU;
	static volatile int64_t x451 = -3965014423877554771LL;
	volatile int32_t t102 = -10684;

    t102 = ((x449!=(x450-x451))==x452);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x453 = 3977;
	volatile int8_t x454 = -57;
	int32_t t103 = -1;

    t103 = ((x453!=(x454-x455))==x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x457 = -1;
	uint16_t x459 = 4U;
	volatile int8_t x460 = 63;

    t104 = ((x457!=(x458-x459))==x460);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x462 = -3;
	int8_t x463 = INT8_MIN;
	static volatile int32_t x464 = INT32_MIN;
	volatile int32_t t105 = 111735268;

    t105 = ((x461!=(x462-x463))==x464);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x466 = INT64_MIN;
	uint64_t x467 = 31647697360LLU;
	volatile uint64_t x468 = UINT64_MAX;
	int32_t t106 = 901539127;

    t106 = ((x465!=(x466-x467))==x468);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x469 = 26U;
	static volatile uint64_t x470 = UINT64_MAX;
	volatile int16_t x471 = 162;
	volatile uint16_t x472 = 967U;
	int32_t t107 = 652297491;

    t107 = ((x469!=(x470-x471))==x472);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x474 = 26;
	static int16_t x475 = 0;
	int16_t x476 = 1454;
	int32_t t108 = -6948031;

    t108 = ((x473!=(x474-x475))==x476);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x477 = -2;
	volatile int16_t x479 = 37;
	static int64_t x480 = INT64_MIN;
	int32_t t109 = -8385050;

    t109 = ((x477!=(x478-x479))==x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x487 = 0;
	static int16_t x488 = INT16_MAX;
	static int32_t t110 = -7866017;

    t110 = ((x485!=(x486-x487))==x488);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = 23304670;
	volatile int16_t x495 = INT16_MIN;
	static uint32_t x496 = 243U;
	static int32_t t111 = 25269059;

    t111 = ((x493!=(x494-x495))==x496);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x497 = UINT16_MAX;
	int16_t x498 = INT16_MIN;
	uint8_t x499 = 4U;
	static volatile int64_t x500 = 2335638078126LL;
	int32_t t112 = 72046123;

    t112 = ((x497!=(x498-x499))==x500);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x501 = INT32_MIN;
	uint16_t x504 = UINT16_MAX;
	int32_t t113 = 31;

    t113 = ((x501!=(x502-x503))==x504);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x506 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t114 = 8580723;

    t114 = ((x505!=(x506-x507))==x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x510 = UINT16_MAX;
	uint8_t x511 = 3U;

    t115 = ((x509!=(x510-x511))==x512);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x513 = INT64_MIN;
	int32_t x514 = 15160209;
	int64_t x516 = -1LL;
	static volatile int32_t t116 = -1;

    t116 = ((x513!=(x514-x515))==x516);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x517 = 105LLU;
	int64_t x518 = -1LL;
	int64_t x520 = INT64_MIN;
	volatile int32_t t117 = -7099;

    t117 = ((x517!=(x518-x519))==x520);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x522 = -1;
	uint64_t x523 = 111860148923664815LLU;
	int32_t x524 = 150;
	static int32_t t118 = 49;

    t118 = ((x521!=(x522-x523))==x524);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x525 = 132736891U;
	int16_t x526 = INT16_MIN;
	uint8_t x527 = 1U;

    t119 = ((x525!=(x526-x527))==x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x529 = 121667029LL;
	int16_t x530 = -1;
	int16_t x531 = -1;
	static int16_t x532 = -1;

    t120 = ((x529!=(x530-x531))==x532);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x533 = UINT32_MAX;
	static volatile int16_t x534 = 153;
	int16_t x535 = INT16_MIN;
	int32_t x536 = -1;
	volatile int32_t t121 = -340768590;

    t121 = ((x533!=(x534-x535))==x536);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x537 = 8U;
	int8_t x538 = INT8_MAX;
	int32_t x539 = -1;
	volatile int8_t x540 = -29;
	volatile int32_t t122 = -18602160;

    t122 = ((x537!=(x538-x539))==x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x543 = INT8_MIN;
	static volatile int32_t x544 = 661;

    t123 = ((x541!=(x542-x543))==x544);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x545 = 155LLU;
	int64_t x546 = INT64_MAX;
	uint8_t x547 = 18U;
	volatile uint8_t x548 = 1U;
	volatile int32_t t124 = -424345679;

    t124 = ((x545!=(x546-x547))==x548);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x550 = 12006931LLU;
	int64_t x552 = -1LL;
	static volatile int32_t t125 = 230;

    t125 = ((x549!=(x550-x551))==x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x553 = UINT64_MAX;
	int32_t x554 = -343;
	static volatile uint32_t x555 = UINT32_MAX;
	int8_t x556 = -1;
	int32_t t126 = 43935;

    t126 = ((x553!=(x554-x555))==x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x557 = 0U;
	int32_t x558 = -1;
	volatile int64_t x559 = INT64_MIN;
	int32_t t127 = 3333;

    t127 = ((x557!=(x558-x559))==x560);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x563 = 101U;
	int8_t x564 = INT8_MIN;
	int32_t t128 = 7;

    t128 = ((x561!=(x562-x563))==x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x569 = UINT8_MAX;
	static uint16_t x570 = 9U;
	uint32_t x571 = UINT32_MAX;
	uint64_t x572 = UINT64_MAX;
	static int32_t t129 = -11035736;

    t129 = ((x569!=(x570-x571))==x572);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x573 = -1;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;
	volatile int32_t t130 = 29;

    t130 = ((x573!=(x574-x575))==x576);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x577 = 80972U;
	int16_t x578 = -3137;
	volatile uint16_t x580 = UINT16_MAX;

    t131 = ((x577!=(x578-x579))==x580);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x581 = UINT8_MAX;
	int16_t x582 = -15;
	uint64_t x583 = 3527LLU;
	int64_t x584 = -66221LL;
	static volatile int32_t t132 = 174122;

    t132 = ((x581!=(x582-x583))==x584);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x589 = INT32_MIN;
	int64_t x590 = -6016503240LL;
	static int16_t x591 = INT16_MAX;
	uint8_t x592 = 2U;
	volatile int32_t t133 = -775;

    t133 = ((x589!=(x590-x591))==x592);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x593 = INT32_MIN;
	volatile int64_t x594 = -1LL;
	static int16_t x595 = INT16_MAX;
	int8_t x596 = -1;
	volatile int32_t t134 = -89568;

    t134 = ((x593!=(x594-x595))==x596);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x599 = 2859U;
	int32_t x600 = -6586915;

    t135 = ((x597!=(x598-x599))==x600);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x601 = 1531LL;
	uint64_t x602 = 20437285955LLU;
	static volatile int8_t x603 = INT8_MIN;
	uint8_t x604 = 13U;
	int32_t t136 = -113987;

    t136 = ((x601!=(x602-x603))==x604);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x605 = -1LL;
	static uint16_t x606 = 15520U;
	int16_t x607 = INT16_MAX;
	int32_t x608 = INT32_MAX;
	int32_t t137 = -6636;

    t137 = ((x605!=(x606-x607))==x608);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = INT8_MAX;
	int8_t x610 = 51;
	int64_t x612 = 1983LL;
	static int32_t t138 = 1176903;

    t138 = ((x609!=(x610-x611))==x612);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x613 = -1;
	uint8_t x614 = 7U;
	int8_t x615 = INT8_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t139 = -23;

    t139 = ((x613!=(x614-x615))==x616);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x617 = 1561703249265027LLU;
	int32_t x619 = -9363;
	int8_t x620 = INT8_MIN;
	static volatile int32_t t140 = 3;

    t140 = ((x617!=(x618-x619))==x620);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x621 = -1;
	int16_t x622 = 0;
	uint32_t x623 = 12U;
	volatile uint8_t x624 = 0U;
	static volatile int32_t t141 = 1;

    t141 = ((x621!=(x622-x623))==x624);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x633 = -1;
	static volatile int16_t x635 = INT16_MIN;
	static int16_t x636 = 3217;
	volatile int32_t t142 = 108;

    t142 = ((x633!=(x634-x635))==x636);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x637 = -2283;
	int64_t x638 = -1LL;
	int64_t x639 = -505451079993LL;
	static volatile int16_t x640 = INT16_MAX;
	volatile int32_t t143 = 2152;

    t143 = ((x637!=(x638-x639))==x640);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x641 = INT8_MAX;
	volatile int8_t x644 = INT8_MIN;
	static int32_t t144 = 12407;

    t144 = ((x641!=(x642-x643))==x644);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x645 = -154477499;
	volatile int64_t x646 = INT64_MIN;
	static int32_t x647 = -1;
	volatile int32_t t145 = 10228814;

    t145 = ((x645!=(x646-x647))==x648);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x649 = INT16_MAX;
	int16_t x650 = -1;
	static int16_t x651 = INT16_MIN;
	volatile int32_t t146 = 71895;

    t146 = ((x649!=(x650-x651))==x652);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x653 = 12234U;
	uint16_t x655 = 7U;
	volatile int32_t t147 = -3607177;

    t147 = ((x653!=(x654-x655))==x656);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x661 = -21;
	static int8_t x663 = INT8_MAX;
	int16_t x664 = INT16_MAX;
	static int32_t t148 = -1534;

    t148 = ((x661!=(x662-x663))==x664);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x665 = 48LLU;
	volatile int16_t x666 = INT16_MIN;
	volatile int16_t x667 = 13999;
	int16_t x668 = INT16_MAX;
	int32_t t149 = -9779083;

    t149 = ((x665!=(x666-x667))==x668);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x670 = -1;
	int8_t x671 = INT8_MAX;
	uint8_t x672 = UINT8_MAX;
	int32_t t150 = -509;

    t150 = ((x669!=(x670-x671))==x672);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x673 = 53;
	static uint16_t x674 = UINT16_MAX;
	int16_t x675 = INT16_MAX;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t151 = -26;

    t151 = ((x673!=(x674-x675))==x676);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	int8_t x678 = 1;
	uint8_t x679 = 3U;
	int16_t x680 = INT16_MIN;
	static volatile int32_t t152 = -160021;

    t152 = ((x677!=(x678-x679))==x680);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x682 = INT32_MAX;
	volatile int64_t x683 = 138LL;
	volatile uint16_t x684 = UINT16_MAX;
	static volatile int32_t t153 = -687967;

    t153 = ((x681!=(x682-x683))==x684);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x687 = INT16_MAX;

    t154 = ((x685!=(x686-x687))==x688);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x689 = 24U;
	uint16_t x691 = 21582U;
	static int8_t x692 = 0;
	static int32_t t155 = -2059878;

    t155 = ((x689!=(x690-x691))==x692);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x693 = 57LL;
	uint16_t x695 = 53U;
	int64_t x696 = INT64_MIN;
	volatile int32_t t156 = -349953;

    t156 = ((x693!=(x694-x695))==x696);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x697 = 24;
	uint64_t x698 = UINT64_MAX;
	int64_t x699 = INT64_MIN;
	volatile int32_t t157 = -5937481;

    t157 = ((x697!=(x698-x699))==x700);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x701 = 3596;
	int64_t x702 = -1LL;
	int8_t x703 = INT8_MAX;
	uint8_t x704 = 1U;
	static volatile int32_t t158 = 2236;

    t158 = ((x701!=(x702-x703))==x704);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x705 = 0;
	int32_t x706 = INT32_MAX;
	int16_t x707 = INT16_MAX;
	int32_t x708 = -158742;
	static volatile int32_t t159 = 47512;

    t159 = ((x705!=(x706-x707))==x708);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x713 = INT16_MIN;
	uint32_t x714 = 86450068U;
	uint32_t x716 = 16568470U;
	volatile int32_t t160 = -661;

    t160 = ((x713!=(x714-x715))==x716);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x717 = INT16_MIN;
	int8_t x718 = -51;
	int8_t x719 = INT8_MIN;
	uint64_t x720 = 2355164777467951LLU;
	static int32_t t161 = -170229;

    t161 = ((x717!=(x718-x719))==x720);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = -1;
	int16_t x723 = INT16_MIN;
	int16_t x724 = 287;
	static volatile int32_t t162 = -1;

    t162 = ((x721!=(x722-x723))==x724);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x726 = 27LLU;
	int32_t x727 = -1;
	uint8_t x728 = UINT8_MAX;

    t163 = ((x725!=(x726-x727))==x728);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x733 = -1;
	uint64_t x735 = UINT64_MAX;
	static int32_t x736 = -1;
	int32_t t164 = 874;

    t164 = ((x733!=(x734-x735))==x736);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x737 = UINT32_MAX;
	int16_t x739 = -1;
	uint32_t x740 = 95527U;

    t165 = ((x737!=(x738-x739))==x740);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x741 = UINT16_MAX;
	uint64_t x743 = 174573394984LLU;
	int64_t x744 = INT64_MIN;
	int32_t t166 = 18952;

    t166 = ((x741!=(x742-x743))==x744);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x745 = INT8_MIN;
	int8_t x746 = INT8_MIN;
	int8_t x748 = INT8_MIN;

    t167 = ((x745!=(x746-x747))==x748);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x749 = -2;
	static uint64_t x752 = UINT64_MAX;
	volatile int32_t t168 = 89470;

    t168 = ((x749!=(x750-x751))==x752);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x754 = 244U;
	volatile uint16_t x755 = 3U;
	volatile uint32_t x756 = 11644U;
	static int32_t t169 = -156978652;

    t169 = ((x753!=(x754-x755))==x756);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x758 = UINT32_MAX;
	volatile uint32_t x759 = UINT32_MAX;
	volatile int8_t x760 = INT8_MIN;

    t170 = ((x757!=(x758-x759))==x760);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x761 = INT16_MIN;
	static uint16_t x762 = UINT16_MAX;
	int8_t x763 = INT8_MIN;
	volatile int32_t t171 = 7446429;

    t171 = ((x761!=(x762-x763))==x764);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x765 = UINT16_MAX;
	static volatile uint8_t x767 = 47U;
	static volatile int32_t x768 = 15;
	volatile int32_t t172 = 0;

    t172 = ((x765!=(x766-x767))==x768);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x769 = 68;
	volatile int16_t x770 = INT16_MAX;
	int64_t x771 = -81716LL;
	static volatile int32_t t173 = -664222;

    t173 = ((x769!=(x770-x771))==x772);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x773 = 60369802109888LLU;
	int8_t x774 = INT8_MIN;
	static int64_t x775 = -134274544817LL;
	static volatile int64_t x776 = INT64_MIN;
	int32_t t174 = 2930803;

    t174 = ((x773!=(x774-x775))==x776);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x777 = 7033U;
	static uint32_t x778 = 1593U;
	int32_t x779 = INT32_MIN;
	static int32_t x780 = INT32_MIN;

    t175 = ((x777!=(x778-x779))==x780);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x781 = 238U;
	uint8_t x782 = 120U;
	int8_t x783 = 15;
	int16_t x784 = INT16_MIN;
	int32_t t176 = 2350091;

    t176 = ((x781!=(x782-x783))==x784);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x785 = 1U;
	int32_t x786 = 6;
	uint8_t x787 = UINT8_MAX;
	volatile int64_t x788 = 945035708915LL;

    t177 = ((x785!=(x786-x787))==x788);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x789 = 51;
	volatile uint64_t x791 = 5355892593462LLU;
	uint8_t x792 = 14U;
	static int32_t t178 = -843;

    t178 = ((x789!=(x790-x791))==x792);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x793 = -29;
	uint8_t x794 = 50U;
	int16_t x795 = 55;
	int32_t x796 = INT32_MIN;
	volatile int32_t t179 = 252477;

    t179 = ((x793!=(x794-x795))==x796);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x798 = 2;
	static int16_t x799 = 725;
	uint16_t x800 = UINT16_MAX;
	static volatile int32_t t180 = -20;

    t180 = ((x797!=(x798-x799))==x800);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x801 = UINT32_MAX;
	uint64_t x802 = 274915699842940LLU;
	static int16_t x803 = INT16_MIN;
	int64_t x804 = -1LL;
	volatile int32_t t181 = 128307567;

    t181 = ((x801!=(x802-x803))==x804);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x809 = INT8_MIN;
	volatile int32_t x810 = INT32_MAX;
	static int16_t x812 = INT16_MIN;
	int32_t t182 = 5190418;

    t182 = ((x809!=(x810-x811))==x812);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x814 = UINT16_MAX;
	volatile int16_t x815 = INT16_MAX;
	int32_t x816 = INT32_MIN;

    t183 = ((x813!=(x814-x815))==x816);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x817 = -7941093124727LL;
	int32_t x818 = INT32_MIN;
	static int8_t x819 = INT8_MIN;
	volatile int16_t x820 = -1;
	int32_t t184 = 101811820;

    t184 = ((x817!=(x818-x819))==x820);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x823 = INT8_MIN;
	uint32_t x824 = UINT32_MAX;
	int32_t t185 = 647165;

    t185 = ((x821!=(x822-x823))==x824);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x825 = 18U;
	int64_t x826 = INT64_MAX;
	int32_t x827 = INT32_MAX;
	volatile int64_t x828 = 716271241422795LL;
	int32_t t186 = 17388;

    t186 = ((x825!=(x826-x827))==x828);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x829 = INT16_MIN;
	static int32_t x830 = 5;
	static int8_t x831 = INT8_MIN;
	static int64_t x832 = INT64_MAX;

    t187 = ((x829!=(x830-x831))==x832);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x834 = INT32_MAX;
	uint32_t x835 = UINT32_MAX;
	uint64_t x836 = 26309206192544996LLU;
	volatile int32_t t188 = 189;

    t188 = ((x833!=(x834-x835))==x836);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x837 = 1;
	int32_t x838 = INT32_MAX;
	uint64_t x839 = UINT64_MAX;
	static uint32_t x840 = 397U;

    t189 = ((x837!=(x838-x839))==x840);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x841 = INT64_MIN;
	volatile uint16_t x843 = UINT16_MAX;
	int16_t x844 = -231;
	volatile int32_t t190 = -1188785;

    t190 = ((x841!=(x842-x843))==x844);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x845 = 41266038;
	int16_t x846 = -3;
	int64_t x847 = 435LL;
	volatile uint64_t x848 = UINT64_MAX;
	static int32_t t191 = 454;

    t191 = ((x845!=(x846-x847))==x848);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x849 = -1LL;
	uint16_t x850 = 249U;
	int8_t x851 = INT8_MIN;
	int8_t x852 = INT8_MAX;
	static volatile int32_t t192 = 12643;

    t192 = ((x849!=(x850-x851))==x852);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x853 = -1LL;
	int16_t x854 = -1;
	static int32_t x855 = INT32_MIN;
	uint16_t x856 = 12069U;
	int32_t t193 = 62878;

    t193 = ((x853!=(x854-x855))==x856);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x857 = UINT8_MAX;
	static volatile int8_t x858 = -15;
	int32_t x859 = -103;
	static int64_t x860 = 626068576771181LL;
	int32_t t194 = 2664745;

    t194 = ((x857!=(x858-x859))==x860);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x861 = -448;
	static int8_t x862 = -1;
	int16_t x863 = INT16_MIN;
	uint8_t x864 = 101U;
	volatile int32_t t195 = -18950246;

    t195 = ((x861!=(x862-x863))==x864);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x866 = 2;
	int8_t x867 = -1;
	int8_t x868 = 5;
	volatile int32_t t196 = 14;

    t196 = ((x865!=(x866-x867))==x868);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x869 = -1;
	uint32_t x870 = UINT32_MAX;
	uint16_t x872 = 42U;
	volatile int32_t t197 = 21381;

    t197 = ((x869!=(x870-x871))==x872);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x873 = -1;
	uint16_t x874 = 48U;
	uint8_t x875 = 33U;
	int32_t x876 = INT32_MIN;
	volatile int32_t t198 = 256;

    t198 = ((x873!=(x874-x875))==x876);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x877 = 815475186U;
	uint8_t x878 = 1U;
	int8_t x879 = -1;
	int32_t t199 = -334;

    t199 = ((x877!=(x878-x879))==x880);

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

