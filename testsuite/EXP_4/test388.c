
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

volatile int32_t x2 = INT32_MAX;
int64_t x3 = INT64_MIN;
int8_t x4 = -1;
int32_t t0 = 763;
int64_t x5 = 899341956237LL;
static volatile int32_t t2 = 43948929;
int16_t x14 = INT16_MIN;
int64_t x31 = INT64_MIN;
volatile uint32_t x33 = 376353U;
volatile int64_t x36 = 2033364075569431LL;
static uint16_t x37 = 6364U;
int32_t t8 = -3;
int32_t x42 = -40738;
int8_t x54 = INT8_MIN;
int16_t x55 = -3;
uint32_t x58 = 33058U;
int64_t x64 = 404709886889LL;
int64_t x79 = -257293917LL;
static int8_t x80 = -1;
uint32_t x87 = UINT32_MAX;
volatile uint32_t x88 = UINT32_MAX;
int8_t x106 = INT8_MAX;
uint8_t x110 = UINT8_MAX;
volatile int32_t t25 = 28980;
uint16_t x121 = 13400U;
int16_t x123 = INT16_MIN;
volatile uint64_t x124 = 7570LLU;
volatile int64_t x130 = 17606LL;
uint16_t x134 = 1U;
int64_t x136 = -1LL;
int16_t x138 = -69;
int32_t x140 = -1;
volatile int8_t x147 = -1;
static int32_t x149 = 1479550;
int16_t x151 = INT16_MIN;
int32_t t34 = 11;
int64_t x157 = INT64_MIN;
static int32_t x165 = -1;
static int32_t t37 = -16791514;
static uint64_t x170 = UINT64_MAX;
uint32_t x172 = 64630340U;
int32_t t40 = -147024;
uint8_t x181 = 0U;
int32_t t41 = 0;
uint32_t x186 = 173U;
volatile int32_t t42 = -42615008;
int32_t t43 = 732133450;
uint16_t x194 = 657U;
uint32_t x195 = 448U;
int64_t x212 = 29299LL;
int32_t t47 = 5;
int32_t t48 = 357385;
static volatile int32_t x222 = INT32_MAX;
volatile uint16_t x224 = 1655U;
static int32_t x231 = 32;
static int32_t x241 = -1;
uint32_t x247 = 54239U;
uint64_t x250 = 228882076591380591LLU;
uint32_t x267 = 6463U;
uint8_t x276 = UINT8_MAX;
int16_t x277 = 441;
int64_t x279 = INT64_MIN;
int32_t t64 = -1;
uint16_t x289 = 32256U;
int32_t x294 = INT32_MAX;
int64_t x301 = INT64_MIN;
static uint8_t x311 = UINT8_MAX;
static int32_t t69 = -23;
volatile int64_t x317 = INT64_MAX;
int64_t x320 = INT64_MIN;
static int32_t t70 = 19;
int32_t x322 = -1;
volatile int32_t t71 = 1;
static volatile int16_t x333 = INT16_MIN;
uint8_t x337 = 8U;
volatile int8_t x340 = -1;
int8_t x341 = INT8_MIN;
volatile int32_t x345 = INT32_MIN;
static uint16_t x348 = 3456U;
static int16_t x351 = INT16_MAX;
int16_t x358 = 6458;
uint16_t x359 = 510U;
volatile uint8_t x366 = 3U;
volatile int32_t t79 = -61869929;
static int8_t x369 = INT8_MIN;
static uint16_t x371 = 779U;
int32_t t80 = 818325552;
uint8_t x373 = 0U;
volatile int32_t t81 = -1;
int32_t t85 = -139;
static int8_t x397 = INT8_MIN;
int16_t x399 = INT16_MAX;
volatile int32_t t87 = -2193267;
uint16_t x408 = 0U;
int32_t t88 = -6;
int16_t x413 = -1;
static int32_t x416 = -4008922;
int32_t t90 = 0;
static uint32_t x423 = UINT32_MAX;
volatile int16_t x430 = 66;
int8_t x432 = 0;
uint64_t x433 = UINT64_MAX;
int64_t x435 = -1LL;
int32_t t94 = -443;
static int16_t x453 = -764;
int32_t t97 = -75945;
int32_t t98 = -7;
int32_t x467 = INT32_MIN;
int8_t x470 = 0;
volatile int32_t t101 = 131289098;
int16_t x479 = -1;
volatile uint32_t x483 = 24333525U;
int64_t x485 = INT64_MIN;
int64_t x486 = INT64_MAX;
uint8_t x488 = 42U;
int32_t x489 = -1;
static volatile int16_t x491 = -1;
uint8_t x509 = 4U;
int16_t x530 = INT16_MAX;
int64_t x536 = INT64_MAX;
static uint64_t x543 = 544511338LLU;
uint32_t x545 = 211715949U;
volatile int16_t x546 = INT16_MIN;
int16_t x553 = -1;
int8_t x562 = -1;
static int16_t x567 = -6;
volatile int32_t t120 = -1220015;
static volatile int32_t t121 = 210174611;
uint8_t x578 = 37U;
static int16_t x580 = INT16_MIN;
uint16_t x592 = 2957U;
static int32_t t125 = 1;
volatile int16_t x593 = 3;
int32_t x595 = -3;
uint8_t x603 = 0U;
int32_t t127 = 417465;
static int32_t x609 = -913;
int16_t x614 = 1030;
static int16_t x615 = -3386;
uint8_t x640 = UINT8_MAX;
volatile int32_t x651 = INT32_MIN;
uint32_t x659 = 39856347U;
int16_t x661 = INT16_MIN;
uint8_t x666 = 93U;
int32_t x670 = INT32_MIN;
int32_t t142 = -120;
uint64_t x676 = 1913709364LLU;
uint64_t x678 = UINT64_MAX;
int64_t x680 = INT64_MIN;
int32_t x689 = 546;
uint64_t x691 = 678945833129911777LLU;
static int16_t x694 = INT16_MIN;
volatile int32_t x696 = INT32_MAX;
static int8_t x698 = 1;
volatile int32_t x701 = 5535662;
volatile int16_t x706 = -7;
uint8_t x711 = UINT8_MAX;
static int32_t x718 = -1;
uint8_t x719 = 32U;
uint32_t x722 = UINT32_MAX;
int32_t x727 = INT32_MIN;
uint64_t x728 = UINT64_MAX;
int32_t t155 = -327470049;
uint8_t x732 = UINT8_MAX;
static uint32_t x735 = 127U;
int64_t x736 = 27187359LL;
static volatile int8_t x737 = INT8_MIN;
int16_t x739 = -1;
static int32_t t160 = -1928219;
uint8_t x750 = UINT8_MAX;
int32_t t163 = 11184;
static int64_t x762 = INT64_MIN;
static int32_t t164 = -80202;
int64_t x782 = INT64_MIN;
static int16_t x793 = INT16_MAX;
static int8_t x796 = INT8_MAX;
int16_t x799 = 5990;
static volatile int8_t x804 = -3;
int16_t x807 = -3747;
static uint64_t x808 = 1850015202LLU;
volatile int32_t t173 = 427263015;
int32_t t175 = 106;
int16_t x818 = INT16_MIN;
int8_t x820 = -1;
int32_t x821 = 2;
static uint32_t x824 = UINT32_MAX;
volatile uint8_t x827 = 11U;
static uint64_t x828 = 43018LLU;
int32_t t178 = 628363020;
int32_t t180 = -112;
uint16_t x841 = 3U;
volatile int64_t x846 = -862341LL;
int8_t x851 = INT8_MIN;
int64_t x857 = INT64_MIN;
int32_t t188 = -107103;
int32_t t189 = -1;
static int32_t x875 = INT32_MAX;
int32_t x878 = INT32_MIN;
static int32_t t191 = 960879570;
uint8_t x882 = 87U;
int32_t x886 = -1;
int16_t x892 = 0;
uint16_t x893 = 0U;
int32_t x898 = -3327;
int32_t t196 = 1;
int64_t x909 = -1LL;
volatile int32_t t199 = 319384615;


