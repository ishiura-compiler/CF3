
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

int8_t x5 = 1;
int32_t x15 = -1;
int64_t x16 = INT64_MIN;
int64_t t3 = 245267747569919080LL;
volatile int64_t t4 = -89489253561LL;
static int8_t x23 = INT8_MIN;
uint16_t x27 = UINT16_MAX;
int32_t t6 = 5;
static int32_t t7 = -158;
int32_t x33 = INT32_MAX;
int64_t t8 = 96LL;
uint16_t x39 = 1U;
volatile int32_t t9 = 289771840;
static volatile uint32_t x44 = UINT32_MAX;
int8_t x46 = INT8_MIN;
int8_t x53 = INT8_MIN;
volatile int32_t x56 = 14269;
volatile uint32_t t13 = UINT32_MAX;
int64_t x69 = 199LL;
int32_t t17 = -24202;
uint32_t x82 = 18U;
int32_t x84 = INT32_MIN;
static uint8_t x87 = 1U;
int64_t x89 = 931653512088957LL;
int64_t x90 = 172LL;
volatile int64_t t22 = -547686596443LL;
static uint32_t x93 = 52026U;
uint16_t x98 = 349U;
int64_t x100 = -141LL;
uint64_t t24 = 3245570LLU;
int64_t x101 = 5101716LL;
volatile uint32_t x104 = 50U;
int64_t x106 = -1LL;
int64_t x107 = INT64_MIN;
int16_t x115 = 945;
uint16_t x116 = 17U;
int32_t t28 = -3413;
int8_t x120 = 0;
volatile int16_t x134 = INT16_MAX;
int8_t x135 = -1;
static uint32_t x137 = 318282949U;
static uint32_t x139 = UINT32_MAX;
static int16_t x146 = INT16_MIN;
int8_t x150 = INT8_MIN;
static volatile int64_t x151 = INT64_MAX;
static volatile int64_t t37 = -136755938813471LL;
int64_t t38 = 7LL;
int16_t x159 = -28;
int32_t t40 = 0;
static uint8_t x167 = UINT8_MAX;
static int8_t x168 = 0;
volatile int8_t x173 = 5;
volatile uint32_t x178 = 67633U;
int64_t x179 = -1741690026531LL;
int16_t x181 = -3;
int8_t x182 = -47;
volatile uint16_t x183 = UINT16_MAX;
int16_t x198 = INT16_MAX;
int32_t x207 = INT32_MIN;
int64_t x208 = INT64_MAX;
int32_t x209 = INT32_MIN;
volatile int16_t x213 = 1;
int8_t x215 = INT8_MAX;
volatile int16_t x221 = INT16_MIN;
int32_t t55 = 200836;
int32_t x230 = -28140637;
uint16_t x231 = 137U;
int64_t x236 = INT64_MAX;
volatile int64_t t59 = -588487413673LL;
int32_t x241 = -1;
static int32_t x251 = 6582128;
uint64_t x258 = 3654LLU;
volatile int16_t x268 = -1;
static uint32_t x277 = 37902U;
int16_t x278 = 4;
int8_t x280 = -1;
int32_t t69 = 1634137;
static int64_t x289 = -1LL;
static int16_t x291 = INT16_MAX;
volatile int32_t t72 = -2;
int16_t x299 = -1;
int32_t t74 = 7825;
uint32_t x304 = 6U;
volatile int32_t x305 = INT32_MIN;
uint32_t x306 = UINT32_MAX;
static volatile int64_t t78 = -30976562LL;
int32_t x318 = INT32_MIN;
static volatile int32_t x321 = INT32_MAX;
int64_t x331 = 12LL;
int8_t x333 = -1;
int16_t x334 = INT16_MIN;
int64_t x342 = INT64_MAX;
volatile int32_t x343 = -1767;
int8_t x345 = 8;
int64_t x346 = 24694281072LL;
uint32_t x348 = 13U;
uint64_t x351 = UINT64_MAX;
static int64_t x355 = 1LL;
static int16_t x361 = INT16_MIN;
int64_t t92 = -1LL;
volatile int16_t x376 = INT16_MIN;
int8_t x377 = 4;
int16_t x381 = INT16_MIN;
int64_t t95 = 86LL;
volatile uint8_t x385 = 6U;
volatile int32_t x387 = -16;
int32_t x389 = 536780611;
static int64_t x399 = INT64_MIN;
static int16_t x403 = -1;
int64_t t100 = 226070152889338LL;
int64_t x406 = -1LL;
static int32_t x407 = INT32_MIN;
int16_t x414 = -1;
volatile uint32_t x417 = 222U;
uint8_t x419 = 2U;
int64_t x424 = -1619101LL;
int64_t t105 = -757939362021LL;
volatile uint8_t x431 = UINT8_MAX;
static int32_t x432 = INT32_MIN;
int32_t x435 = -385336;
int64_t x436 = 7396792LL;
volatile int16_t x437 = INT16_MAX;
uint8_t x462 = 0U;
int32_t t116 = 26;
uint16_t x469 = 23341U;
int64_t x470 = -1LL;
int16_t x475 = -1;
uint16_t x478 = 14542U;
int32_t t119 = 1;
volatile int64_t x482 = -7637207369176193LL;
uint64_t x488 = 39249LLU;
static uint32_t t123 = 7949U;
static int32_t x497 = -1;
static uint16_t x499 = 455U;
int32_t t124 = 10868976;
static int32_t t126 = -7994;
static int32_t t127 = -30;
static uint32_t t130 = UINT32_MAX;
int16_t x530 = INT16_MAX;
uint16_t x541 = 11U;
volatile uint8_t x544 = 2U;
int32_t x546 = 9189;
int32_t x548 = INT32_MIN;
volatile uint32_t t137 = 2263U;
int64_t x558 = INT64_MIN;
static volatile uint64_t x561 = 4074131775914551705LLU;
volatile int16_t x562 = INT16_MAX;
int8_t x563 = INT8_MIN;
int16_t x568 = INT16_MIN;
volatile int64_t t141 = -13073807127201435LL;
volatile int64_t x569 = INT64_MIN;
int8_t x576 = -1;
volatile int32_t t143 = -391440173;
static int16_t x581 = -1;
volatile uint16_t x583 = 3U;
static volatile int32_t t145 = -191;
int64_t x585 = INT64_MAX;
uint16_t x588 = 43U;
static int8_t x591 = INT8_MIN;
int64_t t148 = -216466277264684LL;
int32_t x598 = INT32_MAX;
int32_t x604 = -1;
volatile int32_t t150 = 49202141;
static int32_t x606 = INT32_MIN;
static int16_t x607 = INT16_MIN;
volatile int16_t x615 = -1;
int32_t x621 = INT32_MIN;
int64_t x629 = INT64_MAX;
volatile int32_t t157 = -1235;
int8_t x633 = INT8_MAX;
int32_t x650 = -470;
int64_t t163 = -45799964LL;
int16_t x658 = 0;
int64_t x661 = -4054590371LL;
uint64_t x664 = 1079LLU;
static int64_t t167 = -1981630596850LL;
int32_t x673 = INT32_MIN;
int16_t x683 = -1;
static volatile int32_t t170 = 253;
int8_t x685 = INT8_MIN;
int8_t x686 = INT8_MAX;
uint32_t x690 = UINT32_MAX;
int8_t x692 = -1;
uint16_t x695 = 575U;
static int32_t x696 = INT32_MAX;
int64_t x698 = INT64_MIN;
volatile uint64_t t174 = UINT64_MAX;
volatile int32_t t175 = -4434;
int64_t x708 = 2582061305LL;
static uint64_t x711 = UINT64_MAX;
volatile uint16_t x713 = 30U;
int64_t x714 = 20553742582267LL;
uint8_t x717 = 111U;
int32_t x718 = -961;
static uint16_t x727 = 0U;
uint64_t x729 = 2526205053LLU;
int8_t x732 = -1;
volatile uint64_t x737 = 8298241LLU;
int16_t x745 = INT16_MIN;
static volatile int32_t t186 = -812;
int32_t t187 = -52396997;
int64_t x756 = -1LL;
int64_t x760 = 7445604069238LL;
uint64_t x765 = 0LLU;
int8_t x771 = -1;
static int8_t x772 = -1;
int64_t x776 = INT64_MIN;
volatile uint64_t t193 = UINT64_MAX;
int8_t x779 = -7;
int32_t x781 = 596;
volatile int32_t x782 = INT32_MAX;
volatile int64_t x784 = 427479429005LL;
int64_t x786 = INT64_MIN;
volatile int64_t x789 = -1LL;
int32_t x791 = -52555323;
int8_t x795 = 0;
int8_t x799 = INT8_MIN;


