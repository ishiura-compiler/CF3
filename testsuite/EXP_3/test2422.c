
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

static uint16_t x4 = 1U;
int32_t x16 = -1;
uint64_t x17 = 2118977741164248260LLU;
static uint64_t t4 = 129LLU;
int32_t x27 = 420;
static volatile int8_t x30 = 10;
uint32_t t7 = 9139U;
int64_t t8 = 351243022391010946LL;
int32_t x38 = -1;
volatile uint64_t x45 = 125174547LLU;
int8_t x49 = INT8_MAX;
static int8_t x53 = -1;
int8_t x54 = INT8_MIN;
int64_t x56 = INT64_MIN;
uint32_t x59 = 943226U;
uint64_t t14 = 7050021491LLU;
int8_t x61 = -2;
int16_t x65 = INT16_MAX;
volatile int16_t x68 = 147;
uint32_t x72 = 236U;
static volatile int16_t x76 = INT16_MAX;
uint32_t x80 = 4698432U;
int16_t x83 = 5;
static volatile int16_t x95 = INT16_MIN;
uint64_t x97 = 8032192LLU;
int32_t x99 = INT32_MAX;
uint16_t x100 = 3U;
volatile uint64_t t24 = 0LLU;
volatile int64_t t25 = -203422041118292410LL;
volatile uint64_t x105 = 45733884343441931LLU;
uint8_t x107 = 1U;
int8_t x110 = -1;
int16_t x119 = INT16_MIN;
static uint8_t x124 = 9U;
volatile int16_t x130 = INT16_MIN;
int64_t x131 = INT64_MIN;
int8_t x139 = 15;
volatile int32_t x140 = -1587;
static int64_t x142 = INT64_MIN;
static uint64_t t35 = 4223366294258833LLU;
volatile int16_t x147 = -10279;
int64_t t37 = -37377277992926246LL;
volatile int32_t x159 = -251974208;
static uint64_t t39 = 3639952635677LLU;
int64_t x165 = INT64_MAX;
int16_t x166 = INT16_MIN;
int64_t x173 = INT64_MIN;
uint64_t t45 = 23035033925514453LLU;
volatile uint32_t x186 = UINT32_MAX;
static int8_t x204 = INT8_MIN;
int64_t t50 = -65330157LL;
static int32_t x216 = INT32_MAX;
uint64_t x221 = 1031465630217LLU;
volatile uint64_t t54 = 427839528LLU;
int8_t x225 = -1;
int8_t x232 = INT8_MAX;
int64_t x233 = INT64_MIN;
int64_t x236 = INT64_MIN;
uint8_t x237 = 2U;
int32_t x240 = 771;
static int64_t t61 = -411033288LL;
volatile int8_t x253 = -22;
uint32_t x256 = UINT32_MAX;
int16_t x262 = INT16_MIN;
uint32_t t64 = 17161U;
static volatile int32_t x272 = INT32_MIN;
int64_t t66 = 790542LL;
int16_t x282 = 429;
int8_t x287 = INT8_MIN;
int32_t x294 = INT32_MIN;
int8_t x298 = INT8_MAX;
uint64_t x303 = 2964132001LLU;
uint8_t x304 = UINT8_MAX;
uint16_t x307 = UINT16_MAX;
volatile int64_t t74 = 6210057LL;
volatile int32_t x316 = -1;
int64_t x317 = 1556031624452LL;
static volatile int64_t t77 = 252412LL;
int8_t x325 = INT8_MIN;
int16_t x328 = INT16_MIN;
int8_t x330 = -1;
uint8_t x334 = 32U;
uint32_t x338 = 839033160U;
static uint16_t x341 = 2U;
volatile int32_t x345 = -1;
int8_t x355 = INT8_MIN;
volatile int64_t t87 = -2LL;
static int32_t x361 = INT32_MIN;
int64_t t88 = 174071LL;
int64_t x370 = INT64_MIN;
static volatile int32_t x372 = -267379023;
int8_t x377 = INT8_MAX;
uint16_t x387 = 34U;
static int32_t x393 = 15316;
volatile int32_t x396 = 1176130;
volatile uint32_t t95 = 123551866U;
int8_t x398 = INT8_MIN;
volatile int64_t t97 = -1LL;
volatile int64_t x408 = -9592116177LL;
volatile uint32_t t99 = 13U;
static int64_t x413 = 0LL;
int64_t t102 = 205652733251173400LL;
static uint64_t x429 = 2543471752LLU;
uint32_t x430 = 2017636108U;
volatile uint64_t t105 = 14741310LLU;
uint32_t x438 = UINT32_MAX;
int8_t x439 = INT8_MIN;
uint32_t t106 = UINT32_MAX;
uint8_t x441 = UINT8_MAX;
uint8_t x442 = 1U;
static uint32_t x449 = UINT32_MAX;
int8_t x451 = INT8_MAX;
static int32_t x452 = 5874131;
uint8_t x458 = 8U;
static int16_t x460 = -7580;
static int32_t t111 = 23554531;
int32_t x472 = INT32_MIN;
uint16_t x487 = 9U;
int64_t x494 = INT64_MIN;
uint32_t x497 = 1U;
int32_t x498 = -4458;
uint16_t x499 = 2721U;
uint16_t x501 = 15U;
int16_t x510 = INT16_MIN;
volatile int64_t x512 = INT64_MIN;
uint8_t x515 = 3U;
int16_t x520 = 38;
volatile int16_t x523 = -5711;
int16_t x531 = -1;
int16_t x532 = INT16_MAX;
uint32_t t129 = 474197U;
int32_t x537 = INT32_MAX;
static volatile int64_t x542 = INT64_MAX;
int16_t x543 = -21;
uint32_t x546 = 120155239U;
int64_t x556 = INT64_MAX;
volatile int64_t t134 = INT64_MIN;
int8_t x557 = INT8_MAX;
int64_t x559 = -204324360431101060LL;
uint64_t x569 = 32754288942718624LLU;
static uint64_t x570 = 7814431302260352LLU;
int32_t x571 = -1;
uint64_t x575 = UINT64_MAX;
volatile uint64_t t140 = 6843649457314980LLU;
int64_t x582 = INT64_MIN;
int8_t x584 = 3;
int64_t t141 = -9LL;
int32_t x589 = 6931826;
volatile int32_t x593 = 456026817;
int32_t x594 = -218;
static int32_t t144 = -257140;
int16_t x597 = INT16_MIN;
uint8_t x604 = 3U;
static int32_t x608 = INT32_MIN;
volatile int16_t x612 = INT16_MIN;
volatile uint16_t x613 = 9516U;
int64_t x624 = -1LL;
static volatile int64_t t151 = 188090891LL;
volatile int32_t t152 = 755205948;
int64_t x629 = INT64_MIN;
uint64_t t154 = 82472276896LLU;
int8_t x646 = INT8_MIN;
int16_t x649 = INT16_MIN;
volatile int64_t t159 = 76291556958LL;
volatile int16_t x661 = INT16_MIN;
uint8_t x673 = UINT8_MAX;
int32_t x675 = 57261902;
static uint32_t x677 = UINT32_MAX;
static uint64_t x681 = 42010262468LLU;
uint32_t x682 = 633493358U;
volatile uint64_t t166 = 16321539851LLU;
uint16_t x695 = UINT16_MAX;
int8_t x697 = INT8_MIN;
int64_t t170 = 183LL;
int16_t x701 = INT16_MAX;
int32_t x704 = INT32_MAX;
int8_t x716 = 13;
volatile uint16_t x717 = 45U;
uint32_t x718 = 61970822U;
int64_t t175 = 236LL;
uint64_t x725 = 308068626805LLU;
static uint64_t t177 = 98294265LLU;
int64_t x739 = -1LL;
int16_t x740 = INT16_MIN;
volatile uint64_t t180 = 39215964LLU;
static int16_t x748 = INT16_MIN;
static volatile uint8_t x753 = 0U;
volatile int16_t x754 = -1;
static int16_t x757 = INT16_MIN;
static int16_t x759 = INT16_MIN;
volatile uint64_t x760 = 10LLU;
uint32_t x773 = 7007U;
volatile int8_t x775 = INT8_MAX;
volatile int16_t x778 = INT16_MIN;
static uint8_t x779 = 40U;
int64_t x782 = -1LL;
int64_t x785 = 94LL;
int32_t x787 = INT32_MIN;
static int64_t t191 = -17401385984342921LL;
volatile int8_t x792 = 0;
volatile int8_t x795 = 8;
static volatile int16_t x800 = 701;
static uint32_t x802 = 6488U;
int16_t x805 = INT16_MAX;
volatile uint16_t x806 = 161U;
volatile uint64_t t197 = 1718610921321LLU;
int8_t x814 = -1;
static int64_t t198 = INT64_MAX;