void f0(void) {
    	static uint32_t x1 = 4135067U;

    t0 = (x1<=(x2^(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	int8_t x7 = -14;
	static int16_t x8 = -3691;
	int32_t t1 = -130302;

    t1 = (x5<=(x6^(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 2058U;
	uint8_t x10 = 0U;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = 68U;

    t2 = (x9<=(x10^(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 367U;
	int32_t x15 = -82;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 227;

    t3 = (x13<=(x14^(x15-x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = 3237;
	volatile int16_t x22 = 27;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = 0U;
	int32_t t4 = 0;

    t4 = (x21<=(x22^(x23-x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	static int16_t x26 = INT16_MAX;
	int32_t x27 = 76170;
	uint8_t x28 = 30U;
	volatile int32_t t5 = -14482453;

    t5 = (x25<=(x26^(x27-x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -18;
	int8_t x30 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t6 = -177;

    t6 = (x29<=(x30^(x31-x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x34 = INT64_MAX;
	int32_t x35 = INT32_MIN;
	volatile int32_t t7 = -121935729;

    t7 = (x33<=(x34^(x35-x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MIN;
	uint32_t x39 = 1880U;
	static uint32_t x40 = UINT32_MAX;

    t8 = (x37<=(x38^(x39-x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = UINT32_MAX;
	int8_t x43 = -1;
	int32_t x44 = -115;
	int32_t t9 = 493345;

    t9 = (x41<=(x42^(x43-x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	static volatile int8_t x46 = INT8_MIN;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = 105940721LL;
	int32_t t10 = 545598;

    t10 = (x45<=(x46^(x47-x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 2054588;
	volatile int8_t x50 = -3;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t11 = 74434596;

    t11 = (x49<=(x50^(x51-x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MAX;
	int8_t x56 = -1;
	int32_t t12 = -264092;

    t12 = (x53<=(x54^(x55-x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x57 = 142LLU;
	int16_t x59 = INT16_MAX;
	volatile int64_t x60 = -33058LL;
	int32_t t13 = 5260;

    t13 = (x57<=(x58^(x59-x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x61 = 3357428537LL;
	volatile uint16_t x62 = 41U;
	int8_t x63 = 1;
	int32_t t14 = 0;

    t14 = (x61<=(x62^(x63-x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 4043U;
	uint64_t x66 = 2775503705381981532LLU;
	int32_t x67 = 372757;
	int64_t x68 = -4721LL;
	int32_t t15 = 131323458;

    t15 = (x65<=(x66^(x67-x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -4LL;
	int16_t x70 = 2;
	int32_t x71 = -6;
	uint32_t x72 = 193U;
	int32_t t16 = 40;

    t16 = (x69<=(x70^(x71-x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = 974422;
	volatile int32_t x78 = -1;
	static int32_t t17 = 8201763;

    t17 = (x77<=(x78^(x79-x80)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 19U;
	int32_t x82 = INT32_MAX;
	int64_t x83 = 218LL;
	volatile int32_t x84 = 112;
	volatile int32_t t18 = -1549707;

    t18 = (x81<=(x82^(x83-x84)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 1577601268666LLU;
	volatile int64_t x86 = -84731736LL;
	volatile int32_t t19 = 4972943;

    t19 = (x85<=(x86^(x87-x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MIN;
	volatile uint64_t x94 = 5802489692LLU;
	volatile int32_t x95 = -1;
	volatile uint32_t x96 = 654U;
	static int32_t t20 = 152153881;

    t20 = (x93<=(x94^(x95-x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = INT8_MIN;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t21 = 10695;

    t21 = (x97<=(x98^(x99-x100)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x105 = 2;
	static int32_t x107 = INT32_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t22 = -83317;

    t22 = (x105<=(x106^(x107-x108)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x109 = -1;
	volatile uint16_t x111 = 5182U;
	static int16_t x112 = -1;
	volatile int32_t t23 = -988847;

    t23 = (x109<=(x110^(x111-x112)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = -1LL;
	int32_t x114 = INT32_MAX;
	int64_t x115 = 8952LL;
	uint8_t x116 = 56U;
	int32_t t24 = 1;

    t24 = (x113<=(x114^(x115-x116)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x117 = 5U;
	int64_t x118 = -1897020584343352LL;
	int16_t x119 = -15;
	int8_t x120 = -59;

    t25 = (x117<=(x118^(x119-x120)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x122 = -668094784;
	static volatile int32_t t26 = -25267062;

    t26 = (x121<=(x122^(x123-x124)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x125 = 5;
	int64_t x126 = -1LL;
	int16_t x127 = 1;
	int8_t x128 = INT8_MIN;
	int32_t t27 = 225695;

    t27 = (x125<=(x126^(x127-x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x129 = -430;
	uint64_t x131 = UINT64_MAX;
	static int32_t x132 = -1;
	int32_t t28 = 9286;

    t28 = (x129<=(x130^(x131-x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x133 = -38638204544LL;
	int64_t x135 = INT64_MIN;
	volatile int32_t t29 = -3102905;

    t29 = (x133<=(x134^(x135-x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -1931LL;
	static uint32_t x139 = 143U;
	volatile int32_t t30 = 335850618;

    t30 = (x137<=(x138^(x139-x140)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = INT8_MIN;
	uint32_t x142 = 550443U;
	uint8_t x143 = UINT8_MAX;
	int64_t x144 = INT64_MAX;
	int32_t t31 = 6615;

    t31 = (x141<=(x142^(x143-x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = -1LL;
	int16_t x146 = -1;
	int32_t x148 = INT32_MAX;
	static int32_t t32 = -2;

    t32 = (x145<=(x146^(x147-x148)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x150 = INT64_MIN;
	int32_t x152 = -1762;
	volatile int32_t t33 = -19;

    t33 = (x149<=(x150^(x151-x152)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x153 = 3U;
	static int16_t x154 = -1;
	volatile int32_t x155 = INT32_MIN;
	int16_t x156 = -1;

    t34 = (x153<=(x154^(x155-x156)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x158 = 90776199628075LLU;
	int64_t x159 = 411874LL;
	int16_t x160 = INT16_MAX;
	volatile int32_t t35 = -9999;

    t35 = (x157<=(x158^(x159-x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = INT16_MIN;
	int32_t x162 = -1;
	int8_t x163 = INT8_MIN;
	static volatile uint64_t x164 = 25748540517511730LLU;
	int32_t t36 = 11826;

    t36 = (x161<=(x162^(x163-x164)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;

    t37 = (x165<=(x166^(x167-x168)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x169 = INT32_MAX;
	static volatile int8_t x171 = INT8_MIN;
	int32_t t38 = 147966815;

    t38 = (x169<=(x170^(x171-x172)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x173 = INT64_MAX;
	uint64_t x174 = UINT64_MAX;
	static int8_t x175 = -1;
	int16_t x176 = INT16_MAX;
	int32_t t39 = -1025341;

    t39 = (x173<=(x174^(x175-x176)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x177 = 3409;
	uint64_t x178 = 8240742945488699LLU;
	uint64_t x179 = 613LLU;
	int32_t x180 = -63543782;

    t40 = (x177<=(x178^(x179-x180)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x182 = UINT16_MAX;
	int64_t x183 = 4143744916807170LL;
	int32_t x184 = -1;

    t41 = (x181<=(x182^(x183-x184)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = -76796499;
	static int32_t x187 = 28;
	int64_t x188 = -282505466982496536LL;

    t42 = (x185<=(x186^(x187-x188)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x189 = 145LLU;
	static int16_t x190 = -5049;
	volatile int8_t x191 = INT8_MIN;
	volatile uint32_t x192 = 14474U;

    t43 = (x189<=(x190^(x191-x192)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = 125U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t44 = 2192487;

    t44 = (x193<=(x194^(x195-x196)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x197 = -1;
	int8_t x198 = -7;
	volatile int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MAX;
	volatile int32_t t45 = -50172304;

    t45 = (x197<=(x198^(x199-x200)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 0U;
	uint64_t x206 = 902071438LLU;
	static int16_t x207 = -44;
	int8_t x208 = -1;
	int32_t t46 = 1755;

    t46 = (x205<=(x206^(x207-x208)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x209 = 4U;
	static uint8_t x210 = UINT8_MAX;
	volatile int8_t x211 = INT8_MIN;

    t47 = (x209<=(x210^(x211-x212)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x213 = INT32_MIN;
	int32_t x214 = -323858956;
	volatile int8_t x215 = -1;
	uint32_t x216 = UINT32_MAX;

    t48 = (x213<=(x214^(x215-x216)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MAX;
	int16_t x223 = -1;
	volatile int32_t t49 = 124740;

    t49 = (x221<=(x222^(x223-x224)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MIN;
	int64_t x227 = INT64_MAX;
	uint64_t x228 = 18706586115250LLU;
	volatile int32_t t50 = -37;

    t50 = (x225<=(x226^(x227-x228)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = 2;
	uint32_t x232 = 613U;
	int32_t t51 = 14990512;

    t51 = (x229<=(x230^(x231-x232)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x233 = 31LL;
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = INT16_MIN;
	uint8_t x236 = UINT8_MAX;
	static int32_t t52 = -744322;

    t52 = (x233<=(x234^(x235-x236)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x237 = INT16_MAX;
	static int16_t x238 = 4736;
	int64_t x239 = INT64_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t53 = 606506961;

    t53 = (x237<=(x238^(x239-x240)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x242 = 2U;
	static int32_t x243 = INT32_MIN;
	int8_t x244 = -1;
	int32_t t54 = 788425970;

    t54 = (x241<=(x242^(x243-x244)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x245 = 172;
	int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	int32_t t55 = 3;

    t55 = (x245<=(x246^(x247-x248)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = UINT16_MAX;
	int64_t x251 = INT64_MAX;
	volatile int64_t x252 = 11588934475844LL;
	int32_t t56 = -189280718;

    t56 = (x249<=(x250^(x251-x252)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = INT16_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	static int64_t x255 = INT64_MAX;
	int32_t x256 = 17484055;
	int32_t t57 = -99688;

    t57 = (x253<=(x254^(x255-x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x257 = 197U;
	static uint32_t x258 = 164976896U;
	uint32_t x259 = 118096U;
	static volatile int8_t x260 = INT8_MIN;
	static volatile int32_t t58 = -60503;

    t58 = (x257<=(x258^(x259-x260)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x261 = 27U;
	static int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MAX;
	int64_t x264 = -166642208790329LL;
	volatile int32_t t59 = -2190;

    t59 = (x261<=(x262^(x263-x264)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x265 = -1;
	static int8_t x266 = -28;
	static volatile uint32_t x268 = 260982U;
	static volatile int32_t t60 = -2041;

    t60 = (x265<=(x266^(x267-x268)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x269 = UINT16_MAX;
	int16_t x270 = -1;
	int32_t x271 = INT32_MIN;
	int16_t x272 = -861;
	volatile int32_t t61 = -90;

    t61 = (x269<=(x270^(x271-x272)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = 191247286;
	uint32_t x274 = 7655U;
	int16_t x275 = INT16_MIN;
	int32_t t62 = -15179319;

    t62 = (x273<=(x274^(x275-x276)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x278 = INT32_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t63 = -614165114;

    t63 = (x277<=(x278^(x279-x280)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x281 = INT64_MIN;
	uint32_t x282 = 1828687U;
	volatile int8_t x283 = -1;
	int32_t x284 = INT32_MAX;

    t64 = (x281<=(x282^(x283-x284)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x290 = 474757LL;
	static uint8_t x291 = 3U;
	int64_t x292 = -1027LL;
	volatile int32_t t65 = 62;

    t65 = (x289<=(x290^(x291-x292)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x293 = -1;
	uint64_t x295 = 4994674838128668LLU;
	int16_t x296 = -1;
	static int32_t t66 = 4;

    t66 = (x293<=(x294^(x295-x296)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x297 = 3555851LLU;
	int32_t x298 = -1;
	int16_t x299 = INT16_MIN;
	static volatile uint32_t x300 = UINT32_MAX;
	static volatile int32_t t67 = -21;

    t67 = (x297<=(x298^(x299-x300)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x302 = -11112949LL;
	int16_t x303 = 1396;
	volatile int64_t x304 = -4139278830426906146LL;
	int32_t t68 = 3593068;

    t68 = (x301<=(x302^(x303-x304)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x309 = 311U;
	volatile int32_t x310 = INT32_MAX;
	static int64_t x312 = -23553658507191LL;

    t69 = (x309<=(x310^(x311-x312)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x318 = INT32_MIN;
	int64_t x319 = -1LL;

    t70 = (x317<=(x318^(x319-x320)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x323 = -1;
	static int8_t x324 = 0;

    t71 = (x321<=(x322^(x323-x324)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x334 = -1;
	int32_t x335 = -348;
	int64_t x336 = -1LL;
	int32_t t72 = 24860;

    t72 = (x333<=(x334^(x335-x336)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x338 = INT64_MIN;
	volatile int32_t x339 = -1399661;
	int32_t t73 = -414484288;

    t73 = (x337<=(x338^(x339-x340)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x342 = -26;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -37504178;
	volatile int32_t t74 = -454871329;

    t74 = (x341<=(x342^(x343-x344)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x346 = UINT64_MAX;
	uint16_t x347 = 504U;
	volatile int32_t t75 = 4;

    t75 = (x345<=(x346^(x347-x348)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	int64_t x350 = -396LL;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t76 = 4253;

    t76 = (x349<=(x350^(x351-x352)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x357 = -177384LL;
	static int32_t x360 = -1;
	volatile int32_t t77 = 665936474;

    t77 = (x357<=(x358^(x359-x360)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x361 = INT32_MAX;
	static int32_t x362 = -1;
	int32_t x363 = 16053809;
	static uint8_t x364 = 1U;
	static volatile int32_t t78 = -433133867;

    t78 = (x361<=(x362^(x363-x364)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x365 = INT64_MIN;
	uint32_t x367 = 19U;
	int32_t x368 = -1;

    t79 = (x365<=(x366^(x367-x368)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x370 = INT16_MIN;
	uint32_t x372 = UINT32_MAX;

    t80 = (x369<=(x370^(x371-x372)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x374 = UINT64_MAX;
	volatile int32_t x375 = 287674003;
	int8_t x376 = INT8_MIN;

    t81 = (x373<=(x374^(x375-x376)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x377 = -6;
	int8_t x378 = -42;
	uint64_t x379 = 775272LLU;
	volatile int32_t x380 = INT32_MAX;
	int32_t t82 = 655600026;

    t82 = (x377<=(x378^(x379-x380)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = -344451386;
	int32_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t83 = 57699425;

    t83 = (x381<=(x382^(x383-x384)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x385 = -1;
	int64_t x386 = -1LL;
	int16_t x387 = -161;
	int64_t x388 = INT64_MIN;
	volatile int32_t t84 = -6960206;

    t84 = (x385<=(x386^(x387-x388)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MIN;
	static volatile int16_t x391 = INT16_MIN;
	int16_t x392 = -1;

    t85 = (x389<=(x390^(x391-x392)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x398 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int32_t t86 = -1204135;

    t86 = (x397<=(x398^(x399-x400)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x401 = UINT64_MAX;
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = 444769;
	uint16_t x404 = 1U;

    t87 = (x401<=(x402^(x403-x404)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x405 = 145249LLU;
	uint8_t x406 = UINT8_MAX;
	int8_t x407 = -63;

    t88 = (x405<=(x406^(x407-x408)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	static int16_t x411 = INT16_MIN;
	static volatile uint8_t x412 = 12U;
	static int32_t t89 = -922361159;

    t89 = (x409<=(x410^(x411-x412)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x414 = 10067LLU;
	uint64_t x415 = 0LLU;

    t90 = (x413<=(x414^(x415-x416)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x421 = 28986749U;
	int64_t x422 = INT64_MAX;
	int8_t x424 = -30;
	static volatile int32_t t91 = 827832650;

    t91 = (x421<=(x422^(x423-x424)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x425 = UINT8_MAX;
	int32_t x426 = INT32_MIN;
	uint64_t x427 = 3891056345LLU;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t92 = -252164629;

    t92 = (x425<=(x426^(x427-x428)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x429 = 32761U;
	static int32_t x431 = INT32_MAX;
	int32_t t93 = -1;

    t93 = (x429<=(x430^(x431-x432)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x434 = INT32_MIN;
	static int64_t x436 = -2284408LL;

    t94 = (x433<=(x434^(x435-x436)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x445 = 239U;
	uint64_t x446 = 1341353678165LLU;
	int16_t x447 = -7;
	uint64_t x448 = 5058963798072958041LLU;
	int32_t t95 = -41;

    t95 = (x445<=(x446^(x447-x448)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x449 = INT16_MIN;
	static volatile int64_t x450 = -1LL;
	int16_t x451 = INT16_MIN;
	uint8_t x452 = 2U;
	volatile int32_t t96 = 201226414;

    t96 = (x449<=(x450^(x451-x452)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x454 = INT32_MAX;
	int64_t x455 = INT64_MAX;
	uint8_t x456 = 2U;

    t97 = (x453<=(x454^(x455-x456)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x458 = -2957;
	volatile uint32_t x459 = UINT32_MAX;
	volatile int8_t x460 = 13;

    t98 = (x457<=(x458^(x459-x460)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x461 = -11496041;
	int16_t x462 = INT16_MIN;
	int32_t x463 = INT32_MIN;
	int64_t x464 = -10529LL;
	int32_t t99 = 1;

    t99 = (x461<=(x462^(x463-x464)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x465 = 507683207272LLU;
	static int64_t x466 = INT64_MIN;
	int32_t x468 = INT32_MIN;
	static volatile int32_t t100 = 1;

    t100 = (x465<=(x466^(x467-x468)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x469 = INT8_MAX;
	int8_t x471 = -1;
	int64_t x472 = INT64_MAX;

    t101 = (x469<=(x470^(x471-x472)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x477 = 515280518;
	int16_t x478 = INT16_MAX;
	volatile int64_t x480 = -17LL;
	int32_t t102 = -45486;

    t102 = (x477<=(x478^(x479-x480)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x481 = UINT8_MAX;
	uint8_t x482 = 77U;
	uint8_t x484 = 0U;
	int32_t t103 = -1340737;

    t103 = (x481<=(x482^(x483-x484)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x487 = INT32_MAX;
	volatile int32_t t104 = 1476;

    t104 = (x485<=(x486^(x487-x488)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x490 = 0;
	int8_t x492 = -59;
	volatile int32_t t105 = -46;

    t105 = (x489<=(x490^(x491-x492)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x493 = -1;
	uint16_t x494 = UINT16_MAX;
	uint8_t x495 = 7U;
	uint32_t x496 = UINT32_MAX;
	static volatile int32_t t106 = -95;

    t106 = (x493<=(x494^(x495-x496)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x497 = UINT8_MAX;
	volatile int64_t x498 = INT64_MIN;
	volatile int64_t x499 = INT64_MAX;
	volatile int16_t x500 = 1;
	int32_t t107 = 21968;

    t107 = (x497<=(x498^(x499-x500)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x501 = INT64_MAX;
	int64_t x502 = 172996442LL;
	uint16_t x503 = UINT16_MAX;
	uint32_t x504 = 4U;
	int32_t t108 = -7878903;

    t108 = (x501<=(x502^(x503-x504)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x510 = 3820U;
	int32_t x511 = 274720572;
	int16_t x512 = 13;
	int32_t t109 = -5813;

    t109 = (x509<=(x510^(x511-x512)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x517 = 12U;
	int8_t x518 = INT8_MIN;
	static int16_t x519 = INT16_MAX;
	volatile int16_t x520 = -1;
	int32_t t110 = 1865;

    t110 = (x517<=(x518^(x519-x520)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x521 = INT32_MIN;
	static int8_t x522 = -10;
	static int8_t x523 = 0;
	volatile int16_t x524 = -1;
	int32_t t111 = -3195524;

    t111 = (x521<=(x522^(x523-x524)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x525 = 0U;
	uint64_t x526 = UINT64_MAX;
	uint8_t x527 = 5U;
	uint16_t x528 = 7U;
	int32_t t112 = 1;

    t112 = (x525<=(x526^(x527-x528)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x529 = 1U;
	int32_t x531 = 28;
	int8_t x532 = INT8_MIN;
	volatile int32_t t113 = 56;

    t113 = (x529<=(x530^(x531-x532)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x533 = -224037891;
	int8_t x534 = INT8_MIN;
	volatile uint8_t x535 = UINT8_MAX;
	int32_t t114 = 12;

    t114 = (x533<=(x534^(x535-x536)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x541 = 131U;
	int64_t x542 = INT64_MAX;
	int16_t x544 = INT16_MIN;
	static int32_t t115 = 406696273;

    t115 = (x541<=(x542^(x543-x544)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x547 = UINT32_MAX;
	uint32_t x548 = 32916U;
	int32_t t116 = 25988;

    t116 = (x545<=(x546^(x547-x548)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x554 = 2U;
	int16_t x555 = -1;
	int8_t x556 = INT8_MIN;
	int32_t t117 = 241858;

    t117 = (x553<=(x554^(x555-x556)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x557 = 40637716254LL;
	uint16_t x558 = 43U;
	uint64_t x559 = 201836LLU;
	static int64_t x560 = -90980803265182LL;
	volatile int32_t t118 = -4090822;

    t118 = (x557<=(x558^(x559-x560)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x561 = -1;
	int16_t x563 = INT16_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t119 = 452;

    t119 = (x561<=(x562^(x563-x564)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x565 = 306;
	static uint8_t x566 = UINT8_MAX;
	static int16_t x568 = INT16_MAX;

    t120 = (x565<=(x566^(x567-x568)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	uint16_t x570 = UINT16_MAX;
	static uint64_t x571 = 1373783LLU;
	uint16_t x572 = 5535U;

    t121 = (x569<=(x570^(x571-x572)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x573 = 4303367LL;
	volatile int8_t x574 = INT8_MAX;
	uint64_t x575 = UINT64_MAX;
	int32_t x576 = -1;
	int32_t t122 = -235;

    t122 = (x573<=(x574^(x575-x576)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x577 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	volatile int32_t t123 = -24;

    t123 = (x577<=(x578^(x579-x580)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x585 = INT8_MAX;
	uint16_t x586 = 22959U;
	static int16_t x587 = -1;
	int8_t x588 = -10;
	int32_t t124 = -8;

    t124 = (x585<=(x586^(x587-x588)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x589 = INT16_MIN;
	uint16_t x590 = 55U;
	int8_t x591 = INT8_MAX;

    t125 = (x589<=(x590^(x591-x592)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x594 = INT32_MAX;
	int32_t x596 = INT32_MIN;
	int32_t t126 = -32229847;

    t126 = (x593<=(x594^(x595-x596)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x601 = 7533U;
	static volatile int8_t x602 = INT8_MAX;
	uint32_t x604 = 409741U;

    t127 = (x601<=(x602^(x603-x604)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x605 = 47976676LL;
	static int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MIN;
	volatile uint16_t x608 = 0U;
	int32_t t128 = -1889;

    t128 = (x605<=(x606^(x607-x608)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x610 = INT8_MIN;
	uint16_t x611 = 0U;
	static int16_t x612 = INT16_MIN;
	int32_t t129 = 214;

    t129 = (x609<=(x610^(x611-x612)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x613 = -14307;
	int32_t x616 = -1;
	int32_t t130 = 35511;

    t130 = (x613<=(x614^(x615-x616)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x617 = 3;
	static int16_t x618 = -155;
	static int8_t x619 = -1;
	int64_t x620 = INT64_MAX;
	int32_t t131 = -29429542;

    t131 = (x617<=(x618^(x619-x620)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x621 = 258348463;
	int64_t x622 = INT64_MIN;
	static int8_t x623 = 0;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t132 = -1;

    t132 = (x621<=(x622^(x623-x624)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x625 = UINT32_MAX;
	uint32_t x626 = 2U;
	static uint16_t x627 = 0U;
	int64_t x628 = -13781LL;
	static volatile int32_t t133 = -7;

    t133 = (x625<=(x626^(x627-x628)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x629 = 13;
	int16_t x630 = 5;
	static int16_t x631 = INT16_MIN;
	volatile int8_t x632 = -1;
	static volatile int32_t t134 = -661186210;

    t134 = (x629<=(x630^(x631-x632)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x633 = 4U;
	int32_t x634 = INT32_MIN;
	uint8_t x635 = 14U;
	static int16_t x636 = INT16_MIN;
	int32_t t135 = -189133530;

    t135 = (x633<=(x634^(x635-x636)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MIN;
	int32_t x639 = -1;
	int32_t t136 = -24739097;

    t136 = (x637<=(x638^(x639-x640)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x645 = INT8_MAX;
	volatile uint8_t x646 = 1U;
	volatile int8_t x647 = INT8_MIN;
	volatile int8_t x648 = INT8_MIN;
	volatile int32_t t137 = 1379;

    t137 = (x645<=(x646^(x647-x648)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x649 = UINT64_MAX;
	static volatile int32_t x650 = INT32_MIN;
	int64_t x652 = 270079LL;
	volatile int32_t t138 = -89356;

    t138 = (x649<=(x650^(x651-x652)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x657 = -620840971155813LL;
	volatile int64_t x658 = INT64_MIN;
	volatile int8_t x660 = 2;
	volatile int32_t t139 = 2872;

    t139 = (x657<=(x658^(x659-x660)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x662 = UINT64_MAX;
	int32_t x663 = 161;
	int8_t x664 = -1;
	int32_t t140 = 0;

    t140 = (x661<=(x662^(x663-x664)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x665 = INT64_MAX;
	static uint8_t x667 = 3U;
	volatile uint32_t x668 = UINT32_MAX;
	volatile int32_t t141 = -4026020;

    t141 = (x665<=(x666^(x667-x668)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x669 = -968527278186335623LL;
	volatile uint8_t x671 = UINT8_MAX;
	uint32_t x672 = 603685619U;

    t142 = (x669<=(x670^(x671-x672)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x674 = -9;
	int16_t x675 = INT16_MIN;
	volatile int32_t t143 = 10434116;

    t143 = (x673<=(x674^(x675-x676)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x679 = -1;
	volatile int32_t t144 = -17;

    t144 = (x677<=(x678^(x679-x680)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x685 = 37244773748123414LL;
	uint16_t x686 = 1438U;
	int8_t x687 = 0;
	int32_t x688 = -1;
	volatile int32_t t145 = 262875000;

    t145 = (x685<=(x686^(x687-x688)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x690 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t146 = -2962;

    t146 = (x689<=(x690^(x691-x692)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x693 = INT8_MIN;
	volatile int32_t x695 = 0;
	int32_t t147 = 3782;

    t147 = (x693<=(x694^(x695-x696)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x697 = UINT8_MAX;
	volatile int64_t x699 = INT64_MAX;
	int32_t x700 = INT32_MAX;
	volatile int32_t t148 = 21708;

    t148 = (x697<=(x698^(x699-x700)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x702 = -1;
	int8_t x703 = -1;
	uint8_t x704 = 52U;
	volatile int32_t t149 = 1;

    t149 = (x701<=(x702^(x703-x704)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x705 = 8075604U;
	uint16_t x707 = UINT16_MAX;
	static uint32_t x708 = 23989382U;
	volatile int32_t t150 = -989;

    t150 = (x705<=(x706^(x707-x708)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x709 = UINT16_MAX;
	volatile int64_t x710 = 6720LL;
	int32_t x712 = -1;
	static volatile int32_t t151 = 69359100;

    t151 = (x709<=(x710^(x711-x712)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x713 = INT32_MAX;
	int64_t x714 = INT64_MAX;
	uint64_t x715 = UINT64_MAX;
	int8_t x716 = INT8_MAX;
	int32_t t152 = 22;

    t152 = (x713<=(x714^(x715-x716)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x717 = 1U;
	uint32_t x720 = UINT32_MAX;
	volatile int32_t t153 = -950867860;

    t153 = (x717<=(x718^(x719-x720)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x721 = UINT32_MAX;
	int32_t x723 = INT32_MAX;
	uint16_t x724 = 27116U;
	int32_t t154 = 965;

    t154 = (x721<=(x722^(x723-x724)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x725 = INT16_MIN;
	static volatile uint32_t x726 = 7U;

    t155 = (x725<=(x726^(x727-x728)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x729 = INT32_MIN;
	int32_t x730 = INT32_MAX;
	uint64_t x731 = 18472893LLU;
	volatile int32_t t156 = 20597539;

    t156 = (x729<=(x730^(x731-x732)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x733 = 32174LLU;
	uint32_t x734 = 228U;
	volatile int32_t t157 = -247112;

    t157 = (x733<=(x734^(x735-x736)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x738 = INT64_MIN;
	volatile uint8_t x740 = 96U;
	volatile int32_t t158 = -3640254;

    t158 = (x737<=(x738^(x739-x740)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x741 = 32736U;
	volatile int32_t x742 = -1;
	int64_t x743 = -1LL;
	uint8_t x744 = 2U;
	static volatile int32_t t159 = 0;

    t159 = (x741<=(x742^(x743-x744)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x745 = 1502142178075062930LL;
	uint64_t x746 = 191840763866748674LLU;
	uint8_t x747 = 14U;
	uint32_t x748 = 5U;

    t160 = (x745<=(x746^(x747-x748)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x749 = 3705;
	uint64_t x751 = UINT64_MAX;
	int8_t x752 = INT8_MIN;
	static volatile int32_t t161 = 0;

    t161 = (x749<=(x750^(x751-x752)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x753 = 17LL;
	int64_t x754 = -1LL;
	volatile int16_t x755 = INT16_MIN;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t162 = 10806;

    t162 = (x753<=(x754^(x755-x756)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x757 = UINT64_MAX;
	uint64_t x758 = 11753061440LLU;
	uint64_t x759 = UINT64_MAX;
	int64_t x760 = -1LL;

    t163 = (x757<=(x758^(x759-x760)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x761 = UINT16_MAX;
	static volatile int16_t x763 = INT16_MIN;
	uint8_t x764 = UINT8_MAX;

    t164 = (x761<=(x762^(x763-x764)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x765 = UINT8_MAX;
	static int16_t x766 = 920;
	uint64_t x767 = UINT64_MAX;
	int32_t x768 = INT32_MIN;
	volatile int32_t t165 = 1553048;

    t165 = (x765<=(x766^(x767-x768)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	int16_t x774 = -1;
	volatile uint16_t x775 = 3U;
	uint64_t x776 = 442539235280643825LLU;
	static volatile int32_t t166 = 681563;

    t166 = (x773<=(x774^(x775-x776)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x777 = INT16_MIN;
	int64_t x778 = INT64_MAX;
	int64_t x779 = -32979LL;
	volatile uint64_t x780 = UINT64_MAX;
	static int32_t t167 = 57;

    t167 = (x777<=(x778^(x779-x780)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x781 = INT16_MIN;
	int64_t x783 = INT64_MAX;
	uint64_t x784 = 44306LLU;
	int32_t t168 = -6471138;

    t168 = (x781<=(x782^(x783-x784)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint32_t x785 = 535066909U;
	uint16_t x786 = UINT16_MAX;
	int8_t x787 = -1;
	int8_t x788 = -37;
	int32_t t169 = 154;

    t169 = (x785<=(x786^(x787-x788)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x794 = INT16_MIN;
	static int32_t x795 = -2;
	volatile int32_t t170 = -315441397;

    t170 = (x793<=(x794^(x795-x796)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x797 = 8796669082848803347LLU;
	uint64_t x798 = 20251047274501301LLU;
	static uint64_t x800 = 63616515018489452LLU;
	volatile int32_t t171 = 27423715;

    t171 = (x797<=(x798^(x799-x800)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x801 = 7U;
	uint64_t x802 = 3225LLU;
	int16_t x803 = INT16_MIN;
	int32_t t172 = -12;

    t172 = (x801<=(x802^(x803-x804)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x805 = 83023738153LL;
	int32_t x806 = INT32_MIN;

    t173 = (x805<=(x806^(x807-x808)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x809 = -11068655;
	int32_t x810 = -1;
	uint8_t x811 = 0U;
	int32_t x812 = -1;
	int32_t t174 = -202;

    t174 = (x809<=(x810^(x811-x812)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x813 = INT16_MIN;
	static int16_t x814 = -1;
	static uint32_t x815 = 135U;
	int32_t x816 = -1;

    t175 = (x813<=(x814^(x815-x816)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x817 = INT8_MAX;
	volatile uint16_t x819 = 12U;
	int32_t t176 = 223963218;

    t176 = (x817<=(x818^(x819-x820)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x822 = -2;
	int32_t x823 = 825591033;
	volatile int32_t t177 = -479612;

    t177 = (x821<=(x822^(x823-x824)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x825 = UINT16_MAX;
	volatile uint32_t x826 = 447299U;

    t178 = (x825<=(x826^(x827-x828)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x829 = -13614404356LL;
	static int16_t x830 = INT16_MAX;
	static volatile uint32_t x831 = 70972857U;
	uint16_t x832 = UINT16_MAX;
	volatile int32_t t179 = -5783;

    t179 = (x829<=(x830^(x831-x832)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x833 = INT8_MAX;
	static uint32_t x834 = UINT32_MAX;
	static uint8_t x835 = 18U;
	uint16_t x836 = 127U;

    t180 = (x833<=(x834^(x835-x836)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x837 = 880U;
	static int32_t x838 = 1;
	volatile int8_t x839 = 20;
	uint16_t x840 = UINT16_MAX;
	static volatile int32_t t181 = -127128698;

    t181 = (x837<=(x838^(x839-x840)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x842 = INT64_MAX;
	int8_t x843 = 1;
	int64_t x844 = -1LL;
	int32_t t182 = 93469;

    t182 = (x841<=(x842^(x843-x844)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	int8_t x847 = INT8_MIN;
	int64_t x848 = -1LL;
	static volatile int32_t t183 = 2029646;

    t183 = (x845<=(x846^(x847-x848)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x849 = 0U;
	volatile uint8_t x850 = UINT8_MAX;
	uint8_t x852 = 18U;
	volatile int32_t t184 = 3884;

    t184 = (x849<=(x850^(x851-x852)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x853 = 711U;
	uint8_t x854 = UINT8_MAX;
	int8_t x855 = -1;
	static volatile uint16_t x856 = UINT16_MAX;
	static volatile int32_t t185 = 0;

    t185 = (x853<=(x854^(x855-x856)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x858 = UINT8_MAX;
	uint64_t x859 = 70127335LLU;
	int32_t x860 = INT32_MIN;
	volatile int32_t t186 = 272;

    t186 = (x857<=(x858^(x859-x860)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x861 = INT64_MIN;
	uint64_t x862 = UINT64_MAX;
	static volatile int64_t x863 = -1LL;
	int8_t x864 = INT8_MIN;
	static int32_t t187 = -197964260;

    t187 = (x861<=(x862^(x863-x864)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x865 = INT16_MIN;
	volatile uint32_t x866 = 52239U;
	uint16_t x867 = UINT16_MAX;
	int16_t x868 = -1;

    t188 = (x865<=(x866^(x867-x868)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x869 = INT8_MIN;
	uint8_t x870 = 93U;
	volatile int32_t x871 = -1;
	uint16_t x872 = UINT16_MAX;

    t189 = (x869<=(x870^(x871-x872)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x873 = -1;
	int64_t x874 = INT64_MAX;
	int32_t x876 = INT32_MAX;
	volatile int32_t t190 = 77654;

    t190 = (x873<=(x874^(x875-x876)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x877 = 1;
	uint64_t x879 = 4153333LLU;
	uint8_t x880 = 47U;

    t191 = (x877<=(x878^(x879-x880)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x881 = -2991629LL;
	static volatile uint32_t x883 = 13040492U;
	uint32_t x884 = 21968061U;
	volatile int32_t t192 = 200;

    t192 = (x881<=(x882^(x883-x884)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x885 = INT16_MAX;
	uint64_t x887 = 16301711915995007LLU;
	static int64_t x888 = INT64_MAX;
	static volatile int32_t t193 = -197022;

    t193 = (x885<=(x886^(x887-x888)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x889 = 1U;
	static uint8_t x890 = UINT8_MAX;
	int16_t x891 = 18;
	volatile int32_t t194 = 15009571;

    t194 = (x889<=(x890^(x891-x892)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x894 = -1;
	volatile uint8_t x895 = UINT8_MAX;
	uint8_t x896 = 6U;
	int32_t t195 = -3;

    t195 = (x893<=(x894^(x895-x896)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x897 = -1LL;
	int64_t x899 = INT64_MAX;
	static volatile uint8_t x900 = 6U;

    t196 = (x897<=(x898^(x899-x900)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x901 = INT16_MAX;
	int32_t x902 = -1;
	int16_t x903 = 1;
	int8_t x904 = 3;
	volatile int32_t t197 = -7335;

    t197 = (x901<=(x902^(x903-x904)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x905 = 4U;
	int8_t x906 = 1;
	uint64_t x907 = 59195LLU;
	volatile int8_t x908 = INT8_MIN;
	volatile int32_t t198 = 8319573;

    t198 = (x905<=(x906^(x907-x908)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x910 = INT32_MAX;
	static int8_t x911 = INT8_MIN;
	int8_t x912 = INT8_MIN;

    t199 = (x909<=(x910^(x911-x912)));

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

