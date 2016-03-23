
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

int64_t x2 = INT64_MIN;
int8_t x3 = INT8_MIN;
int64_t x4 = -1LL;
static int32_t t1 = -292;
int64_t x11 = INT64_MIN;
uint64_t t4 = 0LLU;
int16_t x22 = INT16_MIN;
int32_t t5 = -60;
int64_t x25 = INT64_MAX;
int16_t x28 = -1;
static int32_t t9 = 291352836;
int64_t x59 = INT64_MIN;
int8_t x76 = 6;
int32_t t17 = -1306;
uint64_t x79 = 213004097085913735LLU;
uint64_t t18 = 386LLU;
int8_t x99 = 46;
static volatile int64_t t23 = 23286847LL;
int32_t t25 = -262838673;
int16_t x112 = INT16_MAX;
int16_t x116 = INT16_MIN;
int32_t t27 = -233009;
static volatile int16_t x117 = 4502;
static int16_t x124 = 18;
volatile uint64_t t30 = 7375717676579LLU;
int32_t x138 = INT32_MIN;
int16_t x139 = INT16_MIN;
volatile int16_t x143 = 7141;
static uint64_t x146 = UINT64_MAX;
int8_t x147 = INT8_MAX;
volatile int16_t x154 = 38;
static volatile uint64_t x156 = 47119554LLU;
int32_t t39 = 212;
int8_t x168 = -50;
uint32_t x172 = 153623946U;
uint32_t t41 = 5029302U;
volatile uint32_t x174 = 1U;
uint32_t x176 = 67675815U;
int8_t x177 = INT8_MIN;
static uint64_t x186 = 3431LLU;
static int16_t x187 = INT16_MAX;
int8_t x191 = INT8_MIN;
int32_t x192 = INT32_MIN;
static volatile int8_t x196 = INT8_MIN;
int32_t t48 = -1;
volatile uint16_t x201 = 1U;
uint32_t x203 = 3355U;
int8_t x204 = -1;
int64_t x206 = INT64_MIN;
static int32_t x209 = -445;
volatile int32_t t52 = -88090;
uint32_t x221 = 0U;
uint16_t x224 = 29221U;
int32_t t54 = 352;
int32_t x229 = INT32_MIN;
int32_t t57 = -1806;
static uint16_t x239 = 2741U;
int32_t x240 = INT32_MIN;
static int64_t x241 = INT64_MIN;
uint32_t x243 = 304459U;
volatile int8_t x245 = -43;
uint64_t x252 = 39252LLU;
int16_t x260 = 136;
volatile uint64_t t64 = 3498234LLU;
int16_t x270 = 7;
int64_t x274 = INT64_MAX;
volatile int64_t t67 = -12331131694880LL;
int16_t x278 = INT16_MIN;
volatile uint64_t x279 = 3621789221693LLU;
volatile uint64_t t68 = 2128363535372227LLU;
volatile uint64_t t72 = 81228403648723LLU;
int8_t x300 = -1;
int32_t t73 = -12;
int64_t x305 = INT64_MAX;
uint32_t x308 = UINT32_MAX;
uint16_t x318 = UINT16_MAX;
int64_t x326 = -1LL;
volatile int64_t t81 = -59LL;
static uint16_t x342 = 1U;
volatile int8_t x352 = INT8_MIN;
volatile int64_t x353 = INT64_MIN;
static int32_t x355 = -1068955;
static int32_t t86 = -389958;
int16_t x358 = INT16_MIN;
int8_t x359 = 0;
int16_t x361 = INT16_MAX;
int8_t x364 = 4;
uint64_t x371 = 266632349954265179LLU;
int64_t x372 = INT64_MAX;
int16_t x374 = 0;
int16_t x376 = 877;
uint64_t x379 = 114165835892003LLU;
uint64_t x381 = UINT64_MAX;
volatile int64_t x384 = -1LL;
volatile int64_t t93 = -2027920585879253129LL;
int8_t x389 = INT8_MAX;
int8_t x392 = INT8_MIN;
int32_t t95 = -2;
int32_t x397 = INT32_MIN;
int16_t x398 = 4629;
static uint64_t x402 = UINT64_MAX;
volatile int8_t x403 = -1;
volatile uint32_t x404 = 427514U;
static int32_t x406 = -137678752;
int32_t t99 = 7684;
int8_t x409 = INT8_MIN;
volatile int32_t x417 = -2;
int64_t x419 = -174LL;
volatile int32_t t102 = -8145;
static int64_t x421 = -8045035207LL;
volatile int64_t x424 = INT64_MIN;
volatile int64_t t103 = 40LL;
static int8_t x428 = INT8_MAX;
volatile uint8_t x432 = UINT8_MAX;
volatile int32_t x444 = -1;
uint64_t x447 = UINT64_MAX;
volatile uint8_t x460 = UINT8_MAX;
uint32_t x466 = UINT32_MAX;
int64_t x469 = INT64_MAX;
static int32_t x473 = -1;
uint16_t x474 = 2351U;
int32_t t116 = 4;
int8_t x477 = INT8_MIN;
volatile uint64_t x481 = 2032624907089LLU;
static int8_t x499 = INT8_MIN;
int64_t t122 = -7204519LL;
uint16_t x523 = UINT16_MAX;
static volatile int32_t t128 = 143770;
static int8_t x547 = 1;
volatile int16_t x550 = INT16_MIN;
int8_t x552 = 4;
int8_t x554 = -1;
int8_t x556 = -1;
uint32_t x557 = UINT32_MAX;
uint64_t x562 = UINT64_MAX;
int16_t x565 = INT16_MIN;
uint32_t x567 = UINT32_MAX;
volatile int32_t t138 = 1;
int16_t x569 = -1;
uint8_t x575 = UINT8_MAX;
static volatile int32_t x581 = 27;
uint64_t x591 = 509622786LLU;
uint32_t x599 = UINT32_MAX;
volatile uint16_t x603 = UINT16_MAX;
int32_t t147 = 49268;
int64_t x614 = INT64_MAX;
volatile int8_t x615 = 1;
int32_t t151 = 584009197;
int8_t x621 = INT8_MIN;
uint64_t x628 = UINT64_MAX;
static int64_t x631 = INT64_MIN;
int16_t x640 = -79;
static volatile int64_t x644 = 41LL;
uint8_t x650 = 4U;
volatile int16_t x655 = INT16_MAX;
volatile uint64_t t160 = 3443435LLU;
int32_t t164 = 21727223;
int16_t x685 = INT16_MIN;
volatile int32_t t169 = -109098;
static int32_t x698 = INT32_MIN;
int32_t x708 = 54148021;
volatile int32_t t174 = 192;
int32_t t175 = 52498478;
int32_t x717 = INT32_MAX;
int32_t x721 = -16452608;
uint32_t x723 = 261U;
int16_t x735 = -1;
uint32_t x737 = 2380754U;
int8_t x739 = INT8_MAX;
uint16_t x756 = 3874U;
uint8_t x758 = 125U;
volatile int64_t x759 = 2LL;
int32_t x765 = -1;
volatile int32_t x769 = INT32_MIN;
int16_t x770 = INT16_MAX;
static uint32_t x772 = 7836344U;
uint64_t x774 = 3336265679722013873LLU;
int8_t x775 = INT8_MAX;
static int32_t t189 = -216;
volatile int64_t x781 = INT64_MAX;
volatile int8_t x782 = 7;
volatile uint8_t x783 = UINT8_MAX;
volatile int8_t x784 = INT8_MIN;
static volatile uint32_t x787 = 29247601U;
int16_t x790 = INT16_MAX;
int32_t x791 = INT32_MIN;
volatile int16_t x792 = INT16_MIN;
uint64_t x796 = 993567665515066LLU;
int64_t x814 = INT64_MIN;
volatile int64_t x816 = INT64_MAX;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	volatile int64_t t0 = -116427625214752687LL;

    t0 = ((x1>(x2<=x3))/x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MIN;

    t1 = ((x5>(x6<=x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 36U;
	int32_t x10 = INT32_MIN;
	int8_t x12 = 6;
	int32_t t2 = 708378;

    t2 = ((x9>(x10<=x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int32_t x14 = 30129585;
	static uint16_t x15 = 3026U;
	int64_t x16 = -1LL;
	volatile int64_t t3 = -15706981LL;

    t3 = ((x13>(x14<=x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 126U;
	uint64_t x18 = 7135312LLU;
	uint32_t x19 = 44U;
	uint64_t x20 = 4657135512830870811LLU;

    t4 = ((x17>(x18<=x19))/x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int32_t x23 = -107123;
	int32_t x24 = 5134;

    t5 = ((x21>(x22<=x23))/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -1;
	int16_t x27 = -49;
	int32_t t6 = 894280247;

    t6 = ((x25>(x26<=x27))/x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 2LLU;
	int8_t x30 = -3;
	uint8_t x31 = 0U;
	uint8_t x32 = 20U;
	int32_t t7 = 955;

    t7 = ((x29>(x30<=x31))/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int8_t x34 = 1;
	static int64_t x35 = INT64_MAX;
	static int32_t x36 = INT32_MIN;
	static int32_t t8 = 3;

    t8 = ((x33>(x34<=x35))/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = -1;
	static int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	static uint8_t x40 = 2U;

    t9 = ((x37>(x38<=x39))/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 36U;
	int8_t x46 = INT8_MIN;
	int8_t x47 = -4;
	int16_t x48 = INT16_MIN;
	int32_t t10 = -5915;

    t10 = ((x45>(x46<=x47))/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x49 = 20930U;
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MAX;
	int32_t x52 = -1;
	volatile int32_t t11 = 6184;

    t11 = ((x49>(x50<=x51))/x52);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1492677510267LL;
	int16_t x54 = INT16_MIN;
	int64_t x55 = -42789875752LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -156207337;

    t12 = ((x53>(x54<=x55))/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = -1LL;
	int64_t x58 = 76033193LL;
	static volatile uint16_t x60 = UINT16_MAX;
	int32_t t13 = -3;

    t13 = ((x57>(x58<=x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	int64_t x62 = INT64_MIN;
	volatile int16_t x63 = INT16_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	uint32_t t14 = 41682584U;

    t14 = ((x61>(x62<=x63))/x64);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 10U;
	volatile int8_t x68 = -5;
	int32_t t15 = -3184;

    t15 = ((x65>(x66<=x67))/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	uint32_t x70 = 1039U;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = INT64_MIN;
	static int64_t t16 = -13530LL;

    t16 = ((x69>(x70<=x71))/x72);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 5535U;
	int32_t x74 = INT32_MAX;
	int16_t x75 = 72;

    t17 = ((x73>(x74<=x75))/x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x77 = INT64_MAX;
	uint16_t x78 = 1491U;
	uint64_t x80 = 8408879784LLU;

    t18 = ((x77>(x78<=x79))/x80);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	volatile int64_t x82 = 36LL;
	int64_t x83 = 121815914456615847LL;
	static volatile uint8_t x84 = UINT8_MAX;
	int32_t t19 = 299663;

    t19 = ((x81>(x82<=x83))/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x85 = -109;
	int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	int8_t x88 = 2;
	volatile int32_t t20 = 206097506;

    t20 = ((x85>(x86<=x87))/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	static int8_t x90 = 15;
	int8_t x91 = -13;
	int32_t x92 = -1;
	int32_t t21 = -9;

    t21 = ((x89>(x90<=x91))/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t22 = 951005675;

    t22 = ((x93>(x94<=x95))/x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = UINT8_MAX;
	int32_t x98 = -1;
	static int64_t x100 = INT64_MIN;

    t23 = ((x97>(x98<=x99))/x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 473687LLU;
	int32_t x102 = INT32_MIN;
	int16_t x103 = 4340;
	int8_t x104 = 40;
	static volatile int32_t t24 = -8;

    t24 = ((x101>(x102<=x103))/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -1LL;
	uint32_t x106 = 63449561U;
	static int8_t x107 = INT8_MAX;
	int16_t x108 = INT16_MIN;

    t25 = ((x105>(x106<=x107))/x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MIN;
	uint8_t x110 = 1U;
	int32_t x111 = -1;
	volatile int32_t t26 = 0;

    t26 = ((x109>(x110<=x111))/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;

    t27 = ((x113>(x114<=x115))/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x118 = -1;
	int8_t x119 = 1;
	int64_t x120 = INT64_MIN;
	volatile int64_t t28 = 3785791952010LL;

    t28 = ((x117>(x118<=x119))/x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x121 = -1281;
	int32_t x122 = INT32_MIN;
	volatile int32_t x123 = -39;
	static volatile int32_t t29 = 16105;

    t29 = ((x121>(x122<=x123))/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = INT32_MAX;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MAX;
	uint64_t x128 = 6007809067072LLU;

    t30 = ((x125>(x126<=x127))/x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x129 = 124529LLU;
	uint8_t x130 = 3U;
	uint8_t x131 = 4U;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t31 = 1991U;

    t31 = ((x129>(x130<=x131))/x132);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = -16073760087464LL;
	int32_t x134 = 1;
	int32_t x135 = 15759238;
	int16_t x136 = -1;
	int32_t t32 = -1;

    t32 = ((x133>(x134<=x135))/x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = UINT8_MAX;
	volatile int16_t x140 = -806;
	int32_t t33 = 4651870;

    t33 = ((x137>(x138<=x139))/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = UINT8_MAX;
	static uint64_t x142 = 13081857370461LLU;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t34 = 614711755007LLU;

    t34 = ((x141>(x142<=x143))/x144);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -1;
	int8_t x148 = INT8_MIN;
	int32_t t35 = 936252013;

    t35 = ((x145>(x146<=x147))/x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	int16_t x151 = 8;
	int16_t x152 = INT16_MAX;
	volatile int32_t t36 = 143;

    t36 = ((x149>(x150<=x151))/x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	uint8_t x155 = 0U;
	volatile uint64_t t37 = 12LLU;

    t37 = ((x153>(x154<=x155))/x156);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = -2;
	int8_t x159 = -1;
	int64_t x160 = -460158594LL;
	int64_t t38 = 1110272453913073267LL;

    t38 = ((x157>(x158<=x159))/x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x161 = 1066U;
	static uint64_t x162 = 12LLU;
	int64_t x163 = -3000823LL;
	volatile uint16_t x164 = 25U;

    t39 = ((x161>(x162<=x163))/x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MIN;
	uint32_t x167 = 0U;
	volatile int32_t t40 = 0;

    t40 = ((x165>(x166<=x167))/x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = -1LL;
	int8_t x170 = 1;
	uint16_t x171 = UINT16_MAX;

    t41 = ((x169>(x170<=x171))/x172);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	uint32_t t42 = 46871U;

    t42 = ((x173>(x174<=x175))/x176);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x178 = -1;
	volatile int16_t x179 = -1;
	int64_t x180 = INT64_MAX;
	static volatile int64_t t43 = 417427958891554353LL;

    t43 = ((x177>(x178<=x179))/x180);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x181 = 3;
	int16_t x182 = 5;
	uint32_t x183 = 3017746U;
	volatile int16_t x184 = 1;
	int32_t t44 = 1;

    t44 = ((x181>(x182<=x183))/x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x185 = UINT32_MAX;
	int64_t x188 = INT64_MAX;
	static volatile int64_t t45 = 127040847048550LL;

    t45 = ((x185>(x186<=x187))/x188);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = INT64_MIN;
	int8_t x190 = 29;
	volatile int32_t t46 = -1;

    t46 = ((x189>(x190<=x191))/x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = -71;
	int64_t x194 = -1LL;
	volatile int16_t x195 = 6;
	volatile int32_t t47 = -104652;

    t47 = ((x193>(x194<=x195))/x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x197 = INT64_MAX;
	int64_t x198 = -1LL;
	int32_t x199 = INT32_MIN;
	static int8_t x200 = INT8_MIN;

    t48 = ((x197>(x198<=x199))/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x202 = INT64_MIN;
	int32_t t49 = -597;

    t49 = ((x201>(x202<=x203))/x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x205 = -30538394LL;
	int64_t x207 = 32LL;
	int32_t x208 = INT32_MIN;
	int32_t t50 = 0;

    t50 = ((x205>(x206<=x207))/x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x210 = -3316;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MIN;
	int32_t t51 = 38965540;

    t51 = ((x209>(x210<=x211))/x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -13247;
	int8_t x214 = -24;
	uint64_t x215 = 4986393389LLU;
	int32_t x216 = INT32_MIN;

    t52 = ((x213>(x214<=x215))/x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = 2U;
	uint64_t x218 = 225LLU;
	static uint64_t x219 = 153647670758493894LLU;
	static int8_t x220 = INT8_MIN;
	int32_t t53 = -5219616;

    t53 = ((x217>(x218<=x219))/x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;

    t54 = ((x221>(x222<=x223))/x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x225 = INT8_MAX;
	volatile uint64_t x226 = 5087LLU;
	volatile uint16_t x227 = 226U;
	uint8_t x228 = 110U;
	int32_t t55 = -41492982;

    t55 = ((x225>(x226<=x227))/x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x230 = 4474705715862122988LLU;
	static uint64_t x231 = 283573979987922090LLU;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t56 = -339;

    t56 = ((x229>(x230<=x231))/x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = -5;
	static uint16_t x234 = UINT16_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = 20;

    t57 = ((x233>(x234<=x235))/x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = -1LL;
	int8_t x238 = -1;
	volatile int32_t t58 = 4;

    t58 = ((x237>(x238<=x239))/x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x242 = 3U;
	static uint32_t x244 = 102U;
	volatile uint32_t t59 = 62U;

    t59 = ((x241>(x242<=x243))/x244);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x246 = -1LL;
	int32_t x247 = 12282;
	uint8_t x248 = 47U;
	volatile int32_t t60 = 54;

    t60 = ((x245>(x246<=x247))/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1LL;
	int16_t x251 = -16302;
	static uint64_t t61 = 278886078384020855LLU;

    t61 = ((x249>(x250<=x251))/x252);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x253 = INT16_MAX;
	uint32_t x254 = 21838U;
	static uint8_t x255 = UINT8_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t62 = -1665;

    t62 = ((x253>(x254<=x255))/x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = -1;
	volatile int8_t x258 = INT8_MAX;
	int16_t x259 = -39;
	int32_t t63 = 11711564;

    t63 = ((x257>(x258<=x259))/x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = 1U;
	int16_t x262 = INT16_MAX;
	uint32_t x263 = 70U;
	uint64_t x264 = 2448434LLU;

    t64 = ((x261>(x262<=x263))/x264);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x265 = 357U;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t65 = -534029019;

    t65 = ((x265>(x266<=x267))/x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = UINT32_MAX;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 184631241U;
	uint32_t t66 = 29U;

    t66 = ((x269>(x270<=x271))/x272);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MIN;
	uint64_t x275 = 3234364280LLU;
	int64_t x276 = INT64_MIN;

    t67 = ((x273>(x274<=x275))/x276);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x277 = 3208512LL;
	uint64_t x280 = UINT64_MAX;

    t68 = ((x277>(x278<=x279))/x280);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = 89U;
	volatile int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 4U;
	volatile int32_t t69 = 480;

    t69 = ((x281>(x282<=x283))/x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	static uint16_t x287 = 1U;
	uint32_t x288 = UINT32_MAX;
	uint32_t t70 = 60U;

    t70 = ((x285>(x286<=x287))/x288);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x289 = INT32_MIN;
	volatile int16_t x290 = INT16_MAX;
	volatile int64_t x291 = -114722LL;
	uint16_t x292 = 176U;
	int32_t t71 = 15463247;

    t71 = ((x289>(x290<=x291))/x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = INT64_MAX;
	static volatile uint32_t x294 = 1334U;
	volatile int64_t x295 = INT64_MIN;
	uint64_t x296 = 365082595604379676LLU;

    t72 = ((x293>(x294<=x295))/x296);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 13354U;
	volatile int32_t x298 = INT32_MAX;
	uint64_t x299 = 176716307913LLU;

    t73 = ((x297>(x298<=x299))/x300);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x301 = UINT64_MAX;
	int16_t x302 = 0;
	uint64_t x303 = 4337360811950291936LLU;
	static volatile int32_t x304 = -401724826;
	int32_t t74 = -1;

    t74 = ((x301>(x302<=x303))/x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x306 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	uint32_t t75 = 5U;

    t75 = ((x305>(x306<=x307))/x308);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = INT32_MIN;
	static int8_t x310 = INT8_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	static volatile int8_t x312 = INT8_MIN;
	int32_t t76 = -872825;

    t76 = ((x309>(x310<=x311))/x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	volatile uint8_t x315 = 3U;
	int8_t x316 = -1;
	volatile int32_t t77 = 98943652;

    t77 = ((x313>(x314<=x315))/x316);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = INT32_MIN;
	int32_t x319 = INT32_MAX;
	int8_t x320 = -1;
	volatile int32_t t78 = 122539;

    t78 = ((x317>(x318<=x319))/x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 22U;
	int16_t x322 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	volatile int8_t x324 = -3;
	int32_t t79 = 114;

    t79 = ((x321>(x322<=x323))/x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = INT16_MAX;
	static int32_t x327 = -713;
	int64_t x328 = -3345611038LL;
	volatile int64_t t80 = 4489681524LL;

    t80 = ((x325>(x326<=x327))/x328);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x333 = 46U;
	int64_t x334 = -1LL;
	uint32_t x335 = 218U;
	int64_t x336 = INT64_MAX;

    t81 = ((x333>(x334<=x335))/x336);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x337 = 50848120U;
	uint8_t x338 = 1U;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t82 = 121U;

    t82 = ((x337>(x338<=x339))/x340);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = -2;
	uint64_t x343 = 10276986212LLU;
	volatile int8_t x344 = -1;
	static int32_t t83 = -175;

    t83 = ((x341>(x342<=x343))/x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x345 = UINT16_MAX;
	int32_t x346 = -1;
	static uint32_t x347 = 15320U;
	int16_t x348 = INT16_MIN;
	int32_t t84 = -2060;

    t84 = ((x345>(x346<=x347))/x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x349 = -13;
	int16_t x350 = -1;
	int64_t x351 = INT64_MIN;
	volatile int32_t t85 = 105357363;

    t85 = ((x349>(x350<=x351))/x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x354 = 15U;
	uint16_t x356 = UINT16_MAX;

    t86 = ((x353>(x354<=x355))/x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x357 = INT32_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t87 = -1;

    t87 = ((x357>(x358<=x359))/x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x362 = INT8_MIN;
	volatile int32_t x363 = 1;
	int32_t t88 = -12;

    t88 = ((x361>(x362<=x363))/x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x365 = 53U;
	int8_t x366 = INT8_MIN;
	uint64_t x367 = 81541262637770752LLU;
	uint32_t x368 = UINT32_MAX;
	uint32_t t89 = 95U;

    t89 = ((x365>(x366<=x367))/x368);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile int64_t t90 = -3LL;

    t90 = ((x369>(x370<=x371))/x372);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x373 = 5;
	static uint8_t x375 = 13U;
	volatile int32_t t91 = -84;

    t91 = ((x373>(x374<=x375))/x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = 671U;
	volatile int16_t x378 = INT16_MAX;
	static volatile uint16_t x380 = 6U;
	volatile int32_t t92 = -15935614;

    t92 = ((x377>(x378<=x379))/x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x382 = INT64_MIN;
	int64_t x383 = -1LL;

    t93 = ((x381>(x382<=x383))/x384);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x385 = UINT64_MAX;
	int8_t x386 = 47;
	int32_t x387 = -9;
	static int64_t x388 = -2LL;
	int64_t t94 = -1094619967130931816LL;

    t94 = ((x385>(x386<=x387))/x388);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MAX;

    t95 = ((x389>(x390<=x391))/x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = INT8_MIN;
	static uint32_t x394 = 245850125U;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = -1;
	static int32_t t96 = 54;

    t96 = ((x393>(x394<=x395))/x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x399 = INT32_MIN;
	uint64_t x400 = 51274789210LLU;
	uint64_t t97 = 890LLU;

    t97 = ((x397>(x398<=x399))/x400);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x401 = UINT8_MAX;
	volatile uint32_t t98 = 2U;

    t98 = ((x401>(x402<=x403))/x404);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = INT8_MAX;
	int16_t x407 = INT16_MIN;
	uint8_t x408 = UINT8_MAX;

    t99 = ((x405>(x406<=x407))/x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x410 = INT8_MAX;
	volatile uint64_t x411 = 1454148005LLU;
	static uint16_t x412 = 1318U;
	volatile int32_t t100 = -13031;

    t100 = ((x409>(x410<=x411))/x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x413 = -3908;
	int32_t x414 = 7538;
	uint16_t x415 = UINT16_MAX;
	int16_t x416 = INT16_MAX;
	int32_t t101 = -10269303;

    t101 = ((x413>(x414<=x415))/x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x418 = INT32_MIN;
	int8_t x420 = INT8_MIN;

    t102 = ((x417>(x418<=x419))/x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x422 = -247418;
	volatile uint16_t x423 = 187U;

    t103 = ((x421>(x422<=x423))/x424);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x425 = -7693;
	int16_t x426 = 8001;
	uint32_t x427 = 549U;
	static volatile int32_t t104 = 61;

    t104 = ((x425>(x426<=x427))/x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x429 = INT16_MIN;
	int16_t x430 = -1;
	static int32_t x431 = -73663;
	int32_t t105 = 350;

    t105 = ((x429>(x430<=x431))/x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x433 = INT64_MIN;
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = INT16_MAX;
	int64_t x436 = INT64_MAX;
	int64_t t106 = 1075979478917290783LL;

    t106 = ((x433>(x434<=x435))/x436);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = 1U;
	int8_t x440 = -14;
	static volatile int32_t t107 = -40;

    t107 = ((x437>(x438<=x439))/x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = INT32_MIN;
	volatile int8_t x442 = 3;
	int8_t x443 = INT8_MAX;
	int32_t t108 = 3673;

    t108 = ((x441>(x442<=x443))/x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = 1045561517440441796LL;
	volatile int64_t x446 = 1LL;
	volatile uint64_t x448 = UINT64_MAX;
	uint64_t t109 = 1320645584220727LLU;

    t109 = ((x445>(x446<=x447))/x448);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = 561U;
	uint64_t x450 = 297175LLU;
	uint64_t x451 = 996802344LLU;
	volatile int32_t x452 = -202;
	static volatile int32_t t110 = -3;

    t110 = ((x449>(x450<=x451))/x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x453 = 1U;
	volatile uint8_t x454 = 2U;
	uint8_t x455 = 31U;
	static int8_t x456 = -4;
	int32_t t111 = 1;

    t111 = ((x453>(x454<=x455))/x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x457 = 1U;
	volatile int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MIN;
	volatile int32_t t112 = 3413441;

    t112 = ((x457>(x458<=x459))/x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = INT16_MIN;
	int8_t x462 = -1;
	uint32_t x463 = 2295U;
	static int64_t x464 = -265LL;
	volatile int64_t t113 = -224612506525004801LL;

    t113 = ((x461>(x462<=x463))/x464);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x465 = 7U;
	uint64_t x467 = 5063LLU;
	static int32_t x468 = -11610;
	volatile int32_t t114 = -1;

    t114 = ((x465>(x466<=x467))/x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x470 = INT8_MIN;
	volatile int32_t x471 = INT32_MIN;
	volatile int8_t x472 = -3;
	static int32_t t115 = 0;

    t115 = ((x469>(x470<=x471))/x472);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MIN;

    t116 = ((x473>(x474<=x475))/x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x478 = 3980;
	uint8_t x479 = UINT8_MAX;
	int64_t x480 = -1LL;
	int64_t t117 = -3543878LL;

    t117 = ((x477>(x478<=x479))/x480);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x482 = -1;
	uint16_t x483 = 46U;
	uint64_t x484 = 1LLU;
	uint64_t t118 = 3019339203312046518LLU;

    t118 = ((x481>(x482<=x483))/x484);

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x485 = 9;
	int32_t x486 = INT32_MIN;
	int8_t x487 = -1;
	uint32_t x488 = 31389U;
	uint32_t t119 = 2057980U;

    t119 = ((x485>(x486<=x487))/x488);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x489 = INT16_MIN;
	uint32_t x490 = UINT32_MAX;
	uint16_t x491 = 27944U;
	static int16_t x492 = INT16_MIN;
	int32_t t120 = -119;

    t120 = ((x489>(x490<=x491))/x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x493 = 47953440LL;
	int64_t x494 = 82120381LL;
	int64_t x495 = -787971628071475LL;
	int64_t x496 = INT64_MIN;
	volatile int64_t t121 = -5689791585510766LL;

    t121 = ((x493>(x494<=x495))/x496);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x497 = 4U;
	int16_t x498 = 3;
	static int64_t x500 = INT64_MIN;

    t122 = ((x497>(x498<=x499))/x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x501 = INT8_MIN;
	volatile uint64_t x502 = UINT64_MAX;
	int8_t x503 = INT8_MIN;
	volatile int8_t x504 = INT8_MIN;
	static volatile int32_t t123 = 1;

    t123 = ((x501>(x502<=x503))/x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x505 = INT64_MAX;
	volatile uint64_t x506 = UINT64_MAX;
	int8_t x507 = INT8_MAX;
	static int64_t x508 = INT64_MAX;
	int64_t t124 = -1221LL;

    t124 = ((x505>(x506<=x507))/x508);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x509 = INT8_MIN;
	int64_t x510 = 813862LL;
	int16_t x511 = -32;
	int32_t x512 = INT32_MIN;
	volatile int32_t t125 = 0;

    t125 = ((x509>(x510<=x511))/x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x513 = INT8_MIN;
	uint32_t x514 = 126092U;
	int8_t x515 = INT8_MAX;
	int32_t x516 = -38146;
	volatile int32_t t126 = -8709330;

    t126 = ((x513>(x514<=x515))/x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x517 = 21495U;
	uint8_t x518 = 50U;
	uint32_t x519 = 2115U;
	int16_t x520 = -1;
	static volatile int32_t t127 = -19947;

    t127 = ((x517>(x518<=x519))/x520);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = INT8_MAX;
	static int64_t x522 = -42LL;
	int32_t x524 = -16704120;

    t128 = ((x521>(x522<=x523))/x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x525 = -1LL;
	int16_t x526 = INT16_MAX;
	uint64_t x527 = 398500762780710552LLU;
	volatile int8_t x528 = -18;
	volatile int32_t t129 = -43710025;

    t129 = ((x525>(x526<=x527))/x528);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MIN;
	volatile int64_t x535 = -1LL;
	int16_t x536 = INT16_MIN;
	static int32_t t130 = 224738299;

    t130 = ((x533>(x534<=x535))/x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x537 = 2164479388597347LL;
	int8_t x538 = -1;
	volatile int16_t x539 = 1;
	static uint64_t x540 = 18838773373LLU;
	uint64_t t131 = 399LLU;

    t131 = ((x537>(x538<=x539))/x540);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = INT64_MAX;
	static int16_t x542 = -1;
	int16_t x543 = INT16_MIN;
	static volatile int8_t x544 = INT8_MAX;
	int32_t t132 = 22513;

    t132 = ((x541>(x542<=x543))/x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x545 = -1LL;
	uint16_t x546 = 10U;
	static volatile int16_t x548 = -1;
	int32_t t133 = 1;

    t133 = ((x545>(x546<=x547))/x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x549 = UINT16_MAX;
	uint8_t x551 = 11U;
	volatile int32_t t134 = -14752;

    t134 = ((x549>(x550<=x551))/x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x553 = UINT16_MAX;
	int32_t x555 = INT32_MAX;
	int32_t t135 = 7203091;

    t135 = ((x553>(x554<=x555))/x556);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x558 = 7950;
	uint32_t x559 = 86120U;
	int64_t x560 = -947745LL;
	static int64_t t136 = 131460831754LL;

    t136 = ((x557>(x558<=x559))/x560);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x561 = 358096850929635870LLU;
	static int32_t x563 = INT32_MAX;
	volatile uint64_t x564 = UINT64_MAX;
	volatile uint64_t t137 = 346086634LLU;

    t137 = ((x561>(x562<=x563))/x564);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x566 = INT16_MAX;
	int32_t x568 = INT32_MAX;

    t138 = ((x565>(x566<=x567))/x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x570 = -1008;
	int8_t x571 = -2;
	uint64_t x572 = 7878628LLU;
	uint64_t t139 = 5620031280740LLU;

    t139 = ((x569>(x570<=x571))/x572);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x573 = INT16_MIN;
	volatile int32_t x574 = -1;
	volatile int8_t x576 = INT8_MAX;
	volatile int32_t t140 = 388;

    t140 = ((x573>(x574<=x575))/x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x577 = INT32_MAX;
	int32_t x578 = INT32_MIN;
	uint8_t x579 = UINT8_MAX;
	int64_t x580 = -3450LL;
	volatile int64_t t141 = -32884928LL;

    t141 = ((x577>(x578<=x579))/x580);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x582 = -1;
	static int32_t x583 = INT32_MIN;
	uint16_t x584 = UINT16_MAX;
	volatile int32_t t142 = 56144;

    t142 = ((x581>(x582<=x583))/x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x585 = 1U;
	uint32_t x586 = UINT32_MAX;
	uint16_t x587 = 445U;
	int32_t x588 = INT32_MAX;
	static volatile int32_t t143 = 0;

    t143 = ((x585>(x586<=x587))/x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x589 = INT16_MAX;
	volatile int16_t x590 = -1;
	int32_t x592 = INT32_MAX;
	int32_t t144 = 210569605;

    t144 = ((x589>(x590<=x591))/x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x594 = 88665821636427409LLU;
	int8_t x595 = INT8_MIN;
	volatile int32_t x596 = INT32_MIN;
	static int32_t t145 = 407504;

    t145 = ((x593>(x594<=x595))/x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x597 = 11;
	int32_t x598 = -1;
	static volatile uint64_t x600 = UINT64_MAX;
	static uint64_t t146 = 644195LLU;

    t146 = ((x597>(x598<=x599))/x600);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = 2U;
	uint64_t x602 = 21LLU;
	int32_t x604 = -30381351;

    t147 = ((x601>(x602<=x603))/x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = INT32_MIN;
	volatile int32_t x606 = 1675583;
	static int32_t x607 = -1;
	static int32_t x608 = -4;
	int32_t t148 = 1004;

    t148 = ((x605>(x606<=x607))/x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x609 = -1LL;
	uint32_t x610 = 11U;
	int32_t x611 = -1;
	int64_t x612 = INT64_MIN;
	volatile int64_t t149 = -236512866LL;

    t149 = ((x609>(x610<=x611))/x612);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x613 = -1;
	static int16_t x616 = INT16_MAX;
	volatile int32_t t150 = -3240457;

    t150 = ((x613>(x614<=x615))/x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = 4;
	volatile int8_t x618 = 0;
	int64_t x619 = -8LL;
	int8_t x620 = -1;

    t151 = ((x617>(x618<=x619))/x620);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x622 = 9;
	volatile int64_t x623 = 562710802367142854LL;
	int16_t x624 = 714;
	volatile int32_t t152 = 617;

    t152 = ((x621>(x622<=x623))/x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x625 = 3867LLU;
	uint16_t x626 = 93U;
	int8_t x627 = INT8_MAX;
	volatile uint64_t t153 = 5956775553LLU;

    t153 = ((x625>(x626<=x627))/x628);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x629 = 3703502832805LLU;
	int32_t x630 = 98037;
	volatile uint32_t x632 = 223U;
	volatile uint32_t t154 = 6001U;

    t154 = ((x629>(x630<=x631))/x632);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x633 = 94858683682537701LL;
	uint16_t x634 = UINT16_MAX;
	volatile int8_t x635 = INT8_MIN;
	int64_t x636 = -1LL;
	volatile int64_t t155 = -1069462483LL;

    t155 = ((x633>(x634<=x635))/x636);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x637 = -1;
	int32_t x638 = INT32_MIN;
	uint32_t x639 = 100660815U;
	int32_t t156 = 29788655;

    t156 = ((x637>(x638<=x639))/x640);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x641 = -1;
	uint32_t x642 = 168566U;
	int8_t x643 = -1;
	volatile int64_t t157 = -31LL;

    t157 = ((x641>(x642<=x643))/x644);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x645 = INT16_MIN;
	static int64_t x646 = INT64_MAX;
	int64_t x647 = -1LL;
	uint64_t x648 = UINT64_MAX;
	uint64_t t158 = 15652015192034661LLU;

    t158 = ((x645>(x646<=x647))/x648);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x649 = INT8_MIN;
	volatile int16_t x651 = -1;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t159 = 7;

    t159 = ((x649>(x650<=x651))/x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x653 = UINT32_MAX;
	static volatile int64_t x654 = -59251872LL;
	volatile uint64_t x656 = UINT64_MAX;

    t160 = ((x653>(x654<=x655))/x656);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x657 = 3U;
	volatile uint32_t x658 = UINT32_MAX;
	volatile int64_t x659 = -1LL;
	int16_t x660 = -35;
	static volatile int32_t t161 = -183;

    t161 = ((x657>(x658<=x659))/x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x661 = -1;
	static int16_t x662 = INT16_MIN;
	int8_t x663 = INT8_MIN;
	int32_t x664 = 1173606;
	int32_t t162 = -206267;

    t162 = ((x661>(x662<=x663))/x664);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x665 = UINT16_MAX;
	int8_t x666 = INT8_MAX;
	int8_t x667 = -1;
	int16_t x668 = INT16_MIN;
	volatile int32_t t163 = 210264;

    t163 = ((x665>(x666<=x667))/x668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = -1;
	volatile uint16_t x671 = 458U;
	int8_t x672 = -1;

    t164 = ((x669>(x670<=x671))/x672);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x673 = 17238LL;
	int16_t x674 = INT16_MIN;
	int16_t x675 = 3;
	int32_t x676 = INT32_MIN;
	static int32_t t165 = 180;

    t165 = ((x673>(x674<=x675))/x676);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x677 = INT8_MAX;
	static int64_t x678 = 692777335032263LL;
	static int8_t x679 = 54;
	int16_t x680 = INT16_MIN;
	int32_t t166 = 1;

    t166 = ((x677>(x678<=x679))/x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x681 = INT8_MIN;
	uint16_t x682 = 115U;
	uint32_t x683 = 43866740U;
	static volatile uint64_t x684 = 2LLU;
	static volatile uint64_t t167 = 1752761LLU;

    t167 = ((x681>(x682<=x683))/x684);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x686 = 1271664U;
	static int8_t x687 = INT8_MAX;
	int8_t x688 = -1;
	int32_t t168 = 495;

    t168 = ((x685>(x686<=x687))/x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	volatile int8_t x690 = INT8_MIN;
	uint64_t x691 = UINT64_MAX;
	int32_t x692 = INT32_MIN;

    t169 = ((x689>(x690<=x691))/x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x693 = INT32_MIN;
	uint16_t x694 = UINT16_MAX;
	static int8_t x695 = INT8_MIN;
	volatile int32_t x696 = 4;
	static volatile int32_t t170 = 1;

    t170 = ((x693>(x694<=x695))/x696);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = -1LL;
	uint32_t x699 = 48U;
	int64_t x700 = INT64_MIN;
	int64_t t171 = 1127799350318049LL;

    t171 = ((x697>(x698<=x699))/x700);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	volatile int16_t x702 = INT16_MIN;
	static int8_t x703 = -1;
	volatile int16_t x704 = INT16_MIN;
	volatile int32_t t172 = -1505;

    t172 = ((x701>(x702<=x703))/x704);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = -1;
	int8_t x706 = 61;
	static int16_t x707 = INT16_MIN;
	static volatile int32_t t173 = 224029;

    t173 = ((x705>(x706<=x707))/x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x709 = INT32_MAX;
	int8_t x710 = -1;
	int16_t x711 = 468;
	uint8_t x712 = 2U;

    t174 = ((x709>(x710<=x711))/x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = -1LL;
	static int32_t x714 = INT32_MIN;
	int8_t x715 = INT8_MIN;
	volatile int32_t x716 = INT32_MIN;

    t175 = ((x713>(x714<=x715))/x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x718 = 38;
	int16_t x719 = INT16_MAX;
	static int64_t x720 = INT64_MIN;
	int64_t t176 = -106712303LL;

    t176 = ((x717>(x718<=x719))/x720);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x722 = -1;
	uint64_t x724 = UINT64_MAX;
	uint64_t t177 = 15686976440LLU;

    t177 = ((x721>(x722<=x723))/x724);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x725 = -448652684;
	volatile uint32_t x726 = 16689368U;
	int16_t x727 = INT16_MIN;
	volatile uint32_t x728 = 1U;
	volatile uint32_t t178 = 172231349U;

    t178 = ((x725>(x726<=x727))/x728);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x729 = 0U;
	static uint64_t x730 = UINT64_MAX;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile uint32_t t179 = 14858U;

    t179 = ((x729>(x730<=x731))/x732);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x733 = 50551LLU;
	volatile int16_t x734 = INT16_MAX;
	uint16_t x736 = 7U;
	int32_t t180 = 45913;

    t180 = ((x733>(x734<=x735))/x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x738 = -12;
	static uint8_t x740 = 20U;
	static int32_t t181 = 343881689;

    t181 = ((x737>(x738<=x739))/x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = -1;
	volatile int8_t x742 = INT8_MIN;
	int32_t x743 = -1;
	static int32_t x744 = -1;
	volatile int32_t t182 = 15266;

    t182 = ((x741>(x742<=x743))/x744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x745 = 1585477369401LLU;
	volatile int32_t x746 = INT32_MIN;
	int32_t x747 = INT32_MIN;
	volatile int32_t x748 = -1;
	volatile int32_t t183 = 1058067947;

    t183 = ((x745>(x746<=x747))/x748);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = INT32_MIN;
	uint64_t x754 = 20717754681LLU;
	volatile uint16_t x755 = 6U;
	int32_t t184 = 0;

    t184 = ((x753>(x754<=x755))/x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x757 = INT64_MIN;
	uint8_t x760 = 99U;
	int32_t t185 = 1686220;

    t185 = ((x757>(x758<=x759))/x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x761 = 10888974U;
	int8_t x762 = -1;
	uint32_t x763 = UINT32_MAX;
	static int64_t x764 = -1LL;
	volatile int64_t t186 = 1136441034LL;

    t186 = ((x761>(x762<=x763))/x764);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x766 = INT64_MAX;
	static volatile uint64_t x767 = 3453405423LLU;
	static uint32_t x768 = 6228U;
	volatile uint32_t t187 = 4067781U;

    t187 = ((x765>(x766<=x767))/x768);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x771 = INT16_MIN;
	volatile uint32_t t188 = 326998265U;

    t188 = ((x769>(x770<=x771))/x772);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x773 = 15;
	static int8_t x776 = INT8_MIN;

    t189 = ((x773>(x774<=x775))/x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x777 = 109019018025052LL;
	int16_t x778 = -1;
	static uint16_t x779 = UINT16_MAX;
	uint16_t x780 = UINT16_MAX;
	int32_t t190 = 24990;

    t190 = ((x777>(x778<=x779))/x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t t191 = -8478708;

    t191 = ((x781>(x782<=x783))/x784);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x785 = UINT64_MAX;
	uint8_t x786 = 11U;
	int8_t x788 = INT8_MAX;
	int32_t t192 = 141;

    t192 = ((x785>(x786<=x787))/x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x789 = -1;
	volatile int32_t t193 = 0;

    t193 = ((x789>(x790<=x791))/x792);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x793 = 10;
	static int8_t x794 = -40;
	int64_t x795 = INT64_MIN;
	uint64_t t194 = 235056LLU;

    t194 = ((x793>(x794<=x795))/x796);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	uint64_t x798 = 1372331420576565677LLU;
	volatile int64_t x799 = -1LL;
	int64_t x800 = -1LL;
	volatile int64_t t195 = -5779125LL;

    t195 = ((x797>(x798<=x799))/x800);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x801 = INT32_MIN;
	static int32_t x802 = -1;
	int64_t x803 = INT64_MIN;
	uint64_t x804 = 7281LLU;
	uint64_t t196 = 0LLU;

    t196 = ((x801>(x802<=x803))/x804);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x805 = 51U;
	volatile int16_t x806 = -1;
	int64_t x807 = 41030LL;
	uint32_t x808 = 92258U;
	volatile uint32_t t197 = 3U;

    t197 = ((x805>(x806<=x807))/x808);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x809 = 29268;
	uint16_t x810 = 14315U;
	uint32_t x811 = 2U;
	int16_t x812 = -1;
	int32_t t198 = 5600;

    t198 = ((x809>(x810<=x811))/x812);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x813 = 12994516103LL;
	static int8_t x815 = 1;
	static int64_t t199 = -8671578572619466LL;

    t199 = ((x813>(x814<=x815))/x816);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

