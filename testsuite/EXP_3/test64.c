
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

static uint16_t x11 = UINT16_MAX;
uint16_t x13 = 613U;
int8_t x15 = 53;
int32_t t3 = 108974711;
uint16_t x28 = 7U;
int64_t x38 = INT64_MIN;
int32_t x45 = -895550;
volatile int64_t x46 = INT64_MIN;
uint16_t x57 = 28U;
int32_t x71 = INT32_MAX;
int64_t x81 = INT64_MIN;
volatile int32_t t18 = -27116717;
int16_t x96 = INT16_MIN;
volatile int16_t x102 = 2;
int16_t x104 = INT16_MIN;
static int8_t x105 = INT8_MIN;
volatile uint64_t x106 = 98142LLU;
static int16_t x107 = -1;
int32_t t21 = -881;
int64_t x109 = 52219251LL;
volatile int32_t t22 = -206647216;
int8_t x115 = INT8_MIN;
volatile int32_t t24 = -20;
int32_t t25 = -3;
int64_t x125 = -7774679LL;
int64_t x126 = -1LL;
volatile int32_t t26 = 57044357;
static uint8_t x132 = 14U;
int64_t x137 = 469886498028042LL;
volatile int32_t t28 = 945827880;
static int32_t x147 = -1;
uint16_t x150 = UINT16_MAX;
static volatile int32_t t31 = -115;
int32_t x168 = INT32_MAX;
int16_t x170 = -1;
int64_t x174 = INT64_MIN;
int32_t x175 = -326065;
int32_t t34 = 207969075;
uint32_t x179 = 28352026U;
uint64_t x185 = 4540369650254172204LLU;
static volatile int16_t x190 = INT16_MIN;
int8_t x199 = 4;
int64_t x206 = 2587010921665LL;
uint8_t x208 = 19U;
int32_t x210 = -1;
volatile uint8_t x225 = 1U;
int8_t x230 = -40;
uint32_t x232 = 30U;
int32_t x246 = -1;
int16_t x257 = INT16_MIN;
int64_t x266 = -882179LL;
static int16_t x269 = INT16_MIN;
static int32_t x270 = -1;
int8_t x272 = -12;
static volatile int32_t t53 = -55;
int32_t x274 = INT32_MAX;
int64_t x276 = 24630331LL;
static uint64_t x285 = 415860587681LLU;
static int16_t x305 = -7351;
int16_t x309 = -1;
int8_t x310 = -22;
volatile int32_t t60 = 118;
static int32_t t61 = 0;
volatile int16_t x318 = INT16_MIN;
static uint32_t x319 = 1148U;
int16_t x323 = INT16_MIN;
volatile int32_t t63 = -29656060;
uint32_t x329 = 8607U;
static int16_t x333 = -1;
int64_t x337 = -1LL;
int16_t x343 = -1;
int32_t x348 = -46;
int8_t x366 = 1;
static int32_t t74 = -617812703;
volatile int32_t t75 = -15634;
static int32_t x376 = INT32_MAX;
volatile int32_t x379 = 0;
volatile int32_t t79 = -1;
int8_t x403 = INT8_MIN;
int16_t x404 = INT16_MIN;
uint8_t x410 = UINT8_MAX;
volatile int8_t x412 = -9;
int32_t t83 = -1739801;
static uint32_t x414 = 945400070U;
volatile int32_t x415 = -1;
volatile uint32_t x416 = 63805919U;
static int16_t x422 = INT16_MAX;
volatile int32_t x432 = -1;
int32_t t89 = 789893;
uint64_t x445 = UINT64_MAX;
int16_t x447 = -13414;
static int32_t t92 = -104597;
static volatile int64_t x459 = INT64_MIN;
int32_t t94 = -3414073;
uint8_t x461 = 16U;
int16_t x463 = INT16_MIN;
uint64_t x466 = UINT64_MAX;
static volatile uint32_t x467 = 51894U;
int8_t x470 = INT8_MIN;
static volatile int32_t t97 = 4513867;
int32_t t98 = 133002271;
int8_t x488 = 1;
int32_t x493 = INT32_MIN;
int16_t x494 = INT16_MIN;
int8_t x499 = INT8_MIN;
int8_t x505 = INT8_MIN;
volatile int32_t t106 = -518;
static int16_t x527 = -1;
int32_t x531 = 0;
int8_t x537 = -5;
int16_t x538 = INT16_MIN;
uint8_t x546 = 5U;
int16_t x547 = -1;
volatile int64_t x558 = 1LL;
static int8_t x561 = INT8_MIN;
volatile uint64_t x576 = 3337906LLU;
volatile int32_t t121 = -25092;
volatile uint64_t x585 = 105924LLU;
uint32_t x588 = 28365U;
volatile int32_t t122 = -12404;
int8_t x601 = INT8_MIN;
int8_t x608 = INT8_MIN;
uint8_t x613 = UINT8_MAX;
int64_t x622 = -1LL;
int32_t x625 = 62;
uint32_t x626 = 41U;
volatile uint8_t x628 = 10U;
int64_t x647 = 1635448511737LL;
volatile int32_t t131 = -4281;
static volatile int32_t t132 = -1777;
volatile uint16_t x654 = UINT16_MAX;
volatile int16_t x664 = INT16_MIN;
int16_t x671 = INT16_MIN;
int16_t x672 = -21;
int8_t x676 = INT8_MIN;
uint8_t x678 = UINT8_MAX;
int8_t x679 = -40;
int32_t x683 = -1;
int16_t x695 = INT16_MIN;
static int8_t x701 = -1;
int8_t x702 = 14;
int32_t t142 = -16513517;
uint16_t x718 = 2U;
int16_t x719 = -5688;
volatile int16_t x722 = -1;
int64_t x723 = INT64_MAX;
volatile int32_t t146 = -2644;
int32_t x726 = INT32_MIN;
int8_t x737 = INT8_MAX;
volatile int32_t t150 = -456023553;
uint16_t x757 = 126U;
int16_t x768 = INT16_MAX;
int64_t x776 = -3851989280LL;
int16_t x777 = -1;
static uint16_t x786 = UINT16_MAX;
uint16_t x796 = 19622U;
static volatile int32_t t164 = -5;
int32_t t165 = 23;
uint32_t x804 = UINT32_MAX;
uint16_t x809 = UINT16_MAX;
static volatile int32_t t168 = 566665;
volatile int32_t t170 = 62971666;
static int8_t x833 = -2;
static int16_t x837 = INT16_MAX;
int16_t x842 = INT16_MAX;
int16_t x846 = INT16_MIN;
volatile uint8_t x851 = UINT8_MAX;
volatile uint32_t x864 = UINT32_MAX;
int64_t x885 = -1LL;
volatile int8_t x888 = -1;
int32_t x889 = -1;
int32_t x898 = INT32_MAX;
uint16_t x901 = 58U;
int64_t x902 = -1LL;
int32_t t187 = -1018;
int16_t x908 = INT16_MAX;
int64_t x911 = INT64_MIN;
int8_t x914 = INT8_MAX;
static int16_t x918 = INT16_MIN;
volatile uint16_t x919 = UINT16_MAX;
int32_t x922 = INT32_MAX;
static volatile uint64_t x923 = 343852986609091974LLU;
int8_t x929 = INT8_MIN;
static volatile uint8_t x932 = 0U;
volatile int16_t x935 = 0;
int32_t t194 = -63;
static uint32_t x939 = 462U;
static volatile int32_t t196 = 2560;
int16_t x957 = INT16_MIN;


