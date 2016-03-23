
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

int32_t x11 = INT32_MIN;
int64_t x14 = 76530705LL;
volatile int16_t x15 = INT16_MIN;
volatile int32_t t3 = 0;
uint16_t x27 = 43U;
int16_t x31 = 318;
uint16_t x38 = UINT16_MAX;
int32_t x59 = INT32_MAX;
static volatile uint64_t t10 = 78LLU;
int32_t x77 = INT32_MIN;
int16_t x78 = INT16_MIN;
int32_t t14 = 455;
volatile uint64_t x84 = 1737913690768251LLU;
uint8_t x87 = 0U;
volatile int16_t x92 = INT16_MIN;
uint16_t x95 = UINT16_MAX;
volatile int64_t x100 = -1LL;
int32_t x102 = -1;
int64_t x109 = -15LL;
int32_t x110 = -7981886;
uint16_t x112 = UINT16_MAX;
int32_t x119 = INT32_MIN;
int64_t x122 = 1421280134683LL;
volatile int8_t x124 = 14;
volatile int64_t t25 = 820350LL;
volatile uint16_t x129 = 3U;
volatile int64_t t26 = -9163339118657LL;
volatile int32_t x134 = -37650999;
int32_t x141 = 1977293;
uint32_t x143 = 1772U;
int32_t t28 = 155139;
volatile int8_t x151 = -18;
static int64_t x155 = -65432664591070329LL;
volatile int16_t x160 = -29;
int32_t t31 = -439040;
volatile int32_t t33 = 39055425;
int32_t x175 = INT32_MIN;
uint64_t x177 = UINT64_MAX;
uint8_t x180 = 6U;
int16_t x191 = INT16_MIN;
int64_t x194 = 376512490273LL;
int8_t x195 = -4;
static uint64_t x196 = 14507430LLU;
uint64_t t40 = 113523451LLU;
static volatile int32_t x199 = -211953;
int32_t t41 = 1977872;
int32_t x208 = INT32_MIN;
static int32_t t44 = -163;
int32_t x213 = INT32_MIN;
int8_t x216 = INT8_MAX;
uint8_t x225 = 124U;
uint8_t x226 = UINT8_MAX;
static uint32_t x233 = 49671476U;
int64_t x234 = INT64_MIN;
static int64_t x241 = INT64_MIN;
int32_t x243 = INT32_MIN;
static uint16_t x249 = 0U;
int8_t x252 = INT8_MIN;
volatile uint64_t x262 = 98786LLU;
uint8_t x265 = UINT8_MAX;
int8_t x280 = INT8_MAX;
uint16_t x286 = 34U;
static int64_t x307 = -1LL;
static int8_t x312 = INT8_MIN;
int32_t t67 = 1483262;
uint16_t x313 = UINT16_MAX;
int64_t x321 = INT64_MIN;
uint32_t x322 = UINT32_MAX;
int64_t x325 = INT64_MIN;
int32_t x332 = INT32_MIN;
static volatile int64_t x338 = INT64_MIN;
int8_t x349 = INT8_MAX;
static volatile int8_t x358 = 0;
uint32_t x361 = 108636375U;
static uint16_t x366 = 0U;
uint8_t x375 = 10U;
int8_t x377 = INT8_MIN;
int64_t x380 = -633900716291799397LL;
uint64_t x381 = 64278282156641LLU;
int16_t x405 = INT16_MAX;
int32_t t89 = 1123951;
uint16_t x414 = UINT16_MAX;
uint16_t x427 = UINT16_MAX;
uint16_t x428 = UINT16_MAX;
int8_t x449 = INT8_MIN;
int32_t x456 = INT32_MIN;
static volatile uint32_t t100 = 2U;
int64_t x465 = -1LL;
uint32_t x466 = UINT32_MAX;
volatile int8_t x471 = INT8_MAX;
int32_t t103 = -136;
int32_t t105 = 33;
int64_t x485 = INT64_MAX;
int16_t x487 = -1;
int8_t x501 = INT8_MIN;
int16_t x503 = -431;
static int32_t x505 = -1004383934;
uint8_t x509 = 24U;
int8_t x513 = -1;
static volatile uint16_t x518 = 3157U;
volatile uint16_t x519 = UINT16_MAX;
int8_t x521 = INT8_MIN;
int32_t x522 = INT32_MIN;
volatile uint16_t x526 = 7472U;
static int16_t x534 = -1;
int16_t x538 = INT16_MIN;
static volatile int8_t x547 = 37;
static int64_t x555 = INT64_MAX;
uint8_t x560 = 48U;
int8_t x563 = 5;
uint8_t x564 = UINT8_MAX;
int16_t x571 = INT16_MAX;
int64_t x574 = INT64_MIN;
volatile int16_t x576 = INT16_MAX;
int32_t t131 = -374289966;
volatile int64_t t133 = -37LL;
int16_t x593 = INT16_MIN;
uint8_t x595 = UINT8_MAX;
volatile int64_t x609 = -120610723357588LL;
uint8_t x611 = 44U;
int64_t t137 = 7116899979712LL;
int16_t x622 = -1;
int64_t x634 = 4LL;
int64_t x635 = 89189LL;
int32_t x636 = INT32_MIN;
int32_t t145 = -3;
int32_t x645 = 513754;
int32_t x648 = -1;
int64_t x651 = -1LL;
uint8_t x658 = 70U;
int16_t x659 = INT16_MIN;
static volatile int8_t x664 = INT8_MAX;
int32_t t153 = -7;
int32_t x684 = INT32_MAX;
int64_t x688 = 323064143895LL;
static int16_t x694 = INT16_MAX;
uint64_t x700 = 431LLU;
uint64_t t158 = 2000193401864305LLU;
int16_t x706 = 0;
int8_t x707 = 0;
int32_t x708 = INT32_MAX;
int8_t x709 = 1;
uint8_t x714 = 1U;
volatile uint16_t x733 = 139U;
int8_t x734 = INT8_MAX;
int8_t x743 = INT8_MAX;
static int16_t x744 = -3;
uint32_t x749 = 1315386U;
int64_t x751 = INT64_MIN;
int64_t x766 = -1LL;
uint8_t x769 = UINT8_MAX;
int64_t x772 = -63LL;
int64_t t175 = -4468754673139763LL;
int32_t x775 = INT32_MIN;
static int8_t x781 = -3;
uint32_t t179 = 72U;
int32_t t181 = -9675260;
static int64_t x801 = -1LL;
volatile uint64_t x806 = UINT64_MAX;
int32_t x810 = INT32_MAX;
volatile uint32_t x820 = UINT32_MAX;
volatile uint32_t t187 = 21U;
uint32_t x826 = 2096546053U;
uint64_t t189 = 743975757LLU;
int8_t x838 = -57;
static int8_t x840 = INT8_MAX;
int8_t x851 = 19;
volatile uint32_t t196 = 51U;
uint16_t x857 = 29U;
uint8_t x861 = UINT8_MAX;
volatile int32_t x863 = INT32_MAX;


