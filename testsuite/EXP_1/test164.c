
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

static volatile int64_t x2 = INT64_MIN;
int16_t x4 = INT16_MIN;
int32_t x8 = -1;
volatile int32_t t2 = 1;
uint64_t x27 = 949744956975LLU;
uint32_t x35 = UINT32_MAX;
uint8_t x36 = 1U;
static volatile int32_t t7 = 16244383;
int8_t x43 = 9;
int64_t x48 = INT64_MIN;
volatile int64_t x61 = INT64_MIN;
int32_t x64 = INT32_MIN;
static uint64_t x67 = 6281004LLU;
int32_t t13 = -493006;
int64_t x75 = INT64_MIN;
int32_t x79 = 3191;
static int32_t t16 = -1;
int64_t x98 = -1LL;
int64_t x113 = -1LL;
uint32_t x121 = 0U;
int64_t x145 = -534343516529LL;
int16_t x148 = INT16_MIN;
volatile uint32_t x153 = 981758770U;
int16_t x154 = INT16_MAX;
int16_t x157 = INT16_MAX;
int32_t t29 = -168;
uint16_t x163 = 6U;
int8_t x167 = -1;
int32_t t32 = -4163966;
static volatile int16_t x173 = -3;
int8_t x174 = INT8_MAX;
uint64_t x179 = 873457LLU;
uint8_t x184 = 0U;
volatile int32_t x188 = 2;
int32_t t37 = -16106;
uint64_t x202 = 121978223660401740LLU;
static int64_t x208 = INT64_MAX;
volatile uint16_t x211 = UINT16_MAX;
static volatile int32_t t42 = 953508684;
int64_t x213 = -1LL;
uint32_t x215 = 2767U;
int32_t t43 = 13079;
volatile int8_t x226 = -1;
int64_t x227 = -1LL;
int32_t x232 = -11;
volatile int32_t t47 = 638471112;
int8_t x248 = INT8_MIN;
volatile int16_t x258 = 115;
uint16_t x260 = 145U;
uint16_t x263 = 505U;
volatile int16_t x272 = INT16_MAX;
uint32_t x278 = UINT32_MAX;
static uint16_t x283 = UINT16_MAX;
volatile int16_t x292 = INT16_MIN;
int8_t x300 = INT8_MIN;
int64_t x307 = -267011208535601605LL;
static volatile int32_t t62 = 1604396;
volatile int8_t x315 = INT8_MIN;
int32_t x320 = INT32_MIN;
static int32_t t69 = 0;
int64_t x364 = -2195381276488LL;
int32_t t74 = -25727;
int16_t x366 = INT16_MIN;
uint8_t x368 = 15U;
static uint64_t x371 = UINT64_MAX;
int8_t x373 = INT8_MAX;
volatile int64_t x374 = -1LL;
int16_t x380 = INT16_MIN;
int32_t t78 = 634;
volatile int16_t x402 = INT16_MIN;
int8_t x403 = INT8_MIN;
int32_t x418 = -1;
int16_t x427 = 498;
static volatile uint16_t x430 = 389U;
static uint64_t x441 = UINT64_MAX;
uint64_t x445 = 1LLU;
static volatile int64_t x458 = INT64_MIN;
int16_t x463 = INT16_MIN;
int8_t x464 = 12;
uint32_t x479 = 354253305U;
int64_t x491 = INT64_MIN;
volatile int32_t t104 = 10;
volatile int8_t x507 = INT8_MAX;
static int8_t x510 = INT8_MIN;
volatile int64_t x512 = INT64_MIN;
int32_t t108 = -374541338;
int8_t x514 = 7;
int16_t x515 = -1;
static volatile int8_t x519 = INT8_MIN;
static int32_t x521 = INT32_MIN;
static uint16_t x524 = 4742U;
uint16_t x526 = UINT16_MAX;
volatile uint32_t x527 = UINT32_MAX;
volatile int16_t x534 = INT16_MIN;
volatile uint64_t x536 = 4985142364190133915LLU;
uint32_t x548 = 4094U;
int64_t x551 = INT64_MIN;
int32_t t119 = 1754315;
static uint64_t x565 = 891661211799LLU;
int16_t x566 = 1;
static int8_t x567 = INT8_MIN;
int32_t x570 = -1140;
volatile int64_t x577 = -1LL;
uint32_t x587 = UINT32_MAX;
int8_t x593 = -1;
static int32_t x600 = -14991826;
volatile int32_t t129 = 8;
int32_t x602 = -3;
static int16_t x603 = 5573;
int8_t x604 = INT8_MIN;
static volatile int32_t t130 = 34;
uint16_t x622 = 6U;
int8_t x627 = INT8_MIN;
volatile int32_t t137 = 0;
uint16_t x633 = UINT16_MAX;
int8_t x637 = INT8_MIN;
uint16_t x642 = 3352U;
static uint16_t x649 = UINT16_MAX;
int32_t x652 = INT32_MIN;
volatile uint8_t x656 = UINT8_MAX;
int32_t x661 = INT32_MAX;
static int64_t x676 = -31LL;
static int16_t x681 = -1;
volatile uint64_t x682 = 111471166780LLU;
int8_t x684 = -1;
int32_t t150 = -14681;
volatile uint64_t x699 = 16872244722983202LLU;
static volatile int16_t x706 = INT16_MAX;
int64_t x708 = INT64_MAX;
static int32_t x713 = 452;
uint32_t x722 = 1647433U;
int8_t x726 = INT8_MIN;
int8_t x742 = INT8_MIN;
int16_t x743 = INT16_MIN;
static int32_t x744 = -491187;
int32_t x748 = -204042789;
static int32_t t163 = 66336;
int16_t x760 = 15176;
int32_t t166 = -1003009893;
int64_t x769 = -65LL;
uint8_t x771 = 10U;
int32_t x772 = INT32_MIN;
volatile uint32_t x776 = UINT32_MAX;
static uint8_t x778 = UINT8_MAX;
uint64_t x780 = UINT64_MAX;
int32_t t174 = 603318275;
int8_t x799 = INT8_MIN;
int8_t x803 = -1;
int64_t x805 = INT64_MIN;
uint64_t x806 = 192LLU;
int8_t x817 = -1;
static int8_t x827 = -7;
uint8_t x838 = 3U;
static int32_t x840 = INT32_MAX;
int32_t t186 = -41677852;
uint32_t x850 = 79681U;
int16_t x855 = INT16_MIN;
int32_t x861 = -1;
int8_t x869 = 0;
uint32_t x873 = 153795U;
int8_t x878 = INT8_MIN;
int32_t t194 = 3;
volatile int64_t x885 = INT64_MAX;
int16_t x900 = INT16_MIN;


