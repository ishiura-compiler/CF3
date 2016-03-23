
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

int16_t x4 = INT16_MAX;
static int64_t x7 = INT64_MIN;
int8_t x8 = INT8_MAX;
int64_t x9 = -1LL;
static int16_t x19 = 911;
static int32_t x22 = -3;
static volatile int8_t x26 = INT8_MIN;
int64_t x27 = -1LL;
int64_t x28 = 81468632187218534LL;
volatile uint16_t x30 = 2834U;
uint32_t x35 = 24U;
uint64_t x48 = 85901789LLU;
uint8_t x50 = 12U;
uint64_t x55 = UINT64_MAX;
volatile uint64_t x60 = UINT64_MAX;
int64_t x66 = INT64_MIN;
uint32_t x67 = 701U;
uint32_t x69 = UINT32_MAX;
int8_t x72 = INT8_MIN;
int8_t x78 = INT8_MAX;
static uint32_t x79 = 2901842U;
int32_t x82 = INT32_MAX;
volatile int32_t t18 = -66744314;
int32_t x89 = INT32_MIN;
volatile int32_t t21 = 1785030;
int16_t x97 = -1825;
volatile int32_t t22 = 50992;
uint64_t x120 = 337300116075LLU;
volatile int64_t x125 = -1LL;
static uint16_t x126 = 9957U;
int8_t x133 = -1;
static uint64_t x138 = 8LLU;
int16_t x142 = INT16_MIN;
static int32_t t33 = -1;
volatile int32_t t35 = 598295;
uint16_t x154 = 923U;
volatile int32_t t36 = -191811153;
uint8_t x157 = UINT8_MAX;
volatile uint32_t x162 = 247U;
volatile int64_t x168 = INT64_MIN;
uint16_t x170 = 7686U;
static volatile int32_t t41 = 705;
int64_t x183 = 1LL;
uint32_t x185 = 26U;
uint8_t x186 = 123U;
int32_t x187 = INT32_MIN;
int8_t x194 = INT8_MIN;
static int32_t x195 = INT32_MIN;
int32_t t46 = 55618326;
int32_t t47 = -1211910;
static volatile uint16_t x207 = 2U;
volatile uint64_t x211 = 0LLU;
volatile int32_t t51 = -67577;
static volatile int32_t t52 = -2;
volatile int32_t t54 = 45561774;
static uint64_t x229 = 779944332411LLU;
int8_t x233 = INT8_MIN;
int8_t x248 = -1;
volatile int32_t t59 = -427;
uint8_t x252 = 4U;
int16_t x255 = 175;
uint64_t x265 = UINT64_MAX;
uint8_t x277 = 0U;
int16_t x278 = INT16_MAX;
int32_t x279 = -1;
int32_t t67 = -61;
int16_t x282 = INT16_MIN;
int16_t x286 = 2;
volatile int32_t t70 = 9310;
static int16_t x296 = INT16_MIN;
int8_t x297 = 1;
static int64_t x301 = INT64_MIN;
int8_t x303 = 42;
static int64_t x304 = INT64_MAX;
int32_t x307 = -1;
volatile int32_t t78 = -1000;
uint32_t x325 = 761972U;
static uint16_t x329 = 1U;
uint8_t x330 = 55U;
int64_t x331 = INT64_MIN;
volatile int32_t t80 = 16;
uint64_t x333 = 14356756891LLU;
uint16_t x334 = UINT16_MAX;
uint8_t x352 = 0U;
static int64_t x371 = -1LL;
volatile int32_t t89 = 804904;
volatile uint32_t x373 = 108U;
int8_t x386 = INT8_MAX;
int8_t x387 = INT8_MIN;
volatile uint64_t x390 = 555417071302109LLU;
static int64_t x392 = INT64_MIN;
volatile uint64_t x393 = UINT64_MAX;
static uint16_t x398 = UINT16_MAX;
int8_t x399 = INT8_MAX;
int32_t x400 = INT32_MIN;
int16_t x403 = INT16_MAX;
uint8_t x404 = UINT8_MAX;
volatile int64_t x407 = -1LL;
volatile int32_t t98 = -103;
int16_t x409 = INT16_MIN;
volatile int32_t t101 = 28968485;
volatile int8_t x422 = -16;
int32_t x425 = INT32_MIN;
int64_t x428 = INT64_MAX;
volatile int32_t t103 = 637672;
int8_t x430 = INT8_MAX;
int8_t x433 = 0;
volatile int32_t t105 = 238164;
volatile int32_t x439 = -404504735;
static int32_t t107 = 467333;
int16_t x446 = 2021;
int64_t x450 = INT64_MIN;
volatile int32_t t112 = 64311570;
int8_t x470 = -10;
volatile int32_t t113 = -125902715;
int32_t x486 = -5;
static uint32_t x489 = 3114089U;
uint8_t x494 = 93U;
int32_t x498 = 22;
volatile uint64_t x502 = 470597611193377LLU;
volatile int32_t t119 = -67355997;
int16_t x506 = INT16_MIN;
int8_t x507 = INT8_MAX;
static int16_t x513 = 0;
static int32_t t122 = -61415;
uint32_t x518 = 1189042389U;
int64_t x519 = 17341944999659021LL;
int32_t x523 = INT32_MIN;
uint32_t x527 = UINT32_MAX;
uint16_t x532 = 23166U;
int64_t x536 = 1263382130255386LL;
volatile int64_t x537 = INT64_MIN;
uint8_t x550 = UINT8_MAX;
uint32_t x554 = 202073559U;
volatile int32_t t132 = -48334656;
volatile int32_t t133 = 537;
int64_t x561 = -1LL;
static int32_t x568 = 383191;
uint16_t x571 = 12U;
static int32_t t137 = -65;
int64_t x579 = -1LL;
volatile int32_t t138 = -165;
int64_t x584 = 31415010LL;
volatile int16_t x588 = INT16_MAX;
volatile int64_t x590 = INT64_MAX;
uint32_t x591 = UINT32_MAX;
static int64_t x594 = INT64_MIN;
static int16_t x595 = INT16_MIN;
volatile uint16_t x605 = 387U;
uint32_t x609 = 431772U;
int64_t x626 = -1LL;
uint16_t x628 = UINT16_MAX;
static int32_t t147 = 1918941;
int8_t x629 = -1;
uint32_t x648 = 3808U;
int64_t x651 = -1LL;
static int64_t x660 = INT64_MIN;
int64_t x661 = INT64_MAX;
uint16_t x662 = UINT16_MAX;
uint64_t x665 = UINT64_MAX;
volatile int32_t t157 = -95782;
uint8_t x670 = 43U;
static int32_t x687 = INT32_MIN;
static uint16_t x690 = UINT16_MAX;
static volatile uint64_t x691 = UINT64_MAX;
uint64_t x697 = UINT64_MAX;
volatile int32_t t166 = -60405370;
volatile int16_t x711 = 1;
int64_t x726 = INT64_MIN;
volatile int32_t t171 = 120;
uint8_t x737 = UINT8_MAX;
uint64_t x742 = 3008082842LLU;
volatile uint8_t x744 = 2U;
int64_t x748 = INT64_MIN;
static volatile int32_t t176 = -15475079;
int32_t x755 = INT32_MIN;
int16_t x759 = INT16_MAX;
int8_t x765 = INT8_MIN;
int16_t x766 = INT16_MIN;
volatile uint32_t x769 = UINT32_MAX;
int8_t x771 = -46;
volatile int16_t x789 = INT16_MAX;
volatile int32_t t187 = 5402402;
uint64_t x797 = UINT64_MAX;
int64_t x798 = -216753673938LL;
volatile int32_t t189 = -1031556;
int8_t x811 = INT8_MIN;
int8_t x812 = INT8_MIN;
static volatile int32_t t190 = 310;
volatile int64_t x813 = 25400LL;
int16_t x819 = -1;
static uint32_t x820 = 1756824889U;
volatile int32_t t192 = 7;
uint32_t x821 = 47257U;
int16_t x823 = 1;
int32_t x824 = -8380;
volatile int32_t t193 = -309757;
int64_t x834 = 32253975405999LL;
int16_t x835 = -1;
int8_t x837 = -1;
int16_t x842 = INT16_MIN;
int32_t t198 = -54549801;


