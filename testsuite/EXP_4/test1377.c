
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

uint8_t x2 = 3U;
uint16_t x4 = UINT16_MAX;
int16_t x9 = -63;
int8_t x19 = -1;
int64_t x25 = INT64_MIN;
volatile int64_t t6 = -233LL;
volatile int64_t t7 = 5LL;
int16_t x37 = -1;
int8_t x39 = INT8_MIN;
int16_t x45 = INT16_MIN;
int32_t t11 = -24;
volatile int64_t t13 = 10157843LL;
int64_t x59 = INT64_MIN;
int32_t x62 = INT32_MIN;
volatile int32_t x64 = INT32_MIN;
uint32_t x66 = UINT32_MAX;
volatile uint32_t t16 = 14319U;
volatile int32_t x75 = -4020;
volatile int64_t x77 = INT64_MIN;
static volatile int64_t x82 = 25009737920LL;
volatile int32_t t23 = -1;
static uint64_t x107 = UINT64_MAX;
int16_t x109 = INT16_MIN;
int64_t x119 = -66753279784LL;
static uint16_t x131 = 525U;
int8_t x134 = -1;
static volatile int8_t x136 = 25;
volatile uint64_t t32 = 907891549055LLU;
int16_t x139 = INT16_MIN;
volatile uint64_t x151 = UINT64_MAX;
int32_t x153 = 13;
int32_t t38 = 94366245;
uint64_t x164 = 439LLU;
int32_t x169 = INT32_MIN;
volatile uint32_t t41 = 418306200U;
static volatile int64_t t43 = -28518636LL;
int64_t x205 = INT64_MIN;
int32_t x209 = -1;
volatile int16_t x213 = -50;
int64_t x214 = INT64_MIN;
int64_t x216 = 21LL;
int16_t x225 = INT16_MIN;
uint64_t x226 = 15388364873297342LLU;
uint32_t x227 = UINT32_MAX;
int32_t x228 = 1;
volatile uint8_t x246 = 27U;
volatile int16_t x249 = -1;
int16_t x259 = -59;
uint64_t t62 = 3380564490854887LLU;
uint32_t x264 = 28U;
int16_t x269 = INT16_MIN;
volatile int16_t x278 = INT16_MIN;
int32_t x281 = INT32_MIN;
int8_t x290 = -61;
uint64_t x294 = UINT64_MAX;
static volatile int16_t x295 = 1;
int32_t x296 = INT32_MAX;
int16_t x297 = INT16_MIN;
static int16_t x299 = -1;
uint64_t x316 = UINT64_MAX;
volatile int16_t x319 = 2986;
int64_t x323 = INT64_MAX;
int32_t x330 = INT32_MIN;
uint8_t x331 = 0U;
static int64_t x333 = -2530LL;
int16_t x334 = INT16_MIN;
int64_t x338 = INT64_MIN;
int64_t t82 = -13167848799LL;
int64_t x346 = -1LL;
static volatile uint32_t t84 = 1U;
volatile int8_t x354 = -11;
volatile uint16_t x357 = 1U;
static int8_t x358 = -41;
volatile int32_t t88 = 48475455;
int32_t x373 = INT32_MIN;
static volatile int32_t t90 = -45589599;
uint8_t x377 = 31U;
uint32_t x378 = 1946U;
volatile int8_t x379 = -5;
volatile int16_t x386 = 46;
uint8_t x392 = UINT8_MAX;
int16_t x402 = -3;
static int16_t x409 = INT16_MIN;
uint32_t x410 = UINT32_MAX;
int64_t x411 = INT64_MIN;
uint64_t x420 = 114556642247LLU;
static int64_t t102 = -3814LL;
int64_t x427 = -549363184579888LL;
uint32_t x428 = UINT32_MAX;
static int8_t x436 = -20;
volatile uint32_t t105 = 1000005U;
volatile uint64_t x441 = 14478672448LLU;
static int16_t x447 = INT16_MIN;
int32_t x451 = -445771086;
static volatile int8_t x455 = -1;
static int64_t x458 = -495956LL;
int8_t x473 = INT8_MIN;
volatile int64_t x483 = 130713845594LL;
int8_t x487 = 13;
static uint16_t x491 = 16U;
int32_t t119 = -534011;
volatile int64_t t122 = 2242092857LL;
static volatile uint16_t x505 = 1U;
int16_t x506 = INT16_MAX;
int8_t x508 = INT8_MIN;
volatile int32_t t123 = 2563;
int64_t x514 = -1LL;
static uint8_t x515 = 6U;
volatile uint64_t t125 = 204330251LLU;
static int16_t x523 = -1;
int32_t x524 = INT32_MAX;
static int8_t x534 = INT8_MAX;
static volatile int32_t t129 = -6490;
volatile int64_t x539 = INT64_MIN;
uint64_t x540 = 1370315161858LLU;
uint64_t t132 = 138386049597874LLU;
int16_t x549 = 52;
static volatile uint64_t x550 = 14LLU;
uint16_t x558 = 56U;
int32_t t135 = 418929;
uint32_t x583 = 1U;
int8_t x587 = -28;
int64_t x589 = INT64_MAX;
volatile int32_t x591 = 3667;
int32_t x593 = -32111;
uint32_t x598 = UINT32_MAX;
int64_t x605 = -1LL;
int16_t x608 = INT16_MIN;
static uint64_t t147 = 1069133393920241362LLU;
int8_t x622 = INT8_MIN;
static volatile uint32_t x626 = 111594834U;
volatile int64_t t152 = 6218781820LL;
int32_t x643 = -1;
static volatile int16_t x662 = -1;
static volatile uint16_t x663 = 1U;
int16_t x665 = INT16_MIN;
uint64_t x668 = 17581106756306107LLU;
int32_t x671 = INT32_MIN;
volatile int16_t x676 = INT16_MIN;
volatile int8_t x685 = 2;
int8_t x686 = -1;
static int8_t x691 = INT8_MAX;
uint32_t x699 = 13U;
volatile uint32_t x706 = 59898U;
int16_t x707 = INT16_MAX;
uint32_t t170 = 64U;
int8_t x710 = -1;
uint8_t x712 = 31U;
int32_t t173 = -25705;
uint32_t x725 = 3647U;
static uint64_t x727 = 3322011156173231LLU;
uint32_t t175 = 1614867032U;
int16_t x730 = -1;
static int32_t x731 = -9017296;
uint8_t x732 = 0U;
int8_t x734 = -1;
int32_t t177 = -1;
volatile int32_t x742 = INT32_MAX;
volatile int64_t x744 = INT64_MIN;
static int8_t x746 = -1;
int64_t x751 = 3792LL;
volatile int64_t t181 = -1415LL;
uint16_t x761 = 6U;
static uint32_t x768 = 342901U;
int8_t x777 = -3;
int8_t x779 = -1;
static uint8_t x780 = UINT8_MAX;
volatile uint32_t t188 = 7U;
int16_t x783 = INT16_MIN;
volatile uint8_t x784 = 3U;
volatile int32_t t189 = -11;
volatile int64_t x792 = INT64_MAX;
volatile int32_t t191 = -6744;
volatile int16_t x795 = INT16_MIN;
uint8_t x806 = 1U;
uint32_t x808 = UINT32_MAX;
int32_t x811 = -1830;
static volatile uint8_t x812 = UINT8_MAX;


