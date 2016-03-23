
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

int16_t x1 = 1;
static int32_t x2 = 229;
volatile int64_t x23 = 5739LL;
volatile uint8_t x37 = 15U;
int64_t x39 = INT64_MAX;
uint16_t x45 = 5U;
int32_t t8 = 26165595;
int32_t t9 = 5328;
int8_t x69 = INT8_MAX;
uint64_t x81 = 16075LLU;
int32_t x125 = 3;
static int64_t x139 = INT64_MIN;
volatile int8_t x141 = INT8_MAX;
int16_t x146 = -13;
int64_t x150 = INT64_MAX;
int8_t x152 = INT8_MIN;
int32_t x153 = INT32_MAX;
volatile int32_t x155 = INT32_MIN;
static volatile int64_t x172 = INT64_MAX;
volatile int32_t t21 = 4949;
int16_t x185 = 1;
volatile uint8_t x188 = UINT8_MAX;
static int64_t x194 = INT64_MAX;
int8_t x202 = 5;
uint8_t x203 = 18U;
int32_t x206 = 0;
static int16_t x208 = 94;
static uint16_t x216 = 38U;
static int32_t x219 = INT32_MIN;
static volatile uint8_t x226 = 0U;
uint32_t x230 = UINT32_MAX;
int32_t x232 = -1;
uint8_t x236 = UINT8_MAX;
uint16_t x237 = 6U;
uint32_t x238 = 126583U;
uint8_t x248 = UINT8_MAX;
volatile uint32_t x250 = 2505U;
int16_t x270 = INT16_MIN;
static int64_t x285 = INT64_MAX;
int16_t x288 = -1;
uint64_t x290 = 130193021492272806LLU;
static int8_t x299 = -1;
static int32_t t41 = 22278839;
static volatile int64_t x303 = INT64_MIN;
static uint64_t x324 = 27824936779088LLU;
static uint8_t x335 = 0U;
uint8_t x341 = 39U;
int32_t x350 = 1;
int32_t x358 = INT32_MAX;
int16_t x359 = -6443;
volatile int8_t x370 = INT8_MIN;
int16_t x374 = -1;
volatile uint16_t x387 = 1U;
static int64_t x397 = 1168633151LL;
int32_t t57 = 387942;
uint16_t x409 = UINT16_MAX;
volatile int32_t t58 = -115037;
int32_t x424 = -7;
static volatile int32_t t59 = 3492542;
int8_t x426 = -2;
uint32_t x434 = 18U;
static uint16_t x436 = 1U;
volatile uint8_t x448 = 1U;
int16_t x451 = 70;
uint8_t x453 = 2U;
int32_t x456 = INT32_MIN;
int32_t x457 = 36573627;
static volatile int32_t t66 = 0;
uint16_t x483 = UINT16_MAX;
int64_t x484 = 480479238808638762LL;
volatile int32_t t69 = -858057266;
volatile int8_t x512 = INT8_MAX;
static volatile int8_t x515 = INT8_MIN;
volatile int8_t x526 = INT8_MIN;
int32_t x528 = INT32_MIN;
volatile int32_t t73 = -6;
int64_t x538 = -1LL;
static volatile uint32_t x540 = 126236016U;
int32_t t76 = -26;
static int64_t x559 = -1LL;
static volatile int32_t t80 = -49;
volatile int32_t t81 = -1;
int64_t x588 = INT64_MAX;
int32_t x623 = -212531481;
int16_t x624 = INT16_MIN;
volatile int32_t t87 = -180639;
uint8_t x630 = 11U;
int8_t x639 = -24;
uint32_t x642 = 581726U;
int16_t x652 = -1;
uint32_t x653 = UINT32_MAX;
int8_t x655 = -1;
volatile uint64_t x669 = 8LLU;
int32_t x671 = INT32_MAX;
volatile int32_t t95 = -36984954;
static int16_t x710 = INT16_MIN;
int16_t x712 = -1;
static volatile int16_t x717 = 35;
uint16_t x733 = 7U;
volatile uint32_t x735 = 118U;
uint16_t x738 = UINT16_MAX;
volatile int16_t x743 = INT16_MIN;
volatile int32_t x746 = -43476;
int8_t x747 = INT8_MIN;
int64_t x764 = -1LL;
volatile int16_t x779 = -1;
uint8_t x808 = UINT8_MAX;
uint32_t x823 = 810844U;
static int8_t x824 = INT8_MIN;
uint32_t x829 = 3097U;
int32_t t110 = -161487477;
int16_t x868 = INT16_MAX;
static volatile int32_t t116 = 9852298;
int32_t t117 = 6;
int32_t x888 = -1;
uint16_t x894 = UINT16_MAX;
static int32_t t120 = 372917265;
int64_t x904 = -3912315492LL;
int32_t t122 = 392;
uint8_t x909 = 1U;
int32_t x912 = -1;
int16_t x918 = INT16_MIN;
int64_t x925 = 0LL;
int64_t x927 = INT64_MIN;
uint64_t x928 = 46145270292LLU;
volatile int32_t t126 = -1;
int64_t x930 = -1LL;
volatile int64_t x936 = -1LL;
int8_t x942 = -12;
volatile int64_t x944 = INT64_MIN;
volatile uint16_t x945 = UINT16_MAX;
int16_t x946 = -1;
int8_t x947 = -1;
int16_t x956 = INT16_MIN;
int32_t t132 = -2567;
static volatile uint8_t x961 = 125U;
int16_t x963 = 655;
static int8_t x964 = -3;
int32_t x965 = 34;
uint16_t x966 = UINT16_MAX;
int16_t x967 = -1;
int16_t x971 = INT16_MAX;
static int32_t t135 = 1066090896;
volatile int8_t x976 = -1;
int32_t t136 = 3360;
int32_t x980 = INT32_MIN;
volatile int8_t x982 = INT8_MIN;
int32_t x983 = -1;
static int32_t t138 = -1;
int64_t x997 = INT64_MAX;
volatile int32_t x1003 = -1;
static volatile int8_t x1005 = INT8_MAX;
int32_t t142 = 1;
uint8_t x1013 = UINT8_MAX;
volatile int32_t t144 = 1911;
int64_t x1021 = INT64_MAX;
int8_t x1036 = INT8_MIN;
static int32_t x1038 = 220969;
int16_t x1040 = INT16_MIN;
static volatile int64_t x1042 = INT64_MAX;
volatile uint8_t x1050 = 7U;
static volatile int64_t x1051 = 148627425770499507LL;
volatile int32_t t149 = 1245;
int32_t t151 = 4615;
uint32_t x1086 = UINT32_MAX;
int8_t x1087 = 9;
volatile int32_t t153 = 591;
static int16_t x1098 = INT16_MIN;
uint64_t x1113 = 4186118372238LLU;
volatile int32_t x1114 = -91033;
uint64_t x1133 = UINT64_MAX;
uint64_t x1143 = UINT64_MAX;
uint16_t x1144 = UINT16_MAX;
volatile int16_t x1150 = 1;
uint16_t x1175 = 12132U;
static uint16_t x1196 = 224U;
uint32_t x1211 = 3370U;
int16_t x1222 = INT16_MIN;
static uint32_t x1229 = 4004U;
static int8_t x1232 = 1;
volatile int16_t x1233 = INT16_MAX;
volatile int32_t t172 = -3903172;
uint64_t x1240 = 870752173099LLU;
uint64_t x1242 = 5LLU;
volatile int32_t t174 = 931435984;
volatile uint16_t x1246 = 1U;
int64_t x1252 = 4636198112288760LL;
uint16_t x1254 = 7U;
int16_t x1261 = 1617;
int64_t x1263 = INT64_MIN;
uint32_t x1273 = 7U;
static volatile int32_t t181 = 1010930615;
int16_t x1278 = INT16_MAX;
int16_t x1279 = 2376;
int64_t x1280 = INT64_MAX;
volatile int32_t t182 = -257470;
static uint64_t x1283 = UINT64_MAX;
static int16_t x1306 = -1106;
int32_t x1307 = INT32_MIN;
int8_t x1317 = 3;
int64_t x1318 = -1LL;
static int64_t x1326 = -1LL;
int32_t x1330 = INT32_MIN;
int8_t x1332 = INT8_MIN;
static volatile int32_t t190 = 1;
uint32_t x1345 = 53U;
int8_t x1349 = INT8_MAX;
int64_t x1362 = 0LL;
int8_t x1370 = INT8_MIN;
int16_t x1372 = -291;
static volatile int8_t x1379 = INT8_MAX;
int32_t t198 = 881794824;


