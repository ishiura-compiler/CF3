
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

int64_t x2 = 847614873825LL;
uint8_t x4 = 3U;
int8_t x7 = 0;
volatile int16_t x12 = INT16_MIN;
volatile uint16_t x15 = 48U;
volatile int32_t t3 = -70026401;
volatile int32_t t4 = -24;
int32_t x24 = INT32_MIN;
int32_t t6 = 1223;
int32_t x31 = -1;
int8_t x36 = INT8_MAX;
int32_t x39 = 12474701;
int64_t x44 = INT64_MIN;
int8_t x49 = INT8_MAX;
int32_t x50 = INT32_MIN;
int16_t x51 = INT16_MIN;
int8_t x59 = -52;
uint64_t x63 = UINT64_MAX;
static uint64_t x74 = 171LLU;
int16_t x84 = 29;
static volatile int16_t x85 = INT16_MIN;
int32_t t21 = -2;
volatile int64_t x91 = -74LL;
static int32_t x93 = -1;
volatile int32_t t25 = -106657486;
static int64_t x106 = 0LL;
int32_t x107 = INT32_MIN;
static int8_t x108 = -1;
int32_t t26 = -511070;
volatile int16_t x114 = INT16_MIN;
int16_t x115 = INT16_MAX;
int32_t x120 = INT32_MIN;
int32_t x124 = 242;
static int16_t x138 = INT16_MIN;
uint64_t x139 = 8518227986955844LLU;
int32_t x145 = -1;
static int16_t x153 = INT16_MIN;
static int32_t t37 = 18219027;
static volatile int32_t t38 = 232441;
uint16_t x165 = UINT16_MAX;
int16_t x172 = 45;
volatile int16_t x174 = -115;
static uint16_t x176 = UINT16_MAX;
volatile uint16_t x193 = UINT16_MAX;
static volatile int64_t x197 = -8554409073460LL;
uint8_t x201 = UINT8_MAX;
int16_t x204 = -1;
int32_t t51 = -11;
int16_t x220 = -59;
int8_t x225 = INT8_MIN;
volatile uint16_t x227 = 0U;
int16_t x228 = INT16_MIN;
uint32_t x229 = 6838U;
uint32_t x256 = 65626U;
static int32_t t62 = -775;
volatile uint16_t x257 = UINT16_MAX;
static volatile uint8_t x261 = 1U;
int32_t x264 = INT32_MIN;
static int8_t x269 = 18;
uint64_t x272 = 878342786LLU;
int32_t x276 = -1;
uint32_t x284 = UINT32_MAX;
static uint64_t x294 = 6922809511216679544LLU;
int32_t t71 = 984;
volatile int32_t t72 = -406708459;
int32_t x303 = 10994;
int64_t x304 = 438913147940052309LL;
int16_t x313 = -7310;
volatile int32_t t76 = -7534882;
uint16_t x332 = 1950U;
uint32_t x343 = 1881U;
int64_t x344 = INT64_MAX;
uint16_t x347 = 124U;
int32_t t81 = -12;
volatile int32_t x352 = INT32_MAX;
static int32_t t82 = 2510;
static uint8_t x369 = UINT8_MAX;
int64_t x392 = INT64_MIN;
static volatile int32_t x397 = INT32_MAX;
volatile uint8_t x400 = 23U;
static volatile uint8_t x401 = 0U;
int64_t x412 = INT64_MIN;
int64_t x415 = 19024661953438325LL;
int32_t x417 = -89046;
int8_t x425 = -1;
uint64_t x428 = 4337LLU;
int32_t x442 = INT32_MIN;
int16_t x443 = -31;
int32_t x444 = INT32_MAX;
int32_t x446 = INT32_MIN;
int8_t x448 = INT8_MIN;
uint64_t x475 = UINT64_MAX;
int64_t x477 = -11630918LL;
volatile int32_t t111 = -41336;
int16_t x493 = INT16_MIN;
int32_t x496 = -1;
int64_t x499 = INT64_MAX;
int32_t x508 = INT32_MAX;
volatile int32_t x512 = INT32_MIN;
volatile int8_t x517 = INT8_MIN;
int32_t x520 = -1;
int16_t x524 = -1;
static int16_t x529 = INT16_MAX;
int16_t x532 = INT16_MAX;
volatile int16_t x540 = INT16_MAX;
volatile int32_t x551 = -1;
volatile int32_t x553 = INT32_MIN;
static int16_t x554 = INT16_MAX;
volatile int64_t x555 = INT64_MIN;
volatile int8_t x569 = 14;
uint8_t x573 = 19U;
volatile int32_t t135 = 166;
uint64_t x577 = 370641100275077LLU;
int64_t x582 = -71507173019809LL;
uint16_t x595 = UINT16_MAX;
uint16_t x597 = UINT16_MAX;
static int32_t x602 = INT32_MAX;
volatile int64_t x603 = 189934LL;
static int16_t x612 = 846;
uint8_t x616 = 5U;
int64_t x625 = INT64_MIN;
int64_t x628 = INT64_MIN;
int8_t x630 = 1;
static volatile int32_t x632 = INT32_MIN;
uint8_t x634 = 1U;
int32_t x637 = -1;
static int64_t x639 = INT64_MIN;
static int64_t x644 = INT64_MAX;
uint8_t x645 = UINT8_MAX;
int8_t x651 = -29;
int64_t x652 = -85122506627510LL;
int32_t x655 = -1;
int32_t t154 = -126346229;
uint32_t x662 = 1904027U;
int16_t x663 = INT16_MIN;
static int64_t x664 = -1LL;
volatile int16_t x669 = -1;
volatile int16_t x674 = -410;
volatile int64_t x678 = INT64_MIN;
static int16_t x682 = INT16_MAX;
int32_t t162 = -128228980;
volatile int32_t t163 = 818766;
volatile int8_t x693 = 2;
int8_t x694 = INT8_MIN;
static int16_t x695 = INT16_MIN;
volatile int32_t t164 = 103716120;
int32_t x698 = 15908;
volatile uint8_t x702 = 31U;
int32_t x710 = INT32_MAX;
volatile int32_t t168 = -139423744;
static int64_t x714 = INT64_MIN;
volatile int32_t t170 = -133695241;
int16_t x721 = -1;
uint64_t x723 = 32581082936LLU;
int8_t x724 = -1;
static int64_t x727 = -1LL;
static int32_t x728 = INT32_MIN;
volatile int16_t x732 = INT16_MAX;
volatile uint16_t x740 = 3U;
int8_t x747 = 1;
static volatile int64_t x748 = INT64_MIN;
static int8_t x752 = INT8_MIN;
int64_t x753 = 31434761985632970LL;
uint8_t x754 = 15U;
int32_t x758 = INT32_MIN;
volatile int32_t t181 = 494430869;
int8_t x766 = -18;
uint64_t x772 = 25LLU;
int32_t x778 = INT32_MIN;
int16_t x780 = -2441;
volatile int8_t x783 = -1;
int16_t x785 = INT16_MAX;
static int16_t x787 = INT16_MIN;
static int8_t x792 = INT8_MIN;
volatile int32_t x799 = -1;
int8_t x800 = -1;
uint32_t x801 = 1U;
int8_t x803 = INT8_MIN;
int32_t x809 = INT32_MIN;
int8_t x810 = INT8_MAX;
uint16_t x824 = 15791U;
int32_t x827 = INT32_MAX;
int8_t x828 = INT8_MIN;
uint32_t x829 = 7052U;
int8_t x831 = INT8_MAX;
volatile int32_t t199 = -34670937;


