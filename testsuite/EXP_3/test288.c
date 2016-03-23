
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

static volatile uint32_t x17 = UINT32_MAX;
volatile uint16_t x27 = 258U;
volatile uint8_t x52 = 0U;
static uint64_t x53 = UINT64_MAX;
int32_t x57 = INT32_MAX;
static volatile int32_t t10 = 1;
volatile int64_t x68 = -1LL;
uint32_t x73 = UINT32_MAX;
int8_t x77 = 6;
int64_t x87 = 33162314758631190LL;
static int32_t x88 = INT32_MIN;
volatile int32_t t16 = -226;
static int16_t x90 = INT16_MAX;
int32_t x96 = -43611;
uint32_t x118 = 14U;
static uint32_t x126 = 6274U;
uint32_t x130 = UINT32_MAX;
static volatile int32_t x133 = 11883909;
int32_t x134 = INT32_MAX;
int64_t x136 = 3LL;
volatile int16_t x140 = INT16_MIN;
int32_t x141 = -1;
int8_t x143 = -2;
static volatile int32_t t28 = 2382;
int32_t t29 = 74177046;
int64_t x156 = -102181735707251LL;
volatile int32_t t30 = -7882753;
volatile uint16_t x157 = 4U;
int8_t x159 = INT8_MAX;
uint16_t x165 = UINT16_MAX;
int8_t x168 = 0;
volatile int32_t t33 = 12;
uint16_t x181 = 8091U;
volatile int32_t t36 = -222;
uint8_t x187 = UINT8_MAX;
volatile int32_t t37 = 1024600;
int64_t x189 = 726091296598720520LL;
uint8_t x199 = UINT8_MAX;
int16_t x203 = INT16_MIN;
int64_t x204 = 2730005751645570LL;
uint64_t x205 = 1LLU;
int32_t x208 = INT32_MIN;
int64_t x210 = 831279186492141LL;
uint32_t x216 = UINT32_MAX;
static volatile uint64_t x220 = UINT64_MAX;
int8_t x227 = -1;
uint32_t x235 = 672U;
int32_t t49 = -1;
int8_t x245 = -18;
static int8_t x258 = INT8_MAX;
static volatile int32_t t54 = 30873;
int16_t x265 = INT16_MAX;
int32_t t57 = -3182;
int64_t x278 = INT64_MAX;
static volatile int16_t x281 = INT16_MAX;
uint64_t x285 = 12LLU;
int32_t x286 = 219900;
uint32_t x290 = 1142U;
int32_t t62 = -2;
static int32_t t63 = -8105681;
int32_t x305 = INT32_MAX;
int32_t x306 = -176880147;
static int32_t t67 = 22822;
int32_t x328 = -1;
int32_t t69 = -465155;
int32_t x331 = -1;
volatile int32_t t71 = -1385214;
int64_t x349 = INT64_MIN;
int64_t x354 = INT64_MAX;
static volatile uint32_t x355 = 24U;
int32_t x356 = INT32_MIN;
int32_t t74 = 1484841;
uint8_t x360 = 5U;
static int32_t t75 = -29;
volatile uint16_t x361 = 213U;
int32_t x369 = 81256;
int32_t x371 = -1;
int32_t x372 = -5587032;
int16_t x385 = INT16_MIN;
uint8_t x386 = 19U;
uint64_t x400 = 464191383814106270LLU;
static volatile int64_t x402 = 1LL;
int16_t x404 = -1;
static int32_t t84 = 1;
volatile int32_t x409 = INT32_MIN;
static int64_t x410 = -1LL;
static int16_t x413 = 1;
int8_t x419 = INT8_MIN;
int16_t x420 = 114;
static int32_t x421 = INT32_MIN;
int16_t x426 = -1;
int16_t x431 = INT16_MAX;
volatile int32_t t91 = 38021192;
uint8_t x450 = 3U;
uint16_t x465 = 2U;
uint64_t x468 = 717931LLU;
int8_t x471 = -1;
uint16_t x473 = 1084U;
uint32_t x486 = UINT32_MAX;
volatile int32_t t103 = 87144226;
int8_t x499 = INT8_MIN;
volatile uint64_t x500 = 13LLU;
static uint32_t x501 = UINT32_MAX;
static int8_t x504 = -36;
static volatile int8_t x505 = -1;
uint32_t x522 = 1077858078U;
int16_t x530 = INT16_MAX;
static volatile int8_t x535 = INT8_MIN;
int16_t x538 = INT16_MAX;
uint8_t x545 = 5U;
uint64_t x551 = UINT64_MAX;
static volatile int16_t x554 = -6937;
uint32_t x555 = 125374904U;
static uint32_t x558 = 3U;
int64_t x561 = INT64_MIN;
volatile int32_t t118 = 160815778;
static int8_t x569 = INT8_MIN;
static volatile int32_t t120 = -478576637;
uint16_t x581 = 73U;
int8_t x583 = INT8_MAX;
volatile int32_t x585 = 397145;
static uint16_t x588 = 4633U;
static volatile int32_t t123 = 2153265;
static uint32_t x598 = 55892U;
int8_t x599 = -2;
int64_t x601 = INT64_MIN;
static int32_t x603 = INT32_MIN;
static volatile int8_t x604 = INT8_MIN;
int32_t t127 = 25;
uint64_t x610 = 364110427LLU;
int64_t x617 = 123996023012873LL;
int32_t x622 = 239;
int16_t x623 = INT16_MIN;
static volatile int32_t t133 = -78;
static int64_t x637 = INT64_MIN;
volatile int32_t t134 = 3494;
volatile int16_t x647 = INT16_MIN;
volatile int16_t x649 = 1;
int16_t x650 = -1;
int16_t x658 = INT16_MAX;
volatile int32_t t139 = -13908;
int16_t x667 = 0;
volatile uint32_t x670 = 1U;
int8_t x671 = 1;
static int64_t x678 = INT64_MIN;
int32_t t144 = -130134977;
int32_t x682 = INT32_MIN;
int64_t x683 = -16249976728685053LL;
int64_t x687 = INT64_MIN;
int8_t x689 = 30;
int32_t x694 = INT32_MIN;
uint16_t x695 = 3360U;
int8_t x697 = INT8_MAX;
volatile uint8_t x699 = 5U;
volatile int32_t x702 = INT32_MIN;
int8_t x720 = INT8_MAX;
int32_t x721 = INT32_MIN;
volatile int8_t x722 = INT8_MAX;
int32_t x730 = INT32_MIN;
uint8_t x735 = UINT8_MAX;
int16_t x741 = INT16_MAX;
uint64_t x743 = 61747393221906LLU;
int8_t x744 = INT8_MIN;
int64_t x746 = 32631476623020253LL;
static int64_t x747 = 62329LL;
int64_t x757 = -4226900540037LL;
uint32_t x760 = UINT32_MAX;
volatile int16_t x763 = INT16_MAX;
int32_t t164 = -207;
int32_t x770 = 360193;
static int8_t x772 = INT8_MAX;
int8_t x774 = -1;
int32_t t167 = -515;
static volatile int8_t x779 = INT8_MIN;
int16_t x782 = INT16_MIN;
int64_t x785 = INT64_MIN;
int64_t x802 = -1LL;
volatile int64_t x806 = -3LL;
uint64_t x807 = UINT64_MAX;
int8_t x812 = INT8_MIN;
static volatile int8_t x823 = -1;
int64_t x824 = INT64_MAX;
int32_t x832 = INT32_MIN;
volatile uint32_t x839 = UINT32_MAX;
int8_t x844 = INT8_MIN;
int32_t t179 = 31783;
uint8_t x861 = 9U;
static uint64_t x867 = UINT64_MAX;
uint32_t x885 = 79U;
uint32_t x887 = 124896U;
int32_t t188 = -35911059;
int8_t x893 = -1;
int32_t t190 = -725138;
int64_t x902 = INT64_MAX;
int32_t t192 = 1;
volatile int64_t x916 = INT64_MAX;
static int16_t x919 = -1;
uint32_t x921 = 116147024U;
volatile int64_t x922 = INT64_MIN;
volatile int64_t x923 = INT64_MAX;


