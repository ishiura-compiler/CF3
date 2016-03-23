
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

static int32_t t1 = -15;
static uint64_t x61 = 43804687431394LLU;
volatile int32_t t4 = -90711;
static uint32_t x77 = 4U;
static int64_t x78 = INT64_MAX;
int32_t t5 = -30448241;
int8_t x89 = -1;
static uint16_t x106 = 494U;
int64_t x112 = -1LL;
int32_t t11 = -26;
int32_t x124 = INT32_MAX;
int32_t t12 = -58;
int8_t x137 = INT8_MAX;
uint8_t x138 = 39U;
static int64_t x139 = INT64_MIN;
uint8_t x165 = 0U;
static uint8_t x172 = 1U;
int64_t x173 = INT64_MIN;
static volatile int8_t x174 = INT8_MIN;
static int64_t x223 = -1LL;
volatile int8_t x227 = -1;
int8_t x236 = INT8_MIN;
volatile int32_t t26 = -115262;
volatile uint64_t x256 = 1096787875813812LLU;
volatile int32_t x264 = INT32_MIN;
int8_t x276 = -1;
static int32_t t35 = 143899;
int32_t t36 = -44;
int16_t x326 = 1037;
int8_t x328 = INT8_MIN;
static volatile int64_t x395 = INT64_MIN;
volatile int32_t x407 = -1;
static int8_t x408 = -1;
static int32_t x412 = -1;
int32_t t49 = 15439404;
uint16_t x451 = UINT16_MAX;
volatile int32_t t51 = 24;
uint8_t x464 = 2U;
int16_t x468 = 0;
static volatile int32_t t53 = -147;
int16_t x473 = -1;
int32_t x498 = INT32_MAX;
uint8_t x501 = 2U;
int8_t x502 = INT8_MIN;
volatile int64_t x503 = INT64_MIN;
static int64_t x508 = INT64_MIN;
int16_t x514 = INT16_MAX;
volatile int32_t x515 = INT32_MIN;
static int8_t x528 = INT8_MIN;
volatile uint8_t x538 = UINT8_MAX;
int32_t x540 = INT32_MIN;
int32_t x553 = INT32_MIN;
volatile int32_t t67 = 19595;
int32_t x580 = -337505;
uint64_t x582 = 1995234375679274698LLU;
volatile uint64_t x622 = UINT64_MAX;
int64_t x624 = INT64_MIN;
int16_t x628 = -1;
int16_t x638 = -95;
int64_t x640 = -7225755LL;
static volatile int32_t t76 = -860966114;
uint16_t x653 = 92U;
uint32_t x665 = 221551U;
volatile uint32_t x666 = 8390313U;
int64_t x667 = -1LL;
int32_t t79 = 6740;
volatile int16_t x677 = -1;
uint32_t x714 = 9076202U;
static int16_t x715 = 69;
static int16_t x719 = -1631;
volatile int32_t t86 = 7383399;
int64_t x732 = -1LL;
int32_t x738 = -12;
int64_t x739 = INT64_MIN;
int8_t x748 = 15;
uint32_t x749 = 2511277U;
int8_t x803 = INT8_MIN;
uint32_t x804 = 1052907U;
int32_t x818 = INT32_MAX;
volatile int32_t t96 = 247560;
uint8_t x843 = UINT8_MAX;
volatile int16_t x845 = -2;
uint32_t x853 = 40722U;
int32_t t101 = -1462562;
static uint8_t x866 = 2U;
int32_t x891 = -1;
int64_t x897 = 65273447816342568LL;
uint16_t x898 = 0U;
static int32_t x900 = 0;
static int32_t x909 = INT32_MAX;
int32_t x911 = -3;
int32_t t110 = 17734;
int64_t x928 = INT64_MIN;
static volatile int32_t t113 = -53346;
int8_t x936 = -7;
static volatile int32_t t114 = -2804;
int32_t x953 = 34713923;
static uint8_t x954 = UINT8_MAX;
volatile int16_t x956 = INT16_MIN;
static volatile int32_t t116 = 21493;
uint16_t x973 = UINT16_MAX;
int32_t x975 = 15407;
volatile uint32_t x987 = 2507124U;
int32_t x988 = INT32_MIN;
int8_t x990 = 1;
int64_t x996 = -45980592015236LL;
volatile int8_t x1025 = 2;
static int32_t x1037 = -2714;
int64_t x1046 = -1315413615666298LL;
uint32_t x1055 = 140U;
static volatile int32_t t129 = -582458507;
int64_t x1060 = INT64_MIN;
volatile uint16_t x1061 = 168U;
int64_t x1063 = -284314707866737LL;
volatile int32_t t131 = -45280665;
int32_t t132 = -27378;
uint8_t x1095 = UINT8_MAX;
volatile int32_t t136 = 35026;
volatile uint64_t x1118 = UINT64_MAX;
volatile int8_t x1120 = INT8_MIN;
int64_t x1124 = INT64_MAX;
int32_t x1130 = INT32_MIN;
volatile uint64_t x1137 = UINT64_MAX;
volatile int64_t x1147 = -1LL;
uint64_t x1159 = 54905950796779156LLU;
volatile uint8_t x1160 = 55U;
static uint8_t x1164 = 0U;
static uint8_t x1173 = 1U;
int8_t x1175 = INT8_MIN;
volatile uint8_t x1181 = 0U;
int32_t x1186 = 230115;
static int8_t x1199 = INT8_MIN;
int64_t x1210 = 46704LL;
volatile uint16_t x1212 = UINT16_MAX;
int32_t x1214 = -1;
int16_t x1224 = -1;
int64_t x1232 = 521419504LL;
uint16_t x1242 = UINT16_MAX;
static uint8_t x1243 = 73U;
int64_t x1244 = INT64_MAX;
int16_t x1261 = -1;
static volatile int32_t x1275 = -89;
int8_t x1295 = INT8_MIN;
int32_t t164 = 1;
volatile int32_t t165 = 15989177;
volatile int16_t x1312 = 2;
int8_t x1328 = INT8_MAX;
static int8_t x1329 = -1;
uint32_t x1334 = UINT32_MAX;
int16_t x1335 = INT16_MIN;
int16_t x1351 = INT16_MIN;
int32_t t173 = 1676;
static int16_t x1386 = INT16_MIN;
uint64_t x1387 = 0LLU;
int8_t x1400 = INT8_MAX;
static uint64_t x1409 = 3772207615785685LLU;
int16_t x1411 = INT16_MIN;
int32_t t180 = 0;
volatile int32_t t182 = 256611;
int16_t x1431 = -20;
volatile int8_t x1433 = INT8_MAX;
int16_t x1483 = INT16_MIN;
uint16_t x1492 = 833U;
volatile int32_t x1497 = -1;
volatile uint32_t x1498 = UINT32_MAX;
volatile int8_t x1500 = INT8_MIN;
static volatile uint64_t x1504 = 248LLU;
static volatile int32_t t190 = 1878572;
int32_t x1532 = -1;
static int16_t x1535 = INT16_MIN;
int64_t x1543 = INT64_MIN;
int64_t x1545 = -1LL;
int32_t x1556 = -69;
int32_t t199 = -31911;


