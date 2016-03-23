
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

static int32_t x2 = -6587151;
int8_t x6 = INT8_MAX;
static int64_t x9 = INT64_MAX;
static uint8_t x14 = 6U;
uint8_t x15 = UINT8_MAX;
int8_t x23 = -1;
int8_t x27 = -1;
volatile int32_t t6 = 29;
static int64_t x30 = INT64_MIN;
int16_t x34 = -1;
int64_t x48 = INT64_MIN;
uint64_t x51 = 48941201LLU;
int16_t x52 = -1;
int32_t x53 = 4145920;
int32_t x55 = INT32_MIN;
int16_t x56 = INT16_MIN;
volatile int64_t t15 = INT64_MIN;
int64_t x69 = INT64_MIN;
int8_t x72 = -2;
uint32_t x73 = UINT32_MAX;
volatile int16_t x77 = INT16_MIN;
int8_t x80 = 0;
int32_t x85 = INT32_MIN;
volatile int64_t x88 = 438557704652LL;
uint64_t x91 = 23054LLU;
volatile uint64_t t22 = 114438590686LLU;
int16_t x94 = -1;
int8_t x103 = -1;
int16_t x113 = INT16_MAX;
uint16_t x123 = 61U;
uint8_t x126 = 54U;
int64_t x133 = INT64_MAX;
int8_t x140 = INT8_MIN;
volatile uint8_t x144 = 3U;
int64_t x151 = -1LL;
int32_t x153 = -7;
int16_t x163 = 1;
int16_t x165 = INT16_MIN;
static int64_t x168 = -1LL;
uint32_t t43 = 155U;
volatile int32_t t45 = 51483;
int16_t x188 = INT16_MIN;
uint16_t x199 = 38U;
static int8_t x200 = INT8_MIN;
int8_t x202 = -1;
uint32_t t53 = UINT32_MAX;
int8_t x226 = 5;
int32_t x227 = INT32_MIN;
int64_t x228 = INT64_MAX;
int64_t t55 = 3185160344277LL;
volatile int16_t x235 = INT16_MIN;
volatile int32_t x241 = INT32_MIN;
int64_t x254 = INT64_MIN;
uint32_t x258 = 288U;
uint32_t x260 = UINT32_MAX;
int8_t x265 = -1;
int16_t x272 = INT16_MAX;
uint64_t x273 = 199715032724567074LLU;
uint64_t x275 = 63199707657069336LLU;
int32_t x279 = -1;
int64_t t67 = -1233LL;
volatile uint64_t t68 = 1100951890760LLU;
int8_t x286 = INT8_MIN;
static uint16_t x292 = 24719U;
static int8_t x295 = INT8_MIN;
volatile uint32_t t71 = 445045U;
static volatile uint64_t t72 = 16044LLU;
volatile uint32_t x303 = UINT32_MAX;
volatile uint64_t t73 = 145247096148564557LLU;
int8_t x313 = 0;
int8_t x319 = INT8_MIN;
volatile int64_t t76 = INT64_MAX;
static int32_t t77 = 61;
int16_t x330 = -1;
int64_t x331 = INT64_MAX;
int8_t x332 = 5;
volatile int64_t t79 = -593LL;
int8_t x337 = 9;
volatile uint8_t x339 = 31U;
int32_t x341 = 318843;
uint8_t x346 = 2U;
uint64_t x351 = 57123146432LLU;
volatile int32_t x355 = -1;
int8_t x358 = -1;
int64_t x361 = INT64_MAX;
volatile int64_t t87 = -24692972821553LL;
int64_t x368 = INT64_MIN;
volatile int64_t x375 = INT64_MIN;
volatile int16_t x376 = -1;
int32_t x377 = -1;
volatile int8_t x379 = -29;
uint16_t x380 = UINT16_MAX;
static volatile int32_t t92 = 8926450;
static int8_t x391 = -3;
static uint8_t x392 = 0U;
int8_t x398 = INT8_MAX;
int32_t x401 = -1;
int64_t x407 = -1LL;
static volatile uint16_t x414 = UINT16_MAX;
uint16_t x421 = 1021U;
volatile int16_t x428 = 10865;
static uint32_t t104 = 2108169U;
uint32_t t105 = 5542539U;
volatile uint64_t t106 = 2905LLU;
static int16_t x443 = -102;
int32_t x446 = -1;
int32_t x457 = -20;
static int64_t t111 = 44261066855209419LL;
int64_t x461 = 26305030LL;
int32_t x467 = INT32_MAX;
static volatile int8_t x472 = -26;
volatile int32_t t114 = -402;
static int8_t x476 = INT8_MIN;
uint64_t x478 = UINT64_MAX;
static uint8_t x483 = 7U;
volatile uint64_t t118 = 6761677549476LLU;
uint8_t x490 = UINT8_MAX;
volatile uint64_t x493 = 11249141361125LLU;
int8_t x497 = 0;
int16_t x501 = INT16_MAX;
int8_t x502 = INT8_MIN;
volatile uint32_t t122 = 4472U;
static uint64_t x506 = UINT64_MAX;
int64_t x512 = -1834033582LL;
int64_t t124 = -21707615730LL;
int8_t x516 = INT8_MIN;
static uint8_t x525 = 0U;
int64_t x527 = 100029053LL;
static int64_t x528 = INT64_MIN;
int16_t x545 = -1;
uint64_t x550 = 13873982LLU;
static volatile int64_t x554 = -1LL;
int64_t t136 = -152280249LL;
int64_t x565 = 195145061093LL;
static uint64_t x567 = UINT64_MAX;
volatile uint8_t x569 = UINT8_MAX;
uint32_t x574 = 808963175U;
uint64_t x576 = 40987LLU;
volatile uint64_t t139 = 490131187137LLU;
static int8_t x580 = 6;
int32_t x591 = -70347;
static int8_t x594 = -1;
int32_t t144 = 14264558;
int32_t x597 = -122735846;
int64_t x599 = -48429483563LL;
volatile int64_t t145 = -6741LL;
int32_t x601 = -1;
volatile uint64_t t147 = 11895785449562LLU;
uint32_t t150 = 205889U;
volatile int64_t x634 = INT64_MIN;
volatile uint64_t t153 = 48LLU;
int16_t x637 = -8336;
int8_t x638 = INT8_MIN;
uint64_t x642 = 4152716904534578LLU;
int64_t x643 = INT64_MIN;
int64_t x644 = -4900353738367359LL;
volatile int64_t x648 = INT64_MIN;
uint64_t t156 = 4069469LLU;
uint8_t x650 = 0U;
int64_t x661 = INT64_MAX;
uint16_t x662 = 0U;
volatile int32_t x673 = -205;
int32_t t162 = -11106138;
static int8_t x677 = -29;
uint64_t x686 = 2036332855284370LLU;
uint8_t x690 = UINT8_MAX;
int32_t t166 = -453;
static int32_t x708 = -1;
int64_t x710 = 27154271167LL;
int64_t x711 = INT64_MAX;
volatile int16_t x718 = -1;
int32_t t176 = -52818;
int8_t x743 = -1;
static volatile uint16_t x746 = UINT16_MAX;
static volatile uint16_t x747 = 15U;
uint32_t x757 = 1123851U;
int32_t x760 = -14915886;
volatile int16_t x766 = 165;
uint8_t x770 = UINT8_MAX;
volatile int32_t x774 = INT32_MIN;
static int64_t x780 = INT64_MIN;
volatile int64_t t189 = INT64_MAX;
volatile uint64_t t190 = 2052556058513768176LLU;
int32_t x799 = 16757071;
volatile uint64_t t191 = 126065775700989LLU;
volatile int8_t x801 = INT8_MIN;
volatile uint32_t x802 = UINT32_MAX;
int8_t x805 = -4;
static uint32_t x808 = 31544U;
int8_t x812 = 0;
uint32_t x819 = 7U;
static int8_t x821 = INT8_MIN;
static int64_t t198 = -67023965LL;
static int32_t x832 = INT32_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	static int64_t t0 = -104833030042894664LL;

    t0 = ((x1&(x2^x3))+x4);

    if (t0 != -9223372036848157568LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -116019LL;
	int64_t x7 = INT64_MIN;
	int32_t x8 = 372413115;
	int64_t t1 = -34386116607543404LL;

    t1 = ((x5&(x6^x7))+x8);

    if (t1 != -9223372036482362616LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MAX;
	static uint64_t x11 = UINT64_MAX;
	static volatile int64_t x12 = INT64_MIN;
	uint64_t t2 = 220703997111535000LLU;

    t2 = ((x9&(x10^x11))+x12);

    if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	static int16_t x16 = -1;
	volatile int32_t t3 = 1;

    t3 = ((x13&(x14^x15))+x16);

    if (t3 != 248) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 11LL;
	int8_t x18 = INT8_MAX;
	int64_t x19 = 9505083170253321LL;
	uint64_t x20 = 981980LLU;
	uint64_t t4 = 46738758598LLU;

    t4 = ((x17&(x18^x19))+x20);

    if (t4 != 981982LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	static int8_t x22 = 14;
	uint8_t x24 = 0U;
	volatile uint64_t t5 = 12319766335565LLU;

    t5 = ((x21&(x22^x23))+x24);

    if (t5 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MIN;
	static uint8_t x28 = UINT8_MAX;

    t6 = ((x25&(x26^x27))+x28);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -14620695961699688LL;
	int8_t x31 = INT8_MIN;
	static int16_t x32 = -1;
	volatile int64_t t7 = -12925615528LL;

    t7 = ((x29&(x30^x31))+x32);

    if (t7 != 9208751340893076095LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -14;
	static int32_t x35 = 15;
	int32_t x36 = 1;
	volatile int32_t t8 = 112940;

    t8 = ((x33&(x34^x35))+x36);

    if (t8 != -15) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static int32_t x38 = 90;
	uint32_t x39 = 108U;
	int16_t x40 = -3959;
	static uint32_t t9 = 5U;

    t9 = ((x37&(x38^x39))+x40);

    if (t9 != 4294963337U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 1;
	int8_t x42 = -1;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = -70920259LL;
	volatile int64_t t10 = -11447368063693077LL;

    t10 = ((x41&(x42^x43))+x44);

    if (t10 != -70920258LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	volatile int16_t x46 = -1;
	static int64_t x47 = INT64_MIN;
	volatile int64_t t11 = 519120949LL;

    t11 = ((x45&(x46^x47))+x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -21;
	int32_t x50 = -1;
	volatile uint64_t t12 = 1314151257596LLU;

    t12 = ((x49&(x50^x51))+x52);

    if (t12 != 18446744073660610409LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -145092398LL;
	static volatile int64_t t13 = -3LL;

    t13 = ((x53&(x54^x55))+x56);

    if (t13 != 1671168LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int64_t x58 = -100960592LL;
	static int16_t x59 = -1;
	uint64_t x60 = 7336390679LLU;
	uint64_t t14 = 14912LLU;

    t14 = ((x57&(x58^x59))+x60);

    if (t14 != 7437348887LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	int64_t x64 = INT64_MIN;

    t15 = ((x61&(x62^x63))+x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static uint16_t x66 = 11162U;
	volatile uint16_t x67 = UINT16_MAX;
	int64_t x68 = 99937247784016404LL;
	int64_t t16 = 20182LL;

    t16 = ((x65&(x66^x67))+x68);

    if (t16 != 99937247784070676LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x70 = 20812316156120LLU;
	static volatile uint8_t x71 = 52U;
	static volatile uint64_t t17 = 1742677LLU;

    t17 = ((x69&(x70^x71))+x72);

    if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 119U;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t18 = 8522LLU;

    t18 = ((x73&(x74^x75))+x76);

    if (t18 != 4294967303LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x78 = INT16_MAX;
	static uint8_t x79 = UINT8_MAX;
	static volatile int32_t t19 = -13659;

    t19 = ((x77&(x78^x79))+x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 8U;
	static int32_t x82 = INT32_MIN;
	int32_t x83 = 918;
	int32_t x84 = -81217989;
	static volatile int32_t t20 = 231;

    t20 = ((x81&(x82^x83))+x84);

    if (t20 != -81217989) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x86 = 8U;
	static int16_t x87 = -1;
	int64_t t21 = 27688120025952LL;

    t21 = ((x85&(x86^x87))+x88);

    if (t21 != 440705188300LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	uint8_t x90 = 103U;
	uint32_t x92 = UINT32_MAX;

    t22 = ((x89&(x90^x91))+x92);

    if (t22 != 4294967400LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 13;
	int64_t x95 = 454337298343LL;
	int32_t x96 = 93984;
	int64_t t23 = -2848231629LL;

    t23 = ((x93&(x94^x95))+x96);

    if (t23 != 93992LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -819;
	static int8_t x98 = INT8_MAX;
	volatile int64_t x99 = INT64_MAX;
	static int32_t x100 = -1;
	int64_t t24 = -11870691679LL;

    t24 = ((x97&(x98^x99))+x100);

    if (t24 != 9223372036854774911LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static int64_t x102 = INT64_MIN;
	volatile int8_t x104 = -14;
	static volatile int64_t t25 = -107808761201368LL;

    t25 = ((x101&(x102^x103))+x104);

    if (t25 != -14LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	uint64_t x106 = 43253955LLU;
	static int8_t x107 = INT8_MAX;
	int8_t x108 = -1;
	volatile uint64_t t26 = 9218148982LLU;

    t26 = ((x105&(x106^x107))+x108);

    if (t26 != 59LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	int32_t x110 = -478936;
	volatile int32_t x111 = -132777;
	uint32_t x112 = 799715200U;
	volatile uint32_t t27 = 239835463U;

    t27 = ((x109&(x110^x111))+x112);

    if (t27 != 800042880U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x114 = 148168419U;
	static int32_t x115 = 2;
	int8_t x116 = 4;
	volatile uint32_t t28 = 254U;

    t28 = ((x113&(x114^x115))+x116);

    if (t28 != 24293U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = 7943413965712LL;
	static int32_t x118 = -7681;
	int16_t x119 = INT16_MIN;
	int32_t x120 = -392246658;
	int64_t t29 = 828391LL;

    t29 = ((x117&(x118^x119))+x120);

    if (t29 != -392238066LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = -12;
	static int16_t x122 = INT16_MAX;
	static int32_t x124 = -1;
	int32_t t30 = -254;

    t30 = ((x121&(x122^x123))+x124);

    if (t30 != 32703) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	int64_t x127 = INT64_MIN;
	int32_t x128 = -1;
	static volatile int64_t t31 = 13226578616798LL;

    t31 = ((x125&(x126^x127))+x128);

    if (t31 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MIN;
	uint16_t x130 = 494U;
	volatile int8_t x131 = -1;
	int64_t x132 = INT64_MAX;
	int64_t t32 = 267810318354LL;

    t32 = ((x129&(x130^x131))+x132);

    if (t32 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x134 = UINT32_MAX;
	static int16_t x135 = -1;
	int8_t x136 = 1;
	static volatile int64_t t33 = 31741LL;

    t33 = ((x133&(x134^x135))+x136);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	int32_t x138 = -1;
	uint64_t x139 = 246LLU;
	volatile uint64_t t34 = 21LLU;

    t34 = ((x137&(x138^x139))+x140);

    if (t34 != 2147483273LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int16_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	uint32_t t35 = 664548656U;

    t35 = ((x141&(x142^x143))+x144);

    if (t35 != 3U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 606165569115867LL;
	int32_t x146 = 119;
	static uint8_t x147 = 20U;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -124905944LL;

    t36 = ((x145&(x146^x147))+x148);

    if (t36 != 66LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	static uint8_t x152 = UINT8_MAX;
	volatile int64_t t37 = -3925315748787535LL;

    t37 = ((x149&(x150^x151))+x152);

    if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -1464;
	uint8_t x155 = 25U;
	static int8_t x156 = -1;
	static int32_t t38 = 131;

    t38 = ((x153&(x154^x155))+x156);

    if (t38 != -1456) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = 6;
	static int8_t x158 = INT8_MIN;
	static int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	int64_t t39 = -260737498534778LL;

    t39 = ((x157&(x158^x159))+x160);

    if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1LL;
	uint64_t x162 = 3585744458833921LLU;
	int32_t x164 = 6;
	volatile uint64_t t40 = 4LLU;

    t40 = ((x161&(x162^x163))+x164);

    if (t40 != 3585744458833926LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x166 = 2665513019LLU;
	uint16_t x167 = 12U;
	static uint64_t t41 = 14353821725LLU;

    t41 = ((x165&(x166^x167))+x168);

    if (t41 != 2665512959LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = 4757610U;
	volatile int8_t x172 = INT8_MIN;
	uint32_t t42 = 5748U;

    t42 = ((x169&(x170^x171))+x172);

    if (t42 != 4290209642U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int32_t x174 = -9802943;
	uint32_t x175 = 374906U;
	int8_t x176 = -1;

    t43 = ((x173&(x174^x175))+x176);

    if (t43 != 4285497343U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	uint16_t x178 = 238U;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = -1;
	volatile int32_t t44 = 705353;

    t44 = ((x177&(x178^x179))+x180);

    if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 1;
	int16_t x182 = INT16_MIN;
	int32_t x183 = 18098520;
	volatile uint8_t x184 = 0U;

    t45 = ((x181&(x182^x183))+x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	int16_t x186 = 788;
	static volatile int8_t x187 = -1;
	volatile int32_t t46 = 125772;

    t46 = ((x185&(x186^x187))+x188);

    if (t46 != -789) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	int64_t x190 = 1760036405642LL;
	volatile int8_t x191 = INT8_MIN;
	int8_t x192 = -1;
	volatile int64_t t47 = -33819617744LL;

    t47 = ((x189&(x190^x191))+x192);

    if (t47 != 15881LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = -1;
	static volatile uint64_t x195 = UINT64_MAX;
	int32_t x196 = 215311881;
	uint64_t t48 = 18908255271LLU;

    t48 = ((x193&(x194^x195))+x196);

    if (t48 != 215311881LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	static volatile int64_t x198 = INT64_MAX;
	int64_t t49 = -495576LL;

    t49 = ((x197&(x198^x199))+x200);

    if (t49 != 9223372036854775641LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 2018877191293LLU;
	static int8_t x203 = -1;
	volatile int8_t x204 = INT8_MIN;
	uint64_t t50 = 11684550218LLU;

    t50 = ((x201&(x202^x203))+x204);

    if (t50 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -2219231508650260165LL;
	static int16_t x206 = 0;
	int16_t x207 = INT16_MIN;
	static volatile uint64_t x208 = UINT64_MAX;
	uint64_t t51 = 103315142130044LLU;

    t51 = ((x205&(x206^x207))+x208);

    if (t51 != 16227512565059289087LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MIN;
	static uint8_t x211 = 0U;
	uint16_t x212 = 1091U;
	static volatile int32_t t52 = 535467013;

    t52 = ((x209&(x210^x211))+x212);

    if (t52 != -31677) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	static uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = UINT32_MAX;

    t53 = ((x213&(x214^x215))+x216);

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x221 = INT16_MIN;
	uint64_t x222 = 0LLU;
	int16_t x223 = 863;
	uint64_t x224 = 27LLU;
	volatile uint64_t t54 = 7776432LLU;

    t54 = ((x221&(x222^x223))+x224);

    if (t54 != 27LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = INT32_MIN;

    t55 = ((x225&(x226^x227))+x228);

    if (t55 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = 1;
	volatile int16_t x230 = INT16_MAX;
	int64_t x231 = -15LL;
	int8_t x232 = INT8_MIN;
	volatile int64_t t56 = -8430424LL;

    t56 = ((x229&(x230^x231))+x232);

    if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = -1LL;
	volatile uint64_t x234 = 8618829004575201395LLU;
	static int64_t x236 = 2573LL;
	volatile uint64_t t57 = 1307064440LLU;

    t57 = ((x233&(x234^x235))+x236);

    if (t57 != 9827915069134365312LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x237 = 3U;
	static int32_t x238 = -1;
	uint32_t x239 = 1069811563U;
	int16_t x240 = -1;
	volatile uint32_t t58 = UINT32_MAX;

    t58 = ((x237&(x238^x239))+x240);

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x242 = INT32_MIN;
	static volatile int8_t x243 = INT8_MAX;
	volatile int32_t x244 = INT32_MAX;
	static int32_t t59 = -46;

    t59 = ((x241&(x242^x243))+x244);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MIN;
	volatile int16_t x247 = -1;
	volatile uint32_t x248 = 3U;
	int64_t t60 = 39625429920867LL;

    t60 = ((x245&(x246^x247))+x248);

    if (t60 != 2147483650LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x253 = 12081923;
	volatile uint32_t x255 = UINT32_MAX;
	int64_t x256 = -1756792044836348818LL;
	static volatile int64_t t61 = 21LL;

    t61 = ((x253&(x254^x255))+x256);

    if (t61 != -1756792044824266895LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = ((x257&(x258^x259))+x260);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x261 = 212U;
	volatile uint64_t x262 = 184304850LLU;
	int8_t x263 = 1;
	volatile int16_t x264 = -76;
	static volatile uint64_t t63 = 1LLU;

    t63 = ((x261&(x262^x263))+x264);

    if (t63 != 132LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x266 = INT16_MAX;
	uint16_t x267 = 1U;
	uint8_t x268 = 14U;
	int32_t t64 = 149007459;

    t64 = ((x265&(x266^x267))+x268);

    if (t64 != 32780) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = -1;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = 8912U;
	volatile int64_t t65 = -20210684880641344LL;

    t65 = ((x269&(x270^x271))+x272);

    if (t65 != -9223372036854734129LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x274 = 10872345298147500LLU;
	static int16_t x276 = INT16_MIN;
	static volatile uint64_t t66 = 58519827556LLU;

    t66 = ((x273&(x274^x275))+x276);

    if (t66 != 55177357233745952LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x277 = -126152378950826725LL;
	int16_t x278 = INT16_MIN;
	volatile int32_t x280 = -492;

    t67 = ((x277&(x278^x279))+x280);

    if (t67 != 17199LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -1LL;
	int32_t x282 = INT32_MAX;
	volatile int8_t x283 = INT8_MIN;
	static uint64_t x284 = UINT64_MAX;

    t68 = ((x281&(x282^x283))+x284);

    if (t68 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = INT64_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile int64_t x288 = INT64_MIN;
	uint64_t t69 = 15667069LLU;

    t69 = ((x285&(x286^x287))+x288);

    if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x289 = 1;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;
	static uint64_t t70 = 3704LLU;

    t70 = ((x289&(x290^x291))+x292);

    if (t70 != 24720LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 85988815U;
	int16_t x296 = -1;

    t71 = ((x293&(x294^x295))+x296);

    if (t71 != 78U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MIN;
	volatile uint64_t x299 = 816406685LLU;
	int32_t x300 = -21618;

    t72 = ((x297&(x298^x299))+x300);

    if (t72 != 35883LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x301 = INT16_MIN;
	static int64_t x302 = -1LL;
	uint64_t x304 = UINT64_MAX;

    t73 = ((x301&(x302^x303))+x304);

    if (t73 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x309 = 0U;
	int8_t x310 = INT8_MAX;
	int16_t x311 = INT16_MAX;
	int32_t x312 = 7;
	int32_t t74 = -193772244;

    t74 = ((x309&(x310^x311))+x312);

    if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x314 = -11;
	static int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t75 = INT32_MIN;

    t75 = ((x313&(x314^x315))+x316);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = INT64_MIN;
	static volatile int64_t x318 = INT64_MIN;
	volatile int64_t x320 = INT64_MAX;

    t76 = ((x317&(x318^x319))+x320);

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x321 = INT8_MIN;
	uint8_t x322 = 36U;
	static int8_t x323 = INT8_MAX;
	volatile int8_t x324 = -1;

    t77 = ((x321&(x322^x323))+x324);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	static int64_t x327 = -1LL;
	int8_t x328 = INT8_MAX;
	int64_t t78 = -150298963LL;

    t78 = ((x325&(x326^x327))+x328);

    if (t78 != 254LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = INT32_MIN;

    t79 = ((x329&(x330^x331))+x332);

    if (t79 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x333 = 7U;
	uint32_t x334 = UINT32_MAX;
	uint16_t x335 = 12U;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t80 = 7264U;

    t80 = ((x333&(x334^x335))+x336);

    if (t80 != 4294967171U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x338 = INT32_MIN;
	volatile int8_t x340 = INT8_MIN;
	int32_t t81 = 1;

    t81 = ((x337&(x338^x339))+x340);

    if (t81 != -119) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x342 = -53;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t82 = -14215953;

    t82 = ((x341&(x342^x343))+x344);

    if (t82 != 24138) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x345 = -1;
	static int16_t x347 = -6;
	int16_t x348 = 56;
	volatile int32_t t83 = 180047;

    t83 = ((x345&(x346^x347))+x348);

    if (t83 != 48) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = 33;
	uint16_t x350 = 13430U;
	volatile uint32_t x352 = 8289220U;
	uint64_t t84 = 264LLU;

    t84 = ((x349&(x350^x351))+x352);

    if (t84 != 8289252LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x353 = 7U;
	uint64_t x354 = 2425LLU;
	uint64_t x356 = 2659383LLU;
	uint64_t t85 = 469LLU;

    t85 = ((x353&(x354^x355))+x356);

    if (t85 != 2659389LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = -1510275;
	volatile uint16_t x359 = 10802U;
	int8_t x360 = INT8_MAX;
	int32_t t86 = -1;

    t86 = ((x357&(x358^x359))+x360);

    if (t86 != -1518388) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x362 = -14;
	int16_t x363 = INT16_MAX;
	static int16_t x364 = 389;

    t87 = ((x361&(x362^x363))+x364);

    if (t87 != 9223372036854743442LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x365 = 117U;
	static int8_t x366 = -1;
	volatile uint32_t x367 = 3897U;
	int64_t t88 = 12684LL;

    t88 = ((x365&(x366^x367))+x368);

    if (t88 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x369 = 586539188LLU;
	volatile uint64_t x370 = 19LLU;
	int32_t x371 = -23960;
	int16_t x372 = 0;
	uint64_t t89 = 5476721328LLU;

    t89 = ((x369&(x370^x371))+x372);

    if (t89 != 586522672LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x373 = 40020149287700LLU;
	uint8_t x374 = UINT8_MAX;
	static uint64_t t90 = 60704LLU;

    t90 = ((x373&(x374^x375))+x376);

    if (t90 != 19LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x378 = -60;
	static int32_t t91 = -456409;

    t91 = ((x377&(x378^x379))+x380);

    if (t91 != 65574) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MIN;
	volatile int8_t x383 = 1;
	int16_t x384 = INT16_MAX;

    t92 = ((x381&(x382^x383))+x384);

    if (t92 != -2147450881) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = -54;
	int64_t x386 = INT64_MIN;
	static int32_t x387 = -18873221;
	int32_t x388 = -1;
	int64_t t93 = 7390099037450LL;

    t93 = ((x385&(x386^x387))+x388);

    if (t93 != 9223372036835902537LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x389 = -18;
	static volatile int16_t x390 = -215;
	volatile int32_t t94 = 2481;

    t94 = ((x389&(x390^x391))+x392);

    if (t94 != 196) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x393 = -331;
	int16_t x394 = INT16_MAX;
	volatile int8_t x395 = INT8_MIN;
	uint16_t x396 = 3265U;
	volatile int32_t t95 = -12102;

    t95 = ((x393&(x394^x395))+x396);

    if (t95 != -29450) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x397 = 7U;
	uint32_t x399 = 30617U;
	static volatile int64_t x400 = INT64_MIN;
	volatile int64_t t96 = -50565LL;

    t96 = ((x397&(x398^x399))+x400);

    if (t96 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x402 = 376U;
	int8_t x403 = INT8_MIN;
	volatile int8_t x404 = INT8_MIN;
	volatile uint32_t t97 = 40765U;

    t97 = ((x401&(x402^x403))+x404);

    if (t97 != 4294966904U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = 48892902LL;
	static uint16_t x406 = 6813U;
	static int8_t x408 = 3;
	volatile int64_t t98 = 5988625413LL;

    t98 = ((x405&(x406^x407))+x408);

    if (t98 != 48890213LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x409 = 1212;
	int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -70;
	int64_t t99 = 4331660900575503LL;

    t99 = ((x409&(x410^x411))+x412);

    if (t99 != 1142LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x413 = INT16_MIN;
	volatile uint16_t x415 = 377U;
	int64_t x416 = 46363534210220LL;
	volatile int64_t t100 = 35412809299195LL;

    t100 = ((x413&(x414^x415))+x416);

    if (t100 != 46363534242988LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MAX;
	int8_t x418 = -3;
	uint8_t x419 = 28U;
	static uint32_t x420 = 39176385U;
	volatile uint32_t t101 = 70471U;

    t101 = ((x417&(x418^x419))+x420);

    if (t101 != 2186660002U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x422 = 179;
	int64_t x423 = -1LL;
	volatile int8_t x424 = INT8_MIN;
	volatile int64_t t102 = 63183080514LL;

    t102 = ((x421&(x422^x423))+x424);

    if (t102 != 716LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = INT32_MIN;
	uint16_t x426 = 1322U;
	uint16_t x427 = 55U;
	static int32_t t103 = -228;

    t103 = ((x425&(x426^x427))+x428);

    if (t103 != 10865) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x429 = UINT16_MAX;
	volatile uint16_t x430 = UINT16_MAX;
	static int16_t x431 = -36;
	uint32_t x432 = 1U;

    t104 = ((x429&(x430^x431))+x432);

    if (t104 != 36U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x433 = 23U;
	int16_t x434 = -1;
	uint32_t x435 = 52636154U;
	volatile uint16_t x436 = 53U;

    t105 = ((x433&(x434^x435))+x436);

    if (t105 != 58U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x437 = 1076393630384172LLU;
	uint8_t x438 = UINT8_MAX;
	int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MAX;

    t106 = ((x437&(x438^x439))+x440);

    if (t106 != 2147483691LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x442 = INT64_MIN;
	int16_t x444 = 0;
	volatile uint64_t t107 = 205730262LLU;

    t107 = ((x441&(x442^x443))+x444);

    if (t107 != 9223372036854775706LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x445 = UINT16_MAX;
	uint8_t x447 = 119U;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t108 = 76;

    t108 = ((x445&(x446^x447))+x448);

    if (t108 != 65671) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x449 = INT32_MIN;
	volatile uint64_t x450 = 488LLU;
	volatile int8_t x451 = 19;
	int32_t x452 = -1;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = ((x449&(x450^x451))+x452);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x453 = 13580U;
	uint16_t x454 = UINT16_MAX;
	static int8_t x455 = 0;
	volatile uint8_t x456 = 15U;
	static int32_t t110 = -50404;

    t110 = ((x453&(x454^x455))+x456);

    if (t110 != 13595) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x458 = 6838187621LL;
	static int8_t x459 = INT8_MIN;
	int64_t x460 = 348859697713795205LL;

    t111 = ((x457&(x458^x459))+x460);

    if (t111 != 348859690875607657LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x462 = 759U;
	static int64_t x463 = INT64_MAX;
	static int64_t x464 = -1LL;
	int64_t t112 = 16716137405534094LL;

    t112 = ((x461&(x462^x463))+x464);

    if (t112 != 26304511LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = -664109600508LL;
	static volatile int16_t x466 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	static int64_t t113 = 39978316120026LL;

    t113 = ((x465&(x466^x467))+x468);

    if (t113 != 1610285056LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MAX;
	int8_t x470 = 0;
	int8_t x471 = INT8_MAX;

    t114 = ((x469&(x470^x471))+x472);

    if (t114 != 101) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x473 = INT16_MAX;
	uint64_t x474 = 124119LLU;
	static int8_t x475 = INT8_MAX;
	static uint64_t t115 = 21301476872301LLU;

    t115 = ((x473&(x474^x475))+x476);

    if (t115 != 25640LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x477 = -1;
	int64_t x479 = -186622367789LL;
	volatile int32_t x480 = INT32_MAX;
	volatile uint64_t t116 = 3455884011989903975LLU;

    t116 = ((x477&(x478^x479))+x480);

    if (t116 != 188769851435LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x481 = INT64_MIN;
	static uint16_t x482 = 19670U;
	int8_t x484 = INT8_MIN;
	int64_t t117 = 86234862479567464LL;

    t117 = ((x481&(x482^x483))+x484);

    if (t117 != -128LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x485 = UINT64_MAX;
	uint64_t x486 = UINT64_MAX;
	int16_t x487 = INT16_MIN;
	int16_t x488 = 15;

    t118 = ((x485&(x486^x487))+x488);

    if (t118 != 32782LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MAX;
	int64_t t119 = -21680122584968LL;

    t119 = ((x489&(x490^x491))+x492);

    if (t119 != 382LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x494 = INT16_MAX;
	uint64_t x495 = UINT64_MAX;
	volatile int8_t x496 = -1;
	volatile uint64_t t120 = 33713086LLU;

    t120 = ((x493&(x494^x495))+x496);

    if (t120 != 11249141350399LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x498 = -1LL;
	uint64_t x499 = UINT64_MAX;
	static int8_t x500 = INT8_MIN;
	uint64_t t121 = 3603911537596438737LLU;

    t121 = ((x497&(x498^x499))+x500);

    if (t121 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x503 = -1;
	volatile uint32_t x504 = UINT32_MAX;

    t122 = ((x501&(x502^x503))+x504);

    if (t122 != 126U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x505 = 3U;
	static volatile int32_t x507 = -1;
	static uint8_t x508 = 9U;
	volatile uint64_t t123 = 120496019762LLU;

    t123 = ((x505&(x506^x507))+x508);

    if (t123 != 9LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x509 = UINT8_MAX;
	static uint16_t x510 = 3662U;
	static uint16_t x511 = UINT16_MAX;

    t124 = ((x509&(x510^x511))+x512);

    if (t124 != -1834033405LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x513 = -1;
	int16_t x514 = INT16_MAX;
	int64_t x515 = -550719073LL;
	volatile int64_t t125 = 1LL;

    t125 = ((x513&(x514^x515))+x516);

    if (t125 != -550711840LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x517 = 14656655LL;
	uint8_t x518 = UINT8_MAX;
	volatile uint64_t x519 = 573550218461724LLU;
	int8_t x520 = 2;
	volatile uint64_t t126 = 312449LLU;

    t126 = ((x517&(x518^x519))+x520);

    if (t126 != 524421LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x521 = UINT16_MAX;
	uint32_t x522 = 1512432363U;
	int32_t x523 = INT32_MAX;
	volatile uint8_t x524 = UINT8_MAX;
	uint32_t t127 = 7735U;

    t127 = ((x521&(x522^x523))+x524);

    if (t127 != 7699U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x526 = 0U;
	int64_t t128 = INT64_MIN;

    t128 = ((x525&(x526^x527))+x528);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = -1;
	int8_t x534 = INT8_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MAX;
	int32_t t129 = -53994605;

    t129 = ((x533&(x534^x535))+x536);

    if (t129 != -32514) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	volatile uint64_t x538 = 1699280864846LLU;
	uint64_t x539 = 8340702759758LLU;
	int16_t x540 = INT16_MIN;
	uint64_t t130 = 48293LLU;

    t130 = ((x537&(x538^x539))+x540);

    if (t130 != 18446744073709538560LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x541 = 1896817U;
	uint32_t x542 = UINT32_MAX;
	static int8_t x543 = -1;
	volatile uint64_t x544 = UINT64_MAX;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = ((x541&(x542^x543))+x544);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x546 = INT16_MIN;
	static int64_t x547 = 393798207310LL;
	int8_t x548 = INT8_MIN;
	volatile int64_t t132 = -120654LL;

    t132 = ((x545&(x546^x547))+x548);

    if (t132 != -393798203698LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = INT32_MIN;
	int16_t x551 = INT16_MIN;
	uint16_t x552 = UINT16_MAX;
	volatile uint64_t t133 = 37234479993LLU;

    t133 = ((x549&(x550^x551))+x552);

    if (t133 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MIN;
	static int64_t t134 = -169LL;

    t134 = ((x553&(x554^x555))+x556);

    if (t134 != -2147450881LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = -1;
	volatile int64_t x558 = INT64_MAX;
	static volatile int16_t x559 = -132;
	static volatile uint8_t x560 = 22U;
	volatile int64_t t135 = -56608515430LL;

    t135 = ((x557&(x558^x559))+x560);

    if (t135 != -9223372036854775655LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x562 = INT64_MIN;
	int8_t x563 = -39;
	uint16_t x564 = 10U;

    t136 = ((x561&(x562^x563))+x564);

    if (t136 != 32739LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x566 = INT8_MAX;
	volatile int16_t x568 = INT16_MAX;
	uint64_t t137 = 15638576878175LLU;

    t137 = ((x565&(x566^x567))+x568);

    if (t137 != 195145093759LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x570 = UINT16_MAX;
	static uint64_t x571 = 512959990766423780LLU;
	int32_t x572 = INT32_MAX;
	volatile uint64_t t138 = 9993991LLU;

    t138 = ((x569&(x570^x571))+x572);

    if (t138 != 2147483674LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x573 = INT64_MAX;
	int16_t x575 = -588;

    t139 = ((x573&(x574^x575))+x576);

    if (t139 != 3486044654LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = INT8_MIN;
	volatile int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MAX;
	volatile int32_t t140 = 17436;

    t140 = ((x577&(x578^x579))+x580);

    if (t140 != -2147451002) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x581 = 1002961386LLU;
	int32_t x582 = INT32_MIN;
	int8_t x583 = INT8_MAX;
	volatile int32_t x584 = -98;
	volatile uint64_t t141 = 6646356LLU;

    t141 = ((x581&(x582^x583))+x584);

    if (t141 != 8LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = INT8_MAX;
	uint16_t x586 = 177U;
	volatile int8_t x587 = INT8_MAX;
	int8_t x588 = INT8_MIN;
	volatile int32_t t142 = -6;

    t142 = ((x585&(x586^x587))+x588);

    if (t142 != -50) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x589 = 0;
	static volatile int8_t x590 = INT8_MIN;
	int32_t x592 = 2231;
	volatile int32_t t143 = -18;

    t143 = ((x589&(x590^x591))+x592);

    if (t143 != 2231) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x593 = 0U;
	volatile int32_t x595 = INT32_MAX;
	int16_t x596 = INT16_MIN;

    t144 = ((x593&(x594^x595))+x596);

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x598 = UINT8_MAX;
	int32_t x600 = 13962;

    t145 = ((x597&(x598^x599))+x600);

    if (t145 != -48450476140LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x602 = -1;
	uint8_t x603 = UINT8_MAX;
	int16_t x604 = INT16_MAX;
	volatile int32_t t146 = 8;

    t146 = ((x601&(x602^x603))+x604);

    if (t146 != 32511) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x605 = UINT64_MAX;
	static int64_t x606 = -1LL;
	int16_t x607 = INT16_MIN;
	int16_t x608 = INT16_MAX;

    t147 = ((x605&(x606^x607))+x608);

    if (t147 != 65534LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x610 = INT32_MAX;
	static int16_t x611 = INT16_MIN;
	volatile int8_t x612 = INT8_MAX;
	static volatile int32_t t148 = 74;

    t148 = ((x609&(x610^x611))+x612);

    if (t148 != 32894) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x617 = INT16_MIN;
	static int64_t x618 = INT64_MIN;
	volatile int32_t x619 = 68126404;
	int8_t x620 = -1;
	int64_t t149 = -129511671215669822LL;

    t149 = ((x617&(x618^x619))+x620);

    if (t149 != -9223372036786651137LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = -1;
	volatile uint32_t x622 = 399151813U;
	static uint16_t x623 = 0U;
	static int8_t x624 = 0;

    t150 = ((x621&(x622^x623))+x624);

    if (t150 != 399151813U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = 116;
	int32_t x626 = INT32_MIN;
	uint16_t x627 = 18U;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t151 = 64774;

    t151 = ((x625&(x626^x627))+x628);

    if (t151 != 65551) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x629 = -21;
	int32_t x630 = -11202676;
	uint64_t x631 = 1187247816554LLU;
	int64_t x632 = INT64_MAX;
	volatile uint64_t t152 = 1451657LLU;

    t152 = ((x629&(x630^x631))+x632);

    if (t152 != 9223370849601384673LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = 2389765935146LL;
	int16_t x635 = 1525;
	uint64_t x636 = 3LLU;

    t153 = ((x633&(x634^x635))+x636);

    if (t153 != 35LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x639 = INT64_MIN;
	static uint16_t x640 = 5U;
	int64_t t154 = -10349108649594378LL;

    t154 = ((x637&(x638^x639))+x640);

    if (t154 != 9223372036854767365LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x641 = INT8_MIN;
	volatile uint64_t t155 = 1944096LLU;

    t155 = ((x641&(x642^x643))+x644);

    if (t155 != 9222624400020942977LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	uint8_t x646 = UINT8_MAX;
	static int64_t x647 = 15901526LL;

    t156 = ((x645&(x646^x647))+x648);

    if (t156 != 9223372036870677417LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x649 = INT32_MIN;
	int64_t x651 = INT64_MAX;
	int16_t x652 = -1;
	int64_t t157 = -135039012354LL;

    t157 = ((x649&(x650^x651))+x652);

    if (t157 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x653 = 16497765U;
	int16_t x654 = INT16_MIN;
	static int64_t x655 = INT64_MAX;
	uint8_t x656 = UINT8_MAX;
	volatile int64_t t158 = 240478119294120LL;

    t158 = ((x653&(x654^x655))+x656);

    if (t158 != 15716LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x657 = 7632177144874LLU;
	int64_t x658 = 4401257369795395288LL;
	int64_t x659 = -28LL;
	volatile uint8_t x660 = 8U;
	uint64_t t159 = 8LLU;

    t159 = ((x657&(x658^x659))+x660);

    if (t159 != 7357279240240LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x663 = UINT64_MAX;
	int32_t x664 = 29600;
	volatile uint64_t t160 = 20798963505532955LLU;

    t160 = ((x661&(x662^x663))+x664);

    if (t160 != 9223372036854805407LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = 73LL;
	int64_t x666 = 14297432205451916LL;
	int16_t x667 = INT16_MIN;
	volatile uint64_t x668 = 176639119478567796LLU;
	static volatile uint64_t t161 = 3842LLU;

    t161 = ((x665&(x666^x667))+x668);

    if (t161 != 176639119478567804LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x674 = INT16_MAX;
	uint8_t x675 = UINT8_MAX;
	uint8_t x676 = UINT8_MAX;

    t162 = ((x673&(x674^x675))+x676);

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x678 = 23079095859491360LLU;
	volatile int32_t x679 = -122082;
	uint32_t x680 = UINT32_MAX;
	volatile uint64_t t163 = 114517085215LLU;

    t163 = ((x677&(x678^x679))+x680);

    if (t163 != 18423664982145044769LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = INT16_MAX;
	volatile int32_t x682 = -1;
	int16_t x683 = -1;
	int16_t x684 = 9;
	static volatile int32_t t164 = 106300;

    t164 = ((x681&(x682^x683))+x684);

    if (t164 != 9) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x685 = INT8_MIN;
	uint8_t x687 = UINT8_MAX;
	volatile int8_t x688 = -30;
	volatile uint64_t t165 = 14221123LLU;

    t165 = ((x685&(x686^x687))+x688);

    if (t165 != 2036332855284194LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = 12;
	int32_t x691 = INT32_MIN;
	static int32_t x692 = 4259;

    t166 = ((x689&(x690^x691))+x692);

    if (t166 != 4271) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = INT32_MAX;
	volatile uint64_t x694 = 125945027342LLU;
	volatile int32_t x695 = -44770;
	static volatile int32_t x696 = -3695;
	volatile uint64_t t167 = 45222584276325397LLU;

    t167 = ((x693&(x694^x695))+x696);

    if (t167 != 756530081LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x697 = 917948883915790LLU;
	int32_t x698 = INT32_MAX;
	volatile uint8_t x699 = 37U;
	volatile int32_t x700 = -1;
	uint64_t t168 = 3834802944753LLU;

    t168 = ((x697&(x698^x699))+x700);

    if (t168 != 556127241LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x701 = 13;
	volatile int16_t x702 = -1;
	int32_t x703 = INT32_MAX;
	uint32_t x704 = 1528766480U;
	uint32_t t169 = 3U;

    t169 = ((x701&(x702^x703))+x704);

    if (t169 != 1528766480U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x705 = INT16_MIN;
	uint64_t x706 = UINT64_MAX;
	int16_t x707 = INT16_MIN;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = ((x705&(x706^x707))+x708);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x709 = 1U;
	static volatile uint32_t x712 = 120544018U;
	volatile int64_t t171 = 10881255561LL;

    t171 = ((x709&(x710^x711))+x712);

    if (t171 != 120544018LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = INT64_MIN;
	static int16_t x715 = INT16_MIN;
	int8_t x716 = INT8_MIN;
	int64_t t172 = 6697LL;

    t172 = ((x713&(x714^x715))+x716);

    if (t172 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x717 = -1LL;
	int32_t x719 = INT32_MAX;
	static uint16_t x720 = 27435U;
	int64_t t173 = 8044300918LL;

    t173 = ((x717&(x718^x719))+x720);

    if (t173 != -2147456213LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x721 = 7405872U;
	uint16_t x722 = 6892U;
	int8_t x723 = INT8_MAX;
	int64_t x724 = INT64_MIN;
	volatile int64_t t174 = -58453033LL;

    t174 = ((x721&(x722^x723))+x724);

    if (t174 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x725 = UINT32_MAX;
	uint8_t x726 = UINT8_MAX;
	static int8_t x727 = INT8_MIN;
	static volatile uint64_t x728 = 58912367731LLU;
	volatile uint64_t t175 = 13LLU;

    t175 = ((x725&(x726^x727))+x728);

    if (t175 != 63207334898LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = -1;
	static volatile int32_t x730 = -247207;
	int8_t x731 = INT8_MIN;
	volatile uint8_t x732 = UINT8_MAX;

    t176 = ((x729&(x730^x731))+x732);

    if (t176 != 247512) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x737 = 411963924;
	uint8_t x738 = 100U;
	volatile int8_t x739 = INT8_MIN;
	uint64_t x740 = 24637578LLU;
	volatile uint64_t t177 = 283624309702LLU;

    t177 = ((x737&(x738^x739))+x740);

    if (t177 != 436601486LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x741 = 3270563U;
	uint64_t x742 = UINT64_MAX;
	static volatile int32_t x744 = -1;
	uint64_t t178 = UINT64_MAX;

    t178 = ((x741&(x742^x743))+x744);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x745 = -1LL;
	int32_t x748 = 3;
	int64_t t179 = -27639736LL;

    t179 = ((x745&(x746^x747))+x748);

    if (t179 != 65523LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x749 = -1;
	uint16_t x750 = UINT16_MAX;
	uint32_t x751 = 133U;
	volatile uint64_t x752 = 4356827901451859LLU;
	static volatile uint64_t t180 = 157521LLU;

    t180 = ((x749&(x750^x751))+x752);

    if (t180 != 4356827901517261LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x753 = 4U;
	int64_t x754 = INT64_MIN;
	int8_t x755 = -1;
	int16_t x756 = -1;
	volatile int64_t t181 = 1116739LL;

    t181 = ((x753&(x754^x755))+x756);

    if (t181 != 3LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x758 = -1LL;
	uint64_t x759 = 6121LLU;
	uint64_t t182 = 396LLU;

    t182 = ((x757&(x758^x759))+x760);

    if (t182 != 18446744073695758036LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x761 = INT8_MIN;
	int64_t x762 = -238242608077LL;
	uint8_t x763 = 11U;
	volatile uint16_t x764 = 888U;
	int64_t t183 = 261078432261657254LL;

    t183 = ((x761&(x762^x763))+x764);

    if (t183 != -238242607240LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x765 = 1;
	volatile uint16_t x767 = 2U;
	int8_t x768 = INT8_MIN;
	volatile int32_t t184 = 336831771;

    t184 = ((x765&(x766^x767))+x768);

    if (t184 != -127) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x769 = 1U;
	uint64_t x771 = 24LLU;
	int8_t x772 = INT8_MIN;
	uint64_t t185 = 60829490LLU;

    t185 = ((x769&(x770^x771))+x772);

    if (t185 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x773 = INT8_MIN;
	volatile uint32_t x775 = UINT32_MAX;
	uint8_t x776 = 8U;
	volatile uint32_t t186 = 1430U;

    t186 = ((x773&(x774^x775))+x776);

    if (t186 != 2147483528U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x777 = 1;
	int8_t x778 = 6;
	uint8_t x779 = 0U;
	static int64_t t187 = INT64_MIN;

    t187 = ((x777&(x778^x779))+x780);

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x781 = INT64_MIN;
	int32_t x782 = INT32_MIN;
	volatile int8_t x783 = 0;
	uint32_t x784 = 469795295U;
	volatile int64_t t188 = -29869LL;

    t188 = ((x781&(x782^x783))+x784);

    if (t188 != -9223372036384980513LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint32_t x786 = UINT32_MAX;
	int8_t x787 = INT8_MAX;
	volatile int64_t x788 = INT64_MAX;

    t189 = ((x785&(x786^x787))+x788);

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = 1382U;
	uint64_t x790 = UINT64_MAX;
	int16_t x791 = INT16_MAX;
	int8_t x792 = INT8_MAX;

    t190 = ((x789&(x790^x791))+x792);

    if (t190 != 127LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x797 = 906521985279860328LLU;
	uint32_t x798 = UINT32_MAX;
	static int32_t x800 = 8023;

    t191 = ((x797&(x798^x799))+x800);

    if (t191 != 1358966135LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x803 = INT64_MIN;
	int16_t x804 = INT16_MIN;
	volatile int64_t t192 = -9704954619944943LL;

    t192 = ((x801&(x802^x803))+x804);

    if (t192 != -9223372032559841408LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x806 = -1;
	uint32_t x807 = 1952U;
	volatile uint32_t t193 = 911208733U;

    t193 = ((x805&(x806^x807))+x808);

    if (t193 != 29588U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x809 = INT64_MIN;
	static int32_t x810 = INT32_MAX;
	volatile int64_t x811 = -48LL;
	int64_t t194 = INT64_MIN;

    t194 = ((x809&(x810^x811))+x812);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = 944779078LL;
	uint64_t x814 = 332536180466502974LLU;
	uint8_t x815 = 39U;
	static uint64_t x816 = 53837LLU;
	static volatile uint64_t t195 = 6939586LLU;

    t195 = ((x813&(x814^x815))+x816);

    if (t195 != 671145805LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x817 = 30U;
	uint16_t x818 = 0U;
	volatile int32_t x820 = INT32_MIN;
	static uint32_t t196 = 0U;

    t196 = ((x817&(x818^x819))+x820);

    if (t196 != 2147483654U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x822 = 601659148793847279LL;
	int8_t x823 = INT8_MIN;
	int32_t x824 = 48;
	volatile int64_t t197 = -110LL;

    t197 = ((x821&(x822^x823))+x824);

    if (t197 != -601659148793847248LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x825 = UINT32_MAX;
	uint32_t x826 = 193344071U;
	int64_t x827 = INT64_MIN;
	int16_t x828 = INT16_MIN;

    t198 = ((x825&(x826^x827))+x828);

    if (t198 != 193311303LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x829 = INT64_MIN;
	static int64_t x830 = INT64_MAX;
	volatile int64_t x831 = 14999LL;
	int64_t t199 = 2LL;

    t199 = ((x829&(x830^x831))+x832);

    if (t199 != -2147483648LL) { NG(); } else { ; }
	
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

