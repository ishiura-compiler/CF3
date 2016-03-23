
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

static int64_t x1 = 95183LL;
uint64_t x8 = 2130488466787215LLU;
uint8_t x14 = 1U;
int32_t x15 = 972551;
int16_t x16 = -1;
int16_t x19 = -1;
volatile int16_t x23 = INT16_MIN;
int64_t x33 = 14935638LL;
int64_t x35 = -1LL;
int16_t x39 = -1;
volatile int64_t t9 = INT64_MAX;
int32_t x51 = 829358;
uint8_t x55 = 30U;
volatile int32_t x56 = INT32_MIN;
int32_t x59 = INT32_MAX;
int64_t x61 = -32592191746LL;
static uint16_t x63 = 0U;
int64_t x66 = -30LL;
uint8_t x68 = UINT8_MAX;
static int32_t t16 = -1;
int32_t x69 = INT32_MAX;
int32_t x72 = INT32_MAX;
static volatile int16_t x80 = INT16_MAX;
volatile int32_t t19 = -42;
volatile uint8_t x83 = 1U;
volatile uint8_t x84 = 3U;
volatile int32_t t20 = 21772949;
int64_t x87 = INT64_MIN;
uint64_t x88 = UINT64_MAX;
static int8_t x117 = INT8_MAX;
static volatile int32_t x119 = INT32_MIN;
int64_t x122 = -4482362770LL;
uint64_t x123 = UINT64_MAX;
int32_t x127 = -1;
int8_t x130 = 1;
static uint32_t x131 = 6927U;
uint32_t x132 = 171267067U;
int32_t x136 = -3843;
int16_t x142 = -1190;
static int8_t x146 = INT8_MIN;
uint32_t x147 = 247113610U;
static uint8_t x148 = 10U;
uint32_t x149 = 42U;
int32_t t38 = 27503;
int32_t x159 = INT32_MIN;
int8_t x167 = INT8_MAX;
int16_t x173 = -5537;
static uint32_t x182 = UINT32_MAX;
uint8_t x183 = UINT8_MAX;
uint64_t x190 = 41511245822698LLU;
int64_t x192 = INT64_MIN;
int32_t x218 = -1;
volatile uint64_t t54 = 14409231LLU;
volatile int32_t x222 = INT32_MIN;
int8_t x225 = INT8_MAX;
uint16_t x228 = 137U;
int32_t t56 = -45808080;
uint64_t x231 = UINT64_MAX;
uint8_t x233 = 6U;
volatile int32_t x236 = 378175;
int16_t x247 = -1;
static int32_t t62 = 6909;
static volatile int32_t x254 = -3558;
int8_t x255 = -1;
int64_t x259 = -1LL;
int64_t x263 = -1LL;
static int32_t t65 = -12986;
int32_t t66 = -8449232;
static volatile uint32_t x269 = UINT32_MAX;
uint64_t x271 = UINT64_MAX;
static int16_t x272 = -1;
int32_t t70 = 11;
uint32_t x285 = 228121U;
static int32_t x288 = -14;
uint8_t x291 = 89U;
int64_t x292 = INT64_MAX;
int64_t x302 = -16763LL;
int32_t t75 = INT32_MIN;
volatile int64_t t76 = -16167779303LL;
uint64_t x310 = UINT64_MAX;
int16_t x312 = 53;
volatile uint64_t x316 = UINT64_MAX;
volatile uint64_t t78 = 121154LLU;
volatile int64_t x320 = INT64_MIN;
int64_t x322 = INT64_MIN;
int32_t t80 = -148990;
static uint64_t x326 = 171825LLU;
uint64_t x329 = 96064903994LLU;
static volatile int32_t t82 = -1;
uint64_t x333 = UINT64_MAX;
int32_t x335 = INT32_MAX;
uint8_t x338 = UINT8_MAX;
int32_t x339 = INT32_MIN;
static int16_t x342 = INT16_MAX;
static int32_t x345 = 754811522;
int8_t x346 = INT8_MIN;
int32_t t88 = -393810;
int16_t x357 = -1;
static int64_t x358 = 1417479586279208LL;
int32_t x360 = 0;
static volatile int64_t x365 = INT64_MAX;
volatile int8_t x366 = -1;
static int16_t x368 = INT16_MAX;
int32_t t91 = -2529014;
int32_t x376 = INT32_MIN;
static volatile uint8_t x377 = 1U;
int8_t x381 = -1;
static int64_t x384 = -112581881LL;
volatile int64_t t95 = 4393080857LL;
uint64_t x388 = UINT64_MAX;
static uint32_t x399 = 8U;
int32_t x400 = INT32_MIN;
int32_t t99 = 147576671;
uint32_t x405 = 0U;
volatile uint32_t x410 = 4U;
uint16_t x411 = 1U;
static int32_t x428 = INT32_MIN;
int32_t t106 = -399;
int64_t x435 = -2068LL;
int32_t x448 = INT32_MIN;
static int32_t t111 = INT32_MIN;
volatile int32_t x450 = 10020;
volatile int64_t t112 = 101LL;
static uint8_t x467 = 114U;
int32_t x468 = -1;
volatile int16_t x478 = -23;
uint8_t x486 = 1U;
uint32_t x497 = UINT32_MAX;
int32_t t125 = -617427;
volatile int16_t x507 = 1;
uint32_t x509 = 10841U;
int16_t x510 = -589;
volatile int64_t t127 = -5496266134261942LL;
int16_t x515 = -329;
int64_t x521 = INT64_MIN;
int64_t t132 = INT64_MAX;
uint16_t x535 = UINT16_MAX;
int8_t x539 = INT8_MIN;
static volatile uint32_t x540 = UINT32_MAX;
static volatile int64_t x541 = -10604390847767LL;
volatile int32_t x544 = INT32_MIN;
uint8_t x547 = 7U;
int64_t x550 = INT64_MAX;
volatile uint16_t x553 = 3228U;
static int16_t x554 = INT16_MIN;
static volatile int64_t t138 = -5248376156LL;
static uint16_t x562 = 5962U;
int8_t x563 = -6;
volatile uint16_t x565 = UINT16_MAX;
uint32_t x571 = UINT32_MAX;
uint64_t x572 = UINT64_MAX;
static uint16_t x574 = UINT16_MAX;
int32_t x575 = INT32_MIN;
int8_t x576 = INT8_MIN;
uint64_t x580 = 99519550584208LLU;
uint64_t t145 = 70587684LLU;
volatile int16_t x586 = INT16_MIN;
int32_t t146 = 11;
int16_t x589 = INT16_MIN;
static int16_t x597 = INT16_MIN;
static uint16_t x599 = UINT16_MAX;
int32_t x602 = 2850089;
volatile uint8_t x606 = 6U;
int32_t t152 = -1574;
int8_t x613 = INT8_MIN;
static volatile int32_t x619 = 18;
int64_t t154 = 47672860552LL;
int32_t t155 = -1935;
int8_t x625 = 2;
int64_t x629 = INT64_MAX;
uint64_t x632 = 494219132253LLU;
uint64_t t157 = 37117LLU;
static uint32_t x634 = 42U;
int16_t x636 = -90;
volatile int32_t t158 = 321073900;
uint32_t x641 = 110703U;
int8_t x643 = -1;
int64_t x648 = INT64_MIN;
volatile int64_t t161 = INT64_MIN;
static int8_t x652 = INT8_MIN;
volatile int32_t t162 = 25;
int8_t x653 = -1;
int8_t x659 = 0;
int32_t x666 = -286732;
uint16_t x667 = 4U;
int16_t x678 = -1;
uint64_t x683 = 11017028LLU;
uint32_t x687 = UINT32_MAX;
int64_t x692 = 11959LL;
uint32_t x693 = UINT32_MAX;
int16_t x694 = 1;
uint32_t x700 = 2972311U;
static volatile int32_t x704 = INT32_MIN;
volatile int16_t x706 = INT16_MAX;
static int64_t x707 = -1LL;
int64_t x714 = -1LL;
volatile int16_t x716 = 2449;
static int32_t x718 = INT32_MAX;
static int8_t x719 = 0;
int32_t x720 = -425;
int64_t x731 = 0LL;
uint8_t x732 = 10U;
static int64_t x737 = -15106898424430538LL;
uint8_t x741 = UINT8_MAX;
int8_t x743 = 15;
volatile int32_t t185 = INT32_MIN;
volatile uint32_t x746 = UINT32_MAX;
int32_t x759 = 827018;
int32_t x762 = INT32_MIN;
uint16_t x763 = 10353U;
int16_t x766 = INT16_MAX;
int8_t x768 = INT8_MAX;
static int64_t x776 = 635208734971198LL;
volatile int64_t t193 = 541620100951530LL;
int8_t x784 = INT8_MIN;
volatile uint64_t t197 = 3LLU;
int32_t t198 = 23;
uint32_t x798 = 2410U;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 322993;

    t0 = ((x1>(x2!=x3))*x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -4296357024064160016LL;
	int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 7473503541474LLU;

    t1 = ((x5>(x6!=x7))*x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = 12448688U;
	static int64_t x12 = -1LL;
	volatile int64_t t2 = 16385025022562LL;

    t2 = ((x9>(x10!=x11))*x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 402970506;
	static int32_t t3 = 236618610;

    t3 = ((x13>(x14!=x15))*x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MAX;
	static int32_t x18 = -80198;
	uint32_t x20 = 14U;
	uint32_t t4 = 19U;

    t4 = ((x17>(x18!=x19))*x20);

    if (t4 != 14U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 5360233LLU;
	int8_t x22 = INT8_MAX;
	int16_t x24 = -1;
	volatile int32_t t5 = 618825613;

    t5 = ((x21>(x22!=x23))*x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	volatile int16_t x26 = 2345;
	int64_t x27 = INT64_MIN;
	int8_t x28 = 47;
	volatile int32_t t6 = 1;

    t6 = ((x25>(x26!=x27))*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	uint16_t x30 = 230U;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 184LL;

    t7 = ((x29>(x30!=x31))*x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x34 = UINT32_MAX;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 119740019;

    t8 = ((x33>(x34!=x35))*x36);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = 451;
	volatile int32_t x38 = -702577;
	volatile int64_t x40 = INT64_MAX;

    t9 = ((x37>(x38!=x39))*x40);

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint32_t x42 = 119944U;
	uint64_t x43 = 847643097LLU;
	static int8_t x44 = 1;
	int32_t t10 = 8222579;

    t10 = ((x41>(x42!=x43))*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;
	static int16_t x48 = -74;
	volatile int32_t t11 = -10311295;

    t11 = ((x45>(x46!=x47))*x48);

    if (t11 != -74) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -15;
	int32_t x50 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = 576510;

    t12 = ((x49>(x50!=x51))*x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	static volatile int16_t x54 = 10;
	static volatile int32_t t13 = 23;

    t13 = ((x53>(x54!=x55))*x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t14 = -1970426169021494LL;

    t14 = ((x57>(x58!=x59))*x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = -1;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 4932648;

    t15 = ((x61>(x62!=x63))*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 1U;
	int64_t x67 = INT64_MIN;

    t16 = ((x65>(x66!=x67))*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MAX;
	volatile int8_t x71 = -1;
	volatile int32_t t17 = INT32_MAX;

    t17 = ((x69>(x70!=x71))*x72);

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	static volatile uint16_t x75 = 3U;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 307985637;

    t18 = ((x73>(x74!=x75))*x76);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 20U;
	uint64_t x78 = 1079238274131352683LLU;
	int32_t x79 = -2969;

    t19 = ((x77>(x78!=x79))*x80);

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x81 = UINT32_MAX;
	int64_t x82 = -1LL;

    t20 = ((x81>(x82!=x83))*x84);

    if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint8_t x86 = 3U;
	uint64_t t21 = 691446278LLU;

    t21 = ((x85>(x86!=x87))*x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 595959542U;
	static int64_t x90 = 52695963LL;
	int8_t x91 = 2;
	uint16_t x92 = 1U;
	volatile int32_t t22 = 0;

    t22 = ((x89>(x90!=x91))*x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -96656088;
	static int16_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int8_t x96 = -1;
	static volatile int32_t t23 = -551785;

    t23 = ((x93>(x94!=x95))*x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	volatile int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	static int64_t x100 = 3312LL;
	int64_t t24 = -3556LL;

    t24 = ((x97>(x98!=x99))*x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static volatile int32_t x102 = INT32_MIN;
	int8_t x103 = -20;
	int8_t x104 = -22;
	static volatile int32_t t25 = -17754;

    t25 = ((x101>(x102!=x103))*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x105 = 123U;
	volatile int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MAX;
	static uint16_t x108 = 1U;
	volatile int32_t t26 = 39080;

    t26 = ((x105>(x106!=x107))*x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -1LL;
	volatile uint16_t x110 = 1076U;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = UINT32_MAX;
	uint32_t t27 = 1065812U;

    t27 = ((x109>(x110!=x111))*x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = 5534;
	int8_t x114 = INT8_MIN;
	uint16_t x115 = 143U;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -303;

    t28 = ((x113>(x114!=x115))*x116);

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = 7839U;
	static uint32_t x120 = 1226617860U;
	static volatile uint32_t t29 = 570U;

    t29 = ((x117>(x118!=x119))*x120);

    if (t29 != 1226617860U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -792;

    t30 = ((x121>(x122!=x123))*x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 8;
	uint64_t x126 = 3113295747618377LLU;
	uint16_t x128 = 949U;
	int32_t t31 = -4282;

    t31 = ((x125>(x126!=x127))*x128);

    if (t31 != 949) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 8550U;
	static uint32_t t32 = 8408532U;

    t32 = ((x129>(x130!=x131))*x132);

    if (t32 != 171267067U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -24;
	uint32_t x134 = UINT32_MAX;
	uint8_t x135 = UINT8_MAX;
	int32_t t33 = 16336108;

    t33 = ((x133>(x134!=x135))*x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	static int8_t x138 = INT8_MIN;
	int8_t x139 = -1;
	uint64_t x140 = 20013927LLU;
	uint64_t t34 = 4454184941466LLU;

    t34 = ((x137>(x138!=x139))*x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 13239U;
	int8_t x143 = INT8_MIN;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = 4;

    t35 = ((x141>(x142!=x143))*x144);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	static int32_t t36 = -1194868;

    t36 = ((x145>(x146!=x147))*x148);

    if (t36 != 10) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	static uint64_t x152 = UINT64_MAX;
	uint64_t t37 = UINT64_MAX;

    t37 = ((x149>(x150!=x151))*x152);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int32_t x154 = -1;
	static uint16_t x155 = 48U;
	uint8_t x156 = 1U;

    t38 = ((x153>(x154!=x155))*x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -181402470958LL;
	uint16_t x158 = 7090U;
	static int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -539060;

    t39 = ((x157>(x158!=x159))*x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 1;
	uint16_t x162 = 8882U;
	int32_t x163 = -5427;
	int64_t x164 = -10277354LL;
	int64_t t40 = -12706659259LL;

    t40 = ((x161>(x162!=x163))*x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = 1;
	volatile int16_t x166 = INT16_MIN;
	int32_t x168 = -1;
	static int32_t t41 = -269438;

    t41 = ((x165>(x166!=x167))*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MAX;
	volatile uint32_t x171 = 369105087U;
	int32_t x172 = -1;
	volatile int32_t t42 = -24612284;

    t42 = ((x169>(x170!=x171))*x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x174 = INT32_MIN;
	int8_t x175 = 1;
	uint32_t x176 = 29U;
	volatile uint32_t t43 = 13005U;

    t43 = ((x173>(x174!=x175))*x176);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = INT16_MIN;
	static volatile int32_t x178 = 16869812;
	int16_t x179 = -773;
	int16_t x180 = INT16_MIN;
	static int32_t t44 = -603148208;

    t44 = ((x177>(x178!=x179))*x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 11;
	int64_t x184 = INT64_MIN;
	int64_t t45 = INT64_MIN;

    t45 = ((x181>(x182!=x183))*x184);

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MIN;
	int64_t x187 = 578114787LL;
	static int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = -11396;

    t46 = ((x185>(x186!=x187))*x188);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	volatile uint16_t x191 = 965U;
	volatile int64_t t47 = -4555746LL;

    t47 = ((x189>(x190!=x191))*x192);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	int16_t x194 = -1;
	int8_t x195 = INT8_MIN;
	volatile uint16_t x196 = 2095U;
	static int32_t t48 = -5;

    t48 = ((x193>(x194!=x195))*x196);

    if (t48 != 2095) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 5016224LLU;
	int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 11942;

    t49 = ((x197>(x198!=x199))*x200);

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x201 = 44365523U;
	int16_t x202 = -1;
	volatile int8_t x203 = INT8_MAX;
	volatile int16_t x204 = INT16_MAX;
	int32_t t50 = -301;

    t50 = ((x201>(x202!=x203))*x204);

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 50730508241LLU;
	uint8_t x206 = UINT8_MAX;
	static uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = 794;

    t51 = ((x205>(x206!=x207))*x208);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	uint16_t x210 = 32U;
	uint8_t x211 = 2U;
	int64_t x212 = INT64_MIN;
	int64_t t52 = -395779678228407LL;

    t52 = ((x209>(x210!=x211))*x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	static int32_t x214 = 7428;
	uint16_t x215 = UINT16_MAX;
	uint32_t x216 = 39571U;
	uint32_t t53 = 24994151U;

    t53 = ((x213>(x214!=x215))*x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int64_t x219 = -1929873560LL;
	uint64_t x220 = 3974LLU;

    t54 = ((x217>(x218!=x219))*x220);

    if (t54 != 3974LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int16_t x223 = -1;
	int8_t x224 = -1;
	volatile int32_t t55 = 17102;

    t55 = ((x221>(x222!=x223))*x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x226 = INT8_MIN;
	volatile int8_t x227 = 14;

    t56 = ((x225>(x226!=x227))*x228);

    if (t56 != 137) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	int8_t x232 = 27;
	volatile int32_t t57 = 1053930;

    t57 = ((x229>(x230!=x231))*x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MIN;
	uint16_t x235 = 15U;
	volatile int32_t t58 = -3;

    t58 = ((x233>(x234!=x235))*x236);

    if (t58 != 378175) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 1437784U;
	int16_t x239 = -1;
	int16_t x240 = -114;
	int32_t t59 = -70;

    t59 = ((x237>(x238!=x239))*x240);

    if (t59 != -114) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x241 = UINT16_MAX;
	volatile int16_t x242 = 1;
	static uint32_t x243 = 1U;
	int8_t x244 = 1;
	static volatile int32_t t60 = 2024606;

    t60 = ((x241>(x242!=x243))*x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = 1;
	volatile int16_t x246 = INT16_MIN;
	uint32_t x248 = 3U;
	volatile uint32_t t61 = 7015752U;

    t61 = ((x245>(x246!=x247))*x248);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	static int16_t x250 = -1;
	volatile int64_t x251 = 3LL;
	static volatile uint8_t x252 = 5U;

    t62 = ((x249>(x250!=x251))*x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	uint16_t x256 = 265U;
	int32_t t63 = 174541996;

    t63 = ((x253>(x254!=x255))*x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = 0U;
	volatile uint32_t x260 = 0U;
	volatile uint32_t t64 = 1767U;

    t64 = ((x257>(x258!=x259))*x260);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 716;
	int8_t x262 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;

    t65 = ((x261>(x262!=x263))*x264);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MAX;
	int8_t x267 = -3;
	int16_t x268 = 1546;

    t66 = ((x265>(x266!=x267))*x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x270 = INT32_MAX;
	int32_t t67 = -1544338;

    t67 = ((x269>(x270!=x271))*x272);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 12345U;
	int64_t x274 = 10LL;
	int32_t x275 = 109790;
	volatile uint64_t x276 = 17835548620989536LLU;
	uint64_t t68 = 14249159755LLU;

    t68 = ((x273>(x274!=x275))*x276);

    if (t68 != 17835548620989536LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 1093397U;
	int32_t x278 = -5;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;
	static int64_t t69 = INT64_MIN;

    t69 = ((x277>(x278!=x279))*x280);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	static uint8_t x282 = UINT8_MAX;
	uint8_t x283 = UINT8_MAX;
	int16_t x284 = -76;

    t70 = ((x281>(x282!=x283))*x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MAX;
	volatile int32_t t71 = -6;

    t71 = ((x285>(x286!=x287))*x288);

    if (t71 != -14) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	static volatile uint16_t x290 = 3823U;
	static int64_t t72 = INT64_MAX;

    t72 = ((x289>(x290!=x291))*x292);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	uint8_t x294 = 0U;
	uint32_t x295 = 378U;
	int16_t x296 = INT16_MAX;
	volatile int32_t t73 = 28998828;

    t73 = ((x293>(x294!=x295))*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	int32_t x298 = 5;
	int16_t x299 = -40;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = 1;

    t74 = ((x297>(x298!=x299))*x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 14U;
	uint64_t x303 = 495LLU;
	volatile int32_t x304 = INT32_MIN;

    t75 = ((x301>(x302!=x303))*x304);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 1U;
	int32_t x306 = INT32_MAX;
	volatile uint32_t x307 = 91U;
	int64_t x308 = 888LL;

    t76 = ((x305>(x306!=x307))*x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	static int64_t x311 = -1LL;
	int32_t t77 = 73;

    t77 = ((x309>(x310!=x311))*x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = -741960;
	static volatile int32_t x314 = INT32_MAX;
	uint64_t x315 = UINT64_MAX;

    t78 = ((x313>(x314!=x315))*x316);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -1;
	uint16_t x318 = 411U;
	uint32_t x319 = 764949766U;
	int64_t t79 = 5LL;

    t79 = ((x317>(x318!=x319))*x320);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 1638482U;
	int8_t x323 = INT8_MAX;
	static int16_t x324 = INT16_MIN;

    t80 = ((x321>(x322!=x323))*x324);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	uint32_t x327 = 31U;
	static int8_t x328 = -1;
	int32_t t81 = 496;

    t81 = ((x325>(x326!=x327))*x328);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x330 = INT32_MAX;
	int8_t x331 = 20;
	int8_t x332 = INT8_MIN;

    t82 = ((x329>(x330!=x331))*x332);

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = 0;
	uint32_t x336 = UINT32_MAX;
	uint32_t t83 = UINT32_MAX;

    t83 = ((x333>(x334!=x335))*x336);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	int64_t x340 = -35008664250667200LL;
	volatile int64_t t84 = -1640930296331566552LL;

    t84 = ((x337>(x338!=x339))*x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = -3483;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = 86U;
	volatile int32_t t85 = -3785;

    t85 = ((x341>(x342!=x343))*x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x347 = -2;
	uint64_t x348 = 118833LLU;
	uint64_t t86 = 51268150966068563LLU;

    t86 = ((x345>(x346!=x347))*x348);

    if (t86 != 118833LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 5138;
	int8_t x350 = INT8_MAX;
	static volatile uint32_t x351 = 94740U;
	static volatile int32_t x352 = INT32_MIN;
	volatile int32_t t87 = INT32_MIN;

    t87 = ((x349>(x350!=x351))*x352);

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 180550U;
	uint16_t x354 = 1U;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = INT8_MIN;

    t88 = ((x353>(x354!=x355))*x356);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x359 = INT32_MIN;
	int32_t t89 = 33451714;

    t89 = ((x357>(x358!=x359))*x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -3311881;
	int32_t x362 = INT32_MAX;
	int8_t x363 = 0;
	uint64_t x364 = UINT64_MAX;
	uint64_t t90 = 28224512216072260LLU;

    t90 = ((x361>(x362!=x363))*x364);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x367 = -1;

    t91 = ((x365>(x366!=x367))*x368);

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t92 = 32467836499LLU;

    t92 = ((x369>(x370!=x371))*x372);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 850866358LLU;
	uint16_t x374 = 172U;
	int16_t x375 = INT16_MAX;
	int32_t t93 = INT32_MIN;

    t93 = ((x373>(x374!=x375))*x376);

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MIN;
	uint32_t x379 = 41796269U;
	volatile uint64_t x380 = 10999432LLU;
	volatile uint64_t t94 = 4483877146762835LLU;

    t94 = ((x377>(x378!=x379))*x380);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = INT8_MAX;
	uint32_t x383 = UINT32_MAX;

    t95 = ((x381>(x382!=x383))*x384);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 4266U;
	static int32_t x386 = INT32_MIN;
	uint16_t x387 = 3633U;
	volatile uint64_t t96 = UINT64_MAX;

    t96 = ((x385>(x386!=x387))*x388);

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MIN;
	uint32_t x390 = 2093725U;
	static int64_t x391 = -69815501LL;
	uint64_t x392 = 748932053963LLU;
	volatile uint64_t t97 = 140466622360LLU;

    t97 = ((x389>(x390!=x391))*x392);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	static volatile int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	volatile uint64_t x396 = UINT64_MAX;
	uint64_t t98 = 1824956843216LLU;

    t98 = ((x393>(x394!=x395))*x396);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;

    t99 = ((x397>(x398!=x399))*x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -129;
	static int16_t x402 = INT16_MIN;
	volatile int8_t x403 = INT8_MAX;
	static volatile uint16_t x404 = UINT16_MAX;
	volatile int32_t t100 = -24;

    t100 = ((x401>(x402!=x403))*x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x406 = 12;
	uint16_t x407 = 1U;
	uint32_t x408 = UINT32_MAX;
	volatile uint32_t t101 = 95257U;

    t101 = ((x405>(x406!=x407))*x408);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = 18;
	int32_t x412 = INT32_MIN;
	int32_t t102 = INT32_MIN;

    t102 = ((x409>(x410!=x411))*x412);

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 219401;
	static volatile uint16_t x414 = 23U;
	volatile int8_t x415 = INT8_MAX;
	static int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 9930949;

    t103 = ((x413>(x414!=x415))*x416);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -24;
	int32_t x418 = 250;
	static int16_t x419 = 6;
	volatile int16_t x420 = INT16_MAX;
	static int32_t t104 = -49;

    t104 = ((x417>(x418!=x419))*x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	volatile uint32_t x422 = 1704U;
	int16_t x423 = -21;
	static int64_t x424 = INT64_MAX;
	static volatile int64_t t105 = -2057906967569LL;

    t105 = ((x421>(x422!=x423))*x424);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = -2;
	uint32_t x426 = 500465386U;
	static int16_t x427 = INT16_MIN;

    t106 = ((x425>(x426!=x427))*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x429 = -1;
	static int8_t x430 = INT8_MAX;
	uint16_t x431 = 1265U;
	volatile uint32_t x432 = 116102U;
	volatile uint32_t t107 = 19642646U;

    t107 = ((x429>(x430!=x431))*x432);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x433 = INT8_MIN;
	static uint32_t x434 = UINT32_MAX;
	volatile int64_t x436 = -64318976112600443LL;
	volatile int64_t t108 = -225075839LL;

    t108 = ((x433>(x434!=x435))*x436);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = INT16_MAX;
	uint16_t x438 = UINT16_MAX;
	static volatile uint64_t x439 = UINT64_MAX;
	int32_t x440 = -1;
	static int32_t t109 = -11593948;

    t109 = ((x437>(x438!=x439))*x440);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	static int64_t x442 = INT64_MAX;
	static int32_t x443 = INT32_MAX;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t110 = 28;

    t110 = ((x441>(x442!=x443))*x444);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 7886U;
	int64_t x446 = INT64_MIN;
	static uint64_t x447 = 6168497435331092LLU;

    t111 = ((x445>(x446!=x447))*x448);

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	uint64_t x451 = UINT64_MAX;
	int64_t x452 = 47007230381LL;

    t112 = ((x449>(x450!=x451))*x452);

    if (t112 != 47007230381LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 3858;
	volatile uint64_t x454 = 443229LLU;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = 10;
	static int32_t t113 = 1;

    t113 = ((x453>(x454!=x455))*x456);

    if (t113 != 10) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 22912;
	uint16_t x458 = 15013U;
	uint32_t x459 = UINT32_MAX;
	uint8_t x460 = 0U;
	volatile int32_t t114 = 14323;

    t114 = ((x457>(x458!=x459))*x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x461 = 320LLU;
	int32_t x462 = -1;
	int32_t x463 = INT32_MAX;
	int32_t x464 = INT32_MIN;
	int32_t t115 = INT32_MIN;

    t115 = ((x461>(x462!=x463))*x464);

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = -1;
	uint32_t x466 = 66958900U;
	int32_t t116 = -1653580;

    t116 = ((x465>(x466!=x467))*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = INT16_MAX;
	uint8_t x470 = 16U;
	static int16_t x471 = INT16_MAX;
	static int64_t x472 = 287569951009LL;
	int64_t t117 = -983LL;

    t117 = ((x469>(x470!=x471))*x472);

    if (t117 != 287569951009LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MAX;
	static uint16_t x474 = UINT16_MAX;
	volatile int64_t x475 = INT64_MAX;
	int16_t x476 = -1;
	int32_t t118 = 66423;

    t118 = ((x473>(x474!=x475))*x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 62U;
	static volatile uint16_t x479 = 4310U;
	static int16_t x480 = -90;
	int32_t t119 = -1;

    t119 = ((x477>(x478!=x479))*x480);

    if (t119 != -90) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	static int8_t x482 = -1;
	int16_t x483 = -6619;
	volatile int8_t x484 = INT8_MIN;
	int32_t t120 = 687758;

    t120 = ((x481>(x482!=x483))*x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile int8_t x487 = -1;
	static volatile uint16_t x488 = 0U;
	volatile int32_t t121 = -3352718;

    t121 = ((x485>(x486!=x487))*x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = -290934;
	int32_t x490 = INT32_MIN;
	int8_t x491 = INT8_MAX;
	static int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -28899167;

    t122 = ((x489>(x490!=x491))*x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	static uint8_t x494 = UINT8_MAX;
	uint8_t x495 = UINT8_MAX;
	int8_t x496 = INT8_MIN;
	int32_t t123 = -10503840;

    t123 = ((x493>(x494!=x495))*x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x498 = 1449936462U;
	static int32_t x499 = 104;
	uint32_t x500 = 1308393170U;
	volatile uint32_t t124 = 315089U;

    t124 = ((x497>(x498!=x499))*x500);

    if (t124 != 1308393170U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	int32_t x502 = INT32_MIN;
	uint8_t x503 = 1U;
	int16_t x504 = INT16_MIN;

    t125 = ((x501>(x502!=x503))*x504);

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = 16698218LLU;
	uint32_t x506 = UINT32_MAX;
	uint64_t x508 = UINT64_MAX;
	static uint64_t t126 = UINT64_MAX;

    t126 = ((x505>(x506!=x507))*x508);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x511 = 248U;
	int64_t x512 = -4268629LL;

    t127 = ((x509>(x510!=x511))*x512);

    if (t127 != -4268629LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MAX;
	static int32_t x514 = -1;
	static int64_t x516 = INT64_MAX;
	int64_t t128 = INT64_MAX;

    t128 = ((x513>(x514!=x515))*x516);

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = UINT8_MAX;
	volatile int64_t x518 = INT64_MIN;
	uint16_t x519 = 7856U;
	int16_t x520 = INT16_MIN;
	int32_t t129 = 128094048;

    t129 = ((x517>(x518!=x519))*x520);

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MIN;
	uint32_t x523 = 6U;
	uint8_t x524 = UINT8_MAX;
	int32_t t130 = 794;

    t130 = ((x521>(x522!=x523))*x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 31U;
	int32_t x526 = INT32_MIN;
	int8_t x527 = 8;
	static uint16_t x528 = 170U;
	int32_t t131 = -53692211;

    t131 = ((x525>(x526!=x527))*x528);

    if (t131 != 170) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	volatile int8_t x530 = INT8_MIN;
	volatile int64_t x531 = -383LL;
	int64_t x532 = INT64_MAX;

    t132 = ((x529>(x530!=x531))*x532);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -6;
	static int32_t x534 = 56993;
	static int8_t x536 = INT8_MAX;
	volatile int32_t t133 = -32309227;

    t133 = ((x533>(x534!=x535))*x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = INT8_MIN;
	static int8_t x538 = 58;
	volatile uint32_t t134 = 104252U;

    t134 = ((x537>(x538!=x539))*x540);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x542 = UINT16_MAX;
	volatile int16_t x543 = 680;
	int32_t t135 = -540357;

    t135 = ((x541>(x542!=x543))*x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 231180U;
	int16_t x546 = -6;
	static int64_t x548 = INT64_MIN;
	int64_t t136 = INT64_MIN;

    t136 = ((x545>(x546!=x547))*x548);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = INT32_MIN;
	int64_t x551 = -3LL;
	int8_t x552 = -1;
	int32_t t137 = -1;

    t137 = ((x549>(x550!=x551))*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x555 = -1;
	int64_t x556 = 7047997150742149LL;

    t138 = ((x553>(x554!=x555))*x556);

    if (t138 != 7047997150742149LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -2;
	int32_t x558 = -1;
	volatile uint64_t x559 = 164668939LLU;
	int8_t x560 = -10;
	volatile int32_t t139 = 65725524;

    t139 = ((x557>(x558!=x559))*x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = 2982U;
	int16_t x564 = -1;
	volatile int32_t t140 = 353320829;

    t140 = ((x561>(x562!=x563))*x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = -593634284229LL;
	volatile int8_t x567 = 1;
	int32_t x568 = 3487630;
	int32_t t141 = -3261528;

    t141 = ((x565>(x566!=x567))*x568);

    if (t141 != 3487630) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = 265;
	uint8_t x570 = 0U;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = ((x569>(x570!=x571))*x572);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x573 = 116945474;
	int32_t t143 = -16247;

    t143 = ((x573>(x574!=x575))*x576);

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 1474863978U;
	int16_t x578 = -1;
	int32_t x579 = -3193720;
	uint64_t t144 = 334732601LLU;

    t144 = ((x577>(x578!=x579))*x580);

    if (t144 != 99519550584208LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x581 = UINT32_MAX;
	int8_t x582 = INT8_MIN;
	volatile int64_t x583 = INT64_MAX;
	uint64_t x584 = 73975LLU;

    t145 = ((x581>(x582!=x583))*x584);

    if (t145 != 73975LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -15898;
	static int32_t x587 = 1;
	int32_t x588 = -94751;

    t146 = ((x585>(x586!=x587))*x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = -1;
	int64_t x591 = INT64_MIN;
	volatile uint32_t x592 = 40699598U;
	uint32_t t147 = 1059U;

    t147 = ((x589>(x590!=x591))*x592);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	static uint16_t x594 = 3U;
	uint32_t x595 = 5U;
	static int32_t x596 = -1375167;
	volatile int32_t t148 = 990811;

    t148 = ((x593>(x594!=x595))*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x598 = INT16_MAX;
	int64_t x600 = -177865711271LL;
	static int64_t t149 = 1780LL;

    t149 = ((x597>(x598!=x599))*x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 3852091814750153143LLU;
	volatile int16_t x603 = INT16_MIN;
	int64_t x604 = -8281779766480228LL;
	int64_t t150 = -298805667LL;

    t150 = ((x601>(x602!=x603))*x604);

    if (t150 != -8281779766480228LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	static volatile uint64_t x607 = UINT64_MAX;
	static int8_t x608 = -1;
	volatile int32_t t151 = -5;

    t151 = ((x605>(x606!=x607))*x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	int64_t x610 = 16798141373165377LL;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MAX;

    t152 = ((x609>(x610!=x611))*x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = INT32_MIN;
	int16_t x615 = 208;
	int32_t x616 = INT32_MAX;
	int32_t t153 = -223;

    t153 = ((x613>(x614!=x615))*x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int64_t x618 = -62434008370613LL;
	int64_t x620 = INT64_MAX;

    t154 = ((x617>(x618!=x619))*x620);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	uint64_t x622 = 3LLU;
	static volatile int8_t x623 = 4;
	volatile int8_t x624 = INT8_MIN;

    t155 = ((x621>(x622!=x623))*x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x626 = 19972U;
	static int64_t x627 = INT64_MIN;
	uint8_t x628 = UINT8_MAX;
	int32_t t156 = 102988;

    t156 = ((x625>(x626!=x627))*x628);

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = INT64_MAX;
	static int32_t x631 = INT32_MIN;

    t157 = ((x629>(x630!=x631))*x632);

    if (t157 != 494219132253LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -1;
	int16_t x635 = -1;

    t158 = ((x633>(x634!=x635))*x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = -5;
	int8_t x638 = -1;
	int32_t x639 = INT32_MIN;
	int64_t x640 = 502101864876703LL;
	volatile int64_t t159 = 920334924000069540LL;

    t159 = ((x637>(x638!=x639))*x640);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x642 = INT8_MIN;
	static volatile int8_t x644 = INT8_MIN;
	int32_t t160 = 4742;

    t160 = ((x641>(x642!=x643))*x644);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	int8_t x646 = 0;
	int16_t x647 = 0;

    t161 = ((x645>(x646!=x647))*x648);

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -9;
	uint64_t x650 = UINT64_MAX;
	int64_t x651 = INT64_MIN;

    t162 = ((x649>(x650!=x651))*x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x654 = INT16_MIN;
	static uint64_t x655 = UINT64_MAX;
	int64_t x656 = INT64_MIN;
	int64_t t163 = 4276602LL;

    t163 = ((x653>(x654!=x655))*x656);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x658 = INT64_MAX;
	uint32_t x660 = UINT32_MAX;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = ((x657>(x658!=x659))*x660);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1592183728LL;
	static int32_t x662 = INT32_MIN;
	uint16_t x663 = UINT16_MAX;
	static int8_t x664 = 31;
	volatile int32_t t165 = 25;

    t165 = ((x661>(x662!=x663))*x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	uint32_t x668 = UINT32_MAX;
	volatile uint32_t t166 = 3U;

    t166 = ((x665>(x666!=x667))*x668);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 11202485124778529LLU;
	uint32_t x670 = 11U;
	static volatile int64_t x671 = INT64_MIN;
	int8_t x672 = 1;
	static int32_t t167 = 120;

    t167 = ((x669>(x670!=x671))*x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	volatile int64_t x674 = 9632267069462516LL;
	volatile uint64_t x675 = 21094073LLU;
	uint32_t x676 = UINT32_MAX;
	static volatile uint32_t t168 = 29U;

    t168 = ((x673>(x674!=x675))*x676);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = INT32_MIN;
	int64_t x679 = INT64_MIN;
	int8_t x680 = INT8_MAX;
	int32_t t169 = -4;

    t169 = ((x677>(x678!=x679))*x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int16_t x682 = -1;
	int16_t x684 = -1;
	int32_t t170 = -179727973;

    t170 = ((x681>(x682!=x683))*x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MAX;
	int8_t x686 = INT8_MIN;
	static int64_t x688 = INT64_MIN;
	volatile int64_t t171 = INT64_MIN;

    t171 = ((x685>(x686!=x687))*x688);

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int16_t x690 = 60;
	int32_t x691 = INT32_MIN;
	int64_t t172 = -829996710060LL;

    t172 = ((x689>(x690!=x691))*x692);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x695 = -1LL;
	static int32_t x696 = -1;
	static volatile int32_t t173 = -21360;

    t173 = ((x693>(x694!=x695))*x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -3325933486686383LL;
	int16_t x698 = 53;
	static uint16_t x699 = 524U;
	volatile uint32_t t174 = 512025U;

    t174 = ((x697>(x698!=x699))*x700);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x701 = 3391610LLU;
	static int64_t x702 = INT64_MIN;
	int8_t x703 = -1;
	volatile int32_t t175 = INT32_MIN;

    t175 = ((x701>(x702!=x703))*x704);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x705 = 3U;
	uint64_t x708 = 11942381162LLU;
	uint64_t t176 = 8633202819LLU;

    t176 = ((x705>(x706!=x707))*x708);

    if (t176 != 11942381162LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = INT64_MIN;
	int16_t x710 = INT16_MIN;
	volatile int64_t x711 = INT64_MIN;
	static volatile uint64_t x712 = 1615743761LLU;
	uint64_t t177 = 152292198654183965LLU;

    t177 = ((x709>(x710!=x711))*x712);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	int64_t x715 = INT64_MIN;
	int32_t t178 = 199483091;

    t178 = ((x713>(x714!=x715))*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 102378211LLU;
	int32_t t179 = 157;

    t179 = ((x717>(x718!=x719))*x720);

    if (t179 != -425) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 197406012925967482LLU;
	static int32_t x722 = INT32_MIN;
	static int64_t x723 = INT64_MAX;
	int64_t x724 = -7070LL;
	static volatile int64_t t180 = -1006254994138LL;

    t180 = ((x721>(x722!=x723))*x724);

    if (t180 != -7070LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	uint64_t x726 = 2018355593938796LLU;
	int8_t x727 = INT8_MAX;
	int32_t x728 = INT32_MIN;
	int32_t t181 = -1756641;

    t181 = ((x725>(x726!=x727))*x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -46;
	int8_t x730 = -1;
	int32_t t182 = 7719826;

    t182 = ((x729>(x730!=x731))*x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	static uint16_t x734 = 1626U;
	int16_t x735 = INT16_MIN;
	int8_t x736 = INT8_MIN;
	volatile int32_t t183 = 45;

    t183 = ((x733>(x734!=x735))*x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = -1LL;
	uint32_t x739 = 98467252U;
	int64_t x740 = 53407LL;
	static int64_t t184 = 241355583746LL;

    t184 = ((x737>(x738!=x739))*x740);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = -231147043;
	int32_t x744 = INT32_MIN;

    t185 = ((x741>(x742!=x743))*x744);

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x745 = 2U;
	static int16_t x747 = 27;
	int8_t x748 = INT8_MIN;
	volatile int32_t t186 = 32699282;

    t186 = ((x745>(x746!=x747))*x748);

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	uint16_t x750 = UINT16_MAX;
	static int16_t x751 = -1;
	int32_t x752 = INT32_MIN;
	static int32_t t187 = -89249;

    t187 = ((x749>(x750!=x751))*x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = UINT32_MAX;
	static int16_t x754 = INT16_MIN;
	int64_t x755 = INT64_MAX;
	static int32_t x756 = -1;
	int32_t t188 = 511134338;

    t188 = ((x753>(x754!=x755))*x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x757 = 0U;
	static int8_t x758 = INT8_MIN;
	int32_t x760 = -19459762;
	volatile int32_t t189 = -26147;

    t189 = ((x757>(x758!=x759))*x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 1;
	int64_t x764 = INT64_MAX;
	static int64_t t190 = -724LL;

    t190 = ((x761>(x762!=x763))*x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	uint8_t x767 = UINT8_MAX;
	int32_t t191 = -2;

    t191 = ((x765>(x766!=x767))*x768);

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	static int64_t x770 = 6074LL;
	int64_t x771 = INT64_MIN;
	int32_t x772 = -1;
	static volatile int32_t t192 = 241;

    t192 = ((x769>(x770!=x771))*x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 0U;
	int8_t x774 = -1;
	uint8_t x775 = 27U;

    t193 = ((x773>(x774!=x775))*x776);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 30481942882737LLU;
	uint16_t x778 = 1367U;
	static int64_t x779 = 9286353LL;
	uint8_t x780 = UINT8_MAX;
	volatile int32_t t194 = -28856;

    t194 = ((x777>(x778!=x779))*x780);

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 47U;
	uint8_t x782 = 0U;
	volatile int64_t x783 = 371LL;
	int32_t t195 = -3093462;

    t195 = ((x781>(x782!=x783))*x784);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 6290235592733958LLU;
	uint8_t x786 = 10U;
	uint32_t x787 = UINT32_MAX;
	int16_t x788 = -1;
	volatile int32_t t196 = 31;

    t196 = ((x785>(x786!=x787))*x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	volatile uint8_t x790 = 25U;
	int16_t x791 = -1;
	uint64_t x792 = 672181088022LLU;

    t197 = ((x789>(x790!=x791))*x792);

    if (t197 != 672181088022LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	volatile uint64_t x794 = 189971526LLU;
	static uint32_t x795 = 854U;
	int32_t x796 = INT32_MIN;

    t198 = ((x793>(x794!=x795))*x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x799 = 9663748502055LLU;
	int16_t x800 = INT16_MIN;
	volatile int32_t t199 = 4881065;

    t199 = ((x797>(x798!=x799))*x800);

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

