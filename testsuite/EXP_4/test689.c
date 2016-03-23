
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

int16_t x2 = 5;
static int8_t x3 = INT8_MIN;
uint16_t x4 = 55U;
int64_t x7 = -12043847036415605LL;
int16_t x8 = INT16_MIN;
int32_t t1 = -3294205;
static uint8_t x10 = 3U;
volatile int32_t t2 = 14607161;
int64_t x15 = INT64_MIN;
static volatile uint64_t t3 = 7LLU;
uint64_t x17 = UINT64_MAX;
uint64_t x22 = 3087LLU;
uint32_t x23 = 199895U;
volatile uint16_t x28 = UINT16_MAX;
int32_t t6 = -9380430;
int16_t x32 = INT16_MIN;
int32_t x40 = -1;
int32_t t9 = -30;
uint64_t x49 = 4705864672076640LLU;
static volatile int32_t x57 = 93391227;
volatile int32_t t14 = 643142;
int32_t x75 = -1;
uint64_t x90 = UINT64_MAX;
static volatile int64_t x92 = INT64_MIN;
int8_t x102 = INT8_MIN;
int8_t x106 = -1;
volatile int32_t x107 = 988610060;
volatile uint32_t x111 = UINT32_MAX;
int8_t x114 = -2;
volatile int32_t t26 = -63713;
static int8_t x122 = INT8_MIN;
uint8_t x124 = UINT8_MAX;
volatile int32_t x131 = INT32_MIN;
volatile int32_t t29 = -11;
static uint16_t x133 = 1U;
int16_t x135 = INT16_MIN;
uint16_t x138 = UINT16_MAX;
int8_t x142 = 5;
volatile int8_t x144 = INT8_MAX;
volatile int32_t t32 = 907;
int64_t x148 = INT64_MIN;
static volatile int64_t t33 = 31632511177742655LL;
static uint8_t x154 = 0U;
int32_t t35 = 211925064;
int16_t x160 = -5309;
int32_t x163 = -131;
volatile int32_t t38 = 64671163;
volatile int64_t x171 = INT64_MIN;
int16_t x174 = INT16_MIN;
int32_t x177 = -19353;
int16_t x179 = INT16_MAX;
uint8_t x180 = 14U;
int32_t x181 = INT32_MIN;
int16_t x183 = 0;
static int8_t x187 = INT8_MAX;
int8_t x188 = 18;
int8_t x198 = -1;
int32_t x203 = -60692918;
int16_t x204 = 1;
static int32_t t47 = -6165393;
static int32_t x205 = INT32_MIN;
int16_t x210 = INT16_MAX;
uint32_t x211 = 64U;
static uint64_t x216 = 252LLU;
volatile int32_t x219 = 1821;
uint16_t x226 = 48U;
uint8_t x227 = 7U;
static uint8_t x239 = UINT8_MAX;
int64_t x243 = 3082962987335813LL;
int8_t x246 = 7;
int8_t x249 = 39;
int64_t t60 = 0LL;
int64_t x266 = 6338777066LL;
static volatile int64_t x269 = 2LL;
uint64_t x271 = UINT64_MAX;
uint64_t x273 = 77976LLU;
static int32_t x279 = INT32_MIN;
int64_t x280 = INT64_MIN;
int64_t x284 = 1065856169LL;
int8_t x289 = INT8_MIN;
volatile int64_t x301 = -1LL;
int8_t x308 = INT8_MIN;
int8_t x309 = -1;
uint32_t x317 = 170U;
volatile int8_t x318 = INT8_MAX;
int32_t t75 = 1237659;
int32_t t76 = -67916051;
volatile uint32_t t77 = 126155U;
int16_t x335 = 68;
int8_t x343 = INT8_MIN;
uint32_t x360 = 2167U;
static uint16_t x370 = 2185U;
int64_t t87 = 230721638111312LL;
static int64_t x379 = -217895337LL;
int64_t x386 = 3222042855618694077LL;
int8_t x389 = INT8_MAX;
volatile int32_t t92 = -55;
uint64_t x394 = UINT64_MAX;
int16_t x402 = 2;
int16_t x409 = INT16_MIN;
int8_t x419 = INT8_MIN;
int64_t x422 = -1LL;
volatile int32_t x426 = INT32_MIN;
volatile uint32_t x432 = UINT32_MAX;
volatile int32_t t102 = -37;
volatile uint64_t t103 = 55555298195LLU;
uint16_t x443 = 57U;
uint32_t x446 = 31821040U;
static int32_t x449 = INT32_MIN;
int16_t x461 = -1;
volatile int32_t t110 = 2811249;
volatile uint64_t x474 = UINT64_MAX;
int32_t x479 = INT32_MIN;
int16_t x481 = -1;
int32_t x488 = INT32_MIN;
int32_t t117 = 4551147;
int8_t x499 = -8;
static int8_t x501 = 1;
uint8_t x502 = 0U;
uint64_t x503 = 1237366419215134143LLU;
volatile uint64_t x506 = 21015654098483922LLU;
static int16_t x511 = -1;
static int32_t t121 = -246039;
static uint64_t x522 = 1059392LLU;
volatile int64_t t124 = 947671559554337868LL;
uint8_t x527 = 6U;
int8_t x529 = INT8_MAX;
int16_t x533 = -624;
int8_t x534 = 0;
int32_t x542 = 3426940;
volatile uint32_t t129 = 32403705U;
int32_t x549 = INT32_MIN;
volatile int32_t x550 = INT32_MIN;
static uint8_t x553 = 5U;
uint8_t x554 = UINT8_MAX;
volatile uint64_t x555 = UINT64_MAX;
int8_t x557 = -1;
static uint16_t x561 = UINT16_MAX;
int8_t x566 = -1;
volatile uint32_t t135 = 219536900U;
int64_t x576 = INT64_MAX;
volatile int16_t x577 = INT16_MIN;
uint32_t x591 = 4U;
int8_t x596 = -1;
volatile uint64_t x604 = 7849LLU;
uint64_t t144 = 1506LLU;
int32_t x608 = -1;
volatile uint64_t x609 = 1083613821308641599LLU;
uint32_t x610 = 1U;
volatile int64_t x611 = -1LL;
int64_t x615 = INT64_MAX;
uint16_t x620 = UINT16_MAX;
static uint8_t x659 = UINT8_MAX;
volatile int16_t x660 = -422;
int16_t x661 = INT16_MAX;
int32_t t158 = 5047;
int64_t x668 = INT64_MIN;
int64_t x673 = INT64_MAX;
static int64_t x685 = INT64_MIN;
int64_t x695 = -1LL;
int32_t t166 = -40;
uint16_t x707 = 862U;
static volatile uint32_t t169 = 382747U;
static uint64_t t170 = 18LLU;
volatile int16_t x717 = 622;
static volatile int32_t t171 = -924567192;
uint32_t x721 = 9U;
volatile int16_t x726 = 590;
volatile int32_t t173 = 741;
uint8_t x731 = 1U;
int8_t x736 = INT8_MAX;
int16_t x746 = INT16_MAX;
int32_t t178 = 28342522;
static int32_t x749 = INT32_MIN;
uint64_t x751 = 15LLU;
int32_t t180 = -1;
volatile int32_t t181 = 350;
uint32_t x764 = 157771U;
int16_t x765 = -1;
uint16_t x767 = 15379U;
static int32_t t183 = -22;
uint32_t x772 = 133U;
int16_t x773 = INT16_MIN;
int16_t x776 = 173;
int32_t x783 = 14;
int8_t x785 = 5;
volatile int32_t t188 = 3582370;
uint16_t x795 = UINT16_MAX;
volatile uint32_t t190 = 416261U;
int8_t x806 = INT8_MAX;
int32_t x812 = INT32_MIN;
static int16_t x813 = INT16_MIN;
static int16_t x815 = -1;
volatile int64_t t196 = 9469484115LL;
uint8_t x823 = UINT8_MAX;
int64_t x829 = -1LL;


