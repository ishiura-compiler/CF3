
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

int32_t x3 = INT32_MIN;
static int32_t x10 = INT32_MIN;
int8_t x14 = INT8_MIN;
int8_t x32 = INT8_MIN;
uint8_t x36 = UINT8_MAX;
int16_t x40 = -1;
static volatile int32_t t8 = -3;
volatile int64_t x44 = INT64_MIN;
int64_t x45 = INT64_MIN;
static volatile uint8_t x46 = 26U;
int16_t x49 = INT16_MAX;
int16_t x51 = -1901;
uint16_t x53 = UINT16_MAX;
volatile int32_t t12 = -2289477;
int8_t x59 = -1;
volatile int32_t t13 = -15520703;
volatile int64_t t15 = -59593382234052LL;
int16_t x72 = 2;
volatile int32_t t16 = -475;
int64_t x81 = -390044692969564242LL;
int16_t x82 = -8;
uint8_t x90 = 2U;
volatile int8_t x96 = INT8_MIN;
static int32_t t23 = -487;
int32_t x105 = 1;
int32_t x112 = -82;
int8_t x116 = -39;
int32_t t26 = 3322;
int64_t x117 = -1LL;
int16_t x128 = 1;
uint64_t x132 = 1631186103144LLU;
int16_t x133 = -81;
uint64_t x134 = UINT64_MAX;
volatile uint32_t t30 = 6714U;
volatile int32_t t31 = 41;
uint32_t x141 = 0U;
volatile int8_t x156 = INT8_MIN;
uint16_t x158 = UINT16_MAX;
static int16_t x159 = -695;
int16_t x163 = INT16_MAX;
int8_t x165 = -1;
uint64_t x167 = 129907977667LLU;
uint8_t x173 = 0U;
volatile uint16_t x175 = UINT16_MAX;
int8_t x176 = INT8_MAX;
volatile int32_t t39 = -58425410;
static int16_t x179 = -1;
uint32_t t41 = 0U;
volatile int32_t t42 = -1;
int16_t x189 = -1;
int16_t x190 = -3524;
uint16_t x196 = UINT16_MAX;
static int8_t x199 = INT8_MAX;
volatile int32_t t45 = -920226;
int32_t x201 = 42527;
volatile int64_t t48 = INT64_MIN;
volatile int64_t x217 = 2102230771887LL;
volatile uint32_t x218 = 382476U;
int32_t x220 = 81;
uint64_t x231 = 2LLU;
static volatile int16_t x234 = INT16_MAX;
static uint64_t x235 = 9LLU;
int64_t x245 = INT64_MIN;
static uint8_t x250 = 55U;
int64_t x252 = -1LL;
volatile int64_t t56 = 12235236186422LL;
uint32_t x259 = UINT32_MAX;
int8_t x260 = 1;
static int32_t t57 = 174999699;
static int64_t x269 = INT64_MIN;
int16_t x271 = -1;
volatile uint16_t x284 = 1730U;
uint8_t x285 = 66U;
int32_t x288 = 15668711;
volatile uint16_t x294 = 253U;
uint64_t x314 = 118372653127141766LLU;
int32_t x323 = INT32_MIN;
volatile uint64_t x327 = 778023116403064LLU;
int32_t x328 = 679222;
static int32_t x338 = -984;
int16_t x339 = INT16_MIN;
int8_t x341 = -7;
volatile uint16_t x345 = 1751U;
volatile int64_t x346 = 442LL;
int16_t x349 = -1;
int16_t x353 = -1;
int32_t t77 = -433;
static int32_t t79 = 4087;
volatile int64_t x370 = INT64_MAX;
uint16_t x381 = 19U;
int32_t x384 = INT32_MIN;
uint16_t x398 = 0U;
int16_t x402 = -1;
static uint8_t x410 = 31U;
static int64_t x411 = -850LL;
volatile int32_t t89 = -118892764;
volatile int8_t x423 = -1;
int32_t t91 = -179;
int16_t x432 = -1;
int32_t t92 = -7577429;
volatile int32_t t93 = -1;
uint8_t x440 = 42U;
int32_t x441 = INT32_MIN;
int64_t t96 = -75257859LL;
static volatile uint16_t x460 = 881U;
uint16_t x464 = UINT16_MAX;
int32_t t100 = 60830;
volatile int16_t x466 = 39;
int8_t x478 = INT8_MIN;
uint64_t x479 = 14LLU;
uint32_t x484 = 5398569U;
uint32_t x491 = 14U;
int64_t x510 = 242703LL;
static uint32_t x516 = 445U;
volatile uint32_t t112 = 474695U;
uint64_t x518 = 120036680LLU;
int32_t t113 = 19107;
int16_t x536 = -1;
int32_t x544 = INT32_MIN;
int32_t t118 = 8320985;
static int8_t x551 = 52;
int32_t x555 = INT32_MIN;
int64_t x581 = INT64_MIN;
static uint64_t x582 = UINT64_MAX;
int32_t t123 = -1;
int8_t x590 = -1;
volatile int32_t x593 = -45;
int32_t x596 = INT32_MIN;
uint64_t x598 = 55841LLU;
int32_t t127 = -249646831;
int8_t x604 = INT8_MIN;
volatile int32_t t128 = -527120;
int32_t x607 = INT32_MIN;
volatile uint64_t t130 = UINT64_MAX;
int8_t x618 = INT8_MAX;
volatile int32_t x622 = 25137340;
int8_t x628 = 2;
static int32_t x631 = -3;
int8_t x647 = INT8_MIN;
uint32_t x654 = UINT32_MAX;
int8_t x656 = 0;
uint8_t x662 = UINT8_MAX;
uint32_t x664 = 108112631U;
uint32_t t141 = 102826U;
int8_t x669 = 5;
int16_t x683 = -1;
uint8_t x688 = 51U;
int32_t t145 = 1005;
int64_t x701 = 56LL;
static int64_t x705 = 14LL;
uint16_t x713 = UINT16_MAX;
uint32_t x726 = 12U;
int16_t x731 = 5837;
uint32_t x744 = 299U;
static uint32_t x747 = 1586374U;
volatile uint32_t t159 = UINT32_MAX;
volatile uint64_t t160 = 12071943236265336LLU;
volatile int16_t x758 = 9;
int32_t x770 = INT32_MAX;
static uint32_t x771 = 26103106U;
int16_t x783 = -781;
int32_t t167 = 10167888;
int64_t x804 = -286354130051191752LL;
int32_t x806 = INT32_MAX;
int32_t t175 = -74627;
int8_t x821 = 1;
volatile int32_t t183 = -203479914;
int32_t x866 = INT32_MIN;
volatile uint8_t x867 = 13U;
int64_t x874 = -497711552334LL;
uint64_t x880 = 10LLU;
int16_t x891 = 0;
int16_t x895 = INT16_MIN;
int64_t x896 = -5934078812701LL;
volatile int64_t x897 = INT64_MAX;
int64_t x899 = INT64_MIN;
int16_t x904 = 215;
volatile int32_t t195 = INT32_MIN;
uint8_t x912 = 11U;
static int32_t t196 = 150;
volatile int64_t x914 = -1LL;
static uint8_t x916 = UINT8_MAX;
int32_t t197 = -31815449;
volatile int8_t x919 = INT8_MIN;
int8_t x923 = -43;


