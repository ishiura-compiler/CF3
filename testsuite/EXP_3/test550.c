
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

uint8_t x1 = 49U;
int32_t x2 = INT32_MIN;
int32_t x3 = 501;
int8_t x6 = -1;
static int16_t x7 = 17;
int16_t x11 = 1;
static int16_t x12 = INT16_MAX;
static volatile uint64_t t3 = 44LLU;
uint64_t x18 = UINT64_MAX;
int16_t x21 = -28;
volatile int32_t t5 = 84168039;
volatile uint32_t x28 = UINT32_MAX;
uint8_t x38 = UINT8_MAX;
uint8_t x40 = 23U;
volatile uint16_t x41 = 127U;
int32_t x42 = -964719387;
int32_t t8 = -2718377;
int32_t x50 = INT32_MAX;
static int16_t x51 = 14220;
uint32_t x53 = UINT32_MAX;
static int64_t x54 = 170492932771331LL;
uint64_t t10 = 18011773002004143LLU;
volatile uint16_t x76 = UINT16_MAX;
int8_t x98 = -1;
uint16_t x100 = 2073U;
static int32_t t15 = 377;
uint32_t x116 = 14215472U;
uint8_t x120 = UINT8_MAX;
int32_t x122 = INT32_MIN;
volatile uint64_t t22 = 393946LLU;
int32_t x129 = 10;
int8_t x133 = INT8_MIN;
uint64_t x136 = 2299789LLU;
int64_t x146 = INT64_MIN;
volatile int64_t x152 = INT64_MAX;
static uint32_t x160 = 3U;
int64_t x164 = -1LL;
int16_t x165 = INT16_MAX;
int8_t x177 = INT8_MIN;
volatile uint64_t t32 = 1531673944749604471LLU;
uint32_t x181 = 27556502U;
static int8_t x184 = -1;
int16_t x199 = INT16_MIN;
static uint8_t x200 = 1U;
int16_t x202 = INT16_MIN;
int8_t x211 = -1;
uint8_t x226 = 4U;
volatile int32_t t42 = -237223339;
static volatile int32_t x229 = INT32_MIN;
volatile uint8_t x234 = UINT8_MAX;
int8_t x235 = INT8_MAX;
volatile int32_t x245 = -40711692;
int16_t x247 = INT16_MIN;
int64_t x255 = 24977LL;
static uint16_t x256 = 652U;
volatile int32_t x257 = INT32_MAX;
int8_t x262 = INT8_MAX;
uint8_t x263 = 5U;
uint64_t t51 = 285667479971262301LLU;
volatile int64_t x279 = INT64_MAX;
volatile uint8_t x281 = 1U;
int64_t t53 = -11090716LL;
volatile uint64_t x288 = 3343LLU;
volatile int8_t x290 = -51;
int64_t x293 = INT64_MIN;
uint16_t x296 = 14U;
volatile uint64_t x300 = 100388226475LLU;
volatile uint64_t t57 = 1586896076338750LLU;
static uint16_t x302 = 830U;
static int16_t x303 = INT16_MAX;
volatile int64_t t59 = -6174LL;
volatile int32_t x310 = -817;
volatile int16_t x331 = -16215;
int32_t x338 = INT32_MAX;
int8_t x339 = INT8_MAX;
uint16_t x340 = UINT16_MAX;
static int32_t x346 = INT32_MIN;
volatile int8_t x348 = 1;
int16_t x349 = INT16_MAX;
uint8_t x350 = 37U;
uint32_t x364 = UINT32_MAX;
int64_t x389 = -1LL;
uint16_t x393 = UINT16_MAX;
static int16_t x404 = INT16_MIN;
int32_t x405 = INT32_MAX;
int8_t x413 = -1;
int64_t x414 = INT64_MAX;
int16_t x420 = INT16_MIN;
volatile int32_t x431 = -1;
uint16_t x435 = UINT16_MAX;
int8_t x446 = INT8_MIN;
int64_t x453 = -1LL;
int16_t x455 = -60;
int64_t x478 = -1LL;
static int64_t t85 = 208LL;
static uint32_t t86 = 612U;
volatile int16_t x489 = INT16_MIN;
volatile int16_t x492 = -1;
int32_t t88 = -25;
uint64_t t89 = 7154728924802LLU;
static int16_t x516 = 1;
uint8_t x524 = UINT8_MAX;
int64_t x532 = -1LL;
volatile int32_t x540 = INT32_MIN;
static int32_t t98 = 1;
uint64_t x569 = 5495892584970021592LLU;
int8_t x570 = 0;
static uint64_t x572 = 4997313LLU;
int16_t x574 = -1;
static uint64_t t101 = 27401301LLU;
int8_t x577 = -1;
volatile uint32_t t102 = 0U;
int64_t x583 = 939212LL;
volatile uint64_t t104 = 1060772398LLU;
int8_t x592 = -1;
static int8_t x597 = 0;
uint8_t x615 = UINT8_MAX;
static int16_t x616 = INT16_MIN;
uint32_t x619 = UINT32_MAX;
int8_t x627 = INT8_MIN;
int8_t x631 = INT8_MIN;
volatile int64_t t112 = 14242949668LL;
int16_t x633 = 8;
volatile int64_t t114 = 685LL;
static int32_t x662 = -842188;
int8_t x663 = INT8_MAX;
static volatile uint32_t t116 = 317389491U;
uint64_t t117 = 3974202789602705968LLU;
int16_t x671 = -7;
uint8_t x672 = 1U;
volatile int32_t x674 = INT32_MIN;
static uint16_t x679 = 7U;
int8_t x685 = 2;
uint64_t t122 = 201LLU;
int64_t t123 = 39360115180337LL;
int16_t x702 = INT16_MAX;
int64_t x705 = INT64_MAX;
int32_t t126 = 49582934;
int32_t x721 = INT32_MIN;
volatile uint64_t x729 = UINT64_MAX;
int32_t x742 = INT32_MIN;
int16_t x775 = INT16_MIN;
int16_t x776 = INT16_MIN;
int16_t x778 = INT16_MIN;
uint32_t x782 = 185223U;
static int16_t x785 = INT16_MIN;
uint16_t x787 = UINT16_MAX;
int8_t x799 = INT8_MIN;
uint8_t x806 = 38U;
int16_t x814 = INT16_MIN;
uint32_t x829 = 0U;
int32_t x854 = INT32_MIN;
int32_t t152 = 4811;
static int16_t x886 = INT16_MIN;
static int32_t x887 = -1;
static uint32_t x888 = 591597378U;
volatile int64_t t154 = -3482367LL;
int16_t x893 = -5;
uint64_t x895 = UINT64_MAX;
volatile uint64_t t158 = 644588LLU;
uint32_t x920 = 254U;
uint64_t x923 = 507205LLU;
uint8_t x935 = 2U;
uint64_t x955 = 1448975985901LLU;
uint64_t x959 = UINT64_MAX;
uint16_t x967 = 27590U;
volatile int64_t x982 = 294341LL;
static volatile int8_t x983 = -1;
int64_t t166 = -174LL;
int8_t x987 = INT8_MIN;
uint64_t x993 = 125918260576498LLU;
uint32_t x996 = 15580693U;
int64_t x1010 = -11179881LL;
int16_t x1011 = -822;
uint16_t x1012 = UINT16_MAX;
uint64_t t172 = 115396048243LLU;
int32_t x1022 = -1;
int8_t x1024 = -1;
volatile int64_t t173 = -49311680454377LL;
int64_t x1025 = INT64_MAX;
int8_t x1047 = INT8_MIN;
uint32_t x1063 = UINT32_MAX;
int8_t x1068 = INT8_MAX;
int64_t t182 = 2525146884663831LL;
static uint8_t x1079 = UINT8_MAX;
uint64_t t184 = 6769892975358LLU;
uint64_t t185 = 120528315175LLU;
uint64_t x1093 = UINT64_MAX;
uint64_t x1095 = UINT64_MAX;
int8_t x1097 = 0;
int8_t x1098 = -1;
int32_t x1100 = 157;
volatile uint64_t x1105 = 2284202799071266LLU;
int32_t x1106 = INT32_MAX;
int32_t x1107 = -1;
int16_t x1116 = -1;
volatile int32_t t191 = -40298717;
int8_t x1125 = -1;
uint8_t x1127 = 2U;
int16_t x1129 = -1;
int8_t x1131 = INT8_MAX;
static volatile int32_t t193 = 12328932;
volatile int8_t x1134 = -1;
int64_t x1135 = -1LL;
int16_t x1138 = INT16_MIN;
static volatile uint16_t x1139 = UINT16_MAX;
volatile uint32_t t195 = 18U;
static int32_t x1147 = 1993835;
volatile int32_t x1155 = 1520025;
uint8_t x1165 = 2U;
int32_t x1168 = -438608;


