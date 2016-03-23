
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

static int64_t x10 = -88376052646336LL;
uint64_t x20 = UINT64_MAX;
uint32_t x22 = 3982U;
int32_t x31 = INT32_MAX;
int16_t x36 = 1604;
uint32_t x39 = 2579U;
static uint64_t x46 = 18180725294884LLU;
uint16_t x48 = UINT16_MAX;
int8_t x49 = INT8_MAX;
volatile int16_t x56 = 1244;
static int64_t x63 = -17478841278533009LL;
volatile uint64_t x85 = UINT64_MAX;
uint64_t x93 = 1905095LLU;
int16_t x96 = INT16_MAX;
int8_t x99 = INT8_MIN;
volatile uint8_t x101 = 2U;
volatile int16_t x102 = INT16_MIN;
uint16_t x103 = 11U;
static int32_t t25 = 30;
uint32_t x107 = 59U;
uint32_t x109 = 108397966U;
uint16_t x111 = 3807U;
uint32_t t27 = 1U;
static uint32_t x117 = 1426533237U;
volatile int32_t x120 = -1;
uint64_t x124 = 1434561037380866080LLU;
volatile int32_t x134 = -11901588;
uint32_t x136 = 28405647U;
int16_t x137 = INT16_MIN;
int8_t x164 = -13;
volatile uint64_t x167 = UINT64_MAX;
static int16_t x172 = INT16_MAX;
static uint32_t x179 = 78U;
int16_t x180 = -113;
int64_t t45 = -180330099317LL;
static int64_t x185 = -3822840008546LL;
int64_t t46 = -5221453430LL;
uint16_t x203 = 1U;
int32_t x207 = -1;
static int16_t x210 = INT16_MAX;
static int32_t x212 = 13;
uint32_t t52 = 38U;
int8_t x214 = INT8_MAX;
uint32_t t53 = 1478U;
static volatile int32_t x217 = INT32_MIN;
volatile int8_t x222 = INT8_MIN;
uint64_t x226 = 322LLU;
static int64_t x231 = 55494LL;
static uint16_t x235 = UINT16_MAX;
int32_t t59 = 0;
volatile uint32_t x243 = UINT32_MAX;
static volatile uint64_t t60 = 51797LLU;
int64_t x247 = -549652429051LL;
int32_t x250 = INT32_MAX;
volatile int32_t t62 = -10297546;
static int32_t x254 = -33;
int8_t x256 = INT8_MIN;
int8_t x259 = INT8_MIN;
static volatile int32_t t64 = 58;
static int8_t x264 = INT8_MAX;
uint8_t x266 = UINT8_MAX;
volatile int32_t t66 = 10186;
int16_t x270 = INT16_MIN;
uint32_t x271 = UINT32_MAX;
volatile int32_t t67 = 374;
volatile int16_t x277 = 0;
volatile uint64_t x280 = 194927764996570LLU;
volatile int32_t t69 = 60190173;
uint16_t x284 = UINT16_MAX;
static volatile int64_t t71 = 6996518905543LL;
uint8_t x289 = 0U;
uint64_t t72 = 8747064142703LLU;
volatile int32_t t73 = 4066496;
static int16_t x299 = INT16_MIN;
int64_t x303 = -28225912448LL;
uint16_t x311 = UINT16_MAX;
uint32_t x313 = 14560873U;
int64_t x328 = 2369397607073LL;
volatile uint64_t t81 = UINT64_MAX;
int32_t x334 = -1;
static uint16_t x335 = UINT16_MAX;
uint8_t x349 = UINT8_MAX;
uint8_t x350 = 6U;
int32_t t87 = -967;
int8_t x358 = INT8_MIN;
int32_t x362 = 20977;
int32_t x364 = 323;
volatile int16_t x378 = 4107;
volatile int32_t t95 = 18902989;
int8_t x387 = INT8_MAX;
volatile int8_t x388 = INT8_MAX;
uint64_t t97 = 344LLU;
volatile int16_t x397 = 7797;
volatile int8_t x400 = INT8_MIN;
static uint16_t x404 = 1U;
static int8_t x415 = 3;
uint32_t t104 = 351211157U;
uint16_t x424 = 4091U;
volatile int64_t t105 = 2276735796LL;
static uint32_t x426 = 15548583U;
int64_t x427 = INT64_MAX;
int64_t x433 = INT64_MIN;
static int64_t t111 = 2LL;
static int16_t x450 = INT16_MAX;
static int32_t x464 = INT32_MIN;
uint32_t x466 = 141U;
static volatile uint32_t x472 = 521670U;
int64_t x480 = INT64_MIN;
uint32_t x481 = 39003U;
static int64_t t121 = INT64_MIN;
static volatile uint32_t x489 = 14010U;
static int32_t x490 = INT32_MAX;
uint32_t t122 = 146U;
uint8_t x493 = 52U;
uint8_t x496 = 4U;
int64_t x497 = -1LL;
int32_t x499 = INT32_MIN;
volatile uint64_t x501 = UINT64_MAX;
static uint16_t x507 = UINT16_MAX;
int16_t x509 = INT16_MIN;
volatile int64_t x511 = -3661645207576275501LL;
static volatile int16_t x525 = INT16_MIN;
int32_t x530 = 32887;
int64_t x532 = -1LL;
volatile int32_t x534 = INT32_MIN;
uint8_t x537 = UINT8_MAX;
uint64_t x539 = 1236552782046160LLU;
volatile uint64_t t134 = 245175318847907250LLU;
uint16_t x541 = 56U;
int16_t x542 = INT16_MIN;
int64_t x548 = INT64_MAX;
volatile uint32_t x561 = 24U;
int8_t x569 = -1;
volatile int64_t x577 = INT64_MIN;
static int8_t x580 = 63;
uint8_t x581 = 98U;
static int32_t x588 = INT32_MIN;
int16_t x589 = INT16_MIN;
int32_t x596 = INT32_MIN;
volatile int64_t x613 = INT64_MIN;
uint64_t x616 = 281953944916870568LLU;
volatile int64_t t153 = INT64_MIN;
volatile int32_t x621 = INT32_MAX;
uint8_t x623 = 6U;
uint64_t x628 = 438258268LLU;
int32_t t156 = -578212;
int16_t x637 = INT16_MIN;
uint64_t x639 = UINT64_MAX;
static volatile int16_t x641 = INT16_MIN;
int32_t x642 = -534;
int32_t x646 = -1;
int8_t x647 = 62;
int8_t x649 = -1;
uint64_t x654 = UINT64_MAX;
uint8_t x658 = 14U;
volatile uint8_t x659 = 0U;
volatile uint64_t x660 = 154147219313133603LLU;
uint32_t t165 = 177266780U;
volatile uint64_t x665 = 6547161711708707LLU;
volatile uint64_t t166 = 2539LLU;
volatile int32_t t167 = 28;
volatile int64_t x690 = INT64_MIN;
uint32_t x693 = 19U;
uint32_t x698 = 31965742U;
static uint8_t x702 = 83U;
static int8_t x703 = INT8_MIN;
static volatile int8_t x705 = 0;
volatile int32_t x710 = INT32_MAX;
uint32_t x716 = 20348289U;
uint64_t x717 = UINT64_MAX;
uint64_t t179 = 465LLU;
volatile int64_t x725 = INT64_MIN;
static volatile int16_t x728 = INT16_MIN;
static uint32_t x729 = UINT32_MAX;
int64_t x730 = -1LL;
volatile int64_t x731 = 2792973683LL;
volatile int64_t x733 = -1411490LL;
static uint32_t x734 = 134242U;
int64_t x735 = 98127610690LL;
uint32_t x738 = 24U;
int32_t x745 = -1;
uint8_t x748 = 13U;
static int8_t x749 = 0;
volatile int32_t t187 = 40124802;
uint64_t x757 = 18797605LLU;
int64_t x758 = INT64_MIN;
int32_t x765 = INT32_MIN;
volatile int32_t t191 = -777;
static volatile int16_t x776 = INT16_MIN;
volatile int32_t t193 = -370;
uint32_t t195 = 12810U;
volatile int8_t x793 = 3;
static int8_t x799 = 23;
int32_t t199 = 28632;


