
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

int8_t x3 = -1;
int32_t x5 = -1;
int32_t x10 = INT32_MIN;
int32_t x11 = INT32_MIN;
uint16_t x21 = UINT16_MAX;
static volatile int8_t x24 = 1;
int32_t t4 = -2;
int8_t x25 = INT8_MIN;
int16_t x26 = INT16_MIN;
int64_t x31 = INT64_MAX;
volatile int64_t x34 = -1435361LL;
static volatile int32_t t7 = 2524;
int64_t x40 = -1LL;
int32_t t8 = -415;
uint32_t x45 = 286615149U;
uint8_t x48 = 1U;
volatile uint64_t x49 = 1373LLU;
static int32_t t11 = 10053;
int8_t x54 = -15;
volatile uint8_t x56 = 10U;
int8_t x63 = 1;
int32_t x75 = INT32_MIN;
uint64_t x76 = UINT64_MAX;
int16_t x77 = INT16_MIN;
static uint32_t x81 = 441U;
static int32_t x82 = INT32_MAX;
int16_t x86 = INT16_MAX;
int64_t x93 = INT64_MIN;
int64_t x96 = 2224608825609960906LL;
static int32_t t23 = 775002;
uint16_t x102 = 31914U;
static volatile int16_t x107 = INT16_MAX;
int16_t x108 = -1;
int32_t t25 = -1903;
int32_t x112 = INT32_MIN;
uint32_t x115 = UINT32_MAX;
int16_t x116 = INT16_MAX;
static int32_t t27 = 1717433;
static uint8_t x117 = 12U;
uint16_t x124 = 1U;
static int16_t x130 = 0;
int32_t x134 = INT32_MIN;
int8_t x138 = INT8_MIN;
int64_t x139 = INT64_MAX;
static volatile uint16_t x143 = 116U;
static volatile int64_t x146 = 1140416225946287LL;
int64_t x154 = INT64_MIN;
uint8_t x161 = 1U;
volatile int16_t x164 = INT16_MAX;
int32_t x173 = INT32_MIN;
int16_t x177 = -1;
int32_t x190 = INT32_MAX;
uint64_t x198 = 64492952767LLU;
int32_t x201 = 660586770;
int32_t x209 = 5;
int16_t x211 = 23;
int64_t x214 = 6880315553410LL;
static int32_t t53 = 3913462;
static int32_t x221 = -6541;
int16_t x222 = -764;
volatile uint32_t x230 = 6U;
uint32_t x235 = UINT32_MAX;
int32_t t57 = -1;
int32_t t59 = -1942137;
int32_t t60 = -4458526;
static int8_t x251 = -1;
volatile int32_t t62 = -2;
int32_t x259 = INT32_MAX;
int64_t x260 = INT64_MIN;
static volatile int32_t t63 = -3579;
int16_t x261 = INT16_MAX;
int32_t x263 = 71000;
uint64_t x274 = UINT64_MAX;
int32_t x277 = INT32_MIN;
static volatile uint64_t x283 = 7764127LLU;
volatile int32_t t73 = 46;
volatile int8_t x301 = 1;
int64_t x303 = -75420842LL;
static int32_t t74 = 241466873;
static int32_t x308 = INT32_MIN;
int32_t x309 = INT32_MIN;
int8_t x311 = -1;
int32_t x316 = INT32_MAX;
int16_t x321 = INT16_MIN;
uint8_t x328 = 0U;
static int16_t x336 = INT16_MIN;
int16_t x337 = INT16_MIN;
static uint64_t x339 = UINT64_MAX;
uint8_t x340 = UINT8_MAX;
volatile int16_t x341 = INT16_MIN;
uint64_t x346 = 2802734LLU;
int64_t x352 = -104937LL;
int32_t x355 = -10177;
uint8_t x357 = 3U;
int32_t x364 = -1;
volatile uint16_t x365 = 23U;
volatile int32_t t90 = -507120;
static int32_t t91 = 426999;
int16_t x373 = 2;
int16_t x374 = INT16_MAX;
volatile int16_t x377 = INT16_MIN;
volatile int16_t x382 = INT16_MIN;
volatile uint8_t x385 = 40U;
int32_t x386 = 372910161;
int64_t x387 = INT64_MAX;
int32_t t95 = 505229;
int32_t t96 = -413070;
int32_t x395 = INT32_MAX;
volatile int32_t t97 = 0;
static int32_t x397 = INT32_MIN;
uint64_t x402 = 2531788699LLU;
volatile uint64_t x414 = UINT64_MAX;
int32_t x419 = -12877;
int8_t x420 = INT8_MAX;
static int64_t x431 = 30LL;
int64_t x432 = -1LL;
int32_t t107 = 116;
int64_t x441 = -1LL;
int16_t x443 = INT16_MIN;
uint8_t x444 = 1U;
int64_t x451 = INT64_MIN;
uint8_t x452 = 19U;
volatile int64_t x453 = INT64_MIN;
volatile uint32_t x455 = UINT32_MAX;
uint32_t x458 = UINT32_MAX;
uint16_t x459 = 24276U;
static uint64_t x469 = 12223LLU;
int32_t t117 = -182209;
uint64_t x492 = 677814620LLU;
int32_t x499 = INT32_MIN;
uint32_t x503 = 2897U;
uint64_t x506 = UINT64_MAX;
uint8_t x512 = 11U;
static volatile uint8_t x517 = UINT8_MAX;
static int16_t x522 = -1;
static volatile int32_t t127 = -415915494;
int8_t x527 = INT8_MAX;
int16_t x539 = INT16_MAX;
static int32_t x540 = 255152;
uint32_t x543 = 1U;
int64_t x546 = -1LL;
volatile int64_t x549 = -17182298636337LL;
int64_t x557 = -1LL;
static volatile uint8_t x560 = 112U;
volatile int32_t t136 = -3580462;
volatile int32_t t137 = 12328695;
uint32_t x565 = UINT32_MAX;
volatile uint64_t x573 = 2735150878315266169LLU;
volatile int16_t x577 = INT16_MAX;
int16_t x581 = 115;
int16_t x588 = INT16_MIN;
uint16_t x597 = 656U;
uint8_t x598 = 7U;
volatile int32_t t146 = 1466;
int16_t x602 = 13;
int16_t x604 = INT16_MIN;
int32_t t155 = -57083;
static int16_t x637 = INT16_MIN;
int16_t x642 = 2565;
volatile int32_t t159 = 6;
uint16_t x658 = 5U;
int64_t x659 = INT64_MIN;
int64_t x663 = INT64_MAX;
uint16_t x667 = 254U;
int16_t x671 = INT16_MIN;
static int64_t x675 = -1281210824LL;
uint16_t x688 = UINT16_MAX;
uint64_t x692 = 3704LLU;
volatile int32_t t168 = 1195041;
uint64_t x696 = 38381679LLU;
static volatile uint8_t x697 = 49U;
uint16_t x703 = UINT16_MAX;
int32_t t171 = 125980;
static volatile int16_t x710 = INT16_MIN;
uint8_t x723 = UINT8_MAX;
int16_t x728 = INT16_MAX;
volatile int32_t x737 = INT32_MIN;
int64_t x738 = INT64_MIN;
volatile uint64_t x745 = 4663382LLU;
int16_t x746 = INT16_MIN;
uint16_t x749 = 2U;
int8_t x750 = INT8_MIN;
int8_t x751 = -14;
volatile int32_t x754 = INT32_MIN;
int8_t x755 = INT8_MIN;
uint32_t x756 = 9393U;
volatile int32_t t184 = -3930;
int64_t x761 = -1LL;
int32_t x762 = INT32_MIN;
int16_t x764 = INT16_MAX;
static int32_t t186 = 13001194;
static uint8_t x772 = 120U;
int64_t x775 = INT64_MIN;
uint32_t x776 = 305U;
static uint32_t x778 = 82932U;
uint8_t x780 = 1U;
int16_t x786 = -11;
int32_t x788 = 24;
volatile int32_t t192 = -192090430;
uint8_t x803 = 23U;
int32_t t196 = 7172;
int32_t x811 = INT32_MAX;
int64_t x812 = -16386141LL;
static uint16_t x818 = 44U;
int16_t x820 = -1607;
volatile int32_t t199 = 1084;


