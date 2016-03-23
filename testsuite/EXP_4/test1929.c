
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

int16_t x13 = 0;
int8_t x20 = -38;
uint16_t x21 = 3U;
uint8_t x23 = 0U;
static uint64_t t5 = 1111873670863LLU;
int32_t t6 = -292423546;
int64_t x38 = 324LL;
uint64_t x53 = 38LLU;
static uint64_t t8 = 803889396395LLU;
int8_t x65 = INT8_MAX;
uint8_t x66 = UINT8_MAX;
int16_t x68 = INT16_MIN;
static int32_t t9 = 1;
volatile int32_t x78 = INT32_MAX;
uint64_t x89 = 89197695243974179LLU;
static int32_t t14 = 0;
uint32_t x108 = 1275057833U;
volatile uint32_t t16 = UINT32_MAX;
uint32_t x127 = 0U;
uint64_t x128 = UINT64_MAX;
uint64_t x134 = 14066274875456LLU;
uint64_t x138 = 3LLU;
int32_t x139 = INT32_MAX;
int8_t x150 = -1;
volatile int64_t x152 = -541688312605850641LL;
int8_t x159 = INT8_MAX;
static uint16_t x160 = 2106U;
uint16_t x178 = 2U;
uint8_t x180 = 116U;
static uint16_t x185 = 23U;
int16_t x199 = -1;
static uint16_t x205 = 470U;
int16_t x207 = 1;
uint8_t x212 = UINT8_MAX;
int16_t x218 = 4;
uint8_t x239 = 6U;
int64_t x245 = 58929544LL;
int32_t t34 = -73508;
int64_t x281 = 900882809157LL;
volatile int64_t t38 = -1797752268272114LL;
int8_t x292 = -3;
int64_t x297 = INT64_MAX;
int64_t x314 = INT64_MIN;
int32_t x315 = INT32_MIN;
uint16_t x321 = 959U;
volatile int16_t x329 = 38;
volatile int8_t x343 = INT8_MAX;
int64_t x356 = -3045168365LL;
static int32_t t49 = 1;
int8_t x380 = INT8_MIN;
int16_t x386 = INT16_MIN;
int8_t x399 = INT8_MIN;
static int16_t x401 = INT16_MAX;
int16_t x408 = -1;
volatile int32_t t57 = -25762;
uint16_t x415 = 7332U;
static uint64_t x423 = UINT64_MAX;
volatile int8_t x424 = INT8_MIN;
uint64_t x425 = UINT64_MAX;
uint64_t t60 = UINT64_MAX;
static int16_t x430 = INT16_MAX;
int32_t t62 = 46829;
uint16_t x437 = UINT16_MAX;
static int8_t x438 = -13;
volatile int32_t t66 = 73856100;
volatile uint32_t x462 = UINT32_MAX;
volatile uint32_t t69 = 80U;
volatile int16_t x488 = INT16_MAX;
volatile uint64_t t72 = 56082529186LLU;
volatile uint32_t x509 = 284742483U;
uint32_t t73 = 11U;
int16_t x522 = INT16_MIN;
int64_t x530 = -1LL;
uint64_t x531 = 103475LLU;
static volatile uint16_t x540 = 0U;
static uint32_t x542 = 1988U;
uint16_t x562 = 2880U;
uint64_t t79 = 40792498LLU;
volatile int8_t x574 = -1;
int64_t x589 = INT64_MAX;
int8_t x592 = INT8_MIN;
uint32_t x604 = 2156U;
uint64_t x620 = 2386563LLU;
int64_t x622 = INT64_MIN;
int16_t x623 = -1;
int32_t t86 = 442;
uint16_t x633 = 9U;
volatile uint16_t x635 = 20357U;
volatile int32_t t88 = -460;
int64_t x647 = -1LL;
volatile int16_t x648 = INT16_MIN;
volatile int64_t x654 = -124LL;
int64_t x657 = INT64_MAX;
volatile int16_t x660 = -1;
uint32_t t93 = 126420U;
uint32_t x669 = 6666650U;
int64_t x685 = 27962630274LL;
uint8_t x689 = 7U;
int64_t x713 = 0LL;
volatile int64_t x718 = INT64_MIN;
uint64_t x729 = 90571LLU;
int32_t x731 = INT32_MIN;
int32_t x732 = 25681;
volatile uint64_t t102 = 3576015754965LLU;
int64_t x740 = -1LL;
static volatile int32_t t103 = INT32_MAX;
uint16_t x753 = 3U;
volatile int64_t x755 = -1LL;
static int64_t x770 = -165LL;
static int32_t x780 = INT32_MAX;
static int8_t x787 = INT8_MIN;
uint8_t x792 = UINT8_MAX;
volatile uint8_t x801 = 10U;
volatile int32_t x819 = INT32_MIN;
volatile int64_t x820 = -1LL;
volatile uint32_t t113 = 181U;
volatile int32_t x830 = INT32_MAX;
volatile int16_t x831 = -1;
int32_t x848 = -1;
int8_t x866 = 2;
int64_t x873 = 9417LL;
int16_t x901 = 5;
volatile int16_t x938 = INT16_MAX;
uint16_t x939 = UINT16_MAX;
volatile int64_t x940 = INT64_MAX;
uint16_t x941 = 2583U;
uint64_t x949 = UINT64_MAX;
static uint8_t x951 = 1U;
int32_t x952 = 31159278;
volatile uint64_t t132 = 2204LLU;
volatile uint16_t x959 = 2293U;
volatile int8_t x960 = INT8_MAX;
int16_t x971 = INT16_MIN;
volatile uint64_t x982 = 3LLU;
volatile uint16_t x1009 = 24U;
int8_t x1025 = INT8_MAX;
int32_t t140 = -16544293;
int8_t x1035 = -1;
static volatile int32_t x1040 = INT32_MAX;
uint64_t x1045 = UINT64_MAX;
int64_t x1046 = -1LL;
volatile uint64_t t143 = UINT64_MAX;
int64_t x1054 = -1LL;
int32_t t144 = -2780;
uint16_t x1057 = 11124U;
uint64_t x1061 = 342261894383LLU;
int64_t x1063 = INT64_MIN;
uint32_t x1064 = UINT32_MAX;
uint16_t x1065 = 1631U;
int8_t x1067 = -7;
int16_t x1070 = -10;
uint64_t x1078 = 519644LLU;
int32_t x1083 = INT32_MIN;
volatile uint8_t x1097 = 0U;
uint16_t x1099 = 4U;
int64_t x1130 = 77891204272LL;
volatile int32_t x1131 = -267;
int32_t t156 = -10;
uint64_t x1140 = 26647325270818845LLU;
volatile int64_t x1150 = INT64_MIN;
static uint16_t x1155 = 1866U;
uint8_t x1156 = 11U;
int32_t x1192 = INT32_MAX;
uint16_t x1209 = 2U;
uint16_t x1210 = UINT16_MAX;
int16_t x1211 = INT16_MIN;
static uint16_t x1216 = 2561U;
volatile uint32_t x1225 = 1368725U;
int16_t x1239 = -1;
volatile uint64_t x1255 = UINT64_MAX;
int64_t x1262 = INT64_MIN;
int32_t t172 = -231911;
uint64_t x1304 = 1961LLU;
volatile int32_t t176 = 110;
volatile int32_t x1336 = INT32_MAX;
static int32_t t180 = 9;
int32_t t181 = 10757;
int32_t x1344 = INT32_MAX;
int8_t x1346 = INT8_MIN;
uint32_t x1384 = 342591U;
uint16_t x1389 = 23U;
uint32_t x1397 = 9U;
static uint64_t t191 = 6LLU;
static int32_t x1405 = INT32_MAX;
int16_t x1408 = INT16_MAX;
int32_t t192 = 60065;
uint32_t x1423 = UINT32_MAX;
volatile int32_t x1430 = -1;
uint8_t x1434 = 3U;
uint32_t t195 = 24782525U;
uint32_t x1438 = 3514278U;
volatile int8_t x1439 = -11;
uint64_t t196 = 3793342LLU;
uint64_t x1449 = 879681853LLU;
static volatile int64_t x1450 = INT64_MIN;
int32_t x1451 = 1;
volatile uint32_t x1452 = UINT32_MAX;
uint64_t x1461 = 1357LLU;
int16_t x1464 = INT16_MIN;
uint64_t t198 = 31875616284254953LLU;