void f0(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	uint32_t x19 = 2U;
	uint16_t x20 = 3465U;
	static volatile int32_t t0 = 762746770;

    t0 = ((x17%(x18>x19))==x20);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x21 = 1;
	int16_t x22 = -1;
	int32_t x23 = -2305107;
	volatile uint32_t x24 = UINT32_MAX;

    t1 = ((x21%(x22>x23))==x24);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = 1U;
	int32_t t2 = 1;

    t2 = ((x33%(x34>x35))==x36);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x37 = INT64_MAX;
	static uint8_t x38 = 24U;
	int32_t x39 = INT32_MIN;
	volatile uint32_t x40 = UINT32_MAX;
	int32_t t3 = -87589;

    t3 = ((x37%(x38>x39))==x40);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x62 = INT64_MAX;
	static int64_t x63 = 509753604161060948LL;
	static uint32_t x64 = UINT32_MAX;

    t4 = ((x61%(x62>x63))==x64);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x79 = 1115765989304869LLU;
	int64_t x80 = INT64_MIN;

    t5 = ((x77%(x78>x79))==x80);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 13663U;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t6 = -7;

    t6 = ((x81%(x82>x83))==x84);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x90 = 2U;
	int32_t x91 = -1;
	uint16_t x92 = 37U;
	int32_t t7 = 2910;

    t7 = ((x89%(x90>x91))==x92);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x105 = INT32_MIN;
	int16_t x107 = 0;
	static volatile uint64_t x108 = 340899548402458166LLU;
	static volatile int32_t t8 = -201;

    t8 = ((x105%(x106>x107))==x108);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x109 = INT16_MAX;
	uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 2657824U;
	volatile int32_t t9 = -26;

    t9 = ((x109%(x110>x111))==x112);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MAX;
	int64_t x115 = -1076161628LL;
	int64_t x116 = INT64_MIN;
	volatile int32_t t10 = -7815;

    t10 = ((x113%(x114>x115))==x116);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x117 = INT64_MIN;
	uint16_t x118 = 6183U;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MAX;

    t11 = ((x117%(x118>x119))==x120);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x121 = 314U;
	static int8_t x122 = -1;
	int32_t x123 = -6764861;

    t12 = ((x121%(x122>x123))==x124);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x125 = -1;
	volatile int8_t x126 = INT8_MIN;
	uint64_t x127 = 3371032055636724571LLU;
	uint32_t x128 = 1763848597U;
	static int32_t t13 = 90379;

    t13 = ((x125%(x126>x127))==x128);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x140 = 1;
	int32_t t14 = -700602;

    t14 = ((x137%(x138>x139))==x140);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x141 = INT32_MAX;
	volatile uint64_t x142 = UINT64_MAX;
	uint64_t x143 = 3724778306353500383LLU;
	int32_t x144 = 15984346;
	volatile int32_t t15 = -7745425;

    t15 = ((x141%(x142>x143))==x144);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = INT64_MIN;
	static int32_t t16 = 862736157;

    t16 = ((x157%(x158>x159))==x160);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MAX;
	int8_t x163 = -1;
	static uint32_t x164 = 154955U;
	int32_t t17 = -9808;

    t17 = ((x161%(x162>x163))==x164);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x166 = INT32_MAX;
	int32_t x167 = 103;
	int16_t x168 = -1;
	static volatile int32_t t18 = -2;

    t18 = ((x165%(x166>x167))==x168);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x169 = -1LL;
	static int8_t x170 = INT8_MAX;
	int32_t x171 = INT32_MIN;
	volatile int32_t t19 = 102;

    t19 = ((x169%(x170>x171))==x172);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x175 = INT64_MIN;
	uint8_t x176 = 3U;
	int32_t t20 = 847;

    t20 = ((x173%(x174>x175))==x176);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	static volatile uint16_t x182 = UINT16_MAX;
	volatile int32_t x183 = INT32_MIN;
	int32_t x184 = -815;
	volatile int32_t t21 = 1;

    t21 = ((x181%(x182>x183))==x184);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x209 = -1;
	static int16_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	uint8_t x212 = 4U;
	static int32_t t22 = -30;

    t22 = ((x209%(x210>x211))==x212);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MAX;
	int64_t x224 = -378557LL;
	volatile int32_t t23 = 76925;

    t23 = ((x221%(x222>x223))==x224);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x225 = 6517U;
	uint16_t x226 = 3506U;
	uint64_t x228 = 47257491LLU;
	volatile int32_t t24 = 0;

    t24 = ((x225%(x226>x227))==x228);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x229 = -13163;
	int64_t x230 = -30219LL;
	uint64_t x231 = 12397563LLU;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t25 = 881879;

    t25 = ((x229%(x230>x231))==x232);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x233 = 0;
	static uint16_t x234 = UINT16_MAX;
	uint16_t x235 = 7U;

    t26 = ((x233%(x234>x235))==x236);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x241 = -6;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = 7091982687695646LLU;
	static int8_t x244 = -1;
	static int32_t t27 = 2978;

    t27 = ((x241%(x242>x243))==x244);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x253 = UINT32_MAX;
	uint16_t x254 = 78U;
	int16_t x255 = -1;
	int32_t t28 = 1;

    t28 = ((x253%(x254>x255))==x256);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x257 = INT64_MIN;
	uint64_t x258 = 1707290713345827179LLU;
	static int8_t x259 = 15;
	uint16_t x260 = 62U;
	int32_t t29 = -2;

    t29 = ((x257%(x258>x259))==x260);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x261 = UINT8_MAX;
	volatile int16_t x262 = -2;
	int16_t x263 = INT16_MIN;
	volatile int32_t t30 = -89778836;

    t30 = ((x261%(x262>x263))==x264);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x269 = 29U;
	volatile int16_t x270 = -1;
	int64_t x271 = INT64_MIN;
	static int32_t x272 = INT32_MIN;
	int32_t t31 = 29;

    t31 = ((x269%(x270>x271))==x272);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x273 = INT64_MIN;
	static uint16_t x274 = 108U;
	uint8_t x275 = 2U;
	static volatile int32_t t32 = 365;

    t32 = ((x273%(x274>x275))==x276);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x281 = -1;
	static volatile int8_t x282 = -11;
	static int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t33 = -10534324;

    t33 = ((x281%(x282>x283))==x284);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x289 = INT64_MIN;
	static uint32_t x290 = 381854U;
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t34 = -1758415;

    t34 = ((x289%(x290>x291))==x292);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x313 = -13333107LL;
	uint32_t x314 = UINT32_MAX;
	static volatile uint8_t x315 = 7U;
	volatile int64_t x316 = INT64_MAX;

    t35 = ((x313%(x314>x315))==x316);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x321 = INT64_MAX;
	uint16_t x322 = 60U;
	uint32_t x323 = 24U;
	static int16_t x324 = INT16_MIN;

    t36 = ((x321%(x322>x323))==x324);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x325 = 102U;
	static volatile int32_t x327 = INT32_MIN;
	int32_t t37 = 7;

    t37 = ((x325%(x326>x327))==x328);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x353 = 1765U;
	static int64_t x354 = 1338124584LL;
	volatile uint16_t x355 = 1U;
	uint32_t x356 = 53U;
	int32_t t38 = -26;

    t38 = ((x353%(x354>x355))==x356);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x361 = INT32_MIN;
	volatile int64_t x362 = INT64_MAX;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	int32_t t39 = 134232960;

    t39 = ((x361%(x362>x363))==x364);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x365 = INT64_MIN;
	static int16_t x366 = INT16_MIN;
	uint64_t x367 = 56514157013LLU;
	int32_t x368 = -60;
	volatile int32_t t40 = -1;

    t40 = ((x365%(x366>x367))==x368);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x369 = 3U;
	int64_t x370 = 105372LL;
	int8_t x371 = -1;
	volatile uint16_t x372 = 282U;
	volatile int32_t t41 = -15;

    t41 = ((x369%(x370>x371))==x372);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x377 = -29715331LL;
	uint32_t x378 = 419213837U;
	static volatile uint16_t x379 = UINT16_MAX;
	uint32_t x380 = 548U;
	static int32_t t42 = -277414979;

    t42 = ((x377%(x378>x379))==x380);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x389 = INT8_MAX;
	volatile int16_t x390 = INT16_MAX;
	static int16_t x391 = INT16_MIN;
	static uint64_t x392 = UINT64_MAX;
	volatile int32_t t43 = -45965025;

    t43 = ((x389%(x390>x391))==x392);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x393 = INT64_MIN;
	static uint8_t x394 = 21U;
	uint32_t x396 = 3629943U;
	static volatile int32_t t44 = 116562969;

    t44 = ((x393%(x394>x395))==x396);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x397 = -1;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t45 = -851870600;

    t45 = ((x397%(x398>x399))==x400);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x401 = -2;
	uint32_t x402 = 25243U;
	volatile int64_t x403 = INT64_MIN;
	int32_t x404 = -4;
	volatile int32_t t46 = -3193;

    t46 = ((x401%(x402>x403))==x404);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x405 = 1722476;
	int64_t x406 = 11370LL;
	volatile int32_t t47 = -2060302;

    t47 = ((x405%(x406>x407))==x408);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x409 = INT32_MAX;
	int32_t x410 = INT32_MAX;
	static uint32_t x411 = 5406U;
	volatile int32_t t48 = 7097;

    t48 = ((x409%(x410>x411))==x412);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x429 = 1018LLU;
	uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MIN;
	static int16_t x432 = INT16_MIN;

    t49 = ((x429%(x430>x431))==x432);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x441 = UINT8_MAX;
	int8_t x442 = INT8_MAX;
	static int16_t x443 = -1;
	volatile int16_t x444 = -2;
	static volatile int32_t t50 = 1;

    t50 = ((x441%(x442>x443))==x444);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x449 = INT32_MAX;
	uint32_t x450 = UINT32_MAX;
	int32_t x452 = -1;

    t51 = ((x449%(x450>x451))==x452);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int32_t x462 = INT32_MIN;
	volatile uint32_t x463 = 256228559U;
	int32_t t52 = 6;

    t52 = ((x461%(x462>x463))==x464);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x465 = 144882317145LL;
	static volatile uint32_t x466 = 2789748U;
	volatile int64_t x467 = INT64_MIN;

    t53 = ((x465%(x466>x467))==x468);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x474 = 1196135057007640LLU;
	static int16_t x475 = INT16_MAX;
	static int64_t x476 = INT64_MIN;
	volatile int32_t t54 = 4;

    t54 = ((x473%(x474>x475))==x476);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x489 = 31709818U;
	int16_t x490 = INT16_MAX;
	int32_t x491 = 794;
	uint16_t x492 = UINT16_MAX;
	int32_t t55 = -108194423;

    t55 = ((x489%(x490>x491))==x492);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	volatile uint16_t x494 = 10877U;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MAX;
	int32_t t56 = 4059;

    t56 = ((x493%(x494>x495))==x496);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x497 = 1U;
	uint8_t x499 = 3U;
	uint32_t x500 = 45836U;
	int32_t t57 = 1927142;

    t57 = ((x497%(x498>x499))==x500);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x504 = UINT64_MAX;
	volatile int32_t t58 = -503309;

    t58 = ((x501%(x502>x503))==x504);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x505 = 2;
	int16_t x506 = -139;
	int16_t x507 = INT16_MIN;
	int32_t t59 = -44610;

    t59 = ((x505%(x506>x507))==x508);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x509 = INT16_MAX;
	uint64_t x510 = 484LLU;
	int8_t x511 = INT8_MAX;
	static uint16_t x512 = 1U;
	volatile int32_t t60 = 31167;

    t60 = ((x509%(x510>x511))==x512);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x513 = 1792;
	static int64_t x516 = -1LL;
	volatile int32_t t61 = -74093;

    t61 = ((x513%(x514>x515))==x516);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x521 = INT32_MIN;
	uint16_t x522 = UINT16_MAX;
	int32_t x523 = INT32_MIN;
	static volatile int64_t x524 = -417628LL;
	int32_t t62 = 4;

    t62 = ((x521%(x522>x523))==x524);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x525 = INT8_MAX;
	volatile int64_t x526 = INT64_MIN;
	uint64_t x527 = 168647222745963628LLU;
	static volatile int32_t t63 = -6920007;

    t63 = ((x525%(x526>x527))==x528);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x533 = 2U;
	int8_t x534 = INT8_MAX;
	volatile int8_t x535 = -12;
	uint64_t x536 = 2321LLU;
	static volatile int32_t t64 = -2754895;

    t64 = ((x533%(x534>x535))==x536);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x537 = INT16_MIN;
	static int64_t x539 = INT64_MIN;
	volatile int32_t t65 = 276254116;

    t65 = ((x537%(x538>x539))==x540);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x549 = -1;
	volatile uint16_t x550 = UINT16_MAX;
	uint8_t x551 = 24U;
	static volatile int8_t x552 = INT8_MIN;
	volatile int32_t t66 = 12339270;

    t66 = ((x549%(x550>x551))==x552);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x554 = UINT64_MAX;
	int16_t x555 = INT16_MIN;
	static int64_t x556 = INT64_MAX;

    t67 = ((x553%(x554>x555))==x556);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x565 = -6;
	volatile int16_t x566 = INT16_MIN;
	int32_t x567 = INT32_MIN;
	volatile int16_t x568 = INT16_MAX;
	int32_t t68 = -832;

    t68 = ((x565%(x566>x567))==x568);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x577 = 8U;
	static uint8_t x578 = UINT8_MAX;
	uint64_t x579 = 163LLU;
	volatile int32_t t69 = -208509;

    t69 = ((x577%(x578>x579))==x580);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x581 = INT8_MAX;
	int32_t x583 = INT32_MAX;
	int8_t x584 = INT8_MAX;
	volatile int32_t t70 = 319070423;

    t70 = ((x581%(x582>x583))==x584);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x585 = 6;
	volatile int8_t x586 = INT8_MIN;
	int64_t x587 = INT64_MIN;
	int64_t x588 = -54741578LL;
	volatile int32_t t71 = 76550554;

    t71 = ((x585%(x586>x587))==x588);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x589 = 10U;
	uint8_t x590 = 7U;
	static int16_t x591 = INT16_MIN;
	int16_t x592 = 0;
	volatile int32_t t72 = -78994;

    t72 = ((x589%(x590>x591))==x592);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x623 = INT32_MIN;
	volatile int32_t t73 = 318;

    t73 = ((x621%(x622>x623))==x624);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x625 = INT16_MIN;
	int8_t x626 = -1;
	volatile int64_t x627 = -4042011585606125LL;
	int32_t t74 = -19;

    t74 = ((x625%(x626>x627))==x628);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x637 = INT8_MIN;
	int32_t x639 = INT32_MIN;
	int32_t t75 = 8;

    t75 = ((x637%(x638>x639))==x640);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x645 = -21530392403LL;
	int16_t x646 = -1;
	static int8_t x647 = -52;
	uint8_t x648 = 0U;

    t76 = ((x645%(x646>x647))==x648);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x654 = 461U;
	volatile int32_t x655 = INT32_MIN;
	int16_t x656 = 0;
	int32_t t77 = 7384;

    t77 = ((x653%(x654>x655))==x656);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x668 = -1;
	int32_t t78 = 841257;

    t78 = ((x665%(x666>x667))==x668);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x669 = 748U;
	volatile uint32_t x670 = 2U;
	static int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MAX;

    t79 = ((x669%(x670>x671))==x672);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x673 = 13;
	int32_t x674 = -1;
	static int64_t x675 = INT64_MIN;
	int16_t x676 = INT16_MIN;
	int32_t t80 = 1;

    t80 = ((x673%(x674>x675))==x676);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x678 = 36U;
	volatile uint16_t x679 = 9U;
	int16_t x680 = INT16_MAX;
	volatile int32_t t81 = -101227;

    t81 = ((x677%(x678>x679))==x680);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x697 = INT64_MAX;
	volatile int64_t x698 = INT64_MAX;
	int16_t x699 = INT16_MIN;
	int32_t x700 = 4;
	volatile int32_t t82 = -4117134;

    t82 = ((x697%(x698>x699))==x700);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x709 = -1LL;
	volatile int8_t x710 = INT8_MAX;
	static int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	volatile int32_t t83 = 3169;

    t83 = ((x709%(x710>x711))==x712);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x713 = INT32_MIN;
	static int16_t x716 = -591;
	volatile int32_t t84 = 7298;

    t84 = ((x713%(x714>x715))==x716);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x717 = 77371LLU;
	uint64_t x718 = UINT64_MAX;
	volatile int8_t x720 = -1;
	volatile int32_t t85 = 136084548;

    t85 = ((x717%(x718>x719))==x720);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x721 = -34;
	volatile int64_t x722 = INT64_MAX;
	uint32_t x723 = UINT32_MAX;
	uint8_t x724 = 3U;

    t86 = ((x721%(x722>x723))==x724);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x729 = 919148U;
	static int8_t x730 = -15;
	int8_t x731 = INT8_MIN;
	static volatile int32_t t87 = -231086213;

    t87 = ((x729%(x730>x731))==x732);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x737 = -1;
	static int64_t x740 = INT64_MAX;
	volatile int32_t t88 = 1;

    t88 = ((x737%(x738>x739))==x740);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x745 = 43U;
	int32_t x746 = INT32_MAX;
	volatile int16_t x747 = 3850;
	int32_t t89 = -16837;

    t89 = ((x745%(x746>x747))==x748);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x750 = UINT16_MAX;
	int8_t x751 = INT8_MIN;
	uint8_t x752 = 68U;
	int32_t t90 = -19529499;

    t90 = ((x749%(x750>x751))==x752);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x753 = INT32_MIN;
	static volatile int8_t x754 = INT8_MIN;
	static int16_t x755 = INT16_MIN;
	uint64_t x756 = 623026733LLU;
	volatile int32_t t91 = -18703016;

    t91 = ((x753%(x754>x755))==x756);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x769 = UINT32_MAX;
	int16_t x770 = INT16_MIN;
	uint32_t x771 = 2406499U;
	int16_t x772 = INT16_MIN;
	int32_t t92 = -1;

    t92 = ((x769%(x770>x771))==x772);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x781 = 3U;
	uint8_t x782 = 69U;
	uint32_t x783 = 7U;
	int32_t x784 = INT32_MAX;
	int32_t t93 = -1;

    t93 = ((x781%(x782>x783))==x784);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x801 = -1LL;
	uint64_t x802 = UINT64_MAX;
	volatile int32_t t94 = 30570;

    t94 = ((x801%(x802>x803))==x804);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x817 = INT16_MAX;
	static uint8_t x819 = 2U;
	int16_t x820 = INT16_MAX;
	volatile int32_t t95 = -93884;

    t95 = ((x817%(x818>x819))==x820);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x833 = 26U;
	int32_t x834 = INT32_MAX;
	static volatile int8_t x835 = -2;
	volatile int64_t x836 = INT64_MIN;

    t96 = ((x833%(x834>x835))==x836);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x837 = INT32_MIN;
	uint8_t x838 = UINT8_MAX;
	int8_t x839 = INT8_MIN;
	static uint16_t x840 = 20565U;
	int32_t t97 = -1;

    t97 = ((x837%(x838>x839))==x840);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x841 = -1;
	int64_t x842 = 6053510LL;
	uint8_t x844 = 31U;
	volatile int32_t t98 = 56188;

    t98 = ((x841%(x842>x843))==x844);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x846 = -45;
	static int8_t x847 = INT8_MIN;
	int16_t x848 = 0;
	int32_t t99 = -193;

    t99 = ((x845%(x846>x847))==x848);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x854 = INT64_MAX;
	uint8_t x855 = 6U;
	int16_t x856 = -1021;
	static int32_t t100 = 10100311;

    t100 = ((x853%(x854>x855))==x856);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x857 = -12;
	uint16_t x858 = UINT16_MAX;
	int16_t x859 = INT16_MIN;
	volatile int32_t x860 = -1;

    t101 = ((x857%(x858>x859))==x860);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x865 = 2U;
	int32_t x867 = -1;
	volatile uint64_t x868 = 1640672220LLU;
	static int32_t t102 = -959;

    t102 = ((x865%(x866>x867))==x868);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x869 = UINT64_MAX;
	int32_t x870 = INT32_MIN;
	volatile uint32_t x871 = 1030803U;
	uint64_t x872 = 72689941186681722LLU;
	int32_t t103 = 19634;

    t103 = ((x869%(x870>x871))==x872);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x881 = 439623469U;
	volatile uint16_t x882 = 9356U;
	int64_t x883 = INT64_MIN;
	static volatile int8_t x884 = -7;
	volatile int32_t t104 = -6;

    t104 = ((x881%(x882>x883))==x884);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x885 = 6U;
	int64_t x886 = 124559859260LL;
	int8_t x887 = -1;
	volatile uint8_t x888 = UINT8_MAX;
	int32_t t105 = -5282836;

    t105 = ((x885%(x886>x887))==x888);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x889 = INT16_MAX;
	static int8_t x890 = 1;
	uint64_t x892 = 9542LLU;
	static int32_t t106 = 1636;

    t106 = ((x889%(x890>x891))==x892);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x893 = 0;
	uint16_t x894 = UINT16_MAX;
	int32_t x895 = -117116582;
	uint16_t x896 = 229U;
	static volatile int32_t t107 = -203957904;

    t107 = ((x893%(x894>x895))==x896);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x899 = -3294694335LL;
	volatile int32_t t108 = -1826963;

    t108 = ((x897%(x898>x899))==x900);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x901 = 0;
	int32_t x902 = -1;
	int32_t x903 = INT32_MIN;
	int32_t x904 = -1;
	int32_t t109 = 46;

    t109 = ((x901%(x902>x903))==x904);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x910 = UINT8_MAX;
	int64_t x912 = -1LL;

    t110 = ((x909%(x910>x911))==x912);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x917 = INT32_MIN;
	static int16_t x918 = INT16_MAX;
	volatile uint32_t x919 = 799U;
	volatile uint32_t x920 = UINT32_MAX;
	volatile int32_t t111 = -37;

    t111 = ((x917%(x918>x919))==x920);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x921 = INT8_MIN;
	int32_t x922 = INT32_MAX;
	static int32_t x923 = -6816873;
	int32_t x924 = -1;
	volatile int32_t t112 = 3190017;

    t112 = ((x921%(x922>x923))==x924);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x925 = 0;
	volatile uint64_t x926 = UINT64_MAX;
	int64_t x927 = INT64_MIN;

    t113 = ((x925%(x926>x927))==x928);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x933 = INT16_MIN;
	int64_t x934 = INT64_MAX;
	int32_t x935 = 143925;

    t114 = ((x933%(x934>x935))==x936);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x955 = INT32_MIN;
	volatile int32_t t115 = 30;

    t115 = ((x953%(x954>x955))==x956);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x969 = -1;
	int16_t x970 = INT16_MAX;
	int16_t x971 = 35;
	static int16_t x972 = INT16_MIN;

    t116 = ((x969%(x970>x971))==x972);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x974 = INT32_MAX;
	uint8_t x976 = 2U;
	int32_t t117 = -2491907;

    t117 = ((x973%(x974>x975))==x976);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x985 = INT16_MAX;
	int8_t x986 = -42;
	int32_t t118 = 7;

    t118 = ((x985%(x986>x987))==x988);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x989 = INT8_MIN;
	static int64_t x991 = INT64_MIN;
	int8_t x992 = INT8_MAX;
	static volatile int32_t t119 = -8664;

    t119 = ((x989%(x990>x991))==x992);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x993 = -1;
	uint64_t x994 = 12021015297LLU;
	int8_t x995 = 55;
	int32_t t120 = 2111154;

    t120 = ((x993%(x994>x995))==x996);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x1009 = INT32_MIN;
	int16_t x1010 = INT16_MAX;
	volatile int8_t x1011 = INT8_MAX;
	uint32_t x1012 = 9179094U;
	static int32_t t121 = -162718357;

    t121 = ((x1009%(x1010>x1011))==x1012);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1026 = 26;
	static int64_t x1027 = -2312705752075LL;
	int8_t x1028 = 2;
	int32_t t122 = 57678725;

    t122 = ((x1025%(x1026>x1027))==x1028);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1029 = INT64_MIN;
	int16_t x1030 = INT16_MIN;
	int32_t x1031 = INT32_MIN;
	volatile int64_t x1032 = INT64_MIN;
	int32_t t123 = 110466518;

    t123 = ((x1029%(x1030>x1031))==x1032);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x1033 = -1;
	uint8_t x1034 = 1U;
	uint8_t x1035 = 0U;
	uint8_t x1036 = 21U;
	int32_t t124 = 74515170;

    t124 = ((x1033%(x1034>x1035))==x1036);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1038 = -1;
	static int16_t x1039 = -1207;
	static uint16_t x1040 = UINT16_MAX;
	int32_t t125 = -2;

    t125 = ((x1037%(x1038>x1039))==x1040);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x1041 = 2;
	volatile uint8_t x1042 = 9U;
	int16_t x1043 = -1;
	volatile uint64_t x1044 = UINT64_MAX;
	static int32_t t126 = 27754;

    t126 = ((x1041%(x1042>x1043))==x1044);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x1045 = -2158675212LL;
	uint64_t x1047 = 48101170384686164LLU;
	uint8_t x1048 = 48U;
	int32_t t127 = -132774940;

    t127 = ((x1045%(x1046>x1047))==x1048);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1049 = 3873U;
	uint8_t x1050 = 12U;
	uint8_t x1051 = 1U;
	int64_t x1052 = INT64_MIN;
	volatile int32_t t128 = 49334;

    t128 = ((x1049%(x1050>x1051))==x1052);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1053 = -2;
	int32_t x1054 = -1;
	int8_t x1056 = -18;

    t129 = ((x1053%(x1054>x1055))==x1056);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x1057 = INT64_MIN;
	static uint64_t x1058 = UINT64_MAX;
	int32_t x1059 = INT32_MIN;
	int32_t t130 = -985201;

    t130 = ((x1057%(x1058>x1059))==x1060);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x1062 = INT16_MIN;
	int16_t x1064 = INT16_MAX;

    t131 = ((x1061%(x1062>x1063))==x1064);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1065 = 0U;
	int8_t x1066 = -1;
	uint32_t x1067 = 230621U;
	volatile int16_t x1068 = INT16_MAX;

    t132 = ((x1065%(x1066>x1067))==x1068);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x1073 = 55U;
	int8_t x1074 = -19;
	uint64_t x1075 = 6619972146639789LLU;
	int8_t x1076 = -1;
	int32_t t133 = -2;

    t133 = ((x1073%(x1074>x1075))==x1076);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1085 = 25U;
	int32_t x1086 = INT32_MAX;
	int8_t x1087 = INT8_MAX;
	static uint8_t x1088 = UINT8_MAX;
	int32_t t134 = 20424482;

    t134 = ((x1085%(x1086>x1087))==x1088);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x1093 = 3253416761LLU;
	int64_t x1094 = 5461668045LL;
	static int16_t x1096 = INT16_MAX;
	static int32_t t135 = 892779;

    t135 = ((x1093%(x1094>x1095))==x1096);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x1101 = -4LL;
	int16_t x1102 = INT16_MIN;
	int32_t x1103 = INT32_MIN;
	uint32_t x1104 = UINT32_MAX;

    t136 = ((x1101%(x1102>x1103))==x1104);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x1117 = INT64_MIN;
	static int16_t x1119 = INT16_MIN;
	int32_t t137 = 13922048;

    t137 = ((x1117%(x1118>x1119))==x1120);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1121 = 1731356LLU;
	int16_t x1122 = -1;
	uint64_t x1123 = 7034350598LLU;
	int32_t t138 = -437;

    t138 = ((x1121%(x1122>x1123))==x1124);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x1125 = INT64_MAX;
	int8_t x1126 = -52;
	static int16_t x1127 = INT16_MIN;
	int32_t x1128 = INT32_MIN;
	volatile int32_t t139 = 165130323;

    t139 = ((x1125%(x1126>x1127))==x1128);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1129 = UINT64_MAX;
	uint64_t x1131 = 606039LLU;
	uint8_t x1132 = UINT8_MAX;
	static int32_t t140 = 3430;

    t140 = ((x1129%(x1130>x1131))==x1132);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x1133 = INT8_MAX;
	uint64_t x1134 = UINT64_MAX;
	int16_t x1135 = INT16_MIN;
	int64_t x1136 = INT64_MIN;
	volatile int32_t t141 = 1127;

    t141 = ((x1133%(x1134>x1135))==x1136);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1138 = UINT32_MAX;
	int32_t x1139 = INT32_MIN;
	uint16_t x1140 = UINT16_MAX;
	static int32_t t142 = -220901;

    t142 = ((x1137%(x1138>x1139))==x1140);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1145 = UINT32_MAX;
	static volatile uint32_t x1146 = 9582U;
	static uint8_t x1148 = 8U;
	volatile int32_t t143 = -1;

    t143 = ((x1145%(x1146>x1147))==x1148);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x1157 = UINT16_MAX;
	volatile int64_t x1158 = INT64_MAX;
	volatile int32_t t144 = -18;

    t144 = ((x1157%(x1158>x1159))==x1160);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1161 = 73;
	int8_t x1162 = -13;
	static volatile uint32_t x1163 = 39078232U;
	volatile int32_t t145 = -351687;

    t145 = ((x1161%(x1162>x1163))==x1164);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1174 = 113;
	int32_t x1176 = INT32_MIN;
	volatile int32_t t146 = -23950670;

    t146 = ((x1173%(x1174>x1175))==x1176);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1177 = 20713U;
	uint64_t x1178 = UINT64_MAX;
	static uint32_t x1179 = 866772U;
	int32_t x1180 = INT32_MIN;
	static volatile int32_t t147 = 1885120;

    t147 = ((x1177%(x1178>x1179))==x1180);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1182 = UINT64_MAX;
	int64_t x1183 = INT64_MIN;
	static volatile int8_t x1184 = 10;
	volatile int32_t t148 = 55616;

    t148 = ((x1181%(x1182>x1183))==x1184);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1185 = 5354U;
	uint16_t x1187 = 19U;
	static volatile int32_t x1188 = 1035856;
	int32_t t149 = -964067;

    t149 = ((x1185%(x1186>x1187))==x1188);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1193 = INT64_MIN;
	int64_t x1194 = 919662063348956647LL;
	volatile int64_t x1195 = -1LL;
	uint64_t x1196 = 2088284LLU;
	int32_t t150 = 55242744;

    t150 = ((x1193%(x1194>x1195))==x1196);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1197 = INT8_MAX;
	static int32_t x1198 = INT32_MAX;
	int64_t x1200 = INT64_MAX;
	static int32_t t151 = -52130;

    t151 = ((x1197%(x1198>x1199))==x1200);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1205 = -787961415809LL;
	int64_t x1206 = -1LL;
	int64_t x1207 = INT64_MIN;
	int16_t x1208 = 1;
	int32_t t152 = -1;

    t152 = ((x1205%(x1206>x1207))==x1208);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1209 = INT64_MAX;
	uint8_t x1211 = 100U;
	int32_t t153 = -4;

    t153 = ((x1209%(x1210>x1211))==x1212);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1213 = 46U;
	static int32_t x1215 = -415;
	static int8_t x1216 = -1;
	static volatile int32_t t154 = -68261368;

    t154 = ((x1213%(x1214>x1215))==x1216);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1221 = -1;
	volatile uint64_t x1222 = UINT64_MAX;
	uint8_t x1223 = 29U;
	int32_t t155 = -4110;

    t155 = ((x1221%(x1222>x1223))==x1224);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1229 = INT64_MAX;
	int8_t x1230 = -6;
	uint32_t x1231 = 166328U;
	volatile int32_t t156 = 15;

    t156 = ((x1229%(x1230>x1231))==x1232);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1233 = 1358U;
	int8_t x1234 = -1;
	static int64_t x1235 = INT64_MIN;
	static volatile int64_t x1236 = INT64_MAX;
	int32_t t157 = 30337;

    t157 = ((x1233%(x1234>x1235))==x1236);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x1237 = 0;
	int64_t x1238 = 29733LL;
	int8_t x1239 = INT8_MIN;
	uint8_t x1240 = 1U;
	volatile int32_t t158 = 918340640;

    t158 = ((x1237%(x1238>x1239))==x1240);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1241 = 43U;
	int32_t t159 = -2;

    t159 = ((x1241%(x1242>x1243))==x1244);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1262 = UINT16_MAX;
	int16_t x1263 = 3828;
	int16_t x1264 = INT16_MIN;
	volatile int32_t t160 = 18726775;

    t160 = ((x1261%(x1262>x1263))==x1264);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x1273 = INT64_MIN;
	volatile int32_t x1274 = -1;
	int16_t x1276 = INT16_MIN;
	volatile int32_t t161 = 1;

    t161 = ((x1273%(x1274>x1275))==x1276);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1285 = -1LL;
	int64_t x1286 = INT64_MAX;
	int32_t x1287 = INT32_MIN;
	int8_t x1288 = -1;
	static int32_t t162 = 60627;

    t162 = ((x1285%(x1286>x1287))==x1288);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1289 = INT32_MIN;
	int32_t x1290 = 264622165;
	uint16_t x1291 = 16106U;
	volatile int32_t x1292 = -83658;
	volatile int32_t t163 = 34;

    t163 = ((x1289%(x1290>x1291))==x1292);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x1293 = 1;
	uint16_t x1294 = 4U;
	uint64_t x1296 = 287573701LLU;

    t164 = ((x1293%(x1294>x1295))==x1296);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x1301 = UINT64_MAX;
	uint32_t x1302 = 704873U;
	int64_t x1303 = -39758590519646203LL;
	volatile uint32_t x1304 = 874188974U;

    t165 = ((x1301%(x1302>x1303))==x1304);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1309 = 11568;
	volatile int8_t x1310 = -1;
	volatile int32_t x1311 = INT32_MIN;
	volatile int32_t t166 = -3;

    t166 = ((x1309%(x1310>x1311))==x1312);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x1313 = INT32_MIN;
	uint64_t x1314 = UINT64_MAX;
	int8_t x1315 = INT8_MIN;
	static volatile uint8_t x1316 = 99U;
	volatile int32_t t167 = -10;

    t167 = ((x1313%(x1314>x1315))==x1316);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1325 = 5492494U;
	int64_t x1326 = -1LL;
	int32_t x1327 = INT32_MIN;
	volatile int32_t t168 = 0;

    t168 = ((x1325%(x1326>x1327))==x1328);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1330 = UINT8_MAX;
	static int8_t x1331 = 1;
	static uint32_t x1332 = 230089U;
	volatile int32_t t169 = 875;

    t169 = ((x1329%(x1330>x1331))==x1332);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1333 = 225;
	int16_t x1336 = -203;
	volatile int32_t t170 = -1;

    t170 = ((x1333%(x1334>x1335))==x1336);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1341 = 14U;
	static uint64_t x1342 = UINT64_MAX;
	int32_t x1343 = INT32_MIN;
	int8_t x1344 = INT8_MAX;
	int32_t t171 = 278125923;

    t171 = ((x1341%(x1342>x1343))==x1344);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1345 = 80774553LL;
	volatile int64_t x1346 = INT64_MAX;
	int32_t x1347 = INT32_MIN;
	int32_t x1348 = 2379777;
	int32_t t172 = 26715037;

    t172 = ((x1345%(x1346>x1347))==x1348);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1349 = 189137641;
	int64_t x1350 = INT64_MAX;
	static int64_t x1352 = INT64_MIN;

    t173 = ((x1349%(x1350>x1351))==x1352);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1357 = INT8_MIN;
	int64_t x1358 = 812LL;
	int8_t x1359 = INT8_MIN;
	static volatile int16_t x1360 = -1;
	volatile int32_t t174 = 694937616;

    t174 = ((x1357%(x1358>x1359))==x1360);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1365 = INT16_MAX;
	volatile uint8_t x1366 = UINT8_MAX;
	int8_t x1367 = INT8_MAX;
	static uint8_t x1368 = 0U;
	volatile int32_t t175 = 50090;

    t175 = ((x1365%(x1366>x1367))==x1368);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1377 = INT64_MIN;
	int8_t x1378 = INT8_MAX;
	volatile uint8_t x1379 = 5U;
	static int8_t x1380 = -1;
	int32_t t176 = -15891857;

    t176 = ((x1377%(x1378>x1379))==x1380);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1381 = INT32_MAX;
	int16_t x1382 = INT16_MIN;
	static int64_t x1383 = INT64_MIN;
	uint64_t x1384 = 122765966374LLU;
	volatile int32_t t177 = 201703290;

    t177 = ((x1381%(x1382>x1383))==x1384);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1385 = 34;
	uint16_t x1388 = UINT16_MAX;
	int32_t t178 = -6551;

    t178 = ((x1385%(x1386>x1387))==x1388);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1397 = 52595LLU;
	int8_t x1398 = INT8_MAX;
	volatile int8_t x1399 = -1;
	int32_t t179 = 0;

    t179 = ((x1397%(x1398>x1399))==x1400);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x1410 = INT64_MAX;
	int32_t x1412 = INT32_MIN;

    t180 = ((x1409%(x1410>x1411))==x1412);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x1413 = INT64_MIN;
	int64_t x1414 = 636056893LL;
	static int16_t x1415 = INT16_MAX;
	int8_t x1416 = INT8_MAX;
	volatile int32_t t181 = 29835;

    t181 = ((x1413%(x1414>x1415))==x1416);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1421 = 1846U;
	int64_t x1422 = INT64_MAX;
	int64_t x1423 = -6716714LL;
	int64_t x1424 = 0LL;

    t182 = ((x1421%(x1422>x1423))==x1424);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1429 = INT64_MIN;
	int64_t x1430 = INT64_MAX;
	static volatile int16_t x1432 = -1;
	volatile int32_t t183 = 50;

    t183 = ((x1429%(x1430>x1431))==x1432);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1434 = -426888;
	static volatile int64_t x1435 = INT64_MIN;
	volatile int64_t x1436 = INT64_MAX;
	volatile int32_t t184 = 64680241;

    t184 = ((x1433%(x1434>x1435))==x1436);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x1457 = UINT8_MAX;
	uint8_t x1458 = 0U;
	int8_t x1459 = INT8_MIN;
	int8_t x1460 = -1;
	volatile int32_t t185 = -2028;

    t185 = ((x1457%(x1458>x1459))==x1460);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1481 = -263826;
	uint8_t x1482 = UINT8_MAX;
	int8_t x1484 = -1;
	volatile int32_t t186 = -9;

    t186 = ((x1481%(x1482>x1483))==x1484);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1489 = INT8_MAX;
	static int8_t x1490 = INT8_MIN;
	static int32_t x1491 = INT32_MIN;
	volatile int32_t t187 = 8592723;

    t187 = ((x1489%(x1490>x1491))==x1492);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1499 = 290;
	int32_t t188 = 0;

    t188 = ((x1497%(x1498>x1499))==x1500);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1501 = UINT32_MAX;
	int8_t x1502 = -1;
	int16_t x1503 = INT16_MIN;
	int32_t t189 = -4669;

    t189 = ((x1501%(x1502>x1503))==x1504);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1509 = 604711938587675LLU;
	int64_t x1510 = -1LL;
	int32_t x1511 = -426;
	volatile int32_t x1512 = -2231681;

    t190 = ((x1509%(x1510>x1511))==x1512);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1521 = INT64_MIN;
	uint16_t x1522 = 3U;
	volatile int16_t x1523 = -1;
	uint64_t x1524 = 159309LLU;
	int32_t t191 = -877135849;

    t191 = ((x1521%(x1522>x1523))==x1524);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1529 = INT32_MAX;
	uint32_t x1530 = UINT32_MAX;
	int64_t x1531 = 1LL;
	static int32_t t192 = 3;

    t192 = ((x1529%(x1530>x1531))==x1532);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1533 = -1;
	int16_t x1534 = -184;
	int16_t x1536 = 1;
	int32_t t193 = 2713840;

    t193 = ((x1533%(x1534>x1535))==x1536);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1541 = INT8_MIN;
	static volatile int8_t x1542 = 5;
	int16_t x1544 = INT16_MIN;
	int32_t t194 = -206760513;

    t194 = ((x1541%(x1542>x1543))==x1544);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1546 = 5832;
	int8_t x1547 = -1;
	static int64_t x1548 = 356536935830722LL;
	int32_t t195 = 1;

    t195 = ((x1545%(x1546>x1547))==x1548);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1549 = INT8_MAX;
	int16_t x1550 = 0;
	int16_t x1551 = -1;
	int32_t x1552 = INT32_MIN;
	volatile int32_t t196 = -1;

    t196 = ((x1549%(x1550>x1551))==x1552);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1553 = UINT16_MAX;
	static int64_t x1554 = INT64_MAX;
	uint16_t x1555 = 0U;
	int32_t t197 = 3165;

    t197 = ((x1553%(x1554>x1555))==x1556);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1557 = INT16_MIN;
	int32_t x1558 = INT32_MAX;
	static int8_t x1559 = INT8_MIN;
	int8_t x1560 = -2;
	int32_t t198 = 75;

    t198 = ((x1557%(x1558>x1559))==x1560);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1561 = UINT32_MAX;
	volatile uint32_t x1562 = 1018314U;
	uint8_t x1563 = 21U;
	int32_t x1564 = 151;

    t199 = ((x1561%(x1562>x1563))==x1564);

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

