
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

int16_t x4 = 3;
int64_t t1 = -58LL;
int32_t t2 = 883129841;
volatile uint32_t x13 = UINT32_MAX;
uint32_t x14 = 164669586U;
int32_t x16 = INT32_MIN;
uint32_t x19 = 77968U;
int16_t x24 = INT16_MAX;
static volatile uint16_t x28 = UINT16_MAX;
int32_t t6 = 24338263;
static int16_t x30 = INT16_MIN;
volatile int64_t t8 = -3814164LL;
int8_t x39 = INT8_MIN;
int64_t x47 = INT64_MAX;
volatile int64_t t11 = 663659351913LL;
static int8_t x49 = INT8_MAX;
uint8_t x50 = 30U;
volatile uint8_t x58 = 101U;
volatile int16_t x65 = -527;
int64_t x66 = -1LL;
int64_t t16 = -2610002896LL;
volatile int32_t x73 = -1;
static int16_t x74 = -1234;
int16_t x77 = -15;
volatile int16_t x81 = -1;
static volatile uint64_t t20 = 43911153LLU;
static uint64_t x87 = 64365010LLU;
int8_t x88 = INT8_MAX;
volatile int16_t x89 = INT16_MIN;
int16_t x101 = -1;
int64_t x105 = -1LL;
volatile uint8_t x108 = UINT8_MAX;
int64_t x112 = -969LL;
int64_t t26 = 1516300LL;
static int32_t x116 = -725;
int8_t x121 = INT8_MIN;
uint8_t x125 = 27U;
int32_t x127 = INT32_MIN;
volatile int64_t x134 = INT64_MIN;
static uint16_t x138 = 795U;
static int64_t x146 = INT64_MIN;
static int16_t x150 = -1;
volatile uint8_t x153 = 8U;
int32_t x158 = INT32_MAX;
volatile int16_t x160 = -2;
int16_t x170 = -1;
uint8_t x173 = UINT8_MAX;
static int32_t t41 = 1;
static uint32_t x181 = 203U;
uint32_t x186 = 27U;
int64_t x188 = INT64_MAX;
int8_t x195 = INT8_MIN;
int32_t x212 = INT32_MIN;
uint64_t x218 = UINT64_MAX;
int16_t x221 = 0;
volatile int64_t x224 = 321742086214LL;
static uint32_t x242 = UINT32_MAX;
static volatile uint16_t x243 = UINT16_MAX;
static uint64_t x245 = 0LLU;
uint8_t x256 = 10U;
uint16_t x258 = 1U;
int16_t x266 = INT16_MIN;
uint8_t x267 = 1U;
int16_t x272 = 18;
volatile int64_t t62 = 50LL;
uint32_t x281 = 888U;
volatile int64_t x289 = INT64_MIN;
int16_t x295 = INT16_MIN;
int8_t x304 = INT8_MIN;
int16_t x307 = 9249;
volatile int64_t t70 = 3270829831107255032LL;
uint64_t x318 = 252623131241LLU;
volatile int32_t t72 = 13803326;
int16_t x330 = INT16_MIN;
int64_t x333 = INT64_MIN;
int64_t x334 = INT64_MIN;
volatile int32_t t75 = -1;
static uint16_t x338 = 661U;
int16_t x349 = 96;
static int16_t x350 = INT16_MIN;
static volatile int32_t t79 = -354712479;
static volatile int16_t x353 = INT16_MAX;
static volatile int64_t t80 = 5LL;
volatile int8_t x358 = INT8_MIN;
int8_t x360 = INT8_MIN;
int8_t x361 = INT8_MAX;
int32_t x375 = -43;
volatile int64_t x385 = -1LL;
int32_t x387 = INT32_MAX;
static uint32_t x397 = 1U;
int64_t x405 = -1LL;
int64_t x406 = -1LL;
int32_t t91 = -19;
static int32_t t92 = -4846;
int16_t x416 = INT16_MIN;
volatile int64_t x418 = -7LL;
volatile int16_t x425 = INT16_MIN;
uint64_t x430 = UINT64_MAX;
uint16_t x437 = 291U;
uint16_t x447 = 501U;
static int64_t x452 = INT64_MIN;
volatile int32_t x455 = 164;
int8_t x461 = INT8_MIN;
int8_t x463 = INT8_MAX;
uint64_t t105 = 3223LLU;
volatile int32_t t106 = -964273125;
volatile int32_t t107 = 0;
int32_t x477 = INT32_MIN;
static volatile int64_t t108 = -108026803921801LL;
static int16_t x482 = -11;
uint32_t t109 = 22U;
int64_t x488 = 2887742365LL;
volatile int64_t x490 = -244LL;
uint8_t x492 = UINT8_MAX;
int32_t x493 = INT32_MIN;
int16_t x500 = 1;
static volatile int32_t t113 = -85113;
uint8_t x513 = UINT8_MAX;
static int64_t x518 = INT64_MAX;
static int64_t x520 = INT64_MIN;
static int8_t x524 = INT8_MAX;
int8_t x531 = INT8_MAX;
int64_t x534 = INT64_MIN;
int8_t x542 = INT8_MAX;
int8_t x554 = -1;
volatile uint16_t x555 = 28091U;
int8_t x556 = -1;
int32_t t126 = 874;
volatile int32_t x563 = -1;
int16_t x570 = -1;
int64_t x572 = INT64_MAX;
volatile int8_t x574 = INT8_MIN;
int64_t x578 = INT64_MIN;
int16_t x581 = INT16_MIN;
volatile uint16_t x585 = 13085U;
uint32_t x586 = 351366237U;
uint64_t x588 = UINT64_MAX;
uint64_t x591 = UINT64_MAX;
static int32_t t135 = -14;
int32_t x597 = INT32_MIN;
int64_t x603 = -1LL;
int64_t x604 = 12557609323676LL;
static int16_t x621 = INT16_MIN;
static uint16_t x623 = 34U;
static volatile int32_t t142 = -190;
int8_t x627 = INT8_MIN;
volatile uint8_t x635 = 2U;
static volatile int16_t x636 = -1;
static volatile uint32_t x638 = 18U;
static volatile int64_t x650 = INT64_MAX;
int8_t x651 = INT8_MIN;
int32_t x652 = INT32_MIN;
volatile int8_t x653 = INT8_MAX;
int64_t x658 = INT64_MAX;
volatile int32_t t150 = 227;
volatile int64_t x671 = INT64_MIN;
static int32_t t153 = -12049;
volatile uint64_t x678 = UINT64_MAX;
uint32_t x687 = UINT32_MAX;
int8_t x703 = INT8_MIN;
volatile int16_t x707 = INT16_MIN;
static volatile int16_t x713 = 9901;
volatile int32_t t164 = 15;
int64_t x723 = -1LL;
uint8_t x726 = 4U;
static volatile int8_t x733 = INT8_MAX;
uint64_t x736 = 190749LLU;
int16_t x739 = INT16_MAX;
int16_t x749 = -1;
int32_t x757 = -560423071;
static volatile int16_t x759 = 62;
static uint8_t x765 = 0U;
uint64_t x770 = 56929933027LLU;
int32_t t178 = -1071363;
int16_t x780 = INT16_MAX;
static volatile int16_t x782 = -81;
static uint32_t x796 = UINT32_MAX;
int16_t x798 = 13349;
int32_t x799 = -8955;
int64_t x808 = INT64_MIN;
volatile int64_t x817 = -1LL;
volatile int64_t x823 = 704804LL;
int16_t x827 = -1;
int32_t t191 = -1756;
volatile int32_t t192 = 165432427;
int8_t x851 = INT8_MIN;
uint32_t t193 = 206647949U;
volatile int64_t x864 = INT64_MIN;
int32_t t197 = 562028;
volatile int16_t x870 = 132;
uint32_t x872 = UINT32_MAX;


