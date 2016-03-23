
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

int16_t x10 = -76;
uint16_t x14 = 29U;
static int8_t x15 = 3;
int32_t x16 = INT32_MIN;
int32_t x17 = -437;
int64_t x28 = 1606537597127275328LL;
int8_t x38 = -3;
uint16_t x39 = UINT16_MAX;
int32_t x55 = -1;
volatile int32_t t7 = 55176;
int16_t x68 = INT16_MIN;
uint16_t x71 = 17941U;
int32_t t10 = 1;
uint32_t x83 = 2358U;
volatile uint64_t x85 = 490LLU;
int32_t x95 = INT32_MAX;
volatile int32_t t13 = 7834181;
static int64_t x104 = INT64_MIN;
int32_t t14 = 1;
static volatile uint8_t x107 = UINT8_MAX;
int32_t x108 = INT32_MAX;
int8_t x121 = -1;
volatile uint64_t x122 = UINT64_MAX;
uint32_t x123 = 1668U;
static int64_t x163 = -1LL;
uint8_t x167 = UINT8_MAX;
uint8_t x187 = 1U;
uint32_t x192 = 2330700U;
int32_t x196 = -63;
uint32_t x199 = 1496477U;
volatile uint8_t x203 = UINT8_MAX;
static volatile int32_t x204 = INT32_MIN;
static int32_t x208 = INT32_MAX;
uint64_t x214 = 6492063629LLU;
int32_t x222 = -7;
int32_t t31 = 58;
int32_t x225 = INT32_MAX;
uint8_t x226 = 0U;
int16_t x227 = INT16_MAX;
static int8_t x238 = INT8_MIN;
int16_t x247 = INT16_MAX;
static uint32_t x265 = 1962084886U;
uint32_t x269 = 14U;
int32_t t36 = -27;
int8_t x277 = -1;
int16_t x278 = INT16_MIN;
volatile uint8_t x297 = 52U;
int64_t x298 = INT64_MIN;
volatile int32_t t39 = -2335849;
int32_t x305 = INT32_MIN;
volatile uint32_t x308 = UINT32_MAX;
static uint8_t x311 = 0U;
int16_t x312 = 53;
int8_t x318 = INT8_MIN;
volatile uint32_t x323 = 1114U;
static uint8_t x339 = UINT8_MAX;
int32_t x341 = INT32_MIN;
volatile int64_t x358 = INT64_MIN;
volatile int8_t x365 = INT8_MIN;
static uint64_t x380 = 15815448LLU;
static volatile int32_t t51 = 15461;
volatile int64_t x381 = -6621954456733LL;
static uint64_t x382 = UINT64_MAX;
static int64_t x384 = INT64_MAX;
int8_t x388 = 4;
volatile int32_t t53 = -50077;
static int32_t x393 = INT32_MIN;
volatile int32_t x395 = -12763004;
uint16_t x408 = UINT16_MAX;
int16_t x416 = INT16_MIN;
volatile uint8_t x423 = 10U;
uint16_t x431 = 12U;
int32_t t62 = 281693;
static uint8_t x461 = UINT8_MAX;
int8_t x464 = 2;
volatile int32_t t63 = 961389982;
static uint64_t x483 = 3022LLU;
int64_t x485 = -404LL;
uint8_t x490 = 8U;
volatile int32_t t68 = -62;
int16_t x502 = INT16_MIN;
int64_t x518 = -63064968LL;
volatile uint32_t x546 = 55052870U;
volatile int8_t x553 = INT8_MIN;
static uint64_t x554 = 818935387135544LLU;
uint32_t x559 = 0U;
int64_t x560 = INT64_MAX;
int8_t x571 = INT8_MAX;
int32_t t82 = -336261586;
uint64_t x593 = 482389314773LLU;
int32_t x594 = -2;
volatile int32_t t83 = -121687855;
volatile int32_t t85 = 224858691;
volatile int8_t x609 = -1;
uint16_t x617 = 83U;
volatile uint8_t x621 = 3U;
int32_t x625 = INT32_MIN;
uint8_t x635 = UINT8_MAX;
int32_t x645 = -266987572;
uint16_t x654 = UINT16_MAX;
volatile int32_t t96 = 165453;
int32_t t98 = 3;
uint32_t x679 = 3U;
uint8_t x680 = 2U;
static uint8_t x692 = 3U;
int64_t x701 = INT64_MAX;
volatile int32_t t102 = 8321;
int64_t x717 = INT64_MIN;
uint32_t x719 = 703U;
volatile int64_t x736 = INT64_MAX;
int8_t x737 = INT8_MAX;
volatile int32_t t107 = -794245987;
uint32_t x747 = 15105U;
volatile int8_t x748 = -1;
volatile int32_t t108 = -7;
volatile int32_t x749 = INT32_MIN;
volatile uint16_t x752 = 2676U;
volatile int32_t t109 = 17420;
static int32_t x754 = 462372;
int8_t x760 = -1;
int64_t x784 = INT64_MAX;
int8_t x787 = INT8_MAX;
int64_t x788 = -75850LL;
int8_t x791 = INT8_MIN;
int16_t x793 = INT16_MIN;
int8_t x795 = 0;
int16_t x796 = 97;
int32_t x797 = INT32_MAX;
int64_t x798 = INT64_MIN;
uint8_t x801 = UINT8_MAX;
uint16_t x809 = 106U;
uint64_t x813 = UINT64_MAX;
int16_t x814 = 3;
int64_t x816 = 467125LL;
int16_t x824 = INT16_MAX;
uint16_t x825 = UINT16_MAX;
int32_t x846 = INT32_MIN;
int8_t x848 = INT8_MIN;
volatile int32_t t124 = 4606;
int32_t x853 = INT32_MIN;
uint64_t x865 = 5LLU;
uint8_t x867 = 0U;
static volatile int8_t x878 = -31;
int64_t x892 = INT64_MIN;
int32_t t130 = -4;
int32_t x895 = INT32_MIN;
volatile uint64_t x896 = UINT64_MAX;
volatile int32_t t134 = 33411;
volatile int8_t x916 = 56;
static volatile int32_t t135 = -1115792;
uint32_t x919 = 15097U;
uint64_t x922 = 389285770898LLU;
static int8_t x926 = INT8_MAX;
volatile int32_t t140 = 1;
uint32_t x954 = UINT32_MAX;
int32_t t141 = -65881597;
int64_t x964 = INT64_MIN;
static int8_t x967 = 0;
int16_t x969 = INT16_MIN;
uint32_t x976 = UINT32_MAX;
int64_t x977 = INT64_MIN;
uint16_t x987 = 1358U;
volatile int32_t t147 = 474;
int32_t x1012 = INT32_MIN;
int32_t x1024 = INT32_MIN;
int32_t x1025 = INT32_MIN;
int64_t x1027 = 7LL;
int32_t t151 = -7554295;
int32_t x1038 = -1;
int16_t x1047 = INT16_MIN;
int32_t x1051 = -476;
int64_t x1088 = INT64_MIN;
uint64_t x1122 = UINT64_MAX;
int64_t x1134 = INT64_MIN;
static int64_t x1136 = INT64_MIN;
static int32_t t161 = 558;
volatile int8_t x1146 = INT8_MAX;
volatile int16_t x1147 = INT16_MIN;
int32_t x1148 = -2428157;
int16_t x1158 = -1;
volatile int32_t t164 = -103;
int32_t t166 = -68746;
int8_t x1197 = INT8_MAX;
volatile uint32_t x1218 = 4950U;
static volatile int32_t t171 = 128988;
uint16_t x1225 = UINT16_MAX;
int64_t x1226 = 189125334LL;
static volatile int64_t x1227 = INT64_MIN;
int32_t x1229 = -1;
int32_t x1243 = INT32_MIN;
static volatile int32_t t175 = 48303455;
static uint64_t x1262 = 1569LLU;
volatile uint16_t x1263 = 325U;
int64_t x1266 = INT64_MIN;
volatile int64_t x1289 = INT64_MAX;
static uint32_t x1292 = UINT32_MAX;
int32_t t181 = -4161;
int32_t x1332 = INT32_MIN;
int16_t x1354 = 9669;
volatile uint64_t x1357 = 326973LLU;
uint16_t x1359 = 21U;
int16_t x1378 = INT16_MIN;
int16_t x1380 = INT16_MIN;
volatile uint8_t x1381 = 0U;
int8_t x1382 = 18;
int64_t x1390 = INT64_MIN;
uint8_t x1397 = 108U;
int32_t x1403 = -1;
static int32_t x1407 = -1;
static int16_t x1408 = INT16_MIN;
int64_t x1416 = INT64_MAX;
uint16_t x1418 = 17U;
int32_t t198 = 162;