void f0(void) {
    	volatile int32_t x1 = INT32_MAX;
	volatile int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	int64_t x4 = 20685139945304LL;
	int32_t t0 = INT32_MAX;

    t0 = (x1*(x2&(x3!=x4)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	volatile int32_t x8 = -61358878;
	int64_t t1 = 317021113LL;

    t1 = (x5*(x6&(x7!=x8)));

    if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 1415;
	static int32_t x11 = -1;
	static volatile int16_t x12 = INT16_MAX;
	volatile int64_t t2 = -3473LL;

    t2 = (x9*(x10&(x11!=x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = UINT32_MAX;
	int8_t x15 = 1;
	int64_t x16 = -238465LL;
	uint32_t t3 = 3076U;

    t3 = (x13*(x14&(x15!=x16)));

    if (t3 != 65535U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 3403362545LLU;
	static uint64_t x18 = 5109251LLU;
	int64_t x19 = INT64_MIN;
	uint64_t t4 = 7963LLU;

    t4 = (x17*(x18&(x19!=x20)));

    if (t4 != 3403362545LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	static volatile int8_t x23 = -7;
	volatile int32_t x24 = INT32_MAX;
	int64_t t5 = 221890LL;

    t5 = (x21*(x22&(x23!=x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int8_t x26 = 56;
	static uint16_t x27 = UINT16_MAX;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -2;

    t6 = (x25*(x26&(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int8_t x30 = INT8_MIN;
	volatile int8_t x32 = INT8_MIN;
	static int32_t t7 = 4;

    t7 = (x29*(x30&(x31!=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = 49U;
	int16_t x34 = -1;
	static int32_t x35 = INT32_MAX;
	int32_t t8 = -1;

    t8 = (x33*(x34&(x35!=x36)));

    if (t8 != 49) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	uint16_t x38 = 49U;
	static volatile int8_t x40 = INT8_MIN;
	volatile int64_t t9 = INT64_MIN;

    t9 = (x37*(x38&(x39!=x40)));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -10;
	static uint64_t x42 = 15184816LLU;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -1943;
	volatile uint64_t t10 = 960316355289LLU;

    t10 = (x41*(x42&(x43!=x44)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int16_t x47 = -1;
	static uint64_t t11 = 979297431675LLU;

    t11 = (x45*(x46&(x47!=x48)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MAX;
	static int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = -53;

    t12 = (x49*(x50&(x51!=x52)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint32_t x54 = 35108660U;
	static volatile uint16_t x55 = UINT16_MAX;
	volatile int64_t t13 = 2638LL;

    t13 = (x53*(x54&(x55!=x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	static volatile int64_t t14 = INT64_MIN;

    t14 = (x57*(x58&(x59!=x60)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -63;
	volatile int32_t x62 = 493112;
	static uint64_t x64 = 737769991843LLU;
	volatile int32_t t15 = -371;

    t15 = (x61*(x62&(x63!=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 2740036;
	static int8_t x66 = INT8_MIN;
	static int64_t x67 = -113131571066377802LL;
	int8_t x68 = 61;
	static int32_t t16 = 107570996;

    t16 = (x65*(x66&(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = UINT32_MAX;
	volatile int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	static int64_t x72 = -1LL;
	static volatile uint32_t t17 = 1247U;

    t17 = (x69*(x70&(x71!=x72)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 131U;
	int16_t x74 = INT16_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	int64_t x76 = -1851LL;
	volatile int32_t t18 = -1410;

    t18 = (x73*(x74&(x75!=x76)));

    if (t18 != 131) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int8_t x78 = -1;
	static uint64_t x79 = 2445856604004LLU;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -909;

    t19 = (x77*(x78&(x79!=x80)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = 49U;
	volatile int8_t x82 = 2;
	uint32_t x83 = 752633109U;
	static int8_t x84 = -5;
	volatile int32_t t20 = -7036;

    t20 = (x81*(x82&(x83!=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = 1523437380204LLU;
	int64_t x87 = -1LL;
	volatile int64_t x88 = INT64_MIN;
	volatile uint64_t t21 = 5746875805088LLU;

    t21 = (x85*(x86&(x87!=x88)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = -1;
	int16_t x90 = 6;
	int8_t x91 = INT8_MIN;
	volatile int16_t x92 = INT16_MIN;
	int32_t t22 = 1017;

    t22 = (x89*(x90&(x91!=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MIN;
	volatile int16_t x95 = INT16_MIN;
	uint64_t t23 = 3532947LLU;

    t23 = (x93*(x94&(x95!=x96)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	volatile int32_t x98 = INT32_MAX;
	uint64_t x100 = 14LLU;
	int32_t t24 = 9546237;

    t24 = (x97*(x98&(x99!=x100)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x104 = 1333U;

    t25 = (x101*(x102&(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 2U;
	volatile int32_t x106 = INT32_MIN;
	uint16_t x108 = 1U;
	static int32_t t26 = -12566367;

    t26 = (x105*(x106&(x107!=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MIN;
	volatile uint64_t x112 = 4996275018748641102LLU;

    t27 = (x109*(x110&(x111!=x112)));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -22;
	uint16_t x114 = 159U;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = 4920LL;
	int32_t t28 = 129924265;

    t28 = (x113*(x114&(x115!=x116)));

    if (t28 != -22) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	volatile int32_t x119 = -109187;
	uint32_t t29 = 37U;

    t29 = (x117*(x118&(x119!=x120)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = -1LL;
	uint16_t x122 = 72U;
	int8_t x123 = INT8_MIN;
	int64_t t30 = 6LL;

    t30 = (x121*(x122&(x123!=x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 131U;
	static uint32_t x126 = 1749604U;
	volatile int64_t x127 = INT64_MIN;
	uint16_t x128 = 363U;
	static volatile uint32_t t31 = 1U;

    t31 = (x125*(x126&(x127!=x128)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -230LL;
	int64_t x130 = -480648617LL;
	uint16_t x131 = UINT16_MAX;
	static volatile int32_t x132 = INT32_MIN;
	int64_t t32 = 34595546LL;

    t32 = (x129*(x130&(x131!=x132)));

    if (t32 != -230LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MIN;
	uint32_t x135 = 6546356U;
	static int32_t t33 = -486;

    t33 = (x133*(x134&(x135!=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x138 = -532;
	static int16_t x139 = 127;
	static int32_t x140 = -1;
	int32_t t34 = -27171763;

    t34 = (x137*(x138&(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 1;
	int16_t x142 = -1;
	static uint64_t x143 = 1540414333614LLU;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -249664353;

    t35 = (x141*(x142&(x143!=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	static int64_t x146 = -191940592LL;
	uint16_t x147 = 1U;
	static uint16_t x148 = 35U;
	int64_t t36 = -27185500678LL;

    t36 = (x145*(x146&(x147!=x148)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	uint32_t x150 = 2291170U;
	int16_t x151 = INT16_MIN;
	static int16_t x152 = INT16_MIN;
	int64_t t37 = -3092LL;

    t37 = (x149*(x150&(x151!=x152)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = 1;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 27712236734509LLU;
	static volatile int64_t x156 = 799259648LL;
	volatile int32_t t38 = -18;

    t38 = (x153*(x154&(x155!=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static volatile int64_t x158 = INT64_MIN;
	int32_t x159 = 332419;
	volatile uint8_t x160 = 0U;
	volatile int64_t t39 = -1331935087800579LL;

    t39 = (x157*(x158&(x159!=x160)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	int8_t x162 = 1;
	uint32_t x163 = 1154U;
	int32_t t40 = -214712;

    t40 = (x161*(x162&(x163!=x164)));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	volatile int32_t x166 = INT32_MAX;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t41 = INT64_MIN;

    t41 = (x165*(x166&(x167!=x168)));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	int16_t x171 = INT16_MAX;
	static int64_t t42 = -462625908LL;

    t42 = (x169*(x170&(x171!=x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 32U;
	uint32_t x174 = UINT32_MAX;
	uint64_t x175 = UINT64_MAX;
	volatile int16_t x176 = 131;
	volatile uint32_t t43 = 100U;

    t43 = (x173*(x174&(x175!=x176)));

    if (t43 != 32U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 1308359LLU;
	int64_t x178 = -5564480LL;
	uint64_t t44 = 15767225LLU;

    t44 = (x177*(x178&(x179!=x180)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MAX;
	int64_t x183 = INT64_MAX;
	volatile int64_t x184 = -2771LL;

    t45 = (x181*(x182&(x183!=x184)));

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x186 = INT64_MIN;
	int16_t x187 = -1;
	static int32_t x188 = INT32_MIN;

    t46 = (x185*(x186&(x187!=x188)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -1;
	volatile int32_t x190 = -1;
	uint32_t x191 = 128U;
	volatile int32_t x192 = INT32_MIN;
	int32_t t47 = 5758382;

    t47 = (x189*(x190&(x191!=x192)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -417;
	int32_t x194 = -5956009;
	int16_t x195 = -77;
	uint16_t x196 = 30U;
	volatile int32_t t48 = 1846;

    t48 = (x193*(x194&(x195!=x196)));

    if (t48 != -417) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = 93U;
	int32_t t49 = 481539;

    t49 = (x197*(x198&(x199!=x200)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = 3;
	volatile int32_t x202 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -3032745;

    t50 = (x201*(x202&(x203!=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = -22768601;
	static int16_t x206 = INT16_MAX;
	volatile int64_t x208 = 1945311004LL;
	static int32_t t51 = -88;

    t51 = (x205*(x206&(x207!=x208)));

    if (t51 != -22768601) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 65646363U;
	int16_t x211 = -20;

    t52 = (x209*(x210&(x211!=x212)));

    if (t52 != 65646363U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 795380U;
	int8_t x215 = 15;
	int16_t x216 = 7442;

    t53 = (x213*(x214&(x215!=x216)));

    if (t53 != 795380U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = -338054680253438854LL;
	int8_t x219 = 1;
	int8_t x220 = INT8_MIN;
	static volatile int64_t t54 = 9738LL;

    t54 = (x217*(x218&(x219!=x220)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -233;
	int32_t x223 = -85;
	volatile int16_t x224 = -1;
	volatile int32_t t55 = -119987;

    t55 = (x221*(x222&(x223!=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t56 = 11904LLU;

    t56 = (x225*(x226&(x227!=x228)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x229 = INT64_MIN;
	int32_t x230 = -3276938;
	uint8_t x232 = 46U;
	int64_t t57 = 80047LL;

    t57 = (x229*(x230&(x231!=x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 8U;
	uint16_t x234 = 20U;
	static int64_t x236 = 5795924222LL;
	volatile int32_t t58 = 3595596;

    t58 = (x233*(x234&(x235!=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 1130U;
	static int32_t x238 = -1;
	int16_t x239 = 862;
	static uint64_t x240 = 24551539331827LLU;

    t59 = (x237*(x238&(x239!=x240)));

    if (t59 != 1130) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	uint64_t x242 = 155532222765476LLU;
	static uint64_t x244 = 2113004017325LLU;

    t60 = (x241*(x242&(x243!=x244)));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MAX;
	int64_t x248 = -29337360341LL;
	volatile int32_t t61 = 17927;

    t61 = (x245*(x246&(x247!=x248)));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 3737U;
	volatile uint16_t x251 = 31U;
	uint16_t x252 = UINT16_MAX;

    t62 = (x249*(x250&(x251!=x252)));

    if (t62 != 3737) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t63 = INT32_MIN;

    t63 = (x253*(x254&(x255!=x256)));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x260 = 158;

    t64 = (x257*(x258&(x259!=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	static int64_t x262 = -8832LL;
	int16_t x263 = INT16_MIN;
	int64_t t65 = 474LL;

    t65 = (x261*(x262&(x263!=x264)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 728;
	volatile uint16_t x267 = 92U;
	volatile int32_t x268 = -1;

    t66 = (x265*(x266&(x267!=x268)));

    if (t66 != 728) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = INT8_MAX;
	int16_t x272 = INT16_MAX;

    t67 = (x269*(x270&(x271!=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	uint8_t x274 = UINT8_MAX;
	volatile uint64_t x275 = 645893980LLU;
	int8_t x276 = INT8_MIN;
	int32_t t68 = -1093387;

    t68 = (x273*(x274&(x275!=x276)));

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x278 = UINT8_MAX;
	int64_t x279 = 18818267LL;

    t69 = (x277*(x278&(x279!=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	uint16_t x282 = UINT16_MAX;
	uint16_t x283 = 7869U;
	volatile int64_t t70 = INT64_MIN;

    t70 = (x281*(x282&(x283!=x284)));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = -491LL;
	int8_t x286 = -1;
	volatile int64_t x287 = -1LL;
	int16_t x288 = 2377;

    t71 = (x285*(x286&(x287!=x288)));

    if (t71 != -491LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x290 = 695LLU;
	static int16_t x291 = INT16_MIN;
	uint32_t x292 = UINT32_MAX;

    t72 = (x289*(x290&(x291!=x292)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	static int8_t x294 = 1;
	uint32_t x295 = 41215U;
	int16_t x296 = -124;

    t73 = (x293*(x294&(x295!=x296)));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	volatile int64_t x300 = 22464639437616LL;
	static uint32_t t74 = UINT32_MAX;

    t74 = (x297*(x298&(x299!=x300)));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	uint64_t x302 = 5958380645LLU;
	static uint16_t x304 = 9U;
	volatile uint64_t t75 = 30LLU;

    t75 = (x301*(x302&(x303!=x304)));

    if (t75 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x305 = 45U;
	uint16_t x306 = UINT16_MAX;
	uint32_t x307 = 97798U;
	int8_t x308 = INT8_MIN;
	int32_t t76 = 5788;

    t76 = (x305*(x306&(x307!=x308)));

    if (t76 != 45) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	int64_t x312 = -1LL;
	volatile int32_t t77 = 1;

    t77 = (x309*(x310&(x311!=x312)));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MIN;
	int32_t x315 = 78337277;
	int8_t x316 = -1;
	uint32_t t78 = 487877808U;

    t78 = (x313*(x314&(x315!=x316)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	volatile int32_t x319 = INT32_MIN;
	int32_t x320 = -1;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = (x317*(x318&(x319!=x320)));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 633U;
	static int32_t x322 = -159238;
	int16_t x323 = INT16_MIN;
	uint64_t x324 = 8029067130LLU;
	static int32_t t80 = 161;

    t80 = (x321*(x322&(x323!=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	static uint64_t x326 = UINT64_MAX;
	int8_t x327 = -24;

    t81 = (x325*(x326&(x327!=x328)));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = UINT8_MAX;
	int8_t x330 = 0;
	uint32_t x331 = 311265435U;
	int64_t x332 = INT64_MIN;
	int32_t t82 = 558891605;

    t82 = (x329*(x330&(x331!=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 1;

    t83 = (x333*(x334&(x335!=x336)));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	int64_t x339 = -1LL;
	int16_t x340 = -3717;
	static int32_t t84 = 21;

    t84 = (x337*(x338&(x339!=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x341 = UINT16_MAX;
	int64_t x342 = INT64_MAX;
	uint16_t x343 = 4U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t85 = -71499577LL;

    t85 = (x341*(x342&(x343!=x344)));

    if (t85 != 65535LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = 3U;
	volatile int64_t t86 = INT64_MIN;

    t86 = (x345*(x346&(x347!=x348)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x351 = -1058125724;
	int32_t x352 = 44531921;

    t87 = (x349*(x350&(x351!=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	static volatile int64_t x354 = INT64_MAX;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t88 = -3LL;

    t88 = (x353*(x354&(x355!=x356)));

    if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 1U;
	int16_t x359 = -1;
	int16_t x360 = INT16_MIN;
	static int32_t t89 = 12;

    t89 = (x357*(x358&(x359!=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	int32_t x363 = -9;
	volatile int32_t t90 = -143;

    t90 = (x361*(x362&(x363!=x364)));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	int64_t x366 = INT64_MAX;
	volatile int32_t x367 = INT32_MIN;
	int16_t x368 = 1;
	int64_t t91 = 6328LL;

    t91 = (x365*(x366&(x367!=x368)));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = -263;
	int8_t x370 = INT8_MIN;
	volatile int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t92 = -123207547;

    t92 = (x369*(x370&(x371!=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = 0U;
	int32_t x376 = -1;
	volatile int32_t t93 = 32;

    t93 = (x373*(x374&(x375!=x376)));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	volatile uint64_t x379 = 20302755LLU;
	int8_t x380 = -2;
	int32_t t94 = 0;

    t94 = (x377*(x378&(x379!=x380)));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -25;
	volatile uint16_t x382 = 72U;
	uint8_t x383 = 30U;
	uint16_t x384 = 7U;

    t95 = (x381*(x382&(x383!=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	static int8_t x386 = 0;
	int32_t t96 = -29123;

    t96 = (x385*(x386&(x387!=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x389 = UINT32_MAX;
	uint64_t x390 = 417107LLU;
	static int8_t x391 = -9;
	uint64_t x392 = 4604830249894LLU;

    t97 = (x389*(x390&(x391!=x392)));

    if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = 35U;
	static int32_t x394 = 25023;
	volatile int8_t x395 = -1;
	int64_t x396 = -1LL;
	int32_t t98 = -28716698;

    t98 = (x393*(x394&(x395!=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x398 = 4U;
	int8_t x399 = INT8_MAX;
	int32_t t99 = -1960;

    t99 = (x397*(x398&(x399!=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = -239800492;
	int16_t x402 = INT16_MIN;
	int8_t x403 = -18;
	static int32_t t100 = -15020887;

    t100 = (x401*(x402&(x403!=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static int64_t x406 = INT64_MAX;
	int16_t x407 = -1;
	uint64_t x408 = 1802LLU;
	volatile int64_t t101 = 2006787114LL;

    t101 = (x405*(x406&(x407!=x408)));

    if (t101 != -32768LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x410 = -638518424LL;
	int64_t x411 = INT64_MAX;
	int32_t x412 = INT32_MIN;
	volatile int64_t t102 = -199197474202747077LL;

    t102 = (x409*(x410&(x411!=x412)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1968566919LL;
	int64_t x414 = INT64_MIN;
	uint32_t x416 = UINT32_MAX;
	static int64_t t103 = 218942837977LL;

    t103 = (x413*(x414&(x415!=x416)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x417 = 12584U;
	int16_t x418 = 31;
	int64_t x419 = -206162749LL;
	uint16_t x420 = 48U;

    t104 = (x417*(x418&(x419!=x420)));

    if (t104 != 12584U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -3820LL;
	uint8_t x422 = 3U;
	uint32_t x423 = 1778811U;

    t105 = (x421*(x422&(x423!=x424)));

    if (t105 != -3820LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = 454583;
	static uint8_t x428 = UINT8_MAX;
	volatile uint32_t t106 = 380402420U;

    t106 = (x425*(x426&(x427!=x428)));

    if (t106 != 454583U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = -1;
	uint16_t x430 = 1183U;
	volatile int64_t x431 = INT64_MIN;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t107 = -2682350;

    t107 = (x429*(x430&(x431!=x432)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 219LLU;
	int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MAX;
	uint64_t t108 = 54162097452270LLU;

    t108 = (x433*(x434&(x435!=x436)));

    if (t108 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	uint32_t x438 = 504U;
	int16_t x439 = -1;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t109 = 1826573397U;

    t109 = (x437*(x438&(x439!=x440)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	uint64_t x442 = 28934286575LLU;
	int16_t x443 = INT16_MIN;
	uint16_t x444 = UINT16_MAX;
	uint64_t t110 = 350270966908437559LLU;

    t110 = (x441*(x442&(x443!=x444)));

    if (t110 != 127LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 52957169LL;
	int16_t x446 = INT16_MIN;
	int16_t x447 = 1;
	volatile int32_t x448 = 254759;

    t111 = (x445*(x446&(x447!=x448)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -33403869LL;
	int64_t x451 = INT64_MAX;
	uint8_t x452 = 17U;
	volatile int64_t t112 = -1LL;

    t112 = (x449*(x450&(x451!=x452)));

    if (t112 != -33403869LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = 33;
	static int16_t x454 = INT16_MIN;
	volatile uint64_t x455 = 521328349LLU;
	int16_t x456 = 1;
	int32_t t113 = 324067;

    t113 = (x453*(x454&(x455!=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MIN;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = 1;
	int8_t x460 = INT8_MIN;
	static volatile int64_t t114 = INT64_MIN;

    t114 = (x457*(x458&(x459!=x460)));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MAX;
	static int8_t x463 = -1;
	volatile int32_t t115 = INT32_MIN;

    t115 = (x461*(x462&(x463!=x464)));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	int8_t x467 = INT8_MAX;
	static int16_t x468 = INT16_MIN;
	volatile uint32_t t116 = UINT32_MAX;

    t116 = (x465*(x466&(x467!=x468)));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x469 = UINT32_MAX;
	static uint16_t x470 = UINT16_MAX;
	volatile uint64_t x471 = UINT64_MAX;
	volatile uint32_t t117 = UINT32_MAX;

    t117 = (x469*(x470&(x471!=x472)));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 7U;
	static int64_t x474 = INT64_MIN;
	uint16_t x475 = 39U;
	volatile uint16_t x476 = 12470U;
	volatile int64_t t118 = 51LL;

    t118 = (x473*(x474&(x475!=x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = 1;
	static int16_t x478 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	volatile int32_t t119 = -117463;

    t119 = (x477*(x478&(x479!=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = -21;
	int64_t x483 = INT64_MAX;
	int32_t x484 = 13010;
	uint32_t t120 = 1433156U;

    t120 = (x481*(x482&(x483!=x484)));

    if (t120 != 39003U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	uint32_t x486 = 972974503U;
	static uint64_t x487 = 237350211LLU;
	int64_t x488 = INT64_MIN;

    t121 = (x485*(x486&(x487!=x488)));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x491 = INT32_MIN;
	int16_t x492 = -1;

    t122 = (x489*(x490&(x491!=x492)));

    if (t122 != 14010U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = UINT64_MAX;
	static uint8_t x495 = 1U;
	static volatile uint64_t t123 = 89932901104LLU;

    t123 = (x493*(x494&(x495!=x496)));

    if (t123 != 52LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x498 = 1902580673215LLU;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t124 = UINT64_MAX;

    t124 = (x497*(x498&(x499!=x500)));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x502 = -1;
	uint32_t x503 = UINT32_MAX;
	uint32_t x504 = UINT32_MAX;
	uint64_t t125 = 58089397LLU;

    t125 = (x501*(x502&(x503!=x504)));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -1;
	static int32_t x506 = -1;
	int16_t x508 = -1;
	volatile int32_t t126 = -4572;

    t126 = (x505*(x506&(x507!=x508)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = 428166779U;
	volatile int8_t x512 = 1;
	static uint32_t t127 = 24948997U;

    t127 = (x509*(x510&(x511!=x512)));

    if (t127 != 4294934528U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = 135;
	int8_t x514 = -1;
	volatile int16_t x515 = INT16_MIN;
	uint32_t x516 = UINT32_MAX;
	volatile int32_t t128 = 5887372;

    t128 = (x513*(x514&(x515!=x516)));

    if (t128 != 135) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	int16_t x518 = 1;
	volatile int64_t x519 = INT64_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t129 = -273;

    t129 = (x517*(x518&(x519!=x520)));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	static volatile uint32_t x522 = UINT32_MAX;
	int64_t x523 = 8437082563392LL;
	static int8_t x524 = INT8_MIN;
	volatile uint64_t t130 = UINT64_MAX;

    t130 = (x521*(x522&(x523!=x524)));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MIN;
	int32_t x527 = INT32_MIN;
	int8_t x528 = 1;
	volatile int64_t t131 = 2141190LL;

    t131 = (x525*(x526&(x527!=x528)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -2147;
	int32_t x531 = -1;
	static int32_t t132 = -14;

    t132 = (x529*(x530&(x531!=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	uint64_t x535 = 3676615LLU;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -9961824;

    t133 = (x533*(x534&(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 248LLU;
	static int8_t x540 = INT8_MAX;

    t134 = (x537*(x538&(x539!=x540)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x543 = INT16_MAX;
	int64_t x544 = -1LL;
	volatile int32_t t135 = -42185477;

    t135 = (x541*(x542&(x543!=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int32_t x546 = -33057;
	static int8_t x547 = 35;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (x545*(x546&(x547!=x548)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	uint8_t x550 = 10U;
	int16_t x551 = INT16_MAX;
	int32_t x552 = INT32_MIN;
	volatile int32_t t137 = -1637;

    t137 = (x549*(x550&(x551!=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MAX;
	uint64_t x554 = UINT64_MAX;
	static int8_t x555 = 10;
	int32_t x556 = INT32_MAX;
	volatile uint64_t t138 = 419561959LLU;

    t138 = (x553*(x554&(x555!=x556)));

    if (t138 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	static uint32_t x559 = 147U;
	static volatile uint64_t x560 = UINT64_MAX;
	static volatile int64_t t139 = 140487572LL;

    t139 = (x557*(x558&(x559!=x560)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x562 = 102U;
	uint64_t x563 = 503LLU;
	volatile int64_t x564 = INT64_MAX;
	uint32_t t140 = 0U;

    t140 = (x561*(x562&(x563!=x564)));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	int64_t x566 = INT64_MAX;
	uint16_t x567 = 592U;
	volatile uint16_t x568 = 2026U;
	volatile int64_t t141 = -481483352442858494LL;

    t141 = (x565*(x566&(x567!=x568)));

    if (t141 != -2147483648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x570 = UINT8_MAX;
	int64_t x571 = 8715366278734409LL;
	static int8_t x572 = INT8_MAX;
	int32_t t142 = 10035;

    t142 = (x569*(x570&(x571!=x572)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	int16_t x574 = INT16_MIN;
	int16_t x575 = INT16_MAX;
	int16_t x576 = INT16_MIN;
	int32_t t143 = 236053;

    t143 = (x573*(x574&(x575!=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = INT16_MAX;
	static volatile int16_t x579 = INT16_MAX;
	static int64_t t144 = INT64_MIN;

    t144 = (x577*(x578&(x579!=x580)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = UINT32_MAX;
	int8_t x583 = INT8_MAX;
	int64_t x584 = 8132725LL;
	uint32_t t145 = 11822U;

    t145 = (x581*(x582&(x583!=x584)));

    if (t145 != 98U) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x585 = UINT32_MAX;
	volatile uint64_t x586 = UINT64_MAX;
	uint8_t x587 = 55U;
	uint64_t t146 = 187846LLU;

    t146 = (x585*(x586&(x587!=x588)));

    if (t146 != 4294967295LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = 0;
	int32_t x591 = -28225066;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t147 = -69805952;

    t147 = (x589*(x590&(x591!=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 432578675802908LL;
	uint8_t x594 = 0U;
	uint32_t x595 = 1755386U;
	volatile int64_t t148 = -678441864527748LL;

    t148 = (x593*(x594&(x595!=x596)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 106504306467869LLU;
	int64_t x598 = INT64_MAX;
	int8_t x599 = INT8_MIN;
	int32_t x600 = INT32_MAX;
	volatile uint64_t t149 = 470LLU;

    t149 = (x597*(x598&(x599!=x600)));

    if (t149 != 106504306467869LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 38U;
	volatile uint8_t x602 = UINT8_MAX;
	int64_t x603 = -5035LL;
	int64_t x604 = -1LL;
	static uint32_t t150 = 31992U;

    t150 = (x601*(x602&(x603!=x604)));

    if (t150 != 38U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x606 = 725505767;
	static int32_t x607 = INT32_MIN;
	uint32_t x608 = UINT32_MAX;
	static volatile int32_t t151 = -2613;

    t151 = (x605*(x606&(x607!=x608)));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 24328U;
	int8_t x610 = INT8_MIN;
	volatile int8_t x611 = -15;
	int32_t x612 = 338065;
	static volatile uint32_t t152 = 1U;

    t152 = (x609*(x610&(x611!=x612)));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = -1;
	int16_t x615 = INT16_MIN;

    t153 = (x613*(x614&(x615!=x616)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = 0;
	int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MIN;
	int8_t x620 = INT8_MAX;
	int32_t t154 = 126292;

    t154 = (x617*(x618&(x619!=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MIN;
	static int64_t x624 = INT64_MIN;
	volatile int32_t t155 = 1;

    t155 = (x621*(x622&(x623!=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x626 = INT32_MAX;
	uint32_t x627 = 553267087U;

    t156 = (x625*(x626&(x627!=x628)));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 84U;
	uint64_t x630 = 18LLU;
	int8_t x631 = INT8_MIN;
	int32_t x632 = INT32_MAX;
	volatile uint64_t t157 = 164861464LLU;

    t157 = (x629*(x630&(x631!=x632)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -5;
	int8_t x634 = INT8_MIN;
	volatile int64_t x635 = 241178512913LL;
	uint8_t x636 = 5U;
	int32_t t158 = 318038;

    t158 = (x633*(x634&(x635!=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 11U;
	static int64_t x640 = 13708416053247LL;
	volatile int32_t t159 = -5470;

    t159 = (x637*(x638&(x639!=x640)));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x643 = -1LL;
	uint64_t x644 = 15575153035697LLU;
	volatile int32_t t160 = 9021660;

    t160 = (x641*(x642&(x643!=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -1;
	int32_t x648 = -7934;
	volatile int32_t t161 = -1349;

    t161 = (x645*(x646&(x647!=x648)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x650 = INT64_MAX;
	int8_t x651 = INT8_MIN;
	static volatile int32_t x652 = INT32_MIN;
	static volatile int64_t t162 = -14LL;

    t162 = (x649*(x650&(x651!=x652)));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MIN;
	int16_t x655 = -1;
	int64_t x656 = -1LL;
	static volatile uint64_t t163 = 361401LLU;

    t163 = (x653*(x654&(x655!=x656)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int32_t t164 = -4182;

    t164 = (x657*(x658&(x659!=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x661 = 0U;
	uint16_t x662 = UINT16_MAX;
	uint32_t x663 = 5U;
	static volatile int64_t x664 = INT64_MIN;

    t165 = (x661*(x662&(x663!=x664)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = -717692663181142LL;
	volatile int32_t x667 = INT32_MIN;
	static uint64_t x668 = 259042974445068956LLU;

    t166 = (x665*(x666&(x667!=x668)));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	volatile int32_t x670 = INT32_MAX;
	static volatile int64_t x671 = INT64_MAX;
	int8_t x672 = -1;

    t167 = (x669*(x670&(x671!=x672)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	uint16_t x674 = UINT16_MAX;
	int64_t x675 = -1LL;
	uint16_t x676 = UINT16_MAX;
	static volatile int64_t t168 = INT64_MIN;

    t168 = (x673*(x674&(x675!=x676)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MAX;
	int32_t x678 = -1;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = -392LL;
	static volatile int32_t t169 = INT32_MAX;

    t169 = (x677*(x678&(x679!=x680)));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -393044LL;
	uint32_t x682 = 0U;
	int16_t x683 = 409;
	static volatile int16_t x684 = INT16_MAX;
	static volatile int64_t t170 = -4149901816586673158LL;

    t170 = (x681*(x682&(x683!=x684)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 3U;
	int32_t x686 = INT32_MIN;
	volatile int16_t x687 = -1;
	volatile uint16_t x688 = 2U;
	volatile uint32_t t171 = 33U;

    t171 = (x685*(x686&(x687!=x688)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x689 = INT8_MIN;
	int16_t x691 = -1;
	int32_t x692 = INT32_MIN;
	int64_t t172 = -95476398818781257LL;

    t172 = (x689*(x690&(x691!=x692)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x694 = 47U;
	int32_t x695 = INT32_MIN;
	volatile int64_t x696 = INT64_MAX;
	volatile uint32_t t173 = 106087U;

    t173 = (x693*(x694&(x695!=x696)));

    if (t173 != 19U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MAX;
	static int32_t x699 = -61002;
	int64_t x700 = INT64_MAX;
	uint32_t t174 = 13339U;

    t174 = (x697*(x698&(x699!=x700)));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = -1;
	int16_t x704 = INT16_MAX;
	int32_t t175 = 96182190;

    t175 = (x701*(x702&(x703!=x704)));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = -122565363;
	int16_t x707 = 19;
	int8_t x708 = 47;
	int32_t t176 = 0;

    t176 = (x705*(x706&(x707!=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	volatile int32_t x711 = 386681;
	volatile int64_t x712 = -19610780159LL;
	int64_t t177 = -1949146708LL;

    t177 = (x709*(x710&(x711!=x712)));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 7U;
	int8_t x714 = 0;
	static int32_t x715 = -154538908;
	volatile int32_t t178 = -633478;

    t178 = (x713*(x714&(x715!=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x718 = -14;
	static int8_t x719 = -1;
	volatile int32_t x720 = -1;

    t179 = (x717*(x718&(x719!=x720)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MAX;
	static int32_t x722 = INT32_MAX;
	uint8_t x723 = UINT8_MAX;
	static uint64_t x724 = UINT64_MAX;
	int32_t t180 = INT32_MAX;

    t180 = (x721*(x722&(x723!=x724)));

    if (t180 != INT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = INT8_MAX;
	int64_t x727 = INT64_MIN;
	volatile int64_t t181 = INT64_MIN;

    t181 = (x725*(x726&(x727!=x728)));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x732 = 1733290333727LL;
	volatile int64_t t182 = -1LL;

    t182 = (x729*(x730&(x731!=x732)));

    if (t182 != 4294967295LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x736 = INT8_MIN;
	volatile int64_t t183 = -2159164690076LL;

    t183 = (x733*(x734&(x735!=x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 56054133087LLU;
	int32_t x739 = INT32_MAX;
	int16_t x740 = -30;
	uint64_t t184 = 15546174620061LLU;

    t184 = (x737*(x738&(x739!=x740)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -406;
	int32_t x742 = -206;
	int16_t x743 = -1;
	static volatile int8_t x744 = INT8_MAX;
	volatile int32_t t185 = -3645377;

    t185 = (x741*(x742&(x743!=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x746 = 3U;
	uint64_t x747 = 11264659431467LLU;
	volatile int32_t t186 = 409;

    t186 = (x745*(x746&(x747!=x748)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = -1;
	static int32_t x751 = 1;
	static int32_t x752 = 63033622;

    t187 = (x749*(x750&(x751!=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MAX;
	uint64_t x754 = 58484271565864LLU;
	int8_t x755 = INT8_MAX;
	volatile int16_t x756 = INT16_MIN;
	volatile uint64_t t188 = 21589149109741LLU;

    t188 = (x753*(x754&(x755!=x756)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = 54467110051046485LL;
	int16_t x760 = 1494;
	volatile uint64_t t189 = 230LLU;

    t189 = (x757*(x758&(x759!=x760)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x761 = 53622295U;
	int16_t x762 = INT16_MIN;
	uint64_t x763 = 82LLU;
	int8_t x764 = -1;
	volatile uint32_t t190 = 547826U;

    t190 = (x761*(x762&(x763!=x764)));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x766 = 6014U;
	int16_t x767 = INT16_MIN;
	uint8_t x768 = UINT8_MAX;

    t191 = (x765*(x766&(x767!=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = -29;
	uint16_t x770 = 496U;
	int32_t x771 = INT32_MIN;
	uint16_t x772 = UINT16_MAX;
	volatile int32_t t192 = -286546;

    t192 = (x769*(x770&(x771!=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	int16_t x774 = -3352;
	int16_t x775 = INT16_MAX;

    t193 = (x773*(x774&(x775!=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = INT32_MIN;
	int64_t x778 = INT64_MIN;
	int64_t x779 = -238LL;
	uint8_t x780 = 11U;
	int64_t t194 = 25686975957LL;

    t194 = (x777*(x778&(x779!=x780)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x781 = 13336U;
	static int8_t x782 = INT8_MIN;
	int16_t x783 = INT16_MIN;
	int16_t x784 = INT16_MAX;

    t195 = (x781*(x782&(x783!=x784)));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	volatile int64_t x786 = -1LL;
	uint16_t x787 = 4853U;
	uint16_t x788 = UINT16_MAX;
	volatile int64_t t196 = -107612980506214474LL;

    t196 = (x785*(x786&(x787!=x788)));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = INT8_MIN;
	int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MAX;
	int8_t x792 = INT8_MIN;
	static volatile int32_t t197 = 9288154;

    t197 = (x789*(x790&(x791!=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x794 = 0;
	static volatile uint32_t x795 = UINT32_MAX;
	uint32_t x796 = 219U;
	static volatile int32_t t198 = 7982199;

    t198 = (x793*(x794&(x795!=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x798 = -965693;
	int64_t x800 = -1LL;

    t199 = (x797*(x798&(x799!=x800)));

    if (t199 != -128) { NG(); } else { ; }
	
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

