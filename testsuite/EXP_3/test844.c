
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

int64_t x5 = -1LL;
static volatile int8_t x18 = INT8_MIN;
uint8_t x26 = 56U;
static int8_t x30 = INT8_MIN;
volatile uint64_t x37 = UINT64_MAX;
uint64_t t8 = 509392LLU;
int8_t x41 = 0;
int8_t x60 = INT8_MIN;
volatile uint8_t x78 = 55U;
uint32_t x82 = 446629034U;
int8_t x83 = INT8_MIN;
int32_t x84 = INT32_MIN;
uint64_t x85 = UINT64_MAX;
int16_t x101 = -1;
int64_t x108 = INT64_MIN;
static int16_t x111 = -1;
static uint64_t x113 = 647LLU;
int8_t x116 = -10;
int16_t x130 = INT16_MIN;
volatile int16_t x132 = INT16_MAX;
static int64_t x134 = INT64_MIN;
int64_t x142 = INT64_MIN;
int16_t x147 = -73;
int32_t x153 = -575302;
uint32_t t28 = 6982731U;
int32_t x167 = -1;
int64_t x175 = INT64_MIN;
int8_t x178 = -1;
volatile int16_t x179 = 12;
volatile int32_t x180 = INT32_MAX;
int32_t x186 = INT32_MAX;
int64_t x187 = -1LL;
volatile uint64_t t33 = 1876LLU;
volatile int16_t x192 = INT16_MAX;
int64_t x198 = INT64_MIN;
volatile int32_t x200 = 9967;
static volatile uint32_t t38 = 14552U;
uint32_t x210 = UINT32_MAX;
volatile int32_t x213 = INT32_MIN;
int8_t x214 = -3;
int16_t x219 = -1;
uint8_t x228 = UINT8_MAX;
static int64_t x236 = INT64_MAX;
int32_t x243 = -40563;
volatile uint64_t t48 = 7715241819298050937LLU;
static uint32_t x250 = 5119728U;
int8_t x262 = INT8_MIN;
volatile uint32_t x267 = 1876097247U;
uint64_t x268 = 34LLU;
volatile int16_t x281 = 1;
uint16_t x283 = UINT16_MAX;
int32_t x284 = INT32_MAX;
static int8_t x292 = -6;
static int32_t x293 = INT32_MIN;
int32_t t59 = 237745316;
uint8_t x303 = 4U;
int64_t t60 = 1215570331LL;
static int8_t x307 = INT8_MAX;
static volatile uint16_t x313 = 431U;
uint16_t x318 = UINT16_MAX;
int64_t t63 = -74163LL;
uint64_t t64 = 13LLU;
int8_t x325 = INT8_MIN;
uint8_t x326 = UINT8_MAX;
volatile int64_t t65 = 1LL;
int32_t x334 = INT32_MIN;
uint16_t x338 = 17969U;
int16_t x339 = INT16_MIN;
volatile uint8_t x341 = 1U;
int32_t x345 = INT32_MIN;
static volatile int32_t t70 = 35;
volatile int16_t x351 = -1;
volatile uint8_t x360 = 15U;
uint64_t t73 = 0LLU;
int16_t x365 = -1811;
uint64_t x369 = 24LLU;
volatile uint8_t x370 = UINT8_MAX;
int8_t x372 = -26;
int8_t x375 = -1;
uint8_t x378 = 105U;
volatile uint32_t x379 = 838491679U;
int64_t x381 = INT64_MIN;
uint64_t x385 = UINT64_MAX;
static uint64_t x387 = 103673LLU;
static int8_t x396 = -50;
uint64_t x399 = 6448LLU;
volatile uint64_t t82 = 453108961682240992LLU;
uint64_t x431 = 86045LLU;
int64_t x439 = -1238LL;
volatile int32_t x443 = INT32_MIN;
static int8_t x457 = INT8_MAX;
int32_t x461 = -2053633;
uint64_t x463 = 13252LLU;
static uint64_t x464 = 23642LLU;
static volatile uint64_t t92 = 260648874LLU;
uint64_t x468 = UINT64_MAX;
volatile int16_t x487 = INT16_MAX;
int32_t x490 = INT32_MIN;
uint16_t x493 = UINT16_MAX;
int32_t x495 = INT32_MIN;
uint32_t x496 = 3806U;
volatile uint64_t t99 = 32LLU;
int16_t x508 = INT16_MIN;
int16_t x512 = INT16_MIN;
static volatile uint32_t t102 = 68566U;
int16_t x518 = -1;
static int64_t x524 = INT64_MIN;
volatile uint64_t x526 = 24LLU;
int32_t x531 = -1;
uint64_t t107 = 186396679109106221LLU;
static volatile int8_t x537 = INT8_MIN;
static int16_t x539 = INT16_MIN;
int64_t x545 = -1LL;
int64_t x546 = -1LL;
uint16_t x548 = 65U;
int64_t x550 = INT64_MAX;
uint16_t x554 = UINT16_MAX;
static volatile int32_t x555 = INT32_MIN;
static volatile uint64_t t113 = 13565888185311758LLU;
int16_t x573 = 5;
static uint16_t x574 = UINT16_MAX;
int8_t x575 = -5;
volatile uint32_t t116 = 1U;
int8_t x577 = INT8_MIN;
uint32_t x584 = 1115U;
volatile uint32_t t118 = 10159U;
int8_t x585 = -1;
volatile int8_t x586 = INT8_MAX;
uint16_t x595 = 4U;
int16_t x596 = INT16_MAX;
volatile int32_t t120 = 187937;
uint32_t x605 = 0U;
static volatile uint32_t t121 = 24U;
uint32_t x631 = UINT32_MAX;
int16_t x639 = INT16_MIN;
volatile int64_t t125 = 17763180849463618LL;
int16_t x641 = INT16_MIN;
uint8_t x642 = 7U;
int64_t x643 = INT64_MIN;
int64_t t127 = 30060347569839LL;
uint8_t x650 = 3U;
volatile int8_t x656 = INT8_MAX;
uint32_t t129 = 2075462U;
volatile uint64_t x660 = UINT64_MAX;
uint64_t x681 = 59LLU;
int16_t x690 = 1;
static int16_t x691 = INT16_MIN;
int64_t x700 = INT64_MIN;
int32_t x703 = INT32_MIN;
int16_t x704 = INT16_MAX;
static uint64_t t138 = 1936850719171259874LLU;
uint64_t x713 = 929705191332460LLU;
volatile int8_t x716 = INT8_MIN;
uint64_t t139 = 15736945LLU;
int32_t x718 = -1;
uint64_t x719 = 129117523LLU;
int64_t x722 = INT64_MAX;
volatile uint16_t x723 = 27216U;
volatile int32_t x724 = 51300645;
static int16_t x727 = INT16_MIN;
int64_t x730 = -1LL;
volatile int16_t x731 = INT16_MIN;
static int64_t x745 = INT64_MAX;
volatile uint16_t x760 = 5412U;
int64_t x761 = -211569LL;
int64_t x763 = -1LL;
volatile int64_t t148 = 168015LL;
int16_t x767 = 122;
int64_t x785 = 2471765249566LL;
int64_t x788 = INT64_MIN;
uint64_t x825 = 267304562LLU;
static int8_t x831 = INT8_MIN;
int64_t x833 = INT64_MIN;
int8_t x836 = INT8_MIN;
uint8_t x838 = 6U;
static int16_t x840 = INT16_MIN;
uint32_t x854 = 36975492U;
int8_t x862 = INT8_MAX;
int64_t t162 = -8089919LL;
int16_t x875 = 2215;
int64_t x881 = INT64_MIN;
volatile int16_t x883 = 3912;
static int16_t x886 = 239;
uint16_t x893 = UINT16_MAX;
volatile uint8_t x894 = 70U;
uint8_t x909 = 1U;
int8_t x911 = INT8_MIN;
uint64_t x912 = 32484085092575260LLU;
uint32_t x928 = UINT32_MAX;
volatile int64_t x932 = 25142510LL;
volatile int64_t t171 = -1LL;
int8_t x934 = -6;
uint32_t x936 = 8519999U;
uint64_t x944 = UINT64_MAX;
int8_t x946 = -1;
uint8_t x951 = 2U;
static uint64_t x958 = 112263233120513595LLU;
int16_t x964 = -2;
volatile uint16_t x981 = 29U;
static int8_t x984 = INT8_MIN;
volatile int64_t t180 = -911940300169LL;
int16_t x987 = 24;
static int32_t x988 = INT32_MIN;
static volatile int8_t x990 = INT8_MIN;
uint8_t x1010 = 3U;
int32_t x1020 = INT32_MIN;
uint8_t x1033 = 5U;
uint32_t x1037 = 0U;
static volatile uint64_t t189 = 7LLU;
int32_t x1045 = 2512;
uint64_t x1054 = 593229488913691877LLU;
uint64_t t193 = 511522634664598LLU;
static uint32_t x1088 = 10080153U;
int16_t x1090 = INT16_MIN;
int8_t x1091 = INT8_MAX;
uint32_t t198 = 341045642U;
int8_t x1097 = 51;
int64_t x1098 = INT64_MAX;
uint16_t x1100 = 11U;