void f0(void) {
    	int16_t x1 = -1;
	int16_t x2 = -571;
	uint64_t x3 = 93581284671237LLU;
	volatile uint64_t t0 = 59212515508806107LLU;

    t0 = ((x1%x2)^(x3|x4));

    if (t0 != 18446650492424880378LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 187766LL;
	int32_t x6 = INT32_MAX;
	uint64_t x7 = 1102025394238487994LLU;
	uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 45501LLU;

    t1 = ((x5%x6)^(x7|x8));

    if (t1 != 1102025394238365833LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	int8_t x10 = 60;
	volatile int16_t x11 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 91664661181LLU;

    t2 = ((x9%x10)^(x11|x12));

    if (t2 != 7LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -4121538332904925298LL;
	int8_t x14 = -1;
	static volatile int64_t x15 = INT64_MIN;
	int64_t t3 = -1508363LL;

    t3 = ((x13%x14)^(x15|x16));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -14LL;
	uint8_t x19 = 8U;
	volatile uint8_t x20 = 1U;

    t4 = ((x17%x18)^(x19|x20));

    if (t4 != 2118977741164248269LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -136204;
	int16_t x22 = -1;
	int32_t x23 = INT32_MAX;
	int16_t x24 = 7279;
	int32_t t5 = INT32_MAX;

    t5 = ((x21%x22)^(x23|x24));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	static uint64_t x26 = 1591162497521LLU;
	int16_t x28 = -4926;
	uint64_t t6 = 272994185299LLU;

    t6 = ((x25%x26)^(x27|x28));

    if (t6 != 18446744069414588953LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 3140U;
	static int16_t x31 = -194;
	static volatile int32_t x32 = INT32_MIN;

    t7 = ((x29%x30)^(x31|x32));

    if (t7 != 4294967102U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;

    t8 = ((x33%x34)^(x35|x36));

    if (t8 != -65536LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	volatile int16_t x39 = INT16_MAX;
	volatile int8_t x40 = INT8_MIN;
	int64_t t9 = -2169LL;

    t9 = ((x37%x38)^(x39|x40));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -13732399;
	int64_t x42 = -1LL;
	int8_t x43 = 1;
	volatile uint64_t x44 = 2072302LLU;
	uint64_t t10 = 114362LLU;

    t10 = ((x41%x42)^(x43|x44));

    if (t10 != 2072303LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = 120;
	int8_t x47 = INT8_MIN;
	int16_t x48 = 1;
	static uint64_t t11 = 1585612597LLU;

    t11 = ((x45%x46)^(x47|x48));

    if (t11 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = 2777U;
	int8_t x51 = -4;
	static uint32_t x52 = UINT32_MAX;
	volatile uint32_t t12 = 1U;

    t12 = ((x49%x50)^(x51|x52));

    if (t12 != 4294967168U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x55 = UINT32_MAX;
	volatile int64_t t13 = 338208580618010344LL;

    t13 = ((x53%x54)^(x55|x56));

    if (t13 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 1580U;
	static volatile int16_t x58 = -6370;
	uint64_t x60 = 7856339233LLU;

    t14 = ((x57%x58)^(x59|x60));

    if (t14 != 7856880471LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = 5504021812LL;
	static int16_t x63 = -1;
	uint64_t x64 = 7367022LLU;
	static volatile uint64_t t15 = 1LLU;

    t15 = ((x61%x62)^(x63|x64));

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x66 = INT8_MIN;
	int32_t x67 = -1;
	static int32_t t16 = -18588944;

    t16 = ((x65%x66)^(x67|x68));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MIN;
	int16_t x71 = -1;
	static volatile int64_t t17 = -381768LL;

    t17 = ((x69%x70)^(x71|x72));

    if (t17 != 4294901760LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	uint32_t x74 = 2022814229U;
	uint16_t x75 = UINT16_MAX;
	volatile uint32_t t18 = 15945362U;

    t18 = ((x73%x74)^(x75|x76));

    if (t18 != 249324713U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -62115625;
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = INT32_MIN;
	volatile uint32_t t19 = 34644200U;

    t19 = ((x77%x78)^(x79|x80));

    if (t19 != 2081128855U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	volatile int32_t x82 = -784;
	uint16_t x84 = 3731U;
	int32_t t20 = 6;

    t20 = ((x81%x82)^(x83|x84));

    if (t20 != -3705) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	static volatile int64_t x86 = -1513421232583498009LL;
	int32_t x87 = -25498857;
	int8_t x88 = 30;
	int64_t t21 = 13286368912LL;

    t21 = ((x85%x86)^(x87|x88));

    if (t21 != -25498784LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	int8_t x91 = -55;
	int64_t x92 = 376545592410424LL;
	int64_t t22 = 980LL;

    t22 = ((x89%x90)^(x91|x92));

    if (t22 != 32761LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MAX;
	int32_t x96 = INT32_MIN;
	volatile int64_t t23 = -1240865837832553651LL;

    t23 = ((x93%x94)^(x95|x96));

    if (t23 != 2147450880LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x98 = 503576434761LLU;

    t24 = ((x97%x98)^(x99|x100));

    if (t24 != 2139451455LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	int64_t x102 = -1LL;
	int64_t x103 = 7LL;
	static int16_t x104 = 25;

    t25 = ((x101%x102)^(x103|x104));

    if (t25 != 31LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 1138188285U;
	int32_t x108 = -338036;
	uint64_t t26 = 7782890982882779LLU;

    t26 = ((x105%x106)^(x107|x108));

    if (t26 != 18446744073164178217LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 1032221U;
	uint32_t x111 = 17451U;
	int32_t x112 = INT32_MIN;
	static volatile uint32_t t27 = 49U;

    t27 = ((x109%x110)^(x111|x112));

    if (t27 != 2148500534U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 8720283641LLU;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	uint64_t t28 = 930837354LLU;

    t28 = ((x113%x114)^(x115|x116));

    if (t28 != 18446744064989267974LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MAX;
	int32_t x118 = -1;
	uint32_t x120 = 13U;
	volatile uint32_t t29 = 4U;

    t29 = ((x117%x118)^(x119|x120));

    if (t29 != 4294934541U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	volatile int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MAX;
	int64_t t30 = INT64_MAX;

    t30 = ((x121%x122)^(x123|x124));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = -1LL;
	int16_t x127 = -1;
	int8_t x128 = INT8_MIN;
	int64_t t31 = -2043952312420LL;

    t31 = ((x125%x126)^(x127|x128));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	static uint32_t x132 = 189957U;
	int64_t t32 = 13340029671263LL;

    t32 = ((x129%x130)^(x131|x132));

    if (t32 != -9223372036854605318LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 132U;
	static volatile uint64_t x134 = 5723910840445LLU;
	int32_t x135 = -1;
	uint64_t x136 = 1400986223550718LLU;
	volatile uint64_t t33 = 42554751142LLU;

    t33 = ((x133%x134)^(x135|x136));

    if (t33 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 196387637412563LLU;
	int32_t x138 = -1;
	volatile uint64_t t34 = 59496LLU;

    t34 = ((x137%x138)^(x139|x140));

    if (t34 != 18446547686072138524LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -43;
	static int16_t x143 = -1;
	static uint64_t x144 = 14316LLU;

    t35 = ((x141%x142)^(x143|x144));

    if (t35 != 42LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = UINT32_MAX;
	volatile int8_t x146 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	static int64_t t36 = -323010122LL;

    t36 = ((x145%x146)^(x147|x148));

    if (t36 != -10330LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = UINT8_MAX;
	int64_t x150 = 8762198351001LL;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MIN;

    t37 = ((x149%x150)^(x151|x152));

    if (t37 != -32513LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	volatile int32_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = 16;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = ((x153%x154)^(x155|x156));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 4078253765041LLU;
	volatile int64_t x158 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;

    t39 = ((x157%x158)^(x159|x160));

    if (t39 != 4077889130062LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 5U;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = 98U;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t40 = 104436017412LL;

    t40 = ((x161%x162)^(x163|x164));

    if (t40 != -9223372036854775705LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x167 = INT32_MIN;
	volatile uint8_t x168 = 12U;
	int64_t t41 = -2179961413LL;

    t41 = ((x165%x166)^(x167|x168));

    if (t41 != -2147450893LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	uint64_t x170 = 320385203055LLU;
	volatile int8_t x171 = 1;
	int8_t x172 = INT8_MIN;
	static volatile uint64_t t42 = 4461233137895LLU;

    t42 = ((x169%x170)^(x171|x172));

    if (t42 != 18446743866160220191LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MIN;
	static uint8_t x175 = 50U;
	uint32_t x176 = 24U;
	volatile int64_t t43 = 57577855540761709LL;

    t43 = ((x173%x174)^(x175|x176));

    if (t43 != 58LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	static int32_t x178 = -926554;
	uint64_t x179 = 14LLU;
	volatile int8_t x180 = INT8_MIN;
	static uint64_t t44 = 12364LLU;

    t44 = ((x177%x178)^(x179|x180));

    if (t44 != 486116LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 291U;
	uint8_t x182 = 25U;
	static uint64_t x183 = UINT64_MAX;
	volatile int64_t x184 = INT64_MIN;

    t45 = ((x181%x182)^(x183|x184));

    if (t45 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MAX;
	int16_t x187 = -1744;
	int8_t x188 = 2;
	volatile uint32_t t46 = 2092U;

    t46 = ((x185%x186)^(x187|x188));

    if (t46 != 4294936269U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	uint64_t x190 = 4261166817124LLU;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	uint64_t t47 = 173988984LLU;

    t47 = ((x189%x190)^(x191|x192));

    if (t47 != 18446740292168395315LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = INT32_MAX;
	static int32_t x194 = -6;
	uint64_t x195 = UINT64_MAX;
	int32_t x196 = 838477;
	uint64_t t48 = 8742675585818911788LLU;

    t48 = ((x193%x194)^(x195|x196));

    if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = -1;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	int8_t x200 = 1;
	static volatile int32_t t49 = -100;

    t49 = ((x197%x198)^(x199|x200));

    if (t49 != -256) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -36;
	volatile int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MIN;

    t50 = ((x201%x202)^(x203|x204));

    if (t50 != 92LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x209 = UINT64_MAX;
	static int32_t x210 = 53157;
	int16_t x211 = 1;
	volatile uint32_t x212 = 230U;
	volatile uint64_t t51 = 643LLU;

    t51 = ((x209%x210)^(x211|x212));

    if (t51 != 23796LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = INT32_MIN;
	static int8_t x214 = 1;
	uint64_t x215 = 5022385983284LLU;
	uint64_t t52 = 332040696283910800LLU;

    t52 = ((x213%x214)^(x215|x216));

    if (t52 != 5022964252671LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x217 = 54U;
	int32_t x218 = INT32_MIN;
	int32_t x219 = -4425;
	int64_t x220 = -1LL;
	volatile int64_t t53 = -1196423656524LL;

    t53 = ((x217%x218)^(x219|x220));

    if (t53 != -55LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x222 = -155;
	static uint64_t x223 = 3914351642LLU;
	int8_t x224 = -1;

    t54 = ((x221%x222)^(x223|x224));

    if (t54 != 18446743042243921398LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x226 = INT64_MAX;
	static int16_t x227 = INT16_MIN;
	int8_t x228 = -1;
	volatile int64_t t55 = 705LL;

    t55 = ((x225%x226)^(x227|x228));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = -1;
	uint64_t x231 = 541786835574589LLU;
	volatile uint64_t t56 = 66LLU;

    t56 = ((x229%x230)^(x231|x232));

    if (t56 != 541786835574655LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x234 = UINT16_MAX;
	static volatile int16_t x235 = -1;
	int64_t t57 = 10326370952754561LL;

    t57 = ((x233%x234)^(x235|x236));

    if (t57 != 32767LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = -7809;
	static volatile int64_t t58 = 21826835LL;

    t58 = ((x237%x238)^(x239|x240));

    if (t58 != -7299LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x241 = INT16_MAX;
	int64_t x242 = -1LL;
	static volatile int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t59 = INT64_MIN;

    t59 = ((x241%x242)^(x243|x244));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 345583U;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	volatile uint8_t x248 = UINT8_MAX;
	int64_t t60 = 0LL;

    t60 = ((x245%x246)^(x247|x248));

    if (t60 != -9223372036854430448LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x249 = 10754U;
	static int64_t x250 = INT64_MAX;
	static volatile int8_t x251 = -1;
	static int16_t x252 = INT16_MIN;

    t61 = ((x249%x250)^(x251|x252));

    if (t61 != -10755LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x254 = INT64_MAX;
	static volatile int32_t x255 = INT32_MAX;
	int64_t t62 = -1968873942LL;

    t62 = ((x253%x254)^(x255|x256));

    if (t62 != -4294967275LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = -1LL;
	int32_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static int8_t x260 = INT8_MIN;
	int64_t t63 = 61468LL;

    t63 = ((x257%x258)^(x259|x260));

    if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = INT32_MAX;
	static volatile uint32_t x263 = 59U;
	int16_t x264 = -1;

    t64 = ((x261%x262)^(x263|x264));

    if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = INT16_MAX;
	int64_t x270 = 32LL;
	int32_t x271 = 311405;
	volatile int64_t t65 = -3626407LL;

    t65 = ((x269%x270)^(x271|x272));

    if (t65 != -2147172238LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = INT64_MAX;
	uint16_t x274 = 380U;
	uint32_t x275 = 123925U;
	volatile uint32_t x276 = UINT32_MAX;

    t66 = ((x273%x274)^(x275|x276));

    if (t66 != 4294967088LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = INT32_MIN;
	uint8_t x278 = UINT8_MAX;
	volatile uint32_t x279 = 1U;
	static int64_t x280 = 0LL;
	int64_t t67 = -6LL;

    t67 = ((x277%x278)^(x279|x280));

    if (t67 != -127LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -105776772LL;
	int32_t x283 = 31760079;
	volatile int32_t x284 = INT32_MIN;
	static volatile int64_t t68 = 341302LL;

    t68 = ((x281%x282)^(x283|x284));

    if (t68 != 2115723442LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = INT64_MAX;
	static int8_t x286 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	int64_t t69 = 4496234888591167246LL;

    t69 = ((x285%x286)^(x287|x288));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x290 = 15U;
	int8_t x291 = 0;
	uint8_t x292 = 1U;
	volatile int32_t t70 = 418573214;

    t70 = ((x289%x290)^(x291|x292));

    if (t70 != -7) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x293 = 0;
	uint8_t x295 = 122U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t71 = 310134;

    t71 = ((x293%x294)^(x295|x296));

    if (t71 != -6) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = UINT16_MAX;
	int64_t x299 = 34928608307925LL;
	int32_t x300 = -27522;
	static int64_t t72 = -95635928394920550LL;

    t72 = ((x297%x298)^(x299|x300));

    if (t72 != -260LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x301 = 80145298LLU;
	int8_t x302 = INT8_MAX;
	uint64_t t73 = 55714891207LLU;

    t73 = ((x301%x302)^(x303|x304));

    if (t73 != 2964132052LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	int64_t x306 = -101224473823173LL;
	static int32_t x308 = INT32_MIN;

    t74 = ((x305%x306)^(x307|x308));

    if (t74 != -2147418368LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = -175914191316LL;
	static volatile int16_t x310 = 55;
	volatile int64_t x311 = INT64_MIN;
	static int64_t x312 = INT64_MAX;
	volatile int64_t t75 = -6871898LL;

    t75 = ((x309%x310)^(x311|x312));

    if (t75 != 5LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = 6678;
	int8_t x315 = 1;
	int32_t t76 = -4462594;

    t76 = ((x313%x314)^(x315|x316));

    if (t76 != 5797) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x318 = 125219U;
	volatile int64_t x319 = -1LL;
	int16_t x320 = 77;

    t77 = ((x317%x318)^(x319|x320));

    if (t77 != -100114LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = 113;
	uint16_t x322 = 620U;
	int8_t x323 = -56;
	int8_t x324 = -2;
	volatile int32_t t78 = 705;

    t78 = ((x321%x322)^(x323|x324));

    if (t78 != -113) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x326 = 1;
	volatile uint8_t x327 = 13U;
	static volatile int32_t t79 = 97;

    t79 = ((x325%x326)^(x327|x328));

    if (t79 != -32755) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x329 = 17U;
	int8_t x331 = INT8_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

    t80 = ((x329%x330)^(x331|x332));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x333 = 1390U;
	uint32_t x335 = UINT32_MAX;
	uint16_t x336 = UINT16_MAX;
	uint32_t t81 = 65410597U;

    t81 = ((x333%x334)^(x335|x336));

    if (t81 != 4294967281U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = 3542U;
	int16_t x339 = 1;
	uint8_t x340 = 29U;
	volatile uint32_t t82 = 1262043761U;

    t82 = ((x337%x338)^(x339|x340));

    if (t82 != 3531U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x342 = 1;
	static int64_t x343 = INT64_MIN;
	int16_t x344 = 328;
	volatile int64_t t83 = -962LL;

    t83 = ((x341%x342)^(x343|x344));

    if (t83 != -9223372036854775480LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x346 = UINT64_MAX;
	int32_t x347 = INT32_MAX;
	static uint16_t x348 = UINT16_MAX;
	uint64_t t84 = 893072LLU;

    t84 = ((x345%x346)^(x347|x348));

    if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = 69557178938194501LLU;
	volatile int32_t x350 = 4;
	uint8_t x351 = 7U;
	int8_t x352 = -1;
	static uint64_t t85 = 112LLU;

    t85 = ((x349%x350)^(x351|x352));

    if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x353 = -1LL;
	volatile int64_t x354 = 579253916LL;
	int16_t x356 = -5;
	volatile int64_t t86 = 17406713494818LL;

    t86 = ((x353%x354)^(x355|x356));

    if (t86 != 4LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = INT64_MAX;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	int8_t x360 = INT8_MIN;

    t87 = ((x357%x358)^(x359|x360));

    if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x362 = INT64_MIN;
	int16_t x363 = 0;
	int64_t x364 = INT64_MIN;

    t88 = ((x361%x362)^(x363|x364));

    if (t88 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	int64_t t89 = -114281475902LL;

    t89 = ((x369%x370)^(x371|x372));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x373 = INT32_MIN;
	static int16_t x374 = 313;
	int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t90 = 101551;

    t90 = ((x373%x374)^(x375|x376));

    if (t90 != 37) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x378 = INT16_MIN;
	static uint64_t x379 = UINT64_MAX;
	uint16_t x380 = 10U;
	volatile uint64_t t91 = 3227636026524270637LLU;

    t91 = ((x377%x378)^(x379|x380));

    if (t91 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	static volatile int32_t x384 = INT32_MIN;
	volatile int32_t t92 = -1;

    t92 = ((x381%x382)^(x383|x384));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = UINT16_MAX;
	int8_t x386 = -1;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t93 = 18520688;

    t93 = ((x385%x386)^(x387|x388));

    if (t93 != -2147483614) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x389 = 0;
	int64_t x390 = INT64_MAX;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -1LL;
	static int64_t t94 = 4610869LL;

    t94 = ((x389%x390)^(x391|x392));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MAX;

    t95 = ((x393%x394)^(x395|x396));

    if (t95 != 1165739U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	static uint8_t x400 = 1U;
	int64_t t96 = 290LL;

    t96 = ((x397%x398)^(x399|x400));

    if (t96 != -2147483522LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = 2084706668LL;
	int8_t x402 = -1;
	volatile uint16_t x403 = 1U;
	int8_t x404 = -1;

    t97 = ((x401%x402)^(x403|x404));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = -1LL;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	int64_t t98 = 1023440717952075LL;

    t98 = ((x405%x406)^(x407|x408));

    if (t98 != 5072LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = -30;
	int32_t x410 = INT32_MAX;
	static uint32_t x411 = 3137559U;
	uint8_t x412 = UINT8_MAX;

    t99 = ((x409%x410)^(x411|x412));

    if (t99 != 4291829533U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x414 = 5630582465LL;
	int8_t x415 = INT8_MIN;
	int64_t x416 = -329389906287339LL;
	static int64_t t100 = 239397436679666LL;

    t100 = ((x413%x414)^(x415|x416));

    if (t100 != -107LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x417 = 110U;
	static uint64_t x418 = 4711936768LLU;
	int32_t x419 = 11154959;
	static volatile int64_t x420 = 0LL;
	uint64_t t101 = 67801672LLU;

    t101 = ((x417%x418)^(x419|x420));

    if (t101 != 11155041LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = 1;
	static int64_t x423 = INT64_MIN;
	uint8_t x424 = UINT8_MAX;

    t102 = ((x421%x422)^(x423|x424));

    if (t102 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = -1;
	volatile int16_t x426 = INT16_MAX;
	int16_t x427 = INT16_MAX;
	int64_t x428 = -1LL;
	volatile int64_t t103 = -542466273240LL;

    t103 = ((x425%x426)^(x427|x428));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x431 = 3U;
	static int64_t x432 = INT64_MAX;
	static volatile uint64_t t104 = 54280100LLU;

    t104 = ((x429%x430)^(x431|x432));

    if (t104 != 9223372036328940163LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x433 = 7995025LLU;
	uint32_t x434 = 295180053U;
	volatile uint64_t x435 = 544475LLU;
	int8_t x436 = INT8_MAX;

    t105 = ((x433%x434)^(x435|x436));

    if (t105 != 7450734LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x437 = -1;
	static int8_t x440 = INT8_MAX;

    t106 = ((x437%x438)^(x439|x440));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x443 = INT32_MIN;
	uint16_t x444 = 3U;
	volatile int32_t t107 = 2382;

    t107 = ((x441%x442)^(x443|x444));

    if (t107 != -2147483645) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = -70LL;
	static int16_t x446 = INT16_MIN;
	int32_t x447 = INT32_MIN;
	static volatile uint8_t x448 = 0U;
	volatile int64_t t108 = 55930297455LL;

    t108 = ((x445%x446)^(x447|x448));

    if (t108 != 2147483578LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x450 = UINT64_MAX;
	volatile uint64_t t109 = 603326LLU;

    t109 = ((x449%x450)^(x451|x452));

    if (t109 != 4289093120LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x453 = -1;
	static int16_t x454 = 1;
	int8_t x455 = 1;
	uint64_t x456 = 16573LLU;
	volatile uint64_t t110 = 73300LLU;

    t110 = ((x453%x454)^(x455|x456));

    if (t110 != 16573LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = 2;
	uint8_t x459 = 56U;

    t111 = ((x457%x458)^(x459|x460));

    if (t111 != -7554) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x461 = 2382410LL;
	static int32_t x462 = INT32_MIN;
	uint64_t x463 = UINT64_MAX;
	static int64_t x464 = -1LL;
	volatile uint64_t t112 = 77378622889LLU;

    t112 = ((x461%x462)^(x463|x464));

    if (t112 != 18446744073707169205LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x465 = 845749486977885LL;
	int32_t x466 = INT32_MIN;
	static volatile uint16_t x467 = 29658U;
	static uint32_t x468 = UINT32_MAX;
	volatile int64_t t113 = -1316684982931232LL;

    t113 = ((x465%x466)^(x467|x468));

    if (t113 != 2588048546LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = 129766065840633587LL;
	int64_t x470 = INT64_MAX;
	uint8_t x471 = 30U;
	volatile int64_t t114 = -9177973289LL;

    t114 = ((x469%x470)^(x471|x472));

    if (t114 != -129766066836162835LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x477 = 48998U;
	volatile int64_t x478 = 1939437373809LL;
	int8_t x479 = -37;
	volatile int64_t x480 = INT64_MIN;
	int64_t t115 = 2550986706249LL;

    t115 = ((x477%x478)^(x479|x480));

    if (t115 != -48963LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x481 = -2480142;
	volatile uint32_t x482 = 45725146U;
	int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MIN;
	static int64_t t116 = -570910739833174LL;

    t116 = ((x481%x482)^(x483|x484));

    if (t116 != -2107435072LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = INT8_MAX;
	static uint32_t x486 = 642U;
	uint8_t x488 = 0U;
	volatile uint32_t t117 = 1874112845U;

    t117 = ((x485%x486)^(x487|x488));

    if (t117 != 118U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x489 = 2114253146631964749LL;
	uint64_t x490 = 392345779090LLU;
	int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	uint64_t t118 = 1248074362649LLU;

    t118 = ((x489%x490)^(x491|x492));

    if (t118 != 18446743851803045276LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x495 = -1LL;
	int64_t x496 = INT64_MAX;
	int64_t t119 = -15502379619LL;

    t119 = ((x493%x494)^(x495|x496));

    if (t119 != 127LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x500 = UINT8_MAX;
	volatile uint32_t t120 = 23487U;

    t120 = ((x497%x498)^(x499|x500));

    if (t120 != 2814U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x502 = UINT64_MAX;
	int64_t x503 = INT64_MIN;
	static int8_t x504 = INT8_MAX;
	uint64_t t121 = 7451552LLU;

    t121 = ((x501%x502)^(x503|x504));

    if (t121 != 9223372036854775920LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = -1;
	static int16_t x506 = INT16_MIN;
	uint64_t x507 = 1500283062728071LLU;
	volatile int64_t x508 = 22416LL;
	volatile uint64_t t122 = 33315088LLU;

    t122 = ((x505%x506)^(x507|x508));

    if (t122 != 18445243790646806632LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = -57946;
	int16_t x511 = INT16_MIN;
	volatile int64_t t123 = 141476LL;

    t123 = ((x509%x510)^(x511|x512));

    if (t123 != 7590LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x513 = UINT16_MAX;
	static int32_t x514 = INT32_MIN;
	volatile uint64_t x516 = 230828155LLU;
	uint64_t t124 = 911534618LLU;

    t124 = ((x513%x514)^(x515|x516));

    if (t124 != 230872964LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MIN;
	volatile int64_t x518 = 1LL;
	static int64_t x519 = -1LL;
	int64_t t125 = 0LL;

    t125 = ((x517%x518)^(x519|x520));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x521 = 57U;
	int16_t x522 = INT16_MIN;
	int32_t x524 = INT32_MIN;
	int32_t t126 = -1613863;

    t126 = ((x521%x522)^(x523|x524));

    if (t126 != -5752) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x525 = -37763667LL;
	int64_t x526 = -8846527818LL;
	static uint8_t x527 = UINT8_MAX;
	int64_t x528 = 94537186620LL;
	volatile int64_t t127 = 19435499348LL;

    t127 = ((x525%x526)^(x527|x528));

    if (t127 != -94499424174LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = -1;
	volatile uint16_t x530 = 1301U;
	int32_t t128 = 978429;

    t128 = ((x529%x530)^(x531|x532));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x533 = 5U;
	uint32_t x534 = UINT32_MAX;
	int8_t x535 = INT8_MAX;
	static int16_t x536 = INT16_MIN;

    t129 = ((x533%x534)^(x535|x536));

    if (t129 != 4294934650U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x538 = UINT16_MAX;
	int32_t x539 = 12104;
	int8_t x540 = -2;
	int32_t t130 = 0;

    t130 = ((x537%x538)^(x539|x540));

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x541 = -3LL;
	int32_t x544 = -1;
	int64_t t131 = -28442724153LL;

    t131 = ((x541%x542)^(x543|x544));

    if (t131 != 2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x545 = 412U;
	int16_t x547 = INT16_MIN;
	int16_t x548 = -94;
	uint32_t t132 = 100851U;

    t132 = ((x545%x546)^(x547|x548));

    if (t132 != 4294966846U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x549 = 12U;
	volatile uint16_t x550 = 906U;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = INT16_MIN;
	volatile int32_t t133 = -454379;

    t133 = ((x549%x550)^(x551|x552));

    if (t133 != -32525) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x553 = -1;
	int64_t x554 = INT64_MIN;
	uint32_t x555 = UINT32_MAX;

    t134 = ((x553%x554)^(x555|x556));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x558 = -1;
	int32_t x560 = INT32_MAX;
	int64_t t135 = 113883579LL;

    t135 = ((x557%x558)^(x559|x560));

    if (t135 != -204324358913523713LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x561 = 1U;
	int32_t x562 = -1;
	uint16_t x563 = UINT16_MAX;
	int64_t x564 = 1748698995257423LL;
	static int64_t t136 = -477628228031996LL;

    t136 = ((x561%x562)^(x563|x564));

    if (t136 != 1748698995294207LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = INT16_MIN;
	volatile int64_t x566 = INT64_MIN;
	volatile int16_t x567 = -1;
	static int16_t x568 = INT16_MIN;
	volatile int64_t t137 = -1LL;

    t137 = ((x565%x566)^(x567|x568));

    if (t137 != 32767LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x572 = 406317347U;
	uint64_t t138 = 57845LLU;

    t138 = ((x569%x570)^(x571|x572));

    if (t138 != 1496560320199519LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = INT32_MAX;
	int32_t x574 = -244;
	static int64_t x576 = 3578996206LL;
	uint64_t t139 = 3659347LLU;

    t139 = ((x573%x574)^(x575|x576));

    if (t139 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x577 = UINT64_MAX;
	uint16_t x578 = 6U;
	static int64_t x579 = INT64_MIN;
	volatile int16_t x580 = -58;

    t140 = ((x577%x578)^(x579|x580));

    if (t140 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = INT32_MIN;
	int32_t x583 = INT32_MAX;

    t141 = ((x581%x582)^(x583|x584));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x585 = 64U;
	static uint8_t x586 = UINT8_MAX;
	static int32_t x587 = INT32_MIN;
	int32_t x588 = INT32_MAX;
	volatile int32_t t142 = -391;

    t142 = ((x585%x586)^(x587|x588));

    if (t142 != -65) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x590 = INT16_MIN;
	static uint16_t x591 = 26U;
	static int64_t x592 = INT64_MAX;
	volatile int64_t t143 = -25101121013143665LL;

    t143 = ((x589%x590)^(x591|x592));

    if (t143 != 9223372036854758029LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x595 = 18;
	static volatile int16_t x596 = INT16_MAX;

    t144 = ((x593%x594)^(x595|x596));

    if (t144 != 32738) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x598 = 1249;
	int32_t x599 = -29;
	static uint32_t x600 = UINT32_MAX;
	uint32_t t145 = 0U;

    t145 = ((x597%x598)^(x599|x600));

    if (t145 != 293U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x601 = -1;
	uint8_t x602 = UINT8_MAX;
	int16_t x603 = -8;
	volatile int32_t t146 = -131707;

    t146 = ((x601%x602)^(x603|x604));

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x605 = INT16_MIN;
	int8_t x606 = 1;
	uint8_t x607 = 4U;
	static volatile int32_t t147 = -485238508;

    t147 = ((x605%x606)^(x607|x608));

    if (t147 != -2147483644) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x609 = -1;
	int32_t x610 = INT32_MAX;
	int8_t x611 = INT8_MIN;
	volatile int32_t t148 = -143;

    t148 = ((x609%x610)^(x611|x612));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x614 = INT8_MIN;
	static int32_t x615 = INT32_MIN;
	static int8_t x616 = -25;
	volatile int32_t t149 = 390820167;

    t149 = ((x613%x614)^(x615|x616));

    if (t149 != -53) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = INT16_MIN;
	int16_t x618 = INT16_MAX;
	static int64_t x619 = INT64_MAX;
	volatile uint32_t x620 = 31022153U;
	static int64_t t150 = INT64_MIN;

    t150 = ((x617%x618)^(x619|x620));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x621 = INT32_MIN;
	uint32_t x622 = UINT32_MAX;
	static int32_t x623 = -1;

    t151 = ((x621%x622)^(x623|x624));

    if (t151 != -2147483649LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x625 = 31U;
	int8_t x626 = INT8_MAX;
	int32_t x627 = INT32_MIN;
	volatile int32_t x628 = -222197;

    t152 = ((x625%x626)^(x627|x628));

    if (t152 != -222188) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x630 = -1;
	int64_t x631 = INT64_MIN;
	int32_t x632 = INT32_MIN;
	int64_t t153 = -68627870274585LL;

    t153 = ((x629%x630)^(x631|x632));

    if (t153 != -2147483648LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x633 = 462140LLU;
	int32_t x634 = INT32_MIN;
	uint8_t x635 = 0U;
	int64_t x636 = INT64_MIN;

    t154 = ((x633%x634)^(x635|x636));

    if (t154 != 9223372036855237948LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x637 = UINT8_MAX;
	int32_t x638 = 28094;
	static int64_t x639 = INT64_MIN;
	static int32_t x640 = -1;
	volatile int64_t t155 = 31LL;

    t155 = ((x637%x638)^(x639|x640));

    if (t155 != -256LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = 0U;
	static volatile int16_t x642 = INT16_MIN;
	static volatile uint8_t x643 = 1U;
	uint32_t x644 = 3U;
	volatile uint32_t t156 = 7824730U;

    t156 = ((x641%x642)^(x643|x644));

    if (t156 != 3U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x645 = 102624892LLU;
	int64_t x647 = INT64_MIN;
	uint16_t x648 = 17964U;
	volatile uint64_t t157 = 985744134808093251LLU;

    t157 = ((x645%x646)^(x647|x648));

    if (t157 != 9223372036957382736LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x650 = 63U;
	volatile int64_t x651 = INT64_MIN;
	volatile int64_t x652 = INT64_MIN;
	volatile int64_t t158 = -64615705LL;

    t158 = ((x649%x650)^(x651|x652));

    if (t158 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = -1LL;
	uint32_t x655 = 1U;
	int32_t x656 = INT32_MIN;

    t159 = ((x653%x654)^(x655|x656));

    if (t159 != 2147483649LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x657 = 17878;
	int32_t x658 = 29968;
	int32_t x659 = 94325;
	int64_t x660 = INT64_MIN;
	volatile int64_t t160 = 13792812302LL;

    t160 = ((x657%x658)^(x659|x660));

    if (t160 != -9223372036854696541LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x662 = UINT64_MAX;
	volatile int8_t x663 = INT8_MIN;
	uint16_t x664 = 1U;
	uint64_t t161 = 45374657921740LLU;

    t161 = ((x661%x662)^(x663|x664));

    if (t161 != 32641LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x665 = -19;
	uint8_t x666 = 1U;
	int32_t x667 = INT32_MIN;
	static int8_t x668 = -7;
	int32_t t162 = 21;

    t162 = ((x665%x666)^(x667|x668));

    if (t162 != -7) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x669 = INT16_MAX;
	int16_t x670 = 358;
	volatile uint16_t x671 = 1U;
	static int8_t x672 = INT8_MIN;
	volatile int32_t t163 = -60515;

    t163 = ((x669%x670)^(x671|x672));

    if (t163 != -196) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x674 = 229228945U;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t164 = 110145416U;

    t164 = ((x673%x674)^(x675|x676));

    if (t164 != 4294967040U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x678 = UINT16_MAX;
	static volatile int16_t x679 = -5;
	int32_t x680 = INT32_MAX;
	static volatile uint32_t t165 = UINT32_MAX;

    t165 = ((x677%x678)^(x679|x680));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x683 = UINT16_MAX;
	int64_t x684 = 5776271395LL;

    t166 = ((x681%x682)^(x683|x684));

    if (t166 != 5698866839LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x685 = 50U;
	int64_t x686 = 417LL;
	int16_t x687 = INT16_MAX;
	int8_t x688 = -1;
	volatile int64_t t167 = 53LL;

    t167 = ((x685%x686)^(x687|x688));

    if (t167 != -51LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x689 = INT8_MAX;
	int8_t x690 = -1;
	int64_t x691 = -1LL;
	static uint32_t x692 = UINT32_MAX;
	int64_t t168 = -93828LL;

    t168 = ((x689%x690)^(x691|x692));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x693 = -21;
	int32_t x694 = INT32_MIN;
	uint64_t x696 = UINT64_MAX;
	uint64_t t169 = 3LLU;

    t169 = ((x693%x694)^(x695|x696));

    if (t169 != 20LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x698 = 7U;
	int16_t x699 = -1;
	int64_t x700 = INT64_MAX;

    t170 = ((x697%x698)^(x699|x700));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x702 = INT8_MIN;
	volatile uint32_t x703 = 59611U;
	uint32_t t171 = 12691629U;

    t171 = ((x701%x702)^(x703|x704));

    if (t171 != 2147483520U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = -6LL;
	int16_t x706 = -1;
	uint16_t x707 = 143U;
	static int8_t x708 = -1;
	static volatile int64_t t172 = -436545187141502202LL;

    t172 = ((x705%x706)^(x707|x708));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = -15;
	int32_t x710 = 1067370152;
	int32_t x711 = -44850227;
	uint32_t x712 = 50726246U;
	uint32_t t173 = 1U;

    t173 = ((x709%x710)^(x711|x712));

    if (t173 != 11032606U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x713 = UINT8_MAX;
	int64_t x714 = INT64_MAX;
	volatile int32_t x715 = 4889;
	int64_t t174 = -401778519630599795LL;

    t174 = ((x713%x714)^(x715|x716));

    if (t174 != 5090LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x719 = INT8_MIN;
	volatile int64_t x720 = -2586860680650LL;

    t175 = ((x717%x718)^(x719|x720));

    if (t175 != -101LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x721 = INT32_MIN;
	volatile uint16_t x722 = UINT16_MAX;
	volatile int64_t x723 = INT64_MIN;
	int8_t x724 = 8;
	volatile int64_t t176 = 547680640746LL;

    t176 = ((x721%x722)^(x723|x724));

    if (t176 != 9223372036854743048LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x726 = UINT64_MAX;
	int16_t x727 = 12381;
	volatile int16_t x728 = 0;

    t177 = ((x725%x726)^(x727|x728));

    if (t177 != 308068614440LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = -1;
	static int32_t x730 = 92;
	int16_t x731 = INT16_MIN;
	int8_t x732 = 8;
	static volatile int32_t t178 = 42093;

    t178 = ((x729%x730)^(x731|x732));

    if (t178 != 32759) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x733 = 87U;
	volatile uint32_t x734 = 32U;
	static uint64_t x735 = 153028674080290LLU;
	int8_t x736 = INT8_MAX;
	volatile uint64_t t179 = 2532411201LLU;

    t179 = ((x733%x734)^(x735|x736));

    if (t179 != 153028674080360LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x737 = 470780933591LLU;
	int16_t x738 = -1;

    t180 = ((x737%x738)^(x739|x740));

    if (t180 != 18446743602928618024LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x741 = UINT16_MAX;
	static int32_t x742 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	int16_t x744 = INT16_MIN;
	volatile uint64_t t181 = 9LLU;

    t181 = ((x741%x742)^(x743|x744));

    if (t181 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x745 = UINT16_MAX;
	int32_t x746 = INT32_MAX;
	int8_t x747 = INT8_MAX;
	static volatile int32_t t182 = -114;

    t182 = ((x745%x746)^(x747|x748));

    if (t182 != -32896) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x749 = 1U;
	volatile uint16_t x750 = 2U;
	int64_t x751 = 2967276796LL;
	int32_t x752 = 1100;
	volatile int64_t t183 = 36LL;

    t183 = ((x749%x750)^(x751|x752));

    if (t183 != 2967276797LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x755 = INT16_MIN;
	uint16_t x756 = 1U;
	int32_t t184 = 291834;

    t184 = ((x753%x754)^(x755|x756));

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x758 = 3586677124LLU;
	volatile uint64_t t185 = 29476LLU;

    t185 = ((x757%x758)^(x759|x760));

    if (t185 != 18446744073377095374LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x761 = 1287210129LLU;
	int64_t x762 = 996657LL;
	volatile uint32_t x763 = 393452U;
	int32_t x764 = -953667240;
	uint64_t t186 = 3424258LLU;

    t186 = ((x761%x762)^(x763|x764));

    if (t186 != 3341170570LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x765 = 9130U;
	int16_t x766 = -123;
	int32_t x767 = -163;
	static int8_t x768 = INT8_MAX;
	volatile uint32_t t187 = 34341104U;

    t187 = ((x765%x766)^(x767|x768));

    if (t187 != 4294958293U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x774 = 214025327798LLU;
	uint16_t x776 = 2U;
	uint64_t t188 = 0LLU;

    t188 = ((x773%x774)^(x775|x776));

    if (t188 != 6944LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x777 = 1369040255275LLU;
	volatile int8_t x780 = INT8_MIN;
	volatile uint64_t t189 = 1011448363052LLU;

    t189 = ((x777%x778)^(x779|x780));

    if (t189 != 18446742704669296259LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x781 = -5;
	uint32_t x783 = 22994100U;
	uint8_t x784 = UINT8_MAX;
	int64_t t190 = 19758LL;

    t190 = ((x781%x782)^(x783|x784));

    if (t190 != 22994175LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x786 = INT32_MIN;
	static int32_t x788 = INT32_MIN;

    t191 = ((x785%x786)^(x787|x788));

    if (t191 != -2147483554LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x789 = 457U;
	int8_t x790 = INT8_MIN;
	int16_t x791 = -1;
	uint32_t t192 = 1276276779U;

    t192 = ((x789%x790)^(x791|x792));

    if (t192 != 4294966838U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = INT8_MAX;
	int32_t x794 = -165;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t193 = -4;

    t193 = ((x793%x794)^(x795|x796));

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x797 = INT16_MIN;
	int32_t x798 = INT32_MIN;
	static int16_t x799 = INT16_MIN;
	int32_t t194 = 25;

    t194 = ((x797%x798)^(x799|x800));

    if (t194 != 701) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x801 = 547243LLU;
	int16_t x803 = INT16_MIN;
	int8_t x804 = 0;
	static uint64_t t195 = 1634632140LLU;

    t195 = ((x801%x802)^(x803|x804));

    if (t195 != 18446744073709521099LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x807 = 355U;
	static int16_t x808 = -1;
	volatile uint32_t t196 = 530565359U;

    t196 = ((x805%x806)^(x807|x808));

    if (t196 != 4294967211U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x809 = 7LLU;
	static int32_t x810 = -4990782;
	static int32_t x811 = INT32_MIN;
	static volatile int32_t x812 = -1;

    t197 = ((x809%x810)^(x811|x812));

    if (t197 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x813 = 0;
	static int16_t x815 = 0;
	volatile int64_t x816 = INT64_MAX;

    t198 = ((x813%x814)^(x815|x816));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x817 = UINT64_MAX;
	uint8_t x818 = 3U;
	volatile uint64_t x819 = 125033126LLU;
	static int32_t x820 = INT32_MIN;
	uint64_t t199 = 15846120126LLU;

    t199 = ((x817%x818)^(x819|x820));

    if (t199 != 18446744071687101094LLU) { NG(); } else { ; }
	
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

