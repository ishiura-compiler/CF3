
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

int16_t x1 = 0;
static volatile int64_t x2 = INT64_MAX;
volatile uint8_t x5 = 0U;
uint16_t x10 = 1907U;
int8_t x12 = 35;
int32_t x18 = 5219573;
int8_t x20 = INT8_MAX;
int8_t x37 = INT8_MAX;
int32_t x44 = -60851;
volatile int64_t t8 = 6786LL;
int64_t x49 = -1LL;
int16_t x51 = INT16_MIN;
int8_t x57 = INT8_MIN;
int64_t t13 = -143171491LL;
int64_t t14 = -3LL;
static volatile int32_t x85 = INT32_MAX;
int64_t x87 = -1LL;
int32_t x95 = INT32_MIN;
static int32_t t17 = -313;
uint64_t x98 = 1259236355048617LLU;
uint64_t x101 = UINT64_MAX;
uint8_t x104 = UINT8_MAX;
int64_t x115 = -23468751377354000LL;
volatile int64_t t22 = INT64_MAX;
int64_t x121 = INT64_MAX;
int16_t x137 = -387;
volatile uint32_t x138 = 18168U;
uint8_t x142 = 43U;
uint64_t x143 = 4840723541467025LLU;
int8_t x149 = INT8_MIN;
uint64_t t30 = 85781318346828LLU;
int32_t x157 = INT32_MIN;
int16_t x185 = -1;
int64_t x186 = 0LL;
int32_t x187 = 210479925;
int32_t x193 = -1;
volatile uint32_t t39 = 15U;
int32_t x200 = INT32_MAX;
int16_t x207 = INT16_MIN;
int8_t x208 = INT8_MAX;
static int32_t x209 = -1;
volatile uint64_t t45 = 446209456981886283LLU;
int64_t x227 = -1LL;
uint16_t x228 = UINT16_MAX;
int16_t x233 = -1;
int64_t x235 = -974818892LL;
int16_t x238 = INT16_MIN;
volatile uint64_t t50 = 37682806266LLU;
uint16_t x253 = 11U;
volatile uint64_t t52 = 1LLU;
int32_t x265 = -1;
int16_t x268 = INT16_MIN;
volatile int32_t x271 = INT32_MAX;
int16_t x272 = INT16_MIN;
uint64_t t55 = 22781894LLU;
static int32_t x290 = INT32_MIN;
uint32_t x292 = UINT32_MAX;
int8_t x305 = INT8_MAX;
int32_t x306 = INT32_MAX;
uint8_t x316 = 81U;
int32_t t61 = -352;
static uint64_t x321 = 7587368969937366LLU;
int16_t x327 = -6;
static int8_t x336 = INT8_MIN;
volatile uint8_t x338 = 14U;
int64_t x340 = INT64_MIN;
uint64_t x344 = UINT64_MAX;
volatile int64_t x353 = 3LL;
int8_t x358 = -63;
uint32_t x381 = 59U;
uint8_t x385 = 29U;
uint8_t x390 = UINT8_MAX;
uint8_t x395 = UINT8_MAX;
int32_t x399 = INT32_MAX;
uint64_t t77 = 765687LLU;
volatile int64_t x406 = -1LL;
volatile uint8_t x408 = 5U;
uint64_t t80 = 1909488LLU;
int64_t t81 = -4933265184079142LL;
uint16_t x423 = UINT16_MAX;
static uint32_t x426 = 730621683U;
volatile int8_t x427 = INT8_MIN;
volatile uint16_t x430 = 0U;
static uint64_t t84 = 461LLU;
int8_t x439 = INT8_MIN;
volatile uint16_t x446 = 0U;
int64_t t87 = -5257583772630253LL;
uint64_t x454 = 92472LLU;
uint8_t x458 = 40U;
uint32_t x459 = 35374U;
volatile uint64_t x462 = 6619178831LLU;
int64_t x470 = INT64_MIN;
int32_t x472 = INT32_MIN;
int32_t x475 = INT32_MIN;
static int32_t x494 = -2093;
volatile int32_t t95 = -716964;
uint32_t x497 = 19U;
static int8_t x500 = INT8_MIN;
int64_t x502 = -2323965695539908137LL;
uint8_t x504 = 8U;
int32_t x506 = -1;
uint64_t t98 = 1395LLU;
volatile int16_t x512 = INT16_MAX;
int32_t x533 = 11027;
uint64_t x542 = 69722623938LLU;
volatile uint16_t x548 = 8U;
volatile int64_t x549 = -436398422565061LL;
static int32_t x550 = 114346;
static uint64_t x551 = 133769980675LLU;
int64_t x557 = -1LL;
int32_t x559 = INT32_MIN;
int16_t x562 = -1;
int64_t x570 = INT64_MIN;
int64_t x590 = 39LL;
int8_t x599 = INT8_MAX;
volatile int32_t t115 = -15998378;
int64_t x609 = INT64_MIN;
static volatile int64_t t118 = INT64_MIN;
volatile uint32_t x613 = 1654559U;
uint32_t x614 = 459U;
int16_t x616 = 5591;
static uint32_t x622 = 954623U;
static int16_t x624 = 125;
volatile int32_t x625 = -1;
static uint8_t x646 = 2U;
uint8_t x649 = 27U;
uint32_t x650 = 25740004U;
volatile int16_t x655 = -1;
uint64_t t128 = 1LLU;
int32_t t129 = 40614;
static uint8_t x667 = UINT8_MAX;
volatile int32_t t131 = 22513324;
int64_t x673 = INT64_MIN;
int64_t x674 = 200698LL;
int32_t x679 = 55553;
int16_t x691 = -1;
int64_t x719 = 1669207LL;
int8_t x722 = -1;
static int32_t x736 = -13;
static int64_t t142 = -128543616838LL;
volatile uint8_t x738 = 45U;
volatile int32_t x760 = INT32_MIN;
int8_t x765 = INT8_MAX;
uint32_t x766 = 1982U;
volatile int8_t x768 = INT8_MIN;
int8_t x771 = 1;
volatile uint32_t x778 = 3162683U;
static uint32_t t151 = UINT32_MAX;
int8_t x787 = -1;
uint64_t t153 = 474749414909LLU;
int64_t x797 = INT64_MIN;
int16_t x798 = -1855;
int64_t t154 = -4345256619578LL;
uint8_t x813 = UINT8_MAX;
volatile uint8_t x815 = 118U;
int8_t x825 = -45;
static int64_t x829 = -126017815400LL;
static int64_t x831 = 8024LL;
static volatile int64_t x833 = -14368135738LL;
int8_t x845 = -52;
uint16_t x850 = 4192U;
int8_t x861 = INT8_MAX;
static int64_t x864 = INT64_MIN;
static int64_t x865 = 358792LL;
uint16_t x869 = 1950U;
volatile uint32_t t169 = 1U;
volatile uint16_t x877 = UINT16_MAX;
static int64_t t171 = 2154559767LL;
static volatile uint64_t t172 = 575353156814121LLU;
static volatile int32_t x901 = INT32_MIN;
static int32_t x904 = INT32_MIN;
int64_t x907 = 92764395LL;
int8_t x913 = INT8_MAX;
int32_t x916 = INT32_MAX;
int64_t t177 = -30538741777328237LL;
int32_t x921 = -666215;
int64_t x923 = -1LL;
int64_t t178 = -1430787348LL;
uint8_t x930 = 2U;
uint64_t x932 = 1100LLU;
volatile int64_t t180 = 426893839412900836LL;
volatile int16_t x942 = INT16_MIN;
int16_t x962 = -1;
uint64_t x983 = 172851LLU;
volatile uint64_t t188 = 379098093488LLU;
static int64_t x987 = INT64_MAX;
static volatile int16_t x988 = INT16_MIN;
uint16_t x990 = 153U;
uint64_t x993 = 58LLU;
int32_t x995 = INT32_MAX;
int64_t x996 = INT64_MIN;
static uint64_t t191 = 18187774LLU;
uint64_t t192 = 1956367101234737LLU;
int8_t x1003 = INT8_MAX;
uint64_t t193 = 629580717361884844LLU;
uint8_t x1007 = UINT8_MAX;
static int16_t x1013 = 14;
int16_t x1015 = -12;
int8_t x1023 = -1;
volatile uint64_t t198 = 673856119598LLU;
uint8_t x1035 = 81U;
static volatile int32_t x1036 = INT32_MIN;
volatile int32_t t199 = 1060651560;