void f0(void) {
    	uint32_t x1 = 0U;
	int16_t x2 = -1;
	int8_t x4 = -1;
	volatile int32_t t0 = -23883782;

    t0 = ((x1>(x2/x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = 20U;
	int32_t t1 = 1;

    t1 = ((x5>(x6/x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint8_t x12 = 30U;
	static int32_t t2 = -521656;

    t2 = ((x9>(x10/x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	int32_t x16 = -3082019;
	static volatile int32_t t3 = 3;

    t3 = ((x13>(x14/x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x22 = 0LLU;
	int64_t x23 = INT64_MIN;

    t4 = ((x21>(x22/x23))!=x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x27 = 172537043398014LLU;
	int32_t x28 = INT32_MAX;
	int32_t t5 = -53;

    t5 = ((x25>(x26/x27))!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 2352;
	volatile uint16_t x30 = UINT16_MAX;
	uint8_t x32 = 22U;
	int32_t t6 = -725662;

    t6 = ((x29>(x30/x31))!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -1;
	int16_t x35 = -1;
	int32_t x36 = INT32_MIN;

    t7 = ((x33>(x34/x35))!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	uint8_t x38 = 108U;
	volatile int64_t x39 = INT64_MAX;

    t8 = ((x37>(x38/x39))!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = INT8_MAX;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MAX;
	int16_t x44 = -1;
	int32_t t9 = 55219;

    t9 = ((x41>(x42/x43))!=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x46 = 21U;
	volatile int64_t x47 = -600LL;
	static int32_t t10 = -7111162;

    t10 = ((x45>(x46/x47))!=x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;

    t11 = ((x49>(x50/x51))!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 4155750989591LLU;
	static uint64_t x55 = 5856423954LLU;
	volatile int32_t t12 = 445860796;

    t12 = ((x53>(x54/x55))!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x57 = 2749622U;
	uint64_t x58 = UINT64_MAX;
	static int32_t x59 = 232000;
	int32_t x60 = 86;
	int32_t t13 = 12415560;

    t13 = ((x57>(x58/x59))!=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t14 = -11;

    t14 = ((x61>(x62/x63))!=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x65 = 1U;
	volatile int64_t x66 = -1LL;
	uint16_t x67 = 120U;
	int32_t x68 = INT32_MIN;
	int32_t t15 = -534;

    t15 = ((x65>(x66/x67))!=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	volatile int32_t x72 = -1;
	static volatile int32_t t16 = -25;

    t16 = ((x69>(x70/x71))!=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = INT32_MIN;
	static int16_t x74 = 291;
	int32_t t17 = -2473;

    t17 = ((x73>(x74/x75))!=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x78 = UINT16_MAX;
	int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	int32_t t18 = -11637;

    t18 = ((x77>(x78/x79))!=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x83 = INT64_MIN;
	volatile int16_t x84 = INT16_MIN;
	int32_t t19 = -975;

    t19 = ((x81>(x82/x83))!=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = UINT32_MAX;
	int8_t x87 = 7;
	volatile uint32_t x88 = 79072226U;
	volatile int32_t t20 = 32;

    t20 = ((x85>(x86/x87))!=x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	uint32_t x91 = UINT32_MAX;
	static uint16_t x92 = 23068U;
	int32_t t21 = -4;

    t21 = ((x89>(x90/x91))!=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x94 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	volatile int32_t t22 = -964402078;

    t22 = ((x93>(x94/x95))!=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	volatile int32_t x98 = INT32_MIN;
	static volatile int64_t x99 = INT64_MIN;
	int16_t x100 = -74;

    t23 = ((x97>(x98/x99))!=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -2663;
	static int8_t x103 = 35;
	int32_t x104 = -1;
	volatile int32_t t24 = 290;

    t24 = ((x101>(x102/x103))!=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 51;
	int64_t x106 = INT64_MIN;

    t25 = ((x105>(x106/x107))!=x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MIN;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MAX;
	volatile int32_t t26 = 1083482;

    t26 = ((x109>(x110/x111))!=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	uint32_t x114 = 55U;

    t27 = ((x113>(x114/x115))!=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x118 = UINT64_MAX;
	int8_t x119 = 1;
	volatile int64_t x120 = -1LL;
	int32_t t28 = -2633524;

    t28 = ((x117>(x118/x119))!=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x122 = -8627;
	static int8_t x123 = INT8_MAX;
	int32_t t29 = -50;

    t29 = ((x121>(x122/x123))!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MAX;
	volatile int8_t x126 = INT8_MIN;
	volatile int16_t x127 = -2;
	int16_t x128 = INT16_MAX;
	volatile int32_t t30 = 29575557;

    t30 = ((x125>(x126/x127))!=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x129 = -23;
	int64_t x131 = -6LL;
	static int16_t x132 = INT16_MIN;
	int32_t t31 = 78357543;

    t31 = ((x129>(x130/x131))!=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = -347300236LL;
	volatile int64_t x135 = 116299LL;
	int64_t x136 = INT64_MIN;
	int32_t t32 = 3;

    t32 = ((x133>(x134/x135))!=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x137 = 17;
	static uint64_t x140 = 401241622752140LLU;
	volatile int32_t t33 = -1025574257;

    t33 = ((x137>(x138/x139))!=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x141 = 49U;
	static int64_t x142 = -284886105252LL;
	uint64_t x144 = 2989038555669018LLU;
	volatile int32_t t34 = -121521858;

    t34 = ((x141>(x142/x143))!=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	int32_t x147 = 126961;
	int16_t x148 = 390;
	static volatile int32_t t35 = 40;

    t35 = ((x145>(x146/x147))!=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MAX;
	int64_t x151 = INT64_MAX;
	int32_t x152 = INT32_MAX;
	int32_t t36 = -5954;

    t36 = ((x149>(x150/x151))!=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x153 = -1;
	int64_t x155 = -327LL;
	int64_t x156 = INT64_MIN;
	int32_t t37 = 107;

    t37 = ((x153>(x154/x155))!=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x157 = INT8_MAX;
	uint64_t x158 = 42258653LLU;
	static volatile int8_t x159 = 3;
	uint8_t x160 = UINT8_MAX;
	int32_t t38 = -1480174;

    t38 = ((x157>(x158/x159))!=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = -32;
	int32_t x163 = INT32_MIN;
	int32_t t39 = 202995;

    t39 = ((x161>(x162/x163))!=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x165 = -1;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 10034U;
	int8_t x168 = 1;
	volatile int32_t t40 = 16;

    t40 = ((x165>(x166/x167))!=x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	int16_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = INT8_MAX;
	int32_t t41 = 562;

    t41 = ((x169>(x170/x171))!=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 83U;
	int16_t x176 = 24;
	int32_t t42 = 4429;

    t42 = ((x173>(x174/x175))!=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x178 = INT64_MAX;
	static uint16_t x179 = 24275U;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t43 = 62;

    t43 = ((x177>(x178/x179))!=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = INT16_MIN;
	uint8_t x182 = UINT8_MAX;
	int8_t x183 = -6;
	int8_t x184 = -29;
	volatile int32_t t44 = 8070895;

    t44 = ((x181>(x182/x183))!=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MAX;
	int64_t x187 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;
	static int32_t t45 = 268515483;

    t45 = ((x185>(x186/x187))!=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x189 = 6833U;
	int16_t x191 = 52;
	volatile int16_t x192 = -1;
	volatile int32_t t46 = 21821;

    t46 = ((x189>(x190/x191))!=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = 2;
	int32_t x194 = 1044535596;
	volatile int8_t x195 = -1;
	int64_t x196 = INT64_MIN;
	int32_t t47 = -10;

    t47 = ((x193>(x194/x195))!=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 0;
	static int32_t x199 = INT32_MIN;
	int8_t x200 = 0;
	int32_t t48 = -4913480;

    t48 = ((x197>(x198/x199))!=x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x202 = -1LL;
	uint64_t x203 = 51131278744LLU;
	int8_t x204 = 6;
	volatile int32_t t49 = -92623168;

    t49 = ((x201>(x202/x203))!=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = -1370;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MAX;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t50 = 2284479;

    t50 = ((x205>(x206/x207))!=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x210 = -1LL;
	int64_t x212 = INT64_MIN;
	volatile int32_t t51 = -556818;

    t51 = ((x209>(x210/x211))!=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x213 = UINT64_MAX;
	uint64_t x215 = UINT64_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t52 = 3320349;

    t52 = ((x213>(x214/x215))!=x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = 1U;
	int8_t x218 = -2;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MAX;

    t53 = ((x217>(x218/x219))!=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MIN;
	static int32_t t54 = -1372752;

    t54 = ((x221>(x222/x223))!=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 103U;
	uint32_t x226 = 246684330U;
	int16_t x227 = -354;
	static uint64_t x228 = 3LLU;
	volatile int32_t t55 = 711499348;

    t55 = ((x225>(x226/x227))!=x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = -13;
	int8_t x231 = INT8_MAX;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t56 = 5;

    t56 = ((x229>(x230/x231))!=x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = -31762972823LL;
	volatile int8_t x234 = -1;
	int8_t x236 = -48;

    t57 = ((x233>(x234/x235))!=x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x237 = INT16_MAX;
	int8_t x238 = INT8_MAX;
	uint16_t x239 = 5898U;
	int8_t x240 = -1;
	volatile int32_t t58 = -1330966;

    t58 = ((x237>(x238/x239))!=x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = -1;
	volatile int32_t x242 = -7;
	int8_t x243 = INT8_MIN;
	int64_t x244 = 4892630728653LL;

    t59 = ((x241>(x242/x243))!=x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 12370LLU;
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	static int64_t x248 = INT64_MIN;

    t60 = ((x245>(x246/x247))!=x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x249 = INT64_MAX;
	uint16_t x250 = 389U;
	int16_t x252 = INT16_MAX;
	int32_t t61 = 138813318;

    t61 = ((x249>(x250/x251))!=x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x253 = UINT32_MAX;
	int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int16_t x256 = -77;

    t62 = ((x253>(x254/x255))!=x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = 911045LL;
	static int8_t x258 = 0;

    t63 = ((x257>(x258/x259))!=x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x262 = -1LL;
	int16_t x264 = INT16_MAX;
	int32_t t64 = -113202;

    t64 = ((x261>(x262/x263))!=x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = INT32_MAX;
	uint64_t x266 = 4750520952LLU;
	int32_t x267 = 122125396;
	int8_t x268 = 1;
	volatile int32_t t65 = -6602938;

    t65 = ((x265>(x266/x267))!=x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x269 = -10;
	int16_t x270 = -31;
	uint8_t x271 = 17U;
	int8_t x272 = -1;
	volatile int32_t t66 = -13382;

    t66 = ((x269>(x270/x271))!=x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x273 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;
	volatile int32_t t67 = 24;

    t67 = ((x273>(x274/x275))!=x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x278 = -1;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 98211860U;
	int32_t t68 = 10103185;

    t68 = ((x277>(x278/x279))!=x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = 1;
	int16_t x282 = -1;
	int8_t x284 = 45;
	volatile int32_t t69 = 763079476;

    t69 = ((x281>(x282/x283))!=x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = -1;
	uint64_t x286 = 620504LLU;
	static int16_t x287 = INT16_MIN;
	uint16_t x288 = 5691U;
	int32_t t70 = -1638323;

    t70 = ((x285>(x286/x287))!=x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = INT8_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 110686928754520483LLU;
	int32_t t71 = -15546158;

    t71 = ((x289>(x290/x291))!=x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MAX;
	int16_t x294 = -1;
	int64_t x295 = -101441635747298LL;
	static uint64_t x296 = 7LLU;
	int32_t t72 = -26;

    t72 = ((x293>(x294/x295))!=x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 6U;
	int8_t x298 = -1;
	volatile int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MAX;

    t73 = ((x297>(x298/x299))!=x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x302 = -1;
	int64_t x304 = 442605LL;

    t74 = ((x301>(x302/x303))!=x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x305 = 102LLU;
	volatile int32_t x306 = -1;
	uint32_t x307 = 102689U;
	static int32_t t75 = -90;

    t75 = ((x305>(x306/x307))!=x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x310 = UINT32_MAX;
	int16_t x312 = INT16_MAX;
	volatile int32_t t76 = 30104515;

    t76 = ((x309>(x310/x311))!=x312);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x313 = -14;
	uint16_t x314 = 3U;
	int64_t x315 = INT64_MAX;
	volatile int32_t t77 = -1158;

    t77 = ((x313>(x314/x315))!=x316);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = INT64_MAX;
	int8_t x318 = -1;
	int8_t x319 = 48;
	static int32_t x320 = -1009578127;
	volatile int32_t t78 = 9656;

    t78 = ((x317>(x318/x319))!=x320);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x322 = -1;
	uint64_t x323 = 174893975LLU;
	static volatile int16_t x324 = INT16_MAX;
	volatile int32_t t79 = -1;

    t79 = ((x321>(x322/x323))!=x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x325 = 1;
	int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	static volatile int32_t t80 = -183080;

    t80 = ((x325>(x326/x327))!=x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x329 = INT32_MIN;
	static int8_t x330 = INT8_MAX;
	static uint64_t x331 = 2543453684150222625LLU;
	int8_t x332 = INT8_MIN;
	volatile int32_t t81 = -13;

    t81 = ((x329>(x330/x331))!=x332);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = 1542524;
	volatile uint16_t x334 = 23169U;
	uint8_t x335 = 18U;
	static int32_t t82 = 24726;

    t82 = ((x333>(x334/x335))!=x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x338 = INT32_MIN;
	volatile int32_t t83 = 14556;

    t83 = ((x337>(x338/x339))!=x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x342 = INT8_MIN;
	uint16_t x343 = 1U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t84 = -29;

    t84 = ((x341>(x342/x343))!=x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x345 = UINT16_MAX;
	uint16_t x347 = UINT16_MAX;
	volatile uint16_t x348 = UINT16_MAX;
	volatile int32_t t85 = -15845071;

    t85 = ((x345>(x346/x347))!=x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x349 = -1;
	static volatile int64_t x350 = -1LL;
	int64_t x351 = -1LL;
	volatile int32_t t86 = -1341;

    t86 = ((x349>(x350/x351))!=x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = -1;
	int32_t x354 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	int32_t t87 = -31115762;

    t87 = ((x353>(x354/x355))!=x356);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x358 = 9;
	int32_t x359 = -1;
	static volatile int16_t x360 = 0;
	volatile int32_t t88 = 2417;

    t88 = ((x357>(x358/x359))!=x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x361 = 721;
	static int32_t x362 = -1;
	int32_t x363 = -1;
	static int32_t t89 = -392124;

    t89 = ((x361>(x362/x363))!=x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	volatile uint64_t x368 = 30788108455LLU;

    t90 = ((x365>(x366/x367))!=x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x369 = INT16_MIN;
	uint64_t x370 = 184125LLU;
	int64_t x371 = -1LL;
	int8_t x372 = -1;

    t91 = ((x369>(x370/x371))!=x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x375 = 122;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t92 = 3;

    t92 = ((x373>(x374/x375))!=x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x378 = -24562;
	int32_t x379 = -118;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t93 = 116;

    t93 = ((x377>(x378/x379))!=x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = -1;
	int64_t x383 = INT64_MIN;
	uint8_t x384 = 65U;
	static int32_t t94 = 124;

    t94 = ((x381>(x382/x383))!=x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x388 = -1;

    t95 = ((x385>(x386/x387))!=x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MIN;
	static int32_t x391 = 8309;
	int16_t x392 = INT16_MIN;

    t96 = ((x389>(x390/x391))!=x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	uint32_t x396 = UINT32_MAX;

    t97 = ((x393>(x394/x395))!=x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x398 = 4U;
	int16_t x399 = -1;
	int32_t x400 = -598372;
	static volatile int32_t t98 = 3673;

    t98 = ((x397>(x398/x399))!=x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = 1528543026U;
	volatile uint64_t x403 = UINT64_MAX;
	uint64_t x404 = UINT64_MAX;
	int32_t t99 = 11497200;

    t99 = ((x401>(x402/x403))!=x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x405 = -51972276896660056LL;
	int64_t x406 = -1LL;
	int32_t x407 = INT32_MIN;
	volatile int64_t x408 = -2462323059274070LL;
	volatile int32_t t100 = 0;

    t100 = ((x405>(x406/x407))!=x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = 11085U;
	uint16_t x410 = 11366U;
	int32_t x411 = -1;
	volatile int16_t x412 = -89;
	static volatile int32_t t101 = -322011;

    t101 = ((x409>(x410/x411))!=x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x413 = INT8_MIN;
	uint32_t x415 = 60389689U;
	int32_t x416 = -1;
	int32_t t102 = 563632;

    t102 = ((x413>(x414/x415))!=x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x417 = -469;
	uint8_t x418 = 6U;
	int32_t t103 = 3538;

    t103 = ((x417>(x418/x419))!=x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x425 = -117;
	int16_t x426 = 0;
	static volatile int32_t x427 = INT32_MIN;
	int16_t x428 = -6817;
	int32_t t104 = -242870360;

    t104 = ((x425>(x426/x427))!=x428);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x429 = 9U;
	int16_t x430 = -85;
	int32_t t105 = 26384;

    t105 = ((x429>(x430/x431))!=x432);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x433 = 50;
	uint32_t x434 = UINT32_MAX;
	volatile int8_t x435 = 7;
	uint8_t x436 = 26U;
	int32_t t106 = 0;

    t106 = ((x433>(x434/x435))!=x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x437 = 345567618779238675LLU;
	uint64_t x438 = 95625073344400LLU;
	volatile int16_t x439 = INT16_MAX;
	uint16_t x440 = 131U;

    t107 = ((x437>(x438/x439))!=x440);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x442 = 11642U;
	static int32_t t108 = -422;

    t108 = ((x441>(x442/x443))!=x444);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x445 = UINT32_MAX;
	int32_t x446 = INT32_MAX;
	uint32_t x447 = 1017403U;
	int8_t x448 = 0;
	volatile int32_t t109 = 3314332;

    t109 = ((x445>(x446/x447))!=x448);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x449 = UINT64_MAX;
	volatile uint8_t x450 = 1U;
	volatile int32_t t110 = 3510;

    t110 = ((x449>(x450/x451))!=x452);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x454 = 5;
	uint16_t x456 = 5738U;
	int32_t t111 = -4721705;

    t111 = ((x453>(x454/x455))!=x456);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x457 = 909948941568914LL;
	uint8_t x460 = 15U;
	static volatile int32_t t112 = -5;

    t112 = ((x457>(x458/x459))!=x460);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x461 = 23U;
	static int32_t x462 = INT32_MAX;
	int8_t x463 = INT8_MIN;
	int64_t x464 = INT64_MIN;
	int32_t t113 = 3852;

    t113 = ((x461>(x462/x463))!=x464);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = 6874LL;
	int8_t x466 = 0;
	static int8_t x467 = 5;
	volatile int64_t x468 = 1868471773689LL;
	int32_t t114 = 319762;

    t114 = ((x465>(x466/x467))!=x468);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x470 = 3;
	uint64_t x471 = UINT64_MAX;
	int32_t x472 = -1;
	volatile int32_t t115 = -151;

    t115 = ((x469>(x470/x471))!=x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x473 = -1;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = 5U;
	int8_t x476 = 15;
	volatile int32_t t116 = 34102;

    t116 = ((x473>(x474/x475))!=x476);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x477 = 1U;
	volatile int64_t x478 = INT64_MAX;
	uint64_t x479 = 464LLU;
	volatile uint32_t x480 = 573U;

    t117 = ((x477>(x478/x479))!=x480);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x481 = 9876627725152492LL;
	uint16_t x482 = 209U;
	static int64_t x483 = 7729293821000402LL;
	static volatile int16_t x484 = INT16_MIN;
	static volatile int32_t t118 = 1852;

    t118 = ((x481>(x482/x483))!=x484);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x485 = INT64_MIN;
	volatile int32_t x486 = INT32_MIN;
	uint8_t x487 = UINT8_MAX;
	uint64_t x488 = 2647799883966183LLU;
	int32_t t119 = 990;

    t119 = ((x485>(x486/x487))!=x488);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x489 = 27;
	volatile int16_t x490 = -1914;
	int32_t x491 = -1;
	static volatile int32_t t120 = 1450462;

    t120 = ((x489>(x490/x491))!=x492);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x497 = INT16_MAX;
	volatile uint32_t x498 = 0U;
	static int16_t x500 = INT16_MAX;
	volatile int32_t t121 = -65814560;

    t121 = ((x497>(x498/x499))!=x500);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x501 = 1U;
	int32_t x502 = -1;
	int32_t x504 = INT32_MIN;
	int32_t t122 = -716;

    t122 = ((x501>(x502/x503))!=x504);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x507 = -1510LL;
	int64_t x508 = INT64_MIN;
	volatile int32_t t123 = -4;

    t123 = ((x505>(x506/x507))!=x508);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x509 = INT16_MIN;
	static volatile uint32_t x510 = 7U;
	int32_t x511 = INT32_MIN;
	volatile int32_t t124 = 1243167;

    t124 = ((x509>(x510/x511))!=x512);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x513 = INT8_MAX;
	volatile int64_t x514 = INT64_MIN;
	int16_t x515 = -219;
	static uint8_t x516 = 124U;
	int32_t t125 = 5339078;

    t125 = ((x513>(x514/x515))!=x516);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x518 = INT8_MIN;
	static uint32_t x519 = 25896U;
	int64_t x520 = INT64_MIN;
	static volatile int32_t t126 = 535691885;

    t126 = ((x517>(x518/x519))!=x520);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MAX;
	volatile int8_t x523 = -1;
	uint16_t x524 = 22824U;

    t127 = ((x521>(x522/x523))!=x524);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x525 = 122U;
	static uint8_t x526 = 17U;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t128 = -1187;

    t128 = ((x525>(x526/x527))!=x528);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x529 = UINT16_MAX;
	int8_t x530 = INT8_MIN;
	volatile int32_t x531 = -172;
	static volatile int16_t x532 = INT16_MIN;
	int32_t t129 = 5919972;

    t129 = ((x529>(x530/x531))!=x532);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = INT8_MIN;
	uint16_t x534 = UINT16_MAX;
	uint16_t x535 = 418U;
	int32_t x536 = INT32_MIN;
	volatile int32_t t130 = -24;

    t130 = ((x533>(x534/x535))!=x536);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x537 = UINT64_MAX;
	uint16_t x538 = 27203U;
	static volatile int32_t t131 = -371;

    t131 = ((x537>(x538/x539))!=x540);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = -1LL;
	uint64_t x544 = 107616736751259LLU;
	int32_t t132 = -29;

    t132 = ((x541>(x542/x543))!=x544);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MAX;
	static volatile uint16_t x547 = 333U;
	int32_t x548 = -1;
	static int32_t t133 = 129812470;

    t133 = ((x545>(x546/x547))!=x548);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x550 = UINT16_MAX;
	volatile int8_t x551 = -44;
	volatile uint32_t x552 = 280235U;
	volatile int32_t t134 = 2;

    t134 = ((x549>(x550/x551))!=x552);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = -1;
	uint8_t x554 = UINT8_MAX;
	int32_t x555 = -1;
	static volatile int32_t x556 = 3186214;
	int32_t t135 = -1;

    t135 = ((x553>(x554/x555))!=x556);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x558 = 29006326U;
	uint64_t x559 = 106855471LLU;

    t136 = ((x557>(x558/x559))!=x560);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x561 = UINT32_MAX;
	volatile uint64_t x562 = UINT64_MAX;
	int16_t x563 = -1;
	int64_t x564 = INT64_MIN;

    t137 = ((x561>(x562/x563))!=x564);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x566 = INT32_MIN;
	int64_t x567 = -1LL;
	uint8_t x568 = 2U;
	int32_t t138 = -30042;

    t138 = ((x565>(x566/x567))!=x568);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x569 = INT64_MIN;
	static int8_t x570 = INT8_MAX;
	static uint16_t x571 = UINT16_MAX;
	static int64_t x572 = INT64_MIN;
	volatile int32_t t139 = -954520;

    t139 = ((x569>(x570/x571))!=x572);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x574 = 140416;
	int64_t x575 = INT64_MIN;
	uint8_t x576 = 1U;
	int32_t t140 = 6812;

    t140 = ((x573>(x574/x575))!=x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x578 = INT8_MIN;
	int8_t x579 = INT8_MAX;
	int32_t x580 = INT32_MAX;
	int32_t t141 = 472;

    t141 = ((x577>(x578/x579))!=x580);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x582 = INT16_MAX;
	static volatile int8_t x583 = INT8_MIN;
	uint8_t x584 = 1U;
	int32_t t142 = 31;

    t142 = ((x581>(x582/x583))!=x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = -1LL;
	int8_t x586 = -4;
	volatile int8_t x587 = -36;
	int32_t t143 = 0;

    t143 = ((x585>(x586/x587))!=x588);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x589 = 21819U;
	int32_t x590 = INT32_MIN;
	int64_t x591 = INT64_MIN;
	int64_t x592 = INT64_MAX;
	int32_t t144 = 56;

    t144 = ((x589>(x590/x591))!=x592);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x593 = -14163;
	volatile int64_t x594 = -136583LL;
	uint32_t x595 = 31344U;
	int64_t x596 = INT64_MAX;
	int32_t t145 = 0;

    t145 = ((x593>(x594/x595))!=x596);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x599 = INT64_MIN;
	int32_t x600 = -1;

    t146 = ((x597>(x598/x599))!=x600);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = 99275;
	uint16_t x603 = UINT16_MAX;
	int32_t t147 = -14;

    t147 = ((x601>(x602/x603))!=x604);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x605 = 74U;
	static uint8_t x606 = 7U;
	uint16_t x607 = 328U;
	uint32_t x608 = 24155U;
	int32_t t148 = 1;

    t148 = ((x605>(x606/x607))!=x608);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x609 = -3800;
	int64_t x610 = INT64_MIN;
	uint8_t x611 = 4U;
	uint32_t x612 = 1012410U;
	int32_t t149 = -17869986;

    t149 = ((x609>(x610/x611))!=x612);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x613 = -71730896LL;
	volatile uint64_t x614 = UINT64_MAX;
	static int64_t x615 = INT64_MAX;
	volatile uint8_t x616 = 35U;
	volatile int32_t t150 = 71;

    t150 = ((x613>(x614/x615))!=x616);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x617 = INT32_MAX;
	int32_t x618 = 1;
	int32_t x619 = -1;
	int8_t x620 = -1;
	static int32_t t151 = -1;

    t151 = ((x617>(x618/x619))!=x620);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = 11;
	uint64_t x622 = 46097801558504435LLU;
	int64_t x623 = -222215340312LL;
	uint8_t x624 = 63U;
	int32_t t152 = -3637;

    t152 = ((x621>(x622/x623))!=x624);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x625 = 11446576339788LL;
	volatile int64_t x626 = INT64_MIN;
	volatile int16_t x627 = -10468;
	static int64_t x628 = INT64_MIN;
	volatile int32_t t153 = 72;

    t153 = ((x625>(x626/x627))!=x628);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x629 = INT64_MIN;
	int32_t x630 = 12191;
	int16_t x631 = INT16_MAX;
	uint8_t x632 = 2U;
	volatile int32_t t154 = 95278;

    t154 = ((x629>(x630/x631))!=x632);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x633 = INT32_MIN;
	int64_t x634 = -1LL;
	int8_t x635 = INT8_MAX;
	volatile int32_t x636 = 20;

    t155 = ((x633>(x634/x635))!=x636);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x638 = INT8_MIN;
	volatile int8_t x639 = INT8_MIN;
	volatile int8_t x640 = -1;
	volatile int32_t t156 = 51;

    t156 = ((x637>(x638/x639))!=x640);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x641 = UINT8_MAX;
	static int8_t x643 = INT8_MAX;
	uint8_t x644 = 5U;
	volatile int32_t t157 = -1196;

    t157 = ((x641>(x642/x643))!=x644);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x645 = 1;
	int64_t x646 = -70801070996894770LL;
	static int64_t x647 = INT64_MIN;
	static uint64_t x648 = 536695524LLU;
	static volatile int32_t t158 = -133011168;

    t158 = ((x645>(x646/x647))!=x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint64_t x650 = UINT64_MAX;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = 1;

    t159 = ((x649>(x650/x651))!=x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x653 = INT16_MIN;
	int8_t x654 = INT8_MIN;
	volatile uint16_t x655 = UINT16_MAX;
	static int64_t x656 = INT64_MIN;
	int32_t t160 = 934;

    t160 = ((x653>(x654/x655))!=x656);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x657 = 1U;
	int16_t x660 = -1;
	volatile int32_t t161 = -1;

    t161 = ((x657>(x658/x659))!=x660);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x661 = 3;
	static int16_t x662 = INT16_MAX;
	static int8_t x664 = -61;
	volatile int32_t t162 = 174381819;

    t162 = ((x661>(x662/x663))!=x664);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x665 = 681U;
	volatile int8_t x666 = -1;
	int64_t x668 = -1LL;
	int32_t t163 = 10904;

    t163 = ((x665>(x666/x667))!=x668);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x669 = 0U;
	int32_t x670 = 0;
	int32_t x672 = -1;
	volatile int32_t t164 = 160585513;

    t164 = ((x669>(x670/x671))!=x672);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x673 = INT8_MAX;
	int64_t x674 = 3LL;
	uint16_t x676 = UINT16_MAX;
	static volatile int32_t t165 = 641;

    t165 = ((x673>(x674/x675))!=x676);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x681 = 65618402LLU;
	uint16_t x682 = 482U;
	static uint8_t x683 = UINT8_MAX;
	uint8_t x684 = 86U;
	static int32_t t166 = 124;

    t166 = ((x681>(x682/x683))!=x684);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x685 = UINT8_MAX;
	int32_t x686 = 2721545;
	uint64_t x687 = 317917994356287194LLU;
	volatile int32_t t167 = -101114916;

    t167 = ((x685>(x686/x687))!=x688);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x689 = 175849523U;
	uint32_t x690 = 7888U;
	static int16_t x691 = INT16_MIN;

    t168 = ((x689>(x690/x691))!=x692);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x693 = INT8_MIN;
	int32_t x694 = -1;
	int64_t x695 = -1095072513509525602LL;
	int32_t t169 = -519554542;

    t169 = ((x693>(x694/x695))!=x696);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x698 = INT32_MIN;
	int32_t x699 = 342113;
	int16_t x700 = INT16_MIN;
	volatile int32_t t170 = 0;

    t170 = ((x697>(x698/x699))!=x700);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x701 = 4;
	uint64_t x702 = 1332051167566522667LLU;
	int32_t x704 = -1;

    t171 = ((x701>(x702/x703))!=x704);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x705 = 310LLU;
	int8_t x706 = INT8_MIN;
	int8_t x707 = -1;
	static int16_t x708 = 2;
	volatile int32_t t172 = 54;

    t172 = ((x705>(x706/x707))!=x708);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x709 = -84;
	int32_t x711 = -1;
	uint8_t x712 = 3U;
	int32_t t173 = 59;

    t173 = ((x709>(x710/x711))!=x712);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x714 = -1;
	static volatile uint8_t x715 = UINT8_MAX;
	int64_t x716 = INT64_MAX;
	int32_t t174 = 12;

    t174 = ((x713>(x714/x715))!=x716);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x717 = INT8_MIN;
	volatile uint8_t x718 = 13U;
	volatile int16_t x719 = INT16_MIN;
	int16_t x720 = -3;
	volatile int32_t t175 = 932;

    t175 = ((x717>(x718/x719))!=x720);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x721 = 1509U;
	volatile int8_t x722 = INT8_MIN;
	int64_t x724 = INT64_MAX;
	static volatile int32_t t176 = 763952;

    t176 = ((x721>(x722/x723))!=x724);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x725 = -88;
	static volatile int8_t x726 = 0;
	uint64_t x727 = 33726407339893LLU;
	static volatile int32_t t177 = 107323598;

    t177 = ((x725>(x726/x727))!=x728);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	int16_t x730 = 886;
	static volatile int32_t x731 = 1;
	uint16_t x732 = 424U;
	volatile int32_t t178 = 70520;

    t178 = ((x729>(x730/x731))!=x732);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x733 = -1;
	uint8_t x734 = 41U;
	static int8_t x735 = -1;
	uint32_t x736 = UINT32_MAX;
	int32_t t179 = 25422;

    t179 = ((x733>(x734/x735))!=x736);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x739 = INT16_MIN;
	int16_t x740 = -1;
	int32_t t180 = -19433612;

    t180 = ((x737>(x738/x739))!=x740);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x741 = INT64_MIN;
	volatile int32_t x742 = -68982;
	int32_t x743 = INT32_MAX;
	int8_t x744 = INT8_MIN;
	volatile int32_t t181 = 6;

    t181 = ((x741>(x742/x743))!=x744);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x747 = INT8_MIN;
	volatile int32_t x748 = INT32_MIN;
	volatile int32_t t182 = 340642549;

    t182 = ((x745>(x746/x747))!=x748);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x752 = UINT8_MAX;
	static int32_t t183 = -1564174;

    t183 = ((x749>(x750/x751))!=x752);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x753 = UINT16_MAX;

    t184 = ((x753>(x754/x755))!=x756);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x757 = -1;
	int16_t x758 = -1;
	int16_t x759 = 1;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t185 = 24303312;

    t185 = ((x757>(x758/x759))!=x760);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x763 = 69U;

    t186 = ((x761>(x762/x763))!=x764);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = 266;
	int8_t x766 = -8;
	int16_t x767 = INT16_MAX;
	static uint8_t x768 = 0U;
	int32_t t187 = 5;

    t187 = ((x765>(x766/x767))!=x768);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x769 = -1LL;
	volatile uint16_t x770 = 88U;
	uint16_t x771 = UINT16_MAX;
	int32_t t188 = -58303557;

    t188 = ((x769>(x770/x771))!=x772);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x773 = INT8_MIN;
	int64_t x774 = INT64_MIN;
	static int32_t t189 = -389;

    t189 = ((x773>(x774/x775))!=x776);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x777 = INT64_MIN;
	int16_t x779 = INT16_MAX;
	int32_t t190 = 730;

    t190 = ((x777>(x778/x779))!=x780);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x785 = -1;
	int16_t x787 = -1;
	volatile int32_t t191 = -48821;

    t191 = ((x785>(x786/x787))!=x788);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = -1;
	int64_t x790 = INT64_MIN;
	volatile uint32_t x791 = 610128U;
	int8_t x792 = 0;

    t192 = ((x789>(x790/x791))!=x792);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x793 = 3201;
	volatile int32_t x794 = INT32_MAX;
	int8_t x795 = 1;
	volatile uint8_t x796 = 5U;
	volatile int32_t t193 = 0;

    t193 = ((x793>(x794/x795))!=x796);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x797 = 399520042;
	static int8_t x798 = INT8_MAX;
	static uint32_t x799 = 13943U;
	volatile int8_t x800 = -19;
	int32_t t194 = -8072369;

    t194 = ((x797>(x798/x799))!=x800);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x801 = INT32_MIN;
	volatile int16_t x802 = -1;
	int32_t x804 = INT32_MIN;
	volatile int32_t t195 = 1;

    t195 = ((x801>(x802/x803))!=x804);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x805 = INT64_MAX;
	uint8_t x806 = 0U;
	static volatile int32_t x807 = -216;
	volatile int32_t x808 = 1;

    t196 = ((x805>(x806/x807))!=x808);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = INT32_MIN;
	int64_t x810 = 11882868184950223LL;
	static volatile int32_t t197 = -1;

    t197 = ((x809>(x810/x811))!=x812);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x817 = 16U;
	int8_t x819 = -3;
	volatile int32_t t198 = -18772;

    t198 = ((x817>(x818/x819))!=x820);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x821 = -1;
	int64_t x822 = -5042859025LL;
	volatile uint8_t x823 = 39U;
	int8_t x824 = 3;

    t199 = ((x821>(x822/x823))!=x824);

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