void f0(void) {
    	uint64_t x5 = 837869LLU;
	volatile int8_t x6 = -1;
	int64_t x7 = 30887LL;
	static volatile uint32_t x8 = 14U;
	uint64_t t0 = 70146349362508828LLU;

    t0 = ((x5-(x6<=x7))/x8);

    if (t0 != 59847LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	static int16_t x10 = 830;
	static uint32_t x12 = UINT32_MAX;
	uint32_t t1 = 9U;

    t1 = ((x9-(x10<=x11))/x12);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = 168619;
	static uint64_t x16 = 2334561389217LLU;
	static uint64_t t2 = 59262LLU;

    t2 = ((x13-(x14<=x15))/x16);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MAX;
	int8_t x22 = -1;
	static int64_t x23 = -256623968029319LL;
	int8_t x24 = 2;

    t3 = ((x21-(x22<=x23))/x24);

    if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x25 = -1;
	uint64_t x26 = 346105275768079384LLU;
	int32_t x28 = INT32_MIN;
	int32_t t4 = 1585;

    t4 = ((x25-(x26<=x27))/x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MIN;
	int16_t x30 = -1;
	int64_t x32 = 245852490476724LL;
	volatile int64_t t5 = -38LL;

    t5 = ((x29-(x30<=x31))/x32);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	int32_t x35 = -1;
	uint64_t x36 = 32808LLU;
	volatile uint64_t t6 = 476782287862231095LLU;

    t6 = ((x33-(x34<=x35))/x36);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	uint32_t x40 = 928U;
	volatile uint32_t t7 = 26U;

    t7 = ((x37-(x38<=x39))/x40);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x45 = -1;
	static int16_t x46 = INT16_MAX;
	uint32_t x47 = 2760U;
	int16_t x48 = INT16_MAX;
	volatile int32_t t8 = 39684;

    t8 = ((x45-(x46<=x47))/x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	int8_t x51 = -1;
	uint16_t x52 = 1487U;
	static int32_t t9 = 11;

    t9 = ((x49-(x50<=x51))/x52);

    if (t9 != -22) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = 3488463732226364557LLU;
	int16_t x58 = -27;
	int16_t x60 = INT16_MIN;

    t10 = ((x57-(x58<=x59))/x60);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = -19655047987024148LL;
	int64_t x62 = 12747610LL;
	int16_t x63 = -91;
	volatile int64_t x64 = INT64_MIN;
	int64_t t11 = -246985822058326433LL;

    t11 = ((x61-(x62<=x63))/x64);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = 19U;
	int64_t x66 = 4364595028656031LL;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t12 = 24628;

    t12 = ((x65-(x66<=x67))/x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 14U;
	int64_t x71 = INT64_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t13 = -54;

    t13 = ((x69-(x70<=x71))/x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x79 = 242867885128LLU;
	int32_t x80 = 6040;

    t14 = ((x77-(x78<=x79))/x80);

    if (t14 != -355543) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x81 = UINT8_MAX;
	int64_t x82 = 2LL;
	uint64_t x83 = 335LLU;
	uint64_t t15 = 17153745604LLU;

    t15 = ((x81-(x82<=x83))/x84);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = -26;
	static int8_t x86 = -1;
	int16_t x88 = INT16_MIN;
	static int32_t t16 = 5111;

    t16 = ((x85-(x86<=x87))/x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x89 = 3U;
	static int16_t x90 = INT16_MIN;
	int64_t x91 = -8414082337LL;
	static int32_t t17 = -8291;

    t17 = ((x89-(x90<=x91))/x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x93 = UINT8_MAX;
	int8_t x94 = 51;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t18 = -119198;

    t18 = ((x93-(x94<=x95))/x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;
	int64_t t19 = 0LL;

    t19 = ((x97-(x98<=x99))/x100);

    if (t19 != 32769LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = -1;
	volatile uint16_t x103 = 0U;
	static uint32_t x104 = 2611U;
	static volatile uint32_t t20 = 0U;

    t20 = ((x101-(x102<=x103))/x104);

    if (t20 != 1644951U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x105 = INT32_MAX;
	int32_t x106 = -3;
	static volatile int32_t x107 = -1;
	uint64_t x108 = 703255LLU;
	static uint64_t t21 = 191LLU;

    t21 = ((x105-(x106<=x107))/x108);

    if (t21 != 3053LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x111 = UINT64_MAX;
	static int64_t t22 = -124370LL;

    t22 = ((x109-(x110<=x111))/x112);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = INT32_MAX;
	int32_t x118 = INT32_MIN;
	static uint8_t x120 = 5U;
	int32_t t23 = -688;

    t23 = ((x117-(x118<=x119))/x120);

    if (t23 != 429496729) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x121 = INT64_MIN;
	volatile int16_t x123 = -1;
	volatile int64_t t24 = -1577760880LL;

    t24 = ((x121-(x122<=x123))/x124);

    if (t24 != -658812288346769700LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x125 = 28U;
	int8_t x126 = INT8_MAX;
	uint32_t x127 = 48461U;
	int64_t x128 = INT64_MIN;

    t25 = ((x125-(x126<=x127))/x128);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x130 = INT64_MIN;
	static int32_t x131 = -1;
	static int64_t x132 = 3685998795136LL;

    t26 = ((x129-(x130<=x131))/x132);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = INT32_MAX;
	uint32_t x135 = 2U;
	int32_t x136 = 183;
	int32_t t27 = -2;

    t27 = ((x133-(x134<=x135))/x136);

    if (t27 != 11734883) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x142 = INT16_MAX;
	static int8_t x144 = INT8_MIN;

    t28 = ((x141-(x142<=x143))/x144);

    if (t28 != -15447) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = -57;
	int8_t x150 = -1;
	volatile int8_t x152 = -1;
	volatile int32_t t29 = -98424;

    t29 = ((x149-(x150<=x151))/x152);

    if (t29 != 57) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x153 = 538204514166LLU;
	int16_t x154 = INT16_MIN;
	static int32_t x156 = -1;
	uint64_t t30 = 19242LLU;

    t30 = ((x153-(x154<=x155))/x156);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x157 = INT32_MIN;
	static int16_t x158 = INT16_MIN;
	static int32_t x159 = INT32_MIN;

    t31 = ((x157-(x158<=x159))/x160);

    if (t31 != 74051160) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x161 = 2U;
	int32_t x162 = INT32_MIN;
	volatile int64_t x163 = INT64_MIN;
	static int8_t x164 = INT8_MAX;
	uint32_t t32 = 27U;

    t32 = ((x161-(x162<=x163))/x164);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x165 = -8;
	int16_t x166 = 124;
	volatile int8_t x167 = -1;
	int16_t x168 = INT16_MIN;

    t33 = ((x165-(x166<=x167))/x168);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x169 = INT8_MAX;
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MAX;
	int32_t x172 = -4752527;
	int32_t t34 = -23;

    t34 = ((x169-(x170<=x171))/x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 1364158U;
	volatile int16_t x176 = INT16_MIN;
	uint64_t t35 = 2LLU;

    t35 = ((x173-(x174<=x175))/x176);

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x178 = 1;
	static uint8_t x179 = UINT8_MAX;
	uint64_t t36 = 374912422904899LLU;

    t36 = ((x177-(x178<=x179))/x180);

    if (t36 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x181 = -7102;
	int8_t x182 = INT8_MIN;
	volatile uint64_t x183 = 1LLU;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t37 = 365892;

    t37 = ((x181-(x182<=x183))/x184);

    if (t37 != 55) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x185 = 2936200455680LLU;
	static int32_t x186 = INT32_MAX;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -1LL;
	volatile uint64_t t38 = 52928928892005LLU;

    t38 = ((x185-(x186<=x187))/x188);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x190 = 4;
	int8_t x192 = INT8_MAX;
	volatile int64_t t39 = 1LL;

    t39 = ((x189-(x190<=x191))/x192);

    if (t39 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x193 = UINT8_MAX;

    t40 = ((x193-(x194<=x195))/x196);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x197 = 137U;
	uint8_t x198 = 99U;
	volatile int8_t x200 = INT8_MIN;

    t41 = ((x197-(x198<=x199))/x200);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x201 = 11U;
	int64_t x202 = 13346LL;
	int32_t x203 = -1;
	int32_t x204 = INT32_MAX;
	volatile int32_t t42 = 1518;

    t42 = ((x201-(x202<=x203))/x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -1LL;
	volatile int64_t x206 = 1738447LL;
	static int16_t x207 = -1;
	static int64_t t43 = -316LL;

    t43 = ((x205-(x206<=x207))/x208);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x209 = 166U;
	static uint32_t x210 = 630666187U;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = -60;

    t44 = ((x209-(x210<=x211))/x212);

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	volatile int32_t t45 = -20945773;

    t45 = ((x213-(x214<=x215))/x216);

    if (t45 != -16909320) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x217 = INT8_MIN;
	static int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t46 = -6610578;

    t46 = ((x217-(x218<=x219))/x220);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = INT16_MIN;
	uint8_t x222 = 2U;
	volatile int64_t x223 = INT64_MIN;
	static uint64_t x224 = 11049567LLU;
	uint64_t t47 = 2LLU;

    t47 = ((x221-(x222<=x223))/x224);

    if (t47 != 1669454022380LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x227 = INT8_MIN;
	int64_t x228 = 14092800342LL;
	volatile int64_t t48 = -1906834728333164896LL;

    t48 = ((x225-(x226<=x227))/x228);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x229 = 773709552578LLU;
	static uint16_t x230 = 101U;
	int64_t x231 = INT64_MIN;
	static int8_t x232 = 1;
	static uint64_t t49 = 3020606971931LLU;

    t49 = ((x229-(x230<=x231))/x232);

    if (t49 != 773709552578LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x235 = 21693U;
	static int32_t x236 = INT32_MIN;
	volatile uint32_t t50 = 13766U;

    t50 = ((x233-(x234<=x235))/x236);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x242 = INT16_MIN;
	uint8_t x244 = 1U;
	static volatile int64_t t51 = INT64_MIN;

    t51 = ((x241-(x242<=x243))/x244);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x250 = UINT16_MAX;
	static int16_t x251 = 59;
	int32_t t52 = 63;

    t52 = ((x249-(x250<=x251))/x252);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x253 = 91U;
	int64_t x254 = INT64_MIN;
	int16_t x255 = 0;
	uint64_t x256 = UINT64_MAX;
	uint64_t t53 = 7747411906750704LLU;

    t53 = ((x253-(x254<=x255))/x256);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x257 = UINT32_MAX;
	static int8_t x258 = 1;
	volatile int32_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	volatile uint32_t t54 = 282904U;

    t54 = ((x257-(x258<=x259))/x260);

    if (t54 != 65537U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = 1274389211147913LL;
	uint16_t x263 = 57U;
	static volatile uint16_t x264 = UINT16_MAX;
	int64_t t55 = 2196542661879LL;

    t55 = ((x261-(x262<=x263))/x264);

    if (t55 != 19445932877LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x266 = INT32_MAX;
	int32_t x267 = INT32_MAX;
	int32_t x268 = -13324323;
	static volatile int32_t t56 = -190;

    t56 = ((x265-(x266<=x267))/x268);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x269 = UINT8_MAX;
	static uint64_t x270 = 798997LLU;
	volatile int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t57 = -18440763;

    t57 = ((x269-(x270<=x271))/x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	uint16_t x275 = 10U;
	uint64_t x276 = 550563LLU;
	uint64_t t58 = 101810482091738LLU;

    t58 = ((x273-(x274<=x275))/x276);

    if (t58 != 33505237499994LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x277 = 7194U;
	int8_t x278 = 0;
	static uint32_t x279 = 234U;
	static uint32_t t59 = 7U;

    t59 = ((x277-(x278<=x279))/x280);

    if (t59 != 56U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x281 = -1;
	int16_t x282 = -1;
	volatile int16_t x283 = INT16_MIN;
	uint8_t x284 = 4U;
	volatile int32_t t60 = 5876;

    t60 = ((x281-(x282<=x283))/x284);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = -20;
	static int32_t x287 = INT32_MAX;
	volatile int32_t x288 = INT32_MIN;
	int32_t t61 = -3487;

    t61 = ((x285-(x286<=x287))/x288);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x290 = 0;
	static int8_t x291 = INT8_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t62 = 1;

    t62 = ((x289-(x290<=x291))/x292);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x293 = 64746614855318110LLU;
	static int32_t x294 = 23;
	volatile uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MAX;
	uint64_t t63 = 26482798690045LLU;

    t63 = ((x293-(x294<=x295))/x296);

    if (t63 != 1975970179000LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = INT64_MIN;
	int16_t x298 = 22;
	volatile int8_t x299 = -1;
	static int8_t x300 = INT8_MIN;
	volatile int64_t t64 = -31149020883LL;

    t64 = ((x297-(x298<=x299))/x300);

    if (t64 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x301 = -262574590LL;
	int8_t x302 = -1;
	int8_t x303 = -1;
	int8_t x304 = INT8_MAX;
	volatile int64_t t65 = 0LL;

    t65 = ((x301-(x302<=x303))/x304);

    if (t65 != -2067516LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x305 = INT8_MIN;
	int64_t x306 = -1LL;
	int16_t x308 = INT16_MAX;
	volatile int32_t t66 = 0;

    t66 = ((x305-(x306<=x307))/x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	uint64_t x311 = 114855369521224392LLU;

    t67 = ((x309-(x310<=x311))/x312);

    if (t67 != 256) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x314 = INT8_MIN;
	uint32_t x315 = UINT32_MAX;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t68 = -1289871881305LL;

    t68 = ((x313-(x314<=x315))/x316);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = -1;
	static int32_t x318 = -1;
	int64_t x319 = -1LL;
	int32_t x320 = 2114;
	static int32_t t69 = -181392;

    t69 = ((x317-(x318<=x319))/x320);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x323 = 213U;
	static int16_t x324 = INT16_MIN;
	static volatile int64_t t70 = -4139919LL;

    t70 = ((x321-(x322<=x323))/x324);

    if (t70 != 281474976710656LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x326 = 29U;
	volatile int16_t x327 = INT16_MIN;
	static volatile uint16_t x328 = 24030U;
	volatile int64_t t71 = 1965894LL;

    t71 = ((x325-(x326<=x327))/x328);

    if (t71 != -383827383972316LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	volatile int8_t x331 = 4;
	volatile int32_t t72 = -6810351;

    t72 = ((x329-(x330<=x331))/x332);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x337 = 62;
	volatile uint8_t x339 = 6U;
	uint8_t x340 = 3U;
	volatile int32_t t73 = 18700;

    t73 = ((x337-(x338<=x339))/x340);

    if (t73 != 20) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x341 = INT16_MIN;
	uint32_t x342 = UINT32_MAX;
	static uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MAX;
	int32_t t74 = -281416001;

    t74 = ((x341-(x342<=x343))/x344);

    if (t74 != -258) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x345 = 9162738064124834340LLU;
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MAX;
	int64_t x348 = -142781734841472LL;
	static uint64_t t75 = 2339LLU;

    t75 = ((x345-(x346<=x347))/x348);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x350 = UINT16_MAX;
	static int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t76 = 168265444;

    t76 = ((x349-(x350<=x351))/x352);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x353 = -1LL;
	uint16_t x354 = UINT16_MAX;
	volatile int64_t x355 = INT64_MIN;
	volatile int8_t x356 = INT8_MIN;
	int64_t t77 = -28612004800280LL;

    t77 = ((x353-(x354<=x355))/x356);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x357 = INT8_MIN;
	static int32_t x359 = INT32_MIN;
	int16_t x360 = -12;
	volatile int32_t t78 = 117907;

    t78 = ((x357-(x358<=x359))/x360);

    if (t78 != 10) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x362 = 544363992237963685LLU;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MAX;
	int64_t t79 = -2575159117LL;

    t79 = ((x361-(x362<=x363))/x364);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = INT8_MAX;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MAX;
	volatile int32_t t80 = 26182132;

    t80 = ((x365-(x366<=x367))/x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x373 = INT16_MAX;
	int8_t x374 = 1;
	int64_t x376 = -1LL;
	static int64_t t81 = 12241620772986989LL;

    t81 = ((x373-(x374<=x375))/x376);

    if (t81 != -32766LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x378 = 2U;
	int16_t x379 = -1;
	volatile int64_t t82 = 1093125577221600002LL;

    t82 = ((x377-(x378<=x379))/x380);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x382 = 359U;
	static int8_t x383 = -1;
	int32_t x384 = 49844484;
	volatile uint64_t t83 = 3406820435941569LLU;

    t83 = ((x381-(x382<=x383))/x384);

    if (t83 != 1289576LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x385 = UINT16_MAX;
	int64_t x386 = -1LL;
	uint32_t x387 = 41U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t84 = 249999115;

    t84 = ((x385-(x386<=x387))/x388);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x389 = 97471173424352738LLU;
	uint64_t x390 = UINT64_MAX;
	static int32_t x391 = INT32_MIN;
	uint64_t x392 = 3965182LLU;
	uint64_t t85 = 2LLU;

    t85 = ((x389-(x390<=x391))/x392);

    if (t85 != 24581765332LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MAX;
	static int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t86 = 258123969824893645LLU;

    t86 = ((x393-(x394<=x395))/x396);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x397 = 12LLU;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MIN;
	static uint8_t x400 = UINT8_MAX;
	uint64_t t87 = 643067LLU;

    t87 = ((x397-(x398<=x399))/x400);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x401 = 70U;
	int32_t x402 = INT32_MIN;
	static volatile int16_t x403 = INT16_MIN;
	uint64_t x404 = 54982560LLU;
	volatile uint64_t t88 = 553309674407LLU;

    t88 = ((x401-(x402<=x403))/x404);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x406 = -2LL;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = UINT8_MAX;

    t89 = ((x405-(x406<=x407))/x408);

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x413 = INT16_MIN;
	uint32_t x415 = UINT32_MAX;
	volatile int32_t x416 = INT32_MIN;
	int32_t t90 = 38;

    t90 = ((x413-(x414<=x415))/x416);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = INT8_MIN;
	static int16_t x418 = INT16_MAX;
	volatile int64_t x419 = -200167998676LL;
	volatile uint64_t x420 = 930525156LLU;
	uint64_t t91 = 0LLU;

    t91 = ((x417-(x418<=x419))/x420);

    if (t91 != 19824014380LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x421 = 5U;
	static volatile int32_t x422 = INT32_MIN;
	volatile int32_t x423 = -1;
	int64_t x424 = INT64_MIN;
	volatile int64_t t92 = -2872LL;

    t92 = ((x421-(x422<=x423))/x424);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x425 = -121205LL;
	int64_t x426 = INT64_MAX;
	volatile int64_t t93 = -1193163833993LL;

    t93 = ((x425-(x426<=x427))/x428);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x429 = -6;
	static uint64_t x430 = 5543043LLU;
	static int16_t x431 = INT16_MAX;
	volatile int16_t x432 = INT16_MAX;
	static int32_t t94 = -119;

    t94 = ((x429-(x430<=x431))/x432);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x433 = 1U;
	int16_t x434 = -32;
	uint64_t x435 = 59653851870157LLU;
	static volatile int16_t x436 = INT16_MIN;
	static int32_t t95 = -483054066;

    t95 = ((x433-(x434<=x435))/x436);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x437 = INT8_MAX;
	int32_t x438 = -621406064;
	volatile int16_t x439 = -2812;
	volatile int8_t x440 = INT8_MIN;
	static volatile int32_t t96 = 1937;

    t96 = ((x437-(x438<=x439))/x440);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x445 = 8U;
	static int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	uint32_t x448 = UINT32_MAX;
	uint32_t t97 = 1347416927U;

    t97 = ((x445-(x446<=x447))/x448);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	int16_t x452 = 15977;
	int32_t t98 = -10;

    t98 = ((x449-(x450<=x451))/x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x453 = -1;
	volatile int16_t x454 = -1;
	int16_t x455 = INT16_MIN;
	volatile int32_t t99 = 54667;

    t99 = ((x453-(x454<=x455))/x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x457 = 303;
	int8_t x458 = -1;
	uint64_t x459 = 158LLU;
	uint32_t x460 = 986U;

    t100 = ((x457-(x458<=x459))/x460);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x461 = -1LL;
	volatile uint64_t x462 = UINT64_MAX;
	uint32_t x463 = 224211U;
	uint32_t x464 = 841193U;
	volatile int64_t t101 = 962142810729143LL;

    t101 = ((x461-(x462<=x463))/x464);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x467 = INT16_MIN;
	int16_t x468 = 215;
	int64_t t102 = -202193097839LL;

    t102 = ((x465-(x466<=x467))/x468);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x469 = -1;
	int32_t x470 = INT32_MIN;
	static int32_t x472 = -1;

    t103 = ((x469-(x470<=x471))/x472);

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x473 = INT8_MAX;
	int8_t x474 = 0;
	uint32_t x475 = 140124U;
	uint32_t x476 = 13U;
	volatile uint32_t t104 = 2743819U;

    t104 = ((x473-(x474<=x475))/x476);

    if (t104 != 9U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x477 = INT8_MAX;
	volatile uint16_t x478 = 191U;
	int8_t x479 = -4;
	uint8_t x480 = 5U;

    t105 = ((x477-(x478<=x479))/x480);

    if (t105 != 25) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x481 = INT32_MAX;
	uint16_t x482 = 0U;
	static volatile uint64_t x483 = 12722LLU;
	uint8_t x484 = 5U;
	static int32_t t106 = 2591;

    t106 = ((x481-(x482<=x483))/x484);

    if (t106 != 429496729) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x486 = INT16_MIN;
	int8_t x488 = 14;
	static int64_t t107 = -7607619LL;

    t107 = ((x485-(x486<=x487))/x488);

    if (t107 != 658812288346769700LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x489 = 3;
	static uint32_t x490 = 826U;
	int16_t x491 = -1;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t108 = 6;

    t108 = ((x489-(x490<=x491))/x492);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x493 = UINT16_MAX;
	uint16_t x494 = UINT16_MAX;
	volatile int16_t x495 = INT16_MAX;
	static uint8_t x496 = 75U;
	volatile int32_t t109 = 0;

    t109 = ((x493-(x494<=x495))/x496);

    if (t109 != 873) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x497 = -1;
	static int32_t x498 = INT32_MAX;
	static int32_t x499 = 2799;
	volatile int32_t x500 = INT32_MIN;
	static volatile int32_t t110 = 1;

    t110 = ((x497-(x498<=x499))/x500);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x502 = UINT16_MAX;
	volatile int32_t x504 = -1;
	int32_t t111 = -3;

    t111 = ((x501-(x502<=x503))/x504);

    if (t111 != 128) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x506 = -14LL;
	volatile int32_t x507 = -1;
	int32_t x508 = -1;
	volatile int32_t t112 = -440214651;

    t112 = ((x505-(x506<=x507))/x508);

    if (t112 != 1004383935) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x510 = INT64_MAX;
	uint32_t x511 = 1523U;
	volatile int8_t x512 = INT8_MAX;
	volatile int32_t t113 = -9;

    t113 = ((x509-(x510<=x511))/x512);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x514 = 7899U;
	int8_t x515 = 1;
	int8_t x516 = -10;
	int32_t t114 = -11264;

    t114 = ((x513-(x514<=x515))/x516);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = -1;
	int64_t x520 = 192252736461841LL;
	volatile int64_t t115 = -1230396184LL;

    t115 = ((x517-(x518<=x519))/x520);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x523 = UINT16_MAX;
	volatile int64_t x524 = INT64_MIN;
	int64_t t116 = -9649LL;

    t116 = ((x521-(x522<=x523))/x524);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x525 = INT8_MIN;
	volatile int64_t x527 = INT64_MIN;
	int64_t x528 = 42941518705652LL;
	static int64_t t117 = -7794483180083912LL;

    t117 = ((x525-(x526<=x527))/x528);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x529 = -1;
	int64_t x530 = INT64_MIN;
	uint16_t x531 = 2675U;
	int64_t x532 = INT64_MIN;
	volatile int64_t t118 = 3304LL;

    t118 = ((x529-(x530<=x531))/x532);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x533 = -1LL;
	volatile int16_t x535 = INT16_MIN;
	uint8_t x536 = UINT8_MAX;
	int64_t t119 = 11132LL;

    t119 = ((x533-(x534<=x535))/x536);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x537 = 13918U;
	uint8_t x539 = 4U;
	uint16_t x540 = 1U;
	uint32_t t120 = 325216138U;

    t120 = ((x537-(x538<=x539))/x540);

    if (t120 != 13917U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x541 = 24645U;
	uint64_t x542 = 35695444LLU;
	int16_t x543 = INT16_MIN;
	volatile uint32_t x544 = UINT32_MAX;
	static volatile uint32_t t121 = 482304U;

    t121 = ((x541-(x542<=x543))/x544);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MAX;
	uint16_t x548 = 413U;
	int32_t t122 = 50958;

    t122 = ((x545-(x546<=x547))/x548);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x549 = INT32_MIN;
	static uint8_t x550 = UINT8_MAX;
	int64_t x551 = -1LL;
	static int16_t x552 = INT16_MIN;
	volatile int32_t t123 = 39;

    t123 = ((x549-(x550<=x551))/x552);

    if (t123 != 65536) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x553 = INT32_MAX;
	int16_t x554 = INT16_MAX;
	uint64_t x556 = 748LLU;
	uint64_t t124 = 145838263108476018LLU;

    t124 = ((x553-(x554<=x555))/x556);

    if (t124 != 2870967LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x557 = -1LL;
	int64_t x558 = -1LL;
	static int16_t x559 = INT16_MAX;
	volatile int64_t t125 = -5768411810451LL;

    t125 = ((x557-(x558<=x559))/x560);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x561 = INT32_MAX;
	static int8_t x562 = 0;
	static volatile int32_t t126 = 2;

    t126 = ((x561-(x562<=x563))/x564);

    if (t126 != 8421504) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x565 = 0;
	int32_t x566 = INT32_MIN;
	int16_t x567 = -1;
	uint8_t x568 = 3U;
	static volatile int32_t t127 = 91351;

    t127 = ((x565-(x566<=x567))/x568);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x569 = UINT8_MAX;
	static int8_t x570 = INT8_MIN;
	static uint32_t x572 = 1U;
	static volatile uint32_t t128 = 77337U;

    t128 = ((x569-(x570<=x571))/x572);

    if (t128 != 254U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x573 = 382707616494985304LLU;
	static uint32_t x575 = UINT32_MAX;
	volatile uint64_t t129 = 445120749LLU;

    t129 = ((x573-(x574<=x575))/x576);

    if (t129 != 11679666020538LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x578 = -1;
	static uint32_t x579 = 225751U;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t130 = 865LLU;

    t130 = ((x577-(x578<=x579))/x580);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x581 = 3U;
	uint32_t x582 = UINT32_MAX;
	volatile uint16_t x583 = 36U;
	uint16_t x584 = 1337U;

    t131 = ((x581-(x582<=x583))/x584);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x585 = UINT64_MAX;
	static int8_t x586 = -1;
	volatile int64_t x587 = -1LL;
	static int8_t x588 = -34;
	volatile uint64_t t132 = 192039074490649846LLU;

    t132 = ((x585-(x586<=x587))/x588);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x589 = 2026U;
	uint32_t x590 = UINT32_MAX;
	int64_t x591 = INT64_MIN;
	static int64_t x592 = INT64_MIN;

    t133 = ((x589-(x590<=x591))/x592);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x594 = 26297303043LLU;
	volatile int16_t x596 = -2291;
	volatile int32_t t134 = -539647;

    t134 = ((x593-(x594<=x595))/x596);

    if (t134 != 14) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x597 = 34178171383LLU;
	volatile int64_t x598 = -1LL;
	uint64_t x599 = 0LLU;
	uint32_t x600 = UINT32_MAX;
	volatile uint64_t t135 = 1028369749LLU;

    t135 = ((x597-(x598<=x599))/x600);

    if (t135 != 7LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x605 = 15;
	static int16_t x606 = -1;
	volatile int32_t x607 = INT32_MAX;
	uint16_t x608 = UINT16_MAX;
	int32_t t136 = 340266;

    t136 = ((x605-(x606<=x607))/x608);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x610 = INT8_MIN;
	int32_t x612 = 77599801;

    t137 = ((x609-(x610<=x611))/x612);

    if (t137 != -1554265LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x613 = 201289U;
	int16_t x614 = -1;
	volatile int8_t x615 = -1;
	int64_t x616 = 3850934LL;
	volatile int64_t t138 = 28725719LL;

    t138 = ((x613-(x614<=x615))/x616);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x617 = UINT64_MAX;
	static volatile int8_t x618 = INT8_MIN;
	int8_t x619 = INT8_MAX;
	int64_t x620 = 24112989180391757LL;
	uint64_t t139 = 79619133302LLU;

    t139 = ((x617-(x618<=x619))/x620);

    if (t139 != 765LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x621 = INT8_MIN;
	int8_t x623 = -5;
	volatile int32_t x624 = INT32_MIN;
	volatile int32_t t140 = 21;

    t140 = ((x621-(x622<=x623))/x624);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x625 = INT64_MIN;
	int32_t x626 = INT32_MAX;
	static int32_t x627 = 305801531;
	uint64_t x628 = 32717100303LLU;
	volatile uint64_t t141 = 51714131LLU;

    t141 = ((x625-(x626<=x627))/x628);

    if (t141 != 281912881LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x629 = -1;
	int8_t x630 = 0;
	volatile int8_t x631 = INT8_MAX;
	uint32_t x632 = 468U;
	volatile uint32_t t142 = 224U;

    t142 = ((x629-(x630<=x631))/x632);

    if (t142 != 9177280U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x633 = -2;
	int32_t t143 = 1;

    t143 = ((x633-(x634<=x635))/x636);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x637 = 6;
	volatile int32_t x638 = -223660;
	int16_t x639 = 3313;
	int64_t x640 = 13769LL;
	int64_t t144 = 4574881137090488932LL;

    t144 = ((x637-(x638<=x639))/x640);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x641 = INT16_MAX;
	static int16_t x642 = INT16_MIN;
	uint64_t x643 = 231792800047561LLU;
	int32_t x644 = INT32_MIN;

    t145 = ((x641-(x642<=x643))/x644);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x646 = -1LL;
	static volatile int8_t x647 = INT8_MIN;
	volatile int32_t t146 = -2045904;

    t146 = ((x645-(x646<=x647))/x648);

    if (t146 != -513754) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x649 = -57;
	uint16_t x650 = 39U;
	int8_t x652 = -1;
	static volatile int32_t t147 = 390169;

    t147 = ((x649-(x650<=x651))/x652);

    if (t147 != 57) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x653 = UINT32_MAX;
	static int16_t x654 = -1;
	uint64_t x655 = UINT64_MAX;
	uint64_t x656 = 3526949288803LLU;
	volatile uint64_t t148 = 5314815LLU;

    t148 = ((x653-(x654<=x655))/x656);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x657 = INT64_MIN;
	volatile int16_t x660 = INT16_MAX;
	volatile int64_t t149 = -19418838LL;

    t149 = ((x657-(x658<=x659))/x660);

    if (t149 != -281483566907400LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x661 = UINT32_MAX;
	uint16_t x662 = 0U;
	static int32_t x663 = INT32_MIN;
	volatile uint32_t t150 = 815U;

    t150 = ((x661-(x662<=x663))/x664);

    if (t150 != 33818640U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x665 = 86504880U;
	int64_t x666 = INT64_MIN;
	volatile uint64_t x667 = UINT64_MAX;
	int32_t x668 = 201167041;
	uint32_t t151 = 3U;

    t151 = ((x665-(x666<=x667))/x668);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x673 = 7U;
	int32_t x674 = INT32_MIN;
	volatile uint16_t x675 = 944U;
	int64_t x676 = INT64_MIN;
	volatile int64_t t152 = -44140LL;

    t152 = ((x673-(x674<=x675))/x676);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x677 = -1;
	static int32_t x678 = 1579;
	static uint32_t x679 = 4478U;
	uint8_t x680 = 27U;

    t153 = ((x677-(x678<=x679))/x680);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x681 = 439U;
	int16_t x682 = -1;
	int8_t x683 = -17;
	static volatile int32_t t154 = -1;

    t154 = ((x681-(x682<=x683))/x684);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x685 = INT32_MIN;
	static int64_t x686 = INT64_MAX;
	static volatile int64_t x687 = 2257270997913341353LL;
	int64_t t155 = 1233678826744LL;

    t155 = ((x685-(x686<=x687))/x688);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x689 = INT8_MIN;
	volatile int32_t x690 = INT32_MIN;
	static volatile uint64_t x691 = 15310413LLU;
	int64_t x692 = -6LL;
	volatile int64_t t156 = -691920716984324241LL;

    t156 = ((x689-(x690<=x691))/x692);

    if (t156 != 21LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x693 = -1;
	volatile int16_t x695 = -1;
	int64_t x696 = -1LL;
	int64_t t157 = -84993434LL;

    t157 = ((x693-(x694<=x695))/x696);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x697 = UINT32_MAX;
	uint16_t x698 = UINT16_MAX;
	uint16_t x699 = UINT16_MAX;

    t158 = ((x697-(x698<=x699))/x700);

    if (t158 != 9965121LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x701 = -1;
	int16_t x702 = -253;
	int64_t x703 = -544620357LL;
	int64_t x704 = INT64_MAX;
	static volatile int64_t t159 = 1905861619775426LL;

    t159 = ((x701-(x702<=x703))/x704);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = 6;
	int32_t t160 = -334452487;

    t160 = ((x705-(x706<=x707))/x708);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x710 = INT8_MAX;
	int32_t x711 = INT32_MIN;
	uint16_t x712 = 37U;
	static int32_t t161 = 38;

    t161 = ((x709-(x710<=x711))/x712);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x713 = -1;
	static int64_t x715 = INT64_MIN;
	uint64_t x716 = UINT64_MAX;
	static uint64_t t162 = 998LLU;

    t162 = ((x713-(x714<=x715))/x716);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x718 = 311486600248653678LL;
	uint8_t x719 = 50U;
	int64_t x720 = INT64_MIN;
	int64_t t163 = 5020136072408LL;

    t163 = ((x717-(x718<=x719))/x720);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x721 = 1351284917LLU;
	static int16_t x722 = INT16_MAX;
	int16_t x723 = INT16_MAX;
	static int32_t x724 = -1;
	volatile uint64_t t164 = 110219194250LLU;

    t164 = ((x721-(x722<=x723))/x724);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x725 = INT32_MAX;
	static volatile int16_t x726 = INT16_MIN;
	static uint16_t x727 = 11U;
	uint8_t x728 = 7U;
	volatile int32_t t165 = -8;

    t165 = ((x725-(x726<=x727))/x728);

    if (t165 != 306783378) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x729 = -3;
	int64_t x730 = -1684172289LL;
	static int64_t x731 = INT64_MAX;
	uint64_t x732 = 13455832187LLU;
	volatile uint64_t t166 = 500870708069LLU;

    t166 = ((x729-(x730<=x731))/x732);

    if (t166 != 1370910681LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x735 = -6;
	static uint32_t x736 = UINT32_MAX;
	volatile uint32_t t167 = 45849U;

    t167 = ((x733-(x734<=x735))/x736);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x741 = -18;
	uint32_t x742 = 3U;
	volatile int32_t t168 = -1;

    t168 = ((x741-(x742<=x743))/x744);

    if (t168 != 6) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x745 = 26447U;
	int8_t x746 = INT8_MIN;
	static int32_t x747 = INT32_MAX;
	uint32_t x748 = 2696U;
	volatile uint32_t t169 = 81U;

    t169 = ((x745-(x746<=x747))/x748);

    if (t169 != 9U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x750 = INT16_MIN;
	int16_t x752 = INT16_MAX;
	uint32_t t170 = 5730895U;

    t170 = ((x749-(x750<=x751))/x752);

    if (t170 != 40U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x753 = -1LL;
	uint16_t x754 = 2U;
	volatile uint64_t x755 = UINT64_MAX;
	int64_t x756 = -1LL;
	volatile int64_t t171 = 6596911447252LL;

    t171 = ((x753-(x754<=x755))/x756);

    if (t171 != 2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x757 = 1U;
	int8_t x758 = INT8_MIN;
	int64_t x759 = -2676294270649LL;
	static int32_t x760 = -12930360;
	int32_t t172 = 1;

    t172 = ((x757-(x758<=x759))/x760);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x761 = 286351U;
	uint16_t x762 = UINT16_MAX;
	static uint8_t x763 = 46U;
	int8_t x764 = -15;
	uint32_t t173 = 8U;

    t173 = ((x761-(x762<=x763))/x764);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x765 = UINT32_MAX;
	int8_t x767 = -2;
	static volatile int32_t x768 = INT32_MIN;
	volatile uint32_t t174 = 576748013U;

    t174 = ((x765-(x766<=x767))/x768);

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x770 = -6;
	uint8_t x771 = 0U;

    t175 = ((x769-(x770<=x771))/x772);

    if (t175 != -4LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x774 = 181333;
	volatile int16_t x776 = INT16_MIN;
	volatile int32_t t176 = 517828;

    t176 = ((x773-(x774<=x775))/x776);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x777 = UINT16_MAX;
	int16_t x778 = 0;
	uint8_t x779 = 1U;
	volatile uint32_t x780 = 3U;
	static uint32_t t177 = 197076666U;

    t177 = ((x777-(x778<=x779))/x780);

    if (t177 != 21844U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x782 = INT8_MAX;
	int16_t x783 = INT16_MIN;
	volatile int16_t x784 = INT16_MIN;
	volatile int32_t t178 = -64358;

    t178 = ((x781-(x782<=x783))/x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x785 = -5248;
	volatile int8_t x786 = INT8_MAX;
	volatile int64_t x787 = -98919LL;
	uint32_t x788 = 112925U;

    t179 = ((x785-(x786<=x787))/x788);

    if (t179 != 38033U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x789 = INT64_MAX;
	int16_t x790 = 1427;
	static int64_t x791 = INT64_MIN;
	int8_t x792 = 8;
	static volatile int64_t t180 = -471432813297LL;

    t180 = ((x789-(x790<=x791))/x792);

    if (t180 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = INT32_MIN;
	static int32_t x794 = 3051;
	int16_t x795 = 457;
	int32_t x796 = 836635;

    t181 = ((x793-(x794<=x795))/x796);

    if (t181 != -2566) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x797 = 1410677312U;
	uint32_t x798 = UINT32_MAX;
	int8_t x799 = -1;
	static int32_t x800 = INT32_MAX;
	uint32_t t182 = 120408022U;

    t182 = ((x797-(x798<=x799))/x800);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x802 = 0;
	int8_t x803 = -1;
	static int32_t x804 = INT32_MIN;
	volatile int64_t t183 = -88135490891263094LL;

    t183 = ((x801-(x802<=x803))/x804);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x805 = -1LL;
	int8_t x807 = 52;
	static volatile int64_t x808 = INT64_MAX;
	int64_t t184 = 5789044377LL;

    t184 = ((x805-(x806<=x807))/x808);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x809 = -32;
	uint64_t x811 = 16055451282LLU;
	int64_t x812 = -1LL;
	int64_t t185 = 381LL;

    t185 = ((x809-(x810<=x811))/x812);

    if (t185 != 33LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x813 = 57429807834688821LL;
	int16_t x814 = INT16_MIN;
	int32_t x815 = -1;
	int32_t x816 = -1;
	volatile int64_t t186 = -900765161504152157LL;

    t186 = ((x813-(x814<=x815))/x816);

    if (t186 != -57429807834688820LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x817 = -1;
	int8_t x818 = INT8_MAX;
	int8_t x819 = -1;

    t187 = ((x817-(x818<=x819))/x820);

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x821 = UINT32_MAX;
	static uint8_t x822 = 42U;
	int16_t x823 = INT16_MAX;
	uint64_t x824 = 1497LLU;
	volatile uint64_t t188 = 72LLU;

    t188 = ((x821-(x822<=x823))/x824);

    if (t188 != 2869049LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x825 = UINT32_MAX;
	static uint64_t x827 = 112689LLU;
	static uint64_t x828 = 843000661LLU;

    t189 = ((x825-(x826<=x827))/x828);

    if (t189 != 5LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x829 = INT8_MAX;
	uint32_t x830 = 105617775U;
	int32_t x831 = INT32_MIN;
	uint32_t x832 = 717U;
	volatile uint32_t t190 = 37U;

    t190 = ((x829-(x830<=x831))/x832);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x833 = INT64_MIN;
	volatile uint8_t x834 = UINT8_MAX;
	uint16_t x835 = 28U;
	static uint64_t x836 = 69062226756525LLU;
	volatile uint64_t t191 = 952570615LLU;

    t191 = ((x833-(x834<=x835))/x836);

    if (t191 != 133551LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x837 = INT32_MAX;
	static uint32_t x839 = 17542877U;
	volatile int32_t t192 = 1;

    t192 = ((x837-(x838<=x839))/x840);

    if (t192 != 16909320) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = INT16_MAX;
	uint16_t x842 = UINT16_MAX;
	int8_t x843 = INT8_MIN;
	uint32_t x844 = 13U;
	uint32_t t193 = 238U;

    t193 = ((x841-(x842<=x843))/x844);

    if (t193 != 2520U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x845 = INT8_MIN;
	int32_t x846 = 3186677;
	static int64_t x847 = INT64_MIN;
	uint64_t x848 = UINT64_MAX;
	uint64_t t194 = 24167096108LLU;

    t194 = ((x845-(x846<=x847))/x848);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x849 = INT8_MIN;
	int8_t x850 = -1;
	int8_t x852 = -30;
	int32_t t195 = 288850;

    t195 = ((x849-(x850<=x851))/x852);

    if (t195 != 4) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x853 = UINT8_MAX;
	static int16_t x854 = -1;
	static int32_t x855 = INT32_MAX;
	static volatile uint32_t x856 = UINT32_MAX;

    t196 = ((x853-(x854<=x855))/x856);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x858 = -13232;
	int8_t x859 = INT8_MIN;
	int64_t x860 = -176LL;
	static int64_t t197 = -477553276333LL;

    t197 = ((x857-(x858<=x859))/x860);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x862 = 16LLU;
	int64_t x864 = -1LL;
	static volatile int64_t t198 = -1856201LL;

    t198 = ((x861-(x862<=x863))/x864);

    if (t198 != -254LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x865 = INT64_MAX;
	int16_t x866 = INT16_MAX;
	int8_t x867 = INT8_MIN;
	static int64_t x868 = -6781839131LL;
	static int64_t t199 = 71393934LL;

    t199 = ((x865-(x866<=x867))/x868);

    if (t199 != -1360010442LL) { NG(); } else { ; }
	
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

