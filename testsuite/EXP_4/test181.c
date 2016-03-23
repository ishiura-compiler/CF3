
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

int8_t x5 = -18;
volatile int32_t t1 = 17732150;
int16_t x9 = INT16_MAX;
static uint32_t t2 = UINT32_MAX;
static uint64_t x14 = UINT64_MAX;
uint32_t x18 = 15983U;
int32_t x19 = INT32_MIN;
int8_t x23 = 24;
uint32_t x32 = 1313417620U;
volatile uint64_t x33 = UINT64_MAX;
volatile int16_t x34 = -909;
uint8_t x35 = UINT8_MAX;
int8_t x39 = -1;
uint16_t x40 = 1202U;
int8_t x48 = 12;
int32_t x50 = -1;
int32_t t11 = 48098941;
uint32_t x58 = 424U;
static volatile int8_t x60 = INT8_MIN;
static int32_t x73 = INT32_MAX;
uint64_t x86 = UINT64_MAX;
int64_t x90 = 1764069LL;
volatile int64_t t19 = -9454301704LL;
uint64_t x101 = 1821922619268872550LLU;
uint64_t x103 = 1445002LLU;
int64_t x105 = INT64_MIN;
int64_t x107 = INT64_MIN;
static int16_t x108 = INT16_MAX;
static int32_t x114 = 1;
uint64_t t26 = 702977423LLU;
volatile uint16_t x122 = 1U;
volatile uint32_t x132 = UINT32_MAX;
volatile uint32_t t29 = UINT32_MAX;
static int64_t t30 = 666651LL;
volatile int16_t x141 = 1;
int16_t x147 = -5614;
static volatile int32_t x154 = INT32_MIN;
uint32_t x162 = UINT32_MAX;
int8_t x167 = -21;
int8_t x171 = -1;
int16_t x172 = INT16_MIN;
uint16_t x178 = 3567U;
int8_t x182 = -1;
uint8_t x184 = 14U;
int8_t x186 = 2;
static volatile int32_t x199 = -1;
int64_t x200 = -784259581LL;
uint32_t x201 = 23113392U;
uint32_t t46 = UINT32_MAX;
volatile int32_t t47 = 30232356;
int64_t x216 = INT64_MIN;
int8_t x220 = INT8_MIN;
int64_t x223 = -1LL;
volatile uint64_t t52 = UINT64_MAX;
int64_t x234 = INT64_MIN;
static volatile int64_t x235 = INT64_MIN;
volatile int64_t x236 = INT64_MAX;
volatile int32_t t54 = -30;
volatile int64_t t55 = INT64_MAX;
volatile int64_t t56 = -210LL;
uint64_t t61 = UINT64_MAX;
uint64_t x270 = UINT64_MAX;
int64_t t64 = 0LL;
int16_t x290 = -29;
int8_t x295 = INT8_MIN;
uint64_t x311 = UINT64_MAX;
volatile int64_t x329 = 182048LL;
int64_t t73 = -73812LL;
uint64_t t75 = UINT64_MAX;
volatile int32_t x369 = INT32_MIN;
static int32_t x371 = -1;
uint64_t t81 = UINT64_MAX;
int32_t x376 = -135283959;
uint16_t x378 = 1849U;
int32_t x385 = -1;
uint32_t t87 = UINT32_MAX;
int8_t x398 = -1;
uint64_t x399 = 55687386710069LLU;
uint32_t x407 = 38065445U;
volatile uint8_t x413 = 2U;
static volatile uint32_t x414 = 25624852U;
int16_t x415 = INT16_MAX;
static volatile uint64_t t92 = 7987802141162LLU;
int64_t x420 = INT64_MIN;
volatile int8_t x439 = INT8_MIN;
int32_t x446 = INT32_MAX;
static uint8_t x450 = UINT8_MAX;
int8_t x452 = INT8_MIN;
static uint8_t x458 = UINT8_MAX;
volatile int64_t x459 = -1LL;
int64_t t103 = 1LL;
uint16_t x471 = 1U;
volatile uint16_t x477 = 20U;
volatile int8_t x487 = INT8_MAX;
int64_t x496 = 23047209LL;
int64_t t110 = -938LL;
volatile uint32_t t112 = UINT32_MAX;
int64_t x506 = -1136812574832LL;
int64_t t113 = 392485392311015543LL;
uint16_t x515 = UINT16_MAX;
int32_t x517 = -466;
int64_t x520 = INT64_MAX;
uint8_t x523 = 3U;
uint16_t x524 = UINT16_MAX;
int32_t x534 = -1;
volatile int64_t t121 = 8415831LL;
static uint8_t x544 = UINT8_MAX;
int16_t x548 = INT16_MAX;
uint32_t t123 = UINT32_MAX;
uint64_t t124 = UINT64_MAX;
int32_t x553 = INT32_MIN;
volatile int32_t x568 = INT32_MAX;
uint32_t t127 = UINT32_MAX;
int16_t x573 = INT16_MIN;
static volatile int64_t x576 = 34749208168626551LL;
static volatile int8_t x577 = -1;
int16_t x581 = 81;
int16_t x584 = INT16_MIN;
static volatile int64_t t131 = 110LL;
uint16_t x589 = UINT16_MAX;
int32_t x602 = -2;
uint16_t x608 = 2365U;
uint64_t t136 = 4586690510LLU;
uint8_t x613 = UINT8_MAX;
volatile int16_t x615 = -1;
volatile int16_t x616 = INT16_MAX;
static int32_t t137 = 220;
static int32_t x622 = -1;
volatile uint32_t t139 = UINT32_MAX;
static int32_t x632 = 1;
int32_t t140 = -3468019;
uint64_t x636 = 1165LLU;
uint64_t t141 = UINT64_MAX;
int32_t x638 = INT32_MAX;
volatile int8_t x644 = INT8_MIN;
int8_t x649 = INT8_MAX;
static uint32_t t145 = 12197085U;
int8_t x653 = INT8_MAX;
static uint8_t x655 = 0U;
uint16_t x664 = 4U;
static uint32_t t148 = UINT32_MAX;
volatile int16_t x665 = -9330;
int64_t x666 = -1LL;
int64_t x669 = 2582208883146570LL;
int8_t x674 = INT8_MIN;
int16_t x675 = 20;
uint64_t x680 = 53951LLU;
volatile uint64_t t152 = 1714LLU;
volatile int32_t x682 = -1;
int64_t x683 = -2194057132235922LL;
int32_t x692 = INT32_MAX;
static volatile int32_t t156 = 11;
uint16_t x698 = 72U;
volatile int64_t t157 = -582LL;
uint64_t x716 = 106094143126392409LLU;
volatile int64_t t161 = -118880025684LL;
uint64_t t162 = 59312714418764531LLU;
int8_t x731 = INT8_MIN;
uint64_t t164 = UINT64_MAX;
int16_t x745 = -7;
int64_t x752 = INT64_MIN;
static int16_t x757 = 0;
uint8_t x767 = 44U;
uint8_t x769 = 66U;
int8_t x783 = -54;
volatile int64_t x784 = 16422577984970LL;
static int8_t x785 = INT8_MAX;
volatile uint8_t x787 = UINT8_MAX;
volatile int8_t x788 = -1;
int16_t x790 = INT16_MAX;
int32_t x801 = 40899;
int8_t x804 = 1;
int32_t x810 = INT32_MIN;
uint32_t x814 = UINT32_MAX;
int8_t x816 = INT8_MIN;
static volatile uint64_t t181 = UINT64_MAX;
int64_t t182 = 8396472426138749LL;
uint64_t x829 = UINT64_MAX;
volatile int16_t x838 = INT16_MIN;
uint16_t x840 = 6U;
uint16_t x843 = 0U;
int32_t t187 = 7612603;
static int32_t x870 = -1;
uint64_t t191 = UINT64_MAX;
int32_t x878 = INT32_MAX;
uint8_t x881 = UINT8_MAX;
volatile int32_t x887 = -1;
volatile uint64_t t194 = 4018324901201138316LLU;
int64_t x890 = -7354764LL;
uint8_t x899 = 14U;
static volatile uint8_t x904 = 38U;
int8_t x907 = INT8_MAX;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	int32_t x2 = 526322883;
	uint16_t x3 = 25U;
	int16_t x4 = INT16_MIN;
	volatile uint32_t t0 = UINT32_MAX;

    t0 = (x1|(x2|(x3+x4)));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 1021347;
	volatile int8_t x7 = 1;
	volatile int8_t x8 = INT8_MIN;

    t1 = (x5|(x6|(x7+x8)));

    if (t1 != -17) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x10 = INT16_MIN;
	static int16_t x11 = -1;
	uint32_t x12 = UINT32_MAX;

    t2 = (x9|(x10|(x11+x12)));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -2262329;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	uint64_t t3 = UINT64_MAX;

    t3 = (x13|(x14|(x15+x16)));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	static int64_t x20 = -1LL;
	volatile int64_t t4 = -868312LL;

    t4 = (x17|(x18|(x19+x20)));

    if (t4 != -2147483649LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = 44;
	volatile uint64_t x22 = 68887967LLU;
	int32_t x24 = -455625;
	volatile uint64_t t5 = 1LLU;

    t5 = (x21|(x22|(x23+x24)));

    if (t5 != 18446744073709235711LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 7652973U;
	static volatile int64_t x30 = -1LL;
	int8_t x31 = INT8_MIN;
	volatile int64_t t6 = 350716866555LL;

    t6 = (x29|(x30|(x31+x32)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x36 = INT16_MIN;
	uint64_t t7 = UINT64_MAX;

    t7 = (x33|(x34|(x35+x36)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = -1LL;
	int32_t x38 = INT32_MIN;
	int64_t t8 = 36033LL;

    t8 = (x37|(x38|(x39+x40)));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	int8_t x43 = -14;
	static int64_t x44 = INT64_MAX;
	int64_t t9 = 819320581LL;

    t9 = (x41|(x42|(x43+x44)));

    if (t9 != -15LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	uint16_t x46 = 289U;
	static int16_t x47 = 1053;
	int64_t t10 = -108906966293756328LL;

    t10 = (x45|(x46|(x47+x48)));

    if (t10 != -9223372036854774487LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 59U;
	int8_t x51 = -1;
	uint16_t x52 = 116U;

    t11 = (x49|(x50|(x51+x52)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MAX;
	int16_t x54 = -36;
	int16_t x55 = 1;
	uint8_t x56 = UINT8_MAX;
	int32_t t12 = 5553;

    t12 = (x53|(x54|(x55+x56)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MAX;
	uint64_t x59 = 82LLU;
	static volatile uint64_t t13 = UINT64_MAX;

    t13 = (x57|(x58|(x59+x60)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x65 = -34;
	uint64_t x66 = 346785642765520LLU;
	int16_t x67 = -7;
	uint32_t x68 = 2563U;
	volatile uint64_t t14 = 3LLU;

    t14 = (x65|(x66|(x67+x68)));

    if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x74 = INT64_MAX;
	static volatile int8_t x75 = -2;
	int8_t x76 = -46;
	static int64_t t15 = 1135295130836357188LL;

    t15 = (x73|(x74|(x75+x76)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = 2U;
	static int8_t x78 = -1;
	uint64_t x79 = 4159734053175958LLU;
	static volatile int8_t x80 = 4;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x77|(x78|(x79+x80)));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x81 = INT8_MAX;
	uint16_t x82 = 3U;
	static uint8_t x83 = 1U;
	uint32_t x84 = 26U;
	static uint32_t t17 = 3274U;

    t17 = (x81|(x82|(x83+x84)));

    if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = INT32_MIN;
	volatile int8_t x87 = -1;
	int32_t x88 = -1106130;
	uint64_t t18 = UINT64_MAX;

    t18 = (x85|(x86|(x87+x88)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int16_t x92 = -6349;

    t19 = (x89|(x90|(x91+x92)));

    if (t19 != -4105LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MAX;
	int8_t x94 = -63;
	static int8_t x95 = 2;
	static int32_t x96 = -1;
	int32_t t20 = -823550;

    t20 = (x93|(x94|(x95+x96)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	int32_t x99 = INT32_MIN;
	uint64_t x100 = 1695004037699LLU;
	uint64_t t21 = 75383505793014LLU;

    t21 = (x97|(x98|(x99+x100)));

    if (t21 != 9223373733366857727LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x102 = 475767921385019LLU;
	int32_t x104 = -1;
	static volatile uint64_t t22 = 7956725LLU;

    t22 = (x101|(x102|(x103+x104)));

    if (t22 != 1822256893758226431LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x106 = INT8_MAX;
	static volatile int64_t t23 = 2340663262719857LL;

    t23 = (x105|(x106|(x107+x108)));

    if (t23 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = -20842718;
	int64_t x110 = INT64_MIN;
	uint16_t x111 = UINT16_MAX;
	volatile int64_t x112 = -1LL;
	int64_t t24 = -132LL;

    t24 = (x109|(x110|(x111+x112)));

    if (t24 != -20840450LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	volatile int16_t x115 = 14;
	int8_t x116 = INT8_MIN;
	volatile int32_t t25 = -28;

    t25 = (x113|(x114|(x115+x116)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	int64_t x118 = -914203032LL;
	static uint64_t x119 = 0LLU;
	uint64_t x120 = 70554767553546LLU;

    t26 = (x117|(x118|(x119+x120)));

    if (t26 != 18446744073709551210LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	uint64_t x123 = 237356876445188253LLU;
	int8_t x124 = INT8_MIN;
	uint64_t t27 = UINT64_MAX;

    t27 = (x121|(x122|(x123+x124)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = UINT64_MAX;
	int32_t x126 = INT32_MAX;
	static int32_t x127 = 4951;
	uint16_t x128 = 18004U;
	uint64_t t28 = UINT64_MAX;

    t28 = (x125|(x126|(x127+x128)));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x129 = -484601;
	static uint32_t x130 = 0U;
	uint32_t x131 = UINT32_MAX;

    t29 = (x129|(x130|(x131+x132)));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = INT32_MIN;
	int16_t x138 = -1;
	static int64_t x139 = INT64_MAX;
	static int8_t x140 = INT8_MIN;

    t30 = (x137|(x138|(x139+x140)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x142 = 1789153432LLU;
	static int64_t x143 = -1LL;
	int8_t x144 = INT8_MIN;
	volatile uint64_t t31 = UINT64_MAX;

    t31 = (x141|(x142|(x143+x144)));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int64_t x148 = INT64_MAX;
	static volatile int64_t t32 = 3902983878LL;

    t32 = (x145|(x146|(x147+x148)));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x149 = -3698347654LL;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = -1LL;
	static volatile uint8_t x152 = UINT8_MAX;
	volatile int64_t t33 = -2989336856LL;

    t33 = (x149|(x150|(x151+x152)));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x153 = 14U;
	int64_t x155 = -1LL;
	volatile uint16_t x156 = UINT16_MAX;
	int64_t t34 = -461407102819LL;

    t34 = (x153|(x154|(x155+x156)));

    if (t34 != -2147418114LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x157 = -1;
	int64_t x158 = 153052LL;
	int32_t x159 = INT32_MIN;
	int8_t x160 = 33;
	volatile int64_t t35 = 13369738640696214LL;

    t35 = (x157|(x158|(x159+x160)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x161 = 15U;
	int64_t x163 = INT64_MIN;
	volatile uint32_t x164 = 205U;
	int64_t t36 = -58LL;

    t36 = (x161|(x162|(x163+x164)));

    if (t36 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x165 = 18239221U;
	uint16_t x166 = 0U;
	int64_t x168 = INT64_MAX;
	volatile int64_t t37 = INT64_MAX;

    t37 = (x165|(x166|(x167+x168)));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int64_t t38 = 114960674LL;

    t38 = (x169|(x170|(x171+x172)));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x173 = 5U;
	uint64_t x174 = 0LLU;
	static int32_t x175 = INT32_MIN;
	static uint16_t x176 = 2299U;
	volatile uint64_t t39 = 6307452838LLU;

    t39 = (x173|(x174|(x175+x176)));

    if (t39 != 18446744071562070271LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = -1;
	int64_t x179 = 1LL;
	int32_t x180 = -2;
	volatile int64_t t40 = -62LL;

    t40 = (x177|(x178|(x179+x180)));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x181 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	uint64_t t41 = UINT64_MAX;

    t41 = (x181|(x182|(x183+x184)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x185 = 82371344;
	uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 1U;
	uint32_t t42 = 182U;

    t42 = (x185|(x186|(x187+x188)));

    if (t42 != 82371346U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x189 = -1LL;
	uint32_t x190 = 245147U;
	uint8_t x191 = 0U;
	static volatile uint64_t x192 = UINT64_MAX;
	static uint64_t t43 = UINT64_MAX;

    t43 = (x189|(x190|(x191+x192)));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x197 = -76032016;
	int32_t x198 = INT32_MIN;
	volatile int64_t t44 = 6134882LL;

    t44 = (x197|(x198|(x199+x200)));

    if (t44 != -76023822LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x202 = INT64_MIN;
	int16_t x203 = -1;
	int16_t x204 = -1;
	volatile int64_t t45 = 223796685LL;

    t45 = (x201|(x202|(x203+x204)));

    if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x205 = INT8_MIN;
	static int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	static uint32_t x208 = UINT32_MAX;

    t46 = (x205|(x206|(x207+x208)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = -1;
	int32_t x210 = INT32_MAX;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = INT8_MIN;

    t47 = (x209|(x210|(x211+x212)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	int16_t x215 = 2950;
	int64_t t48 = -969012872657371LL;

    t48 = (x213|(x214|(x215+x216)));

    if (t48 != -29818LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = -92;
	int16_t x218 = -65;
	int16_t x219 = INT16_MIN;
	volatile int32_t t49 = -3899753;

    t49 = (x217|(x218|(x219+x220)));

    if (t49 != -65) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x221 = 1U;
	uint64_t x222 = 1325261704780121265LLU;
	static int16_t x224 = INT16_MIN;
	uint64_t t50 = 6LLU;

    t50 = (x221|(x222|(x223+x224)));

    if (t50 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	int8_t x228 = 1;
	volatile uint64_t t51 = UINT64_MAX;

    t51 = (x225|(x226|(x227+x228)));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = 2U;
	volatile int8_t x232 = -52;

    t52 = (x229|(x230|(x231+x232)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = INT64_MIN;
	int64_t t53 = 15006685658LL;

    t53 = (x233|(x234|(x235+x236)));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = INT16_MAX;
	int16_t x238 = -1;
	int32_t x239 = INT32_MAX;
	int32_t x240 = -12147;

    t54 = (x237|(x238|(x239+x240)));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x241 = INT64_MAX;
	volatile int32_t x242 = -360612071;
	uint32_t x243 = 6213U;
	int8_t x244 = -1;

    t55 = (x241|(x242|(x243+x244)));

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x245 = INT64_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 2U;
	static int16_t x248 = INT16_MIN;

    t56 = (x245|(x246|(x247+x248)));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = -18;
	static int16_t x250 = INT16_MIN;
	int8_t x251 = 0;
	int64_t x252 = -4432301526333LL;
	volatile int64_t t57 = 41335485LL;

    t57 = (x249|(x250|(x251+x252)));

    if (t57 != -17LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -2826;
	volatile int32_t x254 = INT32_MAX;
	static int16_t x255 = -1;
	static int8_t x256 = INT8_MIN;
	static int32_t t58 = -432725;

    t58 = (x253|(x254|(x255+x256)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x257 = 13051U;
	int8_t x258 = INT8_MIN;
	static uint8_t x259 = 3U;
	int32_t x260 = INT32_MIN;
	int32_t t59 = -450211181;

    t59 = (x257|(x258|(x259+x260)));

    if (t59 != -5) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = -1102;
	int8_t x262 = INT8_MIN;
	int64_t x263 = -968729901LL;
	int16_t x264 = INT16_MIN;
	static volatile int64_t t60 = 242LL;

    t60 = (x261|(x262|(x263+x264)));

    if (t60 != -13LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = INT8_MIN;
	int64_t x266 = -38221426964797LL;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = INT64_MAX;

    t61 = (x265|(x266|(x267+x268)));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x269 = 8167U;
	uint8_t x271 = 0U;
	uint32_t x272 = UINT32_MAX;
	uint64_t t62 = UINT64_MAX;

    t62 = (x269|(x270|(x271+x272)));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x273 = INT32_MIN;
	int16_t x274 = 7763;
	uint16_t x275 = 88U;
	int8_t x276 = 22;
	volatile int32_t t63 = 286094;

    t63 = (x273|(x274|(x275+x276)));

    if (t63 != -2147475841) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = -3;
	int64_t x283 = -193968938169428LL;
	volatile uint16_t x284 = UINT16_MAX;

    t64 = (x281|(x282|(x283+x284)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x289 = INT64_MIN;
	uint8_t x291 = 0U;
	int16_t x292 = 6;
	int64_t t65 = -8839187LL;

    t65 = (x289|(x290|(x291+x292)));

    if (t65 != -25LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x293 = INT32_MIN;
	static volatile int64_t x294 = INT64_MAX;
	int8_t x296 = -1;
	int64_t t66 = 4986LL;

    t66 = (x293|(x294|(x295+x296)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x297 = 4824;
	static int64_t x298 = INT64_MIN;
	volatile uint64_t x299 = 43779073471113068LLU;
	int64_t x300 = INT64_MIN;
	uint64_t t67 = 229LLU;

    t67 = (x297|(x298|(x299+x300)));

    if (t67 != 9267151110325893116LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = INT32_MAX;
	volatile int32_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	uint32_t x304 = UINT32_MAX;
	static uint32_t t68 = UINT32_MAX;

    t68 = (x301|(x302|(x303+x304)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x305 = INT32_MAX;
	int64_t x306 = 0LL;
	int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MIN;
	volatile int64_t t69 = 1879951978255980LL;

    t69 = (x305|(x306|(x307+x308)));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x309 = 4U;
	int32_t x310 = INT32_MIN;
	volatile uint64_t x312 = 44264165131957LLU;
	volatile uint64_t t70 = 369224343142596LLU;

    t70 = (x309|(x310|(x311+x312)));

    if (t70 != 18446744071794247348LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x313 = 0U;
	uint32_t x314 = 30U;
	int64_t x315 = 138716041419546LL;
	static int32_t x316 = -3;
	int64_t t71 = 42786981622832593LL;

    t71 = (x313|(x314|(x315+x316)));

    if (t71 != 138716041419551LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = INT8_MIN;
	uint32_t x318 = UINT32_MAX;
	static uint16_t x319 = 5926U;
	int32_t x320 = -1;
	uint32_t t72 = UINT32_MAX;

    t72 = (x317|(x318|(x319+x320)));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x330 = INT32_MAX;
	volatile int16_t x331 = -1;
	int16_t x332 = INT16_MAX;

    t73 = (x329|(x330|(x331+x332)));

    if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x341 = -1;
	volatile uint32_t x342 = 1U;
	uint64_t x343 = 486505LLU;
	static int32_t x344 = -1;
	static uint64_t t74 = UINT64_MAX;

    t74 = (x341|(x342|(x343+x344)));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x345 = INT8_MIN;
	uint8_t x346 = 47U;
	static uint16_t x347 = UINT16_MAX;
	uint64_t x348 = 15037366348250621LLU;

    t75 = (x345|(x346|(x347+x348)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MAX;
	int16_t x351 = -6766;
	int16_t x352 = INT16_MAX;
	volatile uint32_t t76 = UINT32_MAX;

    t76 = (x349|(x350|(x351+x352)));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x353 = INT64_MIN;
	static int64_t x354 = INT64_MAX;
	static uint32_t x355 = 938U;
	int16_t x356 = -1;
	int64_t t77 = -29LL;

    t77 = (x353|(x354|(x355+x356)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = INT16_MIN;
	int64_t x358 = -3333LL;
	int64_t x359 = -1071789LL;
	uint16_t x360 = 1454U;
	volatile int64_t t78 = -2LL;

    t78 = (x357|(x358|(x359+x360)));

    if (t78 != -1029LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x361 = 1;
	uint8_t x362 = 0U;
	volatile int16_t x363 = -1;
	uint16_t x364 = 7810U;
	static volatile int32_t t79 = -76562472;

    t79 = (x361|(x362|(x363+x364)));

    if (t79 != 7809) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	uint8_t x367 = 1U;
	volatile int16_t x368 = 433;
	int32_t t80 = -13436982;

    t80 = (x365|(x366|(x367+x368)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x370 = 7950338926075811918LLU;
	static int16_t x372 = 0;

    t81 = (x369|(x370|(x371+x372)));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x373 = 1U;
	int8_t x374 = 0;
	uint8_t x375 = 53U;
	volatile uint32_t t82 = 1803045U;

    t82 = (x373|(x374|(x375+x376)));

    if (t82 != 4159683391U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x377 = -8427625LL;
	volatile uint64_t x379 = 122677933443633LLU;
	static int64_t x380 = INT64_MIN;
	uint64_t t83 = 20LLU;

    t83 = (x377|(x378|(x379+x380)));

    if (t83 != 18446744073709514687LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x381 = -513054500;
	static int16_t x382 = INT16_MIN;
	static int32_t x383 = -1;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t84 = 1;

    t84 = (x381|(x382|(x383+x384)));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x386 = 6U;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = 20U;
	volatile int32_t t85 = -836;

    t85 = (x385|(x386|(x387+x388)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x389 = UINT32_MAX;
	uint8_t x390 = 0U;
	uint32_t x391 = 18008970U;
	uint32_t x392 = UINT32_MAX;
	uint32_t t86 = UINT32_MAX;

    t86 = (x389|(x390|(x391+x392)));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x393 = UINT16_MAX;
	volatile int32_t x394 = -1;
	static int8_t x395 = INT8_MIN;
	volatile uint32_t x396 = 3U;

    t87 = (x393|(x394|(x395+x396)));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x397 = INT64_MIN;
	int16_t x400 = INT16_MAX;
	uint64_t t88 = UINT64_MAX;

    t88 = (x397|(x398|(x399+x400)));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x401 = -129;
	int64_t x402 = -1255458LL;
	uint16_t x403 = 235U;
	int16_t x404 = -985;
	int64_t t89 = 573580816711837378LL;

    t89 = (x401|(x402|(x403+x404)));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x405 = INT16_MIN;
	int64_t x406 = 581135069LL;
	int16_t x408 = -1;
	static volatile int64_t t90 = 24846289LL;

    t90 = (x405|(x406|(x407+x408)));

    if (t90 != -3LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x409 = INT16_MAX;
	static uint32_t x410 = 29U;
	uint32_t x411 = 3458U;
	static uint8_t x412 = 1U;
	uint32_t t91 = 13636351U;

    t91 = (x409|(x410|(x411+x412)));

    if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x416 = 127430433LLU;

    t92 = (x413|(x414|(x415+x416)));

    if (t92 != 127921974LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x417 = INT64_MIN;
	uint8_t x418 = UINT8_MAX;
	static int16_t x419 = INT16_MAX;
	int64_t t93 = -2472921271857888601LL;

    t93 = (x417|(x418|(x419+x420)));

    if (t93 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x421 = 0U;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = UINT32_MAX;
	int16_t x424 = INT16_MIN;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = (x421|(x422|(x423+x424)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x425 = 336028LL;
	volatile uint64_t x426 = 67420243346350LLU;
	int8_t x427 = 0;
	uint64_t x428 = 1071466256987LLU;
	static uint64_t t95 = 0LLU;

    t95 = (x425|(x426|(x427+x428)));

    if (t95 != 68141803633663LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x429 = UINT64_MAX;
	volatile uint32_t x430 = 351792007U;
	int8_t x431 = INT8_MAX;
	uint16_t x432 = UINT16_MAX;
	uint64_t t96 = UINT64_MAX;

    t96 = (x429|(x430|(x431+x432)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x433 = -1;
	uint64_t x434 = 93996192778078938LLU;
	static int16_t x435 = -1;
	static int16_t x436 = INT16_MAX;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = (x433|(x434|(x435+x436)));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x437 = UINT32_MAX;
	int64_t x438 = -490247798128227LL;
	static uint64_t x440 = 1564LLU;
	volatile uint64_t t98 = 1023308001562861LLU;

    t98 = (x437|(x438|(x439+x440)));

    if (t98 != 18446253828962516991LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x441 = -1;
	int32_t x442 = INT32_MAX;
	volatile int8_t x443 = INT8_MIN;
	int64_t x444 = -24805393772760LL;
	volatile int64_t t99 = -179947066321893LL;

    t99 = (x441|(x442|(x443+x444)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x445 = INT32_MAX;
	static int8_t x447 = INT8_MIN;
	uint32_t x448 = 22915187U;
	static uint32_t t100 = 799U;

    t100 = (x445|(x446|(x447+x448)));

    if (t100 != 2147483647U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = -1LL;
	uint8_t x451 = 1U;
	volatile int64_t t101 = 102454632089950854LL;

    t101 = (x449|(x450|(x451+x452)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x453 = 0;
	int64_t x454 = INT64_MIN;
	static volatile uint8_t x455 = 1U;
	uint16_t x456 = 458U;
	int64_t t102 = -1959736471LL;

    t102 = (x453|(x454|(x455+x456)));

    if (t102 != -9223372036854775349LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x457 = UINT16_MAX;
	static int32_t x460 = INT32_MIN;

    t103 = (x457|(x458|(x459+x460)));

    if (t103 != -2147483649LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x461 = -1631;
	int32_t x462 = 212873926;
	volatile int16_t x463 = -12297;
	static int32_t x464 = -324;
	volatile int32_t t104 = 2;

    t104 = (x461|(x462|(x463+x464)));

    if (t104 != -9) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x465 = -1LL;
	int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	static int16_t x468 = 1179;
	volatile int64_t t105 = 30429256LL;

    t105 = (x465|(x466|(x467+x468)));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x469 = 1459267U;
	int16_t x470 = INT16_MAX;
	uint64_t x472 = 15319507947LLU;
	uint64_t t106 = 13665527999LLU;

    t106 = (x469|(x470|(x471+x472)));

    if (t106 != 15319662591LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x478 = -1547651444107603712LL;
	static volatile int64_t x479 = INT64_MAX;
	int16_t x480 = -931;
	volatile int64_t t107 = -247048102178LL;

    t107 = (x477|(x478|(x479+x480)));

    if (t107 != -676LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x485 = 3855LLU;
	int16_t x486 = INT16_MIN;
	uint8_t x488 = 0U;
	uint64_t t108 = 384883663144LLU;

    t108 = (x485|(x486|(x487+x488)));

    if (t108 != 18446744073709522815LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = INT8_MAX;
	uint8_t x490 = UINT8_MAX;
	uint32_t x491 = UINT32_MAX;
	int8_t x492 = 0;
	uint32_t t109 = UINT32_MAX;

    t109 = (x489|(x490|(x491+x492)));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x493 = INT32_MIN;
	int32_t x494 = 165915763;
	int32_t x495 = -56;

    t110 = (x493|(x494|(x495+x496)));

    if (t110 != -1979731981LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x497 = 138464493827986855LLU;
	uint8_t x498 = 0U;
	volatile int16_t x499 = 121;
	int8_t x500 = INT8_MIN;
	static uint64_t t111 = UINT64_MAX;

    t111 = (x497|(x498|(x499+x500)));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x501 = UINT32_MAX;
	int8_t x502 = INT8_MIN;
	int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MAX;

    t112 = (x501|(x502|(x503+x504)));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x505 = UINT8_MAX;
	int8_t x507 = INT8_MIN;
	volatile int8_t x508 = INT8_MAX;

    t113 = (x505|(x506|(x507+x508)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x509 = UINT64_MAX;
	int8_t x510 = -1;
	static int64_t x511 = INT64_MIN;
	int16_t x512 = INT16_MAX;
	volatile uint64_t t114 = UINT64_MAX;

    t114 = (x509|(x510|(x511+x512)));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x513 = -3;
	int64_t x514 = -640456625644LL;
	volatile uint8_t x516 = 3U;
	int64_t t115 = -1LL;

    t115 = (x513|(x514|(x515+x516)));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x518 = -2195;
	int8_t x519 = -1;
	volatile int64_t t116 = -28344837932442349LL;

    t116 = (x517|(x518|(x519+x520)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x521 = -1;
	static volatile int8_t x522 = 5;
	static volatile int32_t t117 = -225585;

    t117 = (x521|(x522|(x523+x524)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x525 = 1U;
	int16_t x526 = -10;
	int32_t x527 = -56;
	uint64_t x528 = 233030285052987LLU;
	uint64_t t118 = 712937344LLU;

    t118 = (x525|(x526|(x527+x528)));

    if (t118 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x529 = 0;
	uint64_t x530 = UINT64_MAX;
	static uint32_t x531 = 5075427U;
	int64_t x532 = INT64_MIN;
	static volatile uint64_t t119 = UINT64_MAX;

    t119 = (x529|(x530|(x531+x532)));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x535 = 9404839062454LL;
	int32_t x536 = INT32_MIN;
	static int64_t t120 = -437805227554423LL;

    t120 = (x533|(x534|(x535+x536)));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = -1LL;
	int32_t x539 = -19;
	int8_t x540 = -1;

    t121 = (x537|(x538|(x539+x540)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x541 = INT32_MAX;
	volatile int8_t x542 = INT8_MAX;
	int16_t x543 = INT16_MIN;
	volatile int32_t t122 = -66;

    t122 = (x541|(x542|(x543+x544)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x545 = -1;
	volatile uint32_t x546 = 4172299U;
	uint8_t x547 = UINT8_MAX;

    t123 = (x545|(x546|(x547+x548)));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x549 = INT64_MAX;
	int16_t x550 = -1;
	volatile int8_t x551 = INT8_MIN;
	uint64_t x552 = 96906LLU;

    t124 = (x549|(x550|(x551+x552)));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x554 = 211899997;
	int8_t x555 = -30;
	uint8_t x556 = 14U;
	int32_t t125 = -3613;

    t125 = (x553|(x554|(x555+x556)));

    if (t125 != -3) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = 1;
	static int16_t x563 = -1;
	static uint32_t x564 = 129295U;
	volatile uint32_t t126 = 1734400U;

    t126 = (x561|(x562|(x563+x564)));

    if (t126 != 4294967183U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x565 = -3;
	int32_t x566 = INT32_MIN;
	uint32_t x567 = 7048368U;

    t127 = (x565|(x566|(x567+x568)));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x569 = INT64_MIN;
	uint32_t x570 = 744U;
	int16_t x571 = -1054;
	uint32_t x572 = 23U;
	volatile int64_t t128 = 1281LL;

    t128 = (x569|(x570|(x571+x572)));

    if (t128 != -9223372032559809543LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x574 = INT64_MAX;
	uint64_t x575 = UINT64_MAX;
	uint64_t t129 = UINT64_MAX;

    t129 = (x573|(x574|(x575+x576)));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x578 = INT16_MAX;
	volatile int64_t x579 = INT64_MIN;
	int16_t x580 = 2083;
	int64_t t130 = 1429201496171LL;

    t130 = (x577|(x578|(x579+x580)));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x582 = INT32_MAX;
	int64_t x583 = -6268307LL;

    t131 = (x581|(x582|(x583+x584)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x590 = 1155U;
	int8_t x591 = -8;
	static int8_t x592 = -18;
	uint32_t t132 = UINT32_MAX;

    t132 = (x589|(x590|(x591+x592)));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x593 = 345832939LLU;
	int64_t x594 = INT64_MIN;
	static int16_t x595 = INT16_MAX;
	int32_t x596 = -133639395;
	volatile uint64_t t133 = 1551476LLU;

    t133 = (x593|(x594|(x595+x596)));

    if (t133 != 18446744073652797439LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x601 = -1LL;
	volatile uint8_t x603 = 1U;
	static int16_t x604 = INT16_MIN;
	static volatile int64_t t134 = -1242082059LL;

    t134 = (x601|(x602|(x603+x604)));

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x605 = 18;
	int64_t x606 = -34232868698LL;
	int64_t x607 = -1LL;
	volatile int64_t t135 = 759281103LL;

    t135 = (x605|(x606|(x607+x608)));

    if (t135 != -34232866370LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x609 = INT16_MAX;
	uint64_t x610 = 0LLU;
	uint64_t x611 = 1543437376586605342LLU;
	int16_t x612 = INT16_MIN;

    t136 = (x609|(x610|(x611+x612)));

    if (t136 != 1543437376586579967LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x614 = INT16_MIN;

    t137 = (x613|(x614|(x615+x616)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x617 = 58722LLU;
	int16_t x618 = INT16_MIN;
	static uint64_t x619 = 1269527227LLU;
	int32_t x620 = 5806901;
	static volatile uint64_t t138 = 0LLU;

    t138 = (x617|(x618|(x619+x620)));

    if (t138 != 18446744073709546994LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x621 = INT8_MIN;
	static int8_t x623 = INT8_MAX;
	static uint32_t x624 = UINT32_MAX;

    t139 = (x621|(x622|(x623+x624)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x629 = 16U;
	uint8_t x630 = UINT8_MAX;
	int32_t x631 = INT32_MIN;

    t140 = (x629|(x630|(x631+x632)));

    if (t140 != -2147483393) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x633 = -1;
	static volatile int8_t x634 = INT8_MAX;
	int64_t x635 = INT64_MAX;

    t141 = (x633|(x634|(x635+x636)));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x637 = INT16_MIN;
	uint8_t x639 = 38U;
	int16_t x640 = -18;
	static volatile int32_t t142 = -44;

    t142 = (x637|(x638|(x639+x640)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x641 = INT64_MAX;
	int32_t x642 = -1;
	uint8_t x643 = 19U;
	int64_t t143 = 2197603371285582554LL;

    t143 = (x641|(x642|(x643+x644)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x645 = -1LL;
	int16_t x646 = INT16_MIN;
	uint32_t x647 = 1U;
	uint8_t x648 = 0U;
	volatile int64_t t144 = -60497131153428170LL;

    t144 = (x645|(x646|(x647+x648)));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x650 = -203421822;
	static int16_t x651 = INT16_MAX;
	uint32_t x652 = 605U;

    t145 = (x649|(x650|(x651+x652)));

    if (t145 != 4091578367U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x654 = UINT8_MAX;
	uint8_t x656 = 0U;
	static volatile int32_t t146 = -30122555;

    t146 = (x653|(x654|(x655+x656)));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x657 = 415956483001LLU;
	int32_t x658 = -1;
	int32_t x659 = INT32_MIN;
	volatile uint32_t x660 = UINT32_MAX;
	static uint64_t t147 = 1LLU;

    t147 = (x657|(x658|(x659+x660)));

    if (t147 != 416611827711LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x661 = 44990181U;
	volatile uint32_t x662 = UINT32_MAX;
	int32_t x663 = INT32_MIN;

    t148 = (x661|(x662|(x663+x664)));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x667 = UINT64_MAX;
	int8_t x668 = INT8_MAX;
	uint64_t t149 = UINT64_MAX;

    t149 = (x665|(x666|(x667+x668)));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x670 = INT16_MAX;
	uint64_t x671 = 10LLU;
	uint64_t x672 = 11LLU;
	uint64_t t150 = 1LLU;

    t150 = (x669|(x670|(x671+x672)));

    if (t150 != 2582208883163135LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x676 = INT64_MIN;
	static volatile int64_t t151 = -444LL;

    t151 = (x673|(x674|(x675+x676)));

    if (t151 != -108LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x678 = INT16_MIN;
	uint16_t x679 = UINT16_MAX;

    t152 = (x677|(x678|(x679+x680)));

    if (t152 != 18446744073709540030LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x681 = INT32_MIN;
	volatile int32_t x684 = -1;
	int64_t t153 = -97286158278LL;

    t153 = (x681|(x682|(x683+x684)));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x685 = -1LL;
	uint16_t x686 = UINT16_MAX;
	volatile uint64_t x687 = 13102346220172905LLU;
	int16_t x688 = INT16_MIN;
	uint64_t t154 = UINT64_MAX;

    t154 = (x685|(x686|(x687+x688)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x689 = -23;
	int8_t x690 = -1;
	int8_t x691 = -1;
	int32_t t155 = 777;

    t155 = (x689|(x690|(x691+x692)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x693 = INT16_MIN;
	uint8_t x694 = 125U;
	int32_t x695 = INT32_MIN;
	static int16_t x696 = INT16_MAX;

    t156 = (x693|(x694|(x695+x696)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x697 = 416033471765399LL;
	static int32_t x699 = INT32_MIN;
	static int32_t x700 = 51905000;

    t157 = (x697|(x698|(x699+x700)));

    if (t157 != -681796609LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x701 = 0U;
	int64_t x702 = 39238662767597LL;
	int16_t x703 = INT16_MAX;
	int16_t x704 = INT16_MIN;
	volatile int64_t t158 = -564918LL;

    t158 = (x701|(x702|(x703+x704)));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x709 = -6;
	volatile int64_t x710 = INT64_MIN;
	int8_t x711 = -1;
	static int16_t x712 = -9;
	static volatile int64_t t159 = 40934848840LL;

    t159 = (x709|(x710|(x711+x712)));

    if (t159 != -2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x713 = -4114;
	static uint32_t x714 = UINT32_MAX;
	int8_t x715 = INT8_MAX;
	static volatile uint64_t t160 = UINT64_MAX;

    t160 = (x713|(x714|(x715+x716)));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x717 = -1;
	int32_t x718 = -59079;
	volatile uint32_t x719 = 5U;
	static volatile int64_t x720 = 123230LL;

    t161 = (x717|(x718|(x719+x720)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x725 = 46;
	static int32_t x726 = 2610376;
	static uint64_t x727 = UINT64_MAX;
	static volatile int32_t x728 = INT32_MIN;

    t162 = (x725|(x726|(x727+x728)));

    if (t162 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x729 = INT64_MIN;
	int64_t x730 = 331LL;
	int16_t x732 = INT16_MAX;
	volatile int64_t t163 = 277580596715838LL;

    t163 = (x729|(x730|(x731+x732)));

    if (t163 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x733 = -1;
	int16_t x734 = -1;
	volatile uint32_t x735 = UINT32_MAX;
	uint64_t x736 = 224177227031LLU;

    t164 = (x733|(x734|(x735+x736)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x737 = INT16_MIN;
	int16_t x738 = INT16_MIN;
	static volatile int32_t x739 = INT32_MIN;
	static volatile int32_t x740 = INT32_MAX;
	int32_t t165 = -11;

    t165 = (x737|(x738|(x739+x740)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x741 = INT64_MAX;
	uint32_t x742 = 224489501U;
	int64_t x743 = INT64_MIN;
	volatile uint16_t x744 = UINT16_MAX;
	static volatile int64_t t166 = 82193284688452LL;

    t166 = (x741|(x742|(x743+x744)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x746 = 23LLU;
	int16_t x747 = INT16_MIN;
	volatile int16_t x748 = INT16_MAX;
	static volatile uint64_t t167 = UINT64_MAX;

    t167 = (x745|(x746|(x747+x748)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x749 = UINT16_MAX;
	uint8_t x750 = 2U;
	uint8_t x751 = 2U;
	int64_t t168 = -56956166148346603LL;

    t168 = (x749|(x750|(x751+x752)));

    if (t168 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x758 = 7160;
	uint8_t x759 = 22U;
	volatile int8_t x760 = -1;
	volatile int32_t t169 = -159;

    t169 = (x757|(x758|(x759+x760)));

    if (t169 != 7165) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x765 = 36866556717247451LLU;
	volatile int32_t x766 = 4;
	static uint32_t x768 = 2302182U;
	uint64_t t170 = 7178LLU;

    t170 = (x765|(x766|(x767+x768)));

    if (t170 != 36866556717378527LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x770 = -3;
	volatile int16_t x771 = -1;
	int16_t x772 = INT16_MIN;
	volatile int32_t t171 = -10543;

    t171 = (x769|(x770|(x771+x772)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x773 = -1;
	volatile int64_t x774 = -102448LL;
	int8_t x775 = INT8_MAX;
	int64_t x776 = INT64_MIN;
	volatile int64_t t172 = -69083421649099966LL;

    t172 = (x773|(x774|(x775+x776)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x781 = INT16_MIN;
	static int8_t x782 = INT8_MAX;
	int64_t t173 = 126978207459LL;

    t173 = (x781|(x782|(x783+x784)));

    if (t173 != -10753LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x786 = 1;
	static int32_t t174 = -1656;

    t174 = (x785|(x786|(x787+x788)));

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x789 = 29473LL;
	int8_t x791 = 31;
	uint64_t x792 = UINT64_MAX;
	static volatile uint64_t t175 = 114345759LLU;

    t175 = (x789|(x790|(x791+x792)));

    if (t175 != 32767LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x793 = -173920;
	static int64_t x794 = -1LL;
	int16_t x795 = 157;
	int8_t x796 = INT8_MAX;
	volatile int64_t t176 = -31LL;

    t176 = (x793|(x794|(x795+x796)));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x797 = 0;
	int32_t x798 = 1;
	uint16_t x799 = 32U;
	int8_t x800 = -1;
	int32_t t177 = 6728677;

    t177 = (x797|(x798|(x799+x800)));

    if (t177 != 31) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x802 = 2121557374154007LLU;
	int64_t x803 = INT64_MIN;
	static volatile uint64_t t178 = 3504708210618159335LLU;

    t178 = (x801|(x802|(x803+x804)));

    if (t178 != 9225493594228965335LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x805 = 1LLU;
	volatile int16_t x806 = -323;
	int64_t x807 = 1069748644722LL;
	volatile int64_t x808 = 99090566982694LL;
	uint64_t t179 = 980981655771199LLU;

    t179 = (x805|(x806|(x807+x808)));

    if (t179 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x809 = INT8_MIN;
	uint16_t x811 = UINT16_MAX;
	uint8_t x812 = UINT8_MAX;
	volatile int32_t t180 = 3;

    t180 = (x809|(x810|(x811+x812)));

    if (t180 != -2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x813 = 639847LLU;
	uint64_t x815 = UINT64_MAX;

    t181 = (x813|(x814|(x815+x816)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x817 = INT64_MIN;
	uint16_t x818 = 95U;
	int8_t x819 = INT8_MAX;
	static volatile uint32_t x820 = 7949780U;

    t182 = (x817|(x818|(x819+x820)));

    if (t182 != -9223372036846825889LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	int32_t x822 = -1;
	uint64_t x823 = 1LLU;
	static int64_t x824 = INT64_MAX;
	volatile uint64_t t183 = UINT64_MAX;

    t183 = (x821|(x822|(x823+x824)));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x825 = -90;
	uint32_t x826 = 327677U;
	static volatile int8_t x827 = INT8_MIN;
	int16_t x828 = INT16_MIN;
	uint32_t t184 = UINT32_MAX;

    t184 = (x825|(x826|(x827+x828)));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x830 = 6;
	volatile int8_t x831 = INT8_MIN;
	uint8_t x832 = 3U;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (x829|(x830|(x831+x832)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x837 = UINT64_MAX;
	static int64_t x839 = INT64_MIN;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (x837|(x838|(x839+x840)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x841 = 88U;
	int16_t x842 = -1;
	uint8_t x844 = 26U;

    t187 = (x841|(x842|(x843+x844)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x849 = INT32_MIN;
	uint16_t x850 = 176U;
	static int8_t x851 = INT8_MAX;
	static int64_t x852 = -1LL;
	volatile int64_t t188 = -82377291094LL;

    t188 = (x849|(x850|(x851+x852)));

    if (t188 != -2147483394LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x853 = 258591LL;
	int64_t x854 = -1LL;
	uint16_t x855 = 143U;
	uint32_t x856 = 49031U;
	int64_t t189 = -3064890691211900LL;

    t189 = (x853|(x854|(x855+x856)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x865 = 7U;
	int64_t x866 = 145566688630LL;
	int32_t x867 = INT32_MIN;
	volatile int64_t x868 = INT64_MAX;
	volatile int64_t t190 = INT64_MAX;

    t190 = (x865|(x866|(x867+x868)));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x869 = -6;
	uint16_t x871 = UINT16_MAX;
	uint64_t x872 = 36943910LLU;

    t191 = (x869|(x870|(x871+x872)));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x877 = 4314;
	int32_t x879 = INT32_MIN;
	uint64_t x880 = 46486741963LLU;
	volatile uint64_t t192 = 484925LLU;

    t192 = (x877|(x878|(x879+x880)));

    if (t192 != 45097156607LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x882 = INT8_MAX;
	int8_t x883 = 1;
	uint64_t x884 = UINT64_MAX;
	volatile uint64_t t193 = 2LLU;

    t193 = (x881|(x882|(x883+x884)));

    if (t193 != 255LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x885 = 28161935;
	static uint64_t x886 = 749412298799LLU;
	static uint64_t x888 = 226837LLU;

    t194 = (x885|(x886|(x887+x888)));

    if (t194 != 749438236607LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x889 = INT16_MAX;
	volatile uint8_t x891 = 81U;
	int64_t x892 = 0LL;
	volatile int64_t t195 = 47177867072LL;

    t195 = (x889|(x890|(x891+x892)));

    if (t195 != -7340033LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x893 = -1;
	int32_t x894 = INT32_MIN;
	int8_t x895 = INT8_MIN;
	int8_t x896 = INT8_MIN;
	volatile int32_t t196 = -318988;

    t196 = (x893|(x894|(x895+x896)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x897 = INT64_MIN;
	static volatile uint32_t x898 = 3U;
	uint8_t x900 = 98U;
	volatile int64_t t197 = -1685141643928879LL;

    t197 = (x897|(x898|(x899+x900)));

    if (t197 != -9223372036854775693LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x901 = 1;
	uint16_t x902 = UINT16_MAX;
	int64_t x903 = -1LL;
	int64_t t198 = -15062446LL;

    t198 = (x901|(x902|(x903+x904)));

    if (t198 != 65535LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x905 = INT16_MIN;
	int8_t x906 = -47;
	int8_t x908 = INT8_MIN;
	int32_t t199 = -1;

    t199 = (x905|(x906|(x907+x908)));

    if (t199 != -1) { NG(); } else { ; }
	
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

