
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

volatile int8_t x1 = INT8_MAX;
volatile int32_t x10 = -1672;
uint64_t x13 = 115LLU;
int32_t t3 = 13215;
uint64_t x20 = 2926LLU;
int32_t x27 = 52323776;
volatile int16_t x30 = INT16_MIN;
uint64_t x32 = UINT64_MAX;
uint32_t x33 = UINT32_MAX;
uint8_t x35 = UINT8_MAX;
int16_t x42 = -1;
volatile int32_t x43 = 2383922;
int32_t t10 = 1;
int16_t x70 = INT16_MAX;
uint64_t x74 = UINT64_MAX;
int32_t t17 = 1060919716;
int32_t t18 = 5819;
volatile int8_t x100 = -1;
int64_t x104 = INT64_MAX;
uint32_t x107 = UINT32_MAX;
int64_t x108 = -1LL;
uint64_t x110 = 37270660LLU;
static uint16_t x111 = 14U;
int64_t x130 = INT64_MAX;
static uint32_t x149 = 25U;
volatile int32_t t27 = -211638363;
int16_t x171 = INT16_MIN;
static int8_t x183 = -1;
int16_t x185 = INT16_MIN;
uint64_t x196 = 165LLU;
int64_t x201 = INT64_MAX;
static volatile uint8_t x210 = 1U;
int16_t x214 = INT16_MIN;
int32_t t38 = 2;
static volatile int32_t t41 = 2269506;
int64_t x254 = INT64_MAX;
int64_t x256 = -1LL;
int32_t t43 = -13029795;
volatile int32_t x266 = -7383;
int16_t x278 = INT16_MIN;
int32_t t45 = -615;
volatile int8_t x298 = 0;
int64_t x307 = -750604133646LL;
volatile int8_t x312 = INT8_MIN;
static uint8_t x318 = UINT8_MAX;
int16_t x319 = -46;
int32_t x342 = -7382;
volatile uint32_t x356 = UINT32_MAX;
uint16_t x358 = UINT16_MAX;
static volatile uint32_t x360 = 4909695U;
static volatile int16_t x363 = INT16_MIN;
static volatile uint64_t x376 = 33LLU;
volatile int32_t t64 = -28952;
volatile int16_t x392 = -123;
volatile int32_t t68 = 9410;
uint16_t x413 = 27U;
int64_t x425 = INT64_MIN;
volatile int32_t t73 = 923145;
int16_t x430 = INT16_MAX;
uint8_t x432 = UINT8_MAX;
volatile int32_t t75 = 68727;
volatile int32_t t77 = -1;
volatile int32_t t78 = -6045;
int64_t x481 = -95862964LL;
static uint64_t x485 = 48LLU;
static volatile int16_t x490 = INT16_MAX;
volatile int16_t x503 = -1;
int8_t x521 = -1;
int32_t x524 = 1;
volatile uint64_t x527 = 4323373263615LLU;
int64_t x528 = -1LL;
volatile int16_t x534 = INT16_MIN;
uint32_t x537 = 839841U;
uint8_t x540 = UINT8_MAX;
int8_t x563 = INT8_MIN;
int64_t x564 = -1LL;
uint32_t x567 = UINT32_MAX;
uint16_t x568 = 6013U;
volatile int32_t t96 = 6105178;
int64_t x572 = INT64_MAX;
int32_t x580 = INT32_MIN;
int32_t t98 = 33619;
int32_t x587 = -1;
int32_t x588 = -1;
uint64_t x620 = UINT64_MAX;
uint32_t x623 = 288238U;
static int64_t x624 = -1LL;
int32_t x634 = INT32_MAX;
uint64_t x639 = 3330508948LLU;
uint8_t x640 = 2U;
volatile int8_t x642 = -1;
uint16_t x648 = 26451U;
volatile uint64_t x651 = UINT64_MAX;
volatile int32_t t110 = 64446312;
volatile int32_t x657 = -1;
volatile int32_t t112 = -111;
int16_t x667 = INT16_MIN;
int32_t t114 = -56815061;
int8_t x679 = 62;
uint16_t x683 = UINT16_MAX;
uint16_t x689 = 336U;
static int64_t x693 = INT64_MAX;
static int64_t x701 = -462266073LL;
int32_t t121 = -717;
static uint32_t x710 = UINT32_MAX;
uint32_t x723 = 2U;
static int8_t x729 = INT8_MAX;
static volatile uint32_t x732 = 1U;
static volatile int32_t t126 = -13628563;
uint16_t x742 = 643U;
int64_t x744 = INT64_MIN;
uint32_t x746 = UINT32_MAX;
uint32_t x751 = UINT32_MAX;
uint16_t x767 = 1111U;
int8_t x770 = 22;
volatile int32_t t133 = -409428177;
int32_t x778 = INT32_MAX;
int16_t x812 = 2389;
static volatile uint64_t x835 = 8116732485597273LLU;
static volatile uint16_t x836 = UINT16_MAX;
uint32_t x855 = 129U;
int8_t x861 = INT8_MAX;
uint64_t x874 = UINT64_MAX;
static int8_t x888 = INT8_MIN;
int32_t t148 = 2985;
static int16_t x892 = -1;
int16_t x907 = INT16_MIN;
static int16_t x914 = -6860;
uint64_t x915 = UINT64_MAX;
volatile int32_t t153 = -5838008;
static volatile int8_t x921 = INT8_MIN;
volatile int8_t x924 = 2;
volatile uint16_t x940 = 17427U;
static int16_t x946 = -1;
static int64_t x948 = 2965827LL;
volatile int8_t x950 = INT8_MAX;
int8_t x955 = INT8_MIN;
int16_t x962 = INT16_MIN;
int32_t t165 = 2790207;
static uint16_t x982 = 60U;
int8_t x992 = INT8_MAX;
uint32_t x996 = 72U;
int32_t t169 = -73530;
int32_t t173 = 18;
int16_t x1040 = -1;
static int32_t t176 = -255;
static volatile int32_t x1065 = INT32_MIN;
int8_t x1088 = INT8_MAX;
int32_t t182 = -1;
int32_t x1090 = INT32_MAX;
int8_t x1092 = INT8_MIN;
volatile int32_t t183 = -16;
int64_t x1095 = -1LL;
static uint16_t x1098 = 70U;
int32_t t186 = 42262;
int16_t x1114 = 304;
static int16_t x1115 = 1;
volatile int32_t t188 = 0;
int8_t x1119 = -1;
int32_t t189 = -3366558;
static uint8_t x1137 = UINT8_MAX;
int32_t x1143 = 49937;
int16_t x1147 = 32;
volatile uint8_t x1148 = UINT8_MAX;
int16_t x1149 = -1;
static int8_t x1154 = INT8_MIN;
int16_t x1160 = -67;
int32_t t197 = -5734;
static uint16_t x1161 = 3U;
int8_t x1162 = -1;
uint64_t x1168 = 3337135LLU;
int32_t t199 = -1017;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	int64_t x4 = -49LL;
	int32_t t0 = 812301310;

    t0 = (x1!=(x2&(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	uint64_t x6 = 410091756281492LLU;
	int8_t x7 = -1;
	int16_t x8 = -1;
	static int32_t t1 = 3235615;

    t1 = (x5!=(x6&(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	uint64_t x11 = 211196778LLU;
	int32_t x12 = 1;
	volatile int32_t t2 = -32914832;

    t2 = (x9!=(x10&(x11*x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = 1682U;
	int32_t x15 = -18;
	int8_t x16 = INT8_MAX;

    t3 = (x13!=(x14&(x15*x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	int8_t x18 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;
	volatile int32_t t4 = 9485389;

    t4 = (x17!=(x18&(x19*x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = -1;
	volatile uint64_t x22 = 14099987336611LLU;
	int8_t x23 = 26;
	uint16_t x24 = 737U;
	int32_t t5 = 30772;

    t5 = (x21!=(x22&(x23*x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -2542572099666LL;
	uint64_t x26 = UINT64_MAX;
	uint8_t x28 = 33U;
	int32_t t6 = -338883723;

    t6 = (x25!=(x26&(x27*x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int64_t x31 = INT64_MIN;
	int32_t t7 = -4173480;

    t7 = (x29!=(x30&(x31*x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x34 = 1U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 4447;

    t8 = (x33!=(x34&(x35*x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 23U;
	uint64_t x38 = 46LLU;
	int8_t x39 = -1;
	uint32_t x40 = 1U;
	static volatile int32_t t9 = 810339;

    t9 = (x37!=(x38&(x39*x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	volatile uint64_t x44 = UINT64_MAX;

    t10 = (x41!=(x42&(x43*x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = -1LL;
	static int16_t x50 = INT16_MIN;
	static int8_t x51 = -1;
	int8_t x52 = -1;
	volatile int32_t t11 = -140;

    t11 = (x49!=(x50&(x51*x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MIN;
	static volatile int16_t x58 = -1;
	static int64_t x59 = -222638926LL;
	volatile uint8_t x60 = 1U;
	volatile int32_t t12 = -35479;

    t12 = (x57!=(x58&(x59*x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	volatile int32_t x66 = 464149765;
	int8_t x67 = 15;
	int16_t x68 = INT16_MAX;
	static volatile int32_t t13 = 266;

    t13 = (x65!=(x66&(x67*x68)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = UINT32_MAX;
	uint32_t x71 = 818U;
	static int8_t x72 = INT8_MAX;
	static int32_t t14 = -112759;

    t14 = (x69!=(x70&(x71*x72)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x73 = INT64_MAX;
	int16_t x75 = -1;
	static int32_t x76 = 628131;
	int32_t t15 = -48;

    t15 = (x73!=(x74&(x75*x76)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MAX;
	static volatile uint8_t x78 = 118U;
	static volatile uint64_t x79 = 1236524706LLU;
	volatile uint8_t x80 = 3U;
	int32_t t16 = -28014;

    t16 = (x77!=(x78&(x79*x80)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x85 = -1LL;
	volatile int32_t x86 = INT32_MIN;
	volatile int16_t x87 = 325;
	volatile int32_t x88 = -65;

    t17 = (x85!=(x86&(x87*x88)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x93 = INT8_MAX;
	uint32_t x94 = 65U;
	volatile uint16_t x95 = 2U;
	static uint64_t x96 = 99101266458423415LLU;

    t18 = (x93!=(x94&(x95*x96)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MAX;
	int8_t x99 = 0;
	volatile int32_t t19 = 93;

    t19 = (x97!=(x98&(x99*x100)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 2504LLU;
	int32_t t20 = -6002;

    t20 = (x101!=(x102&(x103*x104)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = -1;
	volatile int32_t x106 = -1;
	int32_t t21 = 175501576;

    t21 = (x105!=(x106&(x107*x108)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = 8278;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t22 = 90;

    t22 = (x109!=(x110&(x111*x112)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MAX;
	int16_t x115 = -1;
	int8_t x116 = -32;
	static int32_t t23 = 21424;

    t23 = (x113!=(x114&(x115*x116)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	volatile uint64_t x119 = 97626740280059399LLU;
	static volatile int64_t x120 = INT64_MAX;
	int32_t t24 = -3180;

    t24 = (x117!=(x118&(x119*x120)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x125 = 31290008;
	uint64_t x126 = 35114903202737313LLU;
	volatile uint32_t x127 = UINT32_MAX;
	volatile uint16_t x128 = 1785U;
	volatile int32_t t25 = 492895930;

    t25 = (x125!=(x126&(x127*x128)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = INT32_MAX;
	int64_t x131 = -1LL;
	uint16_t x132 = UINT16_MAX;
	int32_t t26 = 0;

    t26 = (x129!=(x130&(x131*x132)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x150 = INT32_MIN;
	volatile int8_t x151 = -1;
	uint8_t x152 = 18U;

    t27 = (x149!=(x150&(x151*x152)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x153 = 202U;
	static uint32_t x154 = UINT32_MAX;
	volatile int16_t x155 = 4494;
	volatile int16_t x156 = -1;
	volatile int32_t t28 = 39953595;

    t28 = (x153!=(x154&(x155*x156)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x169 = 210;
	int32_t x170 = INT32_MAX;
	int8_t x172 = INT8_MIN;
	static int32_t t29 = 0;

    t29 = (x169!=(x170&(x171*x172)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = INT16_MAX;
	static uint64_t x174 = 3407433140760783223LLU;
	uint32_t x175 = 29U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t30 = -4;

    t30 = (x173!=(x174&(x175*x176)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x181 = INT64_MAX;
	static volatile int64_t x182 = INT64_MIN;
	uint64_t x184 = 1414695LLU;
	int32_t t31 = 684;

    t31 = (x181!=(x182&(x183*x184)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x186 = 22U;
	volatile int16_t x187 = INT16_MAX;
	volatile uint32_t x188 = 441197576U;
	int32_t t32 = 753641;

    t32 = (x185!=(x186&(x187*x188)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	int8_t x191 = INT8_MAX;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t33 = 953883;

    t33 = (x189!=(x190&(x191*x192)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x193 = 7585119U;
	uint32_t x194 = UINT32_MAX;
	static uint64_t x195 = 8431657070045LLU;
	volatile int32_t t34 = 309;

    t34 = (x193!=(x194&(x195*x196)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x197 = 16U;
	uint8_t x198 = 7U;
	uint16_t x199 = UINT16_MAX;
	uint64_t x200 = 0LLU;
	volatile int32_t t35 = -148109;

    t35 = (x197!=(x198&(x199*x200)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x202 = -28;
	uint64_t x203 = 622441798672LLU;
	uint64_t x204 = UINT64_MAX;
	static int32_t t36 = 556;

    t36 = (x201!=(x202&(x203*x204)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x209 = 11U;
	volatile uint16_t x211 = 8524U;
	int16_t x212 = INT16_MAX;
	volatile int32_t t37 = -33987543;

    t37 = (x209!=(x210&(x211*x212)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x213 = -1;
	int64_t x215 = 42236LL;
	volatile uint32_t x216 = UINT32_MAX;

    t38 = (x213!=(x214&(x215*x216)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x225 = -1;
	int32_t x226 = -98;
	int32_t x227 = -1;
	static int32_t x228 = -1;
	volatile int32_t t39 = 64334214;

    t39 = (x225!=(x226&(x227*x228)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x237 = UINT16_MAX;
	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = -1;
	static volatile int32_t x240 = -2694;
	static volatile int32_t t40 = -542093;

    t40 = (x237!=(x238&(x239*x240)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = -888;
	int64_t x242 = 1036765LL;
	int8_t x243 = INT8_MAX;
	int16_t x244 = -3;

    t41 = (x241!=(x242&(x243*x244)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = -1;
	uint32_t x251 = 1381U;
	static volatile uint8_t x252 = 64U;
	static int32_t t42 = -1;

    t42 = (x249!=(x250&(x251*x252)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x253 = INT8_MIN;
	uint32_t x255 = 5U;

    t43 = (x253!=(x254&(x255*x256)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x265 = UINT64_MAX;
	int16_t x267 = INT16_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t44 = 3838;

    t44 = (x265!=(x266&(x267*x268)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x277 = 46;
	int32_t x279 = -3639379;
	uint8_t x280 = UINT8_MAX;

    t45 = (x277!=(x278&(x279*x280)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	int32_t x290 = -97369;
	static volatile int8_t x291 = -15;
	volatile uint16_t x292 = 1U;
	int32_t t46 = -6;

    t46 = (x289!=(x290&(x291*x292)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MAX;
	int16_t x295 = -28;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t47 = 557;

    t47 = (x293!=(x294&(x295*x296)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x297 = -1;
	int8_t x299 = 12;
	volatile uint8_t x300 = 4U;
	int32_t t48 = -118728644;

    t48 = (x297!=(x298&(x299*x300)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x301 = -9LL;
	static uint16_t x302 = 1443U;
	int8_t x303 = -1;
	static volatile uint32_t x304 = 9U;
	volatile int32_t t49 = 632485906;

    t49 = (x301!=(x302&(x303*x304)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t50 = 42;

    t50 = (x305!=(x306&(x307*x308)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x309 = 25U;
	volatile uint16_t x310 = 326U;
	static uint8_t x311 = 99U;
	volatile int32_t t51 = 69;

    t51 = (x309!=(x310&(x311*x312)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x313 = INT32_MIN;
	volatile int32_t x314 = -1;
	uint64_t x315 = 857856967909LLU;
	uint16_t x316 = 41U;
	volatile int32_t t52 = -138308920;

    t52 = (x313!=(x314&(x315*x316)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x317 = 63;
	int8_t x320 = -1;
	int32_t t53 = 291485465;

    t53 = (x317!=(x318&(x319*x320)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x321 = 365600950750629228LLU;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 891209272LLU;
	int8_t x324 = 1;
	volatile int32_t t54 = -17311210;

    t54 = (x321!=(x322&(x323*x324)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x333 = UINT32_MAX;
	int8_t x334 = -1;
	int64_t x335 = -1LL;
	uint8_t x336 = 14U;
	volatile int32_t t55 = 0;

    t55 = (x333!=(x334&(x335*x336)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x337 = 0U;
	static uint8_t x338 = 1U;
	static uint16_t x339 = 10750U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t56 = 228604202;

    t56 = (x337!=(x338&(x339*x340)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x341 = 603U;
	static uint32_t x343 = 57814U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t57 = 24240258;

    t57 = (x341!=(x342&(x343*x344)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x345 = UINT8_MAX;
	int8_t x346 = -1;
	int32_t x347 = 0;
	int32_t x348 = INT32_MIN;
	volatile int32_t t58 = 465388782;

    t58 = (x345!=(x346&(x347*x348)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x353 = 23U;
	static uint32_t x354 = 113115821U;
	static uint8_t x355 = UINT8_MAX;
	static volatile int32_t t59 = -16;

    t59 = (x353!=(x354&(x355*x356)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x357 = 86025084905733LLU;
	volatile uint16_t x359 = 5250U;
	volatile int32_t t60 = 480149;

    t60 = (x357!=(x358&(x359*x360)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x361 = 1843;
	int8_t x362 = -1;
	static uint16_t x364 = 6U;
	int32_t t61 = -97492;

    t61 = (x361!=(x362&(x363*x364)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x365 = 386695U;
	static int16_t x366 = INT16_MAX;
	volatile uint64_t x367 = 113244231247LLU;
	uint64_t x368 = 1712423584595LLU;
	static int32_t t62 = -226245958;

    t62 = (x365!=(x366&(x367*x368)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x369 = INT16_MAX;
	int32_t x370 = INT32_MIN;
	static int16_t x371 = 1;
	volatile int16_t x372 = -93;
	volatile int32_t t63 = 972;

    t63 = (x369!=(x370&(x371*x372)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;

    t64 = (x373!=(x374&(x375*x376)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x381 = 1;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = -1;
	static volatile int64_t x384 = 14507LL;
	int32_t t65 = -1796798;

    t65 = (x381!=(x382&(x383*x384)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x385 = -248;
	volatile int64_t x386 = -1LL;
	int8_t x387 = -13;
	static uint16_t x388 = 6018U;
	static volatile int32_t t66 = 445;

    t66 = (x385!=(x386&(x387*x388)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	volatile int16_t x391 = 9369;
	volatile int32_t t67 = 30661334;

    t67 = (x389!=(x390&(x391*x392)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x393 = INT64_MIN;
	int8_t x394 = -1;
	static uint16_t x395 = 10U;
	uint16_t x396 = UINT16_MAX;

    t68 = (x393!=(x394&(x395*x396)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x397 = INT8_MIN;
	uint32_t x398 = UINT32_MAX;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	volatile int32_t t69 = 168008257;

    t69 = (x397!=(x398&(x399*x400)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x409 = -1;
	int32_t x410 = 18;
	int8_t x411 = 0;
	uint16_t x412 = 16433U;
	int32_t t70 = -108439;

    t70 = (x409!=(x410&(x411*x412)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x414 = 12U;
	int64_t x415 = -40107LL;
	static uint8_t x416 = 10U;
	volatile int32_t t71 = 235963;

    t71 = (x413!=(x414&(x415*x416)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x417 = INT32_MIN;
	int8_t x418 = -2;
	uint32_t x419 = 408352U;
	int32_t x420 = INT32_MIN;
	static int32_t t72 = 1;

    t72 = (x417!=(x418&(x419*x420)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x426 = INT32_MAX;
	volatile uint64_t x427 = 1439LLU;
	uint16_t x428 = 0U;

    t73 = (x425!=(x426&(x427*x428)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x429 = -2199212624LL;
	static volatile int32_t x431 = -1;
	int32_t t74 = 121;

    t74 = (x429!=(x430&(x431*x432)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x437 = 0U;
	int16_t x438 = INT16_MIN;
	static uint32_t x439 = UINT32_MAX;
	int16_t x440 = -1;

    t75 = (x437!=(x438&(x439*x440)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x441 = 62U;
	volatile int32_t x442 = 31;
	uint8_t x443 = 63U;
	volatile int16_t x444 = -1;
	volatile int32_t t76 = -106;

    t76 = (x441!=(x442&(x443*x444)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x453 = 1;
	uint32_t x454 = UINT32_MAX;
	static int8_t x455 = -5;
	uint32_t x456 = 1872952U;

    t77 = (x453!=(x454&(x455*x456)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x461 = INT32_MIN;
	uint32_t x462 = 508369125U;
	uint16_t x463 = 587U;
	int8_t x464 = INT8_MAX;

    t78 = (x461!=(x462&(x463*x464)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x465 = 1LLU;
	static volatile int16_t x466 = INT16_MIN;
	int32_t x467 = -3438;
	int8_t x468 = -1;
	static volatile int32_t t79 = -57;

    t79 = (x465!=(x466&(x467*x468)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x469 = 794265119U;
	volatile uint16_t x470 = UINT16_MAX;
	static int64_t x471 = 671984LL;
	int32_t x472 = INT32_MAX;
	int32_t t80 = -485335987;

    t80 = (x469!=(x470&(x471*x472)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x482 = INT16_MIN;
	uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t81 = -123673;

    t81 = (x481!=(x482&(x483*x484)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x486 = 1U;
	static uint32_t x487 = 566483U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t82 = -27342;

    t82 = (x485!=(x486&(x487*x488)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x489 = UINT16_MAX;
	volatile int16_t x491 = -857;
	uint8_t x492 = 1U;
	static int32_t t83 = 3559724;

    t83 = (x489!=(x490&(x491*x492)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x493 = INT64_MIN;
	int64_t x494 = 0LL;
	uint32_t x495 = UINT32_MAX;
	volatile uint32_t x496 = 0U;
	int32_t t84 = 3497011;

    t84 = (x493!=(x494&(x495*x496)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x497 = INT8_MIN;
	uint8_t x498 = 1U;
	static int8_t x499 = -1;
	uint32_t x500 = UINT32_MAX;
	int32_t t85 = -2;

    t85 = (x497!=(x498&(x499*x500)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	int32_t x502 = INT32_MIN;
	static int16_t x504 = INT16_MIN;
	static int32_t t86 = -3;

    t86 = (x501!=(x502&(x503*x504)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x509 = INT16_MAX;
	uint8_t x510 = 25U;
	uint64_t x511 = 6556927775220LLU;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t87 = 1;

    t87 = (x509!=(x510&(x511*x512)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x513 = 0;
	uint64_t x514 = 48013368LLU;
	int8_t x515 = -21;
	int16_t x516 = INT16_MIN;
	int32_t t88 = 83579128;

    t88 = (x513!=(x514&(x515*x516)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x522 = INT16_MAX;
	static volatile int16_t x523 = -1;
	int32_t t89 = 7409;

    t89 = (x521!=(x522&(x523*x524)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x525 = -1LL;
	int16_t x526 = -1;
	int32_t t90 = -3484;

    t90 = (x525!=(x526&(x527*x528)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x533 = 52LL;
	int64_t x535 = -1LL;
	static uint8_t x536 = 64U;
	int32_t t91 = 1730;

    t91 = (x533!=(x534&(x535*x536)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x538 = -12845333;
	uint16_t x539 = 7061U;
	volatile int32_t t92 = 0;

    t92 = (x537!=(x538&(x539*x540)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x541 = UINT16_MAX;
	int16_t x542 = -20;
	int16_t x543 = INT16_MIN;
	static volatile int8_t x544 = INT8_MIN;
	volatile int32_t t93 = -50369523;

    t93 = (x541!=(x542&(x543*x544)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x557 = -1;
	int32_t x558 = -14323;
	int32_t x559 = -1;
	uint16_t x560 = 6106U;
	int32_t t94 = -2183;

    t94 = (x557!=(x558&(x559*x560)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x561 = 133484316987LL;
	int32_t x562 = INT32_MAX;
	int32_t t95 = 188;

    t95 = (x561!=(x562&(x563*x564)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x565 = INT64_MAX;
	volatile uint64_t x566 = UINT64_MAX;

    t96 = (x565!=(x566&(x567*x568)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x569 = -1;
	static uint8_t x570 = 13U;
	uint64_t x571 = UINT64_MAX;
	static int32_t t97 = -32081563;

    t97 = (x569!=(x570&(x571*x572)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x577 = 208;
	volatile int64_t x578 = INT64_MIN;
	int64_t x579 = -1LL;

    t98 = (x577!=(x578&(x579*x580)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x581 = INT64_MAX;
	volatile uint32_t x582 = UINT32_MAX;
	static uint16_t x583 = 93U;
	static int8_t x584 = INT8_MAX;
	int32_t t99 = 28386614;

    t99 = (x581!=(x582&(x583*x584)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x585 = -520056LL;
	int32_t x586 = -1;
	volatile int32_t t100 = 12356;

    t100 = (x585!=(x586&(x587*x588)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x610 = -1;
	static uint32_t x611 = 27882U;
	uint8_t x612 = 7U;
	volatile int32_t t101 = 2;

    t101 = (x609!=(x610&(x611*x612)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x617 = -1;
	volatile int16_t x618 = INT16_MIN;
	int16_t x619 = INT16_MIN;
	static int32_t t102 = 1;

    t102 = (x617!=(x618&(x619*x620)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x621 = INT32_MAX;
	int64_t x622 = -1LL;
	volatile int32_t t103 = -120983157;

    t103 = (x621!=(x622&(x623*x624)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x625 = -1;
	int8_t x626 = -1;
	int32_t x627 = -3606142;
	uint64_t x628 = UINT64_MAX;
	int32_t t104 = -2649566;

    t104 = (x625!=(x626&(x627*x628)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x629 = 626U;
	static volatile int8_t x630 = INT8_MAX;
	int64_t x631 = -1LL;
	uint64_t x632 = UINT64_MAX;
	int32_t t105 = -265;

    t105 = (x629!=(x630&(x631*x632)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x633 = INT64_MAX;
	static uint64_t x635 = 266258311258LLU;
	int8_t x636 = INT8_MIN;
	int32_t t106 = 46;

    t106 = (x633!=(x634&(x635*x636)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x637 = 0;
	volatile uint64_t x638 = 796936402065LLU;
	int32_t t107 = -16426093;

    t107 = (x637!=(x638&(x639*x640)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x641 = -1;
	int16_t x643 = -1317;
	static int16_t x644 = -5506;
	volatile int32_t t108 = -5874;

    t108 = (x641!=(x642&(x643*x644)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x645 = INT32_MAX;
	volatile int16_t x646 = INT16_MIN;
	uint32_t x647 = 458U;
	volatile int32_t t109 = 1522;

    t109 = (x645!=(x646&(x647*x648)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x649 = UINT8_MAX;
	static int16_t x650 = -1;
	uint8_t x652 = UINT8_MAX;

    t110 = (x649!=(x650&(x651*x652)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x658 = -4187011327LL;
	int64_t x659 = -668492503290247LL;
	int8_t x660 = INT8_MIN;
	volatile int32_t t111 = -7198777;

    t111 = (x657!=(x658&(x659*x660)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x661 = INT64_MAX;
	volatile int64_t x662 = 3286087368345LL;
	volatile uint16_t x663 = UINT16_MAX;
	int8_t x664 = INT8_MIN;

    t112 = (x661!=(x662&(x663*x664)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x665 = 3771738325LLU;
	volatile int16_t x666 = INT16_MIN;
	static uint32_t x668 = 1530770U;
	static volatile int32_t t113 = -932180;

    t113 = (x665!=(x666&(x667*x668)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x669 = 1U;
	int8_t x670 = 1;
	uint16_t x671 = 168U;
	int8_t x672 = INT8_MAX;

    t114 = (x669!=(x670&(x671*x672)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x677 = 72;
	int8_t x678 = 2;
	volatile uint16_t x680 = 155U;
	int32_t t115 = 23977;

    t115 = (x677!=(x678&(x679*x680)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x681 = INT16_MAX;
	int8_t x682 = INT8_MIN;
	static int16_t x684 = INT16_MIN;
	volatile int32_t t116 = -1017770;

    t116 = (x681!=(x682&(x683*x684)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x690 = 72297968LL;
	volatile int8_t x691 = -1;
	uint16_t x692 = 1043U;
	int32_t t117 = 94;

    t117 = (x689!=(x690&(x691*x692)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x694 = 6;
	int8_t x695 = -7;
	int8_t x696 = INT8_MAX;
	volatile int32_t t118 = -3158239;

    t118 = (x693!=(x694&(x695*x696)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x697 = INT8_MIN;
	int64_t x698 = 50405LL;
	int16_t x699 = INT16_MAX;
	int16_t x700 = -1;
	int32_t t119 = 17336482;

    t119 = (x697!=(x698&(x699*x700)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x702 = INT64_MIN;
	int32_t x703 = 7102;
	int8_t x704 = INT8_MIN;
	int32_t t120 = 152;

    t120 = (x701!=(x702&(x703*x704)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x705 = UINT16_MAX;
	int64_t x706 = INT64_MIN;
	static int8_t x707 = INT8_MIN;
	static int8_t x708 = -1;

    t121 = (x705!=(x706&(x707*x708)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x709 = -14;
	int16_t x711 = -1;
	int16_t x712 = -143;
	volatile int32_t t122 = 904351312;

    t122 = (x709!=(x710&(x711*x712)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x717 = 7465149563LLU;
	int16_t x718 = 443;
	volatile uint64_t x719 = 751898835LLU;
	static volatile int8_t x720 = 4;
	static int32_t t123 = -420827;

    t123 = (x717!=(x718&(x719*x720)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x721 = 60U;
	static uint16_t x722 = 4U;
	static int8_t x724 = INT8_MIN;
	int32_t t124 = -483834217;

    t124 = (x721!=(x722&(x723*x724)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x730 = 105;
	static int8_t x731 = INT8_MAX;
	volatile int32_t t125 = -3;

    t125 = (x729!=(x730&(x731*x732)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x737 = 684955227LL;
	int32_t x738 = -27;
	int16_t x739 = INT16_MIN;
	volatile int16_t x740 = INT16_MIN;

    t126 = (x737!=(x738&(x739*x740)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x741 = -42;
	uint16_t x743 = 1U;
	volatile int32_t t127 = 74362848;

    t127 = (x741!=(x742&(x743*x744)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x747 = 0;
	volatile int64_t x748 = INT64_MIN;
	volatile int32_t t128 = -51911331;

    t128 = (x745!=(x746&(x747*x748)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x749 = -1LL;
	int16_t x750 = 10;
	static volatile int8_t x752 = INT8_MAX;
	volatile int32_t t129 = -132337360;

    t129 = (x749!=(x750&(x751*x752)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x753 = INT8_MIN;
	volatile int16_t x754 = INT16_MIN;
	static int32_t x755 = -313674;
	int8_t x756 = INT8_MIN;
	int32_t t130 = 167166195;

    t130 = (x753!=(x754&(x755*x756)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x765 = -1;
	int32_t x766 = -1;
	static volatile int8_t x768 = INT8_MAX;
	static int32_t t131 = 69966;

    t131 = (x765!=(x766&(x767*x768)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x769 = -1;
	volatile int32_t x771 = 4797727;
	volatile int8_t x772 = INT8_MIN;
	int32_t t132 = 240309418;

    t132 = (x769!=(x770&(x771*x772)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x773 = INT64_MIN;
	int32_t x774 = -472;
	static int64_t x775 = -1764778961074978LL;
	uint8_t x776 = UINT8_MAX;

    t133 = (x773!=(x774&(x775*x776)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x777 = INT16_MIN;
	int16_t x779 = 109;
	volatile int16_t x780 = -1;
	int32_t t134 = 14399;

    t134 = (x777!=(x778&(x779*x780)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x781 = INT32_MAX;
	int8_t x782 = -1;
	uint64_t x783 = UINT64_MAX;
	int64_t x784 = INT64_MIN;
	int32_t t135 = -7130;

    t135 = (x781!=(x782&(x783*x784)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x789 = 3LLU;
	static int16_t x790 = 0;
	int64_t x791 = -3889908LL;
	int32_t x792 = -1;
	volatile int32_t t136 = -77218941;

    t136 = (x789!=(x790&(x791*x792)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x797 = -3136747604456LL;
	static int8_t x798 = 2;
	int8_t x799 = INT8_MAX;
	volatile uint64_t x800 = UINT64_MAX;
	int32_t t137 = 90704304;

    t137 = (x797!=(x798&(x799*x800)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x805 = UINT8_MAX;
	int32_t x806 = -1;
	uint16_t x807 = 76U;
	uint64_t x808 = 350843823LLU;
	static int32_t t138 = -26622;

    t138 = (x805!=(x806&(x807*x808)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x809 = -103642931;
	static int64_t x810 = -1LL;
	volatile uint32_t x811 = UINT32_MAX;
	volatile int32_t t139 = 179;

    t139 = (x809!=(x810&(x811*x812)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x813 = 30;
	static int8_t x814 = -7;
	int32_t x815 = -1822;
	volatile int16_t x816 = INT16_MIN;
	int32_t t140 = 0;

    t140 = (x813!=(x814&(x815*x816)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x821 = -1LL;
	int32_t x822 = INT32_MIN;
	uint8_t x823 = 69U;
	int8_t x824 = INT8_MAX;
	volatile int32_t t141 = -67;

    t141 = (x821!=(x822&(x823*x824)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x829 = -1;
	volatile uint64_t x830 = 78LLU;
	int16_t x831 = INT16_MIN;
	uint32_t x832 = UINT32_MAX;
	int32_t t142 = -22;

    t142 = (x829!=(x830&(x831*x832)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x833 = INT32_MAX;
	uint32_t x834 = 36851023U;
	int32_t t143 = -175;

    t143 = (x833!=(x834&(x835*x836)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x853 = INT64_MIN;
	volatile uint8_t x854 = 19U;
	int8_t x856 = INT8_MIN;
	int32_t t144 = -1;

    t144 = (x853!=(x854&(x855*x856)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x862 = INT8_MIN;
	uint64_t x863 = UINT64_MAX;
	static int16_t x864 = 1;
	int32_t t145 = -2745;

    t145 = (x861!=(x862&(x863*x864)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x873 = UINT32_MAX;
	static int8_t x875 = INT8_MIN;
	int32_t x876 = -6;
	int32_t t146 = 14973009;

    t146 = (x873!=(x874&(x875*x876)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x877 = INT16_MIN;
	volatile int16_t x878 = -1561;
	static int64_t x879 = -1LL;
	volatile int16_t x880 = INT16_MAX;
	int32_t t147 = 3;

    t147 = (x877!=(x878&(x879*x880)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x885 = -3;
	static uint32_t x886 = 3U;
	int8_t x887 = INT8_MIN;

    t148 = (x885!=(x886&(x887*x888)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x889 = UINT16_MAX;
	uint8_t x890 = UINT8_MAX;
	uint32_t x891 = 360U;
	int32_t t149 = -6399;

    t149 = (x889!=(x890&(x891*x892)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x893 = 386U;
	int32_t x894 = INT32_MIN;
	uint32_t x895 = UINT32_MAX;
	uint64_t x896 = 64031LLU;
	int32_t t150 = 31376155;

    t150 = (x893!=(x894&(x895*x896)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x905 = INT16_MIN;
	int32_t x906 = INT32_MIN;
	volatile int32_t x908 = -4;
	int32_t t151 = 1290;

    t151 = (x905!=(x906&(x907*x908)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x909 = UINT64_MAX;
	int64_t x910 = INT64_MAX;
	int32_t x911 = INT32_MIN;
	volatile int8_t x912 = 1;
	volatile int32_t t152 = -33274872;

    t152 = (x909!=(x910&(x911*x912)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x913 = -320164;
	static int64_t x916 = -931566915019LL;

    t153 = (x913!=(x914&(x915*x916)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x922 = -1765;
	uint32_t x923 = 1926161U;
	volatile int32_t t154 = 1;

    t154 = (x921!=(x922&(x923*x924)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x925 = INT8_MIN;
	static volatile int64_t x926 = INT64_MIN;
	uint8_t x927 = 45U;
	uint32_t x928 = 499678U;
	int32_t t155 = 4351;

    t155 = (x925!=(x926&(x927*x928)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x933 = 0U;
	static uint16_t x934 = UINT16_MAX;
	uint8_t x935 = 6U;
	int8_t x936 = INT8_MIN;
	int32_t t156 = 321;

    t156 = (x933!=(x934&(x935*x936)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x937 = INT32_MIN;
	int8_t x938 = INT8_MIN;
	uint16_t x939 = 812U;
	volatile int32_t t157 = 39;

    t157 = (x937!=(x938&(x939*x940)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x941 = INT64_MAX;
	int64_t x942 = 61081LL;
	static int8_t x943 = INT8_MIN;
	int8_t x944 = INT8_MIN;
	volatile int32_t t158 = -18489;

    t158 = (x941!=(x942&(x943*x944)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x945 = INT32_MIN;
	uint8_t x947 = 22U;
	int32_t t159 = -73;

    t159 = (x945!=(x946&(x947*x948)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x949 = -1;
	int16_t x951 = -1;
	uint16_t x952 = UINT16_MAX;
	volatile int32_t t160 = -2905;

    t160 = (x949!=(x950&(x951*x952)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x953 = 191828U;
	int32_t x954 = INT32_MIN;
	uint32_t x956 = 105887U;
	volatile int32_t t161 = -1013879;

    t161 = (x953!=(x954&(x955*x956)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x957 = 3U;
	static uint16_t x958 = 0U;
	volatile uint16_t x959 = 0U;
	static int32_t x960 = INT32_MIN;
	int32_t t162 = 104385;

    t162 = (x957!=(x958&(x959*x960)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x961 = INT8_MIN;
	int32_t x963 = -1;
	int64_t x964 = 41459LL;
	int32_t t163 = -159;

    t163 = (x961!=(x962&(x963*x964)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x969 = INT32_MAX;
	int8_t x970 = -2;
	uint16_t x971 = 21U;
	volatile int16_t x972 = INT16_MIN;
	volatile int32_t t164 = -124699527;

    t164 = (x969!=(x970&(x971*x972)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x973 = 22500LL;
	int32_t x974 = INT32_MIN;
	uint8_t x975 = 31U;
	volatile uint8_t x976 = 1U;

    t165 = (x973!=(x974&(x975*x976)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x981 = 15;
	uint16_t x983 = 6U;
	uint64_t x984 = 403376246272867596LLU;
	int32_t t166 = -247440943;

    t166 = (x981!=(x982&(x983*x984)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x985 = INT32_MAX;
	int32_t x986 = INT32_MAX;
	int16_t x987 = -1;
	static int32_t x988 = INT32_MAX;
	int32_t t167 = -47;

    t167 = (x985!=(x986&(x987*x988)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x989 = -1;
	static volatile int32_t x990 = INT32_MAX;
	volatile int8_t x991 = -1;
	int32_t t168 = -1611332;

    t168 = (x989!=(x990&(x991*x992)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x993 = INT8_MAX;
	static int16_t x994 = INT16_MIN;
	int32_t x995 = INT32_MAX;

    t169 = (x993!=(x994&(x995*x996)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x997 = INT32_MIN;
	int8_t x998 = -1;
	uint64_t x999 = 623LLU;
	int64_t x1000 = 15157750337570LL;
	volatile int32_t t170 = 10236403;

    t170 = (x997!=(x998&(x999*x1000)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1001 = -1LL;
	static int32_t x1002 = -1;
	uint8_t x1003 = 0U;
	static volatile uint16_t x1004 = 0U;
	volatile int32_t t171 = 1197;

    t171 = (x1001!=(x1002&(x1003*x1004)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1021 = -1;
	int16_t x1022 = INT16_MIN;
	uint64_t x1023 = 9LLU;
	uint16_t x1024 = 948U;
	static int32_t t172 = -58;

    t172 = (x1021!=(x1022&(x1023*x1024)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1025 = INT32_MIN;
	int64_t x1026 = INT64_MAX;
	static int32_t x1027 = 806538758;
	int64_t x1028 = 242604LL;

    t173 = (x1025!=(x1026&(x1027*x1028)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1033 = 21848109U;
	static uint64_t x1034 = UINT64_MAX;
	uint16_t x1035 = 0U;
	static int32_t x1036 = INT32_MIN;
	static volatile int32_t t174 = 1;

    t174 = (x1033!=(x1034&(x1035*x1036)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1037 = -1;
	int64_t x1038 = -428LL;
	volatile uint64_t x1039 = 817941322959359LLU;
	volatile int32_t t175 = -5921873;

    t175 = (x1037!=(x1038&(x1039*x1040)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1041 = 5;
	volatile int32_t x1042 = INT32_MAX;
	int16_t x1043 = -28;
	uint8_t x1044 = 96U;

    t176 = (x1041!=(x1042&(x1043*x1044)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x1049 = UINT32_MAX;
	volatile int32_t x1050 = 12;
	int8_t x1051 = 5;
	volatile uint64_t x1052 = UINT64_MAX;
	volatile int32_t t177 = 505;

    t177 = (x1049!=(x1050&(x1051*x1052)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1057 = INT64_MIN;
	static int32_t x1058 = INT32_MAX;
	static uint8_t x1059 = UINT8_MAX;
	int16_t x1060 = 3142;
	int32_t t178 = -72;

    t178 = (x1057!=(x1058&(x1059*x1060)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x1061 = 13U;
	volatile int8_t x1062 = 0;
	uint16_t x1063 = UINT16_MAX;
	int16_t x1064 = 1707;
	int32_t t179 = 107827;

    t179 = (x1061!=(x1062&(x1063*x1064)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1066 = 658;
	int16_t x1067 = -1;
	uint64_t x1068 = 549253002099LLU;
	int32_t t180 = -402654;

    t180 = (x1065!=(x1066&(x1067*x1068)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1081 = 13843203LLU;
	int16_t x1082 = INT16_MAX;
	uint8_t x1083 = 0U;
	int8_t x1084 = INT8_MIN;
	int32_t t181 = 14881892;

    t181 = (x1081!=(x1082&(x1083*x1084)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x1085 = 1505774U;
	static int16_t x1086 = INT16_MAX;
	static volatile int64_t x1087 = -313LL;

    t182 = (x1085!=(x1086&(x1087*x1088)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1089 = -1;
	int8_t x1091 = -2;

    t183 = (x1089!=(x1090&(x1091*x1092)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1093 = 16381U;
	int64_t x1094 = -1LL;
	uint32_t x1096 = 503420949U;
	int32_t t184 = 1753;

    t184 = (x1093!=(x1094&(x1095*x1096)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1097 = -2785;
	static uint64_t x1099 = UINT64_MAX;
	uint32_t x1100 = 1738535U;
	int32_t t185 = -311363;

    t185 = (x1097!=(x1098&(x1099*x1100)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x1105 = INT64_MIN;
	uint8_t x1106 = 5U;
	uint16_t x1107 = 233U;
	int16_t x1108 = 3464;

    t186 = (x1105!=(x1106&(x1107*x1108)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1109 = INT32_MIN;
	int16_t x1110 = INT16_MIN;
	uint16_t x1111 = UINT16_MAX;
	static uint16_t x1112 = 830U;
	volatile int32_t t187 = 321837;

    t187 = (x1109!=(x1110&(x1111*x1112)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1113 = -1;
	int8_t x1116 = -1;

    t188 = (x1113!=(x1114&(x1115*x1116)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1117 = 0U;
	int8_t x1118 = INT8_MIN;
	int32_t x1120 = 25983343;

    t189 = (x1117!=(x1118&(x1119*x1120)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x1125 = -732063LL;
	int32_t x1126 = INT32_MIN;
	static uint64_t x1127 = UINT64_MAX;
	int16_t x1128 = 679;
	volatile int32_t t190 = -239314;

    t190 = (x1125!=(x1126&(x1127*x1128)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1133 = 737U;
	static uint8_t x1134 = 1U;
	static volatile int8_t x1135 = 0;
	uint16_t x1136 = 60U;
	volatile int32_t t191 = 24608907;

    t191 = (x1133!=(x1134&(x1135*x1136)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x1138 = INT32_MIN;
	volatile int64_t x1139 = -1LL;
	volatile int16_t x1140 = INT16_MIN;
	int32_t t192 = -873;

    t192 = (x1137!=(x1138&(x1139*x1140)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1141 = -1LL;
	int16_t x1142 = -24;
	static uint64_t x1144 = 5980660LLU;
	int32_t t193 = -862368;

    t193 = (x1141!=(x1142&(x1143*x1144)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1145 = 3160331U;
	int16_t x1146 = -77;
	volatile int32_t t194 = 1988902;

    t194 = (x1145!=(x1146&(x1147*x1148)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1150 = 15899470266226LL;
	static uint32_t x1151 = 8592U;
	static volatile int16_t x1152 = 5175;
	volatile int32_t t195 = 20561947;

    t195 = (x1149!=(x1150&(x1151*x1152)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1153 = -1LL;
	volatile int8_t x1155 = 1;
	int8_t x1156 = 3;
	static volatile int32_t t196 = 899;

    t196 = (x1153!=(x1154&(x1155*x1156)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1157 = INT16_MIN;
	static int16_t x1158 = -805;
	uint16_t x1159 = 20U;

    t197 = (x1157!=(x1158&(x1159*x1160)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1163 = -1LL;
	static volatile uint64_t x1164 = 1554363314LLU;
	int32_t t198 = 97;

    t198 = (x1161!=(x1162&(x1163*x1164)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1165 = INT32_MIN;
	int8_t x1166 = -1;
	uint8_t x1167 = 15U;

    t199 = (x1165!=(x1166&(x1167*x1168)));

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

