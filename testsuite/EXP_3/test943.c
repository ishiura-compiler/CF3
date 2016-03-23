
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

static int8_t x2 = -1;
int8_t x3 = 12;
int16_t x11 = 36;
int8_t x12 = -5;
int16_t x14 = 3936;
volatile int32_t x20 = INT32_MIN;
int8_t x29 = INT8_MIN;
uint16_t x31 = 1496U;
uint32_t t7 = 882772671U;
static int32_t x46 = INT32_MIN;
int32_t x49 = INT32_MAX;
volatile uint32_t x55 = 853241U;
static uint32_t t15 = 35238U;
int8_t x69 = INT8_MAX;
int32_t x70 = 1;
volatile int64_t x73 = 121808217818973LL;
int32_t x75 = INT32_MIN;
int64_t t17 = 8LL;
static int32_t x79 = INT32_MAX;
int16_t x82 = INT16_MIN;
volatile uint8_t x83 = UINT8_MAX;
int16_t x99 = INT16_MAX;
uint16_t x105 = UINT16_MAX;
volatile int64_t t23 = -44492292380LL;
int64_t x131 = -8972968465477242LL;
int32_t x138 = -1;
static volatile uint32_t x142 = 4115113U;
uint64_t t31 = 3322987874LLU;
int32_t x152 = -54896;
int64_t x155 = -1LL;
volatile int32_t x157 = 129931335;
volatile int32_t t34 = 943818589;
uint16_t x165 = UINT16_MAX;
uint64_t t36 = 55521981127727914LLU;
volatile int8_t x170 = INT8_MIN;
static int8_t x172 = -60;
int32_t t37 = -289;
uint32_t x174 = UINT32_MAX;
static int32_t x175 = -1931;
int64_t x193 = -1LL;
int16_t x202 = INT16_MAX;
static int32_t x203 = 554506859;
static volatile uint64_t t43 = 23111609LLU;
uint16_t x208 = UINT16_MAX;
volatile uint64_t t44 = 1551577713LLU;
static uint16_t x218 = UINT16_MAX;
int64_t x225 = -981645199845033LL;
volatile int64_t x235 = -1LL;
volatile uint32_t x238 = 2051U;
uint64_t x244 = 5000717105128231535LLU;
uint8_t x251 = 105U;
uint32_t t55 = 1120074590U;
int16_t x258 = INT16_MIN;
int32_t x259 = INT32_MAX;
int64_t x266 = INT64_MAX;
uint64_t x270 = 2375653721431460LLU;
static uint32_t x272 = 292001U;
int64_t x278 = 0LL;
int32_t x290 = INT32_MIN;
uint16_t x292 = UINT16_MAX;
uint8_t x298 = UINT8_MAX;
static int16_t x305 = 3;
static int16_t x309 = INT16_MIN;
int32_t x313 = INT32_MIN;
int16_t x316 = INT16_MAX;
volatile uint64_t t68 = 8LLU;
int16_t x323 = -9515;
volatile uint64_t t69 = 3120LLU;
int64_t x328 = INT64_MAX;
int64_t t70 = -1LL;
int64_t x337 = -319322LL;
int32_t x341 = INT32_MIN;
int8_t x357 = 0;
int32_t t75 = 3420592;
int64_t x361 = INT64_MAX;
volatile int32_t x366 = INT32_MIN;
uint32_t x378 = 6112310U;
volatile int8_t x382 = INT8_MIN;
int32_t t79 = 44;
int16_t x393 = INT16_MIN;
static int16_t x394 = INT16_MIN;
volatile int64_t x401 = INT64_MAX;
static volatile uint32_t x402 = 3032U;
uint64_t x405 = UINT64_MAX;
int16_t x415 = INT16_MAX;
volatile int64_t x421 = 110443003891551901LL;
int32_t x422 = 139497;
volatile int32_t x423 = INT32_MIN;
static volatile int16_t x426 = 68;
volatile int64_t t88 = 133138348367LL;
uint16_t x441 = 17U;
uint16_t x442 = 248U;
uint16_t x457 = 6U;
volatile int64_t x458 = 0LL;
int16_t x459 = INT16_MIN;
static int8_t x466 = -1;
uint16_t x471 = 6U;
int8_t x472 = INT8_MIN;
static uint32_t x478 = 1338899U;
static int16_t x479 = INT16_MAX;
uint8_t x483 = 6U;
uint64_t x490 = 57052083456968849LLU;
static int16_t x494 = INT16_MIN;
int64_t x505 = INT64_MIN;
int64_t x508 = INT64_MIN;
static volatile int32_t x513 = INT32_MIN;
uint8_t x515 = 28U;
volatile int64_t t106 = -208LL;
int16_t x521 = INT16_MIN;
uint32_t x522 = UINT32_MAX;
static int16_t x523 = -1;
uint64_t x527 = 5027807120260LLU;
volatile int8_t x532 = INT8_MIN;
volatile uint32_t x535 = UINT32_MAX;
uint16_t x539 = UINT16_MAX;
static int64_t x540 = INT64_MIN;
volatile uint32_t x542 = UINT32_MAX;
int64_t x543 = 2997124763591103LL;
volatile int16_t x563 = INT16_MIN;
volatile int64_t t115 = -24217147158LL;
uint16_t x566 = 138U;
static uint64_t x567 = 948724819157853295LLU;
uint64_t t116 = 14LLU;
int64_t t117 = 3146LL;
volatile int8_t x583 = INT8_MAX;
static volatile uint16_t x586 = UINT16_MAX;
int64_t x592 = INT64_MIN;
static int8_t x601 = INT8_MAX;
static int8_t x604 = INT8_MAX;
int8_t x615 = INT8_MAX;
static volatile uint16_t x625 = 109U;
uint32_t x630 = 15838199U;
uint64_t x636 = 3530LLU;
volatile uint64_t t127 = 32684523LLU;
int32_t x640 = INT32_MIN;
int16_t x641 = INT16_MIN;
int64_t x642 = INT64_MIN;
volatile uint64_t t129 = 924862LLU;
volatile uint32_t x659 = UINT32_MAX;
int16_t x660 = INT16_MAX;
int32_t x673 = INT32_MIN;
uint32_t x675 = 720U;
int64_t x695 = -552474657812652LL;
static int8_t x700 = 35;
int64_t x702 = -52006173318218LL;
int32_t x704 = INT32_MIN;
volatile int64_t t139 = -3LL;
uint8_t x710 = 0U;
uint64_t x712 = 506861592LLU;
int32_t x716 = INT32_MIN;
uint64_t x721 = UINT64_MAX;
int16_t x723 = -23;
volatile int64_t t144 = 3864294406LL;
volatile uint8_t x733 = UINT8_MAX;
int16_t x734 = INT16_MIN;
uint64_t t146 = 715008179874615LLU;
volatile uint32_t t148 = 13615U;
int16_t x745 = 1;
volatile int32_t x757 = INT32_MIN;
volatile int64_t x764 = INT64_MIN;
int32_t x768 = INT32_MIN;
int64_t x779 = -4214819590962372266LL;
int64_t x784 = 54523LL;
static int64_t x790 = -1LL;
int16_t x828 = -598;
int64_t x833 = INT64_MIN;
int64_t x836 = INT64_MAX;
int16_t x838 = -1;
int8_t x839 = -1;
static int32_t x845 = INT32_MAX;
int64_t t169 = 1577284LL;
int8_t x857 = -1;
static volatile int8_t x862 = INT8_MAX;
static volatile int16_t x868 = -3723;
volatile int16_t x871 = INT16_MIN;
uint64_t t177 = 10569407994276LLU;
int16_t x890 = -3;
static volatile uint64_t t179 = 61746LLU;
static uint32_t x898 = UINT32_MAX;
uint64_t x899 = 733371470LLU;
uint32_t x900 = UINT32_MAX;
static volatile int8_t x904 = 9;
volatile int32_t t181 = -59192277;
uint64_t t182 = 412776968594892297LLU;
int16_t x909 = INT16_MAX;
int64_t x915 = 557756893964045LL;
int8_t x917 = INT8_MIN;
volatile uint8_t x918 = 2U;
int32_t x939 = -5954108;
uint64_t t187 = 56192539634LLU;
static volatile uint64_t x943 = UINT64_MAX;
uint16_t x944 = 20293U;
uint64_t t189 = 1297755LLU;
uint32_t x953 = UINT32_MAX;
volatile uint16_t x957 = 5U;
uint8_t x972 = 54U;
static int8_t x978 = INT8_MAX;
volatile int64_t x980 = -734839001654LL;
volatile uint32_t x986 = 15343U;
int64_t t195 = -30635173536833LL;
uint8_t x991 = UINT8_MAX;
int16_t x1016 = INT16_MIN;
volatile int32_t t199 = 1604;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint8_t x4 = 33U;
	volatile int32_t t0 = 916576319;

    t0 = ((x1&x2)%(x3%x4));

    if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint8_t x6 = 1U;
	uint8_t x7 = 2U;
	static int64_t x8 = -15813092135032LL;
	volatile int64_t t1 = -429LL;

    t1 = ((x5&x6)%(x7%x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint16_t x10 = UINT16_MAX;
	volatile int32_t t2 = -484320482;

    t2 = ((x9&x10)%(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	static volatile int8_t x15 = INT8_MAX;
	int32_t x16 = 9;
	int32_t t3 = -10;

    t3 = ((x13&x14)%(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	static int32_t x18 = -1;
	uint8_t x19 = UINT8_MAX;
	int64_t t4 = -90290682LL;

    t4 = ((x17&x18)%(x19%x20));

    if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 2U;
	static uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = 53U;
	volatile int64_t t5 = -915LL;

    t5 = ((x25&x26)%(x27%x28));

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t6 = 19132450285792LL;

    t6 = ((x29&x30)%(x31%x32));

    if (t6 != -536LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MAX;
	uint8_t x35 = 5U;
	static volatile uint32_t x36 = UINT32_MAX;

    t7 = ((x33&x34)%(x35%x36));

    if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	static volatile int32_t x39 = -581193;
	uint16_t x40 = 8124U;
	int32_t t8 = -2867;

    t8 = ((x37&x38)%(x39%x40));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	static uint8_t x42 = 39U;
	static uint8_t x43 = 2U;
	volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t9 = 7425534879081619010LLU;

    t9 = ((x41&x42)%(x43%x44));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	int8_t x47 = 2;
	int8_t x48 = INT8_MAX;
	static uint32_t t10 = 2900U;

    t10 = ((x45&x46)%(x47%x48));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = -1;
	int32_t x51 = 13;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 11390988631291LLU;

    t11 = ((x49&x50)%(x51%x52));

    if (t11 != 10LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -27;
	int8_t x54 = INT8_MIN;
	volatile int32_t x56 = -416;
	uint32_t t12 = 6230U;

    t12 = ((x53&x54)%(x55%x56));

    if (t12 != 605215U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = 3;
	volatile int32_t x58 = -1;
	volatile uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 2U;
	static int32_t t13 = -18;

    t13 = ((x57&x58)%(x59%x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = 10;
	uint32_t x62 = 6U;
	static int8_t x63 = INT8_MIN;
	uint32_t x64 = 1212473334U;
	volatile uint32_t t14 = 11U;

    t14 = ((x61&x62)%(x63%x64));

    if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 1999233U;
	int8_t x66 = INT8_MAX;
	int8_t x67 = -28;
	int8_t x68 = INT8_MIN;

    t15 = ((x65&x66)%(x67%x68));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x71 = 55U;
	uint32_t x72 = 44415U;
	static uint32_t t16 = 2U;

    t16 = ((x69&x70)%(x71%x72));

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x74 = INT64_MAX;
	int64_t x76 = INT64_MIN;

    t17 = ((x73&x74)%(x75%x76));

    if (t17 != 797820765LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MAX;
	uint32_t x78 = 249865U;
	uint16_t x80 = 3069U;
	volatile int64_t t18 = -367387688LL;

    t18 = ((x77&x78)%(x79%x80));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 3U;
	volatile int64_t x84 = 35237778079189LL;
	int64_t t19 = -1264983013LL;

    t19 = ((x81&x82)%(x83%x84));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = -1;
	volatile uint16_t x90 = UINT16_MAX;
	int8_t x91 = 1;
	static volatile int16_t x92 = -131;
	volatile int32_t t20 = 37;

    t20 = ((x89&x90)%(x91%x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	static uint64_t x100 = 1277083289588LLU;
	uint64_t t21 = 10867297LLU;

    t21 = ((x97&x98)%(x99%x100));

    if (t21 != 32641LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x106 = UINT32_MAX;
	int32_t x107 = -1;
	volatile int8_t x108 = INT8_MIN;
	uint32_t t22 = 0U;

    t22 = ((x105&x106)%(x107%x108));

    if (t22 != 65535U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x109 = -488LL;
	static volatile int16_t x110 = INT16_MAX;
	uint32_t x111 = 71U;
	int16_t x112 = INT16_MAX;

    t23 = ((x109&x110)%(x111%x112));

    if (t23 != 46LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = -6767LL;
	int8_t x114 = 7;
	uint32_t x115 = 133U;
	static int32_t x116 = INT32_MIN;
	int64_t t24 = 48853321804466432LL;

    t24 = ((x113&x114)%(x115%x116));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = -1;
	int64_t x118 = 3870631LL;
	volatile int16_t x119 = -1;
	int32_t x120 = INT32_MAX;
	volatile int64_t t25 = 24169LL;

    t25 = ((x117&x118)%(x119%x120));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = -1;
	static uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	int32_t x124 = 2527;
	static uint32_t t26 = 302U;

    t26 = ((x121&x122)%(x123%x124));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x125 = -1045;
	static int32_t x126 = INT32_MAX;
	int32_t x127 = -1;
	volatile int32_t x128 = -930499099;
	int32_t t27 = 11678774;

    t27 = ((x125&x126)%(x127%x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = -1;
	int32_t x130 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	volatile int64_t t28 = 827LL;

    t28 = ((x129&x130)%(x131%x132));

    if (t28 != -45690878LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = -1;
	int32_t x134 = -214018;
	int16_t x135 = -144;
	uint16_t x136 = UINT16_MAX;
	static int32_t t29 = -2038;

    t29 = ((x133&x134)%(x135%x136));

    if (t29 != -34) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = 88915U;
	static uint64_t x139 = 2820233036252LLU;
	int16_t x140 = INT16_MAX;
	uint64_t t30 = 6327204290183LLU;

    t30 = ((x137&x138)%(x139%x140));

    if (t30 != 4851LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = INT32_MIN;
	uint64_t x143 = 864127245LLU;
	static uint64_t x144 = 2156670224108032LLU;

    t31 = ((x141&x142)%(x143%x144));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	volatile int64_t x151 = INT64_MIN;
	volatile int64_t t32 = 12123123027LL;

    t32 = ((x149&x150)%(x151%x152));

    if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = INT32_MIN;
	uint8_t x154 = 34U;
	int16_t x156 = -7809;
	static int64_t t33 = -288022730245690LL;

    t33 = ((x153&x154)%(x155%x156));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x158 = 5271U;
	static int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MIN;

    t34 = ((x157&x158)%(x159%x160));

    if (t34 != 4103) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MAX;
	static int32_t x162 = 86;
	int32_t x163 = -807082;
	int32_t x164 = INT32_MAX;
	volatile int32_t t35 = 1023393787;

    t35 = ((x161&x162)%(x163%x164));

    if (t35 != 86) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x166 = 3LLU;
	int16_t x167 = 177;
	int64_t x168 = INT64_MIN;

    t36 = ((x165&x166)%(x167%x168));

    if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = -2;
	uint16_t x171 = UINT16_MAX;

    t37 = ((x169&x170)%(x171%x172));

    if (t37 != -8) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = INT8_MAX;
	static int64_t x176 = -56795381367548523LL;
	volatile int64_t t38 = -868769068481LL;

    t38 = ((x173&x174)%(x175%x176));

    if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x177 = UINT8_MAX;
	static int32_t x178 = INT32_MIN;
	int64_t x179 = -1LL;
	uint64_t x180 = 40588788250847LLU;
	volatile uint64_t t39 = 41789531LLU;

    t39 = ((x177&x178)%(x179%x180));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = -1;
	volatile uint64_t x190 = UINT64_MAX;
	static int16_t x191 = 4;
	static uint16_t x192 = 457U;
	static uint64_t t40 = 4010166LLU;

    t40 = ((x189&x190)%(x191%x192));

    if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x194 = 135401910U;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	int64_t t41 = 68438570549LL;

    t41 = ((x193&x194)%(x195%x196));

    if (t41 != 54LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t42 = -741403526;

    t42 = ((x197&x198)%(x199%x200));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x201 = -1;
	uint64_t x204 = 9147858157568886774LLU;

    t43 = ((x201&x202)%(x203%x204));

    if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x205 = INT16_MIN;
	uint64_t x206 = 1259630335LLU;
	static int64_t x207 = 6LL;

    t44 = ((x205&x206)%(x207%x208));

    if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	int8_t x210 = 1;
	volatile uint64_t x211 = 121074410LLU;
	volatile uint32_t x212 = 617U;
	uint64_t t45 = 178LLU;

    t45 = ((x209&x210)%(x211%x212));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x213 = 49LL;
	volatile int8_t x214 = INT8_MIN;
	int32_t x215 = 12904879;
	int32_t x216 = INT32_MAX;
	int64_t t46 = 984LL;

    t46 = ((x213&x214)%(x215%x216));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x217 = UINT32_MAX;
	int64_t x219 = -1LL;
	volatile int32_t x220 = INT32_MIN;
	static volatile int64_t t47 = -446LL;

    t47 = ((x217&x218)%(x219%x220));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = 398U;
	int32_t x222 = -1;
	int16_t x223 = INT16_MAX;
	uint8_t x224 = 20U;
	int32_t t48 = -342340;

    t48 = ((x221&x222)%(x223%x224));

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x226 = -15;
	static uint32_t x227 = 54052U;
	uint64_t x228 = UINT64_MAX;
	uint64_t t49 = 13LLU;

    t49 = ((x225&x226)%(x227%x228));

    if (t49 != 34437LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = 2886465311396722671LL;
	static uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;
	volatile int64_t t50 = -1347467451153LL;

    t50 = ((x229&x230)%(x231%x232));

    if (t50 != 111LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x233 = -1;
	int64_t x234 = -529108LL;
	uint32_t x236 = 4U;
	volatile int64_t t51 = -239723LL;

    t51 = ((x233&x234)%(x235%x236));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = -1;
	int64_t x239 = -13LL;
	uint32_t x240 = 2687581U;
	volatile int64_t t52 = 47392002LL;

    t52 = ((x237&x238)%(x239%x240));

    if (t52 != 10LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = 54;
	static uint64_t x242 = UINT64_MAX;
	int64_t x243 = INT64_MIN;
	uint64_t t53 = 485604LLU;

    t53 = ((x241&x242)%(x243%x244));

    if (t53 != 54LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x245 = -503;
	static uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MIN;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t54 = -29480633;

    t54 = ((x245&x246)%(x247%x248));

    if (t54 != 32265) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x249 = INT32_MIN;
	volatile uint32_t x250 = 1366634U;
	int8_t x252 = INT8_MIN;

    t55 = ((x249&x250)%(x251%x252));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = -1LL;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t56 = 6416LLU;

    t56 = ((x257&x258)%(x259%x260));

    if (t56 != 2147450883LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x265 = 7LL;
	int64_t x267 = -16339139LL;
	volatile int32_t x268 = INT32_MIN;
	volatile int64_t t57 = 7752704836757918LL;

    t57 = ((x265&x266)%(x267%x268));

    if (t57 != 7LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	volatile uint64_t t58 = 88633760LLU;

    t58 = ((x269&x270)%(x271%x272));

    if (t58 != 175828LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x273 = 3300038355336222LL;
	static int16_t x274 = 50;
	int16_t x275 = 11489;
	int16_t x276 = INT16_MIN;
	volatile int64_t t59 = -81524549897189LL;

    t59 = ((x273&x274)%(x275%x276));

    if (t59 != 18LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x277 = -1;
	static int32_t x279 = INT32_MIN;
	volatile int8_t x280 = INT8_MAX;
	int64_t t60 = 336211990252245LL;

    t60 = ((x277&x278)%(x279%x280));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	volatile int64_t x283 = 52LL;
	volatile uint64_t x284 = UINT64_MAX;
	volatile uint64_t t61 = 65156534726437LLU;

    t61 = ((x281&x282)%(x283%x284));

    if (t61 != 44LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x289 = -1;
	static uint32_t x291 = 28330U;
	uint32_t t62 = 74U;

    t62 = ((x289&x290)%(x291%x292));

    if (t62 != 12988U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	static int64_t x295 = INT64_MAX;
	uint8_t x296 = 30U;
	volatile int64_t t63 = -445267152273685LL;

    t63 = ((x293&x294)%(x295%x296));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x299 = -1;
	volatile uint64_t x300 = 222252593585897LLU;
	volatile uint64_t t64 = 151984095LLU;

    t64 = ((x297&x298)%(x299%x300));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t65 = -1;

    t65 = ((x305&x306)%(x307%x308));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x310 = -1;
	int16_t x311 = 3;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t66 = 236331944;

    t66 = ((x309&x310)%(x311%x312));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x314 = 2U;
	uint64_t x315 = 2LLU;
	uint64_t t67 = 10LLU;

    t67 = ((x313&x314)%(x315%x316));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x317 = -427;
	volatile uint32_t x318 = 1U;
	static uint8_t x319 = UINT8_MAX;
	uint64_t x320 = 2569349280LLU;

    t68 = ((x317&x318)%(x319%x320));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x321 = 1U;
	uint8_t x322 = UINT8_MAX;
	uint64_t x324 = 13585450678301526LLU;

    t69 = ((x321&x322)%(x323%x324));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x325 = 408U;
	volatile uint16_t x326 = 12U;
	int8_t x327 = 59;

    t70 = ((x325&x326)%(x327%x328));

    if (t70 != 8LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x333 = INT16_MIN;
	volatile uint32_t x334 = 748U;
	volatile int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t71 = 1102446855189377649LL;

    t71 = ((x333&x334)%(x335%x336));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x338 = 1177061U;
	uint32_t x339 = 280712451U;
	int16_t x340 = INT16_MIN;
	volatile int64_t t72 = -47241744175617LL;

    t72 = ((x337&x338)%(x339%x340));

    if (t72 != 1122468LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x342 = 42943585;
	static int8_t x343 = -1;
	int32_t x344 = 968985;
	int32_t t73 = -500831985;

    t73 = ((x341&x342)%(x343%x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = -1;
	uint32_t x356 = 622U;
	volatile int64_t t74 = -5LL;

    t74 = ((x353&x354)%(x355%x356));

    if (t74 != -5LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x358 = -3751;
	volatile int8_t x359 = 1;
	volatile int16_t x360 = INT16_MAX;

    t75 = ((x357&x358)%(x359%x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x362 = -6;
	int8_t x363 = -6;
	volatile uint16_t x364 = 7115U;
	volatile int64_t t76 = 32638LL;

    t76 = ((x361&x362)%(x363%x364));

    if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x365 = 0U;
	uint8_t x367 = 56U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t77 = -4613412;

    t77 = ((x365&x366)%(x367%x368));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x377 = INT16_MAX;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;
	volatile uint32_t t78 = 119093U;

    t78 = ((x377&x378)%(x379%x380));

    if (t78 != 17462U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x381 = UINT8_MAX;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;

    t79 = ((x381&x382)%(x383%x384));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x395 = INT32_MIN;
	int32_t x396 = 164018315;
	volatile int32_t t80 = -283833;

    t80 = ((x393&x394)%(x395%x396));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = -3;
	volatile int32_t t81 = 4;

    t81 = ((x397&x398)%(x399%x400));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x403 = INT64_MIN;
	uint32_t x404 = UINT32_MAX;
	int64_t t82 = 3783794895LL;

    t82 = ((x401&x402)%(x403%x404));

    if (t82 != 3032LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x406 = INT32_MIN;
	static int64_t x407 = -102811087LL;
	int32_t x408 = INT32_MIN;
	static volatile uint64_t t83 = 1930234542LLU;

    t83 = ((x405&x406)%(x407%x408));

    if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x413 = INT32_MIN;
	static int8_t x414 = INT8_MAX;
	uint16_t x416 = 10313U;
	volatile int32_t t84 = 3164;

    t84 = ((x413&x414)%(x415%x416));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = UINT64_MAX;
	uint8_t x419 = 1U;
	int16_t x420 = 62;
	static volatile uint64_t t85 = 2323667025465056714LLU;

    t85 = ((x417&x418)%(x419%x420));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x424 = INT64_MIN;
	volatile int64_t t86 = -7227338249516LL;

    t86 = ((x421&x422)%(x423%x424));

    if (t86 != 131209LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x425 = 449;
	static int8_t x427 = INT8_MIN;
	uint8_t x428 = 12U;
	int32_t t87 = -5333989;

    t87 = ((x425&x426)%(x427%x428));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x437 = INT64_MIN;
	int8_t x438 = 1;
	uint16_t x439 = 26U;
	int16_t x440 = INT16_MIN;

    t88 = ((x437&x438)%(x439%x440));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x443 = 392572136U;
	static int64_t x444 = INT64_MIN;
	volatile int64_t t89 = 5096916LL;

    t89 = ((x441&x442)%(x443%x444));

    if (t89 != 16LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x445 = -1;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	static volatile int8_t x448 = INT8_MIN;
	uint32_t t90 = 946433U;

    t90 = ((x445&x446)%(x447%x448));

    if (t90 != 8U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x453 = 52219360878LLU;
	int64_t x454 = -1LL;
	static uint8_t x455 = UINT8_MAX;
	uint16_t x456 = UINT16_MAX;
	volatile uint64_t t91 = 436129632046LLU;

    t91 = ((x453&x454)%(x455%x456));

    if (t91 != 93LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x460 = 4696384LLU;
	volatile uint64_t t92 = 26614LLU;

    t92 = ((x457&x458)%(x459%x460));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x461 = INT16_MIN;
	uint32_t x462 = 95518182U;
	int32_t x463 = INT32_MIN;
	int64_t x464 = 23180222170LL;
	int64_t t93 = -629280LL;

    t93 = ((x461&x462)%(x463%x464));

    if (t93 != 95485952LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x467 = INT64_MAX;
	volatile int32_t x468 = 326244;
	volatile int64_t t94 = -41527880063LL;

    t94 = ((x465&x466)%(x467%x468));

    if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x469 = 221614LLU;
	int16_t x470 = INT16_MIN;
	volatile uint64_t t95 = 6214019791958103247LLU;

    t95 = ((x469&x470)%(x471%x472));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x477 = UINT16_MAX;
	uint32_t x480 = UINT32_MAX;
	uint32_t t96 = 22U;

    t96 = ((x477&x478)%(x479%x480));

    if (t96 != 28179U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x481 = 53U;
	static volatile int32_t x482 = -1;
	uint16_t x484 = 14U;
	int32_t t97 = 4936806;

    t97 = ((x481&x482)%(x483%x484));

    if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x485 = -1039708;
	uint16_t x486 = 108U;
	int16_t x487 = INT16_MIN;
	volatile int32_t x488 = 1071643393;
	static int32_t t98 = -465612;

    t98 = ((x485&x486)%(x487%x488));

    if (t98 != 36) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x489 = INT64_MIN;
	volatile uint16_t x491 = UINT16_MAX;
	volatile uint32_t x492 = 52U;
	volatile uint64_t t99 = 21919808680470630LLU;

    t99 = ((x489&x490)%(x491%x492));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x493 = 4072LLU;
	static int64_t x495 = INT64_MAX;
	int16_t x496 = INT16_MIN;
	uint64_t t100 = 1LLU;

    t100 = ((x493&x494)%(x495%x496));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x497 = 4102607532386007289LLU;
	static int64_t x498 = INT64_MIN;
	uint64_t x499 = UINT64_MAX;
	int64_t x500 = -4247364916340972417LL;
	volatile uint64_t t101 = 4298819583414059986LLU;

    t101 = ((x497&x498)%(x499%x500));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x501 = 29;
	uint32_t x502 = UINT32_MAX;
	static uint32_t x503 = 1975090U;
	uint32_t x504 = 1425992U;
	uint32_t t102 = 26095U;

    t102 = ((x501&x502)%(x503%x504));

    if (t102 != 29U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x506 = -26;
	int16_t x507 = INT16_MAX;
	int64_t t103 = 489LL;

    t103 = ((x505&x506)%(x507%x508));

    if (t103 != -8LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x509 = INT64_MIN;
	int32_t x510 = -70;
	volatile int8_t x511 = -1;
	volatile uint32_t x512 = 28372U;
	volatile int64_t t104 = -226052655883505LL;

    t104 = ((x509&x510)%(x511%x512));

    if (t104 != -6398LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x514 = INT8_MAX;
	int16_t x516 = INT16_MAX;
	static volatile int32_t t105 = -216;

    t105 = ((x513&x514)%(x515%x516));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x517 = INT8_MAX;
	int16_t x518 = INT16_MIN;
	static volatile uint8_t x519 = 118U;
	int64_t x520 = -56067LL;

    t106 = ((x517&x518)%(x519%x520));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x524 = 56U;
	volatile uint32_t t107 = 225948U;

    t107 = ((x521&x522)%(x523%x524));

    if (t107 != 4294934528U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x525 = INT16_MIN;
	volatile int8_t x526 = INT8_MAX;
	int64_t x528 = INT64_MAX;
	static volatile uint64_t t108 = 41676057258968LLU;

    t108 = ((x525&x526)%(x527%x528));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x529 = UINT8_MAX;
	uint16_t x530 = UINT16_MAX;
	int64_t x531 = 3893937584LL;
	volatile int64_t t109 = 56004663LL;

    t109 = ((x529&x530)%(x531%x532));

    if (t109 != 15LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x533 = -1;
	int64_t x534 = INT64_MIN;
	int16_t x536 = INT16_MIN;
	static volatile int64_t t110 = 118663359841192036LL;

    t110 = ((x533&x534)%(x535%x536));

    if (t110 != -8LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x537 = INT16_MIN;
	int64_t x538 = 50024446478723776LL;
	volatile int64_t t111 = 50241904982LL;

    t111 = ((x537&x538)%(x539%x540));

    if (t111 != 52252LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x541 = -1;
	uint8_t x544 = 9U;
	static int64_t t112 = -19031LL;

    t112 = ((x541&x542)%(x543%x544));

    if (t112 != 3LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x553 = -1;
	volatile int16_t x554 = INT16_MAX;
	uint64_t x555 = 48868516499082713LLU;
	volatile int32_t x556 = -1;
	static uint64_t t113 = 1200LLU;

    t113 = ((x553&x554)%(x555%x556));

    if (t113 != 32767LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	uint32_t x560 = UINT32_MAX;
	volatile int64_t t114 = 2953LL;

    t114 = ((x557&x558)%(x559%x560));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x561 = INT64_MIN;
	int64_t x562 = 90386LL;
	int16_t x564 = -10682;

    t115 = ((x561&x562)%(x563%x564));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x565 = -526652215LL;
	uint64_t x568 = 2813314LLU;

    t116 = ((x565&x566)%(x567%x568));

    if (t116 != 136LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x573 = -1LL;
	int16_t x574 = 457;
	uint32_t x575 = UINT32_MAX;
	int64_t x576 = -2966624704044544918LL;

    t117 = ((x573&x574)%(x575%x576));

    if (t117 != 457LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x581 = INT8_MAX;
	int8_t x582 = INT8_MIN;
	volatile int64_t x584 = -111338LL;
	static int64_t t118 = -1673LL;

    t118 = ((x581&x582)%(x583%x584));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x585 = UINT64_MAX;
	static uint64_t x587 = 459771214LLU;
	int16_t x588 = 222;
	uint64_t t119 = 40280LLU;

    t119 = ((x585&x586)%(x587%x588));

    if (t119 != 15LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x589 = 57788;
	int32_t x590 = -1;
	static int8_t x591 = INT8_MIN;
	static volatile int64_t t120 = 76941LL;

    t120 = ((x589&x590)%(x591%x592));

    if (t120 != 60LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x597 = 1U;
	uint32_t x598 = UINT32_MAX;
	uint64_t x599 = 80295922644413LLU;
	volatile int64_t x600 = -1LL;
	uint64_t t121 = 487478512542495LLU;

    t121 = ((x597&x598)%(x599%x600));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x602 = 1605U;
	int32_t x603 = INT32_MIN;
	volatile uint32_t t122 = 494418519U;

    t122 = ((x601&x602)%(x603%x604));

    if (t122 != 69U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x605 = 9805U;
	volatile int8_t x606 = INT8_MIN;
	int64_t x607 = INT64_MIN;
	int8_t x608 = INT8_MAX;
	static int64_t t123 = 543709370364LL;

    t123 = ((x605&x606)%(x607%x608));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x613 = INT64_MAX;
	int16_t x614 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	int64_t t124 = 1LL;

    t124 = ((x613&x614)%(x615%x616));

    if (t124 != 126LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x626 = -1;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = 968722;
	int32_t t125 = 57617733;

    t125 = ((x625&x626)%(x627%x628));

    if (t125 != 109) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x629 = INT8_MIN;
	volatile uint32_t x631 = UINT32_MAX;
	int32_t x632 = -9198021;
	static volatile uint32_t t126 = 15893224U;

    t126 = ((x629&x630)%(x631%x632));

    if (t126 != 6640060U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x633 = 1U;
	static uint16_t x634 = 106U;
	static uint64_t x635 = 2LLU;

    t127 = ((x633&x634)%(x635%x636));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x637 = INT8_MAX;
	volatile int32_t x638 = -3;
	int8_t x639 = -1;
	volatile int32_t t128 = -59803;

    t128 = ((x637&x638)%(x639%x640));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x643 = UINT8_MAX;
	static uint64_t x644 = 256358212011027466LLU;

    t129 = ((x641&x642)%(x643%x644));

    if (t129 != 128LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x649 = -1;
	static int32_t x650 = -13;
	uint16_t x651 = UINT16_MAX;
	int8_t x652 = INT8_MAX;
	int32_t t130 = 7443512;

    t130 = ((x649&x650)%(x651%x652));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x653 = 28956LLU;
	uint64_t x654 = 6414334152377LLU;
	uint16_t x655 = 989U;
	static int16_t x656 = -1841;
	volatile uint64_t t131 = 28513LLU;

    t131 = ((x653&x654)%(x655%x656));

    if (t131 != 584LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x657 = -1LL;
	static int32_t x658 = INT32_MIN;
	static int64_t t132 = 19LL;

    t132 = ((x657&x658)%(x659%x660));

    if (t132 != -2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x661 = 19606085085LL;
	static uint8_t x662 = UINT8_MAX;
	static volatile int16_t x663 = INT16_MIN;
	uint16_t x664 = 221U;
	int64_t t133 = -517432961LL;

    t133 = ((x661&x662)%(x663%x664));

    if (t133 != 41LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x669 = 55661U;
	int32_t x670 = INT32_MIN;
	int64_t x671 = -17066407LL;
	static int8_t x672 = INT8_MIN;
	volatile int64_t t134 = -4377139500491LL;

    t134 = ((x669&x670)%(x671%x672));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x674 = 56491LLU;
	int8_t x676 = INT8_MAX;
	volatile uint64_t t135 = 98005725861053LLU;

    t135 = ((x673&x674)%(x675%x676));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x689 = INT32_MAX;
	int8_t x690 = INT8_MAX;
	int64_t x691 = -1LL;
	int8_t x692 = 10;
	volatile int64_t t136 = -412851352208888084LL;

    t136 = ((x689&x690)%(x691%x692));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x693 = -1;
	int32_t x694 = 56;
	uint64_t x696 = 1673300245749LLU;
	uint64_t t137 = 26592LLU;

    t137 = ((x693&x694)%(x695%x696));

    if (t137 != 56LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x697 = UINT8_MAX;
	int8_t x698 = -1;
	int32_t x699 = -1;
	static volatile int32_t t138 = 9206592;

    t138 = ((x697&x698)%(x699%x700));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x701 = 208U;
	uint8_t x703 = 13U;

    t139 = ((x701&x702)%(x703%x704));

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x705 = INT16_MAX;
	uint32_t x706 = 26582U;
	int16_t x707 = INT16_MIN;
	int8_t x708 = 51;
	volatile uint32_t t140 = 0U;

    t140 = ((x705&x706)%(x707%x708));

    if (t140 != 26582U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x709 = -1;
	int32_t x711 = INT32_MIN;
	static volatile uint64_t t141 = 2694234472124LLU;

    t141 = ((x709&x710)%(x711%x712));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x713 = INT32_MIN;
	int16_t x714 = 13159;
	volatile int16_t x715 = INT16_MIN;
	static volatile int32_t t142 = -1;

    t142 = ((x713&x714)%(x715%x716));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x722 = 78LLU;
	volatile uint32_t x724 = 2U;
	static volatile uint64_t t143 = 3593111876LLU;

    t143 = ((x721&x722)%(x723%x724));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x725 = -73578;
	int32_t x726 = INT32_MIN;
	int64_t x727 = -1LL;
	volatile int64_t x728 = INT64_MAX;

    t144 = ((x725&x726)%(x727%x728));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x730 = INT16_MIN;
	int32_t x731 = INT32_MAX;
	int32_t x732 = 1939796;
	int32_t t145 = -38441;

    t145 = ((x729&x730)%(x731%x732));

    if (t145 != -11298) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x735 = 65U;
	static uint64_t x736 = UINT64_MAX;

    t146 = ((x733&x734)%(x735%x736));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x737 = 7135U;
	uint8_t x738 = 124U;
	int32_t x739 = -1;
	int16_t x740 = INT16_MIN;
	static uint32_t t147 = 330865730U;

    t147 = ((x737&x738)%(x739%x740));

    if (t147 != 92U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x741 = UINT32_MAX;
	static uint16_t x742 = UINT16_MAX;
	volatile uint32_t x743 = 4U;
	static uint8_t x744 = 68U;

    t148 = ((x741&x742)%(x743%x744));

    if (t148 != 3U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x746 = UINT8_MAX;
	static volatile int16_t x747 = INT16_MIN;
	volatile int32_t x748 = -57688917;
	volatile int32_t t149 = 98;

    t149 = ((x745&x746)%(x747%x748));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x749 = INT32_MIN;
	static int64_t x750 = INT64_MIN;
	int8_t x751 = -52;
	int8_t x752 = INT8_MIN;
	volatile int64_t t150 = 0LL;

    t150 = ((x749&x750)%(x751%x752));

    if (t150 != -8LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x753 = 247U;
	static int32_t x754 = INT32_MIN;
	volatile uint32_t x755 = 534669602U;
	uint32_t x756 = 1139254U;
	volatile uint32_t t151 = 93935U;

    t151 = ((x753&x754)%(x755%x756));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x758 = 1007U;
	uint8_t x759 = 1U;
	int64_t x760 = -326018722510562227LL;
	int64_t t152 = -11LL;

    t152 = ((x757&x758)%(x759%x760));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x761 = INT64_MIN;
	int64_t x762 = INT64_MAX;
	uint8_t x763 = UINT8_MAX;
	int64_t t153 = 112937407024040280LL;

    t153 = ((x761&x762)%(x763%x764));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x765 = 55U;
	static volatile int64_t x766 = 150467786LL;
	volatile int8_t x767 = INT8_MAX;
	volatile int64_t t154 = -4464190LL;

    t154 = ((x765&x766)%(x767%x768));

    if (t154 != 2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x769 = INT8_MIN;
	uint8_t x770 = 2U;
	int32_t x771 = INT32_MAX;
	int32_t x772 = -366036006;
	int32_t t155 = -429170;

    t155 = ((x769&x770)%(x771%x772));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x777 = 121U;
	volatile int8_t x778 = INT8_MIN;
	int32_t x780 = INT32_MAX;
	static int64_t t156 = 37814881167294LL;

    t156 = ((x777&x778)%(x779%x780));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x781 = 5330;
	uint16_t x782 = 226U;
	int8_t x783 = INT8_MAX;
	volatile int64_t t157 = 14887736165097011LL;

    t157 = ((x781&x782)%(x783%x784));

    if (t157 != 67LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x785 = INT64_MIN;
	int8_t x786 = -1;
	static volatile uint64_t x787 = 1877913180LLU;
	int64_t x788 = INT64_MIN;
	static volatile uint64_t t158 = 3311331521221686LLU;

    t158 = ((x785&x786)%(x787%x788));

    if (t158 != 1657887668LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x789 = -1;
	int64_t x791 = INT64_MIN;
	int8_t x792 = 3;
	int64_t t159 = -562LL;

    t159 = ((x789&x790)%(x791%x792));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x805 = INT64_MIN;
	static volatile int64_t x806 = INT64_MAX;
	uint64_t x807 = UINT64_MAX;
	uint8_t x808 = 21U;
	volatile uint64_t t160 = 35278575603407043LLU;

    t160 = ((x805&x806)%(x807%x808));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x809 = INT64_MIN;
	volatile int64_t x810 = -1LL;
	static int8_t x811 = 50;
	uint64_t x812 = UINT64_MAX;
	uint64_t t161 = 368639970282361270LLU;

    t161 = ((x809&x810)%(x811%x812));

    if (t161 != 8LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x813 = 4U;
	uint32_t x814 = 5U;
	int8_t x815 = 1;
	int64_t x816 = 5228225LL;
	int64_t t162 = 365153LL;

    t162 = ((x813&x814)%(x815%x816));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x821 = INT32_MIN;
	int8_t x822 = INT8_MIN;
	int64_t x823 = -1LL;
	uint8_t x824 = UINT8_MAX;
	static volatile int64_t t163 = -63555856788127LL;

    t163 = ((x821&x822)%(x823%x824));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x825 = -552;
	static int32_t x826 = INT32_MIN;
	volatile int32_t x827 = INT32_MIN;
	int32_t t164 = 546575559;

    t164 = ((x825&x826)%(x827%x828));

    if (t164 != -4) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x829 = INT32_MIN;
	static volatile int32_t x830 = -720922;
	static uint64_t x831 = 5LLU;
	volatile int64_t x832 = -93976556189LL;
	static volatile uint64_t t165 = 6017LLU;

    t165 = ((x829&x830)%(x831%x832));

    if (t165 != 3LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x834 = 0;
	volatile int16_t x835 = -1;
	int64_t t166 = 13173063342860LL;

    t166 = ((x833&x834)%(x835%x836));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x837 = INT64_MIN;
	volatile int32_t x840 = INT32_MAX;
	static volatile int64_t t167 = -2171952LL;

    t167 = ((x837&x838)%(x839%x840));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x841 = 9U;
	int16_t x842 = INT16_MIN;
	uint32_t x843 = 665836927U;
	static int16_t x844 = INT16_MIN;
	uint32_t t168 = 5U;

    t168 = ((x841&x842)%(x843%x844));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x846 = UINT16_MAX;
	volatile int64_t x847 = INT64_MAX;
	int32_t x848 = INT32_MIN;

    t169 = ((x845&x846)%(x847%x848));

    if (t169 != 65535LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x853 = -1;
	int16_t x854 = -1;
	static int32_t x855 = 105417;
	uint64_t x856 = 3594742149272LLU;
	volatile uint64_t t170 = 3389885230397490LLU;

    t170 = ((x853&x854)%(x855%x856));

    if (t170 != 83436LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x858 = -1;
	uint16_t x859 = 6972U;
	uint64_t x860 = 181863217LLU;
	volatile uint64_t t171 = 3441180399433860LLU;

    t171 = ((x857&x858)%(x859%x860));

    if (t171 != 1695LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x861 = INT16_MIN;
	uint16_t x863 = 65U;
	uint8_t x864 = 67U;
	int32_t t172 = -1561;

    t172 = ((x861&x862)%(x863%x864));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x865 = -1LL;
	int16_t x866 = 1003;
	uint8_t x867 = UINT8_MAX;
	static volatile int64_t t173 = -6471735769LL;

    t173 = ((x865&x866)%(x867%x868));

    if (t173 != 238LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x869 = INT32_MIN;
	uint8_t x870 = UINT8_MAX;
	int8_t x872 = INT8_MAX;
	volatile int32_t t174 = -7;

    t174 = ((x869&x870)%(x871%x872));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x877 = 123881391177482319LLU;
	volatile uint16_t x878 = 0U;
	static int16_t x879 = -1;
	static uint32_t x880 = 22U;
	volatile uint64_t t175 = 849292LLU;

    t175 = ((x877&x878)%(x879%x880));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x881 = -577953;
	uint8_t x882 = UINT8_MAX;
	int16_t x883 = 1;
	uint64_t x884 = 9LLU;
	uint64_t t176 = 6LLU;

    t176 = ((x881&x882)%(x883%x884));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x885 = UINT8_MAX;
	int16_t x886 = 1;
	uint16_t x887 = 126U;
	uint64_t x888 = 669388693293252252LLU;

    t177 = ((x885&x886)%(x887%x888));

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x889 = INT16_MAX;
	int64_t x891 = -1LL;
	int64_t x892 = -121701164566LL;
	int64_t t178 = -3333LL;

    t178 = ((x889&x890)%(x891%x892));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x893 = 2433311502416LLU;
	static int32_t x894 = INT32_MIN;
	int16_t x895 = INT16_MIN;
	volatile int8_t x896 = INT8_MAX;

    t179 = ((x893&x894)%(x895%x896));

    if (t179 != 2433098973184LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x897 = 15U;
	volatile uint64_t t180 = 11073147599893401LLU;

    t180 = ((x897&x898)%(x899%x900));

    if (t180 != 15LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x901 = -4;
	static volatile uint8_t x902 = UINT8_MAX;
	int32_t x903 = -148171312;

    t181 = ((x901&x902)%(x903%x904));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x905 = 162809128671960LLU;
	static int8_t x906 = INT8_MIN;
	int32_t x907 = INT32_MAX;
	uint32_t x908 = 327U;

    t182 = ((x905&x906)%(x907%x908));

    if (t182 != 46LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x910 = -1LL;
	int16_t x911 = 140;
	volatile int32_t x912 = -2998;
	int64_t t183 = -606667038LL;

    t183 = ((x909&x910)%(x911%x912));

    if (t183 != 7LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x913 = 1;
	static int64_t x914 = -424302251LL;
	int64_t x916 = 98210LL;
	static int64_t t184 = 25873478LL;

    t184 = ((x913&x914)%(x915%x916));

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x919 = 112378U;
	static uint16_t x920 = UINT16_MAX;
	volatile uint32_t t185 = 141097720U;

    t185 = ((x917&x918)%(x919%x920));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x933 = 224938273;
	uint64_t x934 = UINT64_MAX;
	int32_t x935 = -9;
	int8_t x936 = INT8_MAX;
	uint64_t t186 = 2097715116LLU;

    t186 = ((x933&x934)%(x935%x936));

    if (t186 != 224938273LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x937 = 2773859;
	int8_t x938 = 1;
	volatile uint64_t x940 = 4195642340525483353LLU;

    t187 = ((x937&x938)%(x939%x940));

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x941 = 11;
	static int64_t x942 = 520167585122361200LL;
	uint64_t t188 = 252187583464LLU;

    t188 = ((x941&x942)%(x943%x944));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x949 = 20506LLU;
	static int64_t x950 = INT64_MIN;
	volatile int8_t x951 = INT8_MIN;
	int64_t x952 = INT64_MIN;

    t189 = ((x949&x950)%(x951%x952));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x954 = -31;
	volatile uint64_t x955 = 780731915LLU;
	int8_t x956 = INT8_MAX;
	volatile uint64_t t190 = 3642103LLU;

    t190 = ((x953&x954)%(x955%x956));

    if (t190 != 15LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x958 = 16U;
	static int8_t x959 = INT8_MAX;
	static uint32_t x960 = 28U;
	static volatile uint32_t t191 = 388107U;

    t191 = ((x957&x958)%(x959%x960));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x965 = INT32_MAX;
	int8_t x966 = INT8_MIN;
	int16_t x967 = -102;
	int16_t x968 = INT16_MIN;
	int32_t t192 = 0;

    t192 = ((x965&x966)%(x967%x968));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x969 = INT8_MIN;
	volatile int64_t x970 = 32828737LL;
	static volatile int64_t x971 = 24LL;
	volatile int64_t t193 = 1306293265682LL;

    t193 = ((x969&x970)%(x971%x972));

    if (t193 != 8LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x977 = -16922633LL;
	volatile int8_t x979 = 59;
	int64_t t194 = 9423031LL;

    t194 = ((x977&x978)%(x979%x980));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x985 = 1671914U;
	int64_t x987 = -1LL;
	uint32_t x988 = UINT32_MAX;

    t195 = ((x985&x986)%(x987%x988));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x989 = -1;
	static volatile int64_t x990 = 242369659536530LL;
	static int16_t x992 = INT16_MAX;
	volatile int64_t t196 = -540179487215LL;

    t196 = ((x989&x990)%(x991%x992));

    if (t196 != 110LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x997 = INT8_MAX;
	int64_t x998 = INT64_MIN;
	static int64_t x999 = INT64_MIN;
	uint64_t x1000 = 4930341212LLU;
	uint64_t t197 = 226277776317LLU;

    t197 = ((x997&x998)%(x999%x1000));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x1013 = 262372;
	static int32_t x1014 = 191380;
	volatile int32_t x1015 = 19682972;
	volatile int32_t t198 = 23595486;

    t198 = ((x1013&x1014)%(x1015%x1016));

    if (t198 != 132) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1017 = -1;
	int16_t x1018 = 1;
	int8_t x1019 = INT8_MIN;
	int8_t x1020 = INT8_MAX;

    t199 = ((x1017&x1018)%(x1019%x1020));

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

