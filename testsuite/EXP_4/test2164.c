
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

volatile uint8_t x1 = UINT8_MAX;
static uint32_t x8 = 749U;
volatile int8_t x9 = INT8_MIN;
volatile int32_t x12 = INT32_MIN;
int16_t x13 = -1;
volatile int16_t x17 = 997;
volatile int8_t x19 = INT8_MIN;
uint16_t x22 = 24872U;
int32_t t5 = 0;
uint8_t x37 = 5U;
static volatile uint8_t x42 = 127U;
int8_t x47 = -36;
static int32_t t11 = -888196964;
int32_t x50 = INT32_MAX;
volatile int16_t x53 = 12;
static int32_t t13 = -28317;
int8_t x60 = INT8_MAX;
int64_t x62 = -1LL;
volatile int16_t x70 = -3136;
uint8_t x72 = 1U;
int16_t x74 = -1;
int16_t x78 = INT16_MIN;
volatile int32_t x79 = INT32_MAX;
int32_t x80 = -448964;
int32_t t18 = 8;
int64_t x97 = INT64_MIN;
int16_t x100 = 109;
int32_t t24 = -544;
int64_t x111 = -1LL;
int8_t x120 = INT8_MIN;
int32_t x121 = INT32_MIN;
static int32_t x125 = INT32_MAX;
int32_t t29 = 28630;
volatile int64_t x138 = INT64_MIN;
static volatile uint32_t x140 = 6U;
static uint32_t x147 = 515U;
volatile int32_t x150 = INT32_MAX;
int8_t x155 = INT8_MIN;
int8_t x164 = INT8_MIN;
int16_t x169 = INT16_MIN;
int8_t x171 = INT8_MAX;
int8_t x172 = INT8_MIN;
static uint64_t x176 = 49LLU;
int64_t x182 = INT64_MIN;
int8_t x184 = -1;
int32_t t42 = -689661;
static int8_t x193 = INT8_MIN;
int8_t x196 = 1;
int8_t x201 = -1;
uint64_t x202 = UINT64_MAX;
static int8_t x208 = -1;
volatile int32_t t46 = 566666820;
static int32_t t47 = 2599562;
int32_t x221 = INT32_MIN;
volatile uint64_t x223 = 31762105599612LLU;
uint32_t x228 = UINT32_MAX;
static volatile uint16_t x229 = UINT16_MAX;
uint8_t x231 = 52U;
int8_t x233 = INT8_MIN;
volatile int8_t x236 = INT8_MAX;
uint8_t x240 = UINT8_MAX;
int8_t x246 = 2;
int8_t x252 = INT8_MAX;
volatile uint8_t x253 = 5U;
int8_t x263 = -1;
volatile int32_t x264 = 889025;
volatile int32_t t58 = 178;
volatile int16_t x271 = 1137;
int32_t t60 = -19774997;
uint64_t x279 = 32064LLU;
volatile int32_t t61 = -3817291;
int64_t x284 = INT64_MAX;
uint8_t x288 = 2U;
volatile int32_t t63 = 3621;
uint16_t x292 = UINT16_MAX;
int64_t x297 = INT64_MIN;
uint8_t x300 = UINT8_MAX;
volatile int32_t x312 = -152078774;
static int8_t x322 = -2;
int64_t x328 = 114050627579LL;
volatile uint8_t x329 = 2U;
int8_t x331 = 0;
volatile int32_t t71 = 158;
int64_t x339 = INT64_MIN;
volatile int32_t t75 = 80342;
int8_t x352 = -1;
static int64_t x355 = -209496740622680LL;
static uint64_t x356 = 10833410691LLU;
volatile int32_t t77 = -8201536;
int64_t x360 = -1LL;
volatile int32_t t78 = -14197;
static volatile int32_t t79 = 18660126;
int32_t t80 = -1709;
int64_t x372 = INT64_MIN;
volatile int64_t x380 = -5210046982LL;
int8_t x385 = -1;
int32_t x388 = -1;
volatile int32_t t86 = 5108248;
int64_t x402 = -1LL;
int8_t x403 = 52;
volatile int32_t t88 = 1853;
int32_t t90 = 0;
uint32_t x414 = 444U;
int16_t x415 = INT16_MIN;
volatile uint16_t x422 = UINT16_MAX;
int8_t x425 = 13;
static int32_t t94 = -2889008;
volatile uint32_t x430 = 269996U;
int32_t x431 = INT32_MIN;
int32_t x437 = -175;
static uint16_t x438 = UINT16_MAX;
volatile uint8_t x442 = UINT8_MAX;
volatile uint64_t x443 = 354117193LLU;
int16_t x454 = INT16_MIN;
int64_t x455 = INT64_MAX;
int32_t x469 = INT32_MIN;
static int32_t t104 = 2492;
uint64_t x480 = 301079995873LLU;
volatile int32_t t107 = -63567862;
static int16_t x490 = INT16_MAX;
int32_t t109 = 8853832;
uint8_t x498 = 10U;
static int8_t x499 = -3;
static volatile uint8_t x504 = UINT8_MAX;
int8_t x506 = INT8_MAX;
int64_t x509 = INT64_MIN;
static int16_t x515 = 976;
static int64_t x517 = -685035179LL;
uint8_t x518 = 91U;
uint32_t x521 = 67029U;
uint64_t x543 = 12LLU;
uint64_t x545 = UINT64_MAX;
uint16_t x547 = UINT16_MAX;
volatile uint16_t x548 = 14U;
volatile int32_t t123 = 669058840;
uint8_t x554 = 11U;
volatile int32_t t125 = -2;
static int16_t x561 = INT16_MIN;
uint32_t x563 = 46647U;
volatile int64_t x570 = INT64_MAX;
static volatile int32_t t130 = 27789;
uint16_t x585 = UINT16_MAX;
int32_t t131 = -12265;
uint8_t x591 = UINT8_MAX;
int32_t x594 = INT32_MIN;
volatile uint32_t x600 = 64958U;
uint64_t x605 = UINT64_MAX;
static uint32_t x620 = 527U;
int16_t x621 = INT16_MAX;
static int16_t x624 = -1;
int8_t x630 = -1;
uint16_t x632 = 272U;
volatile int32_t t143 = -2701;
int32_t x640 = -766;
int16_t x641 = INT16_MAX;
int8_t x642 = 0;
int16_t x643 = -1;
uint8_t x645 = 123U;
int64_t x647 = -1LL;
int32_t t146 = -79587;
int16_t x651 = 6;
static uint32_t x652 = 4407U;
volatile int16_t x653 = INT16_MIN;
uint64_t x669 = UINT64_MAX;
static int8_t x675 = 15;
int64_t x676 = -1LL;
int32_t t156 = -13759;
volatile int8_t x695 = 4;
int32_t x697 = INT32_MIN;
volatile int8_t x699 = INT8_MIN;
int32_t x700 = -493190407;
int16_t x708 = INT16_MIN;
volatile int32_t t161 = -65059147;
static int8_t x713 = INT8_MIN;
uint16_t x717 = 4694U;
volatile int32_t x719 = 42;
volatile int32_t t164 = -87554480;
int8_t x735 = INT8_MAX;
volatile uint64_t x741 = 7858310992103LLU;
int16_t x743 = INT16_MAX;
uint8_t x748 = 8U;
static int16_t x758 = INT16_MIN;
static int32_t x765 = INT32_MIN;
static int32_t x766 = INT32_MAX;
int16_t x769 = 18;
uint8_t x775 = 0U;
uint16_t x776 = 12303U;
volatile int16_t x778 = -10407;
volatile int32_t t179 = 177830;
uint64_t x787 = 246903137262LLU;
int32_t x794 = -207975;
volatile uint8_t x805 = UINT8_MAX;
volatile int16_t x808 = 1;
int32_t t185 = 2;
int64_t x829 = -1LL;
volatile int16_t x830 = INT16_MAX;
static int8_t x835 = 0;
volatile int32_t x838 = 65;
int16_t x840 = -1;
uint32_t x847 = 48935351U;
uint64_t x856 = UINT64_MAX;
uint32_t x861 = 1183202U;
static int8_t x865 = 1;
int16_t x866 = 155;
static volatile int64_t x868 = -490386LL;


