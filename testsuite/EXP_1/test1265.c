
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

volatile int32_t x2 = INT32_MIN;
static uint32_t x3 = UINT32_MAX;
volatile int32_t x5 = -197;
uint8_t x8 = 19U;
int32_t t1 = 73;
static int64_t x17 = -1LL;
uint32_t x19 = 2458U;
int16_t x25 = INT16_MIN;
uint32_t x32 = 191U;
volatile uint32_t t7 = 60U;
static uint16_t x33 = UINT16_MAX;
int64_t x39 = -59800068818LL;
int16_t x41 = -6;
uint64_t t11 = 49241504641145LLU;
uint8_t x52 = 2U;
int32_t x58 = -1;
int16_t x61 = INT16_MIN;
int64_t x69 = INT64_MIN;
int8_t x70 = INT8_MIN;
int32_t x75 = 8598299;
uint32_t x77 = UINT32_MAX;
int32_t x84 = INT32_MIN;
uint64_t x85 = 7496796LLU;
static uint32_t x86 = 854545133U;
static uint8_t x88 = 25U;
static int32_t t22 = 92;
static int32_t t23 = 4;
static volatile int32_t t25 = -549;
volatile int32_t t27 = -38872037;
volatile int8_t x113 = 9;
uint8_t x115 = 11U;
int32_t t28 = -177;
uint8_t x120 = UINT8_MAX;
int16_t x121 = INT16_MIN;
uint32_t x130 = 58346448U;
int16_t x132 = -1;
volatile uint64_t t34 = 432234697645067009LLU;
static int32_t t38 = 0;
int16_t x157 = INT16_MIN;
static int8_t x158 = 5;
volatile uint64_t t40 = 72766421953LLU;
volatile int8_t x170 = -62;
static uint64_t x171 = 7993958732LLU;
static int32_t t43 = -42345;
int64_t x177 = 1293665987988046LL;
int16_t x178 = 1;
uint16_t x180 = UINT16_MAX;
static uint32_t x187 = UINT32_MAX;
uint32_t x188 = 722816778U;
volatile int64_t x189 = INT64_MIN;
uint32_t x190 = UINT32_MAX;
volatile int32_t t47 = 1;
static int64_t x193 = -443569763528142LL;
int64_t x203 = INT64_MIN;
int32_t t50 = -3366;
int8_t x208 = INT8_MAX;
int64_t x210 = INT64_MIN;
int8_t x213 = -1;
static uint64_t x214 = 12302555343754LLU;
int32_t x215 = INT32_MIN;
static int32_t x244 = -24;
volatile int32_t t61 = 6365;
uint32_t x250 = 4263U;
static volatile uint8_t x253 = UINT8_MAX;
int16_t x255 = INT16_MAX;
volatile int32_t t64 = -8221333;
volatile uint64_t x275 = UINT64_MAX;
uint16_t x281 = 26163U;
int8_t x284 = -4;
int8_t x291 = 21;
int64_t x297 = -1LL;
int8_t x300 = -1;
int32_t x301 = INT32_MIN;
int32_t x303 = -1;
int64_t x304 = 132960LL;
volatile int64_t t75 = -32LL;
static int16_t x305 = -129;
static int64_t x309 = INT64_MIN;
int32_t x316 = INT32_MIN;
int32_t t78 = -1323110;
volatile uint64_t x317 = UINT64_MAX;
uint32_t x318 = 22963615U;
static uint64_t t79 = 274222869366125LLU;
int16_t x322 = -1;
int8_t x329 = INT8_MIN;
int32_t x332 = INT32_MIN;
static uint16_t x335 = UINT16_MAX;
static volatile int32_t t83 = -43662;
static int16_t x339 = 8;
static volatile int8_t x343 = -3;
int16_t x346 = -1;
uint64_t x354 = 840684971072424141LLU;
static int16_t x357 = INT16_MAX;
volatile int32_t t89 = -73;
int64_t x365 = -1LL;
volatile int32_t t91 = -176;
static int16_t x370 = INT16_MIN;
int32_t t92 = -767;
volatile int16_t x375 = INT16_MIN;
int32_t x381 = INT32_MIN;
static volatile uint8_t x392 = UINT8_MAX;
volatile int32_t t97 = -86;
int8_t x395 = INT8_MIN;
int8_t x400 = INT8_MAX;
static volatile int32_t t99 = -505;
int16_t x411 = 1;
int64_t t102 = -9LL;
uint32_t x415 = 436064322U;
uint16_t x421 = 32537U;
volatile uint16_t x426 = 2U;
int8_t x432 = -1;
int32_t x435 = 0;
int8_t x436 = 15;
int32_t x441 = -1;
int64_t x444 = 3740897924126LL;
static volatile int32_t t111 = 166304;
int8_t x454 = -2;
static int8_t x460 = INT8_MIN;
int32_t t114 = 0;
static int64_t x465 = -1LL;
static int8_t x468 = INT8_MIN;
uint64_t x471 = 2855347827762130688LLU;
int32_t x472 = -1;
uint16_t x474 = 13U;
volatile int16_t x479 = -251;
uint32_t x486 = 1906U;
int16_t x490 = INT16_MAX;
int64_t x493 = 2192820585898176LL;
int32_t x495 = INT32_MIN;
static uint64_t x497 = 438066118189915709LLU;
int64_t x503 = INT64_MAX;
static volatile int32_t t125 = 9312735;
int8_t x511 = 18;
int64_t x512 = 4973539120LL;
static volatile int32_t t128 = 26517;
int16_t x525 = INT16_MIN;
static int16_t x526 = INT16_MAX;
static uint32_t t131 = 1618945636U;
volatile int64_t x534 = INT64_MIN;
uint16_t x536 = UINT16_MAX;
int32_t t132 = 103850;
static volatile uint16_t x541 = 125U;
static int32_t x545 = INT32_MIN;
volatile int64_t x550 = -786550146LL;
int16_t x554 = 1;
volatile uint64_t x564 = 344551974LLU;
static int64_t x566 = INT64_MAX;
static int32_t t140 = -517225;
volatile int64_t x570 = -542687421LL;
static int32_t t141 = -8585;
int8_t x573 = INT8_MAX;
int64_t x588 = -1843695LL;
int32_t x589 = -114;
volatile int32_t t147 = 12553667;
int32_t x600 = -1;
volatile int16_t x610 = -1;
int16_t x611 = INT16_MIN;
uint16_t x615 = 2U;
int32_t x616 = 272450414;
int32_t t152 = 51693;
uint8_t x617 = 41U;
uint32_t x618 = 3964U;
uint32_t x619 = 8U;
static volatile int32_t t153 = -4048329;
volatile uint16_t x627 = UINT16_MAX;
volatile int32_t t156 = 145475167;
uint32_t x636 = 314U;
static uint16_t x643 = 1U;
static int32_t t159 = 108617409;
volatile int64_t x650 = -1LL;
int16_t x651 = INT16_MIN;
volatile int64_t x655 = -3215414894LL;
int32_t x662 = -216;
static int8_t x665 = -1;
volatile int32_t t165 = 49;
int16_t x674 = INT16_MAX;
int32_t x675 = INT32_MIN;
static int32_t t167 = 59812;
uint8_t x682 = 5U;
int64_t x684 = 3113523LL;
int64_t t168 = 1243722226829368LL;
volatile uint8_t x692 = UINT8_MAX;
int8_t x701 = -1;
int8_t x702 = INT8_MAX;
uint32_t t173 = 63454709U;
static int16_t x708 = -316;
int8_t x709 = INT8_MIN;
volatile int32_t x722 = 6148881;
volatile int8_t x723 = -41;
static volatile uint32_t t178 = 1841105836U;
int64_t x726 = 1808632720951LL;
uint16_t x729 = UINT16_MAX;
int8_t x732 = -3;
int64_t x735 = -2314959135659435LL;
int64_t x736 = -1LL;
volatile int16_t x738 = INT16_MIN;
volatile int32_t t182 = 978203104;
static volatile int32_t x743 = -1;
volatile uint32_t t183 = 9784U;
int32_t x749 = INT32_MIN;
static volatile int32_t x752 = INT32_MIN;
int32_t x761 = 87976041;
volatile int64_t t188 = -85821LL;
static volatile int16_t x766 = -1;
int32_t x768 = INT32_MIN;
int16_t x769 = INT16_MAX;
volatile uint8_t x773 = UINT8_MAX;
uint32_t x778 = UINT32_MAX;
int64_t x787 = INT64_MAX;
int16_t x788 = INT16_MIN;
uint64_t t196 = 1LLU;
int64_t x799 = -1LL;


