
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

volatile int32_t t0 = -40;
int8_t x8 = 1;
int8_t x13 = INT8_MIN;
volatile uint16_t x16 = 1U;
int8_t x18 = 33;
int16_t x24 = INT16_MAX;
volatile int64_t x28 = INT64_MIN;
volatile int64_t x32 = -1LL;
static volatile uint64_t x33 = 16984890035200LLU;
int32_t x35 = -89;
volatile int32_t t8 = -11;
static int32_t x43 = INT32_MAX;
volatile int32_t x50 = -1;
static int8_t x51 = -1;
int32_t x56 = -55;
int8_t x66 = -30;
static int8_t x67 = -1;
int8_t x76 = -1;
int32_t x79 = INT32_MAX;
int32_t x83 = -1;
int16_t x88 = -409;
volatile int32_t t22 = -1;
int8_t x97 = -21;
int32_t x100 = INT32_MAX;
int32_t x102 = -1;
volatile int32_t x104 = INT32_MIN;
uint16_t x107 = UINT16_MAX;
int16_t x112 = -1;
int16_t x115 = INT16_MIN;
volatile int16_t x119 = INT16_MIN;
uint16_t x120 = UINT16_MAX;
static volatile uint16_t x123 = 38U;
volatile int8_t x138 = INT8_MAX;
uint8_t x139 = 87U;
uint64_t x142 = 412LLU;
volatile uint8_t x149 = UINT8_MAX;
int16_t x152 = 5008;
uint16_t x156 = UINT16_MAX;
int32_t x160 = 230754;
int32_t t40 = -3542;
volatile int32_t t42 = 256274463;
volatile int32_t x177 = 3385;
static volatile int32_t x185 = 10789609;
uint8_t x187 = 0U;
volatile uint8_t x195 = 28U;
static int64_t x206 = -132892877507271689LL;
static uint16_t x207 = UINT16_MAX;
uint32_t x208 = 32210U;
int8_t x222 = INT8_MIN;
uint32_t x226 = UINT32_MAX;
volatile int32_t t54 = 63414;
static int32_t x229 = INT32_MAX;
int64_t x231 = INT64_MAX;
volatile int32_t t56 = 51;
uint32_t x251 = 1482U;
int32_t t62 = 466434857;
uint16_t x263 = UINT16_MAX;
int16_t x264 = -1;
volatile int32_t t63 = 148;
static int8_t x266 = INT8_MIN;
volatile int8_t x267 = INT8_MAX;
volatile int64_t x268 = INT64_MIN;
static int8_t x270 = 2;
volatile int32_t t67 = -129398998;
volatile int8_t x281 = 0;
volatile uint32_t x282 = 616U;
int32_t t68 = -212861;
int32_t x286 = 49442233;
int16_t x294 = -1;
uint64_t x303 = UINT64_MAX;
volatile int32_t t73 = 643639976;
int8_t x311 = INT8_MIN;
int32_t x312 = 28;
volatile int32_t t75 = 1868;
int8_t x313 = INT8_MIN;
int16_t x315 = INT16_MIN;
int8_t x316 = INT8_MAX;
int32_t t76 = 766920;
volatile int32_t x317 = -1;
int8_t x322 = INT8_MIN;
int8_t x323 = -1;
int16_t x324 = INT16_MAX;
int64_t x327 = INT64_MAX;
static volatile int8_t x328 = INT8_MIN;
int8_t x329 = -1;
volatile int64_t x335 = -120550736LL;
static volatile int32_t t83 = -109;
uint64_t x349 = UINT64_MAX;
static uint8_t x358 = 26U;
int32_t x360 = 1455454;
int8_t x364 = INT8_MIN;
uint32_t x365 = UINT32_MAX;
static volatile int16_t x368 = INT16_MAX;
int32_t x370 = INT32_MIN;
static int8_t x373 = INT8_MAX;
uint32_t x382 = 18727U;
uint32_t x385 = 228311U;
uint16_t x386 = 1U;
int16_t x392 = -1;
int64_t x393 = -1LL;
static int64_t x396 = -190LL;
static int8_t x401 = INT8_MIN;
int32_t x415 = -1;
volatile int32_t t102 = 74916;
int8_t x433 = -1;
uint16_t x438 = 105U;
uint64_t x447 = 3170193163LLU;
static int32_t x448 = 14;
int8_t x451 = -6;
int8_t x452 = -14;
volatile int32_t t113 = -73592225;
volatile int8_t x465 = -1;
volatile int8_t x474 = INT8_MAX;
uint32_t x480 = UINT32_MAX;
static volatile int32_t t118 = 237;
volatile int64_t x493 = INT64_MAX;
uint16_t x495 = UINT16_MAX;
volatile int32_t t119 = -570744;
volatile int8_t x498 = -8;
uint64_t x499 = 8279999131857737695LLU;
volatile int16_t x503 = INT16_MAX;
int16_t x513 = INT16_MIN;
int8_t x520 = -30;
static int32_t t124 = -4950;
static int16_t x522 = INT16_MAX;
static volatile int16_t x523 = -1;
volatile int32_t t125 = -160216837;
volatile int64_t x526 = 7190LL;
uint64_t x527 = 1262646938087LLU;
uint16_t x533 = 0U;
volatile int64_t x536 = -55LL;
int8_t x544 = INT8_MIN;
volatile uint8_t x554 = 1U;
volatile int32_t t132 = -1;
int32_t x559 = INT32_MIN;
volatile int32_t t133 = 0;
volatile uint8_t x562 = 1U;
volatile int64_t x569 = 2LL;
static uint8_t x571 = 3U;
int32_t t137 = 52070261;
int64_t x582 = 879419LL;
uint16_t x588 = 13915U;
int32_t x592 = -4864344;
int8_t x594 = INT8_MIN;
int8_t x598 = 0;
static uint32_t x607 = 242263U;
int8_t x609 = INT8_MAX;
int16_t x611 = INT16_MIN;
volatile int32_t t146 = 6;
static int8_t x618 = -1;
uint32_t x619 = 1701U;
uint64_t x620 = 527770134651LLU;
int32_t t148 = 1;
int32_t x624 = INT32_MIN;
uint8_t x627 = UINT8_MAX;
int32_t x634 = 3961;
int32_t x650 = INT32_MIN;
int64_t x651 = INT64_MIN;
static int32_t t157 = 1166497;
int32_t t158 = -3636;
static volatile uint32_t x666 = UINT32_MAX;
volatile uint32_t x669 = 18U;
int32_t t160 = 1;
int64_t x675 = -4361587350462LL;
static int32_t t161 = -41;
volatile int32_t t162 = -710279172;
int32_t x688 = -86;
uint64_t x691 = 1645562326355011LLU;
int64_t x692 = INT64_MIN;
int16_t x695 = -1;
volatile int16_t x696 = 2;
static uint64_t x698 = 37LLU;
volatile int32_t t168 = -19;
uint64_t x707 = 1937941429LLU;
static int32_t t169 = -77373;
uint8_t x709 = UINT8_MAX;
volatile int8_t x729 = -12;
static int64_t x731 = INT64_MAX;
static int64_t x734 = INT64_MIN;
uint64_t x735 = 29406LLU;
volatile uint32_t x741 = 22743U;
uint16_t x748 = 690U;
int16_t x750 = INT16_MIN;
volatile uint64_t x757 = UINT64_MAX;
int32_t t181 = -1651829;
int32_t t182 = -44;
int32_t x773 = INT32_MIN;
static int32_t x775 = -2649730;
int8_t x776 = INT8_MIN;
uint32_t x781 = 19585U;
volatile int8_t x785 = INT8_MIN;
int8_t x806 = INT8_MIN;
int8_t x809 = -21;
static int64_t x811 = INT64_MAX;
volatile uint32_t x816 = 1292171060U;
int64_t x823 = INT64_MIN;
uint64_t x835 = 533693259835062LLU;
int64_t x840 = -1LL;