void f0(void) {
    	int8_t x1 = 1;
	static uint64_t x2 = 10322406930870LLU;
	int16_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -9411;

    t0 = (x1>>(x2&(x3<=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x5 = 7176;
	uint8_t x6 = 2U;
	volatile uint64_t x7 = 3LLU;
	volatile uint32_t x8 = 8240153U;
	int32_t t1 = -1;

    t1 = (x5>>(x6&(x7<=x8)));

    if (t1 != 7176) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -9;
	volatile int32_t t2 = -1832;

    t2 = (x13>>(x14&(x15<=x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = 0;
	static volatile int64_t x18 = -1136LL;
	int8_t x19 = INT8_MAX;
	static volatile int32_t t3 = -25642;

    t3 = (x17>>(x18&(x19<=x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x22 = -23;
	uint64_t x24 = UINT64_MAX;
	static int32_t t4 = -67812030;

    t4 = (x21>>(x22&(x23<=x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x29 = 4LLU;
	volatile int8_t x30 = 1;
	uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = -1;

    t5 = (x29>>(x30&(x31<=x32)));

    if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = 1081;
	static int64_t x34 = 301500627436990801LL;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -1;

    t6 = (x33>>(x34&(x35<=x36)));

    if (t6 != 540) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x37 = 3626373U;
	int64_t x39 = 0LL;
	int8_t x40 = -1;
	volatile uint32_t t7 = 859683U;

    t7 = (x37>>(x38&(x39<=x40)));

    if (t7 != 3626373U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MIN;
	volatile uint32_t x56 = UINT32_MAX;

    t8 = (x53>>(x54&(x55<=x56)));

    if (t8 != 19LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x67 = INT8_MAX;

    t9 = (x65>>(x66&(x67<=x68)));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x73 = INT32_MAX;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = 8175;
	int32_t x76 = INT32_MAX;
	volatile int32_t t10 = -1;

    t10 = (x73>>(x74&(x75<=x76)));

    if (t10 != 1073741823) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x77 = 2;
	volatile int8_t x79 = INT8_MAX;
	int16_t x80 = -1;
	volatile int32_t t11 = 8;

    t11 = (x77>>(x78&(x79<=x80)));

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x85 = UINT8_MAX;
	static int64_t x86 = 1289049971749607LL;
	static volatile uint64_t x87 = 25LLU;
	static uint32_t x88 = 690U;
	static volatile int32_t t12 = 1954;

    t12 = (x85>>(x86&(x87<=x88)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int16_t x92 = -1;
	static uint64_t t13 = 170622LLU;

    t13 = (x89>>(x90&(x91<=x92)));

    if (t13 != 89197695243974179LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x97 = 95U;
	volatile int16_t x98 = 3;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;

    t14 = (x97>>(x98&(x99<=x100)));

    if (t14 != 95) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x105 = 74U;
	static int32_t x106 = 1;
	static int64_t x107 = INT64_MIN;
	volatile int32_t t15 = -1;

    t15 = (x105>>(x106&(x107<=x108)));

    if (t15 != 37) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MIN;
	int32_t x119 = -1;
	static int16_t x120 = -93;

    t16 = (x117>>(x118&(x119<=x120)));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x125 = 496U;
	int32_t x126 = -1;
	uint32_t t17 = 201U;

    t17 = (x125>>(x126&(x127<=x128)));

    if (t17 != 248U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x133 = INT64_MAX;
	volatile int8_t x135 = INT8_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	int64_t t18 = INT64_MAX;

    t18 = (x133>>(x134&(x135<=x136)));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x137 = 47090U;
	int16_t x140 = INT16_MAX;
	volatile uint32_t t19 = 7U;

    t19 = (x137>>(x138&(x139<=x140)));

    if (t19 != 47090U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x149 = 883;
	uint8_t x151 = 45U;
	volatile int32_t t20 = 792578;

    t20 = (x149>>(x150&(x151<=x152)));

    if (t20 != 883) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x153 = INT16_MAX;
	static int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MAX;
	int64_t x156 = INT64_MAX;
	int32_t t21 = 3;

    t21 = (x153>>(x154&(x155<=x156)));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x157 = 1851U;
	static uint16_t x158 = 10388U;
	volatile uint32_t t22 = 33U;

    t22 = (x157>>(x158&(x159<=x160)));

    if (t22 != 1851U) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x169 = 119452U;
	uint32_t x170 = UINT32_MAX;
	int16_t x171 = 0;
	volatile int64_t x172 = INT64_MAX;
	volatile uint32_t t23 = 1462U;

    t23 = (x169>>(x170&(x171<=x172)));

    if (t23 != 59726U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x173 = INT8_MAX;
	static volatile int64_t x174 = INT64_MAX;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = 1204U;
	static volatile int32_t t24 = -705886;

    t24 = (x173>>(x174&(x175<=x176)));

    if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x177 = INT16_MAX;
	volatile uint64_t x179 = 1008542920761LLU;
	static int32_t t25 = -5;

    t25 = (x177>>(x178&(x179<=x180)));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = -11;
	int8_t x188 = INT8_MAX;
	volatile int32_t t26 = 1555019;

    t26 = (x185>>(x186&(x187<=x188)));

    if (t26 != 23) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x193 = UINT32_MAX;
	static volatile uint64_t x194 = 515589054993LLU;
	int16_t x195 = -1;
	static uint64_t x196 = UINT64_MAX;
	static volatile uint32_t t27 = 320142933U;

    t27 = (x193>>(x194&(x195<=x196)));

    if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x197 = 19U;
	static uint64_t x198 = 15254753962156913LLU;
	int64_t x200 = 138766632264LL;
	int32_t t28 = -3;

    t28 = (x197>>(x198&(x199<=x200)));

    if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x206 = -319643;
	int64_t x208 = 1085419606041LL;
	int32_t t29 = 1881;

    t29 = (x205>>(x206&(x207<=x208)));

    if (t29 != 235) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x209 = 14LL;
	int16_t x210 = INT16_MIN;
	uint32_t x211 = 26911U;
	static int64_t t30 = 0LL;

    t30 = (x209>>(x210&(x211<=x212)));

    if (t30 != 14LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x217 = 3U;
	int16_t x219 = -1;
	int16_t x220 = INT16_MIN;
	static int32_t t31 = 4183310;

    t31 = (x217>>(x218&(x219<=x220)));

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x237 = UINT32_MAX;
	int16_t x238 = 0;
	uint16_t x240 = 3U;
	uint32_t t32 = UINT32_MAX;

    t32 = (x237>>(x238&(x239<=x240)));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x246 = 1;
	uint32_t x247 = 60U;
	uint32_t x248 = 208U;
	volatile int64_t t33 = -3337632620136LL;

    t33 = (x245>>(x246&(x247<=x248)));

    if (t33 != 29464772LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x249 = 8U;
	static int32_t x250 = 38797;
	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;

    t34 = (x249>>(x250&(x251<=x252)));

    if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x253 = 9LLU;
	int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	uint64_t x256 = 34379654LLU;
	uint64_t t35 = 124627797084LLU;

    t35 = (x253>>(x254&(x255<=x256)));

    if (t35 != 9LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x261 = 31;
	int8_t x262 = INT8_MAX;
	int32_t x263 = -408604;
	int16_t x264 = -27;
	static volatile int32_t t36 = -2;

    t36 = (x261>>(x262&(x263<=x264)));

    if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MIN;
	int32_t x279 = 144239265;
	static volatile uint8_t x280 = 7U;
	static uint32_t t37 = UINT32_MAX;

    t37 = (x277>>(x278&(x279<=x280)));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x282 = -1;
	static int64_t x283 = -351153884LL;
	int16_t x284 = INT16_MIN;

    t38 = (x281>>(x282&(x283<=x284)));

    if (t38 != 450441404578LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x289 = 0U;
	int8_t x290 = -1;
	int16_t x291 = INT16_MAX;
	uint32_t t39 = 59507451U;

    t39 = (x289>>(x290&(x291<=x292)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x298 = INT32_MIN;
	volatile int16_t x299 = -4493;
	int32_t x300 = -1;
	int64_t t40 = INT64_MAX;

    t40 = (x297>>(x298&(x299<=x300)));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x309 = INT32_MAX;
	uint8_t x310 = 27U;
	int32_t x311 = -7;
	volatile int32_t x312 = -21620;
	volatile int32_t t41 = INT32_MAX;

    t41 = (x309>>(x310&(x311<=x312)));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x313 = 1331211441305LLU;
	int64_t x316 = -1LL;
	volatile uint64_t t42 = 6634586750LLU;

    t42 = (x313>>(x314&(x315<=x316)));

    if (t42 != 1331211441305LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x322 = INT32_MIN;
	static uint8_t x323 = UINT8_MAX;
	volatile int16_t x324 = INT16_MAX;
	int32_t t43 = -398048;

    t43 = (x321>>(x322&(x323<=x324)));

    if (t43 != 959) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x325 = 56242U;
	int64_t x326 = 2232916443449756LL;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = INT64_MAX;
	volatile uint32_t t44 = 39167831U;

    t44 = (x325>>(x326&(x327<=x328)));

    if (t44 != 56242U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x330 = 4LLU;
	int8_t x331 = -1;
	int8_t x332 = 61;
	volatile int32_t t45 = 133037711;

    t45 = (x329>>(x330&(x331<=x332)));

    if (t45 != 38) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x333 = 53525560;
	static int16_t x334 = INT16_MIN;
	uint16_t x335 = 0U;
	int8_t x336 = -1;
	volatile int32_t t46 = -252509702;

    t46 = (x333>>(x334&(x335<=x336)));

    if (t46 != 53525560) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x341 = 58U;
	int8_t x342 = -1;
	int32_t x344 = -1837584;
	volatile int32_t t47 = -12553084;

    t47 = (x341>>(x342&(x343<=x344)));

    if (t47 != 58) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x349 = INT16_MAX;
	int8_t x350 = -1;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t48 = -424551;

    t48 = (x349>>(x350&(x351<=x352)));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int8_t x354 = -1;
	static int64_t x355 = -1LL;

    t49 = (x353>>(x354&(x355<=x356)));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x369 = INT64_MAX;
	uint32_t x370 = UINT32_MAX;
	volatile int16_t x371 = INT16_MIN;
	uint64_t x372 = UINT64_MAX;
	volatile int64_t t50 = 31LL;

    t50 = (x369>>(x370&(x371<=x372)));

    if (t50 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x377 = INT8_MAX;
	static int32_t x378 = INT32_MAX;
	int64_t x379 = 188114LL;
	volatile int32_t t51 = 6370;

    t51 = (x377>>(x378&(x379<=x380)));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x381 = 496863;
	volatile int32_t x382 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t52 = 129866520;

    t52 = (x381>>(x382&(x383<=x384)));

    if (t52 != 496863) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x385 = 0;
	uint32_t x387 = UINT32_MAX;
	static int64_t x388 = -9595576661847709LL;
	volatile int32_t t53 = 426;

    t53 = (x385>>(x386&(x387<=x388)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x393 = UINT32_MAX;
	static int64_t x394 = -1LL;
	int16_t x395 = -8610;
	uint16_t x396 = 0U;
	static volatile uint32_t t54 = 4233298U;

    t54 = (x393>>(x394&(x395<=x396)));

    if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MIN;
	static volatile uint64_t x400 = 4592241LLU;
	volatile int32_t t55 = -72801446;

    t55 = (x397>>(x398&(x399<=x400)));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x402 = -1060560;
	static volatile int16_t x403 = INT16_MIN;
	static int64_t x404 = INT64_MAX;
	volatile int32_t t56 = 2;

    t56 = (x401>>(x402&(x403<=x404)));

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x405 = INT16_MAX;
	uint64_t x406 = 1978431LLU;
	uint16_t x407 = 28442U;

    t57 = (x405>>(x406&(x407<=x408)));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x413 = 14U;
	volatile int32_t x414 = INT32_MIN;
	volatile int64_t x416 = INT64_MAX;
	static volatile int32_t t58 = 124;

    t58 = (x413>>(x414&(x415<=x416)));

    if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x421 = 7U;
	int32_t x422 = -5908796;
	volatile int32_t t59 = 8911;

    t59 = (x421>>(x422&(x423<=x424)));

    if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x426 = -250;
	int8_t x427 = INT8_MAX;
	static int64_t x428 = -1LL;

    t60 = (x425>>(x426&(x427<=x428)));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x429 = INT32_MAX;
	volatile int16_t x431 = -934;
	int16_t x432 = 1;
	volatile int32_t t61 = 15064498;

    t61 = (x429>>(x430&(x431<=x432)));

    if (t61 != 1073741823) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x433 = 7U;
	uint16_t x434 = 1420U;
	uint8_t x435 = 2U;
	volatile int16_t x436 = -203;

    t62 = (x433>>(x434&(x435<=x436)));

    if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x439 = -121;
	int64_t x440 = 576038LL;
	int32_t t63 = -1873;

    t63 = (x437>>(x438&(x439<=x440)));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x441 = 1;
	uint8_t x442 = 2U;
	uint8_t x443 = 108U;
	int16_t x444 = 1;
	static volatile int32_t t64 = 92195;

    t64 = (x441>>(x442&(x443<=x444)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x445 = UINT16_MAX;
	volatile uint32_t x446 = 720796U;
	static int8_t x447 = -1;
	int8_t x448 = INT8_MIN;
	volatile int32_t t65 = -144;

    t65 = (x445>>(x446&(x447<=x448)));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x449 = 17U;
	int8_t x450 = 17;
	int32_t x451 = 0;
	uint8_t x452 = 109U;

    t66 = (x449>>(x450&(x451<=x452)));

    if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x461 = 1;
	static volatile int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	volatile int32_t t67 = 152;

    t67 = (x461>>(x462&(x463<=x464)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x473 = 3147U;
	static uint64_t x474 = 33821209260667LLU;
	int8_t x475 = INT8_MIN;
	int8_t x476 = 1;
	volatile int32_t t68 = 35;

    t68 = (x473>>(x474&(x475<=x476)));

    if (t68 != 1573) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x481 = 192U;
	int16_t x482 = INT16_MAX;
	uint8_t x483 = UINT8_MAX;
	int16_t x484 = INT16_MIN;

    t69 = (x481>>(x482&(x483<=x484)));

    if (t69 != 192U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x485 = 25677173U;
	static int16_t x486 = INT16_MAX;
	static uint16_t x487 = 923U;
	static volatile uint32_t t70 = 28423U;

    t70 = (x485>>(x486&(x487<=x488)));

    if (t70 != 12838586U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x493 = 1415208674U;
	int64_t x494 = INT64_MAX;
	static int64_t x495 = INT64_MIN;
	int16_t x496 = 11;
	uint32_t t71 = 5343U;

    t71 = (x493>>(x494&(x495<=x496)));

    if (t71 != 707604337U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x497 = 18300363LLU;
	volatile int64_t x498 = -15206574855LL;
	static uint8_t x499 = 5U;
	int8_t x500 = 0;

    t72 = (x497>>(x498&(x499<=x500)));

    if (t72 != 18300363LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x510 = UINT8_MAX;
	static int16_t x511 = INT16_MIN;
	static volatile int64_t x512 = INT64_MAX;

    t73 = (x509>>(x510&(x511<=x512)));

    if (t73 != 142371241U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x513 = 1456483U;
	int32_t x514 = INT32_MIN;
	volatile int8_t x515 = INT8_MIN;
	static uint16_t x516 = 3652U;
	uint32_t t74 = 109U;

    t74 = (x513>>(x514&(x515<=x516)));

    if (t74 != 1456483U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x521 = INT32_MAX;
	volatile int64_t x523 = INT64_MAX;
	int8_t x524 = INT8_MIN;
	static int32_t t75 = INT32_MAX;

    t75 = (x521>>(x522&(x523<=x524)));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x529 = UINT64_MAX;
	volatile int8_t x532 = -1;
	volatile uint64_t t76 = 15799507365581LLU;

    t76 = (x529>>(x530&(x531<=x532)));

    if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x537 = 34U;
	int64_t x538 = -1LL;
	int32_t x539 = -1;
	volatile uint32_t t77 = 794U;

    t77 = (x537>>(x538&(x539<=x540)));

    if (t77 != 17U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x541 = 6U;
	volatile uint16_t x543 = 828U;
	volatile int8_t x544 = INT8_MIN;
	volatile int32_t t78 = -31;

    t78 = (x541>>(x542&(x543<=x544)));

    if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x561 = 64817079310601LLU;
	volatile int32_t x563 = -880;
	volatile int32_t x564 = INT32_MAX;

    t79 = (x561>>(x562&(x563<=x564)));

    if (t79 != 64817079310601LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x573 = UINT32_MAX;
	uint32_t x575 = UINT32_MAX;
	uint16_t x576 = 20U;
	static volatile uint32_t t80 = UINT32_MAX;

    t80 = (x573>>(x574&(x575<=x576)));

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x590 = 71LLU;
	uint16_t x591 = 446U;
	static volatile int64_t t81 = INT64_MAX;

    t81 = (x589>>(x590&(x591<=x592)));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x601 = 21;
	uint8_t x602 = UINT8_MAX;
	volatile uint64_t x603 = UINT64_MAX;
	int32_t t82 = -37300;

    t82 = (x601>>(x602&(x603<=x604)));

    if (t82 != 21) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x605 = 81U;
	int32_t x606 = -1;
	volatile int8_t x607 = INT8_MIN;
	uint16_t x608 = 337U;
	static int32_t t83 = 143;

    t83 = (x605>>(x606&(x607<=x608)));

    if (t83 != 40) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x609 = 4247304633LLU;
	static uint16_t x610 = 28U;
	int32_t x611 = -6071690;
	int64_t x612 = -1LL;
	volatile uint64_t t84 = 1179050001LLU;

    t84 = (x609>>(x610&(x611<=x612)));

    if (t84 != 4247304633LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x617 = 12;
	uint8_t x618 = UINT8_MAX;
	int32_t x619 = -1;
	volatile int32_t t85 = -5052607;

    t85 = (x617>>(x618&(x619<=x620)));

    if (t85 != 12) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x621 = 1223U;
	int32_t x624 = -16225;

    t86 = (x621>>(x622&(x623<=x624)));

    if (t86 != 1223) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x625 = INT16_MAX;
	uint16_t x626 = 1U;
	static volatile uint64_t x627 = UINT64_MAX;
	uint32_t x628 = 85133U;
	int32_t t87 = 1110984;

    t87 = (x625>>(x626&(x627<=x628)));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x634 = 243U;
	static volatile uint32_t x636 = 467087505U;

    t88 = (x633>>(x634&(x635<=x636)));

    if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x637 = 15490U;
	static int32_t x638 = INT32_MIN;
	volatile int16_t x639 = 0;
	volatile int32_t x640 = INT32_MAX;
	static volatile int32_t t89 = 3821;

    t89 = (x637>>(x638&(x639<=x640)));

    if (t89 != 15490) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x645 = 3U;
	static int64_t x646 = 1026038362551987LL;
	static volatile int32_t t90 = 603644;

    t90 = (x645>>(x646&(x647<=x648)));

    if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x653 = INT8_MAX;
	uint64_t x655 = 3924951625065228LLU;
	int8_t x656 = 5;
	int32_t t91 = 115828108;

    t91 = (x653>>(x654&(x655<=x656)));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x658 = -108;
	int16_t x659 = INT16_MIN;
	volatile int64_t t92 = INT64_MAX;

    t92 = (x657>>(x658&(x659<=x660)));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x661 = 57950U;
	volatile int8_t x662 = INT8_MIN;
	uint32_t x663 = 1773788U;
	volatile int8_t x664 = INT8_MIN;

    t93 = (x661>>(x662&(x663<=x664)));

    if (t93 != 57950U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x670 = INT32_MIN;
	int32_t x671 = -243;
	volatile int64_t x672 = 400LL;
	volatile uint32_t t94 = 1046689U;

    t94 = (x669>>(x670&(x671<=x672)));

    if (t94 != 6666650U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x686 = 806;
	uint32_t x687 = 100U;
	volatile uint32_t x688 = 37905606U;
	static volatile int64_t t95 = -69091785LL;

    t95 = (x685>>(x686&(x687<=x688)));

    if (t95 != 27962630274LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x690 = 0U;
	static int16_t x691 = -1;
	int16_t x692 = INT16_MAX;
	int32_t t96 = -21736;

    t96 = (x689>>(x690&(x691<=x692)));

    if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x697 = 2293LL;
	static int64_t x698 = INT64_MIN;
	uint32_t x699 = UINT32_MAX;
	int32_t x700 = 152;
	static int64_t t97 = -1254351LL;

    t97 = (x697>>(x698&(x699<=x700)));

    if (t97 != 2293LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile uint32_t x702 = 3511552U;
	int16_t x703 = INT16_MAX;
	int16_t x704 = 569;
	static uint32_t t98 = UINT32_MAX;

    t98 = (x701>>(x702&(x703<=x704)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x714 = -1;
	uint8_t x715 = 31U;
	int8_t x716 = 1;
	volatile int64_t t99 = -46297LL;

    t99 = (x713>>(x714&(x715<=x716)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x717 = 9LLU;
	static int8_t x719 = INT8_MAX;
	uint16_t x720 = UINT16_MAX;
	uint64_t t100 = 16234208253LLU;

    t100 = (x717>>(x718&(x719<=x720)));

    if (t100 != 9LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x725 = 469561156768192LL;
	volatile int16_t x726 = -1;
	static uint32_t x727 = UINT32_MAX;
	static uint8_t x728 = UINT8_MAX;
	volatile int64_t t101 = 151615LL;

    t101 = (x725>>(x726&(x727<=x728)));

    if (t101 != 469561156768192LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x730 = UINT64_MAX;

    t102 = (x729>>(x730&(x731<=x732)));

    if (t102 != 45285LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x737 = INT32_MAX;
	int64_t x738 = 858588725523016LL;
	int16_t x739 = INT16_MIN;

    t103 = (x737>>(x738&(x739<=x740)));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x749 = INT32_MAX;
	int64_t x750 = INT64_MIN;
	int32_t x751 = -1;
	int32_t x752 = INT32_MIN;
	int32_t t104 = INT32_MAX;

    t104 = (x749>>(x750&(x751<=x752)));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x754 = INT8_MAX;
	static int64_t x756 = INT64_MAX;
	volatile int32_t t105 = 6507;

    t105 = (x753>>(x754&(x755<=x756)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x769 = 134935U;
	int16_t x771 = INT16_MIN;
	int8_t x772 = INT8_MIN;
	uint32_t t106 = 116798U;

    t106 = (x769>>(x770&(x771<=x772)));

    if (t106 != 67467U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x777 = 62U;
	int16_t x778 = INT16_MAX;
	uint64_t x779 = 14262LLU;
	volatile int32_t t107 = 46792;

    t107 = (x777>>(x778&(x779<=x780)));

    if (t107 != 31) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x785 = 24407051LL;
	static int64_t x786 = -1683LL;
	uint8_t x788 = 1U;
	int64_t t108 = -8157254351955437LL;

    t108 = (x785>>(x786&(x787<=x788)));

    if (t108 != 12203525LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x789 = UINT32_MAX;
	static volatile int32_t x790 = INT32_MIN;
	int32_t x791 = INT32_MIN;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (x789>>(x790&(x791<=x792)));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x802 = 8075373837LL;
	uint8_t x803 = UINT8_MAX;
	uint64_t x804 = UINT64_MAX;
	int32_t t110 = -22707;

    t110 = (x801>>(x802&(x803<=x804)));

    if (t110 != 5) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x805 = 4780U;
	uint8_t x806 = UINT8_MAX;
	uint32_t x807 = 43U;
	int64_t x808 = -1LL;
	volatile int32_t t111 = -1469;

    t111 = (x805>>(x806&(x807<=x808)));

    if (t111 != 4780) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x817 = 3;
	static int64_t x818 = INT64_MAX;
	static int32_t t112 = 832;

    t112 = (x817>>(x818&(x819<=x820)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x825 = UINT32_MAX;
	int64_t x826 = -68533449473LL;
	uint16_t x827 = 517U;
	static int32_t x828 = 2276;

    t113 = (x825>>(x826&(x827<=x828)));

    if (t113 != 2147483647U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x829 = UINT8_MAX;
	int64_t x832 = -1LL;
	volatile int32_t t114 = -7377779;

    t114 = (x829>>(x830&(x831<=x832)));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x833 = 918027887972LL;
	static uint8_t x834 = 120U;
	volatile uint8_t x835 = UINT8_MAX;
	int16_t x836 = -1;
	volatile int64_t t115 = -505LL;

    t115 = (x833>>(x834&(x835<=x836)));

    if (t115 != 918027887972LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x845 = 2U;
	volatile int16_t x846 = -13514;
	int8_t x847 = INT8_MIN;
	int32_t t116 = 322;

    t116 = (x845>>(x846&(x847<=x848)));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x849 = UINT32_MAX;
	int8_t x850 = 1;
	volatile int64_t x851 = INT64_MIN;
	int16_t x852 = 2511;
	uint32_t t117 = 674U;

    t117 = (x849>>(x850&(x851<=x852)));

    if (t117 != 2147483647U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x857 = 815994U;
	int32_t x858 = INT32_MAX;
	int8_t x859 = INT8_MAX;
	uint32_t x860 = UINT32_MAX;
	uint32_t t118 = 510613080U;

    t118 = (x857>>(x858&(x859<=x860)));

    if (t118 != 407997U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x865 = 4U;
	uint16_t x867 = UINT16_MAX;
	volatile int8_t x868 = -1;
	volatile int32_t t119 = -118352;

    t119 = (x865>>(x866&(x867<=x868)));

    if (t119 != 4) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x869 = UINT8_MAX;
	int64_t x870 = INT64_MIN;
	int32_t x871 = 102441317;
	static int32_t x872 = -1;
	int32_t t120 = 654684346;

    t120 = (x869>>(x870&(x871<=x872)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x874 = -1LL;
	static int8_t x875 = INT8_MAX;
	volatile int16_t x876 = INT16_MAX;
	int64_t t121 = 1026051LL;

    t121 = (x873>>(x874&(x875<=x876)));

    if (t121 != 4708LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x877 = 174181774U;
	volatile int8_t x878 = INT8_MIN;
	uint32_t x879 = 17493U;
	int8_t x880 = 33;
	uint32_t t122 = 229146U;

    t122 = (x877>>(x878&(x879<=x880)));

    if (t122 != 174181774U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x885 = 673U;
	uint16_t x886 = 2U;
	uint32_t x887 = 45568U;
	int8_t x888 = INT8_MAX;
	volatile int32_t t123 = -105808;

    t123 = (x885>>(x886&(x887<=x888)));

    if (t123 != 673) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x897 = UINT16_MAX;
	static int64_t x898 = 1519568530367429LL;
	static int32_t x899 = -1;
	int16_t x900 = INT16_MIN;
	volatile int32_t t124 = 335013528;

    t124 = (x897>>(x898&(x899<=x900)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x902 = INT16_MAX;
	uint8_t x903 = UINT8_MAX;
	volatile int16_t x904 = INT16_MIN;
	int32_t t125 = 50132145;

    t125 = (x901>>(x902&(x903<=x904)));

    if (t125 != 5) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint32_t x905 = UINT32_MAX;
	volatile uint16_t x906 = 1627U;
	static volatile uint32_t x907 = 732653891U;
	uint64_t x908 = UINT64_MAX;
	uint32_t t126 = 2U;

    t126 = (x905>>(x906&(x907<=x908)));

    if (t126 != 2147483647U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x909 = UINT8_MAX;
	int32_t x910 = INT32_MAX;
	static int16_t x911 = -7;
	volatile uint64_t x912 = UINT64_MAX;
	static volatile int32_t t127 = -20;

    t127 = (x909>>(x910&(x911<=x912)));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x925 = UINT8_MAX;
	int64_t x926 = INT64_MAX;
	volatile uint16_t x927 = 7292U;
	int32_t x928 = -1;
	static volatile int32_t t128 = -42788635;

    t128 = (x925>>(x926&(x927<=x928)));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x937 = 509LL;
	volatile int64_t t129 = 35891965LL;

    t129 = (x937>>(x938&(x939<=x940)));

    if (t129 != 254LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x942 = UINT16_MAX;
	int64_t x943 = INT64_MIN;
	int64_t x944 = 653203969785739497LL;
	volatile int32_t t130 = 972951166;

    t130 = (x941>>(x942&(x943<=x944)));

    if (t130 != 1291) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x945 = 697570;
	volatile int64_t x946 = -1LL;
	uint8_t x947 = 2U;
	int16_t x948 = INT16_MIN;
	volatile int32_t t131 = -1067200;

    t131 = (x945>>(x946&(x947<=x948)));

    if (t131 != 697570) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x950 = 17U;

    t132 = (x949>>(x950&(x951<=x952)));

    if (t132 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x957 = UINT8_MAX;
	int8_t x958 = INT8_MIN;
	volatile int32_t t133 = 980;

    t133 = (x957>>(x958&(x959<=x960)));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x961 = UINT64_MAX;
	static int16_t x962 = 19;
	uint32_t x963 = UINT32_MAX;
	uint64_t x964 = 20012032761676LLU;
	volatile uint64_t t134 = 311867940LLU;

    t134 = (x961>>(x962&(x963<=x964)));

    if (t134 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x969 = INT64_MAX;
	int16_t x970 = INT16_MIN;
	int16_t x972 = -2119;
	int64_t t135 = INT64_MAX;

    t135 = (x969>>(x970&(x971<=x972)));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x981 = INT16_MAX;
	volatile int8_t x983 = 1;
	int32_t x984 = INT32_MIN;
	int32_t t136 = -44783272;

    t136 = (x981>>(x982&(x983<=x984)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x985 = 6025256110LLU;
	static uint64_t x986 = 140215LLU;
	int16_t x987 = INT16_MIN;
	int32_t x988 = 34;
	volatile uint64_t t137 = 4153986486712883LLU;

    t137 = (x985>>(x986&(x987<=x988)));

    if (t137 != 3012628055LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x1005 = 21LLU;
	static int32_t x1006 = 38;
	int64_t x1007 = INT64_MAX;
	int64_t x1008 = -1LL;
	uint64_t t138 = 230415795LLU;

    t138 = (x1005>>(x1006&(x1007<=x1008)));

    if (t138 != 21LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x1010 = 13LLU;
	volatile int8_t x1011 = INT8_MIN;
	static int32_t x1012 = -1;
	volatile int32_t t139 = 488066598;

    t139 = (x1009>>(x1010&(x1011<=x1012)));

    if (t139 != 12) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x1026 = 109U;
	static volatile uint8_t x1027 = 17U;
	uint16_t x1028 = 7252U;

    t140 = (x1025>>(x1026&(x1027<=x1028)));

    if (t140 != 63) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x1033 = UINT64_MAX;
	volatile int8_t x1034 = INT8_MIN;
	int16_t x1036 = INT16_MIN;
	uint64_t t141 = UINT64_MAX;

    t141 = (x1033>>(x1034&(x1035<=x1036)));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1037 = 50499693544LL;
	uint32_t x1038 = UINT32_MAX;
	static int16_t x1039 = INT16_MIN;
	int64_t t142 = -1810738513LL;

    t142 = (x1037>>(x1038&(x1039<=x1040)));

    if (t142 != 25249846772LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x1047 = 2U;
	int64_t x1048 = INT64_MIN;

    t143 = (x1045>>(x1046&(x1047<=x1048)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1053 = UINT8_MAX;
	int32_t x1055 = -1;
	uint64_t x1056 = 3LLU;

    t144 = (x1053>>(x1054&(x1055<=x1056)));

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1058 = 1;
	volatile int32_t x1059 = -1;
	int64_t x1060 = INT64_MIN;
	volatile int32_t t145 = -8463;

    t145 = (x1057>>(x1058&(x1059<=x1060)));

    if (t145 != 11124) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x1062 = 122U;
	volatile uint64_t t146 = 39LLU;

    t146 = (x1061>>(x1062&(x1063<=x1064)));

    if (t146 != 342261894383LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x1066 = -1;
	static volatile int8_t x1068 = -1;
	volatile int32_t t147 = 297;

    t147 = (x1065>>(x1066&(x1067<=x1068)));

    if (t147 != 815) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x1069 = 22251LLU;
	volatile uint32_t x1071 = 365U;
	uint8_t x1072 = 14U;
	volatile uint64_t t148 = 30264817LLU;

    t148 = (x1069>>(x1070&(x1071<=x1072)));

    if (t148 != 22251LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x1077 = UINT32_MAX;
	static int64_t x1079 = INT64_MIN;
	int16_t x1080 = INT16_MAX;
	volatile uint32_t t149 = UINT32_MAX;

    t149 = (x1077>>(x1078&(x1079<=x1080)));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x1081 = INT16_MAX;
	int8_t x1082 = INT8_MAX;
	int32_t x1084 = INT32_MAX;
	volatile int32_t t150 = 6;

    t150 = (x1081>>(x1082&(x1083<=x1084)));

    if (t150 != 16383) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1089 = 11U;
	int32_t x1090 = 28;
	int64_t x1091 = -1LL;
	int32_t x1092 = -1;
	volatile int32_t t151 = 3;

    t151 = (x1089>>(x1090&(x1091<=x1092)));

    if (t151 != 11) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x1093 = INT32_MAX;
	uint32_t x1094 = UINT32_MAX;
	uint64_t x1095 = UINT64_MAX;
	int32_t x1096 = 59;
	volatile int32_t t152 = INT32_MAX;

    t152 = (x1093>>(x1094&(x1095<=x1096)));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1098 = INT8_MAX;
	int16_t x1100 = -11;
	int32_t t153 = -3414798;

    t153 = (x1097>>(x1098&(x1099<=x1100)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1105 = INT32_MAX;
	volatile int16_t x1106 = INT16_MIN;
	uint64_t x1107 = 15069784658470029LLU;
	int64_t x1108 = -1LL;
	volatile int32_t t154 = INT32_MAX;

    t154 = (x1105>>(x1106&(x1107<=x1108)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1109 = 10424549LL;
	volatile int64_t x1110 = -1722173LL;
	int64_t x1111 = INT64_MAX;
	uint8_t x1112 = 102U;
	int64_t t155 = 6815442324LL;

    t155 = (x1109>>(x1110&(x1111<=x1112)));

    if (t155 != 10424549LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x1129 = UINT16_MAX;
	static int16_t x1132 = INT16_MAX;

    t156 = (x1129>>(x1130&(x1131<=x1132)));

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1137 = 11U;
	int16_t x1138 = -1;
	int32_t x1139 = 14766;
	volatile int32_t t157 = 1615;

    t157 = (x1137>>(x1138&(x1139<=x1140)));

    if (t157 != 5) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1149 = INT16_MAX;
	int64_t x1151 = INT64_MAX;
	static int8_t x1152 = INT8_MAX;
	int32_t t158 = 1;

    t158 = (x1149>>(x1150&(x1151<=x1152)));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1153 = INT32_MAX;
	uint32_t x1154 = 974943U;
	volatile int32_t t159 = INT32_MAX;

    t159 = (x1153>>(x1154&(x1155<=x1156)));

    if (t159 != INT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1169 = 1573454892768LLU;
	static int8_t x1170 = 1;
	uint64_t x1171 = 1604LLU;
	volatile int64_t x1172 = 21967849930800477LL;
	uint64_t t160 = 438779986104726267LLU;

    t160 = (x1169>>(x1170&(x1171<=x1172)));

    if (t160 != 786727446384LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x1177 = UINT16_MAX;
	int16_t x1178 = 10;
	uint16_t x1179 = 16258U;
	volatile uint32_t x1180 = 40675U;
	int32_t t161 = -9;

    t161 = (x1177>>(x1178&(x1179<=x1180)));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1189 = 1LL;
	int64_t x1190 = -419333928LL;
	int64_t x1191 = -7023LL;
	int64_t t162 = 0LL;

    t162 = (x1189>>(x1190&(x1191<=x1192)));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x1212 = INT64_MIN;
	static int32_t t163 = 9;

    t163 = (x1209>>(x1210&(x1211<=x1212)));

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1213 = 2;
	volatile int64_t x1214 = 22LL;
	int8_t x1215 = -1;
	static int32_t t164 = -5047;

    t164 = (x1213>>(x1214&(x1215<=x1216)));

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1226 = -1LL;
	uint8_t x1227 = UINT8_MAX;
	static int16_t x1228 = -1;
	uint32_t t165 = 712884451U;

    t165 = (x1225>>(x1226&(x1227<=x1228)));

    if (t165 != 1368725U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1233 = INT16_MAX;
	uint32_t x1234 = 63716U;
	static int8_t x1235 = -1;
	int8_t x1236 = 0;
	int32_t t166 = -3354443;

    t166 = (x1233>>(x1234&(x1235<=x1236)));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1237 = UINT64_MAX;
	static uint8_t x1238 = UINT8_MAX;
	volatile int64_t x1240 = INT64_MIN;
	static uint64_t t167 = UINT64_MAX;

    t167 = (x1237>>(x1238&(x1239<=x1240)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x1253 = 294LLU;
	uint64_t x1254 = UINT64_MAX;
	int64_t x1256 = INT64_MAX;
	uint64_t t168 = 3152845749763LLU;

    t168 = (x1253>>(x1254&(x1255<=x1256)));

    if (t168 != 294LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1257 = 1626U;
	volatile uint32_t x1258 = UINT32_MAX;
	volatile uint8_t x1259 = 0U;
	int16_t x1260 = INT16_MAX;
	static int32_t t169 = 3;

    t169 = (x1257>>(x1258&(x1259<=x1260)));

    if (t169 != 813) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1261 = INT8_MAX;
	int32_t x1263 = -20297;
	int64_t x1264 = -426625LL;
	volatile int32_t t170 = -98726327;

    t170 = (x1261>>(x1262&(x1263<=x1264)));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1277 = INT8_MAX;
	volatile int16_t x1278 = 1;
	int16_t x1279 = 14;
	volatile int32_t x1280 = 3;
	int32_t t171 = -2083861;

    t171 = (x1277>>(x1278&(x1279<=x1280)));

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1281 = 0;
	static int64_t x1282 = INT64_MIN;
	int16_t x1283 = 7;
	static volatile int64_t x1284 = -7472851LL;

    t172 = (x1281>>(x1282&(x1283<=x1284)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1289 = UINT64_MAX;
	int32_t x1290 = -4154;
	volatile int64_t x1291 = -10743177085432912LL;
	int16_t x1292 = INT16_MIN;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = (x1289>>(x1290&(x1291<=x1292)));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1301 = 3;
	static int32_t x1302 = INT32_MIN;
	volatile uint32_t x1303 = UINT32_MAX;
	volatile int32_t t174 = -11;

    t174 = (x1301>>(x1302&(x1303<=x1304)));

    if (t174 != 3) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1305 = 36U;
	static int16_t x1306 = INT16_MAX;
	int32_t x1307 = INT32_MAX;
	volatile uint16_t x1308 = 3U;
	static int32_t t175 = -25522;

    t175 = (x1305>>(x1306&(x1307<=x1308)));

    if (t175 != 36) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1313 = 516262;
	int8_t x1314 = -1;
	int64_t x1315 = INT64_MIN;
	uint64_t x1316 = 2307688924604LLU;

    t176 = (x1313>>(x1314&(x1315<=x1316)));

    if (t176 != 516262) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1321 = UINT64_MAX;
	int16_t x1322 = 1;
	volatile uint32_t x1323 = 213066661U;
	static uint8_t x1324 = 113U;
	uint64_t t177 = UINT64_MAX;

    t177 = (x1321>>(x1322&(x1323<=x1324)));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1325 = UINT16_MAX;
	static uint16_t x1326 = 11U;
	int32_t x1327 = INT32_MIN;
	int16_t x1328 = INT16_MAX;
	volatile int32_t t178 = -32418941;

    t178 = (x1325>>(x1326&(x1327<=x1328)));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1329 = INT64_MAX;
	int32_t x1330 = INT32_MAX;
	int8_t x1331 = INT8_MIN;
	int64_t x1332 = 2245026132696LL;
	volatile int64_t t179 = 8193043757LL;

    t179 = (x1329>>(x1330&(x1331<=x1332)));

    if (t179 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1333 = UINT8_MAX;
	uint32_t x1334 = 4U;
	uint8_t x1335 = UINT8_MAX;

    t180 = (x1333>>(x1334&(x1335<=x1336)));

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1337 = INT16_MAX;
	uint64_t x1338 = UINT64_MAX;
	static int8_t x1339 = INT8_MAX;
	int64_t x1340 = INT64_MAX;

    t181 = (x1337>>(x1338&(x1339<=x1340)));

    if (t181 != 16383) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1341 = 80186383LL;
	int32_t x1342 = INT32_MAX;
	uint16_t x1343 = UINT16_MAX;
	static int64_t t182 = 742427LL;

    t182 = (x1341>>(x1342&(x1343<=x1344)));

    if (t182 != 40093191LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1345 = 11486622665189324LL;
	int16_t x1347 = -605;
	uint16_t x1348 = 1245U;
	int64_t t183 = -5LL;

    t183 = (x1345>>(x1346&(x1347<=x1348)));

    if (t183 != 11486622665189324LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1361 = 490898950367260LLU;
	static int32_t x1362 = -11166;
	uint16_t x1363 = 5604U;
	uint8_t x1364 = 2U;
	static volatile uint64_t t184 = 183LLU;

    t184 = (x1361>>(x1362&(x1363<=x1364)));

    if (t184 != 490898950367260LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1365 = UINT16_MAX;
	int8_t x1366 = INT8_MAX;
	uint16_t x1367 = UINT16_MAX;
	uint64_t x1368 = 320LLU;
	int32_t t185 = 2;

    t185 = (x1365>>(x1366&(x1367<=x1368)));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1373 = INT8_MAX;
	static int16_t x1374 = INT16_MIN;
	static int64_t x1375 = INT64_MAX;
	static volatile int64_t x1376 = INT64_MAX;
	volatile int32_t t186 = -808233169;

    t186 = (x1373>>(x1374&(x1375<=x1376)));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1381 = 14;
	int32_t x1382 = -6528514;
	int32_t x1383 = -1468;
	int32_t t187 = -57100394;

    t187 = (x1381>>(x1382&(x1383<=x1384)));

    if (t187 != 14) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1390 = UINT8_MAX;
	uint16_t x1391 = UINT16_MAX;
	static int8_t x1392 = -4;
	static int32_t t188 = -193647464;

    t188 = (x1389>>(x1390&(x1391<=x1392)));

    if (t188 != 23) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1393 = UINT32_MAX;
	int64_t x1394 = -126424617692LL;
	volatile int64_t x1395 = -1LL;
	static int16_t x1396 = -1;
	volatile uint32_t t189 = UINT32_MAX;

    t189 = (x1393>>(x1394&(x1395<=x1396)));

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1398 = INT32_MIN;
	int16_t x1399 = INT16_MAX;
	volatile int8_t x1400 = -1;
	uint32_t t190 = 3598413U;

    t190 = (x1397>>(x1398&(x1399<=x1400)));

    if (t190 != 9U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1401 = 4489195131775935255LLU;
	uint64_t x1402 = UINT64_MAX;
	int8_t x1403 = INT8_MIN;
	uint16_t x1404 = 2U;

    t191 = (x1401>>(x1402&(x1403<=x1404)));

    if (t191 != 2244597565887967627LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1406 = INT8_MAX;
	int16_t x1407 = -1168;

    t192 = (x1405>>(x1406&(x1407<=x1408)));

    if (t192 != 1073741823) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1421 = UINT64_MAX;
	volatile int32_t x1422 = -2;
	uint8_t x1424 = 40U;
	uint64_t t193 = UINT64_MAX;

    t193 = (x1421>>(x1422&(x1423<=x1424)));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1429 = INT64_MAX;
	int32_t x1431 = 1;
	volatile int8_t x1432 = INT8_MAX;
	int64_t t194 = -549111386LL;

    t194 = (x1429>>(x1430&(x1431<=x1432)));

    if (t194 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1433 = 117017977U;
	int32_t x1435 = 848677400;
	static int64_t x1436 = INT64_MAX;

    t195 = (x1433>>(x1434&(x1435<=x1436)));

    if (t195 != 58508988U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1437 = 4228040834106LLU;
	uint32_t x1440 = 829U;

    t196 = (x1437>>(x1438&(x1439<=x1440)));

    if (t196 != 4228040834106LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t t197 = 1LLU;

    t197 = (x1449>>(x1450&(x1451<=x1452)));

    if (t197 != 879681853LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1462 = 21310447;
	volatile int16_t x1463 = -15815;

    t198 = (x1461>>(x1462&(x1463<=x1464)));

    if (t198 != 1357LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1485 = INT32_MAX;
	volatile int8_t x1486 = -1;
	uint16_t x1487 = 13U;
	static volatile int32_t x1488 = INT32_MIN;
	int32_t t199 = INT32_MAX;

    t199 = (x1485>>(x1486&(x1487<=x1488)));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