void f0(void) {
    	uint64_t x1 = 4774514843579702LLU;
	int16_t x2 = 235;
	int32_t x3 = -31710936;
	static uint8_t x4 = 2U;
	int32_t t0 = -4451;

    t0 = ((x1!=x2)|(x3|x4));

    if (t0 != -31710933) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x6 = 6796335U;
	static uint64_t x7 = 728411LLU;
	static uint64_t x8 = 92476989278637LLU;
	volatile uint64_t t1 = 103914LLU;

    t1 = ((x5!=x6)|(x7|x8));

    if (t1 != 92476989480447LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x9 = INT8_MIN;
	static uint8_t x10 = 28U;
	volatile uint64_t x11 = 3858355775597LLU;
	int32_t x12 = INT32_MAX;
	uint64_t t2 = 212714LLU;

    t2 = ((x9!=x10)|(x11|x12));

    if (t2 != 3859028115455LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -183945LL;
	volatile int16_t x14 = -1;

    t3 = ((x13!=x14)|(x15|x16));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -1;
	int16_t x18 = -1;
	int64_t x19 = INT64_MAX;
	volatile int16_t x20 = INT16_MIN;

    t4 = ((x17!=x18)|(x19|x20));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 77945554LLU;
	int8_t x22 = INT8_MAX;
	volatile int16_t x24 = -164;
	volatile int32_t t5 = -53733;

    t5 = ((x21!=x22)|(x23|x24));

    if (t5 != -35) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	static int32_t x26 = -242457684;
	int8_t x28 = INT8_MIN;

    t6 = ((x25!=x26)|(x27|x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	static volatile int32_t x30 = -5428;
	int16_t x31 = -1;
	volatile uint8_t x32 = 22U;

    t7 = ((x29!=x30)|(x31|x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = 200;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = 2630037363LL;

    t8 = ((x33!=x34)|(x35|x36));

    if (t8 != 2630037503LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	static volatile uint16_t x38 = UINT16_MAX;
	volatile uint16_t x40 = 313U;

    t9 = ((x37!=x38)|(x39|x40));

    if (t9 != 313) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = -1;
	static uint32_t t10 = UINT32_MAX;

    t10 = ((x41!=x42)|(x43|x44));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -26;
	static volatile int32_t x47 = 44392133;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = -4321138;

    t11 = ((x45!=x46)|(x47|x48));

    if (t11 != -8507) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	static int64_t x50 = INT64_MIN;
	static volatile int8_t x51 = INT8_MIN;
	int64_t x52 = 23979458451383960LL;
	volatile int64_t t12 = -114969794456LL;

    t12 = ((x49!=x50)|(x51|x52));

    if (t12 != -103LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x54 = 2U;
	uint32_t x55 = UINT32_MAX;

    t13 = ((x53!=x54)|(x55|x56));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 19U;
	int8_t x58 = INT8_MIN;
	int8_t x59 = 1;
	uint32_t x60 = 7U;
	uint32_t t14 = 718243328U;

    t14 = ((x57!=x58)|(x59|x60));

    if (t14 != 7U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 2U;
	uint32_t x62 = UINT32_MAX;
	volatile int64_t x63 = -532796183396LL;
	static uint32_t x64 = UINT32_MAX;
	volatile int64_t t15 = -482244LL;

    t15 = ((x61!=x62)|(x63|x64));

    if (t15 != -532575944705LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -23;
	static uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 37U;
	volatile int16_t x68 = INT16_MAX;
	int32_t t16 = 402;

    t16 = ((x65!=x66)|(x67|x68));

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x70 = 199497U;
	int32_t x71 = INT32_MAX;
	int16_t x72 = INT16_MIN;

    t17 = ((x69!=x70)|(x71|x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MAX;
	uint8_t x76 = 35U;
	int32_t t18 = 6;

    t18 = ((x73!=x74)|(x75|x76));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	static int16_t x78 = -9;
	volatile uint16_t x79 = 30824U;
	int16_t x80 = -6;
	int32_t t19 = 105813;

    t19 = ((x77!=x78)|(x79|x80));

    if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 2477U;
	int16_t x83 = INT16_MIN;
	static int32_t t20 = -10536;

    t20 = ((x81!=x82)|(x83|x84));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = INT64_MIN;
	volatile int64_t x86 = INT64_MIN;
	uint32_t x88 = 5807324U;
	volatile uint32_t t21 = 0U;

    t21 = ((x85!=x86)|(x87|x88));

    if (t21 != 5807325U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x91 = UINT16_MAX;
	int64_t x92 = 369222635338864588LL;

    t22 = ((x89!=x90)|(x91|x92));

    if (t22 != 369222635338924031LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1920310857972249969LL;
	volatile int32_t x95 = INT32_MAX;
	int16_t x96 = 101;
	static volatile int32_t t23 = INT32_MAX;

    t23 = ((x93!=x94)|(x95|x96));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -18LL;
	uint64_t x99 = 1LLU;

    t24 = ((x97!=x98)|(x99|x100));

    if (t24 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x102 = 447366827U;
	uint16_t x103 = UINT16_MAX;
	volatile uint32_t t25 = 25U;

    t25 = ((x101!=x102)|(x103|x104));

    if (t25 != 65535U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -52;
	volatile uint64_t x108 = 28106LLU;
	uint64_t t26 = 3193802361LLU;

    t26 = ((x105!=x106)|(x107|x108));

    if (t26 != 9223372036854803915LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = -27;
	int32_t t27 = 1044679;

    t27 = ((x109!=x110)|(x111|x112));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -30;
	volatile uint64_t x114 = UINT64_MAX;

    t28 = ((x113!=x114)|(x115|x116));

    if (t28 != 945) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MAX;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	volatile int32_t t29 = 22030178;

    t29 = ((x117!=x118)|(x119|x120));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -5113;
	volatile uint16_t x122 = UINT16_MAX;
	int16_t x123 = -1;
	int16_t x124 = -1;
	int32_t t30 = -45;

    t30 = ((x121!=x122)|(x123|x124));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MIN;
	int64_t x127 = 14630660093910LL;
	volatile int64_t x128 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = ((x125!=x126)|(x127|x128));

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 306669322LLU;
	int32_t x130 = INT32_MIN;
	static uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MAX;
	volatile int64_t t32 = INT64_MAX;

    t32 = ((x129!=x130)|(x131|x132));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = UINT8_MAX;
	volatile uint32_t x136 = 10U;
	volatile uint32_t t33 = UINT32_MAX;

    t33 = ((x133!=x134)|(x135|x136));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = -262280488;
	static int32_t x140 = INT32_MAX;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = ((x137!=x138)|(x139|x140));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = 0U;
	volatile uint64_t x143 = 29686134LLU;
	volatile uint16_t x144 = 441U;
	static volatile uint64_t t35 = 16043LLU;

    t35 = ((x141!=x142)|(x143|x144));

    if (t35 != 29686271LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 2490039U;
	int8_t x147 = 6;
	static volatile int64_t x148 = INT64_MAX;
	volatile int64_t t36 = INT64_MAX;

    t36 = ((x145!=x146)|(x147|x148));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = -28665;
	static int32_t x152 = -257419969;

    t37 = ((x149!=x150)|(x151|x152));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MAX;
	int8_t x156 = INT8_MIN;

    t38 = ((x153!=x154)|(x155|x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	static uint8_t x158 = 1U;
	uint16_t x160 = 104U;
	volatile int32_t t39 = -86;

    t39 = ((x157!=x158)|(x159|x160));

    if (t39 != -19) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = 13;
	int16_t x162 = 620;
	int8_t x163 = INT8_MIN;
	int8_t x164 = 2;

    t40 = ((x161!=x162)|(x163|x164));

    if (t40 != -125) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 10U;
	int8_t x166 = INT8_MIN;
	int32_t t41 = 16121;

    t41 = ((x165!=x166)|(x167|x168));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -1;
	int32_t x170 = INT32_MIN;
	static uint16_t x171 = UINT16_MAX;
	uint16_t x172 = 4409U;
	volatile int32_t t42 = -725871;

    t42 = ((x169!=x170)|(x171|x172));

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -2582;

    t43 = ((x173!=x174)|(x175|x176));

    if (t43 != -32641) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x180 = -1;
	static volatile int64_t t44 = -1902480835542383LL;

    t44 = ((x177!=x178)|(x179|x180));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x184 = -1;
	int32_t t45 = 111793;

    t45 = ((x181!=x182)|(x183|x184));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = 0;
	volatile int64_t x186 = -61896163LL;
	volatile int8_t x187 = 0;
	volatile uint16_t x188 = 7115U;
	volatile int32_t t46 = 1;

    t46 = ((x185!=x186)|(x187|x188));

    if (t46 != 7115) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	volatile int16_t x191 = -1;
	int64_t x192 = 31400465LL;
	static int64_t t47 = -1312197842618367LL;

    t47 = ((x189!=x190)|(x191|x192));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x194 = 8;
	int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = 1086958;

    t48 = ((x193!=x194)|(x195|x196));

    if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	uint16_t x199 = 1U;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = -44;

    t49 = ((x197!=x198)|(x199|x200));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 509U;
	uint64_t x202 = 8LLU;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = 0;
	int32_t t50 = 59;

    t50 = ((x201!=x202)|(x203|x204));

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	static volatile int64_t t51 = 206003253LL;

    t51 = ((x205!=x206)|(x207|x208));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x210 = 30U;
	static int16_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t52 = UINT32_MAX;

    t52 = ((x209!=x210)|(x211|x212));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x214 = INT8_MIN;
	int16_t x216 = INT16_MAX;
	volatile int32_t t53 = -114;

    t53 = ((x213!=x214)|(x215|x216));

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	volatile int64_t x218 = 2545827500515307LL;
	uint32_t x219 = 18999738U;
	static volatile int32_t x220 = INT32_MIN;
	volatile uint32_t t54 = 21697385U;

    t54 = ((x217!=x218)|(x219|x220));

    if (t54 != 2166483387U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x222 = INT64_MIN;
	int32_t x223 = -1;
	uint8_t x224 = 1U;

    t55 = ((x221!=x222)|(x223|x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = -1;
	volatile int64_t x226 = -5158LL;
	int8_t x227 = -1;
	static uint16_t x228 = 10947U;
	static int32_t t56 = -1;

    t56 = ((x225!=x226)|(x227|x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 1U;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 235107673;

    t57 = ((x229!=x230)|(x231|x232));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 0U;
	volatile int32_t x234 = -1;
	int32_t x235 = -1;
	int64_t t58 = 159511310812LL;

    t58 = ((x233!=x234)|(x235|x236));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	static uint8_t x238 = UINT8_MAX;
	int64_t x239 = -1LL;
	int16_t x240 = INT16_MIN;

    t59 = ((x237!=x238)|(x239|x240));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x242 = 41U;
	volatile int64_t x243 = INT64_MIN;
	volatile int32_t x244 = -1;
	int64_t t60 = 79634437344607LL;

    t60 = ((x241!=x242)|(x243|x244));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int64_t x247 = 503266072480LL;
	volatile int64_t x248 = INT64_MAX;
	volatile int64_t t61 = INT64_MAX;

    t61 = ((x245!=x246)|(x247|x248));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = 0;
	int16_t x250 = -8;
	static uint8_t x252 = 6U;
	static volatile int32_t t62 = 1;

    t62 = ((x249!=x250)|(x251|x252));

    if (t62 != 6582135) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MAX;
	int64_t x254 = -119517LL;
	int16_t x255 = INT16_MIN;
	volatile int32_t x256 = INT32_MAX;
	static volatile int32_t t63 = -12876;

    t63 = ((x253!=x254)|(x255|x256));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	uint64_t x259 = 3214173959889LLU;
	int16_t x260 = -28;
	uint64_t t64 = 155229414668LLU;

    t64 = ((x257!=x258)|(x259|x260));

    if (t64 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 1869360074LLU;
	int64_t x262 = 265665583087915423LL;
	static int8_t x263 = INT8_MAX;
	uint16_t x264 = 5933U;
	volatile int32_t t65 = 767;

    t65 = ((x261!=x262)|(x263|x264));

    if (t65 != 6015) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = UINT16_MAX;
	static volatile int64_t x267 = INT64_MIN;
	volatile int64_t t66 = -2LL;

    t66 = ((x265!=x266)|(x267|x268));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = 9U;
	uint8_t x270 = UINT8_MAX;
	int8_t x271 = INT8_MAX;
	volatile int16_t x272 = INT16_MAX;
	int32_t t67 = -1;

    t67 = ((x269!=x270)|(x271|x272));

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	uint8_t x274 = 21U;
	static volatile int8_t x275 = -1;
	volatile int16_t x276 = -1;
	volatile int32_t t68 = -938037980;

    t68 = ((x273!=x274)|(x275|x276));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x279 = 3572U;

    t69 = ((x277!=x278)|(x279|x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = -1LL;
	static int32_t x282 = 1;
	int16_t x283 = -5765;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 243;

    t70 = ((x281!=x282)|(x283|x284));

    if (t70 != -5765) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x285 = 55U;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MAX;
	int8_t x288 = -1;
	volatile int32_t t71 = -1036962600;

    t71 = ((x285!=x286)|(x287|x288));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MAX;
	int32_t x292 = -1;

    t72 = ((x289!=x290)|(x291|x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	static int32_t x294 = -1;
	int8_t x295 = -18;
	static int16_t x296 = -113;
	int32_t t73 = 691491742;

    t73 = ((x293!=x294)|(x295|x296));

    if (t73 != -17) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = 17;
	uint8_t x298 = 50U;
	int32_t x300 = INT32_MIN;

    t74 = ((x297!=x298)|(x299|x300));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	static int8_t x302 = -1;
	int64_t x303 = INT64_MIN;
	int64_t t75 = 57378493LL;

    t75 = ((x301!=x302)|(x303|x304));

    if (t75 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	uint64_t t76 = UINT64_MAX;

    t76 = ((x305!=x306)|(x307|x308));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = 646138052;
	int32_t x311 = INT32_MAX;
	static int8_t x312 = 10;
	int32_t t77 = INT32_MAX;

    t77 = ((x309!=x310)|(x311|x312));

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 107251066LLU;
	static int16_t x314 = -1;
	int32_t x315 = 6926;
	int64_t x316 = 2800916034765LL;

    t78 = ((x313!=x314)|(x315|x316));

    if (t78 != 2800916037583LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	static uint8_t x319 = 3U;
	int16_t x320 = 63;
	int32_t t79 = -65616136;

    t79 = ((x317!=x318)|(x319|x320));

    if (t79 != 63) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = 0;
	int16_t x323 = INT16_MIN;
	static int64_t x324 = -1LL;
	static volatile int64_t t80 = 134133071565069743LL;

    t80 = ((x321!=x322)|(x323|x324));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = 0;
	uint32_t x327 = UINT32_MAX;
	static uint8_t x328 = 1U;
	uint32_t t81 = UINT32_MAX;

    t81 = ((x325!=x326)|(x327|x328));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = INT64_MAX;
	static int32_t x330 = INT32_MIN;
	int64_t x332 = 1737458526LL;
	volatile int64_t t82 = 5773197731724233LL;

    t82 = ((x329!=x330)|(x331|x332));

    if (t82 != 1737458527LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = -82030511324LL;

    t83 = ((x333!=x334)|(x335|x336));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x337 = INT16_MIN;
	static int16_t x338 = -84;
	volatile uint8_t x339 = UINT8_MAX;
	int32_t x340 = 1790;
	volatile int32_t t84 = -79578;

    t84 = ((x337!=x338)|(x339|x340));

    if (t84 != 1791) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 7733812U;
	int16_t x344 = -11;
	volatile int32_t t85 = -7308509;

    t85 = ((x341!=x342)|(x343|x344));

    if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x347 = 30U;
	volatile uint32_t t86 = 101U;

    t86 = ((x345!=x346)|(x347|x348));

    if (t86 != 31U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x350 = -31;
	int8_t x352 = INT8_MAX;
	volatile uint64_t t87 = UINT64_MAX;

    t87 = ((x349!=x350)|(x351|x352));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MAX;
	volatile int64_t x354 = INT64_MIN;
	static volatile int8_t x356 = INT8_MIN;
	volatile int64_t t88 = 5LL;

    t88 = ((x353!=x354)|(x355|x356));

    if (t88 != -127LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = 1001LL;
	int16_t x358 = 2;
	uint16_t x359 = UINT16_MAX;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t89 = UINT32_MAX;

    t89 = ((x357!=x358)|(x359|x360));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MAX;
	volatile uint32_t x364 = UINT32_MAX;
	static uint32_t t90 = UINT32_MAX;

    t90 = ((x361!=x362)|(x363|x364));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	static int8_t x366 = 2;
	static int32_t x367 = -1;
	static int32_t x368 = 123509;
	volatile int32_t t91 = -16404;

    t91 = ((x365!=x366)|(x367|x368));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	static int32_t x370 = INT32_MIN;
	int32_t x371 = -7363;
	static int64_t x372 = -1LL;

    t92 = ((x369!=x370)|(x371|x372));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	int64_t x374 = -112514224LL;
	int64_t x375 = INT64_MAX;
	static int64_t t93 = -2LL;

    t93 = ((x373!=x374)|(x375|x376));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MAX;
	volatile int64_t x380 = -1LL;
	volatile int64_t t94 = 1943636LL;

    t94 = ((x377!=x378)|(x379|x380));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x382 = 2LLU;
	static int64_t x383 = INT64_MIN;
	volatile uint32_t x384 = 494094U;

    t95 = ((x381!=x382)|(x383|x384));

    if (t95 != -9223372036854281713LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x386 = 1U;
	uint8_t x388 = 15U;
	static volatile int32_t t96 = -981172;

    t96 = ((x385!=x386)|(x387|x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MAX;
	int16_t x392 = -1;
	static int32_t t97 = 3682076;

    t97 = ((x389!=x390)|(x391|x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 1;
	volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 4463U;
	volatile int32_t t98 = 410079;

    t98 = ((x393!=x394)|(x395|x396));

    if (t98 != -2147479185) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 245206640U;
	static int32_t x398 = INT32_MIN;
	int32_t x400 = INT32_MAX;
	int64_t t99 = 12399726LL;

    t99 = ((x397!=x398)|(x399|x400));

    if (t99 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 0U;
	volatile uint8_t x402 = 31U;
	static volatile int64_t x404 = INT64_MIN;

    t100 = ((x401!=x402)|(x403|x404));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = 5U;
	int8_t x408 = -1;
	static int32_t t101 = -23552;

    t101 = ((x405!=x406)|(x407|x408));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = -610585LL;
	int32_t x410 = -1;
	uint32_t x411 = UINT32_MAX;
	static int16_t x412 = -3157;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = ((x409!=x410)|(x411|x412));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	static volatile int8_t x415 = -56;
	int8_t x416 = -1;
	volatile int32_t t103 = 615661;

    t103 = ((x413!=x414)|(x415|x416));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x418 = 6758248992048LLU;
	int32_t x420 = INT32_MIN;
	int32_t t104 = -61;

    t104 = ((x417!=x418)|(x419|x420));

    if (t104 != -2147483645) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = UINT16_MAX;
	uint32_t x422 = UINT32_MAX;
	uint32_t x423 = UINT32_MAX;

    t105 = ((x421!=x422)|(x423|x424));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 0U;
	int32_t x426 = 280870;
	int8_t x427 = 2;
	static int32_t x428 = INT32_MIN;
	int32_t t106 = 1311;

    t106 = ((x425!=x426)|(x427|x428));

    if (t106 != -2147483645) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -1LL;
	static int32_t x430 = 3;
	volatile int32_t t107 = -95;

    t107 = ((x429!=x430)|(x431|x432));

    if (t107 != -2147483393) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 0U;
	uint64_t x434 = 180LLU;
	static volatile int64_t t108 = -422252637033909387LL;

    t108 = ((x433!=x434)|(x435|x436));

    if (t108 != -335879LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = -1LL;
	static int16_t x439 = 0;
	int8_t x440 = INT8_MAX;
	static int32_t t109 = -1;

    t109 = ((x437!=x438)|(x439|x440));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	int8_t x442 = 0;
	volatile int64_t x443 = INT64_MIN;
	volatile int16_t x444 = INT16_MAX;
	volatile int64_t t110 = -3526467LL;

    t110 = ((x441!=x442)|(x443|x444));

    if (t110 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	int16_t x446 = -1;
	volatile int8_t x447 = -1;
	static int64_t x448 = INT64_MIN;
	int64_t t111 = -2837LL;

    t111 = ((x445!=x446)|(x447|x448));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -1;
	volatile uint8_t x450 = UINT8_MAX;
	static volatile uint8_t x451 = 0U;
	volatile int32_t x452 = -4;
	static volatile int32_t t112 = 0;

    t112 = ((x449!=x450)|(x451|x452));

    if (t112 != -3) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	int16_t x454 = INT16_MAX;
	int16_t x455 = -1;
	int32_t x456 = INT32_MIN;
	int32_t t113 = -155;

    t113 = ((x453!=x454)|(x455|x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x457 = 0U;
	int16_t x458 = -16216;
	int16_t x459 = -1;
	volatile int8_t x460 = 0;
	volatile int32_t t114 = 215405;

    t114 = ((x457!=x458)|(x459|x460));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -470;
	volatile uint32_t x463 = 2385U;
	static uint16_t x464 = 64U;
	uint32_t t115 = 2U;

    t115 = ((x461!=x462)|(x463|x464));

    if (t115 != 2385U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x466 = INT64_MIN;
	static int8_t x467 = 1;
	uint16_t x468 = 8U;

    t116 = ((x465!=x466)|(x467|x468));

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x471 = INT32_MAX;
	int64_t x472 = -24964172656153263LL;
	volatile int64_t t117 = -236226204982059051LL;

    t117 = ((x469!=x470)|(x471|x472));

    if (t117 != -24964170990485505LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = UINT64_MAX;
	int16_t x474 = INT16_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = 1747;

    t118 = ((x473!=x474)|(x475|x476));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	volatile uint16_t x479 = UINT16_MAX;
	static int16_t x480 = INT16_MAX;

    t119 = ((x477!=x478)|(x479|x480));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 7467U;
	static int32_t x483 = 243;
	volatile int64_t x484 = 2851908970438105043LL;
	volatile int64_t t120 = 2LL;

    t120 = ((x481!=x482)|(x483|x484));

    if (t120 != 2851908970438105075LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	volatile int32_t x486 = -185;
	static uint64_t x487 = UINT64_MAX;
	uint64_t t121 = UINT64_MAX;

    t121 = ((x485!=x486)|(x487|x488));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int32_t x490 = INT32_MIN;
	uint16_t x491 = 6U;
	volatile int16_t x492 = INT16_MIN;
	volatile int32_t t122 = -1;

    t122 = ((x489!=x490)|(x491|x492));

    if (t122 != -32761) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MAX;
	volatile int32_t x494 = -59526157;
	int32_t x495 = 439786;
	volatile uint32_t x496 = 6469788U;

    t123 = ((x493!=x494)|(x495|x496));

    if (t123 != 6733311U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x498 = INT8_MIN;
	static int16_t x500 = INT16_MIN;

    t124 = ((x497!=x498)|(x499|x500));

    if (t124 != -32313) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int64_t x502 = -1023219882462242LL;
	int8_t x503 = INT8_MAX;
	uint8_t x504 = 2U;
	int32_t t125 = -4170925;

    t125 = ((x501!=x502)|(x503|x504));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1528465696LL;
	int32_t x506 = -51685375;
	int8_t x507 = INT8_MAX;
	int8_t x508 = INT8_MIN;

    t126 = ((x505!=x506)|(x507|x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	uint64_t x510 = 538963817251288LLU;
	static int16_t x511 = -633;
	int16_t x512 = INT16_MIN;

    t127 = ((x509!=x510)|(x511|x512));

    if (t127 != -633) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x513 = UINT32_MAX;
	int16_t x514 = INT16_MAX;
	static uint16_t x515 = 1445U;
	uint64_t x516 = 2004834977257492LLU;
	volatile uint64_t t128 = 23LLU;

    t128 = ((x513!=x514)|(x515|x516));

    if (t128 != 2004834977258933LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x517 = 284;
	uint16_t x518 = 46U;
	volatile int8_t x519 = -12;
	int16_t x520 = INT16_MIN;
	volatile int32_t t129 = -716;

    t129 = ((x517!=x518)|(x519|x520));

    if (t129 != -11) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -225218LL;
	int64_t x522 = INT64_MIN;
	int8_t x523 = -1;
	uint32_t x524 = 11981034U;

    t130 = ((x521!=x522)|(x523|x524));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -3826;
	uint64_t x526 = 63847LLU;
	uint16_t x527 = 124U;
	static uint8_t x528 = UINT8_MAX;
	int32_t t131 = 25203127;

    t131 = ((x525!=x526)|(x527|x528));

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	int32_t x531 = -1;
	uint32_t x532 = 3984333U;
	static uint32_t t132 = UINT32_MAX;

    t132 = ((x529!=x530)|(x531|x532));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MAX;
	static uint8_t x534 = 3U;
	static int16_t x535 = INT16_MIN;
	uint16_t x536 = UINT16_MAX;
	int32_t t133 = 131500;

    t133 = ((x533!=x534)|(x535|x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	int32_t x538 = INT32_MAX;
	uint64_t x539 = 42555779985512LLU;
	int16_t x540 = INT16_MIN;
	volatile uint64_t t134 = 25686315LLU;

    t134 = ((x537!=x538)|(x539|x540));

    if (t134 != 18446744073709531241LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x542 = INT8_MIN;
	static uint8_t x543 = UINT8_MAX;
	volatile int32_t t135 = 188;

    t135 = ((x541!=x542)|(x543|x544));

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 11122939366823946LLU;
	int16_t x547 = 0;
	static volatile int32_t t136 = -573;

    t136 = ((x545!=x546)|(x547|x548));

    if (t136 != -2147483647) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 7037375;
	uint8_t x550 = 7U;
	uint32_t x551 = 433424U;
	volatile uint16_t x552 = 485U;

    t137 = ((x549!=x550)|(x551|x552));

    if (t137 != 433653U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	volatile int8_t x554 = 27;
	static volatile int64_t x555 = 2152190801901794251LL;
	int16_t x556 = -1;
	int64_t t138 = -29751036204551749LL;

    t138 = ((x553!=x554)|(x555|x556));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 3956447305690LLU;
	uint8_t x559 = 0U;
	uint32_t x560 = 553268U;
	volatile uint32_t t139 = 6U;

    t139 = ((x557!=x558)|(x559|x560));

    if (t139 != 553269U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x564 = 9U;
	volatile int32_t t140 = 1336670;

    t140 = ((x561!=x562)|(x563|x564));

    if (t140 != -119) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint64_t x566 = UINT64_MAX;
	int64_t x567 = INT64_MIN;

    t141 = ((x565!=x566)|(x567|x568));

    if (t141 != -32767LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = UINT32_MAX;
	int16_t x571 = 772;
	volatile uint32_t x572 = UINT32_MAX;
	uint32_t t142 = UINT32_MAX;

    t142 = ((x569!=x570)|(x571|x572));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x573 = 1058368208U;
	uint32_t x574 = 6963U;
	int8_t x575 = INT8_MIN;

    t143 = ((x573!=x574)|(x575|x576));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = INT64_MAX;
	static uint8_t x578 = UINT8_MAX;
	int16_t x579 = 131;
	uint64_t x580 = 5986387679250LLU;
	volatile uint64_t t144 = 9719848LLU;

    t144 = ((x577!=x578)|(x579|x580));

    if (t144 != 5986387679379LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = INT64_MAX;
	int8_t x584 = -1;

    t145 = ((x581!=x582)|(x583|x584));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x586 = 148410;
	int16_t x587 = -3;
	volatile int32_t t146 = -2;

    t146 = ((x585!=x586)|(x587|x588));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x590 = INT64_MIN;
	uint32_t x592 = 364U;
	static volatile uint32_t t147 = 1U;

    t147 = ((x589!=x590)|(x591|x592));

    if (t147 != 4294967277U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	static int32_t x594 = INT32_MIN;
	volatile int64_t x595 = INT64_MIN;
	int32_t x596 = -1;

    t148 = ((x593!=x594)|(x595|x596));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -6;
	int8_t x599 = -59;
	volatile uint32_t x600 = UINT32_MAX;
	static uint32_t t149 = UINT32_MAX;

    t149 = ((x597!=x598)|(x599|x600));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	static volatile int64_t x602 = INT64_MIN;
	int16_t x603 = -45;

    t150 = ((x601!=x602)|(x603|x604));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	int64_t x608 = -10132666LL;
	volatile int64_t t151 = 49254LL;

    t151 = ((x605!=x606)|(x607|x608));

    if (t151 != -7354LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint8_t x610 = 123U;
	uint32_t x611 = UINT32_MAX;
	uint16_t x612 = UINT16_MAX;
	uint32_t t152 = UINT32_MAX;

    t152 = ((x609!=x610)|(x611|x612));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 3U;
	int8_t x614 = INT8_MIN;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t153 = 74447;

    t153 = ((x613!=x614)|(x615|x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -1;
	uint64_t x618 = 104LLU;
	int64_t x619 = INT64_MAX;
	int64_t x620 = -1LL;
	volatile int64_t t154 = 70520033358338044LL;

    t154 = ((x617!=x618)|(x619|x620));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = 7;
	int8_t x623 = INT8_MAX;
	uint8_t x624 = 23U;
	int32_t t155 = 456747018;

    t155 = ((x621!=x622)|(x623|x624));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 3144719U;
	int64_t x626 = -5839989428963LL;
	volatile int8_t x627 = INT8_MIN;
	int8_t x628 = -1;
	int32_t t156 = -179639552;

    t156 = ((x625!=x626)|(x627|x628));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x630 = INT32_MIN;
	static int32_t x631 = -1;
	volatile int8_t x632 = -1;

    t157 = ((x629!=x630)|(x631|x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = 530194809876749278LL;
	uint16_t x635 = UINT16_MAX;
	uint16_t x636 = 14U;
	volatile int32_t t158 = -3010916;

    t158 = ((x633!=x634)|(x635|x636));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 0U;
	int8_t x638 = 3;
	uint32_t x639 = 599088U;
	volatile uint16_t x640 = 23U;
	uint32_t t159 = 3U;

    t159 = ((x637!=x638)|(x639|x640));

    if (t159 != 599095U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 25;
	volatile int64_t x642 = INT64_MAX;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = 0;
	uint32_t t160 = UINT32_MAX;

    t160 = ((x641!=x642)|(x643|x644));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int16_t x646 = INT16_MIN;
	int32_t x647 = 59102103;
	uint8_t x648 = 16U;
	int32_t t161 = -1593463;

    t161 = ((x645!=x646)|(x647|x648));

    if (t161 != 59102103) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 215U;
	int16_t x651 = INT16_MIN;
	static volatile int16_t x652 = -1;
	int32_t t162 = -10358116;

    t162 = ((x649!=x650)|(x651|x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	static int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MIN;
	int64_t x656 = INT64_MIN;

    t163 = ((x653!=x654)|(x655|x656));

    if (t163 != -32767LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int16_t x659 = -1;
	uint16_t x660 = UINT16_MAX;
	int32_t t164 = 24181757;

    t164 = ((x657!=x658)|(x659|x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = INT16_MIN;
	volatile uint8_t x663 = 1U;
	uint64_t t165 = 173841588LLU;

    t165 = ((x661!=x662)|(x663|x664));

    if (t165 != 1079LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	uint64_t x666 = 7246638424262504521LLU;
	volatile uint16_t x667 = UINT16_MAX;
	uint64_t x668 = 60343425511264LLU;
	uint64_t t166 = 7543LLU;

    t166 = ((x665!=x666)|(x667|x668));

    if (t166 != 60343425564671LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	uint64_t x670 = 244455615LLU;
	static int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MAX;

    t167 = ((x669!=x670)|(x671|x672));

    if (t167 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = 4U;
	volatile uint64_t x675 = UINT64_MAX;
	volatile uint64_t x676 = 237588113994344LLU;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = ((x673!=x674)|(x675|x676));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = 7U;
	static int16_t x678 = INT16_MAX;
	static uint16_t x679 = UINT16_MAX;
	uint64_t x680 = 45817582692LLU;
	volatile uint64_t t169 = 92384170793701LLU;

    t169 = ((x677!=x678)|(x679|x680));

    if (t169 != 45817593855LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	volatile int8_t x682 = INT8_MAX;
	int8_t x684 = INT8_MAX;

    t170 = ((x681!=x682)|(x683|x684));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x687 = INT8_MAX;
	volatile uint8_t x688 = 6U;
	volatile int32_t t171 = -14;

    t171 = ((x685!=x686)|(x687|x688));

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	int8_t x691 = -1;
	volatile int32_t t172 = -337843571;

    t172 = ((x689!=x690)|(x691|x692));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = 5U;
	int32_t x694 = -16997080;
	int32_t t173 = INT32_MAX;

    t173 = ((x693!=x694)|(x695|x696));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = -251;
	int16_t x699 = -68;
	uint64_t x700 = 44646LLU;

    t174 = ((x697!=x698)|(x699|x700));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	volatile uint16_t x702 = 465U;
	static uint16_t x703 = 48U;
	int16_t x704 = 1;

    t175 = ((x701!=x702)|(x703|x704));

    if (t175 != 49) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 739U;
	int32_t x706 = INT32_MAX;
	uint64_t x707 = UINT64_MAX;
	static volatile uint64_t t176 = UINT64_MAX;

    t176 = ((x705!=x706)|(x707|x708));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	volatile int8_t x710 = -1;
	static int8_t x712 = INT8_MIN;
	volatile uint64_t t177 = UINT64_MAX;

    t177 = ((x709!=x710)|(x711|x712));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x715 = INT8_MIN;
	uint32_t x716 = 5457581U;
	volatile uint32_t t178 = 83512U;

    t178 = ((x713!=x714)|(x715|x716));

    if (t178 != 4294967213U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x719 = INT32_MAX;
	uint32_t x720 = UINT32_MAX;
	volatile uint32_t t179 = UINT32_MAX;

    t179 = ((x717!=x718)|(x719|x720));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int32_t x722 = 1064807350;
	uint16_t x723 = UINT16_MAX;
	static int16_t x724 = INT16_MAX;
	static volatile int32_t t180 = 65461;

    t180 = ((x721!=x722)|(x723|x724));

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x725 = 33;
	uint64_t x726 = 50073128013192979LLU;
	int8_t x728 = INT8_MIN;
	volatile int32_t t181 = 3998499;

    t181 = ((x725!=x726)|(x727|x728));

    if (t181 != -127) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x730 = -342543741LL;
	int16_t x731 = INT16_MIN;
	volatile int32_t t182 = 9;

    t182 = ((x729!=x730)|(x731|x732));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = 354U;
	volatile uint32_t x734 = 13U;
	uint16_t x735 = 5U;
	int32_t x736 = -10414;
	volatile int32_t t183 = 0;

    t183 = ((x733!=x734)|(x735|x736));

    if (t183 != -10409) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = INT64_MAX;
	static uint32_t x739 = 121848U;
	volatile int16_t x740 = INT16_MIN;
	static volatile uint32_t t184 = 695363962U;

    t184 = ((x737!=x738)|(x739|x740));

    if (t184 != 4294958073U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -13793;
	int8_t x742 = -1;
	int32_t x743 = 200863;
	int16_t x744 = -20;
	volatile int32_t t185 = 3350;

    t185 = ((x741!=x742)|(x743|x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MIN;
	static volatile uint8_t x747 = 2U;
	int8_t x748 = INT8_MIN;

    t186 = ((x745!=x746)|(x747|x748));

    if (t186 != -125) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int8_t x750 = INT8_MIN;
	static uint8_t x751 = 14U;
	int32_t x752 = -1;

    t187 = ((x749!=x750)|(x751|x752));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x753 = INT32_MIN;
	volatile int8_t x754 = 1;
	int64_t x755 = -209767314587308LL;
	volatile int64_t t188 = 288LL;

    t188 = ((x753!=x754)|(x755|x756));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	static int32_t x758 = INT32_MIN;
	volatile int16_t x759 = INT16_MIN;
	volatile int64_t t189 = 93115LL;

    t189 = ((x757!=x758)|(x759|x760));

    if (t189 != -4233LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	int8_t x762 = INT8_MAX;
	int16_t x763 = -1;
	uint16_t x764 = 271U;
	volatile int32_t t190 = 1;

    t190 = ((x761!=x762)|(x763|x764));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = UINT8_MAX;
	int32_t x767 = INT32_MAX;
	int16_t x768 = -3278;
	volatile int32_t t191 = 0;

    t191 = ((x765!=x766)|(x767|x768));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	static int8_t x770 = INT8_MIN;
	volatile int32_t t192 = -6471322;

    t192 = ((x769!=x770)|(x771|x772));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	static uint8_t x774 = UINT8_MAX;
	uint64_t x775 = UINT64_MAX;

    t193 = ((x773!=x774)|(x775|x776));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	int32_t x778 = INT32_MIN;
	int16_t x780 = INT16_MAX;
	volatile int32_t t194 = -3867;

    t194 = ((x777!=x778)|(x779|x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x783 = 1U;
	static int64_t t195 = 25470969854012LL;

    t195 = ((x781!=x782)|(x783|x784));

    if (t195 != 427479429005LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	volatile int64_t x787 = 1LL;
	volatile uint32_t x788 = 9417U;
	static volatile int64_t t196 = -6512125202357075LL;

    t196 = ((x785!=x786)|(x787|x788));

    if (t196 != 9417LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = -3788227726LL;
	volatile uint32_t x792 = 0U;
	uint32_t t197 = 39822427U;

    t197 = ((x789!=x790)|(x791|x792));

    if (t197 != 4242411973U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	int64_t x794 = INT64_MAX;
	volatile uint16_t x796 = 15634U;
	int32_t t198 = -16113;

    t198 = ((x793!=x794)|(x795|x796));

    if (t198 != 15635) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = INT64_MAX;
	int8_t x800 = 0;
	static volatile int32_t t199 = 23736813;

    t199 = ((x797!=x798)|(x799|x800));

    if (t199 != -127) { NG(); } else { ; }
	
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

