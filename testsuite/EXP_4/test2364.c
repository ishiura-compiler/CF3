
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

int8_t x2 = INT8_MIN;
int16_t x3 = -1;
volatile int64_t x5 = INT64_MAX;
int16_t x6 = 0;
static uint16_t x14 = UINT16_MAX;
volatile int16_t x20 = INT16_MIN;
int32_t x22 = INT32_MIN;
volatile int8_t x23 = 9;
volatile int32_t t4 = INT32_MIN;
volatile int16_t x26 = -4;
volatile int16_t x28 = INT16_MAX;
int32_t x30 = INT32_MIN;
int16_t x38 = INT16_MIN;
static int32_t x43 = 212821;
uint64_t x48 = 60LLU;
int64_t x53 = INT64_MIN;
volatile int32_t x55 = INT32_MAX;
static int32_t x60 = -11532096;
int8_t x64 = INT8_MIN;
static uint64_t t13 = 11364037LLU;
volatile int64_t t14 = 55575LL;
int16_t x70 = INT16_MIN;
int8_t x71 = -1;
volatile uint16_t x73 = 1836U;
uint8_t x83 = 103U;
uint8_t x90 = 0U;
uint64_t x91 = 503208LLU;
uint64_t t20 = 7827521341644231LLU;
uint64_t x93 = 4242863046672LLU;
volatile uint64_t t21 = 1671984459494011090LLU;
int32_t t22 = 19298;
int32_t x102 = INT32_MIN;
static volatile uint64_t t27 = 44105106LLU;
int8_t x121 = INT8_MAX;
static int8_t x124 = INT8_MIN;
int32_t x130 = -1;
volatile int16_t x131 = 1679;
uint32_t x144 = 25U;
int16_t x151 = -90;
int32_t x154 = -376917;
uint8_t x155 = 0U;
uint64_t t37 = 115438379687920LLU;
int64_t x164 = -11113447600LL;
volatile int64_t t38 = -47179255507012005LL;
int8_t x165 = INT8_MAX;
int64_t x168 = INT64_MIN;
static int8_t x170 = -1;
static uint16_t x173 = 0U;
int32_t x181 = -5;
static volatile int64_t t42 = -162796LL;
volatile uint16_t x192 = 57U;
uint16_t x193 = 0U;
int32_t t47 = -7;
uint8_t x206 = UINT8_MAX;
int8_t x208 = -1;
uint8_t x210 = 6U;
uint32_t t49 = 0U;
int8_t x213 = -46;
volatile uint8_t x216 = 52U;
int16_t x220 = INT16_MIN;
uint64_t t51 = 1LLU;
static volatile int8_t x222 = -1;
static uint64_t x227 = 2684319704LLU;
int16_t x228 = INT16_MAX;
uint16_t x239 = 199U;
uint32_t x241 = UINT32_MAX;
static int16_t x242 = INT16_MIN;
int8_t x246 = INT8_MAX;
volatile int64_t t60 = -53968LL;
int16_t x266 = INT16_MIN;
volatile uint8_t x285 = 2U;
static volatile int32_t t67 = 459371012;
int32_t x299 = INT32_MIN;
int64_t t69 = -403080391043531025LL;
int64_t t70 = -6687LL;
uint32_t t71 = 339933U;
static int16_t x314 = INT16_MAX;
static uint32_t t76 = 3646161U;
int32_t x331 = INT32_MIN;
uint32_t t77 = 108U;
int32_t x333 = -1;
int32_t x341 = -1;
uint32_t x342 = UINT32_MAX;
volatile uint64_t x345 = 6221LLU;
volatile uint16_t x372 = 3901U;
static volatile int16_t x374 = INT16_MIN;
volatile int64_t x376 = INT64_MAX;
static int64_t t88 = -9037853LL;
static volatile uint64_t x385 = UINT64_MAX;
int16_t x386 = 294;
int16_t x394 = INT16_MAX;
static int32_t t92 = -25;
static int8_t x399 = INT8_MIN;
static int16_t x400 = 29;
static volatile uint8_t x403 = UINT8_MAX;
int16_t x407 = INT16_MIN;
volatile uint64_t x411 = 167113LLU;
volatile uint8_t x435 = 0U;
int8_t x438 = INT8_MAX;
volatile int8_t x446 = INT8_MAX;
static uint32_t x447 = UINT32_MAX;
uint64_t x462 = 509736LLU;
int64_t x468 = 10598893759662LL;
volatile int64_t t107 = 1954552696389442LL;
volatile int64_t t108 = -216804124086LL;
uint32_t x496 = 3325997U;
int32_t t113 = 23;
static int32_t x502 = INT32_MIN;
int16_t x508 = INT16_MIN;
static volatile int32_t t115 = 6;
static uint32_t x519 = UINT32_MAX;
uint32_t x534 = UINT32_MAX;
static uint32_t x548 = 386460103U;
int8_t x554 = INT8_MAX;
uint16_t x558 = 3U;
uint64_t x564 = 54880872LLU;
static volatile uint64_t t127 = 7396LLU;
int16_t x565 = INT16_MAX;
static int32_t t128 = -28068109;
int32_t t130 = -381;
volatile int16_t x583 = -1;
int64_t t132 = 6273458960831LL;
volatile int64_t x588 = -127207541428126779LL;
static uint32_t x601 = 904377729U;
static volatile int16_t x604 = INT16_MAX;
uint16_t x606 = 96U;
uint32_t x607 = 4874U;
volatile int16_t x608 = INT16_MIN;
uint8_t x617 = 10U;
uint8_t x618 = 7U;
int64_t x620 = INT64_MIN;
int64_t x624 = INT64_MIN;
static volatile int64_t t142 = 1264297LL;
volatile uint64_t t143 = 0LLU;
uint32_t x630 = 832033U;
int8_t x632 = INT8_MIN;
volatile int8_t x633 = -6;
uint16_t x634 = 22864U;
int8_t x642 = INT8_MAX;
int32_t t148 = 2687193;
int8_t x649 = 0;
uint32_t x650 = 124173U;
static int8_t x652 = -1;
uint32_t x656 = 132964U;
int8_t x664 = -1;
volatile int64_t x671 = 2196LL;
volatile int8_t x672 = -1;
static volatile uint8_t x678 = 48U;
int32_t x685 = INT32_MIN;
uint8_t x692 = 0U;
int64_t x705 = INT64_MIN;
int32_t x707 = -1;
static int64_t t162 = -1LL;
uint64_t t165 = 98631465203474548LLU;
int64_t x738 = -850427875403501786LL;
int8_t x740 = 1;
static volatile uint16_t x747 = UINT16_MAX;
int16_t x756 = 2448;
volatile uint16_t x758 = UINT16_MAX;
static volatile int64_t x759 = INT64_MIN;
int32_t x760 = INT32_MIN;
uint64_t x762 = UINT64_MAX;
volatile int64_t x764 = INT64_MIN;
uint64_t t173 = 82940LLU;
int16_t x765 = 6374;
uint8_t x768 = 0U;
uint64_t t174 = 1348492LLU;
uint32_t x777 = UINT32_MAX;
static int64_t x781 = INT64_MIN;
int64_t x785 = -62319475842740603LL;
int16_t x786 = -1;
int64_t t178 = -7069017380LL;
uint32_t x790 = UINT32_MAX;
uint64_t x792 = 340234510094LLU;
static int8_t x802 = 1;
volatile int64_t t183 = -49155LL;
int32_t x809 = INT32_MIN;
int32_t x811 = -7250;
int64_t x821 = 450894668925LL;
volatile uint8_t x828 = 7U;
uint8_t x845 = 123U;
int16_t x847 = -1;
volatile uint64_t t192 = 1140424069144LLU;
static uint32_t x852 = UINT32_MAX;
int16_t x854 = INT16_MAX;
volatile int32_t x855 = INT32_MIN;
static int64_t x863 = INT64_MIN;
int32_t x870 = INT32_MIN;
volatile int32_t x874 = INT32_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 0;

    t0 = (x1&(x2+(x3|x4)));

    if (t0 != -256) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = -1;
	int32_t x8 = -1;
	volatile int64_t t1 = INT64_MAX;

    t1 = (x5&(x6+(x7|x8)));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = 0;
	int16_t x15 = 10604;
	static uint64_t x16 = UINT64_MAX;
	static uint64_t t2 = 0LLU;

    t2 = (x13&(x14+(x15|x16)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = -1;
	static uint8_t x18 = 70U;
	int32_t x19 = -73;
	volatile int32_t t3 = 0;

    t3 = (x17&(x18+(x19|x20)));

    if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = -8432;
	static uint8_t x24 = 10U;

    t4 = (x21&(x22+(x23|x24)));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	uint64_t x27 = 1245200387LLU;
	volatile uint64_t t5 = 4607315LLU;

    t5 = (x25&(x26+(x27|x28)));

    if (t5 != 1245184000LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x29 = 83U;
	volatile uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MIN;
	static volatile uint64_t t6 = 601195954580263162LLU;

    t6 = (x29&(x30+(x31|x32)));

    if (t6 != 83LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -204659728LL;
	uint16_t x34 = 424U;
	int64_t x35 = -332LL;
	int16_t x36 = -1;
	int64_t t7 = -112334689401645458LL;

    t7 = (x33&(x34+(x35|x36)));

    if (t7 != 416LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	int16_t x39 = 3588;
	int8_t x40 = 63;
	int32_t t8 = 1;

    t8 = (x37&(x38+(x39|x40)));

    if (t8 != 63) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = INT64_MIN;
	volatile int64_t x42 = -1LL;
	int16_t x44 = 133;
	int64_t t9 = 810009172LL;

    t9 = (x41&(x42+(x43|x44)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -1;
	int64_t x46 = INT64_MAX;
	static int8_t x47 = INT8_MIN;
	volatile uint64_t t10 = 101250976010LLU;

    t10 = (x45&(x46+(x47|x48)));

    if (t10 != 9223372036854775739LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x54 = INT64_MAX;
	static volatile int32_t x56 = INT32_MIN;
	volatile int64_t t11 = -398173935725255LL;

    t11 = (x53&(x54+(x55|x56)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x57 = INT16_MIN;
	int64_t x58 = -124205731772LL;
	uint32_t x59 = 15590498U;
	int64_t t12 = 868LL;

    t12 = (x57&(x58+(x59|x60)));

    if (t12 != -119910924288LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x61 = UINT64_MAX;
	uint32_t x62 = 64889449U;
	volatile int16_t x63 = -1;

    t13 = (x61&(x62+(x63|x64)));

    if (t13 != 64889448LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x65 = -65392LL;
	uint16_t x66 = 4889U;
	int64_t x67 = -65562063754349210LL;
	uint32_t x68 = 17611U;

    t14 = (x65&(x66+(x67|x68)));

    if (t14 != -65562063754362880LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = 123U;
	int64_t x72 = -1LL;
	int64_t t15 = 3652055106061626905LL;

    t15 = (x69&(x70+(x71|x72)));

    if (t15 != 123LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x74 = 71U;
	int8_t x75 = 17;
	int8_t x76 = INT8_MIN;
	uint32_t t16 = 5247975U;

    t16 = (x73&(x74+(x75|x76)));

    if (t16 != 1800U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = INT32_MIN;
	int64_t x78 = 7513285573168737LL;
	volatile int16_t x79 = -29;
	uint32_t x80 = UINT32_MAX;
	int64_t t17 = 1LL;

    t17 = (x77&(x78+(x79|x80)));

    if (t17 != 7513289370107904LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	uint32_t x82 = UINT32_MAX;
	volatile int8_t x84 = -4;
	volatile uint32_t t18 = 0U;

    t18 = (x81&(x82+(x83|x84)));

    if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 115814456LLU;
	int64_t x87 = -495824762160023LL;
	static uint32_t x88 = UINT32_MAX;
	static volatile uint64_t t19 = 688329038581LLU;

    t19 = (x85&(x86+(x87|x88)));

    if (t19 != 12343LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = INT64_MAX;
	int64_t x92 = INT64_MIN;

    t20 = (x89&(x90+(x91|x92)));

    if (t20 != 503208LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x94 = -1;
	volatile int32_t x95 = -1;
	int8_t x96 = -1;

    t21 = (x93&(x94+(x95|x96)));

    if (t21 != 4242863046672LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = UINT8_MAX;
	volatile int8_t x98 = 14;
	int8_t x99 = 5;
	static int32_t x100 = 296;

    t22 = (x97&(x98+(x99|x100)));

    if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = INT32_MIN;
	volatile int64_t x103 = -1LL;
	int16_t x104 = INT16_MIN;
	int64_t t23 = -3372872LL;

    t23 = (x101&(x102+(x103|x104)));

    if (t23 != -4294967296LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x105 = 432LLU;
	uint32_t x106 = 3179U;
	volatile int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	uint64_t t24 = 24969LLU;

    t24 = (x105&(x106+(x107|x108)));

    if (t24 != 32LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MAX;
	int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MIN;
	int64_t t25 = -91531LL;

    t25 = (x109&(x110+(x111|x112)));

    if (t25 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x113 = -1;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 723666459U;
	int32_t x116 = INT32_MAX;
	uint32_t t26 = 11U;

    t26 = (x113&(x114+(x115|x116)));

    if (t26 != 2147450879U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x117 = -1;
	volatile uint32_t x118 = 105U;
	uint64_t x119 = UINT64_MAX;
	static int16_t x120 = 3;

    t27 = (x117&(x118+(x119|x120)));

    if (t27 != 104LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x122 = -7LL;
	int64_t x123 = -1LL;
	static volatile int64_t t28 = -1LL;

    t28 = (x121&(x122+(x123|x124)));

    if (t28 != 120LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x125 = 2458225002LL;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = UINT8_MAX;
	volatile int16_t x128 = INT16_MIN;
	int64_t t29 = -609228357LL;

    t29 = (x125&(x126+(x127|x128)));

    if (t29 != 310739050LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x129 = INT8_MAX;
	int8_t x132 = 4;
	volatile int32_t t30 = 3393;

    t30 = (x129&(x130+(x131|x132)));

    if (t30 != 14) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = -8;
	int64_t x134 = -1LL;
	static int64_t x135 = -1LL;
	uint8_t x136 = 30U;
	int64_t t31 = 451LL;

    t31 = (x133&(x134+(x135|x136)));

    if (t31 != -8LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = 865;
	volatile int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint64_t x140 = UINT64_MAX;
	uint64_t t32 = 1852513180766293LLU;

    t32 = (x137&(x138+(x139|x140)));

    if (t32 != 865LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x141 = 1;
	volatile int32_t x142 = -1;
	uint32_t x143 = 21436368U;
	uint32_t t33 = 1014848793U;

    t33 = (x141&(x142+(x143|x144)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MIN;
	static int16_t x146 = INT16_MIN;
	static uint8_t x147 = 1U;
	uint16_t x148 = 20U;
	volatile int64_t t34 = INT64_MIN;

    t34 = (x145&(x146+(x147|x148)));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = UINT64_MAX;
	static int64_t x150 = -115LL;
	uint16_t x152 = 21740U;
	uint64_t t35 = 660279556065968751LLU;

    t35 = (x149&(x150+(x151|x152)));

    if (t35 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x153 = INT32_MAX;
	static uint32_t x156 = UINT32_MAX;
	volatile uint32_t t36 = 54996966U;

    t36 = (x153&(x154+(x155|x156)));

    if (t36 != 2147106730U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 40256046U;
	static uint8_t x158 = 1U;
	int32_t x159 = INT32_MIN;
	volatile uint64_t x160 = 14288352438LLU;

    t37 = (x157&(x158+(x159|x160)));

    if (t37 != 36061222LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x161 = 0;
	int32_t x162 = INT32_MIN;
	static uint8_t x163 = UINT8_MAX;

    t38 = (x161&(x162+(x163|x164)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x166 = UINT32_MAX;
	uint16_t x167 = 1U;
	int64_t t39 = -141886384351LL;

    t39 = (x165&(x166+(x167|x168)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = 309656089269811225LLU;
	int8_t x171 = -7;
	int32_t x172 = INT32_MAX;
	volatile uint64_t t40 = 251096156841LLU;

    t40 = (x169&(x170+(x171|x172)));

    if (t40 != 309656089269811224LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x174 = 52;
	uint8_t x175 = 1U;
	static uint32_t x176 = 198141U;
	volatile uint32_t t41 = 289431552U;

    t41 = (x173&(x174+(x175|x176)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x182 = INT32_MIN;
	static int64_t x183 = INT64_MIN;
	int8_t x184 = -1;

    t42 = (x181&(x182+(x183|x184)));

    if (t42 != -2147483653LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x185 = INT64_MIN;
	volatile int8_t x186 = -1;
	volatile int8_t x187 = INT8_MAX;
	static volatile uint8_t x188 = 0U;
	int64_t t43 = -224622061LL;

    t43 = (x185&(x186+(x187|x188)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x190 = 142U;
	volatile int32_t x191 = -695950;
	int32_t t44 = -495951;

    t44 = (x189&(x190+(x191|x192)));

    if (t44 != -720896) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x194 = INT32_MIN;
	int16_t x195 = 234;
	static volatile uint64_t x196 = 3180877032327LLU;
	volatile uint64_t t45 = 70264294489809105LLU;

    t45 = (x193&(x194+(x195|x196)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x197 = 16U;
	uint16_t x198 = 4U;
	int16_t x199 = INT16_MIN;
	int8_t x200 = -1;
	int32_t t46 = -479;

    t46 = (x197&(x198+(x199|x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x201 = 0U;
	int16_t x202 = INT16_MAX;
	int8_t x203 = INT8_MIN;
	volatile int32_t x204 = INT32_MIN;

    t47 = (x201&(x202+(x203|x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = 20U;
	static uint32_t x207 = 2U;
	uint32_t t48 = 1347U;

    t48 = (x205&(x206+(x207|x208)));

    if (t48 != 20U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x209 = 124U;
	volatile int8_t x211 = -1;
	volatile int8_t x212 = INT8_MIN;

    t49 = (x209&(x210+(x211|x212)));

    if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x214 = 796023589357703196LLU;
	int32_t x215 = INT32_MAX;
	uint64_t t50 = 326062865746469372LLU;

    t50 = (x213&(x214+(x215|x216)));

    if (t50 != 796023591505186834LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x217 = 16032U;
	static uint8_t x218 = 0U;
	uint64_t x219 = 7493LLU;

    t51 = (x217&(x218+(x219|x220)));

    if (t51 != 7168LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = -414470639LL;
	int16_t x223 = -336;
	int16_t x224 = INT16_MIN;
	int64_t t52 = -608686609627024LL;

    t52 = (x221&(x222+(x223|x224)));

    if (t52 != -414470655LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x225 = 77395341024889LLU;
	int16_t x226 = -1;
	volatile uint64_t t53 = 6LLU;

    t53 = (x225&(x226+(x227|x228)));

    if (t53 != 30350968LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x229 = 3U;
	static int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MAX;
	static uint16_t x232 = 1U;
	int64_t t54 = 157867436034848921LL;

    t54 = (x229&(x230+(x231|x232)));

    if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x233 = INT16_MAX;
	int16_t x234 = -8090;
	volatile int64_t x235 = -718831994696587LL;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t55 = 6220863LLU;

    t55 = (x233&(x234+(x235|x236)));

    if (t55 != 24677LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x237 = 100737734098495LLU;
	int32_t x238 = -1;
	int32_t x240 = -100982990;
	volatile uint64_t t56 = 4288455109389LLU;

    t56 = (x237&(x238+(x239|x240)));

    if (t56 != 100737666981430LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x243 = UINT64_MAX;
	int8_t x244 = -6;
	volatile uint64_t t57 = 115538628216877LLU;

    t57 = (x241&(x242+(x243|x244)));

    if (t57 != 4294934527LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x245 = -1;
	int32_t x247 = -6511;
	int64_t x248 = INT64_MIN;
	static int64_t t58 = 2098425400472LL;

    t58 = (x245&(x246+(x247|x248)));

    if (t58 != -6384LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x249 = -1;
	volatile uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	uint32_t t59 = 28644154U;

    t59 = (x249&(x250+(x251|x252)));

    if (t59 != 4294934527U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = UINT8_MAX;
	static int64_t x254 = -1LL;
	int32_t x255 = -1;
	int32_t x256 = INT32_MIN;

    t60 = (x253&(x254+(x255|x256)));

    if (t60 != 254LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = INT8_MIN;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = 19346U;
	int32_t t61 = -286404;

    t61 = (x257&(x258+(x259|x260)));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = -1;
	static int16_t x262 = INT16_MAX;
	static int32_t x263 = INT32_MAX;
	uint64_t x264 = 607716794970548LLU;
	volatile uint64_t t62 = 1861614879LLU;

    t62 = (x261&(x262+(x263|x264)));

    if (t62 != 607718545063934LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x265 = 57U;
	int32_t x267 = INT32_MIN;
	int32_t x268 = -435003564;
	volatile int32_t t63 = 151791554;

    t63 = (x265&(x266+(x267|x268)));

    if (t63 != 16) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MIN;
	uint64_t x274 = 15192209614LLU;
	static uint16_t x275 = UINT16_MAX;
	static int32_t x276 = INT32_MAX;
	uint64_t t64 = 61LLU;

    t64 = (x273&(x274+(x275|x276)));

    if (t64 != 17339693184LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t65 = INT32_MIN;

    t65 = (x277&(x278+(x279|x280)));

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x286 = INT16_MAX;
	static int8_t x287 = 11;
	volatile uint16_t x288 = UINT16_MAX;
	int32_t t66 = 7193;

    t66 = (x285&(x286+(x287|x288)));

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = -51;
	int8_t x292 = INT8_MIN;

    t67 = (x289&(x290+(x291|x292)));

    if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x293 = -22030381784LL;
	static int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 1U;
	volatile int64_t t68 = -42450684LL;

    t68 = (x293&(x294+(x295|x296)));

    if (t68 != -9223372036854772440LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = -1;
	uint32_t x298 = 446282U;
	int64_t x300 = INT64_MIN;

    t69 = (x297&(x298+(x299|x300)));

    if (t69 != -2147037366LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = INT8_MIN;
	volatile int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	static int64_t x304 = -1LL;

    t70 = (x301&(x302+(x303|x304)));

    if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x305 = 21U;
	volatile uint32_t x306 = 4U;
	uint32_t x307 = 1682U;
	uint16_t x308 = 2025U;

    t71 = (x305&(x306+(x307|x308)));

    if (t71 != 21U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x309 = -196;
	volatile int32_t x310 = INT32_MAX;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = -1;
	volatile int32_t t72 = 164164;

    t72 = (x309&(x310+(x311|x312)));

    if (t72 != 2147483452) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x313 = 9U;
	static volatile uint16_t x315 = UINT16_MAX;
	static uint64_t x316 = 0LLU;
	static uint64_t t73 = 9673LLU;

    t73 = (x313&(x314+(x315|x316)));

    if (t73 != 8LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x317 = -1931234869112LL;
	int32_t x318 = -1100888;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t74 = 16195LLU;

    t74 = (x317&(x318+(x319|x320)));

    if (t74 != 18446742142474649728LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x321 = INT32_MIN;
	static uint8_t x322 = UINT8_MAX;
	int16_t x323 = -1;
	uint16_t x324 = 1583U;
	int32_t t75 = -2;

    t75 = (x321&(x322+(x323|x324)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x325 = -1;
	int32_t x326 = -1;
	int32_t x327 = INT32_MIN;
	static uint32_t x328 = 547478U;

    t76 = (x325&(x326+(x327|x328)));

    if (t76 != 2148031125U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x329 = UINT32_MAX;
	uint8_t x330 = UINT8_MAX;
	int32_t x332 = 539;

    t77 = (x329&(x330+(x331|x332)));

    if (t77 != 2147484442U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x334 = INT16_MAX;
	int8_t x335 = -1;
	static uint8_t x336 = 48U;
	static int32_t t78 = 1;

    t78 = (x333&(x334+(x335|x336)));

    if (t78 != 32766) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x337 = -906068008087LL;
	uint16_t x338 = 74U;
	uint8_t x339 = 21U;
	uint8_t x340 = 6U;
	int64_t t79 = 125LL;

    t79 = (x337&(x338+(x339|x340)));

    if (t79 != 97LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x343 = -13060;
	int8_t x344 = INT8_MIN;
	static uint32_t t80 = 421606U;

    t80 = (x341&(x342+(x343|x344)));

    if (t80 != 4294967291U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x346 = INT32_MIN;
	volatile int64_t x347 = -4913080279287LL;
	int32_t x348 = -1;
	uint64_t t81 = 3763LLU;

    t81 = (x345&(x346+(x347|x348)));

    if (t81 != 6221LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x349 = -1980;
	static int16_t x350 = 6;
	volatile int16_t x351 = INT16_MAX;
	uint16_t x352 = 1805U;
	volatile int32_t t82 = -18024;

    t82 = (x349&(x350+(x351|x352)));

    if (t82 != 32772) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = -41;
	static volatile int64_t x355 = 601173348900LL;
	volatile int8_t x356 = INT8_MIN;
	uint64_t t83 = 8123655154LLU;

    t83 = (x353&(x354+(x355|x356)));

    if (t83 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x357 = INT64_MAX;
	volatile int64_t x358 = INT64_MAX;
	volatile int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MAX;
	volatile int64_t t84 = 510777639468163LL;

    t84 = (x357&(x358+(x359|x360)));

    if (t84 != 9223372036854743166LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x362 = -1LL;
	int16_t x363 = 186;
	int8_t x364 = -62;
	volatile int64_t t85 = -16458443740420LL;

    t85 = (x361&(x362+(x363|x364)));

    if (t85 != 65529LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x365 = -1LL;
	int32_t x366 = 8298418;
	volatile uint8_t x367 = 56U;
	uint16_t x368 = 26519U;
	int64_t t86 = 1318LL;

    t86 = (x365&(x366+(x367|x368)));

    if (t86 != 8324977LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = -1;
	static uint64_t x370 = 263605283084112LLU;
	static volatile int8_t x371 = -1;
	volatile uint64_t t87 = 180770594LLU;

    t87 = (x369&(x370+(x371|x372)));

    if (t87 != 263605283084111LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x373 = INT32_MIN;
	int16_t x375 = INT16_MIN;

    t88 = (x373&(x374+(x375|x376)));

    if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x377 = INT32_MIN;
	static uint64_t x378 = UINT64_MAX;
	static int32_t x379 = 2722985;
	uint16_t x380 = 3628U;
	volatile uint64_t t89 = 87LLU;

    t89 = (x377&(x378+(x379|x380)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x381 = 55U;
	volatile uint64_t x382 = 31823858328872496LLU;
	volatile int16_t x383 = -1;
	static int64_t x384 = INT64_MIN;
	volatile uint64_t t90 = 1507146LLU;

    t90 = (x381&(x382+(x383|x384)));

    if (t90 != 39LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x387 = UINT16_MAX;
	static int64_t x388 = 463779899305804LL;
	volatile uint64_t t91 = 4136LLU;

    t91 = (x385&(x386+(x387|x388)));

    if (t91 != 463779899310373LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x393 = INT32_MAX;
	static volatile int16_t x395 = -20;
	static int32_t x396 = -16267;

    t92 = (x393&(x394+(x395|x396)));

    if (t92 != 32764) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x397 = 0U;
	uint8_t x398 = 5U;
	volatile int32_t t93 = -294831;

    t93 = (x397&(x398+(x399|x400)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	uint32_t t94 = 12370603U;

    t94 = (x401&(x402+(x403|x404)));

    if (t94 != 4294902015U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x405 = -116796;
	static int8_t x406 = -1;
	int64_t x408 = INT64_MAX;
	static volatile int64_t t95 = -3751LL;

    t95 = (x405&(x406+(x407|x408)));

    if (t95 != -116796LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x409 = -1;
	uint8_t x410 = 3U;
	static uint64_t x412 = 4130475598334LLU;
	volatile uint64_t t96 = 767782846600649039LLU;

    t96 = (x409&(x410+(x411|x412)));

    if (t96 != 4130475601410LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x413 = -1;
	static volatile uint32_t x414 = 35U;
	int16_t x415 = 6;
	volatile int16_t x416 = INT16_MIN;
	volatile uint32_t t97 = 279414U;

    t97 = (x413&(x414+(x415|x416)));

    if (t97 != 4294934569U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x417 = 26417U;
	int16_t x418 = INT16_MAX;
	int16_t x419 = INT16_MAX;
	int8_t x420 = 3;
	int32_t t98 = -1921;

    t98 = (x417&(x418+(x419|x420)));

    if (t98 != 26416) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x429 = 168833966U;
	int64_t x430 = INT64_MIN;
	static uint64_t x431 = UINT64_MAX;
	static int64_t x432 = INT64_MIN;
	uint64_t t99 = 7696515LLU;

    t99 = (x429&(x430+(x431|x432)));

    if (t99 != 168833966LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x433 = INT8_MAX;
	int32_t x434 = 1;
	static int64_t x436 = -1LL;
	int64_t t100 = -122807990LL;

    t100 = (x433&(x434+(x435|x436)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x437 = UINT16_MAX;
	int32_t x439 = INT32_MIN;
	int64_t x440 = INT64_MIN;
	int64_t t101 = 4222903548174057866LL;

    t101 = (x437&(x438+(x439|x440)));

    if (t101 != 127LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x445 = 620U;
	uint32_t x448 = 3U;
	uint32_t t102 = 41U;

    t102 = (x445&(x446+(x447|x448)));

    if (t102 != 108U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x449 = INT16_MIN;
	static int8_t x450 = -1;
	static uint16_t x451 = UINT16_MAX;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t103 = -2528;

    t103 = (x449&(x450+(x451|x452)));

    if (t103 != 32768) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x453 = 4172098341105687LLU;
	int8_t x454 = INT8_MIN;
	uint16_t x455 = 1812U;
	volatile int16_t x456 = INT16_MIN;
	uint64_t t104 = 6112860648LLU;

    t104 = (x453&(x454+(x455|x456)));

    if (t104 != 4172098341077012LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = -1;
	volatile int8_t x458 = -1;
	int32_t x459 = -1;
	static volatile uint64_t x460 = UINT64_MAX;
	volatile uint64_t t105 = 425693756210375LLU;

    t105 = (x457&(x458+(x459|x460)));

    if (t105 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x461 = INT64_MIN;
	volatile uint16_t x463 = 7U;
	int32_t x464 = 67;
	volatile uint64_t t106 = 1628890280682368LLU;

    t106 = (x461&(x462+(x463|x464)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x465 = 224393200;
	int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MAX;

    t107 = (x465&(x466+(x467|x468)));

    if (t107 != 223082480LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x473 = -72190LL;
	static int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MIN;
	static int32_t x476 = -14;

    t108 = (x473&(x474+(x475|x476)));

    if (t108 != -72190LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = INT32_MIN;
	static int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MAX;
	volatile uint64_t x480 = 844044618658LLU;
	volatile uint64_t t109 = 834870726LLU;

    t109 = (x477&(x478+(x479|x480)));

    if (t109 != 843961073664LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	int8_t x482 = INT8_MAX;
	int64_t x483 = 1LL;
	uint32_t x484 = 29681861U;
	static int64_t t110 = -81520533463742431LL;

    t110 = (x481&(x482+(x483|x484)));

    if (t110 != 68LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x489 = -1;
	uint32_t x490 = UINT32_MAX;
	int64_t x491 = -1LL;
	int8_t x492 = INT8_MIN;
	int64_t t111 = -1LL;

    t111 = (x489&(x490+(x491|x492)));

    if (t111 != 4294967294LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x493 = 17255261226519LLU;
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = INT64_MIN;
	volatile uint64_t t112 = 4179LLU;

    t112 = (x493&(x494+(x495|x496)));

    if (t112 != 3293188LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x497 = INT32_MAX;
	static int32_t x498 = -6935009;
	uint8_t x499 = 0U;
	uint8_t x500 = UINT8_MAX;

    t113 = (x497&(x498+(x499|x500)));

    if (t113 != 2140548894) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x501 = UINT16_MAX;
	static int8_t x503 = INT8_MAX;
	uint32_t x504 = UINT32_MAX;
	uint32_t t114 = 3575046U;

    t114 = (x501&(x502+(x503|x504)));

    if (t114 != 65535U) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x505 = INT8_MAX;
	int32_t x506 = -8283151;
	static uint16_t x507 = 4U;

    t115 = (x505&(x506+(x507|x508)));

    if (t115 != 117) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x509 = -1LL;
	static int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;
	int32_t x512 = -59502;
	volatile int64_t t116 = -2091612236426235257LL;

    t116 = (x509&(x510+(x511|x512)));

    if (t116 != -26862LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x517 = INT32_MIN;
	uint8_t x518 = 0U;
	volatile int16_t x520 = INT16_MIN;
	uint32_t t117 = 509U;

    t117 = (x517&(x518+(x519|x520)));

    if (t117 != 2147483648U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x521 = INT8_MIN;
	volatile int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MAX;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t118 = -4;

    t118 = (x521&(x522+(x523|x524)));

    if (t118 != 32640) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x525 = 46U;
	int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MIN;
	volatile int8_t x528 = -1;
	int32_t t119 = -1776;

    t119 = (x525&(x526+(x527|x528)));

    if (t119 != 46) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = -730;
	uint16_t x530 = 445U;
	int64_t x531 = INT64_MIN;
	static uint16_t x532 = UINT16_MAX;
	volatile int64_t t120 = 20595536560627LL;

    t120 = (x529&(x530+(x531|x532)));

    if (t120 != -9223372036854709980LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x533 = 1561156047U;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 1050142993173935LLU;
	volatile uint64_t t121 = 106372471LLU;

    t121 = (x533&(x534+(x535|x536)));

    if (t121 != 1476413838LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x541 = INT64_MIN;
	uint32_t x542 = UINT32_MAX;
	volatile uint16_t x543 = 109U;
	uint8_t x544 = UINT8_MAX;
	int64_t t122 = -1928864385599371LL;

    t122 = (x541&(x542+(x543|x544)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x545 = -14;
	uint32_t x546 = UINT32_MAX;
	static uint8_t x547 = 0U;
	static volatile uint32_t t123 = 33362315U;

    t123 = (x545&(x546+(x547|x548)));

    if (t123 != 386460098U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x549 = 2476U;
	static int16_t x550 = 1;
	static int16_t x551 = 1949;
	volatile int64_t x552 = -1LL;
	static volatile int64_t t124 = 1LL;

    t124 = (x549&(x550+(x551|x552)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x553 = 48U;
	int16_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile int32_t t125 = -221733584;

    t125 = (x553&(x554+(x555|x556)));

    if (t125 != 48) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x557 = INT32_MIN;
	int32_t x559 = INT32_MIN;
	int32_t x560 = INT32_MAX;
	volatile int32_t t126 = -147264917;

    t126 = (x557&(x558+(x559|x560)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MAX;
	volatile int16_t x563 = INT16_MAX;

    t127 = (x561&(x562+(x563|x564)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x566 = 302;
	int16_t x567 = INT16_MIN;
	int32_t x568 = 106505;

    t128 = (x565&(x566+(x567|x568)));

    if (t128 != 8503) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = -1;
	uint32_t x570 = 8252452U;
	volatile int32_t x571 = INT32_MIN;
	uint32_t x572 = 46181028U;
	volatile uint32_t t129 = 1U;

    t129 = (x569&(x570+(x571|x572)));

    if (t129 != 2201917128U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = INT8_MIN;
	volatile int16_t x574 = INT16_MIN;
	static int32_t x575 = INT32_MIN;
	static int32_t x576 = -1;

    t130 = (x573&(x574+(x575|x576)));

    if (t130 != -32896) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x577 = 0U;
	volatile int8_t x578 = INT8_MAX;
	static int64_t x579 = INT64_MIN;
	int16_t x580 = INT16_MAX;
	static volatile int64_t t131 = 1965890962194LL;

    t131 = (x577&(x578+(x579|x580)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x581 = -902LL;
	volatile uint32_t x582 = 12120U;
	static int32_t x584 = INT32_MIN;

    t132 = (x581&(x582+(x583|x584)));

    if (t132 != 11346LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x585 = 12979U;
	int16_t x586 = INT16_MIN;
	int32_t x587 = INT32_MIN;
	int64_t t133 = 2414784253166LL;

    t133 = (x585&(x586+(x587|x588)));

    if (t133 != 12929LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x589 = 0;
	uint32_t x590 = 9478U;
	int8_t x591 = 11;
	int8_t x592 = INT8_MIN;
	uint32_t t134 = 2U;

    t134 = (x589&(x590+(x591|x592)));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x593 = 43222345142947987LLU;
	volatile int16_t x594 = 1;
	volatile int64_t x595 = -1LL;
	static volatile int8_t x596 = INT8_MIN;
	uint64_t t135 = 238949882116LLU;

    t135 = (x593&(x594+(x595|x596)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x597 = INT8_MAX;
	static int64_t x598 = -1LL;
	static uint64_t x599 = 10697299203705777LLU;
	int8_t x600 = INT8_MIN;
	volatile uint64_t t136 = 4073279427081861LLU;

    t136 = (x597&(x598+(x599|x600)));

    if (t136 != 48LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x602 = 2395;
	uint8_t x603 = UINT8_MAX;
	volatile uint32_t t137 = 11722U;

    t137 = (x601&(x602+(x603|x604)));

    if (t137 != 33024U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x605 = UINT8_MAX;
	uint32_t t138 = 2736724U;

    t138 = (x605&(x606+(x607|x608)));

    if (t138 != 106U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x609 = 18842227U;
	int16_t x610 = INT16_MIN;
	static int32_t x611 = INT32_MIN;
	volatile int32_t x612 = -1;
	uint32_t t139 = 4074185U;

    t139 = (x609&(x610+(x611|x612)));

    if (t139 != 18809459U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x613 = 34410U;
	static int16_t x614 = -13;
	int32_t x615 = 286;
	uint16_t x616 = UINT16_MAX;
	uint32_t t140 = 1U;

    t140 = (x613&(x614+(x615|x616)));

    if (t140 != 34402U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x619 = 149;
	int64_t t141 = -11812550133LL;

    t141 = (x617&(x618+(x619|x620)));

    if (t141 != 8LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x621 = -3;
	int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;

    t142 = (x621&(x622+(x623|x624)));

    if (t142 != -32896LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x625 = 4LLU;
	volatile int64_t x626 = -1LL;
	static volatile int64_t x627 = -7471289437573933LL;
	uint64_t x628 = 229LLU;

    t143 = (x625&(x626+(x627|x628)));

    if (t143 != 4LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x629 = 14193;
	static uint64_t x631 = 0LLU;
	uint64_t t144 = 421054943841970LLU;

    t144 = (x629&(x630+(x631|x632)));

    if (t144 != 12577LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x635 = 392U;
	volatile int32_t x636 = -7222282;
	uint32_t t145 = 101U;

    t145 = (x633&(x634+(x635|x636)));

    if (t145 != 4287767882U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x637 = 24U;
	int16_t x638 = INT16_MAX;
	int16_t x639 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	uint32_t t146 = 30U;

    t146 = (x637&(x638+(x639|x640)));

    if (t146 != 24U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x641 = INT64_MAX;
	int16_t x643 = -1;
	volatile int64_t x644 = INT64_MIN;
	volatile int64_t t147 = -417336202645752010LL;

    t147 = (x641&(x642+(x643|x644)));

    if (t147 != 126LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x645 = 9;
	int8_t x646 = -22;
	int32_t x647 = INT32_MIN;
	static int8_t x648 = INT8_MAX;

    t148 = (x645&(x646+(x647|x648)));

    if (t148 != 9) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x651 = 1;
	uint32_t t149 = 2854U;

    t149 = (x649&(x650+(x651|x652)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x653 = UINT32_MAX;
	uint16_t x654 = 456U;
	static int64_t x655 = 17093711LL;
	static volatile int64_t t150 = 20202875265857768LL;

    t150 = (x653&(x654+(x655|x656)));

    if (t150 != 17226039LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x657 = -264;
	static int16_t x658 = -1;
	static int32_t x659 = INT32_MAX;
	int8_t x660 = 54;
	static int32_t t151 = -18759779;

    t151 = (x657&(x658+(x659|x660)));

    if (t151 != 2147483384) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x661 = UINT64_MAX;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = INT64_MAX;
	volatile uint64_t t152 = 1227LLU;

    t152 = (x661&(x662+(x663|x664)));

    if (t152 != 4294967294LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x669 = 1821U;
	volatile int8_t x670 = -1;
	int64_t t153 = -4454795LL;

    t153 = (x669&(x670+(x671|x672)));

    if (t153 != 1820LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x677 = -1LL;
	int64_t x679 = 187513LL;
	volatile uint16_t x680 = UINT16_MAX;
	static volatile int64_t t154 = 1530141537822LL;

    t154 = (x677&(x678+(x679|x680)));

    if (t154 != 196655LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x686 = UINT64_MAX;
	volatile int8_t x687 = 24;
	volatile int64_t x688 = -58LL;
	volatile uint64_t t155 = 26767767324787313LLU;

    t155 = (x685&(x686+(x687|x688)));

    if (t155 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x689 = UINT32_MAX;
	int8_t x690 = -1;
	int8_t x691 = INT8_MAX;
	static uint32_t t156 = 710743484U;

    t156 = (x689&(x690+(x691|x692)));

    if (t156 != 126U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x693 = UINT8_MAX;
	int64_t x694 = -1LL;
	static int8_t x695 = INT8_MIN;
	uint32_t x696 = UINT32_MAX;
	int64_t t157 = -180339522LL;

    t157 = (x693&(x694+(x695|x696)));

    if (t157 != 254LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x698 = 2;
	int16_t x699 = INT16_MIN;
	int32_t x700 = -1;
	volatile int64_t t158 = 215646LL;

    t158 = (x697&(x698+(x699|x700)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x701 = -5;
	static int8_t x702 = 11;
	int32_t x703 = INT32_MAX;
	int64_t x704 = -1LL;
	int64_t t159 = 0LL;

    t159 = (x701&(x702+(x703|x704)));

    if (t159 != 10LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x706 = INT8_MIN;
	volatile int16_t x708 = -346;
	static volatile int64_t t160 = INT64_MIN;

    t160 = (x705&(x706+(x707|x708)));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x709 = INT8_MIN;
	uint64_t x710 = 22817648366589905LLU;
	int16_t x711 = INT16_MIN;
	static uint8_t x712 = UINT8_MAX;
	volatile uint64_t t161 = 243909694LLU;

    t161 = (x709&(x710+(x711|x712)));

    if (t161 != 22817648366557312LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = 22;
	uint16_t x719 = UINT16_MAX;
	static int16_t x720 = 7;

    t162 = (x717&(x718+(x719|x720)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x721 = UINT16_MAX;
	int32_t x722 = INT32_MAX;
	static int16_t x723 = INT16_MAX;
	int8_t x724 = INT8_MIN;
	int32_t t163 = 1186796;

    t163 = (x721&(x722+(x723|x724)));

    if (t163 != 65534) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x725 = -7983162338LL;
	uint8_t x726 = UINT8_MAX;
	int8_t x727 = INT8_MIN;
	int64_t x728 = -1LL;
	int64_t t164 = 31386322027085647LL;

    t164 = (x725&(x726+(x727|x728)));

    if (t164 != 30LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x729 = 701036U;
	int64_t x730 = -73633388223LL;
	volatile uint64_t x731 = 491LLU;
	volatile int32_t x732 = -1;

    t165 = (x729&(x730+(x731|x732)));

    if (t165 != 696384LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x733 = 1U;
	int8_t x734 = -3;
	int8_t x735 = -1;
	volatile int8_t x736 = INT8_MIN;
	static int32_t t166 = 642133113;

    t166 = (x733&(x734+(x735|x736)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x737 = 29U;
	int8_t x739 = 8;
	int64_t t167 = 138460856054685042LL;

    t167 = (x737&(x738+(x739|x740)));

    if (t167 != 13LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x741 = -415198918;
	int32_t x742 = -1;
	uint64_t x743 = 7446642528014343090LLU;
	int16_t x744 = -3;
	volatile uint64_t t168 = 93227988011226LLU;

    t168 = (x741&(x742+(x743|x744)));

    if (t168 != 18446744073294352698LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x745 = -1;
	int8_t x746 = -1;
	static int32_t x748 = INT32_MAX;
	int32_t t169 = -147820;

    t169 = (x745&(x746+(x747|x748)));

    if (t169 != 2147483646) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x749 = INT64_MIN;
	int64_t x750 = -1LL;
	int32_t x751 = INT32_MIN;
	volatile int32_t x752 = -2;
	int64_t t170 = INT64_MIN;

    t170 = (x749&(x750+(x751|x752)));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x753 = 2;
	volatile int64_t x754 = 3377780471558202LL;
	int32_t x755 = 32706;
	static int64_t t171 = -5LL;

    t171 = (x753&(x754+(x755|x756)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x757 = -1LL;
	static int64_t t172 = 66060854132LL;

    t172 = (x757&(x758+(x759|x760)));

    if (t172 != -2147418113LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x761 = -38;
	int64_t x763 = 8467953460LL;

    t173 = (x761&(x762+(x763|x764)));

    if (t173 != 9223372045322729234LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x766 = 655U;
	volatile uint64_t x767 = 0LLU;

    t174 = (x765&(x766+(x767|x768)));

    if (t174 != 134LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x773 = 1779758U;
	uint16_t x774 = 0U;
	int64_t x775 = INT64_MAX;
	static volatile int8_t x776 = INT8_MIN;
	volatile int64_t t175 = -6258742953785LL;

    t175 = (x773&(x774+(x775|x776)));

    if (t175 != 1779758LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x778 = -1LL;
	int64_t x779 = INT64_MIN;
	int16_t x780 = -1;
	int64_t t176 = -4139606LL;

    t176 = (x777&(x778+(x779|x780)));

    if (t176 != 4294967294LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x782 = UINT32_MAX;
	int32_t x783 = INT32_MIN;
	uint32_t x784 = UINT32_MAX;
	static volatile int64_t t177 = 5548LL;

    t177 = (x781&(x782+(x783|x784)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x787 = 182U;
	uint8_t x788 = 0U;

    t178 = (x785&(x786+(x787|x788)));

    if (t178 != 133LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x789 = UINT64_MAX;
	int64_t x791 = INT64_MIN;
	volatile uint64_t t179 = 29770036710176949LLU;

    t179 = (x789&(x790+(x791|x792)));

    if (t179 != 9223372381384253197LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x793 = UINT32_MAX;
	uint32_t x794 = UINT32_MAX;
	volatile int8_t x795 = 1;
	int64_t x796 = INT64_MIN;
	volatile int64_t t180 = -4338473630996LL;

    t180 = (x793&(x794+(x795|x796)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x797 = 3LLU;
	static int64_t x798 = 1887LL;
	int16_t x799 = INT16_MIN;
	int16_t x800 = -15994;
	volatile uint64_t t181 = 8322061876LLU;

    t181 = (x797&(x798+(x799|x800)));

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x801 = 4717147LLU;
	uint16_t x803 = 10861U;
	static volatile int8_t x804 = INT8_MAX;
	volatile uint64_t t182 = 98766LLU;

    t182 = (x801&(x802+(x803|x804)));

    if (t182 != 10752LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x805 = INT8_MIN;
	volatile int64_t x806 = 21872731LL;
	volatile int32_t x807 = INT32_MAX;
	int8_t x808 = INT8_MIN;

    t183 = (x805&(x806+(x807|x808)));

    if (t183 != 21872640LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x810 = 0;
	volatile uint32_t x812 = 889233U;
	uint32_t t184 = 69U;

    t184 = (x809&(x810+(x811|x812)));

    if (t184 != 2147483648U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x813 = INT32_MAX;
	static int64_t x814 = -1LL;
	volatile int8_t x815 = INT8_MAX;
	uint32_t x816 = 269U;
	static int64_t t185 = -4156410670612090LL;

    t185 = (x813&(x814+(x815|x816)));

    if (t185 != 382LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x822 = -1LL;
	uint8_t x823 = 3U;
	volatile uint64_t x824 = 23833971LLU;
	uint64_t t186 = 184511LLU;

    t186 = (x821&(x822+(x823|x824)));

    if (t186 != 23766128LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x825 = INT16_MIN;
	int32_t x826 = -1;
	uint32_t x827 = 19U;
	static uint32_t t187 = 201U;

    t187 = (x825&(x826+(x827|x828)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x829 = UINT8_MAX;
	uint32_t x830 = 2546U;
	uint64_t x831 = 530830965886542977LLU;
	uint64_t x832 = 4219155348600LLU;
	uint64_t t188 = 28042450LLU;

    t188 = (x829&(x830+(x831|x832)));

    if (t188 != 235LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x833 = 1927;
	int16_t x834 = INT16_MIN;
	uint64_t x835 = 20893288344LLU;
	int8_t x836 = 54;
	volatile uint64_t t189 = 14431025188195521LLU;

    t189 = (x833&(x834+(x835|x836)));

    if (t189 != 1926LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x837 = 223;
	uint64_t x838 = 2745LLU;
	uint16_t x839 = 3U;
	int64_t x840 = 819110480820292754LL;
	static uint64_t t190 = 3LLU;

    t190 = (x837&(x838+(x839|x840)));

    if (t190 != 76LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x841 = UINT64_MAX;
	uint64_t x842 = 398LLU;
	int64_t x843 = -25LL;
	uint16_t x844 = 16U;
	uint64_t t191 = 5404074852LLU;

    t191 = (x841&(x842+(x843|x844)));

    if (t191 != 389LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x846 = 87571302925526LLU;
	int32_t x848 = 1;

    t192 = (x845&(x846+(x847|x848)));

    if (t192 != 81LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x849 = INT8_MAX;
	int32_t x850 = -1;
	int32_t x851 = INT32_MIN;
	uint32_t t193 = 216U;

    t193 = (x849&(x850+(x851|x852)));

    if (t193 != 126U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x853 = 2069013863LLU;
	int16_t x856 = -20;
	volatile uint64_t t194 = 226316LLU;

    t194 = (x853&(x854+(x855|x856)));

    if (t194 != 9571LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x857 = UINT64_MAX;
	uint8_t x858 = 1U;
	int32_t x859 = 1;
	int8_t x860 = -1;
	uint64_t t195 = 203928938352242LLU;

    t195 = (x857&(x858+(x859|x860)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x861 = UINT32_MAX;
	uint32_t x862 = 254320762U;
	volatile int32_t x864 = -1;
	int64_t t196 = 12590031797834LL;

    t196 = (x861&(x862+(x863|x864)));

    if (t196 != 254320761LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x865 = INT8_MIN;
	int64_t x866 = 381576987LL;
	uint64_t x867 = UINT64_MAX;
	int8_t x868 = INT8_MIN;
	uint64_t t197 = 3280673LLU;

    t197 = (x865&(x866+(x867|x868)));

    if (t197 != 381576960LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x869 = INT16_MIN;
	int32_t x871 = -1;
	uint64_t x872 = UINT64_MAX;
	static volatile uint64_t t198 = 1161LLU;

    t198 = (x869&(x870+(x871|x872)));

    if (t198 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x873 = -2;
	int64_t x875 = -116440LL;
	volatile uint32_t x876 = 207U;
	int64_t t199 = -9891LL;

    t199 = (x873&(x874+(x875|x876)));

    if (t199 != -2147599890LL) { NG(); } else { ; }
	
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

