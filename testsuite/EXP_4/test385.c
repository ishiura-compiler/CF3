
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

volatile int16_t x4 = INT16_MIN;
uint32_t x5 = UINT32_MAX;
int64_t x6 = INT64_MIN;
int32_t t1 = -1809944;
volatile int8_t x11 = 20;
int8_t x17 = 2;
int8_t x31 = -22;
int8_t x32 = -2;
static int32_t t8 = 14;
uint16_t x41 = 2U;
static int32_t x43 = INT32_MIN;
int16_t x44 = -1;
int32_t t10 = -198848;
static uint64_t x52 = 6068LLU;
static int32_t t11 = 621;
volatile int32_t t12 = 793;
static uint8_t x60 = 2U;
static int32_t t14 = -981;
volatile int64_t x72 = 19381LL;
volatile int32_t t19 = -1450751;
int32_t t25 = -16746;
int32_t t26 = 34;
int8_t x117 = INT8_MIN;
int16_t x118 = -40;
int8_t x120 = 4;
volatile int32_t t28 = -228771933;
uint16_t x132 = 0U;
volatile int32_t x135 = INT32_MIN;
static int32_t x139 = -1;
int64_t x144 = -1LL;
int32_t t37 = 1870;
int64_t x162 = INT64_MIN;
static int64_t x174 = -81653131655260LL;
int16_t x175 = 362;
int8_t x178 = -1;
int64_t x180 = INT64_MAX;
volatile int32_t t42 = 1;
int8_t x182 = INT8_MAX;
static uint64_t x189 = 42939767486LLU;
int16_t x190 = INT16_MAX;
uint32_t x194 = 248752613U;
volatile uint16_t x206 = 512U;
int64_t x219 = 89LL;
uint32_t x225 = 5893563U;
int16_t x226 = INT16_MIN;
static int32_t x227 = INT32_MIN;
static int32_t t53 = -1;
static int64_t x246 = INT64_MIN;
volatile uint32_t x252 = 4686254U;
int8_t x254 = -1;
int8_t x271 = INT8_MIN;
volatile uint16_t x276 = 2U;
int16_t x279 = -74;
volatile int32_t x294 = -2309;
volatile int32_t t68 = 6;
uint32_t x301 = 1328002506U;
uint16_t x310 = UINT16_MAX;
volatile uint64_t x313 = 30019306LLU;
static uint32_t x321 = 478U;
uint32_t x332 = UINT32_MAX;
int8_t x334 = 10;
int32_t x335 = -1;
int8_t x337 = -3;
int32_t t78 = 6708174;
uint64_t x348 = 3338LLU;
int64_t x350 = -1LL;
int8_t x355 = 9;
int8_t x358 = 1;
static int64_t x360 = -122147867659LL;
int64_t x362 = INT64_MIN;
uint32_t x372 = UINT32_MAX;
int32_t t85 = -15;
int16_t x374 = -3230;
volatile int8_t x386 = INT8_MAX;
static uint8_t x388 = 9U;
int8_t x389 = INT8_MIN;
volatile int8_t x395 = INT8_MIN;
int32_t t91 = -212810;
volatile uint32_t x399 = 1U;
int64_t x405 = -66360815339844LL;
int16_t x406 = INT16_MIN;
volatile int64_t x410 = 1792965779LL;
int32_t x411 = -1;
static int32_t t94 = 1489143;
volatile int32_t t95 = -1091998;
static volatile uint8_t x420 = 0U;
uint32_t x424 = UINT32_MAX;
static volatile int64_t x428 = INT64_MIN;
static volatile uint8_t x430 = 93U;
volatile int64_t x434 = INT64_MIN;
volatile uint16_t x437 = 16818U;
int16_t x441 = INT16_MIN;
static uint16_t x448 = UINT16_MAX;
int32_t t103 = 1931371;
static int32_t x452 = -1;
volatile int16_t x458 = 13;
int16_t x466 = INT16_MAX;
volatile int32_t x468 = -1;
int8_t x476 = 3;
int32_t t110 = 2562402;
int32_t x477 = 7736007;
static int8_t x482 = INT8_MIN;
int32_t x483 = 134719;
static volatile int32_t t112 = -21758603;
int32_t x486 = INT32_MIN;
uint64_t x488 = 3783LLU;
int8_t x493 = INT8_MIN;
int32_t x494 = 25815;
int32_t t114 = 2;
volatile uint16_t x498 = UINT16_MAX;
static volatile int32_t t115 = 11497;
int8_t x501 = INT8_MAX;
static volatile uint8_t x503 = 39U;
int64_t x505 = INT64_MIN;
uint32_t x513 = 6401U;
static volatile int32_t x517 = -1457;
volatile uint64_t x522 = UINT64_MAX;
int32_t t121 = -14199818;
static int64_t x528 = -1LL;
volatile int32_t t122 = -137;
int64_t x538 = 196950433029LL;
uint8_t x540 = UINT8_MAX;
uint32_t x544 = UINT32_MAX;
static int32_t t125 = -182;
int32_t x551 = -14;
static uint32_t x553 = UINT32_MAX;
static int16_t x555 = -1;
volatile int32_t t127 = 6;
int16_t x565 = INT16_MIN;
int16_t x572 = -7745;
uint32_t x574 = UINT32_MAX;
volatile int8_t x582 = -1;
int16_t x583 = INT16_MAX;
int32_t x586 = INT32_MAX;
int16_t x590 = INT16_MAX;
int16_t x591 = -1;
int16_t x593 = INT16_MIN;
static int8_t x598 = -1;
uint8_t x599 = 7U;
volatile uint32_t x603 = UINT32_MAX;
int32_t t138 = 218;
int64_t x605 = INT64_MIN;
int32_t x610 = INT32_MAX;
static int32_t x611 = -108996;
int8_t x612 = INT8_MAX;
int16_t x616 = INT16_MIN;
uint64_t x617 = 29577107913878LLU;
int64_t x619 = INT64_MIN;
uint16_t x622 = UINT16_MAX;
uint32_t x624 = UINT32_MAX;
static int16_t x626 = 0;
int32_t t144 = -1;
static int32_t x653 = INT32_MIN;
int16_t x655 = 370;
int16_t x666 = INT16_MIN;
int64_t x673 = INT64_MIN;
uint32_t x674 = 343493682U;
uint32_t x677 = 22U;
int32_t x678 = INT32_MIN;
int64_t x679 = INT64_MAX;
int32_t t154 = 42422056;
int64_t x689 = INT64_MIN;
static volatile int32_t t159 = 6030;
int32_t x702 = INT32_MAX;
static int16_t x708 = 15192;
static int64_t x711 = 5LL;
uint64_t x717 = UINT64_MAX;
volatile int32_t x729 = -259288;
uint16_t x741 = UINT16_MAX;
static int32_t t168 = 229;
int32_t t170 = -128240593;
static volatile int64_t x757 = INT64_MAX;
int32_t x758 = INT32_MIN;
volatile int32_t t172 = -5884;
int32_t t173 = 131073827;
int8_t x780 = INT8_MIN;
int64_t x781 = INT64_MAX;
uint32_t x783 = 239560U;
volatile uint16_t x785 = 616U;
int32_t x798 = INT32_MIN;
static volatile int32_t t180 = 276450;
uint8_t x802 = 1U;
int8_t x809 = -31;
volatile int32_t t183 = -252254678;
int8_t x815 = -14;
volatile uint64_t x820 = 3884LLU;
int32_t t185 = -113;
volatile int16_t x823 = -6;
int8_t x824 = INT8_MIN;
int64_t x827 = INT64_MIN;
uint32_t x830 = 1U;
int32_t x841 = INT32_MAX;
int32_t t191 = 1;
int8_t x852 = -26;
int16_t x855 = -1;
int32_t t196 = 505;
int8_t x871 = INT8_MAX;
volatile int32_t t197 = -971963;
int32_t x873 = INT32_MIN;
static int32_t t198 = 40;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	int64_t x2 = -1LL;
	static int16_t x3 = -1;
	int32_t t0 = -113977;

    t0 = (x1!=(x2^(x3-x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;

    t1 = (x5!=(x6^(x7-x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	uint32_t x10 = UINT32_MAX;
	static int16_t x12 = -3751;
	int32_t t2 = 52;

    t2 = (x9!=(x10^(x11-x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 18U;
	static int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -619;

    t3 = (x13!=(x14^(x15-x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;
	uint32_t x19 = UINT32_MAX;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 3;

    t4 = (x17!=(x18^(x19-x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -16167165;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	static int32_t x24 = -1;
	volatile int32_t t5 = 0;

    t5 = (x21!=(x22^(x23-x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 1;
	volatile int8_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -508;

    t6 = (x25!=(x26^(x27-x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MIN;
	int32_t t7 = -238265114;

    t7 = (x29!=(x30^(x31-x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -3017;
	int8_t x34 = -1;
	int64_t x35 = -1LL;
	volatile int16_t x36 = INT16_MIN;

    t8 = (x33!=(x34^(x35-x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int64_t x38 = INT64_MIN;
	static uint32_t x39 = 5063U;
	uint32_t x40 = 1U;
	int32_t t9 = 255;

    t9 = (x37!=(x38^(x39-x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x42 = -51;

    t10 = (x41!=(x42^(x43-x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = -1;
	static volatile uint32_t x50 = 394335U;
	volatile int8_t x51 = -1;

    t11 = (x49!=(x50^(x51-x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 7658U;
	uint32_t x54 = 302515555U;
	static int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;

    t12 = (x53!=(x54^(x55-x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = INT32_MIN;
	int32_t x58 = 0;
	volatile uint16_t x59 = 0U;
	static int32_t t13 = -182404308;

    t13 = (x57!=(x58^(x59-x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = INT64_MIN;
	int32_t x66 = -1;
	volatile int16_t x67 = -1;
	int8_t x68 = INT8_MIN;

    t14 = (x65!=(x66^(x67-x68)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 1845973LLU;
	uint16_t x70 = 4U;
	int32_t x71 = INT32_MIN;
	volatile int32_t t15 = -102;

    t15 = (x69!=(x70^(x71-x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x73 = INT32_MIN;
	volatile int16_t x74 = -115;
	int64_t x75 = INT64_MIN;
	static int8_t x76 = INT8_MIN;
	static volatile int32_t t16 = 13099611;

    t16 = (x73!=(x74^(x75-x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t17 = -212961;

    t17 = (x77!=(x78^(x79-x80)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x81 = 280052;
	int32_t x82 = -352121;
	int8_t x83 = INT8_MAX;
	int8_t x84 = -3;
	volatile int32_t t18 = 239;

    t18 = (x81!=(x82^(x83-x84)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	volatile int64_t x86 = -103533384700540LL;
	uint16_t x87 = 1U;
	uint8_t x88 = 25U;

    t19 = (x85!=(x86^(x87-x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x89 = 1072981429064LLU;
	uint32_t x90 = UINT32_MAX;
	static int16_t x91 = INT16_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t20 = 987230414;

    t20 = (x89!=(x90^(x91-x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = UINT8_MAX;
	int32_t x94 = 3780153;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 6U;
	int32_t t21 = 86977;

    t21 = (x93!=(x94^(x95-x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x97 = -69657504888046040LL;
	uint32_t x98 = 14U;
	uint64_t x99 = 5767895260088438LLU;
	uint8_t x100 = 1U;
	int32_t t22 = -609;

    t22 = (x97!=(x98^(x99-x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 1U;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 3LLU;
	volatile int8_t x104 = -1;
	volatile int32_t t23 = 19;

    t23 = (x101!=(x102^(x103-x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = 1U;
	static volatile int64_t x106 = INT64_MAX;
	uint32_t x107 = 476U;
	static uint8_t x108 = 76U;
	volatile int32_t t24 = -793;

    t24 = (x105!=(x106^(x107-x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = 12880088LL;
	uint8_t x110 = UINT8_MAX;
	volatile int16_t x111 = INT16_MIN;
	volatile int8_t x112 = INT8_MIN;

    t25 = (x109!=(x110^(x111-x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x113 = -129212LL;
	volatile uint16_t x114 = UINT16_MAX;
	int16_t x115 = -1;
	int16_t x116 = 11834;

    t26 = (x113!=(x114^(x115-x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x119 = INT8_MAX;
	int32_t t27 = -443;

    t27 = (x117!=(x118^(x119-x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x121 = 1920181U;
	static int8_t x122 = INT8_MAX;
	int8_t x123 = -25;
	volatile uint16_t x124 = 10U;

    t28 = (x121!=(x122^(x123-x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = 757668984U;
	volatile int32_t x126 = -1;
	int16_t x127 = -1;
	volatile int16_t x128 = 485;
	volatile int32_t t29 = -117243564;

    t29 = (x125!=(x126^(x127-x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	int64_t x131 = -1LL;
	int32_t t30 = -11132449;

    t30 = (x129!=(x130^(x131-x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 15U;
	static uint16_t x134 = 11984U;
	uint64_t x136 = 1861123236919636LLU;
	int32_t t31 = 57723;

    t31 = (x133!=(x134^(x135-x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = 13;
	int16_t x138 = INT16_MIN;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t32 = -3;

    t32 = (x137!=(x138^(x139-x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	static volatile int16_t x143 = INT16_MAX;
	volatile int32_t t33 = -1025661445;

    t33 = (x141!=(x142^(x143-x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = 28927;
	volatile uint16_t x146 = UINT16_MAX;
	int8_t x147 = 22;
	int8_t x148 = -7;
	volatile int32_t t34 = 3;

    t34 = (x145!=(x146^(x147-x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MAX;
	int8_t x150 = -1;
	int64_t x151 = -3LL;
	static uint8_t x152 = 81U;
	int32_t t35 = 1;

    t35 = (x149!=(x150^(x151-x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x153 = 3;
	volatile int8_t x154 = INT8_MIN;
	int16_t x155 = 1;
	int64_t x156 = INT64_MAX;
	volatile int32_t t36 = 175;

    t36 = (x153!=(x154^(x155-x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = 376LL;
	int16_t x158 = INT16_MIN;
	int8_t x159 = 7;
	int8_t x160 = -62;

    t37 = (x157!=(x158^(x159-x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = -1;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	volatile int32_t t38 = 1;

    t38 = (x161!=(x162^(x163-x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x165 = -1;
	int64_t x166 = 647372710081240170LL;
	uint8_t x167 = 26U;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t39 = 5334461;

    t39 = (x165!=(x166^(x167-x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 2016U;
	static volatile int32_t x171 = INT32_MIN;
	uint32_t x172 = 28638875U;
	static volatile int32_t t40 = 4708415;

    t40 = (x169!=(x170^(x171-x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = 1908;
	static uint16_t x176 = UINT16_MAX;
	int32_t t41 = 297956;

    t41 = (x173!=(x174^(x175-x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = 2733;
	int64_t x179 = 7493LL;

    t42 = (x177!=(x178^(x179-x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x181 = 5;
	uint8_t x183 = 23U;
	int32_t x184 = INT32_MAX;
	volatile int32_t t43 = -592278;

    t43 = (x181!=(x182^(x183-x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = 977372476474LL;
	int64_t x186 = -46709LL;
	volatile uint16_t x187 = 102U;
	int8_t x188 = -1;
	volatile int32_t t44 = 2314804;

    t44 = (x185!=(x186^(x187-x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x191 = INT16_MIN;
	static volatile uint32_t x192 = 3790U;
	volatile int32_t t45 = 113632568;

    t45 = (x189!=(x190^(x191-x192)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x193 = 0U;
	int8_t x195 = INT8_MAX;
	static uint64_t x196 = 3547287403129LLU;
	static volatile int32_t t46 = -13991;

    t46 = (x193!=(x194^(x195-x196)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	int32_t x203 = 4813794;
	uint16_t x204 = UINT16_MAX;
	static int32_t t47 = 662866;

    t47 = (x201!=(x202^(x203-x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = -91818;
	int16_t x207 = INT16_MIN;
	volatile int16_t x208 = -1;
	static int32_t t48 = -31762;

    t48 = (x205!=(x206^(x207-x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x209 = 0U;
	int64_t x210 = INT64_MAX;
	uint32_t x211 = 24U;
	int8_t x212 = 1;
	volatile int32_t t49 = -157190;

    t49 = (x209!=(x210^(x211-x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x213 = INT16_MAX;
	static int32_t x214 = -1;
	int32_t x215 = INT32_MAX;
	uint16_t x216 = UINT16_MAX;
	static int32_t t50 = 1987896;

    t50 = (x213!=(x214^(x215-x216)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x217 = -1LL;
	volatile int16_t x218 = -1;
	volatile uint16_t x220 = 831U;
	int32_t t51 = -4249;

    t51 = (x217!=(x218^(x219-x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = 17;
	int8_t x222 = INT8_MAX;
	int32_t x223 = -1;
	static uint32_t x224 = 822972U;
	static int32_t t52 = 1489;

    t52 = (x221!=(x222^(x223-x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x228 = INT32_MIN;

    t53 = (x225!=(x226^(x227-x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x233 = INT16_MAX;
	volatile int16_t x234 = -1;
	int8_t x235 = 0;
	uint8_t x236 = UINT8_MAX;
	static int32_t t54 = -124475362;

    t54 = (x233!=(x234^(x235-x236)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -1;
	int32_t x238 = -1;
	uint16_t x239 = 6U;
	int16_t x240 = INT16_MAX;
	int32_t t55 = 553609763;

    t55 = (x237!=(x238^(x239-x240)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = -1;
	int16_t x244 = INT16_MAX;
	static int32_t t56 = -4810;

    t56 = (x241!=(x242^(x243-x244)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x245 = UINT16_MAX;
	int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;
	int32_t t57 = -594031935;

    t57 = (x245!=(x246^(x247-x248)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = -9;
	int32_t x250 = INT32_MIN;
	static uint32_t x251 = UINT32_MAX;
	int32_t t58 = 780;

    t58 = (x249!=(x250^(x251-x252)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = UINT16_MAX;
	int64_t x255 = -1LL;
	int32_t x256 = INT32_MAX;
	volatile int32_t t59 = -64;

    t59 = (x253!=(x254^(x255-x256)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = 812721760LL;
	uint64_t x258 = UINT64_MAX;
	static int32_t x259 = INT32_MAX;
	volatile int32_t x260 = 33795753;
	volatile int32_t t60 = -6884363;

    t60 = (x257!=(x258^(x259-x260)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x265 = INT16_MIN;
	uint8_t x266 = 9U;
	uint64_t x267 = 87466819601LLU;
	int32_t x268 = 29009803;
	volatile int32_t t61 = -29759976;

    t61 = (x265!=(x266^(x267-x268)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = INT32_MIN;
	uint16_t x270 = UINT16_MAX;
	uint32_t x272 = 776570005U;
	int32_t t62 = 62;

    t62 = (x269!=(x270^(x271-x272)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = INT16_MIN;
	int64_t x274 = -1LL;
	static int8_t x275 = 2;
	static int32_t t63 = -587;

    t63 = (x273!=(x274^(x275-x276)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x277 = UINT64_MAX;
	volatile int8_t x278 = INT8_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t64 = 34279;

    t64 = (x277!=(x278^(x279-x280)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = INT64_MIN;
	int8_t x282 = -22;
	static int32_t x283 = INT32_MIN;
	uint32_t x284 = 261U;
	int32_t t65 = -6095159;

    t65 = (x281!=(x282^(x283-x284)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 6U;
	uint64_t x287 = 3469842LLU;
	static int8_t x288 = 0;
	volatile int32_t t66 = 1;

    t66 = (x285!=(x286^(x287-x288)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	static uint64_t x291 = 7915993196299LLU;
	volatile int16_t x292 = -1;
	static int32_t t67 = 0;

    t67 = (x289!=(x290^(x291-x292)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x293 = 0;
	uint8_t x295 = 0U;
	static int16_t x296 = INT16_MIN;

    t68 = (x293!=(x294^(x295-x296)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x302 = -1;
	int16_t x303 = 1;
	int16_t x304 = INT16_MIN;
	static int32_t t69 = -1124142;

    t69 = (x301!=(x302^(x303-x304)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x305 = -1;
	int32_t x306 = INT32_MAX;
	volatile int64_t x307 = -1LL;
	static volatile uint8_t x308 = UINT8_MAX;
	int32_t t70 = -2;

    t70 = (x305!=(x306^(x307-x308)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x309 = 37970LLU;
	int32_t x311 = 22866;
	volatile int32_t x312 = 20561187;
	static volatile int32_t t71 = 2541722;

    t71 = (x309!=(x310^(x311-x312)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x314 = 0U;
	int64_t x315 = -3061599204LL;
	int32_t x316 = -1;
	volatile int32_t t72 = 470023118;

    t72 = (x313!=(x314^(x315-x316)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x322 = INT32_MIN;
	int32_t x323 = -6831639;
	int8_t x324 = INT8_MIN;
	volatile int32_t t73 = 725397;

    t73 = (x321!=(x322^(x323-x324)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x325 = 144663LLU;
	int8_t x326 = INT8_MIN;
	static int64_t x327 = -32LL;
	volatile int64_t x328 = INT64_MIN;
	int32_t t74 = -520395941;

    t74 = (x325!=(x326^(x327-x328)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = -1942;
	static volatile int32_t x330 = 21;
	int32_t x331 = 0;
	volatile int32_t t75 = -504803;

    t75 = (x329!=(x330^(x331-x332)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x333 = INT16_MIN;
	static uint32_t x336 = 30517U;
	int32_t t76 = 375176;

    t76 = (x333!=(x334^(x335-x336)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x338 = 3913407601254221445LL;
	uint8_t x339 = 107U;
	int8_t x340 = -1;
	int32_t t77 = -32630;

    t77 = (x337!=(x338^(x339-x340)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x341 = INT16_MIN;
	static volatile int64_t x342 = INT64_MAX;
	uint64_t x343 = 4116479754370342847LLU;
	int64_t x344 = 4249718389292609443LL;

    t78 = (x341!=(x342^(x343-x344)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x346 = 355LL;
	int16_t x347 = 1;
	int32_t t79 = 569853;

    t79 = (x345!=(x346^(x347-x348)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = INT16_MAX;
	uint64_t x351 = UINT64_MAX;
	int32_t x352 = INT32_MAX;
	volatile int32_t t80 = -1;

    t80 = (x349!=(x350^(x351-x352)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x353 = 7013745959175LLU;
	uint8_t x354 = 15U;
	volatile uint16_t x356 = 3U;
	static volatile int32_t t81 = 1938;

    t81 = (x353!=(x354^(x355-x356)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x357 = INT64_MIN;
	uint32_t x359 = UINT32_MAX;
	volatile int32_t t82 = 0;

    t82 = (x357!=(x358^(x359-x360)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x361 = -1;
	uint32_t x363 = UINT32_MAX;
	static int64_t x364 = INT64_MAX;
	volatile int32_t t83 = 6651521;

    t83 = (x361!=(x362^(x363-x364)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = -1;
	volatile uint16_t x368 = UINT16_MAX;
	static int32_t t84 = -82961105;

    t84 = (x365!=(x366^(x367-x368)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x369 = -1LL;
	static int32_t x370 = -1;
	uint64_t x371 = 130745396805128LLU;

    t85 = (x369!=(x370^(x371-x372)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x373 = -1;
	uint8_t x375 = 2U;
	int8_t x376 = -1;
	int32_t t86 = 120;

    t86 = (x373!=(x374^(x375-x376)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	static uint64_t x379 = 12836LLU;
	int32_t x380 = INT32_MIN;
	volatile int32_t t87 = 326;

    t87 = (x377!=(x378^(x379-x380)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MAX;
	uint8_t x384 = 0U;
	volatile int32_t t88 = 5362248;

    t88 = (x381!=(x382^(x383-x384)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x385 = UINT8_MAX;
	volatile int8_t x387 = -2;
	int32_t t89 = -814599;

    t89 = (x385!=(x386^(x387-x388)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MAX;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t90 = -23042742;

    t90 = (x389!=(x390^(x391-x392)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	uint64_t x396 = 6362LLU;

    t91 = (x393!=(x394^(x395-x396)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MAX;
	static int32_t x400 = -1;
	volatile int32_t t92 = 43;

    t92 = (x397!=(x398^(x399-x400)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x407 = 1U;
	uint8_t x408 = 13U;
	static int32_t t93 = 888;

    t93 = (x405!=(x406^(x407-x408)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = INT8_MAX;
	int64_t x412 = INT64_MIN;

    t94 = (x409!=(x410^(x411-x412)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = -1;
	volatile int16_t x414 = -1;
	int64_t x415 = -76737LL;
	int8_t x416 = -1;

    t95 = (x413!=(x414^(x415-x416)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MIN;
	volatile int64_t x419 = INT64_MIN;
	static volatile int32_t t96 = -83856346;

    t96 = (x417!=(x418^(x419-x420)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = -13729;
	int8_t x422 = INT8_MIN;
	int8_t x423 = 2;
	volatile int32_t t97 = -1;

    t97 = (x421!=(x422^(x423-x424)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x425 = 262;
	int64_t x426 = INT64_MAX;
	uint64_t x427 = 4975292648LLU;
	int32_t t98 = 3;

    t98 = (x425!=(x426^(x427-x428)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x429 = -1;
	static int8_t x431 = 9;
	static int16_t x432 = INT16_MAX;
	int32_t t99 = -199;

    t99 = (x429!=(x430^(x431-x432)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x433 = INT8_MIN;
	static volatile int32_t x435 = 1688;
	static int16_t x436 = -1;
	volatile int32_t t100 = -7912;

    t100 = (x433!=(x434^(x435-x436)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x438 = INT16_MIN;
	int8_t x439 = -20;
	static uint8_t x440 = 1U;
	volatile int32_t t101 = -4;

    t101 = (x437!=(x438^(x439-x440)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x442 = -1;
	int16_t x443 = -1;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t102 = 503;

    t102 = (x441!=(x442^(x443-x444)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x445 = 6918110715702536428LLU;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = 5730;

    t103 = (x445!=(x446^(x447-x448)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x449 = 970;
	int64_t x450 = -382524LL;
	int8_t x451 = -5;
	int32_t t104 = -74876982;

    t104 = (x449!=(x450^(x451-x452)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x453 = 62;
	volatile int32_t x454 = INT32_MIN;
	int8_t x455 = -14;
	int8_t x456 = INT8_MIN;
	volatile int32_t t105 = -861108;

    t105 = (x453!=(x454^(x455-x456)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x457 = 3U;
	static int64_t x459 = -1101843065616LL;
	int32_t x460 = INT32_MAX;
	volatile int32_t t106 = -223;

    t106 = (x457!=(x458^(x459-x460)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x461 = -1;
	static uint16_t x462 = 0U;
	volatile int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t107 = 3503;

    t107 = (x461!=(x462^(x463-x464)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = -54368;
	static uint8_t x467 = 0U;
	volatile int32_t t108 = 7756;

    t108 = (x465!=(x466^(x467-x468)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x469 = 0U;
	int32_t x470 = 453656;
	int16_t x471 = -97;
	volatile int8_t x472 = INT8_MIN;
	int32_t t109 = -248007163;

    t109 = (x469!=(x470^(x471-x472)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x473 = -1LL;
	int64_t x474 = -13541089832LL;
	int16_t x475 = -19;

    t110 = (x473!=(x474^(x475-x476)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x478 = -1LL;
	int64_t x479 = -1LL;
	int8_t x480 = -16;
	volatile int32_t t111 = -1171;

    t111 = (x477!=(x478^(x479-x480)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x481 = -247;
	static uint8_t x484 = 0U;

    t112 = (x481!=(x482^(x483-x484)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x485 = UINT8_MAX;
	int32_t x487 = INT32_MAX;
	int32_t t113 = 6;

    t113 = (x485!=(x486^(x487-x488)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x495 = -1;
	static uint8_t x496 = 12U;

    t114 = (x493!=(x494^(x495-x496)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x497 = UINT64_MAX;
	int8_t x499 = INT8_MIN;
	int8_t x500 = -13;

    t115 = (x497!=(x498^(x499-x500)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x502 = -281974791266744LL;
	static volatile int64_t x504 = -1LL;
	int32_t t116 = 23;

    t116 = (x501!=(x502^(x503-x504)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x506 = -13;
	uint16_t x507 = UINT16_MAX;
	int16_t x508 = 4176;
	volatile int32_t t117 = 15;

    t117 = (x505!=(x506^(x507-x508)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x509 = INT64_MIN;
	int8_t x510 = 1;
	static int16_t x511 = INT16_MAX;
	int32_t x512 = -1;
	int32_t t118 = 10359;

    t118 = (x509!=(x510^(x511-x512)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x514 = -1;
	static volatile int8_t x515 = 1;
	int16_t x516 = INT16_MAX;
	volatile int32_t t119 = -251;

    t119 = (x513!=(x514^(x515-x516)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x518 = INT32_MAX;
	int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MAX;
	static int32_t t120 = -51606;

    t120 = (x517!=(x518^(x519-x520)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint32_t x523 = 22884879U;
	uint32_t x524 = UINT32_MAX;

    t121 = (x521!=(x522^(x523-x524)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x525 = INT64_MAX;
	int8_t x526 = INT8_MAX;
	volatile int16_t x527 = 650;

    t122 = (x525!=(x526^(x527-x528)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x533 = INT8_MAX;
	int64_t x534 = -1LL;
	int8_t x535 = -1;
	int64_t x536 = INT64_MIN;
	int32_t t123 = -8093;

    t123 = (x533!=(x534^(x535-x536)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = INT64_MIN;
	int32_t x539 = -309;
	int32_t t124 = -766;

    t124 = (x537!=(x538^(x539-x540)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x541 = 419;
	int64_t x542 = -1LL;
	int64_t x543 = -1LL;

    t125 = (x541!=(x542^(x543-x544)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x549 = INT32_MIN;
	static int16_t x550 = -1;
	static volatile uint32_t x552 = 53217U;
	int32_t t126 = -226216197;

    t126 = (x549!=(x550^(x551-x552)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x554 = 2U;
	uint64_t x556 = 86728LLU;

    t127 = (x553!=(x554^(x555-x556)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x557 = 27U;
	uint16_t x558 = 6940U;
	static int64_t x559 = -1LL;
	uint8_t x560 = UINT8_MAX;
	static int32_t t128 = 940073;

    t128 = (x557!=(x558^(x559-x560)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x566 = INT16_MIN;
	static int8_t x567 = -1;
	int32_t x568 = -1;
	int32_t t129 = -2944;

    t129 = (x565!=(x566^(x567-x568)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x569 = 927402157302LLU;
	static int32_t x570 = INT32_MIN;
	uint64_t x571 = 767039LLU;
	volatile int32_t t130 = 3362245;

    t130 = (x569!=(x570^(x571-x572)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x575 = INT8_MAX;
	volatile uint8_t x576 = UINT8_MAX;
	int32_t t131 = -10;

    t131 = (x573!=(x574^(x575-x576)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	int32_t x578 = -1;
	int64_t x579 = -1060949371364896LL;
	volatile int16_t x580 = -1;
	static volatile int32_t t132 = 5;

    t132 = (x577!=(x578^(x579-x580)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x581 = INT16_MIN;
	static int32_t x584 = -14488;
	static volatile int32_t t133 = 18005999;

    t133 = (x581!=(x582^(x583-x584)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x585 = INT32_MIN;
	int16_t x587 = INT16_MAX;
	uint32_t x588 = 255942250U;
	static volatile int32_t t134 = 160;

    t134 = (x585!=(x586^(x587-x588)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x589 = 34U;
	int8_t x592 = -1;
	volatile int32_t t135 = -62209093;

    t135 = (x589!=(x590^(x591-x592)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x594 = UINT16_MAX;
	int16_t x595 = 246;
	int32_t x596 = -1;
	static int32_t t136 = -64627;

    t136 = (x593!=(x594^(x595-x596)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x597 = 179885U;
	uint16_t x600 = 239U;
	int32_t t137 = -15307818;

    t137 = (x597!=(x598^(x599-x600)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MIN;
	int64_t x604 = -42378544251940LL;

    t138 = (x601!=(x602^(x603-x604)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x606 = INT64_MAX;
	int16_t x607 = INT16_MIN;
	volatile uint64_t x608 = UINT64_MAX;
	volatile int32_t t139 = 29820971;

    t139 = (x605!=(x606^(x607-x608)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x609 = INT64_MAX;
	volatile int32_t t140 = 677856827;

    t140 = (x609!=(x610^(x611-x612)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x613 = -1;
	static int8_t x614 = INT8_MAX;
	uint32_t x615 = 24317723U;
	int32_t t141 = -404778;

    t141 = (x613!=(x614^(x615-x616)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x618 = INT64_MIN;
	static int32_t x620 = -5539750;
	volatile int32_t t142 = -2778202;

    t142 = (x617!=(x618^(x619-x620)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x621 = INT64_MIN;
	int8_t x623 = -1;
	volatile int32_t t143 = -96;

    t143 = (x621!=(x622^(x623-x624)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x625 = INT8_MIN;
	uint16_t x627 = 3536U;
	uint16_t x628 = 26802U;

    t144 = (x625!=(x626^(x627-x628)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x630 = -1;
	uint16_t x631 = 3076U;
	int16_t x632 = 893;
	static volatile int32_t t145 = -281;

    t145 = (x629!=(x630^(x631-x632)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x641 = INT32_MAX;
	static int8_t x642 = INT8_MIN;
	uint64_t x643 = 69854083304LLU;
	int16_t x644 = INT16_MIN;
	static volatile int32_t t146 = 4365835;

    t146 = (x641!=(x642^(x643-x644)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x645 = UINT16_MAX;
	int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	static int16_t x648 = -119;
	volatile int32_t t147 = 1655922;

    t147 = (x645!=(x646^(x647-x648)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x649 = -189;
	int8_t x650 = 0;
	int16_t x651 = -121;
	static volatile int64_t x652 = -285738166LL;
	volatile int32_t t148 = -320290734;

    t148 = (x649!=(x650^(x651-x652)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x654 = 0;
	uint64_t x656 = 182LLU;
	int32_t t149 = -4028764;

    t149 = (x653!=(x654^(x655-x656)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x657 = UINT64_MAX;
	uint64_t x658 = 6864998717671450LLU;
	int8_t x659 = INT8_MIN;
	static volatile int32_t x660 = INT32_MIN;
	volatile int32_t t150 = 0;

    t150 = (x657!=(x658^(x659-x660)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x665 = 11;
	int16_t x667 = INT16_MAX;
	volatile uint32_t x668 = 14878882U;
	volatile int32_t t151 = 204;

    t151 = (x665!=(x666^(x667-x668)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x669 = 68U;
	int64_t x670 = -1LL;
	uint8_t x671 = 1U;
	volatile int32_t x672 = -1;
	int32_t t152 = 1;

    t152 = (x669!=(x670^(x671-x672)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x675 = INT8_MIN;
	int8_t x676 = INT8_MIN;
	volatile int32_t t153 = -460;

    t153 = (x673!=(x674^(x675-x676)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x680 = 0;

    t154 = (x677!=(x678^(x679-x680)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x681 = 121;
	uint16_t x682 = 1U;
	static uint8_t x683 = UINT8_MAX;
	int32_t x684 = INT32_MAX;
	int32_t t155 = 60474;

    t155 = (x681!=(x682^(x683-x684)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x685 = INT32_MAX;
	static volatile int32_t x686 = INT32_MIN;
	uint32_t x687 = 1397766547U;
	int16_t x688 = -62;
	volatile int32_t t156 = 151775;

    t156 = (x685!=(x686^(x687-x688)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x690 = 32LLU;
	static uint16_t x691 = UINT16_MAX;
	int16_t x692 = -1;
	volatile int32_t t157 = -13548024;

    t157 = (x689!=(x690^(x691-x692)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x693 = 1;
	uint32_t x694 = 16978995U;
	int16_t x695 = INT16_MIN;
	int64_t x696 = INT64_MIN;
	volatile int32_t t158 = 4;

    t158 = (x693!=(x694^(x695-x696)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x697 = -1;
	uint16_t x698 = 1U;
	int64_t x699 = -1LL;
	static int8_t x700 = 0;

    t159 = (x697!=(x698^(x699-x700)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x701 = 52U;
	uint8_t x703 = 0U;
	int16_t x704 = INT16_MIN;
	int32_t t160 = -37860;

    t160 = (x701!=(x702^(x703-x704)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x705 = 1;
	int32_t x706 = INT32_MIN;
	int8_t x707 = INT8_MAX;
	volatile int32_t t161 = -187215;

    t161 = (x705!=(x706^(x707-x708)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x709 = -320;
	int32_t x710 = -1;
	volatile uint64_t x712 = UINT64_MAX;
	static volatile int32_t t162 = -12773268;

    t162 = (x709!=(x710^(x711-x712)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x713 = -29887908;
	volatile uint8_t x714 = 9U;
	int32_t x715 = 43;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t163 = 7467;

    t163 = (x713!=(x714^(x715-x716)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x718 = UINT8_MAX;
	int64_t x719 = -57530451958986436LL;
	int8_t x720 = 1;
	static volatile int32_t t164 = -65264;

    t164 = (x717!=(x718^(x719-x720)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x730 = 1585U;
	volatile uint64_t x731 = UINT64_MAX;
	int8_t x732 = -6;
	static int32_t t165 = -4493776;

    t165 = (x729!=(x730^(x731-x732)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x733 = 9590U;
	int64_t x734 = -414LL;
	uint32_t x735 = 30063U;
	static uint64_t x736 = 15745872885283LLU;
	static volatile int32_t t166 = 386081;

    t166 = (x733!=(x734^(x735-x736)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x737 = INT32_MIN;
	uint16_t x738 = 2670U;
	volatile uint64_t x739 = 7975340419LLU;
	int8_t x740 = -1;
	static int32_t t167 = 4725;

    t167 = (x737!=(x738^(x739-x740)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x742 = 798479081U;
	volatile int8_t x743 = INT8_MAX;
	static int32_t x744 = -1;

    t168 = (x741!=(x742^(x743-x744)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x745 = INT64_MAX;
	static uint32_t x746 = 6U;
	uint8_t x747 = 31U;
	static int16_t x748 = 20;
	int32_t t169 = 387801592;

    t169 = (x745!=(x746^(x747-x748)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x749 = -1;
	int32_t x750 = 46406;
	static int64_t x751 = -1LL;
	volatile int16_t x752 = INT16_MIN;

    t170 = (x749!=(x750^(x751-x752)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x759 = 97U;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t171 = -8000;

    t171 = (x757!=(x758^(x759-x760)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x761 = 111U;
	uint32_t x762 = UINT32_MAX;
	static int16_t x763 = INT16_MIN;
	uint32_t x764 = 405290753U;

    t172 = (x761!=(x762^(x763-x764)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x765 = INT64_MIN;
	int8_t x766 = -1;
	static uint32_t x767 = 1941130910U;
	int16_t x768 = 30;

    t173 = (x765!=(x766^(x767-x768)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x773 = 55U;
	int64_t x774 = 24LL;
	volatile uint16_t x775 = 6741U;
	volatile int8_t x776 = -1;
	int32_t t174 = 1;

    t174 = (x773!=(x774^(x775-x776)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x777 = INT64_MIN;
	static int8_t x778 = INT8_MAX;
	int16_t x779 = 23;
	int32_t t175 = -114736264;

    t175 = (x777!=(x778^(x779-x780)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x782 = INT8_MAX;
	int8_t x784 = INT8_MAX;
	static int32_t t176 = -250783;

    t176 = (x781!=(x782^(x783-x784)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x786 = UINT64_MAX;
	static int16_t x787 = INT16_MIN;
	uint64_t x788 = 4052LLU;
	int32_t t177 = 5919557;

    t177 = (x785!=(x786^(x787-x788)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x789 = INT8_MIN;
	static uint16_t x790 = 1431U;
	int16_t x791 = INT16_MIN;
	int16_t x792 = -5219;
	volatile int32_t t178 = -13698;

    t178 = (x789!=(x790^(x791-x792)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x793 = INT32_MAX;
	volatile int64_t x794 = INT64_MIN;
	int16_t x795 = INT16_MIN;
	int32_t x796 = -1;
	int32_t t179 = -50;

    t179 = (x793!=(x794^(x795-x796)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x797 = -1LL;
	int64_t x799 = 0LL;
	int8_t x800 = INT8_MIN;

    t180 = (x797!=(x798^(x799-x800)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x801 = 19921U;
	static int8_t x803 = INT8_MIN;
	int32_t x804 = 1;
	int32_t t181 = -76012;

    t181 = (x801!=(x802^(x803-x804)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x805 = INT64_MAX;
	int32_t x806 = 7722;
	int32_t x807 = INT32_MIN;
	static int8_t x808 = -1;
	int32_t t182 = -12503060;

    t182 = (x805!=(x806^(x807-x808)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x810 = -1;
	uint16_t x811 = 5U;
	uint16_t x812 = UINT16_MAX;

    t183 = (x809!=(x810^(x811-x812)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x813 = UINT16_MAX;
	static int64_t x814 = -12192023547887013LL;
	int16_t x816 = INT16_MIN;
	int32_t t184 = -5397020;

    t184 = (x813!=(x814^(x815-x816)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x817 = INT64_MAX;
	static int32_t x818 = INT32_MAX;
	int64_t x819 = -1LL;

    t185 = (x817!=(x818^(x819-x820)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x821 = INT64_MIN;
	int8_t x822 = -16;
	volatile int32_t t186 = 26287;

    t186 = (x821!=(x822^(x823-x824)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x825 = INT16_MIN;
	uint8_t x826 = UINT8_MAX;
	uint64_t x828 = 128699LLU;
	volatile int32_t t187 = -1388712;

    t187 = (x825!=(x826^(x827-x828)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x829 = UINT64_MAX;
	static int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MAX;
	int32_t t188 = 6085823;

    t188 = (x829!=(x830^(x831-x832)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x833 = INT8_MIN;
	uint32_t x834 = 6U;
	int8_t x835 = INT8_MAX;
	int16_t x836 = -1;
	static volatile int32_t t189 = 44099787;

    t189 = (x833!=(x834^(x835-x836)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x842 = -1;
	uint8_t x843 = 1U;
	static uint32_t x844 = UINT32_MAX;
	volatile int32_t t190 = -116511;

    t190 = (x841!=(x842^(x843-x844)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x845 = 778620279221625LL;
	volatile int64_t x846 = INT64_MIN;
	uint64_t x847 = UINT64_MAX;
	int8_t x848 = INT8_MIN;

    t191 = (x845!=(x846^(x847-x848)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x849 = INT64_MIN;
	int16_t x850 = 35;
	int64_t x851 = INT64_MIN;
	int32_t t192 = -17430;

    t192 = (x849!=(x850^(x851-x852)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x853 = -1;
	int8_t x854 = INT8_MAX;
	int32_t x856 = -1;
	volatile int32_t t193 = -864159;

    t193 = (x853!=(x854^(x855-x856)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x857 = UINT32_MAX;
	int64_t x858 = INT64_MIN;
	int64_t x859 = -1872441LL;
	int64_t x860 = INT64_MIN;
	int32_t t194 = -5;

    t194 = (x857!=(x858^(x859-x860)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x861 = INT32_MAX;
	int16_t x862 = -1;
	static int8_t x863 = 0;
	static int16_t x864 = -1;
	int32_t t195 = -1864933;

    t195 = (x861!=(x862^(x863-x864)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x865 = 1U;
	uint16_t x866 = 562U;
	uint16_t x867 = 836U;
	int64_t x868 = -1LL;

    t196 = (x865!=(x866^(x867-x868)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x869 = -182214223093060316LL;
	int32_t x870 = INT32_MIN;
	static int64_t x872 = -21497LL;

    t197 = (x869!=(x870^(x871-x872)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x874 = 0;
	volatile int8_t x875 = -1;
	volatile int64_t x876 = INT64_MAX;

    t198 = (x873!=(x874^(x875-x876)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x881 = 0U;
	static uint64_t x882 = 4574421936689LLU;
	int32_t x883 = -1;
	static volatile int64_t x884 = -1LL;
	int32_t t199 = -336;

    t199 = (x881!=(x882^(x883-x884)));

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

