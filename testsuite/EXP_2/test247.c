
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

uint8_t x2 = UINT8_MAX;
static uint32_t x3 = UINT32_MAX;
int32_t t0 = 1;
int8_t x5 = INT8_MIN;
int32_t x8 = -18962;
uint32_t x13 = 6U;
static uint64_t x14 = 1687595465899414139LLU;
static volatile int8_t x18 = 0;
static int8_t x35 = -1;
volatile int32_t t7 = -41012;
int64_t x38 = INT64_MIN;
int8_t x42 = INT8_MAX;
uint32_t x51 = UINT32_MAX;
volatile uint32_t x53 = UINT32_MAX;
volatile int32_t t11 = 2;
volatile int32_t t12 = -1639540;
uint32_t x74 = UINT32_MAX;
static int32_t t14 = -1685649;
uint32_t x77 = 112219U;
volatile int32_t t15 = 12;
uint32_t x85 = UINT32_MAX;
volatile int32_t x86 = -1;
volatile int32_t x89 = -1;
uint32_t x90 = 14U;
volatile uint16_t x91 = UINT16_MAX;
static int16_t x92 = 3184;
static uint8_t x97 = UINT8_MAX;
int32_t x102 = -1;
volatile int16_t x107 = 7553;
int64_t x121 = INT64_MIN;
int16_t x127 = -1;
int32_t x136 = 9457;
static int16_t x137 = INT16_MIN;
volatile uint8_t x140 = UINT8_MAX;
uint32_t x143 = 1303U;
int32_t t29 = -1;
int64_t x145 = 2866301090553LL;
volatile int32_t x161 = INT32_MIN;
static int64_t x166 = -50774445145011LL;
int16_t x168 = INT16_MAX;
int32_t x174 = INT32_MAX;
uint64_t x178 = 8022LLU;
volatile uint16_t x185 = UINT16_MAX;
int16_t x188 = INT16_MIN;
volatile int32_t t39 = -589135;
volatile int8_t x211 = INT8_MIN;
static int8_t x213 = -20;
int64_t x231 = 28715072976LL;
uint16_t x234 = UINT16_MAX;
uint32_t x238 = 0U;
static volatile int32_t t47 = 1;
volatile uint16_t x241 = 14046U;
int64_t x243 = -582286332947459354LL;
volatile int16_t x249 = 1;
uint32_t x273 = 36U;
static uint32_t x275 = UINT32_MAX;
int16_t x280 = INT16_MAX;
int32_t t54 = -2;
volatile int8_t x289 = 2;
uint16_t x292 = UINT16_MAX;
static volatile int32_t x294 = 3008;
uint8_t x296 = 0U;
int32_t t58 = -152013114;
int8_t x307 = -1;
volatile int32_t t59 = 3;
int32_t x313 = -408119;
volatile int32_t x320 = INT32_MIN;
volatile int32_t t62 = 1;
int32_t x326 = 28353;
int32_t x331 = INT32_MIN;
static volatile int32_t t65 = 7;
uint8_t x335 = 18U;
static int32_t t66 = -17199918;
static int32_t x342 = 19631;
volatile int8_t x349 = INT8_MIN;
uint8_t x351 = 24U;
volatile int8_t x352 = INT8_MAX;
int32_t x354 = -455;
int32_t x356 = INT32_MIN;
int32_t t72 = -222;
static uint8_t x386 = UINT8_MAX;
int32_t x390 = -1;
volatile uint64_t x392 = UINT64_MAX;
int8_t x396 = 17;
uint64_t x400 = 58547715599408LLU;
int16_t x408 = INT16_MIN;
volatile int32_t t84 = 3;
static int32_t t85 = -14341;
int16_t x418 = INT16_MAX;
uint8_t x421 = 5U;
volatile int32_t t87 = -12682793;
uint16_t x425 = 9102U;
static int16_t x428 = -1655;
volatile int32_t t88 = -12366;
volatile int64_t x431 = 2LL;
volatile int64_t x433 = INT64_MAX;
int16_t x435 = INT16_MIN;
volatile int64_t x441 = -1LL;
uint8_t x451 = 0U;
int16_t x452 = INT16_MIN;
int32_t t94 = 19049;
int64_t x468 = -1757126025965809LL;
static uint64_t x469 = 174LLU;
uint32_t x473 = 2U;
volatile int8_t x476 = INT8_MAX;
volatile int32_t x477 = INT32_MIN;
static uint16_t x481 = 7U;
int32_t t100 = 12;
int64_t x485 = -1LL;
static uint64_t x488 = 330300166928LLU;
int32_t x498 = INT32_MIN;
int8_t x506 = INT8_MIN;
uint32_t x507 = 422U;
volatile int8_t x508 = -2;
int16_t x512 = INT16_MAX;
int32_t t106 = 138;
uint32_t x514 = UINT32_MAX;
volatile int32_t t108 = -182879309;
uint32_t x530 = 12964U;
static int16_t x541 = INT16_MIN;
int16_t x543 = -15;
volatile int32_t t116 = -9932410;
volatile int32_t t119 = -8619664;
int8_t x580 = -1;
uint32_t x582 = 130844763U;
int8_t x584 = INT8_MIN;
uint64_t x589 = UINT64_MAX;
uint64_t x592 = 12730236778136263LLU;
volatile int32_t t123 = -773;
int16_t x596 = -1575;
volatile int32_t t124 = -6285;
int16_t x601 = -12;
uint32_t x604 = 7U;
int8_t x615 = -1;
uint16_t x616 = 49U;
volatile int32_t t128 = -459196;
int16_t x628 = 1;
uint64_t x630 = UINT64_MAX;
static int32_t t131 = 60640105;
volatile uint32_t x643 = 561U;
static int32_t x656 = INT32_MIN;
int32_t t135 = 0;
static int16_t x671 = 57;
static int16_t x680 = INT16_MIN;
static volatile int64_t x687 = INT64_MIN;
int32_t t140 = -1;
int8_t x693 = INT8_MAX;
int8_t x696 = 4;
int32_t x698 = -3605;
uint16_t x712 = 30U;
static volatile int64_t x721 = INT64_MIN;
static uint32_t x724 = UINT32_MAX;
int16_t x727 = 45;
uint64_t x728 = 90154882LLU;
int32_t t148 = 32124481;
int64_t x732 = INT64_MIN;
static int8_t x736 = 1;
volatile int16_t x737 = 0;
volatile int64_t x741 = -2038629372941770119LL;
static volatile int8_t x742 = INT8_MIN;
volatile uint64_t x744 = 8163LLU;
uint16_t x745 = UINT16_MAX;
int64_t x754 = -24936960LL;
uint64_t x756 = 14411LLU;
volatile int32_t t156 = -938249;
uint16_t x776 = 0U;
int8_t x777 = INT8_MIN;
uint64_t x779 = UINT64_MAX;
int64_t x785 = INT64_MIN;
volatile int8_t x788 = INT8_MAX;
static uint8_t x789 = 1U;
uint8_t x797 = UINT8_MAX;
int16_t x801 = INT16_MAX;
uint32_t x803 = 49U;
int32_t x808 = INT32_MAX;
int16_t x809 = INT16_MAX;
static volatile uint8_t x815 = 28U;
int8_t x816 = -15;
static volatile uint16_t x817 = UINT16_MAX;
uint16_t x820 = 275U;
volatile uint32_t x823 = 2928U;
int64_t x824 = INT64_MAX;
volatile int32_t t171 = -5;
static uint16_t x828 = UINT16_MAX;
int8_t x829 = INT8_MAX;
int8_t x835 = -1;
int32_t t174 = 56;
int16_t x840 = -1;
uint64_t x849 = UINT64_MAX;
static uint32_t x850 = UINT32_MAX;
volatile int32_t t177 = -166;
int8_t x863 = 3;
int32_t t183 = 492452;
int32_t x883 = 8;
int16_t x894 = 3774;
volatile int16_t x896 = INT16_MIN;
volatile int32_t x899 = -1;
volatile uint32_t x900 = 14023868U;
volatile int8_t x905 = INT8_MIN;
static int32_t x906 = INT32_MIN;
uint32_t x912 = 2731788U;
static volatile int64_t x914 = -2683LL;
int16_t x915 = -1;
int32_t t191 = 4084538;
volatile uint16_t x920 = UINT16_MAX;
volatile int32_t t192 = 113443;
int16_t x923 = -3804;
volatile uint64_t x930 = 21913LLU;
int16_t x931 = 0;
volatile int64_t x948 = INT64_MIN;
volatile int32_t t197 = 2262;
uint16_t x953 = 2853U;
int16_t x954 = -12;
int8_t x955 = INT8_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x4 = -1;

    t0 = ((x1/(x2-x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -4698;
	uint8_t x7 = 1U;
	volatile int32_t t1 = -20;

    t1 = ((x5/(x6-x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 10265328632926541LLU;
	static int32_t x10 = 3050552;
	int8_t x11 = INT8_MIN;
	int32_t x12 = 3375;
	int32_t t2 = 15525;

    t2 = ((x9/(x10-x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x15 = UINT32_MAX;
	static int16_t x16 = -1;
	static int32_t t3 = 10;

    t3 = ((x13/(x14-x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 3U;
	static int8_t x19 = INT8_MIN;
	volatile int16_t x20 = INT16_MIN;
	static int32_t t4 = 45;

    t4 = ((x17/(x18-x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MAX;
	uint64_t x22 = 2608599548LLU;
	static uint64_t x23 = 131LLU;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = -12353;

    t5 = ((x21/(x22-x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	volatile uint64_t x30 = 17183LLU;
	uint32_t x31 = 0U;
	uint64_t x32 = 6040118481489LLU;
	volatile int32_t t6 = -171933;

    t6 = ((x29/(x30-x31))>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -16011;
	uint16_t x34 = UINT16_MAX;
	static volatile int16_t x36 = INT16_MIN;

    t7 = ((x33/(x34-x35))>x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	int64_t x39 = -8LL;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t8 = 29673537;

    t8 = ((x37/(x38-x39))>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 2;
	volatile int8_t x43 = INT8_MIN;
	static uint16_t x44 = 3U;
	static int32_t t9 = 40360;

    t9 = ((x41/(x42-x43))>x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x49 = -1;
	static int8_t x50 = INT8_MAX;
	int64_t x52 = -1LL;
	static int32_t t10 = 61;

    t10 = ((x49/(x50-x51))>x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x54 = 894273536925LLU;
	volatile int16_t x55 = INT16_MAX;
	uint64_t x56 = UINT64_MAX;

    t11 = ((x53/(x54-x55))>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -9LL;
	int32_t x58 = 5266508;
	volatile int8_t x59 = -42;
	int16_t x60 = INT16_MIN;

    t12 = ((x57/(x58-x59))>x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x65 = 3169089LL;
	static uint64_t x66 = 123805060217LLU;
	int16_t x67 = INT16_MIN;
	static uint8_t x68 = 9U;
	static int32_t t13 = -1037591;

    t13 = ((x65/(x66-x67))>x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = INT64_MIN;
	volatile int8_t x75 = -6;
	static int32_t x76 = 482;

    t14 = ((x73/(x74-x75))>x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x78 = 0U;
	static int16_t x79 = -569;
	static uint64_t x80 = UINT64_MAX;

    t15 = ((x77/(x78-x79))>x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x87 = INT64_MIN;
	int16_t x88 = -474;
	volatile int32_t t16 = -32545791;

    t16 = ((x85/(x86-x87))>x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t t17 = 0;

    t17 = ((x89/(x90-x91))>x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x93 = 278601391642792LLU;
	int16_t x94 = -1;
	int64_t x95 = 18953674485998606LL;
	int64_t x96 = 15293772672031106LL;
	int32_t t18 = 0;

    t18 = ((x93/(x94-x95))>x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x98 = 19402U;
	int32_t x99 = 1061589;
	int8_t x100 = INT8_MIN;
	int32_t t19 = -56148;

    t19 = ((x97/(x98-x99))>x100);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x101 = INT8_MIN;
	static uint64_t x103 = 5295LLU;
	int8_t x104 = INT8_MAX;
	volatile int32_t t20 = 14807;

    t20 = ((x101/(x102-x103))>x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x105 = -6;
	uint16_t x106 = 2U;
	static int64_t x108 = INT64_MIN;
	int32_t t21 = 1844310;

    t21 = ((x105/(x106-x107))>x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = INT32_MIN;
	static uint32_t x110 = 8103322U;
	int8_t x111 = INT8_MAX;
	volatile int64_t x112 = -8190917421644LL;
	int32_t t22 = 92487673;

    t22 = ((x109/(x110-x111))>x112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = 1820982291386584577LL;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	int64_t x116 = -7367935445LL;
	int32_t t23 = 133484118;

    t23 = ((x113/(x114-x115))>x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x122 = INT16_MIN;
	volatile uint16_t x123 = 1007U;
	uint64_t x124 = 343LLU;
	int32_t t24 = -45834222;

    t24 = ((x121/(x122-x123))>x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x125 = INT16_MAX;
	int32_t x126 = -42;
	int16_t x128 = -1;
	volatile int32_t t25 = -77779954;

    t25 = ((x125/(x126-x127))>x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x129 = 97032137U;
	static uint8_t x130 = UINT8_MAX;
	volatile int64_t x131 = -1LL;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t26 = -7202808;

    t26 = ((x129/(x130-x131))>x132);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x133 = INT8_MAX;
	static volatile uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	int32_t t27 = 17739;

    t27 = ((x133/(x134-x135))>x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x138 = -1;
	int32_t x139 = INT32_MAX;
	volatile int32_t t28 = 7781;

    t28 = ((x137/(x138-x139))>x140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = INT8_MIN;
	int16_t x142 = 1;
	int32_t x144 = INT32_MIN;

    t29 = ((x141/(x142-x143))>x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x146 = -1;
	volatile int32_t x147 = INT32_MIN;
	int16_t x148 = -1;
	volatile int32_t t30 = 493505473;

    t30 = ((x145/(x146-x147))>x148);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = INT16_MAX;
	uint8_t x150 = 43U;
	uint16_t x151 = 961U;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t31 = -345;

    t31 = ((x149/(x150-x151))>x152);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = 1U;
	volatile int8_t x155 = INT8_MAX;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile int32_t t32 = -1;

    t32 = ((x153/(x154-x155))>x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x162 = 57U;
	static int64_t x163 = -1LL;
	static int16_t x164 = INT16_MIN;
	int32_t t33 = -3;

    t33 = ((x161/(x162-x163))>x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = -1;
	int8_t x167 = INT8_MIN;
	int32_t t34 = -6587;

    t34 = ((x165/(x166-x167))>x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = INT16_MAX;
	static int32_t x170 = -1;
	static int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t35 = -23311;

    t35 = ((x169/(x170-x171))>x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x173 = INT64_MAX;
	int64_t x175 = INT64_MAX;
	uint32_t x176 = 4U;
	int32_t t36 = -295704;

    t36 = ((x173/(x174-x175))>x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x177 = INT8_MAX;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = -1590;
	static volatile int32_t t37 = 2181760;

    t37 = ((x177/(x178-x179))>x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x186 = -9;
	uint64_t x187 = 44894457133LLU;
	volatile int32_t t38 = -295834174;

    t38 = ((x185/(x186-x187))>x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = -3932;
	int8_t x195 = -1;
	uint32_t x196 = UINT32_MAX;

    t39 = ((x193/(x194-x195))>x196);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x205 = UINT64_MAX;
	int16_t x206 = -1;
	uint16_t x207 = 35U;
	volatile int16_t x208 = -1;
	volatile int32_t t40 = -1684539;

    t40 = ((x205/(x206-x207))>x208);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x209 = 230444904U;
	uint16_t x210 = 0U;
	int32_t x212 = INT32_MAX;
	int32_t t41 = -122798;

    t41 = ((x209/(x210-x211))>x212);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x214 = UINT8_MAX;
	int32_t x215 = -343938;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t42 = -1;

    t42 = ((x213/(x214-x215))>x216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x217 = -1070544067264LL;
	static int64_t x218 = INT64_MIN;
	int32_t x219 = -29;
	int8_t x220 = -1;
	int32_t t43 = -471748637;

    t43 = ((x217/(x218-x219))>x220);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x221 = INT16_MAX;
	uint8_t x222 = 49U;
	int8_t x223 = 2;
	uint8_t x224 = 0U;
	static int32_t t44 = 0;

    t44 = ((x221/(x222-x223))>x224);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	int64_t x232 = 40523167262175LL;
	volatile int32_t t45 = -74411262;

    t45 = ((x229/(x230-x231))>x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x233 = UINT32_MAX;
	int8_t x235 = INT8_MAX;
	int32_t x236 = -7;
	volatile int32_t t46 = 80907698;

    t46 = ((x233/(x234-x235))>x236);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x237 = INT32_MAX;
	volatile int32_t x239 = -1894;
	int64_t x240 = -8068LL;

    t47 = ((x237/(x238-x239))>x240);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x242 = INT8_MIN;
	volatile int32_t x244 = 160188;
	volatile int32_t t48 = 75370028;

    t48 = ((x241/(x242-x243))>x244);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x245 = UINT16_MAX;
	static int64_t x246 = -1LL;
	uint64_t x247 = 259689022LLU;
	int8_t x248 = INT8_MAX;
	volatile int32_t t49 = -5990;

    t49 = ((x245/(x246-x247))>x248);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x250 = 919;
	int16_t x251 = INT16_MIN;
	volatile uint64_t x252 = UINT64_MAX;
	int32_t t50 = 20378;

    t50 = ((x249/(x250-x251))>x252);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x257 = INT64_MIN;
	static volatile int8_t x258 = 0;
	static volatile int8_t x259 = -1;
	volatile int16_t x260 = 18;
	volatile int32_t t51 = 38;

    t51 = ((x257/(x258-x259))>x260);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x265 = 3U;
	int32_t x266 = -666427146;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 436824LLU;
	volatile int32_t t52 = 336;

    t52 = ((x265/(x266-x267))>x268);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x274 = UINT8_MAX;
	volatile uint8_t x276 = 1U;
	int32_t t53 = 58574;

    t53 = ((x273/(x274-x275))>x276);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x277 = 3U;
	volatile int16_t x278 = -1;
	int64_t x279 = 689LL;

    t54 = ((x277/(x278-x279))>x280);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x281 = 0U;
	int64_t x282 = -1LL;
	static uint8_t x283 = 90U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t55 = 3337;

    t55 = ((x281/(x282-x283))>x284);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x285 = 46739553U;
	volatile int64_t x286 = -1LL;
	uint32_t x287 = UINT32_MAX;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t56 = -12021;

    t56 = ((x285/(x286-x287))>x288);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	volatile int32_t t57 = 21587;

    t57 = ((x289/(x290-x291))>x292);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x293 = INT32_MIN;
	int64_t x295 = -1LL;

    t58 = ((x293/(x294-x295))>x296);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x305 = 34U;
	volatile int64_t x306 = -1410814439621773LL;
	uint16_t x308 = 19323U;

    t59 = ((x305/(x306-x307))>x308);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x309 = 316;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = UINT8_MAX;
	uint16_t x312 = 60U;
	int32_t t60 = -4170401;

    t60 = ((x309/(x310-x311))>x312);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x314 = INT16_MIN;
	int16_t x315 = 1848;
	int64_t x316 = -2663725198LL;
	int32_t t61 = 13;

    t61 = ((x313/(x314-x315))>x316);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x317 = INT8_MIN;
	static volatile int32_t x318 = INT32_MIN;
	uint64_t x319 = 1686517020LLU;

    t62 = ((x317/(x318-x319))>x320);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x321 = INT16_MIN;
	static uint8_t x322 = 25U;
	static int8_t x323 = -2;
	static volatile int8_t x324 = INT8_MIN;
	volatile int32_t t63 = -2775;

    t63 = ((x321/(x322-x323))>x324);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x325 = INT64_MIN;
	static int8_t x327 = 1;
	static volatile int16_t x328 = INT16_MAX;
	volatile int32_t t64 = -529790881;

    t64 = ((x325/(x326-x327))>x328);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x329 = -1;
	volatile uint32_t x330 = UINT32_MAX;
	int8_t x332 = -2;

    t65 = ((x329/(x330-x331))>x332);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x333 = 789LL;
	volatile int16_t x334 = INT16_MIN;
	uint16_t x336 = 1U;

    t66 = ((x333/(x334-x335))>x336);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	static volatile int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t67 = 756;

    t67 = ((x337/(x338-x339))>x340);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x341 = 358805U;
	static volatile int8_t x343 = INT8_MAX;
	static uint64_t x344 = 9655LLU;
	volatile int32_t t68 = 1881;

    t68 = ((x341/(x342-x343))>x344);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x345 = -1;
	int16_t x346 = INT16_MAX;
	static int8_t x347 = INT8_MIN;
	static uint16_t x348 = 817U;
	volatile int32_t t69 = 1744614;

    t69 = ((x345/(x346-x347))>x348);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x350 = -4625;
	static volatile int32_t t70 = -979062;

    t70 = ((x349/(x350-x351))>x352);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x353 = INT16_MAX;
	int32_t x355 = -444;
	int32_t t71 = 2060;

    t71 = ((x353/(x354-x355))>x356);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = 1;
	int16_t x359 = INT16_MAX;
	int32_t x360 = -15753;

    t72 = ((x357/(x358-x359))>x360);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x361 = -1LL;
	volatile uint32_t x362 = 383U;
	static int8_t x363 = -1;
	volatile int32_t x364 = INT32_MIN;
	int32_t t73 = 83;

    t73 = ((x361/(x362-x363))>x364);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x365 = INT32_MAX;
	static int8_t x366 = -1;
	volatile int64_t x367 = INT64_MAX;
	static int64_t x368 = INT64_MAX;
	int32_t t74 = -3683;

    t74 = ((x365/(x366-x367))>x368);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x369 = INT32_MIN;
	volatile int32_t x370 = INT32_MAX;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t75 = 37;

    t75 = ((x369/(x370-x371))>x372);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x373 = 12446453996570LL;
	int8_t x374 = -2;
	int8_t x375 = 41;
	int8_t x376 = INT8_MAX;
	int32_t t76 = -71;

    t76 = ((x373/(x374-x375))>x376);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x377 = -202;
	static uint32_t x378 = 111921U;
	uint16_t x379 = 2U;
	static volatile int8_t x380 = INT8_MIN;
	volatile int32_t t77 = -8;

    t77 = ((x377/(x378-x379))>x380);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x381 = 6753621;
	static int16_t x382 = INT16_MIN;
	uint64_t x383 = 1LLU;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t78 = -201;

    t78 = ((x381/(x382-x383))>x384);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x385 = 199;
	volatile int8_t x387 = 1;
	volatile int8_t x388 = -1;
	int32_t t79 = -41672948;

    t79 = ((x385/(x386-x387))>x388);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x389 = INT32_MIN;
	static int64_t x391 = INT64_MAX;
	volatile int32_t t80 = 54676;

    t80 = ((x389/(x390-x391))>x392);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x393 = 908;
	int64_t x394 = 709260LL;
	int32_t x395 = -7867919;
	int32_t t81 = 121636;

    t81 = ((x393/(x394-x395))>x396);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x397 = 14276904577LLU;
	uint64_t x398 = 340044063947962357LLU;
	int16_t x399 = 2379;
	int32_t t82 = 197428;

    t82 = ((x397/(x398-x399))>x400);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x401 = 22LL;
	int32_t x402 = INT32_MAX;
	uint32_t x403 = UINT32_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile int32_t t83 = -15;

    t83 = ((x401/(x402-x403))>x404);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x405 = 5U;
	volatile uint8_t x406 = 31U;
	int16_t x407 = INT16_MIN;

    t84 = ((x405/(x406-x407))>x408);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x409 = -11;
	volatile uint16_t x410 = UINT16_MAX;
	int8_t x411 = INT8_MAX;
	int8_t x412 = 8;

    t85 = ((x409/(x410-x411))>x412);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x417 = -1;
	int32_t x419 = -1;
	int32_t x420 = -269;
	static int32_t t86 = 4685;

    t86 = ((x417/(x418-x419))>x420);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x422 = INT32_MIN;
	int32_t x423 = -1;
	uint16_t x424 = UINT16_MAX;

    t87 = ((x421/(x422-x423))>x424);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x426 = -7;
	int8_t x427 = INT8_MIN;

    t88 = ((x425/(x426-x427))>x428);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x429 = INT8_MIN;
	int16_t x430 = -3545;
	int32_t x432 = -2975;
	static volatile int32_t t89 = -1;

    t89 = ((x429/(x430-x431))>x432);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x434 = -6;
	int32_t x436 = -14457454;
	int32_t t90 = -12;

    t90 = ((x433/(x434-x435))>x436);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x437 = 14;
	volatile int8_t x438 = -1;
	int16_t x439 = INT16_MIN;
	uint64_t x440 = 944937943703874LLU;
	int32_t t91 = -852342051;

    t91 = ((x437/(x438-x439))>x440);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x442 = -1;
	uint8_t x443 = 15U;
	int64_t x444 = INT64_MIN;
	int32_t t92 = -30216;

    t92 = ((x441/(x442-x443))>x444);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = UINT32_MAX;
	int32_t t93 = -3179917;

    t93 = ((x449/(x450-x451))>x452);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x453 = -2LL;
	volatile int16_t x454 = -220;
	static volatile int64_t x455 = INT64_MIN;
	static int16_t x456 = INT16_MIN;

    t94 = ((x453/(x454-x455))>x456);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x457 = -2;
	volatile uint32_t x458 = 1607375U;
	static uint16_t x459 = 4591U;
	static volatile uint16_t x460 = UINT16_MAX;
	static volatile int32_t t95 = -1;

    t95 = ((x457/(x458-x459))>x460);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = UINT16_MAX;
	static int16_t x467 = INT16_MIN;
	int32_t t96 = 56480;

    t96 = ((x465/(x466-x467))>x468);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x470 = INT16_MAX;
	uint8_t x471 = 36U;
	uint64_t x472 = UINT64_MAX;
	int32_t t97 = -3872181;

    t97 = ((x469/(x470-x471))>x472);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x474 = UINT16_MAX;
	uint8_t x475 = UINT8_MAX;
	static volatile int32_t t98 = -29;

    t98 = ((x473/(x474-x475))>x476);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x478 = -1;
	int8_t x479 = INT8_MIN;
	uint64_t x480 = 576154681569952911LLU;
	volatile int32_t t99 = -114343831;

    t99 = ((x477/(x478-x479))>x480);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x482 = -1;
	int16_t x483 = INT16_MIN;
	volatile int32_t x484 = INT32_MAX;

    t100 = ((x481/(x482-x483))>x484);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x486 = 20628375LL;
	int32_t x487 = INT32_MIN;
	int32_t t101 = 1525613;

    t101 = ((x485/(x486-x487))>x488);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x489 = 71;
	volatile int16_t x490 = 2;
	uint64_t x491 = 540933452432LLU;
	int64_t x492 = -1LL;
	int32_t t102 = -108;

    t102 = ((x489/(x490-x491))>x492);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x497 = 530358;
	uint64_t x499 = 710957935LLU;
	int8_t x500 = INT8_MAX;
	static int32_t t103 = -2;

    t103 = ((x497/(x498-x499))>x500);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x501 = -1;
	static int32_t x502 = INT32_MAX;
	int64_t x503 = -110339206LL;
	uint16_t x504 = UINT16_MAX;
	static int32_t t104 = -101;

    t104 = ((x501/(x502-x503))>x504);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x505 = 26U;
	int32_t t105 = -52;

    t105 = ((x505/(x506-x507))>x508);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x509 = 1973684524006772803LLU;
	uint64_t x510 = 751982433243199469LLU;
	int8_t x511 = INT8_MIN;

    t106 = ((x509/(x510-x511))>x512);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x513 = 1U;
	int32_t x515 = -558841;
	uint16_t x516 = UINT16_MAX;
	static int32_t t107 = -123269;

    t107 = ((x513/(x514-x515))>x516);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x517 = UINT16_MAX;
	int32_t x518 = -6546719;
	volatile int8_t x519 = 2;
	int8_t x520 = INT8_MIN;

    t108 = ((x517/(x518-x519))>x520);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x521 = -1LL;
	int32_t x522 = INT32_MIN;
	volatile int64_t x523 = 281805794LL;
	static uint8_t x524 = 3U;
	int32_t t109 = 26427;

    t109 = ((x521/(x522-x523))>x524);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x529 = -1;
	uint16_t x531 = UINT16_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t110 = 8314;

    t110 = ((x529/(x530-x531))>x532);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x533 = 103;
	volatile int64_t x534 = INT64_MIN;
	int64_t x535 = -8030743LL;
	int8_t x536 = 20;
	volatile int32_t t111 = 13495580;

    t111 = ((x533/(x534-x535))>x536);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x537 = 4313U;
	static int16_t x538 = INT16_MIN;
	int32_t x539 = 1515;
	uint32_t x540 = 1352163257U;
	volatile int32_t t112 = -70262094;

    t112 = ((x537/(x538-x539))>x540);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x542 = -1;
	int8_t x544 = INT8_MIN;
	int32_t t113 = 1400959;

    t113 = ((x541/(x542-x543))>x544);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x545 = 13668086395LLU;
	int64_t x546 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	int32_t x548 = INT32_MIN;
	static int32_t t114 = 468710006;

    t114 = ((x545/(x546-x547))>x548);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x553 = 23U;
	int64_t x554 = -1LL;
	uint32_t x555 = UINT32_MAX;
	volatile uint32_t x556 = UINT32_MAX;
	volatile int32_t t115 = -3636;

    t115 = ((x553/(x554-x555))>x556);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x557 = -4268;
	int8_t x558 = -1;
	int16_t x559 = INT16_MIN;
	static int64_t x560 = INT64_MIN;

    t116 = ((x557/(x558-x559))>x560);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x561 = -14885LL;
	uint8_t x562 = 8U;
	int8_t x563 = -1;
	volatile int16_t x564 = 0;
	static int32_t t117 = -1992;

    t117 = ((x561/(x562-x563))>x564);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x569 = 47533U;
	static int8_t x570 = INT8_MIN;
	int64_t x571 = 52282769LL;
	static uint16_t x572 = UINT16_MAX;
	int32_t t118 = -1;

    t118 = ((x569/(x570-x571))>x572);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x573 = 379307139LL;
	volatile int16_t x574 = -1;
	volatile int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MIN;

    t119 = ((x573/(x574-x575))>x576);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x577 = 24;
	uint32_t x578 = 5U;
	int32_t x579 = INT32_MIN;
	volatile int32_t t120 = -2695;

    t120 = ((x577/(x578-x579))>x580);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x581 = 479U;
	static uint64_t x583 = 14LLU;
	static int32_t t121 = 814;

    t121 = ((x581/(x582-x583))>x584);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x585 = 0U;
	int16_t x586 = INT16_MIN;
	uint32_t x587 = 37711005U;
	uint32_t x588 = 351693U;
	int32_t t122 = -4;

    t122 = ((x585/(x586-x587))>x588);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x590 = 163U;
	int32_t x591 = INT32_MAX;

    t123 = ((x589/(x590-x591))>x592);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x593 = 437;
	static uint16_t x594 = 1779U;
	int8_t x595 = -1;

    t124 = ((x593/(x594-x595))>x596);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x597 = -17;
	uint16_t x598 = 55U;
	int32_t x599 = -21877184;
	int16_t x600 = -1;
	int32_t t125 = -5;

    t125 = ((x597/(x598-x599))>x600);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x602 = 2U;
	int8_t x603 = INT8_MIN;
	int32_t t126 = -3863;

    t126 = ((x601/(x602-x603))>x604);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x609 = INT64_MIN;
	static int8_t x610 = INT8_MIN;
	int64_t x611 = -1LL;
	int64_t x612 = INT64_MIN;
	static int32_t t127 = -967179823;

    t127 = ((x609/(x610-x611))>x612);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x613 = -79988832LL;
	int8_t x614 = INT8_MAX;

    t128 = ((x613/(x614-x615))>x616);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x625 = INT8_MIN;
	static volatile int16_t x626 = INT16_MIN;
	volatile int64_t x627 = -1LL;
	volatile int32_t t129 = 2759280;

    t129 = ((x625/(x626-x627))>x628);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x629 = INT8_MIN;
	uint16_t x631 = 446U;
	int32_t x632 = INT32_MIN;
	volatile int32_t t130 = 394825;

    t130 = ((x629/(x630-x631))>x632);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x633 = UINT32_MAX;
	int8_t x634 = -1;
	volatile uint8_t x635 = UINT8_MAX;
	static int32_t x636 = INT32_MAX;

    t131 = ((x633/(x634-x635))>x636);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x637 = 23807590877426780LL;
	int8_t x638 = INT8_MIN;
	uint32_t x639 = 75977U;
	uint16_t x640 = 578U;
	int32_t t132 = -181927;

    t132 = ((x637/(x638-x639))>x640);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x641 = 712677025U;
	static uint64_t x642 = 22LLU;
	int32_t x644 = 1325;
	static volatile int32_t t133 = 4716;

    t133 = ((x641/(x642-x643))>x644);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x645 = 18869U;
	uint16_t x646 = UINT16_MAX;
	volatile uint32_t x647 = UINT32_MAX;
	volatile int32_t x648 = INT32_MAX;
	int32_t t134 = 31836135;

    t134 = ((x645/(x646-x647))>x648);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x653 = 408629443166LLU;
	volatile int8_t x654 = INT8_MIN;
	int16_t x655 = INT16_MIN;

    t135 = ((x653/(x654-x655))>x656);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x657 = -1;
	int16_t x658 = INT16_MIN;
	uint32_t x659 = 174460U;
	int64_t x660 = INT64_MIN;
	volatile int32_t t136 = -2;

    t136 = ((x657/(x658-x659))>x660);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x669 = INT32_MAX;
	static volatile int8_t x670 = INT8_MIN;
	int32_t x672 = INT32_MIN;
	volatile int32_t t137 = 5869;

    t137 = ((x669/(x670-x671))>x672);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x673 = 11U;
	int32_t x674 = 27814;
	int64_t x675 = -1LL;
	volatile uint64_t x676 = 62964478547536851LLU;
	volatile int32_t t138 = -26593052;

    t138 = ((x673/(x674-x675))>x676);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x677 = INT8_MIN;
	uint32_t x678 = 5U;
	int16_t x679 = 3363;
	volatile int32_t t139 = -49;

    t139 = ((x677/(x678-x679))>x680);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x685 = -1;
	uint64_t x686 = 2131324188445804832LLU;
	uint32_t x688 = UINT32_MAX;

    t140 = ((x685/(x686-x687))>x688);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x689 = UINT32_MAX;
	volatile int8_t x690 = 9;
	int64_t x691 = -3200089751LL;
	volatile int8_t x692 = INT8_MAX;
	static volatile int32_t t141 = 21858;

    t141 = ((x689/(x690-x691))>x692);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x694 = 397;
	volatile int32_t x695 = 18547888;
	static int32_t t142 = -407445856;

    t142 = ((x693/(x694-x695))>x696);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x697 = -1;
	int8_t x699 = -47;
	static int16_t x700 = -1;
	volatile int32_t t143 = 530954920;

    t143 = ((x697/(x698-x699))>x700);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x701 = 12461831;
	int8_t x702 = 6;
	int32_t x703 = -447585862;
	volatile int16_t x704 = 468;
	volatile int32_t t144 = -1;

    t144 = ((x701/(x702-x703))>x704);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x705 = INT16_MIN;
	int16_t x706 = INT16_MAX;
	uint64_t x707 = 11700LLU;
	uint32_t x708 = UINT32_MAX;
	int32_t t145 = -240137;

    t145 = ((x705/(x706-x707))>x708);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x709 = INT64_MIN;
	int8_t x710 = INT8_MIN;
	static volatile uint16_t x711 = 4829U;
	volatile int32_t t146 = 5;

    t146 = ((x709/(x710-x711))>x712);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x722 = 65U;
	uint32_t x723 = UINT32_MAX;
	int32_t t147 = -270816;

    t147 = ((x721/(x722-x723))>x724);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = -1;

    t148 = ((x725/(x726-x727))>x728);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x729 = UINT16_MAX;
	uint8_t x730 = 108U;
	int8_t x731 = INT8_MIN;
	volatile int32_t t149 = -425556;

    t149 = ((x729/(x730-x731))>x732);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x733 = 4146LLU;
	int64_t x734 = -10181994LL;
	static volatile uint8_t x735 = UINT8_MAX;
	int32_t t150 = -6751630;

    t150 = ((x733/(x734-x735))>x736);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x738 = 5U;
	uint16_t x739 = 9427U;
	int16_t x740 = INT16_MIN;
	volatile int32_t t151 = 178761;

    t151 = ((x737/(x738-x739))>x740);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x743 = -1;
	static volatile int32_t t152 = -334363302;

    t152 = ((x741/(x742-x743))>x744);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x746 = 1020878LLU;
	int32_t x747 = 162207687;
	int16_t x748 = INT16_MIN;
	volatile int32_t t153 = -202;

    t153 = ((x745/(x746-x747))>x748);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x749 = -1;
	uint64_t x750 = 1732492LLU;
	int16_t x751 = INT16_MAX;
	int64_t x752 = INT64_MAX;
	int32_t t154 = 143933;

    t154 = ((x749/(x750-x751))>x752);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x753 = INT8_MIN;
	uint32_t x755 = 15938938U;
	int32_t t155 = 33867998;

    t155 = ((x753/(x754-x755))>x756);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x757 = -10396;
	int16_t x758 = INT16_MAX;
	int16_t x759 = INT16_MIN;
	int32_t x760 = 11;

    t156 = ((x757/(x758-x759))>x760);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x761 = INT32_MIN;
	uint16_t x762 = 3993U;
	volatile uint8_t x763 = UINT8_MAX;
	int64_t x764 = -1970LL;
	int32_t t157 = 32;

    t157 = ((x761/(x762-x763))>x764);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x769 = -67815855LL;
	volatile int64_t x770 = -1LL;
	int16_t x771 = -4079;
	static int32_t x772 = 1;
	volatile int32_t t158 = -362621136;

    t158 = ((x769/(x770-x771))>x772);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x773 = INT16_MAX;
	uint64_t x774 = 3441097982892177LLU;
	int32_t x775 = -36;
	static int32_t t159 = 132120030;

    t159 = ((x773/(x774-x775))>x776);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x778 = 44;
	static int64_t x780 = INT64_MAX;
	volatile int32_t t160 = 2576639;

    t160 = ((x777/(x778-x779))>x780);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x781 = -6371981341008LL;
	int8_t x782 = INT8_MAX;
	int8_t x783 = -1;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t161 = 826232;

    t161 = ((x781/(x782-x783))>x784);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x786 = 1045757634U;
	int8_t x787 = 27;
	int32_t t162 = 24797;

    t162 = ((x785/(x786-x787))>x788);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x790 = 416189U;
	uint8_t x791 = 2U;
	static uint8_t x792 = UINT8_MAX;
	volatile int32_t t163 = -2181628;

    t163 = ((x789/(x790-x791))>x792);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x793 = UINT64_MAX;
	uint8_t x794 = 1U;
	int16_t x795 = -1;
	int8_t x796 = INT8_MIN;
	volatile int32_t t164 = 112040603;

    t164 = ((x793/(x794-x795))>x796);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x798 = 0LLU;
	uint32_t x799 = 2U;
	static volatile uint64_t x800 = 11LLU;
	int32_t t165 = -2;

    t165 = ((x797/(x798-x799))>x800);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x802 = 3;
	uint64_t x804 = 5065378121LLU;
	volatile int32_t t166 = -1913;

    t166 = ((x801/(x802-x803))>x804);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x805 = INT64_MIN;
	static int8_t x806 = INT8_MIN;
	uint8_t x807 = 22U;
	int32_t t167 = -154584;

    t167 = ((x805/(x806-x807))>x808);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x810 = 6U;
	static int32_t x811 = -115999285;
	int64_t x812 = INT64_MIN;
	volatile int32_t t168 = 390;

    t168 = ((x809/(x810-x811))>x812);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x813 = -1LL;
	volatile int8_t x814 = -63;
	volatile int32_t t169 = -62;

    t169 = ((x813/(x814-x815))>x816);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x818 = -22;
	volatile int32_t x819 = 2567468;
	int32_t t170 = -58841172;

    t170 = ((x817/(x818-x819))>x820);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x821 = INT8_MAX;
	int64_t x822 = 5LL;

    t171 = ((x821/(x822-x823))>x824);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x825 = 467LLU;
	int16_t x826 = -8;
	static volatile uint32_t x827 = UINT32_MAX;
	int32_t t172 = 51317397;

    t172 = ((x825/(x826-x827))>x828);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x830 = -24;
	uint16_t x831 = 16U;
	int32_t x832 = INT32_MAX;
	int32_t t173 = -817210;

    t173 = ((x829/(x830-x831))>x832);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x833 = UINT8_MAX;
	int8_t x834 = INT8_MAX;
	volatile uint8_t x836 = 5U;

    t174 = ((x833/(x834-x835))>x836);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x837 = UINT8_MAX;
	uint16_t x838 = UINT16_MAX;
	int16_t x839 = INT16_MIN;
	volatile int32_t t175 = -248498;

    t175 = ((x837/(x838-x839))>x840);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x845 = 82U;
	uint16_t x846 = 6U;
	uint16_t x847 = 4U;
	uint32_t x848 = 6144476U;
	volatile int32_t t176 = 1570;

    t176 = ((x845/(x846-x847))>x848);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x851 = 17415LLU;
	volatile int16_t x852 = -1;

    t177 = ((x849/(x850-x851))>x852);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x853 = -2;
	static volatile uint64_t x854 = UINT64_MAX;
	int8_t x855 = INT8_MAX;
	int16_t x856 = 0;
	int32_t t178 = -21761231;

    t178 = ((x853/(x854-x855))>x856);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x857 = -1;
	volatile uint16_t x858 = UINT16_MAX;
	static int8_t x859 = -22;
	volatile int32_t x860 = 44;
	int32_t t179 = -13;

    t179 = ((x857/(x858-x859))>x860);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x861 = -11706;
	int8_t x862 = INT8_MIN;
	volatile uint16_t x864 = UINT16_MAX;
	int32_t t180 = 3460503;

    t180 = ((x861/(x862-x863))>x864);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x865 = 0U;
	int16_t x866 = INT16_MIN;
	int64_t x867 = INT64_MIN;
	int32_t x868 = -20903620;
	int32_t t181 = 936;

    t181 = ((x865/(x866-x867))>x868);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x869 = -1;
	uint16_t x870 = 6105U;
	int8_t x871 = -5;
	static int32_t x872 = INT32_MIN;
	int32_t t182 = -300845;

    t182 = ((x869/(x870-x871))>x872);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x873 = 6225785669981LLU;
	uint16_t x874 = 34U;
	int8_t x875 = -1;
	int8_t x876 = -1;

    t183 = ((x873/(x874-x875))>x876);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x881 = INT16_MIN;
	uint16_t x882 = 106U;
	int8_t x884 = INT8_MIN;
	int32_t t184 = 3870390;

    t184 = ((x881/(x882-x883))>x884);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x885 = -1;
	volatile int16_t x886 = INT16_MIN;
	int16_t x887 = 0;
	int16_t x888 = INT16_MIN;
	volatile int32_t t185 = 24862;

    t185 = ((x885/(x886-x887))>x888);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x889 = 10594U;
	int16_t x890 = 15053;
	int8_t x891 = INT8_MIN;
	int64_t x892 = 2722LL;
	volatile int32_t t186 = 66369075;

    t186 = ((x889/(x890-x891))>x892);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x893 = 65518923865LL;
	static volatile uint16_t x895 = UINT16_MAX;
	int32_t t187 = -1158;

    t187 = ((x893/(x894-x895))>x896);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x897 = 18LLU;
	uint32_t x898 = 159438242U;
	static volatile int32_t t188 = 3510;

    t188 = ((x897/(x898-x899))>x900);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x907 = -30867528415LL;
	volatile uint64_t x908 = UINT64_MAX;
	static volatile int32_t t189 = 554466;

    t189 = ((x905/(x906-x907))>x908);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x909 = 4840135U;
	int8_t x910 = INT8_MIN;
	int64_t x911 = INT64_MIN;
	static volatile int32_t t190 = 405079625;

    t190 = ((x909/(x910-x911))>x912);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x913 = INT64_MAX;
	uint64_t x916 = 889962452179229LLU;

    t191 = ((x913/(x914-x915))>x916);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x917 = -287666576203330891LL;
	static int32_t x918 = INT32_MAX;
	int64_t x919 = -1LL;

    t192 = ((x917/(x918-x919))>x920);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x921 = -1;
	uint64_t x922 = UINT64_MAX;
	static uint32_t x924 = UINT32_MAX;
	volatile int32_t t193 = 47378416;

    t193 = ((x921/(x922-x923))>x924);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x925 = 55LLU;
	static uint64_t x926 = 913169418885343068LLU;
	int8_t x927 = -26;
	int16_t x928 = INT16_MIN;
	int32_t t194 = 313;

    t194 = ((x925/(x926-x927))>x928);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x929 = 1;
	int64_t x932 = 3706398362183234518LL;
	int32_t t195 = 8;

    t195 = ((x929/(x930-x931))>x932);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x941 = INT8_MIN;
	uint8_t x942 = 78U;
	uint32_t x943 = UINT32_MAX;
	int16_t x944 = INT16_MIN;
	volatile int32_t t196 = 3128569;

    t196 = ((x941/(x942-x943))>x944);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x945 = -1;
	volatile uint8_t x946 = 0U;
	volatile uint32_t x947 = UINT32_MAX;

    t197 = ((x945/(x946-x947))>x948);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x949 = 1;
	static int16_t x950 = INT16_MAX;
	int8_t x951 = INT8_MIN;
	int16_t x952 = INT16_MAX;
	int32_t t198 = -90761;

    t198 = ((x949/(x950-x951))>x952);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x956 = UINT32_MAX;
	static int32_t t199 = -6844;

    t199 = ((x953/(x954-x955))>x956);

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

