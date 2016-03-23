
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

static uint64_t x5 = 128216LLU;
uint32_t x7 = 0U;
int16_t x20 = -1;
volatile uint16_t x23 = UINT16_MAX;
uint64_t x31 = 2935LLU;
volatile uint64_t x34 = 1LLU;
int64_t x37 = -263907942378LL;
int32_t t9 = 3879;
int16_t x45 = INT16_MIN;
static uint32_t x54 = UINT32_MAX;
int32_t x64 = 1806287;
volatile int16_t x72 = -1;
int32_t t17 = 59791003;
volatile int64_t x73 = INT64_MIN;
int32_t x74 = INT32_MIN;
int64_t x77 = -489301LL;
int32_t x79 = INT32_MIN;
static uint16_t x83 = UINT16_MAX;
static int8_t x89 = -1;
uint64_t x90 = UINT64_MAX;
uint16_t x107 = UINT16_MAX;
uint64_t x114 = 32LLU;
int64_t x115 = INT64_MIN;
static int32_t t28 = 6;
volatile int8_t x122 = -1;
uint64_t x124 = 3790440466997LLU;
int64_t x125 = 56LL;
uint16_t x126 = 971U;
volatile int32_t t31 = 92755240;
int32_t t32 = 654761553;
static int64_t x136 = 174738981LL;
static volatile int32_t t33 = -200416714;
static int64_t x144 = -2360017293427841760LL;
int64_t x147 = INT64_MIN;
volatile int32_t t36 = 148;
uint64_t x155 = UINT64_MAX;
uint32_t x164 = UINT32_MAX;
int64_t x166 = INT64_MAX;
int32_t t43 = 1;
uint64_t x177 = 11LLU;
int16_t x181 = INT16_MAX;
static uint16_t x189 = UINT16_MAX;
volatile int16_t x192 = -1;
static uint16_t x195 = 3U;
int8_t x198 = -29;
int64_t x203 = -59224287665LL;
int32_t x208 = INT32_MIN;
uint64_t x210 = 2447658LLU;
int32_t x219 = -47909544;
volatile int8_t x224 = INT8_MAX;
static int8_t x230 = INT8_MIN;
int8_t x235 = 0;
uint32_t x236 = 2542U;
int64_t x237 = -1LL;
int64_t x248 = INT64_MIN;
volatile uint16_t x252 = UINT16_MAX;
int32_t t63 = -70;
volatile int32_t t64 = 774315174;
uint64_t x266 = UINT64_MAX;
uint64_t x271 = UINT64_MAX;
int64_t x276 = INT64_MIN;
int32_t x278 = INT32_MIN;
int32_t t71 = -156530;
uint32_t x293 = 13427U;
static volatile int32_t x296 = -1;
static int64_t x297 = 3422157000714LL;
uint16_t x298 = UINT16_MAX;
int64_t x302 = INT64_MAX;
static volatile int32_t t75 = -13654;
volatile int8_t x317 = INT8_MIN;
int32_t t80 = 1;
int16_t x328 = INT16_MIN;
int64_t x333 = -1LL;
uint64_t x339 = UINT64_MAX;
volatile int32_t t84 = -56;
uint64_t x344 = 51604385056406LLU;
static volatile int64_t x351 = INT64_MIN;
int32_t t88 = -12559;
int8_t x358 = INT8_MIN;
static int16_t x362 = INT16_MIN;
int32_t x367 = INT32_MAX;
uint16_t x368 = 9U;
volatile uint16_t x373 = UINT16_MAX;
uint16_t x380 = 9U;
int64_t x384 = INT64_MIN;
volatile int64_t x386 = -1LL;
int64_t x396 = INT64_MAX;
int64_t x401 = -1LL;
int32_t x408 = INT32_MIN;
int16_t x410 = -55;
static uint32_t x411 = 245U;
volatile uint64_t x417 = UINT64_MAX;
int16_t x419 = INT16_MIN;
volatile int32_t t105 = -40427780;
volatile int64_t x428 = -2377947LL;
int32_t t107 = 3039166;
int8_t x436 = -7;
int16_t x440 = -781;
int8_t x441 = INT8_MIN;
uint16_t x444 = 477U;
uint8_t x447 = 0U;
int16_t x448 = 0;
int64_t x456 = -532722827251936LL;
int64_t x458 = INT64_MIN;
int32_t x460 = INT32_MIN;
int32_t t115 = 1089;
int16_t x469 = INT16_MAX;
int32_t x471 = INT32_MAX;
int64_t x480 = INT64_MIN;
static volatile int16_t x487 = INT16_MAX;
int32_t t121 = 5;
uint32_t x489 = UINT32_MAX;
int32_t x490 = 2849;
int32_t x493 = INT32_MIN;
int32_t t123 = -2100754;
int8_t x498 = INT8_MAX;
uint16_t x504 = UINT16_MAX;
volatile int32_t t125 = 1;
int64_t x508 = 972677LL;
int32_t t128 = -11570225;
static uint8_t x518 = 4U;
static int32_t x519 = INT32_MIN;
int64_t x525 = 0LL;
volatile int32_t t131 = -19;
int32_t x531 = INT32_MIN;
uint16_t x533 = UINT16_MAX;
static int8_t x537 = INT8_MIN;
static volatile uint32_t x540 = 50U;
volatile int32_t t134 = 2;
int64_t x555 = 53LL;
volatile int32_t t138 = -125754;
static volatile int32_t x560 = INT32_MAX;
int32_t t139 = 233542;
uint64_t x572 = 939561173222440699LLU;
volatile int32_t t144 = 98030;
int16_t x588 = -15;
int16_t x590 = -1;
int32_t t147 = -472564;
static int8_t x594 = INT8_MAX;
static int32_t x599 = INT32_MAX;
volatile uint64_t x602 = 903201001LLU;
int16_t x604 = 1983;
int16_t x605 = INT16_MAX;
int32_t x606 = -6956;
volatile int32_t x620 = 6;
static uint32_t x622 = 155755827U;
volatile int32_t t155 = 29;
uint16_t x625 = 127U;
volatile int32_t x630 = 39;
uint16_t x632 = 1U;
int16_t x633 = INT16_MIN;
static volatile int32_t x634 = 4433185;
int32_t t159 = 691539183;
int32_t x642 = INT32_MAX;
uint16_t x647 = UINT16_MAX;
int32_t t161 = 685823248;
int32_t t162 = -1;
static int16_t x656 = INT16_MIN;
int16_t x658 = INT16_MAX;
int32_t t165 = -16992;
int64_t x671 = INT64_MIN;
volatile int64_t x677 = INT64_MIN;
uint8_t x682 = UINT8_MAX;
volatile int16_t x683 = INT16_MIN;
static uint32_t x684 = UINT32_MAX;
volatile int64_t x687 = INT64_MIN;
volatile int32_t t173 = -2392038;
int32_t t174 = -3078703;
uint16_t x706 = 24052U;
volatile int32_t t176 = -261218463;
static int64_t x711 = -15109LL;
int32_t x715 = -275578;
volatile int32_t t179 = 0;
int8_t x729 = -1;
volatile uint16_t x731 = 272U;
int16_t x734 = INT16_MAX;
int8_t x737 = -1;
int16_t x745 = INT16_MAX;
static volatile uint64_t x757 = 0LLU;
static volatile int32_t t189 = 1;
static int32_t x766 = -1;
static uint32_t x773 = 1U;
volatile int8_t x774 = 54;
int32_t t196 = -2;
static volatile int64_t x790 = -1LL;
uint16_t x791 = UINT16_MAX;
volatile uint16_t x792 = UINT16_MAX;
volatile int32_t t197 = 0;
uint32_t x798 = UINT32_MAX;
volatile int32_t x799 = 4337492;


