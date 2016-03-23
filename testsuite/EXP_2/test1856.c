
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

static uint8_t x1 = 3U;
int32_t x4 = INT32_MIN;
uint16_t x8 = 14731U;
int8_t x9 = 0;
int64_t x12 = -45592LL;
uint64_t x13 = 19LLU;
int32_t x14 = -1;
int8_t x15 = INT8_MIN;
volatile int32_t t3 = 237;
static volatile int16_t x17 = INT16_MIN;
int64_t x21 = INT64_MIN;
int32_t x25 = INT32_MIN;
uint32_t x31 = 1U;
volatile uint64_t x51 = UINT64_MAX;
int32_t x52 = INT32_MIN;
int32_t t12 = -72;
static int16_t x61 = INT16_MIN;
volatile int16_t x62 = INT16_MIN;
int16_t x64 = INT16_MIN;
int32_t t15 = 16457123;
uint16_t x65 = 113U;
int32_t t17 = -2;
uint32_t x83 = 211U;
volatile int32_t t22 = 55495423;
int64_t x97 = INT64_MIN;
uint32_t x100 = UINT32_MAX;
static uint64_t x107 = 30412LLU;
static volatile int64_t x108 = -1LL;
int16_t x109 = -50;
int64_t x112 = INT64_MIN;
int16_t x124 = INT16_MAX;
int32_t t30 = -1034;
uint64_t x125 = 2278LLU;
int16_t x134 = -1;
int32_t t34 = 3999;
int8_t x147 = INT8_MAX;
volatile int64_t x150 = INT64_MAX;
volatile int32_t x153 = -354260;
volatile uint8_t x155 = UINT8_MAX;
static int64_t x157 = -1LL;
volatile int32_t t40 = -204;
int32_t x167 = INT32_MIN;
int16_t x173 = INT16_MAX;
volatile uint64_t x175 = 648193917LLU;
uint8_t x177 = 56U;
volatile uint64_t x181 = 534956322LLU;
int32_t x195 = INT32_MAX;
uint64_t x199 = UINT64_MAX;
int32_t x201 = INT32_MAX;
int16_t x204 = -136;
uint32_t x206 = 1U;
volatile int32_t t52 = -110;
int8_t x215 = INT8_MIN;
volatile int16_t x216 = INT16_MAX;
volatile int32_t t53 = 4047250;
uint32_t x217 = 450237U;
int32_t x229 = 373;
int64_t x230 = INT64_MIN;
uint8_t x231 = 24U;
uint16_t x233 = 100U;
int64_t x234 = -399LL;
uint8_t x239 = 1U;
int32_t x241 = INT32_MAX;
int32_t t60 = 89;
static int32_t x250 = 1;
int32_t t62 = 24637895;
int8_t x255 = 12;
int16_t x261 = INT16_MAX;
int16_t x265 = INT16_MIN;
static volatile int8_t x276 = -6;
uint32_t x280 = UINT32_MAX;
int32_t t69 = 365659;
int32_t x283 = 280666093;
int16_t x286 = INT16_MIN;
volatile uint32_t x288 = UINT32_MAX;
int32_t x290 = INT32_MIN;
int8_t x291 = 0;
int32_t t72 = -449072;
volatile int8_t x293 = 7;
int64_t x295 = INT64_MIN;
volatile int32_t t73 = 0;
static int16_t x300 = INT16_MAX;
uint16_t x305 = UINT16_MAX;
int32_t t77 = -553703;
int32_t t79 = -25527614;
static int32_t x322 = -1;
static volatile uint16_t x323 = UINT16_MAX;
static volatile int32_t t80 = -184331;
int16_t x326 = INT16_MIN;
int8_t x327 = INT8_MIN;
volatile uint32_t x330 = UINT32_MAX;
static int16_t x337 = 1;
int32_t x342 = INT32_MAX;
static int32_t t87 = 0;
uint8_t x357 = UINT8_MAX;
int32_t t91 = 3877;
uint64_t x378 = 31678237279169LLU;
uint64_t x384 = 30527LLU;
int8_t x407 = INT8_MAX;
uint64_t x410 = UINT64_MAX;
volatile int32_t t102 = 1;
int32_t x413 = -1;
int32_t t104 = -108865434;
int32_t x424 = INT32_MAX;
static uint32_t x425 = UINT32_MAX;
static uint32_t x426 = UINT32_MAX;
int16_t x427 = INT16_MIN;
uint16_t x428 = 24U;
volatile int32_t t106 = 11183;
uint8_t x435 = 13U;
int16_t x439 = INT16_MIN;
volatile uint64_t x441 = 117LLU;
static int16_t x443 = -1;
int16_t x448 = INT16_MAX;
static volatile int32_t x450 = INT32_MIN;
int32_t x452 = -1;
int8_t x453 = -1;
uint64_t x457 = 5097478268LLU;
volatile int32_t t115 = -61145536;
int32_t x465 = -1;
volatile int32_t t116 = 1;
uint64_t x475 = 51886853268474LLU;
int32_t x483 = INT32_MAX;
volatile int32_t t120 = 399461461;
volatile int8_t x490 = 1;
int32_t t122 = 383841;
static uint64_t x504 = 108480LLU;
int16_t x507 = INT16_MIN;
int32_t x508 = -4125;
uint16_t x513 = 339U;
volatile int8_t x521 = -1;
volatile int16_t x529 = INT16_MAX;
int8_t x543 = 1;
int16_t x547 = 1;
int64_t x550 = -1LL;
int32_t x554 = 0;
uint8_t x558 = 120U;
uint32_t x561 = 893064U;
uint64_t x564 = UINT64_MAX;
volatile int32_t t140 = 0;
static int32_t x566 = INT32_MAX;
int32_t x567 = -1;
static uint16_t x569 = 9U;
int16_t x570 = 162;
int16_t x575 = INT16_MIN;
int16_t x576 = INT16_MAX;
uint32_t x582 = UINT32_MAX;
uint64_t x584 = 118003849311LLU;
volatile int32_t t146 = -3564460;
int32_t x591 = 616;
int8_t x597 = -2;
int8_t x602 = 1;
int8_t x606 = INT8_MIN;
int8_t x612 = -6;
static int64_t x614 = -1LL;
volatile int32_t t153 = 82953356;
int64_t x617 = INT64_MAX;
volatile int16_t x618 = INT16_MIN;
uint8_t x619 = 29U;
int32_t x624 = -32208;
volatile int16_t x638 = INT16_MIN;
uint16_t x639 = 14U;
static uint32_t x640 = 17391U;
volatile int64_t x643 = INT64_MIN;
uint16_t x645 = 24U;
static int64_t x648 = -1LL;
int8_t x649 = INT8_MAX;
int8_t x651 = -2;
volatile int64_t x653 = INT64_MAX;
int8_t x659 = -1;
int64_t x666 = INT64_MIN;
int32_t t168 = -2901;
int8_t x683 = -1;
uint64_t x686 = 17037160098125LLU;
volatile int8_t x691 = -1;
volatile int8_t x697 = -1;
volatile int32_t t174 = 0;
volatile int32_t t176 = 196;
uint64_t x711 = UINT64_MAX;
static volatile uint32_t x713 = 115U;
uint32_t x714 = 27276U;
static int32_t x717 = INT32_MIN;
static int8_t x718 = -2;
uint8_t x728 = 4U;
int32_t t182 = -3357180;
int32_t t185 = 247286132;
static int32_t x748 = INT32_MIN;
volatile int8_t x752 = 56;
static volatile int32_t x753 = INT32_MAX;
volatile int64_t x754 = INT64_MAX;
volatile int32_t x755 = INT32_MIN;
int32_t t189 = 241;
volatile int32_t x779 = -900180;
int64_t x784 = 353784017LL;
int8_t x785 = INT8_MIN;
int16_t x789 = -7992;
int16_t x794 = -20;
volatile int16_t x795 = INT16_MIN;
uint16_t x797 = UINT16_MAX;


