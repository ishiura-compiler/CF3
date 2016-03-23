
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

static volatile uint8_t x2 = 1U;
int32_t x7 = -8939842;
int32_t x8 = INT32_MAX;
volatile int32_t t1 = INT32_MAX;
int32_t x9 = -1;
int32_t x10 = INT32_MAX;
uint32_t x11 = UINT32_MAX;
int32_t t2 = -2;
static int16_t x13 = INT16_MIN;
static int64_t x17 = -1LL;
int64_t x22 = -1LL;
static int32_t t5 = -55762;
int16_t x28 = INT16_MAX;
static uint8_t x35 = UINT8_MAX;
volatile int64_t x39 = -49224265516064LL;
static volatile int64_t x52 = -1LL;
static int64_t t11 = 2642863574039LL;
uint32_t x62 = 106829U;
uint64_t x64 = 1625298LLU;
int32_t x67 = INT32_MIN;
uint64_t x68 = UINT64_MAX;
uint64_t t13 = UINT64_MAX;
uint16_t x77 = 1U;
uint64_t x79 = 1171154303LLU;
uint16_t x80 = 10U;
static int32_t x81 = 45673078;
int32_t x84 = 58;
int32_t t15 = -708266;
int16_t x90 = 65;
volatile int32_t x93 = 60;
uint32_t x94 = 144066U;
int32_t x96 = 1;
int64_t x107 = -238879165947227LL;
static int8_t x108 = INT8_MAX;
volatile uint32_t x109 = 1U;
static volatile int64_t t20 = -191880834566LL;
static int32_t x134 = -4089;
int32_t x152 = INT32_MIN;
int32_t t30 = INT32_MIN;
int8_t x174 = INT8_MIN;
int32_t x175 = -1;
static volatile int32_t x189 = INT32_MIN;
volatile int32_t t32 = 8;
uint64_t x195 = UINT64_MAX;
int16_t x204 = 3;
int8_t x208 = -11;
uint8_t x212 = 1U;
volatile uint8_t x237 = 0U;
static uint8_t x247 = UINT8_MAX;
uint8_t x302 = 20U;
static int16_t x303 = INT16_MIN;
int32_t t52 = 2782;
int32_t x311 = 1;
static volatile int32_t x327 = 5040;
volatile int64_t t57 = 336322577663LL;
int8_t x334 = INT8_MIN;
uint16_t x346 = 1U;
int32_t t61 = -81888405;
int32_t t62 = 4907;
volatile uint8_t x372 = UINT8_MAX;
uint16_t x378 = UINT16_MAX;
int8_t x380 = -1;
volatile int32_t t66 = -17062278;
static uint64_t x385 = 772LLU;
int16_t x387 = INT16_MIN;
uint64_t t67 = UINT64_MAX;
int16_t x394 = INT16_MAX;
int64_t x395 = -26127831718068199LL;
int8_t x408 = INT8_MIN;
int32_t x411 = -1;
static uint64_t x419 = 983LLU;
static int64_t t74 = 88519968LL;
static volatile uint32_t x422 = UINT32_MAX;
int32_t x424 = INT32_MIN;
static volatile int8_t x435 = 5;
int8_t x438 = 12;
int64_t x439 = 77502909LL;
int16_t x441 = INT16_MIN;
uint8_t x443 = 1U;
int16_t x446 = -1;
static uint64_t x448 = 478960276393LLU;
volatile int32_t t82 = -85;
uint64_t x466 = 413032488846227910LLU;
static uint32_t t84 = 411U;
volatile int16_t x469 = -1;
int32_t x477 = -1;
volatile int8_t x479 = INT8_MIN;
static uint16_t x482 = UINT16_MAX;
int16_t x483 = INT16_MIN;
static int32_t x484 = -1;
static volatile uint64_t x485 = 53345580LLU;
static int64_t t88 = 102539LL;
uint32_t x499 = 792087U;
static uint16_t x505 = 21U;
int32_t x507 = INT32_MIN;
static uint32_t x513 = 14373719U;
int64_t x514 = -967LL;
static int32_t t92 = -17;
int32_t x519 = INT32_MIN;
static int8_t x522 = INT8_MIN;
volatile int64_t x523 = INT64_MIN;
volatile uint64_t x526 = 8356661454729LLU;
uint64_t x536 = 411LLU;
uint64_t t96 = 16399877962928LLU;
uint8_t x550 = 56U;
static volatile int16_t x553 = INT16_MAX;
uint8_t x555 = UINT8_MAX;
static int16_t x559 = INT16_MAX;
int64_t x562 = -1LL;
uint64_t x570 = 16466192470808LLU;
uint32_t x572 = 196416836U;
int64_t x575 = INT64_MIN;
volatile uint32_t x578 = 13806923U;
static int64_t x580 = INT64_MIN;
volatile int64_t t106 = INT64_MIN;
int32_t x583 = INT32_MIN;
uint32_t x595 = 28U;
int32_t x596 = -1;
volatile int32_t t109 = -381346923;
volatile int32_t t110 = -2885;
int16_t x608 = INT16_MAX;
uint8_t x613 = 0U;
int32_t x614 = -363674;
volatile int32_t t113 = 0;
int16_t x628 = INT16_MIN;
static int8_t x645 = -1;
static int16_t x646 = INT16_MIN;
volatile int64_t t120 = -392LL;
volatile int16_t x667 = 216;
int16_t x668 = -627;
uint32_t x672 = 2814506U;
volatile int32_t x674 = INT32_MAX;
volatile uint8_t x678 = 3U;
int64_t t128 = -22786344LL;
int32_t t129 = 22241;
volatile int16_t x709 = -2;
volatile uint32_t x711 = 140845U;
uint16_t x713 = 967U;
uint16_t x717 = UINT16_MAX;
static int16_t x719 = -1;
int64_t x721 = -1LL;
int32_t t134 = 586454317;
uint32_t x728 = 94U;
int32_t x740 = INT32_MAX;
static volatile int32_t t137 = INT32_MAX;
int64_t x741 = -1LL;
int8_t x750 = -1;
static int32_t x753 = 7;
static volatile int64_t x760 = INT64_MIN;
int16_t x761 = INT16_MIN;
int64_t x778 = 501850377805614203LL;
volatile int32_t t145 = 28;
int64_t x784 = -1273351293001422180LL;
int32_t t147 = -5;
uint32_t x800 = UINT32_MAX;
uint32_t x805 = 7858617U;
volatile int64_t t149 = -20686LL;
int64_t t150 = INT64_MIN;
uint32_t x816 = 9795U;
volatile int32_t x818 = INT32_MIN;
int64_t x838 = -1LL;
int32_t t155 = 1;
uint16_t x846 = 7932U;
int32_t t160 = 1111;
uint8_t x873 = UINT8_MAX;
uint32_t x875 = UINT32_MAX;
uint8_t x876 = 5U;
static volatile uint32_t x881 = UINT32_MAX;
static volatile int16_t x891 = 13;
uint64_t x919 = UINT64_MAX;
uint32_t x921 = 83718943U;
static uint64_t x925 = UINT64_MAX;
int16_t x929 = -1;
static int8_t x949 = INT8_MIN;
int32_t x955 = INT32_MIN;
uint32_t x956 = 9360U;
int64_t t178 = INT64_MIN;
volatile int32_t x961 = INT32_MIN;
static int32_t t179 = -4065;
uint64_t x970 = 12313531017670LLU;
int32_t x974 = INT32_MIN;
int8_t x975 = INT8_MAX;
static uint64_t x978 = 85728858935273872LLU;
static uint8_t x991 = UINT8_MAX;
uint8_t x992 = 3U;
volatile int32_t t184 = -14950;
uint64_t x1026 = UINT64_MAX;
int16_t x1029 = 0;
static uint64_t x1031 = UINT64_MAX;
int32_t x1036 = INT32_MIN;
uint64_t x1038 = 51862519LLU;
volatile int32_t t191 = -6;
volatile int32_t x1052 = INT32_MAX;
static uint8_t x1057 = 0U;
int32_t x1060 = INT32_MAX;
int32_t x1067 = INT32_MIN;
static int16_t x1068 = -1;
int16_t x1070 = -1;
int16_t x1071 = INT16_MIN;
static volatile int8_t x1077 = 1;
int16_t x1081 = INT16_MIN;
int8_t x1082 = -1;