void f0(void) {
    	uint8_t x1 = 63U;
	int64_t x2 = INT64_MAX;
	int8_t x3 = -1;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -2;

    t0 = ((x1&(x2==x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	int32_t x8 = -2475;
	int32_t t1 = 47766419;

    t1 = ((x5&(x6==x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	uint8_t x11 = 0U;
	int64_t x12 = 105344493LL;
	volatile int32_t t2 = -1;

    t2 = ((x9&(x10==x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile uint64_t x14 = 2114268986455968LLU;
	volatile uint16_t x15 = 1U;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = 325;

    t3 = ((x13&(x14==x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 2037347356859894LLU;
	int64_t x18 = -3893LL;
	int16_t x19 = -5;
	volatile int32_t t4 = 563715;

    t4 = ((x17&(x18==x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 0U;
	static int32_t x22 = 2;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -336856297;

    t5 = ((x21&(x22==x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile int8_t x26 = -1;
	static uint64_t x27 = 14182903224375944LLU;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 158347;

    t6 = ((x25&(x26==x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	static volatile uint16_t x30 = 8955U;
	static volatile int16_t x32 = INT16_MIN;
	int32_t t7 = 89506;

    t7 = ((x29&(x30==x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	int32_t x35 = -1764531;
	static int16_t x36 = INT16_MIN;
	static int32_t t8 = 45555585;

    t8 = ((x33&(x34==x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = INT64_MIN;
	volatile int8_t x40 = -1;

    t9 = ((x37&(x38==x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint64_t x42 = 1987113190072LLU;
	static int64_t x43 = INT64_MIN;
	volatile uint16_t x44 = UINT16_MAX;
	int32_t t10 = 1570;

    t10 = ((x41&(x42==x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	volatile uint16_t x47 = UINT16_MAX;
	int32_t x48 = 146370153;
	static int32_t t11 = 357483;

    t11 = ((x45&(x46==x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 149595561U;
	int32_t x50 = 204031362;
	static int16_t x51 = 23;
	static int32_t x52 = -1;
	volatile int32_t t12 = 237358490;

    t12 = ((x49&(x50==x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x53 = INT16_MIN;
	int32_t x55 = INT32_MAX;
	static int64_t x56 = -1213282438207167LL;
	volatile int32_t t13 = -41;

    t13 = ((x53&(x54==x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 6902LLU;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	int32_t x60 = -1;
	int32_t t14 = 2609273;

    t14 = ((x57&(x58==x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	volatile int32_t x63 = 90604715;
	static volatile int32_t t15 = 0;

    t15 = ((x61&(x62==x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 0U;
	int16_t x66 = INT16_MIN;
	static int64_t x67 = 20LL;
	static int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 31;

    t16 = ((x65&(x66==x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = 5;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;

    t17 = ((x69&(x70==x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x75 = 65U;
	int16_t x76 = 1287;
	int32_t t18 = -12831;

    t18 = ((x73&(x74==x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = UINT64_MAX;
	int32_t x80 = INT32_MAX;
	static int32_t t19 = 1254627;

    t19 = ((x77&(x78==x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 394U;
	volatile int16_t x82 = INT16_MIN;
	int16_t x84 = -1;
	static volatile int32_t t20 = -322068799;

    t20 = ((x81&(x82==x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	volatile uint32_t x86 = 3208U;
	uint8_t x87 = 1U;
	int16_t x88 = -1;
	static volatile int32_t t21 = 2406;

    t21 = ((x85&(x86==x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x91 = -1;
	uint16_t x92 = 1U;
	volatile int32_t t22 = 1662;

    t22 = ((x89&(x90==x91))!=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = INT16_MAX;
	uint8_t x94 = 0U;
	uint32_t x95 = 461U;
	volatile uint8_t x96 = UINT8_MAX;
	static int32_t t23 = -6;

    t23 = ((x93&(x94==x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -20LL;
	int32_t x98 = INT32_MAX;
	static int32_t x99 = -6;
	int8_t x100 = -1;
	volatile int32_t t24 = -816;

    t24 = ((x97&(x98==x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int8_t x102 = -1;
	static volatile uint16_t x103 = UINT16_MAX;
	int16_t x104 = INT16_MAX;
	int32_t t25 = 2016799;

    t25 = ((x101&(x102==x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 1081294237730LLU;
	static uint64_t x106 = 19007167147044LLU;
	static uint16_t x108 = 4063U;
	int32_t t26 = 3515;

    t26 = ((x105&(x106==x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	volatile int64_t x110 = INT64_MAX;
	volatile uint32_t x111 = 58895U;
	uint8_t x112 = 0U;
	volatile int32_t t27 = 21996;

    t27 = ((x109&(x110==x111))!=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 3227929LL;
	uint32_t x116 = 1871908350U;

    t28 = ((x113&(x114==x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MIN;
	int32_t t29 = 2264;

    t29 = ((x117&(x118==x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MIN;
	static uint64_t x123 = 28926085030856LLU;
	int32_t t30 = 150048673;

    t30 = ((x121&(x122==x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x127 = 513899911014410703LL;
	volatile uint64_t x128 = UINT64_MAX;

    t31 = ((x125&(x126==x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	static int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MAX;

    t32 = ((x129&(x130==x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = 14;
	int16_t x134 = INT16_MAX;
	int64_t x135 = INT64_MAX;

    t33 = ((x133&(x134==x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = -7156;
	static int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	int64_t x140 = 289815081011873LL;
	volatile int32_t t34 = 29726328;

    t34 = ((x137&(x138==x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -63631208;
	int64_t x142 = -1266LL;
	volatile int16_t x143 = INT16_MIN;
	int32_t t35 = -42853;

    t35 = ((x141&(x142==x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x145 = 57U;
	int8_t x146 = INT8_MIN;
	int16_t x148 = INT16_MIN;

    t36 = ((x145&(x146==x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	static volatile uint8_t x150 = UINT8_MAX;
	int64_t x151 = -1LL;
	static int32_t x152 = -1;
	int32_t t37 = 1;

    t37 = ((x149&(x150==x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 3U;
	int16_t x154 = INT16_MAX;
	int64_t x156 = INT64_MAX;
	volatile int32_t t38 = 3;

    t38 = ((x153&(x154==x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = 869;
	int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 28;

    t39 = ((x157&(x158==x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x161 = 0U;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = 15U;
	volatile int32_t t40 = 1181;

    t40 = ((x161&(x162==x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	static uint16_t x167 = 19U;
	static int32_t x168 = -1;
	static volatile int32_t t41 = -382480674;

    t41 = ((x165&(x166==x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = -2;
	static uint64_t x170 = 12407050LLU;
	int8_t x171 = 1;
	uint16_t x172 = 130U;
	static int32_t t42 = -5202;

    t42 = ((x169&(x170==x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x173 = UINT64_MAX;
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = UINT32_MAX;
	static uint32_t x176 = UINT32_MAX;

    t43 = ((x173&(x174==x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x178 = 1427962700111913500LL;
	static uint8_t x179 = 26U;
	int16_t x180 = -1;
	volatile int32_t t44 = 1600281;

    t44 = ((x177&(x178==x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x182 = 2;
	static uint32_t x183 = 797753U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -607178390;

    t45 = ((x181&(x182==x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x185 = 48U;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MAX;
	volatile int32_t t46 = 1;

    t46 = ((x185&(x186==x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = 1;
	int64_t x191 = -1LL;
	volatile int32_t t47 = 81;

    t47 = ((x189&(x190==x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 17;
	int16_t x194 = INT16_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -48565;

    t48 = ((x193&(x194==x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int64_t x199 = INT64_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -6341;

    t49 = ((x197&(x198==x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	int16_t x202 = -1;
	uint32_t x204 = 1U;
	volatile int32_t t50 = 466;

    t50 = ((x201&(x202==x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = UINT8_MAX;
	volatile uint8_t x206 = UINT8_MAX;
	uint64_t x207 = 3LLU;
	int32_t t51 = -1388370;

    t51 = ((x205&(x206==x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	volatile int16_t x211 = -3645;
	static int32_t x212 = 3915969;
	volatile int32_t t52 = -195943;

    t52 = ((x209&(x210==x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 80;
	static int32_t x214 = -2379;
	int32_t x215 = -649676256;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 13956399;

    t53 = ((x213&(x214==x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = 2;
	volatile int32_t x218 = -1020;
	int16_t x220 = -1;
	volatile int32_t t54 = -753328;

    t54 = ((x217&(x218==x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = 0;
	uint16_t x222 = UINT16_MAX;
	uint16_t x223 = 444U;
	volatile int32_t t55 = -20732145;

    t55 = ((x221&(x222==x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = -1;
	int32_t x226 = 0;
	uint32_t x227 = 361197U;
	volatile int32_t x228 = INT32_MAX;
	static int32_t t56 = -18;

    t56 = ((x225&(x226==x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	int8_t x231 = 1;
	int64_t x232 = -59866407781392LL;
	static int32_t t57 = 215;

    t57 = ((x229&(x230==x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 11579U;
	volatile int16_t x234 = -1;
	volatile int32_t t58 = -42;

    t58 = ((x233&(x234==x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x238 = 25U;
	int64_t x239 = INT64_MIN;
	static volatile uint16_t x240 = 0U;
	int32_t t59 = 1;

    t59 = ((x237&(x238==x239))!=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = 21;
	int32_t x242 = INT32_MIN;
	volatile uint8_t x243 = 6U;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 5965;

    t60 = ((x241&(x242==x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = INT64_MIN;
	static int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	int32_t t61 = 730893803;

    t61 = ((x245&(x246==x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	int64_t x250 = 4238619844674LL;
	int8_t x251 = -29;
	static int32_t t62 = 142571181;

    t62 = ((x249&(x250==x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -1LL;
	static int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MAX;

    t63 = ((x253&(x254==x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 83;
	uint32_t x258 = 111025U;
	uint64_t x259 = 36848LLU;
	int8_t x260 = -3;

    t64 = ((x257&(x258==x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 14U;
	int16_t x262 = INT16_MIN;
	static int16_t x263 = -1;
	int16_t x264 = -1094;
	volatile int32_t t65 = -1184037;

    t65 = ((x261&(x262==x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = 1;
	int8_t x267 = 3;
	uint8_t x268 = 0U;
	int32_t t66 = -89690966;

    t66 = ((x265&(x266==x267))!=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 164449792121LLU;
	int8_t x272 = -1;
	int32_t t67 = 20;

    t67 = ((x269&(x270==x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MAX;
	static uint32_t x274 = 2U;
	static int16_t x275 = INT16_MAX;
	static int32_t t68 = 30880;

    t68 = ((x273&(x274==x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	volatile int32_t x279 = 31457418;
	volatile uint16_t x280 = 115U;
	volatile int32_t t69 = 1;

    t69 = ((x277&(x278==x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = 273883934699126954LL;
	int16_t x282 = INT16_MIN;
	volatile int8_t x283 = INT8_MAX;
	volatile uint8_t x284 = UINT8_MAX;
	static volatile int32_t t70 = 22060532;

    t70 = ((x281&(x282==x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	int64_t x286 = INT64_MAX;
	volatile int16_t x287 = INT16_MIN;
	int8_t x288 = -1;

    t71 = ((x285&(x286==x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	uint64_t x290 = 30062350LLU;
	int32_t x291 = -468833945;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -744348416;

    t72 = ((x289&(x290==x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = -1;
	int32_t x295 = -1;
	static volatile int32_t t73 = 58793;

    t73 = ((x293&(x294==x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x299 = INT32_MIN;
	volatile uint32_t x300 = UINT32_MAX;
	static volatile int32_t t74 = -31;

    t74 = ((x297&(x298==x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 47876705LLU;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MAX;

    t75 = ((x301&(x302==x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MAX;
	int64_t x306 = INT64_MAX;
	volatile int64_t x307 = -15577956129LL;
	uint32_t x308 = 341764899U;
	int32_t t76 = -30;

    t76 = ((x305&(x306==x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	volatile uint64_t x311 = 579LLU;
	static int16_t x312 = INT16_MIN;
	int32_t t77 = 1;

    t77 = ((x309&(x310==x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = 321503902U;
	uint32_t x314 = 35548859U;
	static uint64_t x315 = 9960601LLU;
	int16_t x316 = INT16_MAX;
	int32_t t78 = -28;

    t78 = ((x313&(x314==x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MAX;
	int32_t t79 = -67;

    t79 = ((x317&(x318==x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	int32_t x322 = -1;
	uint16_t x323 = 0U;
	int16_t x324 = INT16_MIN;

    t80 = ((x321&(x322==x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 927U;
	uint8_t x326 = 0U;
	volatile uint64_t x327 = 363118903LLU;
	static int32_t t81 = 3264;

    t81 = ((x325&(x326==x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 3U;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -1;
	uint16_t x332 = 30426U;
	static int32_t t82 = -63593;

    t82 = ((x329&(x330==x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x334 = INT8_MIN;
	volatile int16_t x335 = INT16_MIN;
	volatile int64_t x336 = -1LL;
	volatile int32_t t83 = -66651;

    t83 = ((x333&(x334==x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = 1078U;
	int64_t x338 = INT64_MAX;
	int32_t x340 = 828100381;

    t84 = ((x337&(x338==x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x341 = 14991U;
	uint8_t x342 = 123U;
	uint64_t x343 = UINT64_MAX;
	volatile int32_t t85 = 11776;

    t85 = ((x341&(x342==x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	volatile uint32_t x346 = 6788U;
	int32_t x347 = -1;
	uint16_t x348 = 1776U;
	int32_t t86 = -51;

    t86 = ((x345&(x346==x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 3U;
	static int8_t x350 = -11;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 15;

    t87 = ((x349&(x350==x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MAX;
	int64_t x354 = -26927LL;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = -20;

    t88 = ((x353&(x354==x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	static int8_t x359 = -60;
	static int32_t x360 = 579;
	volatile int32_t t89 = -52590078;

    t89 = ((x357&(x358==x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1004;
	uint8_t x363 = 0U;
	int16_t x364 = -1;
	int32_t t90 = 8;

    t90 = ((x361&(x362==x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;
	volatile int32_t t91 = -106079802;

    t91 = ((x365&(x366==x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -38;
	int32_t x370 = -1;
	volatile int64_t x371 = -989021634LL;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 7;

    t92 = ((x369&(x370==x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x374 = 185298U;
	static uint64_t x375 = UINT64_MAX;
	volatile int64_t x376 = 1883734672LL;
	volatile int32_t t93 = 485009;

    t93 = ((x373&(x374==x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -56;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	static int32_t t94 = -88762306;

    t94 = ((x377&(x378==x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = 35U;
	static int64_t x382 = INT64_MAX;
	int32_t x383 = -102355;
	volatile int32_t t95 = -1768851;

    t95 = ((x381&(x382==x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 70U;
	int64_t x387 = 41851436148952LL;
	volatile int32_t x388 = INT32_MIN;
	int32_t t96 = -21209182;

    t96 = ((x385&(x386==x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 34212027LLU;
	int32_t x390 = -1;
	volatile uint32_t x391 = UINT32_MAX;
	int64_t x392 = INT64_MAX;
	volatile int32_t t97 = -5;

    t97 = ((x389&(x390==x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	static volatile int32_t t98 = -1668617;

    t98 = ((x393&(x394==x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MAX;
	static volatile int16_t x399 = 26;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = -2019286;

    t99 = ((x397&(x398==x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = INT32_MAX;
	int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 1;

    t100 = ((x401&(x402==x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = 115965100U;
	static volatile uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	volatile int32_t t101 = -5;

    t101 = ((x405&(x406==x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 36552;
	uint64_t x412 = UINT64_MAX;
	int32_t t102 = -17538082;

    t102 = ((x409&(x410==x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x413 = 4080LLU;
	int32_t x414 = INT32_MAX;
	int64_t x415 = 19697259562189587LL;
	uint32_t x416 = 56360U;
	int32_t t103 = -252;

    t103 = ((x413&(x414==x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x418 = -1;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t104 = 83587998;

    t104 = ((x417&(x418==x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = INT8_MAX;
	static int64_t x422 = 46297084785998919LL;
	volatile uint16_t x423 = UINT16_MAX;
	int64_t x424 = INT64_MIN;

    t105 = ((x421&(x422==x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 63U;
	uint16_t x426 = UINT16_MAX;
	int64_t x427 = -59255938539006LL;
	volatile int32_t t106 = 2196;

    t106 = ((x425&(x426==x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x429 = 55U;
	int32_t x430 = -1;
	int8_t x431 = INT8_MAX;
	volatile uint32_t x432 = 1142027U;

    t107 = ((x429&(x430==x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = 11U;
	static uint8_t x434 = UINT8_MAX;
	static int16_t x435 = 3;
	volatile int32_t t108 = 5984;

    t108 = ((x433&(x434==x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -1;
	volatile int16_t x438 = INT16_MIN;
	int64_t x439 = 839375768390991274LL;
	int32_t t109 = -917;

    t109 = ((x437&(x438==x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MAX;
	int32_t x443 = -285756;
	static volatile int32_t t110 = -30910878;

    t110 = ((x441&(x442==x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 13445870031LLU;
	int64_t x446 = INT64_MAX;
	volatile int32_t t111 = -1;

    t111 = ((x445&(x446==x447))!=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MAX;
	static int64_t x450 = -20057LL;
	volatile int8_t x451 = 0;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t112 = -36813;

    t112 = ((x449&(x450==x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	int32_t x454 = -1;
	int8_t x455 = INT8_MAX;
	volatile int32_t t113 = 11102;

    t113 = ((x453&(x454==x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = 331LL;
	volatile int16_t x459 = -14;
	static int32_t t114 = 425095337;

    t114 = ((x457&(x458==x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 3LLU;
	int64_t x462 = -1LL;
	volatile uint64_t x463 = 3201367800981414546LLU;
	uint16_t x464 = 230U;

    t115 = ((x461&(x462==x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	static int8_t x466 = 22;
	int32_t x467 = INT32_MIN;
	uint32_t x468 = UINT32_MAX;
	int32_t t116 = -5255;

    t116 = ((x465&(x466==x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x470 = UINT8_MAX;
	int8_t x472 = INT8_MAX;
	static volatile int32_t t117 = 1;

    t117 = ((x469&(x470==x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	int8_t x474 = 37;
	int16_t x475 = INT16_MIN;
	static uint64_t x476 = 22LLU;
	volatile int32_t t118 = -2;

    t118 = ((x473&(x474==x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = 13;
	volatile uint64_t x478 = 23932238843542646LLU;
	static int32_t x479 = INT32_MAX;
	volatile int32_t t119 = 21;

    t119 = ((x477&(x478==x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	uint32_t x482 = 636075U;
	int16_t x483 = INT16_MIN;
	int8_t x484 = INT8_MAX;
	int32_t t120 = 5036458;

    t120 = ((x481&(x482==x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	static volatile int64_t x486 = INT64_MAX;
	static uint16_t x488 = UINT16_MAX;

    t121 = ((x485&(x486==x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x491 = 258613;
	static volatile int32_t x492 = 10749;
	int32_t t122 = -1561830;

    t122 = ((x489&(x490==x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x494 = INT8_MIN;
	static int16_t x495 = INT16_MIN;
	uint16_t x496 = UINT16_MAX;

    t123 = ((x493&(x494==x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x497 = 374105493150168699LLU;
	uint8_t x499 = UINT8_MAX;
	uint16_t x500 = 494U;
	volatile int32_t t124 = -1675684;

    t124 = ((x497&(x498==x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	uint32_t x502 = 3007129U;
	int8_t x503 = INT8_MIN;

    t125 = ((x501&(x502==x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -1;
	int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	static volatile int32_t t126 = -54938;

    t126 = ((x505&(x506==x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	volatile int8_t x510 = INT8_MIN;
	int32_t x511 = -9193413;
	uint64_t x512 = 65438045LLU;
	volatile int32_t t127 = -1;

    t127 = ((x509&(x510==x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x513 = 59700U;
	static int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MIN;
	int8_t x516 = -7;

    t128 = ((x513&(x514==x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x517 = 181517U;
	uint8_t x520 = UINT8_MAX;
	static int32_t t129 = 1;

    t129 = ((x517&(x518==x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MAX;
	static uint8_t x522 = 1U;
	uint8_t x523 = 4U;
	uint8_t x524 = 23U;
	volatile int32_t t130 = 1031176573;

    t130 = ((x521&(x522==x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x526 = 438223263073LLU;
	static volatile int8_t x527 = INT8_MAX;
	uint32_t x528 = UINT32_MAX;

    t131 = ((x525&(x526==x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1461054136317LL;
	int16_t x530 = -61;
	uint32_t x532 = 0U;
	static int32_t t132 = -12;

    t132 = ((x529&(x530==x531))!=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MIN;
	uint8_t x535 = 20U;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t133 = 2876;

    t133 = ((x533&(x534==x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x538 = -1;
	int64_t x539 = INT64_MIN;

    t134 = ((x537&(x538==x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = 7765U;
	static volatile int32_t x542 = 857948068;
	int16_t x543 = 6009;
	int16_t x544 = 111;
	int32_t t135 = -2;

    t135 = ((x541&(x542==x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x546 = 39756110;
	int32_t x547 = INT32_MIN;
	uint64_t x548 = UINT64_MAX;
	int32_t t136 = 30;

    t136 = ((x545&(x546==x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	volatile uint8_t x550 = 2U;
	int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MIN;
	volatile int32_t t137 = -3;

    t137 = ((x549&(x550==x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	uint64_t x554 = UINT64_MAX;
	int16_t x556 = INT16_MAX;

    t138 = ((x553&(x554==x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x557 = INT8_MIN;
	volatile int16_t x558 = -26;
	volatile int64_t x559 = INT64_MAX;

    t139 = ((x557&(x558==x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	int64_t x562 = -7948989209311940LL;
	int8_t x563 = -16;
	int8_t x564 = INT8_MAX;
	int32_t t140 = -219;

    t140 = ((x561&(x562==x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	static int32_t x566 = 7325;
	int8_t x567 = INT8_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t141 = -828260531;

    t141 = ((x565&(x566==x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 7778169232372LLU;
	uint16_t x570 = UINT16_MAX;
	uint64_t x571 = 22133LLU;
	volatile int32_t t142 = -2063223;

    t142 = ((x569&(x570==x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = 29;
	int8_t x574 = INT8_MAX;
	int32_t x575 = INT32_MIN;
	int32_t x576 = INT32_MAX;
	static int32_t t143 = 282718;

    t143 = ((x573&(x574==x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x577 = INT64_MIN;
	int32_t x578 = INT32_MAX;
	static uint8_t x579 = UINT8_MAX;
	static volatile int64_t x580 = 107LL;

    t144 = ((x577&(x578==x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	volatile int64_t x582 = INT64_MIN;
	int64_t x583 = INT64_MAX;
	volatile uint16_t x584 = 1185U;
	static volatile int32_t t145 = -3;

    t145 = ((x581&(x582==x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int64_t x586 = INT64_MAX;
	static int16_t x587 = 111;
	static int32_t t146 = -56101939;

    t146 = ((x585&(x586==x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 20U;
	static uint16_t x591 = UINT16_MAX;
	static uint32_t x592 = 260928037U;

    t147 = ((x589&(x590==x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = -1;
	int32_t x595 = INT32_MIN;
	int8_t x596 = INT8_MAX;
	int32_t t148 = 135993563;

    t148 = ((x593&(x594==x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1;
	int8_t x598 = 59;
	static int8_t x600 = 40;
	int32_t t149 = 120144;

    t149 = ((x597&(x598==x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = UINT64_MAX;
	int64_t x603 = -1LL;
	volatile int32_t t150 = -3466362;

    t150 = ((x601&(x602==x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x607 = INT64_MIN;
	uint64_t x608 = 0LLU;
	volatile int32_t t151 = -3963804;

    t151 = ((x605&(x606==x607))!=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 3LLU;
	uint32_t x610 = UINT32_MAX;
	uint8_t x611 = UINT8_MAX;
	static volatile int32_t x612 = -1;
	volatile int32_t t152 = 600732;

    t152 = ((x609&(x610==x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MAX;
	volatile int16_t x614 = -1;
	int64_t x615 = -3530603625827033LL;
	volatile uint8_t x616 = UINT8_MAX;
	volatile int32_t t153 = 811;

    t153 = ((x613&(x614==x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = 17253591085LL;
	int8_t x618 = 1;
	int8_t x619 = INT8_MAX;
	volatile int32_t t154 = 129130850;

    t154 = ((x617&(x618==x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = -1;
	volatile int64_t x623 = 286529LL;
	uint64_t x624 = 43731373369190225LLU;

    t155 = ((x621&(x622==x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = 11LL;
	static int32_t x627 = INT32_MIN;
	static int16_t x628 = -1;
	volatile int32_t t156 = -32157074;

    t156 = ((x625&(x626==x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -172124021041699350LL;
	int16_t x631 = 3878;
	volatile int32_t t157 = 211468835;

    t157 = ((x629&(x630==x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x635 = -1LL;
	uint64_t x636 = 1LLU;
	int32_t t158 = 45191;

    t158 = ((x633&(x634==x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -13;
	volatile int64_t x638 = INT64_MIN;
	int16_t x639 = -1;
	int32_t x640 = -1;

    t159 = ((x637&(x638==x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x643 = -1;
	int64_t x644 = -1LL;
	int32_t t160 = 809452517;

    t160 = ((x641&(x642==x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = 20;
	uint16_t x646 = UINT16_MAX;
	static int64_t x648 = INT64_MIN;

    t161 = ((x645&(x646==x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	volatile int8_t x650 = 8;
	int8_t x651 = 15;
	int16_t x652 = INT16_MIN;

    t162 = ((x649&(x650==x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MAX;
	static volatile int8_t x654 = -1;
	uint8_t x655 = 6U;
	int32_t t163 = -1029;

    t163 = ((x653&(x654==x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = 85;
	static int32_t x659 = -1;
	volatile int64_t x660 = 9696790328341LL;
	int32_t t164 = 5771084;

    t164 = ((x657&(x658==x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 1;
	int8_t x662 = -46;
	int8_t x663 = 44;
	int64_t x664 = -1LL;

    t165 = ((x661&(x662==x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = INT16_MIN;
	int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	uint16_t x668 = UINT16_MAX;
	static volatile int32_t t166 = -135;

    t166 = ((x665&(x666==x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x669 = 1U;
	int32_t x670 = INT32_MIN;
	uint32_t x672 = 1U;
	volatile int32_t t167 = 124;

    t167 = ((x669&(x670==x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	volatile int8_t x674 = INT8_MIN;
	int16_t x675 = 1185;
	int8_t x676 = -1;
	int32_t t168 = -91;

    t168 = ((x673&(x674==x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x678 = 439LLU;
	static int64_t x679 = -103536562490877267LL;
	int16_t x680 = INT16_MIN;
	static volatile int32_t t169 = -222;

    t169 = ((x677&(x678==x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x681 = 9U;
	int32_t t170 = 0;

    t170 = ((x681&(x682==x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 99U;
	int64_t x686 = -118LL;
	uint16_t x688 = 35U;
	int32_t t171 = 181;

    t171 = ((x685&(x686==x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 506227676883767LL;
	static volatile int8_t x690 = -2;
	static int8_t x691 = -1;
	int64_t x692 = -1LL;
	int32_t t172 = -27;

    t172 = ((x689&(x690==x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x694 = 5137U;
	int64_t x695 = -1LL;
	int8_t x696 = INT8_MIN;

    t173 = ((x693&(x694==x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	uint16_t x698 = UINT16_MAX;
	int16_t x699 = INT16_MAX;
	uint32_t x700 = UINT32_MAX;

    t174 = ((x697&(x698==x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = 1;
	volatile int32_t x702 = INT32_MAX;
	int16_t x703 = -99;
	volatile int32_t x704 = 176899326;
	volatile int32_t t175 = 950146964;

    t175 = ((x701&(x702==x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x705 = 614209U;
	int16_t x707 = 2;
	int8_t x708 = INT8_MAX;

    t176 = ((x705&(x706==x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 0;
	int16_t x710 = INT16_MIN;
	int64_t x712 = -97LL;
	int32_t t177 = 11378;

    t177 = ((x709&(x710==x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 766;
	int8_t x714 = -1;
	volatile int32_t x716 = 517;
	int32_t t178 = 44869378;

    t178 = ((x713&(x714==x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = 0U;
	static volatile int32_t x718 = -265104;
	int16_t x719 = INT16_MIN;
	int8_t x720 = -12;

    t179 = ((x717&(x718==x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = -3;
	int32_t x722 = INT32_MIN;
	static int8_t x723 = -7;
	int32_t x724 = -1;
	int32_t t180 = -4;

    t180 = ((x721&(x722==x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	uint64_t x726 = UINT64_MAX;
	uint8_t x727 = 6U;
	int64_t x728 = INT64_MAX;
	volatile int32_t t181 = -3362521;

    t181 = ((x725&(x726==x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = -1LL;
	int16_t x732 = -5;
	volatile int32_t t182 = -1781129;

    t182 = ((x729&(x730==x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -184;
	volatile int32_t x735 = -1;
	uint8_t x736 = 0U;
	int32_t t183 = -677;

    t183 = ((x733&(x734==x735))!=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x738 = INT8_MIN;
	static int8_t x739 = 50;
	volatile uint32_t x740 = 743573156U;
	static volatile int32_t t184 = -368323;

    t184 = ((x737&(x738==x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 2U;
	uint32_t x742 = 190762U;
	int64_t x743 = INT64_MIN;
	static int16_t x744 = 0;
	static int32_t t185 = 122184946;

    t185 = ((x741&(x742==x743))!=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MAX;
	int64_t x747 = -3129674533710059781LL;
	static int16_t x748 = INT16_MIN;
	int32_t t186 = -95;

    t186 = ((x745&(x746==x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 280U;
	int32_t x750 = INT32_MIN;
	static uint8_t x751 = 0U;
	volatile uint32_t x752 = 17686U;
	volatile int32_t t187 = 5;

    t187 = ((x749&(x750==x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 37U;
	int16_t x754 = -1;
	int64_t x755 = INT64_MIN;
	volatile uint32_t x756 = UINT32_MAX;
	volatile int32_t t188 = 6516;

    t188 = ((x753&(x754==x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = INT32_MIN;
	uint64_t x759 = UINT64_MAX;
	volatile int16_t x760 = INT16_MIN;

    t189 = ((x757&(x758==x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -131197807;
	volatile uint64_t x762 = 7426LLU;
	int8_t x763 = INT8_MIN;
	uint8_t x764 = 35U;
	volatile int32_t t190 = 305822904;

    t190 = ((x761&(x762==x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = 0;
	static int32_t x767 = 25505578;
	int16_t x768 = -1;
	static int32_t t191 = 3593;

    t191 = ((x765&(x766==x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x770 = 3LL;
	static volatile int16_t x771 = 225;
	int64_t x772 = INT64_MAX;
	volatile int32_t t192 = -104;

    t192 = ((x769&(x770==x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x775 = 1U;
	int32_t x776 = 35147;
	static int32_t t193 = 0;

    t193 = ((x773&(x774==x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x777 = INT32_MIN;
	volatile int16_t x778 = INT16_MAX;
	int16_t x779 = INT16_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t194 = -1;

    t194 = ((x777&(x778==x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MIN;
	uint64_t x782 = 17315583770077LLU;
	int8_t x783 = 2;
	int16_t x784 = -600;
	volatile int32_t t195 = -32631664;

    t195 = ((x781&(x782==x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MAX;
	uint64_t x786 = UINT64_MAX;
	int32_t x787 = 29898413;
	int8_t x788 = INT8_MIN;

    t196 = ((x785&(x786==x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;

    t197 = ((x789&(x790==x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 469777895531981LLU;
	static volatile int16_t x794 = 367;
	int64_t x795 = -17611LL;
	volatile uint16_t x796 = 31944U;
	volatile int32_t t198 = 1;

    t198 = ((x793&(x794==x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	volatile int32_t x800 = INT32_MAX;
	volatile int32_t t199 = 19264096;

    t199 = ((x797&(x798==x799))!=x800);

    if (t199 != 1) { NG(); } else { ; }
	
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