void f0(void) {
    	volatile uint32_t x1 = 703U;
	volatile int16_t x2 = -1;
	static int8_t x3 = INT8_MAX;
	int32_t t0 = -203;

    t0 = ((x1/(x2^x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 134278893699181LLU;
	int8_t x6 = INT8_MIN;
	volatile int32_t t1 = 80597420;

    t1 = ((x5/(x6^x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 30U;
	static uint16_t x11 = UINT16_MAX;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = -113;

    t2 = ((x9/(x10^x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 10U;
	volatile int64_t x15 = 3298772457LL;
	static int32_t x16 = -28442785;
	volatile int32_t t3 = 1948526;

    t3 = ((x13/(x14^x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	uint64_t x20 = 278712457920LLU;
	int32_t t4 = -1;

    t4 = ((x17/(x18^x19))<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 0U;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -25936729;

    t5 = ((x21/(x22^x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = 2;
	int32_t t6 = 14955;

    t6 = ((x25/(x26^x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MIN;
	uint8_t x31 = UINT8_MAX;
	volatile uint32_t x32 = 12031428U;
	int32_t t7 = -32684597;

    t7 = ((x29/(x30^x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	int32_t x34 = 1;
	static int16_t x36 = -1;
	volatile int32_t t8 = 84;

    t8 = ((x33/(x34^x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -18228654;
	volatile int64_t x38 = INT64_MAX;
	int32_t x39 = -1;
	volatile int32_t x40 = -955385;
	volatile int32_t t9 = -942168891;

    t9 = ((x37/(x38^x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 3218378922772855830LL;
	static uint64_t x42 = 34558163249905LLU;
	int8_t x43 = INT8_MIN;
	static int32_t x44 = 6;
	int32_t t10 = -121;

    t10 = ((x41/(x42^x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	int32_t t11 = -1045976;

    t11 = ((x45/(x46^x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	uint32_t x51 = UINT32_MAX;
	int8_t x52 = 6;
	volatile int32_t t12 = 545336;

    t12 = ((x49/(x50^x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	int32_t x54 = 5;
	static uint64_t x56 = 150567484153892LLU;
	int32_t t13 = 12;

    t13 = ((x53/(x54^x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 9U;
	int8_t x58 = 0;
	static volatile int32_t x59 = INT32_MIN;
	int32_t t14 = -31810;

    t14 = ((x57/(x58^x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 0;
	static int8_t x68 = INT8_MIN;
	static int32_t t15 = -5168238;

    t15 = ((x65/(x66^x67))<=x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x70 = 0;
	int8_t x71 = -1;
	volatile int32_t t16 = -42;

    t16 = ((x69/(x70^x71))<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x77 = 3126U;
	volatile int32_t x80 = INT32_MIN;
	int32_t t17 = 1011618030;

    t17 = ((x77/(x78^x79))<=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x81 = 154LL;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = 376828U;

    t18 = ((x81/(x82^x83))<=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x85 = 49728335LL;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MAX;
	int32_t x88 = 39780;
	static int32_t t19 = -365968;

    t19 = ((x85/(x86^x87))<=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x90 = INT64_MIN;
	uint16_t x91 = 37U;
	int32_t x92 = INT32_MAX;
	volatile int32_t t20 = -686217410;

    t20 = ((x89/(x90^x91))<=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 1U;
	int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	static uint64_t x96 = 25555150LLU;

    t21 = ((x93/(x94^x95))<=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x98 = 0U;
	static int16_t x99 = -1;
	static int64_t x100 = INT64_MIN;

    t22 = ((x97/(x98^x99))<=x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MAX;
	int32_t x103 = -1;
	int32_t x104 = -279310;
	int32_t t23 = 27521;

    t23 = ((x101/(x102^x103))<=x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = UINT32_MAX;
	volatile int16_t x106 = INT16_MIN;
	int16_t x107 = 1;
	volatile int8_t x108 = -42;
	int32_t t24 = -30513;

    t24 = ((x105/(x106^x107))<=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x109 = 617416956143120352LLU;
	volatile uint32_t x110 = 7393676U;
	static uint16_t x111 = UINT16_MAX;
	uint32_t x112 = 49U;
	int32_t t25 = -354624683;

    t25 = ((x109/(x110^x111))<=x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	static int8_t x114 = -1;
	volatile int16_t x115 = INT16_MAX;
	static uint8_t x116 = UINT8_MAX;
	volatile int32_t t26 = -7988623;

    t26 = ((x113/(x114^x115))<=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = 1U;
	int32_t x118 = INT32_MIN;
	volatile uint16_t x119 = UINT16_MAX;
	int32_t t27 = 60622;

    t27 = ((x117/(x118^x119))<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x121 = -1;
	int16_t x122 = INT16_MIN;
	static uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 505027U;
	volatile int32_t t28 = -100693;

    t28 = ((x121/(x122^x123))<=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x127 = INT64_MIN;
	static uint8_t x128 = 6U;
	int32_t t29 = 1398680;

    t29 = ((x125/(x126^x127))<=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 5U;
	volatile int32_t x131 = INT32_MIN;
	int8_t x132 = 1;
	static volatile int32_t t30 = -23153801;

    t30 = ((x129/(x130^x131))<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x134 = -1;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -1LL;
	volatile int32_t t31 = -30;

    t31 = ((x133/(x134^x135))<=x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	uint64_t x139 = 12917332480LLU;
	int16_t x140 = INT16_MAX;
	int32_t t32 = -220957;

    t32 = ((x137/(x138^x139))<=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = -2;
	int64_t x143 = -9918LL;
	uint16_t x144 = UINT16_MAX;

    t33 = ((x141/(x142^x143))<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -159;
	int64_t x146 = -1370142956861LL;
	int8_t x147 = 3;
	volatile uint32_t x148 = 1978U;
	int32_t t34 = 159;

    t34 = ((x145/(x146^x147))<=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x149 = INT16_MIN;
	int16_t x150 = 3604;
	uint16_t x151 = 88U;
	uint32_t x152 = 124927110U;

    t35 = ((x149/(x150^x151))<=x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -415182;

    t36 = ((x153/(x154^x155))<=x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint64_t x158 = 4094143317662442LLU;
	int32_t x159 = -1;
	static volatile uint64_t x160 = 57859LLU;
	volatile int32_t t37 = 8010;

    t37 = ((x157/(x158^x159))<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = UINT32_MAX;
	static volatile int16_t x163 = -1;
	uint8_t x164 = 2U;
	int32_t t38 = 0;

    t38 = ((x161/(x162^x163))<=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x165 = UINT64_MAX;
	static volatile int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MIN;
	int32_t t39 = 2;

    t39 = ((x165/(x166^x167))<=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x171 = -1;
	volatile int16_t x172 = INT16_MIN;
	static volatile int32_t t40 = 51;

    t40 = ((x169/(x170^x171))<=x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = 4020;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;

    t41 = ((x173/(x174^x175))<=x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = 108;
	volatile uint64_t x178 = 29512336873LLU;
	volatile uint8_t x179 = 9U;
	int64_t x180 = -2LL;
	int32_t t42 = 1;

    t42 = ((x177/(x178^x179))<=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MIN;
	uint8_t x182 = 3U;
	static int8_t x184 = -1;
	volatile int32_t t43 = 182;

    t43 = ((x181/(x182^x183))<=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x188 = 11364U;
	int32_t t44 = 0;

    t44 = ((x185/(x186^x187))<=x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x189 = INT64_MAX;
	uint8_t x190 = 82U;
	volatile int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t45 = -344;

    t45 = ((x189/(x190^x191))<=x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MAX;
	static int64_t x196 = -1LL;

    t46 = ((x193/(x194^x195))<=x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = 2898363LLU;
	static uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 12727LLU;
	static uint16_t x200 = 5U;

    t47 = ((x197/(x198^x199))<=x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = -476;
	uint64_t x202 = 1128057768704LLU;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	static int32_t t48 = 42;

    t48 = ((x201/(x202^x203))<=x204);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = -1;
	int16_t x206 = 124;
	int64_t x208 = 3070938533LL;
	int32_t t49 = 57716044;

    t49 = ((x205/(x206^x207))<=x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x209 = 271250858LLU;
	int16_t x210 = INT16_MAX;
	uint8_t x212 = 87U;
	static volatile int32_t t50 = -171996335;

    t50 = ((x209/(x210^x211))<=x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -1LL;
	int32_t x214 = INT32_MAX;
	int32_t x215 = 982;
	uint64_t x216 = 8016946231351976622LLU;

    t51 = ((x213/(x214^x215))<=x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = -1;
	int32_t x218 = -60;
	volatile int32_t x219 = INT32_MAX;
	int16_t x220 = INT16_MIN;

    t52 = ((x217/(x218^x219))<=x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 7423LLU;
	int64_t x222 = INT64_MAX;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 67LLU;
	volatile int32_t t53 = -1;

    t53 = ((x221/(x222^x223))<=x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = -31;
	int16_t x226 = 1216;
	static int8_t x227 = -1;
	uint8_t x228 = 5U;

    t54 = ((x225/(x226^x227))<=x228);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x230 = -1436;
	int8_t x231 = INT8_MIN;
	static uint16_t x232 = 10521U;
	int32_t t55 = 103737;

    t55 = ((x229/(x230^x231))<=x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x234 = 1U;
	static volatile int16_t x235 = -3726;
	int16_t x236 = INT16_MIN;
	volatile int32_t t56 = 2;

    t56 = ((x233/(x234^x235))<=x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = INT32_MAX;
	static volatile int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	int64_t x240 = 531335075906811838LL;
	int32_t t57 = -177;

    t57 = ((x237/(x238^x239))<=x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x241 = -282197152904923092LL;
	int64_t x242 = -1LL;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	static int32_t t58 = 351;

    t58 = ((x241/(x242^x243))<=x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x245 = INT32_MAX;
	uint32_t x246 = 3923882U;
	int16_t x247 = INT16_MAX;

    t59 = ((x245/(x246^x247))<=x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = 0U;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	volatile int32_t t60 = 22075;

    t60 = ((x249/(x250^x251))<=x252);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 1U;
	static volatile int16_t x254 = -1;
	int32_t x256 = INT32_MIN;
	volatile int32_t t61 = 44846;

    t61 = ((x253/(x254^x255))<=x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 44914227LLU;
	int64_t x258 = 4443221508485106511LL;
	uint32_t x259 = 1538727228U;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t62 = -22068743;

    t62 = ((x257/(x258^x259))<=x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 104U;
	volatile int32_t t63 = 186867380;

    t63 = ((x261/(x262^x263))<=x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x266 = 6LLU;
	uint8_t x267 = 22U;
	static int16_t x268 = 146;
	int32_t t64 = 5609784;

    t64 = ((x265/(x266^x267))<=x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = -1;
	int32_t x270 = INT32_MIN;
	int8_t x271 = -12;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t65 = 15;

    t65 = ((x269/(x270^x271))<=x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = 35U;
	int16_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t66 = -26;

    t66 = ((x273/(x274^x275))<=x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x280 = -1;

    t67 = ((x277/(x278^x279))<=x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = INT64_MIN;
	static uint32_t x283 = 6777784U;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t68 = -6516405;

    t68 = ((x281/(x282^x283))<=x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = -1;
	static int32_t x287 = INT32_MIN;
	static uint64_t x288 = 118LLU;
	int32_t t69 = -1;

    t69 = ((x285/(x286^x287))<=x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MIN;
	int64_t x291 = -1LL;
	uint8_t x292 = 29U;

    t70 = ((x289/(x290^x291))<=x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = 215605U;
	int64_t x294 = -1LL;
	int8_t x295 = -7;
	static int32_t t71 = -31183;

    t71 = ((x293/(x294^x295))<=x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x298 = -1;
	static volatile int32_t x299 = 523944946;
	int16_t x300 = 195;
	int32_t t72 = 201;

    t72 = ((x297/(x298^x299))<=x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x302 = UINT8_MAX;
	volatile int32_t t73 = 36976;

    t73 = ((x301/(x302^x303))<=x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	int32_t x308 = -1;
	static volatile int32_t t74 = -13977665;

    t74 = ((x305/(x306^x307))<=x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x309 = -1;
	static int8_t x310 = INT8_MIN;
	uint64_t x311 = 1736036248LLU;
	uint16_t x312 = 10U;
	volatile int32_t t75 = -653570;

    t75 = ((x309/(x310^x311))<=x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x313 = 31257640LLU;
	int8_t x314 = INT8_MAX;
	uint16_t x315 = 77U;
	static int64_t x316 = -1LL;
	volatile int32_t t76 = -57;

    t76 = ((x313/(x314^x315))<=x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x317 = 47U;
	uint8_t x318 = 11U;
	int64_t x319 = 5LL;
	int16_t x320 = INT16_MIN;
	int32_t t77 = 43213;

    t77 = ((x317/(x318^x319))<=x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 8873U;
	uint8_t x322 = 2U;
	uint32_t x323 = 2739U;
	int32_t x324 = INT32_MIN;

    t78 = ((x321/(x322^x323))<=x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 2U;
	int16_t x328 = 512;
	int32_t t79 = 953;

    t79 = ((x325/(x326^x327))<=x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x332 = -1;

    t80 = ((x329/(x330^x331))<=x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x335 = 15219320136704LLU;
	int32_t x336 = INT32_MIN;
	volatile int32_t t81 = 769;

    t81 = ((x333/(x334^x335))<=x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x337 = 7780829U;
	static int64_t x338 = -306576157566685LL;
	static volatile uint64_t x339 = 5LLU;
	static uint64_t x340 = 103060653022LLU;
	static int32_t t82 = -198;

    t82 = ((x337/(x338^x339))<=x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x341 = 145366241129742LL;
	volatile int32_t x342 = INT32_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	int32_t x344 = -1;
	int32_t t83 = 1119770;

    t83 = ((x341/(x342^x343))<=x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x345 = 62645035LLU;
	int8_t x346 = 2;
	int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	volatile int32_t t84 = 11;

    t84 = ((x345/(x346^x347))<=x348);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 3U;
	int32_t x351 = -320518580;
	int32_t t85 = 22;

    t85 = ((x349/(x350^x351))<=x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = 0;
	static int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 35U;
	int32_t t86 = 476715176;

    t86 = ((x353/(x354^x355))<=x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = 6;
	static volatile uint8_t x358 = 13U;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = INT32_MAX;
	static volatile int32_t t87 = 3;

    t87 = ((x357/(x358^x359))<=x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = INT64_MIN;
	int8_t x366 = -5;
	int16_t x367 = INT16_MAX;
	volatile uint32_t x368 = 222U;
	volatile int32_t t88 = 17142;

    t88 = ((x365/(x366^x367))<=x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MIN;
	uint32_t x372 = 51U;

    t89 = ((x369/(x370^x371))<=x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x374 = -1;
	int8_t x375 = 1;
	static int16_t x376 = -58;
	int32_t t90 = 303852594;

    t90 = ((x373/(x374^x375))<=x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = 2;
	volatile int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = 36;
	int32_t t91 = -31573688;

    t91 = ((x377/(x378^x379))<=x380);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	static int8_t x382 = 0;
	static uint16_t x383 = 92U;
	uint64_t x384 = 7974LLU;
	static volatile int32_t t92 = 23;

    t92 = ((x381/(x382^x383))<=x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = 703U;
	static uint8_t x388 = 1U;
	volatile int32_t t93 = 11827;

    t93 = ((x385/(x386^x387))<=x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x389 = INT32_MAX;
	uint64_t x391 = 14324LLU;
	volatile int32_t t94 = -156914;

    t94 = ((x389/(x390^x391))<=x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x394 = INT16_MAX;
	int16_t x395 = -1;
	uint16_t x396 = 1796U;
	volatile int32_t t95 = -484785;

    t95 = ((x393/(x394^x395))<=x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = INT32_MAX;
	volatile int32_t t96 = -23756;

    t96 = ((x397/(x398^x399))<=x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x401 = -1;
	int8_t x402 = INT8_MAX;
	static int32_t t97 = 4581301;

    t97 = ((x401/(x402^x403))<=x404);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x405 = -1LL;
	int8_t x406 = 1;
	static int32_t x408 = 26;

    t98 = ((x405/(x406^x407))<=x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x410 = -59;
	uint16_t x411 = 30U;
	int8_t x412 = -1;
	int32_t t99 = 660068013;

    t99 = ((x409/(x410^x411))<=x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = 1088;
	volatile uint64_t x414 = UINT64_MAX;
	uint16_t x415 = 429U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t100 = -99379;

    t100 = ((x413/(x414^x415))<=x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x417 = 56U;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	int32_t x420 = -1;

    t101 = ((x417/(x418^x419))<=x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x421 = UINT64_MAX;
	uint16_t x423 = 1U;
	uint64_t x424 = UINT64_MAX;
	static int32_t t102 = -31;

    t102 = ((x421/(x422^x423))<=x424);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x426 = 125LLU;
	int64_t x427 = INT64_MAX;

    t103 = ((x425/(x426^x427))<=x428);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = INT32_MIN;
	uint32_t x431 = 477390199U;
	static uint64_t x432 = 155912973672LLU;
	int32_t t104 = 675469;

    t104 = ((x429/(x430^x431))<=x432);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x434 = 36;
	static int8_t x435 = 1;
	int8_t x436 = INT8_MAX;

    t105 = ((x433/(x434^x435))<=x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = 4045;
	volatile uint16_t x438 = 24U;
	static int8_t x440 = 1;
	volatile int32_t t106 = -11733;

    t106 = ((x437/(x438^x439))<=x440);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x441 = -1953167LL;
	uint16_t x442 = 1953U;
	uint8_t x443 = 1U;
	uint64_t x444 = 384902331LLU;

    t107 = ((x441/(x442^x443))<=x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x445 = 1;
	volatile int32_t x447 = INT32_MIN;
	static int8_t x448 = INT8_MIN;
	volatile int32_t t108 = -1905121;

    t108 = ((x445/(x446^x447))<=x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x449 = INT16_MIN;
	static int32_t x451 = INT32_MAX;
	uint32_t x452 = 6024U;
	int32_t t109 = -54;

    t109 = ((x449/(x450^x451))<=x452);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x453 = 160;
	volatile int8_t x454 = -4;
	static int64_t x455 = INT64_MIN;
	volatile int32_t x456 = 77877;
	static volatile int32_t t110 = -56708;

    t110 = ((x453/(x454^x455))<=x456);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x457 = UINT32_MAX;
	int16_t x458 = INT16_MAX;
	int32_t x459 = 400;
	int8_t x460 = INT8_MAX;
	int32_t t111 = -213;

    t111 = ((x457/(x458^x459))<=x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = 2;
	volatile int32_t x467 = -1;
	static uint8_t x468 = UINT8_MAX;

    t112 = ((x465/(x466^x467))<=x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x469 = -1;
	static uint32_t x471 = 34175U;
	uint32_t x472 = 536492U;

    t113 = ((x469/(x470^x471))<=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x473 = 46048LL;
	int16_t x474 = -434;
	static int16_t x475 = -1;
	int32_t x476 = 34;
	int32_t t114 = 273282538;

    t114 = ((x473/(x474^x475))<=x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = INT32_MIN;
	int32_t x487 = -1;
	static int64_t x488 = INT64_MIN;
	volatile int32_t t115 = -426;

    t115 = ((x485/(x486^x487))<=x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x490 = INT64_MAX;
	int32_t x491 = -1153706;
	int32_t x492 = 64793;
	static int32_t t116 = 9685997;

    t116 = ((x489/(x490^x491))<=x492);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MAX;
	int64_t x495 = -1LL;
	int16_t x496 = -3;
	static int32_t t117 = -3406521;

    t117 = ((x493/(x494^x495))<=x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x497 = UINT16_MAX;
	uint8_t x499 = 20U;
	uint64_t x500 = 6269306456568011LLU;
	int32_t t118 = -517941;

    t118 = ((x497/(x498^x499))<=x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = 3;
	uint32_t x503 = 801198U;
	static volatile int32_t x504 = INT32_MAX;

    t119 = ((x501/(x502^x503))<=x504);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = INT32_MIN;
	int64_t x508 = INT64_MIN;
	volatile int32_t t120 = -49;

    t120 = ((x505/(x506^x507))<=x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x509 = INT64_MAX;
	static volatile int32_t x510 = 9;
	uint64_t x511 = 12LLU;
	volatile int32_t x512 = INT32_MIN;
	volatile int32_t t121 = -15891;

    t121 = ((x509/(x510^x511))<=x512);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x514 = -1LL;
	static uint16_t x515 = 148U;
	static int8_t x516 = -8;

    t122 = ((x513/(x514^x515))<=x516);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x517 = UINT16_MAX;
	volatile int32_t x520 = INT32_MIN;
	int32_t t123 = 658;

    t123 = ((x517/(x518^x519))<=x520);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x521 = 5827378U;
	uint16_t x522 = 2172U;
	volatile int32_t x524 = 265759443;
	int32_t t124 = -501319545;

    t124 = ((x521/(x522^x523))<=x524);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x525 = 24541688LLU;
	static int16_t x526 = 0;
	volatile int16_t x528 = INT16_MIN;
	int32_t t125 = -268900;

    t125 = ((x525/(x526^x527))<=x528);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x529 = 0;
	int32_t x530 = 0;
	static int64_t x531 = 9779162361LL;
	int32_t t126 = 754271835;

    t126 = ((x529/(x530^x531))<=x532);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x533 = 36810;
	int32_t x534 = INT32_MAX;
	uint64_t x535 = 27LLU;
	volatile int32_t t127 = 13675;

    t127 = ((x533/(x534^x535))<=x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x538 = 18;
	int64_t x539 = -1LL;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t128 = 240979084;

    t128 = ((x537/(x538^x539))<=x540);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x541 = -1;
	uint64_t x542 = 470LLU;
	static int16_t x543 = -1;
	uint16_t x544 = 2U;
	volatile int32_t t129 = 164438;

    t129 = ((x541/(x542^x543))<=x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x545 = -1LL;
	volatile int8_t x546 = INT8_MIN;
	int32_t x547 = -3102452;
	int32_t x548 = -1;
	volatile int32_t t130 = 103;

    t130 = ((x545/(x546^x547))<=x548);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x549 = -1;
	int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MAX;
	static int32_t t131 = -735;

    t131 = ((x549/(x550^x551))<=x552);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x553 = 886773LLU;
	uint64_t x555 = 34052834116862LLU;
	int8_t x556 = INT8_MIN;

    t132 = ((x553/(x554^x555))<=x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x557 = UINT8_MAX;
	volatile int8_t x558 = INT8_MIN;
	uint16_t x559 = 886U;
	static int64_t x560 = -13793LL;

    t133 = ((x557/(x558^x559))<=x560);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x562 = 7U;
	int16_t x563 = INT16_MAX;
	int32_t x564 = -197612;
	int32_t t134 = 22241339;

    t134 = ((x561/(x562^x563))<=x564);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x565 = -1LL;
	int8_t x566 = INT8_MIN;
	static int32_t x567 = INT32_MAX;
	int32_t t135 = 0;

    t135 = ((x565/(x566^x567))<=x568);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x569 = 308037996LLU;
	int64_t x570 = -968LL;
	volatile int64_t x572 = -1LL;
	static int32_t t136 = 241785168;

    t136 = ((x569/(x570^x571))<=x572);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x573 = INT64_MIN;
	int64_t x574 = -1LL;
	int8_t x575 = INT8_MIN;
	volatile uint8_t x576 = 1U;

    t137 = ((x573/(x574^x575))<=x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x577 = -1;
	static int8_t x578 = INT8_MAX;
	static int64_t x580 = INT64_MIN;

    t138 = ((x577/(x578^x579))<=x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x581 = 653748485LL;
	int16_t x582 = INT16_MIN;
	int32_t x583 = INT32_MIN;
	volatile int32_t t139 = 52730;

    t139 = ((x581/(x582^x583))<=x584);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = 488407;
	uint64_t x587 = UINT64_MAX;
	int32_t t140 = 157319083;

    t140 = ((x585/(x586^x587))<=x588);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = -45505LL;
	uint16_t x592 = 5U;
	volatile int32_t t141 = 138971842;

    t141 = ((x589/(x590^x591))<=x592);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x593 = INT32_MIN;
	static uint32_t x596 = 31594U;
	int32_t t142 = 8;

    t142 = ((x593/(x594^x595))<=x596);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x601 = 0U;
	int16_t x602 = -25;
	uint64_t x603 = UINT64_MAX;
	int32_t x604 = -86;
	int32_t t143 = 278;

    t143 = ((x601/(x602^x603))<=x604);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x606 = UINT32_MAX;
	static volatile int16_t x607 = 0;
	int16_t x608 = INT16_MIN;
	int32_t t144 = 123;

    t144 = ((x605/(x606^x607))<=x608);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x610 = -1;
	int32_t x611 = INT32_MIN;
	volatile int64_t x612 = INT64_MAX;
	volatile int32_t t145 = 59192;

    t145 = ((x609/(x610^x611))<=x612);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x613 = -41;
	int16_t x614 = 22;
	uint8_t x615 = UINT8_MAX;
	static int8_t x616 = INT8_MAX;
	int32_t t146 = 1;

    t146 = ((x613/(x614^x615))<=x616);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x625 = INT8_MAX;
	int16_t x627 = INT16_MIN;

    t147 = ((x625/(x626^x627))<=x628);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x630 = -1;
	int64_t x631 = INT64_MIN;
	volatile uint64_t x632 = 12305575198LLU;
	static volatile int32_t t148 = -155631071;

    t148 = ((x629/(x630^x631))<=x632);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x633 = INT8_MIN;
	uint32_t x634 = 614111138U;
	volatile int32_t x635 = 4;
	int64_t x636 = -1LL;
	int32_t t149 = -9189;

    t149 = ((x633/(x634^x635))<=x636);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x637 = -1;
	int64_t x638 = -10762487298766584LL;
	static volatile int8_t x639 = 1;
	int64_t x640 = INT64_MIN;
	static volatile int32_t t150 = 88331;

    t150 = ((x637/(x638^x639))<=x640);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x641 = UINT16_MAX;
	volatile int16_t x642 = -15616;
	uint16_t x643 = 23U;
	int16_t x644 = INT16_MIN;
	int32_t t151 = 1012;

    t151 = ((x641/(x642^x643))<=x644);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x645 = -1;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = 1835U;
	int32_t t152 = 92253;

    t152 = ((x645/(x646^x647))<=x648);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x649 = INT16_MIN;
	volatile uint16_t x650 = UINT16_MAX;
	int64_t x652 = 4718142LL;
	int32_t t153 = -288;

    t153 = ((x649/(x650^x651))<=x652);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x653 = 11;
	int64_t x654 = INT64_MIN;
	static volatile int8_t x655 = -5;
	static int16_t x656 = INT16_MIN;
	int32_t t154 = -175;

    t154 = ((x653/(x654^x655))<=x656);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x657 = INT8_MIN;
	int32_t x658 = -1;
	int16_t x659 = INT16_MIN;
	static int32_t t155 = 3109659;

    t155 = ((x657/(x658^x659))<=x660);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x663 = -6;
	int8_t x664 = INT8_MIN;
	int32_t t156 = 983153;

    t156 = ((x661/(x662^x663))<=x664);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x666 = INT8_MAX;
	int32_t x667 = -1;
	volatile uint16_t x668 = UINT16_MAX;

    t157 = ((x665/(x666^x667))<=x668);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x669 = 6018U;
	static int64_t x671 = INT64_MAX;
	static uint8_t x672 = 0U;
	static int32_t t158 = 353016214;

    t158 = ((x669/(x670^x671))<=x672);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x677 = INT8_MAX;
	uint32_t x678 = 3573793U;
	int64_t x679 = INT64_MAX;
	volatile uint16_t x680 = 24U;
	int32_t t159 = 136439396;

    t159 = ((x677/(x678^x679))<=x680);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x681 = UINT16_MAX;
	int8_t x682 = 3;
	int16_t x683 = 740;
	int8_t x684 = -1;
	static volatile int32_t t160 = 1608;

    t160 = ((x681/(x682^x683))<=x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x685 = UINT16_MAX;
	volatile int8_t x686 = -17;
	int8_t x688 = -2;
	volatile int32_t t161 = -729654531;

    t161 = ((x685/(x686^x687))<=x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x689 = UINT64_MAX;
	uint64_t x692 = 791705754914732LLU;
	int32_t t162 = -160758181;

    t162 = ((x689/(x690^x691))<=x692);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x693 = -1;
	static int32_t x694 = -121020;
	volatile uint64_t x695 = 27873968304735417LLU;
	int8_t x696 = 3;
	volatile int32_t t163 = 19708487;

    t163 = ((x693/(x694^x695))<=x696);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x698 = UINT64_MAX;
	int8_t x699 = -49;
	static uint64_t x700 = 1789277LLU;
	int32_t t164 = -1;

    t164 = ((x697/(x698^x699))<=x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x701 = -9LL;
	int16_t x702 = -22;
	int16_t x703 = 1;
	int32_t x704 = 99503;
	int32_t t165 = 175565728;

    t165 = ((x701/(x702^x703))<=x704);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x705 = 17788181196LL;
	int8_t x706 = INT8_MAX;
	int16_t x707 = -13258;
	uint64_t x708 = UINT64_MAX;

    t166 = ((x705/(x706^x707))<=x708);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x709 = -1LL;
	volatile int32_t x710 = 55;
	int8_t x712 = INT8_MIN;
	volatile int32_t t167 = -6139031;

    t167 = ((x709/(x710^x711))<=x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x717 = INT16_MIN;
	uint16_t x718 = UINT16_MAX;
	static int64_t x719 = INT64_MAX;
	static int32_t x720 = INT32_MAX;
	volatile int32_t t168 = -7;

    t168 = ((x717/(x718^x719))<=x720);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x721 = -962;
	int8_t x722 = INT8_MIN;
	volatile int8_t x723 = 1;
	static int8_t x724 = -1;
	volatile int32_t t169 = -451018;

    t169 = ((x721/(x722^x723))<=x724);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x725 = -32311263480476394LL;
	int16_t x727 = INT16_MAX;
	int64_t x728 = INT64_MAX;
	volatile int32_t t170 = 5507;

    t170 = ((x725/(x726^x727))<=x728);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x729 = INT32_MIN;
	int32_t x730 = INT32_MIN;
	uint8_t x731 = 26U;
	int32_t x732 = 495;

    t171 = ((x729/(x730^x731))<=x732);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x733 = INT8_MIN;
	volatile int8_t x734 = INT8_MAX;
	uint32_t x735 = 7430U;
	uint16_t x736 = UINT16_MAX;
	int32_t t172 = 25949786;

    t172 = ((x733/(x734^x735))<=x736);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x738 = INT16_MAX;
	volatile int32_t x739 = INT32_MIN;
	volatile uint8_t x740 = UINT8_MAX;
	int32_t t173 = -4886;

    t173 = ((x737/(x738^x739))<=x740);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x741 = 8437892254092LL;
	static volatile int8_t x743 = INT8_MIN;
	int32_t t174 = -221113;

    t174 = ((x741/(x742^x743))<=x744);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x745 = INT16_MIN;
	uint16_t x746 = 9771U;
	int16_t x747 = -1861;
	volatile int32_t t175 = 2144;

    t175 = ((x745/(x746^x747))<=x748);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x749 = -1LL;
	uint64_t x750 = 1308100729554520LLU;
	uint64_t x751 = 808088LLU;
	int8_t x752 = INT8_MIN;

    t176 = ((x749/(x750^x751))<=x752);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x753 = INT32_MAX;
	uint8_t x754 = UINT8_MAX;
	static int64_t x756 = INT64_MIN;
	volatile int32_t t177 = 3;

    t177 = ((x753/(x754^x755))<=x756);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x757 = -1;
	int64_t x758 = -1LL;
	volatile uint64_t x760 = UINT64_MAX;
	int32_t t178 = 65609;

    t178 = ((x757/(x758^x759))<=x760);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x761 = INT8_MIN;
	volatile uint64_t x762 = UINT64_MAX;
	uint64_t x763 = 63742163297LLU;
	int64_t x764 = 3723736776532730LL;
	int32_t t179 = -915817313;

    t179 = ((x761/(x762^x763))<=x764);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x767 = INT64_MIN;
	int32_t x768 = INT32_MAX;
	volatile int32_t t180 = -110;

    t180 = ((x765/(x766^x767))<=x768);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x770 = -1;
	uint8_t x772 = UINT8_MAX;
	int32_t t181 = -1262;

    t181 = ((x769/(x770^x771))<=x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x773 = 33U;
	uint16_t x774 = 20U;
	int16_t x775 = 21;
	int16_t x776 = INT16_MAX;
	volatile int32_t t182 = 1020;

    t182 = ((x773/(x774^x775))<=x776);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x777 = UINT8_MAX;
	uint8_t x778 = 0U;
	static int8_t x779 = 7;
	static uint16_t x780 = 801U;
	volatile int32_t t183 = -1;

    t183 = ((x777/(x778^x779))<=x780);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x781 = -8;
	int8_t x782 = -2;
	static int32_t x783 = 14595;
	int64_t x784 = INT64_MIN;
	int32_t t184 = -25;

    t184 = ((x781/(x782^x783))<=x784);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x785 = 3U;
	static uint32_t x786 = 1398U;
	uint32_t x787 = 13U;
	uint16_t x788 = 15U;
	int32_t t185 = 0;

    t185 = ((x785/(x786^x787))<=x788);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x790 = 8659561689LLU;
	volatile int16_t x791 = INT16_MIN;
	uint32_t x792 = 228498U;
	int32_t t186 = -836166;

    t186 = ((x789/(x790^x791))<=x792);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x793 = INT32_MIN;
	static int64_t x794 = INT64_MIN;
	int16_t x795 = 7514;
	uint8_t x796 = 114U;

    t187 = ((x793/(x794^x795))<=x796);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x799 = 112903064;
	volatile int16_t x800 = INT16_MIN;
	volatile int32_t t188 = -122;

    t188 = ((x797/(x798^x799))<=x800);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x801 = INT16_MAX;
	uint8_t x802 = 6U;
	uint8_t x803 = 10U;
	int8_t x804 = -1;

    t189 = ((x801/(x802^x803))<=x804);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x809 = -1LL;
	volatile int32_t x810 = INT32_MAX;

    t190 = ((x809/(x810^x811))<=x812);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x814 = 491U;
	volatile uint64_t x815 = 130385LLU;
	int64_t x816 = INT64_MIN;
	volatile int32_t t191 = 832263;

    t191 = ((x813/(x814^x815))<=x816);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x817 = 1U;
	int32_t x818 = INT32_MAX;

    t192 = ((x817/(x818^x819))<=x820);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x822 = 11434U;

    t193 = ((x821/(x822^x823))<=x824);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x825 = 523919311531230LLU;
	static int16_t x826 = INT16_MAX;
	volatile uint16_t x827 = 169U;
	int32_t x828 = INT32_MIN;
	int32_t t194 = -4488469;

    t194 = ((x825/(x826^x827))<=x828);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x829 = INT16_MIN;
	uint16_t x830 = UINT16_MAX;
	volatile int8_t x831 = -1;
	static uint16_t x832 = 37U;
	static int32_t t195 = -2;

    t195 = ((x829/(x830^x831))<=x832);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x833 = INT32_MIN;
	uint32_t x836 = UINT32_MAX;
	int32_t t196 = 55;

    t196 = ((x833/(x834^x835))<=x836);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x838 = UINT32_MAX;
	volatile uint8_t x839 = UINT8_MAX;
	uint64_t x840 = 3179683617523775LLU;
	volatile int32_t t197 = -1;

    t197 = ((x837/(x838^x839))<=x840);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x841 = -1;
	int8_t x843 = INT8_MAX;
	int8_t x844 = INT8_MAX;

    t198 = ((x841/(x842^x843))<=x844);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x845 = 10647749U;
	uint64_t x846 = UINT64_MAX;
	static int8_t x847 = INT8_MAX;
	static int16_t x848 = -2;
	static volatile int32_t t199 = 128;

    t199 = ((x845/(x846^x847))<=x848);

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