void f0(void) {
    	volatile uint8_t x5 = 93U;
	uint8_t x6 = UINT8_MAX;
	volatile int8_t x7 = -1;
	volatile uint8_t x8 = 6U;
	static int32_t t0 = 921902;

    t0 = ((x5!=x6)<<(x7/x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x11 = -1;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t1 = -4145;

    t1 = ((x9!=x10)<<(x11/x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x13 = INT64_MAX;
	volatile int32_t t2 = -2180;

    t2 = ((x13!=x14)<<(x15/x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = INT16_MIN;
	uint32_t x19 = 341U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t3 = 708;

    t3 = ((x17!=x18)<<(x19/x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 265;
	int64_t x22 = INT64_MIN;
	static int16_t x23 = 25;
	uint64_t x24 = 666239395LLU;
	volatile int32_t t4 = -1419598;

    t4 = ((x21!=x22)<<(x23/x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	static volatile int32_t x26 = 69;
	volatile int8_t x27 = 0;
	static volatile int32_t t5 = -487756220;

    t5 = ((x25!=x26)<<(x27/x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x37 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t6 = -86;

    t6 = ((x37!=x38)<<(x39/x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x53 = INT8_MIN;
	volatile int32_t x54 = INT32_MAX;
	int64_t x56 = INT64_MAX;

    t7 = ((x53!=x54)<<(x55/x56));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = 2653U;
	int8_t x59 = INT8_MIN;
	volatile int64_t x60 = -283191164330LL;
	int32_t t8 = 7688415;

    t8 = ((x57!=x58)<<(x59/x60));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x65 = 8;
	int32_t x66 = 51944990;
	uint64_t x67 = 7716366005LLU;
	int32_t t9 = 1110657;

    t9 = ((x65!=x66)<<(x67/x68));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x69 = INT32_MIN;
	volatile int16_t x70 = INT16_MIN;
	volatile int64_t x72 = -936616390LL;

    t10 = ((x69!=x70)<<(x71/x72));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x81 = UINT16_MAX;
	int32_t x82 = INT32_MAX;
	static int32_t x84 = -1;
	int32_t t11 = -926711014;

    t11 = ((x81!=x82)<<(x83/x84));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x86 = UINT64_MAX;
	int64_t x87 = -1LL;
	static uint32_t x88 = UINT32_MAX;
	volatile int32_t t12 = -72874400;

    t12 = ((x85!=x86)<<(x87/x88));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x93 = 423;
	uint32_t x94 = UINT32_MAX;
	int32_t x96 = INT32_MIN;

    t13 = ((x93!=x94)<<(x95/x96));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x101 = 4U;
	static int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;

    t14 = ((x101!=x102)<<(x103/x104));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x105 = INT16_MAX;
	uint32_t x106 = 1401U;
	volatile int32_t t15 = 662;

    t15 = ((x105!=x106)<<(x107/x108));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x124 = 425476325LLU;
	static int32_t t16 = -31144;

    t16 = ((x121!=x122)<<(x123/x124));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	static int64_t x128 = INT64_MAX;
	volatile int32_t t17 = -1;

    t17 = ((x125!=x126)<<(x127/x128));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x145 = 18343167U;
	static uint8_t x146 = 58U;
	static int16_t x147 = -78;
	uint16_t x148 = UINT16_MAX;
	int32_t t18 = 5005;

    t18 = ((x145!=x146)<<(x147/x148));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = 0U;
	int16_t x155 = -1473;
	volatile int64_t x156 = INT64_MIN;
	int32_t t19 = -494719;

    t19 = ((x153!=x154)<<(x155/x156));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x157 = 56U;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MIN;
	static volatile int64_t x160 = INT64_MIN;
	volatile int32_t t20 = -3733;

    t20 = ((x157!=x158)<<(x159/x160));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x161 = 5928780LLU;
	int16_t x162 = -1;
	int64_t x164 = INT64_MIN;
	static volatile int32_t t21 = -14599071;

    t21 = ((x161!=x162)<<(x163/x164));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x165 = -1;
	uint32_t x166 = 315U;
	static int64_t x168 = INT64_MIN;
	static volatile int32_t t22 = -19906735;

    t22 = ((x165!=x166)<<(x167/x168));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x173 = INT32_MAX;
	int32_t x174 = -811740827;
	volatile uint32_t x175 = 123U;
	uint32_t x176 = 568849240U;
	volatile int32_t t23 = -44333;

    t23 = ((x173!=x174)<<(x175/x176));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x185 = 124616896U;
	int64_t x186 = -23585103574705LL;
	uint16_t x188 = 3631U;
	int32_t t24 = 16331;

    t24 = ((x185!=x186)<<(x187/x188));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MAX;
	int32_t t25 = 19657395;

    t25 = ((x189!=x190)<<(x191/x192));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x193 = 296407277350LLU;
	int32_t x194 = 88;
	int16_t x195 = -596;
	static int32_t t26 = -5;

    t26 = ((x193!=x194)<<(x195/x196));

    if (t26 != 512) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x200 = INT64_MAX;
	int32_t t27 = 11133;

    t27 = ((x197!=x198)<<(x199/x200));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int32_t t28 = 7;

    t28 = ((x201!=x202)<<(x203/x204));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x205 = -1;
	static int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	volatile int32_t t29 = 979860;

    t29 = ((x205!=x206)<<(x207/x208));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x213 = -1;
	uint8_t x215 = 89U;
	static volatile uint8_t x216 = 5U;
	static int32_t t30 = -30985;

    t30 = ((x213!=x214)<<(x215/x216));

    if (t30 != 131072) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x223 = 5223U;
	uint64_t x224 = 444968958528410264LLU;

    t31 = ((x221!=x222)<<(x223/x224));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x228 = UINT64_MAX;
	volatile int32_t t32 = -61521;

    t32 = ((x225!=x226)<<(x227/x228));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x237 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t33 = -54703850;

    t33 = ((x237!=x238)<<(x239/x240));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x245 = INT8_MIN;
	volatile uint8_t x246 = 13U;
	int16_t x248 = INT16_MIN;
	int32_t t34 = -176862444;

    t34 = ((x245!=x246)<<(x247/x248));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int8_t x268 = INT8_MIN;
	static int32_t t35 = 355;

    t35 = ((x265!=x266)<<(x267/x268));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x270 = 0;
	static uint16_t x271 = 11U;
	static int16_t x272 = INT16_MAX;

    t36 = ((x269!=x270)<<(x271/x272));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x273 = INT64_MIN;
	static volatile int32_t x274 = -1;
	uint16_t x275 = 115U;
	static int64_t x276 = INT64_MAX;
	volatile int32_t t37 = 88620;

    t37 = ((x273!=x274)<<(x275/x276));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x279 = -1;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t38 = 479412782;

    t38 = ((x277!=x278)<<(x279/x280));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x299 = -1;
	uint64_t x300 = UINT64_MAX;

    t39 = ((x297!=x298)<<(x299/x300));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x306 = INT8_MIN;
	int32_t x307 = -253338611;
	int32_t t40 = 5778;

    t40 = ((x305!=x306)<<(x307/x308));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x309 = 16;
	static int16_t x310 = -1;
	volatile int32_t t41 = 171412;

    t41 = ((x309!=x310)<<(x311/x312));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x317 = 80U;
	int8_t x319 = INT8_MAX;
	uint16_t x320 = 196U;
	int32_t t42 = 207211;

    t42 = ((x317!=x318)<<(x319/x320));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x321 = 2968581554594LLU;
	static int64_t x322 = INT64_MIN;
	uint32_t x324 = 76139U;
	volatile int32_t t43 = -81525;

    t43 = ((x321!=x322)<<(x323/x324));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x329 = UINT32_MAX;
	static volatile int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MAX;
	int32_t t44 = -281;

    t44 = ((x329!=x330)<<(x331/x332));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x337 = 2372;
	int16_t x338 = 14615;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t45 = -241;

    t45 = ((x337!=x338)<<(x339/x340));

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x342 = -1LL;
	int32_t x343 = INT32_MIN;
	volatile int32_t x344 = INT32_MIN;
	int32_t t46 = 1392;

    t46 = ((x341!=x342)<<(x343/x344));

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = 7984U;
	volatile uint64_t x352 = 2542LLU;
	static volatile int32_t t47 = -57230257;

    t47 = ((x349!=x350)<<(x351/x352));

    if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x357 = INT32_MIN;
	uint16_t x359 = 0U;
	static uint16_t x360 = 75U;
	int32_t t48 = -26;

    t48 = ((x357!=x358)<<(x359/x360));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x366 = 1U;
	static uint16_t x367 = UINT16_MAX;
	int32_t x368 = 27902;
	int32_t t49 = 1;

    t49 = ((x365!=x366)<<(x367/x368));

    if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x373 = 6U;
	uint16_t x374 = 1221U;
	static int8_t x375 = 1;
	int64_t x376 = -23545827LL;
	int32_t t50 = -245;

    t50 = ((x373!=x374)<<(x375/x376));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x377 = 19849U;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 9U;

    t51 = ((x377!=x378)<<(x379/x380));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x383 = INT32_MIN;
	int32_t t52 = -93678;

    t52 = ((x381!=x382)<<(x383/x384));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x385 = -1;
	int64_t x386 = INT64_MIN;
	uint32_t x387 = 12U;

    t53 = ((x385!=x386)<<(x387/x388));

    if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x394 = -1LL;
	int32_t x396 = INT32_MAX;
	static volatile int32_t t54 = -1705171;

    t54 = ((x393!=x394)<<(x395/x396));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x397 = 506199;
	int32_t x398 = -10537751;
	int16_t x399 = 4;
	int32_t x400 = 321;
	int32_t t55 = 7;

    t55 = ((x397!=x398)<<(x399/x400));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x405 = 52883LLU;
	static uint64_t x406 = 131175213097LLU;
	int16_t x407 = -1;
	volatile int32_t t56 = -48219920;

    t56 = ((x405!=x406)<<(x407/x408));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x413 = 5595797LL;
	uint64_t x414 = 336865768157LLU;
	static volatile uint64_t x415 = 584LLU;
	static volatile int32_t t57 = 34;

    t57 = ((x413!=x414)<<(x415/x416));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x421 = -1;
	volatile uint32_t x422 = UINT32_MAX;
	int64_t x424 = INT64_MAX;
	volatile int32_t t58 = 0;

    t58 = ((x421!=x422)<<(x423/x424));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x429 = 4169751319711LLU;
	uint64_t x430 = 401LLU;
	int64_t x432 = -1114297511LL;
	volatile int32_t t59 = 19;

    t59 = ((x429!=x430)<<(x431/x432));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x433 = UINT64_MAX;
	int64_t x434 = -1LL;
	uint64_t x435 = UINT64_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t60 = -21714276;

    t60 = ((x433!=x434)<<(x435/x436));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x445 = 22;
	int32_t x446 = INT32_MIN;
	int8_t x447 = -9;
	int16_t x448 = -1;
	int32_t t61 = -348726645;

    t61 = ((x445!=x446)<<(x447/x448));

    if (t61 != 512) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x457 = -1;
	int32_t x458 = -1;
	static uint32_t x459 = UINT32_MAX;
	static int8_t x460 = -1;

    t62 = ((x457!=x458)<<(x459/x460));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x462 = -14528;
	int8_t x463 = -1;

    t63 = ((x461!=x462)<<(x463/x464));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x473 = INT8_MAX;
	uint32_t x474 = 2603U;
	volatile int8_t x475 = 0;
	int64_t x476 = INT64_MIN;
	int32_t t64 = -384;

    t64 = ((x473!=x474)<<(x475/x476));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x481 = 24U;
	static int8_t x482 = INT8_MAX;
	static volatile int16_t x484 = -246;
	int32_t t65 = -4;

    t65 = ((x481!=x482)<<(x483/x484));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x486 = INT8_MIN;
	uint16_t x487 = 16U;
	int8_t x488 = INT8_MIN;
	int32_t t66 = -734;

    t66 = ((x485!=x486)<<(x487/x488));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x489 = 29U;
	uint8_t x491 = UINT8_MAX;
	uint32_t x492 = 244346U;
	volatile int32_t t67 = 582396;

    t67 = ((x489!=x490)<<(x491/x492));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x493 = INT16_MIN;
	uint64_t x494 = 7414662090423LLU;
	int8_t x495 = INT8_MAX;
	uint16_t x496 = UINT16_MAX;

    t68 = ((x493!=x494)<<(x495/x496));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x497 = -1;
	uint64_t x498 = UINT64_MAX;
	int8_t x499 = -1;
	int16_t x500 = 4;
	static int32_t t69 = -8;

    t69 = ((x497!=x498)<<(x499/x500));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x501 = -1LL;
	int32_t x503 = 75;
	int16_t x504 = 40;
	int32_t t70 = -346;

    t70 = ((x501!=x502)<<(x503/x504));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x517 = -1;
	static uint8_t x519 = 6U;
	static int8_t x520 = INT8_MIN;
	int32_t t71 = -4;

    t71 = ((x517!=x518)<<(x519/x520));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x529 = -1;
	uint8_t x530 = 22U;
	uint16_t x531 = 69U;
	int32_t x532 = INT32_MIN;
	volatile int32_t t72 = 30066504;

    t72 = ((x529!=x530)<<(x531/x532));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = INT64_MIN;
	int8_t x539 = 29;
	static uint64_t x540 = 13971301590262611LLU;
	volatile int32_t t73 = 800178358;

    t73 = ((x537!=x538)<<(x539/x540));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x541 = INT32_MAX;
	int8_t x542 = INT8_MIN;
	int32_t x543 = 113680631;
	int32_t x544 = INT32_MIN;
	int32_t t74 = 15;

    t74 = ((x541!=x542)<<(x543/x544));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x545 = INT32_MAX;
	int16_t x547 = 1;
	int32_t x548 = -191;
	volatile int32_t t75 = -21;

    t75 = ((x545!=x546)<<(x547/x548));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x549 = 9U;
	int64_t x550 = -1LL;
	int8_t x551 = INT8_MIN;
	uint8_t x552 = UINT8_MAX;
	int32_t t76 = 90;

    t76 = ((x549!=x550)<<(x551/x552));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x555 = UINT32_MAX;
	int16_t x556 = INT16_MIN;
	volatile int32_t t77 = 38771145;

    t77 = ((x553!=x554)<<(x555/x556));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x557 = INT8_MIN;
	volatile int32_t x558 = INT32_MAX;
	int32_t t78 = 227839;

    t78 = ((x557!=x558)<<(x559/x560));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x565 = UINT16_MAX;
	int8_t x566 = -6;
	int8_t x567 = 0;
	uint64_t x568 = 10478402938670931LLU;
	int32_t t79 = -90080;

    t79 = ((x565!=x566)<<(x567/x568));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x569 = 31LL;
	int32_t x570 = 0;
	int32_t x572 = 2745362;
	int32_t t80 = 0;

    t80 = ((x569!=x570)<<(x571/x572));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x573 = 23;
	uint8_t x574 = UINT8_MAX;
	int16_t x575 = INT16_MIN;
	int32_t x576 = 7346043;
	volatile int32_t t81 = 446;

    t81 = ((x573!=x574)<<(x575/x576));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x581 = 1332U;
	volatile int8_t x582 = 0;
	int16_t x583 = INT16_MAX;
	static int16_t x584 = INT16_MIN;

    t82 = ((x581!=x582)<<(x583/x584));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x595 = -1;
	uint8_t x596 = UINT8_MAX;

    t83 = ((x593!=x594)<<(x595/x596));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x597 = INT8_MAX;
	int16_t x598 = INT16_MIN;
	int16_t x599 = -1;
	volatile uint16_t x600 = 63U;
	int32_t t84 = -18246389;

    t84 = ((x597!=x598)<<(x599/x600));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x601 = -1;
	int8_t x602 = INT8_MIN;
	volatile uint8_t x603 = 3U;
	static volatile int32_t x604 = 15448002;

    t85 = ((x601!=x602)<<(x603/x604));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x605 = -6;
	int64_t x606 = -4657600LL;
	int32_t x607 = INT32_MIN;
	int64_t x608 = INT64_MIN;
	int32_t t86 = 699594648;

    t86 = ((x605!=x606)<<(x607/x608));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x610 = INT8_MIN;
	uint16_t x611 = 3017U;
	static volatile uint64_t x612 = 308LLU;
	int32_t t87 = 267053;

    t87 = ((x609!=x610)<<(x611/x612));

    if (t87 != 512) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x613 = INT32_MIN;
	static int64_t x614 = INT64_MIN;
	int8_t x615 = -5;
	int32_t x616 = INT32_MIN;
	int32_t t88 = 23963;

    t88 = ((x613!=x614)<<(x615/x616));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x618 = UINT16_MAX;
	int8_t x619 = -1;
	int64_t x620 = 50218988LL;
	int32_t t89 = -345531;

    t89 = ((x617!=x618)<<(x619/x620));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x622 = -46;
	static int8_t x623 = -1;
	int32_t x624 = INT32_MAX;
	volatile int32_t t90 = 234580;

    t90 = ((x621!=x622)<<(x623/x624));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x626 = INT64_MIN;
	uint64_t x627 = 70435588751378974LLU;
	int64_t x628 = -1LL;
	volatile int32_t t91 = -23280;

    t91 = ((x625!=x626)<<(x627/x628));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x633 = 29U;
	uint16_t x634 = 6281U;
	int16_t x636 = INT16_MAX;
	static int32_t t92 = 0;

    t92 = ((x633!=x634)<<(x635/x636));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x637 = INT64_MIN;
	uint64_t x638 = 168071019702952017LLU;
	uint8_t x639 = 17U;
	int16_t x640 = 108;
	volatile int32_t t93 = -94;

    t93 = ((x637!=x638)<<(x639/x640));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x646 = INT32_MIN;
	volatile int16_t x647 = -1;
	int32_t x648 = 391177;
	int32_t t94 = 563734693;

    t94 = ((x645!=x646)<<(x647/x648));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x649 = 1358;
	volatile int64_t x650 = INT64_MIN;
	volatile int16_t x651 = -1;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t95 = -737878;

    t95 = ((x649!=x650)<<(x651/x652));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x653 = INT64_MIN;
	int16_t x655 = -1;
	volatile int8_t x656 = INT8_MAX;

    t96 = ((x653!=x654)<<(x655/x656));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x657 = 496640369481364089LLU;
	uint32_t x658 = 55594U;
	int8_t x659 = INT8_MIN;
	int32_t x660 = INT32_MIN;
	volatile int32_t t97 = -1024436217;

    t97 = ((x657!=x658)<<(x659/x660));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x669 = 249686LLU;
	uint64_t x670 = 7439235872948LLU;
	volatile uint8_t x671 = 1U;
	int16_t x672 = INT16_MIN;

    t98 = ((x669!=x670)<<(x671/x672));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x677 = INT64_MIN;
	volatile uint32_t x678 = 49U;
	static int32_t t99 = 738163347;

    t99 = ((x677!=x678)<<(x679/x680));

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x681 = INT64_MIN;
	uint32_t x682 = UINT32_MAX;
	int64_t x683 = INT64_MIN;
	volatile uint64_t x684 = 1933659976378555849LLU;
	int32_t t100 = -473628095;

    t100 = ((x681!=x682)<<(x683/x684));

    if (t100 != 16) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x689 = 63U;
	volatile uint32_t x690 = 121109215U;
	int8_t x691 = -1;
	int32_t t101 = 1;

    t101 = ((x689!=x690)<<(x691/x692));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x702 = INT64_MAX;
	volatile int8_t x703 = 1;
	int32_t x704 = INT32_MAX;

    t102 = ((x701!=x702)<<(x703/x704));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x713 = INT8_MAX;
	static int32_t x714 = INT32_MAX;
	int16_t x715 = 1;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t103 = -30;

    t103 = ((x713!=x714)<<(x715/x716));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x718 = -226587841247219LL;
	volatile int32_t x720 = INT32_MIN;
	int32_t t104 = -43947;

    t104 = ((x717!=x718)<<(x719/x720));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x725 = INT8_MIN;
	uint32_t x726 = UINT32_MAX;
	uint32_t x727 = UINT32_MAX;
	int64_t x728 = INT64_MIN;
	volatile int32_t t105 = -28;

    t105 = ((x725!=x726)<<(x727/x728));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	int16_t x734 = INT16_MIN;
	volatile int32_t x735 = -396;
	volatile int32_t t106 = -12;

    t106 = ((x733!=x734)<<(x735/x736));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x738 = 692U;
	uint16_t x739 = 1U;
	static volatile int32_t x740 = 2;

    t107 = ((x737!=x738)<<(x739/x740));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x745 = INT64_MAX;
	uint8_t x746 = 1U;

    t108 = ((x745!=x746)<<(x747/x748));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x750 = UINT32_MAX;
	int16_t x751 = -3;

    t109 = ((x749!=x750)<<(x751/x752));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x753 = -50;
	static int16_t x755 = 3084;
	volatile uint16_t x756 = 777U;
	static volatile int32_t t110 = 0;

    t110 = ((x753!=x754)<<(x755/x756));

    if (t110 != 8) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = 28;
	static int32_t x759 = -1;
	static int32_t t111 = -192;

    t111 = ((x757!=x758)<<(x759/x760));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x761 = INT64_MIN;
	uint64_t x762 = UINT64_MAX;
	uint64_t x763 = UINT64_MAX;
	int64_t x764 = INT64_MAX;
	int32_t t112 = -1;

    t112 = ((x761!=x762)<<(x763/x764));

    if (t112 != 4) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x781 = INT32_MAX;
	int8_t x782 = -2;
	int64_t x783 = -55170211990237LL;
	int32_t t113 = -15899;

    t113 = ((x781!=x782)<<(x783/x784));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x785 = INT16_MIN;
	uint8_t x786 = UINT8_MAX;
	static volatile int32_t t114 = -898403;

    t114 = ((x785!=x786)<<(x787/x788));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x789 = 5743U;
	int32_t x790 = INT32_MIN;
	int16_t x792 = INT16_MAX;
	int32_t t115 = 3838940;

    t115 = ((x789!=x790)<<(x791/x792));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x794 = 6U;
	volatile int32_t t116 = -29314933;

    t116 = ((x793!=x794)<<(x795/x796));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x799 = -1;
	uint8_t x800 = UINT8_MAX;
	int32_t t117 = 10407373;

    t117 = ((x797!=x798)<<(x799/x800));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x802 = INT16_MAX;
	volatile int16_t x803 = -1;
	volatile int64_t x804 = INT64_MAX;
	static volatile int32_t t118 = -33673918;

    t118 = ((x801!=x802)<<(x803/x804));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x810 = -1;
	int8_t x811 = 0;
	int64_t x812 = -7688843LL;
	int32_t t119 = -45041566;

    t119 = ((x809!=x810)<<(x811/x812));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x815 = 545LL;
	int32_t t120 = 58;

    t120 = ((x813!=x814)<<(x815/x816));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x821 = INT32_MIN;
	static int32_t x822 = -40;
	int8_t x823 = INT8_MIN;
	int32_t t121 = -11332;

    t121 = ((x821!=x822)<<(x823/x824));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x826 = INT32_MIN;
	int64_t x827 = -31787647555LL;
	int64_t x828 = -14620370773LL;
	static volatile int32_t t122 = 45033943;

    t122 = ((x825!=x826)<<(x827/x828));

    if (t122 != 4) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x841 = UINT8_MAX;
	uint8_t x842 = UINT8_MAX;
	static int16_t x843 = 0;
	int64_t x844 = INT64_MIN;
	static volatile int32_t t123 = 3;

    t123 = ((x841!=x842)<<(x843/x844));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x845 = INT16_MIN;
	volatile int8_t x847 = INT8_MIN;

    t124 = ((x845!=x846)<<(x847/x848));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x849 = -207;
	static volatile int8_t x850 = INT8_MIN;
	int32_t x851 = -1;
	int8_t x852 = 16;
	volatile int32_t t125 = 14283569;

    t125 = ((x849!=x850)<<(x851/x852));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x854 = 31;
	int16_t x855 = -1;
	int8_t x856 = INT8_MIN;
	volatile int32_t t126 = -937714;

    t126 = ((x853!=x854)<<(x855/x856));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x866 = UINT8_MAX;
	int16_t x868 = INT16_MIN;
	volatile int32_t t127 = 423451;

    t127 = ((x865!=x866)<<(x867/x868));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x873 = UINT8_MAX;
	int32_t x874 = INT32_MAX;
	int64_t x875 = INT64_MAX;
	int64_t x876 = INT64_MIN;
	int32_t t128 = 217;

    t128 = ((x873!=x874)<<(x875/x876));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x877 = UINT8_MAX;
	uint8_t x879 = 45U;
	static int64_t x880 = INT64_MIN;
	static int32_t t129 = -39;

    t129 = ((x877!=x878)<<(x879/x880));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x889 = 305779308U;
	int64_t x890 = INT64_MAX;
	int64_t x891 = INT64_MIN;

    t130 = ((x889!=x890)<<(x891/x892));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x893 = INT8_MIN;
	int16_t x894 = -1;
	volatile int32_t t131 = -452;

    t131 = ((x893!=x894)<<(x895/x896));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x897 = 6;
	uint64_t x898 = 1900927735826LLU;
	int32_t x899 = 2386;
	uint64_t x900 = 97186122174LLU;
	static int32_t t132 = 53428;

    t132 = ((x897!=x898)<<(x899/x900));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x901 = UINT16_MAX;
	uint16_t x902 = 3375U;
	int8_t x903 = INT8_MAX;
	volatile int16_t x904 = -2642;
	volatile int32_t t133 = 896;

    t133 = ((x901!=x902)<<(x903/x904));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x909 = 1;
	int64_t x910 = INT64_MIN;
	uint32_t x911 = UINT32_MAX;
	uint64_t x912 = 3186955898920315LLU;

    t134 = ((x909!=x910)<<(x911/x912));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x913 = -1;
	static uint64_t x914 = 10592LLU;
	static uint32_t x915 = 125U;

    t135 = ((x913!=x914)<<(x915/x916));

    if (t135 != 4) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x917 = INT32_MIN;
	uint64_t x918 = 81LLU;
	int32_t x920 = INT32_MAX;
	static volatile int32_t t136 = 19523696;

    t136 = ((x917!=x918)<<(x919/x920));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x921 = INT8_MIN;
	int16_t x923 = INT16_MIN;
	static int32_t x924 = -102702697;
	int32_t t137 = -316;

    t137 = ((x921!=x922)<<(x923/x924));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x925 = 72413LLU;
	uint64_t x927 = UINT64_MAX;
	static uint64_t x928 = UINT64_MAX;
	static int32_t t138 = -57022;

    t138 = ((x925!=x926)<<(x927/x928));

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x929 = INT32_MAX;
	int64_t x930 = -875979924105LL;
	int8_t x931 = -14;
	int16_t x932 = INT16_MIN;
	int32_t t139 = -996823719;

    t139 = ((x929!=x930)<<(x931/x932));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x945 = -1;
	static uint8_t x946 = 0U;
	uint8_t x947 = UINT8_MAX;
	int64_t x948 = INT64_MIN;

    t140 = ((x945!=x946)<<(x947/x948));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x953 = INT16_MAX;
	volatile int16_t x955 = -1;
	volatile int32_t x956 = 100981;

    t141 = ((x953!=x954)<<(x955/x956));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x961 = -1LL;
	volatile uint64_t x962 = 59LLU;
	volatile uint8_t x963 = 123U;
	volatile int32_t t142 = 742;

    t142 = ((x961!=x962)<<(x963/x964));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x965 = 8875;
	int32_t x966 = INT32_MIN;
	volatile int16_t x968 = INT16_MIN;
	static volatile int32_t t143 = 0;

    t143 = ((x965!=x966)<<(x967/x968));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x970 = UINT16_MAX;
	volatile int16_t x971 = -13;
	int8_t x972 = INT8_MIN;
	volatile int32_t t144 = 496769614;

    t144 = ((x969!=x970)<<(x971/x972));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x973 = 31U;
	int16_t x974 = -1;
	int8_t x975 = INT8_MAX;
	volatile int32_t t145 = 2652;

    t145 = ((x973!=x974)<<(x975/x976));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x978 = INT16_MIN;
	volatile int8_t x979 = 62;
	int64_t x980 = INT64_MIN;
	volatile int32_t t146 = -61245594;

    t146 = ((x977!=x978)<<(x979/x980));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x985 = INT32_MIN;
	uint32_t x986 = 0U;
	int32_t x988 = INT32_MIN;

    t147 = ((x985!=x986)<<(x987/x988));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x1009 = -120;
	int16_t x1010 = -1;
	volatile int8_t x1011 = INT8_MIN;
	volatile int32_t t148 = -35950;

    t148 = ((x1009!=x1010)<<(x1011/x1012));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1013 = INT16_MIN;
	int64_t x1014 = -1LL;
	int8_t x1015 = 41;
	uint16_t x1016 = UINT16_MAX;
	static int32_t t149 = 8269;

    t149 = ((x1013!=x1014)<<(x1015/x1016));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x1021 = INT64_MIN;
	volatile int64_t x1022 = INT64_MIN;
	int32_t x1023 = INT32_MIN;
	int32_t t150 = 18;

    t150 = ((x1021!=x1022)<<(x1023/x1024));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1026 = -1;
	uint8_t x1028 = 4U;

    t151 = ((x1025!=x1026)<<(x1027/x1028));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1033 = 1441707004LLU;
	uint64_t x1034 = 37784LLU;
	volatile int16_t x1035 = -1;
	int16_t x1036 = INT16_MAX;
	static volatile int32_t t152 = -183754987;

    t152 = ((x1033!=x1034)<<(x1035/x1036));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1037 = INT8_MIN;
	volatile uint16_t x1039 = 6U;
	static int8_t x1040 = INT8_MAX;
	volatile int32_t t153 = -2;

    t153 = ((x1037!=x1038)<<(x1039/x1040));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1045 = 2756;
	int16_t x1046 = -1;
	volatile int64_t x1048 = 7417316551LL;
	int32_t t154 = 128741;

    t154 = ((x1045!=x1046)<<(x1047/x1048));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1049 = UINT64_MAX;
	int8_t x1050 = -1;
	int16_t x1052 = INT16_MIN;
	static int32_t t155 = 32294;

    t155 = ((x1049!=x1050)<<(x1051/x1052));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1069 = INT8_MIN;
	uint64_t x1070 = 91561739342LLU;
	uint32_t x1071 = UINT32_MAX;
	int32_t x1072 = -1;
	int32_t t156 = -4822;

    t156 = ((x1069!=x1070)<<(x1071/x1072));

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x1085 = INT16_MAX;
	static int16_t x1086 = -1;
	volatile int32_t x1087 = INT32_MIN;
	int32_t t157 = 709;

    t157 = ((x1085!=x1086)<<(x1087/x1088));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x1093 = -2;
	static int8_t x1094 = 0;
	static uint8_t x1095 = 3U;
	uint8_t x1096 = 109U;
	volatile int32_t t158 = -94387;

    t158 = ((x1093!=x1094)<<(x1095/x1096));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1109 = INT32_MAX;
	int32_t x1110 = -1;
	static int32_t x1111 = -1;
	static int8_t x1112 = -1;
	int32_t t159 = -596349692;

    t159 = ((x1109!=x1110)<<(x1111/x1112));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1121 = 10;
	int32_t x1123 = -1;
	int64_t x1124 = 6LL;
	volatile int32_t t160 = 28;

    t160 = ((x1121!=x1122)<<(x1123/x1124));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1133 = INT64_MIN;
	volatile int8_t x1135 = INT8_MIN;

    t161 = ((x1133!=x1134)<<(x1135/x1136));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1145 = 2U;
	int32_t t162 = 5;

    t162 = ((x1145!=x1146)<<(x1147/x1148));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1153 = -1LL;
	static uint8_t x1154 = 6U;
	uint8_t x1155 = 1U;
	int32_t x1156 = 17268740;
	int32_t t163 = -948;

    t163 = ((x1153!=x1154)<<(x1155/x1156));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1157 = INT64_MAX;
	static uint64_t x1159 = 543285333LLU;
	int16_t x1160 = -1;

    t164 = ((x1157!=x1158)<<(x1159/x1160));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1169 = -1;
	uint64_t x1170 = 1111552750999327LLU;
	int64_t x1171 = INT64_MAX;
	int64_t x1172 = INT64_MAX;
	volatile int32_t t165 = 11776;

    t165 = ((x1169!=x1170)<<(x1171/x1172));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x1177 = 4U;
	int8_t x1178 = INT8_MIN;
	int8_t x1179 = 0;
	int32_t x1180 = INT32_MIN;

    t166 = ((x1177!=x1178)<<(x1179/x1180));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1185 = INT16_MIN;
	static int16_t x1186 = 155;
	volatile int16_t x1187 = -1;
	int64_t x1188 = INT64_MIN;
	volatile int32_t t167 = -6894759;

    t167 = ((x1185!=x1186)<<(x1187/x1188));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1198 = UINT8_MAX;
	int64_t x1199 = -1LL;
	uint8_t x1200 = UINT8_MAX;
	volatile int32_t t168 = 112153;

    t168 = ((x1197!=x1198)<<(x1199/x1200));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1201 = INT8_MIN;
	int8_t x1202 = 55;
	int8_t x1203 = 7;
	int32_t x1204 = -371248269;
	volatile int32_t t169 = 12;

    t169 = ((x1201!=x1202)<<(x1203/x1204));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1205 = UINT16_MAX;
	uint16_t x1206 = 15U;
	volatile int8_t x1207 = INT8_MAX;
	int32_t x1208 = INT32_MAX;
	int32_t t170 = 18409924;

    t170 = ((x1205!=x1206)<<(x1207/x1208));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x1217 = 35120973992482LLU;
	static int8_t x1219 = 63;
	int8_t x1220 = INT8_MIN;

    t171 = ((x1217!=x1218)<<(x1219/x1220));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x1221 = 5;
	uint32_t x1222 = UINT32_MAX;
	int8_t x1223 = -1;
	volatile int8_t x1224 = -37;
	int32_t t172 = -128210;

    t172 = ((x1221!=x1222)<<(x1223/x1224));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1228 = INT64_MIN;
	volatile int32_t t173 = 797635;

    t173 = ((x1225!=x1226)<<(x1227/x1228));

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1230 = INT8_MIN;
	static uint16_t x1231 = UINT16_MAX;
	volatile int64_t x1232 = -3863649LL;
	volatile int32_t t174 = -4039;

    t174 = ((x1229!=x1230)<<(x1231/x1232));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1241 = INT8_MIN;
	static volatile int16_t x1242 = 1665;
	uint64_t x1244 = UINT64_MAX;

    t175 = ((x1241!=x1242)<<(x1243/x1244));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1249 = 185698545805775LLU;
	uint32_t x1250 = UINT32_MAX;
	int64_t x1251 = -57LL;
	int16_t x1252 = 81;
	int32_t t176 = -249921989;

    t176 = ((x1249!=x1250)<<(x1251/x1252));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1253 = UINT16_MAX;
	uint32_t x1254 = 1013U;
	static uint8_t x1255 = 15U;
	int8_t x1256 = INT8_MIN;
	static int32_t t177 = -11062;

    t177 = ((x1253!=x1254)<<(x1255/x1256));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1261 = -1;
	int16_t x1264 = INT16_MIN;
	volatile int32_t t178 = -474324877;

    t178 = ((x1261!=x1262)<<(x1263/x1264));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x1265 = 2U;
	int32_t x1267 = INT32_MAX;
	int32_t x1268 = INT32_MIN;
	volatile int32_t t179 = -126;

    t179 = ((x1265!=x1266)<<(x1267/x1268));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x1269 = 1U;
	uint64_t x1270 = 25LLU;
	int16_t x1271 = -2597;
	uint64_t x1272 = UINT64_MAX;
	volatile int32_t t180 = -15381;

    t180 = ((x1269!=x1270)<<(x1271/x1272));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1290 = INT16_MIN;
	int64_t x1291 = -79LL;

    t181 = ((x1289!=x1290)<<(x1291/x1292));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1301 = 1682269099139136LL;
	uint64_t x1302 = 203LLU;
	uint16_t x1303 = 826U;
	int16_t x1304 = INT16_MAX;
	volatile int32_t t182 = -211444;

    t182 = ((x1301!=x1302)<<(x1303/x1304));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1305 = INT8_MAX;
	uint8_t x1306 = UINT8_MAX;
	uint32_t x1307 = 23U;
	static int64_t x1308 = INT64_MIN;
	volatile int32_t t183 = -56;

    t183 = ((x1305!=x1306)<<(x1307/x1308));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1321 = 122U;
	uint16_t x1322 = 4047U;
	volatile int32_t x1323 = 990951;
	int16_t x1324 = INT16_MAX;
	volatile int32_t t184 = -1;

    t184 = ((x1321!=x1322)<<(x1323/x1324));

    if (t184 != 1073741824) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1329 = -1;
	int8_t x1330 = INT8_MIN;
	int8_t x1331 = INT8_MIN;
	volatile int32_t t185 = 570268284;

    t185 = ((x1329!=x1330)<<(x1331/x1332));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1337 = INT64_MAX;
	volatile int32_t x1338 = 1080;
	uint16_t x1339 = 15U;
	int32_t x1340 = INT32_MIN;
	int32_t t186 = 255;

    t186 = ((x1337!=x1338)<<(x1339/x1340));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x1345 = -1;
	uint32_t x1346 = 49713U;
	int32_t x1347 = 0;
	static int16_t x1348 = INT16_MAX;
	static int32_t t187 = 249831;

    t187 = ((x1345!=x1346)<<(x1347/x1348));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1353 = -1;
	volatile int16_t x1355 = 18;
	static int8_t x1356 = INT8_MAX;
	static int32_t t188 = 948005;

    t188 = ((x1353!=x1354)<<(x1355/x1356));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1358 = 158016349U;
	uint64_t x1360 = 16LLU;
	volatile int32_t t189 = -77160918;

    t189 = ((x1357!=x1358)<<(x1359/x1360));

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1365 = 1154214980U;
	uint16_t x1366 = 524U;
	int64_t x1367 = -1LL;
	int64_t x1368 = -1003LL;
	int32_t t190 = -30312856;

    t190 = ((x1365!=x1366)<<(x1367/x1368));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1377 = 1340524;
	int8_t x1379 = -2;
	volatile int32_t t191 = 192528;

    t191 = ((x1377!=x1378)<<(x1379/x1380));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x1383 = 5678U;
	uint8_t x1384 = UINT8_MAX;
	int32_t t192 = -185143164;

    t192 = ((x1381!=x1382)<<(x1383/x1384));

    if (t192 != 4194304) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1389 = 2337;
	uint16_t x1391 = UINT16_MAX;
	uint32_t x1392 = UINT32_MAX;
	volatile int32_t t193 = -4058;

    t193 = ((x1389!=x1390)<<(x1391/x1392));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1398 = 551018U;
	int32_t x1399 = -154936;
	int32_t x1400 = -65043;
	volatile int32_t t194 = 83094212;

    t194 = ((x1397!=x1398)<<(x1399/x1400));

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x1401 = 11U;
	int32_t x1402 = -8070;
	int64_t x1404 = INT64_MIN;
	volatile int32_t t195 = -1;

    t195 = ((x1401!=x1402)<<(x1403/x1404));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1405 = -1;
	int64_t x1406 = INT64_MIN;
	volatile int32_t t196 = 12806;

    t196 = ((x1405!=x1406)<<(x1407/x1408));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1413 = -1;
	int16_t x1414 = -1;
	volatile int32_t x1415 = INT32_MAX;
	int32_t t197 = -757387469;

    t197 = ((x1413!=x1414)<<(x1415/x1416));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1417 = 10;
	volatile int8_t x1419 = -55;
	volatile int32_t x1420 = INT32_MAX;

    t198 = ((x1417!=x1418)<<(x1419/x1420));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1421 = 186878522U;
	int32_t x1422 = -35;
	volatile uint8_t x1423 = UINT8_MAX;
	int32_t x1424 = 193677336;
	static int32_t t199 = -3;

    t199 = ((x1421!=x1422)<<(x1423/x1424));

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