void f0(void) {
    	volatile int16_t x1 = 1;
	static uint32_t x3 = UINT32_MAX;
	static int32_t t0 = 61;

    t0 = (((x1+x2)&x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 401U;
	int32_t x6 = 200131;
	uint64_t x7 = 7810572535LLU;
	volatile int32_t t1 = -54;

    t1 = (((x5+x6)&x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile uint64_t x10 = UINT64_MAX;
	static volatile int64_t x11 = INT64_MIN;
	uint16_t x12 = 0U;

    t2 = (((x9+x10)&x11)<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -1LL;
	volatile uint64_t x18 = UINT64_MAX;
	static uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 28602U;
	int32_t t3 = 73175;

    t3 = (((x17+x18)&x19)<=x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 406U;
	uint16_t x22 = UINT16_MAX;
	static int64_t x23 = 2LL;
	int8_t x24 = INT8_MAX;
	static volatile int32_t t4 = -213;

    t4 = (((x21+x22)&x23)<=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = 136;
	volatile int16_t x26 = INT16_MIN;
	uint32_t x28 = 1196538615U;
	int32_t t5 = -3851;

    t5 = (((x25+x26)&x27)<=x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x29 = 57250633962331LL;
	uint8_t x30 = 46U;
	uint8_t x31 = 9U;
	int32_t x32 = -1;
	static int32_t t6 = -21;

    t6 = (((x29+x30)&x31)<=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x33 = 2232616836872830943LLU;
	uint32_t x34 = 1U;

    t7 = (((x33+x34)&x35)<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x41 = INT8_MIN;
	volatile uint8_t x42 = 97U;
	static int64_t x44 = -1LL;
	volatile int32_t t8 = -89094640;

    t8 = (((x41+x42)&x43)<=x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MAX;
	int32_t t9 = 15467;

    t9 = (((x45+x46)&x47)<=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x53 = 2705U;
	int16_t x54 = INT16_MIN;
	static uint8_t x55 = 1U;
	uint32_t x56 = 36663U;
	volatile int32_t t10 = -13;

    t10 = (((x53+x54)&x55)<=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = INT64_MIN;
	uint32_t x58 = 1U;
	volatile int16_t x59 = 5543;
	int32_t x60 = INT32_MIN;
	int32_t t11 = 466;

    t11 = (((x57+x58)&x59)<=x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = 3;
	int64_t x63 = INT64_MIN;
	volatile int32_t t12 = 183728;

    t12 = (((x61+x62)&x63)<=x64);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x65 = 11141408U;
	int8_t x66 = INT8_MAX;
	static int64_t x68 = -47473078LL;

    t13 = (((x65+x66)&x67)<=x68);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = 214809189U;
	int8_t x70 = INT8_MAX;
	volatile int16_t x71 = -1;
	static volatile uint8_t x72 = 41U;
	int32_t t14 = -826456186;

    t14 = (((x69+x70)&x71)<=x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MAX;
	volatile int64_t x76 = INT64_MIN;
	static volatile int32_t t15 = 6026;

    t15 = (((x73+x74)&x75)<=x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x77 = 8158U;
	int16_t x78 = INT16_MIN;
	int64_t x80 = INT64_MIN;

    t16 = (((x77+x78)&x79)<=x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MAX;
	static uint64_t x82 = 71510070531789763LLU;
	int32_t x83 = INT32_MAX;
	volatile int32_t x84 = 106226;
	volatile int32_t t17 = 432948;

    t17 = (((x81+x82)&x83)<=x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = 10;
	int8_t x90 = -1;
	int8_t x91 = -1;
	int32_t x92 = 3791119;
	int32_t t18 = -25240783;

    t18 = (((x89+x90)&x91)<=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = 3121001LLU;
	volatile int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t19 = 338472645;

    t19 = (((x97+x98)&x99)<=x100);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = 915;
	int32_t x102 = INT32_MIN;
	static int64_t x103 = -2021742LL;
	static int32_t x104 = -3168020;
	volatile int32_t t20 = 18;

    t20 = (((x101+x102)&x103)<=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = INT16_MIN;
	static int8_t x106 = -57;
	int16_t x107 = -1350;
	volatile uint32_t x108 = 53010U;
	int32_t t21 = 11053;

    t21 = (((x105+x106)&x107)<=x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x114 = 189512221U;
	uint32_t x115 = UINT32_MAX;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t22 = -680223;

    t22 = (((x113+x114)&x115)<=x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MAX;
	uint32_t x119 = 0U;
	volatile uint8_t x120 = 0U;
	int32_t t23 = 757;

    t23 = (((x117+x118)&x119)<=x120);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x122 = 237LLU;
	int32_t x123 = 512023;
	int8_t x124 = -2;
	static volatile int32_t t24 = 28;

    t24 = (((x121+x122)&x123)<=x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	int64_t x127 = 3534LL;
	int64_t x128 = INT64_MAX;
	int32_t t25 = -693935;

    t25 = (((x125+x126)&x127)<=x128);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x141 = -934621LL;
	int64_t x142 = INT64_MAX;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	volatile int32_t t26 = 3840586;

    t26 = (((x141+x142)&x143)<=x144);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MIN;
	int32_t t27 = 3477;

    t27 = (((x145+x146)&x147)<=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x155 = INT16_MAX;
	volatile int64_t x156 = -39438826304LL;
	static int32_t t28 = -15779;

    t28 = (((x153+x154)&x155)<=x156);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x158 = 117652046;
	uint32_t x159 = 5U;
	static uint8_t x160 = 0U;

    t29 = (((x157+x158)&x159)<=x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x161 = -1;
	int64_t x162 = -1LL;
	uint32_t x164 = 403222960U;
	volatile int32_t t30 = -888639570;

    t30 = (((x161+x162)&x163)<=x164);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x165 = 1491LLU;
	uint16_t x166 = 58U;
	volatile int64_t x168 = -1LL;
	int32_t t31 = 43644072;

    t31 = (((x165+x166)&x167)<=x168);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x169 = 21;
	uint64_t x170 = 989909506594482348LLU;
	uint64_t x171 = 2099641LLU;
	int8_t x172 = INT8_MIN;

    t32 = (((x169+x170)&x171)<=x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x175 = INT32_MIN;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t33 = 24;

    t33 = (((x173+x174)&x175)<=x176);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x177 = -1LL;
	int8_t x178 = 39;
	int8_t x180 = -8;
	volatile int32_t t34 = 309252536;

    t34 = (((x177+x178)&x179)<=x180);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x181 = -8;
	uint8_t x182 = 91U;
	volatile uint64_t x183 = 0LLU;
	int32_t t35 = 937;

    t35 = (((x181+x182)&x183)<=x184);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -177486;
	uint8_t x187 = 114U;
	volatile int32_t t36 = 429516781;

    t36 = (((x185+x186)&x187)<=x188);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x189 = 26;
	int16_t x190 = INT16_MIN;
	static int64_t x191 = INT64_MIN;
	static int64_t x192 = 8LL;

    t37 = (((x189+x190)&x191)<=x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = INT8_MIN;
	volatile int16_t x194 = INT16_MAX;
	uint64_t x195 = 461913LLU;
	volatile int32_t x196 = -1;
	static volatile int32_t t38 = 1978;

    t38 = (((x193+x194)&x195)<=x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x197 = 1;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = 57;
	static volatile uint32_t x200 = 90991833U;
	int32_t t39 = 9;

    t39 = (((x197+x198)&x199)<=x200);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x201 = INT64_MAX;
	volatile int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t40 = -32994;

    t40 = (((x201+x202)&x203)<=x204);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x205 = -25LL;
	volatile uint64_t x206 = 1442329680048012LLU;
	int8_t x207 = INT8_MIN;
	int32_t t41 = -60121476;

    t41 = (((x205+x206)&x207)<=x208);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x209 = UINT32_MAX;
	static uint64_t x210 = UINT64_MAX;
	uint32_t x212 = 32442U;

    t42 = (((x209+x210)&x211)<=x212);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x214 = 0;
	int16_t x216 = -3;

    t43 = (((x213+x214)&x215)<=x216);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x221 = 82U;
	uint64_t x222 = 188176768164206LLU;
	int16_t x223 = INT16_MAX;
	static volatile int32_t x224 = -60220817;
	static volatile int32_t t44 = 1410725;

    t44 = (((x221+x222)&x223)<=x224);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x225 = 39U;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t45 = -5736;

    t45 = (((x225+x226)&x227)<=x228);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x229 = INT8_MAX;
	static uint64_t x230 = 203LLU;
	int16_t x231 = INT16_MAX;
	volatile int32_t t46 = 1414488;

    t46 = (((x229+x230)&x231)<=x232);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x233 = 0U;
	static int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	static uint8_t x236 = UINT8_MAX;

    t47 = (((x233+x234)&x235)<=x236);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x237 = INT16_MIN;
	uint8_t x238 = 12U;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = 92U;
	volatile int32_t t48 = -3;

    t48 = (((x237+x238)&x239)<=x240);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x241 = 1968U;
	int64_t x242 = INT64_MIN;
	int64_t x243 = -1LL;
	static int8_t x244 = -3;
	volatile int32_t t49 = 100;

    t49 = (((x241+x242)&x243)<=x244);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x245 = -22261LL;
	uint64_t x246 = 7633395652751116LLU;
	int16_t x247 = 221;
	int32_t t50 = 613216;

    t50 = (((x245+x246)&x247)<=x248);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x249 = 1168624078LLU;
	volatile uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MIN;
	int64_t x252 = 848630865LL;
	static volatile int32_t t51 = -116839;

    t51 = (((x249+x250)&x251)<=x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x257 = INT8_MIN;
	static uint64_t x259 = 1419628229200710383LLU;
	int32_t t52 = -65;

    t52 = (((x257+x258)&x259)<=x260);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x261 = 20U;
	int32_t x262 = -9331345;
	volatile int32_t x264 = 18;
	volatile int32_t t53 = 10035;

    t53 = (((x261+x262)&x263)<=x264);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x269 = 31U;
	int32_t x270 = INT32_MAX;
	int8_t x271 = -28;
	volatile int32_t t54 = -10;

    t54 = (((x269+x270)&x271)<=x272);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x273 = -1;
	uint64_t x274 = 16572013609370LLU;
	uint16_t x275 = 0U;
	uint32_t x276 = UINT32_MAX;
	int32_t t55 = -410057085;

    t55 = (((x273+x274)&x275)<=x276);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x277 = INT32_MIN;
	uint32_t x279 = 290294U;
	volatile int8_t x280 = -6;
	volatile int32_t t56 = 4702;

    t56 = (((x277+x278)&x279)<=x280);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MAX;
	int8_t x284 = 22;
	static int32_t t57 = 4677260;

    t57 = (((x281+x282)&x283)<=x284);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x289 = 6491U;
	volatile int16_t x290 = 0;
	volatile uint16_t x291 = UINT16_MAX;
	volatile int32_t t58 = -15627;

    t58 = (((x289+x290)&x291)<=x292);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x293 = 1544821472LLU;
	int64_t x294 = -1LL;
	int16_t x295 = -6;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t59 = -1;

    t59 = (((x293+x294)&x295)<=x296);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x297 = 382216585130504139LLU;
	int16_t x298 = INT16_MIN;
	int32_t x299 = 125517;
	int32_t t60 = 0;

    t60 = (((x297+x298)&x299)<=x300);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x301 = 1U;
	int32_t x302 = -6188;
	int8_t x303 = INT8_MIN;
	static int32_t x304 = -3495749;
	volatile int32_t t61 = 309264757;

    t61 = (((x301+x302)&x303)<=x304);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x305 = 530U;
	static uint16_t x306 = UINT16_MAX;
	int16_t x308 = -1;

    t62 = (((x305+x306)&x307)<=x308);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	static volatile int8_t x311 = INT8_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t63 = 412841369;

    t63 = (((x309+x310)&x311)<=x312);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t64 = -29;

    t64 = (((x313+x314)&x315)<=x316);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x317 = 14234;
	static int32_t x318 = -1;
	int16_t x319 = INT16_MIN;
	volatile int32_t t65 = -100;

    t65 = (((x317+x318)&x319)<=x320);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = -404063757577971LL;
	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MAX;
	int16_t x328 = 24;
	volatile int32_t t66 = -21;

    t66 = (((x325+x326)&x327)<=x328);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x329 = 14486016305LLU;
	uint16_t x330 = 19U;
	int16_t x331 = 12240;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t67 = -366213;

    t67 = (((x329+x330)&x331)<=x332);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x333 = INT8_MAX;
	uint32_t x334 = 1962U;
	int32_t x335 = -40394659;
	static int32_t x336 = INT32_MAX;
	int32_t t68 = 133230;

    t68 = (((x333+x334)&x335)<=x336);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x337 = 74LL;
	volatile uint8_t x338 = UINT8_MAX;
	volatile int16_t x339 = INT16_MAX;
	uint64_t x340 = 216958475421346746LLU;

    t69 = (((x337+x338)&x339)<=x340);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x345 = 0;
	int32_t x346 = INT32_MIN;
	int32_t x347 = 421975640;
	int64_t x348 = INT64_MAX;
	volatile int32_t t70 = -2983627;

    t70 = (((x345+x346)&x347)<=x348);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x349 = 0U;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	volatile uint16_t x352 = 3U;
	int32_t t71 = -11104754;

    t71 = (((x349+x350)&x351)<=x352);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x353 = 76855U;
	static uint16_t x354 = 2U;
	volatile uint32_t x355 = 494083651U;
	int32_t x356 = INT32_MIN;
	int32_t t72 = -376066;

    t72 = (((x353+x354)&x355)<=x356);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	int8_t x358 = 1;
	volatile uint8_t x359 = UINT8_MAX;
	volatile int8_t x360 = INT8_MAX;
	static int32_t t73 = 864990;

    t73 = (((x357+x358)&x359)<=x360);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x361 = UINT32_MAX;
	uint32_t x362 = 421105900U;
	uint32_t x363 = 5952U;

    t74 = (((x361+x362)&x363)<=x364);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x365 = -3;
	int16_t x367 = -1133;
	int32_t t75 = -4106275;

    t75 = (((x365+x366)&x367)<=x368);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x369 = INT8_MIN;
	static int32_t x370 = 0;
	volatile int8_t x372 = -1;
	static int32_t t76 = -5;

    t76 = (((x369+x370)&x371)<=x372);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x375 = -4;
	volatile int32_t x376 = -3;
	volatile int32_t t77 = 1308;

    t77 = (((x373+x374)&x375)<=x376);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x377 = 8890201;
	volatile int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MIN;

    t78 = (((x377+x378)&x379)<=x380);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = 164885U;
	int8_t x383 = 1;
	int64_t x384 = INT64_MIN;
	volatile int32_t t79 = 4618;

    t79 = (((x381+x382)&x383)<=x384);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x385 = INT32_MIN;
	volatile uint8_t x386 = 22U;
	int8_t x387 = INT8_MIN;
	volatile int16_t x388 = 4;
	volatile int32_t t80 = -236579;

    t80 = (((x385+x386)&x387)<=x388);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x389 = -28;
	int8_t x390 = INT8_MAX;
	volatile int32_t x391 = INT32_MIN;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t81 = -109770;

    t81 = (((x389+x390)&x391)<=x392);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x393 = 523U;
	volatile uint8_t x394 = 29U;
	int64_t x395 = 18850001LL;
	int32_t x396 = -1302;
	volatile int32_t t82 = 3219743;

    t82 = (((x393+x394)&x395)<=x396);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x401 = INT8_MIN;
	static int8_t x404 = INT8_MIN;
	int32_t t83 = -2;

    t83 = (((x401+x402)&x403)<=x404);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x405 = 1;
	static int64_t x406 = INT64_MIN;
	int32_t x407 = -1;
	int64_t x408 = -1LL;
	volatile int32_t t84 = 9701;

    t84 = (((x405+x406)&x407)<=x408);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x409 = 4569737U;
	uint8_t x410 = UINT8_MAX;
	static int8_t x411 = 7;
	int32_t x412 = INT32_MAX;
	static int32_t t85 = 744290;

    t85 = (((x409+x410)&x411)<=x412);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x413 = -1;
	int64_t x414 = 4766102178411LL;
	uint32_t x415 = UINT32_MAX;
	uint32_t x416 = 6645754U;
	volatile int32_t t86 = -6102;

    t86 = (((x413+x414)&x415)<=x416);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	int16_t x420 = 110;
	static int32_t t87 = -6;

    t87 = (((x417+x418)&x419)<=x420);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x421 = INT16_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint8_t x423 = UINT8_MAX;
	static int64_t x424 = -1LL;
	volatile int32_t t88 = -7512419;

    t88 = (((x421+x422)&x423)<=x424);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x425 = -1;
	int32_t x426 = -10226;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t89 = 8;

    t89 = (((x425+x426)&x427)<=x428);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = INT16_MIN;
	volatile int8_t x431 = -1;
	uint64_t x432 = 239521533460LLU;
	int32_t t90 = -8562;

    t90 = (((x429+x430)&x431)<=x432);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x433 = 49;
	volatile uint8_t x434 = UINT8_MAX;
	int32_t x435 = -264470684;
	static volatile int8_t x436 = 12;
	int32_t t91 = 31366;

    t91 = (((x433+x434)&x435)<=x436);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x442 = INT32_MIN;
	int64_t x443 = INT64_MIN;
	uint32_t x444 = 8U;
	int32_t t92 = 12922;

    t92 = (((x441+x442)&x443)<=x444);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x446 = UINT64_MAX;
	int16_t x447 = -1;
	int32_t x448 = INT32_MIN;
	int32_t t93 = -62;

    t93 = (((x445+x446)&x447)<=x448);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x449 = -1;
	int16_t x450 = -145;
	int8_t x451 = -1;
	int16_t x452 = -814;
	int32_t t94 = -1;

    t94 = (((x449+x450)&x451)<=x452);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x453 = 1;
	uint16_t x454 = 970U;
	volatile int8_t x455 = INT8_MIN;
	static uint32_t x456 = UINT32_MAX;
	int32_t t95 = 938066222;

    t95 = (((x453+x454)&x455)<=x456);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x457 = 10;
	int64_t x459 = -473686632097724LL;
	volatile int16_t x460 = 602;
	volatile int32_t t96 = -5;

    t96 = (((x457+x458)&x459)<=x460);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x461 = 3371U;
	int8_t x462 = INT8_MAX;
	int32_t t97 = 1;

    t97 = (((x461+x462)&x463)<=x464);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x465 = UINT64_MAX;
	int64_t x466 = INT64_MIN;
	int32_t x467 = 12994164;
	uint8_t x468 = 3U;
	static int32_t t98 = 31336591;

    t98 = (((x465+x466)&x467)<=x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x469 = 152U;
	static int32_t x470 = INT32_MIN;
	int8_t x471 = 10;
	static uint64_t x472 = UINT64_MAX;
	volatile int32_t t99 = -718;

    t99 = (((x469+x470)&x471)<=x472);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x473 = 5U;
	volatile int64_t x474 = INT64_MIN;
	static int64_t x475 = -1LL;
	int16_t x476 = INT16_MAX;
	int32_t t100 = -2604;

    t100 = (((x473+x474)&x475)<=x476);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x477 = UINT16_MAX;
	uint16_t x478 = 1413U;
	volatile uint32_t x480 = UINT32_MAX;
	volatile int32_t t101 = -4497109;

    t101 = (((x477+x478)&x479)<=x480);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x481 = INT32_MIN;
	volatile int64_t x482 = -1LL;
	int16_t x483 = -1;
	uint64_t x484 = UINT64_MAX;
	static volatile int32_t t102 = -428646788;

    t102 = (((x481+x482)&x483)<=x484);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x485 = INT32_MIN;
	volatile int16_t x486 = 0;
	int16_t x487 = INT16_MAX;
	volatile uint32_t x488 = 1U;
	static volatile int32_t t103 = -77432;

    t103 = (((x485+x486)&x487)<=x488);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x489 = 117047735801941LL;
	int8_t x490 = INT8_MIN;
	int8_t x492 = INT8_MIN;

    t104 = (((x489+x490)&x491)<=x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x493 = -453714;
	static int32_t x494 = -2;
	static uint8_t x495 = 124U;
	static uint16_t x496 = UINT16_MAX;
	int32_t t105 = 62147;

    t105 = (((x493+x494)&x495)<=x496);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x501 = 14376674;
	volatile int32_t x502 = -1;
	int32_t x503 = 4309537;
	static uint16_t x504 = UINT16_MAX;
	static volatile int32_t t106 = 1615;

    t106 = (((x501+x502)&x503)<=x504);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x505 = INT64_MAX;
	int64_t x506 = INT64_MIN;
	static uint32_t x508 = 25U;
	volatile int32_t t107 = 169992;

    t107 = (((x505+x506)&x507)<=x508);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x509 = INT64_MAX;
	int16_t x511 = INT16_MIN;

    t108 = (((x509+x510)&x511)<=x512);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x513 = INT64_MIN;
	static uint32_t x516 = 198148951U;
	static int32_t t109 = -1269497;

    t109 = (((x513+x514)&x515)<=x516);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x517 = INT8_MAX;
	int8_t x518 = -1;
	uint32_t x520 = UINT32_MAX;
	int32_t t110 = 76083396;

    t110 = (((x517+x518)&x519)<=x520);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x522 = 124U;
	int64_t x523 = 92368LL;
	volatile int32_t t111 = 2;

    t111 = (((x521+x522)&x523)<=x524);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x525 = -1LL;
	int32_t x528 = INT32_MIN;
	volatile int32_t t112 = -15047;

    t112 = (((x525+x526)&x527)<=x528);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x529 = 93308400U;
	int32_t x530 = INT32_MAX;
	int64_t x531 = -6412910882LL;
	static int64_t x532 = 11888776414095LL;
	volatile int32_t t113 = -5;

    t113 = (((x529+x530)&x531)<=x532);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x533 = -6;
	int64_t x535 = -758159889359365LL;
	volatile int32_t t114 = 101738846;

    t114 = (((x533+x534)&x535)<=x536);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x537 = -1;
	volatile int16_t x538 = 9339;
	uint8_t x539 = 1U;
	int8_t x540 = -27;
	static volatile int32_t t115 = 14;

    t115 = (((x537+x538)&x539)<=x540);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x541 = INT16_MIN;
	static uint32_t x542 = 176752942U;
	int32_t x543 = -1;
	volatile int32_t x544 = INT32_MIN;
	static int32_t t116 = -89996;

    t116 = (((x541+x542)&x543)<=x544);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x545 = -15;
	int8_t x546 = -18;
	int64_t x547 = -1LL;
	static volatile int32_t t117 = 52221;

    t117 = (((x545+x546)&x547)<=x548);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x549 = 120U;
	volatile int16_t x550 = -1;
	volatile int64_t x552 = -1LL;
	int32_t t118 = -480058;

    t118 = (((x549+x550)&x551)<=x552);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x553 = -1LL;
	volatile int32_t x554 = INT32_MIN;
	static int32_t x555 = INT32_MIN;
	int64_t x556 = 0LL;

    t119 = (((x553+x554)&x555)<=x556);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x557 = 63U;
	int64_t x558 = 247189803580068LL;
	int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;
	int32_t t120 = -1930109;

    t120 = (((x557+x558)&x559)<=x560);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x561 = 20793U;
	uint8_t x562 = UINT8_MAX;
	static int16_t x563 = 13521;
	static int64_t x564 = INT64_MIN;
	int32_t t121 = 267636;

    t121 = (((x561+x562)&x563)<=x564);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x568 = 8322U;
	volatile int32_t t122 = -1491;

    t122 = (((x565+x566)&x567)<=x568);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x569 = 1;
	uint64_t x571 = 275188420852819565LLU;
	int16_t x572 = INT16_MAX;
	int32_t t123 = -2;

    t123 = (((x569+x570)&x571)<=x572);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x578 = -8120870;
	int64_t x579 = INT64_MIN;
	volatile int32_t x580 = -4035796;
	volatile int32_t t124 = 2254470;

    t124 = (((x577+x578)&x579)<=x580);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x581 = 60;
	int16_t x582 = INT16_MAX;
	int32_t x583 = INT32_MIN;
	static volatile uint16_t x584 = UINT16_MAX;
	int32_t t125 = -108;

    t125 = (((x581+x582)&x583)<=x584);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x585 = 21LLU;
	int8_t x586 = -1;
	uint8_t x588 = UINT8_MAX;
	int32_t t126 = 1926438;

    t126 = (((x585+x586)&x587)<=x588);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x589 = UINT16_MAX;
	int8_t x590 = INT8_MIN;
	int32_t x591 = -1;
	int16_t x592 = -1;
	volatile int32_t t127 = 18970;

    t127 = (((x589+x590)&x591)<=x592);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x594 = 198927750LL;
	static volatile uint16_t x595 = 86U;
	int16_t x596 = -24;
	int32_t t128 = 0;

    t128 = (((x593+x594)&x595)<=x596);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x597 = 62LL;
	volatile uint64_t x598 = 2204694LLU;
	int64_t x599 = -1LL;

    t129 = (((x597+x598)&x599)<=x600);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x601 = -1LL;

    t130 = (((x601+x602)&x603)<=x604);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x605 = UINT8_MAX;
	int16_t x606 = -1;
	static int8_t x607 = -1;
	volatile uint32_t x608 = 442622U;
	volatile int32_t t131 = 118088;

    t131 = (((x605+x606)&x607)<=x608);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x609 = 1383923978085354129LLU;
	uint8_t x610 = 0U;
	int16_t x611 = INT16_MAX;
	uint32_t x612 = 2629239U;
	volatile int32_t t132 = -350099654;

    t132 = (((x609+x610)&x611)<=x612);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x613 = -38;
	volatile uint32_t x614 = UINT32_MAX;
	static int64_t x615 = INT64_MIN;
	uint32_t x616 = 1482086U;
	int32_t t133 = -176783;

    t133 = (((x613+x614)&x615)<=x616);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	int32_t x619 = INT32_MAX;
	static int64_t x620 = 1241240353030LL;
	static volatile int32_t t134 = -1;

    t134 = (((x617+x618)&x619)<=x620);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x621 = INT8_MAX;
	volatile uint32_t x623 = 28367U;
	uint32_t x624 = UINT32_MAX;
	int32_t t135 = 80193448;

    t135 = (((x621+x622)&x623)<=x624);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x625 = INT64_MIN;
	static int64_t x626 = INT64_MAX;
	volatile int64_t x628 = 19895385451952LL;
	volatile int32_t t136 = 3969;

    t136 = (((x625+x626)&x627)<=x628);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x629 = INT32_MIN;
	volatile int16_t x630 = 0;
	uint64_t x631 = 175341642277344386LLU;
	volatile int64_t x632 = INT64_MIN;

    t137 = (((x629+x630)&x631)<=x632);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x634 = INT16_MIN;
	int64_t x635 = -97698LL;
	int8_t x636 = INT8_MIN;
	volatile int32_t t138 = -7824326;

    t138 = (((x633+x634)&x635)<=x636);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x638 = UINT32_MAX;
	static int32_t x639 = INT32_MIN;
	volatile int16_t x640 = 225;
	volatile int32_t t139 = 1547;

    t139 = (((x637+x638)&x639)<=x640);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x641 = 22;
	int16_t x643 = INT16_MIN;
	uint8_t x644 = UINT8_MAX;
	static volatile int32_t t140 = -20286;

    t140 = (((x641+x642)&x643)<=x644);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x645 = INT32_MAX;
	int32_t x646 = INT32_MIN;
	volatile int16_t x647 = -3449;
	int16_t x648 = -3478;
	int32_t t141 = -1114;

    t141 = (((x645+x646)&x647)<=x648);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x650 = INT64_MIN;
	int32_t x651 = INT32_MIN;
	int32_t t142 = 0;

    t142 = (((x649+x650)&x651)<=x652);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x653 = -1LL;
	int16_t x654 = -1;
	volatile uint32_t x655 = 6U;
	volatile int32_t t143 = -100438;

    t143 = (((x653+x654)&x655)<=x656);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x662 = INT8_MIN;
	uint32_t x663 = 1114492U;
	int64_t x664 = 9123LL;
	volatile int32_t t144 = 864831;

    t144 = (((x661+x662)&x663)<=x664);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x665 = -1;
	int64_t x666 = 90LL;
	int32_t x667 = INT32_MIN;
	volatile int32_t x668 = 47;
	volatile int32_t t145 = 2920407;

    t145 = (((x665+x666)&x667)<=x668);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x669 = -182;
	uint64_t x670 = UINT64_MAX;
	int16_t x671 = 3273;
	uint16_t x672 = 149U;
	int32_t t146 = 1513702;

    t146 = (((x669+x670)&x671)<=x672);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x673 = -1LL;
	int8_t x674 = 5;
	uint16_t x675 = 0U;
	static volatile int32_t t147 = 1;

    t147 = (((x673+x674)&x675)<=x676);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x677 = 11329489LLU;
	uint8_t x678 = 57U;
	int8_t x679 = -1;
	int32_t x680 = INT32_MIN;
	static volatile int32_t t148 = -9092467;

    t148 = (((x677+x678)&x679)<=x680);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x683 = -126LL;
	int32_t t149 = 0;

    t149 = (((x681+x682)&x683)<=x684);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x685 = 190494U;
	volatile int32_t x686 = -27254075;
	uint8_t x687 = UINT8_MAX;
	int32_t x688 = -1;

    t150 = (((x685+x686)&x687)<=x688);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x689 = -1LL;
	volatile uint8_t x690 = UINT8_MAX;
	uint32_t x691 = 2962U;
	uint32_t x692 = 243905570U;
	int32_t t151 = -13504073;

    t151 = (((x689+x690)&x691)<=x692);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x693 = INT16_MIN;
	int64_t x694 = -1LL;
	uint16_t x695 = 23766U;
	uint16_t x696 = UINT16_MAX;
	int32_t t152 = -928;

    t152 = (((x693+x694)&x695)<=x696);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x697 = 2157U;
	uint64_t x698 = UINT64_MAX;
	volatile int32_t x700 = -239;
	int32_t t153 = -791157485;

    t153 = (((x697+x698)&x699)<=x700);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x705 = -1;
	uint32_t x707 = UINT32_MAX;
	volatile int32_t t154 = 4788128;

    t154 = (((x705+x706)&x707)<=x708);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x709 = 1;
	volatile int32_t x710 = -1;
	uint32_t x711 = 26U;
	static volatile int16_t x712 = INT16_MIN;
	volatile int32_t t155 = -53;

    t155 = (((x709+x710)&x711)<=x712);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x714 = -1;
	volatile int64_t x715 = INT64_MIN;
	static volatile int16_t x716 = INT16_MIN;
	static volatile int32_t t156 = 19;

    t156 = (((x713+x714)&x715)<=x716);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x721 = INT16_MAX;
	int32_t x723 = -170301906;
	uint32_t x724 = 6206U;
	volatile int32_t t157 = 418626817;

    t157 = (((x721+x722)&x723)<=x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x725 = -829343194LL;
	static int16_t x727 = INT16_MIN;
	uint32_t x728 = UINT32_MAX;
	volatile int32_t t158 = -14253;

    t158 = (((x725+x726)&x727)<=x728);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x729 = INT8_MIN;
	static int8_t x730 = INT8_MIN;
	static int32_t x731 = 5389;
	int16_t x732 = INT16_MIN;
	volatile int32_t t159 = 4628315;

    t159 = (((x729+x730)&x731)<=x732);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x733 = 48U;
	static volatile uint64_t x734 = 46869903LLU;
	volatile int64_t x735 = INT64_MAX;
	static volatile uint16_t x736 = 116U;
	volatile int32_t t160 = -33433;

    t160 = (((x733+x734)&x735)<=x736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x737 = 170LLU;
	int64_t x738 = INT64_MIN;
	uint32_t x739 = 927247883U;
	int16_t x740 = -1;
	volatile int32_t t161 = -219512857;

    t161 = (((x737+x738)&x739)<=x740);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x741 = 58790U;
	static volatile int32_t t162 = -4900246;

    t162 = (((x741+x742)&x743)<=x744);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x745 = -284;
	uint16_t x746 = 6U;
	int8_t x747 = 2;

    t163 = (((x745+x746)&x747)<=x748);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x749 = INT8_MAX;
	int32_t x750 = INT32_MIN;
	uint16_t x751 = 7U;
	static volatile int64_t x752 = INT64_MAX;
	volatile int32_t t164 = 1;

    t164 = (((x749+x750)&x751)<=x752);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x753 = INT16_MAX;
	static int64_t x754 = INT64_MIN;
	int32_t x755 = -1;
	uint16_t x756 = 390U;
	static int32_t t165 = -346;

    t165 = (((x753+x754)&x755)<=x756);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x757 = INT16_MIN;
	int8_t x758 = INT8_MIN;
	volatile int16_t x759 = INT16_MIN;

    t166 = (((x757+x758)&x759)<=x760);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x761 = INT32_MAX;
	volatile uint64_t x762 = UINT64_MAX;
	volatile int64_t x763 = INT64_MIN;
	int8_t x764 = INT8_MIN;
	int32_t t167 = -152;

    t167 = (((x761+x762)&x763)<=x764);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x765 = 432U;
	uint32_t x766 = 307354750U;
	int64_t x767 = INT64_MIN;
	uint64_t x768 = UINT64_MAX;
	int32_t t168 = 502019444;

    t168 = (((x765+x766)&x767)<=x768);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x770 = -1LL;
	int32_t t169 = -178018;

    t169 = (((x769+x770)&x771)<=x772);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x773 = UINT32_MAX;
	uint8_t x774 = 10U;
	static int8_t x775 = -20;
	volatile int32_t t170 = -250659305;

    t170 = (((x773+x774)&x775)<=x776);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x777 = 2987LLU;
	uint64_t x779 = 108LLU;
	int32_t t171 = 6274656;

    t171 = (((x777+x778)&x779)<=x780);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x781 = 23535630147LLU;
	uint32_t x782 = 4347U;
	volatile uint8_t x783 = UINT8_MAX;
	uint64_t x784 = 487581686126390LLU;
	int32_t t172 = -28;

    t172 = (((x781+x782)&x783)<=x784);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x789 = 1283902012058LLU;
	uint8_t x790 = 28U;
	uint64_t x791 = UINT64_MAX;
	int8_t x792 = 19;
	int32_t t173 = 1;

    t173 = (((x789+x790)&x791)<=x792);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x793 = 28855425799065933LLU;
	static int32_t x794 = INT32_MAX;
	int8_t x795 = 4;
	static volatile int64_t x796 = INT64_MIN;

    t174 = (((x793+x794)&x795)<=x796);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x797 = -1LL;
	int64_t x798 = INT64_MAX;
	static uint64_t x800 = UINT64_MAX;
	int32_t t175 = -64768533;

    t175 = (((x797+x798)&x799)<=x800);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x801 = -1;
	uint16_t x802 = 31226U;
	volatile int64_t x804 = INT64_MAX;
	int32_t t176 = 21041395;

    t176 = (((x801+x802)&x803)<=x804);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x807 = INT64_MIN;
	uint32_t x808 = 19078U;
	int32_t t177 = 7730741;

    t177 = (((x805+x806)&x807)<=x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x809 = INT8_MIN;
	volatile int32_t x810 = INT32_MAX;
	uint16_t x811 = 227U;
	static int64_t x812 = INT64_MAX;
	static int32_t t178 = -1;

    t178 = (((x809+x810)&x811)<=x812);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x813 = 1592;
	static int64_t x814 = -1LL;
	static int8_t x815 = 16;
	volatile uint8_t x816 = 0U;
	int32_t t179 = 157513;

    t179 = (((x813+x814)&x815)<=x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x818 = INT8_MAX;
	int16_t x819 = INT16_MAX;
	int32_t x820 = INT32_MIN;
	volatile int32_t t180 = 39998;

    t180 = (((x817+x818)&x819)<=x820);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x821 = 1793U;
	uint16_t x822 = 3U;
	volatile uint8_t x823 = 5U;
	int64_t x824 = 1LL;
	volatile int32_t t181 = -7333523;

    t181 = (((x821+x822)&x823)<=x824);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x825 = 290499255690LL;
	int8_t x826 = -1;
	volatile int32_t x828 = -1;
	static volatile int32_t t182 = -44;

    t182 = (((x825+x826)&x827)<=x828);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x829 = 48U;
	int32_t x830 = -494223;
	int32_t x831 = INT32_MIN;
	volatile int64_t x832 = 803288869182LL;
	int32_t t183 = 1;

    t183 = (((x829+x830)&x831)<=x832);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint32_t x833 = 50U;
	int32_t x834 = INT32_MIN;
	volatile int8_t x835 = -1;
	static volatile uint32_t x836 = 922895U;
	static volatile int32_t t184 = -86;

    t184 = (((x833+x834)&x835)<=x836);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x837 = INT16_MIN;
	int64_t x839 = -1LL;
	static volatile int32_t t185 = -10017765;

    t185 = (((x837+x838)&x839)<=x840);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = -634;
	int16_t x842 = -28;
	int32_t x843 = INT32_MAX;
	volatile int16_t x844 = -1;

    t186 = (((x841+x842)&x843)<=x844);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x849 = -17767;
	int64_t x851 = INT64_MIN;
	volatile int16_t x852 = -1;
	volatile int32_t t187 = -2535;

    t187 = (((x849+x850)&x851)<=x852);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x853 = INT16_MIN;
	uint32_t x854 = UINT32_MAX;
	int8_t x856 = -1;
	static volatile int32_t t188 = -340377221;

    t188 = (((x853+x854)&x855)<=x856);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	int32_t x858 = INT32_MIN;
	int32_t x859 = -28484;
	int64_t x860 = INT64_MAX;
	int32_t t189 = -25;

    t189 = (((x857+x858)&x859)<=x860);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x862 = -1;
	int64_t x863 = -1LL;
	static int8_t x864 = 45;
	int32_t t190 = -391235;

    t190 = (((x861+x862)&x863)<=x864);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x865 = -1;
	static int32_t x866 = -1;
	uint32_t x867 = 167309532U;
	int16_t x868 = INT16_MAX;
	volatile int32_t t191 = 10;

    t191 = (((x865+x866)&x867)<=x868);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x870 = INT32_MIN;
	int32_t x871 = INT32_MAX;
	int8_t x872 = INT8_MAX;
	int32_t t192 = -287707;

    t192 = (((x869+x870)&x871)<=x872);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x874 = 9070903;
	static volatile int8_t x875 = 0;
	int16_t x876 = 11;
	volatile int32_t t193 = -1;

    t193 = (((x873+x874)&x875)<=x876);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x877 = INT16_MIN;
	int32_t x879 = INT32_MIN;
	volatile uint8_t x880 = UINT8_MAX;

    t194 = (((x877+x878)&x879)<=x880);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x881 = INT32_MAX;
	volatile int32_t x882 = INT32_MIN;
	static uint16_t x883 = 15U;
	int8_t x884 = 1;
	int32_t t195 = 29;

    t195 = (((x881+x882)&x883)<=x884);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x886 = 0;
	int16_t x887 = 0;
	uint8_t x888 = 9U;
	int32_t t196 = -295;

    t196 = (((x885+x886)&x887)<=x888);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x889 = INT64_MIN;
	volatile uint32_t x890 = 0U;
	int16_t x891 = 3143;
	static int16_t x892 = INT16_MAX;
	volatile int32_t t197 = -20744916;

    t197 = (((x889+x890)&x891)<=x892);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x893 = 186956LL;
	int8_t x894 = INT8_MIN;
	uint16_t x895 = 24U;
	int32_t x896 = -12022490;
	volatile int32_t t198 = -2;

    t198 = (((x893+x894)&x895)<=x896);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x897 = 655721226582205836LLU;
	uint32_t x898 = 2879U;
	int8_t x899 = INT8_MIN;
	int32_t t199 = -259878133;

    t199 = (((x897+x898)&x899)<=x900);

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

