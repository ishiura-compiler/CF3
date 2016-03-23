
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

volatile int64_t x16 = INT64_MIN;
volatile int8_t x27 = 4;
uint8_t x29 = UINT8_MAX;
static volatile int64_t x30 = INT64_MIN;
static volatile int32_t t5 = 98;
static volatile uint8_t x44 = UINT8_MAX;
static uint64_t x56 = UINT64_MAX;
int64_t x57 = INT64_MAX;
int64_t x59 = INT64_MIN;
static int32_t t10 = -13;
volatile int32_t x70 = -135;
uint32_t x81 = UINT32_MAX;
volatile int32_t t13 = -609791478;
uint64_t x91 = UINT64_MAX;
volatile int64_t x117 = 1168548LL;
static uint16_t x118 = 0U;
int8_t x119 = INT8_MIN;
static int64_t x130 = INT64_MIN;
static volatile uint64_t x134 = 2776LLU;
int32_t x135 = -1;
int64_t x160 = 158258LL;
int32_t x178 = INT32_MIN;
static int64_t x188 = INT64_MIN;
uint32_t x198 = 164U;
int32_t x203 = INT32_MIN;
volatile int32_t t32 = 0;
int64_t x219 = 633956825600418639LL;
volatile uint32_t x220 = 1763412U;
uint16_t x223 = 63U;
int32_t x224 = INT32_MIN;
static volatile int32_t t37 = -9731;
volatile int32_t x233 = 8033546;
int8_t x236 = INT8_MIN;
int16_t x243 = INT16_MIN;
int32_t t41 = 4319;
int32_t t42 = 216433512;
int8_t x266 = -1;
int8_t x272 = -1;
static int32_t x274 = INT32_MAX;
uint64_t x276 = UINT64_MAX;
volatile int32_t t45 = 1;
volatile uint8_t x279 = UINT8_MAX;
int16_t x280 = INT16_MIN;
int32_t t46 = -1;
int16_t x282 = INT16_MAX;
int32_t t47 = -4138182;
static volatile int8_t x286 = INT8_MAX;
uint8_t x313 = 11U;
static int8_t x319 = -1;
volatile int64_t x324 = INT64_MIN;
volatile int32_t t52 = -2014;
int8_t x331 = 34;
int32_t t53 = -2495;
volatile int32_t t54 = -37414;
uint32_t x337 = 533439314U;
uint8_t x339 = 0U;
uint16_t x341 = 29U;
volatile int64_t x343 = INT64_MIN;
int32_t x344 = INT32_MIN;
static volatile int32_t t56 = 1350041;
int64_t x355 = INT64_MAX;
int16_t x367 = 5143;
uint8_t x370 = UINT8_MAX;
uint32_t x378 = 3171192U;
volatile int8_t x386 = 11;
static int32_t t63 = 68299;
volatile int64_t x396 = -1LL;
int32_t x402 = -6710160;
int32_t t67 = 4;
uint16_t x405 = 553U;
uint16_t x408 = 15U;
int32_t x412 = INT32_MAX;
volatile int8_t x415 = INT8_MIN;
uint16_t x417 = 20402U;
uint64_t x429 = 122716431410LLU;
int16_t x454 = -1;
int32_t x469 = 3388493;
volatile int32_t t76 = 1077;
volatile int64_t x494 = -73334107630431LL;
int64_t x497 = 41LL;
int64_t x502 = INT64_MIN;
volatile int32_t x527 = INT32_MAX;
int32_t x528 = -716;
static int8_t x546 = INT8_MAX;
uint64_t x549 = 0LLU;
int32_t x552 = -1;
int32_t t84 = -42209186;
static uint8_t x565 = UINT8_MAX;
int8_t x567 = 0;
volatile int32_t x588 = INT32_MIN;
static int32_t x597 = 8737;
uint32_t x598 = 188927244U;
uint64_t x601 = UINT64_MAX;
uint32_t x635 = UINT32_MAX;
static int16_t x663 = 0;
int8_t x669 = 60;
int32_t x670 = -43310577;
int32_t x672 = -1;
volatile int32_t t102 = 5668;
uint16_t x684 = UINT16_MAX;
volatile int32_t t106 = 362;
int8_t x707 = 0;
static volatile int32_t t108 = 305210;
int32_t x727 = 118390809;
int64_t x740 = INT64_MAX;
uint64_t x744 = 45795402LLU;
int32_t t114 = -67949;
volatile int32_t t115 = 223530;
static int8_t x774 = INT8_MIN;
int16_t x775 = -1;
volatile uint32_t x802 = UINT32_MAX;
uint16_t x814 = 60U;
volatile int16_t x818 = INT16_MIN;
uint16_t x819 = 0U;
static int32_t t120 = 20464;
static uint8_t x851 = UINT8_MAX;
int32_t t124 = -12564;
volatile uint32_t x863 = 154U;
int8_t x872 = -1;
volatile int16_t x877 = INT16_MAX;
volatile uint64_t x881 = 1389805825LLU;
uint8_t x882 = 3U;
volatile int64_t x912 = INT64_MIN;
uint64_t x917 = 1699654261877784LLU;
int32_t x918 = -11918;
static uint32_t x925 = UINT32_MAX;
int16_t x974 = -543;
int32_t x979 = INT32_MIN;
uint64_t x982 = 789128835964556298LLU;
uint16_t x985 = 526U;
int32_t t143 = -732264492;
uint64_t x1006 = UINT64_MAX;
int32_t x1007 = INT32_MIN;
uint64_t x1009 = 1526LLU;
static volatile int64_t x1022 = -2350119954LL;
uint64_t x1023 = 769LLU;
int8_t x1026 = INT8_MIN;
volatile uint32_t x1031 = UINT32_MAX;
uint16_t x1041 = UINT16_MAX;
static volatile int32_t x1044 = 1;
uint64_t x1045 = 262182820LLU;
static uint8_t x1048 = UINT8_MAX;
int16_t x1052 = INT16_MIN;
static uint16_t x1059 = UINT16_MAX;
uint16_t x1061 = 314U;
uint32_t x1073 = 6U;
volatile uint64_t x1080 = UINT64_MAX;
static int8_t x1120 = -1;
uint64_t x1121 = UINT64_MAX;
volatile int8_t x1122 = -1;
uint32_t x1123 = 1806U;
volatile uint8_t x1136 = 3U;
int32_t t163 = 108556;
uint32_t x1138 = UINT32_MAX;
volatile int8_t x1139 = -1;
int64_t x1175 = -1LL;
volatile int32_t t168 = 6;
static volatile uint64_t x1177 = 78350686LLU;
int16_t x1180 = INT16_MIN;
static int16_t x1183 = 0;
static uint16_t x1184 = 722U;
volatile int32_t t171 = 62;
uint16_t x1208 = 79U;
uint16_t x1224 = 1016U;
volatile int32_t t177 = -163;
static int32_t t182 = -44438;
uint16_t x1250 = 34U;
int64_t x1265 = INT64_MAX;
int8_t x1313 = 3;
int64_t x1316 = INT64_MAX;
uint16_t x1321 = 39U;
volatile int64_t x1338 = INT64_MIN;
uint32_t x1341 = UINT32_MAX;
static volatile int32_t t197 = 1;
int32_t t199 = 48991460;