void f0(void) {
    	static int64_t x1 = -50261037675LL;
	int16_t x2 = -1;
	uint32_t x3 = 182638329U;
	int32_t t0 = 1180;

    t0 = ((x1>(x2/x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 1316U;
	static int16_t x6 = INT16_MIN;
	int16_t x7 = -1;
	volatile int64_t x8 = 231LL;

    t1 = ((x5>(x6/x7))/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 6709;
	volatile uint16_t x10 = 672U;
	int8_t x11 = -1;
	volatile int16_t x12 = INT16_MAX;

    t2 = ((x9>(x10/x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x15 = -1;
	volatile int32_t t3 = -11;

    t3 = ((x13>(x14/x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MAX;
	volatile uint16_t x18 = 36U;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -33964;

    t4 = ((x17>(x18/x19))/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -3;
	static int8_t x22 = -1;
	int64_t x23 = -1LL;
	volatile int32_t t5 = 1;

    t5 = ((x21>(x22/x23))/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	static int16_t x26 = -1;
	uint16_t x27 = UINT16_MAX;

    t6 = ((x25>(x26/x27))/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x29 = 3903U;
	int8_t x31 = INT8_MIN;
	static int64_t x32 = -534494472393LL;
	static int64_t t7 = 812408742827661LL;

    t7 = ((x29>(x30/x31))/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -35179457543624569LL;
	static int16_t x34 = INT16_MIN;
	volatile uint8_t x35 = 21U;
	static int64_t x36 = 863LL;

    t8 = ((x33>(x34/x35))/x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 450U;
	int32_t x40 = 49807;
	volatile int32_t t9 = -1;

    t9 = ((x37>(x38/x39))/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -564;

    t10 = ((x41>(x42/x43))/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile uint64_t x46 = 31LLU;
	int64_t x48 = -1LL;

    t11 = ((x45>(x46/x47))/x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x51 = 105U;
	int8_t x52 = 1;
	volatile int32_t t12 = 199;

    t12 = ((x49>(x50/x51))/x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 207085987482LLU;
	int8_t x54 = 0;
	int32_t x55 = 30035277;
	uint16_t x56 = 17577U;
	volatile int32_t t13 = 530545;

    t13 = ((x53>(x54/x55))/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = -1LL;
	int64_t t14 = -3459LL;

    t14 = ((x57>(x58/x59))/x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 26U;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = -1;
	static volatile int16_t x64 = INT16_MIN;
	int32_t t15 = 29979269;

    t15 = ((x61>(x62/x63))/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x67 = INT32_MIN;
	static int64_t x68 = INT64_MIN;

    t16 = ((x65>(x66/x67))/x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int64_t x70 = -1LL;
	uint8_t x71 = 41U;
	int32_t x72 = 59232;
	volatile int32_t t17 = 8;

    t17 = ((x69>(x70/x71))/x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -5388321;

    t18 = ((x73>(x74/x75))/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x78 = 14U;
	int16_t x79 = 288;
	int16_t x80 = -12;
	int32_t t19 = -12227012;

    t19 = ((x77>(x78/x79))/x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	volatile int64_t x83 = -1401919660760LL;
	volatile uint64_t x84 = 12184611985715LLU;

    t20 = ((x81>(x82/x83))/x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	volatile int64_t x86 = INT64_MIN;
	int32_t t21 = 0;

    t21 = ((x85>(x86/x87))/x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -1;
	int64_t x91 = INT64_MIN;
	static uint16_t x92 = UINT16_MAX;
	int32_t t22 = -107309429;

    t22 = ((x89>(x90/x91))/x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = 3343;
	uint16_t x94 = 1968U;
	static int64_t x95 = INT64_MAX;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 347541513LL;

    t23 = ((x93>(x94/x95))/x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x102 = 1201;
	int32_t x103 = INT32_MAX;
	uint16_t x104 = 10U;
	volatile int32_t t24 = -6317988;

    t24 = ((x101>(x102/x103))/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x106 = 158960LLU;
	volatile int16_t x107 = -921;
	static volatile int32_t t25 = -1504498;

    t25 = ((x105>(x106/x107))/x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = 5672;
	volatile int8_t x110 = INT8_MIN;
	static int16_t x111 = 443;

    t26 = ((x109>(x110/x111))/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	static int32_t t27 = 14171371;

    t27 = ((x113>(x114/x115))/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile int64_t x120 = -1LL;
	volatile int64_t t28 = 39089404438187394LL;

    t28 = ((x117>(x118/x119))/x120);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x122 = 11;
	int8_t x123 = -1;
	volatile int32_t x124 = 1013016131;
	int32_t t29 = 715;

    t29 = ((x121>(x122/x123))/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = INT32_MAX;
	int8_t x128 = -54;
	int32_t t30 = 1;

    t30 = ((x125>(x126/x127))/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x130 = -34459;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -1347;

    t31 = ((x129>(x130/x131))/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -1;
	volatile int32_t x135 = INT32_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	uint32_t t32 = 72U;

    t32 = ((x133>(x134/x135))/x136);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MAX;
	static volatile int32_t t33 = 2764511;

    t33 = ((x137>(x138/x139))/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x145 = INT16_MIN;
	uint32_t x147 = UINT32_MAX;
	volatile int8_t x148 = INT8_MAX;
	volatile int32_t t34 = 32633;

    t34 = ((x145>(x146/x147))/x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MAX;
	int8_t x151 = INT8_MAX;
	volatile int8_t x152 = INT8_MAX;
	int32_t t35 = 645549;

    t35 = ((x149>(x150/x151))/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x154 = 3139U;
	static volatile int64_t x155 = INT64_MIN;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t36 = 81373U;

    t36 = ((x153>(x154/x155))/x156);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -80162634212630205LL;
	volatile uint32_t x159 = 530431274U;
	volatile int32_t t37 = 226;

    t37 = ((x157>(x158/x159))/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = 0;
	volatile uint8_t x162 = 52U;
	volatile int8_t x163 = INT8_MIN;
	uint32_t x164 = 7235662U;
	volatile uint32_t t38 = 485214U;

    t38 = ((x161>(x162/x163))/x164);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x169 = UINT64_MAX;
	uint64_t x171 = 564LLU;
	int8_t x172 = INT8_MIN;
	int32_t t39 = -13251925;

    t39 = ((x169>(x170/x171))/x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x174 = INT16_MAX;
	uint8_t x175 = 9U;
	int16_t x176 = 96;
	int32_t t40 = 65;

    t40 = ((x173>(x174/x175))/x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = 323;
	uint8_t x178 = 1U;
	int16_t x179 = 53;
	int8_t x180 = -1;

    t41 = ((x177>(x178/x179))/x180);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x182 = INT32_MAX;
	uint8_t x183 = 13U;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t42 = -113967401;

    t42 = ((x181>(x182/x183))/x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x185 = INT32_MAX;
	volatile uint64_t x187 = 72333LLU;
	volatile int64_t t43 = -46725LL;

    t43 = ((x185>(x186/x187))/x188);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = -1LL;
	volatile uint64_t x194 = UINT64_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t44 = -53421LL;

    t44 = ((x193>(x194/x195))/x196);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x201 = -51;
	volatile int32_t x202 = INT32_MAX;
	int64_t x203 = 7755182582LL;
	uint16_t x204 = UINT16_MAX;
	static int32_t t45 = -976;

    t45 = ((x201>(x202/x203))/x204);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = INT32_MAX;
	uint32_t x206 = 7969U;
	static int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t46 = 8;

    t46 = ((x205>(x206/x207))/x208);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x209 = 1;
	uint16_t x210 = 3U;
	volatile uint8_t x211 = 42U;
	int32_t t47 = 665129;

    t47 = ((x209>(x210/x211))/x212);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x213 = INT32_MIN;
	uint32_t x214 = 615U;
	int64_t x215 = INT64_MIN;
	uint64_t x216 = 1644272543LLU;
	static volatile uint64_t t48 = 20LLU;

    t48 = ((x213>(x214/x215))/x216);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x217 = 50404612411980LLU;
	int32_t x219 = -873;
	int32_t x220 = INT32_MIN;
	int32_t t49 = -3409844;

    t49 = ((x217>(x218/x219))/x220);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x222 = 1;
	int16_t x223 = -25;
	int64_t t50 = -23121479560219LL;

    t50 = ((x221>(x222/x223))/x224);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = -701;
	int64_t x227 = INT64_MAX;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t51 = -3;

    t51 = ((x225>(x226/x227))/x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = INT64_MIN;
	uint32_t x230 = 2249696U;
	static uint32_t x231 = UINT32_MAX;
	static int64_t x232 = -1LL;
	volatile int64_t t52 = -8460627752LL;

    t52 = ((x229>(x230/x231))/x232);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x237 = -1;
	int64_t x238 = -2430818221639LL;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = 474U;
	static volatile uint32_t t53 = 260453008U;

    t53 = ((x237>(x238/x239))/x240);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x241 = INT32_MAX;
	volatile int8_t x244 = -2;
	volatile int32_t t54 = 56499;

    t54 = ((x241>(x242/x243))/x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x246 = 4456U;
	uint16_t x247 = 12037U;
	int64_t x248 = INT64_MAX;
	int64_t t55 = 9LL;

    t55 = ((x245>(x246/x247))/x248);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = INT32_MAX;
	static uint16_t x250 = 1U;
	int32_t x251 = -1;
	int16_t x252 = INT16_MIN;
	int32_t t56 = 1185;

    t56 = ((x249>(x250/x251))/x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x253 = INT8_MIN;
	static uint64_t x254 = 1117687863732077900LLU;
	int8_t x255 = INT8_MAX;
	static int32_t t57 = -216967;

    t57 = ((x253>(x254/x255))/x256);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = 0LL;
	uint8_t x259 = 9U;
	volatile uint64_t x260 = 37165788079411LLU;
	volatile uint64_t t58 = 2LLU;

    t58 = ((x257>(x258/x259))/x260);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = -1;
	int16_t x262 = INT16_MAX;
	int32_t x263 = -1;
	int64_t x264 = INT64_MIN;
	int64_t t59 = -4172012352LL;

    t59 = ((x261>(x262/x263))/x264);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x265 = UINT8_MAX;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t60 = -2996359;

    t60 = ((x265>(x266/x267))/x268);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x269 = 1U;
	int64_t x270 = -15878332374926LL;
	static int16_t x271 = 2;
	static volatile int32_t t61 = -14133986;

    t61 = ((x269>(x270/x271))/x272);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x277 = UINT64_MAX;
	static uint32_t x278 = UINT32_MAX;
	static int64_t x279 = INT64_MIN;
	int64_t x280 = 87185586LL;

    t62 = ((x277>(x278/x279))/x280);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x282 = 1941LL;
	uint8_t x283 = 1U;
	static int8_t x284 = -6;
	int32_t t63 = 828739397;

    t63 = ((x281>(x282/x283))/x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MIN;
	static int64_t x287 = 299LL;
	int32_t x288 = -114702;
	int32_t t64 = -508;

    t64 = ((x285>(x286/x287))/x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x290 = INT8_MIN;
	uint32_t x291 = 110548401U;
	static volatile uint64_t x292 = 1970355LLU;
	volatile uint64_t t65 = 24438614LLU;

    t65 = ((x289>(x290/x291))/x292);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x293 = 37U;
	uint64_t x294 = UINT64_MAX;
	static int64_t x296 = INT64_MIN;
	volatile int64_t t66 = -195044011316274LL;

    t66 = ((x293>(x294/x295))/x296);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = INT64_MIN;
	int64_t x298 = -167749LL;
	static uint32_t x299 = 1095275351U;
	int8_t x300 = 8;
	int32_t t67 = -3386;

    t67 = ((x297>(x298/x299))/x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x301 = -11;
	volatile uint64_t x302 = UINT64_MAX;
	volatile int64_t x303 = -1LL;
	int32_t t68 = 1;

    t68 = ((x301>(x302/x303))/x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x305 = INT16_MIN;
	volatile int64_t x306 = INT64_MIN;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t69 = 30795;

    t69 = ((x305>(x306/x307))/x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x309 = -1835368;
	int64_t x310 = 15907920019LL;
	int32_t x311 = -1;
	static int64_t x312 = INT64_MAX;

    t70 = ((x309>(x310/x311))/x312);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x313 = 3U;
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	volatile int8_t x316 = INT8_MIN;
	int32_t t71 = 0;

    t71 = ((x313>(x314/x315))/x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	static int32_t x320 = INT32_MIN;

    t72 = ((x317>(x318/x319))/x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x321 = UINT8_MAX;
	static uint32_t x322 = 2571360U;
	uint64_t x323 = UINT64_MAX;
	static int8_t x324 = INT8_MIN;
	static int32_t t73 = 115;

    t73 = ((x321>(x322/x323))/x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = -103622470134424271LL;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = UINT16_MAX;
	int32_t t74 = 7394;

    t74 = ((x329>(x330/x331))/x332);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x335 = INT32_MIN;
	int16_t x336 = -138;

    t75 = ((x333>(x334/x335))/x336);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = INT16_MIN;
	int32_t x339 = 4041;
	volatile int64_t x340 = -7511915310LL;
	static int64_t t76 = -847LL;

    t76 = ((x337>(x338/x339))/x340);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x341 = -1LL;
	uint8_t x342 = UINT8_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	volatile int64_t x344 = -1LL;
	int64_t t77 = -89LL;

    t77 = ((x341>(x342/x343))/x344);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x345 = UINT64_MAX;
	static int8_t x346 = 58;
	int8_t x347 = -26;
	uint16_t x348 = 2506U;
	int32_t t78 = 0;

    t78 = ((x345>(x346/x347))/x348);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MAX;

    t79 = ((x349>(x350/x351))/x352);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x354 = -1;
	int16_t x355 = -22;
	static int64_t x356 = -385365880476952265LL;

    t80 = ((x353>(x354/x355))/x356);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x357 = INT16_MAX;
	int32_t x359 = -92907186;
	volatile int32_t t81 = -1;

    t81 = ((x357>(x358/x359))/x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x362 = 1536787502986154715LL;
	uint32_t x363 = 11779062U;
	int8_t x364 = INT8_MAX;
	volatile int32_t t82 = -96;

    t82 = ((x361>(x362/x363))/x364);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x369 = -7;
	static uint32_t x370 = 212678U;
	int32_t x371 = 372077;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t83 = 1808256147070989LL;

    t83 = ((x369>(x370/x371))/x372);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = -1;
	int8_t x374 = INT8_MIN;
	uint16_t x376 = 1U;
	volatile int32_t t84 = 0;

    t84 = ((x373>(x374/x375))/x376);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x377 = INT64_MAX;
	volatile int64_t x378 = 464667004867125LL;
	uint32_t x379 = UINT32_MAX;
	volatile int8_t x380 = -1;
	int32_t t85 = -490010;

    t85 = ((x377>(x378/x379))/x380);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = 387124846738672LLU;
	static volatile uint64_t t86 = 7152424457LLU;

    t86 = ((x381>(x382/x383))/x384);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x386 = 10LLU;
	int8_t x388 = -1;
	volatile int32_t t87 = -869;

    t87 = ((x385>(x386/x387))/x388);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x393 = INT32_MIN;
	static uint8_t x394 = 5U;
	static int8_t x395 = -39;
	int64_t x396 = INT64_MAX;
	int64_t t88 = -995714927493913272LL;

    t88 = ((x393>(x394/x395))/x396);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x398 = 2970U;
	int32_t x399 = -13019;
	int32_t x400 = INT32_MIN;
	static int32_t t89 = 402234;

    t89 = ((x397>(x398/x399))/x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x401 = -1;
	int32_t x402 = -2;
	uint64_t x403 = 31345518892964LLU;
	int8_t x404 = INT8_MAX;
	volatile int32_t t90 = 22346453;

    t90 = ((x401>(x402/x403))/x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x407 = 14U;
	static int32_t x408 = 8104;

    t91 = ((x405>(x406/x407))/x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x409 = -1;
	static int16_t x410 = INT16_MIN;
	int16_t x411 = 11;
	volatile int8_t x412 = INT8_MIN;

    t92 = ((x409>(x410/x411))/x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x413 = INT32_MIN;
	int64_t x414 = INT64_MAX;
	int8_t x415 = INT8_MIN;
	volatile int32_t t93 = 7694;

    t93 = ((x413>(x414/x415))/x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x417 = INT64_MIN;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = INT64_MIN;
	volatile int64_t t94 = -83659LL;

    t94 = ((x417>(x418/x419))/x420);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x421 = 1;
	int8_t x422 = INT8_MIN;
	volatile uint8_t x423 = 91U;
	volatile int16_t x424 = 5185;
	int32_t t95 = 12196;

    t95 = ((x421>(x422/x423))/x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x426 = -2079330;
	int8_t x427 = -7;
	int16_t x428 = INT16_MIN;
	static int32_t t96 = -3;

    t96 = ((x425>(x426/x427))/x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x429 = -15843584361942LL;
	int32_t x431 = INT32_MIN;
	static int64_t x432 = INT64_MAX;
	int64_t t97 = -188013218LL;

    t97 = ((x429>(x430/x431))/x432);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x433 = 54692815735LL;
	int16_t x434 = -886;
	int64_t x435 = INT64_MIN;
	static volatile int32_t x436 = 7;
	int32_t t98 = -408687;

    t98 = ((x433>(x434/x435))/x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x438 = 9328522683092840LLU;
	int16_t x439 = -1;
	static int8_t x440 = INT8_MIN;
	int32_t t99 = 9421721;

    t99 = ((x437>(x438/x439))/x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x441 = UINT64_MAX;
	int16_t x442 = INT16_MAX;
	volatile int16_t x443 = INT16_MIN;
	int32_t x444 = -1;
	volatile int32_t t100 = -503286;

    t100 = ((x441>(x442/x443))/x444);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x445 = 1249456987LLU;
	int32_t x446 = -1;
	int32_t x448 = INT32_MIN;
	int32_t t101 = -1679990;

    t101 = ((x445>(x446/x447))/x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x449 = 47877200906425772LLU;
	int32_t x450 = INT32_MIN;
	int16_t x451 = INT16_MIN;
	int64_t t102 = 5368507348620997LL;

    t102 = ((x449>(x450/x451))/x452);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x453 = INT8_MIN;
	int8_t x454 = 2;
	volatile int32_t x456 = -1;
	volatile int32_t t103 = 1;

    t103 = ((x453>(x454/x455))/x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x457 = INT32_MAX;
	int16_t x458 = INT16_MIN;
	int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MIN;
	int64_t t104 = 1LL;

    t104 = ((x457>(x458/x459))/x460);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x462 = INT16_MIN;
	static uint64_t x464 = 408106LLU;

    t105 = ((x461>(x462/x463))/x464);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x469 = INT16_MAX;
	uint64_t x470 = UINT64_MAX;
	uint64_t x471 = UINT64_MAX;
	int16_t x472 = INT16_MIN;

    t106 = ((x469>(x470/x471))/x472);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x473 = 5050LLU;
	volatile int8_t x474 = INT8_MIN;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 63U;

    t107 = ((x473>(x474/x475))/x476);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x478 = -1LL;
	static uint8_t x479 = UINT8_MAX;
	int64_t x480 = INT64_MIN;

    t108 = ((x477>(x478/x479))/x480);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x483 = INT8_MIN;
	static uint32_t x484 = 34212997U;

    t109 = ((x481>(x482/x483))/x484);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x485 = INT16_MIN;
	static int16_t x486 = INT16_MIN;
	volatile int64_t x487 = -1LL;
	volatile int64_t t110 = -19LL;

    t110 = ((x485>(x486/x487))/x488);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x489 = INT64_MIN;
	static int64_t x491 = INT64_MIN;
	int32_t t111 = 16;

    t111 = ((x489>(x490/x491))/x492);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x494 = -1LL;
	static uint64_t x495 = 1810342828992758927LLU;
	volatile uint16_t x496 = 10U;
	static volatile int32_t t112 = 12;

    t112 = ((x493>(x494/x495))/x496);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x497 = 268829338482LLU;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MIN;

    t113 = ((x497>(x498/x499))/x500);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x501 = INT16_MAX;
	uint64_t x502 = 40373245098928LLU;
	int16_t x503 = INT16_MIN;
	volatile int16_t x504 = 254;
	int32_t t114 = -204;

    t114 = ((x501>(x502/x503))/x504);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x509 = -1LL;
	uint64_t x510 = 2007LLU;
	static uint64_t x511 = 33687070370934843LLU;
	int16_t x512 = INT16_MAX;
	static volatile int32_t t115 = -49212461;

    t115 = ((x509>(x510/x511))/x512);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x514 = 21683U;
	int32_t x515 = 4898;
	int16_t x516 = INT16_MIN;
	volatile int32_t t116 = 12389;

    t116 = ((x513>(x514/x515))/x516);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x517 = UINT8_MAX;
	int64_t x519 = -1LL;
	int64_t t117 = -14LL;

    t117 = ((x517>(x518/x519))/x520);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x521 = INT16_MIN;
	uint64_t x522 = UINT64_MAX;
	static int16_t x523 = -1;
	volatile int32_t t118 = -841087850;

    t118 = ((x521>(x522/x523))/x524);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x525 = INT16_MIN;
	volatile int8_t x526 = 0;
	int64_t x527 = 25LL;
	uint16_t x528 = 119U;
	int32_t t119 = 582032;

    t119 = ((x525>(x526/x527))/x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x529 = 244205085;
	int64_t x530 = -63483861267988620LL;
	static int32_t x532 = -1;
	int32_t t120 = 121;

    t120 = ((x529>(x530/x531))/x532);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x533 = 1;
	int8_t x535 = INT8_MAX;
	int8_t x536 = INT8_MIN;
	static volatile int32_t t121 = 1;

    t121 = ((x533>(x534/x535))/x536);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x537 = -1;
	static uint16_t x538 = 5306U;
	volatile int64_t x539 = INT64_MAX;
	int32_t x540 = INT32_MAX;
	volatile int32_t t122 = -31173097;

    t122 = ((x537>(x538/x539))/x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x541 = 3U;
	volatile int32_t x543 = 17;
	uint16_t x544 = UINT16_MAX;
	int32_t t123 = 12;

    t123 = ((x541>(x542/x543))/x544);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x545 = 6LLU;
	int32_t x546 = INT32_MAX;
	uint64_t x547 = 5571811769898699718LLU;
	volatile int64_t x548 = INT64_MIN;
	static volatile int64_t t124 = 3LL;

    t124 = ((x545>(x546/x547))/x548);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x549 = 1660LLU;
	static int8_t x550 = INT8_MAX;
	volatile int16_t x551 = 678;
	volatile int8_t x552 = INT8_MIN;
	volatile int32_t t125 = 26547906;

    t125 = ((x549>(x550/x551))/x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x553 = INT16_MIN;

    t126 = ((x553>(x554/x555))/x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x557 = -3027971623LL;
	int64_t x558 = INT64_MAX;
	static int8_t x559 = -1;
	int64_t x560 = 5930715395909LL;
	volatile int64_t t127 = -6793468LL;

    t127 = ((x557>(x558/x559))/x560);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x561 = UINT32_MAX;
	uint16_t x562 = 7666U;
	int8_t x564 = INT8_MIN;
	static volatile int32_t t128 = 1161;

    t128 = ((x561>(x562/x563))/x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x565 = 7304U;
	volatile int8_t x566 = INT8_MAX;
	volatile int16_t x567 = -205;
	int64_t x568 = -5LL;
	volatile int64_t t129 = -36078246309784951LL;

    t129 = ((x565>(x566/x567))/x568);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x569 = INT64_MIN;
	volatile int8_t x571 = INT8_MIN;
	static volatile int64_t t130 = -491LL;

    t130 = ((x569>(x570/x571))/x572);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x573 = 116U;
	volatile int64_t x575 = -1LL;
	int64_t x576 = -1LL;
	int64_t t131 = -7126568LL;

    t131 = ((x573>(x574/x575))/x576);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x577 = INT16_MIN;
	uint8_t x579 = 91U;
	volatile int16_t x580 = -8;
	volatile int32_t t132 = 3747239;

    t132 = ((x577>(x578/x579))/x580);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x582 = UINT64_MAX;
	volatile int64_t x583 = 3051380162174LL;
	volatile int16_t x584 = INT16_MIN;
	int32_t t133 = -574;

    t133 = ((x581>(x582/x583))/x584);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x587 = 5U;
	static uint64_t t134 = 2277394906495578439LLU;

    t134 = ((x585>(x586/x587))/x588);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x589 = UINT8_MAX;
	volatile int64_t x590 = INT64_MIN;
	uint16_t x592 = 3510U;

    t135 = ((x589>(x590/x591))/x592);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x593 = INT32_MIN;
	int32_t x594 = -1;
	static volatile uint64_t x595 = UINT64_MAX;
	volatile int16_t x596 = -1;
	int32_t t136 = 0;

    t136 = ((x593>(x594/x595))/x596);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x598 = 1483150489327798LLU;
	int32_t x599 = -1;
	uint8_t x600 = 81U;
	volatile int32_t t137 = 251;

    t137 = ((x597>(x598/x599))/x600);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x601 = -1;
	uint32_t x602 = UINT32_MAX;
	volatile int64_t t138 = -57575688LL;

    t138 = ((x601>(x602/x603))/x604);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x605 = -34;
	volatile int32_t x606 = INT32_MIN;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MAX;
	int64_t t139 = 33LL;

    t139 = ((x605>(x606/x607))/x608);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x609 = -2878;
	static int32_t x610 = INT32_MIN;
	uint8_t x611 = 44U;
	volatile uint32_t x612 = 26215471U;
	uint32_t t140 = 45428U;

    t140 = ((x609>(x610/x611))/x612);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x617 = -1;
	volatile uint16_t x618 = UINT16_MAX;
	volatile int32_t x619 = 11662831;
	int64_t x620 = 1045284512LL;
	volatile int64_t t141 = -1LL;

    t141 = ((x617>(x618/x619))/x620);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x622 = 192U;
	volatile uint8_t x624 = 66U;

    t142 = ((x621>(x622/x623))/x624);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x625 = INT64_MIN;
	int16_t x626 = -1;
	uint32_t x628 = UINT32_MAX;
	volatile uint32_t t143 = 1842U;

    t143 = ((x625>(x626/x627))/x628);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x629 = 1U;
	static uint8_t x630 = 3U;
	int8_t x631 = -1;
	int64_t x632 = -1LL;
	static volatile int64_t t144 = 326LL;

    t144 = ((x629>(x630/x631))/x632);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x633 = INT32_MAX;
	int64_t x634 = 512058423LL;
	int32_t t145 = 334485619;

    t145 = ((x633>(x634/x635))/x636);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x637 = 53041125;
	int64_t x639 = INT64_MIN;
	int16_t x640 = -1;
	static volatile int32_t t146 = -742;

    t146 = ((x637>(x638/x639))/x640);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x645 = 124;
	int32_t x646 = -453;
	volatile int64_t x647 = 142113035815LL;
	int8_t x648 = -1;
	int32_t t147 = -16730204;

    t147 = ((x645>(x646/x647))/x648);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x649 = INT32_MIN;
	volatile int32_t t148 = -31509805;

    t148 = ((x649>(x650/x651))/x652);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x654 = 102U;
	int32_t x655 = INT32_MAX;
	volatile uint64_t x656 = UINT64_MAX;
	static volatile uint64_t t149 = 416746751138201901LLU;

    t149 = ((x653>(x654/x655))/x656);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x657 = -5LL;
	uint8_t x659 = 1U;
	int8_t x660 = INT8_MIN;

    t150 = ((x657>(x658/x659))/x660);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x661 = 23;
	int64_t x662 = 277706184175594161LL;
	int32_t x663 = INT32_MAX;
	volatile uint8_t x664 = UINT8_MAX;
	static volatile int32_t t151 = -51282159;

    t151 = ((x661>(x662/x663))/x664);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x669 = -1;
	uint32_t x670 = 108991U;
	volatile int64_t x672 = INT64_MIN;
	int64_t t152 = -52167280884006LL;

    t152 = ((x669>(x670/x671))/x672);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x673 = -2638;
	static uint64_t x674 = 6939083579652644516LLU;
	int16_t x675 = INT16_MAX;
	static volatile int16_t x676 = -3955;

    t153 = ((x673>(x674/x675))/x676);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x679 = -29;
	int32_t x680 = INT32_MIN;
	volatile int32_t t154 = 507;

    t154 = ((x677>(x678/x679))/x680);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x681 = 117041759807988823LLU;
	int64_t x682 = INT64_MIN;
	int32_t x683 = 1086;
	int64_t x684 = INT64_MIN;
	int64_t t155 = 65241LL;

    t155 = ((x681>(x682/x683))/x684);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x685 = INT32_MIN;
	static uint8_t x686 = UINT8_MAX;
	int32_t x688 = -8;
	volatile int32_t t156 = 0;

    t156 = ((x685>(x686/x687))/x688);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x689 = 0;
	int32_t x690 = INT32_MAX;
	int64_t x691 = INT64_MIN;
	uint16_t x692 = 4627U;
	static volatile int32_t t157 = 39;

    t157 = ((x689>(x690/x691))/x692);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x693 = INT8_MIN;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = INT32_MAX;
	uint16_t x696 = 312U;
	static volatile int32_t t158 = 0;

    t158 = ((x693>(x694/x695))/x696);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x697 = 26U;
	int16_t x698 = INT16_MIN;
	int32_t x699 = -1;
	static uint32_t x700 = 882112292U;
	volatile uint32_t t159 = 414U;

    t159 = ((x697>(x698/x699))/x700);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x701 = 224272933U;
	static volatile int8_t x702 = -11;
	uint16_t x704 = 12U;
	volatile int32_t t160 = -33;

    t160 = ((x701>(x702/x703))/x704);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x705 = INT64_MIN;
	int16_t x706 = 0;
	int16_t x708 = -1;
	static volatile int32_t t161 = -21725056;

    t161 = ((x705>(x706/x707))/x708);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x709 = 122U;
	int64_t x710 = -1LL;
	int8_t x711 = INT8_MAX;
	int32_t x712 = INT32_MIN;
	int32_t t162 = 125460;

    t162 = ((x709>(x710/x711))/x712);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x714 = -12;
	int8_t x715 = INT8_MAX;
	int64_t x716 = -57LL;
	int64_t t163 = -134600099981271LL;

    t163 = ((x713>(x714/x715))/x716);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x717 = 237985284;
	static int64_t x718 = -180075771527163LL;
	static int32_t x719 = INT32_MIN;
	int16_t x720 = 10;

    t164 = ((x717>(x718/x719))/x720);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x721 = INT64_MIN;
	int64_t x722 = INT64_MAX;
	int64_t x724 = -1LL;
	volatile int64_t t165 = -1203LL;

    t165 = ((x721>(x722/x723))/x724);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = -7;
	volatile int64_t x727 = 34LL;
	int16_t x728 = INT16_MIN;
	volatile int32_t t166 = 1115211;

    t166 = ((x725>(x726/x727))/x728);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x729 = -1434477;
	int16_t x730 = INT16_MIN;
	volatile int32_t x731 = INT32_MIN;
	volatile int8_t x732 = INT8_MIN;
	int32_t t167 = -97;

    t167 = ((x729>(x730/x731))/x732);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x734 = 637363U;
	uint64_t x735 = 9LLU;
	uint64_t t168 = 287LLU;

    t168 = ((x733>(x734/x735))/x736);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x737 = UINT8_MAX;
	int8_t x738 = INT8_MIN;
	volatile uint8_t x740 = 71U;
	static volatile int32_t t169 = 1393;

    t169 = ((x737>(x738/x739))/x740);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x741 = -22983;
	int8_t x742 = INT8_MAX;
	int8_t x743 = -1;
	static uint16_t x744 = 135U;
	volatile int32_t t170 = 2025535;

    t170 = ((x741>(x742/x743))/x744);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x745 = 1;
	uint8_t x746 = UINT8_MAX;
	int16_t x747 = 2;
	static uint32_t x748 = 752651766U;
	uint32_t t171 = 1574U;

    t171 = ((x745>(x746/x747))/x748);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x750 = 0U;
	uint32_t x751 = UINT32_MAX;
	int16_t x752 = INT16_MIN;
	volatile int32_t t172 = -61248445;

    t172 = ((x749>(x750/x751))/x752);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x753 = -138;
	volatile int32_t x754 = INT32_MAX;
	uint32_t x755 = 250U;
	int8_t x756 = INT8_MIN;
	int32_t t173 = -3967;

    t173 = ((x753>(x754/x755))/x756);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x758 = UINT8_MAX;
	int32_t x760 = -7;
	int32_t t174 = 329;

    t174 = ((x757>(x758/x759))/x760);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x761 = INT16_MAX;
	int8_t x762 = INT8_MIN;
	volatile uint8_t x763 = 5U;
	volatile uint64_t x764 = UINT64_MAX;
	volatile uint64_t t175 = 1345LLU;

    t175 = ((x761>(x762/x763))/x764);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x766 = 12071469LLU;
	static int32_t x767 = -3406;
	int16_t x768 = 6918;
	volatile int32_t t176 = -14109151;

    t176 = ((x765>(x766/x767))/x768);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x769 = INT64_MAX;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = INT8_MAX;
	static volatile int32_t t177 = -9153051;

    t177 = ((x769>(x770/x771))/x772);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x773 = 3952797050039649LLU;
	uint32_t x774 = UINT32_MAX;
	int64_t x775 = 1813682589955952269LL;
	static int16_t x776 = -1;

    t178 = ((x773>(x774/x775))/x776);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x777 = 0;
	static uint32_t x778 = UINT32_MAX;
	static int32_t x779 = INT32_MIN;
	int32_t t179 = -282561728;

    t179 = ((x777>(x778/x779))/x780);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x781 = -31;
	int16_t x783 = -1;
	int32_t x784 = -1;
	static int32_t t180 = 10;

    t180 = ((x781>(x782/x783))/x784);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x789 = INT8_MIN;
	volatile uint16_t x790 = 15030U;
	int64_t x791 = 4LL;
	int64_t x792 = 1LL;
	int64_t t181 = -536399960498471LL;

    t181 = ((x789>(x790/x791))/x792);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x793 = UINT8_MAX;
	int8_t x794 = INT8_MIN;
	int8_t x795 = INT8_MIN;
	volatile uint32_t t182 = 107855U;

    t182 = ((x793>(x794/x795))/x796);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x797 = 27U;
	volatile int8_t x800 = INT8_MIN;
	static volatile int32_t t183 = -2082860;

    t183 = ((x797>(x798/x799))/x800);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x805 = INT8_MIN;
	uint8_t x806 = 20U;
	int16_t x807 = -1;
	volatile int64_t t184 = -1038488121298LL;

    t184 = ((x805>(x806/x807))/x808);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x809 = -148;
	volatile uint32_t x810 = 202148U;
	static uint8_t x811 = UINT8_MAX;
	static volatile int64_t x812 = INT64_MIN;
	volatile int64_t t185 = 567468893LL;

    t185 = ((x809>(x810/x811))/x812);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x813 = INT16_MIN;
	uint8_t x814 = UINT8_MAX;
	static int16_t x815 = -1;
	volatile int32_t x816 = -46427688;
	volatile int32_t t186 = 42801027;

    t186 = ((x813>(x814/x815))/x816);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x818 = 2U;
	int32_t x819 = -127470;
	static uint64_t x820 = 27716794774469LLU;
	volatile uint64_t t187 = 442262LLU;

    t187 = ((x817>(x818/x819))/x820);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x821 = -1;
	uint8_t x822 = 1U;
	uint32_t x824 = 17U;
	uint32_t t188 = 1505U;

    t188 = ((x821>(x822/x823))/x824);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x825 = INT16_MIN;
	static int64_t x826 = -284451229945LL;
	uint8_t x828 = 96U;
	int32_t t189 = -10;

    t189 = ((x825>(x826/x827))/x828);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x829 = INT32_MAX;
	volatile uint64_t x830 = 726644LLU;
	int32_t x831 = 36234;
	int16_t x832 = INT16_MAX;
	int32_t t190 = 45582;

    t190 = ((x829>(x830/x831))/x832);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x841 = 4U;
	uint32_t x842 = 2740U;
	int8_t x843 = -3;
	uint16_t x844 = 164U;

    t191 = ((x841>(x842/x843))/x844);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x845 = -1LL;
	uint32_t x846 = 41U;
	static int16_t x847 = INT16_MAX;
	int16_t x848 = INT16_MAX;

    t192 = ((x845>(x846/x847))/x848);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x849 = 1646328193267LLU;
	static uint32_t x850 = UINT32_MAX;
	uint32_t x852 = UINT32_MAX;

    t193 = ((x849>(x850/x851))/x852);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x853 = UINT16_MAX;
	volatile uint8_t x854 = UINT8_MAX;
	static uint8_t x855 = 1U;
	int64_t x856 = 2980363196LL;
	static volatile int64_t t194 = 0LL;

    t194 = ((x853>(x854/x855))/x856);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x857 = 476409291094948LL;
	static volatile int64_t x858 = INT64_MIN;
	uint32_t x859 = UINT32_MAX;
	int8_t x860 = INT8_MIN;
	int32_t t195 = 3459;

    t195 = ((x857>(x858/x859))/x860);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x861 = 38105802LLU;
	int16_t x862 = -2;
	volatile uint8_t x863 = 6U;
	static int64_t t196 = 401627771LL;

    t196 = ((x861>(x862/x863))/x864);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x865 = INT32_MIN;
	volatile int32_t x866 = INT32_MIN;
	uint16_t x867 = 6940U;
	static int16_t x868 = -1;

    t197 = ((x865>(x866/x867))/x868);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x869 = -30114757358LL;
	uint32_t x871 = UINT32_MAX;
	static uint32_t t198 = 883U;

    t198 = ((x869>(x870/x871))/x872);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x873 = 0;
	volatile uint16_t x874 = 13174U;
	volatile int16_t x875 = INT16_MIN;
	int64_t x876 = 2620841137LL;
	int64_t t199 = -371895374LL;

    t199 = ((x873>(x874/x875))/x876);

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

