
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

static int16_t x23 = INT16_MIN;
int8_t x31 = INT8_MAX;
int16_t x32 = INT16_MAX;
volatile uint64_t x38 = UINT64_MAX;
int16_t x42 = INT16_MIN;
int64_t x45 = INT64_MAX;
static uint8_t x51 = 14U;
uint16_t x55 = 1220U;
static uint16_t x59 = 978U;
volatile int32_t t17 = 734845320;
int8_t x76 = INT8_MIN;
static int32_t t18 = 1049146399;
static int32_t t19 = 501435032;
int64_t x82 = -27895582574784372LL;
uint16_t x85 = 280U;
int32_t x94 = INT32_MAX;
int64_t x100 = INT64_MIN;
static int32_t x104 = INT32_MAX;
uint8_t x106 = 11U;
static int8_t x107 = INT8_MIN;
int16_t x110 = INT16_MIN;
int32_t x115 = -17;
static int8_t x119 = INT8_MIN;
uint16_t x120 = UINT16_MAX;
volatile int8_t x126 = INT8_MAX;
uint16_t x130 = 1013U;
volatile int8_t x135 = -1;
int32_t x145 = INT32_MAX;
static int64_t x147 = INT64_MIN;
static int32_t t36 = -207;
int32_t x155 = INT32_MIN;
static volatile int32_t x156 = INT32_MIN;
int64_t x164 = INT64_MIN;
int32_t t40 = -869;
int32_t x165 = INT32_MAX;
volatile int32_t t43 = 6504;
uint8_t x187 = 5U;
int32_t t46 = 2013011;
volatile int32_t t47 = 520278;
volatile int64_t x193 = INT64_MIN;
volatile int32_t t48 = -2;
static int8_t x199 = INT8_MIN;
int64_t x201 = -1654877214847914000LL;
int32_t x202 = INT32_MAX;
volatile int32_t t50 = -193685754;
static uint32_t x206 = 12950U;
int32_t t51 = 186;
static int16_t x214 = 3900;
uint32_t x218 = 489285U;
static volatile int32_t t54 = -391;
int16_t x225 = -1;
int16_t x231 = INT16_MAX;
static int64_t x235 = INT64_MIN;
int32_t t58 = -6565340;
static int32_t x237 = INT32_MAX;
int8_t x239 = INT8_MIN;
int16_t x241 = INT16_MIN;
int16_t x243 = 1;
int64_t x244 = -1LL;
int8_t x245 = INT8_MIN;
int32_t x254 = INT32_MAX;
uint32_t x256 = 119506293U;
volatile int32_t t63 = 6047;
int8_t x258 = -1;
static volatile uint8_t x264 = 1U;
static int32_t t65 = 0;
int64_t x265 = INT64_MIN;
uint8_t x266 = UINT8_MAX;
volatile int32_t t67 = 595309;
int8_t x275 = INT8_MIN;
int16_t x277 = -1933;
uint64_t x279 = 10279925LLU;
uint32_t x280 = 98328U;
static int64_t x281 = 3185977437110285LL;
uint16_t x288 = 3U;
volatile int32_t t71 = 1842113;
int8_t x295 = INT8_MIN;
static volatile int16_t x308 = 21;
int32_t x309 = -1;
int16_t x311 = 808;
int16_t x327 = 0;
static uint16_t x333 = 11280U;
int64_t x336 = INT64_MIN;
int64_t x339 = INT64_MIN;
int32_t t85 = 6320;
int64_t x346 = INT64_MIN;
volatile int32_t t86 = -1517936;
int32_t x353 = INT32_MIN;
volatile int32_t t89 = 977;
volatile uint8_t x363 = 11U;
uint16_t x370 = 2272U;
int16_t x372 = -1;
int32_t x379 = -1;
volatile int32_t t94 = -672923305;
static int16_t x382 = INT16_MAX;
volatile int8_t x384 = -1;
static uint64_t x386 = 257450369003113094LLU;
uint8_t x393 = 20U;
int32_t t98 = -74341608;
int16_t x412 = 2212;
int64_t x415 = INT64_MIN;
volatile int32_t t103 = 1;
uint16_t x427 = 477U;
int64_t x435 = INT64_MAX;
uint16_t x437 = 15237U;
volatile int32_t x438 = INT32_MAX;
uint16_t x440 = 2U;
static volatile int8_t x445 = INT8_MIN;
volatile int8_t x446 = INT8_MAX;
volatile int16_t x448 = INT16_MIN;
uint16_t x449 = 3U;
uint8_t x451 = 2U;
int16_t x460 = 29;
uint32_t x461 = UINT32_MAX;
int16_t x462 = INT16_MIN;
static volatile int32_t t115 = 218182424;
int64_t x469 = -1LL;
int16_t x475 = -48;
uint8_t x477 = 3U;
volatile uint32_t x483 = 6U;
static volatile int32_t t120 = -41238979;
int32_t x486 = INT32_MIN;
static int32_t t122 = 62870;
volatile int32_t t123 = -1;
volatile int64_t x501 = 2LL;
static int16_t x510 = INT16_MIN;
volatile int32_t t128 = 22524113;
uint64_t x517 = 8866657475895810LLU;
int32_t t130 = 38;
int16_t x525 = INT16_MAX;
int8_t x533 = -1;
static volatile int8_t x536 = INT8_MIN;
static int8_t x537 = INT8_MAX;
uint32_t x539 = 63U;
static int64_t x542 = INT64_MIN;
volatile int32_t t135 = 59;
int64_t x545 = -1LL;
int32_t x547 = INT32_MAX;
volatile int32_t t137 = -192;
static uint64_t x555 = UINT64_MAX;
uint16_t x556 = 286U;
volatile int32_t t138 = 175;
int8_t x559 = -1;
volatile int8_t x560 = INT8_MIN;
int8_t x561 = 0;
volatile int32_t t140 = -11449;
volatile int32_t t141 = 1820;
int32_t t142 = 79338;
volatile int16_t x574 = -11;
static uint64_t x575 = 0LLU;
int16_t x579 = INT16_MIN;
int32_t t145 = -18764518;
int32_t t146 = -94057;
int8_t x590 = INT8_MIN;
static int16_t x594 = INT16_MAX;
static int8_t x596 = INT8_MIN;
int32_t x599 = INT32_MIN;
int64_t x600 = 2624537802590872LL;
volatile int32_t t150 = 6916960;
int8_t x605 = 7;
static volatile uint64_t x607 = 6262983300385LLU;
uint64_t x608 = 522680362120283201LLU;
int8_t x610 = INT8_MAX;
uint8_t x614 = UINT8_MAX;
int64_t x631 = -1679477704507607LL;
int32_t x634 = -21;
volatile int32_t t159 = 181659;
uint8_t x641 = 110U;
volatile int16_t x656 = 37;
volatile int32_t t164 = 171;
int64_t x666 = INT64_MIN;
int32_t t166 = -30575;
volatile int32_t x674 = INT32_MAX;
static int32_t t169 = -16;
int64_t x684 = INT64_MAX;
uint64_t x689 = 2155788343691298LLU;
int16_t x694 = INT16_MAX;
uint32_t x696 = 12125U;
volatile int16_t x704 = INT16_MIN;
static int32_t x707 = INT32_MIN;
static int32_t t176 = -245330158;
static uint32_t x713 = UINT32_MAX;
volatile int16_t x714 = -1;
int8_t x723 = INT8_MIN;
int8_t x726 = 0;
static int8_t x729 = -1;
static uint64_t x731 = 493501026902347LLU;
static volatile uint8_t x732 = UINT8_MAX;
static volatile int32_t t183 = 109468253;
static uint32_t x743 = 357276U;
int32_t t185 = -3574;
int64_t x745 = 1207LL;
int8_t x749 = INT8_MIN;
static int32_t x752 = INT32_MIN;
uint32_t x754 = UINT32_MAX;
volatile uint8_t x756 = 0U;
uint8_t x760 = UINT8_MAX;
uint16_t x762 = 82U;
uint16_t x766 = 0U;
volatile int16_t x769 = INT16_MAX;
volatile int32_t t192 = 1;
int64_t x776 = INT64_MIN;
int32_t x781 = -1;
int32_t x784 = -6;
uint32_t x785 = 86U;
volatile int32_t x788 = INT32_MIN;
volatile int64_t x790 = INT64_MAX;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = INT64_MAX;
	static uint32_t x4 = 50838U;
	volatile int32_t t0 = 82;

    t0 = ((x1!=x2)<=(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int32_t x6 = INT32_MAX;
	uint32_t x7 = 241178066U;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -26;

    t1 = ((x5!=x6)<=(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 268162287U;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -297765;

    t2 = ((x9!=x10)<=(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 108U;
	int64_t x14 = 315048317LL;
	int64_t x15 = INT64_MIN;
	static uint16_t x16 = 10U;
	volatile int32_t t3 = 10535;

    t3 = ((x13!=x14)<=(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = -291295LL;
	int16_t x19 = INT16_MIN;
	static int32_t x20 = 1425288;
	int32_t t4 = -106133810;

    t4 = ((x17!=x18)<=(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	volatile int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -16071879;

    t5 = ((x21!=x22)<=(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = 13315696LLU;
	int32_t x26 = 140494344;
	static volatile int32_t x27 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 96;

    t6 = ((x25!=x26)<=(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint8_t x30 = 3U;
	int32_t t7 = -5;

    t7 = ((x29!=x30)<=(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MIN;
	static volatile int16_t x35 = 22;
	uint64_t x36 = 25919950LLU;
	static int32_t t8 = -3392207;

    t8 = ((x33!=x34)<=(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MIN;
	uint8_t x39 = 0U;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = -2947573;

    t9 = ((x37!=x38)<=(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	volatile int64_t x43 = INT64_MIN;
	static int64_t x44 = INT64_MAX;
	volatile int32_t t10 = 0;

    t10 = ((x41!=x42)<=(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x46 = -141;
	static volatile int8_t x47 = -4;
	uint32_t x48 = 2U;
	int32_t t11 = -106011490;

    t11 = ((x45!=x46)<=(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	static volatile uint16_t x52 = UINT16_MAX;
	int32_t t12 = 15751;

    t12 = ((x49!=x50)<=(x51!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	static int64_t x54 = INT64_MIN;
	uint16_t x56 = 888U;
	volatile int32_t t13 = -14214;

    t13 = ((x53!=x54)<=(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 12U;
	int8_t x58 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = 6;

    t14 = ((x57!=x58)<=(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 66U;
	int64_t x62 = -53870085153LL;
	int32_t x63 = INT32_MAX;
	static volatile int16_t x64 = -237;
	int32_t t15 = -76703;

    t15 = ((x61!=x62)<=(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = UINT32_MAX;
	volatile int16_t x66 = -211;
	uint16_t x67 = 7U;
	int32_t x68 = -3;
	volatile int32_t t16 = 9651;

    t16 = ((x65!=x66)<=(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	uint64_t x70 = 1964372785151LLU;
	int8_t x71 = -1;
	int32_t x72 = 443;

    t17 = ((x69!=x70)<=(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 1427LL;
	static uint8_t x74 = 16U;
	int64_t x75 = -26562LL;

    t18 = ((x73!=x74)<=(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	static int32_t x78 = INT32_MIN;
	volatile int8_t x79 = 23;
	int8_t x80 = -2;

    t19 = ((x77!=x78)<=(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = 2U;
	int64_t x83 = -1LL;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = -700453;

    t20 = ((x81!=x82)<=(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = 3694;
	uint16_t x87 = 2U;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 1;

    t21 = ((x85!=x86)<=(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	volatile uint32_t x90 = 33445269U;
	uint8_t x91 = 110U;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = 30380158;

    t22 = ((x89!=x90)<=(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MAX;
	int8_t x95 = INT8_MIN;
	int64_t x96 = -1LL;
	static volatile int32_t t23 = 34728;

    t23 = ((x93!=x94)<=(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = 1;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -1;
	static int32_t t24 = 6890877;

    t24 = ((x97!=x98)<=(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 588147514LLU;
	volatile uint32_t x102 = UINT32_MAX;
	volatile int32_t x103 = -1;
	int32_t t25 = -7765;

    t25 = ((x101!=x102)<=(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -1LL;
	uint64_t x108 = 6053764LLU;
	static int32_t t26 = 1;

    t26 = ((x105!=x106)<=(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	static int64_t x111 = INT64_MIN;
	uint64_t x112 = 31213101869105703LLU;
	volatile int32_t t27 = 3677;

    t27 = ((x109!=x110)<=(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = 53;
	uint16_t x114 = 14U;
	uint8_t x116 = 3U;
	static volatile int32_t t28 = 60;

    t28 = ((x113!=x114)<=(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int16_t x118 = -2;
	static volatile int32_t t29 = -703;

    t29 = ((x117!=x118)<=(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	uint16_t x122 = 27U;
	int32_t x123 = 3558559;
	uint8_t x124 = UINT8_MAX;
	static volatile int32_t t30 = -1365;

    t30 = ((x121!=x122)<=(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	static uint64_t x127 = 38672826357212524LLU;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 126933767;

    t31 = ((x125!=x126)<=(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	volatile int16_t x131 = -2;
	uint64_t x132 = 998149133LLU;
	volatile int32_t t32 = -77297393;

    t32 = ((x129!=x130)<=(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 7LL;
	volatile int64_t x134 = INT64_MIN;
	int32_t x136 = INT32_MIN;
	static int32_t t33 = 0;

    t33 = ((x133!=x134)<=(x135!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 20847U;
	int32_t x138 = 92892841;
	int8_t x139 = -1;
	static int16_t x140 = INT16_MAX;
	int32_t t34 = 55137255;

    t34 = ((x137!=x138)<=(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 1323U;
	static volatile int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	int32_t t35 = -2525400;

    t35 = ((x141!=x142)<=(x143!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x146 = UINT64_MAX;
	static int16_t x148 = INT16_MIN;

    t36 = ((x145!=x146)<=(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	static int64_t x151 = INT64_MIN;
	static int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = -475324820;

    t37 = ((x149!=x150)<=(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 120U;
	int8_t x154 = -1;
	volatile int32_t t38 = -28777;

    t38 = ((x153!=x154)<=(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 3U;
	int32_t x158 = INT32_MIN;
	volatile int64_t x159 = INT64_MIN;
	static uint8_t x160 = 5U;
	int32_t t39 = -95921;

    t39 = ((x157!=x158)<=(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	volatile int64_t x162 = -7507173LL;
	static int16_t x163 = INT16_MIN;

    t40 = ((x161!=x162)<=(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = INT8_MIN;
	volatile int32_t x167 = INT32_MAX;
	int64_t x168 = INT64_MAX;
	int32_t t41 = -10304560;

    t41 = ((x165!=x166)<=(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int64_t x170 = 48163137605912LL;
	int16_t x171 = INT16_MIN;
	static int8_t x172 = INT8_MAX;
	int32_t t42 = -3806449;

    t42 = ((x169!=x170)<=(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = 212;
	int32_t x174 = INT32_MIN;
	int64_t x175 = -21050328LL;
	volatile uint16_t x176 = 1917U;

    t43 = ((x173!=x174)<=(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = INT32_MIN;
	int16_t x178 = -30;
	uint16_t x179 = 0U;
	static volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -6543;

    t44 = ((x177!=x178)<=(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x181 = 0;
	int16_t x182 = INT16_MIN;
	static int8_t x183 = 1;
	uint32_t x184 = 43719U;
	static int32_t t45 = 0;

    t45 = ((x181!=x182)<=(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 1371U;
	int16_t x186 = INT16_MIN;
	int16_t x188 = INT16_MIN;

    t46 = ((x185!=x186)<=(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = INT64_MAX;
	int32_t x190 = -1;
	volatile int64_t x191 = INT64_MIN;
	int32_t x192 = -1;

    t47 = ((x189!=x190)<=(x191!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x194 = INT32_MAX;
	volatile uint64_t x195 = UINT64_MAX;
	int64_t x196 = 98539LL;

    t48 = ((x193!=x194)<=(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = 375696;
	static volatile int32_t x198 = INT32_MIN;
	int8_t x200 = INT8_MAX;
	static volatile int32_t t49 = -80790;

    t49 = ((x197!=x198)<=(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x203 = INT16_MAX;
	int32_t x204 = -54486;

    t50 = ((x201!=x202)<=(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -157909878767LL;

    t51 = ((x205!=x206)<=(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 15;
	static int16_t x210 = -1;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 45U;
	volatile int32_t t52 = -635212445;

    t52 = ((x209!=x210)<=(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x213 = INT32_MIN;
	static int16_t x215 = 13;
	uint8_t x216 = UINT8_MAX;
	int32_t t53 = -97833;

    t53 = ((x213!=x214)<=(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 0LLU;
	uint32_t x219 = 6812U;
	uint8_t x220 = 2U;

    t54 = ((x217!=x218)<=(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = -1LL;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	volatile int64_t x224 = INT64_MAX;
	int32_t t55 = 8648;

    t55 = ((x221!=x222)<=(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = -1;
	static volatile int64_t x227 = -1LL;
	int8_t x228 = -1;
	int32_t t56 = 93;

    t56 = ((x225!=x226)<=(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 255506U;
	int32_t x230 = 60101316;
	int16_t x232 = -867;
	volatile int32_t t57 = 413;

    t57 = ((x229!=x230)<=(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MIN;
	int16_t x236 = -71;

    t58 = ((x233!=x234)<=(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x238 = 19541U;
	int64_t x240 = -1LL;
	volatile int32_t t59 = -29257;

    t59 = ((x237!=x238)<=(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x242 = INT32_MAX;
	int32_t t60 = 3823111;

    t60 = ((x241!=x242)<=(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = INT32_MAX;
	volatile int8_t x247 = 0;
	volatile int16_t x248 = 2;
	int32_t t61 = -18773478;

    t61 = ((x245!=x246)<=(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 7438484U;
	static uint64_t x250 = 943LLU;
	volatile uint16_t x251 = UINT16_MAX;
	int64_t x252 = -20195679646304501LL;
	volatile int32_t t62 = -36;

    t62 = ((x249!=x250)<=(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x255 = -1;

    t63 = ((x253!=x254)<=(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 117;

    t64 = ((x257!=x258)<=(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = UINT8_MAX;
	volatile int16_t x262 = -1546;
	int32_t x263 = INT32_MIN;

    t65 = ((x261!=x262)<=(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x267 = 21584U;
	int64_t x268 = INT64_MAX;
	volatile int32_t t66 = -274;

    t66 = ((x265!=x266)<=(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x269 = INT16_MIN;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = -95;
	int16_t x272 = INT16_MIN;

    t67 = ((x269!=x270)<=(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -6370;
	int32_t x274 = 5;
	int64_t x276 = -1LL;
	int32_t t68 = 0;

    t68 = ((x273!=x274)<=(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 84U;
	volatile int32_t t69 = 920002313;

    t69 = ((x277!=x278)<=(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = 239U;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -82;

    t70 = ((x281!=x282)<=(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	static int64_t x286 = -16255723425LL;
	uint32_t x287 = UINT32_MAX;

    t71 = ((x285!=x286)<=(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	volatile uint32_t x291 = 16U;
	static int16_t x292 = INT16_MAX;
	int32_t t72 = -133440103;

    t72 = ((x289!=x290)<=(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	static int64_t x294 = -1LL;
	int8_t x296 = -1;
	int32_t t73 = -1794576;

    t73 = ((x293!=x294)<=(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	static uint32_t x298 = UINT32_MAX;
	int64_t x299 = 215079536077LL;
	volatile int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = 246282348;

    t74 = ((x297!=x298)<=(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	int16_t x302 = -1;
	uint32_t x303 = 28516U;
	uint64_t x304 = 658738912998754913LLU;
	int32_t t75 = -80130;

    t75 = ((x301!=x302)<=(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -208955880;
	int8_t x306 = 15;
	uint16_t x307 = 1U;
	static volatile int32_t t76 = 3599;

    t76 = ((x305!=x306)<=(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = -15;
	int16_t x312 = INT16_MAX;
	volatile int32_t t77 = 23705;

    t77 = ((x309!=x310)<=(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	static int32_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	volatile uint64_t x316 = 2085479216452177LLU;
	volatile int32_t t78 = -797921735;

    t78 = ((x313!=x314)<=(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 124041873151956LLU;
	uint16_t x318 = UINT16_MAX;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 18U;
	volatile int32_t t79 = 457290;

    t79 = ((x317!=x318)<=(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x321 = UINT8_MAX;
	static uint8_t x322 = 15U;
	int8_t x323 = 2;
	uint32_t x324 = 3283U;
	int32_t t80 = 30;

    t80 = ((x321!=x322)<=(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = -1LL;
	volatile int8_t x326 = 3;
	int32_t x328 = INT32_MAX;
	volatile int32_t t81 = -35;

    t81 = ((x325!=x326)<=(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 25815943245LLU;
	int16_t x331 = INT16_MIN;
	int64_t x332 = 8641LL;
	int32_t t82 = 0;

    t82 = ((x329!=x330)<=(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -8901595152231012LL;
	int32_t x335 = 1;
	static volatile int32_t t83 = 23;

    t83 = ((x333!=x334)<=(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	uint64_t x338 = UINT64_MAX;
	int64_t x340 = -1LL;
	int32_t t84 = 0;

    t84 = ((x337!=x338)<=(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 50U;
	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = -56;
	int32_t x344 = -1;

    t85 = ((x341!=x342)<=(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -14;
	int32_t x347 = 347272148;
	int16_t x348 = 139;

    t86 = ((x345!=x346)<=(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 529;
	uint8_t x350 = 1U;
	int16_t x351 = -1;
	int8_t x352 = INT8_MAX;
	static volatile int32_t t87 = 410326;

    t87 = ((x349!=x350)<=(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x354 = INT64_MIN;
	int64_t x355 = -7447246177LL;
	volatile int64_t x356 = -1LL;
	int32_t t88 = 18323;

    t88 = ((x353!=x354)<=(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	uint16_t x358 = 418U;
	volatile int64_t x359 = -956207955586LL;
	int32_t x360 = -140510132;

    t89 = ((x357!=x358)<=(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = 3;
	static int64_t x362 = INT64_MIN;
	int32_t x364 = INT32_MAX;
	int32_t t90 = -699153;

    t90 = ((x361!=x362)<=(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 211894946U;
	static volatile int8_t x366 = INT8_MIN;
	int64_t x367 = -35538486650158LL;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 35353;

    t91 = ((x365!=x366)<=(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	static int8_t x371 = -1;
	int32_t t92 = 53900;

    t92 = ((x369!=x370)<=(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = 54878741825LL;
	int16_t x374 = -8;
	static int64_t x375 = -4LL;
	volatile uint64_t x376 = 322606792938LLU;
	int32_t t93 = 3777;

    t93 = ((x373!=x374)<=(x375!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	volatile int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MAX;

    t94 = ((x377!=x378)<=(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	int8_t x383 = -1;
	static int32_t t95 = 13;

    t95 = ((x381!=x382)<=(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MAX;
	volatile int64_t x387 = INT64_MIN;
	uint16_t x388 = UINT16_MAX;
	static int32_t t96 = 282295;

    t96 = ((x385!=x386)<=(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MIN;
	static uint32_t x390 = 45679U;
	int16_t x391 = 1;
	int32_t x392 = INT32_MIN;
	static int32_t t97 = -27472;

    t97 = ((x389!=x390)<=(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x394 = 52;
	static int32_t x395 = 37;
	volatile uint16_t x396 = 3154U;

    t98 = ((x393!=x394)<=(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	uint8_t x398 = 48U;
	volatile int8_t x399 = INT8_MIN;
	uint8_t x400 = 25U;
	int32_t t99 = -267986;

    t99 = ((x397!=x398)<=(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	static volatile int64_t x402 = INT64_MAX;
	uint64_t x403 = 5127915220LLU;
	static int64_t x404 = -1LL;
	volatile int32_t t100 = -187392;

    t100 = ((x401!=x402)<=(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	volatile int32_t x407 = INT32_MIN;
	int16_t x408 = 1970;
	volatile int32_t t101 = -21603054;

    t101 = ((x405!=x406)<=(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = -1;
	int16_t x411 = INT16_MAX;
	volatile int32_t t102 = 956936535;

    t102 = ((x409!=x410)<=(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -186811145879240LL;
	static uint8_t x414 = UINT8_MAX;
	int64_t x416 = -227855077546373LL;

    t103 = ((x413!=x414)<=(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	uint16_t x418 = UINT16_MAX;
	uint16_t x419 = 2978U;
	int8_t x420 = INT8_MAX;
	int32_t t104 = 24904;

    t104 = ((x417!=x418)<=(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x421 = -110436;
	uint8_t x422 = 0U;
	int8_t x423 = -6;
	static volatile int32_t x424 = INT32_MAX;
	int32_t t105 = -2730097;

    t105 = ((x421!=x422)<=(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	volatile int32_t x426 = INT32_MIN;
	int8_t x428 = INT8_MAX;
	volatile int32_t t106 = 4951755;

    t106 = ((x425!=x426)<=(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MAX;
	volatile int64_t x430 = 940685325LL;
	volatile int16_t x431 = -1;
	static volatile uint32_t x432 = 61825566U;
	static int32_t t107 = 4708;

    t107 = ((x429!=x430)<=(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	static int32_t x434 = INT32_MAX;
	uint32_t x436 = UINT32_MAX;
	int32_t t108 = 19185658;

    t108 = ((x433!=x434)<=(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x439 = INT8_MAX;
	volatile int32_t t109 = 7882;

    t109 = ((x437!=x438)<=(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = INT64_MIN;
	static int16_t x442 = -1;
	int64_t x443 = INT64_MAX;
	int8_t x444 = INT8_MAX;
	volatile int32_t t110 = -87746;

    t110 = ((x441!=x442)<=(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x447 = 209332591U;
	int32_t t111 = -33468;

    t111 = ((x445!=x446)<=(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = UINT16_MAX;
	static volatile int32_t x452 = INT32_MIN;
	static int32_t t112 = 13710;

    t112 = ((x449!=x450)<=(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = 267491U;
	static volatile int32_t x454 = 369772;
	int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;
	static int32_t t113 = 8;

    t113 = ((x453!=x454)<=(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	uint16_t x458 = 12121U;
	uint16_t x459 = UINT16_MAX;
	volatile int32_t t114 = 6587916;

    t114 = ((x457!=x458)<=(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x463 = 5668LL;
	int64_t x464 = INT64_MAX;

    t115 = ((x461!=x462)<=(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	volatile int16_t x467 = INT16_MIN;
	uint32_t x468 = 12U;
	int32_t t116 = -5;

    t116 = ((x465!=x466)<=(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = INT32_MIN;
	int8_t x471 = 17;
	volatile int16_t x472 = INT16_MIN;
	int32_t t117 = 120785141;

    t117 = ((x469!=x470)<=(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 703766480924LLU;
	volatile int16_t x476 = INT16_MAX;
	static volatile int32_t t118 = -330467;

    t118 = ((x473!=x474)<=(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x478 = -101997056291LL;
	static int8_t x479 = INT8_MIN;
	int32_t x480 = -1;
	int32_t t119 = 129393023;

    t119 = ((x477!=x478)<=(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 69U;
	volatile uint8_t x482 = UINT8_MAX;
	int8_t x484 = 0;

    t120 = ((x481!=x482)<=(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 36U;
	int8_t x487 = INT8_MIN;
	static int16_t x488 = INT16_MIN;
	volatile int32_t t121 = -25530588;

    t121 = ((x485!=x486)<=(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	volatile int64_t x490 = INT64_MIN;
	volatile int8_t x491 = 4;
	volatile int64_t x492 = INT64_MIN;

    t122 = ((x489!=x490)<=(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x493 = UINT16_MAX;
	int8_t x494 = INT8_MAX;
	int8_t x495 = 6;
	uint8_t x496 = 5U;

    t123 = ((x493!=x494)<=(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x497 = UINT16_MAX;
	uint32_t x498 = 121248U;
	int32_t x499 = -680058043;
	static int8_t x500 = -1;
	volatile int32_t t124 = -2;

    t124 = ((x497!=x498)<=(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = UINT8_MAX;
	static volatile int16_t x503 = -1;
	uint16_t x504 = 22152U;
	volatile int32_t t125 = 573936;

    t125 = ((x501!=x502)<=(x503!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	int32_t x506 = INT32_MIN;
	static volatile uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MIN;
	int32_t t126 = -4223;

    t126 = ((x505!=x506)<=(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int16_t x511 = -607;
	int64_t x512 = INT64_MIN;
	int32_t t127 = -11705;

    t127 = ((x509!=x510)<=(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	static int8_t x514 = INT8_MIN;
	static int16_t x515 = INT16_MAX;
	int64_t x516 = 503LL;

    t128 = ((x513!=x514)<=(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x518 = 70059113368210672LLU;
	int32_t x519 = INT32_MAX;
	int64_t x520 = INT64_MIN;
	volatile int32_t t129 = -199547617;

    t129 = ((x517!=x518)<=(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 8802071694LLU;
	static volatile int64_t x522 = INT64_MIN;
	int32_t x523 = -8979065;
	int64_t x524 = INT64_MAX;

    t130 = ((x521!=x522)<=(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MAX;
	int8_t x527 = INT8_MIN;
	static int16_t x528 = INT16_MAX;
	volatile int32_t t131 = -73946;

    t131 = ((x525!=x526)<=(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 21U;
	int8_t x530 = INT8_MIN;
	uint32_t x531 = 27803841U;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 8;

    t132 = ((x529!=x530)<=(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = UINT8_MAX;
	static int32_t x535 = -1;
	static int32_t t133 = -9672;

    t133 = ((x533!=x534)<=(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x538 = 20612995646521992LL;
	int16_t x540 = INT16_MIN;
	int32_t t134 = 11546;

    t134 = ((x537!=x538)<=(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = INT8_MAX;
	volatile int8_t x543 = 7;
	static int64_t x544 = -1LL;

    t135 = ((x541!=x542)<=(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = INT32_MIN;
	int64_t x548 = -1LL;
	static volatile int32_t t136 = -1645137;

    t136 = ((x545!=x546)<=(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	int64_t x550 = 68657740467LL;
	int32_t x551 = INT32_MIN;
	volatile uint16_t x552 = 5U;

    t137 = ((x549!=x550)<=(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MIN;
	volatile int64_t x554 = INT64_MIN;

    t138 = ((x553!=x554)<=(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 87385610845LL;
	volatile uint64_t x558 = 254LLU;
	int32_t t139 = 2238;

    t139 = ((x557!=x558)<=(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MAX;
	uint64_t x563 = 10004797585082991LLU;
	volatile int32_t x564 = -1;

    t140 = ((x561!=x562)<=(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 17440U;
	static int32_t x566 = -593;
	int32_t x567 = INT32_MIN;
	uint64_t x568 = UINT64_MAX;

    t141 = ((x565!=x566)<=(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	int8_t x570 = 1;
	static uint16_t x571 = 28992U;
	static volatile int16_t x572 = 3;

    t142 = ((x569!=x570)<=(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	int16_t x576 = INT16_MIN;
	int32_t t143 = 130042;

    t143 = ((x573!=x574)<=(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x577 = INT64_MAX;
	int16_t x578 = -19;
	static int64_t x580 = -120801LL;
	int32_t t144 = 358;

    t144 = ((x577!=x578)<=(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MIN;
	int32_t x582 = -11782686;
	volatile int64_t x583 = -1LL;
	int32_t x584 = INT32_MIN;

    t145 = ((x581!=x582)<=(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 11;
	static int32_t x586 = 506719;
	static int64_t x587 = INT64_MAX;
	volatile int64_t x588 = INT64_MIN;

    t146 = ((x585!=x586)<=(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x591 = INT8_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t147 = 1374;

    t147 = ((x589!=x590)<=(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x593 = UINT8_MAX;
	uint8_t x595 = UINT8_MAX;
	volatile int32_t t148 = -3924;

    t148 = ((x593!=x594)<=(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = -12152;
	volatile int64_t x598 = INT64_MIN;
	int32_t t149 = 433;

    t149 = ((x597!=x598)<=(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	volatile int8_t x602 = INT8_MIN;
	static int32_t x603 = INT32_MIN;
	volatile uint16_t x604 = 118U;

    t150 = ((x601!=x602)<=(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MIN;
	int32_t t151 = 1;

    t151 = ((x605!=x606)<=(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = -1;
	int16_t x611 = INT16_MIN;
	static volatile int16_t x612 = INT16_MIN;
	volatile int32_t t152 = -31;

    t152 = ((x609!=x610)<=(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -3;
	static volatile uint64_t x615 = UINT64_MAX;
	static int16_t x616 = 1;
	volatile int32_t t153 = -346;

    t153 = ((x613!=x614)<=(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	static int64_t x618 = INT64_MAX;
	int8_t x619 = INT8_MAX;
	int8_t x620 = -9;
	int32_t t154 = 651;

    t154 = ((x617!=x618)<=(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	static uint16_t x622 = 328U;
	uint32_t x623 = 1207U;
	static volatile uint8_t x624 = UINT8_MAX;
	volatile int32_t t155 = 2;

    t155 = ((x621!=x622)<=(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x625 = UINT16_MAX;
	volatile uint32_t x626 = UINT32_MAX;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = INT8_MAX;
	volatile int32_t t156 = -1;

    t156 = ((x625!=x626)<=(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	volatile int64_t x630 = INT64_MAX;
	static int64_t x632 = INT64_MIN;
	int32_t t157 = -21565557;

    t157 = ((x629!=x630)<=(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	static uint64_t x635 = UINT64_MAX;
	int16_t x636 = -15404;
	volatile int32_t t158 = 4027334;

    t158 = ((x633!=x634)<=(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MIN;
	int32_t x638 = INT32_MIN;
	int64_t x639 = -1LL;
	uint8_t x640 = 85U;

    t159 = ((x637!=x638)<=(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x642 = INT64_MAX;
	int16_t x643 = INT16_MIN;
	volatile int64_t x644 = INT64_MIN;
	int32_t t160 = 659783319;

    t160 = ((x641!=x642)<=(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 0U;
	static int64_t x646 = INT64_MAX;
	volatile int8_t x647 = INT8_MIN;
	volatile uint32_t x648 = 0U;
	int32_t t161 = -12165388;

    t161 = ((x645!=x646)<=(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MAX;
	volatile int8_t x650 = 0;
	int64_t x651 = -1LL;
	uint16_t x652 = 1833U;
	int32_t t162 = 1;

    t162 = ((x649!=x650)<=(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 1;
	static int8_t x654 = INT8_MIN;
	static int32_t x655 = -1;
	static int32_t t163 = -163;

    t163 = ((x653!=x654)<=(x655!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x657 = INT32_MIN;
	int16_t x658 = -1;
	uint64_t x659 = 200291574835875233LLU;
	int16_t x660 = INT16_MAX;

    t164 = ((x657!=x658)<=(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = -14266927LL;
	int16_t x662 = -1;
	int32_t x663 = -1;
	static uint64_t x664 = 729036971467890250LLU;
	volatile int32_t t165 = -6217410;

    t165 = ((x661!=x662)<=(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x665 = 4U;
	volatile uint16_t x667 = 14U;
	int16_t x668 = 7426;

    t166 = ((x665!=x666)<=(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	int32_t x670 = -1;
	int32_t x671 = INT32_MIN;
	static uint64_t x672 = 86107786165LLU;
	int32_t t167 = 269141718;

    t167 = ((x669!=x670)<=(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MIN;
	int16_t x675 = INT16_MAX;
	int8_t x676 = -1;
	volatile int32_t t168 = -2;

    t168 = ((x673!=x674)<=(x675!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	uint16_t x678 = 1867U;
	int64_t x679 = INT64_MAX;
	static volatile uint64_t x680 = UINT64_MAX;

    t169 = ((x677!=x678)<=(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static volatile int16_t x682 = -1306;
	int8_t x683 = INT8_MAX;
	volatile int32_t t170 = 3938;

    t170 = ((x681!=x682)<=(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	volatile int16_t x686 = INT16_MAX;
	int8_t x687 = -3;
	int8_t x688 = INT8_MAX;
	static int32_t t171 = 6728;

    t171 = ((x685!=x686)<=(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x690 = 1235;
	static int32_t x691 = 847097;
	int32_t x692 = -1;
	volatile int32_t t172 = 23256;

    t172 = ((x689!=x690)<=(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	uint8_t x695 = 6U;
	int32_t t173 = 62701;

    t173 = ((x693!=x694)<=(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 31491U;
	static int8_t x698 = -1;
	static int8_t x699 = INT8_MAX;
	int8_t x700 = -1;
	volatile int32_t t174 = -134030;

    t174 = ((x697!=x698)<=(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -2;
	int8_t x702 = INT8_MIN;
	int8_t x703 = INT8_MIN;
	volatile int32_t t175 = 91412;

    t175 = ((x701!=x702)<=(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	static int64_t x706 = INT64_MIN;
	int32_t x708 = INT32_MIN;

    t176 = ((x705!=x706)<=(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 0;
	volatile int8_t x710 = INT8_MIN;
	static volatile int32_t x711 = INT32_MIN;
	volatile int64_t x712 = -12816191995037LL;
	int32_t t177 = 272219;

    t177 = ((x709!=x710)<=(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x715 = 736845659113LLU;
	static uint16_t x716 = 10U;
	static int32_t t178 = 3033;

    t178 = ((x713!=x714)<=(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = UINT16_MAX;
	volatile int16_t x718 = -1;
	uint64_t x719 = 64428515235672LLU;
	uint32_t x720 = UINT32_MAX;
	volatile int32_t t179 = 1;

    t179 = ((x717!=x718)<=(x719!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	int32_t x722 = INT32_MIN;
	uint8_t x724 = 0U;
	int32_t t180 = -413939492;

    t180 = ((x721!=x722)<=(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = -116589590042LL;
	volatile int32_t x727 = -1;
	uint64_t x728 = 169LLU;
	int32_t t181 = 12392011;

    t181 = ((x725!=x726)<=(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MAX;
	static volatile int32_t t182 = -110502;

    t182 = ((x729!=x730)<=(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int64_t x734 = -1LL;
	static int32_t x735 = -5092;
	uint64_t x736 = UINT64_MAX;

    t183 = ((x733!=x734)<=(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 19928U;
	int32_t x738 = INT32_MIN;
	int16_t x739 = -1;
	uint8_t x740 = 28U;
	int32_t t184 = 12;

    t184 = ((x737!=x738)<=(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 11031LLU;
	volatile int16_t x742 = INT16_MIN;
	int16_t x744 = 0;

    t185 = ((x741!=x742)<=(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x746 = -1;
	int32_t x747 = -406796;
	static int8_t x748 = INT8_MAX;
	int32_t t186 = 85;

    t186 = ((x745!=x746)<=(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = INT16_MIN;
	uint8_t x751 = 84U;
	volatile int32_t t187 = -14388;

    t187 = ((x749!=x750)<=(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = -12897;
	volatile int64_t x755 = -74833713277332LL;
	static volatile int32_t t188 = -53501952;

    t188 = ((x753!=x754)<=(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -108997;
	volatile int32_t x758 = -1;
	volatile int8_t x759 = INT8_MIN;
	int32_t t189 = 249223501;

    t189 = ((x757!=x758)<=(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 135;
	int64_t x763 = -3LL;
	static volatile int32_t x764 = -20062;
	volatile int32_t t190 = -647;

    t190 = ((x761!=x762)<=(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 2LLU;
	static volatile int16_t x767 = 0;
	int32_t x768 = 2;
	int32_t t191 = -67737;

    t191 = ((x765!=x766)<=(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x770 = INT32_MAX;
	uint8_t x771 = 124U;
	int16_t x772 = INT16_MIN;

    t192 = ((x769!=x770)<=(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = 11960;
	uint8_t x774 = 13U;
	int32_t x775 = -2260;
	int32_t t193 = -206258;

    t193 = ((x773!=x774)<=(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MAX;
	uint8_t x778 = 13U;
	int32_t x779 = INT32_MAX;
	int32_t x780 = INT32_MAX;
	int32_t t194 = 57;

    t194 = ((x777!=x778)<=(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x782 = INT32_MAX;
	int64_t x783 = -1LL;
	int32_t t195 = -830;

    t195 = ((x781!=x782)<=(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = -231;
	int64_t x787 = INT64_MAX;
	int32_t t196 = 0;

    t196 = ((x785!=x786)<=(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -229;
	int8_t x791 = INT8_MIN;
	volatile uint64_t x792 = 626186050236131LLU;
	static volatile int32_t t197 = 16;

    t197 = ((x789!=x790)<=(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x793 = 37LLU;
	int32_t x794 = INT32_MIN;
	uint16_t x795 = UINT16_MAX;
	uint16_t x796 = 79U;
	int32_t t198 = 744539;

    t198 = ((x793!=x794)<=(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MAX;
	uint8_t x798 = UINT8_MAX;
	int8_t x799 = INT8_MIN;
	static int32_t x800 = INT32_MAX;
	static volatile int32_t t199 = -449;

    t199 = ((x797!=x798)<=(x799!=x800));

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