void f0(void) {
    	uint16_t x4 = 2U;
	volatile int32_t t0 = -1;

    t0 = ((x1&x2)/(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	volatile int32_t x8 = -1;
	int64_t t1 = -1705189805284007553LL;

    t1 = ((x5&x6)/(x7*x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MIN;
	uint32_t t2 = 1U;

    t2 = ((x9&x10)/(x11*x12));

    if (t2 != 65538U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x13 = 2770LLU;
	int64_t x14 = INT64_MIN;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;

    t3 = ((x13&x14)/(x15*x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 144U;
	uint32_t x19 = 2412U;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 14135222494931031LLU;

    t4 = ((x17&x18)/(x19*x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = INT32_MAX;
	uint8_t x23 = 2U;
	int8_t x24 = INT8_MIN;

    t5 = ((x21&x22)/(x23*x24));

    if (t5 != -8388607) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int16_t x26 = 383;
	uint16_t x27 = 4964U;
	int64_t t6 = -3295232098648LL;

    t6 = ((x25&x26)/(x27*x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x37 = UINT16_MAX;
	uint16_t x39 = 21U;
	int32_t t7 = -28073173;

    t7 = ((x37&x38)/(x39*x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;

    t8 = ((x41&x42)/(x43*x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x49 = INT16_MIN;
	int16_t x52 = 1;
	volatile int32_t t9 = 1;

    t9 = ((x49&x50)/(x51*x52));

    if (t9 != 151016) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x55 = 15964LLU;
	int32_t x56 = INT32_MIN;

    t10 = ((x53&x54)/(x55*x56));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = -47;
	int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = 789LLU;
	volatile uint64_t t11 = 803537LLU;

    t11 = ((x57&x58)/(x59*x60));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = -1;
	int64_t x74 = 11844LL;
	int8_t x75 = -1;
	int64_t t12 = 22371151LL;

    t12 = ((x73&x74)/(x75*x76));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x77 = 3U;
	uint32_t x78 = 757989261U;
	uint64_t x79 = UINT64_MAX;
	static int64_t x80 = INT64_MAX;
	volatile uint64_t t13 = 1017896552707459LLU;

    t13 = ((x77&x78)/(x79*x80));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x89 = 77816LLU;
	uint8_t x90 = 8U;
	uint32_t x91 = 1U;
	int8_t x92 = -1;
	volatile uint64_t t14 = 270965888913390LLU;

    t14 = ((x89&x90)/(x91*x92));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x97 = INT32_MIN;
	uint8_t x99 = 3U;

    t15 = ((x97&x98)/(x99*x100));

    if (t15 != -345310) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x101 = 54;
	volatile uint8_t x102 = 22U;
	uint8_t x103 = 91U;
	uint16_t x104 = 6U;
	volatile int32_t t16 = 0;

    t16 = ((x101&x102)/(x103*x104));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x105 = -1;
	int16_t x106 = INT16_MIN;
	static uint64_t x107 = 794708334105LLU;
	static int32_t x108 = INT32_MIN;
	static uint64_t t17 = 30LLU;

    t17 = ((x105&x106)/(x107*x108));

    if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x109 = INT8_MIN;
	static int8_t x110 = -53;
	static int8_t x111 = INT8_MIN;
	static volatile int64_t x112 = -1LL;
	int64_t t18 = 11290LL;

    t18 = ((x109&x110)/(x111*x112));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x113 = -1;
	int16_t x114 = -1;
	uint8_t x115 = 14U;
	uint32_t t19 = 1053181U;

    t19 = ((x113&x114)/(x115*x116));

    if (t19 != 21U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x117 = INT64_MAX;
	static volatile int32_t x118 = -15;
	volatile int8_t x119 = -4;
	volatile int64_t t20 = -149801084725551LL;

    t20 = ((x117&x118)/(x119*x120));

    if (t20 != -9042521604759584LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x121 = INT8_MIN;
	volatile uint32_t x123 = 46626828U;
	uint32_t x124 = UINT32_MAX;
	uint32_t t21 = 8304U;

    t21 = ((x121&x122)/(x123*x124));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	volatile uint16_t x127 = UINT16_MAX;
	uint64_t x128 = UINT64_MAX;

    t22 = ((x125&x126)/(x127*x128));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x130 = -6595536046LL;
	volatile int8_t x131 = INT8_MAX;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int64_t t23 = 735LL;

    t23 = ((x129&x130)/(x131*x132));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x134 = -1;
	static int16_t x135 = -1;
	static volatile uint64_t t24 = 0LLU;

    t24 = ((x133&x134)/(x135*x136));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x145 = 4304380502646288219LLU;
	int32_t x147 = -1;
	int16_t x148 = -1;
	volatile uint64_t t25 = 6160841378422587218LLU;

    t25 = ((x145&x146)/(x147*x148));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = 1U;
	volatile int64_t t26 = -518949656414LL;

    t26 = ((x149&x150)/(x151*x152));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x157 = 16U;
	static volatile uint8_t x158 = UINT8_MAX;
	uint32_t x159 = 110963U;
	volatile uint32_t t27 = 0U;

    t27 = ((x157&x158)/(x159*x160));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x161 = 1073;
	int32_t x162 = 88222761;
	uint64_t x163 = 6LLU;
	volatile uint64_t t28 = 855161919793LLU;

    t28 = ((x161&x162)/(x163*x164));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x166 = INT16_MIN;
	uint32_t x167 = UINT32_MAX;
	volatile int64_t x168 = -1LL;
	int64_t t29 = 1359912LL;

    t29 = ((x165&x166)/(x167*x168));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x169 = INT8_MAX;
	static uint8_t x170 = UINT8_MAX;
	uint16_t x171 = 4U;
	int32_t x172 = 7245;
	volatile int32_t t30 = -3;

    t30 = ((x169&x170)/(x171*x172));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x173 = 7LLU;
	int8_t x174 = INT8_MIN;
	static int16_t x175 = 2;
	volatile uint32_t x176 = 29155785U;
	uint64_t t31 = 96792004084158737LLU;

    t31 = ((x173&x174)/(x175*x176));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x178 = INT64_MAX;
	uint64_t x179 = UINT64_MAX;
	static uint8_t x180 = 31U;

    t32 = ((x177&x178)/(x179*x180));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x182 = -1;
	static volatile int8_t x183 = INT8_MAX;
	volatile uint32_t t33 = 957U;

    t33 = ((x181&x182)/(x183*x184));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	volatile uint16_t x187 = 25286U;
	volatile uint64_t x188 = UINT64_MAX;
	static uint64_t t34 = 19030445321LLU;

    t34 = ((x185&x186)/(x187*x188));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x193 = 52409795U;
	uint32_t x194 = UINT32_MAX;
	static int16_t x195 = INT16_MAX;
	int64_t x196 = -1LL;
	int64_t t35 = -8537497LL;

    t35 = ((x193&x194)/(x195*x196));

    if (t35 != -1599LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x197 = INT32_MAX;
	int64_t x198 = INT64_MIN;
	volatile int64_t t36 = 691540504158574LL;

    t36 = ((x197&x198)/(x199*x200));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x201 = INT16_MIN;
	static int8_t x203 = INT8_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t37 = 1;

    t37 = ((x201&x202)/(x203*x204));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x205 = 260648;
	int64_t x206 = -1LL;
	int16_t x207 = INT16_MIN;
	volatile int64_t x208 = -1798LL;
	int64_t t38 = -27LL;

    t38 = ((x205&x206)/(x207*x208));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	volatile int32_t x212 = 62325;
	int32_t t39 = 187929;

    t39 = ((x209&x210)/(x211*x212));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x213 = INT8_MIN;
	volatile uint16_t x214 = 1U;
	static uint16_t x215 = 305U;
	static uint32_t x216 = UINT32_MAX;
	static volatile uint32_t t40 = 19649U;

    t40 = ((x213&x214)/(x215*x216));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x217 = -1;
	int32_t x218 = -1;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 3097U;
	int32_t t41 = -376355;

    t41 = ((x217&x218)/(x219*x220));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x225 = 5904U;
	int8_t x227 = 1;
	volatile int32_t x228 = 10355;

    t42 = ((x225&x226)/(x227*x228));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x230 = INT32_MAX;
	static volatile int16_t x231 = 22;
	volatile uint32_t x232 = 7434U;
	uint32_t t43 = 174U;

    t43 = ((x229&x230)/(x231*x232));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x233 = INT64_MIN;
	static int16_t x236 = INT16_MIN;
	volatile int64_t t44 = -1289599135487803LL;

    t44 = ((x233&x234)/(x235*x236));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x237 = -3LL;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = 1518552U;
	volatile uint16_t x240 = 2232U;
	volatile int64_t t45 = -214743084558356619LL;

    t45 = ((x237&x238)/(x239*x240));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x241 = INT16_MAX;
	uint32_t x242 = 24U;
	volatile int8_t x243 = INT8_MIN;
	int64_t x244 = 469888LL;
	volatile int64_t t46 = 26451777926LL;

    t46 = ((x241&x242)/(x243*x244));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x246 = INT16_MIN;
	static int64_t x248 = 185LL;
	int64_t t47 = -1217705593046964225LL;

    t47 = ((x245&x246)/(x247*x248));

    if (t47 != 6LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x253 = 374U;
	volatile int32_t x254 = INT32_MAX;
	int64_t t48 = 6137398951LL;

    t48 = ((x253&x254)/(x255*x256));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x258 = 117601;
	static int64_t x259 = -9449492134101840LL;
	uint64_t x260 = 4894106047956836LLU;
	uint64_t t49 = 2724LLU;

    t49 = ((x257&x258)/(x259*x260));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x261 = 1530U;
	static int8_t x264 = INT8_MIN;
	static volatile uint32_t t50 = 183U;

    t50 = ((x261&x262)/(x263*x264));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x269 = 9826U;
	static int16_t x270 = 5326;
	volatile uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;

    t51 = ((x269&x270)/(x271*x272));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x277 = INT32_MIN;
	volatile int16_t x278 = INT16_MIN;
	int32_t x280 = -1;
	volatile int64_t t52 = 769957224277763LL;

    t52 = ((x277&x278)/(x279*x280));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x282 = -1LL;
	int16_t x283 = 20;
	int16_t x284 = INT16_MIN;

    t53 = ((x281&x282)/(x283*x284));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x285 = INT8_MIN;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MAX;
	uint64_t t54 = 47845823158LLU;

    t54 = ((x285&x286)/(x287*x288));

    if (t54 != 84200887498LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	uint64_t x291 = 694205440684LLU;
	int16_t x292 = 101;
	volatile uint64_t t55 = 42289224013336LLU;

    t55 = ((x289&x290)/(x291*x292));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = INT8_MIN;
	volatile int64_t t56 = 1704656824508LL;

    t56 = ((x293&x294)/(x295*x296));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x297 = 279U;
	uint16_t x298 = 3U;
	int8_t x299 = -1;

    t57 = ((x297&x298)/(x299*x300));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x301 = 378U;
	uint64_t x304 = 8082770756989334LLU;
	uint64_t t58 = 142387LLU;

    t58 = ((x301&x302)/(x303*x304));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x305 = -1LL;
	int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MAX;
	int16_t x308 = -1;

    t59 = ((x305&x306)/(x307*x308));

    if (t59 != -65538LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x309 = -1;
	uint64_t x311 = 7643208269286LLU;
	uint16_t x312 = 8U;
	volatile uint64_t t60 = 22601245663LLU;

    t60 = ((x309&x310)/(x311*x312));

    if (t60 != 301685LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x313 = -1;
	volatile uint16_t x314 = 3063U;
	int16_t x315 = -1;
	volatile int16_t x316 = INT16_MAX;
	int32_t t61 = 3792865;

    t61 = ((x313&x314)/(x315*x316));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x317 = 59U;
	int64_t x318 = INT64_MIN;
	volatile int32_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	volatile int64_t t62 = -2469118294192219701LL;

    t62 = ((x317&x318)/(x319*x320));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x325 = INT64_MIN;
	static uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 10U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t63 = 682213715714257958LLU;

    t63 = ((x325&x326)/(x327*x328));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x329 = 39473LLU;
	volatile int32_t x330 = INT32_MAX;
	volatile uint16_t x332 = 55U;
	volatile uint64_t t64 = 1641457258373LLU;

    t64 = ((x329&x330)/(x331*x332));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x337 = 14374U;
	int32_t t65 = 706610;

    t65 = ((x337&x338)/(x339*x340));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x345 = -221720743;
	int64_t x347 = INT64_MIN;
	volatile int64_t t66 = 11876362540530244LL;

    t66 = ((x345&x346)/(x347*x348));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x351 = INT32_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	static uint64_t t67 = 6137673LLU;

    t67 = ((x349&x350)/(x351*x352));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x353 = 934;
	int64_t x354 = INT64_MIN;
	volatile uint16_t x355 = 54U;
	int16_t x356 = -6;
	volatile int64_t t68 = -873563498LL;

    t68 = ((x353&x354)/(x355*x356));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x361 = INT16_MIN;
	static int64_t x362 = INT64_MIN;
	int32_t x363 = 2161;
	static int64_t t69 = 978789LL;

    t69 = ((x361&x362)/(x363*x364));

    if (t69 != -2147484728LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	volatile uint64_t x371 = 320943LLU;
	uint64_t x372 = 4585430LLU;
	static volatile uint64_t t70 = 380386817714935012LLU;

    t70 = ((x369&x370)/(x371*x372));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x381 = -1;
	int32_t x382 = 210;
	volatile int8_t x383 = INT8_MIN;
	static int16_t x384 = 215;
	volatile int32_t t71 = 121225;

    t71 = ((x381&x382)/(x383*x384));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x390 = -1;
	int64_t x391 = -1LL;
	int8_t x392 = INT8_MIN;
	int64_t t72 = 1682LL;

    t72 = ((x389&x390)/(x391*x392));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x394 = INT64_MIN;
	uint32_t x395 = 3730725U;
	int32_t x396 = -12589655;
	volatile int64_t t73 = -61912948LL;

    t73 = ((x393&x394)/(x395*x396));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x401 = 16;
	uint64_t x402 = 159214296241668847LLU;
	int64_t x403 = 194578510558LL;
	volatile uint64_t t74 = 386798888932936645LLU;

    t74 = ((x401&x402)/(x403*x404));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x406 = -1;
	int16_t x407 = -1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t75 = -2;

    t75 = ((x405&x406)/(x407*x408));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x409 = INT32_MIN;
	int8_t x410 = -1;
	volatile int64_t x411 = -1LL;
	volatile uint16_t x412 = 45U;
	static volatile int64_t t76 = 213621676LL;

    t76 = ((x409&x410)/(x411*x412));

    if (t76 != 47721858LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x415 = -25;
	static volatile int16_t x416 = INT16_MIN;
	volatile int64_t t77 = -2713970LL;

    t77 = ((x413&x414)/(x415*x416));

    if (t77 != 11258999068426LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x417 = 41U;
	volatile uint32_t x418 = UINT32_MAX;
	volatile int64_t x419 = -782515LL;
	int64_t t78 = 204931635779LL;

    t78 = ((x417&x418)/(x419*x420));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x425 = UINT16_MAX;
	uint8_t x426 = 1U;
	uint8_t x427 = 4U;
	static int64_t x428 = -1LL;
	int64_t t79 = 994970133886967975LL;

    t79 = ((x425&x426)/(x427*x428));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x429 = -1;
	int16_t x430 = -306;
	uint64_t x432 = 1012030122LLU;
	volatile uint64_t t80 = 582525820752901629LLU;

    t80 = ((x429&x430)/(x431*x432));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x433 = -198206;
	volatile uint16_t x434 = 223U;
	static volatile int16_t x436 = -1;
	int32_t t81 = -36567331;

    t81 = ((x433&x434)/(x435*x436));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x447 = 35329112564931686LLU;
	volatile uint64_t x448 = 126292520888956LLU;
	static volatile uint64_t t82 = 28174918585LLU;

    t82 = ((x445&x446)/(x447*x448));

    if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x454 = -1;
	volatile int16_t x456 = -34;
	volatile int64_t t83 = 140871616322987809LL;

    t83 = ((x453&x454)/(x455*x456));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x465 = UINT64_MAX;
	volatile uint8_t x466 = 0U;
	static int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	uint64_t t84 = 7371549488LLU;

    t84 = ((x465&x466)/(x467*x468));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x477 = UINT16_MAX;
	volatile uint16_t x479 = 19U;
	static int64_t x480 = -1LL;

    t85 = ((x477&x478)/(x479*x480));

    if (t85 != -3449LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x481 = 7019015U;
	volatile int16_t x482 = INT16_MIN;
	uint32_t x483 = 19U;
	int32_t x484 = INT32_MIN;

    t86 = ((x481&x482)/(x483*x484));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x485 = 13;
	static uint32_t x486 = 6094913U;
	volatile int16_t x487 = -22;
	int16_t x488 = INT16_MIN;
	static uint32_t t87 = 25547147U;

    t87 = ((x485&x486)/(x487*x488));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x490 = 43;
	int8_t x491 = -2;

    t88 = ((x489&x490)/(x491*x492));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x501 = 29U;
	uint32_t x502 = 2818986U;
	volatile uint64_t x503 = 6771505809097584049LLU;
	uint64_t x504 = 68425LLU;

    t89 = ((x501&x502)/(x503*x504));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x505 = 1U;
	static int64_t x506 = INT64_MAX;
	volatile int8_t x507 = INT8_MIN;
	int8_t x508 = 1;
	volatile int64_t t90 = 27222684344626LL;

    t90 = ((x505&x506)/(x507*x508));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x509 = -34871280;
	static int32_t x510 = INT32_MAX;
	static volatile uint16_t x511 = 728U;
	int16_t x512 = 1;
	int32_t t91 = 464121;

    t91 = ((x509&x510)/(x511*x512));

    if (t91 != 2901940) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x513 = UINT8_MAX;
	int16_t x514 = -1;
	uint16_t x515 = 1U;
	int32_t t92 = -105561;

    t92 = ((x513&x514)/(x515*x516));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x521 = INT32_MAX;
	static int64_t x522 = INT64_MAX;
	volatile int16_t x523 = 60;
	int64_t t93 = 156410903971LL;

    t93 = ((x521&x522)/(x523*x524));

    if (t93 != 140358LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile uint16_t x526 = UINT16_MAX;
	uint64_t x527 = 188401886856900LLU;
	static int16_t x528 = -1249;
	volatile uint64_t t94 = 1LLU;

    t94 = ((x525&x526)/(x527*x528));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x529 = INT32_MAX;
	volatile int16_t x530 = -1;
	uint16_t x531 = UINT16_MAX;
	int64_t t95 = -114156596LL;

    t95 = ((x529&x530)/(x531*x532));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x537 = 0;
	static uint8_t x538 = 73U;
	volatile uint64_t x539 = 25146LLU;
	uint64_t t96 = 1397262225LLU;

    t96 = ((x537&x538)/(x539*x540));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x541 = 13381;
	uint8_t x542 = UINT8_MAX;
	int16_t x543 = -227;
	volatile int16_t x544 = INT16_MIN;
	int32_t t97 = -19;

    t97 = ((x541&x542)/(x543*x544));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x553 = INT16_MIN;
	static uint16_t x554 = UINT16_MAX;
	static volatile uint16_t x555 = 332U;
	int16_t x556 = -1;

    t98 = ((x553&x554)/(x555*x556));

    if (t98 != -98) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x561 = 5U;
	static volatile int8_t x562 = INT8_MAX;
	static volatile int32_t x563 = INT32_MIN;
	static uint64_t x564 = 5429338386900014833LLU;
	uint64_t t99 = 409LLU;

    t99 = ((x561&x562)/(x563*x564));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x571 = INT32_MIN;
	volatile uint64_t t100 = 1947212170650162LLU;

    t100 = ((x569&x570)/(x571*x572));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x573 = INT64_MIN;
	uint64_t x575 = 387044LLU;
	uint64_t x576 = 258LLU;

    t101 = ((x573&x574)/(x575*x576));

    if (t101 != 92365477875LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x578 = INT32_MAX;
	static volatile uint32_t x579 = 1U;
	uint32_t x580 = 60U;

    t102 = ((x577&x578)/(x579*x580));

    if (t102 != 35791394U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x581 = UINT8_MAX;
	uint64_t x582 = UINT64_MAX;
	int32_t x584 = INT32_MIN;
	volatile uint64_t t103 = 3310238553LLU;

    t103 = ((x581&x582)/(x583*x584));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x585 = -12;
	uint16_t x586 = UINT16_MAX;
	uint64_t x587 = 22741423939057184LLU;
	int16_t x588 = -1;

    t104 = ((x585&x586)/(x587*x588));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x589 = 107551LL;
	int32_t x590 = -14;
	int64_t x591 = -1LL;
	volatile int64_t t105 = -12726459971000946LL;

    t105 = ((x589&x590)/(x591*x592));

    if (t105 != 107538LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x593 = 2023U;
	static int8_t x594 = 18;
	volatile uint64_t x595 = 427LLU;
	int16_t x596 = 23;
	uint64_t t106 = 15LLU;

    t106 = ((x593&x594)/(x595*x596));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x598 = -7471;
	volatile int32_t x599 = INT32_MAX;
	static int8_t x600 = -1;
	volatile int32_t t107 = 14;

    t107 = ((x597&x598)/(x599*x600));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x601 = INT8_MIN;
	static volatile int64_t x602 = -1LL;
	uint32_t x603 = 1036853U;
	static volatile int32_t x604 = 88809;
	volatile int64_t t108 = 1056114902LL;

    t108 = ((x601&x602)/(x603*x604));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x613 = INT64_MIN;
	static volatile uint64_t x614 = UINT64_MAX;
	volatile uint64_t t109 = 164616581313LLU;

    t109 = ((x613&x614)/(x615*x616));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x617 = INT16_MIN;
	int16_t x618 = -2;
	int8_t x620 = -1;
	volatile uint32_t t110 = 4008U;

    t110 = ((x617&x618)/(x619*x620));

    if (t110 != 4294934528U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x625 = 61573501290878LL;
	int8_t x626 = INT8_MIN;
	static int16_t x628 = INT16_MAX;
	int64_t t111 = -1913506767LL;

    t111 = ((x625&x626)/(x627*x628));

    if (t111 != -14680714LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x629 = 4917;
	uint32_t x630 = 230338U;
	static int64_t x632 = -1LL;

    t112 = ((x629&x630)/(x631*x632));

    if (t112 != 6LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x634 = UINT8_MAX;
	uint32_t x635 = 1102448U;
	uint8_t x636 = 8U;
	uint32_t t113 = 13425252U;

    t113 = ((x633&x634)/(x635*x636));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x645 = INT64_MIN;
	int32_t x646 = -1;
	int16_t x647 = INT16_MIN;
	int16_t x648 = -1;

    t114 = ((x645&x646)/(x647*x648));

    if (t114 != -281474976710656LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x657 = INT8_MIN;
	volatile uint32_t x658 = 29830U;
	static uint16_t x659 = UINT16_MAX;
	int16_t x660 = INT16_MIN;
	uint32_t t115 = 161U;

    t115 = ((x657&x658)/(x659*x660));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x661 = UINT32_MAX;
	int8_t x664 = -60;

    t116 = ((x661&x662)/(x663*x664));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x665 = 11347258425LLU;
	int16_t x666 = -27;
	uint8_t x667 = UINT8_MAX;
	volatile int64_t x668 = -4765582423703LL;

    t117 = ((x665&x666)/(x667*x668));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x669 = INT32_MIN;
	static int8_t x670 = 8;
	static int32_t t118 = -27614;

    t118 = ((x669&x670)/(x671*x672));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x673 = -414;
	int32_t x675 = INT32_MAX;
	uint64_t x676 = 1485LLU;
	uint64_t t119 = 1008225329598LLU;

    t119 = ((x673&x674)/(x675*x676));

    if (t119 != 5784467LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x677 = 1U;
	int64_t x678 = INT64_MIN;
	int16_t x680 = -10;
	volatile int64_t t120 = 13504655199249746LL;

    t120 = ((x677&x678)/(x679*x680));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x681 = 5U;
	int8_t x682 = 7;
	volatile uint16_t x683 = UINT16_MAX;
	static uint16_t x684 = 36U;
	int32_t t121 = 152798484;

    t121 = ((x681&x682)/(x683*x684));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x686 = UINT64_MAX;
	int16_t x687 = INT16_MIN;
	volatile int8_t x688 = 14;

    t122 = ((x685&x686)/(x687*x688));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x690 = -1;
	int64_t x691 = 9338820902LL;
	uint16_t x692 = 8964U;

    t123 = ((x689&x690)/(x691*x692));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x701 = 8192647598LLU;
	int16_t x703 = 3844;
	uint16_t x704 = UINT16_MAX;
	volatile uint64_t t124 = 553658887840LLU;

    t124 = ((x701&x702)/(x703*x704));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x706 = UINT16_MAX;
	uint64_t x707 = UINT64_MAX;
	uint32_t x708 = 360874155U;
	uint64_t t125 = 442450875725053333LLU;

    t125 = ((x705&x706)/(x707*x708));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x717 = 1;
	int16_t x718 = -18;
	int16_t x719 = INT16_MAX;
	static volatile int8_t x720 = -1;

    t126 = ((x717&x718)/(x719*x720));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x722 = INT64_MIN;
	volatile uint64_t x723 = 18LLU;
	uint16_t x724 = 2U;
	volatile uint64_t t127 = 512LLU;

    t127 = ((x721&x722)/(x723*x724));

    if (t127 != 256204778801521550LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x730 = INT8_MIN;
	volatile int64_t x731 = 124273262318LL;
	static int8_t x732 = 1;
	volatile uint64_t t128 = 482132247775LLU;

    t128 = ((x729&x730)/(x731*x732));

    if (t128 != 148436950LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x733 = INT64_MIN;
	static int32_t x734 = 0;
	int16_t x735 = INT16_MAX;
	int8_t x736 = INT8_MIN;
	static volatile int64_t t129 = -127128LL;

    t129 = ((x733&x734)/(x735*x736));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x737 = -1;
	static int16_t x738 = INT16_MIN;
	volatile int16_t x739 = -43;
	uint8_t x740 = 19U;
	volatile int32_t t130 = -3;

    t130 = ((x737&x738)/(x739*x740));

    if (t130 != 40) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x741 = 116U;
	uint8_t x743 = 7U;
	int8_t x744 = INT8_MIN;
	static uint32_t t131 = 4634910U;

    t131 = ((x741&x742)/(x743*x744));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x745 = UINT16_MAX;
	static int32_t x746 = INT32_MIN;
	int16_t x747 = INT16_MAX;
	int64_t x748 = 79371098693780LL;
	volatile int64_t t132 = 26566LL;

    t132 = ((x745&x746)/(x747*x748));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x749 = 65U;
	int16_t x750 = INT16_MIN;
	static int8_t x751 = INT8_MIN;
	volatile int8_t x752 = 2;
	int32_t t133 = -30738;

    t133 = ((x749&x750)/(x751*x752));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x753 = 22920779750LLU;
	int32_t x754 = -15;
	int32_t x755 = 330;
	int8_t x756 = INT8_MAX;
	uint64_t t134 = 1521286005847685446LLU;

    t134 = ((x753&x754)/(x755*x756));

    if (t134 != 546904LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x765 = INT8_MIN;
	static int16_t x766 = 0;
	static uint8_t x767 = 2U;
	int16_t x768 = INT16_MIN;
	int32_t t135 = -18673;

    t135 = ((x765&x766)/(x767*x768));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x773 = -222;
	int64_t x774 = INT64_MAX;
	volatile int64_t t136 = 2LL;

    t136 = ((x773&x774)/(x775*x776));

    if (t136 != 8589934591LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x777 = 95U;
	static int32_t x779 = 23;
	uint16_t x780 = 583U;
	uint32_t t137 = 160009U;

    t137 = ((x777&x778)/(x779*x780));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x781 = 42519597266389445LL;
	uint32_t x783 = 973790758U;
	int16_t x784 = -698;
	volatile int64_t t138 = 1030078885829812LL;

    t138 = ((x781&x782)/(x783*x784));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x786 = -1LL;
	int16_t x788 = INT16_MAX;
	int64_t t139 = 8942951109871486LL;

    t139 = ((x785&x786)/(x787*x788));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x793 = 668186U;
	int32_t x794 = INT32_MIN;
	int8_t x795 = INT8_MAX;
	uint8_t x796 = UINT8_MAX;
	volatile uint32_t t140 = 2017U;

    t140 = ((x793&x794)/(x795*x796));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x797 = INT32_MIN;
	static volatile int64_t x798 = INT64_MIN;
	uint32_t x800 = 14896U;
	static volatile int64_t t141 = 10236821304089LL;

    t141 = ((x797&x798)/(x799*x800));

    if (t141 != -2148437415LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x801 = INT32_MIN;
	int64_t x802 = 17996463403597752LL;
	static uint64_t x803 = 9191433242169575320LLU;
	uint32_t x804 = 2U;
	uint64_t t142 = 273806351426594LLU;

    t142 = ((x801&x802)/(x803*x804));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x805 = INT64_MIN;
	int16_t x807 = -118;
	int16_t x808 = 1258;
	int64_t t143 = 1140806LL;

    t143 = ((x805&x806)/(x807*x808));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x813 = 15287LL;
	int32_t x815 = -60885;
	static int16_t x816 = -1;
	volatile int64_t t144 = 1991LL;

    t144 = ((x813&x814)/(x815*x816));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x817 = INT16_MIN;
	int32_t x818 = INT32_MAX;
	static uint8_t x819 = 2U;
	int64_t x820 = -13328569197738145LL;
	static int64_t t145 = 33428416787033725LL;

    t145 = ((x817&x818)/(x819*x820));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x825 = INT64_MIN;
	static int8_t x826 = -1;
	volatile int32_t x827 = -1;
	static uint32_t x828 = UINT32_MAX;
	volatile int64_t t146 = INT64_MIN;

    t146 = ((x825&x826)/(x827*x828));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x830 = INT64_MAX;
	int32_t x831 = -2469;
	int16_t x832 = INT16_MIN;
	volatile int64_t t147 = 121518LL;

    t147 = ((x829&x830)/(x831*x832));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x833 = UINT8_MAX;
	int32_t x834 = -1;
	int16_t x835 = -1;
	uint16_t x836 = 7275U;
	int32_t t148 = 52;

    t148 = ((x833&x834)/(x835*x836));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x841 = INT16_MIN;
	int8_t x842 = INT8_MIN;
	static int32_t x843 = -1;
	uint16_t x844 = UINT16_MAX;
	int32_t t149 = -9790443;

    t149 = ((x841&x842)/(x843*x844));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x853 = INT32_MIN;
	static uint32_t x855 = 1966040U;
	static int64_t x856 = -1LL;
	int64_t t150 = 0LL;

    t150 = ((x853&x854)/(x855*x856));

    if (t150 != 1092LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x857 = INT32_MAX;
	volatile int16_t x858 = INT16_MIN;
	int64_t x859 = -1LL;
	uint64_t x860 = 5988619571417LLU;
	static uint64_t t151 = 5587992118692607203LLU;

    t151 = ((x857&x858)/(x859*x860));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x869 = -1;
	int16_t x870 = INT16_MAX;
	static uint16_t x871 = 28590U;
	uint16_t x872 = 1U;

    t152 = ((x869&x870)/(x871*x872));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x877 = UINT32_MAX;
	uint64_t x878 = UINT64_MAX;
	int16_t x879 = 1;
	uint8_t x880 = 3U;
	uint64_t t153 = 7489101254995LLU;

    t153 = ((x877&x878)/(x879*x880));

    if (t153 != 1431655765LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x885 = -1131LL;

    t154 = ((x885&x886)/(x887*x888));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x889 = -20;
	int64_t x890 = 65345488277544140LL;
	volatile int64_t x891 = -1406913062039LL;
	uint8_t x892 = UINT8_MAX;
	volatile int64_t t155 = -669791683866173LL;

    t155 = ((x889&x890)/(x891*x892));

    if (t155 != -182LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x894 = -1;
	uint16_t x896 = 372U;
	volatile uint64_t t156 = 1654564830690639LLU;

    t156 = ((x893&x894)/(x895*x896));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x909 = INT64_MAX;
	volatile uint64_t x910 = 97640877259546433LLU;
	volatile uint32_t x911 = UINT32_MAX;
	int32_t x912 = -1;
	volatile uint64_t t157 = 6695740LLU;

    t157 = ((x909&x910)/(x911*x912));

    if (t157 != 97640877259546433LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x913 = INT32_MAX;
	volatile int8_t x914 = INT8_MIN;
	uint16_t x915 = UINT16_MAX;
	uint64_t x916 = 473397854LLU;

    t158 = ((x913&x914)/(x915*x916));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x917 = INT8_MIN;
	static uint32_t x918 = UINT32_MAX;
	int64_t x919 = 26135LL;
	int64_t t159 = -2121LL;

    t159 = ((x917&x918)/(x919*x920));

    if (t159 != 646LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x921 = -1LL;
	volatile uint8_t x922 = UINT8_MAX;
	static volatile int32_t x924 = 81461590;
	static uint64_t t160 = 59258520LLU;

    t160 = ((x921&x922)/(x923*x924));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x933 = 3508;
	int8_t x934 = INT8_MAX;
	static uint16_t x936 = 10282U;
	static volatile int32_t t161 = -10;

    t161 = ((x933&x934)/(x935*x936));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x949 = 5;
	int8_t x950 = INT8_MIN;
	int8_t x951 = INT8_MIN;
	static uint8_t x952 = 91U;
	int32_t t162 = -5648371;

    t162 = ((x949&x950)/(x951*x952));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x953 = -1;
	int16_t x954 = -71;
	int16_t x956 = INT16_MIN;
	static volatile uint64_t t163 = 103326LLU;

    t163 = ((x953&x954)/(x955*x956));

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x957 = INT16_MIN;
	int8_t x958 = -1;
	static int8_t x960 = INT8_MAX;
	volatile uint64_t t164 = 6737491182391710534LLU;

    t164 = ((x957&x958)/(x959*x960));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x965 = 29U;
	static uint8_t x966 = 3U;
	static int8_t x968 = -1;
	uint32_t t165 = 200248492U;

    t165 = ((x965&x966)/(x967*x968));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x981 = 16023;
	int16_t x984 = INT16_MIN;

    t166 = ((x981&x982)/(x983*x984));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x985 = 30860U;
	volatile int8_t x986 = INT8_MAX;
	int16_t x988 = INT16_MAX;
	volatile int32_t t167 = -471;

    t167 = ((x985&x986)/(x987*x988));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x989 = 178493U;
	int64_t x990 = -1LL;
	uint16_t x991 = UINT16_MAX;
	int64_t x992 = 172921LL;
	volatile int64_t t168 = 453008246LL;

    t168 = ((x989&x990)/(x991*x992));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x994 = INT32_MIN;
	uint32_t x995 = 491U;
	uint64_t t169 = 1333LLU;

    t169 = ((x993&x994)/(x995*x996));

    if (t169 != 37529LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x997 = -1;
	volatile uint8_t x998 = 1U;
	volatile int16_t x999 = -1;
	int8_t x1000 = INT8_MAX;
	int32_t t170 = -108497161;

    t170 = ((x997&x998)/(x999*x1000));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x1009 = 64355LL;
	volatile int64_t t171 = -337419LL;

    t171 = ((x1009&x1010)/(x1011*x1012));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1013 = INT32_MIN;
	static volatile int32_t x1014 = -1;
	int16_t x1015 = 15828;
	uint64_t x1016 = UINT64_MAX;

    t172 = ((x1013&x1014)/(x1015*x1016));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1021 = INT16_MIN;
	int64_t x1023 = -1LL;

    t173 = ((x1021&x1022)/(x1023*x1024));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1026 = -1;
	static int32_t x1027 = INT32_MIN;
	uint32_t x1028 = UINT32_MAX;
	volatile int64_t t174 = 2376385LL;

    t174 = ((x1025&x1026)/(x1027*x1028));

    if (t174 != 4294967295LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1041 = INT8_MAX;
	volatile int16_t x1042 = 0;
	int16_t x1043 = INT16_MIN;
	int16_t x1044 = INT16_MIN;
	int32_t t175 = -51295;

    t175 = ((x1041&x1042)/(x1043*x1044));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1045 = 29167U;
	volatile int32_t x1046 = 29787003;
	static uint16_t x1048 = 10171U;
	volatile int32_t t176 = 851;

    t176 = ((x1045&x1046)/(x1047*x1048));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x1049 = INT32_MIN;
	int32_t x1050 = -5325620;
	int8_t x1051 = -1;
	uint32_t x1052 = 839U;
	volatile uint32_t t177 = 3659U;

    t177 = ((x1049&x1050)/(x1051*x1052));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1053 = -1LL;
	int8_t x1054 = 1;
	int64_t x1055 = -1LL;
	int32_t x1056 = INT32_MIN;
	static int64_t t178 = 269631786027LL;

    t178 = ((x1053&x1054)/(x1055*x1056));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1057 = INT64_MIN;
	int64_t x1058 = INT64_MIN;
	int8_t x1059 = 1;
	static int16_t x1060 = INT16_MAX;
	volatile int64_t t179 = -18466450LL;

    t179 = ((x1057&x1058)/(x1059*x1060));

    if (t179 != -281483566907400LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1061 = UINT8_MAX;
	uint64_t x1062 = 12744858LLU;
	uint32_t x1064 = 24042150U;
	static volatile uint64_t t180 = 67846070759349LLU;

    t180 = ((x1061&x1062)/(x1063*x1064));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x1065 = INT64_MIN;
	int8_t x1066 = INT8_MAX;
	volatile int16_t x1067 = INT16_MIN;
	volatile int64_t t181 = -1010338826724LL;

    t181 = ((x1065&x1066)/(x1067*x1068));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1069 = 31U;
	int64_t x1070 = INT64_MIN;
	uint32_t x1071 = 65385U;
	int32_t x1072 = -15133;

    t182 = ((x1069&x1070)/(x1071*x1072));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1073 = -1LL;
	uint8_t x1074 = 15U;
	static volatile int32_t x1075 = 21531274;
	uint64_t x1076 = UINT64_MAX;
	static uint64_t t183 = 43978541LLU;

    t183 = ((x1073&x1074)/(x1075*x1076));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x1077 = -3;
	int8_t x1078 = INT8_MIN;
	uint64_t x1080 = 248651978254855LLU;

    t184 = ((x1077&x1078)/(x1079*x1080));

    if (t184 != 290LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1085 = UINT64_MAX;
	volatile uint16_t x1086 = 780U;
	int8_t x1087 = -21;
	uint16_t x1088 = 864U;

    t185 = ((x1085&x1086)/(x1087*x1088));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1094 = -1;
	uint8_t x1096 = UINT8_MAX;
	uint64_t t186 = 136351571179LLU;

    t186 = ((x1093&x1094)/(x1095*x1096));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1099 = UINT64_MAX;
	static uint64_t t187 = 0LLU;

    t187 = ((x1097&x1098)/(x1099*x1100));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1108 = INT16_MIN;
	static uint64_t t188 = 7LLU;

    t188 = ((x1105&x1106)/(x1107*x1108));

    if (t188 != 53470LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1109 = INT64_MIN;
	uint16_t x1110 = 5081U;
	int16_t x1111 = INT16_MIN;
	uint16_t x1112 = 1702U;
	volatile int64_t t189 = -16LL;

    t189 = ((x1109&x1110)/(x1111*x1112));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1113 = -1461;
	uint16_t x1114 = 201U;
	uint64_t x1115 = 106LLU;
	volatile uint64_t t190 = 326082827604565170LLU;

    t190 = ((x1113&x1114)/(x1115*x1116));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1117 = 5U;
	int16_t x1118 = INT16_MIN;
	volatile int16_t x1119 = 252;
	volatile uint8_t x1120 = UINT8_MAX;

    t191 = ((x1117&x1118)/(x1119*x1120));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1126 = -1;
	static uint16_t x1128 = 379U;
	volatile int32_t t192 = 945619;

    t192 = ((x1125&x1126)/(x1127*x1128));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x1130 = 25853;
	int8_t x1132 = -1;

    t193 = ((x1129&x1130)/(x1131*x1132));

    if (t193 != -203) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1133 = INT32_MIN;
	static int8_t x1136 = -1;
	static int64_t t194 = 0LL;

    t194 = ((x1133&x1134)/(x1135*x1136));

    if (t194 != -2147483648LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1137 = 220922U;
	volatile int8_t x1140 = INT8_MAX;

    t195 = ((x1137&x1138)/(x1139*x1140));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1145 = INT64_MAX;
	volatile int16_t x1146 = 19;
	int8_t x1148 = INT8_MIN;
	volatile int64_t t196 = -1LL;

    t196 = ((x1145&x1146)/(x1147*x1148));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1153 = -23585053637LL;
	static int32_t x1154 = INT32_MAX;
	uint8_t x1156 = 4U;
	static volatile int64_t t197 = -1783689895LL;

    t197 = ((x1153&x1154)/(x1155*x1156));

    if (t197 != 6LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1157 = -241;
	uint32_t x1158 = 692U;
	int32_t x1159 = 64;
	volatile int32_t x1160 = 1;
	volatile uint32_t t198 = 1U;

    t198 = ((x1157&x1158)/(x1159*x1160));

    if (t198 != 8U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x1166 = UINT16_MAX;
	uint16_t x1167 = 12U;
	static int32_t t199 = 3;

    t199 = ((x1165&x1166)/(x1167*x1168));

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