void f0(void) {
    	int32_t x2 = 0;
	volatile uint64_t x3 = 1937620155596710242LLU;
	volatile int32_t t0 = 192894726;

    t0 = ((x1!=(x2<=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -6;
	static uint32_t x6 = UINT32_MAX;
	uint8_t x7 = UINT8_MAX;
	int32_t t1 = -233814;

    t1 = ((x5!=(x6<=x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -2197536;
	int8_t x11 = -1;
	int32_t t2 = -6200913;

    t2 = ((x9!=(x10<=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x16 = INT32_MIN;

    t3 = ((x13!=(x14<=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	volatile int16_t x19 = 0;
	static int8_t x20 = 21;
	volatile int32_t t4 = -7;

    t4 = ((x17!=(x18<=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = 19;
	static int8_t x23 = 1;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = 1;

    t5 = ((x21!=(x22<=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MIN;
	static int64_t x27 = INT64_MAX;
	int8_t x28 = INT8_MAX;
	int32_t t6 = 6630;

    t6 = ((x25!=(x26<=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -30;
	int8_t x30 = 0;
	static volatile int8_t x32 = -1;
	volatile int32_t t7 = 46310192;

    t7 = ((x29!=(x30<=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = -1;
	int64_t x34 = -1LL;
	static int8_t x35 = 19;
	volatile int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -2;

    t8 = ((x33!=(x34<=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MAX;
	volatile int16_t x38 = INT16_MIN;
	static volatile uint8_t x39 = 5U;
	int64_t x40 = INT64_MIN;
	static volatile int32_t t9 = 1;

    t9 = ((x37!=(x38<=x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int64_t x42 = -840291LL;
	static volatile uint32_t x43 = UINT32_MAX;
	static uint64_t x44 = 16LLU;
	int32_t t10 = -1;

    t10 = ((x41!=(x42<=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int64_t x46 = -1LL;
	static uint16_t x47 = 4U;
	int64_t x48 = -1LL;
	int32_t t11 = -191;

    t11 = ((x45!=(x46<=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	int64_t x50 = -773LL;

    t12 = ((x49!=(x50<=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int16_t x54 = -1;
	int64_t x55 = -32172393394506436LL;
	uint8_t x56 = 7U;
	static int32_t t13 = -3678;

    t13 = ((x53!=(x54<=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -497136;
	uint8_t x58 = 9U;
	volatile int8_t x59 = 52;
	uint64_t x60 = 162683204920238LLU;
	volatile int32_t t14 = -117277159;

    t14 = ((x57!=(x58<=x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x63 = -1;

    t15 = ((x61!=(x62<=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x66 = 1;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -3;

    t16 = ((x65!=(x66<=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;

    t17 = ((x69!=(x70<=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x74 = -2957;
	static volatile int64_t x75 = INT64_MAX;
	volatile int64_t x76 = INT64_MIN;
	int32_t t18 = -121495;

    t18 = ((x73!=(x74<=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int16_t x78 = -1;
	int8_t x79 = INT8_MAX;
	uint32_t x80 = UINT32_MAX;
	static int32_t t19 = 162906037;

    t19 = ((x77!=(x78<=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x81 = 24U;
	volatile int32_t x82 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	int32_t t20 = 23;

    t20 = ((x81!=(x82<=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int8_t x86 = -1;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = 2304U;
	volatile int32_t t21 = 405918716;

    t21 = ((x85!=(x86<=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 40U;
	uint16_t x90 = 258U;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = UINT16_MAX;

    t22 = ((x89!=(x90<=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	volatile int8_t x94 = -1;
	uint32_t x95 = 167U;
	int32_t x96 = -13755507;
	int32_t t23 = 147720364;

    t23 = ((x93!=(x94<=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x98 = 2U;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t t24 = 99580;

    t24 = ((x97!=(x98<=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	int8_t x102 = INT8_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	int64_t x104 = -44374602062LL;
	static volatile int32_t t25 = 173343;

    t25 = ((x101!=(x102<=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = INT8_MIN;
	volatile int32_t t26 = 9;

    t26 = ((x105!=(x106<=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	static volatile int32_t t27 = 6362919;

    t27 = ((x109!=(x110<=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	volatile uint8_t x114 = 11U;
	int8_t x115 = -1;
	volatile int8_t x116 = -1;
	volatile int32_t t28 = 2028114;

    t28 = ((x113!=(x114<=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = 28U;
	int64_t x118 = 1LL;
	uint64_t x119 = 46850262335697LLU;
	volatile uint16_t x120 = 223U;
	int32_t t29 = -8;

    t29 = ((x117!=(x118<=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	static volatile int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;

    t30 = ((x121!=(x122<=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	static volatile int64_t x127 = INT64_MIN;
	volatile int32_t x128 = 162097;
	static volatile int32_t t31 = 997642090;

    t31 = ((x125!=(x126<=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = UINT8_MAX;
	uint32_t x130 = 1U;
	int64_t x131 = INT64_MIN;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -543468626;

    t32 = ((x129!=(x130<=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x133 = 185094LL;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 1201;

    t33 = ((x133!=(x134<=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 78U;
	int64_t x138 = INT64_MAX;
	volatile int8_t x139 = -1;
	int8_t x140 = INT8_MAX;

    t34 = ((x137!=(x138<=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	volatile uint32_t x142 = 28009U;
	int8_t x143 = -1;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t35 = 10208026;

    t35 = ((x141!=(x142<=x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 6223454LLU;
	int32_t x146 = INT32_MIN;
	static volatile uint16_t x148 = 2U;
	int32_t t36 = -206257707;

    t36 = ((x145!=(x146<=x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	uint64_t x151 = 174587009373402871LLU;
	static uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = 1040017;

    t37 = ((x149!=(x150<=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x154 = 3U;
	static uint8_t x156 = 1U;
	volatile int32_t t38 = -82338;

    t38 = ((x153!=(x154<=x155))==x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x158 = UINT64_MAX;
	static int16_t x159 = INT16_MIN;
	uint8_t x160 = 0U;
	volatile int32_t t39 = -191;

    t39 = ((x157!=(x158<=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 80U;
	volatile uint32_t x162 = 119672U;
	uint16_t x163 = 16353U;
	int8_t x164 = 0;

    t40 = ((x161!=(x162<=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x165 = UINT16_MAX;
	uint16_t x166 = 19484U;
	int16_t x168 = -1;
	int32_t t41 = 5;

    t41 = ((x165!=(x166<=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int8_t x170 = -1;
	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = -1463625;

    t42 = ((x169!=(x170<=x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = -1LL;
	static uint8_t x176 = 3U;
	int32_t t43 = 1896;

    t43 = ((x173!=(x174<=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = 24566776LL;
	int64_t x179 = 3690867134736LL;
	volatile uint8_t x180 = UINT8_MAX;
	static volatile int32_t t44 = -218501216;

    t44 = ((x177!=(x178<=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x182 = 2167679390868106LLU;
	uint16_t x183 = 14U;
	int8_t x184 = -1;
	int32_t t45 = 34980;

    t45 = ((x181!=(x182<=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x185 = -55;
	int16_t x186 = -1;
	int64_t x187 = -1LL;
	uint16_t x188 = 5475U;
	int32_t t46 = 264435992;

    t46 = ((x185!=(x186<=x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	int8_t x190 = -1;
	static int64_t x191 = 7LL;
	int32_t x192 = INT32_MAX;
	static volatile int32_t t47 = -201;

    t47 = ((x189!=(x190<=x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 0;

    t48 = ((x193!=(x194<=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 1U;
	static int64_t x198 = INT64_MIN;
	int64_t x200 = 22LL;
	static volatile int32_t t49 = 7;

    t49 = ((x197!=(x198<=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x202 = -84;
	static volatile uint64_t x203 = 199027348316LLU;
	volatile int32_t t50 = 49146;

    t50 = ((x201!=(x202<=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 1;
	uint16_t x207 = 76U;
	int32_t x208 = -1;
	static volatile int32_t t51 = 1;

    t51 = ((x205!=(x206<=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 129040U;
	int16_t x210 = INT16_MAX;
	volatile int32_t x211 = -1;
	volatile uint8_t x212 = 28U;

    t52 = ((x209!=(x210<=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = UINT64_MAX;
	int32_t x214 = INT32_MIN;

    t53 = ((x213!=(x214<=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x218 = 9U;
	volatile int32_t x219 = 108589629;
	uint64_t x220 = UINT64_MAX;
	int32_t t54 = 1072044;

    t54 = ((x217!=(x218<=x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	static volatile uint16_t x222 = UINT16_MAX;
	int16_t x223 = -1;
	volatile uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = 12126;

    t55 = ((x221!=(x222<=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -1;
	static volatile int32_t x226 = 109079547;
	int8_t x227 = -6;
	int16_t x228 = 212;
	volatile int32_t t56 = -3997317;

    t56 = ((x225!=(x226<=x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 9;

    t57 = ((x229!=(x230<=x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x235 = 0;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -24225207;

    t58 = ((x233!=(x234<=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -287236607;
	volatile int16_t x238 = INT16_MIN;
	uint8_t x240 = 14U;
	int32_t t59 = -859;

    t59 = ((x237!=(x238<=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x242 = 64321582110711738LLU;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = -1;

    t60 = ((x241!=(x242<=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 1;
	static uint16_t x246 = 2U;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -476646;

    t61 = ((x245!=(x246<=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	static int32_t x251 = 6915;
	static uint8_t x252 = UINT8_MAX;

    t62 = ((x249!=(x250<=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = -1;
	volatile uint16_t x254 = 12U;
	volatile uint32_t x256 = 2265669U;
	int32_t t63 = 2309138;

    t63 = ((x253!=(x254<=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -17;
	int16_t x258 = INT16_MIN;
	int64_t x259 = 1019323932380584632LL;
	volatile int8_t x260 = -1;
	int32_t t64 = 52861;

    t64 = ((x257!=(x258<=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = -417;
	uint16_t x263 = 7U;
	static uint32_t x264 = 7U;
	volatile int32_t t65 = -767282;

    t65 = ((x261!=(x262<=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = 7394U;
	static volatile int32_t t66 = -860;

    t66 = ((x265!=(x266<=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x269 = -1LL;
	static int16_t x270 = -126;
	static uint16_t x271 = 7U;
	int64_t x272 = INT64_MAX;
	static volatile int32_t t67 = -6858;

    t67 = ((x269!=(x270<=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MIN;
	int8_t x274 = 1;
	int16_t x275 = INT16_MAX;
	volatile int32_t t68 = 7445;

    t68 = ((x273!=(x274<=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 105928526792641LLU;
	uint16_t x278 = 350U;
	uint32_t x279 = 0U;

    t69 = ((x277!=(x278<=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -581280122LL;
	int16_t x282 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 825;

    t70 = ((x281!=(x282<=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -434;
	int8_t x287 = -3;
	volatile int32_t t71 = -1;

    t71 = ((x285!=(x286<=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = UINT16_MAX;
	volatile int64_t x292 = -1LL;

    t72 = ((x289!=(x290<=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = 3;
	static uint64_t x296 = 17065887774LLU;

    t73 = ((x293!=(x294<=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x297 = -231977744492LL;
	int8_t x298 = -1;
	static volatile int64_t x299 = 93261597720LL;
	int32_t t74 = -797989;

    t74 = ((x297!=(x298<=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 0U;
	static volatile uint64_t x302 = 519338786569LLU;
	volatile int32_t x303 = -1;
	uint64_t x304 = 165829276448LLU;
	int32_t t75 = 181011408;

    t75 = ((x301!=(x302<=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MIN;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = -1568782LL;
	static int32_t t76 = -17212817;

    t76 = ((x305!=(x306<=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 123784U;
	int64_t x310 = -2135312673051526400LL;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;

    t77 = ((x309!=(x310<=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = INT64_MAX;
	uint32_t x314 = 3352U;
	static int32_t x315 = -1;
	int32_t x316 = -19766020;
	int32_t t78 = 18821;

    t78 = ((x313!=(x314<=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -3;
	int64_t x318 = -35505896497886372LL;
	int64_t x319 = INT64_MIN;
	static volatile int8_t x320 = INT8_MAX;

    t79 = ((x317!=(x318<=x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MAX;
	int64_t x324 = INT64_MAX;

    t80 = ((x321!=(x322<=x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	volatile int32_t x328 = -5410332;
	int32_t t81 = -45;

    t81 = ((x325!=(x326<=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x329 = -3601385;
	uint16_t x331 = UINT16_MAX;
	volatile int64_t x332 = -1LL;
	volatile int32_t t82 = -3664;

    t82 = ((x329!=(x330<=x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -96668655228943LL;
	int32_t x334 = 133887;
	int64_t x335 = -1LL;
	int16_t x336 = -1;
	int32_t t83 = -820744799;

    t83 = ((x333!=(x334<=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = -12;
	static int32_t x339 = 7633;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 2;

    t84 = ((x337!=(x338<=x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x341 = -145905LL;
	int16_t x343 = INT16_MIN;
	volatile int32_t x344 = -1;
	static int32_t t85 = 13;

    t85 = ((x341!=(x342<=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	int32_t x348 = 37778;
	int32_t t86 = 0;

    t86 = ((x345!=(x346<=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	uint8_t x350 = 17U;
	uint64_t x351 = 32003233015166LLU;
	uint64_t x352 = UINT64_MAX;

    t87 = ((x349!=(x350<=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 84318488LL;
	volatile int16_t x354 = -15012;
	int32_t x355 = -5124;
	static volatile int32_t x356 = INT32_MAX;
	int32_t t88 = 503;

    t88 = ((x353!=(x354<=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = INT8_MAX;
	uint16_t x359 = 1U;
	uint8_t x360 = UINT8_MAX;
	int32_t t89 = -12;

    t89 = ((x357!=(x358<=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = 37757349126824LL;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = 1022857910634589LLU;
	volatile int32_t x364 = -1;
	int32_t t90 = -298847;

    t90 = ((x361!=(x362<=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 143600500;
	uint8_t x366 = 58U;
	volatile uint32_t x367 = 11913U;
	int16_t x368 = INT16_MIN;

    t91 = ((x365!=(x366<=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 210U;
	uint16_t x370 = 5U;
	int32_t x371 = INT32_MIN;
	int64_t x372 = 83738742033971LL;
	static int32_t t92 = -258710219;

    t92 = ((x369!=(x370<=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -2671;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = UINT32_MAX;
	static uint64_t x376 = 7099LLU;
	volatile int32_t t93 = 264;

    t93 = ((x373!=(x374<=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 3863U;
	int16_t x379 = -90;
	static int64_t x380 = -901836955176053LL;
	volatile int32_t t94 = -3;

    t94 = ((x377!=(x378<=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	uint32_t x382 = UINT32_MAX;
	uint64_t x383 = 3036478646LLU;
	volatile int32_t t95 = 38;

    t95 = ((x381!=(x382<=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	uint16_t x386 = UINT16_MAX;
	static uint16_t x387 = 1U;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 10065;

    t96 = ((x385!=(x386<=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	static int8_t x390 = INT8_MIN;
	volatile uint32_t x391 = 13U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 461827663;

    t97 = ((x389!=(x390<=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MIN;
	uint32_t x394 = 54U;
	uint64_t x395 = 750LLU;
	int32_t x396 = 204798;
	volatile int32_t t98 = -58;

    t98 = ((x393!=(x394<=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -108;
	volatile int16_t x398 = 3;
	int8_t x399 = 18;
	int32_t x400 = -1;
	int32_t t99 = 117;

    t99 = ((x397!=(x398<=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = UINT64_MAX;
	int64_t x402 = INT64_MAX;
	volatile uint8_t x403 = 29U;
	volatile uint8_t x404 = 0U;
	volatile int32_t t100 = -3171837;

    t100 = ((x401!=(x402<=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	uint16_t x406 = 24U;
	uint32_t x408 = 3466U;
	volatile int32_t t101 = 8;

    t101 = ((x405!=(x406<=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -5204870545LL;
	uint16_t x411 = 1882U;
	volatile int32_t x412 = 7004079;

    t102 = ((x409!=(x410<=x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x414 = 1U;
	volatile int16_t x415 = 37;
	int16_t x416 = INT16_MAX;
	volatile int32_t t103 = 8510543;

    t103 = ((x413!=(x414<=x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -3;
	static volatile int8_t x418 = -1;
	int64_t x419 = INT64_MAX;
	uint16_t x420 = UINT16_MAX;

    t104 = ((x417!=(x418<=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	static int16_t x422 = -1;
	volatile int64_t x423 = -3681327797LL;
	volatile int32_t t105 = 18298;

    t105 = ((x421!=(x422<=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    

    t106 = ((x425!=(x426<=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = 257734323433774118LL;
	int32_t x430 = -1;
	static uint64_t x431 = 633590882515160LLU;
	volatile int8_t x432 = 1;
	int32_t t107 = -1;

    t107 = ((x429!=(x430<=x431))==x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 40U;
	static volatile int8_t x434 = INT8_MIN;
	int8_t x436 = INT8_MAX;
	int32_t t108 = -6;

    t108 = ((x433!=(x434<=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MIN;
	volatile int64_t x438 = INT64_MAX;
	int32_t x440 = -1;
	int32_t t109 = 4388496;

    t109 = ((x437!=(x438<=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = 48976185U;
	int64_t x444 = -1LL;
	volatile int32_t t110 = 202283;

    t110 = ((x441!=(x442<=x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 1LL;
	uint32_t x446 = 128167145U;
	static int32_t x447 = INT32_MIN;
	volatile int32_t t111 = 7;

    t111 = ((x445!=(x446<=x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = INT64_MIN;
	uint16_t x451 = UINT16_MAX;
	static int32_t t112 = 4;

    t112 = ((x449!=(x450<=x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = -1LL;
	int32_t x455 = -1;
	int64_t x456 = -1LL;
	volatile int32_t t113 = -418982416;

    t113 = ((x453!=(x454<=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = -4;
	uint16_t x459 = 6U;
	int64_t x460 = INT64_MIN;
	volatile int32_t t114 = -13148395;

    t114 = ((x457!=(x458<=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -2;
	volatile uint32_t x462 = 661268U;
	uint8_t x463 = 18U;
	uint8_t x464 = 31U;

    t115 = ((x461!=(x462<=x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x466 = 993302156263028LLU;
	int16_t x467 = -1;
	static volatile uint8_t x468 = UINT8_MAX;

    t116 = ((x465!=(x466<=x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = -1;
	uint64_t x470 = 16772497558119LLU;
	volatile int8_t x471 = INT8_MIN;
	uint16_t x472 = UINT16_MAX;
	static int32_t t117 = -386875903;

    t117 = ((x469!=(x470<=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = 30;
	uint32_t x474 = 2U;
	uint64_t x476 = UINT64_MAX;
	int32_t t118 = 0;

    t118 = ((x473!=(x474<=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	static int32_t x478 = -6192205;
	uint64_t x479 = UINT64_MAX;
	uint16_t x480 = 2304U;
	int32_t t119 = -6477;

    t119 = ((x477!=(x478<=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x481 = 108155LLU;
	int8_t x482 = -1;
	static uint32_t x484 = 1401289U;

    t120 = ((x481!=(x482<=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	int8_t x486 = -10;
	static int32_t x487 = INT32_MIN;
	int32_t x488 = -117995161;
	static int32_t t121 = 0;

    t121 = ((x485!=(x486<=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x489 = 15311U;
	int8_t x491 = INT8_MAX;
	static uint8_t x492 = 13U;

    t122 = ((x489!=(x490<=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	int32_t x494 = INT32_MIN;
	uint32_t x495 = UINT32_MAX;
	volatile int8_t x496 = -1;
	int32_t t123 = 0;

    t123 = ((x493!=(x494<=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	static int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = 1179284U;
	static int32_t t124 = -941;

    t124 = ((x497!=(x498<=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -7077;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = -11;
	static int32_t t125 = 2722;

    t125 = ((x501!=(x502<=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	static uint64_t x506 = 1214957LLU;
	volatile int32_t t126 = 97169157;

    t126 = ((x505!=(x506<=x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = -1;
	uint16_t x510 = 3U;
	int8_t x511 = -1;
	uint16_t x512 = 6U;
	static volatile int32_t t127 = 7;

    t127 = ((x509!=(x510<=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = -1LL;
	int64_t x515 = -10055342LL;
	volatile int64_t x516 = INT64_MIN;
	static volatile int32_t t128 = 9027;

    t128 = ((x513!=(x514<=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = 0;
	static volatile uint32_t x518 = UINT32_MAX;
	static volatile uint32_t x519 = 2144668839U;
	int8_t x520 = -1;
	static int32_t t129 = 25;

    t129 = ((x517!=(x518<=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = -5;
	int32_t x523 = INT32_MAX;
	static volatile int64_t x524 = INT64_MIN;
	int32_t t130 = -6603;

    t130 = ((x521!=(x522<=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 42201749718379LLU;
	int8_t x526 = -7;
	int64_t x527 = INT64_MAX;
	int8_t x528 = -16;
	static int32_t t131 = 603371;

    t131 = ((x525!=(x526<=x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x530 = 68U;
	int16_t x531 = 1079;
	volatile int32_t x532 = 27724;
	volatile int32_t t132 = -1;

    t132 = ((x529!=(x530<=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 0;
	uint8_t x534 = UINT8_MAX;
	static uint64_t x535 = 3062588313513332LLU;
	uint64_t x536 = 12LLU;
	volatile int32_t t133 = 28;

    t133 = ((x533!=(x534<=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MAX;
	int16_t x539 = INT16_MIN;
	static int16_t x540 = INT16_MIN;
	int32_t t134 = 5468;

    t134 = ((x537!=(x538<=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 604868494;
	volatile int32_t x542 = 10494530;
	int32_t x544 = 15138230;
	volatile int32_t t135 = 9243;

    t135 = ((x541!=(x542<=x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = UINT8_MAX;
	int32_t x546 = INT32_MIN;
	uint16_t x548 = 63U;
	volatile int32_t t136 = -3;

    t136 = ((x545!=(x546<=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 1523496U;
	int32_t x551 = -1;
	int8_t x552 = INT8_MIN;
	static int32_t t137 = 434;

    t137 = ((x549!=(x550<=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	static int16_t x555 = INT16_MIN;
	volatile int32_t x556 = INT32_MIN;
	volatile int32_t t138 = -183615557;

    t138 = ((x553!=(x554<=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int32_t x559 = -699908518;
	int64_t x560 = -33024998715181LL;
	volatile int32_t t139 = 151569857;

    t139 = ((x557!=(x558<=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x562 = INT16_MIN;
	uint8_t x563 = 10U;

    t140 = ((x561!=(x562<=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	static uint8_t x568 = 4U;
	volatile int32_t t141 = -182739;

    t141 = ((x565!=(x566<=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x571 = 3LLU;
	uint32_t x572 = 2073285U;
	static int32_t t142 = 115;

    t142 = ((x569!=(x570<=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MIN;
	int16_t x574 = -1;
	int32_t t143 = 303261;

    t143 = ((x573!=(x574<=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x577 = 5578461441795LLU;
	int16_t x578 = 199;
	uint32_t x579 = 2085666257U;
	int16_t x580 = INT16_MAX;
	int32_t t144 = 17021666;

    t144 = ((x577!=(x578<=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = -1;
	static int32_t x583 = INT32_MIN;
	int32_t t145 = -7411621;

    t145 = ((x581!=(x582<=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = INT8_MIN;
	volatile int64_t x586 = INT64_MIN;
	int16_t x587 = -39;
	static int16_t x588 = 8;

    t146 = ((x585!=(x586<=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MIN;
	static int32_t x590 = -408873538;
	int8_t x592 = 56;
	volatile int32_t t147 = -2996;

    t147 = ((x589!=(x590<=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	uint8_t x594 = UINT8_MAX;
	volatile int8_t x595 = -15;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = 53;

    t148 = ((x593!=(x594<=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	uint32_t x599 = 14709U;
	int64_t x600 = -1LL;
	volatile int32_t t149 = -2095025;

    t149 = ((x597!=(x598<=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -1LL;
	static int64_t x603 = -1LL;
	volatile int32_t x604 = INT32_MAX;
	int32_t t150 = -406728;

    t150 = ((x601!=(x602<=x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int8_t x607 = 0;
	static int32_t x608 = INT32_MIN;
	int32_t t151 = -15785;

    t151 = ((x605!=(x606<=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 0;
	static int32_t x610 = INT32_MIN;
	int16_t x611 = INT16_MAX;
	volatile int32_t t152 = 90;

    t152 = ((x609!=(x610<=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -102667525856LL;
	uint16_t x615 = UINT16_MAX;
	static uint8_t x616 = UINT8_MAX;

    t153 = ((x613!=(x614<=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x620 = 4LLU;
	int32_t t154 = 1;

    t154 = ((x617!=(x618<=x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 97770U;
	int64_t x622 = INT64_MAX;
	int8_t x623 = INT8_MIN;
	int32_t t155 = 118;

    t155 = ((x621!=(x622<=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	int64_t x626 = INT64_MIN;
	volatile int64_t x627 = INT64_MAX;
	int16_t x628 = INT16_MIN;
	volatile int32_t t156 = -2167529;

    t156 = ((x625!=(x626<=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -42379047;
	int32_t x630 = INT32_MIN;
	volatile int16_t x631 = 6146;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = -678;

    t157 = ((x629!=(x630<=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = -1;
	uint64_t x634 = 5253628477632322210LLU;
	uint32_t x635 = 2091277U;
	uint64_t x636 = UINT64_MAX;
	volatile int32_t t158 = 422670;

    t158 = ((x633!=(x634<=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 7791U;
	int32_t t159 = -12;

    t159 = ((x637!=(x638<=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = 29U;
	volatile int64_t x642 = INT64_MIN;
	uint32_t x644 = 18697U;
	int32_t t160 = 14464;

    t160 = ((x641!=(x642<=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = -1;
	int16_t x647 = INT16_MAX;
	volatile int32_t t161 = 1;

    t161 = ((x645!=(x646<=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x650 = INT16_MIN;
	int16_t x652 = INT16_MAX;
	int32_t t162 = 0;

    t162 = ((x649!=(x650<=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = INT8_MIN;
	volatile int32_t x655 = -1;
	int64_t x656 = INT64_MIN;
	int32_t t163 = -5;

    t163 = ((x653!=(x654<=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -78657369408947LL;
	volatile uint32_t x658 = 114891185U;
	int32_t x660 = INT32_MIN;
	volatile int32_t t164 = -980457;

    t164 = ((x657!=(x658<=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = -1;
	uint16_t x662 = 7019U;
	int16_t x663 = INT16_MIN;
	static int64_t x664 = INT64_MIN;
	volatile int32_t t165 = 92248;

    t165 = ((x661!=(x662<=x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = 575216698341LLU;
	static volatile int32_t x667 = INT32_MAX;
	static int8_t x668 = -35;
	volatile int32_t t166 = -220766536;

    t166 = ((x665!=(x666<=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 11;
	uint32_t x670 = UINT32_MAX;
	uint32_t x671 = 31062682U;
	uint16_t x672 = UINT16_MAX;
	int32_t t167 = 825193;

    t167 = ((x669!=(x670<=x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = 0;
	int32_t x674 = -1;
	int16_t x675 = INT16_MIN;
	int64_t x676 = -1183825371LL;

    t168 = ((x673!=(x674<=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 5LLU;
	int32_t x678 = -488;
	uint16_t x679 = UINT16_MAX;
	static int8_t x680 = -1;
	volatile int32_t t169 = 3289590;

    t169 = ((x677!=(x678<=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x681 = UINT8_MAX;
	static int8_t x682 = INT8_MIN;
	uint8_t x684 = 0U;
	int32_t t170 = -110088;

    t170 = ((x681!=(x682<=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x685 = 5210LLU;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t171 = 138651;

    t171 = ((x685!=(x686<=x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -22;
	volatile uint8_t x690 = UINT8_MAX;
	static volatile int16_t x692 = -1;
	static int32_t t172 = 425;

    t172 = ((x689!=(x690<=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x693 = 0U;
	uint8_t x694 = 1U;
	uint8_t x695 = 6U;
	int8_t x696 = -1;
	int32_t t173 = -127164;

    t173 = ((x693!=(x694<=x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x698 = -45469559LL;
	static int16_t x699 = INT16_MIN;
	uint16_t x700 = 1U;

    t174 = ((x697!=(x698<=x699))==x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 21U;
	volatile int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MIN;
	int16_t x704 = 1;
	static volatile int32_t t175 = 491618;

    t175 = ((x701!=(x702<=x703))==x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	uint64_t x706 = 83198854806168LLU;
	static uint8_t x707 = 0U;
	int32_t x708 = 6604;

    t176 = ((x705!=(x706<=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	uint16_t x710 = 19U;
	volatile uint64_t x712 = UINT64_MAX;
	int32_t t177 = -6889029;

    t177 = ((x709!=(x710<=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x715 = INT16_MIN;
	volatile int16_t x716 = INT16_MIN;
	volatile int32_t t178 = -7;

    t178 = ((x713!=(x714<=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x719 = INT32_MIN;
	int16_t x720 = -43;
	volatile int32_t t179 = -1272;

    t179 = ((x717!=(x718<=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	static int64_t x722 = 621948535394LL;
	int16_t x723 = -1;
	int16_t x724 = -1;
	int32_t t180 = 1331627;

    t180 = ((x721!=(x722<=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MAX;
	static int32_t x727 = INT32_MIN;
	int32_t t181 = 49086;

    t181 = ((x725!=(x726<=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int16_t x730 = -1;
	static int16_t x731 = -4121;
	static uint64_t x732 = 5622247215507LLU;

    t182 = ((x729!=(x730<=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 427599812792517804LLU;
	int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MIN;
	static int16_t x736 = -1;
	static int32_t t183 = -2435547;

    t183 = ((x733!=(x734<=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x737 = UINT8_MAX;
	volatile int32_t x738 = INT32_MIN;
	int32_t x739 = INT32_MAX;
	int16_t x740 = -1;
	static int32_t t184 = 23589;

    t184 = ((x737!=(x738<=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	volatile int16_t x742 = 147;
	int16_t x743 = INT16_MIN;
	volatile int32_t x744 = -185;

    t185 = ((x741!=(x742<=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x746 = 5030825629LL;
	uint64_t x747 = 6967387874LLU;
	static int32_t t186 = -427940477;

    t186 = ((x745!=(x746<=x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = INT32_MIN;
	static uint16_t x750 = UINT16_MAX;
	int64_t x751 = -2769LL;
	static int32_t t187 = 889876805;

    t187 = ((x749!=(x750<=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x756 = INT16_MIN;
	volatile int32_t t188 = -12785;

    t188 = ((x753!=(x754<=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x757 = UINT64_MAX;
	int16_t x758 = -1;
	uint64_t x759 = 59041LLU;
	volatile int8_t x760 = -1;

    t189 = ((x757!=(x758<=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	uint16_t x762 = 65U;
	int8_t x763 = INT8_MIN;
	static uint32_t x764 = 13230U;
	int32_t t190 = -19;

    t190 = ((x761!=(x762<=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -107326;
	static int8_t x766 = INT8_MIN;
	static int32_t x767 = -1;
	volatile uint32_t x768 = UINT32_MAX;
	int32_t t191 = -11382;

    t191 = ((x765!=(x766<=x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	int64_t x770 = -8043LL;
	volatile int8_t x771 = INT8_MIN;
	uint16_t x772 = 1015U;
	int32_t t192 = 230;

    t192 = ((x769!=(x770<=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	int32_t x774 = INT32_MAX;
	static int32_t x775 = INT32_MIN;
	uint32_t x776 = 5019U;
	int32_t t193 = -112583;

    t193 = ((x773!=(x774<=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x777 = UINT32_MAX;
	uint8_t x778 = 7U;
	static volatile uint64_t x780 = 5984708LLU;
	int32_t t194 = 263901;

    t194 = ((x777!=(x778<=x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 300900260;
	int16_t x782 = -538;
	uint64_t x783 = 15LLU;
	static volatile int32_t t195 = -50941;

    t195 = ((x781!=(x782<=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MAX;
	uint64_t x787 = 1316593704131523LLU;
	static volatile int8_t x788 = -1;
	static int32_t t196 = -104340134;

    t196 = ((x785!=(x786<=x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x790 = -20423;
	uint64_t x791 = UINT64_MAX;
	volatile uint32_t x792 = UINT32_MAX;
	int32_t t197 = 3;

    t197 = ((x789!=(x790<=x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	static int16_t x796 = -4991;
	static int32_t t198 = -56152282;

    t198 = ((x793!=(x794<=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = 564689864581211834LL;
	volatile int8_t x799 = INT8_MIN;
	int64_t x800 = 0LL;
	int32_t t199 = -1;

    t199 = ((x797!=(x798<=x799))==x800);

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