void f0(void) {
    	int8_t x9 = INT8_MAX;
	int16_t x10 = -4;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 3277U;
	int32_t t0 = -7283;

    t0 = ((x9<<(x10<=x11))<=x12);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = INT8_MAX;
	static int32_t x14 = -59106;
	uint32_t x15 = UINT32_MAX;
	int32_t t1 = -7;

    t1 = ((x13<<(x14<=x15))<=x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = 513789LL;
	static uint64_t x18 = UINT64_MAX;
	int64_t x19 = -390857LL;
	int8_t x20 = INT8_MIN;
	volatile int32_t t2 = -12;

    t2 = ((x17<<(x18<=x19))<=x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = 186242988452676687LL;
	uint32_t x22 = 6166U;
	int64_t x23 = -1LL;
	static volatile uint8_t x24 = 0U;
	volatile int32_t t3 = 59301026;

    t3 = ((x21<<(x22<=x23))<=x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x25 = 3U;
	int8_t x26 = INT8_MAX;
	static int64_t x28 = INT64_MIN;
	static volatile int32_t t4 = 3770;

    t4 = ((x25<<(x26<=x27))<=x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x31 = -9;
	int32_t x32 = 159517;

    t5 = ((x29<<(x30<=x31))<=x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x37 = 4543549U;
	int64_t x38 = 1LL;
	uint8_t x39 = 0U;
	uint8_t x40 = 6U;
	int32_t t6 = 481798;

    t6 = ((x37<<(x38<=x39))<=x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x41 = 7242U;
	uint64_t x42 = 15LLU;
	int64_t x43 = INT64_MIN;
	int32_t t7 = -4730074;

    t7 = ((x41<<(x42<=x43))<=x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = UINT8_MAX;
	volatile int8_t x55 = 1;
	int32_t t8 = 7;

    t8 = ((x53<<(x54<=x55))<=x56);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x58 = -1;
	uint64_t x60 = 17LLU;
	volatile int32_t t9 = -3728;

    t9 = ((x57<<(x58<=x59))<=x60);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x61 = 23546683017LL;
	volatile int16_t x62 = -1;
	static uint16_t x63 = 0U;
	int32_t x64 = -94979;

    t10 = ((x61<<(x62<=x63))<=x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x69 = INT8_MAX;
	volatile uint64_t x71 = 4794799641039226813LLU;
	int64_t x72 = -1LL;
	int32_t t11 = 80240924;

    t11 = ((x69<<(x70<=x71))<=x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x82 = -1;
	int8_t x83 = -1;
	int8_t x84 = INT8_MIN;
	int32_t t12 = 861699580;

    t12 = ((x81<<(x82<=x83))<=x84);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x85 = 7U;
	int16_t x86 = INT16_MAX;
	uint32_t x87 = 96385U;
	int32_t x88 = INT32_MIN;

    t13 = ((x85<<(x86<=x87))<=x88);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x89 = UINT64_MAX;
	uint8_t x90 = UINT8_MAX;
	int16_t x92 = INT16_MAX;
	static volatile int32_t t14 = -1;

    t14 = ((x89<<(x90<=x91))<=x92);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x97 = INT16_MAX;
	uint32_t x98 = 205154U;
	volatile int8_t x99 = -1;
	uint16_t x100 = 1U;
	int32_t t15 = 6828850;

    t15 = ((x97<<(x98<=x99))<=x100);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x101 = UINT32_MAX;
	int64_t x102 = INT64_MAX;
	static uint64_t x103 = 71412276626338LLU;
	static uint64_t x104 = UINT64_MAX;
	volatile int32_t t16 = -777669446;

    t16 = ((x101<<(x102<=x103))<=x104);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t17 = -3964614;

    t17 = ((x109<<(x110<=x111))<=x112);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x120 = INT64_MIN;
	int32_t t18 = -4944492;

    t18 = ((x117<<(x118<=x119))<=x120);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x129 = 0;
	volatile uint32_t x131 = 51362584U;
	int64_t x132 = INT64_MIN;
	volatile int32_t t19 = 28;

    t19 = ((x129<<(x130<=x131))<=x132);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x133 = 260804538693471LLU;
	int64_t x136 = INT64_MIN;
	volatile int32_t t20 = -25;

    t20 = ((x133<<(x134<=x135))<=x136);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x137 = 180129299;
	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t21 = 13595;

    t21 = ((x137<<(x138<=x139))<=x140);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x149 = UINT8_MAX;
	int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	static int32_t t22 = 4235132;

    t22 = ((x149<<(x150<=x151))<=x152);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x153 = 2611U;
	static uint64_t x154 = 303574LLU;
	uint32_t x155 = 35991U;
	static uint8_t x156 = UINT8_MAX;
	volatile int32_t t23 = -5689427;

    t23 = ((x153<<(x154<=x155))<=x156);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x157 = 162LL;
	int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;
	volatile int32_t t24 = 708710;

    t24 = ((x157<<(x158<=x159))<=x160);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x177 = 2782112LL;
	int64_t x179 = -1LL;
	static int8_t x180 = 3;
	int32_t t25 = 0;

    t25 = ((x177<<(x178<=x179))<=x180);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x185 = 0U;
	static volatile int64_t x186 = -1LL;
	int32_t x187 = INT32_MIN;
	int32_t t26 = -68;

    t26 = ((x185<<(x186<=x187))<=x188);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x189 = 16;
	int32_t x190 = -33122;
	int64_t x191 = 65816988105382990LL;
	int32_t x192 = INT32_MIN;
	volatile int32_t t27 = -139552251;

    t27 = ((x189<<(x190<=x191))<=x192);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x193 = 2LLU;
	int16_t x194 = 209;
	volatile int64_t x195 = 11LL;
	uint16_t x196 = 24U;
	volatile int32_t t28 = -188969010;

    t28 = ((x193<<(x194<=x195))<=x196);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x197 = INT8_MAX;
	static volatile int16_t x199 = -1;
	static int16_t x200 = 4;
	int32_t t29 = -1683881;

    t29 = ((x197<<(x198<=x199))<=x200);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x201 = UINT8_MAX;
	int8_t x202 = 1;
	int32_t x204 = -174;
	volatile int32_t t30 = -35648656;

    t30 = ((x201<<(x202<=x203))<=x204);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MAX;
	static int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t31 = -12134;

    t31 = ((x205<<(x206<=x207))<=x208);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x209 = INT8_MAX;
	int8_t x210 = 37;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;

    t32 = ((x209<<(x210<=x211))<=x212);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x213 = INT16_MAX;
	int8_t x214 = 0;
	int64_t x215 = 65854494372844LL;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t33 = -2022;

    t33 = ((x213<<(x214<=x215))<=x216);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 9U;
	volatile int32_t t34 = -476;

    t34 = ((x217<<(x218<=x219))<=x220);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x221 = 0;
	static int64_t x222 = -518891968025LL;
	volatile int32_t t35 = 29394135;

    t35 = ((x221<<(x222<=x223))<=x224);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x225 = 31225712003LL;
	int8_t x226 = 1;
	volatile int8_t x227 = -1;
	static volatile int8_t x228 = -1;
	int32_t t36 = 182746726;

    t36 = ((x225<<(x226<=x227))<=x228);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x229 = 27966U;
	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MAX;

    t37 = ((x229<<(x230<=x231))<=x232);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x234 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	int32_t t38 = 195692;

    t38 = ((x233<<(x234<=x235))<=x236);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x241 = 9133U;
	int64_t x242 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	static volatile int32_t t39 = -1128;

    t39 = ((x241<<(x242<=x243))<=x244);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x245 = 0;
	int32_t x246 = INT32_MAX;
	static int32_t x247 = 2268381;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t40 = 2;

    t40 = ((x245<<(x246<=x247))<=x248);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x249 = UINT8_MAX;
	volatile uint8_t x250 = 6U;
	int64_t x251 = INT64_MIN;
	int8_t x252 = -1;

    t41 = ((x249<<(x250<=x251))<=x252);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x253 = 99930;
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = -63;
	uint64_t x256 = 0LLU;

    t42 = ((x253<<(x254<=x255))<=x256);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x265 = 2048287227LLU;
	int8_t x267 = -1;
	volatile uint8_t x268 = 2U;
	static int32_t t43 = 107389052;

    t43 = ((x265<<(x266<=x267))<=x268);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x269 = INT64_MAX;
	uint64_t x270 = 324LLU;
	int64_t x271 = 124LL;
	int32_t t44 = 654;

    t44 = ((x269<<(x270<=x271))<=x272);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x273 = UINT8_MAX;
	volatile int32_t x275 = -9042;

    t45 = ((x273<<(x274<=x275))<=x276);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x277 = 1;
	int16_t x278 = -1;

    t46 = ((x277<<(x278<=x279))<=x280);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x281 = INT64_MAX;
	uint8_t x283 = 2U;
	int16_t x284 = -3379;

    t47 = ((x281<<(x282<=x283))<=x284);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x285 = 1U;
	volatile int8_t x287 = 31;
	volatile uint8_t x288 = 5U;
	int32_t t48 = -341433;

    t48 = ((x285<<(x286<=x287))<=x288);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	int32_t x294 = -1;
	volatile int32_t x295 = -1;
	int16_t x296 = -1;
	int32_t t49 = -3923803;

    t49 = ((x293<<(x294<=x295))<=x296);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x314 = INT64_MAX;
	static uint8_t x315 = UINT8_MAX;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t50 = 3387;

    t50 = ((x313<<(x314<=x315))<=x316);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x317 = 359222LLU;
	int8_t x318 = INT8_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t51 = -32441562;

    t51 = ((x317<<(x318<=x319))<=x320);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x321 = 86731LLU;
	int32_t x322 = INT32_MIN;
	uint64_t x323 = 958765140902558185LLU;

    t52 = ((x321<<(x322<=x323))<=x324);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x329 = 1;
	int32_t x330 = INT32_MIN;
	uint64_t x332 = 16178LLU;

    t53 = ((x329<<(x330<=x331))<=x332);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x333 = INT8_MAX;
	static int32_t x334 = INT32_MIN;
	uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = -10905;

    t54 = ((x333<<(x334<=x335))<=x336);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x338 = -1LL;
	int32_t x340 = -180243166;
	volatile int32_t t55 = -29;

    t55 = ((x337<<(x338<=x339))<=x340);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x342 = 72;

    t56 = ((x341<<(x342<=x343))<=x344);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x349 = 1LLU;
	volatile int8_t x350 = INT8_MIN;
	int16_t x351 = 81;
	uint16_t x352 = UINT16_MAX;
	static int32_t t57 = 346544894;

    t57 = ((x349<<(x350<=x351))<=x352);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x353 = INT16_MAX;
	volatile int32_t x354 = 1;
	static volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t58 = -585;

    t58 = ((x353<<(x354<=x355))<=x356);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 1U;
	int8_t x368 = INT8_MIN;
	int32_t t59 = 114633;

    t59 = ((x365<<(x366<=x367))<=x368);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x369 = 6716675U;
	int8_t x371 = 18;
	int32_t x372 = INT32_MAX;
	volatile int32_t t60 = 307;

    t60 = ((x369<<(x370<=x371))<=x372);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x377 = INT16_MAX;
	volatile uint64_t x379 = 512043412977580LLU;
	int64_t x380 = -1571706199085738LL;
	int32_t t61 = 63;

    t61 = ((x377<<(x378<=x379))<=x380);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x381 = 530;
	int16_t x382 = -2;
	int8_t x383 = -6;
	static uint16_t x384 = UINT16_MAX;
	int32_t t62 = 714;

    t62 = ((x381<<(x382<=x383))<=x384);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x385 = 1U;
	int64_t x387 = 80584781787986786LL;
	static int16_t x388 = -1;

    t63 = ((x385<<(x386<=x387))<=x388);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x389 = 404057U;
	int8_t x390 = 1;
	int16_t x391 = -21;
	static uint32_t x392 = 4834817U;
	static int32_t t64 = -1451;

    t64 = ((x389<<(x390<=x391))<=x392);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x393 = 78;
	uint8_t x394 = 5U;
	static int8_t x395 = -3;
	static volatile int32_t t65 = 205;

    t65 = ((x393<<(x394<=x395))<=x396);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x397 = UINT8_MAX;
	static int64_t x398 = -1LL;
	static int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	static int32_t t66 = 0;

    t66 = ((x397<<(x398<=x399))<=x400);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x401 = 28638680657740006LLU;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -1LL;

    t67 = ((x401<<(x402<=x403))<=x404);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x406 = INT64_MAX;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t t68 = 922470;

    t68 = ((x405<<(x406<=x407))<=x408);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x409 = 1LLU;
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	int32_t t69 = 115553126;

    t69 = ((x409<<(x410<=x411))<=x412);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x413 = 5883820743003259LLU;
	uint16_t x414 = 2205U;
	int32_t x416 = INT32_MIN;
	int32_t t70 = -4916;

    t70 = ((x413<<(x414<=x415))<=x416);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x418 = INT64_MIN;
	int32_t x419 = INT32_MAX;
	int64_t x420 = INT64_MAX;
	volatile int32_t t71 = -60479423;

    t71 = ((x417<<(x418<=x419))<=x420);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MAX;
	uint64_t x432 = 949LLU;
	int32_t t72 = -1;

    t72 = ((x429<<(x430<=x431))<=x432);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x437 = 30LLU;
	int32_t x438 = INT32_MIN;
	uint32_t x439 = UINT32_MAX;
	static int8_t x440 = INT8_MIN;
	int32_t t73 = 7972902;

    t73 = ((x437<<(x438<=x439))<=x440);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x453 = 1;
	int16_t x455 = -856;
	uint8_t x456 = UINT8_MAX;
	int32_t t74 = -4;

    t74 = ((x453<<(x454<=x455))<=x456);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x465 = 4911018390638659391LLU;
	static int8_t x466 = INT8_MIN;
	static uint8_t x467 = 2U;
	int8_t x468 = -1;
	static int32_t t75 = 14920;

    t75 = ((x465<<(x466<=x467))<=x468);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x470 = 725LLU;
	int32_t x471 = -16751609;
	uint8_t x472 = 5U;

    t76 = ((x469<<(x470<=x471))<=x472);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x493 = 1;
	uint8_t x495 = UINT8_MAX;
	int32_t x496 = INT32_MIN;
	int32_t t77 = 31093;

    t77 = ((x493<<(x494<=x495))<=x496);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x498 = -1;
	int16_t x499 = INT16_MIN;
	uint64_t x500 = 12252LLU;
	volatile int32_t t78 = -440319564;

    t78 = ((x497<<(x498<=x499))<=x500);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x501 = 827U;
	volatile int32_t x503 = -1;
	int16_t x504 = -250;
	static int32_t t79 = 117;

    t79 = ((x501<<(x502<=x503))<=x504);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x521 = 2318;
	uint32_t x522 = UINT32_MAX;
	volatile uint32_t x523 = UINT32_MAX;
	volatile int8_t x524 = 12;
	int32_t t80 = -301149089;

    t80 = ((x521<<(x522<=x523))<=x524);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x525 = 25323LL;
	static uint8_t x526 = UINT8_MAX;
	int32_t t81 = 81056;

    t81 = ((x525<<(x526<=x527))<=x528);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x545 = 779LLU;
	uint32_t x547 = 6102821U;
	int64_t x548 = INT64_MAX;
	volatile int32_t t82 = 40566;

    t82 = ((x545<<(x546<=x547))<=x548);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x550 = -1LL;
	int16_t x551 = INT16_MIN;
	int32_t t83 = 3;

    t83 = ((x549<<(x550<=x551))<=x552);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x557 = 8512U;
	volatile int32_t x558 = 41938597;
	int32_t x559 = -14917;
	uint64_t x560 = 7246315225549372047LLU;

    t84 = ((x557<<(x558<=x559))<=x560);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x566 = -17;
	volatile int16_t x568 = 16;
	volatile int32_t t85 = -122;

    t85 = ((x565<<(x566<=x567))<=x568);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x585 = 905;
	static volatile int64_t x586 = INT64_MAX;
	static int64_t x587 = -1LL;
	int32_t t86 = 2;

    t86 = ((x585<<(x586<=x587))<=x588);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x593 = UINT8_MAX;
	int8_t x594 = INT8_MIN;
	int64_t x595 = INT64_MIN;
	int64_t x596 = INT64_MAX;
	static volatile int32_t t87 = 1;

    t87 = ((x593<<(x594<=x595))<=x596);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x599 = -1;
	static int32_t x600 = INT32_MIN;
	int32_t t88 = 324694;

    t88 = ((x597<<(x598<=x599))<=x600);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x602 = INT32_MIN;
	volatile int16_t x603 = -1;
	volatile int64_t x604 = INT64_MIN;
	int32_t t89 = 196046653;

    t89 = ((x601<<(x602<=x603))<=x604);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x605 = 3;
	int16_t x606 = INT16_MIN;
	uint32_t x607 = 162899U;
	static int16_t x608 = 1;
	volatile int32_t t90 = 1074728;

    t90 = ((x605<<(x606<=x607))<=x608);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x613 = 152U;
	static int64_t x614 = INT64_MIN;
	int32_t x615 = INT32_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t91 = -273062;

    t91 = ((x613<<(x614<=x615))<=x616);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x617 = 0U;
	int64_t x618 = INT64_MAX;
	int64_t x619 = INT64_MIN;
	int32_t x620 = -29869;
	volatile int32_t t92 = 245;

    t92 = ((x617<<(x618<=x619))<=x620);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x621 = 198740250844LL;
	int64_t x622 = -12328230LL;
	static int16_t x623 = INT16_MAX;
	volatile int16_t x624 = -1;
	static int32_t t93 = 5140240;

    t93 = ((x621<<(x622<=x623))<=x624);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x625 = INT16_MAX;
	int64_t x626 = -11083685464376352LL;
	static int16_t x627 = -16;
	uint32_t x628 = 59241441U;
	volatile int32_t t94 = -3687049;

    t94 = ((x625<<(x626<=x627))<=x628);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile int64_t x634 = INT64_MAX;
	int32_t x636 = -3;
	int32_t t95 = 512941;

    t95 = ((x633<<(x634<=x635))<=x636);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x637 = INT8_MAX;
	static volatile uint32_t x638 = UINT32_MAX;
	static int8_t x639 = INT8_MIN;
	static volatile int64_t x640 = 65657LL;
	volatile int32_t t96 = 516532703;

    t96 = ((x637<<(x638<=x639))<=x640);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x645 = 4;
	uint64_t x646 = 6986LLU;
	uint32_t x647 = 1U;
	static int16_t x648 = 12990;
	volatile int32_t t97 = 1;

    t97 = ((x645<<(x646<=x647))<=x648);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x649 = 0;
	uint8_t x650 = 21U;
	int64_t x651 = 955280911031622663LL;
	int64_t x652 = 16347366LL;
	int32_t t98 = 194715;

    t98 = ((x649<<(x650<=x651))<=x652);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x653 = INT16_MAX;
	int64_t x654 = INT64_MIN;
	uint32_t x655 = UINT32_MAX;
	int16_t x656 = INT16_MIN;
	volatile int32_t t99 = 17;

    t99 = ((x653<<(x654<=x655))<=x656);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x657 = 226U;
	volatile uint8_t x658 = 92U;
	int8_t x659 = INT8_MIN;
	int64_t x660 = INT64_MAX;
	volatile int32_t t100 = 17;

    t100 = ((x657<<(x658<=x659))<=x660);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x661 = 205;
	int8_t x662 = 2;
	static int64_t x664 = 1452LL;
	volatile int32_t t101 = -204;

    t101 = ((x661<<(x662<=x663))<=x664);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x671 = -13504678;

    t102 = ((x669<<(x670<=x671))<=x672);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x681 = 2;
	int8_t x682 = -1;
	static volatile int8_t x683 = 4;
	int32_t t103 = 700006;

    t103 = ((x681<<(x682<=x683))<=x684);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x685 = 0;
	static uint8_t x686 = 58U;
	int16_t x687 = -1;
	int64_t x688 = INT64_MAX;
	volatile int32_t t104 = 44206935;

    t104 = ((x685<<(x686<=x687))<=x688);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x693 = UINT16_MAX;
	int16_t x694 = -11366;
	int64_t x695 = INT64_MAX;
	volatile uint8_t x696 = UINT8_MAX;
	int32_t t105 = -3649;

    t105 = ((x693<<(x694<=x695))<=x696);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x701 = INT8_MAX;
	uint64_t x702 = UINT64_MAX;
	int16_t x703 = INT16_MIN;
	static volatile uint64_t x704 = 149332431807788154LLU;

    t106 = ((x701<<(x702<=x703))<=x704);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x705 = 7057U;
	int8_t x706 = INT8_MAX;
	int32_t x708 = -921;
	volatile int32_t t107 = 10;

    t107 = ((x705<<(x706<=x707))<=x708);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x717 = UINT32_MAX;
	volatile uint32_t x718 = 29820U;
	uint8_t x719 = 115U;
	uint32_t x720 = 45U;

    t108 = ((x717<<(x718<=x719))<=x720);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x721 = 3;
	uint16_t x722 = UINT16_MAX;
	int16_t x723 = 5;
	int64_t x724 = INT64_MIN;
	volatile int32_t t109 = -4;

    t109 = ((x721<<(x722<=x723))<=x724);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x725 = 0;
	uint16_t x726 = 3362U;
	int32_t x728 = -627;
	static int32_t t110 = -468394969;

    t110 = ((x725<<(x726<=x727))<=x728);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x737 = 2978176U;
	uint32_t x738 = 0U;
	static volatile int32_t x739 = INT32_MIN;
	volatile int32_t t111 = 0;

    t111 = ((x737<<(x738<=x739))<=x740);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x741 = 1U;
	uint64_t x742 = UINT64_MAX;
	int32_t x743 = -4844;
	int32_t t112 = 0;

    t112 = ((x741<<(x742<=x743))<=x744);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x749 = 20;
	uint64_t x750 = 2123199485LLU;
	static int64_t x751 = INT64_MAX;
	static int8_t x752 = 0;
	volatile int32_t t113 = -608372;

    t113 = ((x749<<(x750<=x751))<=x752);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x757 = UINT16_MAX;
	static int8_t x758 = INT8_MIN;
	uint8_t x759 = 44U;
	int8_t x760 = INT8_MAX;

    t114 = ((x757<<(x758<=x759))<=x760);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x761 = 0U;
	int64_t x762 = -1LL;
	uint64_t x763 = 19017LLU;
	volatile int64_t x764 = INT64_MIN;

    t115 = ((x761<<(x762<=x763))<=x764);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x773 = 5U;
	volatile uint8_t x776 = UINT8_MAX;
	int32_t t116 = -2998844;

    t116 = ((x773<<(x774<=x775))<=x776);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x801 = INT8_MAX;
	uint64_t x803 = 3LLU;
	volatile int8_t x804 = -36;
	static int32_t t117 = 2;

    t117 = ((x801<<(x802<=x803))<=x804);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x813 = INT32_MAX;
	volatile int32_t x815 = INT32_MIN;
	int64_t x816 = INT64_MAX;
	static volatile int32_t t118 = -73867072;

    t118 = ((x813<<(x814<=x815))<=x816);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x817 = 58735000807182LLU;
	int64_t x820 = INT64_MAX;
	int32_t t119 = 1028711615;

    t119 = ((x817<<(x818<=x819))<=x820);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x825 = INT16_MAX;
	static uint64_t x826 = 12LLU;
	uint16_t x827 = 40U;
	static int64_t x828 = -68807338LL;

    t120 = ((x825<<(x826<=x827))<=x828);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x829 = 103735403;
	uint8_t x830 = UINT8_MAX;
	static int64_t x831 = -5282LL;
	static volatile uint8_t x832 = 1U;
	static int32_t t121 = -114;

    t121 = ((x829<<(x830<=x831))<=x832);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x841 = INT16_MAX;
	static volatile int8_t x842 = -2;
	int8_t x843 = INT8_MIN;
	volatile int16_t x844 = -1169;
	static int32_t t122 = -13302;

    t122 = ((x841<<(x842<=x843))<=x844);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x849 = 992369341428376127LLU;
	int16_t x850 = -1;
	volatile uint8_t x852 = UINT8_MAX;
	int32_t t123 = -1;

    t123 = ((x849<<(x850<=x851))<=x852);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x857 = 223U;
	uint64_t x858 = UINT64_MAX;
	uint32_t x859 = 1024082471U;
	volatile int16_t x860 = INT16_MAX;

    t124 = ((x857<<(x858<=x859))<=x860);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x861 = 1411480112526801LLU;
	uint8_t x862 = UINT8_MAX;
	uint16_t x864 = 155U;
	volatile int32_t t125 = -139980;

    t125 = ((x861<<(x862<=x863))<=x864);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x865 = INT8_MAX;
	int64_t x866 = INT64_MIN;
	uint16_t x867 = UINT16_MAX;
	int16_t x868 = INT16_MIN;
	int32_t t126 = 5756;

    t126 = ((x865<<(x866<=x867))<=x868);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x869 = UINT32_MAX;
	volatile int8_t x870 = -1;
	uint16_t x871 = 2U;
	int32_t t127 = 10567909;

    t127 = ((x869<<(x870<=x871))<=x872);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x878 = -62;
	uint32_t x879 = UINT32_MAX;
	volatile int16_t x880 = INT16_MAX;
	volatile int32_t t128 = 2799514;

    t128 = ((x877<<(x878<=x879))<=x880);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x883 = INT8_MIN;
	int16_t x884 = INT16_MIN;
	int32_t t129 = 28;

    t129 = ((x881<<(x882<=x883))<=x884);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x901 = 1;
	static uint64_t x902 = 717644749764501200LLU;
	int32_t x903 = INT32_MAX;
	int32_t x904 = INT32_MIN;
	static volatile int32_t t130 = 30808;

    t130 = ((x901<<(x902<=x903))<=x904);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x909 = UINT8_MAX;
	static volatile uint64_t x910 = 216429468688914LLU;
	int8_t x911 = 34;
	volatile int32_t t131 = 1;

    t131 = ((x909<<(x910<=x911))<=x912);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x913 = UINT8_MAX;
	uint32_t x914 = 33879U;
	static int16_t x915 = INT16_MIN;
	static uint8_t x916 = 59U;
	int32_t t132 = 129039;

    t132 = ((x913<<(x914<=x915))<=x916);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x919 = INT16_MIN;
	int16_t x920 = -1;
	int32_t t133 = 6;

    t133 = ((x917<<(x918<=x919))<=x920);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x926 = -1;
	int8_t x927 = -1;
	int64_t x928 = 1168903391LL;
	int32_t t134 = 699462298;

    t134 = ((x925<<(x926<=x927))<=x928);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x929 = UINT64_MAX;
	static uint16_t x930 = 4U;
	int64_t x931 = -41094059792835LL;
	volatile int8_t x932 = -7;
	static int32_t t135 = -359;

    t135 = ((x929<<(x930<=x931))<=x932);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x937 = 0U;
	static volatile int16_t x938 = INT16_MIN;
	volatile uint32_t x939 = 864545053U;
	static int16_t x940 = -1;
	volatile int32_t t136 = -211537;

    t136 = ((x937<<(x938<=x939))<=x940);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x941 = UINT64_MAX;
	int16_t x942 = INT16_MAX;
	volatile int8_t x943 = -1;
	int32_t x944 = -64289;
	volatile int32_t t137 = -5;

    t137 = ((x941<<(x942<=x943))<=x944);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x953 = UINT16_MAX;
	int8_t x954 = INT8_MAX;
	static int32_t x955 = INT32_MIN;
	uint32_t x956 = UINT32_MAX;
	volatile int32_t t138 = -52536866;

    t138 = ((x953<<(x954<=x955))<=x956);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x957 = 1158706;
	volatile int64_t x958 = INT64_MAX;
	volatile uint32_t x959 = UINT32_MAX;
	uint32_t x960 = 5138764U;
	volatile int32_t t139 = -984951;

    t139 = ((x957<<(x958<=x959))<=x960);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x973 = 59U;
	uint32_t x975 = 1U;
	int64_t x976 = -1LL;
	int32_t t140 = -116161;

    t140 = ((x973<<(x974<=x975))<=x976);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x977 = INT64_MAX;
	uint8_t x978 = 0U;
	volatile uint64_t x980 = 5054541184834693LLU;
	int32_t t141 = -86;

    t141 = ((x977<<(x978<=x979))<=x980);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x981 = 124U;
	uint8_t x983 = 3U;
	int64_t x984 = INT64_MIN;
	int32_t t142 = 5;

    t142 = ((x981<<(x982<=x983))<=x984);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x986 = 19794U;
	static int8_t x987 = 1;
	uint32_t x988 = 235223U;

    t143 = ((x985<<(x986<=x987))<=x988);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x989 = INT16_MAX;
	int64_t x990 = -7200LL;
	volatile int8_t x991 = INT8_MIN;
	int16_t x992 = INT16_MIN;
	volatile int32_t t144 = 45359;

    t144 = ((x989<<(x990<=x991))<=x992);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1005 = 62753U;
	uint8_t x1008 = 29U;
	volatile int32_t t145 = -1;

    t145 = ((x1005<<(x1006<=x1007))<=x1008);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x1010 = -2;
	static int8_t x1011 = -1;
	int32_t x1012 = 9393;
	static volatile int32_t t146 = -39;

    t146 = ((x1009<<(x1010<=x1011))<=x1012);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1013 = INT8_MAX;
	uint64_t x1014 = 28621710643LLU;
	uint16_t x1015 = 575U;
	int64_t x1016 = 5465162751LL;
	static int32_t t147 = -115619;

    t147 = ((x1013<<(x1014<=x1015))<=x1016);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1017 = UINT32_MAX;
	volatile int32_t x1018 = -39357;
	int8_t x1019 = -1;
	int64_t x1020 = -1LL;
	static volatile int32_t t148 = 90962676;

    t148 = ((x1017<<(x1018<=x1019))<=x1020);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1021 = INT64_MAX;
	int64_t x1024 = INT64_MIN;
	int32_t t149 = -3832065;

    t149 = ((x1021<<(x1022<=x1023))<=x1024);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x1025 = 902U;
	int16_t x1027 = INT16_MIN;
	volatile uint16_t x1028 = 11894U;
	int32_t t150 = -4711;

    t150 = ((x1025<<(x1026<=x1027))<=x1028);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1029 = 5307152799907LL;
	static int16_t x1030 = -1;
	uint64_t x1032 = 7869LLU;
	volatile int32_t t151 = -261;

    t151 = ((x1029<<(x1030<=x1031))<=x1032);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x1037 = 0;
	static uint16_t x1038 = 411U;
	int64_t x1039 = INT64_MAX;
	volatile int32_t x1040 = INT32_MAX;
	int32_t t152 = 14666;

    t152 = ((x1037<<(x1038<=x1039))<=x1040);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1042 = UINT16_MAX;
	uint32_t x1043 = UINT32_MAX;
	volatile int32_t t153 = 2;

    t153 = ((x1041<<(x1042<=x1043))<=x1044);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x1046 = 693U;
	uint8_t x1047 = 22U;
	volatile int32_t t154 = -444618;

    t154 = ((x1045<<(x1046<=x1047))<=x1048);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x1049 = UINT8_MAX;
	int8_t x1050 = INT8_MAX;
	int16_t x1051 = -4054;
	int32_t t155 = -7912;

    t155 = ((x1049<<(x1050<=x1051))<=x1052);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1053 = INT32_MAX;
	uint16_t x1054 = UINT16_MAX;
	int32_t x1055 = INT32_MIN;
	int32_t x1056 = 249409172;
	int32_t t156 = -74415;

    t156 = ((x1053<<(x1054<=x1055))<=x1056);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1057 = UINT16_MAX;
	static int16_t x1058 = INT16_MIN;
	static uint64_t x1060 = 49353008858704LLU;
	static volatile int32_t t157 = 63235;

    t157 = ((x1057<<(x1058<=x1059))<=x1060);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x1062 = -1268;
	static int8_t x1063 = INT8_MIN;
	static uint8_t x1064 = UINT8_MAX;
	volatile int32_t t158 = 156734;

    t158 = ((x1061<<(x1062<=x1063))<=x1064);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x1074 = -59;
	uint16_t x1075 = 388U;
	static uint64_t x1076 = UINT64_MAX;
	int32_t t159 = -987;

    t159 = ((x1073<<(x1074<=x1075))<=x1076);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1077 = 2527U;
	int8_t x1078 = INT8_MIN;
	static uint16_t x1079 = 3U;
	volatile int32_t t160 = 7379054;

    t160 = ((x1077<<(x1078<=x1079))<=x1080);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1117 = 2;
	uint64_t x1118 = 238150311LLU;
	uint64_t x1119 = UINT64_MAX;
	volatile int32_t t161 = 14;

    t161 = ((x1117<<(x1118<=x1119))<=x1120);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1124 = -1;
	volatile int32_t t162 = -2599;

    t162 = ((x1121<<(x1122<=x1123))<=x1124);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x1133 = INT32_MAX;
	int8_t x1134 = -1;
	static int16_t x1135 = INT16_MIN;

    t163 = ((x1133<<(x1134<=x1135))<=x1136);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1137 = 7965U;
	volatile uint64_t x1140 = 83LLU;
	int32_t t164 = -240497;

    t164 = ((x1137<<(x1138<=x1139))<=x1140);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1141 = 5U;
	int8_t x1142 = INT8_MIN;
	static int32_t x1143 = -12263;
	uint8_t x1144 = 58U;
	int32_t t165 = 7184;

    t165 = ((x1141<<(x1142<=x1143))<=x1144);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1153 = 4U;
	int16_t x1154 = -1;
	static int16_t x1155 = INT16_MIN;
	int8_t x1156 = 1;
	volatile int32_t t166 = 173465863;

    t166 = ((x1153<<(x1154<=x1155))<=x1156);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1169 = 902722220393748LLU;
	static int16_t x1170 = -2328;
	int16_t x1171 = INT16_MAX;
	int8_t x1172 = INT8_MIN;
	volatile int32_t t167 = 0;

    t167 = ((x1169<<(x1170<=x1171))<=x1172);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x1173 = 6U;
	int8_t x1174 = -9;
	uint8_t x1176 = UINT8_MAX;

    t168 = ((x1173<<(x1174<=x1175))<=x1176);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1178 = 1336LL;
	static uint16_t x1179 = 239U;
	int32_t t169 = -208544;

    t169 = ((x1177<<(x1178<=x1179))<=x1180);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x1181 = INT32_MAX;
	uint8_t x1182 = UINT8_MAX;
	volatile int32_t t170 = -4396;

    t170 = ((x1181<<(x1182<=x1183))<=x1184);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1185 = 4676781090023678LLU;
	int16_t x1186 = INT16_MIN;
	uint64_t x1187 = 87314982671810LLU;
	int64_t x1188 = -259982LL;

    t171 = ((x1185<<(x1186<=x1187))<=x1188);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1193 = UINT64_MAX;
	volatile int64_t x1194 = INT64_MIN;
	volatile uint32_t x1195 = UINT32_MAX;
	int64_t x1196 = INT64_MIN;
	static volatile int32_t t172 = -51364;

    t172 = ((x1193<<(x1194<=x1195))<=x1196);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1197 = UINT32_MAX;
	volatile int16_t x1198 = INT16_MAX;
	volatile uint64_t x1199 = 23280363434522LLU;
	int16_t x1200 = 0;
	int32_t t173 = 269602;

    t173 = ((x1197<<(x1198<=x1199))<=x1200);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1201 = UINT32_MAX;
	int64_t x1202 = INT64_MIN;
	uint64_t x1203 = 56LLU;
	static uint8_t x1204 = 123U;
	static volatile int32_t t174 = -2303561;

    t174 = ((x1201<<(x1202<=x1203))<=x1204);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1205 = 3468590211LLU;
	uint64_t x1206 = 12881309613589LLU;
	static int8_t x1207 = -1;
	int32_t t175 = -4184619;

    t175 = ((x1205<<(x1206<=x1207))<=x1208);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1221 = 51U;
	int16_t x1222 = 1;
	int64_t x1223 = INT64_MIN;
	int32_t t176 = 118330836;

    t176 = ((x1221<<(x1222<=x1223))<=x1224);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x1225 = 0;
	int64_t x1226 = -1LL;
	int8_t x1227 = 7;
	static volatile uint16_t x1228 = 9367U;

    t177 = ((x1225<<(x1226<=x1227))<=x1228);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1229 = 916969837889LLU;
	volatile int8_t x1230 = INT8_MAX;
	volatile uint8_t x1231 = 69U;
	int32_t x1232 = -1;
	volatile int32_t t178 = -24451;

    t178 = ((x1229<<(x1230<=x1231))<=x1232);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1233 = INT16_MAX;
	static uint32_t x1234 = UINT32_MAX;
	uint16_t x1235 = UINT16_MAX;
	int8_t x1236 = INT8_MAX;
	static volatile int32_t t179 = -6;

    t179 = ((x1233<<(x1234<=x1235))<=x1236);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1237 = 806U;
	static int16_t x1238 = 7425;
	int8_t x1239 = -1;
	int64_t x1240 = INT64_MIN;
	int32_t t180 = -124477211;

    t180 = ((x1237<<(x1238<=x1239))<=x1240);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1241 = 7241099734556532LL;
	int64_t x1242 = -1LL;
	int64_t x1243 = INT64_MIN;
	static uint64_t x1244 = UINT64_MAX;
	volatile int32_t t181 = -136826022;

    t181 = ((x1241<<(x1242<=x1243))<=x1244);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1245 = UINT8_MAX;
	int32_t x1246 = INT32_MIN;
	int8_t x1247 = 30;
	int64_t x1248 = INT64_MIN;

    t182 = ((x1245<<(x1246<=x1247))<=x1248);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1249 = 0LL;
	static int64_t x1251 = -1LL;
	int32_t x1252 = 10;
	static int32_t t183 = -8;

    t183 = ((x1249<<(x1250<=x1251))<=x1252);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1261 = UINT8_MAX;
	volatile uint8_t x1262 = 27U;
	int32_t x1263 = 930055;
	volatile int32_t x1264 = -1;
	static int32_t t184 = 638858898;

    t184 = ((x1261<<(x1262<=x1263))<=x1264);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1266 = 2056397154134069LL;
	int16_t x1267 = 0;
	static int8_t x1268 = -1;
	volatile int32_t t185 = 1;

    t185 = ((x1265<<(x1266<=x1267))<=x1268);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1273 = INT8_MAX;
	int8_t x1274 = 1;
	static uint8_t x1275 = 18U;
	static int64_t x1276 = -4074374113134763787LL;
	volatile int32_t t186 = 1;

    t186 = ((x1273<<(x1274<=x1275))<=x1276);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1277 = 9578;
	static uint8_t x1278 = 29U;
	int32_t x1279 = INT32_MIN;
	static uint8_t x1280 = 1U;
	static int32_t t187 = -180;

    t187 = ((x1277<<(x1278<=x1279))<=x1280);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1285 = 7208U;
	uint8_t x1286 = 22U;
	int64_t x1287 = 65212783LL;
	int16_t x1288 = -2961;
	int32_t t188 = 14;

    t188 = ((x1285<<(x1286<=x1287))<=x1288);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1289 = INT16_MAX;
	static uint64_t x1290 = 32845612970LLU;
	static int64_t x1291 = INT64_MAX;
	static uint16_t x1292 = 64U;
	volatile int32_t t189 = -2;

    t189 = ((x1289<<(x1290<=x1291))<=x1292);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1305 = 2;
	uint32_t x1306 = UINT32_MAX;
	uint8_t x1307 = 0U;
	uint16_t x1308 = UINT16_MAX;
	volatile int32_t t190 = 15933153;

    t190 = ((x1305<<(x1306<=x1307))<=x1308);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1314 = INT32_MIN;
	uint16_t x1315 = 12U;
	int32_t t191 = 1;

    t191 = ((x1313<<(x1314<=x1315))<=x1316);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1322 = INT8_MAX;
	int32_t x1323 = INT32_MIN;
	int32_t x1324 = INT32_MAX;
	int32_t t192 = 30;

    t192 = ((x1321<<(x1322<=x1323))<=x1324);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1325 = INT16_MAX;
	static uint64_t x1326 = 389692LLU;
	int32_t x1327 = -53663;
	volatile int64_t x1328 = -1LL;
	volatile int32_t t193 = 109927417;

    t193 = ((x1325<<(x1326<=x1327))<=x1328);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1329 = INT32_MAX;
	int32_t x1330 = -364389;
	uint32_t x1331 = 43U;
	uint64_t x1332 = 85LLU;
	volatile int32_t t194 = 687326;

    t194 = ((x1329<<(x1330<=x1331))<=x1332);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1337 = 1420U;
	volatile uint16_t x1339 = 5937U;
	static int32_t x1340 = INT32_MIN;
	int32_t t195 = -6;

    t195 = ((x1337<<(x1338<=x1339))<=x1340);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1342 = 2;
	static int8_t x1343 = INT8_MAX;
	volatile uint16_t x1344 = UINT16_MAX;
	int32_t t196 = 757338;

    t196 = ((x1341<<(x1342<=x1343))<=x1344);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1353 = UINT16_MAX;
	int16_t x1354 = INT16_MAX;
	volatile int64_t x1355 = INT64_MIN;
	int16_t x1356 = INT16_MIN;

    t197 = ((x1353<<(x1354<=x1355))<=x1356);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1357 = 263431721LLU;
	uint64_t x1358 = 7103578733344372650LLU;
	int32_t x1359 = -1;
	uint64_t x1360 = 2580202643565061535LLU;
	int32_t t198 = 34305528;

    t198 = ((x1357<<(x1358<=x1359))<=x1360);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1361 = 58704U;
	int32_t x1362 = INT32_MIN;
	volatile int8_t x1363 = 10;
	uint64_t x1364 = 397393108LLU;

    t199 = ((x1361<<(x1362<=x1363))<=x1364);

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