void f0(void) {
    	volatile int16_t x1 = -1;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 125;

    t0 = (x1%(x2+(x3==x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int32_t x6 = 115218;
	uint64_t x7 = UINT64_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -5082596;

    t1 = (x5%(x6+(x7==x8)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = -1LL;
	int32_t t2 = -7722;

    t2 = (x9%(x10+(x11==x12)));

    if (t2 != -63) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint16_t x14 = 21U;
	int64_t x15 = -1LL;
	int64_t x16 = -1LL;
	volatile int32_t t3 = 63;

    t3 = (x13%(x14+(x15==x16)));

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 70U;
	int32_t x18 = INT32_MIN;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -5240401;

    t4 = (x17%(x18+(x19==x20)));

    if (t4 != 70) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = -8787;
	int16_t x22 = INT16_MAX;
	static uint64_t x23 = 100472816LLU;
	volatile int32_t x24 = -836705;
	static int32_t t5 = 4109;

    t5 = (x21%(x22+(x23==x24)));

    if (t5 != -8787) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MAX;
	volatile int64_t x27 = INT64_MIN;
	int16_t x28 = -1;

    t6 = (x25%(x26+(x27==x28)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int64_t x30 = INT64_MIN;
	int32_t x31 = -1;
	static int16_t x32 = INT16_MAX;

    t7 = (x29%(x30+(x31==x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	uint64_t x34 = 86LLU;
	int8_t x35 = INT8_MIN;
	volatile uint64_t x36 = 42381LLU;
	volatile uint64_t t8 = 7850541LLU;

    t8 = (x33%(x34+(x35==x36)));

    if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 23U;
	static int32_t x40 = INT32_MAX;
	static int32_t t9 = -7936624;

    t9 = (x37%(x38+(x39==x40)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 18565392;
	uint32_t x42 = 1685369U;
	int32_t x43 = INT32_MIN;
	int64_t x44 = 95LL;
	uint32_t t10 = 1U;

    t10 = (x41%(x42+(x43==x44)));

    if (t10 != 26333U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = 3921;
	int64_t x47 = INT64_MIN;
	int64_t x48 = -155706206760986LL;

    t11 = (x45%(x46+(x47==x48)));

    if (t11 != -1400) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	static int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	int64_t t12 = 16676893LL;

    t12 = (x49%(x50+(x51==x52)));

    if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -4;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	volatile uint16_t x56 = UINT16_MAX;

    t13 = (x53%(x54+(x55==x56)));

    if (t13 != -4LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int8_t x58 = -1;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = 1430831589265LL;

    t14 = (x57%(x58+(x59==x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	static int8_t x63 = INT8_MAX;
	volatile int32_t t15 = 183;

    t15 = (x61%(x62+(x63==x64)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MAX;
	volatile uint32_t x67 = 22U;
	int16_t x68 = 0;

    t16 = (x65%(x66+(x67==x68)));

    if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 2725LLU;
	volatile int16_t x70 = INT16_MAX;
	volatile int16_t x71 = -2;
	uint64_t x72 = 1LLU;
	static uint64_t t17 = 155LLU;

    t17 = (x69%(x70+(x71==x72)));

    if (t17 != 2725LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	uint8_t x76 = 122U;
	static volatile int32_t t18 = -6;

    t18 = (x73%(x74+(x75==x76)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x78 = INT16_MIN;
	volatile int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MAX;
	int64_t t19 = -190680857LL;

    t19 = (x77%(x78+(x79==x80)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x81 = 6U;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = 6100U;
	volatile int64_t t20 = -1LL;

    t20 = (x81%(x82+(x83==x84)));

    if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 1LLU;
	int32_t x86 = -1;
	int32_t x87 = INT32_MIN;
	static uint32_t x88 = 2076090U;
	uint64_t t21 = 71LLU;

    t21 = (x85%(x86+(x87==x88)));

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = 52837443524649LL;
	static int64_t x90 = -129317722316959486LL;
	uint16_t x91 = 19U;
	uint64_t x92 = UINT64_MAX;
	volatile int64_t t22 = 1231770252587LL;

    t22 = (x89%(x90+(x91==x92)));

    if (t22 != 52837443524649LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MAX;
	static int16_t x98 = INT16_MAX;
	uint64_t x99 = 15LLU;
	int16_t x100 = -8028;

    t23 = (x97%(x98+(x99==x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MAX;
	uint64_t x102 = UINT64_MAX;
	volatile uint32_t x103 = 286556U;
	int64_t x104 = 112134238372529LL;
	uint64_t t24 = 2412281LLU;

    t24 = (x101%(x102+(x103==x104)));

    if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -11268;
	int32_t x106 = 11165821;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t25 = 21;

    t25 = (x105%(x106+(x107==x108)));

    if (t25 != -11268) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x110 = INT64_MIN;
	int64_t x111 = 16419476LL;
	int32_t x112 = INT32_MAX;
	volatile int64_t t26 = 12786LL;

    t26 = (x109%(x110+(x111==x112)));

    if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = 1985;
	static uint32_t x114 = 799267324U;
	int32_t x115 = 1164;
	int64_t x116 = INT64_MIN;
	volatile uint32_t t27 = 29814U;

    t27 = (x113%(x114+(x115==x116)));

    if (t27 != 1985U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = 1003554387LLU;
	int16_t x118 = -1;
	int64_t x120 = -1LL;
	uint64_t t28 = 1761940228239409LLU;

    t28 = (x117%(x118+(x119==x120)));

    if (t28 != 1003554387LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	int32_t x122 = -5034899;
	int16_t x123 = INT16_MIN;
	int64_t x124 = 552060896987679218LL;
	volatile int32_t t29 = 918958129;

    t29 = (x121%(x122+(x123==x124)));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = -1LL;
	volatile int64_t x126 = -1LL;
	int64_t x127 = 13260097665535063LL;
	static int16_t x128 = INT16_MIN;
	volatile int64_t t30 = 352LL;

    t30 = (x125%(x126+(x127==x128)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = 869733713;
	volatile int64_t x130 = INT64_MAX;
	int16_t x132 = -20;
	volatile int64_t t31 = -15632434LL;

    t31 = (x129%(x130+(x131==x132)));

    if (t31 != 869733713LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 11632LLU;
	volatile int8_t x135 = 0;

    t32 = (x133%(x134+(x135==x136)));

    if (t32 != 11632LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	int16_t x138 = -1;
	static volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -1653;

    t33 = (x137%(x138+(x139==x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -1;
	static uint16_t x142 = 107U;
	static uint8_t x143 = UINT8_MAX;
	volatile uint8_t x144 = 48U;
	volatile int32_t t34 = -1;

    t34 = (x141%(x142+(x143==x144)));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = -1LL;
	volatile int8_t x146 = INT8_MIN;
	volatile int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MIN;
	volatile int64_t t35 = -13093821LL;

    t35 = (x145%(x146+(x147==x148)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x149 = INT64_MAX;
	uint8_t x150 = UINT8_MAX;
	int16_t x152 = -44;
	int64_t t36 = 67257255LL;

    t36 = (x149%(x150+(x151==x152)));

    if (t36 != 127LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x154 = 34LLU;
	static volatile int64_t x155 = 1400LL;
	static volatile int8_t x156 = -3;
	volatile uint64_t t37 = 3366852658325LLU;

    t37 = (x153%(x154+(x155==x156)));

    if (t37 != 13LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = -50;
	static volatile int16_t x158 = -152;
	int32_t x159 = INT32_MAX;
	int16_t x160 = INT16_MIN;

    t38 = (x157%(x158+(x159==x160)));

    if (t38 != -50) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = 1;
	int16_t x162 = INT16_MAX;
	uint8_t x163 = 7U;
	int32_t t39 = 1546;

    t39 = (x161%(x162+(x163==x164)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = -1;
	uint16_t x166 = 89U;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t40 = 25;

    t40 = (x165%(x166+(x167==x168)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x170 = UINT32_MAX;
	static uint64_t x171 = UINT64_MAX;
	uint16_t x172 = UINT16_MAX;

    t41 = (x169%(x170+(x171==x172)));

    if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MIN;
	int32_t x175 = 102;
	int32_t x176 = INT32_MAX;
	int32_t t42 = 27377424;

    t42 = (x173%(x174+(x175==x176)));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MIN;
	uint32_t x178 = 197U;
	volatile int32_t x179 = -1;
	int32_t x180 = 3;

    t43 = (x177%(x178+(x179==x180)));

    if (t43 != -129LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 82U;
	volatile int64_t x182 = -391825LL;
	static int32_t x183 = -223120534;
	int16_t x184 = INT16_MIN;
	volatile int64_t t44 = -2471768185837LL;

    t44 = (x181%(x182+(x183==x184)));

    if (t44 != 82LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x189 = INT64_MIN;
	int8_t x190 = -2;
	static int32_t x191 = INT32_MIN;
	static volatile int64_t x192 = INT64_MAX;
	int64_t t45 = -381900211100321978LL;

    t45 = (x189%(x190+(x191==x192)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = -1LL;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 206239761U;
	int8_t x196 = 62;
	static volatile uint64_t t46 = 0LLU;

    t46 = (x193%(x194+(x195==x196)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = 3679035448763LLU;
	int32_t t47 = -122161;

    t47 = (x197%(x198+(x199==x200)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = INT32_MAX;
	int8_t x202 = INT8_MAX;
	volatile int8_t x203 = INT8_MIN;
	int8_t x204 = -1;
	int32_t t48 = 5432529;

    t48 = (x201%(x202+(x203==x204)));

    if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x206 = UINT8_MAX;
	static int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;
	static int64_t t49 = -5261855LL;

    t49 = (x205%(x206+(x207==x208)));

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x210 = 836LLU;
	int16_t x211 = 709;
	int32_t x212 = INT32_MIN;
	uint64_t t50 = 48013LLU;

    t50 = (x209%(x210+(x211==x212)));

    if (t50 != 719LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x215 = -2;
	int64_t t51 = -17010684215113LL;

    t51 = (x213%(x214+(x215==x216)));

    if (t51 != -50LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x217 = INT8_MAX;
	volatile int32_t x218 = -1;
	static int32_t x219 = INT32_MIN;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t52 = 3977;

    t52 = (x217%(x218+(x219==x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 57U;
	volatile int32_t t53 = -9010;

    t53 = (x221%(x222+(x223==x224)));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t t54 = 914419763204373LLU;

    t54 = (x225%(x226+(x227==x228)));

    if (t54 != 11482955499303132LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x229 = UINT16_MAX;
	static volatile int64_t x230 = INT64_MAX;
	static int8_t x231 = -4;
	volatile uint64_t x232 = 8260510756788LLU;
	static int64_t t55 = 26241LL;

    t55 = (x229%(x230+(x231==x232)));

    if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x233 = INT64_MIN;
	int16_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int16_t x236 = 8;
	static volatile int64_t t56 = 29941086LL;

    t56 = (x233%(x234+(x235==x236)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MIN;
	static uint64_t x239 = UINT64_MAX;
	static uint32_t x240 = 5242U;
	volatile int32_t t57 = -83;

    t57 = (x237%(x238+(x239==x240)));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -1;
	volatile uint16_t x242 = 48U;
	static int32_t x243 = INT32_MAX;
	int32_t x244 = 5660994;
	volatile int32_t t58 = 19849;

    t58 = (x241%(x242+(x243==x244)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x247 = 12265;
	int16_t x248 = INT16_MAX;
	int64_t t59 = 189540564087LL;

    t59 = (x245%(x246+(x247==x248)));

    if (t59 != 25LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x250 = 1U;
	int16_t x251 = -3294;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t60 = 0;

    t60 = (x249%(x250+(x251==x252)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = INT8_MAX;
	int8_t x254 = -44;
	int64_t x255 = 6890LL;
	volatile uint32_t x256 = UINT32_MAX;
	int32_t t61 = -1860961;

    t61 = (x253%(x254+(x255==x256)));

    if (t61 != 39) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = UINT64_MAX;
	volatile int16_t x258 = INT16_MIN;
	int8_t x260 = INT8_MAX;

    t62 = (x257%(x258+(x259==x260)));

    if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -1;
	int32_t x262 = -863808;
	int8_t x263 = -1;
	static int32_t t63 = -1025223860;

    t63 = (x261%(x262+(x263==x264)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	int16_t x266 = INT16_MAX;
	static int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t64 = -306029;

    t64 = (x265%(x266+(x267==x268)));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x270 = -3;
	uint32_t x271 = UINT32_MAX;
	int32_t x272 = INT32_MAX;
	int32_t t65 = -52115905;

    t65 = (x269%(x270+(x271==x272)));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x273 = -1LL;
	int32_t x274 = INT32_MIN;
	static volatile int8_t x275 = INT8_MIN;
	static int32_t x276 = INT32_MIN;
	volatile int64_t t66 = 3809521LL;

    t66 = (x273%(x274+(x275==x276)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = -3;
	static uint16_t x279 = UINT16_MAX;
	volatile int16_t x280 = -1;
	static volatile int32_t t67 = 324324827;

    t67 = (x277%(x278+(x279==x280)));

    if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x282 = -9;
	int64_t x283 = 206550127055649LL;
	static uint32_t x284 = 5U;
	volatile int32_t t68 = -2151;

    t68 = (x281%(x282+(x283==x284)));

    if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = -1LL;
	int8_t x286 = 27;
	int64_t x287 = INT64_MAX;
	int64_t x288 = 7574109LL;
	volatile int64_t t69 = -16256255LL;

    t69 = (x285%(x286+(x287==x288)));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x289 = 43025597;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = UINT32_MAX;
	static int32_t t70 = 11998213;

    t70 = (x289%(x290+(x291==x292)));

    if (t70 != 40) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x293 = 523U;
	volatile uint64_t t71 = 56837874LLU;

    t71 = (x293%(x294+(x295==x296)));

    if (t71 != 523LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x298 = INT8_MAX;
	volatile int32_t x300 = 343;
	int32_t t72 = -6749;

    t72 = (x297%(x298+(x299==x300)));

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x301 = 13884686147LLU;
	volatile uint64_t x302 = 113LLU;
	static volatile int8_t x303 = -1;
	volatile uint16_t x304 = 102U;
	uint64_t t73 = 7325LLU;

    t73 = (x301%(x302+(x303==x304)));

    if (t73 != 83LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = INT64_MAX;
	int32_t x306 = 1;
	int8_t x307 = -1;
	volatile int16_t x308 = INT16_MAX;
	static volatile int64_t t74 = -4164359265447LL;

    t74 = (x305%(x306+(x307==x308)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x313 = UINT64_MAX;
	volatile uint16_t x314 = UINT16_MAX;
	volatile uint8_t x315 = 57U;
	volatile uint64_t t75 = 59822LLU;

    t75 = (x313%(x314+(x315==x316)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x317 = INT16_MIN;
	static int16_t x318 = 5;
	uint64_t x320 = 40045LLU;
	static int32_t t76 = -5754502;

    t76 = (x317%(x318+(x319==x320)));

    if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x321 = 7321;
	int64_t x322 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	static int64_t t77 = 8LL;

    t77 = (x321%(x322+(x323==x324)));

    if (t77 != 7321LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = INT8_MIN;
	static int64_t x328 = INT64_MAX;
	volatile int64_t t78 = 3743LL;

    t78 = (x325%(x326+(x327==x328)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	volatile int32_t t79 = -106877937;

    t79 = (x329%(x330+(x331==x332)));

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x335 = -18017529;
	int32_t x336 = -1;
	int64_t t80 = 19122LL;

    t80 = (x333%(x334+(x335==x336)));

    if (t80 != -2530LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x337 = 174;
	static uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MIN;
	int64_t t81 = 787975551LL;

    t81 = (x337%(x338+(x339==x340)));

    if (t81 != 174LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = 107417137178704794LL;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	static uint32_t x344 = UINT32_MAX;

    t82 = (x341%(x342+(x343==x344)));

    if (t82 != 810777498LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x345 = -1LL;
	int8_t x347 = 7;
	uint32_t x348 = 12562079U;
	int64_t t83 = 36LL;

    t83 = (x345%(x346+(x347==x348)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x349 = INT32_MIN;
	uint32_t x350 = 111562U;
	int64_t x351 = -704828LL;
	uint32_t x352 = 1815294183U;

    t84 = (x349%(x350+(x351==x352)));

    if (t84 != 26710U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = 263153158LL;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 0LLU;
	int64_t t85 = 1034771114034119460LL;

    t85 = (x353%(x354+(x355==x356)));

    if (t85 != 4LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x359 = 875892523LLU;
	static volatile int32_t x360 = INT32_MAX;
	int32_t t86 = -145041;

    t86 = (x357%(x358+(x359==x360)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = 31055423;
	volatile uint64_t x363 = 162580LLU;
	static int16_t x364 = -2;
	int64_t t87 = 30853136764LL;

    t87 = (x361%(x362+(x363==x364)));

    if (t87 != -20180056LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = 1;
	uint16_t x366 = UINT16_MAX;
	volatile uint16_t x367 = 13U;
	uint8_t x368 = 0U;

    t88 = (x365%(x366+(x367==x368)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	static volatile int32_t x371 = -21;
	int8_t x372 = INT8_MAX;
	static volatile int64_t t89 = 24666592606487LL;

    t89 = (x369%(x370+(x371==x372)));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;

    t90 = (x373%(x374+(x375==x376)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x380 = INT64_MIN;
	volatile uint32_t t91 = 795539U;

    t91 = (x377%(x378+(x379==x380)));

    if (t91 != 31U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = INT32_MAX;
	int32_t x382 = INT32_MIN;
	volatile uint32_t x383 = UINT32_MAX;
	volatile uint32_t x384 = 28237U;
	int32_t t92 = INT32_MAX;

    t92 = (x381%(x382+(x383==x384)));

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x385 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MAX;
	volatile int32_t t93 = 0;

    t93 = (x385%(x386+(x387==x388)));

    if (t93 != -16) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = 7270U;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	static uint32_t t94 = 6U;

    t94 = (x389%(x390+(x391==x392)));

    if (t94 != 7270U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x393 = INT16_MAX;
	static int64_t x394 = -1LL;
	uint16_t x395 = 2881U;
	int16_t x396 = INT16_MAX;
	int64_t t95 = -58167010LL;

    t95 = (x393%(x394+(x395==x396)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x397 = 3U;
	volatile int32_t x398 = INT32_MAX;
	int64_t x399 = 107795974LL;
	static int64_t x400 = INT64_MIN;
	int32_t t96 = -115032;

    t96 = (x397%(x398+(x399==x400)));

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x401 = INT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	volatile int32_t t97 = -6381;

    t97 = (x401%(x402+(x403==x404)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = UINT64_MAX;
	uint8_t x406 = UINT8_MAX;
	int8_t x407 = 29;
	static uint16_t x408 = UINT16_MAX;
	volatile uint64_t t98 = 5LLU;

    t98 = (x405%(x406+(x407==x408)));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x412 = UINT64_MAX;
	uint32_t t99 = 10804U;

    t99 = (x409%(x410+(x411==x412)));

    if (t99 != 4294934528U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x413 = -1LL;
	int32_t x414 = 422776;
	volatile int64_t x415 = INT64_MIN;
	uint64_t x416 = UINT64_MAX;
	static volatile int64_t t100 = 2933583244862LL;

    t100 = (x413%(x414+(x415==x416)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x417 = -1;
	int32_t x418 = -437;
	int16_t x419 = -1;
	int32_t t101 = 2400200;

    t101 = (x417%(x418+(x419==x420)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MAX;
	int64_t x423 = -1LL;
	int8_t x424 = INT8_MAX;

    t102 = (x421%(x422+(x423==x424)));

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = 607;
	uint64_t x426 = 956LLU;
	volatile uint64_t t103 = 2123053546558649LLU;

    t103 = (x425%(x426+(x427==x428)));

    if (t103 != 607LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x429 = INT64_MAX;
	volatile int32_t x430 = INT32_MAX;
	int64_t x431 = -1LL;
	int64_t x432 = 25LL;
	volatile int64_t t104 = -10LL;

    t104 = (x429%(x430+(x431==x432)));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 673184920U;
	static int16_t x434 = -1;
	int8_t x435 = -23;

    t105 = (x433%(x434+(x435==x436)));

    if (t105 != 673184920U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x437 = 5LLU;
	int64_t x438 = 14560227635597873LL;
	int8_t x439 = -1;
	uint16_t x440 = UINT16_MAX;
	static volatile uint64_t t106 = 1610881220132LLU;

    t106 = (x437%(x438+(x439==x440)));

    if (t106 != 5LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x442 = INT16_MAX;
	volatile int16_t x443 = -1;
	volatile uint8_t x444 = 4U;
	uint64_t t107 = 20LLU;

    t107 = (x441%(x442+(x443==x444)));

    if (t107 != 16459LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	volatile uint32_t x446 = 3U;
	volatile int32_t x448 = -1;
	volatile uint64_t t108 = 6931202698785LLU;

    t108 = (x445%(x446+(x447==x448)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = INT32_MIN;
	static uint64_t x452 = UINT64_MAX;
	volatile int64_t t109 = 77465707LL;

    t109 = (x449%(x450+(x451==x452)));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -1LL;
	volatile int64_t x454 = INT64_MIN;
	uint32_t x456 = 11U;
	int64_t t110 = -66040485386973LL;

    t110 = (x453%(x454+(x455==x456)));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = -95;
	volatile uint64_t x459 = 77551969326LLU;
	uint32_t x460 = UINT32_MAX;
	volatile int64_t t111 = -7876707LL;

    t111 = (x457%(x458+(x459==x460)));

    if (t111 != -95LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = -1;
	int16_t x462 = INT16_MAX;
	static uint32_t x463 = 93519U;
	static int64_t x464 = 4253256940010047816LL;
	int32_t t112 = -1600899;

    t112 = (x461%(x462+(x463==x464)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x466 = INT64_MAX;
	static uint8_t x467 = UINT8_MAX;
	uint16_t x468 = 1U;
	int64_t t113 = -68145111713LL;

    t113 = (x465%(x466+(x467==x468)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = INT64_MAX;
	int16_t x470 = -1;
	int64_t x471 = 48992957LL;
	int64_t x472 = INT64_MIN;
	volatile int64_t t114 = -23510LL;

    t114 = (x469%(x470+(x471==x472)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x474 = 863876743U;
	int16_t x475 = INT16_MIN;
	static volatile uint16_t x476 = 2U;
	volatile uint32_t t115 = 15313059U;

    t115 = (x473%(x474+(x475==x476)));

    if (t115 != 839460196U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = INT8_MIN;
	static int8_t x478 = -1;
	int64_t x479 = INT64_MIN;
	volatile int8_t x480 = -1;
	volatile int32_t t116 = 1096134;

    t116 = (x477%(x478+(x479==x480)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x481 = -1;
	int32_t x482 = 847527;
	volatile int32_t x484 = -1;
	int32_t t117 = -1141526;

    t117 = (x481%(x482+(x483==x484)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = -1;
	int32_t x486 = 1242386;
	volatile int8_t x488 = 13;
	volatile int32_t t118 = 60365;

    t118 = (x485%(x486+(x487==x488)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = -1;
	static volatile int32_t x490 = INT32_MIN;
	int16_t x492 = INT16_MAX;

    t119 = (x489%(x490+(x491==x492)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x493 = UINT8_MAX;
	uint16_t x494 = 27790U;
	static int8_t x495 = INT8_MIN;
	uint8_t x496 = 11U;
	int32_t t120 = 5;

    t120 = (x493%(x494+(x495==x496)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	static int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MIN;
	static int16_t x500 = INT16_MIN;
	volatile uint32_t t121 = 1447U;

    t121 = (x497%(x498+(x499==x500)));

    if (t121 != 127U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x501 = INT32_MIN;
	static volatile int64_t x502 = INT64_MIN;
	int32_t x503 = INT32_MIN;
	volatile int16_t x504 = INT16_MIN;

    t122 = (x501%(x502+(x503==x504)));

    if (t122 != -2147483648LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x507 = UINT32_MAX;

    t123 = (x505%(x506+(x507==x508)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MIN;
	int64_t x510 = INT64_MIN;
	uint32_t x511 = UINT32_MAX;
	uint64_t x512 = UINT64_MAX;
	int64_t t124 = -6718606LL;

    t124 = (x509%(x510+(x511==x512)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x513 = 2394738298078LLU;
	static int64_t x516 = 37963LL;

    t125 = (x513%(x514+(x515==x516)));

    if (t125 != 2394738298078LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x521 = 27U;
	static int64_t x522 = INT64_MIN;
	int64_t t126 = 25664898120627LL;

    t126 = (x521%(x522+(x523==x524)));

    if (t126 != 27LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x525 = 57183552U;
	volatile int32_t x526 = 242641;
	int16_t x527 = 222;
	static volatile int64_t x528 = INT64_MIN;
	volatile uint32_t t127 = 11954U;

    t127 = (x525%(x526+(x527==x528)));

    if (t127 != 162917U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x529 = INT32_MAX;
	static uint16_t x530 = 12364U;
	static int16_t x531 = INT16_MIN;
	int16_t x532 = -1;
	static volatile int32_t t128 = 215035;

    t128 = (x529%(x530+(x531==x532)));

    if (t128 != 5215) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x533 = 52U;
	volatile uint8_t x535 = 29U;
	static uint8_t x536 = 52U;

    t129 = (x533%(x534+(x535==x536)));

    if (t129 != 52) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x537 = 18U;
	int8_t x538 = INT8_MIN;
	static int32_t t130 = 0;

    t130 = (x537%(x538+(x539==x540)));

    if (t130 != 18) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x542 = INT32_MAX;
	volatile int8_t x543 = 1;
	int32_t x544 = 566;
	int32_t t131 = 209514;

    t131 = (x541%(x542+(x543==x544)));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x545 = 0U;
	uint64_t x546 = 12003451432LLU;
	static uint32_t x547 = 42242U;
	volatile int64_t x548 = INT64_MIN;

    t132 = (x545%(x546+(x547==x548)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x551 = INT64_MIN;
	volatile int64_t x552 = INT64_MIN;
	static uint64_t t133 = 590450242275417668LLU;

    t133 = (x549%(x550+(x551==x552)));

    if (t133 != 7LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x553 = 63U;
	uint64_t x554 = UINT64_MAX;
	static int64_t x555 = 126416463069065LL;
	volatile int16_t x556 = INT16_MAX;
	uint64_t t134 = 44LLU;

    t134 = (x553%(x554+(x555==x556)));

    if (t134 != 63LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x557 = -1;
	uint32_t x559 = UINT32_MAX;
	uint16_t x560 = 21767U;

    t135 = (x557%(x558+(x559==x560)));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x561 = 56U;
	int16_t x562 = INT16_MIN;
	uint32_t x563 = 230251U;
	static int16_t x564 = INT16_MIN;
	int32_t t136 = -73020463;

    t136 = (x561%(x562+(x563==x564)));

    if (t136 != 56) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = INT16_MIN;
	uint32_t x566 = 2U;
	uint16_t x567 = 13U;
	int16_t x568 = 1;
	uint32_t t137 = 118U;

    t137 = (x565%(x566+(x567==x568)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x569 = INT16_MAX;
	uint8_t x570 = 14U;
	int64_t x571 = INT64_MIN;
	static volatile uint32_t x572 = 1066U;
	volatile int32_t t138 = -2161;

    t138 = (x569%(x570+(x571==x572)));

    if (t138 != 7) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x573 = -1;
	volatile int32_t x574 = INT32_MIN;
	int64_t x575 = -1LL;
	volatile uint32_t x576 = 510U;
	int32_t t139 = -659;

    t139 = (x573%(x574+(x575==x576)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MAX;
	volatile uint64_t x578 = UINT64_MAX;
	uint32_t x579 = 608509351U;
	int32_t x580 = INT32_MIN;
	volatile uint64_t t140 = 1LLU;

    t140 = (x577%(x578+(x579==x580)));

    if (t140 != 2147483647LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x581 = UINT64_MAX;
	volatile uint16_t x582 = 60U;
	volatile int16_t x584 = -3876;
	uint64_t t141 = 578826562938538LLU;

    t141 = (x581%(x582+(x583==x584)));

    if (t141 != 15LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x585 = UINT16_MAX;
	volatile int32_t x586 = -1;
	uint32_t x588 = 2038130U;
	static volatile int32_t t142 = -3668;

    t142 = (x585%(x586+(x587==x588)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x590 = -30370LL;
	volatile int32_t x592 = INT32_MAX;
	int64_t t143 = -11LL;

    t143 = (x589%(x590+(x591==x592)));

    if (t143 != 5147LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x594 = UINT8_MAX;
	int64_t x595 = 4224268723LL;
	volatile int32_t x596 = -976764698;
	volatile int32_t t144 = 112667;

    t144 = (x593%(x594+(x595==x596)));

    if (t144 != -236) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x597 = -1;
	int32_t x599 = INT32_MIN;
	int32_t x600 = -1;
	uint32_t t145 = 321U;

    t145 = (x597%(x598+(x599==x600)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = INT16_MIN;
	uint8_t x602 = UINT8_MAX;
	volatile uint8_t x603 = UINT8_MAX;
	static int8_t x604 = -1;
	int32_t t146 = 4;

    t146 = (x601%(x602+(x603==x604)));

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x606 = 232671786437853LLU;
	static uint8_t x607 = UINT8_MAX;

    t147 = (x605%(x606+(x607==x608)));

    if (t147 != 59501343690069LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x609 = INT16_MIN;
	uint64_t x610 = 17263153109708867LLU;
	volatile uint16_t x611 = 33U;
	int32_t x612 = INT32_MAX;
	volatile uint64_t t148 = 1090325533125810553LLU;

    t148 = (x609%(x610+(x611==x612)));

    if (t148 != 9696552540448892LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x617 = 8;
	volatile int8_t x618 = INT8_MIN;
	volatile uint32_t x619 = 53666U;
	uint16_t x620 = UINT16_MAX;
	static int32_t t149 = 11;

    t149 = (x617%(x618+(x619==x620)));

    if (t149 != 8) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x621 = INT32_MAX;
	volatile int64_t x623 = INT64_MAX;
	uint64_t x624 = 10809579LLU;
	int32_t t150 = -1;

    t150 = (x621%(x622+(x623==x624)));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x625 = 30704975U;
	static int16_t x627 = 145;
	volatile int8_t x628 = -5;
	uint32_t t151 = 1310345661U;

    t151 = (x625%(x626+(x627==x628)));

    if (t151 != 30704975U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x629 = 7545LL;
	int64_t x630 = INT64_MIN;
	int64_t x631 = -1LL;
	int64_t x632 = -1LL;

    t152 = (x629%(x630+(x631==x632)));

    if (t152 != 7545LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = INT32_MIN;
	static uint32_t x634 = 447378U;
	volatile int64_t x635 = INT64_MIN;
	int64_t x636 = -1LL;
	uint32_t t153 = 124U;

    t153 = (x633%(x634+(x635==x636)));

    if (t153 != 69248U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x637 = UINT16_MAX;
	int32_t x638 = INT32_MAX;
	int32_t x639 = INT32_MIN;
	uint16_t x640 = UINT16_MAX;
	int32_t t154 = 224033599;

    t154 = (x637%(x638+(x639==x640)));

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x641 = 888431824956737LLU;
	uint8_t x642 = UINT8_MAX;
	int16_t x644 = INT16_MAX;
	volatile uint64_t t155 = 1LLU;

    t155 = (x641%(x642+(x643==x644)));

    if (t155 != 92LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x645 = -1LL;
	volatile int16_t x646 = INT16_MIN;
	static volatile uint64_t x647 = 32124609135LLU;
	uint16_t x648 = UINT16_MAX;
	int64_t t156 = -149LL;

    t156 = (x645%(x646+(x647==x648)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x649 = 0;
	uint32_t x650 = 1476U;
	int16_t x651 = INT16_MIN;
	int32_t x652 = -1;
	uint32_t t157 = 311784263U;

    t157 = (x649%(x650+(x651==x652)));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x653 = INT16_MIN;
	int32_t x654 = INT32_MIN;
	static uint32_t x655 = 348824256U;
	static int16_t x656 = 1942;
	volatile int32_t t158 = -115;

    t158 = (x653%(x654+(x655==x656)));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x657 = 15U;
	int8_t x658 = -1;
	volatile int64_t x659 = -1LL;
	static int64_t x660 = 2714571782057LL;
	int32_t t159 = -5;

    t159 = (x657%(x658+(x659==x660)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x661 = 1U;
	volatile int16_t x664 = 3;
	static volatile int32_t t160 = 127612;

    t160 = (x661%(x662+(x663==x664)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x666 = 420166255809LLU;
	int32_t x667 = INT32_MIN;
	uint64_t t161 = 534734086010LLU;

    t161 = (x665%(x666+(x667==x668)));

    if (t161 != 71774435888LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x669 = 24U;
	static int8_t x670 = -1;
	volatile uint32_t x672 = 5U;
	int32_t t162 = 0;

    t162 = (x669%(x670+(x671==x672)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x673 = 933900786068791LLU;
	volatile uint32_t x674 = UINT32_MAX;
	volatile uint8_t x675 = 12U;
	uint64_t t163 = 481520040LLU;

    t163 = (x673%(x674+(x675==x676)));

    if (t163 != 3097443991LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x677 = -1;
	int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MAX;
	volatile int8_t x680 = -1;
	int32_t t164 = -923;

    t164 = (x677%(x678+(x679==x680)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = -1;
	int32_t x682 = -93;
	static uint8_t x683 = 8U;
	int8_t x684 = INT8_MIN;
	volatile int32_t t165 = -11;

    t165 = (x681%(x682+(x683==x684)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x687 = -1LL;
	uint8_t x688 = 1U;
	int32_t t166 = 509915655;

    t166 = (x685%(x686+(x687==x688)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = -3047462143099363LL;
	static int32_t x690 = -1;
	volatile uint32_t x692 = 851U;
	int64_t t167 = 3452053577LL;

    t167 = (x689%(x690+(x691==x692)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x697 = UINT32_MAX;
	uint64_t x698 = 15LLU;
	volatile uint8_t x700 = 65U;
	uint64_t t168 = 608294LLU;

    t168 = (x697%(x698+(x699==x700)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x701 = INT64_MAX;
	int16_t x702 = 5707;
	static uint64_t x703 = 2961763442LLU;
	int32_t x704 = INT32_MIN;
	volatile int64_t t169 = 17073267979LL;

    t169 = (x701%(x702+(x703==x704)));

    if (t169 != 2191LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = -1;
	int32_t x708 = 13604150;

    t170 = (x705%(x706+(x707==x708)));

    if (t170 != 41103U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	int32_t x711 = 9742945;
	volatile int32_t t171 = -44168894;

    t171 = (x709%(x710+(x711==x712)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x713 = 124U;
	uint32_t x714 = 19737046U;
	uint8_t x715 = 10U;
	int64_t x716 = -6624524040571LL;
	volatile uint32_t t172 = 22U;

    t172 = (x713%(x714+(x715==x716)));

    if (t172 != 124U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x717 = 29329U;
	static int16_t x718 = 5;
	static int8_t x719 = INT8_MIN;
	int64_t x720 = INT64_MIN;

    t173 = (x717%(x718+(x719==x720)));

    if (t173 != 4) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x721 = -1LL;
	volatile int32_t x722 = -198;
	static volatile int32_t x723 = INT32_MIN;
	volatile uint8_t x724 = UINT8_MAX;
	static int64_t t174 = -1735795180469LL;

    t174 = (x721%(x722+(x723==x724)));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x726 = INT32_MIN;
	int64_t x728 = -24LL;

    t175 = (x725%(x726+(x727==x728)));

    if (t175 != 3647U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = -15;
	int32_t t176 = -107734;

    t176 = (x729%(x730+(x731==x732)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x733 = INT8_MIN;
	volatile uint16_t x735 = 19U;
	uint8_t x736 = 1U;

    t177 = (x733%(x734+(x735==x736)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = 23444464192839LLU;
	int32_t x738 = -762;
	static uint64_t x739 = 803538LLU;
	uint64_t x740 = UINT64_MAX;
	volatile uint64_t t178 = 52828875LLU;

    t178 = (x737%(x738+(x739==x740)));

    if (t178 != 23444464192839LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	volatile int32_t t179 = -205;

    t179 = (x741%(x742+(x743==x744)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x745 = 13U;
	uint8_t x747 = 11U;
	int16_t x748 = INT16_MIN;
	uint32_t t180 = 60U;

    t180 = (x745%(x746+(x747==x748)));

    if (t180 != 13U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x749 = INT32_MAX;
	int64_t x750 = -1LL;
	uint8_t x752 = UINT8_MAX;

    t181 = (x749%(x750+(x751==x752)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int8_t x755 = INT8_MIN;
	int32_t x756 = -19;
	uint32_t t182 = 54U;

    t182 = (x753%(x754+(x755==x756)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = -28;
	static int16_t x759 = INT16_MIN;
	static uint16_t x760 = 52U;
	static uint32_t t183 = 62453298U;

    t183 = (x757%(x758+(x759==x760)));

    if (t183 != 27U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x762 = -1;
	static uint8_t x763 = 32U;
	int32_t x764 = -1;
	volatile int32_t t184 = 8960405;

    t184 = (x761%(x762+(x763==x764)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x765 = 11U;
	uint64_t x766 = UINT64_MAX;
	uint32_t x767 = UINT32_MAX;
	volatile uint64_t t185 = 8LLU;

    t185 = (x765%(x766+(x767==x768)));

    if (t185 != 11LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x769 = INT8_MAX;
	int16_t x770 = 2;
	static int32_t x771 = INT32_MAX;
	uint8_t x772 = 4U;
	int32_t t186 = 8317;

    t186 = (x769%(x770+(x771==x772)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x773 = UINT8_MAX;
	uint64_t x774 = 771585LLU;
	volatile int32_t x775 = INT32_MAX;
	int8_t x776 = INT8_MIN;
	uint64_t t187 = 10LLU;

    t187 = (x773%(x774+(x775==x776)));

    if (t187 != 255LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x778 = 13930223U;

    t188 = (x777%(x778+(x779==x780)));

    if (t188 != 4458609U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x781 = 5U;
	uint8_t x782 = 50U;

    t189 = (x781%(x782+(x783==x784)));

    if (t189 != 5) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = 121316762488492032LL;
	int8_t x786 = -54;
	uint16_t x787 = UINT16_MAX;
	int8_t x788 = -1;
	volatile int64_t t190 = -958LL;

    t190 = (x785%(x786+(x787==x788)));

    if (t190 != 24LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x789 = INT32_MIN;
	int16_t x790 = INT16_MIN;
	uint64_t x791 = 1513423139902423178LLU;

    t191 = (x789%(x790+(x791==x792)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x793 = INT8_MIN;
	uint8_t x794 = 10U;
	volatile int8_t x796 = INT8_MAX;
	static int32_t t192 = -10834086;

    t192 = (x793%(x794+(x795==x796)));

    if (t192 != -8) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x797 = INT64_MIN;
	int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MAX;
	volatile uint64_t x800 = 2043196217774LLU;
	int64_t t193 = 1031969461820059LL;

    t193 = (x797%(x798+(x799==x800)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x801 = -1;
	volatile int64_t x802 = 1LL;
	volatile uint8_t x803 = UINT8_MAX;
	int64_t x804 = INT64_MIN;
	volatile int64_t t194 = 212442LL;

    t194 = (x801%(x802+(x803==x804)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x805 = INT16_MAX;
	int16_t x807 = INT16_MIN;
	int32_t t195 = -26120;

    t195 = (x805%(x806+(x807==x808)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = -1LL;
	int32_t x810 = INT32_MIN;
	volatile int64_t t196 = 0LL;

    t196 = (x809%(x810+(x811==x812)));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x813 = INT16_MIN;
	uint16_t x814 = 2694U;
	uint64_t x815 = UINT64_MAX;
	int32_t x816 = INT32_MIN;
	static volatile int32_t t197 = -886;

    t197 = (x813%(x814+(x815==x816)));

    if (t197 != -440) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	uint32_t x818 = 85653U;
	uint16_t x819 = UINT16_MAX;
	uint16_t x820 = 572U;
	uint32_t t198 = 687874845U;

    t198 = (x817%(x818+(x819==x820)));

    if (t198 != 68916U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = 1;
	int64_t x822 = 1709185134LL;
	int64_t x823 = -8LL;
	int64_t x824 = -1LL;
	volatile int64_t t199 = 1LL;

    t199 = (x821%(x822+(x823==x824)));

    if (t199 != 1LL) { NG(); } else { ; }
	
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

