
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

static volatile int16_t x1 = -16;
int32_t x2 = 0;
volatile int32_t t0 = -1;
int8_t x8 = INT8_MIN;
int32_t x9 = INT32_MAX;
uint8_t x10 = 1U;
volatile uint64_t x13 = 4538705LLU;
uint64_t t3 = 461275LLU;
int32_t x26 = -1;
volatile int32_t x28 = 162307572;
int16_t x36 = 13492;
int32_t x42 = INT32_MIN;
volatile uint64_t t10 = UINT64_MAX;
static uint16_t x47 = 15923U;
volatile int64_t t11 = 331001LL;
int64_t x51 = INT64_MAX;
int64_t x54 = INT64_MIN;
volatile int64_t t13 = 1181263100962820LL;
uint64_t x67 = UINT64_MAX;
uint32_t x72 = 22492130U;
int32_t x75 = -2;
uint16_t x77 = 461U;
int64_t x81 = INT64_MIN;
volatile int64_t x82 = INT64_MIN;
volatile int64_t t21 = INT64_MIN;
volatile int8_t x99 = -1;
int32_t x100 = -1;
int64_t x102 = INT64_MAX;
int32_t x103 = -1;
volatile int8_t x105 = INT8_MAX;
int16_t x116 = -159;
volatile uint64_t t29 = 3572637LLU;
volatile uint8_t x126 = UINT8_MAX;
int32_t t31 = 1;
static uint32_t t32 = UINT32_MAX;
int64_t t33 = 7276LL;
volatile int32_t t34 = 252;
volatile int32_t x146 = INT32_MIN;
uint64_t t36 = UINT64_MAX;
static uint64_t t37 = 8905171103578373LLU;
int16_t x171 = INT16_MIN;
volatile int32_t x176 = INT32_MIN;
int64_t x178 = -1LL;
int64_t x179 = INT64_MAX;
static int32_t x182 = INT32_MIN;
int32_t x183 = INT32_MIN;
static uint8_t x184 = 10U;
int8_t x187 = -1;
volatile uint8_t x194 = 10U;
uint8_t x199 = 0U;
volatile int8_t x201 = INT8_MAX;
volatile int64_t t50 = 3527602473767186324LL;
int8_t x214 = -1;
volatile int16_t x215 = INT16_MAX;
volatile uint64_t t54 = 342434130LLU;
static int8_t x225 = 6;
static volatile int16_t x234 = INT16_MAX;
volatile int32_t x235 = -116039187;
volatile int8_t x236 = -1;
static int16_t x244 = INT16_MIN;
volatile uint64_t t60 = 1733LLU;
uint8_t x248 = 95U;
volatile int64_t x251 = INT64_MAX;
int32_t x252 = INT32_MIN;
volatile int64_t x256 = INT64_MIN;
int64_t t65 = -18LL;
int64_t t68 = 1065070575891727301LL;
int32_t x280 = INT32_MIN;
int16_t x281 = INT16_MAX;
uint32_t x284 = 30693286U;
volatile uint64_t x285 = UINT64_MAX;
int32_t x295 = -1616;
static uint8_t x303 = 90U;
volatile int64_t t77 = 227006980LL;
static int32_t x314 = INT32_MAX;
uint16_t x316 = 225U;
static uint32_t x319 = 84881U;
static int32_t x325 = -1;
static uint16_t x327 = 18U;
static int8_t x328 = 26;
int8_t x329 = -6;
uint8_t x330 = UINT8_MAX;
int16_t x335 = INT16_MAX;
static int16_t x345 = -62;
int64_t x347 = -1LL;
static int64_t x349 = -4590079718556LL;
uint16_t x351 = UINT16_MAX;
int8_t x353 = -1;
volatile int16_t x357 = INT16_MAX;
int16_t x366 = 10;
uint16_t x371 = 6U;
volatile int16_t x373 = 499;
int32_t t94 = 158;
static uint8_t x391 = 2U;
volatile int32_t t97 = -494547798;
uint64_t x395 = UINT64_MAX;
uint32_t x400 = 4199U;
static int32_t x408 = -1;
volatile int8_t x411 = INT8_MIN;
volatile uint64_t t102 = 3961351852406285LLU;
int64_t x418 = -39LL;
uint64_t x429 = 1072141778214LLU;
volatile int64_t t108 = -934892LL;
uint64_t x437 = UINT64_MAX;
int16_t x441 = 1;
static uint64_t x444 = 247537202272818LLU;
int32_t x445 = INT32_MIN;
int16_t x447 = INT16_MIN;
volatile int16_t x450 = INT16_MIN;
uint32_t x453 = UINT32_MAX;
volatile int64_t t117 = 336774LL;
int16_t x478 = INT16_MAX;
uint32_t x481 = 189155125U;
int8_t x483 = 57;
uint64_t x487 = 1LLU;
volatile uint64_t t121 = UINT64_MAX;
int8_t x491 = 48;
int16_t x499 = 0;
uint16_t x501 = 3812U;
int16_t x504 = 10;
volatile int16_t x509 = 186;
volatile uint8_t x512 = 2U;
uint8_t x515 = 1U;
int32_t x517 = INT32_MIN;
uint32_t x526 = UINT32_MAX;
static int8_t x532 = -1;
static volatile int32_t t134 = 3540173;
uint16_t x542 = UINT16_MAX;
volatile int32_t t137 = -16770674;
int8_t x564 = INT8_MIN;
uint32_t t140 = 348U;
int16_t x567 = -1;
int32_t x572 = INT32_MIN;
int64_t t143 = 21LL;
int16_t x578 = INT16_MAX;
volatile int16_t x586 = -1;
int32_t t147 = 1;
int16_t x600 = INT16_MAX;
volatile uint64_t t149 = 11LLU;
uint16_t x605 = UINT16_MAX;
uint8_t x606 = UINT8_MAX;
int64_t x611 = -1LL;
uint64_t t152 = 201250883891701013LLU;
int32_t x616 = INT32_MIN;
volatile int64_t t153 = -32849940LL;
static int16_t x618 = -1;
int64_t t154 = 145LL;
int64_t x626 = INT64_MIN;
int64_t t156 = -219LL;
int32_t x630 = INT32_MIN;
volatile int8_t x631 = INT8_MIN;
static volatile int16_t x632 = INT16_MIN;
int16_t x634 = INT16_MIN;
volatile uint16_t x635 = 11222U;
volatile int64_t t158 = INT64_MAX;
uint64_t x637 = 14405LLU;
static volatile int16_t x639 = INT16_MAX;
uint32_t x643 = 11U;
int64_t x647 = -69LL;
int8_t x648 = INT8_MAX;
uint8_t x652 = UINT8_MAX;
int32_t x654 = 0;
int32_t x659 = -1;
int16_t x660 = INT16_MIN;
volatile int64_t t164 = -3LL;
uint16_t x666 = 1U;
uint16_t x674 = 4U;
volatile int8_t x677 = INT8_MIN;
volatile int16_t x680 = -1;
int8_t x685 = INT8_MIN;
volatile int8_t x688 = -1;
static uint16_t x690 = 1823U;
int8_t x695 = INT8_MIN;
static volatile int64_t t173 = -2292LL;
static int16_t x697 = -1;
int8_t x698 = INT8_MIN;
int64_t x700 = -1LL;
int16_t x703 = 1;
volatile int32_t x710 = INT32_MIN;
volatile int64_t x713 = -1LL;
uint64_t x715 = UINT64_MAX;
volatile int16_t x719 = INT16_MAX;
static int64_t t180 = -533206694815965198LL;
static int32_t x725 = -55206;
static int16_t x726 = INT16_MIN;
uint32_t x727 = 18U;
volatile uint16_t x730 = 395U;
int32_t t184 = -900588;
int64_t x741 = INT64_MIN;
int64_t x743 = INT64_MIN;
uint64_t x750 = UINT64_MAX;
uint64_t t187 = 1715514517129676566LLU;
int16_t x753 = 0;
static int16_t x755 = INT16_MIN;
volatile int32_t t188 = 1;
int32_t x761 = -5539;
static int16_t x763 = INT16_MIN;
volatile int32_t x767 = -386933;
uint64_t t191 = 1116719368932094LLU;
uint32_t x770 = 97086U;
int64_t t193 = 147LL;
int64_t x781 = 1LL;
uint16_t x793 = 2U;
uint16_t x795 = 1U;
int8_t x796 = 2;
volatile uint64_t t199 = 9474LLU;