void f0(void) {
    	uint64_t x1 = 9554618098LLU;
	static uint32_t x3 = 468445U;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

    t0 = (((x1*x2)!=x3)*x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	volatile int32_t x6 = INT32_MAX;

    t1 = (((x5*x6)!=x7)*x8);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x12 = INT16_MAX;

    t2 = (((x9*x10)!=x11)*x12);

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -1;
	uint8_t x15 = 28U;
	static volatile int64_t x16 = INT64_MIN;
	int64_t t3 = INT64_MIN;

    t3 = (((x13*x14)!=x15)*x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	volatile int64_t x19 = INT64_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 114544;

    t4 = (((x17*x18)!=x19)*x20);

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;

    t5 = (((x21*x22)!=x23)*x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int8_t x26 = -3;
	volatile uint16_t x27 = 366U;
	int32_t t6 = 1589321;

    t6 = (((x25*x26)!=x27)*x28);

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 6090226U;
	uint16_t x34 = 31298U;
	int64_t x36 = 1LL;
	volatile int64_t t7 = 13767461951765LL;

    t7 = (((x33*x34)!=x35)*x36);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x37 = 2065377U;
	static int8_t x38 = 1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -107825;

    t8 = (((x37*x38)!=x39)*x40);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = INT16_MIN;
	int32_t t9 = 6;

    t9 = (((x45*x46)!=x47)*x48);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = 87437LLU;
	static int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MIN;
	volatile int64_t t10 = 0LL;

    t10 = (((x49*x50)!=x51)*x52);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MAX;
	int16_t x54 = -222;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -3664717472LL;

    t11 = (((x53*x54)!=x55)*x56);

    if (t11 != -3664717472LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x61 = INT16_MIN;
	static int16_t x63 = 1;
	volatile uint64_t t12 = 8061074279LLU;

    t12 = (((x61*x62)!=x63)*x64);

    if (t12 != 1625298LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x65 = INT16_MIN;
	volatile int16_t x66 = INT16_MAX;

    t13 = (((x65*x66)!=x67)*x68);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x78 = 6U;
	int32_t t14 = -24025;

    t14 = (((x77*x78)!=x79)*x80);

    if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x82 = 0U;
	int16_t x83 = INT16_MAX;

    t15 = (((x81*x82)!=x83)*x84);

    if (t15 != 58) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = 14589;
	volatile uint64_t x91 = UINT64_MAX;
	uint64_t x92 = UINT64_MAX;
	uint64_t t16 = UINT64_MAX;

    t16 = (((x89*x90)!=x91)*x92);

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x95 = INT8_MIN;
	volatile int32_t t17 = 58;

    t17 = (((x93*x94)!=x95)*x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x105 = -1292;
	int8_t x106 = INT8_MAX;
	volatile int32_t t18 = -9414691;

    t18 = (((x105*x106)!=x107)*x108);

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x110 = INT8_MIN;
	int8_t x111 = 4;
	int32_t x112 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

    t19 = (((x109*x110)!=x111)*x112);

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x113 = 9LL;
	uint16_t x114 = 11U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;

    t20 = (((x113*x114)!=x115)*x116);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x121 = -1113;
	int16_t x122 = INT16_MIN;
	static volatile uint8_t x123 = 1U;
	int32_t x124 = 2274;
	volatile int32_t t21 = -171718;

    t21 = (((x121*x122)!=x123)*x124);

    if (t21 != 2274) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x125 = -1;
	int64_t x126 = INT64_MAX;
	static int16_t x127 = INT16_MAX;
	static int8_t x128 = -1;
	volatile int32_t t22 = 20928;

    t22 = (((x125*x126)!=x127)*x128);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x133 = 50LLU;
	uint32_t x135 = 177658U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t23 = INT32_MIN;

    t23 = (((x133*x134)!=x135)*x136);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x137 = 3;
	int16_t x138 = -1;
	static int8_t x139 = -1;
	volatile int16_t x140 = INT16_MIN;
	int32_t t24 = 30040499;

    t24 = (((x137*x138)!=x139)*x140);

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MAX;
	volatile int16_t x143 = -1;
	int8_t x144 = -1;
	volatile int32_t t25 = 1890;

    t25 = (((x141*x142)!=x143)*x144);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x145 = -1;
	static uint16_t x146 = UINT16_MAX;
	static int64_t x147 = -1LL;
	volatile int64_t x148 = INT64_MIN;
	volatile int64_t t26 = INT64_MIN;

    t26 = (((x145*x146)!=x147)*x148);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 858LLU;
	int32_t t27 = INT32_MIN;

    t27 = (((x149*x150)!=x151)*x152);

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x161 = 377317198U;
	int16_t x162 = -1;
	int64_t x163 = 1LL;
	volatile uint64_t x164 = UINT64_MAX;
	static uint64_t t28 = UINT64_MAX;

    t28 = (((x161*x162)!=x163)*x164);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x165 = -2935735455062LL;
	uint64_t x166 = 2LLU;
	volatile int8_t x167 = -10;
	int8_t x168 = INT8_MIN;
	int32_t t29 = 21;

    t29 = (((x165*x166)!=x167)*x168);

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 1486737603U;
	static int32_t x172 = INT32_MIN;

    t30 = (((x169*x170)!=x171)*x172);

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x173 = 2367U;
	uint32_t x176 = 6495056U;
	uint32_t t31 = 16888U;

    t31 = (((x173*x174)!=x175)*x176);

    if (t31 != 6495056U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x190 = -1LL;
	int32_t x191 = INT32_MAX;
	int16_t x192 = -2757;

    t32 = (((x189*x190)!=x191)*x192);

    if (t32 != -2757) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	static volatile int16_t x196 = 21;
	int32_t t33 = 51;

    t33 = (((x193*x194)!=x195)*x196);

    if (t33 != 21) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x197 = UINT8_MAX;
	static volatile int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MAX;
	volatile int64_t x200 = INT64_MAX;
	int64_t t34 = INT64_MAX;

    t34 = (((x197*x198)!=x199)*x200);

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x201 = UINT16_MAX;
	volatile uint16_t x202 = 11U;
	int16_t x203 = INT16_MIN;
	volatile int32_t t35 = -12708;

    t35 = (((x201*x202)!=x203)*x204);

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x205 = 8644U;
	static volatile int16_t x206 = INT16_MIN;
	static volatile uint16_t x207 = 19U;
	volatile int32_t t36 = 91544734;

    t36 = (((x205*x206)!=x207)*x208);

    if (t36 != -11) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x209 = 19U;
	int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	volatile int32_t t37 = -507967890;

    t37 = (((x209*x210)!=x211)*x212);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x217 = 0U;
	uint32_t x218 = 282U;
	int64_t x219 = INT64_MAX;
	volatile uint64_t x220 = 206714068LLU;
	uint64_t t38 = 77583LLU;

    t38 = (((x217*x218)!=x219)*x220);

    if (t38 != 206714068LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x221 = UINT8_MAX;
	int32_t x222 = -83251;
	int16_t x223 = -1;
	int8_t x224 = -1;
	int32_t t39 = 154341;

    t39 = (((x221*x222)!=x223)*x224);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = INT8_MIN;
	uint8_t x226 = UINT8_MAX;
	volatile int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

    t40 = (((x225*x226)!=x227)*x228);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x229 = INT16_MIN;
	int32_t x230 = -1;
	volatile uint8_t x231 = 64U;
	static int16_t x232 = INT16_MIN;
	int32_t t41 = 193960;

    t41 = (((x229*x230)!=x231)*x232);

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x233 = INT32_MIN;
	uint64_t x234 = 129565300989418606LLU;
	static uint64_t x235 = 4384193367133LLU;
	int64_t x236 = 441728LL;
	static volatile int64_t t42 = -90LL;

    t42 = (((x233*x234)!=x235)*x236);

    if (t42 != 441728LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x238 = INT16_MIN;
	int16_t x239 = -1;
	int16_t x240 = 97;
	volatile int32_t t43 = 0;

    t43 = (((x237*x238)!=x239)*x240);

    if (t43 != 97) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x241 = 1U;
	uint16_t x242 = 14456U;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t x244 = 46;
	int32_t t44 = 7449;

    t44 = (((x241*x242)!=x243)*x244);

    if (t44 != 46) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x245 = -1LL;
	volatile uint16_t x246 = UINT16_MAX;
	volatile int8_t x248 = INT8_MAX;
	int32_t t45 = 3;

    t45 = (((x245*x246)!=x247)*x248);

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x249 = -1;
	static int16_t x250 = INT16_MAX;
	uint8_t x251 = 6U;
	volatile int16_t x252 = -107;
	volatile int32_t t46 = -1;

    t46 = (((x249*x250)!=x251)*x252);

    if (t46 != -107) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x253 = INT32_MIN;
	uint32_t x254 = 1U;
	volatile int8_t x255 = -14;
	uint16_t x256 = 98U;
	int32_t t47 = 15112;

    t47 = (((x253*x254)!=x255)*x256);

    if (t47 != 98) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x261 = 0;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t48 = -155615;

    t48 = (((x261*x262)!=x263)*x264);

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x265 = INT8_MIN;
	static int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int32_t t49 = 3420;

    t49 = (((x265*x266)!=x267)*x268);

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x289 = -1;
	static int32_t x290 = -1;
	static uint32_t x291 = UINT32_MAX;
	static int8_t x292 = -21;
	static volatile int32_t t50 = -26560;

    t50 = (((x289*x290)!=x291)*x292);

    if (t50 != -21) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MAX;
	static volatile int64_t t51 = INT64_MAX;

    t51 = (((x293*x294)!=x295)*x296);

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x301 = 94U;
	static int8_t x304 = -31;

    t52 = (((x301*x302)!=x303)*x304);

    if (t52 != -31) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x305 = UINT64_MAX;
	uint8_t x306 = 15U;
	uint16_t x307 = UINT16_MAX;
	static int64_t x308 = 40152209520LL;
	static volatile int64_t t53 = 2927192719417517LL;

    t53 = (((x305*x306)!=x307)*x308);

    if (t53 != 40152209520LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x309 = INT32_MIN;
	uint32_t x310 = 1710U;
	volatile int64_t x312 = INT64_MIN;
	static volatile int64_t t54 = INT64_MIN;

    t54 = (((x309*x310)!=x311)*x312);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x321 = -1;
	static int32_t x322 = 1;
	int16_t x323 = 1;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t55 = -89;

    t55 = (((x321*x322)!=x323)*x324);

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x325 = 239583445LLU;
	int8_t x326 = -1;
	uint16_t x328 = 15U;
	volatile int32_t t56 = 5;

    t56 = (((x325*x326)!=x327)*x328);

    if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x329 = 1;
	int16_t x330 = -205;
	int32_t x331 = INT32_MAX;
	int64_t x332 = 14669415LL;

    t57 = (((x329*x330)!=x331)*x332);

    if (t57 != 14669415LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x333 = -1LL;
	static int64_t x335 = INT64_MIN;
	int16_t x336 = 3;
	int32_t t58 = -230145;

    t58 = (((x333*x334)!=x335)*x336);

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x337 = 6;
	uint32_t x338 = 199U;
	static int64_t x339 = 43021LL;
	int8_t x340 = -1;
	volatile int32_t t59 = -3654692;

    t59 = (((x337*x338)!=x339)*x340);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = -1;
	int16_t x344 = INT16_MAX;
	int32_t t60 = 328790;

    t60 = (((x341*x342)!=x343)*x344);

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x345 = 107850LL;
	volatile uint32_t x347 = UINT32_MAX;
	int8_t x348 = INT8_MIN;

    t61 = (((x345*x346)!=x347)*x348);

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x353 = INT16_MIN;
	static uint32_t x354 = 74376381U;
	uint8_t x355 = 1U;
	static int8_t x356 = INT8_MIN;

    t62 = (((x353*x354)!=x355)*x356);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x357 = 53;
	int32_t x358 = -101945;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t63 = 477;

    t63 = (((x357*x358)!=x359)*x360);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x369 = 1123362U;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	volatile int32_t t64 = 293581;

    t64 = (((x369*x370)!=x371)*x372);

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x373 = INT8_MAX;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = 34;
	int32_t x376 = -1;
	volatile int32_t t65 = 8;

    t65 = (((x373*x374)!=x375)*x376);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x379 = 584104173403LL;

    t66 = (((x377*x378)!=x379)*x380);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x386 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;

    t67 = (((x385*x386)!=x387)*x388);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x389 = 107U;
	int64_t x390 = -1LL;
	uint8_t x391 = UINT8_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t68 = 98;

    t68 = (((x389*x390)!=x391)*x392);

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x393 = 4U;
	int32_t x396 = 365793427;
	int32_t t69 = -924;

    t69 = (((x393*x394)!=x395)*x396);

    if (t69 != 365793427) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x397 = 3U;
	static int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	int32_t t70 = 104;

    t70 = (((x397*x398)!=x399)*x400);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x401 = INT8_MIN;
	static uint16_t x402 = 6031U;
	uint8_t x403 = 0U;
	volatile int32_t x404 = 155774692;
	int32_t t71 = 509461121;

    t71 = (((x401*x402)!=x403)*x404);

    if (t71 != 155774692) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x405 = 66499690;
	uint16_t x406 = 30U;
	static int32_t x407 = 3002;
	static int32_t t72 = -8057243;

    t72 = (((x405*x406)!=x407)*x408);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = INT16_MIN;
	static volatile uint16_t x410 = 71U;
	volatile int32_t x412 = -19559472;
	static volatile int32_t t73 = -449929572;

    t73 = (((x409*x410)!=x411)*x412);

    if (t73 != -19559472) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x417 = -15;
	int32_t x418 = -1;
	int64_t x420 = 1587LL;

    t74 = (((x417*x418)!=x419)*x420);

    if (t74 != 1587LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x421 = 13U;
	uint32_t x423 = 1974790U;
	static int32_t t75 = INT32_MIN;

    t75 = (((x421*x422)!=x423)*x424);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x429 = UINT8_MAX;
	int8_t x430 = INT8_MAX;
	uint8_t x431 = 0U;
	int8_t x432 = INT8_MIN;
	volatile int32_t t76 = -80;

    t76 = (((x429*x430)!=x431)*x432);

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x433 = 4374046LLU;
	int64_t x434 = INT64_MAX;
	uint64_t x436 = 6469527152559LLU;
	volatile uint64_t t77 = 8558565266LLU;

    t77 = (((x433*x434)!=x435)*x436);

    if (t77 != 6469527152559LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x437 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t78 = UINT64_MAX;

    t78 = (((x437*x438)!=x439)*x440);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x442 = -4;
	int32_t x444 = INT32_MIN;
	volatile int32_t t79 = INT32_MIN;

    t79 = (((x441*x442)!=x443)*x444);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x445 = 693U;
	static int16_t x447 = INT16_MIN;
	uint64_t t80 = 1858LLU;

    t80 = (((x445*x446)!=x447)*x448);

    if (t80 != 478960276393LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x449 = 169306459U;
	int32_t x450 = 3;
	int8_t x451 = 4;
	static volatile int64_t x452 = -51530LL;
	int64_t t81 = 6637103LL;

    t81 = (((x449*x450)!=x451)*x452);

    if (t81 != -51530LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x457 = -16155567;
	static volatile uint8_t x458 = 10U;
	int8_t x459 = -1;
	uint16_t x460 = 6814U;

    t82 = (((x457*x458)!=x459)*x460);

    if (t82 != 6814) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x461 = 0U;
	int32_t x462 = INT32_MAX;
	int64_t x463 = 38426453588749107LL;
	int32_t x464 = -1;
	int32_t t83 = 0;

    t83 = (((x461*x462)!=x463)*x464);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x465 = INT8_MIN;
	uint16_t x467 = 13U;
	uint32_t x468 = 912U;

    t84 = (((x465*x466)!=x467)*x468);

    if (t84 != 912U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x470 = -7;
	int64_t x471 = INT64_MIN;
	volatile int8_t x472 = INT8_MAX;
	int32_t t85 = -16507919;

    t85 = (((x469*x470)!=x471)*x472);

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x478 = -2074575LL;
	volatile int32_t x480 = -1;
	static volatile int32_t t86 = 7;

    t86 = (((x477*x478)!=x479)*x480);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x481 = 0U;
	int32_t t87 = 1024821436;

    t87 = (((x481*x482)!=x483)*x484);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x486 = -24484126286LL;
	int32_t x487 = -1;
	static int64_t x488 = -860881132792486348LL;

    t88 = (((x485*x486)!=x487)*x488);

    if (t88 != -860881132792486348LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x497 = INT16_MIN;
	static int8_t x498 = INT8_MIN;
	static int32_t x500 = INT32_MIN;
	int32_t t89 = INT32_MIN;

    t89 = (((x497*x498)!=x499)*x500);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x506 = 106135829U;
	int8_t x508 = -1;
	volatile int32_t t90 = 10;

    t90 = (((x505*x506)!=x507)*x508);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x509 = UINT64_MAX;
	uint64_t x510 = 1320818289715LLU;
	int32_t x511 = -2;
	volatile int64_t x512 = INT64_MIN;
	int64_t t91 = INT64_MIN;

    t91 = (((x509*x510)!=x511)*x512);

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x515 = 109U;
	int32_t x516 = -1674490;

    t92 = (((x513*x514)!=x515)*x516);

    if (t92 != -1674490) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	volatile int32_t x518 = INT32_MIN;
	int8_t x520 = INT8_MIN;
	int32_t t93 = -54801;

    t93 = (((x517*x518)!=x519)*x520);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x521 = 1279U;
	int16_t x524 = INT16_MIN;
	volatile int32_t t94 = -31632524;

    t94 = (((x521*x522)!=x523)*x524);

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x525 = INT16_MAX;
	static uint32_t x527 = 291365877U;
	uint8_t x528 = 114U;
	int32_t t95 = -1679;

    t95 = (((x525*x526)!=x527)*x528);

    if (t95 != 114) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x533 = 1;
	int64_t x534 = INT64_MIN;
	static volatile int64_t x535 = INT64_MAX;

    t96 = (((x533*x534)!=x535)*x536);

    if (t96 != 411LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x537 = 110U;
	static uint16_t x538 = 24261U;
	int64_t x539 = INT64_MIN;
	static int8_t x540 = -2;
	volatile int32_t t97 = 489;

    t97 = (((x537*x538)!=x539)*x540);

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x541 = 2U;
	volatile int16_t x542 = INT16_MIN;
	uint64_t x543 = UINT64_MAX;
	static uint8_t x544 = 30U;
	volatile int32_t t98 = 210080;

    t98 = (((x541*x542)!=x543)*x544);

    if (t98 != 30) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x545 = INT8_MIN;
	int8_t x546 = INT8_MIN;
	uint32_t x547 = 7187260U;
	int64_t x548 = -754490144533LL;
	static volatile int64_t t99 = -40951768881082LL;

    t99 = (((x545*x546)!=x547)*x548);

    if (t99 != -754490144533LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x549 = INT16_MIN;
	static int16_t x551 = 7;
	volatile int64_t x552 = -1200306341627228114LL;
	volatile int64_t t100 = -83208188LL;

    t100 = (((x549*x550)!=x551)*x552);

    if (t100 != -1200306341627228114LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x554 = 1560;
	int8_t x556 = INT8_MIN;
	volatile int32_t t101 = -27;

    t101 = (((x553*x554)!=x555)*x556);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x557 = -1LL;
	volatile int32_t x558 = 11;
	int64_t x560 = 71720LL;
	int64_t t102 = -16LL;

    t102 = (((x557*x558)!=x559)*x560);

    if (t102 != 71720LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x561 = 4U;
	int16_t x563 = -1;
	static volatile uint16_t x564 = UINT16_MAX;
	int32_t t103 = 40833;

    t103 = (((x561*x562)!=x563)*x564);

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x569 = UINT32_MAX;
	uint32_t x571 = 347737U;
	uint32_t t104 = 8041602U;

    t104 = (((x569*x570)!=x571)*x572);

    if (t104 != 196416836U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = -250887689LL;
	static int8_t x576 = -1;
	static int32_t t105 = -9793472;

    t105 = (((x573*x574)!=x575)*x576);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x577 = 873U;
	int8_t x579 = INT8_MIN;

    t106 = (((x577*x578)!=x579)*x580);

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x581 = 122U;
	int8_t x582 = INT8_MAX;
	volatile uint32_t x584 = 1179U;
	uint32_t t107 = 5190U;

    t107 = (((x581*x582)!=x583)*x584);

    if (t107 != 1179U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x589 = 1024247173LL;
	uint32_t x590 = 253U;
	uint8_t x591 = 34U;
	int32_t x592 = 1;
	int32_t t108 = 584;

    t108 = (((x589*x590)!=x591)*x592);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x593 = -1;
	int32_t x594 = INT32_MAX;

    t109 = (((x593*x594)!=x595)*x596);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x597 = 10600;
	uint32_t x598 = 31U;
	uint16_t x599 = 86U;
	int16_t x600 = INT16_MIN;

    t110 = (((x597*x598)!=x599)*x600);

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x605 = -1;
	static int16_t x606 = INT16_MAX;
	int8_t x607 = INT8_MAX;
	int32_t t111 = 1217;

    t111 = (((x605*x606)!=x607)*x608);

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x609 = 13602U;
	uint64_t x610 = 250LLU;
	int8_t x611 = INT8_MAX;
	static int64_t x612 = INT64_MIN;
	int64_t t112 = INT64_MIN;

    t112 = (((x609*x610)!=x611)*x612);

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x615 = -1LL;
	int16_t x616 = INT16_MAX;

    t113 = (((x613*x614)!=x615)*x616);

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x621 = -1;
	uint16_t x622 = UINT16_MAX;
	int16_t x623 = INT16_MIN;
	volatile int16_t x624 = 1539;
	int32_t t114 = 13281;

    t114 = (((x621*x622)!=x623)*x624);

    if (t114 != 1539) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x625 = 25;
	volatile int8_t x626 = -1;
	int32_t x627 = -1856581;
	int32_t t115 = -39220;

    t115 = (((x625*x626)!=x627)*x628);

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = -1194765385LL;
	static int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MAX;
	static volatile int32_t t116 = 13;

    t116 = (((x629*x630)!=x631)*x632);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x633 = -1LL;
	static int16_t x634 = -1;
	int32_t x635 = -1;
	volatile int16_t x636 = 1968;
	int32_t t117 = -4006452;

    t117 = (((x633*x634)!=x635)*x636);

    if (t117 != 1968) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x641 = 1;
	int16_t x642 = 7036;
	volatile int64_t x643 = 196818LL;
	uint8_t x644 = 2U;
	int32_t t118 = -3684;

    t118 = (((x641*x642)!=x643)*x644);

    if (t118 != 2) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x647 = INT64_MAX;
	static int32_t x648 = 299483;
	int32_t t119 = -33375938;

    t119 = (((x645*x646)!=x647)*x648);

    if (t119 != 299483) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x649 = 127U;
	static int16_t x650 = INT16_MIN;
	int64_t x651 = -239988351208884083LL;
	volatile int64_t x652 = 42LL;

    t120 = (((x649*x650)!=x651)*x652);

    if (t120 != 42LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x653 = INT16_MIN;
	static int16_t x654 = INT16_MAX;
	int64_t x655 = INT64_MIN;
	int8_t x656 = 0;
	volatile int32_t t121 = 96050;

    t121 = (((x653*x654)!=x655)*x656);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x661 = 3586371257274069417LLU;
	int64_t x662 = INT64_MIN;
	uint8_t x663 = 17U;
	static volatile int32_t x664 = 0;
	volatile int32_t t122 = -415689;

    t122 = (((x661*x662)!=x663)*x664);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x665 = 5939U;
	uint8_t x666 = 3U;
	static int32_t t123 = 9;

    t123 = (((x665*x666)!=x667)*x668);

    if (t123 != -627) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x669 = INT16_MAX;
	int16_t x670 = INT16_MIN;
	int8_t x671 = INT8_MIN;
	volatile uint32_t t124 = 3U;

    t124 = (((x669*x670)!=x671)*x672);

    if (t124 != 2814506U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x673 = 2LL;
	int16_t x675 = 0;
	static uint8_t x676 = 44U;
	volatile int32_t t125 = -5515991;

    t125 = (((x673*x674)!=x675)*x676);

    if (t125 != 44) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x677 = 1199241348LL;
	int16_t x679 = 0;
	static int32_t x680 = INT32_MIN;
	volatile int32_t t126 = INT32_MIN;

    t126 = (((x677*x678)!=x679)*x680);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x681 = INT8_MIN;
	volatile uint32_t x682 = 1273097871U;
	int64_t x683 = INT64_MIN;
	volatile int16_t x684 = INT16_MIN;
	int32_t t127 = 5465963;

    t127 = (((x681*x682)!=x683)*x684);

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x689 = INT8_MAX;
	int8_t x690 = 4;
	int8_t x691 = 1;
	int64_t x692 = -2201233775772LL;

    t128 = (((x689*x690)!=x691)*x692);

    if (t128 != -2201233775772LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x693 = -1;
	volatile uint32_t x694 = UINT32_MAX;
	int32_t x695 = -1;
	int32_t x696 = -25;

    t129 = (((x693*x694)!=x695)*x696);

    if (t129 != -25) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x705 = -1;
	int64_t x706 = 2018LL;
	int32_t x707 = -1;
	int8_t x708 = -1;
	int32_t t130 = 5668;

    t130 = (((x705*x706)!=x707)*x708);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x710 = 1361U;
	static volatile uint16_t x712 = 23556U;
	volatile int32_t t131 = -258469172;

    t131 = (((x709*x710)!=x711)*x712);

    if (t131 != 23556) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x714 = UINT8_MAX;
	volatile uint8_t x715 = UINT8_MAX;
	volatile int64_t x716 = INT64_MIN;
	volatile int64_t t132 = INT64_MIN;

    t132 = (((x713*x714)!=x715)*x716);

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x718 = -1;
	volatile uint32_t x720 = UINT32_MAX;
	uint32_t t133 = UINT32_MAX;

    t133 = (((x717*x718)!=x719)*x720);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x722 = -1;
	int8_t x723 = INT8_MIN;
	int8_t x724 = -1;

    t134 = (((x721*x722)!=x723)*x724);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x725 = INT8_MAX;
	int16_t x726 = INT16_MAX;
	int16_t x727 = -1;
	uint32_t t135 = 3107805U;

    t135 = (((x725*x726)!=x727)*x728);

    if (t135 != 94U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x729 = 1;
	uint8_t x730 = 36U;
	volatile int32_t x731 = INT32_MIN;
	static uint64_t x732 = 34704627341841LLU;
	uint64_t t136 = 210838468363397LLU;

    t136 = (((x729*x730)!=x731)*x732);

    if (t136 != 34704627341841LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int64_t x738 = -1LL;
	int32_t x739 = INT32_MAX;

    t137 = (((x737*x738)!=x739)*x740);

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x742 = UINT64_MAX;
	int64_t x743 = -104033763966649LL;
	int16_t x744 = 7;
	volatile int32_t t138 = -32716;

    t138 = (((x741*x742)!=x743)*x744);

    if (t138 != 7) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x745 = 1U;
	int64_t x746 = INT64_MIN;
	static int16_t x747 = INT16_MIN;
	int32_t x748 = -386973834;
	int32_t t139 = -3505092;

    t139 = (((x745*x746)!=x747)*x748);

    if (t139 != -386973834) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x749 = 1U;
	int64_t x751 = INT64_MIN;
	volatile int8_t x752 = INT8_MIN;
	int32_t t140 = -58296808;

    t140 = (((x749*x750)!=x751)*x752);

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x754 = INT8_MIN;
	volatile int8_t x755 = INT8_MAX;
	uint8_t x756 = 0U;
	static int32_t t141 = 426265697;

    t141 = (((x753*x754)!=x755)*x756);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x757 = -124LL;
	volatile int32_t x758 = -1;
	int16_t x759 = INT16_MAX;
	int64_t t142 = INT64_MIN;

    t142 = (((x757*x758)!=x759)*x760);

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x762 = 523;
	static int8_t x763 = -1;
	volatile uint16_t x764 = 2919U;
	int32_t t143 = 25;

    t143 = (((x761*x762)!=x763)*x764);

    if (t143 != 2919) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x765 = INT32_MIN;
	int64_t x766 = -1LL;
	int64_t x767 = INT64_MIN;
	uint64_t x768 = 451905657811295942LLU;
	uint64_t t144 = 175LLU;

    t144 = (((x765*x766)!=x767)*x768);

    if (t144 != 451905657811295942LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile int8_t x779 = -1;
	int16_t x780 = INT16_MIN;

    t145 = (((x777*x778)!=x779)*x780);

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x781 = -1;
	uint64_t x782 = 10LLU;
	uint16_t x783 = 7U;
	static volatile int64_t t146 = 540995948LL;

    t146 = (((x781*x782)!=x783)*x784);

    if (t146 != -1273351293001422180LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x789 = INT16_MIN;
	int64_t x790 = -1LL;
	uint64_t x791 = UINT64_MAX;
	int8_t x792 = 1;

    t147 = (((x789*x790)!=x791)*x792);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x797 = INT8_MAX;
	static uint32_t x798 = 3U;
	int64_t x799 = 200LL;
	volatile uint32_t t148 = UINT32_MAX;

    t148 = (((x797*x798)!=x799)*x800);

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x806 = 7296;
	static int16_t x807 = -504;
	int64_t x808 = 49045229143619LL;

    t149 = (((x805*x806)!=x807)*x808);

    if (t149 != 49045229143619LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x809 = 1;
	int32_t x810 = INT32_MIN;
	static uint16_t x811 = 214U;
	volatile int64_t x812 = INT64_MIN;

    t150 = (((x809*x810)!=x811)*x812);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x813 = 289U;
	uint16_t x814 = 0U;
	uint16_t x815 = UINT16_MAX;
	volatile uint32_t t151 = 0U;

    t151 = (((x813*x814)!=x815)*x816);

    if (t151 != 9795U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	uint8_t x819 = 6U;
	static int8_t x820 = INT8_MIN;
	volatile int32_t t152 = -1;

    t152 = (((x817*x818)!=x819)*x820);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MIN;
	volatile uint64_t x827 = UINT64_MAX;
	int64_t x828 = 15809996580172LL;
	volatile int64_t t153 = 48022LL;

    t153 = (((x825*x826)!=x827)*x828);

    if (t153 != 15809996580172LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x829 = INT8_MIN;
	static uint64_t x830 = 28693432LLU;
	volatile int16_t x831 = 2675;
	static int32_t x832 = -936;
	int32_t t154 = 6;

    t154 = (((x829*x830)!=x831)*x832);

    if (t154 != -936) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x837 = -1LL;
	int32_t x839 = INT32_MAX;
	int16_t x840 = -1;

    t155 = (((x837*x838)!=x839)*x840);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x841 = -1;
	static uint16_t x842 = 4439U;
	int64_t x843 = INT64_MIN;
	int8_t x844 = -1;
	volatile int32_t t156 = 1;

    t156 = (((x841*x842)!=x843)*x844);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x845 = -24;
	int32_t x847 = -1;
	uint16_t x848 = 31U;
	static int32_t t157 = -31624059;

    t157 = (((x845*x846)!=x847)*x848);

    if (t157 != 31) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x853 = UINT32_MAX;
	static int16_t x854 = INT16_MAX;
	int16_t x855 = 3;
	static int64_t x856 = INT64_MAX;
	int64_t t158 = INT64_MAX;

    t158 = (((x853*x854)!=x855)*x856);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x865 = -1;
	int16_t x866 = 21;
	volatile int32_t x867 = INT32_MIN;
	volatile int16_t x868 = 596;
	volatile int32_t t159 = 17102676;

    t159 = (((x865*x866)!=x867)*x868);

    if (t159 != 596) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x869 = INT16_MIN;
	int64_t x870 = 0LL;
	int8_t x871 = INT8_MAX;
	uint16_t x872 = 1751U;

    t160 = (((x869*x870)!=x871)*x872);

    if (t160 != 1751) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x874 = 321;
	volatile int32_t t161 = -6;

    t161 = (((x873*x874)!=x875)*x876);

    if (t161 != 5) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x877 = UINT8_MAX;
	int8_t x878 = INT8_MIN;
	int8_t x879 = 1;
	int32_t x880 = INT32_MIN;
	static volatile int32_t t162 = INT32_MIN;

    t162 = (((x877*x878)!=x879)*x880);

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x882 = 6451LL;
	int64_t x883 = INT64_MAX;
	int8_t x884 = 6;
	int32_t t163 = 151;

    t163 = (((x881*x882)!=x883)*x884);

    if (t163 != 6) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x885 = 276LLU;
	static int32_t x886 = 1060;
	int16_t x887 = 4;
	int32_t x888 = INT32_MIN;
	volatile int32_t t164 = INT32_MIN;

    t164 = (((x885*x886)!=x887)*x888);

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x889 = 306086139107225LLU;
	static volatile uint8_t x890 = UINT8_MAX;
	int32_t x892 = INT32_MAX;
	int32_t t165 = INT32_MAX;

    t165 = (((x889*x890)!=x891)*x892);

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x893 = INT16_MAX;
	int64_t x894 = 144183421655LL;
	uint8_t x895 = UINT8_MAX;
	volatile int8_t x896 = 23;
	volatile int32_t t166 = -77322434;

    t166 = (((x893*x894)!=x895)*x896);

    if (t166 != 23) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x897 = 10;
	int8_t x898 = INT8_MAX;
	int32_t x899 = -1;
	uint16_t x900 = 0U;
	int32_t t167 = 910219;

    t167 = (((x897*x898)!=x899)*x900);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x905 = 450;
	int16_t x906 = 3;
	int8_t x907 = INT8_MAX;
	int32_t x908 = INT32_MAX;
	static volatile int32_t t168 = INT32_MAX;

    t168 = (((x905*x906)!=x907)*x908);

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x909 = 49U;
	static int8_t x910 = INT8_MIN;
	static int64_t x911 = -83913LL;
	int8_t x912 = -22;
	volatile int32_t t169 = 52539447;

    t169 = (((x909*x910)!=x911)*x912);

    if (t169 != -22) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x917 = -1232LL;
	static int32_t x918 = INT32_MIN;
	uint16_t x920 = 0U;
	int32_t t170 = 4213;

    t170 = (((x917*x918)!=x919)*x920);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x922 = 26303707U;
	static int8_t x923 = -3;
	uint64_t x924 = 2318008553801942700LLU;
	volatile uint64_t t171 = 2LLU;

    t171 = (((x921*x922)!=x923)*x924);

    if (t171 != 2318008553801942700LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x926 = 59U;
	static int32_t x927 = 659799;
	int16_t x928 = 6;
	static volatile int32_t t172 = 0;

    t172 = (((x925*x926)!=x927)*x928);

    if (t172 != 6) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x930 = 303248LLU;
	uint32_t x931 = 3U;
	uint32_t x932 = UINT32_MAX;
	volatile uint32_t t173 = UINT32_MAX;

    t173 = (((x929*x930)!=x931)*x932);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x933 = INT8_MAX;
	int64_t x934 = -1LL;
	int64_t x935 = INT64_MIN;
	volatile int16_t x936 = INT16_MIN;
	volatile int32_t t174 = -100;

    t174 = (((x933*x934)!=x935)*x936);

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x945 = INT8_MIN;
	int16_t x946 = -1;
	volatile uint8_t x947 = 14U;
	volatile uint8_t x948 = 1U;
	volatile int32_t t175 = -1;

    t175 = (((x945*x946)!=x947)*x948);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x950 = -1LL;
	int16_t x951 = INT16_MIN;
	int8_t x952 = INT8_MIN;
	static int32_t t176 = -223775100;

    t176 = (((x949*x950)!=x951)*x952);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x953 = -1519;
	static uint64_t x954 = 32068121266168LLU;
	uint32_t t177 = 234U;

    t177 = (((x953*x954)!=x955)*x956);

    if (t177 != 9360U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x957 = UINT64_MAX;
	volatile int64_t x958 = INT64_MIN;
	static int8_t x959 = INT8_MIN;
	volatile int64_t x960 = INT64_MIN;

    t178 = (((x957*x958)!=x959)*x960);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x962 = UINT64_MAX;
	uint8_t x963 = 3U;
	static int16_t x964 = 3123;

    t179 = (((x961*x962)!=x963)*x964);

    if (t179 != 3123) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x969 = UINT32_MAX;
	int64_t x971 = -1LL;
	volatile uint32_t x972 = 35631733U;
	uint32_t t180 = 132U;

    t180 = (((x969*x970)!=x971)*x972);

    if (t180 != 35631733U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x973 = 1;
	int32_t x976 = INT32_MIN;
	int32_t t181 = INT32_MIN;

    t181 = (((x973*x974)!=x975)*x976);

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x977 = 2345475733LLU;
	int64_t x979 = -126264LL;
	int64_t x980 = 8863730LL;
	int64_t t182 = 3675742LL;

    t182 = (((x977*x978)!=x979)*x980);

    if (t182 != 8863730LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x985 = INT16_MIN;
	uint8_t x986 = 0U;
	volatile uint32_t x987 = UINT32_MAX;
	int8_t x988 = INT8_MIN;
	volatile int32_t t183 = -8;

    t183 = (((x985*x986)!=x987)*x988);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x989 = -1;
	int8_t x990 = 0;

    t184 = (((x989*x990)!=x991)*x992);

    if (t184 != 3) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1013 = 0U;
	int64_t x1014 = INT64_MIN;
	static int64_t x1015 = INT64_MIN;
	int8_t x1016 = INT8_MIN;
	int32_t t185 = 3603591;

    t185 = (((x1013*x1014)!=x1015)*x1016);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1017 = INT16_MAX;
	uint32_t x1018 = 6U;
	int64_t x1019 = 206543042336198LL;
	uint8_t x1020 = 43U;
	int32_t t186 = 1168;

    t186 = (((x1017*x1018)!=x1019)*x1020);

    if (t186 != 43) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1021 = 555LL;
	static uint64_t x1022 = 10051932444772LLU;
	volatile int64_t x1023 = INT64_MAX;
	int16_t x1024 = INT16_MIN;
	int32_t t187 = 2045748;

    t187 = (((x1021*x1022)!=x1023)*x1024);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1025 = INT64_MIN;
	int16_t x1027 = INT16_MIN;
	uint32_t x1028 = UINT32_MAX;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (((x1025*x1026)!=x1027)*x1028);

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1030 = INT64_MIN;
	static int32_t x1032 = -1;
	volatile int32_t t189 = 908969723;

    t189 = (((x1029*x1030)!=x1031)*x1032);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1033 = 0U;
	static int32_t x1034 = 12;
	int32_t x1035 = INT32_MIN;
	int32_t t190 = INT32_MIN;

    t190 = (((x1033*x1034)!=x1035)*x1036);

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1037 = INT8_MIN;
	volatile int32_t x1039 = -439099824;
	static uint8_t x1040 = UINT8_MAX;

    t191 = (((x1037*x1038)!=x1039)*x1040);

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1045 = INT8_MIN;
	volatile int16_t x1046 = INT16_MIN;
	uint32_t x1047 = UINT32_MAX;
	int64_t x1048 = -1LL;
	volatile int64_t t192 = -52LL;

    t192 = (((x1045*x1046)!=x1047)*x1048);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1049 = 9U;
	int64_t x1050 = 17662359465575LL;
	int8_t x1051 = 10;
	static volatile int32_t t193 = INT32_MAX;

    t193 = (((x1049*x1050)!=x1051)*x1052);

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x1058 = 405634184U;
	static volatile int64_t x1059 = INT64_MIN;
	volatile int32_t t194 = INT32_MAX;

    t194 = (((x1057*x1058)!=x1059)*x1060);

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1065 = UINT32_MAX;
	static int16_t x1066 = -8414;
	static int32_t t195 = -14;

    t195 = (((x1065*x1066)!=x1067)*x1068);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1069 = 0;
	int32_t x1072 = -1;
	int32_t t196 = 1;

    t196 = (((x1069*x1070)!=x1071)*x1072);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1073 = -15051;
	int16_t x1074 = -1;
	static int8_t x1075 = -1;
	uint8_t x1076 = 3U;
	volatile int32_t t197 = -171388178;

    t197 = (((x1073*x1074)!=x1075)*x1076);

    if (t197 != 3) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1078 = 1674U;
	int32_t x1079 = -42344;
	static volatile uint16_t x1080 = UINT16_MAX;
	int32_t t198 = -133997880;

    t198 = (((x1077*x1078)!=x1079)*x1080);

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1083 = 783LL;
	static uint16_t x1084 = 1599U;
	volatile int32_t t199 = -2;

    t199 = (((x1081*x1082)!=x1083)*x1084);

    if (t199 != 1599) { NG(); } else { ; }
	
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