void f0(void) {
    	static uint64_t x1 = 155790502LLU;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = 3U;
	static int16_t x4 = -1;

    t0 = ((x1<=x2)%(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	int32_t t1 = 188427;

    t1 = ((x5<=x6)%(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 2753;
	uint64_t x10 = 22474LLU;
	static uint32_t x11 = 6U;
	uint64_t x12 = 725392LLU;
	volatile int32_t t2 = 100665;

    t2 = ((x9<=x10)%(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = 26984U;
	uint32_t x15 = 115790966U;
	volatile int32_t t3 = -1635222;

    t3 = ((x13<=x14)%(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 3U;
	static uint8_t x19 = 18U;
	volatile int64_t x20 = -707268090608158358LL;
	volatile int32_t t4 = 13891483;

    t4 = ((x17<=x18)%(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int8_t x22 = -1;
	uint8_t x23 = 30U;
	static int32_t t5 = -1;

    t5 = ((x21<=x22)%(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = UINT64_MAX;
	int64_t x26 = -1LL;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int32_t t6 = 166257;

    t6 = ((x25<=x26)%(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = -1LL;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	int32_t t7 = -549;

    t7 = ((x29<=x30)%(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 1879406LLU;
	uint16_t x36 = 456U;

    t8 = ((x33<=x34)%(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -1535924;
	int16_t x38 = 958;
	static int8_t x39 = 12;
	int8_t x40 = -1;
	volatile int32_t t9 = 345740599;

    t9 = ((x37<=x38)%(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 1U;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -103178;

    t10 = ((x41<=x42)%(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = 257;
	uint16_t x47 = 1661U;
	int16_t x48 = -1;
	static int32_t t11 = -196;

    t11 = ((x45<=x46)%(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = 11945;
	int8_t x52 = 15;
	int32_t t12 = -2357;

    t12 = ((x49<=x50)%(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint8_t x54 = UINT8_MAX;
	static int8_t x55 = 0;
	int32_t t13 = 47100323;

    t13 = ((x53<=x54)%(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int8_t x58 = 0;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 7323U;
	volatile int32_t t14 = -209623814;

    t14 = ((x57<=x58)%(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 130230129LLU;
	static volatile int8_t x62 = INT8_MAX;
	static int8_t x63 = 1;
	volatile uint8_t x64 = 13U;
	static volatile int32_t t15 = 0;

    t15 = ((x61<=x62)%(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = -1LL;
	uint16_t x68 = 21U;
	volatile int32_t t16 = 1026531;

    t16 = ((x65<=x66)%(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int64_t x72 = INT64_MIN;
	static volatile int32_t t17 = 1;

    t17 = ((x69<=x70)%(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = INT64_MIN;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = 28;
	int32_t t18 = 943;

    t18 = ((x73<=x74)%(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	uint64_t x78 = 135581095234LLU;
	static int8_t x80 = 10;
	volatile int32_t t19 = 45604;

    t19 = ((x77<=x78)%(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = 900;
	int64_t x84 = INT64_MIN;
	static int32_t t20 = -21475;

    t20 = ((x81<=x82)%(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 162U;
	static int16_t x86 = 13881;
	int32_t x87 = 3;
	int32_t t21 = 30022758;

    t21 = ((x85<=x86)%(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	uint8_t x90 = 1U;
	static int16_t x91 = -5;
	volatile int16_t x92 = -1;

    t22 = ((x89<=x90)%(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 66824612041027LLU;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = 2161652LLU;
	int64_t x96 = 1795612316451371914LL;
	int32_t t23 = 116892727;

    t23 = ((x93<=x94)%(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MAX;
	volatile int32_t t24 = 83;

    t24 = ((x97<=x98)%(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 28230513299743LL;
	int16_t x103 = -1;
	volatile int32_t t25 = 80108442;

    t25 = ((x101<=x102)%(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 41U;
	int64_t x106 = INT64_MIN;
	static volatile uint8_t x108 = 13U;
	int32_t t26 = -32613346;

    t26 = ((x105<=x106)%(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	int32_t t27 = -1621;

    t27 = ((x109<=x110)%(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 86U;
	uint32_t x114 = UINT32_MAX;
	uint64_t x116 = 1391608190906LLU;
	int32_t t28 = -19;

    t28 = ((x113<=x114)%(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 87U;
	static int32_t x118 = -138;
	int32_t t29 = 0;

    t29 = ((x117<=x118)%(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 146U;
	uint32_t x122 = 227779094U;
	uint32_t x124 = 4337556U;
	volatile int32_t t30 = 4;

    t30 = ((x121<=x122)%(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1527;
	volatile int64_t x126 = -1LL;
	uint8_t x127 = 9U;
	int8_t x128 = -1;
	static volatile int32_t t31 = 15646603;

    t31 = ((x125<=x126)%(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x129 = 1018;
	uint32_t x130 = 900U;
	int8_t x131 = INT8_MIN;
	static volatile uint16_t x132 = 18785U;
	int32_t t32 = -193;

    t32 = ((x129<=x130)%(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = -1LL;
	static int16_t x140 = INT16_MIN;
	int32_t t33 = -1266643;

    t33 = ((x137<=x138)%(x139!=x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x141 = INT32_MAX;
	uint64_t x143 = 4093123996LLU;
	int8_t x144 = 13;
	int32_t t34 = -21;

    t34 = ((x141<=x142)%(x143!=x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = 88391108LL;
	int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static volatile int16_t x148 = INT16_MIN;
	int32_t t35 = 846;

    t35 = ((x145<=x146)%(x147!=x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	static volatile int32_t t36 = -1;

    t36 = ((x149<=x150)%(x151!=x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x153 = 12;
	int32_t x154 = INT32_MAX;
	uint64_t x155 = 100945757LLU;
	volatile int32_t t37 = 4129;

    t37 = ((x153<=x154)%(x155!=x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MIN;
	uint8_t x158 = 22U;
	int16_t x159 = 12;
	int32_t t38 = -899790;

    t38 = ((x157<=x158)%(x159!=x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	int64_t x162 = -904LL;
	int32_t x163 = -1;
	static int16_t x164 = 3;
	volatile int32_t t39 = -11703490;

    t39 = ((x161<=x162)%(x163!=x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = 8610;
	int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	volatile int64_t x168 = 1227LL;

    t40 = ((x165<=x166)%(x167!=x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -694;
	uint64_t x170 = 219504906909303987LLU;
	int32_t x171 = 8596;
	static int64_t x172 = -1LL;
	static volatile int32_t t41 = 43794313;

    t41 = ((x169<=x170)%(x171!=x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MIN;
	int64_t x174 = 28LL;
	volatile int16_t x175 = INT16_MIN;
	static uint32_t x176 = UINT32_MAX;

    t42 = ((x173<=x174)%(x175!=x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	static int64_t x180 = 4906LL;
	static int32_t t43 = -1;

    t43 = ((x177<=x178)%(x179!=x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x181 = -20;
	static volatile uint16_t x182 = UINT16_MAX;
	static int8_t x183 = -2;
	int8_t x184 = -1;
	volatile int32_t t44 = 1548751;

    t44 = ((x181<=x182)%(x183!=x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x186 = -1;
	int8_t x188 = -1;
	int32_t t45 = 441177956;

    t45 = ((x185<=x186)%(x187!=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x189 = INT32_MIN;
	uint64_t x190 = 1691566995070537LLU;
	int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MIN;
	static int32_t t46 = 193;

    t46 = ((x189<=x190)%(x191!=x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = 184858;
	int64_t x194 = INT64_MAX;
	int64_t x196 = INT64_MIN;
	int32_t t47 = 114163007;

    t47 = ((x193<=x194)%(x195!=x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = -1LL;
	uint16_t x198 = 2235U;
	uint32_t x199 = 96794U;
	static volatile int16_t x200 = -1;
	volatile int32_t t48 = 514598;

    t48 = ((x197<=x198)%(x199!=x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = INT64_MAX;
	volatile int8_t x202 = -1;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = 14115U;
	int32_t t49 = 1;

    t49 = ((x201<=x202)%(x203!=x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 135201965043179427LLU;
	static volatile int32_t t50 = -23;

    t50 = ((x205<=x206)%(x207!=x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x209 = INT8_MAX;
	int8_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t51 = -25964;

    t51 = ((x209<=x210)%(x211!=x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = UINT8_MAX;
	uint64_t x219 = 1525754178206820406LLU;
	int16_t x220 = INT16_MAX;
	static int32_t t52 = 265583;

    t52 = ((x217<=x218)%(x219!=x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -1;
	int32_t t53 = -87469;

    t53 = ((x221<=x222)%(x223!=x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x225 = -1LL;
	int16_t x227 = 18;
	static int64_t x228 = INT64_MIN;

    t54 = ((x225<=x226)%(x227!=x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x230 = INT64_MIN;
	static uint32_t x232 = UINT32_MAX;
	volatile int32_t t55 = 9;

    t55 = ((x229<=x230)%(x231!=x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = -1;
	int32_t x234 = -831882039;
	uint64_t x235 = 119LLU;
	volatile int64_t x236 = INT64_MIN;

    t56 = ((x233<=x234)%(x235!=x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x237 = 1381LLU;
	int64_t x238 = -3910510715LL;
	uint32_t x239 = 4U;
	static volatile uint32_t x240 = UINT32_MAX;
	volatile int32_t t57 = 24927;

    t57 = ((x237<=x238)%(x239!=x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = INT64_MIN;
	static volatile int16_t x242 = INT16_MIN;
	volatile uint8_t x243 = 57U;
	int32_t x244 = INT32_MAX;
	int32_t t58 = 24072022;

    t58 = ((x241<=x242)%(x243!=x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile int64_t x246 = -1LL;
	uint32_t x247 = 4631507U;
	int64_t x248 = 968536260082167199LL;
	int32_t t59 = -818969050;

    t59 = ((x245<=x246)%(x247!=x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 17U;
	static uint64_t x250 = UINT64_MAX;
	uint32_t x252 = 15103U;
	volatile int32_t t60 = -220020142;

    t60 = ((x249<=x250)%(x251!=x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MIN;
	static int64_t x255 = INT64_MIN;
	volatile int64_t x256 = 360340723028LL;
	static int32_t t61 = -29811;

    t61 = ((x253<=x254)%(x255!=x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 1863186099U;
	uint32_t x258 = 10409779U;
	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MIN;

    t62 = ((x257<=x258)%(x259!=x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = INT8_MIN;
	int64_t x262 = 49774392754977625LL;

    t63 = ((x261<=x262)%(x263!=x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x265 = 34U;
	int32_t t64 = 128;

    t64 = ((x265<=x266)%(x267!=x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = 0U;
	int8_t x271 = -14;
	int16_t x272 = INT16_MIN;
	int32_t t65 = -178278;

    t65 = ((x269<=x270)%(x271!=x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x273 = UINT32_MAX;
	int64_t x274 = -90LL;
	int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t66 = -1;

    t66 = ((x273<=x274)%(x275!=x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = -1;
	volatile uint32_t x278 = 363129U;
	uint16_t x279 = 8000U;
	volatile uint16_t x280 = 27U;

    t67 = ((x277<=x278)%(x279!=x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = -41909383117LL;

    t68 = ((x281<=x282)%(x283!=x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = 1319825643003LL;
	static int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;
	int32_t t69 = -502942;

    t69 = ((x285<=x286)%(x287!=x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x289 = -1;
	int32_t x290 = 66821227;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	volatile int32_t t70 = 710;

    t70 = ((x289<=x290)%(x291!=x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = 4;
	uint16_t x295 = 7U;
	static volatile uint16_t x296 = 0U;
	static int32_t t71 = 812369;

    t71 = ((x293<=x294)%(x295!=x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = INT16_MAX;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = 43U;
	int64_t x300 = 223446757LL;
	int32_t t72 = -2;

    t72 = ((x297<=x298)%(x299!=x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x301 = -1LL;
	static uint16_t x302 = 675U;
	int64_t x304 = INT64_MIN;

    t73 = ((x301<=x302)%(x303!=x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = 5;
	static uint8_t x306 = 71U;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 21U;
	volatile int32_t t74 = -864190;

    t74 = ((x305<=x306)%(x307!=x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x309 = 1;
	int8_t x310 = INT8_MAX;

    t75 = ((x309<=x310)%(x311!=x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x314 = -1;

    t76 = ((x313<=x314)%(x315!=x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t77 = -3427473;

    t77 = ((x317<=x318)%(x319!=x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = INT16_MIN;
	volatile int32_t t78 = 110138039;

    t78 = ((x321<=x322)%(x323!=x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x325 = INT64_MIN;
	volatile int64_t x326 = -34380233LL;
	int32_t t79 = 13;

    t79 = ((x325<=x326)%(x327!=x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x330 = 11U;
	int8_t x331 = INT8_MAX;
	uint8_t x332 = 3U;
	static int32_t t80 = 3089315;

    t80 = ((x329<=x330)%(x331!=x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x333 = 1241U;
	uint16_t x334 = UINT16_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t81 = -25910;

    t81 = ((x333<=x334)%(x335!=x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x337 = -1;
	volatile uint32_t x338 = UINT32_MAX;
	int32_t x339 = -1;
	static int64_t x340 = 4415992832233260LL;
	static int32_t t82 = -4374;

    t82 = ((x337<=x338)%(x339!=x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = 0;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	uint32_t x344 = 14832125U;

    t83 = ((x341<=x342)%(x343!=x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = INT64_MAX;
	int16_t x346 = 0;
	static int8_t x347 = INT8_MIN;
	volatile uint16_t x348 = 0U;
	static volatile int32_t t84 = 1;

    t84 = ((x345<=x346)%(x347!=x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x350 = 1126U;
	int8_t x351 = 1;
	static volatile int16_t x352 = INT16_MIN;
	int32_t t85 = 0;

    t85 = ((x349<=x350)%(x351!=x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = INT8_MIN;
	volatile int8_t x354 = INT8_MAX;
	int64_t x355 = INT64_MIN;
	int16_t x356 = -1;
	static volatile int32_t t86 = -447415816;

    t86 = ((x353<=x354)%(x355!=x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x357 = -15;
	int8_t x359 = 1;
	volatile int32_t t87 = 831813373;

    t87 = ((x357<=x358)%(x359!=x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x361 = -281861730756528640LL;
	uint64_t x362 = 2315LLU;
	volatile int8_t x363 = INT8_MAX;
	volatile int32_t t88 = -680619;

    t88 = ((x361<=x362)%(x363!=x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x366 = INT8_MAX;
	int8_t x367 = -3;
	int32_t t89 = 237545;

    t89 = ((x365<=x366)%(x367!=x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x369 = -57LL;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MIN;
	int32_t t90 = -14102977;

    t90 = ((x369<=x370)%(x371!=x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x374 = -1;
	int16_t x375 = -3843;
	static uint8_t x376 = UINT8_MAX;
	int32_t t91 = 7254510;

    t91 = ((x373<=x374)%(x375!=x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = -99642639233131876LL;
	int32_t x378 = INT32_MAX;
	static int8_t x379 = 16;
	int32_t x380 = INT32_MAX;
	int32_t t92 = -8;

    t92 = ((x377<=x378)%(x379!=x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = 53552679836078668LL;
	int32_t x383 = 989136263;
	int32_t x384 = 14713639;
	volatile int32_t t93 = 1884755;

    t93 = ((x381<=x382)%(x383!=x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x387 = INT16_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t94 = 34817;

    t94 = ((x385<=x386)%(x387!=x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x389 = INT64_MIN;
	static int64_t x390 = -118010555540LL;
	int64_t x391 = INT64_MIN;
	volatile int32_t t95 = 21;

    t95 = ((x389<=x390)%(x391!=x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x394 = 4117986039639958LLU;
	int16_t x395 = INT16_MAX;
	static int32_t t96 = -1;

    t96 = ((x393<=x394)%(x395!=x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MAX;
	uint8_t x400 = 127U;
	volatile int32_t t97 = 7819557;

    t97 = ((x397<=x398)%(x399!=x400));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x402 = 1U;
	uint16_t x403 = 1926U;
	int16_t x404 = INT16_MAX;
	volatile int32_t t98 = 969087;

    t98 = ((x401<=x402)%(x403!=x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x405 = -1;
	int64_t x406 = 858042LL;
	int32_t x407 = INT32_MIN;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int32_t t99 = 3529225;

    t99 = ((x405<=x406)%(x407!=x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x409 = 1;
	volatile uint16_t x410 = UINT16_MAX;
	int8_t x411 = -1;
	uint8_t x412 = 12U;
	int32_t t100 = 3649618;

    t100 = ((x409<=x410)%(x411!=x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = -1;
	static int8_t x414 = INT8_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t101 = 827233720;

    t101 = ((x413<=x414)%(x415!=x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x417 = -1LL;
	int32_t x418 = INT32_MAX;
	volatile int16_t x419 = -1;
	int8_t x420 = INT8_MIN;

    t102 = ((x417<=x418)%(x419!=x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MAX;
	int64_t x424 = 1689LL;
	int32_t t103 = -7914;

    t103 = ((x421<=x422)%(x423!=x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = INT64_MIN;
	volatile uint32_t x426 = UINT32_MAX;
	volatile int32_t x427 = INT32_MAX;
	int8_t x428 = -1;
	int32_t t104 = -1;

    t104 = ((x425<=x426)%(x427!=x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x429 = -483961194;
	int64_t x430 = INT64_MIN;
	int64_t x431 = 85765814LL;
	int16_t x432 = INT16_MIN;
	volatile int32_t t105 = 19647634;

    t105 = ((x429<=x430)%(x431!=x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x434 = 32U;
	volatile int16_t x435 = 4;
	int8_t x436 = INT8_MAX;
	int32_t t106 = 25932;

    t106 = ((x433<=x434)%(x435!=x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MIN;
	static uint16_t x439 = 2U;
	int32_t x440 = INT32_MIN;
	static volatile int32_t t107 = -3;

    t107 = ((x437<=x438)%(x439!=x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = INT8_MIN;
	volatile int64_t x442 = 9LL;
	int64_t x443 = INT64_MIN;
	uint32_t x444 = 44U;
	volatile int32_t t108 = 1;

    t108 = ((x441<=x442)%(x443!=x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x445 = 2272;
	uint64_t x446 = 124LLU;
	volatile int32_t t109 = -2298604;

    t109 = ((x445<=x446)%(x447!=x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MIN;
	int8_t x450 = INT8_MAX;
	volatile int32_t t110 = 1;

    t110 = ((x449<=x450)%(x451!=x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x453 = INT64_MIN;
	int16_t x454 = INT16_MIN;
	int32_t x455 = INT32_MIN;
	uint32_t x456 = 12536U;
	static int32_t t111 = 5797;

    t111 = ((x453<=x454)%(x455!=x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x457 = 1LL;
	static int32_t x458 = -3;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MAX;
	int32_t t112 = 37653;

    t112 = ((x457<=x458)%(x459!=x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = 200757285U;
	int8_t x462 = 1;
	int32_t x463 = INT32_MAX;
	uint8_t x464 = 7U;

    t113 = ((x461<=x462)%(x463!=x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x466 = -1;
	volatile int16_t x467 = -1;
	int16_t x468 = -243;
	volatile int32_t t114 = -3044538;

    t114 = ((x465<=x466)%(x467!=x468));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x469 = UINT8_MAX;
	static int8_t x470 = INT8_MAX;
	uint8_t x471 = 3U;
	int16_t x472 = INT16_MAX;
	int32_t t115 = -33;

    t115 = ((x469<=x470)%(x471!=x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = INT64_MIN;
	uint64_t x475 = UINT64_MAX;
	volatile uint32_t x476 = 46667604U;
	volatile int32_t t116 = -32505606;

    t116 = ((x473<=x474)%(x475!=x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = INT8_MIN;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = 1;
	volatile int32_t t117 = -4;

    t117 = ((x477<=x478)%(x479!=x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x481 = 1683755154LL;
	volatile int64_t x482 = INT64_MIN;
	int16_t x483 = INT16_MIN;
	uint64_t x484 = 3281LLU;

    t118 = ((x481<=x482)%(x483!=x484));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x494 = INT64_MIN;
	int64_t x496 = INT64_MAX;

    t119 = ((x493<=x494)%(x495!=x496));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = -1LL;
	uint16_t x500 = 323U;
	volatile int32_t t120 = -875013;

    t120 = ((x497<=x498)%(x499!=x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = INT8_MAX;
	uint32_t x502 = 50890986U;
	volatile uint64_t x504 = 44245043736257LLU;
	volatile int32_t t121 = -2;

    t121 = ((x501<=x502)%(x503!=x504));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x505 = 50013367385LLU;
	static int64_t x506 = 40968LL;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -1;
	int32_t t122 = -521720050;

    t122 = ((x505<=x506)%(x507!=x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x514 = 116LL;
	uint16_t x515 = UINT16_MAX;
	static int8_t x516 = -1;
	static volatile int32_t t123 = 782823;

    t123 = ((x513<=x514)%(x515!=x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x517 = 15859;
	int16_t x518 = INT16_MIN;
	volatile int64_t x519 = 487901LL;

    t124 = ((x517<=x518)%(x519!=x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x521 = 2U;
	int8_t x524 = 58;

    t125 = ((x521<=x522)%(x523!=x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x525 = INT64_MIN;
	uint16_t x528 = 18833U;
	volatile int32_t t126 = -30554;

    t126 = ((x525<=x526)%(x527!=x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x534 = 14;
	int64_t x535 = INT64_MIN;
	int32_t t127 = -1;

    t127 = ((x533<=x534)%(x535!=x536));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x537 = 271702882LLU;
	int16_t x538 = INT16_MAX;
	static volatile uint16_t x539 = 3867U;
	uint64_t x540 = 105034LLU;
	volatile int32_t t128 = -69;

    t128 = ((x537<=x538)%(x539!=x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x541 = INT8_MAX;
	volatile int32_t x542 = -1;
	volatile uint64_t x543 = 1977978356148LLU;
	static int32_t t129 = 2443;

    t129 = ((x541<=x542)%(x543!=x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = 1024860310718803LL;
	int8_t x547 = 5;
	uint32_t x548 = 64324825U;
	volatile int32_t t130 = -1070397;

    t130 = ((x545<=x546)%(x547!=x548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x549 = INT32_MAX;
	uint16_t x550 = 14522U;
	int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MIN;
	volatile int32_t t131 = 88710;

    t131 = ((x549<=x550)%(x551!=x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x553 = INT32_MAX;
	volatile uint16_t x555 = 5U;
	static volatile uint16_t x556 = 33U;

    t132 = ((x553<=x554)%(x555!=x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x557 = UINT64_MAX;
	static int64_t x558 = INT64_MAX;
	uint16_t x560 = 2U;

    t133 = ((x557<=x558)%(x559!=x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x561 = INT32_MIN;
	int64_t x563 = -1LL;
	int8_t x564 = INT8_MIN;
	volatile int32_t t134 = 224;

    t134 = ((x561<=x562)%(x563!=x564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = INT64_MAX;
	volatile int64_t x566 = -51LL;
	uint8_t x567 = UINT8_MAX;
	volatile int16_t x568 = -1;
	volatile int32_t t135 = 33;

    t135 = ((x565<=x566)%(x567!=x568));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x570 = -438700067943LL;
	volatile int16_t x572 = 1;
	volatile int32_t t136 = 1662;

    t136 = ((x569<=x570)%(x571!=x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = -50282238017642LL;
	int64_t x574 = 772LL;
	int16_t x575 = INT16_MIN;
	static int8_t x576 = INT8_MAX;

    t137 = ((x573<=x574)%(x575!=x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x577 = INT16_MIN;
	int64_t x578 = -1LL;
	int64_t x579 = -785576528372303710LL;
	volatile int64_t x580 = INT64_MAX;
	int32_t t138 = 303;

    t138 = ((x577<=x578)%(x579!=x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x581 = 16271U;
	int8_t x583 = -1;
	int64_t x584 = INT64_MIN;
	volatile int32_t t139 = -42698281;

    t139 = ((x581<=x582)%(x583!=x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x585 = INT16_MAX;
	int8_t x586 = 10;
	uint64_t x587 = 1870588186793804LLU;
	static int32_t t140 = -140800;

    t140 = ((x585<=x586)%(x587!=x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x589 = -362343001389014LL;
	uint64_t x590 = 6936LLU;
	static uint16_t x591 = 314U;
	int32_t t141 = -105;

    t141 = ((x589<=x590)%(x591!=x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x593 = 13U;
	static volatile int8_t x595 = INT8_MIN;
	volatile int8_t x596 = 0;
	static int32_t t142 = -90840470;

    t142 = ((x593<=x594)%(x595!=x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x597 = 1;
	int16_t x599 = -56;
	uint64_t x600 = UINT64_MAX;
	int32_t t143 = 467;

    t143 = ((x597<=x598)%(x599!=x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x601 = INT64_MIN;
	int64_t x602 = INT64_MIN;
	volatile uint32_t x603 = 1998081U;
	uint16_t x604 = 3292U;
	volatile int32_t t144 = -2;

    t144 = ((x601<=x602)%(x603!=x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = INT16_MAX;
	static volatile int8_t x606 = INT8_MAX;
	volatile int64_t x608 = INT64_MAX;
	static volatile int32_t t145 = 847;

    t145 = ((x605<=x606)%(x607!=x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x610 = UINT32_MAX;
	static int64_t x612 = 0LL;

    t146 = ((x609<=x610)%(x611!=x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x613 = UINT8_MAX;
	static int32_t x614 = INT32_MIN;
	int16_t x615 = 3;
	volatile int16_t x616 = INT16_MAX;
	int32_t t147 = 0;

    t147 = ((x613<=x614)%(x615!=x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x617 = INT64_MIN;

    t148 = ((x617<=x618)%(x619!=x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x621 = INT16_MIN;
	int64_t x622 = INT64_MIN;
	int16_t x623 = -1;
	static volatile int32_t t149 = 1;

    t149 = ((x621<=x622)%(x623!=x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x625 = -1;
	int8_t x626 = INT8_MIN;
	int64_t x628 = INT64_MIN;
	int32_t t150 = -44950;

    t150 = ((x625<=x626)%(x627!=x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x633 = INT16_MAX;
	int32_t x635 = INT32_MIN;
	int8_t x636 = -1;
	int32_t t151 = 104088;

    t151 = ((x633<=x634)%(x635!=x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x637 = INT16_MAX;
	static uint32_t x638 = 1U;
	uint16_t x639 = UINT16_MAX;
	int64_t x640 = INT64_MIN;
	static volatile int32_t t152 = -293850384;

    t152 = ((x637<=x638)%(x639!=x640));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x641 = UINT8_MAX;
	int32_t x642 = -1;
	int16_t x643 = INT16_MAX;
	volatile int16_t x644 = 0;
	int32_t t153 = -318;

    t153 = ((x641<=x642)%(x643!=x644));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x645 = INT32_MAX;
	uint32_t x646 = 14U;
	int16_t x647 = INT16_MIN;
	volatile int64_t x648 = INT64_MAX;
	int32_t t154 = -32686;

    t154 = ((x645<=x646)%(x647!=x648));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x649 = 38;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t155 = 16258832;

    t155 = ((x649<=x650)%(x651!=x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = INT16_MAX;
	int8_t x654 = -1;
	static int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MAX;
	volatile int32_t t156 = 2748784;

    t156 = ((x653<=x654)%(x655!=x656));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x657 = 23936964311101511LLU;
	int16_t x658 = 1;
	int16_t x659 = INT16_MIN;
	volatile int8_t x660 = 0;

    t157 = ((x657<=x658)%(x659!=x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x661 = 216;
	uint16_t x662 = 94U;
	volatile int8_t x663 = INT8_MIN;
	int16_t x664 = 3127;

    t158 = ((x661<=x662)%(x663!=x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = 1;
	volatile int32_t x667 = INT32_MAX;
	volatile int8_t x668 = INT8_MIN;
	int32_t t159 = -736515;

    t159 = ((x665<=x666)%(x667!=x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x670 = UINT16_MAX;
	int64_t x671 = -1LL;
	int8_t x672 = -14;

    t160 = ((x669<=x670)%(x671!=x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x673 = 157;
	volatile int64_t x674 = -1LL;
	uint16_t x676 = UINT16_MAX;

    t161 = ((x673<=x674)%(x675!=x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x677 = -21;
	static uint8_t x678 = 0U;
	static uint8_t x679 = 3U;
	int16_t x680 = INT16_MIN;

    t162 = ((x677<=x678)%(x679!=x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = -15302042253193366LL;
	uint32_t x682 = 109929U;
	int16_t x683 = 2849;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t163 = -2734;

    t163 = ((x681<=x682)%(x683!=x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x685 = 2888;
	volatile int64_t x686 = 275139042384854LL;
	int32_t x687 = 51012;
	int32_t t164 = -16858;

    t164 = ((x685<=x686)%(x687!=x688));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x689 = INT64_MIN;
	int32_t x690 = INT32_MIN;
	volatile int32_t t165 = -140621113;

    t165 = ((x689<=x690)%(x691!=x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = 448390;
	static uint8_t x694 = 105U;
	static int32_t t166 = -1;

    t166 = ((x693<=x694)%(x695!=x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x697 = -1;
	static volatile uint64_t x699 = 3093207426351217LLU;
	volatile int64_t x700 = INT64_MAX;
	int32_t t167 = 1850082;

    t167 = ((x697<=x698)%(x699!=x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x701 = INT16_MIN;
	volatile int32_t x702 = 19182589;
	static uint16_t x703 = 4569U;
	int64_t x704 = -1LL;

    t168 = ((x701<=x702)%(x703!=x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	static uint64_t x706 = UINT64_MAX;
	static volatile int8_t x708 = -1;

    t169 = ((x705<=x706)%(x707!=x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x710 = UINT64_MAX;
	static uint64_t x711 = 10005LLU;
	volatile uint16_t x712 = 32U;
	static int32_t t170 = 31130;

    t170 = ((x709<=x710)%(x711!=x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x717 = 53951768937213LLU;
	volatile int64_t x718 = 712520621436093LL;
	int16_t x719 = INT16_MIN;
	int64_t x720 = INT64_MIN;
	volatile int32_t t171 = -18914321;

    t171 = ((x717<=x718)%(x719!=x720));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x721 = INT16_MIN;
	static uint8_t x722 = UINT8_MAX;
	int16_t x723 = 23;
	static int32_t x724 = INT32_MIN;
	int32_t t172 = 956213167;

    t172 = ((x721<=x722)%(x723!=x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x725 = 1378U;
	volatile int32_t x726 = INT32_MIN;
	int64_t x727 = INT64_MIN;
	int64_t x728 = -1LL;
	static volatile int32_t t173 = 2232;

    t173 = ((x725<=x726)%(x727!=x728));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x730 = 257788874266804LLU;
	uint8_t x732 = 6U;
	volatile int32_t t174 = -3892730;

    t174 = ((x729<=x730)%(x731!=x732));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x733 = -29;
	uint32_t x736 = 3264481U;
	int32_t t175 = 5219366;

    t175 = ((x733<=x734)%(x735!=x736));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x737 = 1387U;
	int16_t x738 = 250;
	int8_t x739 = INT8_MAX;
	volatile uint32_t x740 = UINT32_MAX;
	int32_t t176 = 767420;

    t176 = ((x737<=x738)%(x739!=x740));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x742 = -1LL;
	uint8_t x743 = 28U;
	static uint8_t x744 = 13U;
	volatile int32_t t177 = -169745;

    t177 = ((x741<=x742)%(x743!=x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x745 = -243;
	volatile int16_t x746 = 0;
	static int32_t x747 = -1;
	volatile int32_t t178 = -11182489;

    t178 = ((x745<=x746)%(x747!=x748));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x749 = INT64_MAX;
	static volatile int32_t x751 = 17788656;
	int8_t x752 = 2;
	volatile int32_t t179 = 378734613;

    t179 = ((x749<=x750)%(x751!=x752));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x753 = INT16_MIN;
	int64_t x754 = INT64_MAX;
	int64_t x755 = -495291672112551LL;
	int8_t x756 = 0;
	volatile int32_t t180 = 77;

    t180 = ((x753<=x754)%(x755!=x756));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x758 = -120;
	int32_t x759 = 40;
	uint16_t x760 = 8U;

    t181 = ((x757<=x758)%(x759!=x760));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x761 = 45938970840072625LLU;
	static volatile int64_t x762 = 5674425881921LL;
	uint16_t x763 = 10698U;
	volatile int32_t x764 = -91763919;

    t182 = ((x761<=x762)%(x763!=x764));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x769 = INT64_MIN;
	static uint32_t x770 = UINT32_MAX;
	static int8_t x771 = INT8_MIN;
	uint8_t x772 = UINT8_MAX;
	int32_t t183 = 39028;

    t183 = ((x769<=x770)%(x771!=x772));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x774 = -1LL;
	int32_t t184 = 22;

    t184 = ((x773<=x774)%(x775!=x776));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x777 = 35;
	int64_t x778 = -253068554913LL;
	volatile uint8_t x779 = 0U;
	int32_t x780 = -1;
	int32_t t185 = -11;

    t185 = ((x777<=x778)%(x779!=x780));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x782 = 144659449573LLU;
	int16_t x783 = INT16_MIN;
	uint64_t x784 = 33820637095LLU;
	volatile int32_t t186 = 18162;

    t186 = ((x781<=x782)%(x783!=x784));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x786 = INT8_MAX;
	volatile uint8_t x787 = 69U;
	int8_t x788 = INT8_MIN;
	int32_t t187 = -523002425;

    t187 = ((x785<=x786)%(x787!=x788));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x789 = -1;
	uint32_t x790 = 26U;
	int64_t x791 = -296219955938677575LL;
	int16_t x792 = 47;
	volatile int32_t t188 = -2271779;

    t188 = ((x789<=x790)%(x791!=x792));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	volatile int64_t x794 = -1LL;
	int16_t x795 = -571;
	volatile int16_t x796 = 1;
	int32_t t189 = 12040209;

    t189 = ((x793<=x794)%(x795!=x796));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x797 = -3923166LL;
	int32_t x798 = INT32_MAX;
	int64_t x799 = -1LL;
	uint64_t x800 = 19996825435932797LLU;
	volatile int32_t t190 = -1731;

    t190 = ((x797<=x798)%(x799!=x800));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x801 = 121957416LLU;
	int64_t x802 = INT64_MAX;
	static volatile uint16_t x803 = 3U;
	volatile uint64_t x804 = UINT64_MAX;
	volatile int32_t t191 = -57528537;

    t191 = ((x801<=x802)%(x803!=x804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x805 = UINT8_MAX;
	uint16_t x807 = UINT16_MAX;
	uint8_t x808 = 14U;
	volatile int32_t t192 = 3428;

    t192 = ((x805<=x806)%(x807!=x808));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x810 = -16;
	static int8_t x812 = -1;
	static int32_t t193 = 13028;

    t193 = ((x809<=x810)%(x811!=x812));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x813 = INT8_MIN;
	int8_t x814 = -1;
	int32_t x815 = 15;
	volatile int32_t t194 = 5;

    t194 = ((x813<=x814)%(x815!=x816));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x817 = INT64_MAX;
	uint8_t x818 = 31U;
	uint32_t x819 = 2U;
	uint8_t x820 = UINT8_MAX;
	int32_t t195 = -821717;

    t195 = ((x817<=x818)%(x819!=x820));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x821 = 15546U;
	volatile int8_t x822 = INT8_MAX;
	volatile uint16_t x824 = 1U;
	int32_t t196 = 93968952;

    t196 = ((x821<=x822)%(x823!=x824));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x825 = INT16_MAX;
	static volatile int8_t x826 = INT8_MAX;
	uint8_t x827 = 47U;
	static int64_t x828 = -1LL;
	static int32_t t197 = -6276;

    t197 = ((x825<=x826)%(x827!=x828));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x833 = 168567LLU;
	int32_t x834 = -1;
	volatile int32_t x836 = -1;
	int32_t t198 = -2494;

    t198 = ((x833<=x834)%(x835!=x836));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x837 = 2;
	uint8_t x838 = UINT8_MAX;
	volatile uint16_t x839 = UINT16_MAX;
	static volatile int32_t t199 = 7728;

    t199 = ((x837<=x838)%(x839!=x840));

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

