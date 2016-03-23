
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

uint8_t x1 = 55U;
static uint32_t x3 = UINT32_MAX;
int8_t x6 = -1;
static int16_t x13 = INT16_MIN;
static int64_t x21 = 0LL;
int16_t x23 = INT16_MAX;
volatile uint8_t x28 = UINT8_MAX;
static uint32_t x37 = UINT32_MAX;
int64_t x40 = INT64_MAX;
volatile uint32_t t8 = 1645U;
volatile int32_t x42 = -1;
volatile int8_t x45 = INT8_MAX;
uint8_t x64 = UINT8_MAX;
static volatile int32_t t14 = -1;
static int32_t x65 = INT32_MIN;
static int16_t x72 = INT16_MIN;
int32_t t16 = -2;
int8_t x78 = 14;
int32_t x81 = -1;
uint8_t x82 = UINT8_MAX;
uint64_t x97 = 4372134770882519057LLU;
volatile int8_t x102 = 0;
static volatile uint32_t x116 = 2033091U;
int32_t t28 = 459086;
uint32_t x121 = UINT32_MAX;
int32_t x124 = -1;
int32_t x128 = INT32_MIN;
int32_t t31 = 45804707;
static int32_t x144 = 223622;
volatile int32_t t34 = INT32_MIN;
int8_t x150 = INT8_MIN;
static int32_t x154 = INT32_MIN;
int32_t x156 = -513629575;
static volatile int32_t t36 = -16821;
volatile int64_t t37 = 58103985LL;
int16_t x161 = INT16_MIN;
int64_t x162 = -1LL;
int32_t t38 = -55032;
uint16_t x167 = 1U;
volatile int64_t x168 = 664875711LL;
volatile int32_t t39 = INT32_MIN;
volatile uint64_t x172 = 1875585LLU;
uint16_t x185 = 4U;
int32_t t44 = -47982;
int64_t t45 = INT64_MAX;
int16_t x193 = INT16_MIN;
volatile int32_t x196 = -1;
volatile int16_t x203 = INT16_MIN;
uint32_t x206 = 42U;
static uint8_t x207 = UINT8_MAX;
int8_t x208 = INT8_MAX;
int64_t x209 = INT64_MAX;
static int8_t x212 = 26;
int64_t x214 = INT64_MAX;
uint32_t x219 = UINT32_MAX;
int32_t t52 = -4677727;
static volatile int16_t x224 = -1;
static volatile int32_t t54 = 171209;
int64_t t55 = 110728454681611506LL;
static int64_t x237 = 943148930LL;
int32_t x245 = -12213301;
static int16_t x249 = 6002;
volatile int32_t x252 = INT32_MAX;
uint8_t x258 = 0U;
uint32_t x263 = UINT32_MAX;
uint64_t x264 = 133233879888LLU;
uint64_t x270 = 1LLU;
int16_t x272 = -1;
volatile int32_t x276 = INT32_MIN;
int32_t t67 = -113630;
volatile int32_t t68 = 1;
uint8_t x285 = 3U;
uint32_t x287 = 1572U;
volatile int32_t t70 = -105;
uint64_t x295 = UINT64_MAX;
volatile int64_t x296 = INT64_MAX;
uint16_t x298 = 2U;
volatile int32_t x300 = INT32_MAX;
int16_t x301 = 1;
int32_t x303 = -1;
int32_t t73 = -518625;
int64_t x311 = 825805202534LL;
int16_t x313 = INT16_MAX;
volatile uint32_t x323 = UINT32_MAX;
int8_t x325 = -5;
int32_t x330 = INT32_MIN;
static int16_t x338 = INT16_MAX;
volatile int64_t x343 = -1LL;
volatile uint32_t x344 = UINT32_MAX;
volatile int16_t x350 = 5;
static uint8_t x351 = UINT8_MAX;
static uint8_t x356 = 8U;
uint8_t x359 = 39U;
volatile uint8_t x360 = 9U;
volatile uint64_t t86 = 1695894LLU;
static volatile int32_t t88 = -29313;
static volatile int16_t x371 = -3360;
int8_t x372 = INT8_MIN;
static int8_t x375 = 53;
volatile int32_t t90 = INT32_MIN;
static uint16_t x380 = 5U;
int32_t t91 = -331761;
static int32_t x381 = 15120933;
static uint8_t x382 = 3U;
uint64_t x384 = UINT64_MAX;
volatile int32_t t92 = 229780058;
static int64_t x392 = -102156460777856LL;
volatile int32_t t97 = 188;
volatile int16_t x405 = 8;
int32_t x409 = -132;
int16_t x416 = -1;
uint64_t x418 = UINT64_MAX;
volatile int32_t x419 = -1;
int16_t x421 = -1;
int16_t x424 = 7653;
uint8_t x430 = UINT8_MAX;
volatile int16_t x440 = INT16_MIN;
uint16_t x441 = 2U;
uint32_t x446 = UINT32_MAX;
static volatile uint64_t t109 = 464LLU;
uint16_t x457 = 223U;
volatile int32_t t110 = 46500181;
static uint8_t x461 = 1U;
static int8_t x462 = INT8_MAX;
int16_t x463 = -22;
uint8_t x476 = 3U;
uint32_t x478 = 107402U;
volatile int8_t x488 = INT8_MIN;
int16_t x493 = INT16_MIN;
static uint32_t x494 = 97288U;
volatile uint32_t x499 = 2U;
static volatile int32_t t121 = 7440;
static uint16_t x515 = UINT16_MAX;
static volatile int16_t x516 = INT16_MIN;
volatile int32_t x522 = INT32_MAX;
static int16_t x523 = -15801;
volatile uint64_t x526 = 113394LLU;
static int64_t x529 = -1LL;
static int32_t t129 = -70509713;
int32_t x537 = INT32_MIN;
int64_t x544 = 58065LL;
static int16_t x546 = 1472;
int16_t x553 = -1;
uint64_t x554 = UINT64_MAX;
int32_t x557 = INT32_MAX;
static uint16_t x561 = 15481U;
int64_t x565 = -1LL;
static uint8_t x577 = 27U;
int32_t x580 = -20;
volatile int32_t t140 = 103;
int16_t x583 = 6;
int32_t t141 = 6810;
int8_t x586 = INT8_MIN;
int32_t x591 = -1;
volatile int64_t t143 = -3166519299875LL;
int8_t x594 = INT8_MIN;
int16_t x595 = INT16_MIN;
int64_t x597 = INT64_MIN;
int64_t x605 = INT64_MIN;
static uint64_t x606 = 2141LLU;
static uint32_t x610 = 992U;
int64_t t148 = 624LL;
int32_t x614 = INT32_MIN;
int16_t x615 = INT16_MAX;
volatile int32_t t149 = -49297821;
int16_t x628 = INT16_MAX;
uint16_t x630 = UINT16_MAX;
int64_t x633 = INT64_MAX;
volatile uint64_t x637 = UINT64_MAX;
volatile uint64_t x640 = UINT64_MAX;
uint16_t x642 = 1U;
int64_t x655 = -1LL;
int16_t x659 = INT16_MIN;
int8_t x665 = INT8_MIN;
int32_t t159 = 0;
uint64_t x671 = 9114067386421009893LLU;
volatile uint32_t t160 = 853309U;
int8_t x673 = INT8_MIN;
static int64_t x679 = -1LL;
static uint8_t x682 = UINT8_MAX;
volatile uint32_t x687 = 12381U;
volatile uint32_t t164 = 96866U;
static int32_t x689 = INT32_MIN;
int16_t x690 = 597;
static int64_t x693 = INT64_MIN;
volatile uint32_t x695 = 41285U;
int64_t x696 = -1LL;
static int64_t t166 = -333441537LL;
int8_t x698 = -15;
volatile int32_t t169 = INT32_MIN;
int32_t x711 = 197;
int64_t x714 = -37LL;
uint32_t x716 = UINT32_MAX;
volatile int32_t t171 = INT32_MAX;
int32_t t172 = 152883282;
uint16_t x721 = 4U;
uint64_t x722 = 769645991786829LLU;
volatile int32_t x727 = 1;
volatile int32_t t174 = -8;
int32_t x732 = INT32_MIN;
volatile int64_t x738 = -1LL;
volatile int8_t x751 = INT8_MIN;
static int64_t x752 = INT64_MIN;
static uint16_t x755 = UINT16_MAX;
int32_t x758 = 14;
volatile uint16_t x764 = UINT16_MAX;
int64_t t183 = 288027883734LL;
static int8_t x765 = 1;
volatile int64_t x767 = INT64_MAX;
static int16_t x774 = INT16_MAX;
int32_t x779 = -1;
int8_t x780 = 40;
int32_t x783 = INT32_MIN;
int64_t x793 = INT64_MIN;
static uint32_t x794 = UINT32_MAX;
volatile int8_t x801 = 1;
uint32_t x804 = 422408897U;
uint32_t x809 = 13278281U;
static int16_t x815 = -4283;
int32_t t198 = 737;
int8_t x826 = INT8_MIN;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -26;

    t0 = (x1^(x2>(x3/x4)));

    if (t0 != 54) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint32_t x7 = 231260599U;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -136;

    t1 = (x5^(x6>(x7/x8)));

    if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static int32_t x10 = -1;
	int64_t x11 = INT64_MIN;
	int32_t x12 = -19934;
	int64_t t2 = INT64_MIN;

    t2 = (x9^(x10>(x11/x12)));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x14 = 1LL;
	uint8_t x15 = UINT8_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 2100;

    t3 = (x13^(x14>(x15/x16)));

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	uint32_t x18 = 61680U;
	volatile uint16_t x19 = UINT16_MAX;
	static volatile uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 14940135492437752LL;

    t4 = (x17^(x18>(x19/x20)));

    if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x22 = UINT16_MAX;
	int64_t x24 = -1LL;
	static int64_t t5 = 0LL;

    t5 = (x21^(x22>(x23/x24)));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	int8_t x26 = -1;
	int32_t x27 = -1;
	volatile int32_t t6 = 176343227;

    t6 = (x25^(x26>(x27/x28)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = 1376934218879755LL;
	static uint32_t x34 = 597509U;
	int8_t x35 = 0;
	int16_t x36 = 679;
	int64_t t7 = -22801424951152LL;

    t7 = (x33^(x34>(x35/x36)));

    if (t7 != 1376934218879754LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x38 = 3U;
	static int16_t x39 = INT16_MIN;

    t8 = (x37^(x38>(x39/x40)));

    if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	int16_t x44 = 372;
	volatile int32_t t9 = -2109831;

    t9 = (x41^(x42>(x43/x44)));

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = INT64_MIN;
	volatile int8_t x47 = 26;
	uint64_t x48 = 3440507132454061927LLU;
	static volatile int32_t t10 = -1909;

    t10 = (x45^(x46>(x47/x48)));

    if (t10 != 126) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -1;
	int32_t x50 = 1429;
	uint64_t x51 = 1541119431LLU;
	int32_t x52 = INT32_MIN;
	static int32_t t11 = -346;

    t11 = (x49^(x50>(x51/x52)));

    if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MAX;
	volatile int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int32_t x56 = 5580786;
	static volatile int32_t t12 = -31;

    t12 = (x53^(x54>(x55/x56)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = -1LL;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = -1LL;
	static uint64_t x60 = 4107573543LLU;
	static volatile int64_t t13 = 13563373520151442LL;

    t13 = (x57^(x58>(x59/x60)));

    if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x61 = 10519U;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 2U;

    t14 = (x61^(x62>(x63/x64)));

    if (t14 != 10518) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x66 = 19344U;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = UINT64_MAX;
	int32_t t15 = -1;

    t15 = (x65^(x66>(x67/x68)));

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = INT8_MIN;
	volatile int8_t x70 = -61;
	int32_t x71 = -1;

    t16 = (x69^(x70>(x71/x72)));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = 7;
	static int16_t x74 = -1;
	uint32_t x75 = 706507U;
	volatile int64_t x76 = INT64_MAX;
	volatile int32_t t17 = -1;

    t17 = (x73^(x74>(x75/x76)));

    if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile int64_t x79 = -1LL;
	uint32_t x80 = 203625U;
	volatile int32_t t18 = 14;

    t18 = (x77^(x78>(x79/x80)));

    if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x83 = INT8_MAX;
	static int16_t x84 = 442;
	volatile int32_t t19 = -845;

    t19 = (x81^(x82>(x83/x84)));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 0;
	volatile int32_t x86 = -23081;
	uint8_t x87 = 100U;
	int64_t x88 = INT64_MIN;
	int32_t t20 = 83;

    t20 = (x85^(x86>(x87/x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	int16_t x91 = 4325;
	int64_t x92 = INT64_MIN;
	volatile int32_t t21 = -1967;

    t21 = (x89^(x90>(x91/x92)));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x93 = 27U;
	uint8_t x94 = UINT8_MAX;
	static int32_t x95 = INT32_MIN;
	static uint16_t x96 = 2228U;
	int32_t t22 = 1589;

    t22 = (x93^(x94>(x95/x96)));

    if (t22 != 26) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x98 = 15U;
	static int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	uint64_t t23 = 2649269684016LLU;

    t23 = (x97^(x98>(x99/x100)));

    if (t23 != 4372134770882519056LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 5219LLU;
	static int32_t x103 = 35778759;
	int8_t x104 = 25;
	volatile uint64_t t24 = 9185505733236902LLU;

    t24 = (x101^(x102>(x103/x104)));

    if (t24 != 5219LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 4U;
	static int32_t x107 = 13;
	static volatile int8_t x108 = INT8_MIN;
	volatile uint32_t t25 = 199U;

    t25 = (x105^(x106>(x107/x108)));

    if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x109 = -1959542486774LL;
	static volatile uint32_t x110 = UINT32_MAX;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = -1;
	static int64_t t26 = 357508755LL;

    t26 = (x109^(x110>(x111/x112)));

    if (t26 != -1959542486773LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = -1;
	int8_t x114 = INT8_MIN;
	int64_t x115 = 59126LL;
	int32_t t27 = 8573;

    t27 = (x113^(x114>(x115/x116)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 1;
	int8_t x118 = INT8_MIN;
	static volatile uint16_t x119 = UINT16_MAX;
	int64_t x120 = INT64_MIN;

    t28 = (x117^(x118>(x119/x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x122 = INT16_MAX;
	static int8_t x123 = -1;
	uint32_t t29 = 1U;

    t29 = (x121^(x122>(x123/x124)));

    if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x125 = INT16_MAX;
	static int16_t x126 = 2682;
	static int32_t x127 = 2770280;
	volatile int32_t t30 = 46538;

    t30 = (x125^(x126>(x127/x128)));

    if (t30 != 32766) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	uint32_t x130 = 12U;
	int8_t x131 = 6;
	int16_t x132 = 173;

    t31 = (x129^(x130>(x131/x132)));

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = -1;
	int8_t x134 = 2;
	static int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t32 = -2;

    t32 = (x133^(x134>(x135/x136)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = 454U;
	int16_t x142 = -1;
	static int16_t x143 = INT16_MIN;
	uint32_t t33 = 0U;

    t33 = (x141^(x142>(x143/x144)));

    if (t33 != 454U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x145 = INT32_MIN;
	volatile int16_t x146 = -1;
	int8_t x147 = -1;
	volatile int64_t x148 = -14629259893LL;

    t34 = (x145^(x146>(x147/x148)));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x149 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 3971067760945LLU;
	static int32_t t35 = -62105;

    t35 = (x149^(x150>(x151/x152)));

    if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x153 = 102U;
	int32_t x155 = INT32_MIN;

    t36 = (x153^(x154>(x155/x156)));

    if (t36 != 102) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = 99424777621459673LL;
	volatile int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MIN;
	static volatile int8_t x160 = INT8_MIN;

    t37 = (x157^(x158>(x159/x160)));

    if (t37 != 99424777621459672LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x163 = -15;
	int16_t x164 = INT16_MAX;

    t38 = (x161^(x162>(x163/x164)));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x165 = INT32_MIN;
	int64_t x166 = -100267403670252649LL;

    t39 = (x165^(x166>(x167/x168)));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = UINT64_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	uint64_t t40 = 52653039147LLU;

    t40 = (x169^(x170>(x171/x172)));

    if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	static int64_t x175 = -1431804309836LL;
	int32_t x176 = INT32_MIN;
	int32_t t41 = INT32_MIN;

    t41 = (x173^(x174>(x175/x176)));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = -1368000;
	static uint16_t x178 = 6U;
	int16_t x179 = INT16_MIN;
	static int8_t x180 = INT8_MIN;
	int32_t t42 = -1716320;

    t42 = (x177^(x178>(x179/x180)));

    if (t42 != -1368000) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x181 = 4085528U;
	static volatile int64_t x182 = INT64_MIN;
	static uint8_t x183 = 5U;
	volatile int64_t x184 = INT64_MIN;
	uint32_t t43 = 156750U;

    t43 = (x181^(x182>(x183/x184)));

    if (t43 != 4085528U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x186 = -395155977;
	int32_t x187 = 1;
	static int64_t x188 = -1LL;

    t44 = (x185^(x186>(x187/x188)));

    if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MAX;
	volatile int16_t x190 = INT16_MIN;
	int16_t x191 = 29;
	volatile uint16_t x192 = 25U;

    t45 = (x189^(x190>(x191/x192)));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x194 = 58656453037LLU;
	volatile int16_t x195 = 7179;
	static int32_t t46 = 17299;

    t46 = (x193^(x194>(x195/x196)));

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x197 = -1;
	volatile int64_t x198 = 30LL;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 115U;
	volatile int32_t t47 = -6361;

    t47 = (x197^(x198>(x199/x200)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t48 = INT32_MIN;

    t48 = (x201^(x202>(x203/x204)));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = -1;
	int32_t t49 = -9209749;

    t49 = (x205^(x206>(x207/x208)));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 32063451LLU;
	static int64_t t50 = INT64_MAX;

    t50 = (x209^(x210>(x211/x212)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x215 = 46162;
	int16_t x216 = INT16_MIN;
	int32_t t51 = 175023557;

    t51 = (x213^(x214>(x215/x216)));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -6767696;
	static int64_t x218 = INT64_MIN;
	volatile uint16_t x220 = 31U;

    t52 = (x217^(x218>(x219/x220)));

    if (t52 != -6767696) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x221 = INT16_MAX;
	static int16_t x222 = -14;
	uint16_t x223 = 18U;
	int32_t t53 = -165834895;

    t53 = (x221^(x222>(x223/x224)));

    if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = 19;
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 462U;
	int8_t x228 = INT8_MIN;

    t54 = (x225^(x226>(x227/x228)));

    if (t54 != 18) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x229 = INT64_MIN;
	int64_t x230 = 666377978730LL;
	int8_t x231 = -37;
	int32_t x232 = 10008;

    t55 = (x229^(x230>(x231/x232)));

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x233 = 1U;
	int8_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t56 = -201;

    t56 = (x233^(x234>(x235/x236)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x238 = 134U;
	int64_t x239 = INT64_MIN;
	uint16_t x240 = 5385U;
	static int64_t t57 = 331028447LL;

    t57 = (x237^(x238>(x239/x240)));

    if (t57 != 943148931LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = -1;
	static uint32_t x242 = 1287246U;
	uint16_t x243 = 22U;
	int64_t x244 = -1LL;
	int32_t t58 = -7062;

    t58 = (x241^(x242>(x243/x244)));

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x246 = INT64_MIN;
	static volatile int16_t x247 = -72;
	volatile int32_t x248 = -1;
	volatile int32_t t59 = -995377;

    t59 = (x245^(x246>(x247/x248)));

    if (t59 != -12213301) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x250 = 14879516U;
	uint32_t x251 = 644491U;
	static volatile int32_t t60 = -46939943;

    t60 = (x249^(x250>(x251/x252)));

    if (t60 != 6003) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -6755263;
	int64_t x254 = -1714715LL;
	uint64_t x255 = 260938LLU;
	volatile int64_t x256 = -1LL;
	volatile int32_t t61 = -1361;

    t61 = (x253^(x254>(x255/x256)));

    if (t61 != -6755264) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 119LLU;
	uint32_t t62 = UINT32_MAX;

    t62 = (x257^(x258>(x259/x260)));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1;
	static uint16_t x262 = UINT16_MAX;
	int32_t t63 = 0;

    t63 = (x261^(x262>(x263/x264)));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = -1;
	uint64_t x266 = 876517262919256LLU;
	uint16_t x267 = 5U;
	volatile int32_t x268 = 484958;
	volatile int32_t t64 = 3;

    t64 = (x265^(x266>(x267/x268)));

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x269 = INT32_MIN;
	uint32_t x271 = 2U;
	static int32_t t65 = 15;

    t65 = (x269^(x270>(x271/x272)));

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = 8497;
	static volatile uint8_t x274 = 4U;
	int16_t x275 = INT16_MAX;
	int32_t t66 = -28704;

    t66 = (x273^(x274>(x275/x276)));

    if (t66 != 8496) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x277 = 0U;
	int64_t x278 = INT64_MIN;
	int16_t x279 = INT16_MAX;
	static uint32_t x280 = UINT32_MAX;

    t67 = (x277^(x278>(x279/x280)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -6775;
	static int16_t x282 = -56;
	volatile uint64_t x283 = UINT64_MAX;
	uint16_t x284 = 16488U;

    t68 = (x281^(x282>(x283/x284)));

    if (t68 != -6776) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x286 = INT16_MAX;
	int8_t x288 = INT8_MAX;
	int32_t t69 = 84255;

    t69 = (x285^(x286>(x287/x288)));

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MAX;
	static uint16_t x290 = UINT16_MAX;
	int8_t x291 = 1;
	int32_t x292 = -1;

    t70 = (x289^(x290>(x291/x292)));

    if (t70 != 126) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	int32_t t71 = -46001;

    t71 = (x293^(x294>(x295/x296)));

    if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = 15687U;
	int16_t x299 = INT16_MIN;
	static volatile int32_t t72 = -818693553;

    t72 = (x297^(x298>(x299/x300)));

    if (t72 != 15686) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x302 = INT8_MAX;
	int16_t x304 = INT16_MAX;

    t73 = (x301^(x302>(x303/x304)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x305 = UINT8_MAX;
	uint32_t x306 = UINT32_MAX;
	static uint16_t x307 = 14745U;
	static uint8_t x308 = UINT8_MAX;
	static int32_t t74 = 315464;

    t74 = (x305^(x306>(x307/x308)));

    if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x309 = UINT16_MAX;
	int8_t x310 = INT8_MIN;
	int16_t x312 = INT16_MAX;
	volatile int32_t t75 = 58;

    t75 = (x309^(x310>(x311/x312)));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x314 = 63151LLU;
	static int8_t x315 = -1;
	uint32_t x316 = 10U;
	volatile int32_t t76 = 7;

    t76 = (x313^(x314>(x315/x316)));

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x317 = -1LL;
	static volatile uint64_t x318 = 2LLU;
	static uint16_t x319 = 23240U;
	static int8_t x320 = INT8_MIN;
	volatile int64_t t77 = 29431433044346620LL;

    t77 = (x317^(x318>(x319/x320)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x321 = UINT32_MAX;
	uint16_t x322 = 4592U;
	volatile int8_t x324 = -1;
	volatile uint32_t t78 = 13022U;

    t78 = (x321^(x322>(x323/x324)));

    if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x326 = UINT32_MAX;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = 109682655U;
	volatile int32_t t79 = 16;

    t79 = (x325^(x326>(x327/x328)));

    if (t79 != -6) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile int8_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	volatile int32_t t80 = 76818583;

    t80 = (x329^(x330>(x331/x332)));

    if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	static volatile uint8_t x335 = 52U;
	static int32_t x336 = -1;
	static int64_t t81 = INT64_MAX;

    t81 = (x333^(x334>(x335/x336)));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = -1LL;
	int64_t x339 = 38LL;
	int64_t x340 = -1LL;
	int64_t t82 = -15LL;

    t82 = (x337^(x338>(x339/x340)));

    if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x341 = INT32_MAX;
	int64_t x342 = -1LL;
	volatile int32_t t83 = INT32_MAX;

    t83 = (x341^(x342>(x343/x344)));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x349 = 1U;
	int32_t x352 = INT32_MIN;
	volatile uint32_t t84 = 15844U;

    t84 = (x349^(x350>(x351/x352)));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = -1;
	int32_t x354 = 1330;
	uint8_t x355 = 79U;
	volatile int32_t t85 = -13970688;

    t85 = (x353^(x354>(x355/x356)));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = UINT64_MAX;
	volatile uint16_t x358 = 101U;

    t86 = (x357^(x358>(x359/x360)));

    if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x361 = UINT32_MAX;
	uint8_t x362 = 50U;
	static uint32_t x363 = 2567940U;
	int32_t x364 = -531;
	uint32_t t87 = 8267419U;

    t87 = (x361^(x362>(x363/x364)));

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = 31;
	int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	static int64_t x368 = -1LL;

    t88 = (x365^(x366>(x367/x368)));

    if (t88 != 31) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x369 = 98U;
	volatile int16_t x370 = 5400;
	volatile int32_t t89 = -150555;

    t89 = (x369^(x370>(x371/x372)));

    if (t89 != 99) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	static int64_t x374 = INT64_MIN;
	static int8_t x376 = 3;

    t90 = (x373^(x374>(x375/x376)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = INT16_MIN;
	static int8_t x378 = -57;
	volatile uint64_t x379 = UINT64_MAX;

    t91 = (x377^(x378>(x379/x380)));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x383 = INT64_MIN;

    t92 = (x381^(x382>(x383/x384)));

    if (t92 != 15120932) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = -11621;
	int64_t x386 = INT64_MIN;
	static uint8_t x387 = 3U;
	uint8_t x388 = 3U;
	volatile int32_t t93 = 647112125;

    t93 = (x385^(x386>(x387/x388)));

    if (t93 != -11621) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x389 = INT32_MIN;
	uint8_t x390 = 117U;
	int32_t x391 = 1454;
	int32_t t94 = -35619526;

    t94 = (x389^(x390>(x391/x392)));

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x393 = 461873569LLU;
	int16_t x394 = INT16_MAX;
	volatile int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MAX;
	uint64_t t95 = 701815LLU;

    t95 = (x393^(x394>(x395/x396)));

    if (t95 != 461873568LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x397 = -1;
	static int8_t x398 = -24;
	int8_t x399 = 0;
	uint32_t x400 = 19U;
	volatile int32_t t96 = 3107;

    t96 = (x397^(x398>(x399/x400)));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x401 = 15395U;
	int32_t x402 = INT32_MIN;
	int8_t x403 = -4;
	static int64_t x404 = INT64_MAX;

    t97 = (x401^(x402>(x403/x404)));

    if (t97 != 15395) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x406 = INT16_MIN;
	int64_t x407 = -1LL;
	int32_t x408 = INT32_MIN;
	volatile int32_t t98 = -3;

    t98 = (x405^(x406>(x407/x408)));

    if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x410 = UINT16_MAX;
	uint32_t x411 = 30589820U;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t99 = 120411;

    t99 = (x409^(x410>(x411/x412)));

    if (t99 != -131) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = -1;
	int32_t x414 = INT32_MAX;
	int16_t x415 = -47;
	volatile int32_t t100 = 23272241;

    t100 = (x413^(x414>(x415/x416)));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x417 = 1LL;
	int32_t x420 = INT32_MIN;
	int64_t t101 = -20928864496494881LL;

    t101 = (x417^(x418>(x419/x420)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x422 = 142U;
	static uint64_t x423 = UINT64_MAX;
	volatile int32_t t102 = 4;

    t102 = (x421^(x422>(x423/x424)));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x429 = 59336148952LLU;
	int8_t x431 = INT8_MIN;
	static int32_t x432 = -2397498;
	uint64_t t103 = 459071837316LLU;

    t103 = (x429^(x430>(x431/x432)));

    if (t103 != 59336148953LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = -1025629631;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	int8_t x436 = 1;
	int32_t t104 = 10;

    t104 = (x433^(x434>(x435/x436)));

    if (t104 != -1025629631) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x437 = 274304811;
	int32_t x438 = INT32_MIN;
	int32_t x439 = 1528;
	volatile int32_t t105 = -770380;

    t105 = (x437^(x438>(x439/x440)));

    if (t105 != 274304811) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x442 = -1;
	int64_t x443 = INT64_MIN;
	int16_t x444 = -20;
	volatile int32_t t106 = -97046123;

    t106 = (x441^(x442>(x443/x444)));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x445 = 3485495LLU;
	int32_t x447 = INT32_MAX;
	static volatile int32_t x448 = -1;
	uint64_t t107 = 148LLU;

    t107 = (x445^(x446>(x447/x448)));

    if (t107 != 3485494LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = 25;
	uint64_t x450 = 56952018LLU;
	int16_t x451 = INT16_MIN;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t108 = 156091786;

    t108 = (x449^(x450>(x451/x452)));

    if (t108 != 24) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x453 = UINT64_MAX;
	int8_t x454 = INT8_MAX;
	uint8_t x455 = UINT8_MAX;
	int16_t x456 = INT16_MAX;

    t109 = (x453^(x454>(x455/x456)));

    if (t109 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x458 = -1;
	int16_t x459 = INT16_MAX;
	volatile int8_t x460 = INT8_MIN;

    t110 = (x457^(x458>(x459/x460)));

    if (t110 != 222) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x464 = INT64_MIN;
	int32_t t111 = -87;

    t111 = (x461^(x462>(x463/x464)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = -2;
	uint16_t x466 = UINT16_MAX;
	volatile uint32_t x467 = UINT32_MAX;
	static volatile int32_t x468 = -656;
	int32_t t112 = 540;

    t112 = (x465^(x466>(x467/x468)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = INT8_MIN;
	volatile int8_t x470 = -1;
	uint8_t x471 = 13U;
	int16_t x472 = INT16_MIN;
	int32_t t113 = -2061;

    t113 = (x469^(x470>(x471/x472)));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = INT16_MIN;
	uint16_t x474 = UINT16_MAX;
	int32_t x475 = INT32_MIN;
	int32_t t114 = 96;

    t114 = (x473^(x474>(x475/x476)));

    if (t114 != -32767) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = 8;
	static int64_t x479 = 1330555952977369LL;
	volatile uint16_t x480 = 28U;
	volatile int32_t t115 = -2;

    t115 = (x477^(x478>(x479/x480)));

    if (t115 != 8) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x481 = -6296;
	int8_t x482 = INT8_MAX;
	static volatile int32_t x483 = -7412;
	int32_t x484 = INT32_MIN;
	static int32_t t116 = 4174350;

    t116 = (x481^(x482>(x483/x484)));

    if (t116 != -6295) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x485 = 423;
	volatile int8_t x486 = 0;
	uint8_t x487 = 24U;
	volatile int32_t t117 = -27591;

    t117 = (x485^(x486>(x487/x488)));

    if (t117 != 423) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x489 = INT32_MAX;
	static volatile int32_t x490 = 12427115;
	uint64_t x491 = 33540774068LLU;
	uint16_t x492 = UINT16_MAX;
	int32_t t118 = 4;

    t118 = (x489^(x490>(x491/x492)));

    if (t118 != 2147483646) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x495 = INT16_MIN;
	int16_t x496 = INT16_MIN;
	int32_t t119 = 3;

    t119 = (x493^(x494>(x495/x496)));

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	volatile int32_t x498 = INT32_MIN;
	int32_t x500 = INT32_MIN;
	int64_t t120 = 2052387939LL;

    t120 = (x497^(x498>(x499/x500)));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = 0;
	volatile int64_t x502 = INT64_MIN;
	static uint16_t x503 = 4221U;
	static int64_t x504 = -86788428859909LL;

    t121 = (x501^(x502>(x503/x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x505 = UINT32_MAX;
	static int32_t x506 = INT32_MIN;
	uint8_t x507 = 76U;
	volatile int32_t x508 = 280527;
	volatile uint32_t t122 = UINT32_MAX;

    t122 = (x505^(x506>(x507/x508)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x509 = INT8_MIN;
	uint8_t x510 = 13U;
	volatile uint32_t x511 = UINT32_MAX;
	static uint32_t x512 = UINT32_MAX;
	volatile int32_t t123 = 6;

    t123 = (x509^(x510>(x511/x512)));

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = INT16_MAX;
	volatile int32_t x514 = -43;
	int32_t t124 = -143;

    t124 = (x513^(x514>(x515/x516)));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MAX;
	int16_t x518 = INT16_MIN;
	uint16_t x519 = 1815U;
	static uint16_t x520 = UINT16_MAX;
	volatile int32_t t125 = INT32_MAX;

    t125 = (x517^(x518>(x519/x520)));

    if (t125 != INT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x521 = INT16_MIN;
	int64_t x524 = INT64_MAX;
	volatile int32_t t126 = -5;

    t126 = (x521^(x522>(x523/x524)));

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x525 = 13045U;
	int64_t x527 = -45LL;
	int64_t x528 = -1LL;
	static int32_t t127 = 1975614;

    t127 = (x525^(x526>(x527/x528)));

    if (t127 != 13044) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x530 = 1;
	int64_t x531 = INT64_MAX;
	int8_t x532 = INT8_MAX;
	static int64_t t128 = 595442LL;

    t128 = (x529^(x530>(x531/x532)));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x533 = 3544U;
	static uint8_t x534 = 80U;
	static uint32_t x535 = UINT32_MAX;
	uint32_t x536 = 1U;

    t129 = (x533^(x534>(x535/x536)));

    if (t129 != 3544) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x538 = 0U;
	volatile uint32_t x539 = 67U;
	uint16_t x540 = UINT16_MAX;
	int32_t t130 = INT32_MIN;

    t130 = (x537^(x538>(x539/x540)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x541 = -1;
	int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MIN;
	int32_t t131 = 12935268;

    t131 = (x541^(x542>(x543/x544)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x545 = 478393LLU;
	static int16_t x547 = INT16_MIN;
	static volatile int16_t x548 = -1;
	static uint64_t t132 = 59LLU;

    t132 = (x545^(x546>(x547/x548)));

    if (t132 != 478393LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint64_t x549 = UINT64_MAX;
	uint8_t x550 = 0U;
	int64_t x551 = INT64_MIN;
	int16_t x552 = INT16_MIN;
	static uint64_t t133 = UINT64_MAX;

    t133 = (x549^(x550>(x551/x552)));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x555 = 26U;
	uint64_t x556 = 681073030LLU;
	static int32_t t134 = -119301474;

    t134 = (x553^(x554>(x555/x556)));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x558 = INT16_MIN;
	int64_t x559 = -2615181609589LL;
	static uint8_t x560 = UINT8_MAX;
	volatile int32_t t135 = -777;

    t135 = (x557^(x558>(x559/x560)));

    if (t135 != 2147483646) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x562 = UINT64_MAX;
	uint64_t x563 = UINT64_MAX;
	uint8_t x564 = UINT8_MAX;
	static volatile int32_t t136 = -99021364;

    t136 = (x561^(x562>(x563/x564)));

    if (t136 != 15480) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x566 = 32957;
	static int8_t x567 = 43;
	static int8_t x568 = INT8_MAX;
	volatile int64_t t137 = 509LL;

    t137 = (x565^(x566>(x567/x568)));

    if (t137 != -2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x569 = 11075LLU;
	int64_t x570 = INT64_MIN;
	uint8_t x571 = UINT8_MAX;
	int16_t x572 = 1;
	static uint64_t t138 = 26862651374LLU;

    t138 = (x569^(x570>(x571/x572)));

    if (t138 != 11075LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x573 = -1LL;
	static int16_t x574 = -448;
	static int32_t x575 = -1;
	int8_t x576 = INT8_MIN;
	int64_t t139 = 303981477092268845LL;

    t139 = (x573^(x574>(x575/x576)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x578 = 2U;
	int8_t x579 = INT8_MIN;

    t140 = (x577^(x578>(x579/x580)));

    if (t140 != 27) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x581 = 15371U;
	static int64_t x582 = INT64_MIN;
	uint64_t x584 = UINT64_MAX;

    t141 = (x581^(x582>(x583/x584)));

    if (t141 != 15370) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = 15;
	int16_t x587 = -301;
	int64_t x588 = -22LL;
	static int32_t t142 = -185;

    t142 = (x585^(x586>(x587/x588)));

    if (t142 != 15) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x589 = -1LL;
	uint16_t x590 = 4U;
	static int16_t x592 = INT16_MAX;

    t143 = (x589^(x590>(x591/x592)));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x593 = 1036946033LLU;
	int16_t x596 = -1;
	uint64_t t144 = 95521278154LLU;

    t144 = (x593^(x594>(x595/x596)));

    if (t144 != 1036946033LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x598 = 59463;
	uint32_t x599 = UINT32_MAX;
	static int64_t x600 = INT64_MAX;
	int64_t t145 = -394485283719LL;

    t145 = (x597^(x598>(x599/x600)));

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x601 = -1;
	int64_t x602 = INT64_MIN;
	volatile uint16_t x603 = UINT16_MAX;
	uint64_t x604 = 194826898LLU;
	volatile int32_t t146 = -498;

    t146 = (x601^(x602>(x603/x604)));

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x607 = INT16_MAX;
	int8_t x608 = INT8_MIN;
	int64_t t147 = INT64_MIN;

    t147 = (x605^(x606>(x607/x608)));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x609 = INT64_MIN;
	volatile int64_t x611 = -1LL;
	int8_t x612 = -8;

    t148 = (x609^(x610>(x611/x612)));

    if (t148 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x613 = -27;
	int64_t x616 = INT64_MIN;

    t149 = (x613^(x614>(x615/x616)));

    if (t149 != -27) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x617 = 12;
	uint64_t x618 = 1999968LLU;
	uint8_t x619 = 0U;
	static uint8_t x620 = 6U;
	volatile int32_t t150 = 0;

    t150 = (x617^(x618>(x619/x620)));

    if (t150 != 13) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x625 = INT32_MAX;
	int16_t x626 = INT16_MIN;
	int8_t x627 = -61;
	int32_t t151 = INT32_MAX;

    t151 = (x625^(x626>(x627/x628)));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x629 = 85U;
	uint32_t x631 = 130432U;
	volatile int64_t x632 = -1LL;
	int32_t t152 = -16476690;

    t152 = (x629^(x630>(x631/x632)));

    if (t152 != 84) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x634 = INT32_MAX;
	volatile int16_t x635 = 3776;
	static int8_t x636 = -1;
	static int64_t t153 = 473606326651612LL;

    t153 = (x633^(x634>(x635/x636)));

    if (t153 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x638 = -152065604374LL;
	volatile int16_t x639 = INT16_MIN;
	uint64_t t154 = 192836LLU;

    t154 = (x637^(x638>(x639/x640)));

    if (t154 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = -43LL;
	int8_t x643 = INT8_MIN;
	static volatile uint64_t x644 = 83681855633229LLU;
	volatile int64_t t155 = -28156062778LL;

    t155 = (x641^(x642>(x643/x644)));

    if (t155 != -43LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x645 = 29;
	int32_t x646 = INT32_MIN;
	uint8_t x647 = UINT8_MAX;
	int32_t x648 = INT32_MIN;
	static volatile int32_t t156 = 52530;

    t156 = (x645^(x646>(x647/x648)));

    if (t156 != 29) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x653 = -1963577874752240275LL;
	uint8_t x654 = 35U;
	int16_t x656 = -1;
	volatile int64_t t157 = -8125199LL;

    t157 = (x653^(x654>(x655/x656)));

    if (t157 != -1963577874752240276LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x657 = -1LL;
	volatile int32_t x658 = INT32_MAX;
	static int16_t x660 = -1;
	int64_t t158 = 4024214158LL;

    t158 = (x657^(x658>(x659/x660)));

    if (t158 != -2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x666 = UINT8_MAX;
	uint64_t x667 = UINT64_MAX;
	uint16_t x668 = 2343U;

    t159 = (x665^(x666>(x667/x668)));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x669 = 2U;
	int8_t x670 = -1;
	static uint64_t x672 = 315335525323162658LLU;

    t160 = (x669^(x670>(x671/x672)));

    if (t160 != 3U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x674 = UINT64_MAX;
	int64_t x675 = -3927551946LL;
	uint32_t x676 = 197036U;
	static int32_t t161 = 1967;

    t161 = (x673^(x674>(x675/x676)));

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x677 = -1;
	int32_t x678 = -78;
	volatile int64_t x680 = -5727054LL;
	static int32_t t162 = -8241292;

    t162 = (x677^(x678>(x679/x680)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x681 = INT64_MIN;
	uint32_t x683 = 358510U;
	volatile int32_t x684 = INT32_MAX;
	volatile int64_t t163 = -80317855871411229LL;

    t163 = (x681^(x682>(x683/x684)));

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x685 = UINT32_MAX;
	static volatile int32_t x686 = -1;
	static int8_t x688 = INT8_MIN;

    t164 = (x685^(x686>(x687/x688)));

    if (t164 != 4294967294U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x691 = UINT32_MAX;
	uint8_t x692 = 3U;
	int32_t t165 = INT32_MIN;

    t165 = (x689^(x690>(x691/x692)));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x694 = INT8_MIN;

    t166 = (x693^(x694>(x695/x696)));

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x697 = INT32_MIN;
	static int64_t x699 = -1LL;
	static volatile int16_t x700 = INT16_MIN;
	int32_t t167 = INT32_MIN;

    t167 = (x697^(x698>(x699/x700)));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x701 = -1LL;
	int8_t x702 = INT8_MAX;
	int64_t x703 = 1LL;
	int32_t x704 = -245620;
	int64_t t168 = 135854702475905LL;

    t168 = (x701^(x702>(x703/x704)));

    if (t168 != -2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x705 = INT32_MIN;
	uint16_t x706 = 0U;
	uint16_t x707 = 5860U;
	static int16_t x708 = INT16_MAX;

    t169 = (x705^(x706>(x707/x708)));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = INT8_MIN;
	uint16_t x710 = UINT16_MAX;
	uint32_t x712 = 9U;
	volatile int32_t t170 = 60701;

    t170 = (x709^(x710>(x711/x712)));

    if (t170 != -127) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x713 = INT32_MAX;
	int32_t x715 = 842055;

    t171 = (x713^(x714>(x715/x716)));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = -1;
	int64_t x718 = INT64_MIN;
	volatile uint64_t x719 = 10823042116957LLU;
	int64_t x720 = INT64_MIN;

    t172 = (x717^(x718>(x719/x720)));

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x723 = -148617930148LL;
	int64_t x724 = -888LL;
	int32_t t173 = 199;

    t173 = (x721^(x722>(x723/x724)));

    if (t173 != 5) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x725 = 44U;
	int32_t x726 = INT32_MIN;
	volatile int64_t x728 = -1LL;

    t174 = (x725^(x726>(x727/x728)));

    if (t174 != 44) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x729 = INT16_MIN;
	volatile int64_t x730 = -1LL;
	static volatile int8_t x731 = INT8_MIN;
	int32_t t175 = -738455;

    t175 = (x729^(x730>(x731/x732)));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x733 = -1;
	uint32_t x734 = 101526U;
	volatile int32_t x735 = -1;
	static uint32_t x736 = 125U;
	volatile int32_t t176 = 43;

    t176 = (x733^(x734>(x735/x736)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x737 = INT16_MAX;
	int32_t x739 = INT32_MAX;
	volatile int16_t x740 = -1;
	int32_t t177 = 3677;

    t177 = (x737^(x738>(x739/x740)));

    if (t177 != 32766) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x741 = UINT32_MAX;
	int64_t x742 = -2562219270944445268LL;
	uint64_t x743 = UINT64_MAX;
	int64_t x744 = INT64_MIN;
	volatile uint32_t t178 = 1662U;

    t178 = (x741^(x742>(x743/x744)));

    if (t178 != 4294967294U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x745 = 28767351U;
	uint8_t x746 = 1U;
	int32_t x747 = INT32_MIN;
	static uint16_t x748 = UINT16_MAX;
	uint32_t t179 = 4537U;

    t179 = (x745^(x746>(x747/x748)));

    if (t179 != 28767350U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x749 = INT8_MIN;
	uint8_t x750 = 13U;
	int32_t t180 = -19;

    t180 = (x749^(x750>(x751/x752)));

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x753 = UINT32_MAX;
	int64_t x754 = -1LL;
	volatile int16_t x756 = INT16_MIN;
	volatile uint32_t t181 = UINT32_MAX;

    t181 = (x753^(x754>(x755/x756)));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x757 = -1;
	int64_t x759 = INT64_MAX;
	volatile int8_t x760 = INT8_MIN;
	int32_t t182 = -40;

    t182 = (x757^(x758>(x759/x760)));

    if (t182 != -2) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = -864333060995582163LL;
	uint64_t x762 = 679221LLU;
	int8_t x763 = INT8_MAX;

    t183 = (x761^(x762>(x763/x764)));

    if (t183 != -864333060995582164LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x766 = 69677673U;
	int8_t x768 = INT8_MIN;
	volatile int32_t t184 = 2271;

    t184 = (x765^(x766>(x767/x768)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x769 = 414U;
	int16_t x770 = INT16_MIN;
	static int16_t x771 = INT16_MIN;
	volatile uint16_t x772 = UINT16_MAX;
	uint32_t t185 = 13782U;

    t185 = (x769^(x770>(x771/x772)));

    if (t185 != 414U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x773 = 287U;
	int32_t x775 = 739440526;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t186 = 104;

    t186 = (x773^(x774>(x775/x776)));

    if (t186 != 286) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x777 = INT32_MIN;
	int32_t x778 = INT32_MAX;
	int32_t t187 = -3508;

    t187 = (x777^(x778>(x779/x780)));

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x781 = INT64_MIN;
	uint16_t x782 = UINT16_MAX;
	static volatile uint16_t x784 = UINT16_MAX;
	int64_t t188 = 495LL;

    t188 = (x781^(x782>(x783/x784)));

    if (t188 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x785 = 1928;
	static uint16_t x786 = 12U;
	static volatile int8_t x787 = -7;
	static int32_t x788 = INT32_MIN;
	int32_t t189 = -55162588;

    t189 = (x785^(x786>(x787/x788)));

    if (t189 != 1929) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = INT32_MIN;
	volatile int32_t x790 = INT32_MIN;
	int8_t x791 = INT8_MAX;
	static volatile int16_t x792 = 7;
	static volatile int32_t t190 = INT32_MIN;

    t190 = (x789^(x790>(x791/x792)));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x795 = INT8_MIN;
	static int16_t x796 = INT16_MAX;
	volatile int64_t t191 = 119LL;

    t191 = (x793^(x794>(x795/x796)));

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x797 = -107;
	int16_t x798 = -1;
	uint16_t x799 = UINT16_MAX;
	static int16_t x800 = -352;
	volatile int32_t t192 = -1;

    t192 = (x797^(x798>(x799/x800)));

    if (t192 != -108) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x802 = 2007316LLU;
	int8_t x803 = -1;
	int32_t t193 = -2053119;

    t193 = (x801^(x802>(x803/x804)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x805 = 674182468371095LLU;
	uint8_t x806 = UINT8_MAX;
	int64_t x807 = INT64_MIN;
	static int64_t x808 = -57101635LL;
	volatile uint64_t t194 = 1843761290183639LLU;

    t194 = (x805^(x806>(x807/x808)));

    if (t194 != 674182468371095LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x810 = INT32_MIN;
	uint16_t x811 = 1U;
	volatile int64_t x812 = 5949410595LL;
	uint32_t t195 = 5478U;

    t195 = (x809^(x810>(x811/x812)));

    if (t195 != 13278281U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x813 = 27377346964LLU;
	static uint16_t x814 = 186U;
	int16_t x816 = -1;
	uint64_t t196 = 93432796LLU;

    t196 = (x813^(x814>(x815/x816)));

    if (t196 != 27377346964LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x817 = INT32_MIN;
	static uint8_t x818 = UINT8_MAX;
	volatile int16_t x819 = 0;
	volatile int8_t x820 = INT8_MAX;
	int32_t t197 = -31;

    t197 = (x817^(x818>(x819/x820)));

    if (t197 != -2147483647) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x821 = -1;
	int16_t x822 = INT16_MIN;
	int16_t x823 = -1;
	volatile uint64_t x824 = 85902LLU;

    t198 = (x821^(x822>(x823/x824)));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x825 = UINT16_MAX;
	uint8_t x827 = 31U;
	int16_t x828 = 8;
	int32_t t199 = 14267019;

    t199 = (x825^(x826>(x827/x828)));

    if (t199 != 65535) { NG(); } else { ; }
	
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