void f0(void) {
    	uint64_t x3 = 72LLU;
	static int64_t x4 = INT64_MIN;
	uint64_t t0 = 20LLU;

    t0 = (x1+(x2/(x3%x4)));

    if (t0 != 128102389400760775LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -1;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 41071398U;
	static uint32_t t1 = 2763U;

    t1 = (x5+(x6/(x7%x8)));

    if (t1 != 182U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 105U;
	int16_t x11 = -169;
	volatile uint32_t t2 = 2037U;

    t2 = (x9+(x10/(x11%x12)));

    if (t2 != 40U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	uint16_t x14 = 519U;
	int16_t x15 = -8;
	uint64_t x16 = 22626LLU;
	static volatile uint64_t t3 = 95LLU;

    t3 = (x13+(x14/(x15%x16)));

    if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -3627;

    t4 = (x17+(x18/(x19%x20)));

    if (t4 != -2609787) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	uint64_t x22 = 1944LLU;
	uint8_t x23 = 1U;
	int32_t x24 = -4493038;
	volatile uint64_t t5 = 263421198213LLU;

    t5 = (x21+(x22/(x23%x24)));

    if (t5 != 9223372036854777752LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int64_t x26 = -849LL;
	int16_t x27 = INT16_MAX;
	static uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 14866738801534LLU;

    t6 = (x25+(x26/(x27%x28)));

    if (t6 != 562967133814798LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x38 = -1;
	static volatile int16_t x39 = 8986;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t7 = 3247527004272LL;

    t7 = (x37+(x38/(x39%x40)));

    if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x41 = -4399790771584LL;
	int64_t x42 = 5739401727LL;
	uint8_t x43 = 11U;

    t8 = (x41+(x42/(x43%x44)));

    if (t8 != -4399269007791LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x50 = INT16_MIN;
	int64_t x52 = INT64_MAX;
	int64_t t9 = -45905LL;

    t9 = (x49+(x50/(x51%x52)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = 1618LLU;
	volatile int32_t x54 = 223;
	int32_t x55 = INT32_MIN;
	volatile int32_t x56 = INT32_MAX;
	volatile uint64_t t10 = 10508699LLU;

    t10 = (x53+(x54/(x55%x56)));

    if (t10 != 1395LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x58 = 1;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = -570;
	uint32_t t11 = 50636626U;

    t11 = (x57+(x58/(x59%x60)));

    if (t11 != 4294967168U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = 2796306771LLU;
	int8_t x62 = INT8_MIN;
	static int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	volatile uint64_t t12 = 48LLU;

    t12 = (x61+(x62/(x63%x64)));

    if (t12 != 2796306771LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	int32_t x67 = -106912;
	int64_t x68 = INT64_MIN;

    t13 = (x65+(x66/(x67%x68)));

    if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = 2;
	static int16_t x71 = -1;
	volatile int64_t x72 = 1514308035320129088LL;

    t14 = (x69+(x70/(x71%x72)));

    if (t14 != 253LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = INT8_MAX;
	static uint32_t x74 = 83935457U;
	int64_t x75 = INT64_MIN;
	int16_t x76 = -187;
	int64_t t15 = 280542764094326412LL;

    t15 = (x73+(x74/(x75%x76)));

    if (t15 != -517993LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x86 = 1272709157784070LLU;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t16 = 754621LLU;

    t16 = (x85+(x86/(x87%x88)));

    if (t16 != 2147483647LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x93 = 67U;
	static int16_t x94 = INT16_MIN;
	int16_t x96 = INT16_MAX;

    t17 = (x93+(x94/(x95%x96)));

    if (t17 != 16451) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x97 = -1LL;
	volatile int64_t x99 = INT64_MIN;
	uint64_t x100 = 19LLU;
	volatile uint64_t t18 = 44691164LLU;

    t18 = (x97+(x98/(x99%x100)));

    if (t18 != 69957575280477LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x102 = 1087634219676348746LL;
	uint32_t x103 = 10891U;
	uint64_t t19 = 1883935850657LLU;

    t19 = (x101+(x102/(x103%x104)));

    if (t19 != 6009028837990876LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x109 = 257956U;
	int32_t x110 = INT32_MIN;
	volatile int64_t x111 = 1859298895240637589LL;
	uint8_t x112 = UINT8_MAX;
	static volatile int64_t t20 = 58104LL;

    t20 = (x109+(x110/(x111%x112)));

    if (t20 != -25307325LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MAX;
	int8_t x116 = INT8_MAX;
	int64_t t21 = 0LL;

    t21 = (x113+(x114/(x115%x116)));

    if (t21 != 32764LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x117 = INT64_MAX;
	uint16_t x118 = 940U;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 32247U;

    t22 = (x117+(x118/(x119%x120)));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x122 = -15802;
	static volatile int64_t x123 = INT64_MIN;
	uint64_t x124 = 1950067919414LLU;
	volatile uint64_t t23 = 57LLU;

    t23 = (x121+(x122/(x123%x124)));

    if (t23 != 9223372036869607766LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x125 = -5887649;
	int32_t x126 = INT32_MIN;
	int16_t x127 = 111;
	uint16_t x128 = UINT16_MAX;
	int32_t t24 = 398253319;

    t24 = (x125+(x126/(x127%x128)));

    if (t24 != -25234348) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x129 = -1LL;
	uint8_t x130 = UINT8_MAX;
	volatile uint32_t x131 = 64011U;
	int8_t x132 = INT8_MIN;
	int64_t t25 = -7575LL;

    t25 = (x129+(x130/(x131%x132)));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x133 = 1785U;
	int8_t x134 = INT8_MIN;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = 1129;
	int64_t t26 = 49557717891LL;

    t26 = (x133+(x134/(x135%x136)));

    if (t26 != 1785LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x139 = 1097LLU;
	int64_t x140 = -2580192184362LL;
	uint64_t t27 = 1734039271150160299LLU;

    t27 = (x137+(x138/(x139%x140)));

    if (t27 != 18446744073709551245LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x141 = INT8_MAX;
	static int16_t x144 = INT16_MIN;
	uint64_t t28 = 430LLU;

    t28 = (x141+(x142/(x143%x144)));

    if (t28 != 127LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x145 = -1860LL;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 15328459LLU;
	int16_t x148 = INT16_MAX;
	uint64_t t29 = 2LLU;

    t29 = (x145+(x146/(x147%x148)));

    if (t29 != 702198099410476LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = UINT64_MAX;

    t30 = (x149+(x150/(x151%x152)));

    if (t30 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x153 = INT64_MIN;
	volatile uint64_t x154 = 109862487201353LLU;
	int64_t x155 = -63267529LL;
	int16_t x156 = -9;
	uint64_t t31 = 3642977626997653LLU;

    t31 = (x153+(x154/(x155%x156)));

    if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x158 = 738661125226460389LL;
	int8_t x159 = -1;
	int8_t x160 = INT8_MAX;
	volatile int64_t t32 = 11261890750549821LL;

    t32 = (x157+(x158/(x159%x160)));

    if (t32 != -738661127373944037LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MIN;
	static uint32_t x167 = UINT32_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t33 = 18862LLU;

    t33 = (x165+(x166/(x167%x168)));

    if (t33 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x169 = INT16_MAX;
	uint64_t x170 = 147LLU;
	int64_t x171 = INT64_MIN;
	volatile int16_t x172 = -15;
	static volatile uint64_t t34 = 5LLU;

    t34 = (x169+(x170/(x171%x172)));

    if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x177 = 15U;
	int64_t x178 = INT64_MIN;
	static volatile int8_t x179 = INT8_MAX;
	static uint32_t x180 = UINT32_MAX;
	int64_t t35 = 354939679639780LL;

    t35 = (x177+(x178/(x179%x180)));

    if (t35 != -72624976668147826LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x181 = UINT16_MAX;
	volatile int32_t x182 = INT32_MAX;
	volatile uint32_t x183 = 1044738074U;
	uint8_t x184 = 7U;
	volatile uint32_t t36 = 580U;

    t36 = (x181+(x182/(x183%x184)));

    if (t36 != 1073807358U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x188 = INT16_MAX;
	int64_t t37 = 16559172154166410LL;

    t37 = (x185+(x186/(x187%x188)));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x189 = INT64_MIN;
	volatile int64_t x190 = -243046682750814LL;
	static int16_t x191 = -1;
	uint8_t x192 = 2U;
	static int64_t t38 = -775438491451701609LL;

    t38 = (x189+(x190/(x191%x192)));

    if (t38 != -9223128990172024994LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x194 = INT32_MAX;
	uint32_t x195 = 212808065U;
	volatile int16_t x196 = INT16_MIN;

    t39 = (x193+(x194/(x195%x196)));

    if (t39 != 9U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x197 = 1119872812792LLU;
	int32_t x198 = 197;
	uint16_t x199 = 18U;
	uint64_t t40 = 923107260208LLU;

    t40 = (x197+(x198/(x199%x200)));

    if (t40 != 1119872812802LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = -112;
	int8_t x202 = 5;
	static uint8_t x203 = 1U;
	volatile int32_t x204 = 2241;
	int32_t t41 = -1;

    t41 = (x201+(x202/(x203%x204)));

    if (t41 != -107) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MIN;
	volatile int64_t t42 = -651355587876933276LL;

    t42 = (x205+(x206/(x207%x208)));

    if (t42 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x210 = 309U;
	volatile uint8_t x211 = 15U;
	uint16_t x212 = 9U;
	static uint32_t t43 = 7247156U;

    t43 = (x209+(x210/(x211%x212)));

    if (t43 != 50U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x217 = -1;
	static int16_t x218 = 3;
	volatile uint64_t x219 = UINT64_MAX;
	volatile int16_t x220 = INT16_MAX;
	volatile uint64_t t44 = UINT64_MAX;

    t44 = (x217+(x218/(x219%x220)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x221 = -1;
	int32_t x222 = -5;
	volatile uint64_t x223 = 430LLU;
	int8_t x224 = INT8_MIN;

    t45 = (x221+(x222/(x223%x224)));

    if (t45 != 42899404822580351LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	volatile int64_t t46 = -155230665430LL;

    t46 = (x225+(x226/(x227%x228)));

    if (t46 != 2147483520LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x229 = -14403128359LL;
	static volatile uint32_t x230 = 31155U;
	uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 3751665U;
	int64_t t47 = 103LL;

    t47 = (x229+(x230/(x231%x232)));

    if (t47 != -14403128237LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x234 = INT16_MIN;
	static int32_t x236 = INT32_MAX;
	int64_t t48 = -813LL;

    t48 = (x233+(x234/(x235%x236)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x237 = UINT32_MAX;
	static volatile int16_t x239 = 629;
	int8_t x240 = -54;
	static volatile uint32_t t49 = 169661533U;

    t49 = (x237+(x238/(x239%x240)));

    if (t49 != 4294966359U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	uint64_t x243 = 219943890701832765LLU;
	uint32_t x244 = 154716137U;

    t50 = (x241+(x242/(x243%x244)));

    if (t50 != 9223374513194053857LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x254 = 3;
	static int8_t x255 = INT8_MIN;
	volatile uint16_t x256 = 60U;
	static volatile int32_t t51 = -14;

    t51 = (x253+(x254/(x255%x256)));

    if (t51 != 11) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x257 = 0U;
	volatile int64_t x258 = INT64_MIN;
	static volatile int32_t x259 = -2;
	uint64_t x260 = UINT64_MAX;

    t52 = (x257+(x258/(x259%x260)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = -1;
	static int16_t x264 = -73;
	int32_t t53 = -25;

    t53 = (x261+(x262/(x263%x264)));

    if (t53 != -2147483520) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x266 = 32401949662503LL;
	uint64_t x267 = UINT64_MAX;
	uint64_t t54 = 16LLU;

    t54 = (x265+(x266/(x267%x268)));

    if (t54 != 988859206LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x269 = 545566735974359LLU;
	uint64_t x270 = 22268938048LLU;

    t55 = (x269+(x270/(x271%x272)));

    if (t55 != 545566736653973LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x277 = INT16_MIN;
	int16_t x278 = -1310;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 183U;
	uint32_t t56 = 1028667674U;

    t56 = (x277+(x278/(x279%x280)));

    if (t56 != 74018369U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x281 = INT32_MIN;
	volatile int64_t x282 = INT64_MIN;
	int8_t x283 = -39;
	static uint64_t x284 = 61188851701LLU;
	static volatile uint64_t t57 = 159553766552LLU;

    t57 = (x281+(x282/(x283%x284)));

    if (t57 != 18446744071837527241LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x289 = -33;
	static volatile int16_t x291 = INT16_MIN;
	static volatile uint32_t t58 = 13U;

    t58 = (x289+(x290/(x291%x292)));

    if (t58 != 4294967263U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x301 = 11;
	uint16_t x302 = UINT16_MAX;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t59 = -1;

    t59 = (x301+(x302/(x303%x304)));

    if (t59 != 268) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MIN;
	uint64_t t60 = 24384357LLU;

    t60 = (x305+(x306/(x307%x308)));

    if (t60 != 128LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x313 = -4;
	static int16_t x314 = -1;
	int8_t x315 = -15;

    t61 = (x313+(x314/(x315%x316)));

    if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x322 = INT64_MAX;
	uint32_t x323 = 242384927U;
	uint32_t x324 = 98742520U;
	static uint64_t t62 = 8049677109038441LLU;

    t62 = (x321+(x322/(x323%x324)));

    if (t62 != 7587574390766974LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x325 = UINT16_MAX;
	static volatile int16_t x326 = INT16_MIN;
	volatile int8_t x328 = INT8_MIN;
	volatile int32_t t63 = -649;

    t63 = (x325+(x326/(x327%x328)));

    if (t63 != 70996) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x333 = 2965U;
	int16_t x334 = -1;
	static int8_t x335 = -1;
	uint32_t t64 = 1195521U;

    t64 = (x333+(x334/(x335%x336)));

    if (t64 != 2966U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x337 = 14107647688693983LLU;
	int8_t x339 = 1;
	uint64_t t65 = 536998LLU;

    t65 = (x337+(x338/(x339%x340)));

    if (t65 != 14107647688693997LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = -3;
	static volatile int64_t x343 = INT64_MIN;
	uint64_t t66 = 37LLU;

    t66 = (x341+(x342/(x343%x344)));

    if (t66 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x349 = 66U;
	volatile int8_t x350 = 28;
	int8_t x351 = INT8_MIN;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t67 = -14;

    t67 = (x349+(x350/(x351%x352)));

    if (t67 != 66) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x354 = 400750286698747386LLU;
	static int16_t x355 = INT16_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t68 = 176994272306LLU;

    t68 = (x353+(x354/(x355%x356)));

    if (t68 != 12230301422127LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x357 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 305669010U;
	uint64_t t69 = 850864596468LLU;

    t69 = (x357+(x358/(x359%x360)));

    if (t69 != 274LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x361 = -14000LL;
	uint16_t x362 = UINT16_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile uint8_t x364 = 38U;
	int64_t t70 = 9688566LL;

    t70 = (x361+(x362/(x363%x364)));

    if (t70 != -11151LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x369 = 16652U;
	volatile int16_t x370 = INT16_MAX;
	uint16_t x371 = UINT16_MAX;
	static uint16_t x372 = 3536U;
	volatile int32_t t71 = -8;

    t71 = (x369+(x370/(x371%x372)));

    if (t71 != 16669) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x382 = 2031453342361395LLU;
	volatile uint32_t x383 = UINT32_MAX;
	int8_t x384 = INT8_MAX;
	volatile uint64_t t72 = 563854621767658075LLU;

    t72 = (x381+(x382/(x383%x384)));

    if (t72 != 135430222824152LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 16254861LLU;
	volatile uint64_t t73 = 2293LLU;

    t73 = (x385+(x386/(x387%x388)));

    if (t73 != 205LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x389 = -1;
	static volatile int16_t x391 = -1;
	uint32_t x392 = 279U;
	volatile uint32_t t74 = 4139430U;

    t74 = (x389+(x390/(x391%x392)));

    if (t74 != 84U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x393 = 25;
	uint16_t x394 = 7U;
	static volatile int8_t x396 = INT8_MIN;
	volatile int32_t t75 = -19245;

    t75 = (x393+(x394/(x395%x396)));

    if (t75 != 25) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x397 = -15248421;
	int64_t x398 = 4123LL;
	int64_t x400 = INT64_MIN;
	int64_t t76 = 158654354LL;

    t76 = (x397+(x398/(x399%x400)));

    if (t76 != -15248421LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x401 = -55280;
	volatile uint64_t x402 = UINT64_MAX;
	int64_t x403 = -115617LL;
	uint32_t x404 = UINT32_MAX;

    t77 = (x401+(x402/(x403%x404)));

    if (t77 != 18446744073709496337LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x405 = 3106486084LLU;
	static uint64_t x407 = 544LLU;
	uint64_t t78 = 4075552148924325LLU;

    t78 = (x405+(x406/(x407%x408)));

    if (t78 != 4611686021533873987LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x409 = INT8_MIN;
	volatile int16_t x410 = -1;
	int16_t x411 = 3215;
	uint64_t x412 = 82166434879351362LLU;
	volatile uint64_t t79 = 16862897876865741LLU;

    t79 = (x409+(x410/(x411%x412)));

    if (t79 != 5737711998043278LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x413 = 1;
	uint64_t x414 = 31786606667623432LLU;
	int32_t x415 = INT32_MIN;
	volatile uint32_t x416 = UINT32_MAX;

    t80 = (x413+(x414/(x415%x416)));

    if (t80 != 14801793LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x417 = INT32_MIN;
	int64_t x418 = -1LL;
	int32_t x419 = -1;
	static int16_t x420 = INT16_MAX;

    t81 = (x417+(x418/(x419%x420)));

    if (t81 != -2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x421 = -6597665;
	int8_t x422 = INT8_MIN;
	int32_t x424 = 359;
	int32_t t82 = -13;

    t82 = (x421+(x422/(x423%x424)));

    if (t82 != -6597665) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x425 = 793660069U;
	static volatile int16_t x428 = 12;
	uint32_t t83 = 1U;

    t83 = (x425+(x426/(x427%x428)));

    if (t83 != 793660069U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x429 = INT8_MAX;
	uint32_t x431 = 254U;
	uint64_t x432 = 53LLU;

    t84 = (x429+(x430/(x431%x432)));

    if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x437 = 61U;
	static int16_t x438 = INT16_MIN;
	int32_t x440 = INT32_MIN;
	volatile int32_t t85 = 7986113;

    t85 = (x437+(x438/(x439%x440)));

    if (t85 != 317) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x445 = INT64_MIN;
	int8_t x447 = -1;
	uint16_t x448 = 5U;
	static int64_t t86 = INT64_MIN;

    t86 = (x445+(x446/(x447%x448)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = 17;
	int64_t x451 = 252676985494174LL;
	int16_t x452 = INT16_MAX;

    t87 = (x449+(x450/(x451%x452)));

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x453 = 313732U;
	int32_t x455 = INT32_MIN;
	int64_t x456 = INT64_MIN;
	uint64_t t88 = 32144907483LLU;

    t88 = (x453+(x454/(x455%x456)));

    if (t88 != 313732LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x457 = INT8_MAX;
	uint64_t x460 = UINT64_MAX;
	static uint64_t t89 = 1LLU;

    t89 = (x457+(x458/(x459%x460)));

    if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x461 = INT32_MIN;
	volatile int64_t x463 = -1LL;
	uint64_t x464 = 117106LLU;
	uint64_t t90 = 1375834208127772LLU;

    t90 = (x461+(x462/(x463%x464)));

    if (t90 != 18446744071562172412LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x469 = -70376127664550256LL;
	int8_t x471 = -13;
	volatile int64_t t91 = 72772900405483LL;

    t91 = (x469+(x470/(x471%x472)));

    if (t91 != 639114029016586344LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x473 = 0U;
	int64_t x474 = INT64_MIN;
	int64_t x476 = INT64_MIN;
	int64_t t92 = -880LL;

    t92 = (x473+(x474/(x475%x476)));

    if (t92 != 4294967296LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x477 = 3U;
	int32_t x478 = 2348;
	uint16_t x479 = UINT16_MAX;
	volatile uint32_t x480 = UINT32_MAX;
	static uint32_t t93 = 26286U;

    t93 = (x477+(x478/(x479%x480)));

    if (t93 != 3U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x481 = INT8_MIN;
	static uint64_t x482 = 7138LLU;
	static int32_t x483 = -1;
	int32_t x484 = INT32_MIN;
	volatile uint64_t t94 = 385LLU;

    t94 = (x481+(x482/(x483%x484)));

    if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x493 = -5092;
	static int8_t x495 = 13;
	static volatile uint16_t x496 = 109U;

    t95 = (x493+(x494/(x495%x496)));

    if (t95 != -5253) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x498 = 129715518864LLU;
	uint64_t x499 = 1254548724229LLU;
	static volatile uint64_t t96 = 22884897LLU;

    t96 = (x497+(x498/(x499%x500)));

    if (t96 != 19LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x501 = 1U;
	static uint64_t x503 = 202LLU;
	volatile uint64_t t97 = 60856032018593LLU;

    t97 = (x501+(x502/(x503%x504)));

    if (t97 != 8061389189084821740LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x505 = -1;
	uint16_t x507 = UINT16_MAX;
	uint64_t x508 = 51901495583653713LLU;

    t98 = (x505+(x506/(x507%x508)));

    if (t98 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x509 = INT8_MIN;
	uint32_t x510 = UINT32_MAX;
	static uint16_t x511 = 1U;
	volatile uint32_t t99 = 0U;

    t99 = (x509+(x510/(x511%x512)));

    if (t99 != 4294967167U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x513 = UINT64_MAX;
	int16_t x514 = -6636;
	int16_t x515 = -1;
	int32_t x516 = INT32_MIN;
	uint64_t t100 = 99407828306LLU;

    t100 = (x513+(x514/(x515%x516)));

    if (t100 != 6635LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x517 = 120501236392239LLU;
	uint16_t x518 = 28903U;
	int16_t x519 = INT16_MIN;
	int64_t x520 = 1700248037049973715LL;
	volatile uint64_t t101 = 207735469LLU;

    t101 = (x517+(x518/(x519%x520)));

    if (t101 != 120501236392239LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x525 = 63929LLU;
	static int16_t x526 = INT16_MIN;
	int8_t x527 = -50;
	int8_t x528 = INT8_MIN;
	volatile uint64_t t102 = 332LLU;

    t102 = (x525+(x526/(x527%x528)));

    if (t102 != 64584LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x529 = 1647403U;
	volatile int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	uint8_t x532 = 41U;
	static volatile uint32_t t103 = 1227U;

    t103 = (x529+(x530/(x531%x532)));

    if (t103 != 1647417U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x534 = INT32_MAX;
	int8_t x535 = INT8_MIN;
	int32_t x536 = INT32_MIN;
	static volatile int32_t t104 = -55592;

    t104 = (x533+(x534/(x535%x536)));

    if (t104 != -16766188) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x537 = -181LL;
	static uint16_t x538 = 25101U;
	uint64_t x539 = UINT64_MAX;
	static uint64_t x540 = 28509233461138724LLU;
	volatile uint64_t t105 = 128939639890967842LLU;

    t105 = (x537+(x538/(x539%x540)));

    if (t105 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x541 = INT16_MIN;
	uint64_t x543 = UINT64_MAX;
	static int16_t x544 = INT16_MAX;
	uint64_t t106 = 235599118260LLU;

    t106 = (x541+(x542/(x543%x544)));

    if (t106 != 4648142161LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = 30;
	int32_t x547 = 6587756;
	static uint32_t t107 = 89U;

    t107 = (x545+(x546/(x547%x548)));

    if (t107 != 6U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x552 = 3217911596816391991LLU;
	uint64_t t108 = 98LLU;

    t108 = (x549+(x550/(x551%x552)));

    if (t108 != 18446307675286986555LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x558 = INT16_MAX;
	static int64_t x560 = INT64_MIN;
	int64_t t109 = -2718643695077LL;

    t109 = (x557+(x558/(x559%x560)));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x561 = 609U;
	static int64_t x563 = -1LL;
	int8_t x564 = INT8_MIN;
	volatile int64_t t110 = 0LL;

    t110 = (x561+(x562/(x563%x564)));

    if (t110 != 610LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x569 = -4258283034456172061LL;
	int32_t x571 = INT32_MAX;
	uint8_t x572 = 104U;
	static volatile int64_t t111 = 533528803753279LL;

    t111 = (x569+(x570/(x571%x572)));

    if (t111 != -4659299209971597096LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x581 = INT8_MAX;
	uint32_t x582 = 109941556U;
	int8_t x583 = INT8_MIN;
	volatile int32_t x584 = INT32_MAX;
	static uint32_t t112 = 0U;

    t112 = (x581+(x582/(x583%x584)));

    if (t112 != 127U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x585 = 2047669521809287LLU;
	static uint32_t x586 = UINT32_MAX;
	int32_t x587 = -1;
	int16_t x588 = 4;
	volatile uint64_t t113 = 64894800415LLU;

    t113 = (x585+(x586/(x587%x588)));

    if (t113 != 2047669521809288LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x589 = 130LLU;
	int64_t x591 = 1833032LL;
	int32_t x592 = 29354588;
	static volatile uint64_t t114 = 1777LLU;

    t114 = (x589+(x590/(x591%x592)));

    if (t114 != 130LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x597 = 1U;
	int8_t x598 = 1;
	int16_t x600 = 468;

    t115 = (x597+(x598/(x599%x600)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x601 = 23U;
	volatile int32_t x602 = INT32_MIN;
	int64_t x603 = 1817LL;
	static uint8_t x604 = UINT8_MAX;
	static int64_t t116 = 120485764575755LL;

    t116 = (x601+(x602/(x603%x604)));

    if (t116 != -67108841LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x605 = 121897648U;
	uint8_t x606 = 15U;
	volatile uint8_t x607 = 25U;
	int64_t x608 = INT64_MAX;
	static int64_t t117 = 94873LL;

    t117 = (x605+(x606/(x607%x608)));

    if (t117 != 121897648LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	volatile int32_t x612 = INT32_MAX;

    t118 = (x609+(x610/(x611%x612)));

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x615 = 8398;
	static uint32_t t119 = 921321220U;

    t119 = (x613+(x614/(x615%x616)));

    if (t119 != 1654559U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x617 = 13274LL;
	uint32_t x618 = UINT32_MAX;
	uint32_t x619 = 30U;
	uint32_t x620 = 360624507U;
	int64_t t120 = 468891LL;

    t120 = (x617+(x618/(x619%x620)));

    if (t120 != 143178850LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x621 = INT8_MAX;
	uint16_t x623 = 23883U;
	uint32_t t121 = 8185457U;

    t121 = (x621+(x622/(x623%x624)));

    if (t121 != 119454U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x626 = -5;
	uint8_t x627 = UINT8_MAX;
	volatile uint16_t x628 = 3891U;
	volatile int32_t t122 = -12;

    t122 = (x625+(x626/(x627%x628)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x629 = 528;
	int64_t x630 = INT64_MIN;
	volatile int64_t x631 = 30932819325LL;
	static volatile int64_t x632 = INT64_MIN;
	int64_t t123 = -170995984838881469LL;

    t123 = (x629+(x630/(x631%x632)));

    if (t123 != -298173781LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x633 = 21;
	int16_t x634 = INT16_MIN;
	int64_t x635 = 46537352196757054LL;
	static int32_t x636 = -66546;
	int64_t t124 = 41LL;

    t124 = (x633+(x634/(x635%x636)));

    if (t124 != 21LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x641 = 224076LLU;
	int16_t x642 = INT16_MAX;
	int64_t x643 = 1361958455LL;
	uint64_t x644 = 358118779LLU;
	static volatile uint64_t t125 = 24LLU;

    t125 = (x641+(x642/(x643%x644)));

    if (t125 != 224076LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x645 = -1;
	int8_t x647 = INT8_MIN;
	volatile int32_t x648 = INT32_MIN;
	int32_t t126 = -13;

    t126 = (x645+(x646/(x647%x648)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x651 = -1;
	uint64_t x652 = 215987391774LLU;
	volatile uint64_t t127 = 793672669248513693LLU;

    t127 = (x649+(x650/(x651%x652)));

    if (t127 != 27LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x654 = -1;
	uint64_t x656 = 8545159591356397084LLU;

    t128 = (x653+(x654/(x655%x656)));

    if (t128 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x657 = -1;
	int8_t x658 = -1;
	int16_t x659 = -13;
	volatile uint16_t x660 = UINT16_MAX;

    t129 = (x657+(x658/(x659%x660)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x661 = -6278;
	int32_t x662 = INT32_MIN;
	volatile int16_t x663 = 3320;
	int16_t x664 = INT16_MIN;
	volatile int32_t t130 = 60825348;

    t130 = (x661+(x662/(x663%x664)));

    if (t130 != -653110) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x665 = INT16_MAX;
	uint8_t x666 = UINT8_MAX;
	uint16_t x668 = 20385U;

    t131 = (x665+(x666/(x667%x668)));

    if (t131 != 32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x669 = -4166694;
	int64_t x670 = INT64_MIN;
	uint64_t x671 = 100021LLU;
	int32_t x672 = INT32_MIN;
	static volatile uint64_t t132 = 28876282956LLU;

    t132 = (x669+(x670/(x671%x672)));

    if (t132 != 92214351187229LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x675 = UINT8_MAX;
	int16_t x676 = INT16_MAX;
	volatile int64_t t133 = -7LL;

    t133 = (x673+(x674/(x675%x676)));

    if (t133 != -9223372036854775021LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x677 = 1U;
	volatile int8_t x678 = 34;
	int8_t x680 = -23;
	int32_t t134 = -6;

    t134 = (x677+(x678/(x679%x680)));

    if (t134 != 5) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x681 = 1;
	int16_t x682 = INT16_MIN;
	volatile uint8_t x683 = 4U;
	volatile int32_t x684 = -1103966;
	int32_t t135 = -8504;

    t135 = (x681+(x682/(x683%x684)));

    if (t135 != -8191) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x685 = -1;
	int8_t x686 = -1;
	static uint32_t x687 = 230U;
	uint64_t x688 = 15516009296LLU;
	volatile uint64_t t136 = 1148888066LLU;

    t136 = (x685+(x686/(x687%x688)));

    if (t136 != 80203235103085006LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x689 = INT8_MIN;
	static uint8_t x690 = 3U;
	int8_t x692 = INT8_MIN;
	int32_t t137 = 12;

    t137 = (x689+(x690/(x691%x692)));

    if (t137 != -131) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x709 = INT32_MIN;
	static int64_t x710 = INT64_MAX;
	static int32_t x711 = INT32_MAX;
	uint32_t x712 = UINT32_MAX;
	static volatile int64_t t138 = 15496303336LL;

    t138 = (x709+(x710/(x711%x712)));

    if (t138 != 2147483650LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x713 = -1LL;
	static volatile int32_t x714 = INT32_MIN;
	int64_t x715 = -1LL;
	int32_t x716 = 106208;
	volatile int64_t t139 = -437653LL;

    t139 = (x713+(x714/(x715%x716)));

    if (t139 != 2147483647LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x717 = 2167LLU;
	uint8_t x718 = UINT8_MAX;
	int64_t x720 = INT64_MAX;
	uint64_t t140 = 2763648389608LLU;

    t140 = (x717+(x718/(x719%x720)));

    if (t140 != 2167LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x721 = -1;
	static int64_t x723 = INT64_MIN;
	uint8_t x724 = 47U;
	volatile int64_t t141 = 433954LL;

    t141 = (x721+(x722/(x723%x724)));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x733 = -1;
	volatile uint8_t x734 = UINT8_MAX;
	int64_t x735 = 122843603LL;

    t142 = (x733+(x734/(x735%x736)));

    if (t142 != 20LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x737 = UINT64_MAX;
	int8_t x739 = INT8_MIN;
	uint8_t x740 = UINT8_MAX;
	uint64_t t143 = UINT64_MAX;

    t143 = (x737+(x738/(x739%x740)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x749 = -1892;
	int16_t x750 = -1;
	int8_t x751 = INT8_MIN;
	int16_t x752 = INT16_MIN;
	volatile int32_t t144 = 16760712;

    t144 = (x749+(x750/(x751%x752)));

    if (t144 != -1892) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x757 = -94536505LL;
	int32_t x758 = INT32_MIN;
	uint8_t x759 = 59U;
	int64_t t145 = -32553096553278081LL;

    t145 = (x757+(x758/(x759%x760)));

    if (t145 != -130934532LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x761 = -31061040;
	int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MAX;
	volatile uint8_t x764 = 51U;
	volatile int32_t t146 = 13383;

    t146 = (x761+(x762/(x763%x764)));

    if (t146 != -31061045) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x767 = UINT64_MAX;
	uint64_t t147 = 8275065LLU;

    t147 = (x765+(x766/(x767%x768)));

    if (t147 != 142LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x769 = 1869U;
	uint64_t x770 = UINT64_MAX;
	uint8_t x772 = 21U;
	uint64_t t148 = 1556038507242054LLU;

    t148 = (x769+(x770/(x771%x772)));

    if (t148 != 1868LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x773 = INT64_MAX;
	int64_t x774 = -1LL;
	int64_t x775 = INT64_MAX;
	static uint8_t x776 = UINT8_MAX;
	volatile int64_t t149 = INT64_MAX;

    t149 = (x773+(x774/(x775%x776)));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x777 = -1LL;
	static int16_t x779 = INT16_MAX;
	int64_t x780 = -2087696674246970024LL;
	int64_t t150 = 69102LL;

    t150 = (x777+(x778/(x779%x780)));

    if (t150 != 95LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x781 = UINT32_MAX;
	int8_t x782 = INT8_MIN;
	int32_t x783 = 65408;
	static volatile uint16_t x784 = 1144U;

    t151 = (x781+(x782/(x783%x784)));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MAX;
	uint64_t x788 = 260047386171966630LLU;
	uint64_t t152 = 34146924552268LLU;

    t152 = (x785+(x786/(x787%x788)));

    if (t152 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x793 = 467U;
	volatile int8_t x794 = INT8_MAX;
	static volatile uint64_t x795 = 1484LLU;
	int64_t x796 = 264712099631112LL;

    t153 = (x793+(x794/(x795%x796)));

    if (t153 != 467LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x799 = 2950U;
	int16_t x800 = INT16_MAX;

    t154 = (x797+(x798/(x799%x800)));

    if (t154 != -9223372036853319888LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x801 = UINT16_MAX;
	static int64_t x802 = INT64_MAX;
	int8_t x803 = INT8_MIN;
	int32_t x804 = -83173915;
	volatile int64_t t155 = -4922092555LL;

    t155 = (x801+(x802/(x803%x804)));

    if (t155 != -72057594037862400LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x814 = UINT16_MAX;
	uint8_t x816 = 44U;
	int32_t t156 = 3237968;

    t156 = (x813+(x814/(x815%x816)));

    if (t156 != 2439) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x817 = INT64_MIN;
	int64_t x818 = 0LL;
	uint32_t x819 = 31216335U;
	static int32_t x820 = INT32_MAX;
	static volatile int64_t t157 = INT64_MIN;

    t157 = (x817+(x818/(x819%x820)));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x821 = 81U;
	int8_t x822 = INT8_MAX;
	int64_t x823 = INT64_MAX;
	static uint64_t x824 = 1687LLU;
	volatile uint64_t t158 = 74769005LLU;

    t158 = (x821+(x822/(x823%x824)));

    if (t158 != 81LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x826 = INT8_MIN;
	int16_t x827 = INT16_MIN;
	int32_t x828 = INT32_MIN;
	volatile int32_t t159 = 1777058;

    t159 = (x825+(x826/(x827%x828)));

    if (t159 != -45) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x830 = -12;
	int16_t x832 = -29;
	int64_t t160 = -2907035595420092084LL;

    t160 = (x829+(x830/(x831%x832)));

    if (t160 != -126017815400LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x834 = 3U;
	static volatile uint16_t x835 = 2U;
	int64_t x836 = -52405538306LL;
	int64_t t161 = -457LL;

    t161 = (x833+(x834/(x835%x836)));

    if (t161 != -14368135737LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x837 = -3;
	int8_t x838 = -14;
	static uint64_t x839 = UINT64_MAX;
	static int16_t x840 = INT16_MIN;
	static uint64_t t162 = 1064593046494893711LLU;

    t162 = (x837+(x838/(x839%x840)));

    if (t162 != 562967133814797LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x846 = -1;
	uint64_t x847 = UINT64_MAX;
	int64_t x848 = -10962LL;
	uint64_t t163 = 2488077761607910882LLU;

    t163 = (x845+(x846/(x847%x848)));

    if (t163 != 1682943533775110LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x849 = 3607975;
	uint32_t x851 = 577656432U;
	uint32_t x852 = UINT32_MAX;
	uint32_t t164 = 18817376U;

    t164 = (x849+(x850/(x851%x852)));

    if (t164 != 3607975U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x853 = 1U;
	uint32_t x854 = UINT32_MAX;
	volatile int32_t x855 = INT32_MAX;
	int16_t x856 = INT16_MIN;
	volatile uint32_t t165 = 70U;

    t165 = (x853+(x854/(x855%x856)));

    if (t165 != 131077U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x857 = UINT16_MAX;
	int8_t x858 = -1;
	int16_t x859 = INT16_MIN;
	uint32_t x860 = 241523U;
	uint32_t t166 = 502U;

    t166 = (x857+(x858/(x859%x860)));

    if (t166 != 90427U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x862 = 71103701U;
	uint64_t x863 = 35LLU;
	volatile uint64_t t167 = 8236879715855060LLU;

    t167 = (x861+(x862/(x863%x864)));

    if (t167 != 2031661LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x866 = 32U;
	int8_t x867 = INT8_MIN;
	static uint16_t x868 = UINT16_MAX;
	volatile int64_t t168 = -310146260404591758LL;

    t168 = (x865+(x866/(x867%x868)));

    if (t168 != 358792LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x870 = 0;
	static int8_t x871 = INT8_MAX;
	uint32_t x872 = UINT32_MAX;

    t169 = (x869+(x870/(x871%x872)));

    if (t169 != 1950U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x878 = 70U;
	uint8_t x879 = 1U;
	int8_t x880 = INT8_MAX;
	static volatile int32_t t170 = 5215798;

    t170 = (x877+(x878/(x879%x880)));

    if (t170 != 65605) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x881 = 752U;
	int32_t x882 = INT32_MAX;
	int16_t x883 = INT16_MAX;
	int64_t x884 = INT64_MIN;

    t171 = (x881+(x882/(x883%x884)));

    if (t171 != 66290LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x893 = 46;
	static int64_t x894 = -1LL;
	int64_t x895 = INT64_MIN;
	volatile uint64_t x896 = 551279749110542193LLU;

    t172 = (x893+(x894/(x895%x896)));

    if (t172 != 91LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x902 = INT64_MIN;
	int32_t x903 = -4756963;
	int64_t t173 = -13281440LL;

    t173 = (x901+(x902/(x903%x904)));

    if (t173 != 1936772797391LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x905 = -1;
	int32_t x906 = INT32_MIN;
	int32_t x908 = 17313639;
	volatile int64_t t174 = -623414784LL;

    t174 = (x905+(x906/(x907%x908)));

    if (t174 != -347LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x909 = 406;
	volatile uint16_t x910 = UINT16_MAX;
	int8_t x911 = -3;
	static int64_t x912 = INT64_MIN;
	volatile int64_t t175 = 341899220335134270LL;

    t175 = (x909+(x910/(x911%x912)));

    if (t175 != -21439LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x914 = INT8_MIN;
	int8_t x915 = INT8_MAX;
	static int32_t t176 = -3380388;

    t176 = (x913+(x914/(x915%x916)));

    if (t176 != 126) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x917 = 17U;
	int16_t x918 = -1;
	volatile int16_t x919 = INT16_MIN;
	int64_t x920 = -2233LL;

    t177 = (x917+(x918/(x919%x920)));

    if (t177 != 17LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x922 = 2009851LL;
	static int64_t x924 = INT64_MAX;

    t178 = (x921+(x922/(x923%x924)));

    if (t178 != -2676066LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x929 = -869997103194LL;
	static int64_t x931 = INT64_MAX;
	uint64_t t179 = 254LLU;

    t179 = (x929+(x930/(x931%x932)));

    if (t179 != 18446743203712448422LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x933 = 350186843024LL;
	int16_t x934 = INT16_MAX;
	static int32_t x935 = INT32_MIN;
	int16_t x936 = -12;

    t180 = (x933+(x934/(x935%x936)));

    if (t180 != 350186838929LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x937 = -1;
	volatile int8_t x938 = INT8_MAX;
	int16_t x939 = -1019;
	int16_t x940 = 493;
	volatile int32_t t181 = 150;

    t181 = (x937+(x938/(x939%x940)));

    if (t181 != -4) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x941 = INT8_MIN;
	int16_t x943 = 1712;
	static uint32_t x944 = UINT32_MAX;
	uint32_t t182 = 24771513U;

    t182 = (x941+(x942/(x943%x944)));

    if (t182 != 2508595U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x945 = -1;
	static int64_t x946 = INT64_MAX;
	static volatile int8_t x947 = -1;
	static int16_t x948 = INT16_MIN;
	int64_t t183 = INT64_MIN;

    t183 = (x945+(x946/(x947%x948)));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x953 = INT64_MAX;
	volatile uint64_t x954 = 10215862LLU;
	int16_t x955 = -1;
	uint16_t x956 = UINT16_MAX;
	static volatile uint64_t t184 = 289540407640917LLU;

    t184 = (x953+(x954/(x955%x956)));

    if (t184 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x961 = 18;
	int8_t x963 = -1;
	int8_t x964 = 5;
	int32_t t185 = 2907516;

    t185 = (x961+(x962/(x963%x964)));

    if (t185 != 19) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x965 = INT8_MIN;
	int32_t x966 = INT32_MIN;
	volatile uint32_t x967 = 237U;
	int32_t x968 = INT32_MAX;
	volatile uint32_t t186 = 57215048U;

    t186 = (x965+(x966/(x967%x968)));

    if (t186 != 9060984U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x969 = 93LLU;
	int8_t x970 = INT8_MIN;
	static volatile int64_t x971 = INT64_MIN;
	int64_t x972 = -137453LL;
	uint64_t t187 = 225LLU;

    t187 = (x969+(x970/(x971%x972)));

    if (t187 != 93LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x981 = 15578U;
	volatile uint8_t x982 = UINT8_MAX;
	static volatile uint64_t x984 = 19LLU;

    t188 = (x981+(x982/(x983%x984)));

    if (t188 != 15609LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x985 = 56;
	int32_t x986 = INT32_MIN;
	volatile int64_t t189 = 9783861587375LL;

    t189 = (x985+(x986/(x987%x988)));

    if (t189 != -65482LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x989 = -1;
	int16_t x991 = -1;
	static uint8_t x992 = UINT8_MAX;
	int32_t t190 = 43;

    t190 = (x989+(x990/(x991%x992)));

    if (t190 != -154) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x994 = 25561U;

    t191 = (x993+(x994/(x995%x996)));

    if (t191 != 58LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x997 = 74536850;
	int64_t x998 = INT64_MAX;
	uint64_t x999 = 12781LLU;
	static int8_t x1000 = -1;

    t192 = (x997+(x998/(x999%x1000)));

    if (t192 != 721647209882658LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1001 = INT32_MIN;
	volatile int32_t x1002 = INT32_MAX;
	uint64_t x1004 = 3478098086185093323LLU;

    t193 = (x1001+(x1002/(x1003%x1004)));

    if (t193 != 18446744071578977288LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1005 = INT8_MIN;
	int64_t x1006 = INT64_MAX;
	uint16_t x1008 = UINT16_MAX;
	volatile int64_t t194 = 1308227LL;

    t194 = (x1005+(x1006/(x1007%x1008)));

    if (t194 != 36170086419038208LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1009 = INT64_MAX;
	int8_t x1010 = -1;
	volatile uint64_t x1011 = UINT64_MAX;
	int64_t x1012 = 68102875860080244LL;
	uint64_t t195 = 3LLU;

    t195 = (x1009+(x1010/(x1011%x1012)));

    if (t195 != 9223372036854776119LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1014 = INT32_MIN;
	uint8_t x1016 = UINT8_MAX;
	int32_t t196 = 52;

    t196 = (x1013+(x1014/(x1015%x1016)));

    if (t196 != 178956984) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1017 = INT16_MIN;
	volatile int8_t x1018 = INT8_MAX;
	static uint32_t x1019 = UINT32_MAX;
	volatile int16_t x1020 = INT16_MIN;
	volatile uint32_t t197 = 44122U;

    t197 = (x1017+(x1018/(x1019%x1020)));

    if (t197 != 4294934528U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1021 = INT16_MAX;
	uint64_t x1022 = 6426LLU;
	int8_t x1024 = INT8_MIN;

    t198 = (x1021+(x1022/(x1023%x1024)));

    if (t198 != 32767LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1033 = INT8_MIN;
	int16_t x1034 = INT16_MAX;

    t199 = (x1033+(x1034/(x1035%x1036)));

    if (t199 != 276) { NG(); } else { ; }
	
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