void f0(void) {
    	int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	static volatile int8_t x4 = INT8_MIN;
	int32_t t0 = 199069460;

    t0 = ((x1%x2)==(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	uint8_t x6 = 44U;
	uint16_t x7 = 12U;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = 22706;

    t1 = ((x5%x6)==(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x10 = -36;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 231919;

    t2 = ((x9%x10)==(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	uint8_t x16 = 15U;

    t3 = ((x13%x14)==(x15+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = -1475;
	static volatile int8_t x19 = INT8_MIN;
	volatile uint16_t x20 = 1358U;
	static int32_t t4 = -178;

    t4 = ((x17%x18)==(x19+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	int64_t x22 = INT64_MAX;
	static int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -181305031;

    t5 = ((x21%x22)==(x23+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x25 = 679798560111LLU;
	static uint8_t x26 = UINT8_MAX;
	uint16_t x27 = UINT16_MAX;
	volatile int32_t t6 = -32920969;

    t6 = ((x25%x26)==(x27+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = 3232617LLU;
	static volatile int32_t x31 = INT32_MIN;
	static uint16_t x32 = 163U;
	static volatile int32_t t7 = 1;

    t7 = ((x29%x30)==(x31+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = -240LL;
	uint32_t x35 = UINT32_MAX;
	volatile int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 635872;

    t8 = ((x33%x34)==(x35+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -13;
	int32_t x39 = -5;
	int64_t x40 = INT64_MAX;
	static volatile int32_t t9 = 22154785;

    t9 = ((x37%x38)==(x39+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t10 = 1131;

    t10 = ((x45%x46)==(x47+x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = 6;
	uint16_t x54 = 3U;
	int8_t x55 = 0;
	uint64_t x56 = 37947258LLU;
	int32_t t11 = 31371;

    t11 = ((x53%x54)==(x55+x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x58 = INT64_MIN;
	uint32_t x59 = 1766U;
	volatile uint8_t x60 = 57U;
	volatile int32_t t12 = 8;

    t12 = ((x57%x58)==(x59+x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x61 = -1;
	int16_t x62 = 12488;
	static volatile int32_t x63 = -1;
	int16_t x64 = 0;
	volatile int32_t t13 = 27;

    t13 = ((x61%x62)==(x63+x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x69 = 28505U;
	int64_t x70 = INT64_MIN;
	volatile int8_t x72 = 0;
	static int32_t t14 = -5062;

    t14 = ((x69%x70)==(x71+x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x73 = -1674;
	int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = -2150255LL;
	volatile int32_t t15 = 0;

    t15 = ((x73%x74)==(x75+x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = -127878;
	volatile int8_t x78 = -1;
	int16_t x79 = INT16_MAX;
	int8_t x80 = 0;
	volatile int32_t t16 = -14;

    t16 = ((x77%x78)==(x79+x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x82 = 24U;
	static int32_t x83 = INT32_MIN;
	uint64_t x84 = 480761578204162579LLU;
	static int32_t t17 = -2;

    t17 = ((x81%x82)==(x83+x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = 15;
	static volatile uint32_t x90 = 41081324U;
	static int8_t x91 = INT8_MAX;
	volatile int64_t x92 = 8574LL;

    t18 = ((x89%x90)==(x91+x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = -1;
	int32_t x94 = -1;
	volatile int16_t x95 = INT16_MAX;
	volatile int32_t t19 = 35943358;

    t19 = ((x93%x94)==(x95+x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x101 = UINT16_MAX;
	int32_t x103 = 33004011;
	volatile int32_t t20 = -1;

    t20 = ((x101%x102)==(x103+x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x108 = UINT64_MAX;

    t21 = ((x105%x106)==(x107+x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x110 = 1;
	int64_t x111 = INT64_MAX;
	int32_t x112 = -1;

    t22 = ((x109%x110)==(x111+x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = UINT16_MAX;
	volatile int32_t x116 = -1;
	volatile int32_t t23 = -132;

    t23 = ((x113%x114)==(x115+x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x117 = 2345;
	static volatile int64_t x118 = INT64_MIN;
	static uint16_t x119 = UINT16_MAX;
	int64_t x120 = -1456695729551LL;

    t24 = ((x117%x118)==(x119+x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x121 = 2377488516450LLU;
	static int16_t x122 = INT16_MAX;
	volatile int8_t x123 = 3;
	static uint16_t x124 = 605U;

    t25 = ((x121%x122)==(x123+x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MAX;

    t26 = ((x125%x126)==(x127+x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x129 = UINT8_MAX;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = 0;
	static int32_t t27 = 2;

    t27 = ((x129%x130)==(x131+x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x138 = UINT8_MAX;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = -1;

    t28 = ((x137%x138)==(x139+x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = INT8_MIN;
	static int8_t x146 = INT8_MIN;
	int16_t x148 = 103;
	volatile int32_t t29 = -112;

    t29 = ((x145%x146)==(x147+x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x149 = INT64_MAX;
	static int16_t x151 = INT16_MIN;
	volatile int8_t x152 = -1;
	static volatile int32_t t30 = 51;

    t30 = ((x149%x150)==(x151+x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x157 = UINT8_MAX;
	static int32_t x158 = INT32_MAX;
	int16_t x159 = -1;
	volatile uint8_t x160 = 0U;

    t31 = ((x157%x158)==(x159+x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x165 = INT64_MIN;
	int16_t x166 = 90;
	static int8_t x167 = INT8_MIN;
	static volatile int32_t t32 = 0;

    t32 = ((x165%x166)==(x167+x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x169 = 26715344442736979LL;
	static int64_t x171 = 0LL;
	int64_t x172 = INT64_MAX;
	volatile int32_t t33 = -412787141;

    t33 = ((x169%x170)==(x171+x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x173 = 34995433191560LL;
	int64_t x176 = INT64_MAX;

    t34 = ((x173%x174)==(x175+x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x177 = INT16_MIN;
	int64_t x178 = INT64_MIN;
	uint32_t x180 = 39602U;
	int32_t t35 = -29795020;

    t35 = ((x177%x178)==(x179+x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	volatile int64_t x188 = INT64_MIN;
	int32_t t36 = -144;

    t36 = ((x185%x186)==(x187+x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = 53;
	uint64_t x191 = 170097448LLU;
	static int32_t x192 = -1;
	int32_t t37 = 3846927;

    t37 = ((x189%x190)==(x191+x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	static int64_t x200 = 0LL;
	int32_t t38 = 3;

    t38 = ((x197%x198)==(x199+x200));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x201 = -71276184;
	static volatile uint32_t x202 = 958060U;
	volatile uint8_t x203 = 0U;
	static volatile int8_t x204 = INT8_MAX;
	int32_t t39 = 26;

    t39 = ((x201%x202)==(x203+x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x205 = -1;
	volatile uint16_t x207 = 2U;
	int32_t t40 = 12539343;

    t40 = ((x205%x206)==(x207+x208));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x209 = 13749LL;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t41 = 13339587;

    t41 = ((x209%x210)==(x211+x212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x213 = -1LL;
	int16_t x214 = INT16_MIN;
	uint64_t x215 = 1306634412160813LLU;
	volatile uint32_t x216 = UINT32_MAX;
	int32_t t42 = 1;

    t42 = ((x213%x214)==(x215+x216));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x217 = INT32_MAX;
	uint8_t x218 = 1U;
	static int32_t x219 = -1;
	uint64_t x220 = 16121733632LLU;
	int32_t t43 = -18902780;

    t43 = ((x217%x218)==(x219+x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	static int16_t x224 = -846;
	static volatile int32_t t44 = 379;

    t44 = ((x221%x222)==(x223+x224));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x226 = 2982U;
	int8_t x227 = INT8_MIN;
	static volatile uint8_t x228 = 0U;
	static int32_t t45 = -1409;

    t45 = ((x225%x226)==(x227+x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x229 = INT16_MIN;
	int16_t x231 = INT16_MAX;
	volatile int32_t t46 = 7600;

    t46 = ((x229%x230)==(x231+x232));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x233 = 171U;
	int8_t x234 = INT8_MIN;
	volatile int32_t x235 = INT32_MIN;
	uint8_t x236 = UINT8_MAX;
	int32_t t47 = -242643896;

    t47 = ((x233%x234)==(x235+x236));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x241 = 27198895U;
	static uint32_t x242 = 248271984U;
	uint32_t x243 = UINT32_MAX;
	volatile uint32_t x244 = 2147U;
	int32_t t48 = -249349078;

    t48 = ((x241%x242)==(x243+x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x245 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = INT64_MIN;
	volatile int32_t t49 = -7563;

    t49 = ((x245%x246)==(x247+x248));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = 7;
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 15302U;
	static int32_t x252 = -1;
	int32_t t50 = -353954386;

    t50 = ((x249%x250)==(x251+x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x258 = UINT8_MAX;
	int8_t x259 = -1;
	int16_t x260 = -1;
	volatile int32_t t51 = 27;

    t51 = ((x257%x258)==(x259+x260));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x265 = -1;
	uint64_t x267 = 1028LLU;
	int64_t x268 = INT64_MIN;
	volatile int32_t t52 = 103069636;

    t52 = ((x265%x266)==(x267+x268));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x271 = -1LL;

    t53 = ((x269%x270)==(x271+x272));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x273 = 607494200236LLU;
	int8_t x275 = 31;
	int32_t t54 = -44571;

    t54 = ((x273%x274)==(x275+x276));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x277 = -1LL;
	volatile int8_t x278 = -1;
	volatile int8_t x279 = INT8_MIN;
	int32_t x280 = -294677;
	volatile int32_t t55 = -505862997;

    t55 = ((x277%x278)==(x279+x280));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x286 = 53;
	static uint16_t x287 = 54U;
	int64_t x288 = 11712250LL;
	volatile int32_t t56 = -628;

    t56 = ((x285%x286)==(x287+x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x289 = 5807U;
	static uint16_t x290 = 7U;
	volatile uint16_t x291 = 1U;
	static uint32_t x292 = 19282349U;
	static int32_t t57 = 46623;

    t57 = ((x289%x290)==(x291+x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x301 = UINT64_MAX;
	uint16_t x302 = 6559U;
	static uint8_t x303 = UINT8_MAX;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t58 = -7;

    t58 = ((x301%x302)==(x303+x304));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;
	int32_t t59 = -1;

    t59 = ((x305%x306)==(x307+x308));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x311 = 1;
	uint32_t x312 = UINT32_MAX;

    t60 = ((x309%x310)==(x311+x312));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x313 = 326LLU;
	uint32_t x314 = 9852976U;
	uint16_t x315 = 6U;
	static int16_t x316 = -1;

    t61 = ((x313%x314)==(x315+x316));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x317 = 0U;
	int16_t x320 = -3277;
	static int32_t t62 = 52;

    t62 = ((x317%x318)==(x319+x320));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x321 = -11;
	static int16_t x322 = INT16_MAX;
	uint32_t x324 = 20535803U;

    t63 = ((x321%x322)==(x323+x324));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x325 = -1;
	int32_t x326 = INT32_MIN;
	int8_t x327 = 17;
	volatile int8_t x328 = -1;
	static volatile int32_t t64 = -1;

    t64 = ((x325%x326)==(x327+x328));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x330 = 755479LLU;
	int16_t x331 = -555;
	static int32_t x332 = -1;
	static volatile int32_t t65 = -52141916;

    t65 = ((x329%x330)==(x331+x332));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x334 = UINT8_MAX;
	volatile int8_t x335 = -1;
	int16_t x336 = 15107;
	int32_t t66 = -608;

    t66 = ((x333%x334)==(x335+x336));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x338 = 50U;
	int64_t x339 = INT64_MAX;
	int64_t x340 = -18284039313968LL;
	int32_t t67 = 3085075;

    t67 = ((x337%x338)==(x339+x340));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x341 = -846153673460424LL;
	int8_t x342 = INT8_MAX;
	static volatile uint32_t x344 = 3872U;
	int32_t t68 = -3;

    t68 = ((x341%x342)==(x343+x344));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x345 = 7U;
	int64_t x346 = 4144291870813LL;
	int32_t x347 = -1156;
	volatile int32_t t69 = 15225739;

    t69 = ((x345%x346)==(x347+x348));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x349 = -1;
	static volatile int32_t x350 = -1;
	int16_t x351 = -6479;
	volatile uint64_t x352 = 2774LLU;
	volatile int32_t t70 = -1742849;

    t70 = ((x349%x350)==(x351+x352));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x353 = INT64_MIN;
	uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MIN;
	int32_t x356 = 161648;
	volatile int32_t t71 = -8;

    t71 = ((x353%x354)==(x355+x356));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x357 = INT64_MIN;
	uint8_t x358 = 1U;
	uint8_t x359 = 6U;
	static int16_t x360 = INT16_MIN;
	volatile int32_t t72 = -333431620;

    t72 = ((x357%x358)==(x359+x360));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t x364 = -1891787;
	static int32_t t73 = -510914;

    t73 = ((x361%x362)==(x363+x364));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x365 = INT64_MIN;
	int32_t x367 = 6235;
	int8_t x368 = -1;

    t74 = ((x365%x366)==(x367+x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -28;

    t75 = ((x369%x370)==(x371+x372));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x373 = -7698375048LL;
	uint32_t x374 = 14821479U;
	int8_t x375 = INT8_MIN;
	static volatile int32_t t76 = -31;

    t76 = ((x373%x374)==(x375+x376));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x377 = 0;
	int32_t x378 = INT32_MIN;
	uint32_t x380 = 10239526U;
	static volatile int32_t t77 = 632845;

    t77 = ((x377%x378)==(x379+x380));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x381 = 4U;
	static int32_t x382 = -10164503;
	int64_t x383 = -2001447628LL;
	int16_t x384 = INT16_MAX;
	int32_t t78 = 11583503;

    t78 = ((x381%x382)==(x383+x384));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	volatile int32_t x387 = 3150;
	uint16_t x388 = 1U;

    t79 = ((x385%x386)==(x387+x388));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x393 = 353U;
	uint8_t x394 = 30U;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t80 = 0;

    t80 = ((x393%x394)==(x395+x396));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x401 = -1;
	int16_t x402 = -3;
	volatile int32_t t81 = 1;

    t81 = ((x401%x402)==(x403+x404));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x405 = UINT16_MAX;
	uint32_t x406 = UINT32_MAX;
	int64_t x407 = -590970LL;
	int64_t x408 = -1LL;
	static int32_t t82 = 33989;

    t82 = ((x405%x406)==(x407+x408));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x409 = INT16_MIN;
	volatile uint16_t x411 = 33U;

    t83 = ((x409%x410)==(x411+x412));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x413 = -1;
	int32_t t84 = 8318453;

    t84 = ((x413%x414)==(x415+x416));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x417 = -196099887LL;
	int64_t x418 = INT64_MIN;
	volatile int32_t x419 = INT32_MAX;
	static int16_t x420 = -297;
	int32_t t85 = -2483;

    t85 = ((x417%x418)==(x419+x420));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x421 = -1;
	static int8_t x423 = INT8_MIN;
	volatile uint64_t x424 = 80LLU;
	volatile int32_t t86 = -8;

    t86 = ((x421%x422)==(x423+x424));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x425 = INT8_MIN;
	static int8_t x426 = INT8_MAX;
	int8_t x427 = INT8_MAX;
	volatile int8_t x428 = INT8_MIN;
	int32_t t87 = -370134;

    t87 = ((x425%x426)==(x427+x428));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x429 = -1;
	int16_t x430 = INT16_MAX;
	int16_t x431 = INT16_MIN;
	volatile int32_t t88 = 775;

    t88 = ((x429%x430)==(x431+x432));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x437 = 1;
	uint64_t x438 = UINT64_MAX;
	static int32_t x439 = INT32_MIN;
	uint8_t x440 = 18U;

    t89 = ((x437%x438)==(x439+x440));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x441 = 249915323U;
	int64_t x442 = INT64_MAX;
	volatile int64_t x443 = INT64_MIN;
	uint32_t x444 = UINT32_MAX;
	static volatile int32_t t90 = 16929;

    t90 = ((x441%x442)==(x443+x444));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x446 = UINT32_MAX;
	int32_t x448 = -1;
	volatile int32_t t91 = 243;

    t91 = ((x445%x446)==(x447+x448));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x449 = 14U;
	int8_t x450 = 2;
	uint32_t x451 = 45091748U;
	static int16_t x452 = INT16_MIN;

    t92 = ((x449%x450)==(x451+x452));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x453 = 52;
	int64_t x454 = -1LL;
	int8_t x455 = INT8_MAX;
	volatile int8_t x456 = -1;
	volatile int32_t t93 = 835841462;

    t93 = ((x453%x454)==(x455+x456));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x457 = 27U;
	static volatile int64_t x458 = INT64_MIN;
	uint32_t x460 = 202145U;

    t94 = ((x457%x458)==(x459+x460));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x462 = 9;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t95 = -117;

    t95 = ((x461%x462)==(x463+x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x465 = 13U;
	int32_t x468 = INT32_MIN;
	volatile int32_t t96 = 3;

    t96 = ((x465%x466)==(x467+x468));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x469 = UINT64_MAX;
	int64_t x471 = -1LL;
	uint16_t x472 = 10U;

    t97 = ((x469%x470)==(x471+x472));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x473 = -62579811529179946LL;
	uint8_t x474 = 40U;
	uint16_t x475 = 16797U;
	uint16_t x476 = UINT16_MAX;

    t98 = ((x473%x474)==(x475+x476));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x477 = 3;
	static int16_t x478 = -13464;
	static int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MAX;
	volatile int32_t t99 = -7;

    t99 = ((x477%x478)==(x479+x480));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x485 = 1;
	int16_t x486 = -294;
	uint64_t x487 = UINT64_MAX;
	volatile int32_t t100 = -35115;

    t100 = ((x485%x486)==(x487+x488));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x489 = UINT32_MAX;
	volatile int16_t x490 = INT16_MIN;
	uint64_t x491 = UINT64_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t101 = -1;

    t101 = ((x489%x490)==(x491+x492));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x495 = -1495245486522594109LL;
	volatile int8_t x496 = INT8_MAX;
	volatile int32_t t102 = -17522456;

    t102 = ((x493%x494)==(x495+x496));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x497 = -54;
	int32_t x498 = INT32_MAX;
	int8_t x500 = INT8_MIN;
	volatile int32_t t103 = -25969;

    t103 = ((x497%x498)==(x499+x500));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x501 = INT16_MIN;
	uint64_t x502 = 73LLU;
	int8_t x503 = INT8_MAX;
	int32_t x504 = -7477879;
	volatile int32_t t104 = -466606;

    t104 = ((x501%x502)==(x503+x504));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x506 = 34;
	int32_t x507 = INT32_MIN;
	int64_t x508 = 0LL;
	static int32_t t105 = 8;

    t105 = ((x505%x506)==(x507+x508));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x513 = -1LL;
	int32_t x514 = INT32_MAX;
	uint8_t x515 = 28U;
	uint64_t x516 = 0LLU;

    t106 = ((x513%x514)==(x515+x516));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x517 = 1166U;
	int16_t x518 = INT16_MAX;
	int16_t x519 = 0;
	int16_t x520 = INT16_MIN;
	int32_t t107 = 1;

    t107 = ((x517%x518)==(x519+x520));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x521 = 15241967315LL;
	volatile int64_t x522 = -2367189474235LL;
	int16_t x523 = -8;
	int8_t x524 = -49;
	volatile int32_t t108 = 153621;

    t108 = ((x521%x522)==(x523+x524));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x525 = INT32_MAX;
	static volatile int16_t x526 = INT16_MAX;
	int64_t x528 = INT64_MAX;
	volatile int32_t t109 = 65310;

    t109 = ((x525%x526)==(x527+x528));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x530 = 3841;
	volatile int16_t x532 = 11;
	int32_t t110 = -192;

    t110 = ((x529%x530)==(x531+x532));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x533 = -8;
	int32_t x534 = INT32_MAX;
	int8_t x535 = -10;
	volatile int8_t x536 = -1;
	volatile int32_t t111 = -2;

    t111 = ((x533%x534)==(x535+x536));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x539 = -1;
	int8_t x540 = INT8_MAX;
	int32_t t112 = 27526370;

    t112 = ((x537%x538)==(x539+x540));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x545 = -1LL;
	int16_t x548 = -1;
	int32_t t113 = -141034;

    t113 = ((x545%x546)==(x547+x548));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x549 = -1;
	int16_t x550 = -1;
	static int64_t x551 = INT64_MAX;
	int64_t x552 = -1LL;
	volatile int32_t t114 = 16;

    t114 = ((x549%x550)==(x551+x552));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x553 = -1;
	volatile int8_t x554 = -1;
	static uint32_t x555 = 671U;
	uint64_t x556 = 1047066LLU;
	volatile int32_t t115 = 23661566;

    t115 = ((x553%x554)==(x555+x556));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x557 = 30U;
	static uint32_t x559 = 8651741U;
	volatile uint32_t x560 = 8470U;
	int32_t t116 = 409;

    t116 = ((x557%x558)==(x559+x560));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MAX;
	int16_t x564 = INT16_MAX;
	volatile int32_t t117 = -1227531;

    t117 = ((x561%x562)==(x563+x564));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x569 = -1;
	int64_t x570 = -1LL;
	uint64_t x571 = 3103LLU;
	int32_t x572 = -564976790;
	int32_t t118 = -895621;

    t118 = ((x569%x570)==(x571+x572));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x573 = UINT64_MAX;
	static int32_t x574 = -1;
	int32_t x575 = INT32_MIN;
	static volatile int32_t t119 = 17190522;

    t119 = ((x573%x574)==(x575+x576));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x577 = 150604LLU;
	int64_t x578 = INT64_MAX;
	uint64_t x579 = 145990LLU;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t120 = 771968;

    t120 = ((x577%x578)==(x579+x580));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x581 = 6;
	volatile uint16_t x582 = UINT16_MAX;
	int8_t x583 = INT8_MIN;
	static volatile uint8_t x584 = UINT8_MAX;

    t121 = ((x581%x582)==(x583+x584));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x586 = INT16_MIN;
	int64_t x587 = -18LL;

    t122 = ((x585%x586)==(x587+x588));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x597 = -1;
	static uint8_t x598 = 22U;
	static volatile uint32_t x599 = 13U;
	int32_t x600 = INT32_MAX;
	int32_t t123 = -36412;

    t123 = ((x597%x598)==(x599+x600));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x602 = 6;
	volatile uint32_t x603 = 8339U;
	uint16_t x604 = 29145U;
	volatile int32_t t124 = 1;

    t124 = ((x601%x602)==(x603+x604));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x606 = -1;
	int16_t x607 = INT16_MIN;
	volatile int32_t t125 = 324;

    t125 = ((x605%x606)==(x607+x608));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x609 = 4529083U;
	uint32_t x610 = UINT32_MAX;
	uint64_t x611 = UINT64_MAX;
	uint8_t x612 = 34U;
	int32_t t126 = -1210281;

    t126 = ((x609%x610)==(x611+x612));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x614 = -1;
	int16_t x615 = -1;
	int16_t x616 = 2;
	int32_t t127 = 14626;

    t127 = ((x613%x614)==(x615+x616));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x621 = INT16_MAX;
	uint64_t x623 = UINT64_MAX;
	int16_t x624 = -434;
	volatile int32_t t128 = 57504639;

    t128 = ((x621%x622)==(x623+x624));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x627 = 99379372225757LLU;
	int32_t t129 = -462340320;

    t129 = ((x625%x626)==(x627+x628));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x633 = 0U;
	int16_t x634 = INT16_MIN;
	uint16_t x635 = 51U;
	static int32_t x636 = -2683625;
	int32_t t130 = -2;

    t130 = ((x633%x634)==(x635+x636));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x645 = 788033;
	volatile int64_t x646 = INT64_MAX;
	int16_t x648 = 1009;

    t131 = ((x645%x646)==(x647+x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x649 = 2U;
	int32_t x650 = INT32_MAX;
	int64_t x651 = INT64_MIN;
	uint8_t x652 = 3U;

    t132 = ((x649%x650)==(x651+x652));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x653 = -1;
	static uint64_t x655 = 108043025113342903LLU;
	static int8_t x656 = INT8_MIN;
	static volatile int32_t t133 = 86124;

    t133 = ((x653%x654)==(x655+x656));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x661 = -11173614322LL;
	uint8_t x662 = UINT8_MAX;
	int64_t x663 = 12LL;
	int32_t t134 = 0;

    t134 = ((x661%x662)==(x663+x664));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x669 = 33U;
	int16_t x670 = INT16_MIN;
	static volatile int32_t t135 = -5;

    t135 = ((x669%x670)==(x671+x672));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x673 = INT8_MIN;
	int32_t x674 = INT32_MIN;
	volatile uint16_t x675 = 17031U;
	int32_t t136 = -672576;

    t136 = ((x673%x674)==(x675+x676));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x677 = INT16_MAX;
	uint64_t x680 = 1402361951961LLU;
	volatile int32_t t137 = 2919;

    t137 = ((x677%x678)==(x679+x680));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = INT64_MIN;
	int8_t x684 = INT8_MIN;
	volatile int32_t t138 = 1267526;

    t138 = ((x681%x682)==(x683+x684));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x689 = -1;
	volatile int64_t x690 = -4598540021329664688LL;
	int16_t x691 = INT16_MIN;
	static int64_t x692 = INT64_MAX;
	int32_t t139 = 0;

    t139 = ((x689%x690)==(x691+x692));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x693 = INT32_MAX;
	int32_t x694 = INT32_MIN;
	static int16_t x696 = -1;
	static int32_t t140 = 31049307;

    t140 = ((x693%x694)==(x695+x696));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x697 = 0U;
	uint64_t x698 = 17128282412042806LLU;
	volatile uint8_t x699 = 30U;
	static int8_t x700 = 0;
	static int32_t t141 = -1457;

    t141 = ((x697%x698)==(x699+x700));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x703 = 1;
	uint16_t x704 = 15444U;

    t142 = ((x701%x702)==(x703+x704));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x705 = INT32_MIN;
	uint32_t x706 = 1U;
	uint64_t x707 = 34155066809LLU;
	int8_t x708 = INT8_MIN;
	int32_t t143 = 7;

    t143 = ((x705%x706)==(x707+x708));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x709 = INT64_MAX;
	int8_t x710 = -1;
	int16_t x711 = 126;
	static uint64_t x712 = UINT64_MAX;
	static volatile int32_t t144 = 874237434;

    t144 = ((x709%x710)==(x711+x712));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x717 = INT32_MAX;
	uint8_t x720 = 85U;
	int32_t t145 = -803366190;

    t145 = ((x717%x718)==(x719+x720));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x721 = INT16_MAX;
	volatile int16_t x724 = INT16_MIN;

    t146 = ((x721%x722)==(x723+x724));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x725 = 49U;
	uint64_t x727 = 63LLU;
	static int32_t x728 = -128622;
	int32_t t147 = -10;

    t147 = ((x725%x726)==(x727+x728));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x729 = INT16_MIN;
	int32_t x730 = -1;
	uint16_t x731 = 4U;
	int8_t x732 = -17;
	static volatile int32_t t148 = 2;

    t148 = ((x729%x730)==(x731+x732));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x733 = 107U;
	volatile int64_t x734 = 102061LL;
	uint8_t x735 = UINT8_MAX;
	int16_t x736 = 1;
	volatile int32_t t149 = 0;

    t149 = ((x733%x734)==(x735+x736));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x738 = UINT32_MAX;
	volatile uint16_t x739 = UINT16_MAX;
	int16_t x740 = -834;

    t150 = ((x737%x738)==(x739+x740));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x741 = 0U;
	int8_t x742 = INT8_MAX;
	int8_t x743 = -1;
	int32_t x744 = INT32_MAX;
	int32_t t151 = -7292134;

    t151 = ((x741%x742)==(x743+x744));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x745 = -9928458;
	int64_t x746 = -2193644920LL;
	volatile int64_t x747 = -1LL;
	volatile int16_t x748 = INT16_MIN;
	volatile int32_t t152 = 1;

    t152 = ((x745%x746)==(x747+x748));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x749 = INT64_MIN;
	int32_t x750 = -1;
	uint32_t x751 = 111650510U;
	int16_t x752 = INT16_MIN;
	volatile int32_t t153 = 393015466;

    t153 = ((x749%x750)==(x751+x752));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x753 = 228U;
	volatile int8_t x754 = INT8_MIN;
	int8_t x755 = -1;
	volatile uint32_t x756 = 1757U;
	int32_t t154 = -510820575;

    t154 = ((x753%x754)==(x755+x756));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x758 = 3;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = INT16_MIN;
	int32_t t155 = 419;

    t155 = ((x757%x758)==(x759+x760));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x761 = 478377231429754LLU;
	int16_t x762 = INT16_MAX;
	int64_t x763 = -4501636LL;
	int32_t x764 = 1087;
	volatile int32_t t156 = 8483324;

    t156 = ((x761%x762)==(x763+x764));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x765 = INT16_MAX;
	static uint64_t x766 = UINT64_MAX;
	volatile uint8_t x767 = 1U;
	volatile int32_t t157 = 112904;

    t157 = ((x765%x766)==(x767+x768));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x769 = 15U;
	volatile int16_t x770 = 585;
	static volatile int16_t x771 = INT16_MIN;
	static volatile int8_t x772 = -29;
	volatile int32_t t158 = -1;

    t158 = ((x769%x770)==(x771+x772));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x773 = 6LLU;
	int8_t x774 = INT8_MIN;
	uint8_t x775 = UINT8_MAX;
	int32_t t159 = -78111;

    t159 = ((x773%x774)==(x775+x776));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x778 = 10698874990615651LL;
	volatile uint8_t x779 = 1U;
	static int16_t x780 = INT16_MIN;
	static int32_t t160 = -29;

    t160 = ((x777%x778)==(x779+x780));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x781 = -1;
	int16_t x782 = 1;
	volatile int32_t x783 = 5502;
	volatile uint64_t x784 = UINT64_MAX;
	volatile int32_t t161 = 7103158;

    t161 = ((x781%x782)==(x783+x784));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x785 = 52U;
	static int16_t x787 = 37;
	volatile int32_t x788 = INT32_MIN;
	int32_t t162 = 170;

    t162 = ((x785%x786)==(x787+x788));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x789 = 10224U;
	int32_t x790 = -58703;
	static volatile uint64_t x791 = 64560775LLU;
	uint8_t x792 = 6U;
	static int32_t t163 = -2110;

    t163 = ((x789%x790)==(x791+x792));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x793 = -1883454951831LL;
	uint16_t x794 = UINT16_MAX;
	uint64_t x795 = 68697781162942954LLU;

    t164 = ((x793%x794)==(x795+x796));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x797 = INT16_MAX;
	volatile int16_t x798 = -1168;
	static uint16_t x799 = 859U;
	int16_t x800 = 61;

    t165 = ((x797%x798)==(x799+x800));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x801 = INT64_MIN;
	uint16_t x802 = UINT16_MAX;
	uint16_t x803 = 1U;
	static int32_t t166 = -273;

    t166 = ((x801%x802)==(x803+x804));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x805 = 8294U;
	int16_t x806 = 97;
	volatile int8_t x807 = 0;
	uint16_t x808 = 0U;
	volatile int32_t t167 = 5053692;

    t167 = ((x805%x806)==(x807+x808));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x810 = -1;
	static uint64_t x811 = UINT64_MAX;
	volatile int8_t x812 = INT8_MIN;

    t168 = ((x809%x810)==(x811+x812));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x817 = INT8_MIN;
	uint16_t x818 = 3U;
	int64_t x819 = -23068506296458040LL;
	int32_t x820 = INT32_MAX;
	static int32_t t169 = 159;

    t169 = ((x817%x818)==(x819+x820));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x821 = INT16_MAX;
	int8_t x822 = INT8_MIN;
	int8_t x823 = INT8_MIN;
	uint64_t x824 = 14450LLU;

    t170 = ((x821%x822)==(x823+x824));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x825 = 124U;
	uint16_t x826 = 53U;
	volatile int32_t x827 = 437774;
	uint32_t x828 = UINT32_MAX;
	int32_t t171 = -2981282;

    t171 = ((x825%x826)==(x827+x828));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x829 = UINT64_MAX;
	int16_t x830 = INT16_MIN;
	int8_t x831 = 5;
	static int64_t x832 = 940LL;
	volatile int32_t t172 = -53328450;

    t172 = ((x829%x830)==(x831+x832));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x834 = INT16_MIN;
	int16_t x835 = INT16_MAX;
	uint16_t x836 = 209U;
	int32_t t173 = -749903740;

    t173 = ((x833%x834)==(x835+x836));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x838 = -1;
	int16_t x839 = INT16_MAX;
	volatile int8_t x840 = -10;
	int32_t t174 = -1;

    t174 = ((x837%x838)==(x839+x840));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x841 = UINT8_MAX;
	int16_t x843 = INT16_MAX;
	int8_t x844 = INT8_MAX;
	volatile int32_t t175 = 974;

    t175 = ((x841%x842)==(x843+x844));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x845 = -2;
	uint32_t x847 = 63U;
	int64_t x848 = 4592873969603877066LL;
	volatile int32_t t176 = -1002679;

    t176 = ((x845%x846)==(x847+x848));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x849 = INT64_MIN;
	static int16_t x850 = INT16_MAX;
	int8_t x852 = -1;
	int32_t t177 = 4095595;

    t177 = ((x849%x850)==(x851+x852));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x857 = INT16_MIN;
	int8_t x858 = INT8_MIN;
	volatile uint64_t x859 = UINT64_MAX;
	static int32_t x860 = INT32_MAX;
	volatile int32_t t178 = 141523731;

    t178 = ((x857%x858)==(x859+x860));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x861 = -1;
	volatile int8_t x862 = INT8_MIN;
	static int64_t x863 = INT64_MIN;
	int32_t t179 = -3;

    t179 = ((x861%x862)==(x863+x864));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x865 = 161974000LL;
	int64_t x866 = INT64_MIN;
	int16_t x867 = -3;
	int64_t x868 = 90984569278295LL;
	volatile int32_t t180 = -3972081;

    t180 = ((x865%x866)==(x867+x868));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x877 = INT32_MIN;
	static uint16_t x878 = 1850U;
	static int32_t x879 = -8;
	int32_t x880 = -1;
	int32_t t181 = 186;

    t181 = ((x877%x878)==(x879+x880));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x881 = INT64_MAX;
	int8_t x882 = INT8_MIN;
	int32_t x883 = -13860467;
	volatile int16_t x884 = INT16_MAX;
	volatile int32_t t182 = 659309212;

    t182 = ((x881%x882)==(x883+x884));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x886 = INT64_MAX;
	int64_t x887 = INT64_MAX;
	static volatile int32_t t183 = -734758;

    t183 = ((x885%x886)==(x887+x888));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x890 = UINT64_MAX;
	int8_t x891 = INT8_MIN;
	int8_t x892 = INT8_MIN;
	static int32_t t184 = 1;

    t184 = ((x889%x890)==(x891+x892));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x893 = -1;
	int64_t x894 = INT64_MIN;
	int16_t x895 = INT16_MAX;
	int16_t x896 = INT16_MIN;
	volatile int32_t t185 = -203;

    t185 = ((x893%x894)==(x895+x896));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x897 = UINT8_MAX;
	static int64_t x899 = INT64_MAX;
	volatile uint64_t x900 = 324617934474307LLU;
	volatile int32_t t186 = -61;

    t186 = ((x897%x898)==(x899+x900));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x903 = INT8_MIN;
	static uint32_t x904 = 511060U;

    t187 = ((x901%x902)==(x903+x904));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x905 = -1LL;
	int16_t x906 = INT16_MIN;
	int8_t x907 = INT8_MAX;
	int32_t t188 = -85;

    t188 = ((x905%x906)==(x907+x908));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x909 = INT64_MIN;
	static volatile uint8_t x910 = 77U;
	uint8_t x912 = UINT8_MAX;
	int32_t t189 = -1;

    t189 = ((x909%x910)==(x911+x912));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x913 = UINT64_MAX;
	int8_t x915 = 14;
	static int64_t x916 = INT64_MIN;
	int32_t t190 = -3561605;

    t190 = ((x913%x914)==(x915+x916));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x917 = 0U;
	int64_t x920 = INT64_MIN;
	static int32_t t191 = -1965956;

    t191 = ((x917%x918)==(x919+x920));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x921 = INT32_MAX;
	static uint16_t x924 = 2367U;
	volatile int32_t t192 = -40828;

    t192 = ((x921%x922)==(x923+x924));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x930 = INT8_MAX;
	volatile uint8_t x931 = 3U;
	volatile int32_t t193 = -112000;

    t193 = ((x929%x930)==(x931+x932));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x933 = -423146794029460LL;
	uint32_t x934 = UINT32_MAX;
	volatile uint16_t x936 = 349U;

    t194 = ((x933%x934)==(x935+x936));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x937 = -1LL;
	static volatile int32_t x938 = -1;
	int32_t x940 = INT32_MAX;
	int32_t t195 = 44;

    t195 = ((x937%x938)==(x939+x940));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x945 = -9283;
	uint16_t x946 = 31293U;
	int8_t x947 = -5;
	volatile int16_t x948 = INT16_MIN;

    t196 = ((x945%x946)==(x947+x948));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x949 = INT64_MIN;
	int32_t x950 = -200;
	uint16_t x951 = 108U;
	int64_t x952 = 30LL;
	volatile int32_t t197 = 225;

    t197 = ((x949%x950)==(x951+x952));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x953 = INT8_MIN;
	volatile int8_t x954 = -1;
	uint64_t x955 = 10LLU;
	volatile int64_t x956 = -1LL;
	static int32_t t198 = 5772667;

    t198 = ((x953%x954)==(x955+x956));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x958 = -1;
	uint16_t x959 = 7U;
	static uint16_t x960 = 3U;
	static volatile int32_t t199 = 14578364;

    t199 = ((x957%x958)==(x959+x960));

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