void f0(void) {
    	volatile uint16_t x1 = 29U;
	int64_t x2 = INT64_MAX;
	volatile int8_t x4 = -1;
	volatile int32_t t0 = 12;

    t0 = ((x1<=(x2+x3))|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x9 = UINT32_MAX;
	static volatile uint64_t x11 = 10063093338999319LLU;
	int64_t x12 = -1LL;
	int64_t t1 = 137641515485885LL;

    t1 = ((x9<=(x10+x11))|x12);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 1424795492LLU;
	int16_t x15 = -37;
	static int8_t x16 = 7;
	volatile int32_t t2 = 1;

    t2 = ((x13<=(x14+x15))|x16);

    if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x17 = UINT32_MAX;
	volatile uint16_t x18 = UINT16_MAX;
	int8_t x19 = 1;
	int16_t x20 = 0;
	volatile int32_t t3 = -5;

    t3 = ((x17<=(x18+x19))|x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -1;
	uint16_t x22 = 11714U;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	int32_t t4 = 532935470;

    t4 = ((x21<=(x22+x23))|x24);

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = INT8_MIN;
	static int32_t x26 = -258973;
	volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t5 = INT64_MIN;

    t5 = ((x25<=(x26+x27))|x28);

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x29 = 83266U;
	int32_t x30 = 46;
	volatile uint8_t x31 = UINT8_MAX;
	int32_t t6 = -14;

    t6 = ((x29<=(x30+x31))|x32);

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	uint16_t x35 = UINT16_MAX;
	static int32_t t7 = 417;

    t7 = ((x33<=(x34+x35))|x36);

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 2;
	int8_t x38 = INT8_MIN;
	int8_t x39 = -7;

    t8 = ((x37<=(x38+x39))|x40);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	volatile int64_t x42 = -1LL;
	int16_t x43 = -1;
	int64_t t9 = INT64_MIN;

    t9 = ((x41<=(x42+x43))|x44);

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x47 = 5765302LLU;
	int64_t x48 = -1LL;
	volatile int64_t t10 = 1947278839LL;

    t10 = ((x45<=(x46+x47))|x48);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = INT8_MAX;
	int16_t x52 = INT16_MIN;
	static int32_t t11 = 52;

    t11 = ((x49<=(x50+x51))|x52);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x54 = 29577;
	volatile int16_t x55 = -1;
	int32_t x56 = -993042;

    t12 = ((x53<=(x54+x55))|x56);

    if (t12 != -993042) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	int16_t x58 = -1;
	uint8_t x60 = 15U;

    t13 = ((x57<=(x58+x59))|x60);

    if (t13 != 15) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x61 = INT8_MIN;
	uint32_t x62 = 3U;
	int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	int32_t t14 = -97867656;

    t14 = ((x61<=(x62+x63))|x64);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 3198U;
	static uint64_t x66 = UINT64_MAX;
	volatile int32_t x67 = INT32_MAX;
	int64_t x68 = INT64_MIN;

    t15 = ((x65<=(x66+x67))|x68);

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = -16241863;
	uint8_t x70 = 24U;
	static uint64_t x71 = UINT64_MAX;

    t16 = ((x69<=(x70+x71))|x72);

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t17 = -392840540;

    t17 = ((x77<=(x78+x79))|x80);

    if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x83 = INT8_MIN;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t18 = -4487813162LL;

    t18 = ((x81<=(x82+x83))|x84);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = -13831;
	static int16_t x86 = -2761;
	uint16_t x87 = 50U;
	int16_t x88 = -1;
	static volatile int32_t t19 = -10498;

    t19 = ((x85<=(x86+x87))|x88);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MAX;
	int16_t x91 = -1;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

    t20 = ((x89<=(x90+x91))|x92);

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x93 = 67U;
	int8_t x94 = INT8_MIN;
	volatile int16_t x95 = INT16_MIN;
	volatile int32_t t21 = -47215;

    t21 = ((x93<=(x94+x95))|x96);

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	static volatile uint8_t x98 = 4U;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t x100 = INT32_MAX;
	int32_t t22 = INT32_MAX;

    t22 = ((x97<=(x98+x99))|x100);

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x101 = 13457U;
	static uint8_t x102 = UINT8_MAX;
	static volatile int32_t x103 = INT32_MIN;
	int32_t x104 = -1;

    t23 = ((x101<=(x102+x103))|x104);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x106 = 165U;
	uint64_t x107 = 83609LLU;
	int32_t x108 = INT32_MAX;
	volatile int32_t t24 = INT32_MAX;

    t24 = ((x105<=(x106+x107))|x108);

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x109 = -1;
	volatile int64_t x110 = -1LL;
	int32_t x111 = -1412;
	volatile int32_t t25 = -7;

    t25 = ((x109<=(x110+x111))|x112);

    if (t25 != -82) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MAX;
	uint16_t x115 = 86U;

    t26 = ((x113<=(x114+x115))|x116);

    if (t26 != -39) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x118 = 54U;
	static int64_t x119 = -132223688LL;
	static volatile int16_t x120 = -1;
	int32_t t27 = -1;

    t27 = ((x117<=(x118+x119))|x120);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -1;
	uint64_t x126 = 68060LLU;
	static volatile int8_t x127 = 18;
	volatile int32_t t28 = 0;

    t28 = ((x125<=(x126+x127))|x128);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = -1;
	static int64_t x130 = -1LL;
	static int8_t x131 = INT8_MAX;
	uint64_t t29 = 6831269973691LLU;

    t29 = ((x129<=(x130+x131))|x132);

    if (t29 != 1631186103145LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x135 = 126368136U;
	uint32_t x136 = 767149U;

    t30 = ((x133<=(x134+x135))|x136);

    if (t30 != 767149U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x137 = 5980;
	volatile int8_t x138 = -8;
	volatile uint64_t x139 = 27278786291LLU;
	int16_t x140 = -6;

    t31 = ((x137<=(x138+x139))|x140);

    if (t31 != -5) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x142 = 49514723U;
	uint8_t x143 = 0U;
	static int16_t x144 = INT16_MAX;
	volatile int32_t t32 = -571;

    t32 = ((x141<=(x142+x143))|x144);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -15559;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t33 = -879137;

    t33 = ((x145<=(x146+x147))|x148);

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x153 = -5;
	int8_t x154 = -1;
	int64_t x155 = 15155815818796350LL;
	int32_t t34 = -78633;

    t34 = ((x153<=(x154+x155))|x156);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x157 = 5LLU;
	int8_t x160 = INT8_MAX;
	volatile int32_t t35 = -8;

    t35 = ((x157<=(x158+x159))|x160);

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x161 = INT16_MIN;
	static uint16_t x162 = 222U;
	volatile int32_t x164 = -957;
	static int32_t t36 = 679;

    t36 = ((x161<=(x162+x163))|x164);

    if (t36 != -957) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x166 = INT8_MIN;
	volatile int32_t x168 = -1;
	int32_t t37 = 644437;

    t37 = ((x165<=(x166+x167))|x168);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = 9U;
	static uint8_t x171 = 5U;
	volatile uint16_t x172 = 14U;
	volatile int32_t t38 = -469;

    t38 = ((x169<=(x170+x171))|x172);

    if (t38 != 14) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x174 = INT8_MIN;

    t39 = ((x173<=(x174+x175))|x176);

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x177 = 147LLU;
	int32_t x178 = -1;
	int64_t x180 = -29107675494LL;
	int64_t t40 = -25928LL;

    t40 = ((x177<=(x178+x179))|x180);

    if (t40 != -29107675493LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x181 = 50836293U;
	static uint64_t x182 = 6639077122LLU;
	volatile uint64_t x183 = UINT64_MAX;
	static uint32_t x184 = 3145163U;

    t41 = ((x181<=(x182+x183))|x184);

    if (t41 != 3145163U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x185 = -1;
	uint32_t x186 = 19642U;
	int8_t x187 = -1;
	static int8_t x188 = -1;

    t42 = ((x185<=(x186+x187))|x188);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x191 = UINT8_MAX;
	volatile uint32_t x192 = 0U;
	uint32_t t43 = 1737341U;

    t43 = ((x189<=(x190+x191))|x192);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x193 = -1LL;
	int32_t x194 = 227302593;
	int8_t x195 = 47;
	volatile int32_t t44 = 885856319;

    t44 = ((x193<=(x194+x195))|x196);

    if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x197 = INT32_MIN;
	uint32_t x198 = 156098465U;
	static uint16_t x200 = UINT16_MAX;

    t45 = ((x197<=(x198+x199))|x200);

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x202 = -1;
	int64_t x203 = -59730780311981594LL;
	static uint16_t x204 = 135U;
	static int32_t t46 = -7439;

    t46 = ((x201<=(x202+x203))|x204);

    if (t46 != 135) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x209 = 12U;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t47 = 233568;

    t47 = ((x209<=(x210+x211))|x212);

    if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x213 = INT64_MIN;
	volatile uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;

    t48 = ((x213<=(x214+x215))|x216);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x219 = INT16_MIN;
	int32_t t49 = 2226887;

    t49 = ((x217<=(x218+x219))|x220);

    if (t49 != 81) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = INT64_MIN;
	volatile int8_t x222 = INT8_MAX;
	int16_t x223 = -1;
	int8_t x224 = -1;
	volatile int32_t t50 = 0;

    t50 = ((x221<=(x222+x223))|x224);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x225 = 177U;
	int64_t x226 = INT64_MIN;
	int16_t x227 = 14;
	int8_t x228 = INT8_MAX;
	int32_t t51 = 23117;

    t51 = ((x225<=(x226+x227))|x228);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x229 = 3339456LL;
	int32_t x230 = 18009721;
	uint32_t x232 = 58911425U;
	volatile uint32_t t52 = 1U;

    t52 = ((x229<=(x230+x231))|x232);

    if (t52 != 58911425U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x233 = 0U;
	int64_t x236 = INT64_MIN;
	volatile int64_t t53 = 3163LL;

    t53 = ((x233<=(x234+x235))|x236);

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x237 = 2749U;
	volatile int64_t x238 = INT64_MAX;
	volatile int8_t x239 = -1;
	volatile int8_t x240 = INT8_MIN;
	static int32_t t54 = -10;

    t54 = ((x237<=(x238+x239))|x240);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x246 = INT16_MIN;
	int64_t x247 = 21737LL;
	volatile int16_t x248 = INT16_MIN;
	static int32_t t55 = -15569;

    t55 = ((x245<=(x246+x247))|x248);

    if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = INT8_MAX;
	int16_t x251 = -511;

    t56 = ((x249<=(x250+x251))|x252);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = -1;
	static uint16_t x258 = UINT16_MAX;

    t57 = ((x257<=(x258+x259))|x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = 1309;
	int64_t x262 = -1LL;
	volatile int32_t x263 = INT32_MIN;
	int8_t x264 = 1;
	volatile int32_t t58 = 734618;

    t58 = ((x261<=(x262+x263))|x264);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x265 = UINT8_MAX;
	static uint32_t x266 = 22466U;
	int8_t x267 = 37;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int32_t t59 = -238382373;

    t59 = ((x265<=(x266+x267))|x268);

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x270 = UINT16_MAX;
	int32_t x272 = INT32_MIN;
	volatile int32_t t60 = 199672471;

    t60 = ((x269<=(x270+x271))|x272);

    if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x273 = -1;
	int32_t x274 = 110;
	uint32_t x275 = 1887U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

    t61 = ((x273<=(x274+x275))|x276);

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x277 = -4;
	int16_t x278 = INT16_MAX;
	int8_t x279 = -1;
	volatile uint8_t x280 = 0U;
	volatile int32_t t62 = 53719183;

    t62 = ((x277<=(x278+x279))|x280);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x281 = 66998848U;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = 1143;
	static int32_t t63 = 1258;

    t63 = ((x281<=(x282+x283))|x284);

    if (t63 != 1730) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x286 = -4;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t t64 = -2992905;

    t64 = ((x285<=(x286+x287))|x288);

    if (t64 != 15668711) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x293 = 1U;
	int16_t x295 = -1;
	int8_t x296 = -1;
	int32_t t65 = -2950;

    t65 = ((x293<=(x294+x295))|x296);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x297 = 0U;
	int8_t x298 = -4;
	volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = 245921284LL;
	volatile int64_t t66 = -2LL;

    t66 = ((x297<=(x298+x299))|x300);

    if (t66 != 245921285LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x313 = 1;
	int64_t x315 = INT64_MAX;
	int16_t x316 = -7221;
	volatile int32_t t67 = -188810389;

    t67 = ((x313<=(x314+x315))|x316);

    if (t67 != -7221) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x321 = 1011818852677LLU;
	volatile uint16_t x322 = 1198U;
	int8_t x324 = INT8_MAX;
	volatile int32_t t68 = 14787726;

    t68 = ((x321<=(x322+x323))|x324);

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x325 = INT16_MIN;
	static int8_t x326 = 0;
	static volatile int32_t t69 = 1626;

    t69 = ((x325<=(x326+x327))|x328);

    if (t69 != 679222) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x329 = INT8_MIN;
	static uint16_t x330 = 3U;
	uint8_t x331 = 3U;
	int64_t x332 = -64000254844549LL;
	int64_t t70 = 9591334LL;

    t70 = ((x329<=(x330+x331))|x332);

    if (t70 != -64000254844549LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x333 = -7509;
	uint32_t x334 = 122U;
	int8_t x335 = INT8_MIN;
	volatile uint64_t x336 = 2LLU;
	volatile uint64_t t71 = 73867458LLU;

    t71 = ((x333<=(x334+x335))|x336);

    if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x337 = 0LL;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

    t72 = ((x337<=(x338+x339))|x340);

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x342 = 1318806362730LL;
	int8_t x343 = INT8_MIN;
	static uint16_t x344 = UINT16_MAX;
	int32_t t73 = 39206;

    t73 = ((x341<=(x342+x343))|x344);

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x347 = UINT64_MAX;
	static int64_t x348 = 105333339LL;
	int64_t t74 = 4995LL;

    t74 = ((x345<=(x346+x347))|x348);

    if (t74 != 105333339LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x350 = 14626U;
	volatile int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t75 = 424;

    t75 = ((x349<=(x350+x351))|x352);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x354 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	static uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t76 = UINT32_MAX;

    t76 = ((x353<=(x354+x355))|x356);

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	uint64_t x358 = 4887077250883624LLU;
	uint16_t x359 = 3U;
	uint16_t x360 = 9U;

    t77 = ((x357<=(x358+x359))|x360);

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x361 = 11;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MAX;
	int32_t x364 = -1;
	volatile int32_t t78 = 323644770;

    t78 = ((x361<=(x362+x363))|x364);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x365 = INT64_MAX;
	static int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = -885;

    t79 = ((x365<=(x366+x367))|x368);

    if (t79 != -885) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x369 = INT32_MIN;
	int32_t x371 = -30658937;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t80 = UINT32_MAX;

    t80 = ((x369<=(x370+x371))|x372);

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x373 = 4929;
	static int32_t x374 = INT32_MIN;
	uint8_t x375 = 8U;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t81 = -197067;

    t81 = ((x373<=(x374+x375))|x376);

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x382 = 891;
	static int32_t x383 = 77;
	static int32_t t82 = 22087668;

    t82 = ((x381<=(x382+x383))|x384);

    if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x389 = 63325765;
	uint16_t x390 = 7U;
	int16_t x391 = -1;
	static int8_t x392 = -1;
	int32_t t83 = 2750592;

    t83 = ((x389<=(x390+x391))|x392);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x397 = 2U;
	uint8_t x399 = 1U;
	uint8_t x400 = 7U;
	static int32_t t84 = 110;

    t84 = ((x397<=(x398+x399))|x400);

    if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x401 = 886311LLU;
	uint8_t x403 = 65U;
	volatile int32_t x404 = -5367014;
	volatile int32_t t85 = -9502;

    t85 = ((x401<=(x402+x403))|x404);

    if (t85 != -5367014) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MAX;
	int8_t x407 = -1;
	int8_t x408 = INT8_MIN;
	volatile int32_t t86 = 23;

    t86 = ((x405<=(x406+x407))|x408);

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x409 = -92745544521LL;
	uint8_t x412 = 2U;
	static int32_t t87 = 116360;

    t87 = ((x409<=(x410+x411))|x412);

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x413 = UINT8_MAX;
	volatile int16_t x414 = 2;
	int16_t x415 = INT16_MIN;
	static int64_t x416 = -1LL;
	int64_t t88 = 2634LL;

    t88 = ((x413<=(x414+x415))|x416);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x417 = -1;
	uint8_t x418 = 93U;
	static int32_t x419 = INT32_MIN;
	uint8_t x420 = 7U;

    t89 = ((x417<=(x418+x419))|x420);

    if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x421 = 4U;
	uint64_t x422 = 28491087833807LLU;
	static uint8_t x424 = 114U;
	static volatile int32_t t90 = -253;

    t90 = ((x421<=(x422+x423))|x424);

    if (t90 != 115) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MIN;
	static int16_t x427 = -1;
	static int32_t x428 = INT32_MIN;

    t91 = ((x425<=(x426+x427))|x428);

    if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x430 = -1;
	uint8_t x431 = 18U;

    t92 = ((x429<=(x430+x431))|x432);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x433 = 3U;
	volatile int8_t x434 = -13;
	int32_t x435 = INT32_MAX;
	static int16_t x436 = -359;

    t93 = ((x433<=(x434+x435))|x436);

    if (t93 != -359) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x437 = INT64_MAX;
	int32_t x438 = -1;
	static volatile int32_t x439 = -6;
	volatile int32_t t94 = -19214;

    t94 = ((x437<=(x438+x439))|x440);

    if (t94 != 42) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x442 = -2;
	int64_t x443 = -61841124068670LL;
	int8_t x444 = -1;
	volatile int32_t t95 = 223284964;

    t95 = ((x441<=(x442+x443))|x444);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x445 = 31;
	int64_t x446 = -1LL;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = INT64_MIN;

    t96 = ((x445<=(x446+x447))|x448);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x449 = INT8_MAX;
	uint16_t x450 = UINT16_MAX;
	static uint32_t x451 = 65U;
	int16_t x452 = INT16_MIN;
	volatile int32_t t97 = 6826;

    t97 = ((x449<=(x450+x451))|x452);

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x453 = -1LL;
	volatile int32_t x454 = 84860;
	static int64_t x455 = INT64_MIN;
	volatile int64_t x456 = INT64_MIN;
	int64_t t98 = INT64_MIN;

    t98 = ((x453<=(x454+x455))|x456);

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x457 = 1U;
	int16_t x458 = -782;
	volatile int32_t x459 = INT32_MAX;
	int32_t t99 = 45924460;

    t99 = ((x457<=(x458+x459))|x460);

    if (t99 != 881) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x461 = UINT64_MAX;
	uint64_t x462 = UINT64_MAX;
	volatile uint16_t x463 = 7U;

    t100 = ((x461<=(x462+x463))|x464);

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x465 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	uint32_t x468 = UINT32_MAX;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = ((x465<=(x466+x467))|x468);

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x473 = 18U;
	uint16_t x474 = 112U;
	uint8_t x475 = 31U;
	int16_t x476 = -1;
	volatile int32_t t102 = 886;

    t102 = ((x473<=(x474+x475))|x476);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x477 = 13244U;
	int8_t x480 = INT8_MIN;
	volatile int32_t t103 = 346255;

    t103 = ((x477<=(x478+x479))|x480);

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x481 = 10U;
	static int8_t x482 = -31;
	int16_t x483 = -401;
	static uint32_t t104 = 2U;

    t104 = ((x481<=(x482+x483))|x484);

    if (t104 != 5398569U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x485 = INT16_MAX;
	static volatile int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	int64_t x488 = INT64_MIN;
	volatile int64_t t105 = INT64_MIN;

    t105 = ((x485<=(x486+x487))|x488);

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	int32_t x490 = INT32_MIN;
	volatile int64_t x492 = -1LL;
	volatile int64_t t106 = 1467683459839LL;

    t106 = ((x489<=(x490+x491))|x492);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x493 = -1;
	int8_t x494 = -1;
	uint8_t x495 = UINT8_MAX;
	int32_t x496 = -1271;
	volatile int32_t t107 = -649305;

    t107 = ((x493<=(x494+x495))|x496);

    if (t107 != -1271) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x497 = -1;
	uint16_t x498 = 9U;
	uint8_t x499 = 89U;
	int32_t x500 = 74;
	static int32_t t108 = 237;

    t108 = ((x497<=(x498+x499))|x500);

    if (t108 != 75) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x501 = INT64_MIN;
	uint8_t x502 = 16U;
	volatile uint32_t x503 = 529074U;
	static uint32_t x504 = 637160784U;
	uint32_t t109 = 537363219U;

    t109 = ((x501<=(x502+x503))|x504);

    if (t109 != 637160785U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x505 = 802149;
	static volatile uint32_t x506 = 0U;
	int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MAX;
	int32_t t110 = 328782283;

    t110 = ((x505<=(x506+x507))|x508);

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x509 = UINT8_MAX;
	int64_t x511 = -1LL;
	int8_t x512 = INT8_MIN;
	volatile int32_t t111 = 6717;

    t111 = ((x509<=(x510+x511))|x512);

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x513 = INT32_MAX;
	int16_t x514 = INT16_MIN;
	int32_t x515 = INT32_MAX;

    t112 = ((x513<=(x514+x515))|x516);

    if (t112 != 445U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x517 = INT16_MIN;
	static uint16_t x519 = 37U;
	int8_t x520 = INT8_MAX;

    t113 = ((x517<=(x518+x519))|x520);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x521 = -477933991LL;
	static int32_t x522 = -1;
	static uint16_t x523 = UINT16_MAX;
	static int32_t x524 = INT32_MIN;
	static volatile int32_t t114 = 1;

    t114 = ((x521<=(x522+x523))|x524);

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = INT32_MIN;
	static volatile int16_t x534 = INT16_MAX;
	volatile int8_t x535 = INT8_MAX;
	int32_t t115 = 2442827;

    t115 = ((x533<=(x534+x535))|x536);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x537 = -1;
	static int8_t x538 = INT8_MIN;
	int16_t x539 = -2;
	int32_t x540 = 4058305;
	volatile int32_t t116 = 0;

    t116 = ((x537<=(x538+x539))|x540);

    if (t116 != 4058305) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x541 = UINT32_MAX;
	int16_t x542 = 14;
	int64_t x543 = -1LL;
	volatile int32_t t117 = INT32_MIN;

    t117 = ((x541<=(x542+x543))|x544);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x545 = 90;
	int32_t x546 = INT32_MIN;
	uint16_t x547 = 9U;
	int8_t x548 = -9;

    t118 = ((x545<=(x546+x547))|x548);

    if (t118 != -9) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x549 = 16U;
	static int16_t x550 = -2;
	static int16_t x552 = INT16_MIN;
	volatile int32_t t119 = 5;

    t119 = ((x549<=(x550+x551))|x552);

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x553 = INT32_MIN;
	uint32_t x554 = 4381U;
	static int8_t x556 = -30;
	static volatile int32_t t120 = 8;

    t120 = ((x553<=(x554+x555))|x556);

    if (t120 != -29) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x573 = -2089LL;
	int16_t x574 = INT16_MIN;
	volatile uint64_t x575 = 1066626626866784610LLU;
	uint64_t x576 = UINT64_MAX;
	static volatile uint64_t t121 = UINT64_MAX;

    t121 = ((x573<=(x574+x575))|x576);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x577 = -1;
	volatile int16_t x578 = INT16_MIN;
	uint16_t x579 = 3782U;
	uint8_t x580 = UINT8_MAX;
	static int32_t t122 = 5246726;

    t122 = ((x577<=(x578+x579))|x580);

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x583 = INT16_MAX;
	volatile int8_t x584 = INT8_MIN;

    t123 = ((x581<=(x582+x583))|x584);

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x585 = INT64_MAX;
	uint32_t x586 = 3U;
	static uint32_t x587 = UINT32_MAX;
	static int64_t x588 = INT64_MIN;
	volatile int64_t t124 = INT64_MIN;

    t124 = ((x585<=(x586+x587))|x588);

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x589 = 43390940U;
	volatile uint32_t x591 = 56844265U;
	int32_t x592 = -1536;
	int32_t t125 = -1067583304;

    t125 = ((x589<=(x590+x591))|x592);

    if (t125 != -1535) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint32_t x594 = UINT32_MAX;
	int32_t x595 = -130938407;
	int32_t t126 = INT32_MIN;

    t126 = ((x593<=(x594+x595))|x596);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x597 = -1LL;
	uint16_t x599 = UINT16_MAX;
	int8_t x600 = -3;

    t127 = ((x597<=(x598+x599))|x600);

    if (t127 != -3) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x601 = 0U;
	volatile int32_t x602 = INT32_MAX;
	static uint64_t x603 = 1067685LLU;

    t128 = ((x601<=(x602+x603))|x604);

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x605 = -15288014;
	static uint8_t x606 = UINT8_MAX;
	static int8_t x608 = INT8_MIN;
	volatile int32_t t129 = 12925;

    t129 = ((x605<=(x606+x607))|x608);

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint32_t x610 = 17299U;
	int16_t x611 = INT16_MIN;
	uint64_t x612 = UINT64_MAX;

    t130 = ((x609<=(x610+x611))|x612);

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x613 = -414;
	static int32_t x614 = 111;
	volatile int16_t x615 = INT16_MAX;
	volatile int8_t x616 = INT8_MIN;
	static volatile int32_t t131 = -60;

    t131 = ((x613<=(x614+x615))|x616);

    if (t131 != -127) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x617 = INT16_MAX;
	int32_t x619 = -178897;
	volatile int8_t x620 = 12;
	int32_t t132 = 7;

    t132 = ((x617<=(x618+x619))|x620);

    if (t132 != 12) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x623 = 168148;
	int8_t x624 = INT8_MIN;
	int32_t t133 = 91486;

    t133 = ((x621<=(x622+x623))|x624);

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x625 = UINT64_MAX;
	int32_t x626 = INT32_MIN;
	uint64_t x627 = 18391823LLU;
	int32_t t134 = -250645;

    t134 = ((x625<=(x626+x627))|x628);

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x629 = -1;
	int8_t x630 = -1;
	volatile int16_t x632 = INT16_MAX;
	int32_t t135 = -434;

    t135 = ((x629<=(x630+x631))|x632);

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x637 = 78140;
	int64_t x638 = 1485917LL;
	int32_t x639 = INT32_MIN;
	int32_t x640 = INT32_MAX;
	int32_t t136 = INT32_MAX;

    t136 = ((x637<=(x638+x639))|x640);

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x641 = 180151929;
	uint16_t x642 = 7925U;
	uint32_t x643 = 13733947U;
	int8_t x644 = -2;
	int32_t t137 = 1;

    t137 = ((x641<=(x642+x643))|x644);

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x645 = 115090U;
	int8_t x646 = INT8_MIN;
	int8_t x648 = 0;
	int32_t t138 = 285;

    t138 = ((x645<=(x646+x647))|x648);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x649 = UINT64_MAX;
	uint8_t x650 = 3U;
	int64_t x651 = INT64_MIN;
	int16_t x652 = INT16_MAX;
	int32_t t139 = 56;

    t139 = ((x649<=(x650+x651))|x652);

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x653 = -5;
	int16_t x655 = INT16_MIN;
	static int32_t t140 = 2084224;

    t140 = ((x653<=(x654+x655))|x656);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x661 = 1U;
	int64_t x663 = INT64_MIN;

    t141 = ((x661<=(x662+x663))|x664);

    if (t141 != 108112631U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x665 = INT8_MIN;
	volatile int8_t x666 = 2;
	volatile int8_t x667 = -19;
	int32_t x668 = INT32_MAX;
	volatile int32_t t142 = INT32_MAX;

    t142 = ((x665<=(x666+x667))|x668);

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x670 = 3U;
	int32_t x671 = -1;
	uint8_t x672 = UINT8_MAX;
	static volatile int32_t t143 = -754783;

    t143 = ((x669<=(x670+x671))|x672);

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x681 = INT32_MIN;
	uint8_t x682 = UINT8_MAX;
	int64_t x684 = INT64_MIN;
	int64_t t144 = 37734600971LL;

    t144 = ((x681<=(x682+x683))|x684);

    if (t144 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x685 = 0;
	int8_t x686 = INT8_MAX;
	uint64_t x687 = 24973LLU;

    t145 = ((x685<=(x686+x687))|x688);

    if (t145 != 51) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x689 = INT8_MIN;
	int16_t x690 = INT16_MIN;
	uint16_t x691 = UINT16_MAX;
	int64_t x692 = INT64_MIN;
	volatile int64_t t146 = -276143LL;

    t146 = ((x689<=(x690+x691))|x692);

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x697 = -1;
	int8_t x698 = 1;
	uint32_t x699 = UINT32_MAX;
	uint16_t x700 = 1U;
	volatile int32_t t147 = 774755533;

    t147 = ((x697<=(x698+x699))|x700);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x702 = 1142582;
	volatile int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MAX;
	static volatile int32_t t148 = -52;

    t148 = ((x701<=(x702+x703))|x704);

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x706 = -1876841;
	volatile uint32_t x707 = 122539935U;
	int32_t x708 = INT32_MIN;
	volatile int32_t t149 = -1547811;

    t149 = ((x705<=(x706+x707))|x708);

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x714 = INT64_MAX;
	volatile int8_t x715 = 0;
	static int32_t x716 = -25801932;
	volatile int32_t t150 = -10303;

    t150 = ((x713<=(x714+x715))|x716);

    if (t150 != -25801931) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x717 = 16U;
	uint64_t x718 = 0LLU;
	volatile uint8_t x719 = 13U;
	int64_t x720 = INT64_MIN;
	volatile int64_t t151 = INT64_MIN;

    t151 = ((x717<=(x718+x719))|x720);

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x721 = INT16_MIN;
	int32_t x722 = -1;
	int8_t x723 = INT8_MIN;
	static uint8_t x724 = UINT8_MAX;
	volatile int32_t t152 = 44650069;

    t152 = ((x721<=(x722+x723))|x724);

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x725 = 4459750LL;
	uint8_t x727 = 115U;
	int16_t x728 = -1;
	int32_t t153 = -474728;

    t153 = ((x725<=(x726+x727))|x728);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x729 = 194U;
	uint32_t x730 = 173967U;
	volatile int8_t x732 = INT8_MAX;
	int32_t t154 = -94258;

    t154 = ((x729<=(x730+x731))|x732);

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x733 = 28;
	int32_t x734 = 10977414;
	static int16_t x735 = INT16_MAX;
	static int64_t x736 = -1LL;
	volatile int64_t t155 = -28400196981253LL;

    t155 = ((x733<=(x734+x735))|x736);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x737 = 2705;
	int32_t x738 = -1;
	int64_t x739 = -1LL;
	int64_t x740 = -71639196947337LL;
	volatile int64_t t156 = 37233168423602LL;

    t156 = ((x737<=(x738+x739))|x740);

    if (t156 != -71639196947337LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x741 = 3742LLU;
	static uint64_t x742 = 1794086756707670008LLU;
	int32_t x743 = INT32_MAX;
	uint32_t t157 = 46595732U;

    t157 = ((x741<=(x742+x743))|x744);

    if (t157 != 299U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x745 = 104125082854LLU;
	volatile uint64_t x746 = 538848LLU;
	int64_t x748 = -775498959609156373LL;
	static volatile int64_t t158 = -15360595127007LL;

    t158 = ((x745<=(x746+x747))|x748);

    if (t158 != -775498959609156373LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MAX;
	int32_t x751 = INT32_MIN;
	uint32_t x752 = UINT32_MAX;

    t159 = ((x749<=(x750+x751))|x752);

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	int8_t x754 = INT8_MAX;
	volatile uint64_t x755 = 20808696733995LLU;
	uint64_t x756 = 1136627079104710LLU;

    t160 = ((x753<=(x754+x755))|x756);

    if (t160 != 1136627079104711LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x757 = -4;
	int8_t x759 = INT8_MIN;
	volatile uint16_t x760 = 7U;
	int32_t t161 = 1971;

    t161 = ((x757<=(x758+x759))|x760);

    if (t161 != 7) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x761 = 0;
	int16_t x762 = -20;
	uint16_t x763 = 3074U;
	uint64_t x764 = 620188LLU;
	static volatile uint64_t t162 = 253LLU;

    t162 = ((x761<=(x762+x763))|x764);

    if (t162 != 620189LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x765 = INT64_MAX;
	static volatile uint8_t x766 = 6U;
	static int64_t x767 = INT64_MIN;
	int32_t x768 = INT32_MIN;
	static volatile int32_t t163 = INT32_MIN;

    t163 = ((x765<=(x766+x767))|x768);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x769 = UINT8_MAX;
	int64_t x772 = -94784855904548LL;
	int64_t t164 = -19688812595012071LL;

    t164 = ((x769<=(x770+x771))|x772);

    if (t164 != -94784855904547LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x773 = -1;
	static int64_t x774 = INT64_MIN;
	uint8_t x775 = UINT8_MAX;
	int8_t x776 = INT8_MIN;
	int32_t t165 = 2722761;

    t165 = ((x773<=(x774+x775))|x776);

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x777 = 8406252U;
	uint8_t x778 = 8U;
	uint32_t x779 = 1526159U;
	int16_t x780 = INT16_MIN;
	volatile int32_t t166 = -2;

    t166 = ((x777<=(x778+x779))|x780);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x781 = -868064223LL;
	int16_t x782 = -1;
	uint16_t x784 = 24934U;

    t167 = ((x781<=(x782+x783))|x784);

    if (t167 != 24935) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x785 = 51U;
	int64_t x786 = 3243LL;
	static int32_t x787 = -21;
	int32_t x788 = -1;
	int32_t t168 = -31;

    t168 = ((x785<=(x786+x787))|x788);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x789 = INT16_MIN;
	uint32_t x790 = 100852331U;
	static int64_t x791 = INT64_MIN;
	int16_t x792 = 10627;
	int32_t t169 = -123;

    t169 = ((x789<=(x790+x791))|x792);

    if (t169 != 10627) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x793 = -1;
	static int8_t x794 = INT8_MIN;
	uint32_t x795 = UINT32_MAX;
	int32_t x796 = -110401;
	volatile int32_t t170 = 81182568;

    t170 = ((x793<=(x794+x795))|x796);

    if (t170 != -110401) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x797 = INT32_MIN;
	volatile uint16_t x798 = 3U;
	uint32_t x799 = UINT32_MAX;
	uint32_t x800 = 29635536U;
	uint32_t t171 = 27273U;

    t171 = ((x797<=(x798+x799))|x800);

    if (t171 != 29635536U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x801 = -1;
	volatile uint64_t x802 = 3636573034LLU;
	int32_t x803 = INT32_MIN;
	volatile int64_t t172 = 492847118LL;

    t172 = ((x801<=(x802+x803))|x804);

    if (t172 != -286354130051191752LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x805 = 6U;
	int64_t x807 = -1LL;
	uint32_t x808 = 159U;
	static uint32_t t173 = 2230U;

    t173 = ((x805<=(x806+x807))|x808);

    if (t173 != 159U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x809 = INT8_MAX;
	int32_t x810 = INT32_MIN;
	static uint16_t x811 = 99U;
	uint64_t x812 = UINT64_MAX;
	static volatile uint64_t t174 = UINT64_MAX;

    t174 = ((x809<=(x810+x811))|x812);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x813 = INT32_MAX;
	uint64_t x814 = 405734630LLU;
	static int64_t x815 = INT64_MIN;
	int8_t x816 = INT8_MIN;

    t175 = ((x813<=(x814+x815))|x816);

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x822 = INT64_MAX;
	uint64_t x823 = 195963LLU;
	uint64_t x824 = UINT64_MAX;
	uint64_t t176 = UINT64_MAX;

    t176 = ((x821<=(x822+x823))|x824);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint64_t x825 = UINT64_MAX;
	static int8_t x826 = INT8_MAX;
	static int32_t x827 = -2;
	int16_t x828 = INT16_MIN;
	static volatile int32_t t177 = -55;

    t177 = ((x825<=(x826+x827))|x828);

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x829 = -28;
	static int8_t x830 = INT8_MIN;
	uint64_t x831 = UINT64_MAX;
	static volatile int16_t x832 = 1;
	volatile int32_t t178 = 0;

    t178 = ((x829<=(x830+x831))|x832);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x833 = 5U;
	int64_t x834 = 13751869095LL;
	static int16_t x835 = INT16_MIN;
	volatile int8_t x836 = INT8_MIN;
	static volatile int32_t t179 = -254;

    t179 = ((x833<=(x834+x835))|x836);

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x837 = INT32_MIN;
	int8_t x838 = -1;
	int16_t x839 = -1231;
	uint16_t x840 = UINT16_MAX;
	volatile int32_t t180 = -155827;

    t180 = ((x837<=(x838+x839))|x840);

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x841 = UINT8_MAX;
	volatile uint8_t x842 = UINT8_MAX;
	uint64_t x843 = UINT64_MAX;
	int32_t x844 = -1;
	static volatile int32_t t181 = -2034286;

    t181 = ((x841<=(x842+x843))|x844);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x845 = 13;
	uint32_t x846 = 7U;
	int32_t x847 = 7181;
	volatile uint64_t x848 = 1554LLU;
	static uint64_t t182 = 1707220666149405LLU;

    t182 = ((x845<=(x846+x847))|x848);

    if (t182 != 1555LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x849 = INT32_MAX;
	uint64_t x850 = UINT64_MAX;
	int8_t x851 = -9;
	static volatile uint16_t x852 = UINT16_MAX;

    t183 = ((x849<=(x850+x851))|x852);

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x853 = -1;
	volatile int16_t x854 = INT16_MIN;
	int8_t x855 = 1;
	int32_t x856 = INT32_MAX;
	int32_t t184 = INT32_MAX;

    t184 = ((x853<=(x854+x855))|x856);

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x857 = 81;
	static uint8_t x858 = 10U;
	int8_t x859 = INT8_MIN;
	uint8_t x860 = 15U;
	static int32_t t185 = -522;

    t185 = ((x857<=(x858+x859))|x860);

    if (t185 != 15) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x865 = INT64_MIN;
	uint16_t x868 = UINT16_MAX;
	int32_t t186 = 13487919;

    t186 = ((x865<=(x866+x867))|x868);

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x869 = UINT64_MAX;
	uint8_t x870 = UINT8_MAX;
	static volatile int32_t x871 = 1;
	uint32_t x872 = UINT32_MAX;
	volatile uint32_t t187 = UINT32_MAX;

    t187 = ((x869<=(x870+x871))|x872);

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x873 = -5;
	int32_t x875 = INT32_MAX;
	static uint64_t x876 = 31322025134LLU;
	uint64_t t188 = 6793443176LLU;

    t188 = ((x873<=(x874+x875))|x876);

    if (t188 != 31322025134LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x877 = 14U;
	static int16_t x878 = -1;
	int16_t x879 = INT16_MAX;
	volatile uint64_t t189 = 60818167514488LLU;

    t189 = ((x877<=(x878+x879))|x880);

    if (t189 != 11LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x885 = INT64_MIN;
	volatile uint8_t x886 = 11U;
	volatile int64_t x887 = INT64_MIN;
	uint16_t x888 = 57U;
	volatile int32_t t190 = 9;

    t190 = ((x885<=(x886+x887))|x888);

    if (t190 != 57) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x889 = UINT64_MAX;
	int32_t x890 = INT32_MIN;
	static uint64_t x892 = 56974032LLU;
	uint64_t t191 = 11LLU;

    t191 = ((x889<=(x890+x891))|x892);

    if (t191 != 56974032LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x893 = INT16_MIN;
	static volatile int16_t x894 = INT16_MAX;
	volatile int64_t t192 = -67213LL;

    t192 = ((x893<=(x894+x895))|x896);

    if (t192 != -5934078812701LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x898 = 2506U;
	static volatile int64_t x900 = INT64_MIN;
	volatile int64_t t193 = INT64_MIN;

    t193 = ((x897<=(x898+x899))|x900);

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x901 = 1U;
	static uint32_t x902 = UINT32_MAX;
	volatile int32_t x903 = -324;
	volatile int32_t t194 = 608;

    t194 = ((x901<=(x902+x903))|x904);

    if (t194 != 215) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x905 = UINT64_MAX;
	volatile int32_t x906 = INT32_MAX;
	volatile int64_t x907 = INT64_MIN;
	int32_t x908 = INT32_MIN;

    t195 = ((x905<=(x906+x907))|x908);

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x909 = UINT16_MAX;
	uint64_t x910 = UINT64_MAX;
	static volatile int64_t x911 = INT64_MIN;

    t196 = ((x909<=(x910+x911))|x912);

    if (t196 != 11) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x913 = 70;
	uint64_t x915 = UINT64_MAX;

    t197 = ((x913<=(x914+x915))|x916);

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x917 = 948U;
	uint64_t x918 = 371432LLU;
	int64_t x920 = -1LL;
	volatile int64_t t198 = 7047487427974203LL;

    t198 = ((x917<=(x918+x919))|x920);

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x921 = INT64_MIN;
	static uint64_t x922 = UINT64_MAX;
	uint16_t x924 = 84U;
	volatile int32_t t199 = 715311;

    t199 = ((x921<=(x922+x923))|x924);

    if (t199 != 85) { NG(); } else { ; }
	
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