void f0(void) {
    	int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 227785;

    t0 = ((x1>>(x2==x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int16_t x6 = 0;
	static int32_t x7 = -1540;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -20;

    t1 = ((x5>>(x6==x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x21 = 13395U;
	int16_t x22 = 8684;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t2 = -61;

    t2 = ((x21>>(x22==x23))<=x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x25 = 3U;
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	static int64_t x28 = -1LL;
	int32_t t3 = 1223714;

    t3 = ((x25>>(x26==x27))<=x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x33 = 4201U;
	uint8_t x34 = 1U;
	int8_t x35 = 14;
	static int16_t x36 = -13069;
	int32_t t4 = 1881;

    t4 = ((x33>>(x34==x35))<=x36);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x38 = 1015139648;
	uint64_t x40 = 2LLU;
	volatile int32_t t5 = -129;

    t5 = ((x37>>(x38==x39))<=x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x41 = UINT32_MAX;
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = -1;
	static volatile uint64_t x44 = UINT64_MAX;
	static int32_t t6 = 7002425;

    t6 = ((x41>>(x42==x43))<=x44);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x46 = INT32_MAX;
	int8_t x47 = INT8_MAX;
	volatile uint64_t x48 = 1289310997923693LLU;
	int32_t t7 = -25;

    t7 = ((x45>>(x46==x47))<=x48);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x49 = INT16_MAX;
	int32_t x50 = -1;
	uint8_t x51 = UINT8_MAX;
	volatile uint8_t x52 = 2U;

    t8 = ((x49>>(x50==x51))<=x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = INT16_MAX;
	uint64_t x54 = 1939162860529219LLU;
	int64_t x55 = INT64_MIN;
	static int8_t x56 = -1;

    t9 = ((x53>>(x54==x55))<=x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t10 = -8111262;

    t10 = ((x69>>(x70==x71))<=x72);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x82 = -10;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t11 = -28;

    t11 = ((x81>>(x82==x83))<=x84);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x117 = 32U;
	int8_t x118 = INT8_MIN;
	int16_t x119 = -146;
	int32_t x120 = INT32_MAX;
	volatile int32_t t12 = -4;

    t12 = ((x117>>(x118==x119))<=x120);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = -1;
	static volatile int32_t t13 = -34886896;

    t13 = ((x125>>(x126==x127))<=x128);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x133 = 13U;
	uint16_t x134 = UINT16_MAX;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 179499U;
	static volatile int32_t t14 = -2;

    t14 = ((x133>>(x134==x135))<=x136);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x137 = 286677382299LLU;
	int64_t x138 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t15 = -288;

    t15 = ((x137>>(x138==x139))<=x140);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x142 = INT64_MIN;
	uint64_t x143 = 8827LLU;
	static int64_t x144 = INT64_MAX;
	static int32_t t16 = 46081;

    t16 = ((x141>>(x142==x143))<=x144);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x145 = UINT8_MAX;
	static int16_t x147 = -1;
	uint16_t x148 = 8500U;
	int32_t t17 = 213;

    t17 = ((x145>>(x146==x147))<=x148);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x149 = 30940932LL;
	static uint64_t x151 = 2012631LLU;
	volatile int32_t t18 = -1;

    t18 = ((x149>>(x150==x151))<=x152);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x154 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t19 = 10;

    t19 = ((x153>>(x154==x155))<=x156);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = INT16_MIN;
	static volatile uint16_t x168 = 389U;
	volatile int32_t t20 = 262407091;

    t20 = ((x165>>(x166==x167))<=x168);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x169 = 700081869U;
	int16_t x170 = 16;
	uint64_t x171 = UINT64_MAX;

    t21 = ((x169>>(x170==x171))<=x172);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x186 = INT16_MIN;
	static volatile int64_t x187 = INT64_MIN;
	int32_t t22 = -26;

    t22 = ((x185>>(x186==x187))<=x188);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x193 = 0U;
	int16_t x195 = -1;
	volatile uint32_t x196 = 211280580U;
	int32_t t23 = -2617;

    t23 = ((x193>>(x194==x195))<=x196);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x201 = 8041LLU;
	int8_t x204 = 1;
	static int32_t t24 = -1586;

    t24 = ((x201>>(x202==x203))<=x204);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x205 = 2458U;
	static uint32_t x207 = 439024U;
	int32_t t25 = 2989225;

    t25 = ((x205>>(x206==x207))<=x208);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x213 = INT8_MAX;
	volatile uint16_t x214 = UINT16_MAX;
	static int64_t x215 = 803695LL;
	int32_t t26 = 407763390;

    t26 = ((x213>>(x214==x215))<=x216);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x217 = INT8_MAX;
	int32_t x218 = 11942;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t27 = -1;

    t27 = ((x217>>(x218==x219))<=x220);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x225 = 16U;
	int8_t x227 = -7;
	uint16_t x228 = 9409U;
	static volatile int32_t t28 = -1;

    t28 = ((x225>>(x226==x227))<=x228);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x229 = 92LL;
	uint8_t x231 = 3U;
	int32_t t29 = -1537;

    t29 = ((x229>>(x230==x231))<=x232);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x233 = 71900U;
	uint16_t x234 = 41U;
	int64_t x235 = INT64_MIN;
	volatile int32_t t30 = 406768343;

    t30 = ((x233>>(x234==x235))<=x236);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x239 = 4U;
	static uint32_t x240 = UINT32_MAX;
	static int32_t t31 = -796389072;

    t31 = ((x237>>(x238==x239))<=x240);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x241 = 1885423936120139LLU;
	int64_t x242 = -1LL;
	static int16_t x243 = INT16_MIN;
	static uint8_t x244 = 5U;
	int32_t t32 = -20177936;

    t32 = ((x241>>(x242==x243))<=x244);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x245 = 397U;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = INT8_MIN;
	int32_t t33 = -47759;

    t33 = ((x245>>(x246==x247))<=x248);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x249 = 1;
	int8_t x251 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t34 = 122336911;

    t34 = ((x249>>(x250==x251))<=x252);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x265 = UINT32_MAX;
	int32_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	int32_t x268 = -286;
	volatile int32_t t35 = -195049;

    t35 = ((x265>>(x266==x267))<=x268);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x269 = UINT16_MAX;
	int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	int32_t t36 = -1;

    t36 = ((x269>>(x270==x271))<=x272);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x277 = 24U;
	int16_t x278 = INT16_MAX;
	int16_t x279 = 1;
	uint64_t x280 = 5618LLU;
	int32_t t37 = -839;

    t37 = ((x277>>(x278==x279))<=x280);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x281 = 66528202LLU;
	int64_t x282 = 1LL;
	volatile uint16_t x283 = UINT16_MAX;
	static int8_t x284 = 1;
	volatile int32_t t38 = 775;

    t38 = ((x281>>(x282==x283))<=x284);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x286 = UINT8_MAX;
	static uint16_t x287 = UINT16_MAX;
	int32_t t39 = -26220880;

    t39 = ((x285>>(x286==x287))<=x288);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x289 = 441LLU;
	int8_t x291 = -1;
	int64_t x292 = -13373739060LL;
	int32_t t40 = -59783114;

    t40 = ((x289>>(x290==x291))<=x292);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x300 = 1;

    t41 = ((x297>>(x298==x299))<=x300);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x301 = 29595511LLU;
	volatile int64_t x302 = 8LL;
	int32_t x304 = INT32_MIN;
	volatile int32_t t42 = -7480;

    t42 = ((x301>>(x302==x303))<=x304);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x305 = 0U;
	int16_t x306 = -1;
	uint8_t x307 = 37U;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t43 = 76;

    t43 = ((x305>>(x306==x307))<=x308);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x321 = 3U;
	volatile int8_t x322 = -1;
	int8_t x323 = -1;
	static int32_t t44 = 1090;

    t44 = ((x321>>(x322==x323))<=x324);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MAX;
	uint16_t x327 = 67U;
	static int32_t x328 = 8439;
	volatile int32_t t45 = 10;

    t45 = ((x325>>(x326==x327))<=x328);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x333 = 3U;
	volatile int32_t x334 = -68886389;
	int16_t x336 = INT16_MIN;
	int32_t t46 = -21245519;

    t46 = ((x333>>(x334==x335))<=x336);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x337 = 325LLU;
	int32_t x338 = -69;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = -57;
	volatile int32_t t47 = 0;

    t47 = ((x337>>(x338==x339))<=x340);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x342 = INT32_MAX;
	int16_t x343 = 9430;
	uint64_t x344 = 2938LLU;
	static int32_t t48 = 2954;

    t48 = ((x341>>(x342==x343))<=x344);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x345 = INT32_MAX;
	static int32_t x346 = 2569;
	int64_t x347 = INT64_MIN;
	static int8_t x348 = INT8_MIN;
	static volatile int32_t t49 = 23441;

    t49 = ((x345>>(x346==x347))<=x348);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x349 = 683022843LL;
	static int64_t x351 = INT64_MAX;
	int64_t x352 = 634450128792932LL;
	int32_t t50 = 35;

    t50 = ((x349>>(x350==x351))<=x352);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x357 = INT8_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t51 = -45;

    t51 = ((x357>>(x358==x359))<=x360);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x365 = 0;
	static volatile int32_t x366 = -2;
	static int16_t x367 = -52;
	int64_t x368 = INT64_MAX;
	volatile int32_t t52 = -817574;

    t52 = ((x365>>(x366==x367))<=x368);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x369 = 46682718U;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t53 = -163207;

    t53 = ((x369>>(x370==x371))<=x372);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x373 = 0;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = 1;
	volatile int32_t t54 = -61562553;

    t54 = ((x373>>(x374==x375))<=x376);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	static int16_t x386 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t55 = 15984;

    t55 = ((x385>>(x386==x387))<=x388);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x398 = -1703309157376588701LL;
	static int32_t x399 = -1;
	int16_t x400 = INT16_MIN;
	static int32_t t56 = -509;

    t56 = ((x397>>(x398==x399))<=x400);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x405 = 32485867U;
	uint32_t x406 = 1154680651U;
	static volatile int16_t x407 = INT16_MIN;
	volatile uint64_t x408 = 23927LLU;

    t57 = ((x405>>(x406==x407))<=x408);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x410 = INT8_MIN;
	int32_t x411 = 2607;
	static int8_t x412 = INT8_MIN;

    t58 = ((x409>>(x410==x411))<=x412);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x421 = 864719364LLU;
	uint32_t x422 = 6456U;
	volatile int64_t x423 = INT64_MAX;

    t59 = ((x421>>(x422==x423))<=x424);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile uint8_t x427 = UINT8_MAX;
	uint16_t x428 = 408U;
	static volatile int32_t t60 = 34405;

    t60 = ((x425>>(x426==x427))<=x428);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x433 = UINT8_MAX;
	uint8_t x435 = UINT8_MAX;
	int32_t t61 = 206;

    t61 = ((x433>>(x434==x435))<=x436);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x445 = 4416505U;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = 788U;
	volatile int32_t t62 = 1794045;

    t62 = ((x445>>(x446==x447))<=x448);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x449 = INT64_MAX;
	uint8_t x450 = UINT8_MAX;
	int16_t x452 = -2;
	int32_t t63 = 46855;

    t63 = ((x449>>(x450==x451))<=x452);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x454 = INT16_MAX;
	int8_t x455 = INT8_MIN;
	int32_t t64 = -1;

    t64 = ((x453>>(x454==x455))<=x456);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x458 = 23117183757LLU;
	int64_t x459 = 3854551936029084LL;
	uint8_t x460 = UINT8_MAX;
	int32_t t65 = 2359697;

    t65 = ((x457>>(x458==x459))<=x460);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x465 = 126719290608285LL;
	int32_t x466 = INT32_MIN;
	volatile uint32_t x467 = 28923U;
	int32_t x468 = -1;

    t66 = ((x465>>(x466==x467))<=x468);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x481 = UINT64_MAX;
	volatile uint64_t x482 = 67LLU;
	static int32_t t67 = 7508;

    t67 = ((x481>>(x482==x483))<=x484);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x485 = 0;
	int8_t x486 = INT8_MIN;
	volatile int16_t x487 = -297;
	uint16_t x488 = 2U;
	volatile int32_t t68 = 8911;

    t68 = ((x485>>(x486==x487))<=x488);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x489 = 7270662425928749LL;
	static uint64_t x490 = 237941090883603LLU;
	int32_t x491 = INT32_MIN;
	static uint8_t x492 = UINT8_MAX;

    t69 = ((x489>>(x490==x491))<=x492);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x509 = 526283279286337LLU;
	int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MIN;
	static volatile int32_t t70 = 3;

    t70 = ((x509>>(x510==x511))<=x512);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x513 = 14608732414LLU;
	int32_t x514 = INT32_MIN;
	uint8_t x516 = UINT8_MAX;
	volatile int32_t t71 = -1791;

    t71 = ((x513>>(x514==x515))<=x516);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile uint16_t x522 = 2960U;
	uint64_t x523 = 116594495059LLU;
	int16_t x524 = -1;
	int32_t t72 = 0;

    t72 = ((x521>>(x522==x523))<=x524);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x525 = UINT64_MAX;
	static int8_t x527 = 13;

    t73 = ((x525>>(x526==x527))<=x528);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x529 = 0U;
	static volatile int8_t x530 = INT8_MIN;
	uint8_t x531 = 0U;
	volatile uint8_t x532 = 45U;
	static int32_t t74 = 14108791;

    t74 = ((x529>>(x530==x531))<=x532);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x533 = INT64_MAX;
	int32_t x534 = INT32_MIN;
	static volatile int32_t x535 = INT32_MIN;
	volatile int8_t x536 = INT8_MIN;
	static int32_t t75 = -65510;

    t75 = ((x533>>(x534==x535))<=x536);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x537 = UINT8_MAX;
	static uint64_t x539 = UINT64_MAX;

    t76 = ((x537>>(x538==x539))<=x540);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x545 = UINT8_MAX;
	uint8_t x546 = 3U;
	uint16_t x547 = UINT16_MAX;
	volatile int32_t x548 = INT32_MIN;
	volatile int32_t t77 = 1905807;

    t77 = ((x545>>(x546==x547))<=x548);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x557 = INT32_MAX;
	int32_t x558 = INT32_MIN;
	static int64_t x560 = -412LL;
	int32_t t78 = 313810;

    t78 = ((x557>>(x558==x559))<=x560);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x569 = 0LLU;
	int32_t x570 = -15647347;
	int64_t x571 = INT64_MIN;
	static volatile int64_t x572 = INT64_MAX;
	int32_t t79 = 9901407;

    t79 = ((x569>>(x570==x571))<=x572);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x573 = 0U;
	volatile int64_t x574 = INT64_MIN;
	volatile int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;

    t80 = ((x573>>(x574==x575))<=x576);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x577 = INT32_MAX;
	static uint32_t x578 = 304U;
	int8_t x579 = INT8_MAX;
	static uint32_t x580 = 36544362U;

    t81 = ((x577>>(x578==x579))<=x580);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x581 = 120U;
	volatile int8_t x582 = -4;
	static int8_t x583 = INT8_MAX;
	int8_t x584 = -1;
	volatile int32_t t82 = -423225;

    t82 = ((x581>>(x582==x583))<=x584);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x585 = INT64_MAX;
	static int64_t x586 = INT64_MIN;
	uint64_t x587 = UINT64_MAX;
	volatile int32_t t83 = 548522;

    t83 = ((x585>>(x586==x587))<=x588);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x597 = 1834887277U;
	int32_t x598 = 198873;
	int16_t x599 = -1;
	volatile int16_t x600 = INT16_MIN;
	volatile int32_t t84 = 1;

    t84 = ((x597>>(x598==x599))<=x600);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x601 = INT8_MAX;
	int16_t x602 = 1;
	uint8_t x603 = 1U;
	int32_t x604 = INT32_MIN;
	int32_t t85 = 15961;

    t85 = ((x601>>(x602==x603))<=x604);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x613 = 31U;
	uint64_t x614 = 245892427141456091LLU;
	int64_t x615 = INT64_MIN;
	volatile int32_t x616 = -1;
	volatile int32_t t86 = 8878;

    t86 = ((x613>>(x614==x615))<=x616);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x621 = UINT16_MAX;
	int32_t x622 = -1;

    t87 = ((x621>>(x622==x623))<=x624);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x629 = 743;
	volatile int32_t x631 = INT32_MAX;
	int16_t x632 = INT16_MIN;
	static volatile int32_t t88 = -32074828;

    t88 = ((x629>>(x630==x631))<=x632);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x637 = INT64_MAX;
	int64_t x638 = -1LL;
	volatile int64_t x640 = INT64_MIN;
	volatile int32_t t89 = 1;

    t89 = ((x637>>(x638==x639))<=x640);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x641 = UINT8_MAX;
	static uint64_t x643 = 27011632LLU;
	static volatile int64_t x644 = -1LL;
	volatile int32_t t90 = -20140;

    t90 = ((x641>>(x642==x643))<=x644);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x649 = 19U;
	static int8_t x650 = INT8_MIN;
	uint16_t x651 = UINT16_MAX;
	volatile int32_t t91 = -19606;

    t91 = ((x649>>(x650==x651))<=x652);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x654 = INT64_MAX;
	static uint8_t x656 = 34U;
	static int32_t t92 = 1;

    t92 = ((x653>>(x654==x655))<=x656);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x661 = INT64_MAX;
	int64_t x662 = INT64_MIN;
	int16_t x663 = INT16_MIN;
	static int8_t x664 = -38;
	volatile int32_t t93 = 1;

    t93 = ((x661>>(x662==x663))<=x664);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x665 = 271;
	static int64_t x666 = INT64_MAX;
	int16_t x667 = INT16_MAX;
	static int16_t x668 = 0;
	volatile int32_t t94 = 7;

    t94 = ((x665>>(x666==x667))<=x668);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x670 = 8;
	uint16_t x672 = 0U;

    t95 = ((x669>>(x670==x671))<=x672);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x701 = 3;
	static int64_t x702 = -1LL;
	static int64_t x703 = INT64_MIN;
	int64_t x704 = INT64_MIN;
	int32_t t96 = -109;

    t96 = ((x701>>(x702==x703))<=x704);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x705 = 0U;
	int16_t x706 = INT16_MIN;
	uint8_t x707 = UINT8_MAX;
	uint32_t x708 = 2360762U;
	static int32_t t97 = 116;

    t97 = ((x705>>(x706==x707))<=x708);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x709 = 123U;
	int64_t x711 = INT64_MAX;
	int32_t t98 = -27;

    t98 = ((x709>>(x710==x711))<=x712);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x718 = 151331LLU;
	volatile uint8_t x719 = UINT8_MAX;
	int16_t x720 = INT16_MAX;
	volatile int32_t t99 = 39616184;

    t99 = ((x717>>(x718==x719))<=x720);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x734 = 5;
	uint32_t x736 = UINT32_MAX;
	int32_t t100 = -7577192;

    t100 = ((x733>>(x734==x735))<=x736);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x737 = UINT8_MAX;
	int8_t x739 = -1;
	uint16_t x740 = UINT16_MAX;
	int32_t t101 = -18152516;

    t101 = ((x737>>(x738==x739))<=x740);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int8_t x742 = INT8_MAX;
	int16_t x744 = INT16_MIN;
	int32_t t102 = -1021204;

    t102 = ((x741>>(x742==x743))<=x744);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x745 = 6001LL;
	uint8_t x748 = 0U;
	volatile int32_t t103 = -1;

    t103 = ((x745>>(x746==x747))<=x748);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x761 = UINT16_MAX;
	int8_t x762 = -1;
	static int16_t x763 = INT16_MAX;
	static volatile int32_t t104 = 0;

    t104 = ((x761>>(x762==x763))<=x764);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x777 = INT8_MAX;
	volatile uint16_t x778 = UINT16_MAX;
	int8_t x780 = 0;
	int32_t t105 = 10;

    t105 = ((x777>>(x778==x779))<=x780);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x793 = 52;
	static int64_t x794 = -1LL;
	int8_t x795 = -19;
	static int16_t x796 = INT16_MAX;
	int32_t t106 = 991;

    t106 = ((x793>>(x794==x795))<=x796);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x797 = UINT64_MAX;
	static volatile uint16_t x798 = 9708U;
	int16_t x799 = INT16_MIN;
	int32_t x800 = INT32_MIN;
	int32_t t107 = 18526400;

    t107 = ((x797>>(x798==x799))<=x800);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x805 = 88U;
	int64_t x806 = -1LL;
	uint8_t x807 = 3U;
	int32_t t108 = -120682;

    t108 = ((x805>>(x806==x807))<=x808);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint64_t x821 = 7328752LLU;
	int8_t x822 = INT8_MIN;
	static volatile int32_t t109 = -1;

    t109 = ((x821>>(x822==x823))<=x824);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x830 = -1;
	static int64_t x831 = INT64_MAX;
	volatile int16_t x832 = -19;

    t110 = ((x829>>(x830==x831))<=x832);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x837 = 25LLU;
	uint16_t x838 = 604U;
	int8_t x839 = INT8_MIN;
	static int64_t x840 = -6812569LL;
	int32_t t111 = 3761;

    t111 = ((x837>>(x838==x839))<=x840);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x841 = 118U;
	static uint16_t x842 = 3984U;
	static uint8_t x843 = 6U;
	int8_t x844 = 1;
	volatile int32_t t112 = 283178;

    t112 = ((x841>>(x842==x843))<=x844);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x845 = UINT32_MAX;
	uint8_t x846 = 16U;
	uint16_t x847 = UINT16_MAX;
	int64_t x848 = -394342505LL;
	int32_t t113 = -490;

    t113 = ((x845>>(x846==x847))<=x848);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x853 = 547103753759603870LL;
	volatile uint64_t x854 = UINT64_MAX;
	int16_t x855 = 3;
	int8_t x856 = 1;
	int32_t t114 = 4;

    t114 = ((x853>>(x854==x855))<=x856);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x861 = INT16_MAX;
	uint16_t x862 = 13652U;
	static uint64_t x863 = 3194738632079919523LLU;
	int8_t x864 = -1;
	volatile int32_t t115 = -727;

    t115 = ((x861>>(x862==x863))<=x864);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x865 = 255830019U;
	uint32_t x866 = 109245U;
	int64_t x867 = 27990814349564LL;

    t116 = ((x865>>(x866==x867))<=x868);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x881 = 11U;
	uint16_t x882 = UINT16_MAX;
	uint32_t x883 = 8848987U;
	volatile uint16_t x884 = 2902U;

    t117 = ((x881>>(x882==x883))<=x884);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x885 = INT8_MAX;
	static int32_t x886 = INT32_MIN;
	static int32_t x887 = INT32_MIN;
	int32_t t118 = 10040;

    t118 = ((x885>>(x886==x887))<=x888);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x893 = 25U;
	uint16_t x895 = UINT16_MAX;
	int8_t x896 = INT8_MAX;
	static volatile int32_t t119 = -275632;

    t119 = ((x893>>(x894==x895))<=x896);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x897 = INT16_MAX;
	volatile uint16_t x898 = 1746U;
	uint64_t x899 = 4459519377053LLU;
	static uint16_t x900 = UINT16_MAX;

    t120 = ((x897>>(x898==x899))<=x900);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x901 = INT8_MAX;
	int32_t x902 = -268877;
	int8_t x903 = -1;
	volatile int32_t t121 = -257288;

    t121 = ((x901>>(x902==x903))<=x904);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x905 = UINT16_MAX;
	int64_t x906 = INT64_MIN;
	volatile int64_t x907 = -270273079203795LL;
	int8_t x908 = INT8_MIN;

    t122 = ((x905>>(x906==x907))<=x908);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x910 = INT64_MIN;
	volatile int32_t x911 = INT32_MIN;
	static int32_t t123 = 1;

    t123 = ((x909>>(x910==x911))<=x912);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x917 = 3810U;
	static volatile int16_t x919 = INT16_MIN;
	uint16_t x920 = 8U;
	int32_t t124 = 10288735;

    t124 = ((x917>>(x918==x919))<=x920);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x921 = 3;
	static volatile int32_t x922 = INT32_MIN;
	static int32_t x923 = INT32_MIN;
	int8_t x924 = -4;
	volatile int32_t t125 = -1595154;

    t125 = ((x921>>(x922==x923))<=x924);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x926 = 659;

    t126 = ((x925>>(x926==x927))<=x928);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x929 = UINT8_MAX;
	uint16_t x931 = 202U;
	int16_t x932 = 4;
	static volatile int32_t t127 = -951;

    t127 = ((x929>>(x930==x931))<=x932);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x933 = 22;
	uint8_t x934 = 0U;
	int16_t x935 = 148;
	static int32_t t128 = 119949;

    t128 = ((x933>>(x934==x935))<=x936);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x941 = INT8_MAX;
	static int64_t x943 = INT64_MIN;
	int32_t t129 = 6;

    t129 = ((x941>>(x942==x943))<=x944);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x948 = -1;
	volatile int32_t t130 = 167;

    t130 = ((x945>>(x946==x947))<=x948);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x953 = UINT32_MAX;
	int16_t x954 = INT16_MAX;
	static int16_t x955 = -165;
	volatile int32_t t131 = 33209158;

    t131 = ((x953>>(x954==x955))<=x956);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x957 = 982543483LLU;
	int32_t x958 = INT32_MIN;
	int32_t x959 = INT32_MAX;
	uint32_t x960 = 394517937U;

    t132 = ((x957>>(x958==x959))<=x960);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x962 = 1514393U;
	static int32_t t133 = 793926876;

    t133 = ((x961>>(x962==x963))<=x964);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x968 = INT8_MAX;
	int32_t t134 = 1759;

    t134 = ((x965>>(x966==x967))<=x968);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x969 = 3U;
	uint16_t x970 = 19U;
	int16_t x972 = INT16_MIN;

    t135 = ((x969>>(x970==x971))<=x972);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x973 = 207U;
	static volatile int16_t x974 = INT16_MIN;
	static volatile int32_t x975 = -27752785;

    t136 = ((x973>>(x974==x975))<=x976);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x977 = 247870627111185LLU;
	int64_t x978 = INT64_MIN;
	static uint16_t x979 = 363U;
	static int32_t t137 = -3313;

    t137 = ((x977>>(x978==x979))<=x980);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x981 = 349854063LLU;
	uint32_t x984 = UINT32_MAX;

    t138 = ((x981>>(x982==x983))<=x984);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x989 = 489367018263LLU;
	uint32_t x990 = 178906030U;
	static int32_t x991 = INT32_MIN;
	uint64_t x992 = 0LLU;
	volatile int32_t t139 = 5762;

    t139 = ((x989>>(x990==x991))<=x992);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x998 = INT8_MIN;
	int32_t x999 = INT32_MIN;
	int64_t x1000 = INT64_MIN;
	int32_t t140 = 842648;

    t140 = ((x997>>(x998==x999))<=x1000);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1001 = UINT64_MAX;
	int64_t x1002 = INT64_MIN;
	int8_t x1004 = INT8_MAX;
	int32_t t141 = -7807096;

    t141 = ((x1001>>(x1002==x1003))<=x1004);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1006 = -20;
	int32_t x1007 = -8;
	static int32_t x1008 = 870;

    t142 = ((x1005>>(x1006==x1007))<=x1008);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1014 = 6U;
	static volatile int64_t x1015 = INT64_MIN;
	static int8_t x1016 = INT8_MAX;
	static int32_t t143 = -53;

    t143 = ((x1013>>(x1014==x1015))<=x1016);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x1017 = UINT16_MAX;
	static int8_t x1018 = INT8_MAX;
	static volatile uint64_t x1019 = 211953006LLU;
	uint16_t x1020 = 1670U;

    t144 = ((x1017>>(x1018==x1019))<=x1020);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x1022 = 1U;
	static uint16_t x1023 = 2U;
	volatile int16_t x1024 = -1;
	volatile int32_t t145 = -2527;

    t145 = ((x1021>>(x1022==x1023))<=x1024);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1033 = 408828081U;
	int8_t x1034 = INT8_MIN;
	volatile uint8_t x1035 = 30U;
	static volatile int32_t t146 = 1760;

    t146 = ((x1033>>(x1034==x1035))<=x1036);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1037 = 27;
	volatile uint8_t x1039 = 0U;
	volatile int32_t t147 = -453121;

    t147 = ((x1037>>(x1038==x1039))<=x1040);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x1041 = INT16_MAX;
	uint64_t x1043 = UINT64_MAX;
	int16_t x1044 = INT16_MIN;
	volatile int32_t t148 = -178;

    t148 = ((x1041>>(x1042==x1043))<=x1044);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1049 = 32688996069LL;
	int16_t x1052 = INT16_MAX;

    t149 = ((x1049>>(x1050==x1051))<=x1052);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1065 = 2435676316538545276LLU;
	uint16_t x1066 = UINT16_MAX;
	int64_t x1067 = INT64_MIN;
	uint64_t x1068 = UINT64_MAX;
	int32_t t150 = 3725699;

    t150 = ((x1065>>(x1066==x1067))<=x1068);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x1077 = 244;
	uint64_t x1078 = UINT64_MAX;
	static uint64_t x1079 = UINT64_MAX;
	uint64_t x1080 = UINT64_MAX;

    t151 = ((x1077>>(x1078==x1079))<=x1080);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x1085 = INT8_MAX;
	uint64_t x1088 = 61947632360258LLU;
	volatile int32_t t152 = 0;

    t152 = ((x1085>>(x1086==x1087))<=x1088);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1093 = 42U;
	static int16_t x1094 = -1;
	int32_t x1095 = INT32_MAX;
	static uint32_t x1096 = 64030020U;

    t153 = ((x1093>>(x1094==x1095))<=x1096);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1097 = 1087049LLU;
	int64_t x1099 = 55936781033481229LL;
	int32_t x1100 = INT32_MAX;
	volatile int32_t t154 = -26166;

    t154 = ((x1097>>(x1098==x1099))<=x1100);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1115 = INT8_MIN;
	volatile uint32_t x1116 = UINT32_MAX;
	int32_t t155 = 17;

    t155 = ((x1113>>(x1114==x1115))<=x1116);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x1117 = UINT8_MAX;
	int64_t x1118 = INT64_MAX;
	uint16_t x1119 = 183U;
	uint8_t x1120 = 5U;
	volatile int32_t t156 = -9;

    t156 = ((x1117>>(x1118==x1119))<=x1120);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1125 = 146;
	int16_t x1126 = -9077;
	int8_t x1127 = INT8_MIN;
	int32_t x1128 = -1;
	int32_t t157 = -1501579;

    t157 = ((x1125>>(x1126==x1127))<=x1128);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x1134 = INT16_MIN;
	int8_t x1135 = INT8_MIN;
	int8_t x1136 = 34;
	volatile int32_t t158 = -30;

    t158 = ((x1133>>(x1134==x1135))<=x1136);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1141 = 131174884259555766LLU;
	int64_t x1142 = -2LL;
	volatile int32_t t159 = -50213;

    t159 = ((x1141>>(x1142==x1143))<=x1144);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1149 = 3426112143LL;
	int8_t x1151 = INT8_MIN;
	static int64_t x1152 = -1LL;
	volatile int32_t t160 = 25;

    t160 = ((x1149>>(x1150==x1151))<=x1152);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x1169 = UINT8_MAX;
	static uint16_t x1170 = 11943U;
	int64_t x1171 = INT64_MIN;
	uint32_t x1172 = UINT32_MAX;
	volatile int32_t t161 = 6817;

    t161 = ((x1169>>(x1170==x1171))<=x1172);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1173 = 0;
	int32_t x1174 = 35377;
	static int8_t x1176 = 2;
	volatile int32_t t162 = -166483675;

    t162 = ((x1173>>(x1174==x1175))<=x1176);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1181 = 965264900990067LL;
	volatile uint8_t x1182 = 0U;
	uint64_t x1183 = 1266LLU;
	uint8_t x1184 = UINT8_MAX;
	volatile int32_t t163 = -6123613;

    t163 = ((x1181>>(x1182==x1183))<=x1184);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1193 = INT32_MAX;
	static volatile uint64_t x1194 = 1211992108854LLU;
	volatile int8_t x1195 = INT8_MIN;
	int32_t t164 = 0;

    t164 = ((x1193>>(x1194==x1195))<=x1196);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x1197 = UINT8_MAX;
	int16_t x1198 = INT16_MIN;
	static volatile int16_t x1199 = -1;
	volatile int32_t x1200 = -27100546;
	volatile int32_t t165 = -13701957;

    t165 = ((x1197>>(x1198==x1199))<=x1200);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1201 = UINT64_MAX;
	volatile int32_t x1202 = 168;
	volatile uint16_t x1203 = 6U;
	volatile int16_t x1204 = INT16_MIN;
	volatile int32_t t166 = -312939806;

    t166 = ((x1201>>(x1202==x1203))<=x1204);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x1209 = 388724LLU;
	static int16_t x1210 = 88;
	volatile int64_t x1212 = INT64_MIN;
	volatile int32_t t167 = 9;

    t167 = ((x1209>>(x1210==x1211))<=x1212);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1213 = INT16_MAX;
	static uint16_t x1214 = 15U;
	volatile uint8_t x1215 = UINT8_MAX;
	volatile int8_t x1216 = INT8_MIN;
	int32_t t168 = -160638664;

    t168 = ((x1213>>(x1214==x1215))<=x1216);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1217 = 4U;
	uint32_t x1218 = UINT32_MAX;
	uint8_t x1219 = 36U;
	int32_t x1220 = 14034;
	int32_t t169 = 138;

    t169 = ((x1217>>(x1218==x1219))<=x1220);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1221 = INT16_MAX;
	volatile uint64_t x1223 = 29555LLU;
	int8_t x1224 = -1;
	int32_t t170 = 102960005;

    t170 = ((x1221>>(x1222==x1223))<=x1224);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1230 = INT32_MIN;
	static int64_t x1231 = INT64_MIN;
	int32_t t171 = -6290514;

    t171 = ((x1229>>(x1230==x1231))<=x1232);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1234 = 9977314810277LL;
	uint8_t x1235 = 124U;
	uint64_t x1236 = 54LLU;

    t172 = ((x1233>>(x1234==x1235))<=x1236);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1237 = 31;
	uint64_t x1238 = UINT64_MAX;
	static uint64_t x1239 = 53895LLU;
	int32_t t173 = 297606;

    t173 = ((x1237>>(x1238==x1239))<=x1240);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1241 = 504867725;
	uint32_t x1243 = 375300992U;
	int64_t x1244 = -1LL;

    t174 = ((x1241>>(x1242==x1243))<=x1244);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1245 = UINT16_MAX;
	uint64_t x1247 = 2LLU;
	int8_t x1248 = INT8_MIN;
	static volatile int32_t t175 = 151786082;

    t175 = ((x1245>>(x1246==x1247))<=x1248);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1249 = 204;
	int64_t x1250 = -28379261036LL;
	int16_t x1251 = INT16_MIN;
	volatile int32_t t176 = -250926;

    t176 = ((x1249>>(x1250==x1251))<=x1252);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1253 = INT64_MAX;
	int8_t x1255 = -2;
	uint16_t x1256 = 172U;
	volatile int32_t t177 = -10;

    t177 = ((x1253>>(x1254==x1255))<=x1256);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1257 = INT32_MAX;
	uint16_t x1258 = 25312U;
	int16_t x1259 = INT16_MAX;
	int32_t x1260 = INT32_MIN;
	volatile int32_t t178 = -335;

    t178 = ((x1257>>(x1258==x1259))<=x1260);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x1262 = INT32_MIN;
	int8_t x1264 = INT8_MIN;
	int32_t t179 = -4;

    t179 = ((x1261>>(x1262==x1263))<=x1264);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1269 = 235U;
	volatile int16_t x1270 = INT16_MIN;
	volatile uint16_t x1271 = 60U;
	int8_t x1272 = 0;
	volatile int32_t t180 = 273;

    t180 = ((x1269>>(x1270==x1271))<=x1272);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1274 = 6U;
	volatile int32_t x1275 = -284;
	int32_t x1276 = INT32_MIN;

    t181 = ((x1273>>(x1274==x1275))<=x1276);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1277 = 178;

    t182 = ((x1277>>(x1278==x1279))<=x1280);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x1281 = UINT32_MAX;
	int32_t x1282 = INT32_MAX;
	static int32_t x1284 = INT32_MIN;
	int32_t t183 = -832;

    t183 = ((x1281>>(x1282==x1283))<=x1284);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1289 = INT8_MAX;
	volatile uint16_t x1290 = 18896U;
	int16_t x1291 = 1;
	int64_t x1292 = -730078823LL;
	volatile int32_t t184 = -7095;

    t184 = ((x1289>>(x1290==x1291))<=x1292);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1297 = 3495000;
	int64_t x1298 = INT64_MIN;
	uint32_t x1299 = 1854236U;
	int8_t x1300 = -3;
	volatile int32_t t185 = 5;

    t185 = ((x1297>>(x1298==x1299))<=x1300);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1301 = 35;
	int16_t x1302 = -1;
	static volatile int32_t x1303 = -1045856;
	uint64_t x1304 = UINT64_MAX;
	volatile int32_t t186 = 2671;

    t186 = ((x1301>>(x1302==x1303))<=x1304);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1305 = 0;
	int16_t x1308 = -3;
	volatile int32_t t187 = 363;

    t187 = ((x1305>>(x1306==x1307))<=x1308);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1319 = 75314LLU;
	int8_t x1320 = INT8_MIN;
	int32_t t188 = 2796714;

    t188 = ((x1317>>(x1318==x1319))<=x1320);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1325 = INT32_MAX;
	uint64_t x1327 = UINT64_MAX;
	int16_t x1328 = -1;
	volatile int32_t t189 = 3;

    t189 = ((x1325>>(x1326==x1327))<=x1328);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1329 = INT16_MAX;
	static volatile int8_t x1331 = 5;

    t190 = ((x1329>>(x1330==x1331))<=x1332);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1346 = 8954U;
	uint16_t x1347 = 458U;
	int32_t x1348 = -1;
	int32_t t191 = 0;

    t191 = ((x1345>>(x1346==x1347))<=x1348);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1350 = 2767U;
	uint16_t x1351 = UINT16_MAX;
	volatile int16_t x1352 = -1;
	int32_t t192 = -42834378;

    t192 = ((x1349>>(x1350==x1351))<=x1352);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1357 = 211;
	int16_t x1358 = INT16_MIN;
	uint64_t x1359 = 33610630318980LLU;
	volatile int64_t x1360 = INT64_MIN;
	int32_t t193 = 439644971;

    t193 = ((x1357>>(x1358==x1359))<=x1360);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1361 = 35277337010984032LLU;
	int32_t x1363 = 98434;
	int16_t x1364 = 5;
	volatile int32_t t194 = 91953;

    t194 = ((x1361>>(x1362==x1363))<=x1364);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x1369 = 59U;
	int16_t x1371 = -1;
	int32_t t195 = -391;

    t195 = ((x1369>>(x1370==x1371))<=x1372);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1373 = UINT64_MAX;
	int8_t x1374 = INT8_MIN;
	volatile uint64_t x1375 = UINT64_MAX;
	uint16_t x1376 = 19042U;
	int32_t t196 = 3192029;

    t196 = ((x1373>>(x1374==x1375))<=x1376);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1377 = 24107894117908LLU;
	volatile uint32_t x1378 = UINT32_MAX;
	uint16_t x1380 = 11U;
	static int32_t t197 = 1274472;

    t197 = ((x1377>>(x1378==x1379))<=x1380);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1381 = INT16_MAX;
	int32_t x1382 = INT32_MIN;
	int64_t x1383 = 125092667784LL;
	int16_t x1384 = INT16_MIN;

    t198 = ((x1381>>(x1382==x1383))<=x1384);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1397 = 130067124575LLU;
	volatile int16_t x1398 = INT16_MIN;
	int32_t x1399 = 479064;
	uint16_t x1400 = 36U;
	int32_t t199 = -6803;

    t199 = ((x1397>>(x1398==x1399))<=x1400);

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