void f0(void) {
    	static uint64_t x1 = 137LLU;
	volatile uint8_t x2 = UINT8_MAX;
	int64_t x3 = -4LL;
	volatile uint32_t x4 = 3939426U;
	volatile int32_t t0 = -4;

    t0 = ((x1!=x2)==(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MAX;
	volatile int32_t t1 = -15123;

    t1 = ((x13!=x14)==(x15-x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x18 = UINT16_MAX;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 5861U;
	volatile int32_t t2 = -47;

    t2 = ((x17!=x18)==(x19-x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = 19773976715727295LL;
	uint64_t x22 = 1027904803LLU;
	static int16_t x23 = 0;
	int32_t x24 = 413847962;
	volatile int32_t t3 = 6;

    t3 = ((x21!=x22)==(x23-x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	static int64_t x26 = INT64_MIN;
	int64_t x28 = -1LL;
	int32_t t4 = -183866531;

    t4 = ((x25!=x26)==(x27-x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = 0;
	static int64_t x35 = INT64_MAX;
	uint64_t x36 = 1035557532LLU;
	volatile int32_t t5 = 68202;

    t5 = ((x33!=x34)==(x35-x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	uint16_t x38 = UINT16_MAX;
	static int32_t x39 = -62278;
	volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t6 = -832;

    t6 = ((x37!=x38)==(x39-x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x45 = INT8_MIN;
	int32_t x46 = -14211;
	volatile uint64_t x47 = 103444017824945LLU;
	int8_t x48 = -1;
	int32_t t7 = -217;

    t7 = ((x45!=x46)==(x47-x48));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x49 = 6719845LL;
	uint16_t x50 = 8U;
	uint16_t x51 = UINT16_MAX;
	int32_t t8 = -61025023;

    t8 = ((x49!=x50)==(x51-x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MIN;
	int16_t x56 = 58;
	int32_t t9 = 0;

    t9 = ((x53!=x54)==(x55-x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	volatile int8_t x60 = 12;

    t10 = ((x57!=x58)==(x59-x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = -1LL;
	int32_t x62 = 0;
	volatile uint8_t x63 = 32U;
	static uint32_t x64 = 1705U;
	volatile int32_t t11 = 821675;

    t11 = ((x61!=x62)==(x63-x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = 1;
	int32_t x66 = -1;
	static uint64_t x67 = UINT64_MAX;
	int32_t t12 = 38330;

    t12 = ((x65!=x66)==(x67-x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = -30;
	int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	volatile int32_t x72 = INT32_MIN;
	int32_t t13 = 48;

    t13 = ((x69!=x70)==(x71-x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x74 = INT32_MIN;
	uint64_t x75 = UINT64_MAX;
	volatile int16_t x76 = INT16_MAX;
	int32_t t14 = -1;

    t14 = ((x73!=x74)==(x75-x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x78 = INT64_MIN;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = -1;
	volatile int32_t t15 = -379;

    t15 = ((x77!=x78)==(x79-x80));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MAX;

    t16 = ((x85!=x86)==(x87-x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = INT32_MAX;
	volatile int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	int32_t t17 = 10892;

    t17 = ((x89!=x90)==(x91-x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = -1035970175930038LL;
	int16_t x95 = 3168;
	volatile int32_t t18 = 2;

    t18 = ((x93!=x94)==(x95-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = INT16_MIN;
	static int16_t x98 = -44;
	volatile uint32_t x99 = 0U;
	int32_t x100 = INT32_MIN;
	static int32_t t19 = -426821;

    t19 = ((x97!=x98)==(x99-x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	volatile int32_t t20 = 132727947;

    t20 = ((x109!=x110)==(x111-x112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x113 = INT32_MAX;
	int8_t x114 = INT8_MIN;
	uint8_t x115 = UINT8_MAX;
	static int16_t x116 = -14795;
	volatile int32_t t21 = -24247;

    t21 = ((x113!=x114)==(x115-x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x117 = 3609574278887782LLU;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -1;
	volatile int32_t t22 = -586;

    t22 = ((x117!=x118)==(x119-x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x121 = INT8_MAX;
	uint32_t x122 = 1921649362U;
	int64_t x123 = -7193LL;
	int8_t x124 = INT8_MAX;
	volatile int32_t t23 = 1;

    t23 = ((x121!=x122)==(x123-x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x125 = UINT64_MAX;
	uint16_t x127 = 1220U;
	volatile int8_t x128 = INT8_MAX;
	int32_t t24 = -43;

    t24 = ((x125!=x126)==(x127-x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x129 = 68168365;
	int16_t x131 = -1;
	int8_t x132 = -1;
	volatile int32_t t25 = 243379029;

    t25 = ((x129!=x130)==(x131-x132));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x135 = INT64_MAX;
	int32_t t26 = 4149;

    t26 = ((x133!=x134)==(x135-x136));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x137 = 791719057U;
	int16_t x138 = 926;
	volatile uint32_t x139 = 26426588U;
	int32_t t27 = 3322873;

    t27 = ((x137!=x138)==(x139-x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x142 = INT32_MAX;
	int64_t x144 = INT64_MIN;

    t28 = ((x141!=x142)==(x143-x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x145 = 7559516883LLU;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = -11LL;
	static int8_t x148 = INT8_MAX;

    t29 = ((x145!=x146)==(x147-x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 458882U;

    t30 = ((x153!=x154)==(x155-x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x158 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t31 = 71934;

    t31 = ((x157!=x158)==(x159-x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	static volatile int8_t x163 = INT8_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t32 = -3;

    t32 = ((x161!=x162)==(x163-x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MAX;

    t33 = ((x165!=x166)==(x167-x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x169 = INT64_MIN;
	volatile uint16_t x170 = 0U;
	uint16_t x171 = 2679U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t34 = -88558;

    t34 = ((x169!=x170)==(x171-x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = 6143010812LLU;
	volatile int32_t t35 = 601;

    t35 = ((x177!=x178)==(x179-x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x182 = 6787904407587672367LLU;
	uint32_t x183 = 18U;
	static int16_t x184 = 1;

    t36 = ((x181!=x182)==(x183-x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MIN;
	volatile int8_t x188 = 1;

    t37 = ((x185!=x186)==(x187-x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x190 = 132045303370589290LL;
	static int8_t x191 = INT8_MAX;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t38 = 31517;

    t38 = ((x189!=x190)==(x191-x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x197 = 0U;
	int16_t x198 = INT16_MIN;
	uint8_t x200 = 1U;
	volatile int32_t t39 = -10668409;

    t39 = ((x197!=x198)==(x199-x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MAX;
	int32_t t40 = -159898;

    t40 = ((x201!=x202)==(x203-x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x206 = -2465080;
	uint64_t x207 = 3907181140LLU;
	int32_t t41 = -49;

    t41 = ((x205!=x206)==(x207-x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x209 = UINT64_MAX;
	int32_t x211 = INT32_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t42 = -379;

    t42 = ((x209!=x210)==(x211-x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x213 = INT16_MAX;
	static int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	volatile int32_t t43 = 14988084;

    t43 = ((x213!=x214)==(x215-x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x217 = -15743;
	static int16_t x218 = INT16_MIN;
	static uint32_t x219 = 18U;
	static int32_t t44 = 88460211;

    t44 = ((x217!=x218)==(x219-x220));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x221 = 54081U;
	uint8_t x222 = UINT8_MAX;
	static uint16_t x223 = 481U;
	uint8_t x224 = 60U;
	static int32_t t45 = -110424;

    t45 = ((x221!=x222)==(x223-x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x225 = INT32_MIN;
	static int8_t x226 = INT8_MAX;
	int32_t x228 = INT32_MAX;
	static int32_t t46 = 6881;

    t46 = ((x225!=x226)==(x227-x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = 4;
	uint16_t x230 = 995U;
	uint32_t x231 = 1U;
	uint64_t x232 = 8101694835LLU;
	static int32_t t47 = 340585;

    t47 = ((x229!=x230)==(x231-x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x233 = INT32_MIN;
	int64_t x234 = 440734751299564LL;
	int32_t x236 = INT32_MIN;
	int32_t t48 = -186423;

    t48 = ((x233!=x234)==(x235-x236));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x237 = INT8_MIN;
	int64_t x238 = 2409289LL;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = -1LL;

    t49 = ((x237!=x238)==(x239-x240));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x241 = 2U;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = -1LL;
	int8_t x244 = INT8_MAX;
	int32_t t50 = -13452;

    t50 = ((x241!=x242)==(x243-x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x246 = UINT32_MAX;
	uint64_t x247 = 1573527453505927LLU;
	uint32_t x248 = 1408U;
	volatile int32_t t51 = 450;

    t51 = ((x245!=x246)==(x247-x248));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x249 = INT64_MIN;
	volatile int8_t x250 = INT8_MAX;
	int8_t x251 = 5;
	int16_t x252 = -1;
	int32_t t52 = -1;

    t52 = ((x249!=x250)==(x251-x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x253 = -34523175183590LL;
	int16_t x254 = -1;
	static uint32_t x255 = UINT32_MAX;
	uint64_t x256 = UINT64_MAX;
	static volatile int32_t t53 = 3382519;

    t53 = ((x253!=x254)==(x255-x256));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x257 = 0;
	uint16_t x259 = UINT16_MAX;
	volatile uint32_t x260 = UINT32_MAX;

    t54 = ((x257!=x258)==(x259-x260));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x261 = INT8_MIN;
	static int32_t x262 = -1;
	int16_t x263 = -85;
	int16_t x264 = INT16_MIN;
	volatile int32_t t55 = 1000006;

    t55 = ((x261!=x262)==(x263-x264));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x266 = INT32_MIN;
	volatile int64_t x267 = -14606243222670LL;
	int16_t x268 = INT16_MIN;
	volatile int32_t t56 = -22494;

    t56 = ((x265!=x266)==(x267-x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x269 = 7211089475LLU;
	static uint32_t x270 = UINT32_MAX;
	volatile int16_t x271 = -12039;
	static volatile uint64_t x272 = 559417162241677697LLU;

    t57 = ((x269!=x270)==(x271-x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x273 = -1;
	static volatile uint32_t x274 = 820224245U;
	volatile uint64_t x275 = 4884547402155776167LLU;
	volatile uint16_t x276 = UINT16_MAX;
	volatile int32_t t58 = 245866893;

    t58 = ((x273!=x274)==(x275-x276));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x277 = -7987356;
	int16_t x279 = -15421;
	int64_t x280 = INT64_MIN;
	volatile int32_t t59 = 223641;

    t59 = ((x277!=x278)==(x279-x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x282 = 13303U;
	uint8_t x283 = 1U;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t60 = -4174569;

    t60 = ((x281!=x282)==(x283-x284));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x287 = 44LLU;
	int64_t x288 = INT64_MIN;
	int32_t t61 = -18;

    t61 = ((x285!=x286)==(x287-x288));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x289 = 8066685804LL;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MIN;

    t62 = ((x289!=x290)==(x291-x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x297 = UINT64_MAX;
	static volatile uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 361084451750LLU;
	int16_t x300 = 18;

    t63 = ((x297!=x298)==(x299-x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x301 = 90162036LLU;
	int64_t x302 = -1LL;
	volatile int16_t x303 = 235;
	int8_t x304 = INT8_MAX;
	volatile int32_t t64 = -25708;

    t64 = ((x301!=x302)==(x303-x304));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x307 = 6U;
	uint64_t x308 = 2153980334280099LLU;
	static volatile int32_t t65 = -393409;

    t65 = ((x305!=x306)==(x307-x308));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x313 = 2;
	volatile uint32_t x314 = 21U;
	int16_t x315 = 1;
	uint64_t x316 = UINT64_MAX;
	static int32_t t66 = 11402505;

    t66 = ((x313!=x314)==(x315-x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x317 = 7U;
	volatile uint8_t x318 = 51U;
	int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MAX;

    t67 = ((x317!=x318)==(x319-x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x321 = INT32_MAX;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 4526U;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t68 = -4;

    t68 = ((x321!=x322)==(x323-x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x325 = -7797;
	uint8_t x326 = 84U;
	uint16_t x327 = 1279U;

    t69 = ((x325!=x326)==(x327-x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x329 = -3;
	uint8_t x330 = 45U;
	static int16_t x332 = -1;
	volatile int32_t t70 = -1;

    t70 = ((x329!=x330)==(x331-x332));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x333 = -314LL;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;

    t71 = ((x333!=x334)==(x335-x336));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x341 = INT64_MIN;
	static int64_t x342 = INT64_MIN;
	volatile uint64_t x343 = 17355744LLU;
	uint64_t x344 = 624601616045706519LLU;
	static volatile int32_t t72 = 1023;

    t72 = ((x341!=x342)==(x343-x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x350 = 6956;
	int16_t x351 = INT16_MIN;
	int8_t x352 = -13;
	int32_t t73 = 1639223;

    t73 = ((x349!=x350)==(x351-x352));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x353 = -1;

    t74 = ((x353!=x354)==(x355-x356));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = -7;

    t75 = ((x357!=x358)==(x359-x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x362 = -1LL;
	uint16_t x363 = 251U;
	static volatile int16_t x364 = INT16_MAX;
	static volatile int32_t t76 = -477;

    t76 = ((x361!=x362)==(x363-x364));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x365 = 0U;
	int64_t x366 = INT64_MAX;
	int16_t x367 = 23;
	int8_t x368 = INT8_MIN;
	int32_t t77 = 38;

    t77 = ((x365!=x366)==(x367-x368));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x370 = UINT16_MAX;
	static volatile int32_t t78 = 1;

    t78 = ((x369!=x370)==(x371-x372));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x373 = 117U;
	static volatile uint32_t x374 = 878822U;
	static int16_t x375 = INT16_MIN;
	uint8_t x376 = 1U;
	int32_t t79 = 461566990;

    t79 = ((x373!=x374)==(x375-x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x377 = INT32_MIN;
	static int8_t x378 = INT8_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = -1075;
	volatile int32_t t80 = 1619628;

    t80 = ((x377!=x378)==(x379-x380));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x387 = 186220073U;
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t81 = 61;

    t81 = ((x385!=x386)==(x387-x388));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = INT16_MIN;
	volatile int32_t x394 = INT32_MAX;
	int8_t x395 = 0;
	int32_t x396 = -19484;
	volatile int32_t t82 = -2916;

    t82 = ((x393!=x394)==(x395-x396));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x397 = -1;
	static int32_t x398 = 889;
	int32_t x399 = 1;
	int32_t t83 = 1;

    t83 = ((x397!=x398)==(x399-x400));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x401 = 1U;
	static uint16_t x403 = 19003U;

    t84 = ((x401!=x402)==(x403-x404));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x411 = -54;
	int8_t x412 = -1;
	int32_t t85 = -4;

    t85 = ((x409!=x410)==(x411-x412));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x414 = -3932;
	int8_t x415 = INT8_MIN;
	int16_t x416 = -265;
	static int32_t t86 = -59172115;

    t86 = ((x413!=x414)==(x415-x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x417 = UINT32_MAX;
	int64_t x418 = -1LL;
	int32_t t87 = 1039785784;

    t87 = ((x417!=x418)==(x419-x420));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x422 = INT8_MAX;
	static int8_t x423 = INT8_MIN;
	static uint64_t x424 = 405870486840LLU;
	static volatile int32_t t88 = 105;

    t88 = ((x421!=x422)==(x423-x424));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x425 = INT8_MAX;
	uint64_t x427 = UINT64_MAX;
	int16_t x428 = -1;
	volatile int32_t t89 = 19;

    t89 = ((x425!=x426)==(x427-x428));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = 1613;
	static int8_t x430 = INT8_MIN;
	uint16_t x432 = UINT16_MAX;
	int32_t t90 = 31;

    t90 = ((x429!=x430)==(x431-x432));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x441 = UINT64_MAX;
	volatile uint64_t x442 = 3LLU;
	int32_t x443 = -418;
	int64_t x444 = -1LL;

    t91 = ((x441!=x442)==(x443-x444));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x445 = 0;
	static int32_t x446 = -7487;
	uint8_t x447 = 3U;
	uint64_t x448 = 80LLU;
	volatile int32_t t92 = -12602306;

    t92 = ((x445!=x446)==(x447-x448));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x449 = INT64_MIN;
	uint16_t x451 = 1U;
	int8_t x452 = INT8_MIN;
	int32_t t93 = 41796;

    t93 = ((x449!=x450)==(x451-x452));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x457 = 3;
	int8_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	int16_t x460 = 3;
	static int32_t t94 = 4;

    t94 = ((x457!=x458)==(x459-x460));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x461 = INT64_MAX;
	int16_t x462 = -129;
	uint16_t x463 = 2329U;
	int16_t x464 = -647;
	volatile int32_t t95 = 0;

    t95 = ((x461!=x462)==(x463-x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x466 = 9003537310992299179LLU;
	static int64_t x467 = INT64_MIN;
	int32_t t96 = -38107511;

    t96 = ((x465!=x466)==(x467-x468));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x469 = INT16_MIN;
	uint64_t x470 = 11217LLU;
	int32_t x472 = -1;
	static int32_t t97 = -4257;

    t97 = ((x469!=x470)==(x471-x472));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x474 = 36325323073LLU;
	int64_t x475 = -1LL;
	uint8_t x476 = 26U;
	int32_t t98 = 6846;

    t98 = ((x473!=x474)==(x475-x476));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x477 = -967;
	static int32_t x478 = INT32_MAX;
	static int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MIN;
	volatile int32_t t99 = -7414998;

    t99 = ((x477!=x478)==(x479-x480));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x481 = UINT64_MAX;
	int64_t x482 = INT64_MIN;
	int8_t x483 = INT8_MIN;
	static uint64_t x484 = 209847LLU;
	int32_t t100 = 282966826;

    t100 = ((x481!=x482)==(x483-x484));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x485 = 7803045143941052909LLU;
	int8_t x487 = -41;
	static int32_t x488 = -1;
	int32_t t101 = 2966425;

    t101 = ((x485!=x486)==(x487-x488));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x489 = INT32_MAX;
	static int32_t x490 = -116876322;
	int8_t x491 = 27;
	static volatile uint64_t x492 = 41624829LLU;
	volatile int32_t t102 = -5263485;

    t102 = ((x489!=x490)==(x491-x492));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x493 = 5;
	volatile int64_t x494 = 8202306LL;
	int8_t x495 = -1;
	uint8_t x496 = 7U;

    t103 = ((x493!=x494)==(x495-x496));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x497 = UINT16_MAX;
	volatile int16_t x498 = INT16_MAX;
	volatile int32_t t104 = -100890091;

    t104 = ((x497!=x498)==(x499-x500));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x502 = 11U;
	uint16_t x503 = 0U;
	static volatile int32_t t105 = 287994826;

    t105 = ((x501!=x502)==(x503-x504));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MAX;
	uint8_t x508 = UINT8_MAX;
	int32_t t106 = 263975681;

    t106 = ((x505!=x506)==(x507-x508));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x509 = INT8_MIN;
	int8_t x510 = INT8_MIN;
	int32_t x511 = 20887786;
	volatile int32_t x512 = -9446143;
	volatile int32_t t107 = -5247;

    t107 = ((x509!=x510)==(x511-x512));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x517 = 16736U;
	uint64_t x518 = 6481781429LLU;
	uint8_t x519 = 0U;
	int8_t x520 = 1;
	int32_t t108 = 97316;

    t108 = ((x517!=x518)==(x519-x520));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x521 = 1;
	int8_t x523 = INT8_MIN;
	static uint8_t x524 = UINT8_MAX;
	static volatile int32_t t109 = -7084;

    t109 = ((x521!=x522)==(x523-x524));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x529 = UINT32_MAX;
	uint8_t x531 = 1U;
	static uint32_t x532 = 22487495U;
	int32_t t110 = 2993102;

    t110 = ((x529!=x530)==(x531-x532));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x533 = -1;
	int32_t x534 = INT32_MAX;
	int8_t x536 = INT8_MIN;
	volatile int32_t t111 = 295900733;

    t111 = ((x533!=x534)==(x535-x536));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x537 = 175U;
	volatile int16_t x539 = -3;
	volatile int16_t x540 = -1;
	int32_t t112 = 1;

    t112 = ((x537!=x538)==(x539-x540));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x541 = -1;
	volatile int32_t x542 = 820525;
	uint16_t x543 = 1311U;
	static int16_t x544 = INT16_MIN;
	volatile int32_t t113 = 2570422;

    t113 = ((x541!=x542)==(x543-x544));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x546 = UINT8_MAX;
	int8_t x547 = INT8_MIN;
	static volatile int8_t x548 = -1;
	volatile int32_t t114 = -2332534;

    t114 = ((x545!=x546)==(x547-x548));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x549 = INT64_MIN;
	volatile int64_t x550 = INT64_MIN;
	uint64_t x552 = 6879713LLU;
	int32_t t115 = 1;

    t115 = ((x549!=x550)==(x551-x552));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x553 = INT8_MAX;
	volatile int64_t x556 = -1LL;
	volatile int32_t t116 = -720212;

    t116 = ((x553!=x554)==(x555-x556));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x557 = 1;
	static volatile int8_t x559 = INT8_MIN;
	static uint16_t x560 = 171U;
	volatile int32_t t117 = 27;

    t117 = ((x557!=x558)==(x559-x560));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x562 = -82;
	int32_t x563 = -360;
	uint16_t x564 = 570U;

    t118 = ((x561!=x562)==(x563-x564));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x570 = INT64_MIN;
	static volatile int32_t x571 = -1;
	int16_t x572 = -1;
	volatile int32_t t119 = -24907;

    t119 = ((x569!=x570)==(x571-x572));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x573 = 0;
	int32_t x574 = INT32_MIN;
	int16_t x575 = -1;
	uint32_t x576 = 262537U;

    t120 = ((x573!=x574)==(x575-x576));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x577 = INT32_MIN;
	volatile uint64_t x578 = 8153879505659289LLU;
	int32_t x579 = -46190293;
	int8_t x580 = -43;
	int32_t t121 = -12202469;

    t121 = ((x577!=x578)==(x579-x580));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x582 = -1LL;
	int8_t x584 = 0;
	int32_t t122 = 29102;

    t122 = ((x581!=x582)==(x583-x584));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x586 = INT16_MAX;
	static int8_t x587 = INT8_MAX;

    t123 = ((x585!=x586)==(x587-x588));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x589 = -28;
	int16_t x590 = -1;
	static int16_t x591 = INT16_MIN;
	int8_t x592 = INT8_MAX;
	static int32_t t124 = 11644;

    t124 = ((x589!=x590)==(x591-x592));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x593 = INT32_MIN;
	int64_t x594 = INT64_MIN;
	volatile int32_t x595 = INT32_MIN;
	static uint32_t x596 = 17784U;
	int32_t t125 = -4187442;

    t125 = ((x593!=x594)==(x595-x596));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	int64_t x600 = INT64_MIN;
	int32_t t126 = 26;

    t126 = ((x597!=x598)==(x599-x600));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x602 = 259;

    t127 = ((x601!=x602)==(x603-x604));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x609 = 7U;
	uint64_t x611 = 15549885101LLU;
	static uint8_t x612 = 32U;
	static volatile int32_t t128 = -4;

    t128 = ((x609!=x610)==(x611-x612));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x618 = 47291626960355629LLU;
	int8_t x619 = -1;
	volatile int8_t x620 = 7;
	volatile int32_t t129 = 32;

    t129 = ((x617!=x618)==(x619-x620));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x621 = -11;
	int16_t x624 = INT16_MIN;
	int32_t t130 = 3;

    t130 = ((x621!=x622)==(x623-x624));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x625 = 18223908LL;
	int32_t x626 = INT32_MIN;
	static int32_t x627 = INT32_MAX;
	int32_t x628 = INT32_MAX;
	int32_t t131 = -2;

    t131 = ((x625!=x626)==(x627-x628));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x629 = INT32_MIN;
	int16_t x630 = INT16_MAX;
	int16_t x631 = -1;
	int16_t x632 = INT16_MIN;
	int32_t t132 = -60267;

    t132 = ((x629!=x630)==(x631-x632));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x633 = UINT8_MAX;
	static uint32_t x634 = UINT32_MAX;
	uint16_t x635 = 6U;
	static volatile int16_t x636 = INT16_MIN;

    t133 = ((x633!=x634)==(x635-x636));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x638 = -1;
	int32_t x639 = INT32_MAX;
	static int64_t x640 = -518LL;

    t134 = ((x637!=x638)==(x639-x640));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x641 = 11957;
	static volatile int16_t x642 = INT16_MAX;
	int32_t x643 = -1;
	int64_t x644 = 252946LL;
	volatile int32_t t135 = 790807;

    t135 = ((x641!=x642)==(x643-x644));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x645 = 14U;
	volatile int16_t x646 = 235;
	uint32_t x648 = 35846213U;
	volatile int32_t t136 = 34119910;

    t136 = ((x645!=x646)==(x647-x648));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x651 = INT16_MIN;
	uint16_t x652 = 13071U;
	static int32_t t137 = 120497803;

    t137 = ((x649!=x650)==(x651-x652));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x653 = 110U;
	int32_t x654 = -2071;
	uint8_t x655 = 17U;
	int64_t x656 = 15LL;
	volatile int32_t t138 = -30911;

    t138 = ((x653!=x654)==(x655-x656));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	volatile int16_t x659 = -3526;
	uint16_t x660 = UINT16_MAX;

    t139 = ((x657!=x658)==(x659-x660));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x661 = UINT8_MAX;
	uint32_t x662 = 256U;
	volatile int16_t x663 = 1;
	volatile int32_t x664 = 1;
	int32_t t140 = -533069;

    t140 = ((x661!=x662)==(x663-x664));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x665 = INT16_MAX;
	uint32_t x666 = 148857714U;
	static int32_t x668 = INT32_MAX;
	volatile int32_t t141 = 3330;

    t141 = ((x665!=x666)==(x667-x668));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x669 = INT32_MIN;
	uint8_t x672 = 102U;
	volatile int32_t t142 = -1424;

    t142 = ((x669!=x670)==(x671-x672));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x673 = INT64_MIN;
	volatile int8_t x674 = INT8_MIN;
	int64_t x675 = -44983LL;
	int64_t x676 = -1LL;
	volatile int32_t t143 = -158579;

    t143 = ((x673!=x674)==(x675-x676));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x677 = INT16_MAX;
	uint32_t x679 = 3987606U;
	int64_t x680 = -1LL;

    t144 = ((x677!=x678)==(x679-x680));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x681 = 2U;
	uint16_t x684 = 1281U;
	int32_t t145 = -112182;

    t145 = ((x681!=x682)==(x683-x684));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x685 = -39204845275025731LL;
	static int64_t x686 = -1046548539444LL;
	int64_t x688 = INT64_MIN;
	static int32_t t146 = -1287;

    t146 = ((x685!=x686)==(x687-x688));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x690 = 320105309745LLU;
	static int16_t x691 = -1;
	volatile int16_t x692 = INT16_MIN;
	int32_t t147 = 2490191;

    t147 = ((x689!=x690)==(x691-x692));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x693 = INT16_MIN;
	int32_t x696 = INT32_MAX;
	int32_t t148 = 34871;

    t148 = ((x693!=x694)==(x695-x696));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x698 = 0U;
	volatile uint32_t x700 = 248196U;
	volatile int32_t t149 = -31908;

    t149 = ((x697!=x698)==(x699-x700));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x701 = 1055795954U;
	int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MIN;
	volatile int32_t t150 = -26515583;

    t150 = ((x701!=x702)==(x703-x704));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x705 = 188251156447194LLU;
	int64_t x706 = -2835LL;
	uint8_t x707 = 0U;
	int8_t x708 = INT8_MIN;
	volatile int32_t t151 = 0;

    t151 = ((x705!=x706)==(x707-x708));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = -1;
	uint32_t x715 = UINT32_MAX;
	volatile int64_t x716 = -31199546LL;
	volatile int32_t t152 = 238787;

    t152 = ((x713!=x714)==(x715-x716));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x718 = INT64_MAX;
	volatile int32_t x719 = 1;
	volatile int32_t t153 = 245636252;

    t153 = ((x717!=x718)==(x719-x720));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x723 = INT32_MIN;
	int16_t x724 = INT16_MIN;
	volatile int32_t t154 = 18855777;

    t154 = ((x721!=x722)==(x723-x724));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x725 = 1827570658696LLU;
	static uint16_t x726 = 18530U;
	volatile int8_t x727 = -1;
	int32_t x728 = INT32_MAX;
	volatile int32_t t155 = -185;

    t155 = ((x725!=x726)==(x727-x728));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x729 = 8U;
	static uint8_t x731 = 5U;
	int32_t x732 = 497853;
	int32_t t156 = 0;

    t156 = ((x729!=x730)==(x731-x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x733 = -1LL;
	uint8_t x734 = 76U;
	int16_t x736 = INT16_MIN;
	int32_t t157 = -1;

    t157 = ((x733!=x734)==(x735-x736));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x737 = INT8_MIN;
	int16_t x738 = -371;
	uint32_t x739 = 251545291U;
	static uint32_t x740 = 87691U;
	static volatile int32_t t158 = 18618076;

    t158 = ((x737!=x738)==(x739-x740));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x742 = -1;
	static volatile int32_t t159 = -153440664;

    t159 = ((x741!=x742)==(x743-x744));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x745 = INT64_MAX;
	static int32_t x748 = -930271558;
	int32_t t160 = -9646722;

    t160 = ((x745!=x746)==(x747-x748));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x749 = INT64_MIN;
	volatile int8_t x750 = INT8_MIN;
	int32_t x751 = -1;
	int8_t x752 = 1;
	int32_t t161 = -4;

    t161 = ((x749!=x750)==(x751-x752));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x753 = UINT8_MAX;
	uint8_t x754 = 1U;
	uint16_t x755 = 0U;
	volatile int32_t x756 = -1;
	int32_t t162 = 51967094;

    t162 = ((x753!=x754)==(x755-x756));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x758 = UINT64_MAX;
	int8_t x759 = -1;
	volatile int32_t t163 = 7947683;

    t163 = ((x757!=x758)==(x759-x760));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x761 = INT64_MIN;
	int64_t x762 = INT64_MAX;
	int32_t x764 = 63701;

    t164 = ((x761!=x762)==(x763-x764));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x765 = 9U;
	static int32_t x766 = INT32_MAX;
	volatile int8_t x767 = INT8_MIN;
	int64_t x768 = -1LL;
	static int32_t t165 = -243;

    t165 = ((x765!=x766)==(x767-x768));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x769 = 2;
	volatile int8_t x771 = INT8_MIN;
	int32_t t166 = 29547201;

    t166 = ((x769!=x770)==(x771-x772));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	static int32_t x775 = INT32_MIN;
	volatile int64_t x776 = INT64_MIN;

    t167 = ((x773!=x774)==(x775-x776));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x777 = 1653U;
	uint64_t x778 = 333826457072LLU;
	int8_t x780 = 0;
	int32_t t168 = 51;

    t168 = ((x777!=x778)==(x779-x780));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x781 = 36;
	static int32_t x783 = -77068;
	static volatile int8_t x784 = -3;
	static volatile int32_t t169 = -605;

    t169 = ((x781!=x782)==(x783-x784));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x786 = INT64_MAX;
	static int64_t x787 = -101871478655LL;
	int64_t x788 = -5434491LL;
	static volatile int32_t t170 = -96;

    t170 = ((x785!=x786)==(x787-x788));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x789 = -1;
	int64_t x790 = INT64_MIN;
	int8_t x791 = INT8_MAX;
	int16_t x792 = INT16_MIN;
	volatile int32_t t171 = 7220;

    t171 = ((x789!=x790)==(x791-x792));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x801 = 0U;
	uint32_t x803 = 386U;
	int16_t x804 = INT16_MAX;
	int32_t t172 = -762793321;

    t172 = ((x801!=x802)==(x803-x804));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x805 = 1U;
	int16_t x808 = INT16_MAX;
	volatile int32_t t173 = 32509;

    t173 = ((x805!=x806)==(x807-x808));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x809 = INT64_MIN;
	int8_t x810 = INT8_MIN;
	volatile uint32_t x811 = UINT32_MAX;
	int32_t t174 = 347125;

    t174 = ((x809!=x810)==(x811-x812));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x813 = INT16_MAX;
	volatile int64_t x814 = INT64_MAX;
	uint8_t x815 = 5U;
	int16_t x816 = -3652;
	int32_t t175 = -2;

    t175 = ((x813!=x814)==(x815-x816));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x821 = 6406;
	int16_t x822 = 0;
	int32_t t176 = 1;

    t176 = ((x821!=x822)==(x823-x824));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x829 = 1224;
	int16_t x830 = INT16_MIN;
	uint32_t x831 = UINT32_MAX;
	volatile int32_t t177 = 760592;

    t177 = ((x829!=x830)==(x831-x832));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x837 = -1LL;
	static int64_t x838 = 120148024681506LL;
	int16_t x840 = INT16_MIN;
	int32_t t178 = 36853277;

    t178 = ((x837!=x838)==(x839-x840));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x841 = 350846942U;
	int64_t x842 = -1LL;
	int64_t x843 = INT64_MIN;

    t179 = ((x841!=x842)==(x843-x844));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x845 = 45;
	int16_t x846 = INT16_MAX;
	uint64_t x847 = 31549670599LLU;
	int64_t x848 = 118028263768861984LL;
	volatile int32_t t180 = 36;

    t180 = ((x845!=x846)==(x847-x848));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x853 = 1U;
	int64_t x854 = -1LL;
	volatile int16_t x855 = -1;
	int64_t x856 = INT64_MAX;
	static volatile int32_t t181 = -1335758;

    t181 = ((x853!=x854)==(x855-x856));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x857 = UINT64_MAX;
	int32_t x858 = -1;
	int64_t x859 = -416493515436LL;
	int16_t x860 = -1;
	int32_t t182 = -11;

    t182 = ((x857!=x858)==(x859-x860));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x862 = 104U;
	static volatile int8_t x863 = INT8_MIN;
	int64_t x864 = 157079186LL;
	volatile int32_t t183 = 31662149;

    t183 = ((x861!=x862)==(x863-x864));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x865 = 73U;
	static int8_t x866 = -1;
	int32_t x868 = -1;
	volatile int32_t t184 = -1;

    t184 = ((x865!=x866)==(x867-x868));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x869 = 8888U;
	static int32_t x870 = -1;
	int64_t x871 = -1LL;
	volatile int64_t x872 = 6541LL;
	volatile int32_t t185 = 302733291;

    t185 = ((x869!=x870)==(x871-x872));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x877 = INT64_MIN;
	uint8_t x878 = 14U;
	static int16_t x879 = 16304;
	uint32_t x880 = 17U;
	static volatile int32_t t186 = 10548;

    t186 = ((x877!=x878)==(x879-x880));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x881 = INT64_MAX;
	int64_t x882 = 254577370LL;
	uint16_t x883 = 6U;
	int16_t x884 = INT16_MIN;
	int32_t t187 = 0;

    t187 = ((x881!=x882)==(x883-x884));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x886 = -1;
	static uint16_t x888 = 3181U;

    t188 = ((x885!=x886)==(x887-x888));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x889 = 11034LLU;
	uint64_t x890 = UINT64_MAX;
	uint64_t x891 = 3LLU;
	int8_t x892 = -1;
	int32_t t189 = -1158571;

    t189 = ((x889!=x890)==(x891-x892));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x894 = 444747697LLU;
	int8_t x895 = INT8_MIN;
	uint64_t x896 = UINT64_MAX;

    t190 = ((x893!=x894)==(x895-x896));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x897 = -5755;
	int16_t x898 = -1;
	uint8_t x899 = 19U;
	int32_t x900 = 10714;
	volatile int32_t t191 = 0;

    t191 = ((x897!=x898)==(x899-x900));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x901 = INT8_MIN;
	uint16_t x903 = 1259U;
	static int32_t x904 = INT32_MAX;

    t192 = ((x901!=x902)==(x903-x904));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x909 = 4U;
	int32_t x910 = -208014413;
	int32_t x911 = INT32_MIN;
	static volatile int32_t x912 = INT32_MIN;
	int32_t t193 = -28814171;

    t193 = ((x909!=x910)==(x911-x912));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x913 = 469759U;
	uint16_t x914 = 0U;
	uint64_t x915 = UINT64_MAX;
	int32_t t194 = 1385;

    t194 = ((x913!=x914)==(x915-x916));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x917 = INT64_MIN;
	int8_t x918 = -10;
	static int64_t x920 = INT64_MAX;
	static int32_t t195 = 40;

    t195 = ((x917!=x918)==(x919-x920));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x924 = INT32_MAX;
	volatile int32_t t196 = -29175;

    t196 = ((x921!=x922)==(x923-x924));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x925 = -18;
	volatile int64_t x926 = -22284145LL;
	uint16_t x927 = 12383U;
	volatile uint32_t x928 = 913890403U;
	int32_t t197 = 274121;

    t197 = ((x925!=x926)==(x927-x928));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x929 = 4177476;
	int8_t x930 = INT8_MIN;
	uint16_t x931 = UINT16_MAX;
	uint64_t x932 = UINT64_MAX;
	volatile int32_t t198 = 26306;

    t198 = ((x929!=x930)==(x931-x932));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x933 = INT16_MAX;
	volatile int8_t x934 = -1;
	int64_t x935 = INT64_MIN;
	volatile int64_t x936 = INT64_MIN;
	int32_t t199 = -1;

    t199 = ((x933!=x934)==(x935-x936));

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