void f0(void) {
    	uint16_t x1 = 17U;
	int32_t t0 = 7332;

    t0 = (x1*(x2==(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint8_t x6 = 12U;

    t1 = (x5*(x6==(x7/x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int8_t x11 = 12;
	int64_t x12 = INT64_MAX;

    t2 = (x9*(x10==(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 54786LLU;
	static int64_t x14 = INT64_MAX;
	int8_t x16 = INT8_MAX;

    t3 = (x13*(x14==(x15/x16)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = INT64_MAX;
	static int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	static uint64_t t4 = 655506861658076967LLU;

    t4 = (x17*(x18==(x19/x20)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 104224004400600277LL;
	int64_t x24 = INT64_MAX;
	static int64_t t5 = -1498423141080862253LL;

    t5 = (x21*(x22==(x23/x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint16_t x26 = 8604U;
	static int32_t x27 = INT32_MIN;

    t6 = (x25*(x26==(x27/x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 1458764U;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = 246203653;
	uint32_t t7 = 743U;

    t7 = (x29*(x30==(x31/x32)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 94810541128626039LLU;
	uint32_t x34 = 635392U;
	static int16_t x35 = -2;
	static uint16_t x36 = UINT16_MAX;
	volatile uint64_t t8 = 7137LLU;

    t8 = (x33*(x34==(x35/x36)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	volatile int64_t x38 = 5520254LL;
	static int32_t x39 = -1;

    t9 = (x37*(x38==(x39/x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MAX;
	int64_t x44 = -1LL;
	volatile int32_t t10 = -4196339;

    t10 = (x41*(x42==(x43/x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -14;

    t11 = (x45*(x46==(x47/x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = 186;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = 4;
	uint64_t t12 = 7593886879421LLU;

    t12 = (x49*(x50==(x51/x52)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int8_t x54 = -11;
	volatile uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 13U;
	volatile int64_t t13 = -1LL;

    t13 = (x53*(x54==(x55/x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = UINT16_MAX;
	int16_t x59 = -1;
	uint64_t x60 = 533887761674989845LLU;

    t14 = (x57*(x58==(x59/x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 5;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = -1;
	static int8_t x64 = -14;
	volatile int32_t t15 = 117;

    t15 = (x61*(x62==(x63/x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -2;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -2;

    t16 = (x65*(x66==(x67/x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	uint64_t x74 = UINT64_MAX;
	uint16_t x76 = 88U;
	int32_t t17 = 4;

    t17 = (x73*(x74==(x75/x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = -1;
	int16_t x78 = -1;
	static int8_t x79 = 1;
	int32_t x80 = -237026789;
	volatile int32_t t18 = -1;

    t18 = (x77*(x78==(x79/x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 72638LL;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = 23U;
	static volatile int8_t x88 = -1;
	static int64_t t19 = 6823859528550623LL;

    t19 = (x85*(x86==(x87/x88)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -1LL;
	int16_t x91 = INT16_MAX;
	volatile int64_t t20 = -5206828158LL;

    t20 = (x89*(x90==(x91/x92)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x93 = INT64_MIN;
	volatile int8_t x94 = INT8_MAX;
	int32_t x95 = -17435;
	volatile int32_t x96 = INT32_MIN;
	static int64_t t21 = 4786330955647LL;

    t21 = (x93*(x94==(x95/x96)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 13702U;
	static int64_t x100 = -999100955487LL;
	int32_t t22 = -169110;

    t22 = (x97*(x98==(x99/x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x101 = 3U;
	int64_t x103 = INT64_MIN;
	uint32_t x104 = 14088274U;
	volatile int32_t t23 = 25;

    t23 = (x101*(x102==(x103/x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x105 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	static int32_t t24 = -2;

    t24 = (x105*(x106==(x107/x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	static volatile int32_t x110 = INT32_MIN;
	volatile int64_t x112 = -1LL;
	volatile int64_t t25 = 1066472512505LL;

    t25 = (x109*(x110==(x111/x112)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	static uint16_t x116 = UINT16_MAX;

    t26 = (x113*(x114==(x115/x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	int32_t x123 = INT32_MIN;
	int32_t t27 = 8195;

    t27 = (x121*(x122==(x123/x124)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x125 = 97U;
	int8_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	static uint32_t t28 = 196540412U;

    t28 = (x125*(x126==(x127/x128)));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x129 = 0;
	int8_t x130 = 25;
	int64_t x132 = INT64_MIN;

    t29 = (x129*(x130==(x131/x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x134 = INT32_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t30 = -21487;

    t30 = (x133*(x134==(x135/x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	int16_t x139 = -31;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t31 = 14209472;

    t31 = (x137*(x138==(x139/x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x141 = INT32_MIN;
	volatile uint64_t x143 = 13159147LLU;

    t32 = (x141*(x142==(x143/x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = -1LL;
	uint16_t x146 = 5895U;
	int32_t x147 = -1;

    t33 = (x145*(x146==(x147/x148)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MAX;
	volatile int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MAX;
	int32_t t34 = -22667;

    t34 = (x149*(x150==(x151/x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x153 = INT8_MAX;
	volatile uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MIN;

    t35 = (x153*(x154==(x155/x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = INT8_MIN;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = -1498;
	int32_t t36 = -527;

    t36 = (x157*(x158==(x159/x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MIN;
	static int8_t x162 = 0;
	int16_t x164 = -1;
	int32_t t37 = 1396715;

    t37 = (x161*(x162==(x163/x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x165 = INT16_MIN;
	uint32_t x166 = 794U;
	volatile int64_t x167 = -1LL;
	uint32_t x168 = 3637U;

    t38 = (x165*(x166==(x167/x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = -1;
	volatile uint16_t x170 = 0U;
	volatile uint64_t x172 = 808LLU;
	int32_t t39 = -9;

    t39 = (x169*(x170==(x171/x172)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x173 = 1502LLU;
	int32_t x175 = -1;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t40 = 54641998298420122LLU;

    t40 = (x173*(x174==(x175/x176)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x178 = 6;
	int32_t t41 = -30;

    t41 = (x177*(x178==(x179/x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x182 = UINT8_MAX;
	int64_t x184 = 7710373LL;
	volatile int32_t t42 = -1;

    t42 = (x181*(x182==(x183/x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = 3U;
	uint16_t x186 = 12U;
	static int32_t t43 = -292;

    t43 = (x185*(x186==(x187/x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x189 = -1;
	volatile uint64_t x190 = 1406850481878LLU;
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t44 = 6;

    t44 = (x189*(x190==(x191/x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 63U;
	int32_t x194 = -1;
	int16_t x195 = -1;
	static int16_t x196 = -1;
	int32_t t45 = 4062355;

    t45 = (x193*(x194==(x195/x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = 31;
	uint8_t x199 = 4U;
	int16_t x200 = -7;
	volatile int32_t t46 = -175;

    t46 = (x197*(x198==(x199/x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x201 = -1;
	static int32_t x202 = INT32_MIN;

    t47 = (x201*(x202==(x203/x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x206 = UINT64_MAX;
	int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t48 = 56;

    t48 = (x205*(x206==(x207/x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = -14004;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t49 = -385386;

    t49 = (x209*(x210==(x211/x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = INT32_MAX;
	int16_t x214 = -120;
	volatile int8_t x215 = INT8_MIN;
	volatile int32_t t50 = -11199038;

    t50 = (x213*(x214==(x215/x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = INT32_MIN;
	int16_t x218 = 9;
	int8_t x220 = -1;
	volatile int32_t t51 = -3;

    t51 = (x217*(x218==(x219/x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = -24;
	volatile int32_t x222 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	static int8_t x224 = INT8_MAX;
	int32_t t52 = -3602229;

    t52 = (x221*(x222==(x223/x224)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	int32_t t53 = -2781;

    t53 = (x225*(x226==(x227/x228)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x229 = 2U;
	int32_t x230 = -1;
	volatile uint8_t x231 = 23U;
	int8_t x232 = INT8_MIN;
	int32_t t54 = 0;

    t54 = (x229*(x230==(x231/x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x233 = 23U;
	static uint8_t x234 = UINT8_MAX;
	int16_t x235 = -12064;
	volatile int8_t x236 = 10;
	volatile int32_t t55 = -20;

    t55 = (x233*(x234==(x235/x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = 1U;
	static volatile int32_t x238 = INT32_MIN;
	volatile int32_t x240 = INT32_MAX;
	int32_t t56 = -29125;

    t56 = (x237*(x238==(x239/x240)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	int8_t x244 = -1;
	int64_t t57 = -1008LL;

    t57 = (x241*(x242==(x243/x244)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = 9;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = UINT32_MAX;
	static int32_t t58 = -28216;

    t58 = (x245*(x246==(x247/x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x250 = 16307;
	int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t59 = 5;

    t59 = (x249*(x250==(x251/x252)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x253 = INT64_MAX;
	int64_t x254 = 103020174327752LL;
	int8_t x255 = -7;
	volatile uint16_t x256 = UINT16_MAX;

    t60 = (x253*(x254==(x255/x256)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MIN;
	static volatile uint32_t x258 = 31033U;
	static volatile int8_t x259 = -1;
	static uint32_t x260 = UINT32_MAX;
	volatile int32_t t61 = 442701732;

    t61 = (x257*(x258==(x259/x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x265 = 7U;
	int32_t x267 = -1;
	uint64_t x268 = 1213580LLU;
	int32_t t62 = 156531704;

    t62 = (x265*(x266==(x267/x268)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x270 = -2;
	static int32_t x272 = INT32_MIN;
	volatile int64_t t63 = -1102855345LL;

    t63 = (x269*(x270==(x271/x272)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x274 = 13050569606153608LL;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = -1;
	volatile uint64_t t64 = 168419761044LLU;

    t64 = (x273*(x274==(x275/x276)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x277 = UINT16_MAX;
	static uint16_t x278 = 16208U;
	int32_t t65 = -4929;

    t65 = (x277*(x278==(x279/x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x281 = -1062;
	int64_t x282 = -1LL;
	int32_t x283 = INT32_MAX;
	volatile int32_t t66 = 1;

    t66 = (x281*(x282==(x283/x284)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x290 = INT16_MIN;
	int32_t x291 = 41797;
	uint64_t x292 = 7LLU;
	static volatile int32_t t67 = 22662;

    t67 = (x289*(x290==(x291/x292)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x293 = 101432U;
	static uint32_t x294 = 79126983U;
	static volatile uint64_t x295 = 6364LLU;
	int16_t x296 = 21;
	volatile uint32_t t68 = 510U;

    t68 = (x293*(x294==(x295/x296)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = INT64_MIN;
	uint16_t x298 = 1U;
	int64_t x299 = INT64_MAX;
	static int64_t x300 = INT64_MIN;
	int64_t t69 = 15224LL;

    t69 = (x297*(x298==(x299/x300)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x302 = -1;
	int16_t x303 = -1;
	volatile int16_t x304 = INT16_MAX;
	volatile int64_t t70 = -2819406205055862225LL;

    t70 = (x301*(x302==(x303/x304)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x305 = 0U;
	int8_t x306 = -3;
	int32_t x307 = -1;
	int32_t t71 = -512;

    t71 = (x305*(x306==(x307/x308)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x310 = INT64_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	int32_t x312 = 6700;
	int32_t t72 = 223;

    t72 = (x309*(x310==(x311/x312)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x313 = -60;
	uint32_t x314 = 48367U;
	int8_t x315 = 2;
	uint32_t x316 = 826346238U;
	volatile int32_t t73 = -3359;

    t73 = (x313*(x314==(x315/x316)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x319 = UINT8_MAX;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t74 = 7925U;

    t74 = (x317*(x318==(x319/x320)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = INT32_MAX;
	int8_t x322 = 11;
	uint16_t x323 = 2152U;
	int32_t x324 = INT32_MAX;

    t75 = (x321*(x322==(x323/x324)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x325 = 11855U;
	int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -1LL;

    t76 = (x325*(x326==(x327/x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x329 = 388392U;
	int64_t x330 = INT64_MAX;
	int64_t x331 = 1LL;
	int32_t x332 = INT32_MAX;

    t77 = (x329*(x330==(x331/x332)));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	volatile uint8_t x334 = UINT8_MAX;
	static uint32_t x336 = 482960653U;
	uint64_t t78 = 85627269LLU;

    t78 = (x333*(x334==(x335/x336)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = INT32_MAX;
	int32_t x338 = -100;
	uint16_t x339 = 62U;
	static volatile int64_t x340 = INT64_MAX;
	int32_t t79 = -1004066;

    t79 = (x337*(x338==(x339/x340)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 158916055LLU;
	int16_t x344 = 3395;
	uint32_t t80 = 43560730U;

    t80 = (x341*(x342==(x343/x344)));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x345 = 1211214085415780995LLU;
	volatile int8_t x346 = INT8_MAX;
	static uint16_t x347 = 890U;
	int32_t x348 = INT32_MIN;
	volatile uint64_t t81 = 909286LLU;

    t81 = (x345*(x346==(x347/x348)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x349 = 37214845LLU;
	int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	static uint64_t t82 = 516334691643LLU;

    t82 = (x349*(x350==(x351/x352)));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = INT64_MAX;
	int16_t x354 = 763;
	int32_t x355 = 1;
	uint64_t x356 = UINT64_MAX;
	volatile int64_t t83 = 495000513LL;

    t83 = (x353*(x354==(x355/x356)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x357 = 1875984778549LL;
	uint32_t x358 = UINT32_MAX;
	static uint8_t x359 = 7U;
	volatile int64_t t84 = -5009LL;

    t84 = (x357*(x358==(x359/x360)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x361 = -3926;
	int8_t x362 = -16;
	int8_t x363 = INT8_MIN;
	volatile uint64_t x364 = UINT64_MAX;
	int32_t t85 = 3963;

    t85 = (x361*(x362==(x363/x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x365 = 53U;
	volatile int64_t x366 = INT64_MIN;
	int64_t x367 = -1LL;
	int64_t x368 = INT64_MAX;
	int32_t t86 = -15972809;

    t86 = (x365*(x366==(x367/x368)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = INT64_MAX;
	volatile uint16_t x371 = 840U;
	uint16_t x372 = 430U;

    t87 = (x369*(x370==(x371/x372)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x373 = INT8_MIN;
	int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t88 = -257634743;

    t88 = (x373*(x374==(x375/x376)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = -1;
	volatile int8_t x380 = -1;
	int32_t t89 = -16329057;

    t89 = (x377*(x378==(x379/x380)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x381 = 312U;
	int8_t x382 = -1;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = 42;
	volatile uint32_t t90 = 551991U;

    t90 = (x381*(x382==(x383/x384)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x385 = 25586391685573844LLU;
	int64_t x387 = INT64_MIN;
	static volatile uint8_t x388 = UINT8_MAX;
	static volatile uint64_t t91 = 879656256923LLU;

    t91 = (x385*(x386==(x387/x388)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x390 = 3679;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;

    t92 = (x389*(x390==(x391/x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x393 = UINT32_MAX;
	uint16_t x395 = 0U;
	int64_t x396 = 16761LL;
	static volatile uint32_t t93 = 411799652U;

    t93 = (x393*(x394==(x395/x396)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x397 = 2U;
	int32_t x398 = INT32_MAX;
	uint64_t x399 = 8LLU;
	uint32_t x400 = 14U;
	int32_t t94 = 132776359;

    t94 = (x397*(x398==(x399/x400)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x401 = INT32_MIN;
	uint32_t x403 = 14636316U;
	uint32_t x404 = UINT32_MAX;
	int32_t t95 = 32289200;

    t95 = (x401*(x402==(x403/x404)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = 74U;
	static int32_t x406 = -1;
	static int64_t x407 = INT64_MIN;
	static int16_t x408 = 15957;
	int32_t t96 = -116;

    t96 = (x405*(x406==(x407/x408)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -7;
	static volatile int32_t t97 = -1437;

    t97 = (x409*(x410==(x411/x412)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = -172;
	int8_t x414 = -1;
	volatile int64_t x415 = -1LL;
	int16_t x416 = -1388;
	volatile int32_t t98 = 210331321;

    t98 = (x413*(x414==(x415/x416)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = INT16_MIN;
	int8_t x418 = 1;
	uint8_t x420 = 1U;
	volatile int32_t t99 = 711;

    t99 = (x417*(x418==(x419/x420)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x421 = INT16_MAX;
	int64_t x423 = 28226501465LL;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t100 = -3830;

    t100 = (x421*(x422==(x423/x424)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x427 = INT8_MAX;
	int8_t x428 = 62;
	volatile int32_t t101 = 218988240;

    t101 = (x425*(x426==(x427/x428)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x429 = 0U;
	int16_t x430 = 7863;
	uint16_t x431 = UINT16_MAX;

    t102 = (x429*(x430==(x431/x432)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x433 = 5LLU;
	int8_t x434 = INT8_MIN;
	volatile int8_t x435 = -17;
	uint32_t x436 = UINT32_MAX;

    t103 = (x433*(x434==(x435/x436)));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x437 = -1;
	volatile int64_t x438 = INT64_MAX;
	int32_t x439 = -1;
	volatile uint64_t x440 = 1582LLU;
	int32_t t104 = -14;

    t104 = (x437*(x438==(x439/x440)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = -21;
	volatile uint64_t x442 = UINT64_MAX;
	int8_t x444 = INT8_MIN;
	static int32_t t105 = -6994473;

    t105 = (x441*(x442==(x443/x444)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x445 = 30893U;
	static int8_t x447 = -1;
	volatile int64_t x448 = -1LL;
	uint32_t t106 = 2U;

    t106 = (x445*(x446==(x447/x448)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x450 = 15914728LL;
	int8_t x451 = 9;
	int64_t x452 = -1LL;
	int32_t t107 = -86568;

    t107 = (x449*(x450==(x451/x452)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = 1;
	static int8_t x454 = 2;
	uint64_t x455 = 2597805473927140397LLU;
	uint64_t x456 = 2474488LLU;
	static int32_t t108 = -7616007;

    t108 = (x453*(x454==(x455/x456)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x457 = 300U;
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MAX;
	volatile int32_t t109 = -14766799;

    t109 = (x457*(x458==(x459/x460)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x462 = -200;
	volatile int16_t x463 = INT16_MAX;
	static volatile uint16_t x464 = 99U;

    t110 = (x461*(x462==(x463/x464)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x465 = 210U;
	volatile int16_t x466 = 5303;
	int16_t x467 = 447;
	volatile int32_t x468 = INT32_MAX;
	uint32_t t111 = 15004U;

    t111 = (x465*(x466==(x467/x468)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x469 = INT32_MIN;
	static volatile int64_t x470 = INT64_MIN;
	uint64_t x471 = UINT64_MAX;
	uint64_t x472 = 52LLU;
	static int32_t t112 = 19470674;

    t112 = (x469*(x470==(x471/x472)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x473 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	int16_t x476 = 2;
	int32_t t113 = -268916365;

    t113 = (x473*(x474==(x475/x476)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = 5;
	uint16_t x478 = 37U;
	uint16_t x480 = UINT16_MAX;
	int32_t t114 = -2557825;

    t114 = (x477*(x478==(x479/x480)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x482 = -121;
	int16_t x483 = INT16_MAX;
	uint8_t x484 = 2U;
	int32_t t115 = -6468324;

    t115 = (x481*(x482==(x483/x484)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x485 = 26U;
	uint16_t x486 = 2U;
	uint64_t x487 = UINT64_MAX;
	int32_t t116 = 61639063;

    t116 = (x485*(x486==(x487/x488)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x493 = 196;
	int8_t x494 = -18;
	int16_t x495 = 1;
	int64_t x496 = INT64_MIN;

    t117 = (x493*(x494==(x495/x496)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x497 = INT16_MAX;
	volatile int16_t x498 = -1;
	volatile uint64_t x500 = UINT64_MAX;
	int32_t t118 = 144567;

    t118 = (x497*(x498==(x499/x500)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x504 = 7623696930666526378LLU;
	int32_t t119 = 30;

    t119 = (x501*(x502==(x503/x504)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = 329847676;
	static int64_t x507 = -293802920936LL;
	uint32_t x508 = UINT32_MAX;
	int32_t t120 = 5635665;

    t120 = (x505*(x506==(x507/x508)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x509 = UINT16_MAX;
	uint16_t x510 = 15295U;
	int8_t x512 = 1;

    t121 = (x509*(x510==(x511/x512)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x513 = UINT32_MAX;
	volatile int16_t x514 = -6;
	uint16_t x515 = 29U;
	uint8_t x516 = 1U;
	static uint32_t t122 = 821451517U;

    t122 = (x513*(x514==(x515/x516)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x517 = 2LLU;
	volatile int64_t x518 = INT64_MIN;
	volatile uint32_t x519 = UINT32_MAX;
	int32_t x520 = -1;
	volatile uint64_t t123 = 45649736009752LLU;

    t123 = (x517*(x518==(x519/x520)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = INT64_MAX;
	uint64_t x523 = UINT64_MAX;
	static uint64_t x524 = UINT64_MAX;

    t124 = (x521*(x522==(x523/x524)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = INT32_MIN;
	static volatile int8_t x526 = INT8_MAX;
	static int32_t x528 = INT32_MIN;
	volatile int32_t t125 = 1;

    t125 = (x525*(x526==(x527/x528)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x530 = 5612U;
	int8_t x531 = -55;
	uint16_t x532 = UINT16_MAX;
	int32_t t126 = -3187680;

    t126 = (x529*(x530==(x531/x532)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t127 = 4133;

    t127 = (x533*(x534==(x535/x536)));

    if (t127 != -624) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = -94618204028LL;
	static volatile int32_t x538 = -1;
	volatile int16_t x539 = -3;
	uint64_t x540 = 115906713744647LLU;
	volatile int64_t t128 = -20619LL;

    t128 = (x537*(x538==(x539/x540)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x541 = 1677368943U;
	volatile int8_t x543 = INT8_MIN;
	uint16_t x544 = 2U;

    t129 = (x541*(x542==(x543/x544)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x545 = 7437128U;
	static int8_t x546 = -29;
	int8_t x547 = INT8_MIN;
	uint64_t x548 = 38LLU;
	static volatile uint32_t t130 = 1172U;

    t130 = (x545*(x546==(x547/x548)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x551 = -29326;
	int32_t x552 = INT32_MIN;
	volatile int32_t t131 = -4869;

    t131 = (x549*(x550==(x551/x552)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x556 = 3;
	int32_t t132 = -2095856;

    t132 = (x553*(x554==(x555/x556)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint64_t x558 = 170LLU;
	volatile uint16_t x559 = UINT16_MAX;
	int64_t x560 = INT64_MAX;
	static int32_t t133 = 887119;

    t133 = (x557*(x558==(x559/x560)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x562 = UINT64_MAX;
	int32_t x563 = INT32_MAX;
	int32_t x564 = INT32_MIN;
	int32_t t134 = 0;

    t134 = (x561*(x562==(x563/x564)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x565 = UINT32_MAX;
	static int32_t x567 = -1;
	uint16_t x568 = UINT16_MAX;

    t135 = (x565*(x566==(x567/x568)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = INT32_MIN;
	static uint8_t x570 = 47U;
	int32_t x571 = INT32_MIN;
	static int64_t x572 = 10397117LL;
	volatile int32_t t136 = 3744;

    t136 = (x569*(x570==(x571/x572)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = -1LL;
	int64_t x574 = INT64_MAX;
	int32_t x575 = -1;
	static volatile int64_t t137 = 20647480193LL;

    t137 = (x573*(x574==(x575/x576)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x578 = 13;
	uint64_t x579 = 71550600813LLU;
	uint16_t x580 = 7636U;
	int32_t t138 = 267866987;

    t138 = (x577*(x578==(x579/x580)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x581 = INT16_MIN;
	uint8_t x582 = 7U;
	volatile uint8_t x583 = 9U;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t139 = -1764941;

    t139 = (x581*(x582==(x583/x584)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = 1699345;
	int32_t x586 = -219221;
	volatile int32_t x587 = 8;
	static uint32_t x588 = UINT32_MAX;
	volatile int32_t t140 = -3;

    t140 = (x585*(x586==(x587/x588)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x589 = INT32_MIN;
	volatile int64_t x590 = -1LL;
	int64_t x592 = 45958LL;
	volatile int32_t t141 = -986;

    t141 = (x589*(x590==(x591/x592)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x593 = INT8_MIN;
	static int64_t x594 = INT64_MAX;
	volatile uint64_t x595 = 16152239452LLU;
	static volatile int32_t t142 = -471592247;

    t142 = (x593*(x594==(x595/x596)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x597 = -24;
	int8_t x598 = -1;
	uint64_t x599 = UINT64_MAX;
	uint32_t x600 = 3U;
	int32_t t143 = 276;

    t143 = (x597*(x598==(x599/x600)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x601 = 43971795742096330LLU;
	static int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;

    t144 = (x601*(x602==(x603/x604)));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x605 = 15;
	static volatile int64_t x606 = INT64_MIN;
	uint64_t x607 = 1924LLU;
	static volatile int32_t t145 = -42;

    t145 = (x605*(x606==(x607/x608)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x612 = 26221637LLU;
	volatile uint64_t t146 = 15018037957LLU;

    t146 = (x609*(x610==(x611/x612)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x613 = INT64_MAX;
	uint16_t x614 = 836U;
	static uint32_t x616 = UINT32_MAX;
	volatile int64_t t147 = -88881LL;

    t147 = (x613*(x614==(x615/x616)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x617 = UINT64_MAX;
	static int64_t x618 = INT64_MIN;
	int32_t x619 = INT32_MAX;
	volatile uint64_t t148 = 2LLU;

    t148 = (x617*(x618==(x619/x620)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x625 = 1260;
	uint8_t x626 = 59U;
	int32_t x627 = INT32_MIN;
	uint16_t x628 = 13666U;
	int32_t t149 = 230;

    t149 = (x625*(x626==(x627/x628)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x629 = 3794;
	int16_t x630 = 1820;
	uint64_t x631 = 10105LLU;
	int8_t x632 = INT8_MIN;
	volatile int32_t t150 = 649358697;

    t150 = (x629*(x630==(x631/x632)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x633 = 2;
	volatile int64_t x634 = INT64_MAX;
	volatile uint8_t x635 = 1U;
	uint32_t x636 = 42062962U;
	int32_t t151 = -2;

    t151 = (x633*(x634==(x635/x636)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x637 = UINT32_MAX;
	int16_t x638 = -1;
	int64_t x639 = INT64_MIN;
	volatile uint8_t x640 = 1U;
	volatile uint32_t t152 = 27667U;

    t152 = (x637*(x638==(x639/x640)));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x641 = 247763U;
	uint32_t x642 = UINT32_MAX;
	int32_t x643 = 34231547;
	static int64_t x644 = INT64_MAX;
	volatile uint32_t t153 = 940217U;

    t153 = (x641*(x642==(x643/x644)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x645 = 787;
	uint16_t x646 = 214U;
	volatile int64_t x647 = 93LL;
	int16_t x648 = INT16_MIN;
	int32_t t154 = 55;

    t154 = (x645*(x646==(x647/x648)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x649 = INT8_MIN;
	uint32_t x650 = UINT32_MAX;
	int32_t x651 = 41824397;
	int16_t x652 = INT16_MIN;
	volatile int32_t t155 = -936534;

    t155 = (x649*(x650==(x651/x652)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = -217;
	uint8_t x654 = 75U;
	static int8_t x655 = INT8_MAX;
	static int32_t x656 = -1;
	volatile int32_t t156 = 0;

    t156 = (x653*(x654==(x655/x656)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x657 = INT16_MIN;
	uint16_t x658 = 46U;
	static int32_t t157 = 3928;

    t157 = (x657*(x658==(x659/x660)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x662 = 32492794U;
	volatile uint8_t x663 = 6U;
	int16_t x664 = -1;

    t158 = (x661*(x662==(x663/x664)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x665 = 90LLU;
	uint64_t x666 = 29847233675LLU;
	volatile int16_t x667 = -1;
	static uint64_t t159 = 24LLU;

    t159 = (x665*(x666==(x667/x668)));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x669 = INT8_MIN;
	uint8_t x670 = UINT8_MAX;
	volatile int32_t x671 = INT32_MIN;
	static uint8_t x672 = UINT8_MAX;
	volatile int32_t t160 = 491821752;

    t160 = (x669*(x670==(x671/x672)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x674 = 1LL;
	uint8_t x675 = UINT8_MAX;
	uint8_t x676 = UINT8_MAX;
	int64_t t161 = INT64_MAX;

    t161 = (x673*(x674==(x675/x676)));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x677 = UINT32_MAX;
	static int32_t x678 = INT32_MIN;
	uint64_t x679 = UINT64_MAX;
	int8_t x680 = INT8_MIN;
	static uint32_t t162 = 809U;

    t162 = (x677*(x678==(x679/x680)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = INT64_MIN;
	volatile int16_t x682 = INT16_MIN;
	int16_t x683 = INT16_MIN;
	volatile int8_t x684 = 1;
	int64_t t163 = INT64_MIN;

    t163 = (x681*(x682==(x683/x684)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x686 = INT8_MAX;
	static uint32_t x687 = 7896382U;
	static int64_t x688 = INT64_MIN;
	volatile int64_t t164 = 7411867LL;

    t164 = (x685*(x686==(x687/x688)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x689 = INT32_MAX;
	int64_t x690 = -1LL;
	volatile int16_t x691 = INT16_MIN;
	int16_t x692 = INT16_MIN;
	int32_t t165 = 25809;

    t165 = (x689*(x690==(x691/x692)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x693 = INT8_MIN;
	static volatile int64_t x694 = INT64_MIN;
	uint16_t x696 = UINT16_MAX;

    t166 = (x693*(x694==(x695/x696)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x697 = -438;
	static volatile int8_t x698 = INT8_MIN;
	int8_t x699 = INT8_MIN;
	uint64_t x700 = UINT64_MAX;
	static volatile int32_t t167 = 1;

    t167 = (x697*(x698==(x699/x700)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = INT8_MAX;
	int8_t x702 = INT8_MIN;
	int32_t x703 = -1;
	volatile uint64_t x704 = UINT64_MAX;
	int32_t t168 = -21;

    t168 = (x701*(x702==(x703/x704)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x705 = UINT32_MAX;
	int8_t x706 = INT8_MAX;
	int32_t x708 = -1;

    t169 = (x705*(x706==(x707/x708)));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x713 = 398140611110LLU;
	volatile int64_t x714 = -1LL;
	int16_t x715 = INT16_MAX;
	int16_t x716 = -1;

    t170 = (x713*(x714==(x715/x716)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x718 = INT16_MAX;
	uint64_t x719 = 3LLU;
	int64_t x720 = -592557LL;

    t171 = (x717*(x718==(x719/x720)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x722 = -120;
	static volatile uint64_t x723 = 4589778669LLU;
	int64_t x724 = -47665938298872725LL;
	volatile uint32_t t172 = 3U;

    t172 = (x721*(x722==(x723/x724)));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x725 = INT8_MAX;
	int8_t x727 = INT8_MIN;
	int16_t x728 = -1;

    t173 = (x725*(x726==(x727/x728)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x729 = 1151638LLU;
	int32_t x730 = INT32_MAX;
	int64_t x732 = INT64_MIN;
	volatile uint64_t t174 = 48245216LLU;

    t174 = (x729*(x730==(x731/x732)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x733 = 12;
	volatile int64_t x734 = INT64_MIN;
	static uint8_t x735 = 101U;
	int32_t t175 = -135;

    t175 = (x733*(x734==(x735/x736)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x737 = -1261072LL;
	uint64_t x738 = UINT64_MAX;
	uint16_t x739 = UINT16_MAX;
	int64_t x740 = INT64_MIN;
	int64_t t176 = -12011LL;

    t176 = (x737*(x738==(x739/x740)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x741 = -3;
	volatile int8_t x742 = INT8_MAX;
	int64_t x743 = -1LL;
	uint32_t x744 = 101U;
	volatile int32_t t177 = 59546078;

    t177 = (x741*(x742==(x743/x744)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x745 = -1;
	int32_t x747 = 15;
	uint32_t x748 = 17001U;

    t178 = (x745*(x746==(x747/x748)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x750 = UINT16_MAX;
	static uint8_t x752 = UINT8_MAX;
	int32_t t179 = 13252927;

    t179 = (x749*(x750==(x751/x752)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x753 = UINT16_MAX;
	int16_t x754 = 102;
	int32_t x755 = -1;
	volatile int64_t x756 = INT64_MIN;

    t180 = (x753*(x754==(x755/x756)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x757 = 0U;
	static uint16_t x758 = UINT16_MAX;
	volatile int32_t x759 = -6717;
	int32_t x760 = INT32_MAX;

    t181 = (x757*(x758==(x759/x760)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x761 = -3193757421386484LL;
	volatile int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MIN;
	volatile int64_t t182 = -3132845054LL;

    t182 = (x761*(x762==(x763/x764)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x766 = -1;
	int64_t x768 = INT64_MIN;

    t183 = (x765*(x766==(x767/x768)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x769 = 721562206088LL;
	uint16_t x770 = 0U;
	volatile int32_t x771 = INT32_MIN;
	volatile int64_t t184 = -1753066890472LL;

    t184 = (x769*(x770==(x771/x772)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x774 = INT32_MIN;
	volatile int64_t x775 = 2056549050LL;
	int32_t t185 = -910;

    t185 = (x773*(x774==(x775/x776)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x777 = 2LLU;
	int64_t x778 = -1LL;
	uint8_t x779 = 0U;
	int16_t x780 = INT16_MIN;
	uint64_t t186 = 1029092868379244933LLU;

    t186 = (x777*(x778==(x779/x780)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	volatile uint32_t x782 = UINT32_MAX;
	volatile int32_t x784 = 523404603;
	int32_t t187 = -536704864;

    t187 = (x781*(x782==(x783/x784)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x786 = INT32_MIN;
	static int8_t x787 = INT8_MIN;
	int16_t x788 = INT16_MIN;

    t188 = (x785*(x786==(x787/x788)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x789 = 15089;
	static int16_t x790 = INT16_MIN;
	volatile int8_t x791 = INT8_MIN;
	int8_t x792 = INT8_MIN;
	int32_t t189 = 197;

    t189 = (x789*(x790==(x791/x792)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x793 = 242146474U;
	static int16_t x794 = 2;
	int64_t x796 = INT64_MAX;

    t190 = (x793*(x794==(x795/x796)));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x797 = 26843;
	uint8_t x798 = UINT8_MAX;
	uint8_t x799 = 15U;
	volatile uint64_t x800 = 165086502203LLU;
	static int32_t t191 = -28739021;

    t191 = (x797*(x798==(x799/x800)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x801 = INT64_MAX;
	int32_t x802 = INT32_MAX;
	int32_t x803 = INT32_MIN;
	uint64_t x804 = 251533LLU;
	int64_t t192 = -14LL;

    t192 = (x801*(x802==(x803/x804)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x805 = INT32_MIN;
	int8_t x807 = INT8_MIN;
	int16_t x808 = -6;
	int32_t t193 = 986;

    t193 = (x805*(x806==(x807/x808)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x809 = 42151038437254LLU;
	int64_t x810 = -51856322751LL;
	uint64_t x811 = UINT64_MAX;
	uint64_t t194 = 14924782743367LLU;

    t194 = (x809*(x810==(x811/x812)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x814 = INT64_MIN;
	int16_t x816 = 3;
	static int32_t t195 = -66304527;

    t195 = (x813*(x814==(x815/x816)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x817 = -1LL;
	int8_t x818 = INT8_MAX;
	volatile int32_t x819 = -29;
	volatile int32_t x820 = 1048;

    t196 = (x817*(x818==(x819/x820)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x821 = 23;
	volatile uint8_t x822 = UINT8_MAX;
	static volatile int64_t x824 = INT64_MIN;
	volatile int32_t t197 = 44994050;

    t197 = (x821*(x822==(x823/x824)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x825 = -1LL;
	int64_t x826 = INT64_MIN;
	uint64_t x827 = 6045667LLU;
	volatile uint64_t x828 = UINT64_MAX;
	int64_t t198 = 303322180101338LL;

    t198 = (x825*(x826==(x827/x828)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x830 = INT32_MAX;
	volatile uint64_t x831 = 342415083200050LLU;
	volatile uint32_t x832 = 128U;
	volatile int64_t t199 = 573020LL;

    t199 = (x829*(x830==(x831/x832)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

