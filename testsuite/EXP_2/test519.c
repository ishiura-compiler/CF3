
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

static volatile uint8_t x10 = 4U;
volatile int32_t x16 = 32568;
int32_t t3 = -553;
static int16_t x30 = -14;
int64_t x36 = INT64_MIN;
uint32_t x40 = 3906U;
uint16_t x45 = UINT16_MAX;
int64_t x57 = INT64_MAX;
int8_t x60 = -1;
int32_t t15 = -502328349;
int16_t x78 = INT16_MIN;
uint8_t x79 = UINT8_MAX;
int8_t x90 = INT8_MIN;
static int16_t x94 = INT16_MAX;
int8_t x96 = INT8_MAX;
uint32_t x99 = 5U;
int8_t x100 = INT8_MAX;
uint8_t x101 = UINT8_MAX;
volatile uint32_t t24 = 5258166U;
int64_t x129 = -1LL;
int32_t x135 = -1;
volatile int32_t t27 = 110598;
int16_t x137 = 53;
int64_t t28 = -63461LL;
uint16_t x162 = UINT16_MAX;
static volatile int32_t t32 = 23793851;
int8_t x168 = -1;
int32_t x177 = -1;
static volatile int32_t x179 = INT32_MIN;
static volatile int32_t t34 = -78435;
int8_t x187 = -6;
int32_t x229 = INT32_MAX;
int16_t x231 = 8124;
uint64_t x235 = UINT64_MAX;
volatile uint64_t t41 = 11315627247LLU;
volatile int32_t t42 = 807500;
int16_t x246 = 15111;
static int8_t x252 = INT8_MAX;
int64_t x257 = 168814505LL;
int32_t x262 = 0;
volatile uint64_t x264 = 2684894441176274LLU;
uint64_t t47 = 3707499051053760764LLU;
static uint8_t x280 = 7U;
volatile int32_t t52 = 154;
int32_t x290 = 17;
int8_t x294 = 0;
static int16_t x309 = 198;
static uint64_t x311 = 537894219243LLU;
int64_t x316 = -8739998474387LL;
int64_t t57 = 99LL;
int64_t x331 = 561880426858294LL;
uint16_t x332 = 876U;
int16_t x343 = 161;
volatile uint8_t x355 = UINT8_MAX;
volatile int32_t t63 = -308;
uint8_t x373 = 15U;
volatile int32_t t66 = -11428;
int32_t x388 = -1;
static int32_t x397 = 50663;
uint8_t x400 = 104U;
volatile int16_t x401 = INT16_MAX;
int64_t x402 = INT64_MAX;
int32_t t70 = 114664149;
uint8_t x410 = 14U;
uint32_t x411 = 5039U;
static int32_t t71 = -876;
volatile int64_t x413 = -78447742792LL;
int8_t x414 = INT8_MAX;
uint16_t x417 = 127U;
int64_t x420 = INT64_MIN;
int8_t x429 = -25;
int32_t x439 = INT32_MIN;
static int16_t x442 = INT16_MIN;
uint16_t x446 = UINT16_MAX;
int16_t x465 = 15569;
int64_t x474 = -1LL;
int16_t x485 = INT16_MIN;
static volatile int8_t x486 = INT8_MIN;
volatile uint64_t t87 = UINT64_MAX;
int64_t x504 = INT64_MIN;
int8_t x507 = INT8_MIN;
int8_t x509 = -35;
int64_t x510 = INT64_MIN;
volatile uint16_t x512 = 366U;
uint16_t x513 = 3U;
int16_t x516 = 26;
int32_t t92 = -723;
int8_t x522 = -1;
int8_t x527 = INT8_MIN;
int32_t t94 = -1471057;
int32_t x544 = INT32_MIN;
int16_t x545 = 14;
uint32_t x550 = 12923430U;
uint64_t t99 = 1LLU;
volatile int32_t t100 = 2438869;
static int8_t x559 = INT8_MAX;
uint32_t x560 = UINT32_MAX;
uint32_t t101 = 56782U;
int8_t x564 = INT8_MIN;
int64_t x567 = -12662319340LL;
int64_t x568 = INT64_MIN;
uint64_t x581 = UINT64_MAX;
volatile uint64_t x582 = 502555070204479597LLU;
volatile int8_t x613 = INT8_MIN;
volatile uint8_t x614 = 77U;
int32_t t109 = -115537551;
static int32_t t111 = 2241964;
int8_t x630 = INT8_MAX;
uint16_t x632 = UINT16_MAX;
volatile uint16_t x637 = 3U;
int16_t x638 = INT16_MAX;
int64_t x649 = -47981828133LL;
uint16_t x651 = 3918U;
int32_t t117 = 6;
int64_t x658 = INT64_MAX;
volatile int16_t x661 = 523;
int64_t x662 = -1LL;
int32_t x664 = -1;
volatile int32_t t122 = -825482;
uint64_t t123 = 63377236441988917LLU;
volatile uint8_t x689 = 15U;
int64_t x690 = 58LL;
int8_t x691 = -1;
volatile int64_t t124 = INT64_MIN;
static volatile int64_t x695 = INT64_MAX;
uint8_t x723 = 90U;
uint16_t x724 = 0U;
volatile int16_t x727 = INT16_MIN;
volatile int32_t t130 = 12377559;
static int64_t x748 = INT64_MIN;
volatile int64_t t134 = -17419637552871802LL;
uint16_t x763 = 0U;
static volatile uint64_t t135 = 8LLU;
uint64_t x768 = 27789161241LLU;
int32_t t137 = 29734;
int32_t t138 = 26874;
static volatile int32_t t139 = 1404;
int32_t x796 = 27345;
int8_t x804 = 5;
volatile uint64_t x805 = 20769445LLU;
int64_t x807 = 353566491050LL;
volatile uint32_t x812 = 333U;
int64_t x813 = -1LL;
static int16_t x816 = 3862;
int32_t t145 = -2760;
int16_t x820 = -6108;
uint64_t x823 = UINT64_MAX;
volatile uint32_t x824 = 0U;
static uint32_t x825 = UINT32_MAX;
static int64_t x837 = -1LL;
int16_t x856 = INT16_MIN;
int16_t x869 = 1919;
static uint8_t x878 = 99U;
int32_t t158 = 447071453;
static int32_t x897 = -2008836;
volatile uint16_t x902 = 137U;
volatile uint32_t t161 = 1U;
uint16_t x912 = UINT16_MAX;
static int8_t x914 = -1;
uint8_t x926 = 7U;
int16_t x933 = INT16_MAX;
int64_t x935 = -25LL;
volatile int8_t x936 = 0;
static volatile int32_t t168 = -1950;
int8_t x942 = -1;
int64_t x954 = -1LL;
int8_t x969 = INT8_MIN;
static uint32_t x970 = UINT32_MAX;
volatile int32_t t177 = 44523;
volatile int16_t x991 = INT16_MIN;
volatile uint8_t x1010 = UINT8_MAX;
volatile uint64_t x1011 = UINT64_MAX;
uint8_t x1021 = 1U;
static volatile uint8_t x1027 = 91U;
int64_t x1037 = -1LL;
static int32_t x1052 = -1;
int16_t x1073 = INT16_MIN;
int16_t x1074 = -5;
uint64_t t194 = 12LLU;
uint16_t x1089 = 25U;
static int32_t t198 = -1761575;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	static volatile int8_t x6 = -3;
	static int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t0 = -145480161316LL;

    t0 = ((x5<=(x6*x7))+x8);

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 10388U;
	int64_t x11 = -6LL;
	int64_t x12 = INT64_MIN;
	int64_t t1 = INT64_MIN;

    t1 = ((x9<=(x10*x11))+x12);

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	volatile int8_t x14 = 7;
	volatile int8_t x15 = 17;
	volatile int32_t t2 = -11;

    t2 = ((x13<=(x14*x15))+x16);

    if (t2 != 32569) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 5U;
	static int8_t x18 = -2;
	int8_t x19 = -42;
	static int16_t x20 = -1;

    t3 = ((x17<=(x18*x19))+x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 101928108878LLU;
	static int16_t x23 = 491;
	static int8_t x24 = -1;
	volatile int32_t t4 = 503618;

    t4 = ((x21<=(x22*x23))+x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = 135201322560175LLU;
	int16_t x26 = -705;
	int64_t x27 = -39764123705836LL;
	int16_t x28 = -2;
	volatile int32_t t5 = -50166;

    t5 = ((x25<=(x26*x27))+x28);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = -1;
	volatile int8_t x31 = -57;
	uint32_t x32 = 381U;
	static uint32_t t6 = 0U;

    t6 = ((x29<=(x30*x31))+x32);

    if (t6 != 382U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -19;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 29U;
	volatile int64_t t7 = INT64_MIN;

    t7 = ((x33<=(x34*x35))+x36);

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = 45329346U;
	static volatile uint8_t x38 = 28U;
	int16_t x39 = INT16_MIN;
	uint32_t t8 = 1043848282U;

    t8 = ((x37<=(x38*x39))+x40);

    if (t8 != 3907U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	static int8_t x42 = -1;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t9 = -14028;

    t9 = ((x41<=(x42*x43))+x44);

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x46 = 10;
	static uint64_t x47 = UINT64_MAX;
	static int16_t x48 = -1;
	volatile int32_t t10 = 973675934;

    t10 = ((x45<=(x46*x47))+x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = INT32_MIN;
	uint16_t x50 = 4041U;
	uint16_t x51 = 59U;
	static uint16_t x52 = 1U;
	int32_t t11 = -46553928;

    t11 = ((x49<=(x50*x51))+x52);

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x58 = 0U;
	int8_t x59 = 11;
	volatile int32_t t12 = -13;

    t12 = ((x57<=(x58*x59))+x60);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 5U;
	static int16_t x62 = INT16_MAX;
	int16_t x63 = 45;
	int32_t x64 = -1;
	volatile int32_t t13 = -20;

    t13 = ((x61<=(x62*x63))+x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x65 = 2636U;
	int32_t x66 = 398881225;
	int16_t x67 = 2;
	static int16_t x68 = -16241;
	volatile int32_t t14 = -129096769;

    t14 = ((x65<=(x66*x67))+x68);

    if (t14 != -16240) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = 49U;
	int64_t x70 = 0LL;
	volatile int32_t x71 = INT32_MAX;
	uint8_t x72 = 28U;

    t15 = ((x69<=(x70*x71))+x72);

    if (t15 != 28) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x73 = 94290952355536963LLU;
	int32_t x74 = 7752;
	int32_t x75 = -1;
	volatile int32_t x76 = 550;
	volatile int32_t t16 = 27649;

    t16 = ((x73<=(x74*x75))+x76);

    if (t16 != 551) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = UINT8_MAX;
	uint8_t x80 = 4U;
	static volatile int32_t t17 = -25409;

    t17 = ((x77<=(x78*x79))+x80);

    if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = INT64_MIN;
	int32_t x82 = 10343874;
	uint16_t x83 = 99U;
	int32_t x84 = -328359;
	volatile int32_t t18 = 0;

    t18 = ((x81<=(x82*x83))+x84);

    if (t18 != -328358) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = -1;
	int8_t x91 = 1;
	int64_t x92 = INT64_MAX;
	volatile int64_t t19 = INT64_MAX;

    t19 = ((x89<=(x90*x91))+x92);

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = -1;
	uint16_t x95 = UINT16_MAX;
	int32_t t20 = 601966654;

    t20 = ((x93<=(x94*x95))+x96);

    if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	static int32_t t21 = -196;

    t21 = ((x97<=(x98*x99))+x100);

    if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x102 = 91065LL;
	uint16_t x103 = 1U;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t22 = -5;

    t22 = ((x101<=(x102*x103))+x104);

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x109 = INT8_MAX;
	uint32_t x110 = UINT32_MAX;
	volatile uint16_t x111 = UINT16_MAX;
	volatile uint32_t x112 = UINT32_MAX;
	volatile uint32_t t23 = 2935470U;

    t23 = ((x109<=(x110*x111))+x112);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	static uint64_t x119 = 23361LLU;
	uint32_t x120 = 130781U;

    t24 = ((x117<=(x118*x119))+x120);

    if (t24 != 130782U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	volatile int32_t t25 = 382255246;

    t25 = ((x125<=(x126*x127))+x128);

    if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x130 = 28931U;
	volatile uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 136391U;
	uint32_t t26 = 894841U;

    t26 = ((x129<=(x130*x131))+x132);

    if (t26 != 136392U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x133 = INT32_MAX;
	int32_t x134 = -786288;
	static int16_t x136 = -1;

    t27 = ((x133<=(x134*x135))+x136);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x138 = UINT64_MAX;
	int32_t x139 = -3761;
	volatile int64_t x140 = -1LL;

    t28 = ((x137<=(x138*x139))+x140);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x145 = -4035394;
	int64_t x146 = -1LL;
	uint8_t x147 = 101U;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t29 = 819384U;

    t29 = ((x145<=(x146*x147))+x148);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = 168984552U;
	uint16_t x154 = 17132U;
	static volatile uint16_t x155 = 57U;
	uint16_t x156 = 205U;
	volatile int32_t t30 = -33;

    t30 = ((x153<=(x154*x155))+x156);

    if (t30 != 205) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x157 = 59U;
	volatile int8_t x158 = INT8_MAX;
	static uint32_t x159 = 3932957U;
	int16_t x160 = 2;
	volatile int32_t t31 = -1;

    t31 = ((x157<=(x158*x159))+x160);

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x161 = 7369931075051LLU;
	int8_t x163 = -1;
	uint16_t x164 = 991U;

    t32 = ((x161<=(x162*x163))+x164);

    if (t32 != 992) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x165 = 21812439U;
	static uint8_t x166 = 10U;
	uint64_t x167 = 3593346816LLU;
	int32_t t33 = -23012;

    t33 = ((x165<=(x166*x167))+x168);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x178 = -51312203LL;
	uint8_t x180 = 112U;

    t34 = ((x177<=(x178*x179))+x180);

    if (t34 != 113) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x181 = INT64_MAX;
	int8_t x182 = -1;
	volatile int16_t x183 = -33;
	static uint16_t x184 = UINT16_MAX;
	static int32_t t35 = -82829;

    t35 = ((x181<=(x182*x183))+x184);

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	int16_t x188 = INT16_MAX;
	volatile int32_t t36 = 725;

    t36 = ((x185<=(x186*x187))+x188);

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x189 = 503982091255LL;
	volatile uint16_t x190 = UINT16_MAX;
	int64_t x191 = 21891688LL;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t37 = 6514215523439745059LLU;

    t37 = ((x189<=(x190*x191))+x192);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x193 = 8U;
	volatile int8_t x194 = -1;
	volatile int16_t x195 = INT16_MIN;
	static volatile int64_t x196 = -1LL;
	int64_t t38 = -97383680248LL;

    t38 = ((x193<=(x194*x195))+x196);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x201 = -124;
	int32_t x202 = -1;
	int16_t x203 = -4;
	volatile int16_t x204 = INT16_MIN;
	int32_t t39 = 174457;

    t39 = ((x201<=(x202*x203))+x204);

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x230 = 102549LLU;
	uint16_t x232 = 7300U;
	volatile int32_t t40 = 4615388;

    t40 = ((x229<=(x230*x231))+x232);

    if (t40 != 7300) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x233 = INT16_MAX;
	uint32_t x234 = 14158260U;
	uint64_t x236 = 31733342822LLU;

    t41 = ((x233<=(x234*x235))+x236);

    if (t41 != 31733342823LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x237 = 1U;
	static int16_t x238 = -3113;
	int16_t x239 = -1620;
	static int8_t x240 = -1;

    t42 = ((x237<=(x238*x239))+x240);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x245 = -1;
	static int8_t x247 = -1;
	int64_t x248 = 1LL;
	static volatile int64_t t43 = 16861271044631LL;

    t43 = ((x245<=(x246*x247))+x248);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x249 = -1;
	static uint16_t x250 = UINT16_MAX;
	int32_t x251 = -10655;
	static volatile int32_t t44 = -3;

    t44 = ((x249<=(x250*x251))+x252);

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x253 = 2853268893879LL;
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = -1;
	int8_t x256 = -13;
	int32_t t45 = 1;

    t45 = ((x253<=(x254*x255))+x256);

    if (t45 != -13) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x258 = 109444302035884LLU;
	uint32_t x259 = 2122930U;
	int16_t x260 = INT16_MAX;
	static volatile int32_t t46 = -34827;

    t46 = ((x257<=(x258*x259))+x260);

    if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x261 = UINT32_MAX;
	volatile uint8_t x263 = 73U;

    t47 = ((x261<=(x262*x263))+x264);

    if (t47 != 2684894441176274LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 8U;
	int16_t x267 = 0;
	uint64_t x268 = 273655332869166LLU;
	static uint64_t t48 = 637819726904LLU;

    t48 = ((x265<=(x266*x267))+x268);

    if (t48 != 273655332869166LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x269 = -1;
	int32_t x270 = 564454972;
	int8_t x271 = -1;
	static uint64_t x272 = 88833LLU;
	volatile uint64_t t49 = 1055996LLU;

    t49 = ((x269<=(x270*x271))+x272);

    if (t49 != 88833LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x277 = -185;
	uint32_t x278 = 10U;
	uint32_t x279 = 339589U;
	static int32_t t50 = -13041407;

    t50 = ((x277<=(x278*x279))+x280);

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x281 = -1;
	int8_t x282 = 28;
	int8_t x283 = INT8_MAX;
	int8_t x284 = -1;
	volatile int32_t t51 = -16579479;

    t51 = ((x281<=(x282*x283))+x284);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x285 = INT32_MIN;
	int32_t x286 = -434095755;
	static int16_t x287 = -1;
	uint8_t x288 = UINT8_MAX;

    t52 = ((x285<=(x286*x287))+x288);

    if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x289 = -1;
	volatile int8_t x291 = INT8_MIN;
	int8_t x292 = -5;
	static int32_t t53 = -23;

    t53 = ((x289<=(x290*x291))+x292);

    if (t53 != -5) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x293 = INT8_MIN;
	volatile int8_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	uint64_t t54 = 12958646066317LLU;

    t54 = ((x293<=(x294*x295))+x296);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x310 = INT64_MAX;
	static volatile int64_t x312 = INT64_MIN;
	volatile int64_t t55 = -4LL;

    t55 = ((x309<=(x310*x311))+x312);

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	volatile int64_t t56 = 12835LL;

    t56 = ((x313<=(x314*x315))+x316);

    if (t56 != -8739998474386LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x321 = 132877359293520801LL;
	int64_t x322 = 2172377052166531LL;
	static uint8_t x323 = 5U;
	int64_t x324 = -1LL;

    t57 = ((x321<=(x322*x323))+x324);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x329 = INT64_MAX;
	uint8_t x330 = UINT8_MAX;
	volatile int32_t t58 = 10308255;

    t58 = ((x329<=(x330*x331))+x332);

    if (t58 != 876) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x333 = UINT32_MAX;
	int32_t x334 = -1;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

    t59 = ((x333<=(x334*x335))+x336);

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x341 = 13U;
	int16_t x342 = INT16_MAX;
	static uint64_t x344 = 10564304551834264LLU;
	static uint64_t t60 = 135267576315LLU;

    t60 = ((x341<=(x342*x343))+x344);

    if (t60 != 10564304551834265LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x349 = INT32_MIN;
	int64_t x350 = 162LL;
	int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t61 = INT32_MIN;

    t61 = ((x349<=(x350*x351))+x352);

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x353 = INT16_MIN;
	uint32_t x354 = UINT32_MAX;
	uint16_t x356 = 15U;
	volatile int32_t t62 = 1674276;

    t62 = ((x353<=(x354*x355))+x356);

    if (t62 != 16) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x361 = 127440526732042LLU;
	static int32_t x362 = INT32_MAX;
	static uint32_t x363 = 998647801U;
	uint8_t x364 = 25U;

    t63 = ((x361<=(x362*x363))+x364);

    if (t63 != 25) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x369 = 14;
	static volatile int32_t x370 = -6547752;
	int32_t x371 = -1;
	static int8_t x372 = INT8_MIN;
	int32_t t64 = 63519618;

    t64 = ((x369<=(x370*x371))+x372);

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x374 = INT8_MIN;
	static uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	int64_t t65 = INT64_MIN;

    t65 = ((x373<=(x374*x375))+x376);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x377 = INT16_MAX;
	int8_t x378 = 1;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;

    t66 = ((x377<=(x378*x379))+x380);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x385 = 295862312018212741LL;
	static int8_t x386 = -1;
	int16_t x387 = 176;
	volatile int32_t t67 = -493938931;

    t67 = ((x385<=(x386*x387))+x388);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x393 = INT64_MIN;
	static uint32_t x394 = 2977244U;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MAX;
	volatile int32_t t68 = 907;

    t68 = ((x393<=(x394*x395))+x396);

    if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x398 = -1758;
	uint32_t x399 = 364266U;
	int32_t t69 = -32484;

    t69 = ((x397<=(x398*x399))+x400);

    if (t69 != 105) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x403 = -1;
	int32_t x404 = -706670;

    t70 = ((x401<=(x402*x403))+x404);

    if (t70 != -706670) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x409 = 317049910LLU;
	uint16_t x412 = 30U;

    t71 = ((x409<=(x410*x411))+x412);

    if (t71 != 30) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x415 = -1;
	static volatile int16_t x416 = INT16_MAX;
	int32_t t72 = -14915;

    t72 = ((x413<=(x414*x415))+x416);

    if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x418 = INT16_MAX;
	int8_t x419 = INT8_MIN;
	volatile int64_t t73 = INT64_MIN;

    t73 = ((x417<=(x418*x419))+x420);

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x425 = -1;
	uint8_t x426 = 108U;
	static int8_t x427 = INT8_MAX;
	int32_t x428 = INT32_MIN;
	int32_t t74 = 471;

    t74 = ((x425<=(x426*x427))+x428);

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MAX;
	int64_t x432 = -2889220752LL;
	volatile int64_t t75 = -15158702095848LL;

    t75 = ((x429<=(x430*x431))+x432);

    if (t75 != -2889220752LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x433 = INT16_MIN;
	static int8_t x434 = -1;
	int32_t x435 = -1;
	static int16_t x436 = INT16_MIN;
	int32_t t76 = -2154339;

    t76 = ((x433<=(x434*x435))+x436);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x437 = 11U;
	uint64_t x438 = 93805LLU;
	int8_t x440 = INT8_MIN;
	volatile int32_t t77 = -25954427;

    t77 = ((x437<=(x438*x439))+x440);

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x441 = INT16_MAX;
	int8_t x443 = INT8_MIN;
	uint16_t x444 = 992U;
	static volatile int32_t t78 = 5813;

    t78 = ((x441<=(x442*x443))+x444);

    if (t78 != 993) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x445 = UINT8_MAX;
	int8_t x447 = -1;
	int32_t x448 = -1;
	volatile int32_t t79 = -202685;

    t79 = ((x445<=(x446*x447))+x448);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x453 = UINT64_MAX;
	static uint16_t x454 = 2469U;
	int32_t x455 = -1700;
	int64_t x456 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

    t80 = ((x453<=(x454*x455))+x456);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x461 = -1;
	int16_t x462 = INT16_MIN;
	uint16_t x463 = 60U;
	uint16_t x464 = UINT16_MAX;
	int32_t t81 = -112094;

    t81 = ((x461<=(x462*x463))+x464);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x466 = 5;
	uint32_t x467 = 25599U;
	int32_t x468 = 9330369;
	int32_t t82 = -20639695;

    t82 = ((x465<=(x466*x467))+x468);

    if (t82 != 9330370) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x469 = INT64_MAX;
	int32_t x470 = INT32_MAX;
	int16_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	int32_t t83 = 2;

    t83 = ((x469<=(x470*x471))+x472);

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x473 = -1;
	uint8_t x475 = 5U;
	uint16_t x476 = UINT16_MAX;
	int32_t t84 = 1083;

    t84 = ((x473<=(x474*x475))+x476);

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x477 = INT16_MIN;
	int8_t x478 = -12;
	int8_t x479 = -6;
	int8_t x480 = INT8_MIN;
	volatile int32_t t85 = 10;

    t85 = ((x477<=(x478*x479))+x480);

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x487 = 304554022U;
	static int64_t x488 = INT64_MIN;
	int64_t t86 = INT64_MIN;

    t86 = ((x485<=(x486*x487))+x488);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x489 = INT64_MAX;
	volatile int8_t x490 = 0;
	static uint8_t x491 = 10U;
	uint64_t x492 = UINT64_MAX;

    t87 = ((x489<=(x490*x491))+x492);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x501 = -30;
	static int8_t x502 = INT8_MAX;
	int16_t x503 = INT16_MAX;
	int64_t t88 = 221569140291LL;

    t88 = ((x501<=(x502*x503))+x504);

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x505 = 3784U;
	int8_t x506 = -1;
	int16_t x508 = -1;
	int32_t t89 = 31826140;

    t89 = ((x505<=(x506*x507))+x508);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x511 = 0U;
	int32_t t90 = -956133857;

    t90 = ((x509<=(x510*x511))+x512);

    if (t90 != 367) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x514 = -4;
	int8_t x515 = INT8_MAX;
	volatile int32_t t91 = -1341;

    t91 = ((x513<=(x514*x515))+x516);

    if (t91 != 26) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x517 = 165734323175865826LLU;
	uint32_t x518 = 15752U;
	volatile int16_t x519 = INT16_MIN;
	uint8_t x520 = UINT8_MAX;

    t92 = ((x517<=(x518*x519))+x520);

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x521 = 6U;
	volatile int16_t x523 = INT16_MIN;
	static int32_t x524 = INT32_MIN;
	int32_t t93 = 960182;

    t93 = ((x521<=(x522*x523))+x524);

    if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x525 = INT32_MIN;
	static int16_t x526 = 51;
	static int32_t x528 = INT32_MIN;

    t94 = ((x525<=(x526*x527))+x528);

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	int8_t x534 = 14;
	volatile int8_t x535 = INT8_MIN;
	int8_t x536 = -1;
	int32_t t95 = -15302;

    t95 = ((x533<=(x534*x535))+x536);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x537 = INT32_MIN;
	uint64_t x538 = UINT64_MAX;
	int32_t x539 = -19;
	static int32_t x540 = -914;
	int32_t t96 = 1;

    t96 = ((x537<=(x538*x539))+x540);

    if (t96 != -914) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x541 = UINT64_MAX;
	int64_t x542 = -1LL;
	int32_t x543 = -1;
	volatile int32_t t97 = INT32_MIN;

    t97 = ((x541<=(x542*x543))+x544);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x546 = UINT8_MAX;
	uint16_t x547 = 9U;
	int32_t x548 = INT32_MIN;
	volatile int32_t t98 = -3381372;

    t98 = ((x545<=(x546*x547))+x548);

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x549 = -1LL;
	int16_t x551 = 1;
	static uint64_t x552 = UINT64_MAX;

    t99 = ((x549<=(x550*x551))+x552);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x553 = 714332020325254032LL;
	uint32_t x554 = 31324U;
	uint32_t x555 = UINT32_MAX;
	static uint8_t x556 = UINT8_MAX;

    t100 = ((x553<=(x554*x555))+x556);

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x557 = INT64_MIN;
	volatile uint8_t x558 = UINT8_MAX;

    t101 = ((x557<=(x558*x559))+x560);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x561 = 4197;
	static uint32_t x562 = UINT32_MAX;
	uint16_t x563 = 15U;
	int32_t t102 = -225886967;

    t102 = ((x561<=(x562*x563))+x564);

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x565 = 1;
	static uint64_t x566 = 53355052787735LLU;
	int64_t t103 = -39088LL;

    t103 = ((x565<=(x566*x567))+x568);

    if (t103 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x569 = 445260409578LLU;
	static volatile uint32_t x570 = UINT32_MAX;
	int8_t x571 = INT8_MAX;
	static int16_t x572 = INT16_MIN;
	volatile int32_t t104 = -374;

    t104 = ((x569<=(x570*x571))+x572);

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x573 = INT16_MIN;
	int16_t x574 = 176;
	volatile int8_t x575 = -1;
	int32_t x576 = 0;
	volatile int32_t t105 = -14;

    t105 = ((x573<=(x574*x575))+x576);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x583 = INT8_MIN;
	static int8_t x584 = INT8_MIN;
	int32_t t106 = 310212308;

    t106 = ((x581<=(x582*x583))+x584);

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x593 = INT64_MAX;
	volatile int32_t x594 = 544;
	uint8_t x595 = UINT8_MAX;
	int8_t x596 = INT8_MAX;
	volatile int32_t t107 = 5288;

    t107 = ((x593<=(x594*x595))+x596);

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x597 = 377LLU;
	uint64_t x598 = UINT64_MAX;
	static uint64_t x599 = UINT64_MAX;
	int32_t x600 = -1;
	volatile int32_t t108 = -204861108;

    t108 = ((x597<=(x598*x599))+x600);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MAX;

    t109 = ((x613<=(x614*x615))+x616);

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x621 = UINT16_MAX;
	uint64_t x622 = 1394026LLU;
	int64_t x623 = 3341735043LL;
	int64_t x624 = -1LL;
	int64_t t110 = 535332586623LL;

    t110 = ((x621<=(x622*x623))+x624);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x625 = -11;
	volatile uint64_t x626 = 1025874155310674LLU;
	int64_t x627 = INT64_MIN;
	int32_t x628 = 2119;

    t111 = ((x625<=(x626*x627))+x628);

    if (t111 != 2119) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x629 = 27U;
	volatile uint32_t x631 = UINT32_MAX;
	volatile int32_t t112 = -23;

    t112 = ((x629<=(x630*x631))+x632);

    if (t112 != 65536) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x633 = -62176632;
	int16_t x634 = -3902;
	uint32_t x635 = UINT32_MAX;
	int8_t x636 = INT8_MIN;
	int32_t t113 = 407885566;

    t113 = ((x633<=(x634*x635))+x636);

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x639 = UINT64_MAX;
	int64_t x640 = -1LL;
	volatile int64_t t114 = 8138946925415LL;

    t114 = ((x637<=(x638*x639))+x640);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x641 = INT32_MAX;
	uint16_t x642 = UINT16_MAX;
	int16_t x643 = -2;
	volatile uint32_t x644 = 100556U;
	uint32_t t115 = 71923542U;

    t115 = ((x641<=(x642*x643))+x644);

    if (t115 != 100556U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x645 = INT64_MIN;
	int32_t x646 = -1;
	uint32_t x647 = 451918095U;
	uint16_t x648 = 7067U;
	volatile int32_t t116 = -15;

    t116 = ((x645<=(x646*x647))+x648);

    if (t116 != 7068) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x650 = -1;
	volatile int16_t x652 = 2544;

    t117 = ((x649<=(x650*x651))+x652);

    if (t117 != 2545) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x657 = UINT16_MAX;
	int8_t x659 = -1;
	int16_t x660 = 115;
	int32_t t118 = -4;

    t118 = ((x657<=(x658*x659))+x660);

    if (t118 != 115) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x663 = INT16_MIN;
	int32_t t119 = -126;

    t119 = ((x661<=(x662*x663))+x664);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x665 = INT8_MIN;
	uint64_t x666 = 437236492812262462LLU;
	uint32_t x667 = 3U;
	int8_t x668 = INT8_MIN;
	volatile int32_t t120 = -112051;

    t120 = ((x665<=(x666*x667))+x668);

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x669 = INT64_MIN;
	volatile uint32_t x670 = UINT32_MAX;
	int32_t x671 = INT32_MAX;
	volatile int64_t x672 = -1LL;
	volatile int64_t t121 = -1860897LL;

    t121 = ((x669<=(x670*x671))+x672);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x677 = -44483792340LL;
	volatile int8_t x678 = INT8_MIN;
	volatile int8_t x679 = -36;
	int8_t x680 = 30;

    t122 = ((x677<=(x678*x679))+x680);

    if (t122 != 31) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x681 = -62657LL;
	int16_t x682 = INT16_MIN;
	int8_t x683 = 28;
	uint64_t x684 = 47574007LLU;

    t123 = ((x681<=(x682*x683))+x684);

    if (t123 != 47574007LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x692 = INT64_MIN;

    t124 = ((x689<=(x690*x691))+x692);

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x693 = INT32_MIN;
	volatile int64_t x694 = -1LL;
	uint32_t x696 = 3827453U;
	volatile uint32_t t125 = 3029U;

    t125 = ((x693<=(x694*x695))+x696);

    if (t125 != 3827453U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x701 = -1;
	int32_t x702 = INT32_MIN;
	volatile uint64_t x703 = 113666630231LLU;
	volatile int32_t x704 = 7;
	volatile int32_t t126 = 1;

    t126 = ((x701<=(x702*x703))+x704);

    if (t126 != 7) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x705 = 8U;
	int16_t x706 = INT16_MIN;
	uint16_t x707 = UINT16_MAX;
	int32_t x708 = INT32_MIN;
	static volatile int32_t t127 = INT32_MIN;

    t127 = ((x705<=(x706*x707))+x708);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x721 = INT8_MAX;
	uint64_t x722 = UINT64_MAX;
	volatile int32_t t128 = 4;

    t128 = ((x721<=(x722*x723))+x724);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x725 = 13529218427140904LLU;
	uint32_t x726 = 176022184U;
	int64_t x728 = 7LL;
	int64_t t129 = 8LL;

    t129 = ((x725<=(x726*x727))+x728);

    if (t129 != 7LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x729 = INT8_MIN;
	volatile uint64_t x730 = 1284066243955344LLU;
	int32_t x731 = INT32_MIN;
	int8_t x732 = INT8_MIN;

    t130 = ((x729<=(x730*x731))+x732);

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x741 = UINT8_MAX;
	uint64_t x742 = UINT64_MAX;
	volatile uint16_t x743 = 5U;
	volatile int32_t x744 = 123;
	int32_t t131 = -464846787;

    t131 = ((x741<=(x742*x743))+x744);

    if (t131 != 124) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x745 = 206U;
	uint8_t x746 = UINT8_MAX;
	uint16_t x747 = 1U;
	volatile int64_t t132 = 1LL;

    t132 = ((x745<=(x746*x747))+x748);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x749 = 63;
	int8_t x750 = 1;
	uint64_t x751 = 2913659415LLU;
	volatile int8_t x752 = 52;
	static volatile int32_t t133 = -366073585;

    t133 = ((x749<=(x750*x751))+x752);

    if (t133 != 53) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x753 = 1791LLU;
	int8_t x754 = -1;
	int16_t x755 = INT16_MIN;
	int64_t x756 = 1LL;

    t134 = ((x753<=(x754*x755))+x756);

    if (t134 != 2LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x761 = INT16_MIN;
	volatile int32_t x762 = INT32_MIN;
	uint64_t x764 = 29666LLU;

    t135 = ((x761<=(x762*x763))+x764);

    if (t135 != 29667LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x765 = -44;
	uint64_t x766 = 27803773692LLU;
	uint8_t x767 = 1U;
	static volatile uint64_t t136 = 115495452LLU;

    t136 = ((x765<=(x766*x767))+x768);

    if (t136 != 27789161241LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x781 = 783U;
	int8_t x782 = 7;
	uint64_t x783 = 40LLU;
	int16_t x784 = -1;

    t137 = ((x781<=(x782*x783))+x784);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x785 = INT64_MAX;
	uint64_t x786 = 25LLU;
	int64_t x787 = INT64_MIN;
	static int16_t x788 = INT16_MIN;

    t138 = ((x785<=(x786*x787))+x788);

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x789 = 99837LLU;
	uint8_t x790 = UINT8_MAX;
	uint64_t x791 = 3903891186713043690LLU;
	int16_t x792 = 251;

    t139 = ((x789<=(x790*x791))+x792);

    if (t139 != 252) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x793 = INT64_MIN;
	static int64_t x794 = -1LL;
	uint8_t x795 = 14U;
	static int32_t t140 = -2;

    t140 = ((x793<=(x794*x795))+x796);

    if (t140 != 27346) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x798 = 14746512LLU;
	int16_t x799 = -1;
	int32_t x800 = -234875518;
	int32_t t141 = -4514953;

    t141 = ((x797<=(x798*x799))+x800);

    if (t141 != -234875518) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x801 = INT8_MIN;
	static int32_t x802 = 3366073;
	volatile uint32_t x803 = 51U;
	volatile int32_t t142 = -788389117;

    t142 = ((x801<=(x802*x803))+x804);

    if (t142 != 5) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x806 = -1;
	volatile uint8_t x808 = 2U;
	volatile int32_t t143 = 428;

    t143 = ((x805<=(x806*x807))+x808);

    if (t143 != 3) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x809 = UINT16_MAX;
	int32_t x810 = -1;
	int16_t x811 = 14;
	volatile uint32_t t144 = 47U;

    t144 = ((x809<=(x810*x811))+x812);

    if (t144 != 333U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x814 = 7;
	uint8_t x815 = UINT8_MAX;

    t145 = ((x813<=(x814*x815))+x816);

    if (t145 != 3863) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x817 = INT64_MIN;
	int16_t x818 = INT16_MIN;
	int16_t x819 = INT16_MIN;
	volatile int32_t t146 = -680552;

    t146 = ((x817<=(x818*x819))+x820);

    if (t146 != -6107) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x821 = -1270270;
	int64_t x822 = -802833021679272603LL;
	volatile uint32_t t147 = 137U;

    t147 = ((x821<=(x822*x823))+x824);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x826 = UINT64_MAX;
	int8_t x827 = -1;
	int8_t x828 = INT8_MIN;
	int32_t t148 = -2;

    t148 = ((x825<=(x826*x827))+x828);

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x829 = INT16_MAX;
	volatile int8_t x830 = INT8_MIN;
	volatile int8_t x831 = INT8_MIN;
	uint8_t x832 = 113U;
	int32_t t149 = 1030;

    t149 = ((x829<=(x830*x831))+x832);

    if (t149 != 113) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x838 = INT32_MAX;
	uint64_t x839 = UINT64_MAX;
	int16_t x840 = INT16_MAX;
	int32_t t150 = 13292904;

    t150 = ((x837<=(x838*x839))+x840);

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x853 = INT16_MAX;
	volatile int8_t x854 = INT8_MIN;
	int8_t x855 = -22;
	volatile int32_t t151 = -364;

    t151 = ((x853<=(x854*x855))+x856);

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x857 = 227101022LLU;
	int32_t x858 = -1;
	int64_t x859 = INT64_MAX;
	uint8_t x860 = 35U;
	int32_t t152 = -122;

    t152 = ((x857<=(x858*x859))+x860);

    if (t152 != 36) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x861 = 984698776388746LLU;
	static uint32_t x862 = 1U;
	int64_t x863 = 23LL;
	static int16_t x864 = -1;
	volatile int32_t t153 = -259572075;

    t153 = ((x861<=(x862*x863))+x864);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x865 = INT64_MIN;
	uint64_t x866 = 347633LLU;
	volatile uint32_t x867 = 46U;
	volatile int64_t x868 = INT64_MAX;
	volatile int64_t t154 = INT64_MAX;

    t154 = ((x865<=(x866*x867))+x868);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x870 = UINT32_MAX;
	static int32_t x871 = INT32_MIN;
	int16_t x872 = -213;
	volatile int32_t t155 = -3903;

    t155 = ((x869<=(x870*x871))+x872);

    if (t155 != -212) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x873 = 5360;
	uint8_t x874 = 108U;
	static int64_t x875 = -1LL;
	int8_t x876 = INT8_MAX;
	static int32_t t156 = -347608;

    t156 = ((x873<=(x874*x875))+x876);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x877 = -37;
	int64_t x879 = 133LL;
	int8_t x880 = -1;
	int32_t t157 = -1364541;

    t157 = ((x877<=(x878*x879))+x880);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x881 = INT64_MIN;
	volatile int16_t x882 = INT16_MAX;
	volatile int16_t x883 = 1;
	int8_t x884 = -1;

    t158 = ((x881<=(x882*x883))+x884);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x889 = UINT8_MAX;
	volatile int32_t x890 = -1;
	uint16_t x891 = 11U;
	int32_t x892 = 517165;
	static volatile int32_t t159 = 31;

    t159 = ((x889<=(x890*x891))+x892);

    if (t159 != 517165) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x898 = 33658706LLU;
	int64_t x899 = 24894763156LL;
	int32_t x900 = INT32_MAX;
	volatile int32_t t160 = INT32_MAX;

    t160 = ((x897<=(x898*x899))+x900);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x901 = 1;
	volatile int64_t x903 = 768251107478LL;
	uint32_t x904 = 2U;

    t161 = ((x901<=(x902*x903))+x904);

    if (t161 != 3U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x905 = UINT16_MAX;
	volatile int64_t x906 = -160011353LL;
	uint64_t x907 = 4905405LLU;
	int32_t x908 = INT32_MIN;
	int32_t t162 = 108138045;

    t162 = ((x905<=(x906*x907))+x908);

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x909 = INT64_MIN;
	uint8_t x910 = 0U;
	int32_t x911 = INT32_MIN;
	volatile int32_t t163 = -14;

    t163 = ((x909<=(x910*x911))+x912);

    if (t163 != 65536) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x913 = -8;
	uint16_t x915 = 86U;
	uint64_t x916 = 26563989978083LLU;
	static volatile uint64_t t164 = 26775545946075LLU;

    t164 = ((x913<=(x914*x915))+x916);

    if (t164 != 26563989978083LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x917 = INT8_MIN;
	int8_t x918 = INT8_MAX;
	int8_t x919 = -14;
	int32_t x920 = INT32_MIN;
	volatile int32_t t165 = INT32_MIN;

    t165 = ((x917<=(x918*x919))+x920);

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x925 = UINT16_MAX;
	int8_t x927 = 8;
	int32_t x928 = INT32_MIN;
	volatile int32_t t166 = INT32_MIN;

    t166 = ((x925<=(x926*x927))+x928);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x929 = INT32_MIN;
	static uint64_t x930 = UINT64_MAX;
	uint32_t x931 = UINT32_MAX;
	uint64_t x932 = UINT64_MAX;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = ((x929<=(x930*x931))+x932);

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x934 = INT32_MAX;

    t168 = ((x933<=(x934*x935))+x936);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x941 = 6U;
	volatile int16_t x943 = 704;
	volatile int32_t x944 = INT32_MIN;
	volatile int32_t t169 = INT32_MIN;

    t169 = ((x941<=(x942*x943))+x944);

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x945 = UINT64_MAX;
	int8_t x946 = INT8_MAX;
	uint16_t x947 = UINT16_MAX;
	int32_t x948 = INT32_MIN;
	static volatile int32_t t170 = INT32_MIN;

    t170 = ((x945<=(x946*x947))+x948);

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x949 = 20U;
	int32_t x950 = -7;
	int8_t x951 = INT8_MIN;
	uint16_t x952 = UINT16_MAX;
	static volatile int32_t t171 = -1;

    t171 = ((x949<=(x950*x951))+x952);

    if (t171 != 65536) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x953 = 13U;
	int32_t x955 = -1;
	volatile int16_t x956 = -1077;
	volatile int32_t t172 = -2665846;

    t172 = ((x953<=(x954*x955))+x956);

    if (t172 != -1077) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x957 = 9U;
	int64_t x958 = INT64_MAX;
	int32_t x959 = -1;
	static uint8_t x960 = 22U;
	static int32_t t173 = 145058417;

    t173 = ((x957<=(x958*x959))+x960);

    if (t173 != 22) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x961 = 3;
	uint32_t x962 = UINT32_MAX;
	int8_t x963 = -1;
	int64_t x964 = -1LL;
	volatile int64_t t174 = -17LL;

    t174 = ((x961<=(x962*x963))+x964);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x965 = -771875;
	uint8_t x966 = 20U;
	uint64_t x967 = 467185LLU;
	int16_t x968 = INT16_MIN;
	volatile int32_t t175 = -5089494;

    t175 = ((x965<=(x966*x967))+x968);

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x971 = 1;
	int64_t x972 = 1LL;
	volatile int64_t t176 = 3721799197LL;

    t176 = ((x969<=(x970*x971))+x972);

    if (t176 != 2LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x985 = INT16_MIN;
	uint32_t x986 = 6U;
	volatile int64_t x987 = -879578931729LL;
	int32_t x988 = -1;

    t177 = ((x985<=(x986*x987))+x988);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x989 = INT16_MIN;
	int16_t x990 = INT16_MAX;
	uint32_t x992 = 13929U;
	volatile uint32_t t178 = 304519U;

    t178 = ((x989<=(x990*x991))+x992);

    if (t178 != 13929U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x993 = 354734453LL;
	uint8_t x994 = 1U;
	uint16_t x995 = UINT16_MAX;
	uint32_t x996 = 2U;
	volatile uint32_t t179 = 125928890U;

    t179 = ((x993<=(x994*x995))+x996);

    if (t179 != 2U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x1001 = INT16_MAX;
	int8_t x1002 = -60;
	volatile int8_t x1003 = -1;
	uint32_t x1004 = UINT32_MAX;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = ((x1001<=(x1002*x1003))+x1004);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1009 = 0;
	int16_t x1012 = INT16_MIN;
	volatile int32_t t181 = -4;

    t181 = ((x1009<=(x1010*x1011))+x1012);

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1013 = 178750500U;
	int64_t x1014 = 4943LL;
	int64_t x1015 = -1LL;
	static int8_t x1016 = 33;
	volatile int32_t t182 = 53;

    t182 = ((x1013<=(x1014*x1015))+x1016);

    if (t182 != 33) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1022 = 226293U;
	int16_t x1023 = INT16_MAX;
	static uint32_t x1024 = 224395540U;
	uint32_t t183 = 123U;

    t183 = ((x1021<=(x1022*x1023))+x1024);

    if (t183 != 224395541U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1025 = -1LL;
	int8_t x1026 = -1;
	int32_t x1028 = -2738;
	int32_t t184 = 389;

    t184 = ((x1025<=(x1026*x1027))+x1028);

    if (t184 != -2738) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1029 = -2709;
	uint32_t x1030 = 6U;
	volatile int32_t x1031 = INT32_MAX;
	uint32_t x1032 = UINT32_MAX;
	volatile uint32_t t185 = 5U;

    t185 = ((x1029<=(x1030*x1031))+x1032);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1033 = INT64_MAX;
	int32_t x1034 = INT32_MAX;
	volatile uint8_t x1035 = 0U;
	int64_t x1036 = -54026LL;
	int64_t t186 = 238941898LL;

    t186 = ((x1033<=(x1034*x1035))+x1036);

    if (t186 != -54026LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1038 = UINT32_MAX;
	static uint64_t x1039 = UINT64_MAX;
	int16_t x1040 = INT16_MIN;
	volatile int32_t t187 = -291372398;

    t187 = ((x1037<=(x1038*x1039))+x1040);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1049 = 10434523099278LL;
	uint32_t x1050 = 38007U;
	int8_t x1051 = INT8_MAX;
	int32_t t188 = 1;

    t188 = ((x1049<=(x1050*x1051))+x1052);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1057 = -1;
	int32_t x1058 = INT32_MAX;
	int32_t x1059 = -1;
	uint32_t x1060 = 494116956U;
	volatile uint32_t t189 = 54U;

    t189 = ((x1057<=(x1058*x1059))+x1060);

    if (t189 != 494116956U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1061 = 0;
	static int16_t x1062 = -17;
	int32_t x1063 = -40718013;
	static int8_t x1064 = 12;
	volatile int32_t t190 = 8;

    t190 = ((x1061<=(x1062*x1063))+x1064);

    if (t190 != 13) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1065 = 24U;
	uint32_t x1066 = 3908596U;
	int8_t x1067 = -4;
	int8_t x1068 = INT8_MAX;
	int32_t t191 = 734;

    t191 = ((x1065<=(x1066*x1067))+x1068);

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1075 = -1LL;
	int16_t x1076 = INT16_MIN;
	int32_t t192 = 15208599;

    t192 = ((x1073<=(x1074*x1075))+x1076);

    if (t192 != -32767) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1077 = 3721124793422LL;
	uint64_t x1078 = UINT64_MAX;
	uint8_t x1079 = UINT8_MAX;
	int8_t x1080 = INT8_MIN;
	int32_t t193 = -825;

    t193 = ((x1077<=(x1078*x1079))+x1080);

    if (t193 != -127) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1081 = INT8_MIN;
	volatile uint8_t x1082 = UINT8_MAX;
	static uint64_t x1083 = 160039486378LLU;
	uint64_t x1084 = 528272889138LLU;

    t194 = ((x1081<=(x1082*x1083))+x1084);

    if (t194 != 528272889138LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1085 = INT8_MIN;
	uint32_t x1086 = UINT32_MAX;
	int32_t x1087 = 1823;
	uint32_t x1088 = UINT32_MAX;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = ((x1085<=(x1086*x1087))+x1088);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1090 = 216722U;
	volatile int32_t x1091 = -1;
	int8_t x1092 = -5;
	int32_t t196 = 5;

    t196 = ((x1089<=(x1090*x1091))+x1092);

    if (t196 != -4) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1093 = -1;
	int64_t x1094 = 546341836022181LL;
	int8_t x1095 = -3;
	int8_t x1096 = 0;
	volatile int32_t t197 = -31584;

    t197 = ((x1093<=(x1094*x1095))+x1096);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1101 = -1;
	uint64_t x1102 = 3040804740904769LLU;
	uint8_t x1103 = 5U;
	volatile int32_t x1104 = -1;

    t198 = ((x1101<=(x1102*x1103))+x1104);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1117 = 20295U;
	uint8_t x1118 = 1U;
	int8_t x1119 = -1;
	static int8_t x1120 = INT8_MAX;
	volatile int32_t t199 = -8;

    t199 = ((x1117<=(x1118*x1119))+x1120);

    if (t199 != 127) { NG(); } else { ; }
	
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