void f0(void) {
    	volatile int8_t x1 = 44;
	int8_t x3 = -1;
	volatile int32_t t0 = 79;

    t0 = (x1==(x2>(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -235063294951005085LL;
	int32_t x6 = INT32_MIN;
	static volatile int64_t x8 = INT64_MAX;
	static int32_t t1 = 11718691;

    t1 = (x5==(x6>(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int8_t x10 = -1;
	int16_t x11 = INT16_MIN;
	volatile int32_t t2 = 0;

    t2 = (x9==(x10>(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = UINT8_MAX;
	int8_t x14 = -1;
	uint32_t x16 = 1757U;

    t3 = (x13==(x14>(x15%x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MAX;
	int16_t x18 = -1;
	static int8_t x19 = -9;
	static volatile int8_t x20 = INT8_MAX;

    t4 = (x17==(x18>(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	volatile uint64_t x22 = UINT64_MAX;
	uint8_t x23 = 0U;
	static volatile int32_t t5 = 1;

    t5 = (x21==(x22>(x23%x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 660178459U;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = 1U;
	uint8_t x28 = 49U;

    t6 = (x25==(x26>(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	uint32_t x32 = 38U;
	int32_t t7 = -1733;

    t7 = (x29==(x30>(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = -20137943134LL;
	volatile uint64_t x35 = 217970060612LLU;
	int32_t t8 = 100364;

    t8 = (x33==(x34>(x35%x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -3;
	int64_t x38 = -727993LL;
	int16_t x40 = INT16_MAX;
	int32_t t9 = -1611065;

    t9 = (x37==(x38>(x39%x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	uint16_t x42 = 4U;
	volatile int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 7852;

    t10 = (x41==(x42>(x43%x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 73936;
	int8_t x46 = -1;
	uint32_t x47 = 769U;
	volatile int32_t x48 = 1289727;
	int32_t t11 = 68;

    t11 = (x45==(x46>(x47%x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x52 = 61662359LLU;
	int32_t t12 = 1;

    t12 = (x49==(x50>(x51%x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 31910205U;
	static int64_t x54 = -232LL;
	int32_t x55 = 1;
	volatile uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 11;

    t13 = (x53==(x54>(x55%x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = INT32_MIN;
	uint32_t x58 = 24406939U;
	int64_t x60 = -1LL;
	volatile int32_t t14 = 128079;

    t14 = (x57==(x58>(x59%x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 140860913U;
	uint32_t x62 = 665480U;
	int32_t x64 = INT32_MAX;
	static volatile int32_t t15 = -491;

    t15 = (x61==(x62>(x63%x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 2680LLU;
	static volatile int8_t x67 = 23;
	static uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -136348;

    t16 = (x65==(x66>(x67%x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	uint16_t x70 = 1004U;
	uint32_t x71 = 344044U;
	int8_t x72 = -2;
	int32_t t17 = -173897099;

    t17 = (x69==(x70>(x71%x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	volatile int8_t x75 = INT8_MIN;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -750;

    t18 = (x73==(x74>(x75%x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = UINT64_MAX;
	int16_t x78 = 1;
	volatile int64_t x79 = -1LL;
	static uint16_t x80 = 2484U;
	volatile int32_t t19 = -14;

    t19 = (x77==(x78>(x79%x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 10;
	int64_t x82 = -1LL;
	static int32_t x83 = 43994965;
	int32_t t20 = 94949;

    t20 = (x81==(x82>(x83%x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = INT16_MIN;
	uint8_t x87 = 1U;
	int64_t x88 = -1LL;

    t21 = (x85==(x86>(x87%x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 1493054286370635LL;
	volatile int16_t x90 = 1;
	uint32_t x92 = 5202117U;
	int32_t t22 = -30231350;

    t22 = (x89==(x90>(x91%x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 0U;
	int16_t x95 = -1;
	int32_t x96 = INT32_MIN;
	int32_t t23 = -31;

    t23 = (x93==(x94>(x95%x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x97 = 3554U;
	uint64_t x98 = UINT64_MAX;
	volatile int64_t x99 = INT64_MAX;
	volatile uint64_t x100 = 541LLU;
	volatile int32_t t24 = 0;

    t24 = (x97==(x98>(x99%x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = 104U;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	static volatile int8_t x104 = INT8_MIN;

    t25 = (x101==(x102>(x103%x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;

    t26 = (x105==(x106>(x107%x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 0;
	int16_t x110 = -3370;
	static uint32_t x111 = 1634U;
	int32_t x112 = -1;
	int32_t t27 = -903327465;

    t27 = (x109==(x110>(x111%x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	uint8_t x116 = 15U;
	int32_t t28 = -37128908;

    t28 = (x113==(x114>(x115%x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 5122398LLU;
	volatile uint64_t x118 = 120489669458LLU;
	static uint64_t x119 = UINT64_MAX;
	int32_t t29 = 9293;

    t29 = (x117==(x118>(x119%x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = -1;
	int32_t x122 = 1898;
	static uint64_t x123 = UINT64_MAX;
	static volatile int32_t t30 = 4892;

    t30 = (x121==(x122>(x123%x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	uint16_t x126 = 14U;
	volatile int16_t x127 = INT16_MAX;
	static int64_t x128 = 2LL;
	volatile int32_t t31 = -1122;

    t31 = (x125==(x126>(x127%x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = 62U;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 955;

    t32 = (x129==(x130>(x131%x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 37386LLU;
	static uint32_t x134 = UINT32_MAX;
	static uint64_t x135 = 32442256306449832LLU;
	uint16_t x136 = 185U;
	int32_t t33 = -514887614;

    t33 = (x133==(x134>(x135%x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	int32_t x140 = 74;
	volatile int32_t t34 = 14;

    t34 = (x137==(x138>(x139%x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x146 = INT32_MIN;
	int16_t x147 = 10;
	volatile int16_t x148 = -1;
	static int32_t t35 = -21;

    t35 = (x145==(x146>(x147%x148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	static uint16_t x150 = 890U;
	uint32_t x151 = 887507U;
	int8_t x152 = -1;
	int32_t t36 = -1;

    t36 = (x149==(x150>(x151%x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x154 = INT16_MAX;
	int16_t x155 = -1;
	uint8_t x156 = 24U;

    t37 = (x153==(x154>(x155%x156)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x157 = INT16_MIN;
	static uint32_t x158 = 36199U;
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MAX;

    t38 = (x157==(x158>(x159%x160)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = 16171855LL;
	volatile int32_t x162 = -1;
	volatile uint16_t x163 = 284U;
	volatile int16_t x164 = -7786;
	static int32_t t39 = 28770705;

    t39 = (x161==(x162>(x163%x164)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x166 = INT16_MAX;
	static volatile int8_t x167 = INT8_MIN;
	static int64_t x168 = INT64_MAX;
	int32_t t40 = -101;

    t40 = (x165==(x166>(x167%x168)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 3U;
	int32_t t41 = 536010759;

    t41 = (x169==(x170>(x171%x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x173 = -1;
	volatile uint64_t x175 = 56620490794901LLU;
	int32_t t42 = -48;

    t42 = (x173==(x174>(x175%x176)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x177 = UINT64_MAX;
	static int32_t x178 = INT32_MIN;
	volatile int64_t x179 = INT64_MIN;
	static int32_t x180 = -1;
	static int32_t t43 = 9;

    t43 = (x177==(x178>(x179%x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x181 = 13909863905380113LLU;
	volatile int8_t x182 = -31;
	uint64_t x183 = 9754357805216LLU;
	uint16_t x184 = 13U;
	int32_t t44 = -20334;

    t44 = (x181==(x182>(x183%x184)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MAX;
	int16_t x188 = -1;
	int32_t t45 = -1;

    t45 = (x185==(x186>(x187%x188)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	uint8_t x190 = 1U;
	static int16_t x191 = INT16_MAX;
	volatile int32_t x192 = 178812716;
	int32_t t46 = 0;

    t46 = (x189==(x190>(x191%x192)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = 173815;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = -1;

    t47 = (x193==(x194>(x195%x196)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x198 = -1;
	uint16_t x199 = 816U;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t48 = -5507;

    t48 = (x197==(x198>(x199%x200)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x202 = 3378U;
	volatile uint32_t x203 = 10445351U;
	volatile int32_t t49 = 251625228;

    t49 = (x201==(x202>(x203%x204)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x205 = -1;
	uint64_t x206 = 89708195822LLU;
	static int16_t x207 = -307;
	volatile int8_t x208 = INT8_MAX;
	static int32_t t50 = 441331;

    t50 = (x205==(x206>(x207%x208)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	uint64_t x210 = 6245653931584040545LLU;
	volatile int8_t x211 = INT8_MAX;
	uint8_t x212 = 64U;

    t51 = (x209==(x210>(x211%x212)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x213 = -106463619664LL;
	uint16_t x214 = 1699U;
	uint8_t x215 = 1U;
	volatile uint8_t x216 = 30U;
	int32_t t52 = 10;

    t52 = (x213==(x214>(x215%x216)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = -20;
	uint8_t x218 = 5U;
	uint32_t x219 = 344317595U;
	int32_t t53 = 84;

    t53 = (x217==(x218>(x219%x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x222 = -102;
	volatile uint16_t x223 = 13U;
	static uint16_t x224 = 11U;
	static int32_t t54 = -7044;

    t54 = (x221==(x222>(x223%x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x226 = 7873;
	static volatile int32_t t55 = 19319;

    t55 = (x225==(x226>(x227%x228)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x230 = 115U;
	int8_t x231 = INT8_MIN;
	volatile int32_t x232 = -1;
	int32_t t56 = -3800;

    t56 = (x229==(x230>(x231%x232)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x233 = 1221U;
	volatile int16_t x234 = -1;
	int16_t x235 = 1;
	int32_t x236 = INT32_MAX;
	volatile int32_t t57 = 27;

    t57 = (x233==(x234>(x235%x236)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x237 = 30445275LLU;
	volatile int64_t x238 = -15001620642467LL;
	uint8_t x239 = UINT8_MAX;
	static uint16_t x240 = 51U;
	int32_t t58 = 8513216;

    t58 = (x237==(x238>(x239%x240)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x241 = -2;
	int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MAX;
	static int32_t t59 = -4048;

    t59 = (x241==(x242>(x243%x244)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = -1;
	static uint8_t x246 = 6U;
	static uint32_t x247 = 0U;
	int32_t x248 = INT32_MAX;
	int32_t t60 = -18427441;

    t60 = (x245==(x246>(x247%x248)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x249 = 2LLU;
	int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MAX;
	volatile uint8_t x252 = 31U;
	volatile int32_t t61 = 31532;

    t61 = (x249==(x250>(x251%x252)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x253 = INT16_MAX;
	volatile int8_t x254 = INT8_MIN;
	static uint8_t x255 = UINT8_MAX;

    t62 = (x253==(x254>(x255%x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x258 = 0;
	int8_t x259 = INT8_MAX;
	static int32_t x260 = -1;
	int32_t t63 = -1;

    t63 = (x257==(x258>(x259%x260)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x262 = INT16_MIN;
	volatile uint16_t x263 = 504U;
	int32_t t64 = -1;

    t64 = (x261==(x262>(x263%x264)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x270 = 3636325LLU;
	static volatile int32_t x271 = INT32_MAX;
	int32_t t65 = 1;

    t65 = (x269==(x270>(x271%x272)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	volatile int8_t x275 = -1;
	volatile int32_t t66 = 52912753;

    t66 = (x273==(x274>(x275%x276)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MAX;
	int32_t x278 = -1;
	static uint8_t x279 = UINT8_MAX;
	static int16_t x280 = INT16_MAX;
	int32_t t67 = 37932;

    t67 = (x277==(x278>(x279%x280)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 22U;
	uint64_t x282 = 160937279LLU;
	int64_t x283 = INT64_MAX;
	static int32_t t68 = 6;

    t68 = (x281==(x282>(x283%x284)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x285 = 28914423LLU;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	static uint64_t x288 = 115002LLU;
	volatile int32_t t69 = -422280921;

    t69 = (x285==(x286>(x287%x288)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	volatile int16_t x290 = -1;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = -24184963LL;
	int32_t t70 = 1;

    t70 = (x289==(x290>(x291%x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = -3LL;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;

    t71 = (x293==(x294>(x295%x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x297 = UINT16_MAX;
	int32_t x298 = -2;
	static int8_t x299 = 5;
	int16_t x300 = INT16_MIN;

    t72 = (x297==(x298>(x299%x300)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int32_t t73 = -16389530;

    t73 = (x301==(x302>(x303%x304)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = 93;
	int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	static volatile int16_t x308 = INT16_MAX;
	volatile int32_t t74 = -299227;

    t74 = (x305==(x306>(x307%x308)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x309 = -1;
	volatile int16_t x310 = -1;
	int16_t x311 = 27;
	int64_t x312 = INT64_MAX;
	volatile int32_t t75 = 8528352;

    t75 = (x309==(x310>(x311%x312)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x314 = 3430U;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 5182LLU;

    t76 = (x313==(x314>(x315%x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x317 = 2U;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t77 = -874;

    t77 = (x317==(x318>(x319%x320)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x329 = 277322392U;
	int32_t x330 = INT32_MAX;
	uint16_t x331 = 2746U;
	int32_t t78 = 69;

    t78 = (x329==(x330>(x331%x332)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	volatile int32_t x335 = INT32_MIN;
	int8_t x336 = -23;
	volatile int32_t t79 = 428064012;

    t79 = (x333==(x334>(x335%x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x341 = UINT8_MAX;
	volatile uint32_t x342 = 370546U;
	volatile int32_t t80 = 76841407;

    t80 = (x341==(x342>(x343%x344)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x345 = 2871370;
	static volatile int64_t x346 = 395LL;
	int32_t x348 = INT32_MAX;

    t81 = (x345==(x346>(x347%x348)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MAX;
	int16_t x350 = -1;
	volatile int64_t x351 = INT64_MAX;

    t82 = (x349==(x350>(x351%x352)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	static int8_t x355 = -1;
	volatile int32_t x356 = -1;
	volatile int32_t t83 = -1;

    t83 = (x353==(x354>(x355%x356)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = INT16_MAX;
	volatile int8_t x362 = -1;
	uint8_t x363 = 3U;
	uint8_t x364 = 4U;
	int32_t t84 = 205;

    t84 = (x361==(x362>(x363%x364)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x365 = -1LL;
	uint8_t x366 = 43U;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = UINT8_MAX;
	int32_t t85 = -22060343;

    t85 = (x365==(x366>(x367%x368)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = -1LL;
	int64_t x372 = -2837083LL;
	static volatile int32_t t86 = -41;

    t86 = (x369==(x370>(x371%x372)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x373 = -93;
	static volatile int16_t x374 = INT16_MAX;
	uint64_t x375 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;
	int32_t t87 = -4;

    t87 = (x373==(x374>(x375%x376)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x377 = 1321044779LLU;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -9908553158923571LL;
	int64_t x380 = 44029610915482608LL;
	static volatile int32_t t88 = 4147556;

    t88 = (x377==(x378>(x379%x380)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x381 = 12LLU;
	uint32_t x382 = 242350U;
	int32_t x383 = INT32_MIN;
	volatile int16_t x384 = INT16_MIN;
	int32_t t89 = -122785;

    t89 = (x381==(x382>(x383%x384)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x385 = 441324536U;
	static int32_t x386 = -1;
	int32_t x387 = -220474278;
	static volatile int16_t x388 = INT16_MIN;
	int32_t t90 = 834639;

    t90 = (x385==(x386>(x387%x388)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x389 = 176U;
	volatile int8_t x390 = -1;
	volatile int64_t x391 = 6LL;
	int32_t t91 = 496;

    t91 = (x389==(x390>(x391%x392)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x393 = 1220241U;
	volatile int32_t x394 = -262558;
	uint64_t x395 = 872722925012LLU;
	static uint32_t x396 = 8875U;
	int32_t t92 = -1;

    t92 = (x393==(x394>(x395%x396)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x398 = INT16_MAX;
	volatile int16_t x399 = 3720;
	static volatile int32_t t93 = -281291660;

    t93 = (x397==(x398>(x399%x400)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x402 = 33028;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 32653U;
	volatile int32_t t94 = 24216225;

    t94 = (x401==(x402>(x403%x404)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x405 = INT32_MAX;
	int16_t x406 = 391;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -4163166599LL;
	static volatile int32_t t95 = 151;

    t95 = (x405==(x406>(x407%x408)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MAX;
	int64_t x411 = INT64_MIN;
	int32_t t96 = -1357;

    t96 = (x409==(x410>(x411%x412)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x413 = UINT8_MAX;
	static uint16_t x414 = 0U;
	int8_t x416 = -41;
	volatile int32_t t97 = 3;

    t97 = (x413==(x414>(x415%x416)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x418 = 4U;
	int16_t x419 = -2;
	volatile uint32_t x420 = UINT32_MAX;
	volatile int32_t t98 = 32281044;

    t98 = (x417==(x418>(x419%x420)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x421 = -1;
	volatile int64_t x422 = -287846951276453LL;
	static int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t99 = -2;

    t99 = (x421==(x422>(x423%x424)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x426 = -1;
	volatile int16_t x427 = -1;
	volatile int32_t t100 = 1;

    t100 = (x425==(x426>(x427%x428)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x429 = 2220945897541847562LL;
	uint32_t x430 = UINT32_MAX;
	volatile uint16_t x431 = 6830U;
	uint64_t x432 = 1675240749585120LLU;
	int32_t t101 = -278248;

    t101 = (x429==(x430>(x431%x432)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MIN;
	static uint64_t x435 = 124869459LLU;
	int32_t x436 = 10684;
	volatile int32_t t102 = -21757899;

    t102 = (x433==(x434>(x435%x436)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x437 = UINT16_MAX;
	int64_t x438 = INT64_MAX;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = -1;
	int32_t t103 = 1261;

    t103 = (x437==(x438>(x439%x440)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x441 = 1U;
	int32_t t104 = -59;

    t104 = (x441==(x442>(x443%x444)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x445 = -1;
	uint32_t x447 = UINT32_MAX;
	volatile int32_t t105 = 1;

    t105 = (x445==(x446>(x447%x448)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x453 = -1;
	uint8_t x454 = UINT8_MAX;
	static int64_t x455 = -77250875954558LL;
	int32_t x456 = 198638;
	static int32_t t106 = -130889;

    t106 = (x453==(x454>(x455%x456)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x457 = 21;
	static int16_t x458 = -49;
	int8_t x459 = -3;
	int16_t x460 = -1;
	volatile int32_t t107 = 282739;

    t107 = (x457==(x458>(x459%x460)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x461 = INT8_MIN;
	static volatile uint32_t x462 = UINT32_MAX;
	uint16_t x463 = UINT16_MAX;
	int8_t x464 = -1;
	static volatile int32_t t108 = 197504;

    t108 = (x461==(x462>(x463%x464)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x465 = 61U;
	int64_t x466 = -459867077183530499LL;
	int64_t x467 = INT64_MAX;
	static volatile uint64_t x468 = 78619010907245LLU;
	int32_t t109 = -31239;

    t109 = (x465==(x466>(x467%x468)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x473 = -1;
	int64_t x474 = -516LL;
	int8_t x476 = -1;
	int32_t t110 = -130566642;

    t110 = (x473==(x474>(x475%x476)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x478 = UINT32_MAX;
	uint8_t x479 = 0U;
	uint8_t x480 = 2U;

    t111 = (x477==(x478>(x479%x480)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint32_t x481 = 1027U;
	volatile int8_t x482 = 1;
	static uint64_t x483 = UINT64_MAX;
	int8_t x484 = -1;
	volatile int32_t t112 = -761;

    t112 = (x481==(x482>(x483%x484)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	volatile int32_t x486 = INT32_MAX;
	int64_t x487 = 1985275LL;
	uint8_t x488 = 121U;
	volatile int32_t t113 = -1067582584;

    t113 = (x485==(x486>(x487%x488)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = INT64_MIN;
	int16_t x490 = INT16_MIN;
	int32_t x491 = -1;
	int8_t x492 = INT8_MIN;
	int32_t t114 = 1;

    t114 = (x489==(x490>(x491%x492)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x494 = UINT16_MAX;
	uint32_t x495 = 2338842U;
	volatile int32_t t115 = -26632;

    t115 = (x493==(x494>(x495%x496)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x497 = -5;
	int8_t x498 = 2;
	uint16_t x500 = 2189U;
	int32_t t116 = 232494;

    t116 = (x497==(x498>(x499%x500)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x501 = 11U;
	static volatile int32_t x502 = 81;
	int16_t x503 = 657;
	static int8_t x504 = INT8_MIN;
	int32_t t117 = -439;

    t117 = (x501==(x502>(x503%x504)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x505 = 8597U;
	int8_t x506 = INT8_MIN;
	int32_t x507 = INT32_MAX;
	static int32_t t118 = -700;

    t118 = (x505==(x506>(x507%x508)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x509 = INT8_MAX;
	int8_t x510 = INT8_MIN;
	int64_t x511 = INT64_MIN;
	static int32_t t119 = 364033;

    t119 = (x509==(x510>(x511%x512)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x513 = 527990960170LL;
	int32_t x514 = INT32_MIN;
	int16_t x515 = 2765;
	static int16_t x516 = -106;
	volatile int32_t t120 = -880;

    t120 = (x513==(x514>(x515%x516)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x518 = INT16_MIN;
	static int8_t x519 = INT8_MIN;
	int32_t t121 = 19816;

    t121 = (x517==(x518>(x519%x520)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x521 = 11;
	static volatile int32_t x522 = 1;
	static int16_t x523 = -1;
	static volatile int32_t t122 = -8693872;

    t122 = (x521==(x522>(x523%x524)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x525 = 7U;
	static volatile uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MAX;
	static int8_t x528 = -35;
	int32_t t123 = -64764164;

    t123 = (x525==(x526>(x527%x528)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x530 = INT64_MIN;
	uint8_t x531 = 44U;
	int32_t t124 = 8;

    t124 = (x529==(x530>(x531%x532)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = -64550918;
	static int32_t x534 = INT32_MAX;
	volatile uint16_t x535 = UINT16_MAX;
	int64_t x536 = INT64_MIN;
	volatile int32_t t125 = -11;

    t125 = (x533==(x534>(x535%x536)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x537 = 14999U;
	static uint16_t x538 = 658U;
	static int16_t x539 = -1;
	volatile int32_t t126 = 3;

    t126 = (x537==(x538>(x539%x540)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x541 = UINT8_MAX;
	int64_t x542 = -1LL;
	uint8_t x543 = 9U;
	int32_t x544 = -2332503;
	static volatile int32_t t127 = 235;

    t127 = (x541==(x542>(x543%x544)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x545 = 0;
	static int64_t x546 = INT64_MIN;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = -4;
	int32_t t128 = 33326775;

    t128 = (x545==(x546>(x547%x548)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x549 = -15;
	uint32_t x550 = UINT32_MAX;
	int64_t x552 = 280854010146483571LL;
	int32_t t129 = -780081837;

    t129 = (x549==(x550>(x551%x552)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x556 = 410875005U;
	int32_t t130 = -101023967;

    t130 = (x553==(x554>(x555%x556)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x557 = INT16_MAX;
	static int16_t x558 = INT16_MIN;
	uint64_t x559 = UINT64_MAX;
	volatile int32_t x560 = INT32_MIN;
	static int32_t t131 = -363605;

    t131 = (x557==(x558>(x559%x560)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x561 = INT64_MIN;
	uint8_t x562 = 30U;
	uint16_t x563 = UINT16_MAX;
	volatile uint64_t x564 = UINT64_MAX;
	static volatile int32_t t132 = 1;

    t132 = (x561==(x562>(x563%x564)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x565 = 467U;
	static uint32_t x566 = 1U;
	volatile uint8_t x567 = UINT8_MAX;
	int64_t x568 = 15006LL;
	volatile int32_t t133 = 25;

    t133 = (x565==(x566>(x567%x568)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x570 = UINT64_MAX;
	int32_t x571 = 5448;
	int16_t x572 = -242;
	static volatile int32_t t134 = -545418;

    t134 = (x569==(x570>(x571%x572)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x574 = INT64_MIN;
	uint8_t x575 = 2U;
	int8_t x576 = -26;

    t135 = (x573==(x574>(x575%x576)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x578 = UINT32_MAX;
	int64_t x579 = INT64_MIN;
	int32_t x580 = -1;
	static int32_t t136 = -5155;

    t136 = (x577==(x578>(x579%x580)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x581 = 38U;
	uint64_t x583 = 26LLU;
	volatile int32_t x584 = INT32_MIN;
	volatile int32_t t137 = -1;

    t137 = (x581==(x582>(x583%x584)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = INT16_MIN;
	int32_t x586 = INT32_MIN;
	volatile int64_t x587 = INT64_MAX;
	volatile uint8_t x588 = UINT8_MAX;
	int32_t t138 = 12101442;

    t138 = (x585==(x586>(x587%x588)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x589 = 0U;
	int32_t x590 = INT32_MIN;
	volatile uint16_t x591 = 5106U;
	int32_t x592 = -1;
	volatile int32_t t139 = 12298;

    t139 = (x589==(x590>(x591%x592)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x593 = INT64_MIN;
	int16_t x594 = -8;
	int32_t x596 = INT32_MAX;
	volatile int32_t t140 = 21;

    t140 = (x593==(x594>(x595%x596)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x598 = 1U;
	int64_t x599 = INT64_MIN;
	static int16_t x600 = INT16_MIN;
	volatile int32_t t141 = -1;

    t141 = (x597==(x598>(x599%x600)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x601 = 1;
	volatile int32_t x604 = INT32_MIN;
	volatile int32_t t142 = 68827;

    t142 = (x601==(x602>(x603%x604)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x605 = INT8_MIN;
	volatile int8_t x606 = 1;
	volatile int16_t x607 = INT16_MIN;
	int16_t x608 = -7714;
	static int32_t t143 = 0;

    t143 = (x605==(x606>(x607%x608)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = 37;
	uint8_t x610 = UINT8_MAX;
	int32_t x611 = -523296;
	volatile int32_t t144 = -487745881;

    t144 = (x609==(x610>(x611%x612)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x613 = INT16_MIN;
	volatile int16_t x614 = 2;
	volatile int32_t x615 = INT32_MIN;
	int32_t t145 = 569353;

    t145 = (x613==(x614>(x615%x616)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x617 = INT16_MIN;
	volatile int16_t x618 = -2;
	uint32_t x619 = 37513U;
	static volatile uint64_t x620 = 2725LLU;
	volatile int32_t t146 = 464517;

    t146 = (x617==(x618>(x619%x620)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x626 = 56579269367248LLU;
	int8_t x627 = INT8_MIN;
	int32_t t147 = 2;

    t147 = (x625==(x626>(x627%x628)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x629 = INT32_MIN;
	static uint8_t x631 = UINT8_MAX;
	int32_t t148 = 3787192;

    t148 = (x629==(x630>(x631%x632)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x633 = 1U;
	int16_t x635 = INT16_MIN;
	int32_t x636 = -1;
	int32_t t149 = -815712;

    t149 = (x633==(x634>(x635%x636)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x638 = INT8_MIN;
	volatile int8_t x640 = -1;
	int32_t t150 = 1;

    t150 = (x637==(x638>(x639%x640)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x641 = UINT8_MAX;
	uint32_t x642 = UINT32_MAX;
	int32_t x643 = INT32_MIN;
	volatile int32_t t151 = 219;

    t151 = (x641==(x642>(x643%x644)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x646 = -6;
	static int8_t x647 = 3;
	int16_t x648 = 7;
	int32_t t152 = 245384;

    t152 = (x645==(x646>(x647%x648)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x649 = INT8_MIN;
	static volatile uint64_t x650 = UINT64_MAX;
	static int32_t t153 = -109281304;

    t153 = (x649==(x650>(x651%x652)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x653 = INT32_MIN;
	int32_t x654 = 2951112;
	volatile int64_t x656 = -1LL;

    t154 = (x653==(x654>(x655%x656)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x657 = INT32_MIN;
	int8_t x658 = INT8_MIN;
	int64_t x659 = -3234LL;
	uint32_t x660 = 11891150U;
	int32_t t155 = 1096400;

    t155 = (x657==(x658>(x659%x660)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x661 = 15U;
	volatile int32_t t156 = 26318;

    t156 = (x661==(x662>(x663%x664)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x665 = INT8_MIN;
	int8_t x666 = -5;
	int64_t x667 = -42249603123LL;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t157 = 433106253;

    t157 = (x665==(x666>(x667%x668)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x670 = INT8_MIN;
	int16_t x671 = INT16_MIN;
	static uint16_t x672 = 12805U;
	int32_t t158 = -48769;

    t158 = (x669==(x670>(x671%x672)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x673 = UINT32_MAX;
	static int64_t x675 = -1LL;
	static volatile uint16_t x676 = 5U;
	int32_t t159 = -719445654;

    t159 = (x673==(x674>(x675%x676)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x677 = 2U;
	uint64_t x679 = 6149897869LLU;
	int64_t x680 = -1LL;
	int32_t t160 = 10818;

    t160 = (x677==(x678>(x679%x680)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x681 = -24027176LL;
	uint16_t x683 = UINT16_MAX;
	static int64_t x684 = 47488370097309650LL;
	int32_t t161 = -37124904;

    t161 = (x681==(x682>(x683%x684)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x685 = 7606;
	uint32_t x686 = 126899357U;
	int32_t x687 = INT32_MAX;
	uint64_t x688 = UINT64_MAX;

    t162 = (x685==(x686>(x687%x688)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x689 = INT64_MIN;
	int16_t x690 = -1819;
	int64_t x691 = 67021269856LL;
	int32_t x692 = 29;

    t163 = (x689==(x690>(x691%x692)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x696 = INT16_MIN;

    t164 = (x693==(x694>(x695%x696)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x697 = -7377LL;
	int16_t x699 = -455;
	uint16_t x700 = 1513U;
	volatile int32_t t165 = 4334722;

    t165 = (x697==(x698>(x699%x700)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x701 = INT8_MIN;
	int64_t x703 = INT64_MAX;
	static uint8_t x704 = 2U;
	volatile int32_t t166 = -2649;

    t166 = (x701==(x702>(x703%x704)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x705 = INT64_MAX;
	volatile int16_t x706 = INT16_MIN;
	static int32_t x707 = -454250933;
	uint64_t x708 = UINT64_MAX;
	static volatile int32_t t167 = 166876236;

    t167 = (x705==(x706>(x707%x708)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = INT32_MIN;
	int8_t x711 = -2;
	int16_t x712 = INT16_MIN;

    t168 = (x709==(x710>(x711%x712)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x713 = 13501339745LLU;
	static uint64_t x715 = UINT64_MAX;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t169 = 95825815;

    t169 = (x713==(x714>(x715%x716)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x717 = -4;
	int16_t x718 = -549;
	static int16_t x719 = INT16_MIN;
	int32_t x720 = -111834692;

    t170 = (x717==(x718>(x719%x720)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x722 = UINT8_MAX;
	int32_t t171 = 1;

    t171 = (x721==(x722>(x723%x724)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x725 = UINT64_MAX;
	int32_t x726 = INT32_MIN;
	volatile int32_t t172 = 774583;

    t172 = (x725==(x726>(x727%x728)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x729 = -4905125LL;
	volatile int32_t x730 = -1;
	uint8_t x731 = UINT8_MAX;
	int32_t t173 = -1;

    t173 = (x729==(x730>(x731%x732)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x733 = INT32_MAX;
	int64_t x734 = -447795000362059LL;
	static int32_t x735 = -1;
	static uint32_t x736 = 27794390U;
	int32_t t174 = 245616;

    t174 = (x733==(x734>(x735%x736)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x737 = UINT8_MAX;
	volatile int32_t x738 = INT32_MAX;
	int8_t x739 = -1;
	volatile int32_t t175 = 95587;

    t175 = (x737==(x738>(x739%x740)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = -435876937;
	static uint64_t x742 = 6527449015603LLU;
	uint16_t x743 = 15467U;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t176 = -1;

    t176 = (x741==(x742>(x743%x744)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x745 = 884U;
	static uint16_t x746 = 24U;
	int32_t t177 = 865;

    t177 = (x745==(x746>(x747%x748)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x749 = 106LLU;
	uint8_t x750 = 1U;
	static volatile int64_t x751 = 64479941004LL;
	int32_t t178 = -1;

    t178 = (x749==(x750>(x751%x752)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x755 = 3750U;
	static uint16_t x756 = UINT16_MAX;
	static int32_t t179 = -1981067;

    t179 = (x753==(x754>(x755%x756)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x757 = INT8_MAX;
	uint16_t x759 = UINT16_MAX;
	int64_t x760 = INT64_MIN;
	static int32_t t180 = -36;

    t180 = (x757==(x758>(x759%x760)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x761 = INT64_MIN;
	uint64_t x762 = 2594924410331LLU;
	int32_t x763 = INT32_MIN;
	volatile int32_t x764 = -1;

    t181 = (x761==(x762>(x763%x764)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x765 = 1U;
	static volatile int64_t x767 = -1LL;
	uint8_t x768 = 3U;
	static int32_t t182 = -887;

    t182 = (x765==(x766>(x767%x768)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = -1;
	volatile uint64_t x770 = UINT64_MAX;
	int64_t x771 = INT64_MAX;
	int32_t t183 = 5029;

    t183 = (x769==(x770>(x771%x772)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x773 = UINT32_MAX;
	int32_t x774 = 5;
	uint64_t x775 = 63171694642587LLU;
	volatile int8_t x776 = -1;
	static int32_t t184 = 271;

    t184 = (x773==(x774>(x775%x776)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x777 = INT16_MAX;
	static volatile uint64_t x779 = 1072846879630LLU;
	int32_t t185 = 3600;

    t185 = (x777==(x778>(x779%x780)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x781 = INT64_MIN;
	static uint64_t x782 = 42579496012151912LLU;
	int8_t x784 = 1;
	int32_t t186 = 899726;

    t186 = (x781==(x782>(x783%x784)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x786 = -1LL;
	static int64_t x788 = -3244599LL;
	int32_t t187 = -75;

    t187 = (x785==(x786>(x787%x788)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x789 = 10484;
	uint64_t x790 = 1LLU;
	int64_t x791 = INT64_MIN;
	volatile int32_t t188 = 7;

    t188 = (x789==(x790>(x791%x792)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x793 = 28819413LL;
	volatile int16_t x794 = INT16_MIN;
	int16_t x795 = INT16_MIN;
	volatile int32_t x796 = INT32_MIN;
	int32_t t189 = 3;

    t189 = (x793==(x794>(x795%x796)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x797 = INT16_MIN;
	uint8_t x798 = 53U;
	volatile int32_t t190 = 943;

    t190 = (x797==(x798>(x799%x800)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x802 = 394486009008739LLU;
	uint16_t x804 = 50U;
	int32_t t191 = -37550;

    t191 = (x801==(x802>(x803%x804)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x805 = 28U;
	int8_t x806 = INT8_MIN;
	uint16_t x807 = UINT16_MAX;
	volatile int16_t x808 = INT16_MIN;
	volatile int32_t t192 = -7652229;

    t192 = (x805==(x806>(x807%x808)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x811 = UINT64_MAX;
	int64_t x812 = INT64_MIN;
	int32_t t193 = 1016;

    t193 = (x809==(x810>(x811%x812)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x813 = INT32_MAX;
	int64_t x814 = INT64_MIN;
	int16_t x815 = INT16_MIN;
	int64_t x816 = INT64_MIN;
	volatile int32_t t194 = -366;

    t194 = (x813==(x814>(x815%x816)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x817 = INT64_MIN;
	int64_t x818 = -1LL;
	int8_t x819 = -1;
	volatile uint8_t x820 = 78U;
	static int32_t t195 = -1247;

    t195 = (x817==(x818>(x819%x820)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x821 = UINT32_MAX;
	uint16_t x822 = 484U;
	uint16_t x823 = 0U;
	int32_t t196 = 25281;

    t196 = (x821==(x822>(x823%x824)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x825 = 4897858402LL;
	int8_t x826 = INT8_MIN;
	volatile int32_t t197 = -12692917;

    t197 = (x825==(x826>(x827%x828)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x830 = 69801286136515LL;
	int16_t x832 = INT16_MAX;
	static int32_t t198 = 1243369;

    t198 = (x829==(x830>(x831%x832)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x833 = 900264939U;
	int32_t x834 = INT32_MIN;
	static volatile int64_t x835 = INT64_MAX;
	uint8_t x836 = 4U;

    t199 = (x833==(x834>(x835%x836)));

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