void f0(void) {
    	uint8_t x2 = 10U;
	int16_t x3 = 311;
	int64_t x4 = -1LL;
	int32_t t0 = -82;

    t0 = (x1==(x2+(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	static int64_t x6 = -316817985264LL;
	int32_t x7 = 172094;
	static int32_t t1 = -29;

    t1 = (x5==(x6+(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 7030U;
	static int32_t x11 = INT32_MAX;
	volatile int32_t t2 = -1139;

    t2 = (x9==(x10+(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x14 = 26U;
	int16_t x15 = INT16_MIN;
	int32_t x16 = 1;
	static int32_t t3 = 3090523;

    t3 = (x13==(x14+(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = 3U;
	static volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 503;

    t4 = (x17==(x18+(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 129613;
	static uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MIN;

    t5 = (x21==(x22+(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 34053503671535304LLU;
	int16_t x26 = -1;
	volatile int32_t x27 = -104997010;
	int64_t x28 = -443321179886LL;
	int32_t t6 = -8369226;

    t6 = (x25==(x26+(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -2LL;
	int64_t x30 = INT64_MIN;
	static int32_t x31 = 660;
	static uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = -82540;

    t7 = (x29==(x30+(x31&x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = 3121LL;
	static uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 361888806LLU;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = 10358067;

    t8 = (x33==(x34+(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x38 = -1;
	int8_t x39 = -1;
	volatile uint64_t x40 = 10478LLU;
	int32_t t9 = 0;

    t9 = (x37==(x38+(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = 1LL;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MAX;
	int32_t t10 = -1342;

    t10 = (x41==(x42+(x43&x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = UINT8_MAX;
	uint64_t x46 = 2030347LLU;
	uint64_t x48 = 147512875202551LLU;

    t11 = (x45==(x46+(x47&x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int64_t x51 = -5LL;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -8940510;

    t12 = (x49==(x50+(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = UINT32_MAX;
	int16_t x55 = -15;
	int64_t x56 = INT64_MIN;

    t13 = (x53==(x54+(x55&x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 52U;
	int16_t x58 = -409;
	int32_t x59 = INT32_MAX;
	int32_t t14 = 5140267;

    t14 = (x57==(x58+(x59&x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = 2499LLU;
	int16_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 24;

    t15 = (x61==(x62+(x63&x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x69 = 3863U;
	volatile uint16_t x71 = 23332U;
	volatile int32_t t16 = -19257;

    t16 = (x69==(x70+(x71&x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = -7;
	uint8_t x75 = 3U;
	int16_t x76 = -22;
	int32_t t17 = -811;

    t17 = (x73==(x74+(x75&x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = 86;

    t18 = (x77==(x78+(x79&x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	int32_t x82 = -10035;
	volatile uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t19 = -231;

    t19 = (x81==(x82+(x83&x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	volatile int16_t x87 = INT16_MAX;
	volatile int8_t x88 = INT8_MAX;
	static int32_t t20 = -538;

    t20 = (x85==(x86+(x87&x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -1LL;
	int16_t x94 = INT16_MAX;
	int16_t x95 = -202;
	uint16_t x96 = UINT16_MAX;
	int32_t t21 = -489699;

    t21 = (x93==(x94+(x95&x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x98 = -9LL;
	uint32_t x99 = 720U;
	volatile int32_t t22 = 9;

    t22 = (x97==(x98+(x99&x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	uint64_t x102 = 3178LLU;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t23 = -120;

    t23 = (x101==(x102+(x103&x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MAX;
	int8_t x108 = -24;

    t24 = (x105==(x106+(x107&x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = 271666;
	uint16_t x110 = 0U;
	uint16_t x112 = UINT16_MAX;
	int32_t t25 = 899772448;

    t25 = (x109==(x110+(x111&x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 1451U;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = -1LL;
	uint64_t x116 = UINT64_MAX;
	static volatile int32_t t26 = 146670;

    t26 = (x113==(x114+(x115&x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = INT16_MAX;
	static int8_t x118 = -1;
	uint16_t x119 = 201U;
	int32_t t27 = -5;

    t27 = (x117==(x118+(x119&x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x122 = 853319690U;
	int8_t x123 = INT8_MIN;
	static volatile int16_t x124 = -5;
	volatile int32_t t28 = 607924;

    t28 = (x121==(x122+(x123&x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x126 = 0;
	int64_t x127 = INT64_MAX;
	static int8_t x128 = -32;

    t29 = (x125==(x126+(x127&x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = 0;
	uint32_t x134 = UINT32_MAX;
	volatile uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t30 = 410329;

    t30 = (x133==(x134+(x135&x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	static int32_t x139 = -1;
	volatile int32_t t31 = 2;

    t31 = (x137==(x138+(x139&x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = UINT16_MAX;
	int32_t x142 = INT32_MAX;
	uint32_t x143 = UINT32_MAX;
	int64_t x144 = INT64_MIN;
	volatile int32_t t32 = 839;

    t32 = (x141==(x142+(x143&x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x146 = -1;
	int32_t x148 = -18662591;
	volatile int32_t t33 = 1197;

    t33 = (x145==(x146+(x147&x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = 72063LL;
	int8_t x151 = INT8_MIN;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t34 = 7073;

    t34 = (x149==(x150+(x151&x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;
	static int16_t x154 = INT16_MIN;
	static volatile int16_t x156 = -1;
	int32_t t35 = 883125766;

    t35 = (x153==(x154+(x155&x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	uint16_t x159 = 9777U;
	uint64_t x160 = UINT64_MAX;
	int32_t t36 = -46;

    t36 = (x157==(x158+(x159&x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = -51;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = INT32_MIN;
	int32_t t37 = -2;

    t37 = (x161==(x162+(x163&x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x170 = -1;
	int32_t t38 = 0;

    t38 = (x169==(x170+(x171&x172)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = INT64_MIN;
	uint8_t x175 = 3U;
	static volatile int32_t t39 = 1169;

    t39 = (x173==(x174+(x175&x176)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t40 = -18726638;

    t40 = (x177==(x178+(x179&x180)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x181 = 2U;
	int8_t x183 = 4;
	int32_t t41 = -1;

    t41 = (x181==(x182+(x183&x184)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x185 = -1;
	volatile int32_t x186 = INT32_MAX;
	volatile int64_t x187 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;

    t42 = (x185==(x186+(x187&x188)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 117229LLU;
	volatile int32_t x192 = -1;
	volatile int32_t t43 = 1;

    t43 = (x189==(x190+(x191&x192)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x194 = UINT16_MAX;
	int16_t x195 = -1;
	static int32_t t44 = -1;

    t44 = (x193==(x194+(x195&x196)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x203 = INT32_MAX;
	int64_t x204 = INT64_MAX;
	static int32_t t45 = 14570;

    t45 = (x201==(x202+(x203&x204)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x205 = INT8_MIN;
	uint8_t x206 = 4U;
	static int64_t x207 = -1LL;

    t46 = (x205==(x206+(x207&x208)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x217 = -1LL;
	int32_t x218 = -326;
	volatile int32_t x219 = 78953;
	int8_t x220 = -1;

    t47 = (x217==(x218+(x219&x220)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x222 = -965;
	volatile int32_t x224 = -369;
	int32_t t48 = 2201667;

    t48 = (x221==(x222+(x223&x224)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = -62;
	static uint8_t x226 = 5U;
	int64_t x227 = -61800355217LL;
	volatile int32_t t49 = -15255988;

    t49 = (x225==(x226+(x227&x228)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x230 = -9510793640LL;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t50 = 118415;

    t50 = (x229==(x230+(x231&x232)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x234 = -540;
	int64_t x235 = -1LL;
	int32_t t51 = 1;

    t51 = (x233==(x234+(x235&x236)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x237 = UINT8_MAX;
	static int16_t x238 = -1;
	volatile int64_t x239 = -1LL;
	static volatile int32_t t52 = -1377;

    t52 = (x237==(x238+(x239&x240)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = INT16_MAX;
	static int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;
	static int8_t x244 = INT8_MIN;
	int32_t t53 = 13;

    t53 = (x241==(x242+(x243&x244)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x245 = -1;
	int8_t x247 = -24;
	volatile int32_t x248 = 0;
	static int32_t t54 = 18;

    t54 = (x245==(x246+(x247&x248)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x249 = INT8_MIN;
	volatile uint8_t x250 = 1U;
	volatile uint32_t x251 = 1U;
	volatile int32_t t55 = -9071615;

    t55 = (x249==(x250+(x251&x252)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x254 = 1556U;
	volatile int32_t x255 = -1;
	int16_t x256 = -1;
	int32_t t56 = 304247;

    t56 = (x253==(x254+(x255&x256)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x261 = INT64_MIN;
	int16_t x262 = 121;
	int32_t t57 = 4920703;

    t57 = (x261==(x262+(x263&x264)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x265 = 983208U;
	int64_t x266 = 3139547015423357LL;
	int64_t x267 = -432061LL;
	int16_t x268 = -1;

    t58 = (x265==(x266+(x267&x268)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x269 = -1;
	int8_t x270 = INT8_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t59 = -509988737;

    t59 = (x269==(x270+(x271&x272)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x273 = INT16_MAX;
	uint64_t x274 = 114LLU;
	volatile int32_t x275 = INT32_MIN;
	static volatile int16_t x276 = INT16_MIN;

    t60 = (x273==(x274+(x275&x276)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x277 = 14775U;
	static int64_t x278 = -150LL;
	int64_t x280 = 634340946276LL;

    t61 = (x277==(x278+(x279&x280)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x281 = 4LLU;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = 21605058498311LL;
	volatile int32_t t62 = -1;

    t62 = (x281==(x282+(x283&x284)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = INT16_MAX;
	static int16_t x286 = INT16_MAX;
	int64_t x287 = -1LL;

    t63 = (x285==(x286+(x287&x288)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x289 = 37U;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	volatile int32_t t64 = -28;

    t64 = (x289==(x290+(x291&x292)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x293 = -1;
	static volatile int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t65 = 206931;

    t65 = (x293==(x294+(x295&x296)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x298 = 55;
	volatile int8_t x299 = INT8_MIN;
	int32_t t66 = -2901988;

    t66 = (x297==(x298+(x299&x300)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x309 = 10711U;
	static volatile uint32_t x310 = 12165295U;
	static int64_t x311 = -1LL;
	volatile int32_t t67 = 1;

    t67 = (x309==(x310+(x311&x312)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x313 = 13U;
	static volatile int64_t x314 = -5LL;
	static uint16_t x315 = 3870U;
	volatile uint8_t x316 = 113U;
	volatile int32_t t68 = 4564855;

    t68 = (x313==(x314+(x315&x316)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = -1;
	int16_t x323 = 2;
	volatile int16_t x324 = 1;
	volatile int32_t t69 = -2738384;

    t69 = (x321==(x322+(x323&x324)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x325 = INT32_MIN;
	static int32_t x326 = INT32_MAX;
	int16_t x327 = -1;
	static int32_t t70 = -16277156;

    t70 = (x325==(x326+(x327&x328)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x330 = 12239LL;
	int16_t x332 = INT16_MIN;

    t71 = (x329==(x330+(x331&x332)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x333 = -50;
	int64_t x334 = INT64_MIN;
	uint32_t x335 = 403359U;
	volatile int16_t x336 = -1;
	int32_t t72 = 14274408;

    t72 = (x333==(x334+(x335&x336)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x337 = INT64_MIN;
	uint32_t x338 = UINT32_MAX;
	volatile int8_t x340 = -1;
	int32_t t73 = 45;

    t73 = (x337==(x338+(x339&x340)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x341 = -1;
	volatile uint16_t x342 = 8U;
	int64_t x343 = 18276116LL;
	volatile int64_t x344 = INT64_MIN;
	static int32_t t74 = -417;

    t74 = (x341==(x342+(x343&x344)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x345 = UINT8_MAX;
	volatile int16_t x346 = INT16_MIN;
	static uint32_t x347 = 435143612U;
	uint8_t x348 = 4U;

    t75 = (x345==(x346+(x347&x348)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = INT8_MAX;
	int32_t x350 = -28640935;
	volatile int16_t x351 = -1;
	int32_t t76 = 270;

    t76 = (x349==(x350+(x351&x352)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x353 = INT8_MAX;
	volatile uint16_t x354 = 0U;

    t77 = (x353==(x354+(x355&x356)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = -1LL;
	int32_t x358 = -25;
	static uint64_t x359 = UINT64_MAX;

    t78 = (x357==(x358+(x359&x360)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x361 = INT32_MIN;
	static volatile uint16_t x362 = 19410U;
	uint64_t x363 = 14668611LLU;
	static uint16_t x364 = 67U;

    t79 = (x361==(x362+(x363&x364)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x365 = INT16_MIN;
	int16_t x366 = 2979;
	volatile uint16_t x367 = 1224U;
	volatile int8_t x368 = INT8_MAX;

    t80 = (x365==(x366+(x367&x368)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x369 = INT16_MIN;
	volatile uint32_t x370 = 3418U;
	uint64_t x371 = 0LLU;
	static int32_t t81 = -121661517;

    t81 = (x369==(x370+(x371&x372)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x373 = UINT64_MAX;
	int64_t x374 = -15207773LL;
	uint8_t x375 = 78U;
	int32_t x376 = INT32_MIN;
	static int32_t t82 = 120062547;

    t82 = (x373==(x374+(x375&x376)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x377 = 1815284585523696LL;
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 0U;
	int32_t t83 = 2;

    t83 = (x377==(x378+(x379&x380)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x386 = UINT8_MAX;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t t84 = 24431659;

    t84 = (x385==(x386+(x387&x388)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x389 = 1317LLU;
	uint16_t x390 = 1071U;
	static int8_t x391 = INT8_MAX;
	uint8_t x392 = 7U;
	volatile int32_t t85 = 470696966;

    t85 = (x389==(x390+(x391&x392)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x393 = INT8_MAX;
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = INT8_MAX;
	static uint8_t x396 = 1U;

    t86 = (x393==(x394+(x395&x396)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x397 = -1;
	int64_t x398 = 0LL;
	uint16_t x399 = 24U;
	uint64_t x400 = 0LLU;
	int32_t t87 = -4085;

    t87 = (x397==(x398+(x399&x400)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x401 = UINT8_MAX;
	volatile uint32_t x404 = 99U;

    t88 = (x401==(x402+(x403&x404)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x405 = -1LL;
	static uint8_t x406 = 0U;
	int64_t x407 = -5919922LL;
	volatile int8_t x408 = INT8_MIN;
	volatile int32_t t89 = 183032;

    t89 = (x405==(x406+(x407&x408)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x409 = 211U;
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	static int64_t x412 = 57773585LL;

    t90 = (x409==(x410+(x411&x412)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x413 = -48;
	uint8_t x416 = 5U;
	static int32_t t91 = -261812;

    t91 = (x413==(x414+(x415&x416)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x417 = -1;
	uint64_t x418 = 21736LLU;
	uint8_t x419 = UINT8_MAX;
	static volatile int8_t x420 = -1;
	int32_t t92 = 102153764;

    t92 = (x417==(x418+(x419&x420)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = 78;
	uint64_t x423 = UINT64_MAX;
	static uint32_t x424 = 55403U;
	volatile int32_t t93 = 34;

    t93 = (x421==(x422+(x423&x424)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x426 = UINT8_MAX;
	int64_t x427 = INT64_MIN;
	volatile int64_t x428 = -90875647LL;

    t94 = (x425==(x426+(x427&x428)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x429 = 9;
	int64_t x432 = INT64_MAX;
	static int32_t t95 = -48252458;

    t95 = (x429==(x430+(x431&x432)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = 1406U;
	int64_t x434 = 5315738716106447LL;
	static uint16_t x435 = 12U;
	static uint32_t x436 = 1327167554U;
	int32_t t96 = -110;

    t96 = (x433==(x434+(x435&x436)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x439 = INT8_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t97 = 8;

    t97 = (x437==(x438+(x439&x440)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x441 = INT16_MIN;
	int32_t x444 = INT32_MIN;
	volatile int32_t t98 = -725492269;

    t98 = (x441==(x442+(x443&x444)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x445 = 5U;
	int64_t x446 = INT64_MIN;
	static int8_t x447 = 56;
	uint16_t x448 = 187U;
	static int32_t t99 = 876535832;

    t99 = (x445==(x446+(x447&x448)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = INT8_MIN;
	int32_t x450 = 2;
	int32_t x451 = INT32_MAX;
	static volatile int64_t x452 = 52047LL;
	volatile int32_t t100 = -608;

    t100 = (x449==(x450+(x451&x452)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x453 = INT64_MIN;
	int32_t x456 = INT32_MAX;
	volatile int32_t t101 = -88762;

    t101 = (x453==(x454+(x455&x456)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x461 = 6738;
	volatile int32_t x462 = -45;
	int32_t x463 = -1;
	volatile int8_t x464 = -1;
	volatile int32_t t102 = -7629;

    t102 = (x461==(x462+(x463&x464)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x465 = 4LLU;
	uint8_t x466 = UINT8_MAX;
	volatile int64_t x467 = 1129LL;
	int64_t x468 = INT64_MIN;
	static int32_t t103 = 0;

    t103 = (x465==(x466+(x467&x468)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x470 = INT32_MAX;
	int64_t x471 = -2049113239973315LL;
	uint16_t x472 = 520U;

    t104 = (x469==(x470+(x471&x472)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x473 = 3802282U;
	volatile uint64_t x474 = 72LLU;
	static uint16_t x475 = 267U;
	static int16_t x476 = INT16_MIN;
	int32_t t105 = -3;

    t105 = (x473==(x474+(x475&x476)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x477 = 7U;
	volatile int64_t x478 = INT64_MAX;
	volatile int64_t x479 = INT64_MAX;
	volatile int32_t t106 = -4497257;

    t106 = (x477==(x478+(x479&x480)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x481 = INT32_MIN;
	int64_t x482 = -7LL;
	static volatile int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MIN;

    t107 = (x481==(x482+(x483&x484)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x485 = -1LL;
	int16_t x486 = INT16_MAX;
	int16_t x487 = INT16_MAX;
	int32_t x488 = INT32_MIN;
	static volatile int32_t t108 = 3;

    t108 = (x485==(x486+(x487&x488)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x489 = 1975U;
	int8_t x491 = INT8_MAX;
	static int16_t x492 = INT16_MIN;

    t109 = (x489==(x490+(x491&x492)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x493 = -120446087493LL;
	static int8_t x494 = -1;
	volatile int32_t x495 = -1;
	int8_t x496 = -7;
	static volatile int32_t t110 = 1059487;

    t110 = (x493==(x494+(x495&x496)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x500 = 0;
	int32_t t111 = 0;

    t111 = (x497==(x498+(x499&x500)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x501 = -1;
	uint8_t x502 = 2U;
	static uint64_t x503 = UINT64_MAX;
	int32_t t112 = -1;

    t112 = (x501==(x502+(x503&x504)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x505 = 1157U;
	int8_t x507 = INT8_MIN;
	int64_t x508 = 23449594763133LL;
	static volatile int32_t t113 = 1;

    t113 = (x505==(x506+(x507&x508)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x510 = 2;
	static int64_t x511 = -1LL;
	static volatile uint64_t x512 = 1566899LLU;
	static volatile int32_t t114 = 378;

    t114 = (x509==(x510+(x511&x512)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MIN;
	int8_t x516 = 1;
	volatile int32_t t115 = -248679;

    t115 = (x513==(x514+(x515&x516)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x519 = 8147U;
	int64_t x520 = INT64_MAX;
	volatile int32_t t116 = 9;

    t116 = (x517==(x518+(x519&x520)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x522 = INT32_MAX;
	int32_t x523 = -10263503;
	int64_t x524 = -1LL;
	static int32_t t117 = -186499136;

    t117 = (x521==(x522+(x523&x524)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x525 = -17390603801LL;
	int32_t x526 = -199664;
	volatile uint8_t x527 = 1U;
	int16_t x528 = 11;
	volatile int32_t t118 = 302803;

    t118 = (x525==(x526+(x527&x528)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x529 = INT8_MIN;
	uint16_t x530 = 8108U;
	int16_t x531 = INT16_MIN;
	volatile uint32_t x532 = 695U;
	volatile int32_t t119 = 2526440;

    t119 = (x529==(x530+(x531&x532)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = INT8_MIN;
	volatile uint64_t x534 = UINT64_MAX;
	volatile int16_t x535 = INT16_MAX;
	uint32_t x536 = 9900U;
	int32_t t120 = 50487;

    t120 = (x533==(x534+(x535&x536)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x541 = 27;
	int8_t x542 = INT8_MIN;
	int32_t x544 = -10212787;
	static volatile int32_t t121 = 251790;

    t121 = (x541==(x542+(x543&x544)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x546 = UINT16_MAX;
	int32_t t122 = -122228;

    t122 = (x545==(x546+(x547&x548)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x549 = -1;
	uint32_t x550 = 9U;
	uint8_t x551 = 29U;
	volatile int64_t x552 = INT64_MAX;

    t123 = (x549==(x550+(x551&x552)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x553 = INT16_MIN;
	int8_t x555 = INT8_MIN;
	int64_t x556 = 1LL;
	volatile int32_t t124 = -117;

    t124 = (x553==(x554+(x555&x556)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x557 = 20;
	static int32_t x558 = -1;
	static int64_t x559 = INT64_MAX;
	int8_t x560 = -8;

    t125 = (x557==(x558+(x559&x560)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x562 = INT32_MAX;
	int8_t x564 = INT8_MIN;
	static int32_t t126 = 132;

    t126 = (x561==(x562+(x563&x564)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x569 = 953U;
	uint64_t x571 = 62383576853LLU;
	int16_t x572 = 13;
	int32_t t127 = -49892161;

    t127 = (x569==(x570+(x571&x572)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x573 = INT64_MAX;
	static int8_t x574 = -55;
	int32_t x575 = -1;
	uint32_t x576 = 278U;
	volatile int32_t t128 = -345833503;

    t128 = (x573==(x574+(x575&x576)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = UINT16_MAX;
	static int16_t x579 = INT16_MAX;
	volatile int64_t x580 = INT64_MAX;
	volatile int32_t t129 = -612058752;

    t129 = (x577==(x578+(x579&x580)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x581 = INT16_MAX;
	uint8_t x582 = 19U;
	uint64_t x583 = 2619105151571646LLU;
	static uint16_t x584 = UINT16_MAX;

    t130 = (x581==(x582+(x583&x584)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x586 = -9254451;
	uint16_t x587 = 59U;
	int8_t x588 = INT8_MIN;

    t131 = (x585==(x586+(x587&x588)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x589 = -3;
	int32_t x590 = -312786134;
	uint32_t x592 = 1478446U;
	volatile int32_t t132 = 0;

    t132 = (x589==(x590+(x591&x592)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x593 = INT16_MIN;
	static volatile int64_t x595 = INT64_MAX;
	int64_t x596 = -1LL;
	static volatile int32_t t133 = -12;

    t133 = (x593==(x594+(x595&x596)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x597 = 19U;
	int16_t x598 = INT16_MIN;
	uint32_t x599 = UINT32_MAX;
	int32_t t134 = 8871373;

    t134 = (x597==(x598+(x599&x600)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x601 = INT8_MAX;
	static int8_t x602 = 1;
	int16_t x603 = -1;
	int64_t x604 = INT64_MIN;
	volatile int32_t t135 = -289170364;

    t135 = (x601==(x602+(x603&x604)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x606 = 44126666LL;
	volatile int8_t x607 = -1;
	volatile int16_t x608 = INT16_MIN;
	volatile int32_t t136 = -541;

    t136 = (x605==(x606+(x607&x608)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x609 = -8;
	int8_t x610 = INT8_MIN;
	int32_t x611 = -54074;
	uint16_t x612 = 25329U;
	volatile int32_t t137 = 7304292;

    t137 = (x609==(x610+(x611&x612)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x613 = INT64_MIN;
	volatile int64_t x614 = 1LL;
	int8_t x615 = INT8_MIN;
	static int64_t x616 = 56632LL;
	int32_t t138 = -1;

    t138 = (x613==(x614+(x615&x616)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x617 = -1;
	int16_t x618 = INT16_MAX;
	int8_t x619 = INT8_MAX;
	volatile int32_t t139 = 1;

    t139 = (x617==(x618+(x619&x620)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x622 = INT8_MAX;
	uint8_t x623 = 1U;
	volatile int32_t t140 = -92196879;

    t140 = (x621==(x622+(x623&x624)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x625 = 378178443069LLU;
	uint64_t x626 = 6790987143LLU;
	int16_t x627 = INT16_MAX;
	int64_t x628 = 78668597LL;
	volatile int32_t t141 = 135348327;

    t141 = (x625==(x626+(x627&x628)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x629 = INT32_MIN;
	int16_t x631 = INT16_MIN;
	int32_t t142 = 0;

    t142 = (x629==(x630+(x631&x632)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x633 = 84U;
	uint64_t x634 = 95422087LLU;
	static volatile uint8_t x635 = 70U;
	int32_t x636 = -1;

    t143 = (x633==(x634+(x635&x636)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x637 = 327U;
	int16_t x638 = 1;
	uint64_t x639 = 66LLU;
	volatile int32_t t144 = 14259166;

    t144 = (x637==(x638+(x639&x640)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x644 = 358805094U;
	static volatile int32_t t145 = -1;

    t145 = (x641==(x642+(x643&x644)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x646 = INT32_MIN;
	static uint16_t x648 = 26U;

    t146 = (x645==(x646+(x647&x648)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = -47LL;
	int8_t x650 = INT8_MAX;
	volatile int32_t t147 = 69323505;

    t147 = (x649==(x650+(x651&x652)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x654 = INT32_MIN;
	int64_t x655 = -1LL;
	static uint32_t x656 = UINT32_MAX;
	volatile int32_t t148 = -33948483;

    t148 = (x653==(x654+(x655&x656)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = INT8_MIN;
	volatile int32_t x658 = INT32_MIN;
	static int64_t x659 = -1LL;
	uint32_t x660 = UINT32_MAX;
	volatile int32_t t149 = -7847937;

    t149 = (x657==(x658+(x659&x660)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x661 = 3075LLU;
	int32_t x662 = INT32_MIN;
	static int32_t x663 = INT32_MAX;
	volatile uint8_t x664 = 6U;
	static volatile int32_t t150 = 100;

    t150 = (x661==(x662+(x663&x664)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x670 = INT32_MIN;
	int32_t x671 = -6412;
	volatile int16_t x672 = INT16_MAX;
	int32_t t151 = -659415;

    t151 = (x669==(x670+(x671&x672)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x673 = -1LL;
	uint16_t x674 = 1U;
	volatile int32_t t152 = -13493109;

    t152 = (x673==(x674+(x675&x676)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x677 = 33226512U;
	volatile int64_t x678 = -53102571LL;
	uint32_t x679 = 19662U;
	static int64_t x680 = INT64_MIN;
	int32_t t153 = 14585450;

    t153 = (x677==(x678+(x679&x680)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x681 = INT8_MIN;
	uint32_t x682 = UINT32_MAX;
	static int32_t x683 = -36998;
	static int32_t x684 = -1;
	volatile int32_t t154 = 34995;

    t154 = (x681==(x682+(x683&x684)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x685 = INT32_MIN;
	static int32_t x686 = INT32_MIN;
	volatile int64_t x687 = INT64_MAX;
	int64_t x688 = 52951212940LL;
	int32_t t155 = 406594;

    t155 = (x685==(x686+(x687&x688)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x689 = -739;
	static uint16_t x690 = 1164U;
	int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MIN;

    t156 = (x689==(x690+(x691&x692)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MIN;
	int32_t x696 = 7;
	static int32_t t157 = 1299;

    t157 = (x693==(x694+(x695&x696)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x698 = INT64_MAX;
	int32_t t158 = -11772484;

    t158 = (x697==(x698+(x699&x700)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x701 = 0;
	int32_t x702 = 110595;
	static int16_t x703 = INT16_MIN;
	static uint16_t x704 = 6306U;
	static volatile int32_t t159 = 965679;

    t159 = (x701==(x702+(x703&x704)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = -1;
	uint16_t x706 = 112U;
	uint16_t x707 = 3U;
	int32_t t160 = -11194744;

    t160 = (x705==(x706+(x707&x708)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x709 = INT8_MIN;
	int16_t x710 = INT16_MAX;
	int32_t x711 = 15371;
	static uint16_t x712 = 211U;

    t161 = (x709==(x710+(x711&x712)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x714 = 113U;
	uint32_t x715 = 32334U;
	int16_t x716 = 2;
	volatile int32_t t162 = -265644;

    t162 = (x713==(x714+(x715&x716)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x718 = -500;
	uint64_t x720 = 2159820LLU;
	static volatile int32_t t163 = -3;

    t163 = (x717==(x718+(x719&x720)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x721 = INT64_MIN;
	volatile int32_t x722 = INT32_MAX;
	static volatile int8_t x723 = INT8_MAX;
	int32_t x724 = INT32_MIN;

    t164 = (x721==(x722+(x723&x724)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x725 = -2;
	int32_t x726 = INT32_MAX;
	int16_t x727 = 1564;
	int8_t x728 = 0;
	int32_t t165 = 12;

    t165 = (x725==(x726+(x727&x728)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x729 = INT16_MIN;
	static int64_t x730 = INT64_MIN;
	volatile int32_t x731 = INT32_MAX;
	int16_t x732 = INT16_MIN;
	int32_t t166 = 1836735;

    t166 = (x729==(x730+(x731&x732)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x733 = 693218604U;
	uint32_t x734 = 34697981U;
	static int64_t x736 = 6371LL;
	int32_t t167 = 234;

    t167 = (x733==(x734+(x735&x736)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x737 = INT16_MIN;
	uint32_t x738 = 257148U;
	int64_t x739 = -1LL;
	int8_t x740 = INT8_MAX;
	volatile int32_t t168 = -7735069;

    t168 = (x737==(x738+(x739&x740)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x742 = INT8_MAX;
	int16_t x744 = -13668;
	volatile int32_t t169 = -60;

    t169 = (x741==(x742+(x743&x744)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x745 = -38;
	uint64_t x746 = 8990762844255LLU;
	int64_t x747 = INT64_MIN;
	int32_t t170 = 7080;

    t170 = (x745==(x746+(x747&x748)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x749 = INT64_MIN;
	int16_t x750 = INT16_MIN;
	static int8_t x751 = INT8_MIN;
	int32_t x752 = -1;
	int32_t t171 = 86512923;

    t171 = (x749==(x750+(x751&x752)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x753 = 32049417U;
	int16_t x754 = INT16_MIN;
	uint8_t x755 = 89U;
	uint64_t x756 = 184598LLU;
	volatile int32_t t172 = 155642;

    t172 = (x753==(x754+(x755&x756)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x757 = 3U;
	uint8_t x759 = 103U;
	volatile int64_t x760 = -1LL;
	int32_t t173 = 2037;

    t173 = (x757==(x758+(x759&x760)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x761 = 1U;
	int32_t x762 = 10;
	volatile int64_t x763 = -3776406900836LL;
	uint64_t x764 = UINT64_MAX;
	int32_t t174 = 327876;

    t174 = (x761==(x762+(x763&x764)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x767 = -1;
	int32_t x768 = INT32_MIN;
	static int32_t t175 = -953;

    t175 = (x765==(x766+(x767&x768)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x770 = 4869;
	int64_t x771 = -172397LL;
	int32_t x772 = INT32_MAX;
	int32_t t176 = 5511942;

    t176 = (x769==(x770+(x771&x772)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x773 = INT8_MAX;
	int16_t x774 = -2;
	volatile int32_t t177 = 11;

    t177 = (x773==(x774+(x775&x776)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x777 = 31LLU;
	volatile int16_t x779 = -22;
	int16_t x780 = INT16_MAX;
	int32_t t178 = 15923263;

    t178 = (x777==(x778+(x779&x780)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x781 = INT16_MIN;
	uint64_t x782 = 96971479LLU;
	int32_t x783 = INT32_MAX;
	int8_t x784 = INT8_MIN;

    t179 = (x781==(x782+(x783&x784)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x785 = INT8_MIN;
	volatile int64_t x786 = INT64_MIN;
	static int16_t x788 = 0;
	static volatile int32_t t180 = 0;

    t180 = (x785==(x786+(x787&x788)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x789 = INT64_MIN;
	static int8_t x790 = -29;
	uint8_t x791 = UINT8_MAX;
	int32_t x792 = INT32_MIN;
	volatile int32_t t181 = -48;

    t181 = (x789==(x790+(x791&x792)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x793 = INT32_MAX;
	int16_t x795 = INT16_MAX;
	volatile int64_t x796 = -1LL;
	int32_t t182 = 185792516;

    t182 = (x793==(x794+(x795&x796)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x797 = -1;
	int8_t x798 = INT8_MAX;
	int16_t x799 = -1;
	static int32_t x800 = -1;
	volatile int32_t t183 = -1392487;

    t183 = (x797==(x798+(x799&x800)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x801 = 0;
	int8_t x802 = -1;
	int32_t x803 = INT32_MIN;
	int64_t x804 = -1LL;
	int32_t t184 = 27898;

    t184 = (x801==(x802+(x803&x804)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x806 = INT32_MIN;
	volatile uint8_t x807 = 3U;

    t185 = (x805==(x806+(x807&x808)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x809 = 5824;
	uint64_t x810 = UINT64_MAX;
	int64_t x811 = -2115548326LL;
	int8_t x812 = -1;
	volatile int32_t t186 = 1;

    t186 = (x809==(x810+(x811&x812)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x813 = 5491U;
	int8_t x814 = -1;
	int8_t x815 = INT8_MAX;
	int32_t x816 = INT32_MAX;
	volatile int32_t t187 = -44127;

    t187 = (x813==(x814+(x815&x816)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x821 = -1;
	uint16_t x822 = UINT16_MAX;
	static uint32_t x823 = UINT32_MAX;
	int64_t x824 = INT64_MAX;
	int32_t t188 = 41;

    t188 = (x821==(x822+(x823&x824)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = -21;
	int64_t x826 = INT64_MAX;
	static int16_t x827 = 17;
	static uint64_t x828 = 3LLU;
	static int32_t t189 = 331;

    t189 = (x825==(x826+(x827&x828)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x831 = -1LL;
	uint8_t x832 = 15U;
	volatile int32_t t190 = 96462;

    t190 = (x829==(x830+(x831&x832)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x833 = 1603U;
	uint32_t x834 = UINT32_MAX;
	uint8_t x836 = 1U;
	volatile int32_t t191 = -2568;

    t191 = (x833==(x834+(x835&x836)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x837 = 370;
	uint64_t x839 = 5831565433222672LLU;
	static int32_t t192 = -41;

    t192 = (x837==(x838+(x839&x840)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x841 = 7U;
	int16_t x842 = INT16_MIN;
	int64_t x843 = -1LL;
	static volatile int32_t x844 = INT32_MAX;
	int32_t t193 = 2441603;

    t193 = (x841==(x842+(x843&x844)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x845 = INT16_MIN;
	int64_t x846 = INT64_MIN;
	int64_t x848 = -1LL;
	volatile int32_t t194 = 0;

    t194 = (x845==(x846+(x847&x848)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x849 = INT64_MAX;
	int64_t x850 = INT64_MIN;
	int16_t x851 = INT16_MAX;
	uint32_t x852 = UINT32_MAX;
	int32_t t195 = -604414;

    t195 = (x849==(x850+(x851&x852)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x853 = -1;
	uint16_t x854 = 1515U;
	static int16_t x855 = INT16_MAX;
	int32_t t196 = -269248527;

    t196 = (x853==(x854+(x855&x856)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x857 = INT8_MIN;
	int64_t x858 = INT64_MIN;
	int32_t x859 = INT32_MAX;
	int32_t x860 = -1;
	int32_t t197 = 144769615;

    t197 = (x857==(x858+(x859&x860)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x862 = INT8_MIN;
	int64_t x863 = INT64_MAX;
	int8_t x864 = INT8_MIN;
	int32_t t198 = -2569812;

    t198 = (x861==(x862+(x863&x864)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x867 = INT32_MIN;
	static int32_t t199 = 12543;

    t199 = (x865==(x866+(x867&x868)));

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

