
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

int64_t x3 = INT64_MAX;
int64_t x8 = INT64_MIN;
int64_t x9 = INT64_MIN;
static int16_t x14 = -1;
int32_t x16 = INT32_MAX;
static volatile int16_t x20 = INT16_MAX;
uint8_t x26 = 41U;
int32_t x28 = INT32_MIN;
int16_t x30 = 13115;
int32_t t8 = 1971994;
static volatile int32_t t9 = -1093;
int32_t t10 = 7195;
int64_t x55 = -1LL;
int64_t x56 = -1LL;
int8_t x59 = INT8_MIN;
static uint32_t x60 = 542U;
int8_t x64 = INT8_MAX;
int64_t x65 = -3659LL;
static int16_t x68 = INT16_MIN;
uint8_t x70 = 56U;
volatile int8_t x77 = -2;
int64_t x81 = -1LL;
int8_t x90 = INT8_MIN;
uint16_t x98 = 81U;
volatile int32_t t22 = 542;
int32_t x106 = -455919781;
static volatile int32_t t26 = 111430161;
int16_t x121 = INT16_MIN;
int8_t x132 = 3;
volatile int32_t t30 = 1187;
int32_t t31 = -269;
uint8_t x142 = UINT8_MAX;
int16_t x158 = -1;
int8_t x163 = 37;
int8_t x164 = 2;
uint8_t x165 = 10U;
int32_t t37 = 59532458;
volatile uint8_t x171 = UINT8_MAX;
static int16_t x174 = INT16_MIN;
volatile uint8_t x181 = 0U;
uint32_t x185 = UINT32_MAX;
volatile int32_t x193 = INT32_MIN;
static volatile int16_t x196 = 1;
uint32_t x203 = 32542679U;
int16_t x204 = 85;
volatile uint64_t x205 = 826248399LLU;
static int64_t x210 = -1LL;
static int32_t t47 = -7941;
volatile uint64_t x216 = 36623230223810LLU;
uint16_t x217 = 1053U;
uint8_t x219 = 58U;
int32_t x239 = INT32_MIN;
int64_t x245 = -57LL;
int32_t x249 = INT32_MIN;
int64_t x250 = INT64_MIN;
static int16_t x257 = -571;
static volatile int16_t x267 = INT16_MIN;
uint32_t x269 = 93488U;
int32_t x279 = INT32_MIN;
uint64_t x280 = 15510423LLU;
int16_t x281 = -5623;
int64_t x287 = 8434551967994348LL;
static volatile int32_t t64 = -924671;
int8_t x294 = -1;
uint8_t x295 = 0U;
uint32_t x302 = 23U;
volatile int8_t x309 = 1;
int8_t x326 = -1;
int32_t x330 = -125080;
int8_t x338 = 1;
static uint16_t x339 = UINT16_MAX;
uint8_t x342 = 42U;
int32_t t76 = -2201;
int64_t x350 = INT64_MAX;
int8_t x356 = INT8_MAX;
uint64_t x357 = UINT64_MAX;
int16_t x362 = INT16_MIN;
uint8_t x363 = 5U;
int32_t t81 = 124;
int32_t x367 = INT32_MIN;
int32_t t82 = -40846460;
volatile int32_t t83 = 24683;
int32_t t85 = 18983009;
int16_t x382 = -1;
volatile int16_t x390 = -1;
int32_t t88 = -794;
volatile int8_t x393 = INT8_MAX;
uint64_t x395 = 2762474503254367LLU;
int64_t x396 = INT64_MIN;
int8_t x398 = INT8_MIN;
static volatile int32_t t92 = -739258;
uint8_t x420 = UINT8_MAX;
int32_t x432 = INT32_MIN;
static uint8_t x434 = 2U;
int32_t t96 = -31;
uint32_t x437 = UINT32_MAX;
static int32_t x442 = INT32_MIN;
int64_t x449 = 97378554290874288LL;
volatile int16_t x458 = 14;
static volatile uint32_t x459 = 19571666U;
uint8_t x460 = UINT8_MAX;
int32_t x464 = INT32_MIN;
int32_t t103 = 5;
int64_t x465 = INT64_MIN;
volatile int32_t x466 = 48;
volatile int32_t t109 = -303523229;
volatile int16_t x491 = -1;
int32_t t110 = 23;
uint8_t x493 = UINT8_MAX;
static int32_t t111 = 7;
volatile uint32_t x506 = 1384U;
int32_t t113 = 1854;
uint64_t x509 = UINT64_MAX;
static int32_t x510 = INT32_MIN;
int16_t x512 = INT16_MIN;
uint32_t x513 = 2799U;
static int32_t t115 = 3;
int32_t x518 = INT32_MIN;
static int64_t x522 = INT64_MAX;
int16_t x524 = INT16_MIN;
static volatile int8_t x528 = 15;
volatile uint32_t x529 = 27U;
int32_t x531 = -520;
int32_t t119 = -17796562;
int8_t x548 = INT8_MIN;
int32_t x558 = -1;
volatile int32_t t124 = 80394318;
static uint32_t x581 = UINT32_MAX;
volatile int32_t t127 = 25861;
int64_t x588 = -1LL;
static int32_t t128 = 40544663;
volatile int8_t x589 = -1;
int8_t x599 = INT8_MAX;
static int32_t t131 = -1;
static int32_t x614 = -2;
int16_t x615 = INT16_MAX;
static volatile int64_t x616 = -108880LL;
static int32_t x628 = 1486;
int32_t t137 = 2144;
static uint64_t x630 = 516757912612945032LLU;
int32_t t138 = -16522;
static int8_t x638 = INT8_MIN;
volatile int32_t t140 = 27044454;
int32_t x655 = INT32_MAX;
int8_t x665 = -1;
int16_t x676 = INT16_MIN;
volatile int32_t t148 = 20660;
static volatile int32_t x678 = INT32_MAX;
uint8_t x689 = UINT8_MAX;
volatile int32_t t151 = 62790;
int16_t x698 = INT16_MAX;
int32_t x701 = INT32_MIN;
int32_t t155 = -328680;
static int64_t x709 = INT64_MIN;
volatile int32_t t156 = 110;
int64_t x714 = -1LL;
volatile uint32_t x723 = 195U;
volatile int32_t t158 = -2076467;
volatile int32_t t159 = -17429496;
int32_t x730 = INT32_MIN;
volatile int32_t t160 = -6;
int32_t x735 = 172;
volatile int32_t t161 = 8576495;
int8_t x740 = -1;
int64_t x746 = 11917106401993LL;
int64_t x752 = INT64_MIN;
static int8_t x754 = 1;
int16_t x758 = -3;
int8_t x759 = -10;
uint16_t x764 = 10U;
int16_t x772 = INT16_MIN;
int32_t t169 = -4;
int64_t x775 = -1LL;
int8_t x776 = -1;
static int16_t x785 = -1;
int32_t t174 = -236969;
static int64_t x799 = 1LL;
volatile int8_t x814 = -1;
int8_t x819 = 4;
int8_t x820 = INT8_MAX;
int32_t t180 = 329650;
uint32_t x823 = 1U;
volatile int32_t t182 = -2;
static int8_t x830 = INT8_MAX;
static int8_t x831 = INT8_MIN;
static volatile int32_t t183 = 9782;
static volatile int32_t t184 = -20;
static uint64_t x837 = 115LLU;
int32_t t185 = 39093297;
volatile int32_t x848 = -1;
static uint32_t x852 = 1530303U;
int32_t t188 = -426;
uint32_t x855 = 28593801U;
int32_t x860 = 0;
static int8_t x861 = INT8_MAX;
volatile int32_t t191 = 1;
int8_t x874 = INT8_MAX;
int32_t x894 = INT32_MIN;
int64_t x901 = INT64_MIN;
uint32_t x909 = 6U;
static int32_t t199 = -31913;


