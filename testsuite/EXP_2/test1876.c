
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

int64_t x4 = INT64_MIN;
uint8_t x5 = UINT8_MAX;
uint32_t x10 = UINT32_MAX;
volatile int8_t x11 = 29;
static int32_t t3 = -1;
volatile int32_t x20 = -889141;
volatile uint32_t t5 = UINT32_MAX;
volatile uint8_t x28 = 5U;
uint16_t x37 = 15U;
int64_t x43 = INT64_MIN;
static uint64_t x50 = UINT64_MAX;
uint16_t x52 = 47U;
int16_t x58 = INT16_MIN;
static int32_t x59 = INT32_MIN;
static int16_t x60 = -656;
volatile int32_t t14 = 5;
static uint64_t x86 = 2908507607675668757LLU;
int16_t x88 = INT16_MIN;
volatile int64_t x89 = INT64_MIN;
volatile int32_t t26 = -104525;
int8_t x113 = -1;
int64_t x116 = INT64_MIN;
int8_t x121 = INT8_MAX;
int16_t x129 = INT16_MIN;
uint32_t x135 = 438U;
static int8_t x136 = -5;
uint8_t x153 = 19U;
volatile int8_t x157 = -1;
uint32_t x162 = 1934735U;
static int32_t x167 = 400969416;
int64_t x172 = INT64_MIN;
int32_t x176 = INT32_MAX;
int8_t x177 = -1;
volatile int64_t x179 = INT64_MAX;
volatile int32_t x182 = 1;
uint32_t x183 = UINT32_MAX;
static int32_t t45 = -49816;
static uint8_t x187 = 85U;
uint32_t x190 = 37928201U;
int16_t x204 = -1;
int16_t x208 = INT16_MIN;
int32_t x210 = 217038496;
volatile int16_t x212 = INT16_MAX;
int64_t x213 = -1LL;
int8_t x215 = -3;
uint8_t x218 = UINT8_MAX;
uint8_t x220 = 95U;
volatile uint64_t x226 = 1942839731982441271LLU;
static int16_t x236 = -1;
volatile uint64_t x237 = 19345LLU;
static uint8_t x244 = UINT8_MAX;
volatile int16_t x245 = -1;
volatile uint32_t x248 = 2772U;
uint32_t t61 = 337844200U;
int32_t x249 = -78983;
int8_t x250 = 1;
volatile uint64_t x263 = 6582514LLU;
int64_t x264 = 297LL;
static volatile int64_t t65 = -3LL;
int8_t x266 = INT8_MAX;
uint64_t x275 = UINT64_MAX;
volatile int32_t t68 = -14599;
int16_t x278 = -1;
int32_t x279 = -1;
int32_t t69 = 51907;
int64_t x283 = 1226892LL;
volatile uint32_t t70 = 4855U;
int32_t x295 = -1;
uint8_t x301 = UINT8_MAX;
uint16_t x307 = UINT16_MAX;
uint16_t x308 = 11302U;
int64_t x311 = INT64_MIN;
uint16_t x312 = 1U;
static int16_t x322 = INT16_MIN;
uint8_t x329 = 54U;
int16_t x335 = INT16_MAX;
int64_t x336 = INT64_MAX;
int32_t x338 = 411677446;
volatile int32_t t86 = 22434122;
static int64_t x350 = -1LL;
int8_t x351 = -1;
int64_t x353 = -1LL;
volatile uint8_t x355 = UINT8_MAX;
int64_t x361 = INT64_MAX;
uint32_t t90 = UINT32_MAX;
static uint8_t x370 = 6U;
volatile int32_t x373 = INT32_MAX;
static volatile int64_t x375 = -1LL;
uint64_t x383 = 50123642217978639LLU;
static volatile int32_t t99 = -83561437;
volatile uint64_t t100 = 935132LLU;
volatile uint64_t x406 = UINT64_MAX;
int64_t x409 = INT64_MAX;
int32_t x410 = 308;
static volatile uint64_t x412 = 63090491642377LLU;
int64_t x413 = INT64_MAX;
static int32_t x417 = -58924;
int16_t x424 = 13115;
uint8_t x427 = 38U;
int16_t x430 = INT16_MAX;
uint32_t x436 = 129154U;
uint16_t x437 = 108U;
uint64_t x438 = UINT64_MAX;
int32_t t109 = -208;
uint64_t x441 = UINT64_MAX;
volatile int32_t t110 = -1754800;
static uint16_t x446 = 2U;
int64_t x449 = -1LL;
int16_t x451 = INT16_MAX;
int8_t x452 = -63;
volatile int32_t x454 = INT32_MAX;
volatile int32_t t116 = INT32_MIN;
static int8_t x471 = INT8_MIN;
volatile int32_t t117 = -225366;
int8_t x477 = -1;
int32_t x479 = -1;
int32_t t121 = -506096;
uint8_t x489 = UINT8_MAX;
uint32_t x493 = UINT32_MAX;
volatile int64_t t125 = INT64_MIN;
static uint8_t x519 = 41U;
static int16_t x529 = INT16_MAX;
uint8_t x533 = 45U;
volatile uint16_t x536 = UINT16_MAX;
volatile int32_t x538 = INT32_MAX;
volatile int8_t x539 = INT8_MIN;
int16_t x543 = INT16_MIN;
uint32_t x545 = 104386624U;
volatile uint32_t x558 = 868982U;
volatile int32_t x568 = -1;
volatile int8_t x569 = INT8_MAX;
static int8_t x570 = 54;
int64_t t142 = INT64_MAX;
int8_t x576 = -14;
volatile uint16_t x578 = 91U;
int32_t t144 = 13;
static int64_t x585 = -1LL;
uint8_t x586 = 0U;
uint8_t x587 = UINT8_MAX;
volatile int64_t x602 = INT64_MAX;
int32_t t151 = -82355245;
int8_t x609 = INT8_MIN;
volatile int32_t t152 = -171;
static int32_t x613 = -1;
static int32_t x616 = INT32_MIN;
uint8_t x622 = UINT8_MAX;
int16_t x626 = INT16_MIN;
volatile int64_t t156 = 6035326LL;
int32_t t159 = 452857385;
uint8_t x643 = 5U;
int32_t t161 = 11606464;
int32_t x664 = -10393;
static int64_t x672 = -1LL;
int64_t x673 = INT64_MAX;
int16_t x678 = -1;
int64_t x679 = INT64_MAX;
int32_t x687 = -78;
volatile int32_t t171 = 267;
int32_t x693 = -1;
volatile uint64_t x694 = 39670441279885LLU;
int16_t x700 = 0;
int16_t x703 = INT16_MIN;
static int16_t x704 = INT16_MIN;
int16_t x705 = INT16_MIN;
int8_t x706 = INT8_MAX;
uint32_t x709 = UINT32_MAX;
uint64_t x710 = 28177246LLU;
volatile int32_t t177 = 856805;
int8_t x714 = INT8_MIN;
static uint8_t x719 = 5U;
static int16_t x720 = 444;
int8_t x726 = INT8_MIN;
volatile int32_t x727 = -89;
uint32_t x729 = 12990681U;
int64_t x730 = INT64_MIN;
volatile int8_t x731 = 5;
static volatile int64_t x734 = -1LL;
volatile int32_t t183 = 642174976;
static int32_t t185 = -7;
int64_t x747 = -1LL;
int16_t x748 = INT16_MIN;
int32_t t188 = -59783;
volatile int8_t x757 = -1;
static int8_t x763 = INT8_MIN;
int32_t t190 = -456;
volatile uint16_t x768 = UINT16_MAX;
volatile int32_t t191 = -65793784;
volatile int32_t t192 = -778;
uint8_t x775 = 2U;
volatile int32_t t194 = INT32_MIN;
static int32_t x792 = INT32_MAX;
volatile int32_t t198 = 1211;
int8_t x797 = INT8_MIN;
int8_t x800 = INT8_MIN;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 163071544756529613LLU;
	int8_t x3 = -1;
	volatile int64_t t0 = INT64_MIN;

    t0 = ((x1==(x2<=x3))^x4);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x6 = 7;
	uint32_t x7 = 4121462U;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 209659520;

    t1 = ((x5==(x6<=x7))^x8);

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 0;

    t2 = ((x9==(x10<=x11))^x12);

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 1U;
	int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	static int16_t x16 = INT16_MIN;

    t3 = ((x13==(x14<=x15))^x16);

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 15077;
	int8_t x18 = -3;
	int32_t x19 = 127296;
	static volatile int32_t t4 = 28070016;

    t4 = ((x17==(x18<=x19))^x20);

    if (t4 != -889141) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	uint16_t x22 = UINT16_MAX;
	int32_t x23 = -17;
	uint32_t x24 = UINT32_MAX;

    t5 = ((x21==(x22<=x23))^x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1424557010U;
	int64_t x26 = -123LL;
	static int64_t x27 = INT64_MIN;
	volatile int32_t t6 = 64165;

    t6 = ((x25==(x26<=x27))^x28);

    if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -719;
	static int8_t x30 = INT8_MIN;
	volatile uint64_t x31 = 71080579597LLU;
	int16_t x32 = -53;
	volatile int32_t t7 = -1;

    t7 = ((x29==(x30<=x31))^x32);

    if (t7 != -53) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -447;
	int64_t x34 = INT64_MAX;
	uint8_t x35 = 4U;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = INT32_MIN;

    t8 = ((x33==(x34<=x35))^x36);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x38 = 10401540U;
	int16_t x39 = INT16_MIN;
	uint16_t x40 = 4U;
	int32_t t9 = 0;

    t9 = ((x37==(x38<=x39))^x40);

    if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int16_t x42 = 0;
	int32_t x44 = -1;
	volatile int32_t t10 = -13;

    t10 = ((x41==(x42<=x43))^x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x45 = INT8_MIN;
	static uint64_t x46 = 503117LLU;
	static uint64_t x47 = 4366289729471LLU;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = -2018;

    t11 = ((x45==(x46<=x47))^x48);

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	int32_t x51 = -7272;
	volatile int32_t t12 = -628;

    t12 = ((x49==(x50<=x51))^x52);

    if (t12 != 47) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	volatile int64_t x54 = INT64_MIN;
	static volatile int8_t x55 = -6;
	uint32_t x56 = 4594U;
	uint32_t t13 = 405475U;

    t13 = ((x53==(x54<=x55))^x56);

    if (t13 != 4594U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -10;

    t14 = ((x57==(x58<=x59))^x60);

    if (t14 != -656) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	static int8_t x62 = INT8_MAX;
	uint32_t x63 = 101615U;
	static int32_t x64 = 31;
	int32_t t15 = 18659;

    t15 = ((x61==(x62<=x63))^x64);

    if (t15 != 30) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -3416495829029597LL;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	static volatile int64_t x68 = -1LL;
	static int64_t t16 = -126652LL;

    t16 = ((x65==(x66<=x67))^x68);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MAX;
	static int16_t x70 = 10;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = ((x69==(x70<=x71))^x72);

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = UINT16_MAX;
	uint8_t x74 = 24U;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = 435025922160LLU;
	uint64_t t18 = 8004442322274LLU;

    t18 = ((x73==(x74<=x75))^x76);

    if (t18 != 435025922160LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int64_t x78 = -1LL;
	volatile uint32_t x79 = UINT32_MAX;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = -584555030;

    t19 = ((x77==(x78<=x79))^x80);

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	int8_t x84 = -8;
	static volatile int32_t t20 = 38;

    t20 = ((x81==(x82<=x83))^x84);

    if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 2U;
	int16_t x87 = 916;
	volatile int32_t t21 = 175;

    t21 = ((x85==(x86<=x87))^x88);

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x90 = UINT16_MAX;
	static volatile uint32_t x91 = 909567U;
	static int32_t x92 = INT32_MAX;
	static int32_t t22 = INT32_MAX;

    t22 = ((x89==(x90<=x91))^x92);

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x93 = 31U;
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MAX;
	static uint8_t x96 = 5U;
	int32_t t23 = -61402;

    t23 = ((x93==(x94<=x95))^x96);

    if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = 37U;
	static int32_t x98 = INT32_MIN;
	uint32_t x99 = 1U;
	static uint32_t x100 = 48560U;
	uint32_t t24 = 296U;

    t24 = ((x97==(x98<=x99))^x100);

    if (t24 != 48560U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = -1;
	static uint32_t x102 = 217083227U;
	volatile int16_t x103 = -2;
	uint8_t x104 = UINT8_MAX;
	static int32_t t25 = -151;

    t25 = ((x101==(x102<=x103))^x104);

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = -1;
	volatile int32_t x106 = -1;
	volatile int8_t x107 = -3;
	int8_t x108 = INT8_MIN;

    t26 = ((x105==(x106<=x107))^x108);

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -655340268354751LL;
	int16_t x110 = 508;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 221318;

    t27 = ((x109==(x110<=x111))^x112);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MAX;
	static volatile uint16_t x115 = 1817U;
	volatile int64_t t28 = INT64_MIN;

    t28 = ((x113==(x114<=x115))^x116);

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 2180363707898LLU;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -642717790;
	int16_t x120 = -4;
	volatile int32_t t29 = -98;

    t29 = ((x117==(x118<=x119))^x120);

    if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = INT32_MIN;
	static int8_t x123 = INT8_MIN;
	uint16_t x124 = 44U;
	static volatile int32_t t30 = -169395;

    t30 = ((x121==(x122<=x123))^x124);

    if (t30 != 44) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	int8_t x128 = -1;
	static int32_t t31 = -56937844;

    t31 = ((x125==(x126<=x127))^x128);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x130 = 17623226167987445LLU;
	static int64_t x131 = INT64_MAX;
	uint8_t x132 = 43U;
	volatile int32_t t32 = -67;

    t32 = ((x129==(x130<=x131))^x132);

    if (t32 != 43) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	static int32_t t33 = 1264;

    t33 = ((x133==(x134<=x135))^x136);

    if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 1364;
	static int8_t x138 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = -15;
	volatile int32_t t34 = 246;

    t34 = ((x137==(x138<=x139))^x140);

    if (t34 != -15) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = -37467656;
	uint32_t x142 = 1304825U;
	int16_t x143 = INT16_MAX;
	int32_t x144 = -921822;
	volatile int32_t t35 = -902722813;

    t35 = ((x141==(x142<=x143))^x144);

    if (t35 != -921822) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 0;
	int8_t x146 = INT8_MAX;
	int64_t x147 = -32609LL;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 9571;

    t36 = ((x145==(x146<=x147))^x148);

    if (t36 != 65534) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MAX;
	int8_t x152 = -1;
	static int32_t t37 = 1;

    t37 = ((x149==(x150<=x151))^x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x154 = UINT32_MAX;
	int16_t x155 = -1;
	volatile int8_t x156 = 9;
	int32_t t38 = 936814;

    t38 = ((x153==(x154<=x155))^x156);

    if (t38 != 9) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x158 = INT32_MAX;
	uint64_t x159 = UINT64_MAX;
	volatile int32_t x160 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = ((x157==(x158<=x159))^x160);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	static int64_t x163 = INT64_MIN;
	uint16_t x164 = 1U;
	volatile int32_t t40 = -621950136;

    t40 = ((x161==(x162<=x163))^x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	static uint64_t x166 = 6580126627411LLU;
	static uint32_t x168 = 11U;
	volatile uint32_t t41 = 14695U;

    t41 = ((x165==(x166<=x167))^x168);

    if (t41 != 11U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = 716576LLU;
	volatile int16_t x170 = 2;
	static int64_t x171 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

    t42 = ((x169==(x170<=x171))^x172);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int16_t x174 = 14;
	int8_t x175 = INT8_MIN;
	volatile int32_t t43 = INT32_MAX;

    t43 = ((x173==(x174<=x175))^x176);

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = INT32_MIN;
	int16_t x180 = -8147;
	static int32_t t44 = 1;

    t44 = ((x177==(x178<=x179))^x180);

    if (t44 != -8147) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 62;
	int8_t x184 = INT8_MIN;

    t45 = ((x181==(x182<=x183))^x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MAX;
	uint32_t x188 = 958288U;
	uint32_t t46 = 1032321U;

    t46 = ((x185==(x186<=x187))^x188);

    if (t46 != 958288U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 3U;
	int16_t x191 = 4349;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -18522;

    t47 = ((x189==(x190<=x191))^x192);

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = 4U;
	int32_t x194 = -1;
	uint64_t x195 = 7136745770210652378LLU;
	int8_t x196 = -1;
	volatile int32_t t48 = 678207;

    t48 = ((x193==(x194<=x195))^x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	volatile int64_t x198 = -1LL;
	int16_t x199 = -1;
	int64_t x200 = INT64_MAX;
	static volatile int64_t t49 = INT64_MAX;

    t49 = ((x197==(x198<=x199))^x200);

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 2U;
	int16_t x202 = 466;
	int32_t x203 = -28;
	volatile int32_t t50 = 12;

    t50 = ((x201==(x202<=x203))^x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	int32_t x206 = -1562;
	int64_t x207 = -1LL;
	static volatile int32_t t51 = -3;

    t51 = ((x205==(x206<=x207))^x208);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	volatile int32_t t52 = -122204022;

    t52 = ((x209==(x210<=x211))^x212);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x214 = 5U;
	int32_t x216 = -1;
	volatile int32_t t53 = -3076;

    t53 = ((x213==(x214<=x215))^x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	uint32_t x219 = UINT32_MAX;
	volatile int32_t t54 = -74176;

    t54 = ((x217==(x218<=x219))^x220);

    if (t54 != 95) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = -184;
	static volatile uint32_t x222 = 7478U;
	volatile int64_t x223 = 94745153216561LL;
	int16_t x224 = INT16_MIN;
	int32_t t55 = -22;

    t55 = ((x221==(x222<=x223))^x224);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x227 = 0;
	int32_t x228 = 13955307;
	volatile int32_t t56 = 1636838;

    t56 = ((x225==(x226<=x227))^x228);

    if (t56 != 13955307) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = INT8_MAX;
	static int16_t x230 = -1;
	int64_t x231 = 437LL;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

    t57 = ((x229==(x230<=x231))^x232);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 88LLU;
	static volatile int64_t x234 = -1LL;
	int16_t x235 = INT16_MAX;
	volatile int32_t t58 = 56622793;

    t58 = ((x233==(x234<=x235))^x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = 164;
	volatile int32_t x239 = INT32_MAX;
	int8_t x240 = 63;
	int32_t t59 = 733981351;

    t59 = ((x237==(x238<=x239))^x240);

    if (t59 != 63) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = 89347508U;
	volatile int32_t t60 = -1928071;

    t60 = ((x241==(x242<=x243))^x244);

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x246 = 8184530U;
	int32_t x247 = -79680;

    t61 = ((x245==(x246<=x247))^x248);

    if (t61 != 2772U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x251 = UINT64_MAX;
	int8_t x252 = -1;
	int32_t t62 = 1729721;

    t62 = ((x249==(x250<=x251))^x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = 62550708LLU;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 39376965;

    t63 = ((x253==(x254<=x255))^x256);

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	static volatile int16_t x258 = -1;
	volatile int32_t x259 = INT32_MIN;
	int64_t x260 = 22913465LL;
	int64_t t64 = 130LL;

    t64 = ((x257==(x258<=x259))^x260);

    if (t64 != 22913465LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	uint64_t x262 = UINT64_MAX;

    t65 = ((x261==(x262<=x263))^x264);

    if (t65 != 297LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 2043300U;
	static volatile uint16_t x267 = 31215U;
	static volatile int16_t x268 = INT16_MAX;
	static int32_t t66 = 112;

    t66 = ((x265==(x266<=x267))^x268);

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	int64_t t67 = 41508096735060LL;

    t67 = ((x269==(x270<=x271))^x272);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	int16_t x276 = INT16_MIN;

    t68 = ((x273==(x274<=x275))^x276);

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 341U;
	uint16_t x280 = UINT16_MAX;

    t69 = ((x277==(x278<=x279))^x280);

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = 1940U;
	int32_t x282 = -534472023;
	uint32_t x284 = 199166532U;

    t70 = ((x281==(x282<=x283))^x284);

    if (t70 != 199166532U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = -1;
	int32_t x286 = -87;
	int16_t x287 = INT16_MIN;
	static volatile uint16_t x288 = 828U;
	volatile int32_t t71 = -11078075;

    t71 = ((x285==(x286<=x287))^x288);

    if (t71 != 828) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = 84019775LLU;
	uint8_t x290 = 1U;
	uint16_t x291 = 50U;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = INT32_MIN;

    t72 = ((x289==(x290<=x291))^x292);

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	int64_t x296 = -6107450264784242LL;
	volatile int64_t t73 = -1LL;

    t73 = ((x293==(x294<=x295))^x296);

    if (t73 != -6107450264784242LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 15U;
	int16_t x298 = 1;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t74 = -387;

    t74 = ((x297==(x298<=x299))^x300);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = INT32_MIN;
	volatile uint16_t x303 = 3U;
	uint16_t x304 = 386U;
	static int32_t t75 = 1802;

    t75 = ((x301==(x302<=x303))^x304);

    if (t75 != 386) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int8_t x306 = -60;
	volatile int32_t t76 = -327;

    t76 = ((x305==(x306<=x307))^x308);

    if (t76 != 11302) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	int32_t t77 = -614292;

    t77 = ((x309==(x310<=x311))^x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	uint64_t x314 = 513858807367LLU;
	uint8_t x315 = UINT8_MAX;
	static volatile int8_t x316 = -1;
	int32_t t78 = 2;

    t78 = ((x313==(x314<=x315))^x316);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	uint32_t x318 = 1981U;
	int16_t x319 = INT16_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = INT32_MIN;

    t79 = ((x317==(x318<=x319))^x320);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = -48LL;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = 9U;
	static volatile int32_t t80 = 1;

    t80 = ((x321==(x322<=x323))^x324);

    if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -12;
	uint8_t x326 = 69U;
	static uint64_t x327 = 8458654129995LLU;
	int16_t x328 = INT16_MIN;
	static int32_t t81 = 4;

    t81 = ((x325==(x326<=x327))^x328);

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x330 = INT32_MAX;
	volatile int64_t x331 = INT64_MIN;
	volatile uint8_t x332 = 0U;
	int32_t t82 = -28681;

    t82 = ((x329==(x330<=x331))^x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -68409473;
	static int32_t x334 = INT32_MIN;
	volatile int64_t t83 = INT64_MAX;

    t83 = ((x333==(x334<=x335))^x336);

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 4;
	uint32_t x339 = 908447477U;
	volatile uint8_t x340 = UINT8_MAX;
	static int32_t t84 = 107191;

    t84 = ((x337==(x338<=x339))^x340);

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x341 = 1002LL;
	volatile int16_t x342 = 328;
	volatile uint32_t x343 = 68361706U;
	int32_t x344 = -1;
	static int32_t t85 = 412;

    t85 = ((x341==(x342<=x343))^x344);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = 32LL;
	uint16_t x346 = 84U;
	int16_t x347 = -1;
	volatile int16_t x348 = INT16_MIN;

    t86 = ((x345==(x346<=x347))^x348);

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 51545LLU;
	uint16_t x352 = 1829U;
	int32_t t87 = 6;

    t87 = ((x349==(x350<=x351))^x352);

    if (t87 != 1829) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = UINT16_MAX;
	static int16_t x356 = -1;
	volatile int32_t t88 = -17854278;

    t88 = ((x353==(x354<=x355))^x356);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -8;
	int8_t x358 = -2;
	int16_t x359 = -2;
	static volatile int32_t x360 = INT32_MIN;
	volatile int32_t t89 = INT32_MIN;

    t89 = ((x357==(x358<=x359))^x360);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	uint32_t x364 = UINT32_MAX;

    t90 = ((x361==(x362<=x363))^x364);

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 4182U;
	static int8_t x366 = -1;
	static int64_t x367 = -5LL;
	static int16_t x368 = INT16_MAX;
	int32_t t91 = -11;

    t91 = ((x365==(x366<=x367))^x368);

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 6316009LLU;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t92 = INT32_MIN;

    t92 = ((x369==(x370<=x371))^x372);

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t93 = 0LL;

    t93 = ((x373==(x374<=x375))^x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	int8_t x378 = 3;
	uint64_t x379 = 408373443611LLU;
	volatile int16_t x380 = -3;
	volatile int32_t t94 = 580;

    t94 = ((x377==(x378<=x379))^x380);

    if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	int8_t x384 = -1;
	volatile int32_t t95 = -7699;

    t95 = ((x381==(x382<=x383))^x384);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = UINT8_MAX;
	uint8_t x386 = 7U;
	volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 898U;
	volatile int32_t t96 = 3921;

    t96 = ((x385==(x386<=x387))^x388);

    if (t96 != 898) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = -14421992;
	static int32_t t97 = -1;

    t97 = ((x389==(x390<=x391))^x392);

    if (t97 != -14421992) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x393 = UINT8_MAX;
	int64_t x394 = -1LL;
	static int8_t x395 = INT8_MAX;
	int32_t x396 = -544250;
	int32_t t98 = 19;

    t98 = ((x393==(x394<=x395))^x396);

    if (t98 != -544250) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x397 = 0;
	int8_t x398 = -1;
	int8_t x399 = INT8_MIN;
	volatile int32_t x400 = 599;

    t99 = ((x397==(x398<=x399))^x400);

    if (t99 != 598) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = UINT8_MAX;
	uint16_t x402 = 29U;
	volatile uint16_t x403 = 510U;
	static uint64_t x404 = 11760033462942LLU;

    t100 = ((x401==(x402<=x403))^x404);

    if (t100 != 11760033462942LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MAX;
	static uint8_t x407 = 3U;
	uint16_t x408 = 549U;
	volatile int32_t t101 = 34;

    t101 = ((x405==(x406<=x407))^x408);

    if (t101 != 549) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x411 = -9;
	static uint64_t t102 = 15758323425LLU;

    t102 = ((x409==(x410<=x411))^x412);

    if (t102 != 63090491642377LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	volatile int16_t x415 = INT16_MIN;
	static uint8_t x416 = UINT8_MAX;
	static volatile int32_t t103 = -22881159;

    t103 = ((x413==(x414<=x415))^x416);

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MAX;
	int32_t x419 = -52;
	uint64_t x420 = 7867804634LLU;
	static uint64_t t104 = 906576061LLU;

    t104 = ((x417==(x418<=x419))^x420);

    if (t104 != 7867804634LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	volatile uint16_t x422 = 97U;
	int16_t x423 = -1333;
	volatile int32_t t105 = 61;

    t105 = ((x421==(x422<=x423))^x424);

    if (t105 != 13115) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = INT32_MIN;

    t106 = ((x425==(x426<=x427))^x428);

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 39283033478755463LLU;
	volatile uint64_t x431 = UINT64_MAX;
	int8_t x432 = 0;
	volatile int32_t t107 = 743;

    t107 = ((x429==(x430<=x431))^x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	static int64_t x435 = 814919091537492873LL;
	volatile uint32_t t108 = 9830962U;

    t108 = ((x433==(x434<=x435))^x436);

    if (t108 != 129154U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x439 = -32308;
	volatile int16_t x440 = 24;

    t109 = ((x437==(x438<=x439))^x440);

    if (t109 != 24) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = -1;
	static uint8_t x443 = UINT8_MAX;
	volatile int16_t x444 = INT16_MIN;

    t110 = ((x441==(x442<=x443))^x444);

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -1;
	volatile int32_t x447 = 107;
	int32_t x448 = -1;
	volatile int32_t t111 = 4260851;

    t111 = ((x445==(x446<=x447))^x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x450 = 10;
	static int32_t t112 = 59179675;

    t112 = ((x449==(x450<=x451))^x452);

    if (t112 != -63) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 61U;
	volatile int8_t x455 = 33;
	static int8_t x456 = INT8_MAX;
	static int32_t t113 = -18;

    t113 = ((x453==(x454<=x455))^x456);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = 9608026LL;
	int32_t x458 = -1;
	static volatile int64_t x459 = -171251460160LL;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = INT32_MIN;

    t114 = ((x457==(x458<=x459))^x460);

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MAX;
	int16_t x462 = 1;
	volatile int16_t x463 = INT16_MIN;
	static volatile int8_t x464 = INT8_MAX;
	volatile int32_t t115 = -19029712;

    t115 = ((x461==(x462<=x463))^x464);

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	uint64_t x466 = UINT64_MAX;
	static volatile int8_t x467 = 6;
	static int32_t x468 = INT32_MIN;

    t116 = ((x465==(x466<=x467))^x468);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -65;
	int16_t x470 = -48;
	int16_t x472 = -24;

    t117 = ((x469==(x470<=x471))^x472);

    if (t117 != -24) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MAX;
	uint8_t x474 = UINT8_MAX;
	int32_t x475 = 1973762;
	uint16_t x476 = 1U;
	int32_t t118 = -1065134;

    t118 = ((x473==(x474<=x475))^x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = 5368;
	int8_t x480 = INT8_MAX;
	volatile int32_t t119 = 4140581;

    t119 = ((x477==(x478<=x479))^x480);

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 2258LL;
	volatile int8_t x482 = 0;
	int16_t x483 = INT16_MIN;
	int16_t x484 = -13575;
	volatile int32_t t120 = -512310751;

    t120 = ((x481==(x482<=x483))^x484);

    if (t120 != -13575) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = 445414014;
	int16_t x486 = INT16_MIN;
	uint16_t x487 = 19640U;
	static int16_t x488 = INT16_MIN;

    t121 = ((x485==(x486<=x487))^x488);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = INT64_MIN;
	int32_t x491 = 15;
	volatile int32_t x492 = INT32_MIN;
	volatile int32_t t122 = INT32_MIN;

    t122 = ((x489==(x490<=x491))^x492);

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = -2148;
	static uint32_t x495 = UINT32_MAX;
	int32_t x496 = INT32_MIN;
	int32_t t123 = INT32_MIN;

    t123 = ((x493==(x494<=x495))^x496);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 15653588417LL;
	int8_t x498 = INT8_MIN;
	int32_t x499 = 38876;
	int16_t x500 = -1;
	volatile int32_t t124 = 198764;

    t124 = ((x497==(x498<=x499))^x500);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = -1;
	static int8_t x503 = INT8_MIN;
	static volatile int64_t x504 = INT64_MIN;

    t125 = ((x501==(x502<=x503))^x504);

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MIN;
	static uint8_t x506 = UINT8_MAX;
	uint8_t x507 = 1U;
	int64_t x508 = INT64_MAX;
	volatile int64_t t126 = INT64_MAX;

    t126 = ((x505==(x506<=x507))^x508);

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	int64_t x510 = -1109008303860332LL;
	int32_t x511 = INT32_MIN;
	static int32_t x512 = 194;
	volatile int32_t t127 = 0;

    t127 = ((x509==(x510<=x511))^x512);

    if (t127 != 194) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 6546794402942LLU;
	int16_t x514 = INT16_MAX;
	uint64_t x515 = 350959LLU;
	uint32_t x516 = UINT32_MAX;
	uint32_t t128 = UINT32_MAX;

    t128 = ((x513==(x514<=x515))^x516);

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	volatile int32_t x518 = 24674235;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t129 = -45195;

    t129 = ((x517==(x518<=x519))^x520);

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	int16_t x522 = -236;
	int16_t x523 = 4235;
	uint16_t x524 = 16195U;
	int32_t t130 = -502336;

    t130 = ((x521==(x522<=x523))^x524);

    if (t130 != 16195) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 15235794U;
	uint8_t x526 = 6U;
	int64_t x527 = -1LL;
	int16_t x528 = INT16_MIN;
	int32_t t131 = 432;

    t131 = ((x525==(x526<=x527))^x528);

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = -1;
	int64_t x531 = -877330464974808LL;
	uint32_t x532 = 0U;
	uint32_t t132 = 1309U;

    t132 = ((x529==(x530<=x531))^x532);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MIN;
	int8_t x535 = 1;
	volatile int32_t t133 = 5;

    t133 = ((x533==(x534<=x535))^x536);

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x537 = 150U;
	int32_t x540 = INT32_MIN;
	volatile int32_t t134 = INT32_MIN;

    t134 = ((x537==(x538<=x539))^x540);

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	int16_t x542 = INT16_MIN;
	int32_t x544 = INT32_MAX;
	int32_t t135 = INT32_MAX;

    t135 = ((x541==(x542<=x543))^x544);

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x546 = 65U;
	uint16_t x547 = 935U;
	static volatile int64_t x548 = INT64_MIN;
	volatile int64_t t136 = INT64_MIN;

    t136 = ((x545==(x546<=x547))^x548);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	static uint32_t x550 = 0U;
	int8_t x551 = -19;
	volatile int8_t x552 = -1;
	int32_t t137 = -1522;

    t137 = ((x549==(x550<=x551))^x552);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	uint64_t x554 = 139355454235LLU;
	int64_t x555 = -12LL;
	int16_t x556 = -1;
	int32_t t138 = -3;

    t138 = ((x553==(x554<=x555))^x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	static int16_t x559 = -1;
	uint64_t x560 = 2236175038792378996LLU;
	uint64_t t139 = 183668LLU;

    t139 = ((x557==(x558<=x559))^x560);

    if (t139 != 2236175038792378996LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = 13;
	uint16_t x562 = 48U;
	uint32_t x563 = 52458U;
	uint64_t x564 = 83LLU;
	uint64_t t140 = 1330411540LLU;

    t140 = ((x561==(x562<=x563))^x564);

    if (t140 != 83LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 0;
	volatile int8_t x566 = INT8_MIN;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t t141 = 19112916;

    t141 = ((x565==(x566<=x567))^x568);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x571 = 1306878201LLU;
	int64_t x572 = INT64_MAX;

    t142 = ((x569==(x570<=x571))^x572);

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint32_t x574 = 944798U;
	volatile uint32_t x575 = 287U;
	int32_t t143 = 166223;

    t143 = ((x573==(x574<=x575))^x576);

    if (t143 != -14) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	int64_t x579 = INT64_MIN;
	volatile int8_t x580 = -1;

    t144 = ((x577==(x578<=x579))^x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x581 = 1U;
	int64_t x582 = -1LL;
	static int16_t x583 = -320;
	volatile int64_t x584 = -1LL;
	volatile int64_t t145 = -510LL;

    t145 = ((x581==(x582<=x583))^x584);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x588 = 705340LLU;
	uint64_t t146 = 57425657766LLU;

    t146 = ((x585==(x586<=x587))^x588);

    if (t146 != 705340LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	volatile uint8_t x590 = 3U;
	static int8_t x591 = -15;
	uint32_t x592 = 2299414U;
	volatile uint32_t t147 = 1096U;

    t147 = ((x589==(x590<=x591))^x592);

    if (t147 != 2299414U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int8_t x594 = -26;
	volatile int16_t x595 = INT16_MIN;
	volatile uint8_t x596 = UINT8_MAX;
	int32_t t148 = -49953;

    t148 = ((x593==(x594<=x595))^x596);

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = INT16_MIN;
	static int64_t x598 = 1162511415031LL;
	int8_t x599 = 16;
	static int16_t x600 = 225;
	static int32_t t149 = 3124;

    t149 = ((x597==(x598<=x599))^x600);

    if (t149 != 225) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	volatile uint32_t x603 = 488713211U;
	static int64_t x604 = INT64_MIN;
	volatile int64_t t150 = INT64_MIN;

    t150 = ((x601==(x602<=x603))^x604);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	int16_t x606 = -185;
	int32_t x607 = INT32_MIN;
	volatile int32_t x608 = -6179733;

    t151 = ((x605==(x606<=x607))^x608);

    if (t151 != -6179733) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = UINT32_MAX;
	int16_t x611 = 3895;
	uint16_t x612 = 99U;

    t152 = ((x609==(x610<=x611))^x612);

    if (t152 != 99) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x614 = -41341372692245LL;
	int8_t x615 = INT8_MAX;
	static int32_t t153 = INT32_MIN;

    t153 = ((x613==(x614<=x615))^x616);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = -55;
	volatile int8_t x618 = -1;
	uint8_t x619 = 122U;
	uint32_t x620 = 708537U;
	volatile uint32_t t154 = 54904221U;

    t154 = ((x617==(x618<=x619))^x620);

    if (t154 != 708537U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 16669031797LL;
	volatile int64_t x623 = -183258127LL;
	uint32_t x624 = 279U;
	static volatile uint32_t t155 = 11U;

    t155 = ((x621==(x622<=x623))^x624);

    if (t155 != 279U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = UINT64_MAX;
	volatile int64_t x627 = -1LL;
	int64_t x628 = -1LL;

    t156 = ((x625==(x626<=x627))^x628);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = 5;
	uint64_t x630 = UINT64_MAX;
	int8_t x631 = -1;
	int16_t x632 = -15;
	int32_t t157 = 735757;

    t157 = ((x629==(x630<=x631))^x632);

    if (t157 != -15) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = INT32_MAX;
	volatile int16_t x634 = 10097;
	int32_t x635 = INT32_MIN;
	int64_t x636 = -1LL;
	int64_t t158 = -1595146782698289LL;

    t158 = ((x633==(x634<=x635))^x636);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	volatile int64_t x638 = INT64_MIN;
	uint8_t x639 = UINT8_MAX;
	int32_t x640 = -1;

    t159 = ((x637==(x638<=x639))^x640);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x641 = 538624196752LLU;
	int64_t x642 = INT64_MIN;
	int16_t x644 = -1;
	volatile int32_t t160 = 248;

    t160 = ((x641==(x642<=x643))^x644);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = -1LL;
	int32_t x646 = -1;
	uint64_t x647 = UINT64_MAX;
	volatile int16_t x648 = INT16_MIN;

    t161 = ((x645==(x646<=x647))^x648);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = 47U;
	int16_t x650 = INT16_MAX;
	volatile uint32_t x651 = 23688858U;
	uint64_t x652 = UINT64_MAX;
	uint64_t t162 = UINT64_MAX;

    t162 = ((x649==(x650<=x651))^x652);

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 8;
	int32_t x654 = 6;
	uint8_t x655 = 5U;
	volatile int8_t x656 = INT8_MIN;
	static volatile int32_t t163 = 2;

    t163 = ((x653==(x654<=x655))^x656);

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int32_t x658 = INT32_MAX;
	static uint8_t x659 = 26U;
	uint32_t x660 = UINT32_MAX;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = ((x657==(x658<=x659))^x660);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int8_t x662 = INT8_MAX;
	static uint16_t x663 = 10494U;
	int32_t t165 = 142978;

    t165 = ((x661==(x662<=x663))^x664);

    if (t165 != -10393) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -131509019LL;
	int16_t x666 = INT16_MAX;
	int32_t x667 = INT32_MIN;
	volatile uint8_t x668 = 104U;
	int32_t t166 = 258786;

    t166 = ((x665==(x666<=x667))^x668);

    if (t166 != 104) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int64_t x670 = INT64_MIN;
	volatile uint32_t x671 = 23970686U;
	volatile int64_t t167 = 15382645LL;

    t167 = ((x669==(x670<=x671))^x672);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = -94;
	int32_t x675 = INT32_MAX;
	int16_t x676 = INT16_MAX;
	int32_t t168 = 113;

    t168 = ((x673==(x674<=x675))^x676);

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	static int32_t x680 = 826781791;
	int32_t t169 = -14;

    t169 = ((x677==(x678<=x679))^x680);

    if (t169 != 826781791) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	static volatile uint32_t x682 = 68659U;
	volatile uint32_t x683 = UINT32_MAX;
	uint32_t x684 = 9523U;
	volatile uint32_t t170 = 25744U;

    t170 = ((x681==(x682<=x683))^x684);

    if (t170 != 9523U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	int32_t x686 = INT32_MIN;
	volatile uint16_t x688 = 7U;

    t171 = ((x685==(x686<=x687))^x688);

    if (t171 != 7) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 5726289U;
	int32_t x690 = -1;
	volatile int32_t x691 = -870;
	uint32_t x692 = UINT32_MAX;
	uint32_t t172 = UINT32_MAX;

    t172 = ((x689==(x690<=x691))^x692);

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x695 = 168U;
	int32_t x696 = INT32_MIN;
	volatile int32_t t173 = INT32_MIN;

    t173 = ((x693==(x694<=x695))^x696);

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	volatile uint64_t x698 = 1218134510LLU;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t174 = -153511;

    t174 = ((x697==(x698<=x699))^x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1;
	int32_t x702 = INT32_MAX;
	static volatile int32_t t175 = 1053;

    t175 = ((x701==(x702<=x703))^x704);

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x707 = 1;
	volatile int32_t x708 = INT32_MAX;
	static int32_t t176 = INT32_MAX;

    t176 = ((x705==(x706<=x707))^x708);

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x711 = INT8_MIN;
	uint16_t x712 = 11031U;

    t177 = ((x709==(x710<=x711))^x712);

    if (t177 != 11031) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 0U;
	static uint16_t x715 = 18U;
	static int64_t x716 = INT64_MIN;
	int64_t t178 = INT64_MIN;

    t178 = ((x713==(x714<=x715))^x716);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	static int16_t x718 = INT16_MAX;
	int32_t t179 = 0;

    t179 = ((x717==(x718<=x719))^x720);

    if (t179 != 444) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 142733LLU;
	uint8_t x722 = 63U;
	uint64_t x723 = 3239743992936759553LLU;
	volatile int16_t x724 = -1;
	volatile int32_t t180 = -71712631;

    t180 = ((x721==(x722<=x723))^x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 39U;
	int32_t x728 = -1;
	volatile int32_t t181 = 95;

    t181 = ((x725==(x726<=x727))^x728);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x732 = -1;
	static int32_t t182 = -5;

    t182 = ((x729==(x730<=x731))^x732);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	int16_t x735 = 7290;
	int8_t x736 = 31;

    t183 = ((x733==(x734<=x735))^x736);

    if (t183 != 31) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	int16_t x738 = -14;
	int32_t x739 = INT32_MIN;
	volatile int8_t x740 = -1;
	volatile int32_t t184 = 272;

    t184 = ((x737==(x738<=x739))^x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 54U;
	volatile int32_t x742 = -1;
	volatile uint64_t x743 = 22888559611012LLU;
	int16_t x744 = INT16_MIN;

    t185 = ((x741==(x742<=x743))^x744);

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x745 = -55;
	uint8_t x746 = UINT8_MAX;
	volatile int32_t t186 = 137736;

    t186 = ((x745==(x746<=x747))^x748);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MIN;
	volatile int64_t x750 = INT64_MAX;
	uint8_t x751 = 1U;
	static int16_t x752 = -2134;
	volatile int32_t t187 = 7889423;

    t187 = ((x749==(x750<=x751))^x752);

    if (t187 != -2134) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x753 = UINT16_MAX;
	static volatile int16_t x754 = 25;
	int16_t x755 = INT16_MIN;
	int32_t x756 = -2;

    t188 = ((x753==(x754<=x755))^x756);

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -1;
	int16_t x759 = INT16_MIN;
	int64_t x760 = -11LL;
	int64_t t189 = 111683427186697900LL;

    t189 = ((x757==(x758<=x759))^x760);

    if (t189 != -11LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MIN;
	uint32_t x762 = 14093U;
	int16_t x764 = INT16_MAX;

    t190 = ((x761==(x762<=x763))^x764);

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = INT32_MAX;
	int16_t x766 = -13926;
	int32_t x767 = INT32_MAX;

    t191 = ((x765==(x766<=x767))^x768);

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = 0LL;
	uint16_t x770 = 6117U;
	int64_t x771 = INT64_MIN;
	int16_t x772 = INT16_MAX;

    t192 = ((x769==(x770<=x771))^x772);

    if (t192 != 32766) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = 331;
	volatile int64_t x774 = -1LL;
	uint16_t x776 = UINT16_MAX;
	int32_t t193 = -4;

    t193 = ((x773==(x774<=x775))^x776);

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = -1;
	int8_t x778 = INT8_MIN;
	int32_t x779 = -25;
	int32_t x780 = INT32_MIN;

    t194 = ((x777==(x778<=x779))^x780);

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = INT8_MIN;
	int32_t x782 = -451564009;
	int64_t x783 = 2LL;
	int64_t x784 = -1LL;
	volatile int64_t t195 = 129LL;

    t195 = ((x781==(x782<=x783))^x784);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	uint8_t x786 = 3U;
	uint8_t x787 = UINT8_MAX;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t196 = -66;

    t196 = ((x785==(x786<=x787))^x788);

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	uint32_t x790 = UINT32_MAX;
	uint64_t x791 = 10950714864075LLU;
	int32_t t197 = INT32_MAX;

    t197 = ((x789==(x790<=x791))^x792);

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 0U;
	int32_t x794 = -3114376;
	static volatile int64_t x795 = INT64_MIN;
	static int32_t x796 = -1;

    t198 = ((x793==(x794<=x795))^x796);

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = -36;
	static int8_t x799 = INT8_MAX;
	int32_t t199 = -3792440;

    t199 = ((x797==(x798<=x799))^x800);

    if (t199 != -128) { NG(); } else { ; }
	
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