void f0(void) {
    	uint8_t x1 = 12U;
	volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -17LL;

    t0 = (((x1!=x2)!=x3)%x4);

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	volatile int8_t x7 = -10;

    t1 = (((x5!=x6)!=x7)%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 0;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 439;

    t2 = (((x9!=x10)!=x11)%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 1;
	int8_t x14 = -1;
	int64_t x15 = INT64_MAX;
	static volatile uint16_t x16 = 1U;
	int32_t t3 = -18103;

    t3 = (((x13!=x14)!=x15)%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = INT32_MIN;
	static uint8_t x20 = 1U;
	volatile int32_t t4 = -11329;

    t4 = (((x17!=x18)!=x19)%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1031187U;
	static int16_t x22 = INT16_MAX;
	volatile uint32_t x23 = 6830840U;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -2;

    t5 = (((x21!=x22)!=x23)%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 16297U;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 234844806989673LLU;

    t6 = (((x25!=x26)!=x27)%x28);

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int64_t x30 = INT64_MIN;
	uint16_t x31 = 6849U;

    t7 = (((x29!=x30)!=x31)%x32);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 5347876626534481LLU;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 45LLU;

    t8 = (((x33!=x34)!=x35)%x36);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MAX;
	uint64_t x40 = 6000LLU;
	volatile uint64_t t9 = 167142446831164LLU;

    t9 = (((x37!=x38)!=x39)%x40);

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x42 = 0U;
	volatile int8_t x43 = INT8_MAX;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 18712;

    t10 = (((x41!=x42)!=x43)%x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = UINT64_MAX;
	uint32_t x46 = 115019U;
	uint32_t x47 = UINT32_MAX;
	uint64_t x48 = UINT64_MAX;

    t11 = (((x45!=x46)!=x47)%x48);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	int64_t x51 = INT64_MAX;
	int32_t t12 = 977526780;

    t12 = (((x49!=x50)!=x51)%x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = -1;
	volatile int32_t t13 = 216286295;

    t13 = (((x53!=x54)!=x55)%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -531048377965111LL;
	int16_t x59 = 25;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 1621LL;

    t14 = (((x57!=x58)!=x59)%x60);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = INT32_MAX;
	int16_t x63 = INT16_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 10223;

    t15 = (((x61!=x62)!=x63)%x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = 57U;
	static volatile int16_t x66 = -1;
	int8_t x67 = -1;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 10448;

    t16 = (((x65!=x66)!=x67)%x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x71 = UINT16_MAX;
	int8_t x72 = -1;
	static volatile int32_t t17 = 15;

    t17 = (((x69!=x70)!=x71)%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x73 = 44U;
	uint8_t x74 = 89U;
	int32_t x76 = INT32_MIN;
	static int32_t t18 = -10204276;

    t18 = (((x73!=x74)!=x75)%x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x78 = INT64_MAX;
	uint32_t x79 = UINT32_MAX;
	volatile int32_t x80 = -1;
	volatile int32_t t19 = 104;

    t19 = (((x77!=x78)!=x79)%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	static uint32_t x82 = 47U;
	int32_t x83 = -1;
	volatile int32_t t20 = -3366;

    t20 = (((x81!=x82)!=x83)%x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x87 = INT32_MAX;
	int32_t t21 = -36400;

    t21 = (((x85!=x86)!=x87)%x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	int64_t x90 = 23801140286LL;
	volatile uint8_t x91 = UINT8_MAX;
	static uint16_t x92 = 2U;

    t22 = (((x89!=x90)!=x91)%x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	uint32_t x94 = 93187U;
	int64_t x95 = 1LL;
	int32_t x96 = INT32_MAX;

    t23 = (((x93!=x94)!=x95)%x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = 244731;
	volatile uint8_t x98 = 0U;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -107269;

    t24 = (((x97!=x98)!=x99)%x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 10604080333019LL;
	int16_t x102 = 535;
	static uint8_t x103 = 1U;
	static uint8_t x104 = UINT8_MAX;

    t25 = (((x101!=x102)!=x103)%x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1149;
	int64_t x106 = INT64_MAX;
	int16_t x107 = -1;
	int16_t x108 = -1;
	int32_t t26 = -3774;

    t26 = (((x105!=x106)!=x107)%x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int64_t x110 = -1LL;
	static int8_t x111 = INT8_MIN;
	uint8_t x112 = 1U;

    t27 = (((x109!=x110)!=x111)%x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x114 = 658U;
	static int16_t x116 = 1;

    t28 = (((x113!=x114)!=x115)%x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile int8_t x118 = INT8_MIN;
	static volatile int16_t x119 = -4;
	int32_t t29 = -457481;

    t29 = (((x117!=x118)!=x119)%x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x122 = -17;
	int64_t x123 = INT64_MAX;
	static volatile uint32_t x124 = 18U;
	static uint32_t t30 = 23141022U;

    t30 = (((x121!=x122)!=x123)%x124);

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	uint16_t x126 = 266U;
	static int16_t x127 = -470;
	uint64_t x128 = 702488591LLU;
	volatile uint64_t t31 = 5LLU;

    t31 = (((x125!=x126)!=x127)%x128);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MIN;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t t32 = 31;

    t32 = (((x129!=x130)!=x131)%x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	uint16_t x134 = 1422U;
	int64_t x135 = INT64_MIN;
	int32_t x136 = 233;
	int32_t t33 = -22567;

    t33 = (((x133!=x134)!=x135)%x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 4U;
	int64_t x138 = -51418160LL;
	static uint8_t x139 = 3U;
	uint64_t x140 = UINT64_MAX;

    t34 = (((x137!=x138)!=x139)%x140);

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int8_t x142 = -1;
	static volatile uint32_t x143 = UINT32_MAX;
	static int64_t x144 = INT64_MIN;
	int64_t t35 = -59272409979316783LL;

    t35 = (((x141!=x142)!=x143)%x144);

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 3116U;
	static uint64_t x146 = 3318180808791412LLU;
	int64_t x147 = INT64_MIN;
	volatile int64_t x148 = -1LL;
	int64_t t36 = 199945LL;

    t36 = (((x145!=x146)!=x147)%x148);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -35807115506359LL;
	static int8_t x150 = INT8_MIN;
	uint32_t x151 = UINT32_MAX;
	volatile int64_t x152 = -13152368LL;
	volatile int64_t t37 = 7731311LL;

    t37 = (((x149!=x150)!=x151)%x152);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = 582271576LLU;
	int32_t x154 = INT32_MIN;
	volatile uint16_t x155 = 460U;
	int16_t x156 = INT16_MIN;

    t38 = (((x153!=x154)!=x155)%x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x159 = INT16_MAX;
	int64_t x160 = 449LL;
	volatile int64_t t39 = 25078LL;

    t39 = (((x157!=x158)!=x159)%x160);

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = 7U;
	uint64_t x162 = UINT64_MAX;
	uint8_t x163 = UINT8_MAX;
	uint64_t x164 = 7117LLU;

    t40 = (((x161!=x162)!=x163)%x164);

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MAX;
	volatile uint64_t x167 = 13292753LLU;
	volatile int8_t x168 = INT8_MIN;
	int32_t t41 = -146;

    t41 = (((x165!=x166)!=x167)%x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 3889;
	int8_t x172 = INT8_MAX;
	static int32_t t42 = 839;

    t42 = (((x169!=x170)!=x171)%x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MAX;
	volatile int8_t x175 = INT8_MAX;
	int16_t x176 = -1;

    t43 = (((x173!=x174)!=x175)%x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x179 = INT8_MIN;
	volatile int32_t t44 = -809147;

    t44 = (((x177!=x178)!=x179)%x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = 74331832LLU;
	uint32_t x182 = 103U;
	volatile int64_t x183 = INT64_MIN;
	volatile int16_t x184 = -5;
	int32_t t45 = -236063;

    t45 = (((x181!=x182)!=x183)%x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = UINT64_MAX;
	uint32_t x186 = 1916927422U;
	static uint32_t t46 = 0U;

    t46 = (((x185!=x186)!=x187)%x188);

    if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x191 = UINT64_MAX;
	volatile uint16_t x192 = 10U;

    t47 = (((x189!=x190)!=x191)%x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = INT16_MIN;
	volatile int64_t x195 = -1LL;
	int32_t x196 = -1659628;
	int32_t t48 = 184;

    t48 = (((x193!=x194)!=x195)%x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int16_t x198 = -1;
	static uint32_t x199 = 390U;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -296;

    t49 = (((x197!=x198)!=x199)%x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MIN;
	static uint16_t x204 = 472U;

    t50 = (((x201!=x202)!=x203)%x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x205 = -45;
	static uint8_t x206 = 6U;
	uint64_t x207 = 1430580781927LLU;
	static volatile int32_t t51 = -5501;

    t51 = (((x205!=x206)!=x207)%x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	uint16_t x211 = 6U;
	static volatile int8_t x212 = -1;
	volatile int32_t t52 = 0;

    t52 = (((x209!=x210)!=x211)%x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x216 = -42;
	int32_t t53 = 39;

    t53 = (((x213!=x214)!=x215)%x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -211420732871LL;
	uint64_t x218 = 31585068461011LLU;
	int32_t x219 = -1;
	int8_t x220 = 1;
	int32_t t54 = 15001;

    t54 = (((x217!=x218)!=x219)%x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -9103;
	int8_t x222 = -26;
	int8_t x223 = INT8_MAX;
	int16_t x224 = -2;
	static volatile int32_t t55 = 5172;

    t55 = (((x221!=x222)!=x223)%x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 19616U;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t56 = 186305500U;

    t56 = (((x225!=x226)!=x227)%x228);

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MAX;
	int64_t x231 = -1LL;
	int8_t x232 = -1;
	int32_t t57 = 0;

    t57 = (((x229!=x230)!=x231)%x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 3050U;
	int8_t x234 = 3;
	volatile int32_t x235 = -46060;
	int64_t x236 = INT64_MAX;
	volatile int64_t t58 = 5637LL;

    t58 = (((x233!=x234)!=x235)%x236);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = UINT8_MAX;
	volatile int32_t x238 = -7868062;
	int64_t x239 = INT64_MIN;
	int32_t x240 = INT32_MAX;
	static volatile int32_t t59 = 2464;

    t59 = (((x237!=x238)!=x239)%x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = 15;
	uint8_t x242 = 116U;
	int8_t x243 = INT8_MAX;
	int32_t t60 = -7800775;

    t60 = (((x241!=x242)!=x243)%x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = 7;
	static int64_t x246 = -403774984LL;
	static int32_t x247 = INT32_MAX;
	static int16_t x248 = 1799;

    t61 = (((x245!=x246)!=x247)%x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = 203;
	uint32_t x251 = 19355U;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = 282781;

    t62 = (((x249!=x250)!=x251)%x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x254 = -1;
	int32_t x256 = INT32_MIN;
	static int32_t t63 = -17677699;

    t63 = (((x253!=x254)!=x255)%x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x257 = -2;
	static uint16_t x258 = 7060U;
	uint64_t x259 = 39366983793064923LLU;
	int32_t x260 = INT32_MAX;

    t64 = (((x257!=x258)!=x259)%x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 7602;
	int64_t x262 = -1LL;
	volatile int64_t x263 = INT64_MIN;
	static uint8_t x264 = 3U;
	volatile int32_t t65 = -468083717;

    t65 = (((x261!=x262)!=x263)%x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 2U;
	static int32_t x266 = 1183;
	volatile uint16_t x267 = 372U;
	uint64_t x268 = 27942LLU;
	volatile uint64_t t66 = 3227LLU;

    t66 = (((x265!=x266)!=x267)%x268);

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = -13931;
	int16_t x270 = -2428;
	int16_t x271 = 40;
	static int64_t x272 = -58LL;
	static volatile int64_t t67 = -991376LL;

    t67 = (((x269!=x270)!=x271)%x272);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x273 = 1954367580U;
	uint16_t x274 = 7589U;
	int16_t x276 = INT16_MIN;
	static int32_t t68 = 1049439796;

    t68 = (((x273!=x274)!=x275)%x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = 103;
	static int32_t x279 = INT32_MIN;
	uint32_t x280 = 836036U;
	volatile uint32_t t69 = 99551U;

    t69 = (((x277!=x278)!=x279)%x280);

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MAX;
	static volatile int64_t x283 = -388LL;
	static volatile int32_t t70 = -851670;

    t70 = (((x281!=x282)!=x283)%x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	static int32_t x286 = 252;
	volatile int8_t x287 = INT8_MAX;
	uint8_t x288 = 7U;
	int32_t t71 = -4816143;

    t71 = (((x285!=x286)!=x287)%x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	uint64_t x290 = 114430064170LLU;
	uint32_t x292 = 72184990U;
	volatile uint32_t t72 = 2818097U;

    t72 = (((x289!=x290)!=x291)%x292);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 10850369;
	int64_t x294 = 2689568868560685LL;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = 782;

    t73 = (((x293!=x294)!=x295)%x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x298 = UINT8_MAX;
	volatile uint32_t x299 = 1073234453U;
	static int32_t t74 = -3;

    t74 = (((x297!=x298)!=x299)%x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x302 = 9;

    t75 = (((x301!=x302)!=x303)%x304);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = INT64_MAX;
	volatile int16_t x307 = INT16_MAX;
	static uint8_t x308 = 3U;
	volatile int32_t t76 = -381;

    t76 = (((x305!=x306)!=x307)%x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = INT16_MAX;
	int32_t x311 = 110;
	static uint16_t x312 = 233U;
	int32_t t77 = -127;

    t77 = (((x309!=x310)!=x311)%x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	uint8_t x315 = 3U;

    t78 = (((x313!=x314)!=x315)%x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x319 = 2574512;
	uint64_t x320 = UINT64_MAX;

    t79 = (((x317!=x318)!=x319)%x320);

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	int32_t x323 = 1;
	static int16_t x324 = -1;
	static int32_t t80 = 447397361;

    t80 = (((x321!=x322)!=x323)%x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MIN;
	int64_t x326 = 5LL;
	int16_t x327 = -1;
	uint64_t x328 = 2033903367LLU;
	volatile uint64_t t81 = 1901565137066444LLU;

    t81 = (((x325!=x326)!=x327)%x328);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = INT16_MAX;
	static volatile uint16_t x331 = 211U;
	int32_t t82 = -1;

    t82 = (((x329!=x330)!=x331)%x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 32927812975384LLU;
	int8_t x334 = -1;
	int32_t x336 = INT32_MAX;

    t83 = (((x333!=x334)!=x335)%x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = -1LL;
	volatile int64_t x338 = INT64_MAX;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = 168;

    t84 = (((x337!=x338)!=x339)%x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 28413LL;
	uint64_t x342 = 15LLU;
	int32_t x344 = -1;
	int32_t t85 = -7366959;

    t85 = (((x341!=x342)!=x343)%x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	uint16_t x348 = 23128U;
	volatile int32_t t86 = 15;

    t86 = (((x345!=x346)!=x347)%x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	uint32_t x350 = 57U;
	static int64_t x351 = INT64_MIN;
	uint8_t x352 = 97U;
	int32_t t87 = 827;

    t87 = (((x349!=x350)!=x351)%x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = 6U;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = 3;
	int32_t t88 = 0;

    t88 = (((x353!=x354)!=x355)%x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x358 = UINT32_MAX;
	uint32_t x359 = 35U;
	int16_t x360 = -139;

    t89 = (((x357!=x358)!=x359)%x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int64_t x362 = 168787097LL;
	int32_t x363 = -1;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t90 = 7650U;

    t90 = (((x361!=x362)!=x363)%x364);

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = INT64_MAX;
	volatile uint64_t x367 = 56710790856757468LLU;
	int8_t x368 = INT8_MAX;

    t91 = (((x365!=x366)!=x367)%x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 205796;
	uint64_t x371 = 2106667224844970643LLU;
	static int32_t x372 = INT32_MIN;

    t92 = (((x369!=x370)!=x371)%x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = 62347866;
	static uint32_t x374 = 70382U;
	static uint8_t x376 = 102U;
	volatile int32_t t93 = 630629;

    t93 = (((x373!=x374)!=x375)%x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x379 = INT64_MIN;
	uint8_t x380 = 25U;
	volatile int32_t t94 = 969;

    t94 = (((x377!=x378)!=x379)%x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = 1174530036LL;
	int32_t x383 = INT32_MAX;
	volatile int8_t x384 = INT8_MIN;
	int32_t t95 = -7684;

    t95 = (((x381!=x382)!=x383)%x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = 23291LLU;
	int32_t x386 = -1;
	int32_t x387 = -1;
	volatile int64_t x388 = INT64_MIN;
	int64_t t96 = -1065740169875001LL;

    t96 = (((x385!=x386)!=x387)%x388);

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 3U;
	int16_t x390 = 98;
	int16_t x391 = -1;

    t97 = (((x389!=x390)!=x391)%x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 248362LLU;
	int16_t x394 = -4060;
	int64_t x396 = INT64_MAX;
	static int64_t t98 = 8692080780891668LL;

    t98 = (((x393!=x394)!=x395)%x396);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MAX;
	uint64_t x399 = 307832650537279091LLU;

    t99 = (((x397!=x398)!=x399)%x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -48831426;
	int32_t x402 = -1;
	int16_t x403 = -202;
	uint64_t x404 = 8827834LLU;
	volatile uint64_t t100 = 11440298696590432LLU;

    t100 = (((x401!=x402)!=x403)%x404);

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -37894133060LL;
	volatile uint32_t x406 = UINT32_MAX;
	uint64_t x407 = 0LLU;
	int32_t x408 = INT32_MAX;
	int32_t t101 = 19436754;

    t101 = (((x405!=x406)!=x407)%x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x409 = INT64_MAX;
	static int16_t x410 = INT16_MIN;
	int64_t x412 = -1LL;

    t102 = (((x409!=x410)!=x411)%x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x413 = UINT32_MAX;
	int8_t x414 = INT8_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t103 = -1589541;

    t103 = (((x413!=x414)!=x415)%x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x417 = INT32_MIN;
	volatile uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MIN;
	volatile int8_t x420 = 1;
	volatile int32_t t104 = -28718223;

    t104 = (((x417!=x418)!=x419)%x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x422 = 1U;
	int64_t x423 = -1LL;
	int64_t x424 = INT64_MIN;
	volatile int64_t t105 = 744046LL;

    t105 = (((x421!=x422)!=x423)%x424);

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = UINT16_MAX;
	int8_t x427 = INT8_MIN;
	uint8_t x428 = UINT8_MAX;
	static volatile int32_t t106 = 2899;

    t106 = (((x425!=x426)!=x427)%x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	int64_t x430 = -1LL;
	static int16_t x431 = 0;
	volatile int32_t t107 = -2776;

    t107 = (((x429!=x430)!=x431)%x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MIN;
	volatile int32_t t108 = -80;

    t108 = (((x433!=x434)!=x435)%x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x437 = UINT32_MAX;
	int64_t x438 = -590145538LL;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MAX;
	volatile int32_t t109 = 4632;

    t109 = (((x437!=x438)!=x439)%x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = 14;
	static volatile int32_t x443 = INT32_MAX;
	volatile int64_t t110 = -4089781789345LL;

    t110 = (((x441!=x442)!=x443)%x444);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = 43LL;
	volatile int16_t x446 = -1;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;

    t111 = (((x445!=x446)!=x447)%x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	uint8_t x450 = 0U;
	int16_t x451 = 299;
	static volatile uint8_t x452 = UINT8_MAX;
	int32_t t112 = -12670;

    t112 = (((x449!=x450)!=x451)%x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x453 = 14U;
	int64_t x455 = 53350LL;
	int32_t x456 = -1;
	int32_t t113 = -183;

    t113 = (((x453!=x454)!=x455)%x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	int32_t x458 = 0;
	int8_t x459 = INT8_MIN;

    t114 = (((x457!=x458)!=x459)%x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = 1;
	volatile int32_t x462 = -1;
	int16_t x463 = INT16_MIN;
	volatile int8_t x464 = INT8_MIN;
	int32_t t115 = 591984083;

    t115 = (((x461!=x462)!=x463)%x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	volatile int8_t x467 = INT8_MIN;
	int32_t t116 = -1577673;

    t116 = (((x465!=x466)!=x467)%x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = INT64_MIN;
	int8_t x470 = INT8_MIN;
	int32_t t117 = -3031838;

    t117 = (((x469!=x470)!=x471)%x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	uint8_t x475 = 9U;
	int32_t x476 = INT32_MIN;
	int32_t t118 = 5659;

    t118 = (((x473!=x474)!=x475)%x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	uint64_t x478 = UINT64_MAX;
	uint16_t x480 = 6U;
	volatile int32_t t119 = -42;

    t119 = (((x477!=x478)!=x479)%x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x487 = 29;
	uint32_t x488 = UINT32_MAX;
	volatile uint32_t t120 = 206U;

    t120 = (((x485!=x486)!=x487)%x488);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x489 = -14226;
	static volatile int64_t x491 = -1LL;
	static int32_t x492 = 26725;
	int32_t t121 = 529;

    t121 = (((x489!=x490)!=x491)%x492);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x494 = INT64_MAX;
	uint8_t x496 = 1U;
	int32_t t122 = 30015;

    t122 = (((x493!=x494)!=x495)%x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x498 = 3577184U;
	uint8_t x499 = UINT8_MAX;
	uint64_t x500 = 4240525610445893699LLU;
	volatile uint64_t t123 = 337LLU;

    t123 = (((x497!=x498)!=x499)%x500);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x501 = INT16_MIN;
	static int64_t x502 = -106248163LL;
	int16_t x504 = 1;
	static int32_t t124 = -1;

    t124 = (((x501!=x502)!=x503)%x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x505 = -1LL;
	int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MAX;
	int16_t x508 = 15;

    t125 = (((x505!=x506)!=x507)%x508);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x509 = 65LLU;
	static int64_t x510 = -4272947294321LL;
	volatile int64_t t126 = 61664672LL;

    t126 = (((x509!=x510)!=x511)%x512);

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x513 = -1;
	static uint32_t x514 = 197U;
	uint8_t x515 = 22U;
	uint16_t x516 = UINT16_MAX;
	int32_t t127 = -7147;

    t127 = (((x513!=x514)!=x515)%x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x517 = INT32_MIN;
	uint64_t x518 = UINT64_MAX;
	int8_t x519 = INT8_MIN;
	int8_t x520 = 2;

    t128 = (((x517!=x518)!=x519)%x520);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x521 = 25U;
	int32_t x522 = -1;
	static int64_t x523 = -1LL;
	volatile int64_t x524 = -195899679LL;
	volatile int64_t t129 = 0LL;

    t129 = (((x521!=x522)!=x523)%x524);

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x527 = 1167359U;
	static uint32_t x528 = 25120U;
	volatile uint32_t t130 = 6867985U;

    t130 = (((x525!=x526)!=x527)%x528);

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x529 = -1;
	uint64_t x530 = 439905328224085LLU;
	uint64_t x531 = 1552896LLU;
	volatile uint32_t x532 = 982756U;

    t131 = (((x529!=x530)!=x531)%x532);

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x533 = INT8_MIN;
	int32_t x535 = -1;

    t132 = (((x533!=x534)!=x535)%x536);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x537 = 5U;
	static int64_t x538 = -1LL;
	uint32_t x539 = UINT32_MAX;
	volatile int8_t x540 = -1;
	static int32_t t133 = 705507469;

    t133 = (((x537!=x538)!=x539)%x540);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x542 = UINT32_MAX;
	uint16_t x543 = 1494U;
	int64_t x544 = INT64_MIN;
	int64_t t134 = 1LL;

    t134 = (((x541!=x542)!=x543)%x544);

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x546 = 456882415U;
	int8_t x547 = -1;
	uint64_t x548 = 4LLU;
	static uint64_t t135 = 83252LLU;

    t135 = (((x545!=x546)!=x547)%x548);

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x549 = -1;
	uint64_t x551 = 166LLU;
	int64_t x552 = INT64_MIN;
	volatile int64_t t136 = 1558531709828273187LL;

    t136 = (((x549!=x550)!=x551)%x552);

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x553 = 0;
	volatile int64_t x555 = INT64_MAX;
	static int16_t x556 = INT16_MAX;
	volatile int32_t t137 = 854867;

    t137 = (((x553!=x554)!=x555)%x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x557 = INT8_MIN;
	int16_t x558 = -3761;
	uint32_t x559 = 22U;
	int8_t x560 = INT8_MIN;
	volatile int32_t t138 = 15485958;

    t138 = (((x557!=x558)!=x559)%x560);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x561 = -3;
	volatile int64_t x562 = 26397768750LL;
	uint8_t x563 = UINT8_MAX;
	static uint64_t t139 = 2780637828728896760LLU;

    t139 = (((x561!=x562)!=x563)%x564);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x565 = UINT64_MAX;
	int8_t x567 = INT8_MIN;
	int8_t x568 = INT8_MIN;

    t140 = (((x565!=x566)!=x567)%x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x571 = INT16_MAX;
	int32_t x572 = -7546;

    t141 = (((x569!=x570)!=x571)%x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x574 = INT16_MIN;
	uint16_t x575 = UINT16_MAX;
	volatile uint32_t x576 = 1059803431U;
	volatile uint32_t t142 = 6U;

    t142 = (((x573!=x574)!=x575)%x576);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x577 = 0U;
	uint8_t x578 = 17U;
	static uint16_t x579 = 412U;
	int8_t x580 = 38;
	int32_t t143 = -348455229;

    t143 = (((x577!=x578)!=x579)%x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = INT32_MIN;
	static uint8_t x582 = UINT8_MAX;
	int8_t x583 = -6;
	int64_t x584 = INT64_MIN;
	volatile int64_t t144 = -4219514707LL;

    t144 = (((x581!=x582)!=x583)%x584);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x585 = -1;
	uint64_t x586 = 225007LLU;
	uint32_t x587 = UINT32_MAX;
	int64_t t145 = -99316556LL;

    t145 = (((x585!=x586)!=x587)%x588);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x590 = 0;
	static uint8_t x591 = 1U;
	static int32_t x592 = -27;
	int32_t t146 = 50;

    t146 = (((x589!=x590)!=x591)%x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x593 = -1;
	int8_t x594 = INT8_MIN;
	int8_t x595 = INT8_MIN;
	uint16_t x596 = 19U;

    t147 = (((x593!=x594)!=x595)%x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x597 = 0U;
	static int8_t x598 = INT8_MIN;
	uint8_t x599 = UINT8_MAX;
	int32_t t148 = -1587811;

    t148 = (((x597!=x598)!=x599)%x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x601 = INT64_MIN;
	int8_t x602 = -1;
	static uint32_t x603 = UINT32_MAX;
	int16_t x604 = INT16_MIN;
	int32_t t149 = -48846;

    t149 = (((x601!=x602)!=x603)%x604);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x605 = INT16_MAX;
	int16_t x606 = INT16_MIN;
	uint32_t x607 = 967399648U;
	volatile uint32_t x608 = 2022307U;
	static volatile uint32_t t150 = 22636U;

    t150 = (((x605!=x606)!=x607)%x608);

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x609 = 1U;
	int32_t x612 = 839;
	static volatile int32_t t151 = 26;

    t151 = (((x609!=x610)!=x611)%x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = INT64_MAX;

    t152 = (((x613!=x614)!=x615)%x616);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x620 = 1;

    t153 = (((x617!=x618)!=x619)%x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x621 = UINT32_MAX;
	static volatile uint16_t x622 = 426U;
	int16_t x623 = -1;
	int64_t x624 = -1LL;
	int64_t t154 = -1283292LL;

    t154 = (((x621!=x622)!=x623)%x624);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x625 = -1031741671;
	static int32_t x626 = -1;
	static volatile int8_t x628 = -1;
	volatile int32_t t155 = -242;

    t155 = (((x625!=x626)!=x627)%x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x629 = 15702U;
	static int32_t x630 = -1;
	uint8_t x631 = UINT8_MAX;
	volatile int16_t x632 = INT16_MIN;

    t156 = (((x629!=x630)!=x631)%x632);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x633 = 5135482U;
	uint16_t x634 = 1U;
	uint8_t x635 = UINT8_MAX;
	uint32_t t157 = 31420U;

    t157 = (((x633!=x634)!=x635)%x636);

    if (t157 != 1U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x637 = INT8_MAX;
	static uint16_t x638 = 21390U;
	int64_t x639 = -8081856LL;
	int64_t x640 = -7891162261973LL;
	int64_t t158 = 1861LL;

    t158 = (((x637!=x638)!=x639)%x640);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x641 = UINT64_MAX;
	int32_t x642 = -1;
	int32_t x644 = -4571;

    t159 = (((x641!=x642)!=x643)%x644);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x645 = -105;
	uint8_t x646 = 0U;
	int32_t x647 = -63363;
	volatile int64_t x648 = INT64_MAX;
	static int64_t t160 = -90994046865LL;

    t160 = (((x645!=x646)!=x647)%x648);

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x649 = -1;
	int32_t x652 = -1;
	int32_t t161 = 5678;

    t161 = (((x649!=x650)!=x651)%x652);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x653 = -1;
	uint64_t x654 = 788398040587818LLU;
	int32_t x656 = 24664;
	static volatile int32_t t162 = 3050;

    t162 = (((x653!=x654)!=x655)%x656);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x661 = 12173U;
	volatile uint8_t x663 = 3U;
	uint64_t x664 = UINT64_MAX;
	volatile uint64_t t163 = 56791895LLU;

    t163 = (((x661!=x662)!=x663)%x664);

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x666 = 8U;
	volatile int8_t x667 = INT8_MIN;
	uint64_t x668 = 9001LLU;
	uint64_t t164 = 3728533307941LLU;

    t164 = (((x665!=x666)!=x667)%x668);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x669 = 3203898;
	static volatile int64_t x670 = INT64_MIN;
	uint8_t x671 = UINT8_MAX;
	volatile uint16_t x672 = UINT16_MAX;

    t165 = (((x669!=x670)!=x671)%x672);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	static int64_t t166 = 2846928922337LL;

    t166 = (((x673!=x674)!=x675)%x676);

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x677 = -1;
	static int16_t x678 = 146;
	int64_t x679 = INT64_MIN;
	int16_t x680 = INT16_MIN;

    t167 = (((x677!=x678)!=x679)%x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x681 = INT16_MAX;
	volatile uint16_t x683 = UINT16_MAX;

    t168 = (((x681!=x682)!=x683)%x684);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x685 = INT64_MAX;
	int8_t x686 = INT8_MIN;
	int16_t x687 = INT16_MIN;
	int32_t x688 = INT32_MIN;
	int32_t t169 = -60810271;

    t169 = (((x685!=x686)!=x687)%x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = INT64_MIN;
	volatile int16_t x690 = INT16_MIN;
	uint8_t x691 = 40U;
	volatile int32_t t170 = 2500831;

    t170 = (((x689!=x690)!=x691)%x692);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x693 = INT16_MAX;
	static int16_t x694 = INT16_MIN;
	int32_t x695 = INT32_MIN;
	int16_t x696 = 1261;
	int32_t t171 = -1;

    t171 = (((x693!=x694)!=x695)%x696);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x697 = UINT16_MAX;
	int64_t x698 = INT64_MAX;
	uint16_t x699 = UINT16_MAX;
	int32_t x700 = INT32_MIN;
	volatile int32_t t172 = 21;

    t172 = (((x697!=x698)!=x699)%x700);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x703 = INT64_MIN;
	uint32_t x704 = UINT32_MAX;

    t173 = (((x701!=x702)!=x703)%x704);

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x705 = 942U;
	int8_t x706 = INT8_MIN;
	volatile int16_t x707 = INT16_MIN;
	int32_t t174 = 1;

    t174 = (((x705!=x706)!=x707)%x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x710 = 9197930640LL;
	static int64_t x711 = -1LL;
	int16_t x712 = INT16_MIN;
	int32_t t175 = 1093418;

    t175 = (((x709!=x710)!=x711)%x712);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x713 = UINT16_MAX;
	uint64_t x714 = 738669224256932483LLU;
	volatile int16_t x715 = INT16_MAX;
	uint8_t x716 = 2U;
	int32_t t176 = 22488407;

    t176 = (((x713!=x714)!=x715)%x716);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x717 = INT8_MIN;
	static int8_t x718 = INT8_MIN;
	int8_t x719 = -1;
	static int8_t x720 = INT8_MIN;
	volatile int32_t t177 = 114544428;

    t177 = (((x717!=x718)!=x719)%x720);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x721 = INT32_MAX;
	uint32_t x724 = 1U;

    t178 = (((x721!=x722)!=x723)%x724);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x725 = 692917LLU;
	int16_t x727 = 0;
	volatile int32_t x728 = 981036049;
	volatile int32_t t179 = -25310231;

    t179 = (((x725!=x726)!=x727)%x728);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x730 = 35U;
	static int8_t x731 = -1;
	int32_t t180 = -4;

    t180 = (((x729!=x730)!=x731)%x732);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x733 = -85;
	volatile int64_t x734 = -1LL;
	int64_t t181 = -13479350LL;

    t181 = (((x733!=x734)!=x735)%x736);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x737 = INT64_MIN;
	int16_t x739 = INT16_MAX;
	int16_t x740 = INT16_MIN;

    t182 = (((x737!=x738)!=x739)%x740);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x741 = UINT16_MAX;
	static int32_t x742 = INT32_MIN;
	uint32_t x744 = 20U;

    t183 = (((x741!=x742)!=x743)%x744);

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x745 = -1;
	uint8_t x746 = UINT8_MAX;
	volatile int64_t x747 = INT64_MIN;
	volatile int32_t x748 = INT32_MIN;
	int32_t t184 = 157503;

    t184 = (((x745!=x746)!=x747)%x748);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x750 = -1LL;
	uint64_t x751 = UINT64_MAX;
	int32_t t185 = 0;

    t185 = (((x749!=x750)!=x751)%x752);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x753 = INT8_MIN;
	static int16_t x754 = INT16_MIN;
	int32_t x755 = INT32_MIN;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t186 = -85708037;

    t186 = (((x753!=x754)!=x755)%x756);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x757 = -789838230173821753LL;
	static volatile int8_t x758 = INT8_MIN;
	uint32_t x759 = 360U;
	static uint32_t x760 = 62U;
	static volatile uint32_t t187 = 50776170U;

    t187 = (((x757!=x758)!=x759)%x760);

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x762 = 56U;
	static int16_t x763 = 14;
	int64_t x764 = INT64_MIN;

    t188 = (((x761!=x762)!=x763)%x764);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x765 = INT32_MIN;
	volatile int8_t x767 = INT8_MAX;
	volatile int32_t t189 = 80997;

    t189 = (((x765!=x766)!=x767)%x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x770 = INT32_MIN;
	uint32_t x771 = UINT32_MAX;
	int64_t x772 = 3060371540303118856LL;
	int64_t t190 = -1006LL;

    t190 = (((x769!=x770)!=x771)%x772);

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x774 = 393509399541372579LLU;
	static int32_t x775 = 3;
	int32_t x776 = -3;
	int32_t t191 = 82;

    t191 = (((x773!=x774)!=x775)%x776);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x777 = 66571527U;
	static volatile uint16_t x779 = 21804U;
	static int64_t x780 = -1LL;
	volatile int64_t t192 = -339160LL;

    t192 = (((x777!=x778)!=x779)%x780);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x781 = UINT16_MAX;
	uint16_t x782 = UINT16_MAX;
	static int8_t x783 = -1;
	volatile uint16_t x784 = 7U;
	int32_t t193 = 357;

    t193 = (((x781!=x782)!=x783)%x784);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x785 = 203363LL;
	uint64_t x786 = 169450608447217LLU;
	int32_t t194 = -112137;

    t194 = (((x785!=x786)!=x787)%x788);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x789 = -1;
	int32_t x790 = INT32_MIN;
	uint32_t x791 = 183102U;
	uint16_t x792 = UINT16_MAX;
	int32_t t195 = 2566;

    t195 = (((x789!=x790)!=x791)%x792);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x793 = UINT8_MAX;
	uint8_t x794 = 26U;
	uint32_t x795 = UINT32_MAX;
	uint64_t x796 = 1598386989174LLU;

    t196 = (((x793!=x794)!=x795)%x796);

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x797 = 2U;
	int32_t x798 = INT32_MIN;
	int32_t x800 = INT32_MIN;
	volatile int32_t t197 = -27;

    t197 = (((x797!=x798)!=x799)%x800);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x801 = UINT16_MAX;
	int16_t x802 = INT16_MIN;
	volatile int8_t x803 = -1;
	volatile uint16_t x804 = 1U;
	static volatile int32_t t198 = 2;

    t198 = (((x801!=x802)!=x803)%x804);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x805 = -113;
	volatile int64_t x806 = INT64_MAX;
	uint8_t x807 = 0U;
	int64_t x808 = INT64_MIN;
	int64_t t199 = 3011227LL;

    t199 = (((x805!=x806)!=x807)%x808);

    if (t199 != 1LL) { NG(); } else { ; }
	
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

