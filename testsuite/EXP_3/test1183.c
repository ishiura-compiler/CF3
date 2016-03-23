
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

static uint64_t x5 = 0LLU;
int32_t x6 = -1;
int32_t x7 = INT32_MIN;
int64_t x14 = INT64_MIN;
int32_t t3 = -506059429;
volatile int32_t x20 = INT32_MIN;
int8_t x21 = -7;
volatile int64_t x26 = INT64_MAX;
static volatile int32_t x27 = INT32_MAX;
static int8_t x31 = INT8_MIN;
int8_t x38 = 1;
int32_t t8 = -1;
int32_t x42 = INT32_MIN;
uint8_t x49 = 123U;
volatile int8_t x50 = -1;
int16_t x52 = INT16_MIN;
int64_t x56 = -279664202041LL;
int16_t x60 = -84;
static int64_t x63 = 14288672LL;
static int8_t x66 = 5;
static uint64_t x68 = UINT64_MAX;
volatile uint8_t x70 = 0U;
uint16_t x78 = 6801U;
static volatile int32_t x80 = -676;
uint32_t x81 = 31U;
uint16_t x82 = 2196U;
int32_t x89 = INT32_MAX;
int16_t x97 = -1;
volatile int32_t t27 = 59;
static int8_t x133 = INT8_MIN;
static uint16_t x136 = 1U;
volatile int32_t t29 = -41;
int8_t x144 = 2;
volatile int32_t t31 = -236679;
static volatile int32_t t33 = 619035423;
uint32_t x153 = 27U;
uint64_t x154 = 1126LLU;
uint8_t x156 = UINT8_MAX;
uint8_t x158 = 1U;
volatile int64_t x160 = INT64_MIN;
uint8_t x161 = UINT8_MAX;
int64_t x162 = -955743787794LL;
volatile int64_t x167 = -55397230416LL;
volatile int32_t t37 = 112726;
volatile uint8_t x174 = UINT8_MAX;
int32_t x176 = 1;
volatile int32_t t39 = 344975216;
uint16_t x181 = UINT16_MAX;
volatile int32_t x183 = 4259382;
volatile uint32_t x184 = UINT32_MAX;
int64_t x185 = -30333150LL;
int64_t x186 = 1081321LL;
static volatile int32_t t42 = 4;
uint8_t x197 = UINT8_MAX;
static int32_t t46 = -3;
volatile uint64_t x211 = UINT64_MAX;
int32_t x215 = 1;
volatile int32_t t48 = 0;
int64_t x223 = 1084289807962LL;
int64_t x224 = -1LL;
static volatile int32_t t50 = -29009;
int32_t t52 = 81764;
volatile int32_t t53 = 14477;
volatile int32_t t54 = -4904390;
volatile int16_t x251 = -5015;
static int32_t t56 = 7;
volatile int8_t x254 = INT8_MIN;
volatile int32_t t57 = 0;
uint8_t x257 = UINT8_MAX;
int16_t x258 = 18;
static int8_t x259 = INT8_MAX;
static int8_t x260 = -1;
static volatile int32_t t58 = -332410500;
uint64_t x268 = 1282550LLU;
int16_t x277 = INT16_MIN;
uint64_t x280 = 266067558899242089LLU;
int8_t x283 = 3;
volatile uint16_t x291 = 5824U;
static uint64_t x302 = 535755723689LLU;
int64_t x305 = 0LL;
volatile int8_t x307 = INT8_MIN;
volatile int32_t x312 = INT32_MIN;
volatile int16_t x314 = INT16_MIN;
uint64_t x315 = 3047640709108LLU;
int32_t t72 = -58301;
int32_t t75 = -11;
uint16_t x337 = 1965U;
int16_t x340 = -1;
int32_t t78 = -508;
volatile int32_t t79 = -136;
uint32_t x345 = UINT32_MAX;
int32_t x346 = INT32_MIN;
volatile uint16_t x348 = 2U;
uint16_t x351 = 1721U;
uint8_t x354 = 102U;
volatile int32_t t84 = -740406639;
uint16_t x371 = 7467U;
volatile int32_t t86 = 3;
int32_t t91 = 11057;
int8_t x399 = 1;
int16_t x400 = INT16_MIN;
volatile uint16_t x401 = 0U;
int32_t x408 = -1;
volatile int32_t x412 = 11;
int16_t x414 = -1;
static int32_t x425 = -1;
int8_t x427 = 1;
int16_t x440 = INT16_MIN;
static volatile int32_t t102 = -172798919;
static int32_t t104 = -166;
int64_t x452 = -1LL;
volatile int64_t x453 = 467LL;
int32_t t107 = 1065534450;
int32_t x463 = 3186;
int32_t t109 = -9;
volatile uint16_t x469 = 12U;
static uint32_t x471 = UINT32_MAX;
int32_t t110 = 952125626;
static uint8_t x473 = UINT8_MAX;
static int16_t x474 = -14340;
volatile uint64_t x477 = UINT64_MAX;
int32_t x478 = INT32_MIN;
int64_t x479 = -1LL;
int64_t x480 = INT64_MAX;
static volatile int64_t x484 = INT64_MAX;
uint8_t x485 = UINT8_MAX;
static uint64_t x489 = 3225LLU;
volatile int32_t t116 = 556602;
uint8_t x500 = UINT8_MAX;
int32_t t118 = 330077117;
uint64_t x510 = 257848799162816788LLU;
int8_t x512 = INT8_MIN;
int8_t x514 = INT8_MIN;
volatile int32_t t120 = -1;
int64_t x520 = INT64_MIN;
int16_t x528 = -1;
int16_t x532 = INT16_MIN;
int32_t t124 = -4369873;
int8_t x535 = -1;
int32_t t125 = -342776;
volatile int64_t x537 = -1LL;
int16_t x538 = INT16_MAX;
static uint32_t x540 = UINT32_MAX;
int32_t t126 = 5443;
int32_t x545 = INT32_MIN;
volatile int64_t x547 = -1LL;
volatile int32_t t128 = -389240;
int8_t x549 = -1;
volatile int32_t x557 = 13003;
int32_t t132 = 46142174;
static uint32_t x577 = 5854699U;
uint16_t x579 = 263U;
uint16_t x584 = UINT16_MAX;
int16_t x588 = INT16_MIN;
volatile uint64_t x593 = 453LLU;
uint8_t x597 = UINT8_MAX;
int16_t x599 = INT16_MIN;
volatile int32_t t140 = 206205385;
int32_t x601 = INT32_MIN;
int16_t x603 = INT16_MIN;
volatile int16_t x606 = INT16_MAX;
volatile int32_t t144 = 331812;
volatile int8_t x624 = -1;
int8_t x625 = INT8_MIN;
volatile uint16_t x632 = 4U;
volatile int32_t x646 = INT32_MIN;
int32_t t151 = 1;
int32_t t153 = 6374;
int32_t x662 = -1;
int32_t t154 = -257117;
volatile int32_t t155 = 5;
volatile int32_t t158 = 1;
int16_t x695 = INT16_MIN;
volatile int32_t t160 = -206206997;
static int64_t x699 = 3808061678965313707LL;
int16_t x701 = 98;
int64_t x708 = -1LL;
int32_t t164 = -5;
int64_t x719 = -1LL;
static uint64_t x721 = UINT64_MAX;
uint64_t x735 = 38280969353351LLU;
uint64_t x739 = 350328622069532LLU;
static int64_t x742 = -805145087LL;
int32_t t173 = 20352042;
int16_t x753 = INT16_MIN;
int32_t t174 = -54901;
uint32_t x758 = 234145551U;
int8_t x759 = INT8_MIN;
int32_t t176 = 11072539;
int16_t x768 = -3;
uint64_t x775 = UINT64_MAX;
volatile int32_t x788 = -1;
int8_t x795 = INT8_MAX;
int32_t x796 = INT32_MIN;
uint8_t x815 = 0U;
int64_t x816 = INT64_MIN;
uint64_t x824 = 5LLU;
static int8_t x828 = INT8_MIN;
volatile int32_t t190 = 317489898;
int8_t x830 = INT8_MIN;
volatile uint64_t x831 = 46446LLU;
uint64_t x833 = 13929569172LLU;
volatile uint64_t x834 = UINT64_MAX;
uint64_t x835 = 121041046224LLU;
volatile int32_t t192 = -30;
volatile int16_t x839 = INT16_MAX;
uint8_t x845 = UINT8_MAX;
static int64_t x846 = INT64_MIN;
int32_t x848 = -1;
static uint32_t x856 = 11721U;
static int16_t x859 = 1029;
static int8_t x860 = INT8_MAX;
static int32_t t197 = 954;
volatile int32_t t198 = 1;
volatile int32_t x865 = INT32_MAX;