void f0(void) {
    	int64_t x1 = -116752LL;
	int8_t x2 = -1;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 23161;

    t0 = (x1!=(x2&(x3+x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	volatile int8_t x7 = 1;
	static int32_t t1 = 32228637;

    t1 = (x5!=(x6&(x7+x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	volatile int32_t x11 = 3;
	uint64_t x12 = 371236LLU;
	volatile int32_t t2 = -33359;

    t2 = (x9!=(x10&(x11+x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x15 = 0;
	int32_t t3 = 9901;

    t3 = (x13!=(x14&(x15+x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int16_t x18 = -1;
	uint8_t x19 = 0U;
	int32_t t4 = -108920;

    t4 = (x17!=(x18&(x19+x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1904112123U;
	int16_t x22 = 1;
	int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 140257;

    t5 = (x21!=(x22&(x23+x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	int32_t x27 = 16;
	volatile int32_t t6 = 161484131;

    t6 = (x25!=(x26&(x27+x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	static uint64_t x31 = UINT64_MAX;
	uint16_t x32 = 29U;
	volatile int32_t t7 = -2170;

    t7 = (x29!=(x30&(x31+x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	volatile int64_t x34 = INT64_MIN;
	int32_t x35 = -1;
	static int32_t x36 = -34438502;

    t8 = (x33!=(x34&(x35+x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 20U;
	int8_t x38 = 2;
	volatile int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;

    t9 = (x37!=(x38&(x39+x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = -41;
	static int64_t x42 = INT64_MAX;
	uint16_t x43 = 2095U;
	int16_t x44 = 1;

    t10 = (x41!=(x42&(x43+x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MAX;
	volatile uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 47U;
	int32_t t11 = 524690;

    t11 = (x49!=(x50&(x51+x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MAX;
	int16_t x54 = -1;
	volatile int32_t t12 = 0;

    t12 = (x53!=(x54&(x55+x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -232816;
	int8_t x58 = -6;
	volatile int32_t t13 = 964580848;

    t13 = (x57!=(x58&(x59+x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = 0;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 424U;
	volatile int32_t t14 = 436602070;

    t14 = (x61!=(x62&(x63+x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x66 = 4076U;
	int32_t x67 = -7362680;
	int32_t t15 = -16542995;

    t15 = (x65!=(x66&(x67+x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MAX;
	volatile uint64_t x71 = 1690832628068750LLU;
	uint32_t x72 = 511765663U;
	int32_t t16 = 150140700;

    t16 = (x69!=(x70&(x71+x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = 1;
	volatile int32_t t17 = -16;

    t17 = (x73!=(x74&(x75+x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = -1512;
	static volatile uint8_t x79 = 18U;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = 45608975;

    t18 = (x77!=(x78&(x79+x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = INT8_MAX;
	int8_t x84 = 1;
	volatile int32_t t19 = 2;

    t19 = (x81!=(x82&(x83+x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = 6U;
	int8_t x91 = -1;
	int32_t x92 = -69627;
	volatile int32_t t20 = 7489303;

    t20 = (x89!=(x90&(x91+x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x93 = 68223511169989LLU;
	static int32_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	int64_t x96 = -1LL;
	static int32_t t21 = 1592523;

    t21 = (x93!=(x94&(x95+x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = 7;
	int64_t x99 = INT64_MIN;
	static int64_t x100 = 24579771912LL;

    t22 = (x97!=(x98&(x99+x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -3198;
	static volatile int16_t x102 = -1;
	int16_t x103 = INT16_MIN;
	static volatile int32_t x104 = INT32_MAX;
	volatile int32_t t23 = -5326;

    t23 = (x101!=(x102&(x103+x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x105 = INT32_MIN;
	volatile int32_t x107 = -1;
	static uint32_t x108 = 5375U;
	volatile int32_t t24 = 0;

    t24 = (x105!=(x106&(x107+x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MIN;
	volatile int8_t x111 = INT8_MIN;
	uint16_t x112 = 98U;
	volatile int32_t t25 = -101;

    t25 = (x109!=(x110&(x111+x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = -1;
	int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MAX;
	volatile int32_t x116 = -57158;

    t26 = (x113!=(x114&(x115+x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x117 = INT32_MIN;
	volatile int64_t x118 = INT64_MIN;
	static int32_t x119 = -1;
	static uint64_t x120 = 3261794553371938510LLU;
	volatile int32_t t27 = -1;

    t27 = (x117!=(x118&(x119+x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x122 = 26728101179LL;
	static volatile uint64_t x123 = 7002991803581LLU;
	int64_t x124 = INT64_MIN;
	volatile int32_t t28 = -15840615;

    t28 = (x121!=(x122&(x123+x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	uint64_t x126 = 307LLU;
	int8_t x127 = 1;
	uint64_t x128 = 530238185988LLU;
	volatile int32_t t29 = -121973;

    t29 = (x125!=(x126&(x127+x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	volatile int32_t x130 = -1433834;
	volatile int64_t x131 = -1LL;

    t30 = (x129!=(x130&(x131+x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x133 = -1;
	volatile int16_t x134 = INT16_MIN;
	uint8_t x135 = 1U;
	uint16_t x136 = UINT16_MAX;

    t31 = (x133!=(x134&(x135+x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -1;
	volatile int64_t x138 = -3LL;
	volatile uint32_t x139 = UINT32_MAX;
	int16_t x140 = INT16_MAX;
	volatile int32_t t32 = -159397961;

    t32 = (x137!=(x138&(x139+x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x141 = 50888U;
	volatile int16_t x143 = -1;
	int8_t x144 = -3;
	int32_t t33 = 0;

    t33 = (x141!=(x142&(x143+x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = -1;
	static int64_t x150 = -1LL;
	int8_t x151 = INT8_MIN;
	static uint8_t x152 = 25U;
	volatile int32_t t34 = 1;

    t34 = (x149!=(x150&(x151+x152)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x157 = 192213716715471315LLU;
	static int16_t x159 = 14982;
	volatile int16_t x160 = 1;
	int32_t t35 = -3;

    t35 = (x157!=(x158&(x159+x160)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x161 = 243079U;
	static volatile int32_t x162 = -270948;
	static volatile int32_t t36 = -125373258;

    t36 = (x161!=(x162&(x163+x164)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	volatile int16_t x168 = INT16_MIN;

    t37 = (x165!=(x166&(x167+x168)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MIN;
	uint32_t x170 = 793131432U;
	int16_t x172 = 0;
	volatile int32_t t38 = -125380893;

    t38 = (x169!=(x170&(x171+x172)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x173 = -1;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = 1;
	int32_t t39 = 42211;

    t39 = (x173!=(x174&(x175+x176)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x182 = 437692U;
	int64_t x183 = INT64_MIN;
	int8_t x184 = 1;
	volatile int32_t t40 = -3;

    t40 = (x181!=(x182&(x183+x184)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x186 = -377;
	int64_t x187 = -1LL;
	int16_t x188 = 773;
	volatile int32_t t41 = 1;

    t41 = (x185!=(x186&(x187+x188)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	volatile int64_t x192 = 896428904680166LL;
	volatile int32_t t42 = 42;

    t42 = (x189!=(x190&(x191+x192)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x194 = 62LLU;
	static int8_t x195 = -1;
	volatile int32_t t43 = -171119697;

    t43 = (x193!=(x194&(x195+x196)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x197 = 7668U;
	int64_t x198 = -1LL;
	int32_t x199 = -1;
	uint64_t x200 = 623470365LLU;
	volatile int32_t t44 = 2016965;

    t44 = (x197!=(x198&(x199+x200)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x201 = 19U;
	uint32_t x202 = UINT32_MAX;
	int32_t t45 = -38268;

    t45 = (x201!=(x202&(x203+x204)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	int32_t x208 = -1;
	volatile int32_t t46 = -10492332;

    t46 = (x205!=(x206&(x207+x208)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x209 = INT32_MAX;
	int32_t x211 = -150684112;
	int16_t x212 = -1;

    t47 = (x209!=(x210&(x211+x212)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x213 = -29109715;
	volatile uint8_t x214 = UINT8_MAX;
	static int16_t x215 = 0;
	int32_t t48 = -529;

    t48 = (x213!=(x214&(x215+x216)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x218 = UINT32_MAX;
	int64_t x220 = -41149171380575759LL;
	volatile int32_t t49 = 97955025;

    t49 = (x217!=(x218&(x219+x220)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = -1LL;
	uint64_t x231 = 4770348LLU;
	static uint32_t x232 = UINT32_MAX;
	volatile int32_t t50 = 114108;

    t50 = (x229!=(x230&(x231+x232)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = 130642022;
	int16_t x234 = 41;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	int32_t t51 = -249878379;

    t51 = (x233!=(x234&(x235+x236)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = 544938U;
	int8_t x238 = -1;
	static uint8_t x240 = 6U;
	static volatile int32_t t52 = -3;

    t52 = (x237!=(x238&(x239+x240)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x241 = INT16_MIN;
	static uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 2LLU;
	volatile int16_t x244 = INT16_MIN;
	volatile int32_t t53 = 17260774;

    t53 = (x241!=(x242&(x243+x244)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	static uint32_t x248 = 704271805U;
	volatile int32_t t54 = 108978;

    t54 = (x245!=(x246&(x247+x248)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x251 = -1;
	static uint16_t x252 = 4752U;
	volatile int32_t t55 = 1;

    t55 = (x249!=(x250&(x251+x252)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	int32_t x256 = 0;
	int32_t t56 = -21911;

    t56 = (x253!=(x254&(x255+x256)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x258 = INT8_MIN;
	int16_t x259 = -227;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t57 = -21025;

    t57 = (x257!=(x258&(x259+x260)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = 374448956792543LL;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MAX;
	static int16_t x264 = -4;
	static volatile int32_t t58 = 4497;

    t58 = (x261!=(x262&(x263+x264)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = INT8_MAX;
	static int16_t x266 = INT16_MAX;
	int32_t x268 = -51;
	int32_t t59 = 775177804;

    t59 = (x265!=(x266&(x267+x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x270 = 116462167036028LL;
	uint32_t x271 = 26968U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t60 = 14;

    t60 = (x269!=(x270&(x271+x272)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x273 = 41685949338556LLU;
	uint8_t x274 = 2U;
	int64_t x275 = INT64_MIN;
	static uint64_t x276 = 2181LLU;
	int32_t t61 = -206;

    t61 = (x273!=(x274&(x275+x276)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x277 = INT16_MIN;
	int16_t x278 = -6626;
	volatile int32_t t62 = 6142547;

    t62 = (x277!=(x278&(x279+x280)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x282 = 1;
	static int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;
	volatile int32_t t63 = -553;

    t63 = (x281!=(x282&(x283+x284)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MIN;
	int64_t x286 = -186726994177LL;
	static int16_t x288 = INT16_MIN;

    t64 = (x285!=(x286&(x287+x288)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x293 = 61599224004934731LL;
	volatile uint64_t x296 = UINT64_MAX;
	volatile int32_t t65 = 4895293;

    t65 = (x293!=(x294&(x295+x296)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x297 = 1854159831LLU;
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = -32;
	static volatile int32_t t66 = 5954237;

    t66 = (x297!=(x298&(x299+x300)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x301 = INT64_MAX;
	uint8_t x303 = UINT8_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t67 = 1067;

    t67 = (x301!=(x302&(x303+x304)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MIN;
	static int16_t x307 = -1;
	static int32_t x308 = 1;
	static volatile int32_t t68 = -133154301;

    t68 = (x305!=(x306&(x307+x308)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x310 = -2042;
	int32_t x311 = INT32_MAX;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t69 = 0;

    t69 = (x309!=(x310&(x311+x312)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x317 = UINT32_MAX;
	static int64_t x318 = -1LL;
	volatile int16_t x319 = INT16_MIN;
	static int16_t x320 = INT16_MIN;
	int32_t t70 = -170;

    t70 = (x317!=(x318&(x319+x320)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = 1;
	volatile uint64_t x322 = 282283758LLU;
	volatile uint64_t x323 = UINT64_MAX;
	static int32_t x324 = 5762;
	int32_t t71 = -74;

    t71 = (x321!=(x322&(x323+x324)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x325 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t72 = 2799;

    t72 = (x325!=(x326&(x327+x328)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x331 = 37;
	static volatile int64_t x332 = INT64_MIN;
	volatile int32_t t73 = 335267;

    t73 = (x329!=(x330&(x331+x332)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x333 = INT8_MIN;
	static uint64_t x334 = 943159169LLU;
	uint32_t x335 = 9934570U;
	int32_t x336 = -1;
	volatile int32_t t74 = -930906411;

    t74 = (x333!=(x334&(x335+x336)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t75 = 505768;

    t75 = (x337!=(x338&(x339+x340)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x341 = INT16_MIN;
	uint8_t x343 = UINT8_MAX;
	static volatile uint64_t x344 = 6938022414704LLU;

    t76 = (x341!=(x342&(x343+x344)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x345 = 1;
	int64_t x346 = -1LL;
	int16_t x347 = 159;
	int16_t x348 = INT16_MIN;
	volatile int32_t t77 = 3;

    t77 = (x345!=(x346&(x347+x348)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = INT8_MIN;
	static int64_t x351 = INT64_MIN;
	static int64_t x352 = INT64_MAX;
	int32_t t78 = 26837923;

    t78 = (x349!=(x350&(x351+x352)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x353 = INT64_MIN;
	int32_t x354 = -1;
	int64_t x355 = INT64_MIN;
	volatile int32_t t79 = -427;

    t79 = (x353!=(x354&(x355+x356)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 79;
	static int32_t t80 = -206;

    t80 = (x357!=(x358&(x359+x360)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x361 = -1;
	uint8_t x364 = UINT8_MAX;

    t81 = (x361!=(x362&(x363+x364)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = -1;
	static int64_t x366 = 392336568494LL;
	int64_t x368 = INT64_MAX;

    t82 = (x365!=(x366&(x367+x368)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x369 = 1;
	static int64_t x370 = -307280361859501LL;
	int64_t x371 = -1LL;
	static int64_t x372 = INT64_MAX;

    t83 = (x369!=(x370&(x371+x372)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x373 = 23;
	uint64_t x374 = 23LLU;
	int64_t x375 = 22727371LL;
	uint32_t x376 = 11119U;
	volatile int32_t t84 = -11670;

    t84 = (x373!=(x374&(x375+x376)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x377 = 3646315106LLU;
	static int16_t x378 = INT16_MAX;
	static uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 467U;

    t85 = (x377!=(x378&(x379+x380)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x381 = -1;
	volatile uint32_t x383 = 3979424U;
	uint64_t x384 = 53395734866698LLU;
	int32_t t86 = -7701;

    t86 = (x381!=(x382&(x383+x384)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x385 = 3;
	int64_t x386 = 3LL;
	static volatile int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t87 = 1;

    t87 = (x385!=(x386&(x387+x388)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = INT16_MIN;
	uint16_t x391 = 2U;
	volatile int64_t x392 = INT64_MIN;

    t88 = (x389!=(x390&(x391+x392)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x394 = -1;
	int32_t t89 = 61024;

    t89 = (x393!=(x394&(x395+x396)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x397 = INT64_MIN;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = 836221333670LL;
	int32_t t90 = 11399;

    t90 = (x397!=(x398&(x399+x400)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x405 = INT64_MAX;
	int16_t x406 = INT16_MAX;
	int64_t x407 = -1LL;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t91 = 130430;

    t91 = (x405!=(x406&(x407+x408)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x409 = -93133;
	uint64_t x410 = 1246127262LLU;
	uint16_t x411 = 3U;
	volatile uint16_t x412 = 125U;

    t92 = (x409!=(x410&(x411+x412)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x417 = 1;
	int8_t x418 = INT8_MIN;
	int32_t x419 = -687;
	static int32_t t93 = 75;

    t93 = (x417!=(x418&(x419+x420)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x425 = -1;
	volatile uint32_t x426 = 26128385U;
	volatile int32_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t94 = 0;

    t94 = (x425!=(x426&(x427+x428)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x429 = INT8_MIN;
	volatile int32_t x430 = INT32_MAX;
	uint16_t x431 = 4164U;
	static int32_t t95 = -9;

    t95 = (x429!=(x430&(x431+x432)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x433 = INT8_MAX;
	int8_t x435 = INT8_MAX;
	int8_t x436 = -1;

    t96 = (x433!=(x434&(x435+x436)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x438 = -1;
	volatile int64_t x439 = INT64_MAX;
	int8_t x440 = INT8_MIN;
	volatile int32_t t97 = -25773;

    t97 = (x437!=(x438&(x439+x440)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x441 = 1894754U;
	int8_t x443 = INT8_MAX;
	uint64_t x444 = UINT64_MAX;
	volatile int32_t t98 = 15571192;

    t98 = (x441!=(x442&(x443+x444)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = 34890;
	int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MAX;
	int32_t t99 = -3;

    t99 = (x445!=(x446&(x447+x448)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x450 = 17025777846289LLU;
	volatile int16_t x451 = -1;
	volatile uint8_t x452 = 3U;
	volatile int32_t t100 = -18311;

    t100 = (x449!=(x450&(x451+x452)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	uint64_t x454 = 61483285593638333LLU;
	uint64_t x455 = 316728751371LLU;
	int16_t x456 = 7;
	int32_t t101 = 8256812;

    t101 = (x453!=(x454&(x455+x456)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x457 = 198700LLU;
	int32_t t102 = 24118047;

    t102 = (x457!=(x458&(x459+x460)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	uint32_t x463 = 446139U;

    t103 = (x461!=(x462&(x463+x464)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x467 = 1888847LLU;
	uint16_t x468 = 1U;
	volatile int32_t t104 = 815281;

    t104 = (x465!=(x466&(x467+x468)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x469 = 9U;
	int8_t x470 = INT8_MAX;
	static volatile int8_t x471 = -1;
	volatile int64_t x472 = INT64_MAX;
	volatile int32_t t105 = -60390;

    t105 = (x469!=(x470&(x471+x472)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x473 = 28U;
	int16_t x474 = -4351;
	int16_t x475 = 38;
	static volatile int32_t x476 = INT32_MIN;
	static int32_t t106 = 1;

    t106 = (x473!=(x474&(x475+x476)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint32_t x478 = 5066U;
	int8_t x479 = INT8_MIN;
	static volatile uint16_t x480 = 214U;
	volatile int32_t t107 = 18949;

    t107 = (x477!=(x478&(x479+x480)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x481 = 66144406639030LLU;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MIN;
	static uint64_t x484 = UINT64_MAX;
	volatile int32_t t108 = 58;

    t108 = (x481!=(x482&(x483+x484)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x485 = -6;
	uint16_t x486 = 3136U;
	int8_t x487 = 0;
	uint16_t x488 = UINT16_MAX;

    t109 = (x485!=(x486&(x487+x488)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x489 = UINT8_MAX;
	int16_t x490 = INT16_MIN;
	uint32_t x492 = UINT32_MAX;

    t110 = (x489!=(x490&(x491+x492)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x494 = 1691LLU;
	static volatile int8_t x495 = 1;
	uint8_t x496 = 27U;

    t111 = (x493!=(x494&(x495+x496)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x501 = UINT64_MAX;
	int16_t x502 = 203;
	static volatile uint64_t x503 = 545938125826LLU;
	uint64_t x504 = 19865047921480928LLU;
	int32_t t112 = -14;

    t112 = (x501!=(x502&(x503+x504)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = 0;
	volatile uint8_t x507 = UINT8_MAX;
	static volatile int16_t x508 = 639;

    t113 = (x505!=(x506&(x507+x508)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x511 = UINT8_MAX;
	static volatile int32_t t114 = -1;

    t114 = (x509!=(x510&(x511+x512)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x514 = 764;
	int64_t x515 = -451017579303LL;
	static volatile uint8_t x516 = UINT8_MAX;

    t115 = (x513!=(x514&(x515+x516)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x517 = 6012;
	int8_t x519 = INT8_MIN;
	uint64_t x520 = 35LLU;
	volatile int32_t t116 = 4409759;

    t116 = (x517!=(x518&(x519+x520)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x521 = INT8_MAX;
	uint32_t x523 = UINT32_MAX;
	int32_t t117 = -10;

    t117 = (x521!=(x522&(x523+x524)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x525 = 37LLU;
	uint8_t x526 = UINT8_MAX;
	int8_t x527 = -1;
	static volatile int32_t t118 = 116748811;

    t118 = (x525!=(x526&(x527+x528)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x530 = INT64_MIN;
	int64_t x532 = INT64_MAX;

    t119 = (x529!=(x530&(x531+x532)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x533 = INT64_MIN;
	uint64_t x534 = 1158847LLU;
	int8_t x535 = -1;
	int32_t x536 = -2533146;
	int32_t t120 = -3890;

    t120 = (x533!=(x534&(x535+x536)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x545 = INT16_MAX;
	static volatile uint16_t x546 = 988U;
	volatile int8_t x547 = -1;
	static int32_t t121 = 2040868;

    t121 = (x545!=(x546&(x547+x548)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x553 = 103714930576LL;
	uint16_t x554 = 6U;
	static uint8_t x555 = 7U;
	static int64_t x556 = -1LL;
	static volatile int32_t t122 = 326750627;

    t122 = (x553!=(x554&(x555+x556)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x557 = UINT16_MAX;
	volatile int8_t x559 = INT8_MIN;
	uint16_t x560 = UINT16_MAX;
	int32_t t123 = 0;

    t123 = (x557!=(x558&(x559+x560)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x561 = INT64_MIN;
	int64_t x562 = INT64_MIN;
	int16_t x563 = 115;
	int32_t x564 = 148;

    t124 = (x561!=(x562&(x563+x564)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = INT8_MIN;
	int32_t x575 = -29968327;
	volatile int8_t x576 = -6;
	volatile int32_t t125 = 1914;

    t125 = (x573!=(x574&(x575+x576)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x577 = INT32_MIN;
	static int16_t x578 = INT16_MAX;
	volatile int16_t x579 = 1;
	static uint8_t x580 = 1U;
	static volatile int32_t t126 = -4;

    t126 = (x577!=(x578&(x579+x580)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x582 = INT8_MIN;
	uint16_t x583 = UINT16_MAX;
	static int16_t x584 = INT16_MIN;

    t127 = (x581!=(x582&(x583+x584)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x585 = INT8_MIN;
	static int64_t x586 = INT64_MIN;
	int16_t x587 = -574;

    t128 = (x585!=(x586&(x587+x588)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x590 = 12U;
	static int32_t x591 = 25284;
	volatile int64_t x592 = 293379890531LL;
	volatile int32_t t129 = 7;

    t129 = (x589!=(x590&(x591+x592)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x593 = -1;
	static uint16_t x594 = UINT16_MAX;
	volatile int32_t x595 = 16930231;
	uint8_t x596 = 64U;
	static int32_t t130 = 0;

    t130 = (x593!=(x594&(x595+x596)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x597 = INT32_MAX;
	int8_t x598 = -1;
	static volatile int8_t x600 = -1;

    t131 = (x597!=(x598&(x599+x600)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x601 = -1LL;
	uint64_t x602 = 221736LLU;
	int16_t x603 = -94;
	int16_t x604 = INT16_MIN;
	volatile int32_t t132 = 1073497204;

    t132 = (x601!=(x602&(x603+x604)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x605 = UINT32_MAX;
	int32_t x606 = INT32_MIN;
	static uint32_t x607 = 2U;
	int16_t x608 = 3;
	int32_t t133 = -486;

    t133 = (x605!=(x606&(x607+x608)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x613 = INT16_MIN;
	volatile int32_t t134 = 948;

    t134 = (x613!=(x614&(x615+x616)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x617 = INT8_MIN;
	static int16_t x618 = -1;
	int8_t x619 = -1;
	static uint64_t x620 = 26410828740276162LLU;
	volatile int32_t t135 = 373736754;

    t135 = (x617!=(x618&(x619+x620)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x621 = -1;
	int32_t x622 = INT32_MIN;
	static int16_t x623 = -1;
	int64_t x624 = 6384276883LL;
	int32_t t136 = -98600393;

    t136 = (x621!=(x622&(x623+x624)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x625 = 1U;
	int8_t x626 = -1;
	static int16_t x627 = INT16_MIN;

    t137 = (x625!=(x626&(x627+x628)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x629 = 8U;
	uint16_t x631 = 585U;
	int32_t x632 = INT32_MIN;

    t138 = (x629!=(x630&(x631+x632)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x633 = 0;
	uint8_t x634 = UINT8_MAX;
	int32_t x635 = -1;
	uint8_t x636 = 1U;
	volatile int32_t t139 = -75;

    t139 = (x633!=(x634&(x635+x636)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = INT32_MAX;
	volatile int8_t x639 = INT8_MIN;
	uint16_t x640 = 1760U;

    t140 = (x637!=(x638&(x639+x640)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x641 = 1;
	static volatile uint16_t x642 = UINT16_MAX;
	int8_t x643 = INT8_MAX;
	static int32_t x644 = -1;
	int32_t t141 = -48;

    t141 = (x641!=(x642&(x643+x644)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = -1;
	int64_t x646 = INT64_MIN;
	static volatile int16_t x647 = 1;
	int16_t x648 = -1;
	volatile int32_t t142 = -12;

    t142 = (x645!=(x646&(x647+x648)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x649 = 17507010226556037LL;
	int64_t x650 = INT64_MAX;
	int8_t x651 = INT8_MIN;
	int32_t x652 = -1;
	volatile int32_t t143 = -122140348;

    t143 = (x649!=(x650&(x651+x652)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x653 = 349;
	int8_t x654 = INT8_MAX;
	int32_t x656 = -45;
	int32_t t144 = -3119;

    t144 = (x653!=(x654&(x655+x656)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x657 = 9U;
	volatile uint8_t x658 = UINT8_MAX;
	volatile int8_t x659 = INT8_MIN;
	int64_t x660 = INT64_MAX;
	static volatile int32_t t145 = 31823;

    t145 = (x657!=(x658&(x659+x660)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x666 = -1;
	int8_t x667 = INT8_MAX;
	int32_t x668 = INT32_MIN;
	volatile int32_t t146 = 963;

    t146 = (x665!=(x666&(x667+x668)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x669 = INT32_MIN;
	int64_t x670 = INT64_MIN;
	uint64_t x671 = 2733LLU;
	int32_t x672 = 2331;
	volatile int32_t t147 = -32489;

    t147 = (x669!=(x670&(x671+x672)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x673 = 50;
	int64_t x674 = INT64_MAX;
	int32_t x675 = -1;

    t148 = (x673!=(x674&(x675+x676)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x677 = 12166U;
	volatile uint32_t x679 = UINT32_MAX;
	int64_t x680 = INT64_MIN;
	int32_t t149 = 412;

    t149 = (x677!=(x678&(x679+x680)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x681 = UINT16_MAX;
	static volatile int64_t x682 = INT64_MAX;
	volatile int8_t x683 = -23;
	int64_t x684 = 1LL;
	int32_t t150 = -460404653;

    t150 = (x681!=(x682&(x683+x684)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x690 = UINT32_MAX;
	volatile uint64_t x691 = 9171984771443LLU;
	uint8_t x692 = 2U;

    t151 = (x689!=(x690&(x691+x692)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x693 = 1725U;
	int8_t x694 = INT8_MIN;
	int32_t x695 = INT32_MAX;
	int32_t x696 = INT32_MIN;
	volatile int32_t t152 = -32584370;

    t152 = (x693!=(x694&(x695+x696)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x697 = INT64_MIN;
	static uint32_t x699 = 1051622U;
	int8_t x700 = -20;
	static volatile int32_t t153 = 35;

    t153 = (x697!=(x698&(x699+x700)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x702 = INT32_MIN;
	int8_t x703 = -1;
	volatile int8_t x704 = INT8_MIN;
	volatile int32_t t154 = -46924379;

    t154 = (x701!=(x702&(x703+x704)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x705 = 1825269863620LLU;
	uint16_t x706 = 51U;
	int64_t x707 = -1LL;
	static int8_t x708 = INT8_MAX;

    t155 = (x705!=(x706&(x707+x708)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x710 = INT32_MIN;
	int16_t x711 = 48;
	uint16_t x712 = 15399U;

    t156 = (x709!=(x710&(x711+x712)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x713 = UINT16_MAX;
	uint64_t x715 = UINT64_MAX;
	volatile int32_t x716 = INT32_MAX;
	static int32_t t157 = 4487393;

    t157 = (x713!=(x714&(x715+x716)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x721 = INT64_MAX;
	int64_t x722 = INT64_MAX;
	uint16_t x724 = 19648U;

    t158 = (x721!=(x722&(x723+x724)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x725 = 15;
	uint16_t x726 = 45U;
	int8_t x727 = 0;
	int64_t x728 = -1749099939LL;

    t159 = (x725!=(x726&(x727+x728)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x729 = -1;
	uint16_t x731 = UINT16_MAX;
	int64_t x732 = -1LL;

    t160 = (x729!=(x730&(x731+x732)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x733 = 743LLU;
	int32_t x734 = -5353;
	int32_t x736 = -8138;

    t161 = (x733!=(x734&(x735+x736)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x737 = INT32_MIN;
	volatile int64_t x738 = -1LL;
	static int8_t x739 = 5;
	volatile int32_t t162 = -2618170;

    t162 = (x737!=(x738&(x739+x740)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x741 = 8014;
	int8_t x742 = 2;
	static uint16_t x743 = UINT16_MAX;
	volatile uint32_t x744 = 6602U;
	int32_t t163 = 379;

    t163 = (x741!=(x742&(x743+x744)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x747 = 44246430447269119LL;
	int64_t x748 = INT64_MIN;
	int32_t t164 = -146807618;

    t164 = (x745!=(x746&(x747+x748)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MIN;
	int64_t x751 = 3808977642270322LL;
	int32_t t165 = -270017518;

    t165 = (x749!=(x750&(x751+x752)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x753 = INT32_MAX;
	volatile int64_t x755 = INT64_MIN;
	uint64_t x756 = 48195311946274LLU;
	int32_t t166 = -393983766;

    t166 = (x753!=(x754&(x755+x756)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x757 = 2105361399LLU;
	static volatile int32_t x760 = INT32_MAX;
	volatile int32_t t167 = -151342;

    t167 = (x757!=(x758&(x759+x760)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x761 = INT8_MIN;
	volatile int64_t x762 = -14800398261995LL;
	int16_t x763 = -2334;
	int32_t t168 = -3718799;

    t168 = (x761!=(x762&(x763+x764)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x769 = 8860598482275LL;
	uint64_t x770 = 29LLU;
	int8_t x771 = INT8_MAX;

    t169 = (x769!=(x770&(x771+x772)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x773 = INT8_MAX;
	volatile int8_t x774 = INT8_MAX;
	volatile int32_t t170 = 1162125;

    t170 = (x773!=(x774&(x775+x776)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x781 = -393887292717LL;
	volatile uint32_t x782 = 1699555U;
	int32_t x783 = INT32_MIN;
	uint8_t x784 = 5U;
	volatile int32_t t171 = 982370147;

    t171 = (x781!=(x782&(x783+x784)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x786 = -11;
	int8_t x787 = INT8_MIN;
	int32_t x788 = 262855565;
	int32_t t172 = 1014;

    t172 = (x785!=(x786&(x787+x788)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x789 = 61U;
	int32_t x790 = INT32_MAX;
	static int32_t x791 = -2;
	uint64_t x792 = 35094886LLU;
	int32_t t173 = -78;

    t173 = (x789!=(x790&(x791+x792)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x793 = -1;
	static int32_t x794 = -3;
	int32_t x795 = 26179;
	static volatile int8_t x796 = INT8_MIN;

    t174 = (x793!=(x794&(x795+x796)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x797 = INT8_MIN;
	static int32_t x798 = INT32_MIN;
	static int16_t x800 = INT16_MAX;
	int32_t t175 = 121700;

    t175 = (x797!=(x798&(x799+x800)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x801 = INT64_MIN;
	uint64_t x802 = UINT64_MAX;
	uint16_t x803 = UINT16_MAX;
	uint8_t x804 = 29U;
	static int32_t t176 = 3114;

    t176 = (x801!=(x802&(x803+x804)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x805 = 2U;
	int64_t x806 = 4348042633LL;
	uint32_t x807 = 15539U;
	volatile uint8_t x808 = 1U;
	static int32_t t177 = -2;

    t177 = (x805!=(x806&(x807+x808)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x809 = INT32_MIN;
	uint32_t x810 = 1002625U;
	volatile uint64_t x811 = UINT64_MAX;
	volatile int64_t x812 = -1LL;
	static volatile int32_t t178 = 2416;

    t178 = (x809!=(x810&(x811+x812)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x813 = 941560LL;
	int64_t x815 = 981490LL;
	int16_t x816 = 168;
	volatile int32_t t179 = 5;

    t179 = (x813!=(x814&(x815+x816)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x817 = INT16_MIN;
	static uint64_t x818 = UINT64_MAX;

    t180 = (x817!=(x818&(x819+x820)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x821 = -94038LL;
	static int16_t x822 = INT16_MIN;
	volatile int32_t x824 = INT32_MAX;
	volatile int32_t t181 = 3025;

    t181 = (x821!=(x822&(x823+x824)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x825 = -37;
	uint8_t x826 = UINT8_MAX;
	static uint32_t x827 = UINT32_MAX;
	uint32_t x828 = 2624U;

    t182 = (x825!=(x826&(x827+x828)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x829 = 12U;
	int32_t x832 = -3554762;

    t183 = (x829!=(x830&(x831+x832)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x833 = -34LL;
	static int32_t x834 = INT32_MIN;
	int16_t x835 = -1;
	int16_t x836 = INT16_MIN;

    t184 = (x833!=(x834&(x835+x836)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x838 = INT32_MAX;
	uint64_t x839 = UINT64_MAX;
	volatile int64_t x840 = INT64_MIN;

    t185 = (x837!=(x838&(x839+x840)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x841 = INT8_MIN;
	volatile int16_t x842 = INT16_MIN;
	volatile int32_t x843 = INT32_MIN;
	volatile int64_t x844 = 7097368133957LL;
	volatile int32_t t186 = 333;

    t186 = (x841!=(x842&(x843+x844)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x845 = 0U;
	int8_t x846 = 62;
	uint16_t x847 = 1U;
	static volatile int32_t t187 = 4061318;

    t187 = (x845!=(x846&(x847+x848)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x849 = 444LLU;
	int32_t x850 = -70;
	int16_t x851 = INT16_MIN;

    t188 = (x849!=(x850&(x851+x852)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x853 = -15546LL;
	static volatile uint64_t x854 = UINT64_MAX;
	uint16_t x856 = 8156U;
	int32_t t189 = -32604526;

    t189 = (x853!=(x854&(x855+x856)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x857 = INT8_MIN;
	volatile int8_t x858 = -1;
	volatile uint64_t x859 = UINT64_MAX;
	int32_t t190 = -9606187;

    t190 = (x857!=(x858&(x859+x860)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x862 = INT32_MIN;
	uint16_t x863 = 56U;
	int64_t x864 = 591LL;

    t191 = (x861!=(x862&(x863+x864)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = INT8_MIN;
	static uint32_t x870 = 313427U;
	volatile int64_t x871 = INT64_MAX;
	static int64_t x872 = -1LL;
	volatile int32_t t192 = 51;

    t192 = (x869!=(x870&(x871+x872)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x873 = INT64_MIN;
	int64_t x875 = 805634943266939LL;
	static int32_t x876 = -1;
	volatile int32_t t193 = -271;

    t193 = (x873!=(x874&(x875+x876)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x881 = 24446U;
	int64_t x882 = 3203624597507064LL;
	uint32_t x883 = 224583U;
	static uint16_t x884 = UINT16_MAX;
	volatile int32_t t194 = -228;

    t194 = (x881!=(x882&(x883+x884)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x893 = -3925;
	static int64_t x895 = INT64_MAX;
	int16_t x896 = INT16_MIN;
	volatile int32_t t195 = -157527;

    t195 = (x893!=(x894&(x895+x896)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x897 = INT32_MAX;
	uint32_t x898 = 5734U;
	int64_t x899 = INT64_MAX;
	int32_t x900 = -158410287;
	volatile int32_t t196 = 92313038;

    t196 = (x897!=(x898&(x899+x900)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x902 = 41;
	int8_t x903 = 0;
	volatile uint32_t x904 = UINT32_MAX;
	int32_t t197 = -1;

    t197 = (x901!=(x902&(x903+x904)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x910 = INT64_MIN;
	volatile int64_t x911 = -1LL;
	int32_t x912 = -6934;
	volatile int32_t t198 = 5365;

    t198 = (x909!=(x910&(x911+x912)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x913 = 4158776127023182902LLU;
	uint16_t x914 = UINT16_MAX;
	int64_t x915 = -1LL;
	static int32_t x916 = 486346;

    t199 = (x913!=(x914&(x915+x916)));

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