void f0(void) {
    	static uint32_t x1 = 714392551U;
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = 76U;
	int64_t x4 = -16443204579949425LL;
	int64_t t0 = 59866213616347004LL;

    t0 = ((x1%x2)/(x3%x4));

    if (t0 != 9399901LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 2672271U;
	int32_t x7 = INT32_MAX;
	static uint32_t x8 = 326674U;
	static volatile int64_t t1 = 38LL;

    t1 = ((x5%x6)/(x7%x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	volatile int32_t x10 = -1808;
	static int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	volatile int64_t t2 = -1LL;

    t2 = ((x9%x10)/(x11%x12));

    if (t2 != -113LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x17 = INT64_MIN;
	volatile int32_t x19 = INT32_MAX;
	int32_t x20 = INT32_MIN;
	int64_t t3 = 617647978205688LL;

    t3 = ((x17%x18)/(x19%x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = UINT32_MAX;
	uint32_t x23 = 3U;
	static int16_t x24 = -1;
	uint32_t t4 = 1947364632U;

    t4 = ((x21%x22)/(x23%x24));

    if (t4 != 21845U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x25 = INT32_MAX;
	int8_t x27 = -1;
	volatile int8_t x28 = -12;
	static int32_t t5 = -247;

    t5 = ((x25%x26)/(x27%x28));

    if (t5 != -15) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t6 = 113;

    t6 = ((x29%x30)/(x31%x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MAX;
	volatile uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 250862128327LLU;

    t7 = ((x33%x34)/(x35%x36));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x38 = INT32_MAX;
	int64_t x39 = -1646638LL;
	int16_t x40 = -364;

    t8 = ((x37%x38)/(x39%x40));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = -130;
	volatile int8_t x43 = INT8_MIN;
	static volatile int32_t x44 = 435555;
	static volatile int32_t t9 = -1;

    t9 = ((x41%x42)/(x43%x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = 21LLU;
	int16_t x50 = INT16_MIN;
	volatile int8_t x51 = -1;
	uint32_t x52 = 7U;
	volatile uint64_t t10 = 93217488219441LLU;

    t10 = ((x49%x50)/(x51%x52));

    if (t10 != 7LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = INT8_MIN;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = -1;
	static volatile uint32_t t11 = 436841668U;

    t11 = ((x57%x58)/(x59%x60));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x69 = 3199344445883343LLU;
	int64_t x70 = INT64_MAX;
	uint32_t x71 = 26024882U;
	int32_t x72 = -1;
	static uint64_t t12 = 35437502455500LLU;

    t12 = ((x69%x70)/(x71%x72));

    if (t12 != 122934061LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x73 = INT32_MAX;
	volatile uint32_t x74 = 937646820U;
	uint8_t x75 = UINT8_MAX;
	static volatile uint32_t x76 = 243103U;
	uint32_t t13 = 14619777U;

    t13 = ((x73%x74)/(x75%x76));

    if (t13 != 1067411U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x77 = 5;
	uint32_t x79 = 404U;
	volatile int64_t x80 = INT64_MIN;
	static volatile int64_t t14 = 9239LL;

    t14 = ((x77%x78)/(x79%x80));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x81 = INT8_MAX;
	volatile uint32_t t15 = 2U;

    t15 = ((x81%x82)/(x83%x84));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x86 = UINT16_MAX;
	uint8_t x87 = 56U;
	uint32_t x88 = UINT32_MAX;
	volatile uint64_t t16 = 79507715693594877LLU;

    t16 = ((x85%x86)/(x87%x88));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x89 = 256836727711994211LL;
	uint16_t x90 = 162U;
	volatile uint32_t x91 = UINT32_MAX;
	static uint32_t x92 = 8144232U;
	volatile int64_t t17 = 1LL;

    t17 = ((x89%x90)/(x91%x92));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x102 = UINT32_MAX;
	static uint64_t x103 = 814681811227LLU;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t18 = 29095528490341516LLU;

    t18 = ((x101%x102)/(x103%x104));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x105 = 1U;
	int8_t x106 = -1;
	int32_t x107 = -1;
	volatile int64_t t19 = -15490153125LL;

    t19 = ((x105%x106)/(x107%x108));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x109 = -1LL;
	volatile uint32_t x110 = UINT32_MAX;
	static uint16_t x112 = UINT16_MAX;
	static int64_t t20 = 3878LL;

    t20 = ((x109%x110)/(x111%x112));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x114 = 88LLU;
	volatile int64_t x115 = INT64_MAX;
	volatile uint64_t t21 = 462LLU;

    t21 = ((x113%x114)/(x115%x116));

    if (t21 != 4LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x117 = 47735;
	int32_t x118 = 248526;
	volatile uint64_t x119 = 1798825LLU;
	static int16_t x120 = INT16_MIN;
	volatile uint64_t t22 = 2780887LLU;

    t22 = ((x117%x118)/(x119%x120));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x129 = -1;
	uint32_t x131 = 23902U;
	uint32_t t23 = 33614U;

    t23 = ((x129%x130)/(x131%x132));

    if (t23 != 179690U) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x133 = UINT32_MAX;
	volatile int64_t x135 = -284381LL;
	int32_t x136 = -7;
	static int64_t t24 = 978977411LL;

    t24 = ((x133%x134)/(x135%x136));

    if (t24 != -715827882LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x141 = -1;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = 15U;
	int64_t t25 = -195373176766395728LL;

    t25 = ((x141%x142)/(x143%x144));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 32518U;
	int8_t x148 = INT8_MIN;
	int32_t t26 = 1;

    t26 = ((x145%x146)/(x147%x148));

    if (t26 != -6) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x149 = 91100630129090LLU;
	int8_t x150 = -1;
	int64_t x151 = 364488LL;
	uint8_t x152 = 33U;
	uint64_t t27 = 39707002LLU;

    t27 = ((x149%x150)/(x151%x152));

    if (t27 != 30366876709696LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x154 = INT32_MIN;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 17644269U;

    t28 = ((x153%x154)/(x155%x156));

    if (t28 != 579U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x165 = 2567717;
	static volatile uint64_t x166 = UINT64_MAX;
	volatile int8_t x168 = INT8_MAX;
	uint64_t t29 = 138003802625395LLU;

    t29 = ((x165%x166)/(x167%x168));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x173 = 1627945LLU;
	static int64_t x174 = INT64_MAX;
	volatile int64_t x176 = 23012LL;
	static volatile uint64_t t30 = 10274648745506512LLU;

    t30 = ((x173%x174)/(x175%x176));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x177 = INT16_MIN;
	int32_t t31 = 1;

    t31 = ((x177%x178)/(x179%x180));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x181 = 126U;
	int16_t x182 = INT16_MAX;
	static uint8_t x183 = 18U;
	uint8_t x184 = 30U;
	static uint32_t t32 = 254U;

    t32 = ((x181%x182)/(x183%x184));

    if (t32 != 7U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x185 = INT8_MAX;
	uint64_t x188 = 54LLU;

    t33 = ((x185%x186)/(x187%x188));

    if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x189 = 1;
	int16_t x190 = 31;
	volatile uint8_t x191 = 15U;
	int32_t t34 = 29147;

    t34 = ((x189%x190)/(x191%x192));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x193 = -4217;
	static uint64_t x194 = 38LLU;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = UINT16_MAX;
	uint64_t t35 = 22077092LLU;

    t35 = ((x193%x194)/(x195%x196));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x197 = UINT64_MAX;
	static int8_t x199 = INT8_MAX;
	uint64_t t36 = 88621524278893LLU;

    t36 = ((x197%x198)/(x199%x200));

    if (t36 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MAX;
	static int64_t x203 = INT64_MIN;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t37 = 6179530LL;

    t37 = ((x201%x202)/(x203%x204));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x205 = 0U;
	static int32_t x206 = INT32_MAX;
	int32_t x207 = INT32_MIN;
	static uint16_t x208 = 70U;

    t38 = ((x205%x206)/(x207%x208));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x209 = 0LLU;
	volatile uint64_t x211 = 614950074591LLU;
	volatile int64_t x212 = 18LL;
	uint64_t t39 = 103363LLU;

    t39 = ((x209%x210)/(x211%x212));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x215 = 542652973020512LL;
	int64_t x216 = INT64_MIN;
	static int64_t t40 = -2730761004210431509LL;

    t40 = ((x213%x214)/(x215%x216));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x217 = 12U;
	volatile int32_t x218 = INT32_MAX;
	uint16_t x220 = 2U;
	volatile int32_t t41 = -33;

    t41 = ((x217%x218)/(x219%x220));

    if (t41 != -12) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x221 = 166362LL;
	int32_t x222 = -1;
	uint8_t x223 = 10U;
	int64_t x224 = INT64_MAX;
	int64_t t42 = -384444LL;

    t42 = ((x221%x222)/(x223%x224));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x225 = 64411;
	uint64_t x226 = 406670501965923252LLU;
	volatile int32_t x227 = INT32_MIN;
	uint64_t t43 = 20667900199LLU;

    t43 = ((x225%x226)/(x227%x228));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x229 = 2150;
	volatile int8_t x230 = -3;
	int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MAX;
	static int64_t t44 = 95814LL;

    t44 = ((x229%x230)/(x231%x232));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 7730U;
	volatile int64_t t45 = 1245642LL;

    t45 = ((x233%x234)/(x235%x236));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x237 = 278627341702567059LLU;
	int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	volatile uint16_t x240 = UINT16_MAX;
	volatile uint64_t t46 = 161482LLU;

    t46 = ((x237%x238)/(x239%x240));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x241 = UINT32_MAX;
	int32_t x242 = -274787961;
	uint8_t x244 = 12U;
	volatile uint32_t t47 = 203240477U;

    t47 = ((x241%x242)/(x243%x244));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x245 = INT16_MIN;
	int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 382474735819698LLU;

    t48 = ((x245%x246)/(x247%x248));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x249 = INT16_MIN;
	static volatile int64_t x251 = -1LL;
	int32_t x252 = INT32_MAX;
	static int64_t t49 = -378616696223078LL;

    t49 = ((x249%x250)/(x251%x252));

    if (t49 != -4602464LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x253 = INT64_MAX;
	volatile int16_t x254 = -15;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = 18U;
	int64_t t50 = -26529LL;

    t50 = ((x253%x254)/(x255%x256));

    if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x257 = INT8_MAX;
	static uint64_t x258 = 12040136091LLU;
	static int64_t x259 = -1LL;
	volatile uint16_t x260 = 2047U;
	uint64_t t51 = 22389516651LLU;

    t51 = ((x257%x258)/(x259%x260));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x261 = -1;
	static uint32_t x263 = 120927U;
	volatile int16_t x264 = -1;
	static uint32_t t52 = 1579U;

    t52 = ((x261%x262)/(x263%x264));

    if (t52 != 35517U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x265 = -17614474LL;
	static int64_t x266 = INT64_MIN;
	uint64_t t53 = 19783983762LLU;

    t53 = ((x265%x266)/(x267%x268));

    if (t53 != 683212743470071746LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x273 = 14815652647180LLU;
	uint8_t x274 = 34U;
	int8_t x275 = INT8_MAX;
	int64_t x276 = 14990986LL;
	volatile uint64_t t54 = 28LLU;

    t54 = ((x273%x274)/(x275%x276));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x277 = -1;
	static int32_t x278 = INT32_MIN;
	int64_t x279 = -486557636LL;
	static volatile int32_t x280 = -443890;
	volatile int64_t t55 = 3LL;

    t55 = ((x277%x278)/(x279%x280));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x282 = INT64_MAX;
	volatile int64_t t56 = 25616554277929920LL;

    t56 = ((x281%x282)/(x283%x284));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x289 = INT32_MAX;
	uint16_t x290 = 232U;
	int64_t x291 = INT64_MIN;
	int64_t t57 = -3298507461186LL;

    t57 = ((x289%x290)/(x291%x292));

    if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x294 = UINT32_MAX;
	uint32_t x295 = 67376756U;
	uint64_t x296 = 134885627LLU;
	uint64_t t58 = 540004932008850LLU;

    t58 = ((x293%x294)/(x295%x296));

    if (t58 != 31LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MAX;
	static volatile uint16_t x299 = 346U;
	uint16_t x300 = 523U;

    t59 = ((x297%x298)/(x299%x300));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x301 = 97U;
	int64_t x302 = INT64_MAX;
	int16_t x304 = 3;

    t60 = ((x301%x302)/(x303%x304));

    if (t60 != 97LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x305 = INT64_MIN;
	static int64_t x306 = INT64_MIN;
	volatile int16_t x308 = INT16_MIN;
	int64_t t61 = 35870239LL;

    t61 = ((x305%x306)/(x307%x308));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x314 = 33;
	static uint8_t x315 = UINT8_MAX;
	volatile uint16_t x316 = 4U;
	int32_t t62 = -16139;

    t62 = ((x313%x314)/(x315%x316));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x317 = INT16_MAX;
	int64_t x319 = -14429557847606LL;
	int16_t x320 = INT16_MIN;

    t63 = ((x317%x318)/(x319%x320));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x321 = 1;
	int32_t x322 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	int8_t x324 = INT8_MAX;

    t64 = ((x321%x322)/(x323%x324));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x327 = INT64_MAX;
	static int16_t x328 = INT16_MAX;

    t65 = ((x325%x326)/(x327%x328));

    if (t65 != -18LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x329 = UINT64_MAX;
	static int16_t x330 = -1;
	int16_t x331 = 52;
	static volatile int32_t x332 = -37214551;
	volatile uint64_t t66 = 4048532337351LLU;

    t66 = ((x329%x330)/(x331%x332));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x333 = -1;
	int16_t x335 = INT16_MAX;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t67 = -9224776;

    t67 = ((x333%x334)/(x335%x336));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x337 = INT32_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t68 = 15454;

    t68 = ((x337%x338)/(x339%x340));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x342 = UINT8_MAX;
	volatile int16_t x343 = 458;
	uint8_t x344 = UINT8_MAX;
	static int32_t t69 = -31;

    t69 = ((x341%x342)/(x343%x344));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	static int16_t x348 = INT16_MIN;

    t70 = ((x345%x346)/(x347%x348));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x349 = 3U;
	volatile int16_t x350 = 111;
	static int32_t x352 = INT32_MIN;
	static int32_t t71 = 1996;

    t71 = ((x349%x350)/(x351%x352));

    if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x357 = 2U;
	int64_t x358 = -1LL;
	uint32_t x359 = 1U;
	int64_t t72 = 880180990745832LL;

    t72 = ((x357%x358)/(x359%x360));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x361 = 7;
	uint64_t x362 = 2359469947LLU;
	int16_t x363 = -1;
	int8_t x364 = INT8_MIN;

    t73 = ((x361%x362)/(x363%x364));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x366 = 441148654U;
	int16_t x367 = -1;
	int16_t x368 = INT16_MIN;
	uint32_t t74 = 1569230U;

    t74 = ((x365%x366)/(x367%x368));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x371 = 898U;
	volatile uint64_t t75 = 476396361LLU;

    t75 = ((x369%x370)/(x371%x372));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x373 = 6129657;
	int16_t x374 = INT16_MIN;
	volatile int32_t x376 = -374897;
	volatile int32_t t76 = -67247;

    t76 = ((x373%x374)/(x375%x376));

    if (t76 != -2041) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x377 = 24;
	int32_t x380 = 156899308;
	volatile uint32_t t77 = 1667037866U;

    t77 = ((x377%x378)/(x379%x380));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x382 = -1;
	static volatile int32_t x383 = 92458;
	int32_t x384 = INT32_MIN;
	static volatile int64_t t78 = -514898LL;

    t78 = ((x381%x382)/(x383%x384));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x386 = INT8_MIN;
	uint64_t x388 = 2802089796LLU;
	static uint64_t t79 = 273LLU;

    t79 = ((x385%x386)/(x387%x388));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x389 = INT16_MAX;
	uint16_t x390 = 27U;
	uint32_t x391 = 92055U;
	uint8_t x392 = 110U;
	volatile uint32_t t80 = 51778399U;

    t80 = ((x389%x390)/(x391%x392));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x393 = 3U;
	int16_t x394 = INT16_MAX;
	volatile int32_t x395 = 2;
	static volatile int32_t t81 = -90305003;

    t81 = ((x393%x394)/(x395%x396));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	int32_t x400 = -451796;

    t82 = ((x397%x398)/(x399%x400));

    if (t82 != 5LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile uint32_t x402 = UINT32_MAX;
	int16_t x403 = -1;
	int32_t x404 = INT32_MIN;
	uint32_t t83 = 56093U;

    t83 = ((x401%x402)/(x403%x404));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x409 = 61U;
	int64_t x410 = INT64_MAX;
	int8_t x411 = INT8_MIN;
	static int16_t x412 = INT16_MIN;
	static volatile int64_t t84 = 198LL;

    t84 = ((x409%x410)/(x411%x412));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x417 = 161U;
	volatile int8_t x418 = 3;
	volatile uint64_t x419 = 138720273635LLU;
	uint8_t x420 = 24U;
	volatile uint64_t t85 = 5052172867386LLU;

    t85 = ((x417%x418)/(x419%x420));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x421 = 248;
	int16_t x422 = -1;
	int8_t x423 = INT8_MAX;
	uint8_t x424 = UINT8_MAX;
	int32_t t86 = -258;

    t86 = ((x421%x422)/(x423%x424));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x429 = -1321492;
	uint8_t x430 = 19U;
	volatile int64_t x432 = -1LL;
	static volatile uint64_t t87 = 1LLU;

    t87 = ((x429%x430)/(x431%x432));

    if (t87 != 214384845995810LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x437 = 0;
	int64_t x438 = INT64_MIN;
	int32_t x440 = -67397250;
	volatile int64_t t88 = 3317LL;

    t88 = ((x437%x438)/(x439%x440));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x441 = 0;
	uint32_t x442 = UINT32_MAX;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t89 = 712LLU;

    t89 = ((x441%x442)/(x443%x444));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x449 = 634729115LLU;
	int8_t x450 = -1;
	int8_t x451 = INT8_MAX;
	volatile int64_t x452 = INT64_MIN;
	uint64_t t90 = 89517124849LLU;

    t90 = ((x449%x450)/(x451%x452));

    if (t90 != 4997867LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x458 = 1U;
	int64_t x459 = -1LL;
	int64_t x460 = INT64_MIN;
	int64_t t91 = -2159125063461123530LL;

    t91 = ((x457%x458)/(x459%x460));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x462 = UINT64_MAX;

    t92 = ((x461%x462)/(x463%x464));

    if (t92 != 1391996987149675LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x465 = INT8_MAX;
	volatile int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MAX;
	volatile uint64_t t93 = 44064204LLU;

    t93 = ((x465%x466)/(x467%x468));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x469 = -1;
	uint32_t x470 = 3U;
	uint64_t x471 = 547720953724536LLU;
	int8_t x472 = INT8_MAX;
	volatile uint64_t t94 = 107446077284573LLU;

    t94 = ((x469%x470)/(x471%x472));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x473 = INT32_MAX;
	uint64_t x474 = 3084479LLU;
	int16_t x475 = 3;
	static int16_t x476 = INT16_MIN;
	volatile uint64_t t95 = 517644056LLU;

    t95 = ((x473%x474)/(x475%x476));

    if (t95 != 228754LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x481 = UINT32_MAX;
	uint32_t x482 = 826U;
	int16_t x483 = -1;
	static int16_t x484 = INT16_MAX;
	static uint32_t t96 = 1232472423U;

    t96 = ((x481%x482)/(x483%x484));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x485 = 0;
	int64_t x486 = -1LL;
	volatile int16_t x488 = INT16_MIN;
	static int64_t t97 = 297511598556690738LL;

    t97 = ((x485%x486)/(x487%x488));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x489 = 501699;
	static uint8_t x491 = UINT8_MAX;
	static int8_t x492 = -2;
	int32_t t98 = -1;

    t98 = ((x489%x490)/(x491%x492));

    if (t98 != 501699) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x494 = UINT64_MAX;

    t99 = ((x493%x494)/(x495%x496));

    if (t99 != 45LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MAX;
	int16_t x503 = INT16_MAX;
	uint64_t x504 = 45LLU;
	uint64_t t100 = 660834800171927624LLU;

    t100 = ((x501%x502)/(x503%x504));

    if (t100 != 2635249153387078801LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x505 = UINT8_MAX;
	int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	volatile int32_t t101 = 212700;

    t101 = ((x505%x506)/(x507%x508));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x509 = INT16_MIN;
	uint32_t x510 = UINT32_MAX;
	int8_t x511 = INT8_MIN;

    t102 = ((x509%x510)/(x511%x512));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x513 = INT8_MIN;
	uint8_t x514 = 120U;
	int64_t x515 = -1LL;
	uint8_t x516 = UINT8_MAX;
	int64_t t103 = -3837LL;

    t103 = ((x513%x514)/(x515%x516));

    if (t103 != 8LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x517 = INT8_MIN;
	int32_t x519 = 629;
	volatile int64_t x520 = INT64_MAX;
	int64_t t104 = -532LL;

    t104 = ((x517%x518)/(x519%x520));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x521 = -1LL;
	static int32_t x522 = -1;
	int64_t x523 = INT64_MAX;
	static int64_t t105 = 9370919509430LL;

    t105 = ((x521%x522)/(x523%x524));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x525 = 2003;
	static uint64_t x527 = 2980308774935692LLU;
	int8_t x528 = -11;
	uint64_t t106 = 26660609LLU;

    t106 = ((x525%x526)/(x527%x528));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x529 = 3U;
	volatile uint64_t x530 = 46746107207LLU;
	int64_t x532 = INT64_MIN;

    t107 = ((x529%x530)/(x531%x532));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x533 = UINT32_MAX;
	static int8_t x534 = INT8_MIN;
	static int32_t x535 = -1010;
	int8_t x536 = INT8_MIN;
	volatile uint32_t t108 = 1360100720U;

    t108 = ((x533%x534)/(x535%x536));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x538 = 1;
	static uint16_t x540 = 579U;
	int32_t t109 = 39880;

    t109 = ((x537%x538)/(x539%x540));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x547 = -573;
	volatile int64_t t110 = -957148422270486LL;

    t110 = ((x545%x546)/(x547%x548));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x549 = 48U;
	uint16_t x551 = UINT16_MAX;
	volatile int16_t x552 = INT16_MAX;
	int64_t t111 = -902454563267248LL;

    t111 = ((x549%x550)/(x551%x552));

    if (t111 != 48LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	int64_t x556 = 16523614665073LL;
	volatile int64_t t112 = 3LL;

    t112 = ((x553%x554)/(x555%x556));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x557 = UINT64_MAX;
	int64_t x558 = -1LL;
	static int8_t x559 = -1;
	int64_t x560 = 67605285812598745LL;

    t113 = ((x557%x558)/(x559%x560));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x561 = 2268U;
	int16_t x562 = -1;
	int32_t x563 = -1;
	int64_t x564 = -817193139731917LL;
	int64_t t114 = 3479569102424006271LL;

    t114 = ((x561%x562)/(x563%x564));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x569 = 542102618U;
	uint64_t x570 = 8304135014LLU;
	uint32_t x571 = 901073U;
	uint32_t x572 = UINT32_MAX;
	volatile uint64_t t115 = 23278403111615594LLU;

    t115 = ((x569%x570)/(x571%x572));

    if (t115 != 601LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x576 = 95U;

    t116 = ((x573%x574)/(x575%x576));

    if (t116 != 5U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x578 = UINT8_MAX;
	int16_t x579 = INT16_MIN;
	volatile int32_t x580 = INT32_MAX;
	int32_t t117 = -946;

    t117 = ((x577%x578)/(x579%x580));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x581 = 51865U;
	int8_t x582 = INT8_MAX;
	int16_t x583 = INT16_MIN;

    t118 = ((x581%x582)/(x583%x584));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x587 = 2018U;
	int32_t x588 = INT32_MIN;
	static int32_t t119 = 13171;

    t119 = ((x585%x586)/(x587%x588));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x593 = INT8_MAX;
	volatile int32_t x594 = INT32_MAX;

    t120 = ((x593%x594)/(x595%x596));

    if (t120 != 31) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x606 = 25;
	static volatile int8_t x607 = 1;
	static int8_t x608 = -7;

    t121 = ((x605%x606)/(x607%x608));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x609 = 0U;
	int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MAX;
	int32_t x612 = -4887;
	uint32_t t122 = 67U;

    t122 = ((x609%x610)/(x611%x612));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x613 = 0U;
	static int8_t x614 = 6;
	int32_t x615 = INT32_MIN;
	volatile uint8_t x616 = UINT8_MAX;
	volatile int32_t t123 = 1158659;

    t123 = ((x613%x614)/(x615%x616));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x629 = -1LL;
	int8_t x630 = INT8_MAX;
	static int32_t x632 = 11900367;
	int64_t t124 = 1242861119363415LL;

    t124 = ((x629%x630)/(x631%x632));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x637 = -82;
	int16_t x638 = INT16_MIN;
	static int64_t x640 = 8898956396809435LL;

    t125 = ((x637%x638)/(x639%x640));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x644 = UINT64_MAX;
	uint64_t t126 = 48481779449524690LLU;

    t126 = ((x641%x642)/(x643%x644));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x645 = 4108462697124868LL;
	uint16_t x646 = 14U;
	uint32_t x647 = 279684631U;
	int32_t x648 = -1;

    t127 = ((x645%x646)/(x647%x648));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x649 = -24497147;
	static int32_t x651 = -6941122;
	int8_t x652 = 8;
	int32_t t128 = -6580495;

    t128 = ((x649%x650)/(x651%x652));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x653 = INT16_MIN;
	static int8_t x654 = INT8_MIN;
	uint32_t x655 = 10681U;

    t129 = ((x653%x654)/(x655%x656));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x657 = 32126;
	static uint32_t x658 = UINT32_MAX;
	int8_t x659 = -19;
	uint64_t t130 = 13345052784248761LLU;

    t130 = ((x657%x658)/(x659%x660));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x665 = 543LLU;
	int64_t x666 = -10525LL;
	int32_t x667 = INT32_MAX;
	int8_t x668 = INT8_MIN;
	static uint64_t t131 = 565LLU;

    t131 = ((x665%x666)/(x667%x668));

    if (t131 != 4LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x682 = INT64_MIN;
	static volatile int8_t x683 = INT8_MAX;
	volatile uint16_t x684 = 79U;
	uint64_t t132 = 459170LLU;

    t132 = ((x681%x682)/(x683%x684));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x689 = 12U;
	volatile uint16_t x692 = 1423U;
	static volatile int32_t t133 = -476164948;

    t133 = ((x689%x690)/(x691%x692));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x693 = 7LL;
	volatile uint8_t x694 = 16U;
	int64_t x695 = 2LL;
	static int32_t x696 = INT32_MAX;
	volatile int64_t t134 = -373359683450908LL;

    t134 = ((x693%x694)/(x695%x696));

    if (t134 != 3LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x697 = -26;
	int32_t x698 = INT32_MIN;
	uint32_t x699 = UINT32_MAX;
	volatile int64_t t135 = 15LL;

    t135 = ((x697%x698)/(x699%x700));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x701 = 1U;
	volatile int64_t x702 = INT64_MIN;
	volatile int64_t t136 = 2455111830LL;

    t136 = ((x701%x702)/(x703%x704));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x705 = INT8_MIN;
	static int16_t x706 = -10;
	int16_t x707 = 614;
	int8_t x708 = INT8_MAX;
	volatile int32_t t137 = -12;

    t137 = ((x705%x706)/(x707%x708));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x709 = -778396224;
	uint64_t x710 = 393026899208577525LLU;
	uint64_t x711 = UINT64_MAX;
	volatile uint16_t x712 = 13508U;

    t138 = ((x709%x710)/(x711%x712));

    if (t138 != 32082645948196LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x714 = INT64_MIN;
	volatile int64_t x715 = -158616845068847LL;

    t139 = ((x713%x714)/(x715%x716));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x717 = UINT64_MAX;
	static uint64_t x720 = UINT64_MAX;
	uint64_t t140 = 1186699LLU;

    t140 = ((x717%x718)/(x719%x720));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x721 = INT8_MIN;
	static int64_t t141 = 620707009808969562LL;

    t141 = ((x721%x722)/(x723%x724));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x725 = INT16_MIN;
	int8_t x726 = INT8_MAX;
	static int64_t x728 = INT64_MIN;
	int64_t t142 = 114167767146550050LL;

    t142 = ((x725%x726)/(x727%x728));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x729 = 0;
	int8_t x732 = INT8_MAX;
	volatile int64_t t143 = 7485485LL;

    t143 = ((x729%x730)/(x731%x732));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x733 = 42U;
	uint64_t x734 = 339992434365LLU;
	int32_t x735 = -1;
	int32_t x736 = 6698;
	uint64_t t144 = 82596LLU;

    t144 = ((x733%x734)/(x735%x736));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x746 = 23197U;
	volatile int16_t x747 = INT16_MIN;
	int32_t x748 = INT32_MIN;
	static volatile int64_t t145 = -2265093007LL;

    t145 = ((x745%x746)/(x747%x748));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x753 = INT64_MIN;
	volatile uint8_t x754 = UINT8_MAX;
	int16_t x755 = INT16_MAX;
	static volatile uint8_t x756 = UINT8_MAX;
	int64_t t146 = 0LL;

    t146 = ((x753%x754)/(x755%x756));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MAX;
	int16_t x759 = INT16_MIN;
	volatile int64_t t147 = 9028164987664763LL;

    t147 = ((x757%x758)/(x759%x760));

    if (t147 != 110LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x762 = 11210LL;
	static int32_t x764 = INT32_MIN;

    t148 = ((x761%x762)/(x763%x764));

    if (t148 != 9789LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x765 = 212U;
	uint8_t x766 = 14U;
	static int16_t x768 = INT16_MAX;
	volatile uint32_t t149 = 3385132U;

    t149 = ((x765%x766)/(x767%x768));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x769 = -4551892815719553LL;
	static int16_t x770 = -7;
	int8_t x771 = -1;
	int32_t x772 = -57;
	int64_t t150 = 6340084818155290LL;

    t150 = ((x769%x770)/(x771%x772));

    if (t150 != 3LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x781 = 0U;
	uint8_t x782 = 43U;
	volatile int32_t x783 = 14876;
	int32_t x784 = INT32_MAX;
	volatile int32_t t151 = -446;

    t151 = ((x781%x782)/(x783%x784));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x786 = INT32_MIN;
	volatile uint64_t x787 = UINT64_MAX;
	volatile uint64_t t152 = 260794LLU;

    t152 = ((x785%x786)/(x787%x788));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = INT8_MAX;
	static uint64_t x799 = UINT64_MAX;
	int8_t x800 = -2;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = ((x797%x798)/(x799%x800));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x801 = INT8_MIN;
	static volatile uint32_t x802 = 1154U;
	int8_t x803 = 2;
	int16_t x804 = -281;
	volatile uint32_t t154 = 9698U;

    t154 = ((x801%x802)/(x803%x804));

    if (t154 != 368U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x805 = INT8_MIN;
	int8_t x806 = INT8_MIN;
	int8_t x807 = INT8_MIN;
	uint16_t x808 = 39U;
	int32_t t155 = -1;

    t155 = ((x805%x806)/(x807%x808));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x821 = INT16_MIN;
	volatile int8_t x822 = INT8_MIN;
	static int8_t x823 = -1;
	uint64_t x824 = 23LLU;
	volatile uint64_t t156 = 6377168200078324LLU;

    t156 = ((x821%x822)/(x823%x824));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x826 = 6U;
	uint8_t x827 = UINT8_MAX;
	uint64_t x828 = 8303815535LLU;
	static volatile uint64_t t157 = 15148908144934584LLU;

    t157 = ((x825%x826)/(x827%x828));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x829 = INT8_MAX;
	volatile uint8_t x830 = 1U;
	int64_t x832 = INT64_MAX;
	volatile int64_t t158 = 139662651373576629LL;

    t158 = ((x829%x830)/(x831%x832));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x834 = INT16_MAX;
	int32_t x835 = INT32_MAX;
	int64_t t159 = -988LL;

    t159 = ((x833%x834)/(x835%x836));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x837 = 0;
	int32_t x839 = INT32_MAX;
	int32_t t160 = -1364;

    t160 = ((x837%x838)/(x839%x840));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x853 = INT8_MIN;
	volatile uint8_t x855 = 11U;
	int16_t x856 = INT16_MAX;
	volatile uint32_t t161 = 353U;

    t161 = ((x853%x854)/(x855%x856));

    if (t161 != 528190U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x861 = INT64_MIN;
	int64_t x863 = INT64_MIN;
	volatile int64_t x864 = 258616015620320690LL;

    t162 = ((x861%x862)/(x863%x864));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x865 = 3611U;
	uint32_t x866 = 12U;
	volatile int16_t x867 = -1;
	volatile uint32_t x868 = 27U;
	uint32_t t163 = 2524U;

    t163 = ((x865%x866)/(x867%x868));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x869 = 0;
	int64_t x870 = -1721133457305LL;
	uint32_t x871 = UINT32_MAX;
	int16_t x872 = INT16_MAX;
	static int64_t t164 = -191411LL;

    t164 = ((x869%x870)/(x871%x872));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x873 = INT64_MIN;
	int8_t x874 = -1;
	volatile int16_t x876 = 10;
	static int64_t t165 = -579029725370456961LL;

    t165 = ((x873%x874)/(x875%x876));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x882 = -198425041269LL;
	uint32_t x884 = 283U;
	int64_t t166 = 805589726LL;

    t166 = ((x881%x882)/(x883%x884));

    if (t166 != -389600222LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x885 = -24LL;
	int64_t x887 = INT64_MAX;
	static int32_t x888 = INT32_MIN;
	int64_t t167 = 28197488963LL;

    t167 = ((x885%x886)/(x887%x888));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x895 = -1;
	int32_t x896 = -7648;
	int32_t t168 = 181;

    t168 = ((x893%x894)/(x895%x896));

    if (t168 != -15) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x910 = INT64_MIN;
	uint64_t t169 = 31708514LLU;

    t169 = ((x909%x910)/(x911%x912));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x925 = INT8_MIN;
	static volatile int64_t x926 = INT64_MAX;
	int16_t x927 = -70;
	int64_t t170 = -174599436853424LL;

    t170 = ((x925%x926)/(x927%x928));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x929 = 5U;
	int64_t x930 = -41169294LL;
	uint8_t x931 = UINT8_MAX;

    t171 = ((x929%x930)/(x931%x932));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x933 = -1;
	static int32_t x935 = INT32_MIN;
	volatile uint32_t t172 = 1U;

    t172 = ((x933%x934)/(x935%x936));

    if (t172 != 9675U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x941 = -19011861694LL;
	uint16_t x942 = 4405U;
	int16_t x943 = -423;
	uint64_t t173 = 105725LLU;

    t173 = ((x941%x942)/(x943%x944));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x945 = -150888;
	uint32_t x947 = 4146U;
	int8_t x948 = INT8_MIN;
	volatile uint32_t t174 = 94159814U;

    t174 = ((x945%x946)/(x947%x948));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x949 = -1LL;
	uint8_t x950 = UINT8_MAX;
	uint32_t x952 = 1672784256U;
	static volatile int64_t t175 = 920LL;

    t175 = ((x949%x950)/(x951%x952));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x953 = INT64_MAX;
	int16_t x954 = INT16_MIN;
	volatile int8_t x955 = INT8_MAX;
	static volatile uint32_t x956 = 778U;
	static volatile int64_t t176 = 1514427099484036783LL;

    t176 = ((x953%x954)/(x955%x956));

    if (t176 != 258LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x957 = 0;
	static int8_t x959 = -1;
	int8_t x960 = INT8_MIN;
	uint64_t t177 = 3406205389497321LLU;

    t177 = ((x957%x958)/(x959%x960));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x961 = 211447700747LLU;
	int32_t x962 = -1;
	int64_t x963 = -1LL;
	static uint64_t t178 = 115699014LLU;

    t178 = ((x961%x962)/(x963%x964));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x977 = 1;
	uint64_t x978 = 404834305047381871LLU;
	volatile uint32_t x979 = UINT32_MAX;
	volatile int32_t x980 = INT32_MIN;
	volatile uint64_t t179 = 9655366935LLU;

    t179 = ((x977%x978)/(x979%x980));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x982 = 12;
	static volatile int64_t x983 = -556250057787559LL;

    t180 = ((x981%x982)/(x983%x984));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x985 = INT32_MIN;
	int32_t x986 = INT32_MIN;
	volatile int32_t t181 = 4594684;

    t181 = ((x985%x986)/(x987%x988));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x989 = 295352300U;
	int8_t x991 = -4;
	int64_t x992 = -34570583948388845LL;
	volatile int64_t t182 = 96LL;

    t182 = ((x989%x990)/(x991%x992));

    if (t182 != -73838075LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x997 = INT32_MAX;
	int32_t x998 = INT32_MAX;
	uint64_t x999 = 27LLU;
	volatile int64_t x1000 = -1LL;
	static volatile uint64_t t183 = 3533939011124767450LLU;

    t183 = ((x997%x998)/(x999%x1000));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1009 = INT16_MAX;
	int8_t x1011 = -1;
	static uint64_t x1012 = 967LLU;
	uint64_t t184 = 25257258691LLU;

    t184 = ((x1009%x1010)/(x1011%x1012));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x1013 = UINT8_MAX;
	int16_t x1014 = 15043;
	uint32_t x1015 = 164349011U;
	uint32_t x1016 = 3U;
	volatile uint32_t t185 = 0U;

    t185 = ((x1013%x1014)/(x1015%x1016));

    if (t185 != 127U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1017 = 2U;
	int64_t x1018 = INT64_MAX;
	volatile uint8_t x1019 = UINT8_MAX;
	int64_t t186 = -3183504552313LL;

    t186 = ((x1017%x1018)/(x1019%x1020));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1025 = INT8_MIN;
	static int8_t x1026 = INT8_MAX;
	static int8_t x1027 = 4;
	int32_t x1028 = INT32_MIN;
	volatile int32_t t187 = 356432239;

    t187 = ((x1025%x1026)/(x1027%x1028));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1034 = -1;
	int64_t x1035 = INT64_MAX;
	static volatile int32_t x1036 = -12;
	int64_t t188 = -389686232111429582LL;

    t188 = ((x1033%x1034)/(x1035%x1036));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1038 = 455087482579334210LLU;
	uint8_t x1039 = UINT8_MAX;
	int32_t x1040 = 148996155;

    t189 = ((x1037%x1038)/(x1039%x1040));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1041 = 16912LLU;
	uint8_t x1042 = 2U;
	static int64_t x1043 = INT64_MIN;
	static volatile int8_t x1044 = 28;
	uint64_t t190 = 2855LLU;

    t190 = ((x1041%x1042)/(x1043%x1044));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1046 = UINT16_MAX;
	uint16_t x1047 = 7U;
	uint16_t x1048 = 1836U;
	static volatile int32_t t191 = -70;

    t191 = ((x1045%x1046)/(x1047%x1048));

    if (t191 != 358) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x1049 = 3U;
	int16_t x1050 = INT16_MIN;
	int32_t x1051 = 38849;
	uint32_t x1052 = 278980542U;
	static uint32_t t192 = 953U;

    t192 = ((x1049%x1050)/(x1051%x1052));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1053 = -1;
	uint16_t x1055 = 41U;
	int64_t x1056 = -50LL;

    t193 = ((x1053%x1054)/(x1055%x1056));

    if (t193 != 1381217497197644LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1061 = 0;
	volatile uint16_t x1062 = 509U;
	uint64_t x1063 = 1790796947198909LLU;
	static int8_t x1064 = INT8_MIN;
	uint64_t t194 = 59LLU;

    t194 = ((x1061%x1062)/(x1063%x1064));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1077 = INT16_MAX;
	int32_t x1078 = -1;
	int32_t x1079 = -1;
	int32_t x1080 = 1463;
	int32_t t195 = 1;

    t195 = ((x1077%x1078)/(x1079%x1080));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1085 = INT32_MAX;
	int32_t x1086 = INT32_MAX;
	uint32_t x1087 = 359U;
	uint32_t t196 = 558444317U;

    t196 = ((x1085%x1086)/(x1087%x1088));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1089 = 740999U;
	uint64_t x1092 = 50735209530LLU;
	uint64_t t197 = 26118LLU;

    t197 = ((x1089%x1090)/(x1091%x1092));

    if (t197 != 5834LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1093 = 23U;
	int8_t x1094 = INT8_MAX;
	static uint32_t x1095 = 40966683U;
	static volatile int8_t x1096 = INT8_MIN;

    t198 = ((x1093%x1094)/(x1095%x1096));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1099 = UINT8_MAX;
	volatile int64_t t199 = 18LL;

    t199 = ((x1097%x1098)/(x1099%x1100));

    if (t199 != 25LL) { NG(); } else { ; }
	
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