void f0(void) {
    	uint16_t x3 = 721U;
	volatile int8_t x4 = INT8_MAX;

    t0 = ((x1&(x2&x3))^x4);

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	static int16_t x6 = INT16_MIN;
	int32_t x7 = -2860723;
	volatile int32_t t1 = -49;

    t1 = ((x5&(x6&x7))^x8);

    if (t1 != 2883456) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x11 = INT64_MIN;
	uint8_t x12 = 12U;
	int64_t t2 = -81396408246650183LL;

    t2 = ((x9&(x10&x11))^x12);

    if (t2 != 12LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x14 = 15;
	int16_t x15 = -719;
	volatile uint16_t x16 = UINT16_MAX;

    t3 = ((x13&(x14&x15))^x16);

    if (t3 != 65534LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -6;
	static volatile uint8_t x18 = 0U;
	int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 55U;
	static int64_t t4 = -37726637784079742LL;

    t4 = ((x17&(x18&x19))^x20);

    if (t4 != 55LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 14U;
	int32_t x22 = 6;
	volatile uint8_t x23 = 33U;
	volatile int8_t x24 = -1;
	volatile int32_t t5 = 2;

    t5 = ((x21&(x22&x23))^x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x27 = -574LL;
	volatile int64_t t6 = -495694LL;

    t6 = ((x25&(x26&x27))^x28);

    if (t6 != -162325004LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 0U;
	int32_t x30 = -1;
	volatile uint8_t x31 = 7U;
	static int32_t x32 = INT32_MAX;
	int32_t t7 = INT32_MAX;

    t7 = ((x29&(x30&x31))^x32);

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int64_t x34 = -1LL;
	static int32_t x35 = -3332;
	volatile int64_t t8 = -172890393146840872LL;

    t8 = ((x33&(x34&x35))^x36);

    if (t8 != -14776LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 0U;
	int64_t x38 = -1LL;
	static uint16_t x39 = 110U;
	static int32_t x40 = -111327;
	volatile int64_t t9 = -263685563LL;

    t9 = ((x37&(x38&x39))^x40);

    if (t9 != -111327LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 1682U;
	uint64_t x43 = 2456012333285065LLU;
	uint64_t x44 = UINT64_MAX;

    t10 = ((x41&(x42&x43))^x44);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -5;
	static volatile int64_t x46 = -2096079LL;
	static volatile int64_t x48 = 3155750612588LL;

    t11 = ((x45&(x46&x47))^x48);

    if (t11 != 3155750611549LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = -1LL;
	int64_t x50 = INT64_MIN;
	uint64_t x52 = 1067379192818LLU;
	volatile uint64_t t12 = 22453LLU;

    t12 = ((x49&(x50&x51))^x52);

    if (t12 != 1067379192818LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x53 = INT16_MAX;
	uint32_t x55 = 10831U;
	int8_t x56 = 6;

    t13 = ((x53&(x54&x55))^x56);

    if (t13 != 6LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 1U;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = 23948517331051LL;
	uint64_t x60 = 97979LLU;
	static uint64_t t14 = 188LLU;

    t14 = ((x57&(x58&x59))^x60);

    if (t14 != 97979LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MIN;
	uint32_t x62 = 2039330718U;
	int8_t x63 = 0;
	int32_t x64 = INT32_MIN;
	uint32_t t15 = 1637125U;

    t15 = ((x61&(x62&x63))^x64);

    if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 2635461443340912LLU;
	volatile uint8_t x66 = 3U;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t16 = 15437LLU;

    t16 = ((x65&(x66&x67))^x68);

    if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MAX;
	static int64_t x71 = INT64_MAX;
	volatile uint64_t t17 = 15940552823624697LLU;

    t17 = ((x69&(x70&x71))^x72);

    if (t17 != 22498333LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int32_t x74 = 1;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

    t18 = ((x73&(x74&x75))^x76);

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = UINT8_MAX;
	int64_t x79 = INT64_MIN;
	int8_t x80 = 0;
	int64_t t19 = 59873779635LL;

    t19 = ((x77&(x78&x79))^x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	int64_t t20 = -1LL;

    t20 = ((x81&(x82&x83))^x84);

    if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 76U;
	uint8_t x86 = 1U;
	uint32_t x87 = 112304U;
	int64_t x88 = INT64_MIN;

    t21 = ((x85&(x86&x87))^x88);

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = 3;
	int64_t x91 = INT64_MAX;
	int16_t x92 = -9509;
	volatile int64_t t22 = 6044149LL;

    t22 = ((x89&(x90&x91))^x92);

    if (t22 != -9509LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 14;
	int16_t x94 = 8;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;
	static int32_t t23 = -1613;

    t23 = ((x93&(x94&x95))^x96);

    if (t23 != -32760) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	volatile int64_t t24 = INT64_MAX;

    t24 = ((x97&(x98&x99))^x100);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	static volatile int64_t t25 = -4434360LL;

    t25 = ((x101&(x102&x103))^x104);

    if (t25 != -65409LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	static int32_t x108 = -1;
	volatile int32_t t26 = -3694549;

    t26 = ((x105&(x106&x107))^x108);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x109 = INT64_MAX;
	uint32_t x110 = 8U;
	int16_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	int64_t t27 = -13131LL;

    t27 = ((x109&(x110&x111))^x112);

    if (t27 != 247LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 10862U;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = -1;
	volatile uint32_t t28 = 600873848U;

    t28 = ((x113&(x114&x115))^x116);

    if (t28 != 4294956303U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 4950992300879LLU;
	volatile uint64_t x118 = 30LLU;
	volatile int64_t x119 = INT64_MAX;
	int16_t x120 = -1;

    t29 = ((x117&(x118&x119))^x120);

    if (t29 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -183;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	volatile int64_t t30 = 2LL;

    t30 = ((x121&(x122&x123))^x124);

    if (t30 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = UINT16_MAX;
	int32_t x127 = 58;
	uint16_t x128 = 1744U;

    t31 = ((x125&(x126&x127))^x128);

    if (t31 != 1770) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 59;
	uint8_t x130 = 2U;
	volatile int8_t x131 = INT8_MIN;
	uint32_t x132 = UINT32_MAX;

    t32 = ((x129&(x130&x131))^x132);

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MAX;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MAX;

    t33 = ((x133&(x134&x135))^x136);

    if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = 129U;
	int16_t x140 = INT16_MAX;

    t34 = ((x137&(x138&x139))^x140);

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	volatile int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	static int8_t x144 = 5;
	volatile int64_t t35 = -530564805LL;

    t35 = ((x141&(x142&x143))^x144);

    if (t35 != 2147483653LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 23581944410770842LLU;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = -1LL;

    t36 = ((x145&(x146&x147))^x148);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static int32_t x150 = -1;
	volatile uint8_t x151 = 105U;
	uint64_t x152 = UINT64_MAX;

    t37 = ((x149&(x150&x151))^x152);

    if (t37 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = 409;
	static int16_t x154 = INT16_MIN;
	volatile int16_t x155 = 268;
	int64_t x156 = -1LL;
	static int64_t t38 = -11762727119LL;

    t38 = ((x153&(x154&x155))^x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -1;
	uint8_t x158 = 7U;
	uint8_t x159 = UINT8_MAX;
	volatile uint8_t x160 = 28U;
	int32_t t39 = 158746830;

    t39 = ((x157&(x158&x159))^x160);

    if (t39 != 27) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1504111;
	static uint8_t x162 = 64U;
	uint16_t x163 = 3U;
	int64_t x164 = INT64_MAX;
	int64_t t40 = INT64_MAX;

    t40 = ((x161&(x162&x163))^x164);

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	static volatile int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	uint64_t x168 = 2822059233873748761LLU;
	uint64_t t41 = 2064927327144799LLU;

    t41 = ((x165&(x166&x167))^x168);

    if (t41 != 12045431270728524569LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	volatile int32_t x170 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	int64_t t42 = -788123963544LL;

    t42 = ((x169&(x170&x171))^x172);

    if (t42 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -2;
	int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	volatile int64_t t43 = 505446587679116007LL;

    t43 = ((x173&(x174&x175))^x176);

    if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 14667U;
	int64_t x180 = INT64_MIN;
	int64_t t44 = 118721982LL;

    t44 = ((x177&(x178&x179))^x180);

    if (t44 != -9223372036854761141LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int32_t t45 = -1866;

    t45 = ((x181&(x182&x183))^x184);

    if (t45 != -2147483638) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MAX;
	static int16_t x186 = 0;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = -25789;

    t46 = ((x185&(x186&x187))^x188);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -483LL;
	int32_t x190 = INT32_MIN;
	uint8_t x191 = 3U;
	int64_t x192 = -85152947433219LL;
	int64_t t47 = -37576633817530190LL;

    t47 = ((x189&(x190&x191))^x192);

    if (t47 != -85152947433219LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 28429676U;
	int16_t x195 = -1;
	volatile int32_t x196 = -1;
	volatile uint32_t t48 = 1110559U;

    t48 = ((x193&(x194&x195))^x196);

    if (t48 != 4294967287U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	int64_t x198 = -1LL;
	static volatile int16_t x200 = -1;
	uint64_t t49 = UINT64_MAX;

    t49 = ((x197&(x198&x199))^x200);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x202 = INT64_MAX;
	volatile int32_t x203 = INT32_MAX;
	uint16_t x204 = UINT16_MAX;

    t50 = ((x201&(x202&x203))^x204);

    if (t50 != 65408LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 0;
	volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = 6676135918772682642LLU;
	static volatile int8_t x208 = INT8_MIN;
	uint64_t t51 = 110839438956LLU;

    t51 = ((x205&(x206&x207))^x208);

    if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x209 = UINT64_MAX;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = 1;
	volatile uint8_t x212 = 1U;
	volatile uint64_t t52 = 705665257441138LLU;

    t52 = ((x209&(x210&x211))^x212);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	uint64_t x216 = 57595LLU;
	uint64_t t53 = 443LLU;

    t53 = ((x213&(x214&x215))^x216);

    if (t53 != 40708LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = -15;
	static uint64_t x218 = 683854LLU;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;

    t54 = ((x217&(x218&x219))^x220);

    if (t54 != 18446744073708867839LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	uint16_t x222 = 25U;
	int32_t x223 = -257935772;
	volatile int64_t x224 = -1LL;
	volatile int64_t t55 = -1379LL;

    t55 = ((x221&(x222&x223))^x224);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x226 = 20U;
	static volatile int8_t x227 = INT8_MIN;
	int32_t x228 = 18;
	volatile int32_t t56 = -4020994;

    t56 = ((x225&(x226&x227))^x228);

    if (t56 != 18) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 10U;
	static volatile uint32_t x230 = 87U;
	static uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MIN;
	uint32_t t57 = 8673U;

    t57 = ((x229&(x230&x231))^x232);

    if (t57 != 4294967170U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int64_t t58 = 9951LL;

    t58 = ((x233&(x234&x235))^x236);

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = -2;
	volatile uint16_t x238 = 42U;
	int64_t x239 = -165462162197709523LL;
	static volatile int16_t x240 = 10;
	int64_t t59 = 4LL;

    t59 = ((x237&(x238&x239))^x240);

    if (t59 != 34LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	static uint64_t x242 = UINT64_MAX;
	volatile int8_t x243 = INT8_MAX;

    t60 = ((x241&(x242&x243))^x244);

    if (t60 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	static volatile uint32_t x246 = 36207U;
	volatile int32_t x247 = -4830;
	uint32_t t61 = 93U;

    t61 = ((x245&(x246&x247))^x248);

    if (t61 != 125U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = 112U;
	volatile uint64_t x250 = 30LLU;
	uint64_t t62 = 97LLU;

    t62 = ((x249&(x250&x251))^x252);

    if (t62 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 5U;
	static volatile int32_t x254 = INT32_MIN;
	int64_t x255 = -1LL;
	int64_t t63 = INT64_MIN;

    t63 = ((x253&(x254&x255))^x256);

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -164;
	uint16_t x258 = 232U;
	uint8_t x259 = 2U;
	volatile int8_t x260 = INT8_MIN;
	int32_t t64 = -342;

    t64 = ((x257&(x258&x259))^x260);

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	static int32_t x262 = -518;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MAX;

    t65 = ((x261&(x262&x263))^x264);

    if (t65 != 9223372032559841279LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 4;
	uint32_t x266 = UINT32_MAX;
	static int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MAX;
	uint32_t t66 = 796501039U;

    t66 = ((x265&(x266&x267))^x268);

    if (t66 != 127U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 2759934381LL;
	int32_t x270 = -1;
	int8_t x271 = 1;
	volatile uint32_t x272 = 1556U;
	static int64_t t67 = -3292616LL;

    t67 = ((x269&(x270&x271))^x272);

    if (t67 != 1557LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 426U;
	static int8_t x274 = 0;
	int64_t x275 = 12929574LL;
	static uint8_t x276 = 72U;

    t68 = ((x273&(x274&x275))^x276);

    if (t68 != 72LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = INT64_MAX;
	int16_t x278 = 0;
	int64_t x279 = INT64_MIN;
	volatile int64_t t69 = 150500LL;

    t69 = ((x277&(x278&x279))^x280);

    if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x282 = INT16_MIN;
	static int32_t x283 = -6;
	volatile uint32_t t70 = 2524U;

    t70 = ((x281&(x282&x283))^x284);

    if (t70 != 30693286U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = UINT16_MAX;
	uint64_t t71 = 5691237LLU;

    t71 = ((x285&(x286&x287))^x288);

    if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	static uint16_t x290 = 47U;
	uint16_t x291 = UINT16_MAX;
	static int64_t x292 = INT64_MAX;
	int64_t t72 = INT64_MAX;

    t72 = ((x289&(x290&x291))^x292);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	volatile int64_t t73 = 1886LL;

    t73 = ((x293&(x294&x295))^x296);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x297 = -1;
	int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t74 = 740800272;

    t74 = ((x297&(x298&x299))^x300);

    if (t74 != 2147450880) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 121U;
	int16_t x302 = -20;
	int16_t x304 = 965;
	int32_t t75 = 269703;

    t75 = ((x301&(x302&x303))^x304);

    if (t75 != 909) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint8_t x306 = 3U;
	int64_t x307 = INT64_MIN;
	int8_t x308 = 2;
	volatile int64_t t76 = -112291957182LL;

    t76 = ((x305&(x306&x307))^x308);

    if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MAX;
	uint16_t x311 = 4665U;
	volatile int8_t x312 = 0;

    t77 = ((x309&(x310&x311))^x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	volatile int8_t x315 = INT8_MAX;
	volatile int64_t t78 = 0LL;

    t78 = ((x313&(x314&x315))^x316);

    if (t78 != 225LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 142U;
	volatile uint32_t x318 = 1U;
	int8_t x320 = -1;
	static uint32_t t79 = UINT32_MAX;

    t79 = ((x317&(x318&x319))^x320);

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 1LL;
	static volatile uint8_t x322 = 11U;
	int64_t x323 = -108443950068030895LL;
	int32_t x324 = 6;
	int64_t t80 = 1913134308543LL;

    t80 = ((x321&(x322&x323))^x324);

    if (t80 != 7LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MIN;
	int32_t t81 = 254;

    t81 = ((x325&(x326&x327))^x328);

    if (t81 != 26) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x331 = 10595;
	volatile int64_t x332 = -1643264495LL;
	int64_t t82 = -88374647308616433LL;

    t82 = ((x329&(x330&x331))^x332);

    if (t82 != -1643264397LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = INT16_MIN;
	volatile uint64_t x334 = 2074179453545LLU;
	int16_t x336 = -448;
	uint64_t t83 = 157240048083269233LLU;

    t83 = ((x333&(x334&x335))^x336);

    if (t83 != 18446744073709551168LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 1664LLU;
	int8_t x338 = 0;
	uint64_t x339 = 116225340LLU;
	volatile uint8_t x340 = UINT8_MAX;
	volatile uint64_t t84 = 2277213LLU;

    t84 = ((x337&(x338&x339))^x340);

    if (t84 != 255LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = -1LL;
	volatile int64_t x342 = -1LL;
	int8_t x343 = -1;
	static int64_t x344 = INT64_MIN;
	int64_t t85 = INT64_MAX;

    t85 = ((x341&(x342&x343))^x344);

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 101442800226793LLU;
	uint16_t x348 = 471U;
	uint64_t t86 = 121726157627034581LLU;

    t86 = ((x345&(x346&x347))^x348);

    if (t86 != 101442800226327LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 8U;
	static int32_t x352 = INT32_MIN;
	volatile int64_t t87 = 1327068LL;

    t87 = ((x349&(x350&x351))^x352);

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MAX;
	uint64_t x355 = 141829337873124359LLU;
	volatile uint16_t x356 = UINT16_MAX;
	uint64_t t88 = 7162467778LLU;

    t88 = ((x353&(x354&x355))^x356);

    if (t88 != 65528LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x358 = 72U;
	volatile uint8_t x359 = 16U;
	int64_t x360 = -1LL;
	int64_t t89 = 415446084022381339LL;

    t89 = ((x357&(x358&x359))^x360);

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = 12574;
	static uint16_t x363 = 0U;
	uint16_t x364 = 3U;
	int32_t t90 = 1;

    t90 = ((x361&(x362&x363))^x364);

    if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = UINT8_MAX;
	volatile int32_t x367 = -1;
	int8_t x368 = -1;
	int32_t t91 = -4010086;

    t91 = ((x365&(x366&x367))^x368);

    if (t91 != -11) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int8_t x370 = 5;
	int16_t x372 = INT16_MIN;
	static volatile int64_t t92 = 139902972741LL;

    t92 = ((x369&(x370&x371))^x372);

    if (t92 != -32764LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x374 = 30U;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = INT8_MAX;
	static volatile uint32_t t93 = 4U;

    t93 = ((x373&(x374&x375))^x376);

    if (t93 != 109U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 46U;
	uint16_t x378 = 5U;
	int32_t x379 = INT32_MIN;
	static uint16_t x380 = 75U;

    t94 = ((x377&(x378&x379))^x380);

    if (t94 != 75) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	static uint32_t x382 = 929900205U;
	static uint16_t x383 = 1216U;
	int32_t x384 = INT32_MIN;
	volatile uint32_t t95 = 3U;

    t95 = ((x381&(x382&x383))^x384);

    if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = -1LL;
	uint16_t x386 = 62U;
	int16_t x387 = -446;
	uint16_t x388 = 1U;
	int64_t t96 = 683884275862408554LL;

    t96 = ((x385&(x386&x387))^x388);

    if (t96 != 3LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 34;
	static int32_t x390 = INT32_MAX;
	int8_t x392 = INT8_MIN;

    t97 = ((x389&(x390&x391))^x392);

    if (t97 != -126) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -385LL;
	uint32_t x394 = 548107536U;
	static uint16_t x396 = 39U;
	static uint64_t t98 = 5LLU;

    t98 = ((x393&(x394&x395))^x396);

    if (t98 != 548107319LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	int16_t x398 = -1;
	uint16_t x399 = 1460U;
	volatile uint32_t t99 = 1687727U;

    t99 = ((x397&(x398&x399))^x400);

    if (t99 != 4199U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x401 = UINT16_MAX;
	int64_t x402 = -7308LL;
	int16_t x403 = INT16_MAX;
	static uint32_t x404 = 19U;
	volatile int64_t t100 = -95334605895LL;

    t100 = ((x401&(x402&x403))^x404);

    if (t100 != 25447LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = -1;
	int64_t x406 = INT64_MAX;
	int64_t x407 = INT64_MAX;
	volatile int64_t t101 = INT64_MIN;

    t101 = ((x405&(x406&x407))^x408);

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MIN;
	uint64_t x410 = 4890831LLU;
	int8_t x412 = INT8_MIN;

    t102 = ((x409&(x410&x411))^x412);

    if (t102 != 18446744073704660736LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 2U;
	uint64_t x414 = UINT64_MAX;
	static int64_t x415 = -1LL;
	uint8_t x416 = UINT8_MAX;
	uint64_t t103 = 57206360489LLU;

    t103 = ((x413&(x414&x415))^x416);

    if (t103 != 253LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = 0;
	int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MIN;
	static volatile int64_t t104 = -271204280668LL;

    t104 = ((x417&(x418&x419))^x420);

    if (t104 != -32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 73U;
	static int64_t x422 = INT64_MIN;
	int32_t x423 = 4347;
	volatile uint16_t x424 = 219U;
	int64_t t105 = -91LL;

    t105 = ((x421&(x422&x423))^x424);

    if (t105 != 219LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	int32_t x428 = INT32_MIN;
	int64_t t106 = -8LL;

    t106 = ((x425&(x426&x427))^x428);

    if (t106 != -2147483648LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	volatile uint32_t x432 = 6548174U;
	static uint64_t t107 = 11301LLU;

    t107 = ((x429&(x430&x431))^x432);

    if (t107 != 1072143980494LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = -98;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -45881693083LL;
	uint16_t x436 = UINT16_MAX;

    t108 = ((x433&(x434&x435))^x436);

    if (t108 != -45881720833LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x438 = INT64_MIN;
	volatile uint8_t x439 = 11U;
	volatile uint32_t x440 = UINT32_MAX;
	uint64_t t109 = 23961LLU;

    t109 = ((x437&(x438&x439))^x440);

    if (t109 != 4294967295LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = UINT16_MAX;
	int32_t x443 = -517597360;
	uint64_t t110 = 128590762008LLU;

    t110 = ((x441&(x442&x443))^x444);

    if (t110 != 247537202272818LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x446 = INT16_MIN;
	int8_t x448 = -5;
	volatile int32_t t111 = -469;

    t111 = ((x445&(x446&x447))^x448);

    if (t111 != 2147483643) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	volatile int16_t x451 = 1;
	int16_t x452 = -4207;
	static volatile int32_t t112 = -114335;

    t112 = ((x449&(x450&x451))^x452);

    if (t112 != -4207) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = 41U;
	int64_t x455 = -1LL;
	uint64_t x456 = 1077001875537391781LLU;
	volatile uint64_t t113 = 4734857510514657LLU;

    t113 = ((x453&(x454&x455))^x456);

    if (t113 != 1077001875537391756LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 342417668317LLU;
	int32_t x458 = INT32_MIN;
	volatile uint16_t x459 = 0U;
	int8_t x460 = INT8_MIN;
	uint64_t t114 = 3LLU;

    t114 = ((x457&(x458&x459))^x460);

    if (t114 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	static uint8_t x462 = UINT8_MAX;
	uint64_t x463 = 3260366LLU;
	volatile int16_t x464 = -1;
	uint64_t t115 = UINT64_MAX;

    t115 = ((x461&(x462&x463))^x464);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = 8U;
	uint8_t x466 = 3U;
	uint32_t x467 = UINT32_MAX;
	int8_t x468 = INT8_MIN;
	volatile uint32_t t116 = 12022158U;

    t116 = ((x465&(x466&x467))^x468);

    if (t116 != 4294967168U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	static volatile int64_t x470 = INT64_MAX;
	static uint16_t x471 = 29563U;
	int16_t x472 = INT16_MIN;

    t117 = ((x469&(x470&x471))^x472);

    if (t117 != -3205LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MAX;
	uint64_t x474 = UINT64_MAX;
	static int16_t x475 = -1;
	int8_t x476 = INT8_MAX;
	uint64_t t118 = 5626LLU;

    t118 = ((x473&(x474&x475))^x476);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x479 = INT8_MAX;
	uint32_t x480 = 89U;
	volatile uint32_t t119 = 15299U;

    t119 = ((x477&(x478&x479))^x480);

    if (t119 != 38U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x482 = 6LLU;
	uint8_t x484 = UINT8_MAX;
	uint64_t t120 = 85LLU;

    t120 = ((x481&(x482&x483))^x484);

    if (t120 != 255LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = -1;
	static volatile uint16_t x486 = 8U;
	static volatile int8_t x488 = -1;

    t121 = ((x485&(x486&x487))^x488);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = UINT16_MAX;
	static volatile uint16_t x490 = 386U;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = 856;

    t122 = ((x489&(x490&x491))^x492);

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = 1;
	uint16_t x494 = 5U;
	uint16_t x495 = UINT16_MAX;
	volatile int8_t x496 = -1;
	int32_t t123 = -1018;

    t123 = ((x493&(x494&x495))^x496);

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = INT32_MIN;
	static uint64_t x498 = UINT64_MAX;
	static volatile uint16_t x500 = 1U;
	volatile uint64_t t124 = 28938LLU;

    t124 = ((x497&(x498&x499))^x500);

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x502 = UINT8_MAX;
	volatile uint32_t x503 = 526U;
	uint32_t t125 = 721300953U;

    t125 = ((x501&(x502&x503))^x504);

    if (t125 != 14U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint64_t x506 = 68168596596900LLU;
	int32_t x507 = INT32_MIN;
	int32_t x508 = INT32_MAX;
	static uint64_t t126 = 423897076053LLU;

    t126 = ((x505&(x506&x507))^x508);

    if (t126 != 68169720922111LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x510 = INT32_MIN;
	uint8_t x511 = 24U;
	volatile int32_t t127 = 732249766;

    t127 = ((x509&(x510&x511))^x512);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MAX;
	int8_t x514 = -1;
	volatile int8_t x516 = 24;
	volatile int32_t t128 = -480;

    t128 = ((x513&(x514&x515))^x516);

    if (t128 != 25) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x518 = 1;
	static volatile int8_t x519 = INT8_MAX;
	volatile uint16_t x520 = 2671U;
	int32_t t129 = 132749485;

    t129 = ((x517&(x518&x519))^x520);

    if (t129 != 2671) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = INT64_MAX;
	int64_t x522 = -1LL;
	static int8_t x523 = INT8_MIN;
	int16_t x524 = 123;
	int64_t t130 = 62727682LL;

    t130 = ((x521&(x522&x523))^x524);

    if (t130 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = 27451256;
	static uint8_t x527 = 6U;
	int16_t x528 = INT16_MIN;
	volatile uint32_t t131 = 51U;

    t131 = ((x525&(x526&x527))^x528);

    if (t131 != 4294934528U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x529 = 1938195096136545LLU;
	static volatile uint8_t x530 = 111U;
	int8_t x531 = -16;
	uint64_t t132 = 4410LLU;

    t132 = ((x529&(x530&x531))^x532);

    if (t132 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x533 = 195U;
	uint64_t x534 = 59LLU;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = INT8_MIN;
	volatile uint64_t t133 = 671062LLU;

    t133 = ((x533&(x534&x535))^x536);

    if (t133 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	uint16_t x538 = 132U;
	int16_t x539 = INT16_MAX;
	volatile int8_t x540 = INT8_MAX;

    t134 = ((x537&(x538&x539))^x540);

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = -1;
	int8_t x543 = -8;
	volatile int16_t x544 = -1;
	int32_t t135 = 19;

    t135 = ((x541&(x542&x543))^x544);

    if (t135 != -65529) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	int32_t x546 = -1;
	uint8_t x547 = 4U;
	uint32_t x548 = 862362966U;
	static uint32_t t136 = 754440U;

    t136 = ((x545&(x546&x547))^x548);

    if (t136 != 862362966U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 2U;
	int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MAX;
	volatile int16_t x552 = -1;

    t137 = ((x549&(x550&x551))^x552);

    if (t137 != -3) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 336U;
	int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MIN;
	uint16_t x556 = 3674U;
	uint32_t t138 = 13899U;

    t138 = ((x553&(x554&x555))^x556);

    if (t138 != 3674U) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x557 = INT32_MIN;
	uint8_t x558 = 1U;
	volatile uint64_t x559 = UINT64_MAX;
	volatile int16_t x560 = INT16_MIN;
	uint64_t t139 = 14828LLU;

    t139 = ((x557&(x558&x559))^x560);

    if (t139 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -9582;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = INT32_MAX;

    t140 = ((x561&(x562&x563))^x564);

    if (t140 != 2147493138U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = INT16_MAX;
	uint16_t x566 = 25U;
	int32_t x568 = INT32_MIN;
	static volatile int32_t t141 = -622640999;

    t141 = ((x565&(x566&x567))^x568);

    if (t141 != -2147483623) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -66;
	int32_t x570 = -332;
	int32_t x571 = INT32_MIN;
	volatile int32_t t142 = -859;

    t142 = ((x569&(x570&x571))^x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = INT8_MIN;
	uint16_t x574 = 9639U;
	int64_t x575 = INT64_MIN;
	int8_t x576 = -3;

    t143 = ((x573&(x574&x575))^x576);

    if (t143 != -3LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	uint32_t x579 = 2373U;
	int32_t x580 = INT32_MAX;
	int64_t t144 = 16LL;

    t144 = ((x577&(x578&x579))^x580);

    if (t144 != 2147483647LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x581 = 84U;
	static uint64_t x582 = UINT64_MAX;
	static volatile uint16_t x583 = UINT16_MAX;
	uint32_t x584 = 102U;
	volatile uint64_t t145 = 100035LLU;

    t145 = ((x581&(x582&x583))^x584);

    if (t145 != 50LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 76LLU;
	int16_t x587 = -3;
	int64_t x588 = INT64_MIN;
	uint64_t t146 = 769125317807720LLU;

    t146 = ((x585&(x586&x587))^x588);

    if (t146 != 9223372036854775884LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	static volatile uint16_t x590 = 17U;
	int16_t x591 = 120;
	volatile int16_t x592 = INT16_MAX;

    t147 = ((x589&(x590&x591))^x592);

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MAX;
	uint16_t x594 = 1U;
	int16_t x595 = -1;
	int32_t x596 = INT32_MIN;
	volatile int64_t t148 = 20085147563LL;

    t148 = ((x593&(x594&x595))^x596);

    if (t148 != -2147483647LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MIN;
	int8_t x598 = 6;
	uint64_t x599 = 741069585LLU;

    t149 = ((x597&(x598&x599))^x600);

    if (t149 != 32767LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -1LL;
	static int16_t x602 = INT16_MIN;
	uint16_t x603 = UINT16_MAX;
	int16_t x604 = INT16_MAX;
	int64_t t150 = -218899489885LL;

    t150 = ((x601&(x602&x603))^x604);

    if (t150 != 65535LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x607 = 561U;
	volatile uint32_t x608 = UINT32_MAX;
	static volatile uint32_t t151 = 1039843U;

    t151 = ((x605&(x606&x607))^x608);

    if (t151 != 4294967246U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = -415465;
	volatile int8_t x610 = -1;
	uint64_t x612 = 10240LLU;

    t152 = ((x609&(x610&x611))^x612);

    if (t152 != 18446744073709125911LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 3U;
	int64_t x614 = -188443061270LL;
	uint32_t x615 = 1474632060U;

    t153 = ((x613&(x614&x615))^x616);

    if (t153 != -2147483648LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 147103LL;
	volatile int16_t x619 = -1;
	uint8_t x620 = 1U;

    t154 = ((x617&(x618&x619))^x620);

    if (t154 != 147102LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 500U;
	int16_t x622 = INT16_MIN;
	volatile int64_t x623 = -12766006606LL;
	static int16_t x624 = -1;
	volatile int64_t t155 = -1406942LL;

    t155 = ((x621&(x622&x623))^x624);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 197055387;
	static int64_t x627 = INT64_MIN;
	volatile int8_t x628 = 0;

    t156 = ((x625&(x626&x627))^x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x629 = 61U;
	int32_t t157 = 149856;

    t157 = ((x629&(x630&x631))^x632);

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	int64_t x636 = INT64_MAX;

    t158 = ((x633&(x634&x635))^x636);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x638 = INT16_MAX;
	uint32_t x640 = 60U;
	uint64_t t159 = 2LLU;

    t159 = ((x637&(x638&x639))^x640);

    if (t159 != 14457LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int64_t x642 = INT64_MAX;
	int32_t x644 = -9;
	volatile int64_t t160 = 65810744516LL;

    t160 = ((x641&(x642&x643))^x644);

    if (t160 != -9LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 7;
	static int16_t x646 = -120;
	int64_t t161 = 1054998401877817386LL;

    t161 = ((x645&(x646&x647))^x648);

    if (t161 != 127LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 31347108;
	int16_t x650 = 0;
	volatile int8_t x651 = INT8_MIN;
	volatile int32_t t162 = 28;

    t162 = ((x649&(x650&x651))^x652);

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 87767725045LLU;
	int16_t x655 = INT16_MIN;
	int32_t x656 = INT32_MIN;
	volatile uint64_t t163 = 20216499353045242LLU;

    t163 = ((x653&(x654&x655))^x656);

    if (t163 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MIN;
	int32_t x658 = -1899;

    t164 = ((x657&(x658&x659))^x660);

    if (t164 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = -1;
	int32_t x662 = 4023938;
	int8_t x663 = 0;
	uint16_t x664 = 4518U;
	int32_t t165 = -12834027;

    t165 = ((x661&(x662&x663))^x664);

    if (t165 != 4518) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 0U;
	static int8_t x667 = 1;
	volatile int64_t x668 = -5111828796150856LL;
	volatile int64_t t166 = 993LL;

    t166 = ((x665&(x666&x667))^x668);

    if (t166 != -5111828796150856LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static volatile int16_t x670 = -1;
	int8_t x671 = -5;
	static int8_t x672 = -1;
	int32_t t167 = 337426908;

    t167 = ((x669&(x670&x671))^x672);

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x675 = -1;
	int8_t x676 = -1;
	int32_t t168 = 406968859;

    t168 = ((x673&(x674&x675))^x676);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = -15LL;
	int64_t x679 = INT64_MAX;
	int64_t t169 = 47LL;

    t169 = ((x677&(x678&x679))^x680);

    if (t169 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = -4325;
	int16_t x682 = INT16_MIN;
	uint8_t x683 = 39U;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t170 = 983536088;

    t170 = ((x681&(x682&x683))^x684);

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x686 = 10923;
	int64_t x687 = INT64_MIN;
	int64_t t171 = -39882488LL;

    t171 = ((x685&(x686&x687))^x688);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1LL;
	int32_t x691 = -6670;
	volatile int8_t x692 = INT8_MIN;
	volatile int64_t t172 = -22497574LL;

    t172 = ((x689&(x690&x691))^x692);

    if (t172 != -1390LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = 121215221808846733LL;
	volatile int64_t x694 = -1LL;
	int32_t x696 = INT32_MIN;

    t173 = ((x693&(x694&x695))^x696);

    if (t173 != -121215222973638784LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x699 = 90U;
	volatile int64_t t174 = -44LL;

    t174 = ((x697&(x698&x699))^x700);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	volatile uint32_t x702 = UINT32_MAX;
	volatile int32_t x704 = -1;
	static volatile uint64_t t175 = 6720985442183572LLU;

    t175 = ((x701&(x702&x703))^x704);

    if (t175 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	uint32_t x706 = 8593456U;
	int32_t x707 = INT32_MIN;
	int16_t x708 = INT16_MIN;
	uint32_t t176 = 3381U;

    t176 = ((x705&(x706&x707))^x708);

    if (t176 != 4294934528U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	static volatile uint32_t x711 = UINT32_MAX;
	uint64_t x712 = 50021808650663883LLU;
	uint64_t t177 = 4LLU;

    t177 = ((x709&(x710&x711))^x712);

    if (t177 != 50021806503180235LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -124215LL;
	volatile uint8_t x716 = UINT8_MAX;
	volatile uint64_t t178 = 7683796LLU;

    t178 = ((x713&(x714&x715))^x716);

    if (t178 != 18446744073709427254LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = 30775U;
	uint8_t x718 = 1U;
	volatile int8_t x720 = INT8_MAX;
	int32_t t179 = 9413;

    t179 = ((x717&(x718&x719))^x720);

    if (t179 != 126) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 10U;
	int16_t x722 = INT16_MIN;
	static int32_t x723 = 1641248;
	int64_t x724 = -1LL;

    t180 = ((x721&(x722&x723))^x724);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x728 = -1;
	uint32_t t181 = UINT32_MAX;

    t181 = ((x725&(x726&x727))^x728);

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = INT64_MIN;
	static volatile int8_t x731 = 0;
	int8_t x732 = -23;
	int64_t t182 = 31222679LL;

    t182 = ((x729&(x730&x731))^x732);

    if (t182 != -23LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -226LL;
	int8_t x734 = 0;
	int8_t x735 = -1;
	volatile int32_t x736 = 142;
	int64_t t183 = 264404323LL;

    t183 = ((x733&(x734&x735))^x736);

    if (t183 != 142LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 40U;
	int32_t x738 = INT32_MAX;
	uint16_t x739 = 6U;
	int16_t x740 = 28;

    t184 = ((x737&(x738&x739))^x740);

    if (t184 != 28) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x742 = 326U;
	uint16_t x744 = 30034U;
	int64_t t185 = 0LL;

    t185 = ((x741&(x742&x743))^x744);

    if (t185 != 30034LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	uint8_t x746 = UINT8_MAX;
	static uint8_t x747 = 82U;
	int64_t x748 = -11516LL;
	int64_t t186 = 2004807633LL;

    t186 = ((x745&(x746&x747))^x748);

    if (t186 != -11434LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 386767U;
	uint8_t x751 = 4U;
	int32_t x752 = -1;

    t187 = ((x749&(x750&x751))^x752);

    if (t187 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x754 = 17U;
	static int8_t x756 = 0;

    t188 = ((x753&(x754&x755))^x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x757 = UINT32_MAX;
	static uint32_t x758 = 610U;
	uint8_t x759 = 3U;
	int32_t x760 = -32104288;
	uint32_t t189 = 501U;

    t189 = ((x757&(x758&x759))^x760);

    if (t189 != 4262863010U) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x762 = 357;
	uint64_t x764 = UINT64_MAX;
	uint64_t t190 = UINT64_MAX;

    t190 = ((x761&(x762&x763))^x764);

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x765 = 12168533737LLU;
	uint32_t x766 = UINT32_MAX;
	int64_t x768 = INT64_MIN;

    t191 = ((x765&(x766&x767))^x768);

    if (t191 != 9223372040433045641LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 6823;
	static uint8_t x771 = 7U;
	static int64_t x772 = -6324738810457077LL;
	volatile int64_t t192 = 13313746898372958LL;

    t192 = ((x769&(x770&x771))^x772);

    if (t192 != -6324738810457075LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	int64_t x774 = -1LL;
	int16_t x775 = -3;
	int16_t x776 = INT16_MAX;

    t193 = ((x773&(x774&x775))^x776);

    if (t193 != 2147450882LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	int8_t x778 = 4;
	volatile uint16_t x779 = 28U;
	static volatile uint64_t x780 = 1LLU;
	volatile uint64_t t194 = 2131LLU;

    t194 = ((x777&(x778&x779))^x780);

    if (t194 != 5LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = -1LL;
	volatile int16_t x783 = INT16_MIN;
	uint64_t x784 = UINT64_MAX;
	uint64_t t195 = UINT64_MAX;

    t195 = ((x781&(x782&x783))^x784);

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	static int16_t x788 = INT16_MIN;
	volatile int32_t t196 = -15;

    t196 = ((x785&(x786&x787))^x788);

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 4279U;
	int8_t x790 = -1;
	static volatile int16_t x791 = 15268;
	volatile int16_t x792 = -1;
	int32_t t197 = -1;

    t197 = ((x789&(x790&x791))^x792);

    if (t197 != -4261) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x794 = INT8_MIN;
	static int32_t t198 = -7322;

    t198 = ((x793&(x794&x795))^x796);

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 467LLU;
	static int8_t x798 = -8;
	static uint32_t x799 = 149U;
	int8_t x800 = 8;

    t199 = ((x797&(x798&x799))^x800);

    if (t199 != 152LLU) { NG(); } else { ; }
	
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