void f0(void) {
    	uint8_t x1 = 5U;
	static volatile uint64_t x2 = 5LLU;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -236658;

    t0 = ((x1+x2)!=(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x8 = 36U;
	int32_t t1 = 49629243;

    t1 = ((x5+x6)!=(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 2274688;
	int32_t x10 = 79;
	uint64_t x11 = 2LLU;
	uint8_t x12 = 0U;
	static int32_t t2 = 5;

    t2 = ((x9+x10)!=(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x13 = INT64_MAX;
	int64_t x15 = -5857419443716014LL;
	int32_t x16 = INT32_MIN;

    t3 = ((x13+x14)!=(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 54151LL;
	uint8_t x18 = 35U;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -380322;

    t4 = ((x17+x18)!=(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	static uint8_t x23 = UINT8_MAX;
	volatile uint32_t x24 = 579164U;
	volatile int32_t t5 = 109280;

    t5 = ((x21+x22)!=(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -258726658LL;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 1052627;

    t6 = ((x25+x26)!=(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 15990;
	uint32_t x30 = UINT32_MAX;
	volatile int64_t x32 = -4LL;
	volatile int32_t t7 = -82913;

    t7 = ((x29+x30)!=(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	int32_t x39 = -1;
	int8_t x40 = 1;

    t8 = ((x37+x38)!=(x39!=x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 8U;
	int32_t x43 = INT32_MAX;
	volatile int64_t x44 = INT64_MAX;
	static int32_t t9 = 3267071;

    t9 = ((x41+x42)!=(x43!=x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = -7;
	uint16_t x46 = 0U;
	int32_t x47 = -231956172;
	int16_t x48 = 447;
	int32_t t10 = -67020589;

    t10 = ((x45+x46)!=(x47!=x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x51 = -7;
	int32_t t11 = 0;

    t11 = ((x49+x50)!=(x51!=x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x53 = 46;
	int32_t x54 = -19798489;
	int16_t x55 = INT16_MAX;
	int32_t t12 = -185;

    t12 = ((x53+x54)!=(x55!=x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 136U;
	int8_t x58 = INT8_MIN;
	int64_t x59 = -1334500LL;
	volatile int32_t t13 = 472615;

    t13 = ((x57+x58)!=(x59!=x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 335U;
	int32_t x62 = INT32_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t14 = 19;

    t14 = ((x61+x62)!=(x63!=x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 23U;
	static int8_t x67 = -1;
	int32_t t15 = 323919;

    t15 = ((x65+x66)!=(x67!=x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -18363585299905LL;
	int16_t x71 = 2;
	volatile int32_t x72 = -1;
	volatile int32_t t16 = 192;

    t16 = ((x69+x70)!=(x71!=x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MAX;
	int32_t x75 = -59;
	int64_t x76 = -1LL;
	volatile int32_t t17 = 0;

    t17 = ((x73+x74)!=(x75!=x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	int32_t t18 = 96346;

    t18 = ((x77+x78)!=(x79!=x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x83 = 41415723U;
	int32_t x84 = INT32_MAX;
	volatile int32_t t19 = 7832;

    t19 = ((x81+x82)!=(x83!=x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x90 = 1508028578623LL;
	uint8_t x91 = UINT8_MAX;
	int8_t x92 = -33;
	int32_t t20 = 1;

    t20 = ((x89+x90)!=(x91!=x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -1LL;
	int16_t x94 = 178;
	int32_t x95 = -1196;
	volatile uint16_t x96 = 103U;
	volatile int32_t t21 = -1389;

    t21 = ((x93+x94)!=(x95!=x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x98 = 2429746256020LLU;
	int32_t x99 = 79058;
	int8_t x100 = INT8_MIN;
	int32_t t22 = -130618;

    t22 = ((x97+x98)!=(x99!=x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x105 = 0U;
	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MAX;
	volatile int32_t t23 = -1;

    t23 = ((x105+x106)!=(x107!=x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = INT64_MIN;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t24 = -10;

    t24 = ((x109+x110)!=(x111!=x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = -1;
	int32_t x118 = -49863;
	volatile int16_t x119 = INT16_MIN;
	uint8_t x120 = 49U;
	static volatile int32_t t25 = -2992;

    t25 = ((x117+x118)!=(x119!=x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = 21U;
	int16_t x122 = INT16_MIN;
	volatile int32_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t26 = -301151432;

    t26 = ((x121+x122)!=(x123!=x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x125 = -1;
	int32_t x126 = 27;
	static int16_t x127 = -12;
	volatile uint16_t x128 = 941U;

    t27 = ((x125+x126)!=(x127!=x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x129 = 3157379;
	volatile int32_t x130 = INT32_MIN;
	volatile uint16_t x131 = 13453U;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t28 = 1;

    t28 = ((x129+x130)!=(x131!=x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x134 = 2;
	int16_t x135 = 1;

    t29 = ((x133+x134)!=(x135!=x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -298723318937LL;
	uint16_t x138 = 0U;
	int64_t x139 = 51521349582LL;
	int16_t x140 = 10;
	volatile int32_t t30 = -19;

    t30 = ((x137+x138)!=(x139!=x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x141 = 23014U;
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = -1994;

    t31 = ((x141+x142)!=(x143!=x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t32 = 112945;

    t32 = ((x145+x146)!=(x147!=x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 7543181;
	volatile int32_t x150 = -5;
	volatile int8_t x151 = -1;
	int16_t x152 = -12;

    t33 = ((x149+x150)!=(x151!=x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x155 = -10851402886607LL;
	int32_t t34 = -16235986;

    t34 = ((x153+x154)!=(x155!=x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x157 = INT8_MAX;
	uint16_t x159 = 2U;
	int32_t t35 = -504265;

    t35 = ((x157+x158)!=(x159!=x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x163 = 240706591LL;
	int16_t x164 = INT16_MIN;
	volatile int32_t t36 = -240360;

    t36 = ((x161+x162)!=(x163!=x164));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = UINT16_MAX;
	volatile int16_t x166 = INT16_MIN;
	uint32_t x168 = UINT32_MAX;

    t37 = ((x165+x166)!=(x167!=x168));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x169 = -1;
	volatile uint8_t x170 = UINT8_MAX;
	static int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t38 = 554393;

    t38 = ((x169+x170)!=(x171!=x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x173 = 22246630LL;
	volatile uint16_t x175 = 76U;

    t39 = ((x173+x174)!=(x175!=x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	static int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t40 = 6518510;

    t40 = ((x177+x178)!=(x179!=x180));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x182 = -1LL;
	volatile int32_t t41 = 13881;

    t41 = ((x181+x182)!=(x183!=x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x187 = -1;
	int16_t x188 = INT16_MAX;

    t42 = ((x185+x186)!=(x187!=x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x189 = 56U;
	volatile uint16_t x190 = 430U;
	uint32_t x191 = 6393939U;
	int8_t x192 = INT8_MAX;
	volatile int32_t t43 = -16;

    t43 = ((x189+x190)!=(x191!=x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = 3127;
	int64_t x194 = INT64_MIN;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = 521327U;
	int32_t t44 = -4;

    t44 = ((x193+x194)!=(x195!=x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x198 = 1566U;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = 390698979916264038LLU;
	volatile int32_t t45 = -125244475;

    t45 = ((x197+x198)!=(x199!=x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x205 = 9U;
	static int8_t x206 = INT8_MAX;
	int64_t x207 = -1LL;
	static volatile int16_t x208 = INT16_MIN;

    t46 = ((x205+x206)!=(x207!=x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x209 = 162501007285711594LLU;
	static int64_t x210 = -1LL;
	int8_t x212 = 25;
	volatile int32_t t47 = 542783;

    t47 = ((x209+x210)!=(x211!=x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x213 = 1U;
	uint8_t x214 = 3U;
	static int8_t x216 = INT8_MIN;

    t48 = ((x213+x214)!=(x215!=x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = 4583;
	int32_t x218 = INT32_MIN;
	int16_t x219 = 5133;
	volatile int32_t x220 = -1;
	volatile int32_t t49 = 2;

    t49 = ((x217+x218)!=(x219!=x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = 12052LL;
	int64_t x222 = -1LL;

    t50 = ((x221+x222)!=(x223!=x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x225 = 0U;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = -1;
	volatile int32_t t51 = 190614;

    t51 = ((x225+x226)!=(x227!=x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = INT32_MAX;
	uint32_t x230 = 1084299280U;
	volatile int16_t x231 = -1;
	int16_t x232 = INT16_MIN;

    t52 = ((x229+x230)!=(x231!=x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x233 = 8U;
	int8_t x234 = INT8_MAX;
	int16_t x235 = 75;
	static int32_t x236 = INT32_MAX;

    t53 = ((x233+x234)!=(x235!=x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x237 = INT8_MIN;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 15534807971678LLU;

    t54 = ((x237+x238)!=(x239!=x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	uint32_t x246 = 107311296U;
	volatile uint16_t x247 = 8U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t55 = -261071890;

    t55 = ((x245+x246)!=(x247!=x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 9572U;
	uint8_t x252 = 19U;

    t56 = ((x249+x250)!=(x251!=x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x253 = 167U;
	int8_t x255 = INT8_MAX;
	int8_t x256 = -1;

    t57 = ((x253+x254)!=(x255!=x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    

    t58 = ((x257+x258)!=(x259!=x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x261 = 2123U;
	uint8_t x262 = 49U;
	int16_t x263 = 11696;
	static int8_t x264 = INT8_MIN;
	int32_t t59 = 15935;

    t59 = ((x261+x262)!=(x263!=x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x265 = 0;
	volatile int64_t x266 = INT64_MIN;
	int32_t x267 = 11669427;
	int32_t t60 = -1861140;

    t60 = ((x265+x266)!=(x267!=x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x269 = INT16_MIN;
	static volatile uint32_t x270 = 1504107U;
	uint8_t x271 = 1U;
	volatile uint8_t x272 = UINT8_MAX;
	volatile int32_t t61 = -3517136;

    t61 = ((x269+x270)!=(x271!=x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x273 = 0;
	volatile int64_t x274 = 0LL;
	int8_t x275 = -41;
	int8_t x276 = INT8_MIN;
	static int32_t t62 = 19;

    t62 = ((x273+x274)!=(x275!=x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x278 = 13U;
	int64_t x279 = -1447923465LL;
	int32_t t63 = 1;

    t63 = ((x277+x278)!=(x279!=x280));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MAX;
	int32_t x284 = -1;
	volatile int32_t t64 = 1766926;

    t64 = ((x281+x282)!=(x283!=x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	int8_t x286 = -1;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MAX;
	static int32_t t65 = -1;

    t65 = ((x285+x286)!=(x287!=x288));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x289 = 70U;
	volatile int16_t x290 = INT16_MAX;
	int8_t x292 = 0;
	static int32_t t66 = 11666;

    t66 = ((x289+x290)!=(x291!=x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = 232;
	static int64_t x294 = INT64_MIN;
	uint32_t x295 = 27U;
	uint8_t x296 = 21U;
	int32_t t67 = -1274;

    t67 = ((x293+x294)!=(x295!=x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x297 = -1LL;
	uint8_t x298 = 61U;
	int16_t x299 = INT16_MIN;
	volatile int64_t x300 = INT64_MIN;
	int32_t t68 = 250;

    t68 = ((x297+x298)!=(x299!=x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x301 = 55;
	int32_t x303 = INT32_MAX;
	static int16_t x304 = 1813;
	volatile int32_t t69 = -22476759;

    t69 = ((x301+x302)!=(x303!=x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x306 = 3U;
	int32_t x308 = 7;
	volatile int32_t t70 = 0;

    t70 = ((x305+x306)!=(x307!=x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x309 = UINT32_MAX;
	int8_t x310 = 18;
	int64_t x311 = -1LL;
	volatile int32_t t71 = 1;

    t71 = ((x309+x310)!=(x311!=x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x313 = INT64_MAX;
	volatile uint16_t x316 = 3464U;

    t72 = ((x313+x314)!=(x315!=x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x317 = UINT32_MAX;
	int16_t x318 = 26;
	int32_t x319 = INT32_MAX;
	volatile int64_t x320 = INT64_MIN;
	int32_t t73 = 33337;

    t73 = ((x317+x318)!=(x319!=x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x321 = 28U;
	static uint16_t x322 = 4U;
	int64_t x323 = INT64_MIN;
	uint16_t x324 = 354U;
	int32_t t74 = -10383128;

    t74 = ((x321+x322)!=(x323!=x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x325 = 1U;
	uint32_t x326 = UINT32_MAX;
	static int16_t x327 = -1;
	static int64_t x328 = -1LL;

    t75 = ((x325+x326)!=(x327!=x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	static int16_t x331 = -1;
	uint32_t x332 = 1192U;
	static volatile int32_t t76 = 1367;

    t76 = ((x329+x330)!=(x331!=x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x333 = 78U;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	int32_t t77 = 0;

    t77 = ((x333+x334)!=(x335!=x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x338 = INT64_MIN;
	int16_t x339 = -7956;

    t78 = ((x337+x338)!=(x339!=x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x341 = 58U;
	volatile uint16_t x342 = 5215U;
	int8_t x343 = -1;
	int64_t x344 = 6943237251LL;

    t79 = ((x341+x342)!=(x343!=x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x347 = INT32_MIN;
	static volatile int32_t t80 = 1;

    t80 = ((x345+x346)!=(x347!=x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x349 = -6;
	int32_t x350 = 269944;
	int16_t x352 = 33;
	volatile int32_t t81 = 16;

    t81 = ((x349+x350)!=(x351!=x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x353 = 52U;
	int64_t x355 = -1LL;
	uint8_t x356 = 0U;
	static volatile int32_t t82 = 234594791;

    t82 = ((x353+x354)!=(x355!=x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x357 = 2593983140LLU;
	static int64_t x358 = -2258910659221LL;
	int32_t x359 = INT32_MAX;
	uint16_t x360 = 0U;
	int32_t t83 = 747413216;

    t83 = ((x357+x358)!=(x359!=x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MAX;

    t84 = ((x361+x362)!=(x363!=x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x365 = -1519;
	int32_t x366 = INT32_MAX;
	volatile uint32_t x367 = 6U;
	static int8_t x368 = -1;
	volatile int32_t t85 = -227123;

    t85 = ((x365+x366)!=(x367!=x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x369 = INT32_MIN;
	uint16_t x370 = 125U;
	int64_t x372 = -1LL;

    t86 = ((x369+x370)!=(x371!=x372));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = 1;
	volatile int64_t x374 = INT64_MIN;
	volatile int8_t x375 = 1;
	static volatile int16_t x376 = 3655;
	int32_t t87 = 424;

    t87 = ((x373+x374)!=(x375!=x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x377 = 2985695988LLU;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MAX;
	volatile int32_t t88 = 60133;

    t88 = ((x377+x378)!=(x379!=x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x381 = INT64_MIN;
	uint64_t x382 = 10714792968LLU;
	int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t89 = -8;

    t89 = ((x381+x382)!=(x383!=x384));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x385 = 1;
	int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 1LLU;
	volatile int32_t t90 = -207284777;

    t90 = ((x385+x386)!=(x387!=x388));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x389 = 8460706222LL;
	volatile int16_t x390 = -30;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = -1;

    t91 = ((x389+x390)!=(x391!=x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = 23131903;
	uint32_t x398 = 1448U;
	int32_t t92 = 7571366;

    t92 = ((x397+x398)!=(x399!=x400));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x402 = INT16_MAX;
	int8_t x403 = -1;
	int16_t x404 = -1;
	volatile int32_t t93 = -327;

    t93 = ((x401+x402)!=(x403!=x404));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int32_t x407 = 123;
	static volatile int32_t t94 = -9;

    t94 = ((x405+x406)!=(x407!=x408));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x409 = 54952573213LL;
	volatile int8_t x410 = INT8_MIN;
	static volatile int8_t x411 = 4;
	int32_t t95 = -2;

    t95 = ((x409+x410)!=(x411!=x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x413 = 685347031LL;
	uint16_t x415 = 13985U;
	uint32_t x416 = 74091U;
	int32_t t96 = 15;

    t96 = ((x413+x414)!=(x415!=x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x417 = -1;
	int32_t x418 = -26875461;
	volatile uint16_t x419 = 177U;
	int64_t x420 = -1LL;
	int32_t t97 = -262;

    t97 = ((x417+x418)!=(x419!=x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x421 = INT64_MIN;
	uint32_t x422 = 5548658U;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MIN;
	volatile int32_t t98 = -2;

    t98 = ((x421+x422)!=(x423!=x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x426 = 1777008U;
	volatile uint8_t x428 = 1U;
	int32_t t99 = 10079;

    t99 = ((x425+x426)!=(x427!=x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = INT16_MAX;
	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = UINT8_MAX;
	static volatile int32_t t100 = 1;

    t100 = ((x429+x430)!=(x431!=x432));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x433 = -1LL;
	int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MAX;
	static uint8_t x436 = 17U;
	int32_t t101 = 191841054;

    t101 = ((x433+x434)!=(x435!=x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x437 = INT64_MAX;
	int32_t x438 = -1;
	static int8_t x439 = INT8_MIN;

    t102 = ((x437+x438)!=(x439!=x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x441 = 826308U;
	uint16_t x442 = 28U;
	volatile uint64_t x443 = 251654024978361233LLU;
	uint16_t x444 = UINT16_MAX;
	int32_t t103 = -105;

    t103 = ((x441+x442)!=(x443!=x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x445 = -1;
	static int8_t x446 = -2;
	int64_t x447 = -143558421353LL;
	int64_t x448 = -31409736725941888LL;

    t104 = ((x445+x446)!=(x447!=x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = INT16_MIN;
	static uint64_t x450 = UINT64_MAX;
	uint32_t x451 = 6U;
	volatile int32_t t105 = 58620781;

    t105 = ((x449+x450)!=(x451!=x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x454 = INT32_MIN;
	volatile int32_t x455 = INT32_MIN;
	uint16_t x456 = 2U;
	volatile int32_t t106 = 155;

    t106 = ((x453+x454)!=(x455!=x456));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x457 = INT64_MIN;
	static uint64_t x458 = UINT64_MAX;
	volatile int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MAX;

    t107 = ((x457+x458)!=(x459!=x460));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x461 = 64U;
	int8_t x462 = INT8_MIN;
	int8_t x464 = -1;
	int32_t t108 = -128469;

    t108 = ((x461+x462)!=(x463!=x464));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x465 = UINT8_MAX;
	volatile uint32_t x466 = UINT32_MAX;
	static volatile int32_t x467 = 0;
	int32_t x468 = -29;

    t109 = ((x465+x466)!=(x467!=x468));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x470 = UINT64_MAX;
	int16_t x472 = -1;

    t110 = ((x469+x470)!=(x471!=x472));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x475 = 71665069001117LL;
	static int64_t x476 = -1LL;
	static volatile int32_t t111 = -275093582;

    t111 = ((x473+x474)!=(x475!=x476));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t t112 = -506;

    t112 = ((x477+x478)!=(x479!=x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x481 = UINT32_MAX;
	static int8_t x482 = -12;
	int32_t x483 = 886;
	static int32_t t113 = 0;

    t113 = ((x481+x482)!=(x483!=x484));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MAX;
	volatile uint64_t x488 = UINT64_MAX;
	volatile int32_t t114 = -13194;

    t114 = ((x485+x486)!=(x487!=x488));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x490 = -1LL;
	volatile int32_t x491 = INT32_MIN;
	uint8_t x492 = 1U;
	volatile int32_t t115 = -99446;

    t115 = ((x489+x490)!=(x491!=x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x493 = 5286807042LLU;
	uint32_t x494 = 485U;
	int8_t x495 = -2;
	volatile uint8_t x496 = 2U;

    t116 = ((x493+x494)!=(x495!=x496));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x497 = 132U;
	int64_t x498 = INT64_MIN;
	volatile int8_t x499 = 1;
	static volatile int32_t t117 = 1;

    t117 = ((x497+x498)!=(x499!=x500));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x505 = 1;
	uint16_t x506 = UINT16_MAX;
	uint64_t x507 = UINT64_MAX;
	int64_t x508 = INT64_MIN;

    t118 = ((x505+x506)!=(x507!=x508));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x509 = -1;
	int32_t x511 = INT32_MIN;
	int32_t t119 = -416;

    t119 = ((x509+x510)!=(x511!=x512));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x513 = UINT32_MAX;
	int8_t x515 = -1;
	int64_t x516 = INT64_MIN;

    t120 = ((x513+x514)!=(x515!=x516));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x517 = 7964413U;
	int16_t x518 = -2499;
	int16_t x519 = -1;
	static volatile int32_t t121 = -1;

    t121 = ((x517+x518)!=(x519!=x520));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x521 = -414;
	volatile uint64_t x522 = 1264938017244LLU;
	int16_t x523 = 175;
	int8_t x524 = -1;
	volatile int32_t t122 = -15186;

    t122 = ((x521+x522)!=(x523!=x524));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x525 = INT32_MIN;
	static volatile uint8_t x526 = UINT8_MAX;
	uint32_t x527 = 84U;
	volatile int32_t t123 = 115167;

    t123 = ((x525+x526)!=(x527!=x528));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x529 = 11U;
	int64_t x530 = INT64_MIN;
	static uint32_t x531 = 246553683U;

    t124 = ((x529+x530)!=(x531!=x532));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x534 = 430LL;
	int8_t x536 = -1;

    t125 = ((x533+x534)!=(x535!=x536));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x539 = INT16_MAX;

    t126 = ((x537+x538)!=(x539!=x540));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x541 = INT64_MIN;
	static uint8_t x542 = 2U;
	int8_t x543 = 50;
	volatile int8_t x544 = -1;
	volatile int32_t t127 = -887;

    t127 = ((x541+x542)!=(x543!=x544));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x546 = 1487982U;
	static uint32_t x548 = UINT32_MAX;

    t128 = ((x545+x546)!=(x547!=x548));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x550 = UINT16_MAX;
	uint32_t x551 = 6348U;
	int16_t x552 = 121;
	static int32_t t129 = 59622;

    t129 = ((x549+x550)!=(x551!=x552));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x558 = 6;
	static uint64_t x559 = 17016LLU;
	static uint32_t x560 = 422769094U;
	static volatile int32_t t130 = 296;

    t130 = ((x557+x558)!=(x559!=x560));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x561 = 33757998769707485LLU;
	volatile int32_t x562 = 0;
	uint32_t x563 = 1494U;
	volatile int16_t x564 = INT16_MIN;
	int32_t t131 = 24;

    t131 = ((x561+x562)!=(x563!=x564));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x565 = INT16_MIN;
	uint64_t x566 = 72797339344LLU;
	int32_t x567 = INT32_MIN;
	int32_t x568 = INT32_MIN;

    t132 = ((x565+x566)!=(x567!=x568));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x569 = INT16_MIN;
	uint8_t x570 = 7U;
	int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MIN;
	volatile int32_t t133 = -1975888;

    t133 = ((x569+x570)!=(x571!=x572));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x573 = UINT8_MAX;
	int64_t x574 = 2774413472LL;
	static int16_t x575 = 6477;
	uint16_t x576 = 1U;
	int32_t t134 = -60131506;

    t134 = ((x573+x574)!=(x575!=x576));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x578 = -59631;
	uint32_t x580 = 256664584U;
	volatile int32_t t135 = 22;

    t135 = ((x577+x578)!=(x579!=x580));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x581 = -10LL;
	int16_t x582 = -1;
	static uint64_t x583 = 380984263545316753LLU;
	int32_t t136 = -9624;

    t136 = ((x581+x582)!=(x583!=x584));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x585 = -5086890888415300LL;
	uint32_t x586 = UINT32_MAX;
	volatile uint64_t x587 = 1546LLU;
	int32_t t137 = -252;

    t137 = ((x585+x586)!=(x587!=x588));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x589 = 1017869932;
	static uint8_t x590 = 37U;
	int8_t x591 = -1;
	volatile int32_t x592 = 4808866;
	int32_t t138 = -42012888;

    t138 = ((x589+x590)!=(x591!=x592));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x594 = INT16_MIN;
	int8_t x595 = INT8_MIN;
	static uint16_t x596 = 1U;
	int32_t t139 = -20469;

    t139 = ((x593+x594)!=(x595!=x596));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x598 = -1LL;
	uint16_t x600 = UINT16_MAX;

    t140 = ((x597+x598)!=(x599!=x600));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x602 = -1LL;
	uint32_t x604 = UINT32_MAX;
	volatile int32_t t141 = -11122;

    t141 = ((x601+x602)!=(x603!=x604));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x605 = 25505973U;
	int64_t x607 = INT64_MIN;
	uint32_t x608 = UINT32_MAX;
	int32_t t142 = -1;

    t142 = ((x605+x606)!=(x607!=x608));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x609 = UINT32_MAX;
	static int64_t x610 = -56156871523949029LL;
	int32_t x611 = INT32_MIN;
	uint8_t x612 = 13U;
	volatile int32_t t143 = -396883687;

    t143 = ((x609+x610)!=(x611!=x612));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x613 = 59U;
	volatile uint32_t x614 = UINT32_MAX;
	uint64_t x615 = 0LLU;
	static volatile int64_t x616 = INT64_MAX;

    t144 = ((x613+x614)!=(x615!=x616));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x617 = 1;
	volatile uint16_t x618 = 5998U;
	uint8_t x619 = 1U;
	int8_t x620 = -1;
	volatile int32_t t145 = -4491;

    t145 = ((x617+x618)!=(x619!=x620));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	int16_t x622 = -1;
	int16_t x623 = 1;
	volatile int32_t t146 = -9127169;

    t146 = ((x621+x622)!=(x623!=x624));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x626 = 696972954283642725LLU;
	static int8_t x627 = INT8_MAX;
	static int32_t x628 = INT32_MIN;
	int32_t t147 = -1;

    t147 = ((x625+x626)!=(x627!=x628));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x629 = 5;
	int8_t x630 = 52;
	volatile int8_t x631 = INT8_MAX;
	int32_t t148 = -58798800;

    t148 = ((x629+x630)!=(x631!=x632));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x641 = 1974;
	int8_t x642 = -1;
	int8_t x643 = 36;
	volatile uint8_t x644 = 2U;
	volatile int32_t t149 = -5290;

    t149 = ((x641+x642)!=(x643!=x644));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x645 = UINT8_MAX;
	volatile uint8_t x647 = 0U;
	int16_t x648 = 5294;
	int32_t t150 = -24535706;

    t150 = ((x645+x646)!=(x647!=x648));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x649 = INT8_MAX;
	int16_t x650 = 1968;
	int64_t x651 = INT64_MIN;
	int32_t x652 = -1;

    t151 = ((x649+x650)!=(x651!=x652));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x653 = UINT16_MAX;
	int32_t x654 = -1;
	int16_t x655 = 121;
	int16_t x656 = INT16_MAX;
	volatile int32_t t152 = -355154;

    t152 = ((x653+x654)!=(x655!=x656));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x657 = 807192888689LL;
	uint32_t x658 = 5025053U;
	uint32_t x659 = 131U;
	uint8_t x660 = 7U;

    t153 = ((x657+x658)!=(x659!=x660));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x661 = UINT64_MAX;
	int32_t x663 = INT32_MAX;
	int16_t x664 = -929;

    t154 = ((x661+x662)!=(x663!=x664));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x669 = -4065845268849523LL;
	static uint64_t x670 = UINT64_MAX;
	int32_t x671 = INT32_MIN;
	volatile int32_t x672 = 2;

    t155 = ((x669+x670)!=(x671!=x672));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x673 = INT16_MIN;
	static int16_t x674 = 13;
	int32_t x675 = INT32_MIN;
	static uint64_t x676 = 14053175041754LLU;
	int32_t t156 = -1;

    t156 = ((x673+x674)!=(x675!=x676));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x677 = 1914LLU;
	volatile int8_t x678 = INT8_MIN;
	static int16_t x679 = INT16_MIN;
	int64_t x680 = 1002336LL;
	static int32_t t157 = 226;

    t157 = ((x677+x678)!=(x679!=x680));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x681 = INT16_MIN;
	static int8_t x682 = 3;
	int32_t x683 = -1443;
	int32_t x684 = INT32_MIN;

    t158 = ((x681+x682)!=(x683!=x684));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x689 = UINT8_MAX;
	uint8_t x690 = 1U;
	int32_t x691 = -12;
	uint64_t x692 = 1459229424506235LLU;
	volatile int32_t t159 = 17;

    t159 = ((x689+x690)!=(x691!=x692));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x693 = UINT32_MAX;
	int32_t x694 = INT32_MAX;
	int32_t x696 = -198971179;

    t160 = ((x693+x694)!=(x695!=x696));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x697 = INT8_MIN;
	static int32_t x698 = INT32_MAX;
	static uint32_t x700 = 2804U;
	int32_t t161 = 1;

    t161 = ((x697+x698)!=(x699!=x700));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x702 = 0U;
	static uint32_t x703 = 271U;
	static int8_t x704 = INT8_MIN;
	volatile int32_t t162 = -16490334;

    t162 = ((x701+x702)!=(x703!=x704));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x705 = 86U;
	volatile uint64_t x706 = 563191156LLU;
	static int8_t x707 = INT8_MAX;
	int32_t t163 = 45999929;

    t163 = ((x705+x706)!=(x707!=x708));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x709 = -1;
	uint8_t x710 = 0U;
	int64_t x711 = 135144574512908LL;
	volatile int16_t x712 = INT16_MIN;

    t164 = ((x709+x710)!=(x711!=x712));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x713 = 0U;
	int64_t x714 = 38LL;
	int16_t x715 = INT16_MIN;
	static int16_t x716 = 108;
	int32_t t165 = -2421357;

    t165 = ((x713+x714)!=(x715!=x716));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x717 = -76LL;
	int16_t x718 = 936;
	int64_t x720 = -8600460533145LL;
	int32_t t166 = -101734;

    t166 = ((x717+x718)!=(x719!=x720));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x722 = -1;
	uint16_t x723 = 354U;
	volatile uint8_t x724 = 2U;
	volatile int32_t t167 = -51;

    t167 = ((x721+x722)!=(x723!=x724));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x725 = 23U;
	uint32_t x726 = UINT32_MAX;
	uint64_t x727 = UINT64_MAX;
	int16_t x728 = INT16_MIN;
	static volatile int32_t t168 = -10374;

    t168 = ((x725+x726)!=(x727!=x728));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x729 = INT8_MAX;
	int16_t x730 = 5;
	int32_t x731 = -3952103;
	uint16_t x732 = 1300U;
	volatile int32_t t169 = -8344338;

    t169 = ((x729+x730)!=(x731!=x732));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x733 = 226U;
	volatile int8_t x734 = 36;
	uint64_t x736 = 36360LLU;
	volatile int32_t t170 = 1;

    t170 = ((x733+x734)!=(x735!=x736));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x737 = 11U;
	volatile int16_t x738 = 664;
	int16_t x740 = INT16_MIN;
	int32_t t171 = 12;

    t171 = ((x737+x738)!=(x739!=x740));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x741 = -3920;
	volatile uint16_t x743 = 46U;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t172 = -27;

    t172 = ((x741+x742)!=(x743!=x744));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x749 = 61854685183230130LL;
	int16_t x750 = INT16_MAX;
	int16_t x751 = 3;
	static int64_t x752 = -1LL;

    t173 = ((x749+x750)!=(x751!=x752));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x754 = -1LL;
	uint8_t x755 = 0U;
	int16_t x756 = INT16_MIN;

    t174 = ((x753+x754)!=(x755!=x756));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x757 = -1;
	int16_t x760 = INT16_MIN;
	static volatile int32_t t175 = 11988040;

    t175 = ((x757+x758)!=(x759!=x760));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x761 = 2496U;
	int8_t x762 = 0;
	int16_t x763 = INT16_MIN;
	volatile int16_t x764 = -1;

    t176 = ((x761+x762)!=(x763!=x764));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x765 = 13190498U;
	int32_t x766 = -1;
	uint64_t x767 = 5650LLU;
	volatile int32_t t177 = -805;

    t177 = ((x765+x766)!=(x767!=x768));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x769 = UINT32_MAX;
	static volatile uint8_t x770 = 2U;
	uint32_t x771 = 422436U;
	int8_t x772 = INT8_MAX;
	int32_t t178 = 27894916;

    t178 = ((x769+x770)!=(x771!=x772));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x773 = INT16_MAX;
	int32_t x774 = -127786663;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t179 = -23150637;

    t179 = ((x773+x774)!=(x775!=x776));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x777 = INT64_MAX;
	static int32_t x778 = -264257000;
	uint16_t x779 = 17453U;
	int32_t x780 = INT32_MIN;
	int32_t t180 = -4502056;

    t180 = ((x777+x778)!=(x779!=x780));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x781 = 95;
	volatile int32_t x782 = -39;
	int16_t x783 = -710;
	volatile int8_t x784 = -1;
	volatile int32_t t181 = 30;

    t181 = ((x781+x782)!=(x783!=x784));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x785 = INT8_MIN;
	uint8_t x786 = 7U;
	int16_t x787 = -1;
	volatile int32_t t182 = 2694;

    t182 = ((x785+x786)!=(x787!=x788));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x789 = -39;
	volatile uint8_t x790 = 8U;
	int64_t x791 = -6209822740051677LL;
	int8_t x792 = INT8_MAX;
	int32_t t183 = -9662419;

    t183 = ((x789+x790)!=(x791!=x792));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x793 = INT16_MIN;
	int32_t x794 = INT32_MAX;
	int32_t t184 = -23068;

    t184 = ((x793+x794)!=(x795!=x796));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x797 = INT32_MAX;
	int16_t x798 = -1;
	int32_t x799 = INT32_MAX;
	static int64_t x800 = INT64_MIN;
	static int32_t t185 = 1;

    t185 = ((x797+x798)!=(x799!=x800));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x805 = INT16_MIN;
	int8_t x806 = INT8_MIN;
	int64_t x807 = INT64_MAX;
	int64_t x808 = -14057979934902398LL;
	volatile int32_t t186 = 56017576;

    t186 = ((x805+x806)!=(x807!=x808));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x813 = -1;
	int32_t x814 = -1;
	volatile int32_t t187 = 41038;

    t187 = ((x813+x814)!=(x815!=x816));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x817 = -1LL;
	uint64_t x818 = 1050844167181603994LLU;
	static int8_t x819 = INT8_MIN;
	static uint32_t x820 = UINT32_MAX;
	int32_t t188 = 27995;

    t188 = ((x817+x818)!=(x819!=x820));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x821 = 30U;
	static int16_t x822 = 8168;
	int64_t x823 = INT64_MIN;
	volatile int32_t t189 = 330;

    t189 = ((x821+x822)!=(x823!=x824));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x825 = 372U;
	int16_t x826 = 0;
	static uint16_t x827 = 93U;

    t190 = ((x825+x826)!=(x827!=x828));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x829 = INT8_MAX;
	volatile int32_t x832 = INT32_MIN;
	int32_t t191 = -295;

    t191 = ((x829+x830)!=(x831!=x832));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x836 = INT16_MAX;

    t192 = ((x833+x834)!=(x835!=x836));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x837 = INT64_MIN;
	static uint16_t x838 = 16306U;
	int16_t x840 = -1;
	int32_t t193 = 183;

    t193 = ((x837+x838)!=(x839!=x840));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x847 = INT16_MAX;
	static int32_t t194 = -4705297;

    t194 = ((x845+x846)!=(x847!=x848));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x849 = -1;
	static uint64_t x850 = UINT64_MAX;
	static volatile int32_t x851 = 35862;
	uint16_t x852 = 29U;
	volatile int32_t t195 = -3275004;

    t195 = ((x849+x850)!=(x851!=x852));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x853 = 37294220460098547LLU;
	volatile int8_t x854 = -1;
	int32_t x855 = -1;
	volatile int32_t t196 = -1;

    t196 = ((x853+x854)!=(x855!=x856));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x857 = 3U;
	int16_t x858 = 543;

    t197 = ((x857+x858)!=(x859!=x860));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x861 = -1;
	uint16_t x862 = 12U;
	int16_t x863 = 1;
	static volatile uint64_t x864 = 376127854LLU;

    t198 = ((x861+x862)!=(x863!=x864));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x866 = UINT32_MAX;
	int64_t x867 = -1LL;
	int32_t x868 = -25663;
	volatile int32_t t199 = 287001558;

    t199 = ((x865+x866)!=(x867!=x868));

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

