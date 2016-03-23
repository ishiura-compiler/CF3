
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

static int16_t x2 = -1;
int32_t t0 = 282;
int64_t x10 = 150816437403968LL;
uint32_t x18 = 6U;
int8_t x24 = INT8_MAX;
int32_t x44 = INT32_MIN;
int64_t x49 = 508293811180626LL;
int16_t x51 = -3;
int32_t t7 = -253321378;
uint64_t x89 = UINT64_MAX;
int8_t x91 = -1;
int8_t x102 = INT8_MAX;
uint16_t x113 = 3U;
int8_t x119 = -1;
int32_t x120 = -221;
volatile int32_t t13 = -232723571;
volatile int32_t t15 = 3057;
static uint8_t x135 = 0U;
int8_t x141 = 13;
uint64_t x154 = 32053602349217578LLU;
uint8_t x155 = 1U;
int16_t x162 = 25;
uint16_t x163 = UINT16_MAX;
int64_t x166 = -4420693215LL;
int32_t x194 = INT32_MAX;
int16_t x221 = 1;
uint64_t x222 = UINT64_MAX;
static uint64_t x232 = 7823532961924669LLU;
static int16_t x234 = INT16_MAX;
static int32_t t26 = 3138438;
static int16_t x251 = 1;
int32_t x254 = -180528541;
uint64_t x256 = 17516620064644LLU;
int32_t x271 = -4733837;
static uint64_t x281 = 870942006758349LLU;
int8_t x294 = INT8_MAX;
uint64_t x300 = 123899LLU;
int8_t x301 = 1;
volatile uint8_t x302 = UINT8_MAX;
int32_t t36 = -46;
uint32_t x308 = 145153U;
volatile int32_t t37 = 2723;
volatile int32_t t41 = 1757378;
volatile int32_t t42 = 5197106;
static uint32_t x351 = 0U;
volatile int32_t t43 = 87985;
static volatile uint64_t x369 = UINT64_MAX;
int8_t x376 = INT8_MIN;
int32_t t46 = -1082065;
int32_t x384 = INT32_MAX;
volatile uint32_t x385 = 191U;
uint64_t x389 = 1674705595LLU;
uint32_t x401 = 85U;
int16_t x404 = -1;
static int16_t x405 = 85;
uint16_t x464 = UINT16_MAX;
volatile int32_t t57 = -1649;
int8_t x505 = 0;
int64_t x517 = INT64_MAX;
int64_t x523 = INT64_MAX;
volatile int16_t x533 = INT16_MAX;
int8_t x534 = 16;
volatile int32_t t65 = -3109;
uint16_t x539 = UINT16_MAX;
int32_t t66 = -2355;
uint16_t x541 = 31371U;
volatile int8_t x542 = -22;
volatile uint16_t x548 = 5U;
static int32_t t70 = 1620199;
int32_t t72 = -13;
int16_t x583 = INT16_MIN;
static uint32_t x588 = 405U;
int64_t x594 = INT64_MIN;
int16_t x608 = INT16_MIN;
int64_t x612 = -54925348039LL;
uint8_t x617 = UINT8_MAX;
uint32_t x618 = 1789063461U;
static int16_t x619 = -1;
static int64_t x620 = 68945025LL;
volatile uint32_t x622 = UINT32_MAX;
int64_t x624 = -5786861144913LL;
int32_t t80 = -5275;
static int16_t x629 = INT16_MAX;
int32_t x631 = INT32_MIN;
static volatile int32_t x637 = 1;
static volatile int16_t x639 = INT16_MAX;
int32_t x663 = INT32_MIN;
int16_t x676 = 0;
uint64_t x677 = 14358572LLU;
int16_t x680 = INT16_MIN;
int64_t x684 = INT64_MAX;
volatile uint8_t x701 = UINT8_MAX;
uint16_t x713 = UINT16_MAX;
uint32_t x717 = UINT32_MAX;
uint64_t x719 = 3992997LLU;
static int32_t t94 = -47418;
int64_t x725 = 157LL;
int32_t x727 = -1;
int8_t x734 = -1;
uint8_t x749 = 51U;
static int32_t x751 = INT32_MIN;
int8_t x762 = -1;
int8_t x763 = INT8_MIN;
int8_t x764 = INT8_MAX;
int16_t x771 = -1;
static int16_t x774 = -42;
int32_t x775 = 4;
int64_t x790 = -102860LL;
uint64_t x811 = 3LLU;
volatile int32_t x815 = -3;
int16_t x816 = -1;
int32_t x838 = INT32_MAX;
static int64_t x839 = INT64_MIN;
volatile int32_t t109 = 4;
int16_t x869 = 0;
int32_t x871 = INT32_MAX;
uint32_t x882 = UINT32_MAX;
static uint64_t x883 = 3665194LLU;
static uint16_t x886 = 2U;
int16_t x888 = 10;
uint16_t x889 = 1U;
int64_t x907 = -1LL;
int8_t x913 = 0;
int16_t x914 = INT16_MIN;
int8_t x932 = 0;
static uint64_t x938 = 700088178219403LLU;
int32_t x939 = INT32_MAX;
uint64_t x956 = 783530066861336974LLU;
int32_t x963 = INT32_MIN;
int8_t x982 = INT8_MAX;
uint8_t x997 = UINT8_MAX;
int32_t t130 = 5728;
int8_t x1031 = INT8_MIN;
static volatile uint16_t x1046 = 5668U;
uint8_t x1096 = 29U;
static uint64_t x1097 = UINT64_MAX;
volatile int8_t x1106 = INT8_MIN;
volatile int32_t x1116 = INT32_MAX;
int16_t x1137 = 0;
int32_t x1152 = 25983;
volatile uint64_t x1157 = 1285434409880LLU;
int16_t x1180 = INT16_MIN;
int64_t x1186 = -59627429848959427LL;
volatile int16_t x1189 = INT16_MAX;
volatile int32_t t150 = 1;
volatile int8_t x1210 = INT8_MIN;
int32_t t151 = 762625;
uint32_t x1221 = 2348U;
int64_t x1224 = -194309218LL;
int8_t x1251 = INT8_MIN;
uint16_t x1259 = UINT16_MAX;
int8_t x1263 = INT8_MIN;
int64_t x1269 = 559LL;
int32_t t159 = 13127860;
uint64_t x1292 = 148912287568415LLU;
int32_t x1310 = INT32_MIN;
static volatile uint64_t x1311 = 32847LLU;
volatile int32_t t163 = 28;
int8_t x1322 = INT8_MIN;
int32_t x1325 = 6;
int32_t t166 = -60;
volatile uint32_t x1389 = 15U;
int32_t x1390 = 0;
uint64_t x1426 = UINT64_MAX;
int32_t t177 = 1;
int8_t x1448 = 38;
static int32_t x1461 = 58170773;
uint8_t x1468 = UINT8_MAX;
volatile int32_t t183 = -401760;
int64_t x1475 = -1LL;
uint64_t x1476 = 94845056LLU;
static int32_t t184 = -85;
static int16_t x1498 = INT16_MIN;
static volatile int16_t x1500 = 16;
int64_t x1511 = -1LL;
int8_t x1517 = 1;
int32_t t191 = -131375328;
int64_t x1543 = -1LL;
uint64_t x1546 = UINT64_MAX;
volatile int64_t x1576 = INT64_MAX;


void f0(void) {
    	static volatile uint8_t x1 = 0U;
	int32_t x3 = -7650199;
	int64_t x4 = INT64_MAX;

    t0 = ((x1<<(x2<=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = UINT32_MAX;
	volatile uint32_t x11 = UINT32_MAX;
	int32_t x12 = -21978;
	int32_t t1 = -199;

    t1 = ((x9<<(x10<=x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x19 = -1LL;
	uint16_t x20 = 5093U;
	volatile int32_t t2 = -1336;

    t2 = ((x17<<(x18<=x19))==x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = 143;
	static uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = INT32_MAX;
	volatile int32_t t3 = -1001651323;

    t3 = ((x21<<(x22<=x23))==x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x41 = 1953LLU;
	int64_t x42 = INT64_MAX;
	int32_t x43 = -1;
	int32_t t4 = 866281241;

    t4 = ((x41<<(x42<=x43))==x44);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x50 = 10;
	int16_t x52 = 344;
	volatile int32_t t5 = 2296885;

    t5 = ((x49<<(x50<=x51))==x52);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x65 = 165U;
	uint64_t x66 = 2409245429LLU;
	static volatile int32_t x67 = -2108;
	int16_t x68 = -37;
	volatile int32_t t6 = 18;

    t6 = ((x65<<(x66<=x67))==x68);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x77 = 0;
	int8_t x78 = INT8_MAX;
	volatile int16_t x79 = -1;
	uint64_t x80 = UINT64_MAX;

    t7 = ((x77<<(x78<=x79))==x80);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x85 = 26U;
	int64_t x86 = INT64_MIN;
	int32_t x87 = -8010601;
	static volatile uint64_t x88 = UINT64_MAX;
	int32_t t8 = 3912687;

    t8 = ((x85<<(x86<=x87))==x88);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x90 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t9 = 1015414162;

    t9 = ((x89<<(x90<=x91))==x92);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x93 = UINT32_MAX;
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = INT8_MAX;
	uint8_t x96 = 0U;
	static int32_t t10 = -2;

    t10 = ((x93<<(x94<=x95))==x96);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x101 = 42658U;
	int16_t x103 = 0;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t11 = 12390;

    t11 = ((x101<<(x102<=x103))==x104);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x114 = -11950485357LL;
	uint32_t x115 = UINT32_MAX;
	uint64_t x116 = UINT64_MAX;
	static int32_t t12 = 11;

    t12 = ((x113<<(x114<=x115))==x116);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x117 = 2U;
	int8_t x118 = -1;

    t13 = ((x117<<(x118<=x119))==x120);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x125 = 52;
	int64_t x126 = -134LL;
	int8_t x127 = INT8_MIN;
	volatile uint64_t x128 = 5LLU;
	int32_t t14 = -23;

    t14 = ((x125<<(x126<=x127))==x128);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x129 = 0U;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	static volatile uint8_t x132 = 87U;

    t15 = ((x129<<(x130<=x131))==x132);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x133 = 161792LLU;
	int32_t x134 = INT32_MAX;
	int64_t x136 = -1LL;
	volatile int32_t t16 = -1477;

    t16 = ((x133<<(x134<=x135))==x136);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x142 = INT8_MIN;
	uint64_t x143 = 98059019306LLU;
	uint16_t x144 = 2U;
	int32_t t17 = 14;

    t17 = ((x141<<(x142<=x143))==x144);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x153 = 11;
	uint32_t x156 = 18462U;
	volatile int32_t t18 = 1;

    t18 = ((x153<<(x154<=x155))==x156);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x161 = UINT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t19 = -148255182;

    t19 = ((x161<<(x162<=x163))==x164);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x165 = 1498U;
	int8_t x167 = 24;
	int8_t x168 = INT8_MIN;
	volatile int32_t t20 = 4493;

    t20 = ((x165<<(x166<=x167))==x168);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x189 = 456U;
	int64_t x190 = -1LL;
	int64_t x191 = -1LL;
	volatile uint32_t x192 = 24823929U;
	volatile int32_t t21 = 32698530;

    t21 = ((x189<<(x190<=x191))==x192);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x193 = 7U;
	int32_t x195 = -5301;
	volatile int64_t x196 = -229LL;
	static int32_t t22 = -256;

    t22 = ((x193<<(x194<=x195))==x196);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x223 = 1914088628U;
	volatile int64_t x224 = 521696315184763LL;
	volatile int32_t t23 = 20640790;

    t23 = ((x221<<(x222<=x223))==x224);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x225 = 8047765349LLU;
	static uint32_t x226 = 3345U;
	static uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MAX;
	int32_t t24 = -15400;

    t24 = ((x225<<(x226<=x227))==x228);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x229 = 1U;
	int32_t x230 = INT32_MIN;
	static uint32_t x231 = 11974U;
	int32_t t25 = 0;

    t25 = ((x229<<(x230<=x231))==x232);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x233 = UINT32_MAX;
	volatile int64_t x235 = 41577863LL;
	volatile int8_t x236 = -1;

    t26 = ((x233<<(x234<=x235))==x236);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x245 = 7U;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -1;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t27 = 776418059;

    t27 = ((x245<<(x246<=x247))==x248);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x249 = UINT8_MAX;
	int16_t x250 = -202;
	int64_t x252 = INT64_MAX;
	volatile int32_t t28 = 30250;

    t28 = ((x249<<(x250<=x251))==x252);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x253 = 2884U;
	volatile uint32_t x255 = 1122810036U;
	volatile int32_t t29 = 2;

    t29 = ((x253<<(x254<=x255))==x256);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x269 = UINT64_MAX;
	int8_t x270 = -1;
	uint64_t x272 = 28816574455LLU;
	int32_t t30 = -200723376;

    t30 = ((x269<<(x270<=x271))==x272);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x282 = 2U;
	static int32_t x283 = INT32_MIN;
	uint64_t x284 = 2108121LLU;
	volatile int32_t t31 = -26;

    t31 = ((x281<<(x282<=x283))==x284);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x285 = 3171U;
	volatile int32_t x286 = -8171040;
	static int16_t x287 = INT16_MIN;
	volatile int64_t x288 = -61721LL;
	int32_t t32 = -29477;

    t32 = ((x285<<(x286<=x287))==x288);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x289 = 0;
	int64_t x290 = INT64_MIN;
	static volatile int32_t x291 = -1;
	uint32_t x292 = UINT32_MAX;
	int32_t t33 = -47;

    t33 = ((x289<<(x290<=x291))==x292);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x293 = 5U;
	volatile uint8_t x295 = UINT8_MAX;
	static uint16_t x296 = 1U;
	volatile int32_t t34 = -38;

    t34 = ((x293<<(x294<=x295))==x296);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x297 = INT16_MAX;
	uint16_t x298 = 5U;
	int32_t x299 = INT32_MIN;
	int32_t t35 = -5853660;

    t35 = ((x297<<(x298<=x299))==x300);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x303 = 51;
	int32_t x304 = -1;

    t36 = ((x301<<(x302<=x303))==x304);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x305 = INT32_MAX;
	int16_t x306 = -220;
	int64_t x307 = INT64_MIN;

    t37 = ((x305<<(x306<=x307))==x308);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = -7425949LL;
	static uint8_t x312 = 1U;
	int32_t t38 = -501;

    t38 = ((x309<<(x310<=x311))==x312);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x313 = INT8_MAX;
	int32_t x314 = INT32_MIN;
	volatile int32_t x315 = INT32_MAX;
	static volatile int64_t x316 = INT64_MIN;
	int32_t t39 = -8384;

    t39 = ((x313<<(x314<=x315))==x316);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x317 = 56188119436493LL;
	uint32_t x318 = 32U;
	static int32_t x319 = INT32_MIN;
	volatile int64_t x320 = 115639LL;
	int32_t t40 = -60316431;

    t40 = ((x317<<(x318<=x319))==x320);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x329 = INT16_MAX;
	static int64_t x330 = -39411142LL;
	int8_t x331 = INT8_MAX;
	int64_t x332 = 199794LL;

    t41 = ((x329<<(x330<=x331))==x332);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x337 = 4517LL;
	int16_t x338 = INT16_MAX;
	static int32_t x339 = -1;
	int16_t x340 = INT16_MAX;

    t42 = ((x337<<(x338<=x339))==x340);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x349 = INT32_MAX;
	uint32_t x350 = 5044109U;
	uint16_t x352 = 10U;

    t43 = ((x349<<(x350<=x351))==x352);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x353 = 88U;
	uint64_t x354 = UINT64_MAX;
	volatile int64_t x355 = -1LL;
	uint64_t x356 = 69LLU;
	int32_t t44 = -2;

    t44 = ((x353<<(x354<=x355))==x356);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x370 = 667609151333671LLU;
	int16_t x371 = 1230;
	static int8_t x372 = 3;
	volatile int32_t t45 = 1;

    t45 = ((x369<<(x370<=x371))==x372);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x373 = 211567290208129LLU;
	uint8_t x374 = UINT8_MAX;
	int16_t x375 = INT16_MIN;

    t46 = ((x373<<(x374<=x375))==x376);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x377 = 414U;
	static volatile int64_t x378 = INT64_MIN;
	uint8_t x379 = 5U;
	int8_t x380 = INT8_MAX;
	volatile int32_t t47 = -7334166;

    t47 = ((x377<<(x378<=x379))==x380);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x381 = 81450U;
	int8_t x382 = INT8_MAX;
	int16_t x383 = INT16_MIN;
	volatile int32_t t48 = -998375;

    t48 = ((x381<<(x382<=x383))==x384);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x386 = 7;
	static int64_t x387 = INT64_MIN;
	volatile uint16_t x388 = 306U;
	static volatile int32_t t49 = 796824801;

    t49 = ((x385<<(x386<=x387))==x388);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x390 = 0U;
	int8_t x391 = 0;
	int8_t x392 = INT8_MIN;
	volatile int32_t t50 = 59;

    t50 = ((x389<<(x390<=x391))==x392);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x393 = INT64_MAX;
	int64_t x394 = 38540165281779730LL;
	static int32_t x395 = -1;
	uint32_t x396 = 1645U;
	static int32_t t51 = 194270821;

    t51 = ((x393<<(x394<=x395))==x396);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x402 = 11U;
	static int32_t x403 = INT32_MIN;
	static int32_t t52 = 16360;

    t52 = ((x401<<(x402<=x403))==x404);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x406 = -2;
	volatile int8_t x407 = INT8_MIN;
	static int64_t x408 = -1LL;
	int32_t t53 = -477119;

    t53 = ((x405<<(x406<=x407))==x408);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x429 = 29114340U;
	static int16_t x430 = INT16_MIN;
	int16_t x431 = -1;
	int8_t x432 = -11;
	static volatile int32_t t54 = -22622468;

    t54 = ((x429<<(x430<=x431))==x432);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x449 = UINT8_MAX;
	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	volatile int64_t x452 = INT64_MIN;
	int32_t t55 = 1206;

    t55 = ((x449<<(x450<=x451))==x452);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x461 = INT16_MAX;
	volatile int16_t x462 = INT16_MIN;
	int16_t x463 = INT16_MIN;
	int32_t t56 = -6094;

    t56 = ((x461<<(x462<=x463))==x464);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x477 = 30027444LL;
	uint32_t x478 = 28U;
	uint64_t x479 = 22LLU;
	uint64_t x480 = 12287LLU;

    t57 = ((x477<<(x478<=x479))==x480);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x489 = UINT64_MAX;
	int8_t x490 = INT8_MAX;
	int64_t x491 = -1LL;
	uint16_t x492 = 2361U;
	static int32_t t58 = 30275;

    t58 = ((x489<<(x490<=x491))==x492);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x497 = 1006U;
	uint64_t x498 = 3856LLU;
	uint64_t x499 = UINT64_MAX;
	uint64_t x500 = 3222LLU;
	int32_t t59 = 105584;

    t59 = ((x497<<(x498<=x499))==x500);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x501 = UINT32_MAX;
	uint64_t x502 = UINT64_MAX;
	volatile uint16_t x503 = 7U;
	int8_t x504 = 25;
	int32_t t60 = 7776;

    t60 = ((x501<<(x502<=x503))==x504);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x506 = INT64_MAX;
	int32_t x507 = INT32_MAX;
	int32_t x508 = INT32_MIN;
	static int32_t t61 = -51;

    t61 = ((x505<<(x506<=x507))==x508);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x513 = INT8_MAX;
	uint32_t x514 = 99U;
	volatile uint8_t x515 = 6U;
	int16_t x516 = -1;
	volatile int32_t t62 = -206114;

    t62 = ((x513<<(x514<=x515))==x516);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x518 = 31;
	int64_t x519 = -1LL;
	int32_t x520 = -64370597;
	volatile int32_t t63 = 15950;

    t63 = ((x517<<(x518<=x519))==x520);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x521 = UINT64_MAX;
	int32_t x522 = INT32_MAX;
	static volatile int16_t x524 = -63;
	volatile int32_t t64 = 3;

    t64 = ((x521<<(x522<=x523))==x524);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x535 = -225;
	int16_t x536 = -1;

    t65 = ((x533<<(x534<=x535))==x536);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x537 = 656301799;
	int16_t x538 = 1343;
	uint32_t x540 = UINT32_MAX;

    t66 = ((x537<<(x538<=x539))==x540);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x543 = 901LLU;
	uint8_t x544 = UINT8_MAX;
	int32_t t67 = -987125382;

    t67 = ((x541<<(x542<=x543))==x544);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x545 = 13;
	int8_t x546 = INT8_MAX;
	int8_t x547 = INT8_MIN;
	volatile int32_t t68 = 121159;

    t68 = ((x545<<(x546<=x547))==x548);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x557 = 0;
	static volatile uint8_t x558 = 25U;
	static uint32_t x559 = UINT32_MAX;
	int64_t x560 = INT64_MAX;
	int32_t t69 = 510651;

    t69 = ((x557<<(x558<=x559))==x560);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x561 = 82U;
	int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	int32_t x564 = 253101;

    t70 = ((x561<<(x562<=x563))==x564);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x569 = 1729161LL;
	uint32_t x570 = 27110U;
	int8_t x571 = -1;
	volatile uint32_t x572 = 124041393U;
	static volatile int32_t t71 = 1035081990;

    t71 = ((x569<<(x570<=x571))==x572);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x573 = UINT32_MAX;
	static int16_t x574 = -1;
	static uint16_t x575 = 3U;
	uint64_t x576 = UINT64_MAX;

    t72 = ((x573<<(x574<=x575))==x576);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x581 = 3479;
	static int8_t x582 = INT8_MIN;
	volatile int16_t x584 = -2;
	static volatile int32_t t73 = 199;

    t73 = ((x581<<(x582<=x583))==x584);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x585 = UINT32_MAX;
	int8_t x586 = INT8_MIN;
	uint64_t x587 = 66621844997LLU;
	volatile int32_t t74 = 4244;

    t74 = ((x585<<(x586<=x587))==x588);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x593 = 3U;
	uint8_t x595 = 1U;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t75 = -2691671;

    t75 = ((x593<<(x594<=x595))==x596);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x601 = 914446196LLU;
	volatile int64_t x602 = INT64_MIN;
	uint64_t x603 = 59313023374266LLU;
	static uint64_t x604 = 16877578090964603LLU;
	volatile int32_t t76 = 105880402;

    t76 = ((x601<<(x602<=x603))==x604);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x605 = 58U;
	static int8_t x606 = INT8_MAX;
	static int16_t x607 = 1;
	int32_t t77 = 212;

    t77 = ((x605<<(x606<=x607))==x608);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x609 = 0U;
	static uint16_t x610 = UINT16_MAX;
	uint32_t x611 = 1061060882U;
	volatile int32_t t78 = -57484;

    t78 = ((x609<<(x610<=x611))==x612);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t t79 = 269622;

    t79 = ((x617<<(x618<=x619))==x620);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x621 = UINT8_MAX;
	int64_t x623 = INT64_MIN;

    t80 = ((x621<<(x622<=x623))==x624);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x630 = INT32_MIN;
	uint32_t x632 = 122182832U;
	volatile int32_t t81 = 18251647;

    t81 = ((x629<<(x630<=x631))==x632);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x633 = 7LL;
	int64_t x634 = -86LL;
	static int16_t x635 = INT16_MAX;
	uint8_t x636 = UINT8_MAX;
	int32_t t82 = 1731639;

    t82 = ((x633<<(x634<=x635))==x636);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x638 = INT32_MIN;
	volatile int8_t x640 = INT8_MIN;
	int32_t t83 = 223786;

    t83 = ((x637<<(x638<=x639))==x640);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint8_t x649 = 14U;
	static int8_t x650 = INT8_MIN;
	static volatile int32_t x651 = -868;
	int8_t x652 = 11;
	volatile int32_t t84 = 65;

    t84 = ((x649<<(x650<=x651))==x652);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x653 = 3706610LLU;
	int32_t x654 = -1;
	int32_t x655 = INT32_MAX;
	static volatile int16_t x656 = INT16_MAX;
	static int32_t t85 = 881074200;

    t85 = ((x653<<(x654<=x655))==x656);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x661 = UINT8_MAX;
	static int32_t x662 = INT32_MAX;
	volatile uint16_t x664 = 1758U;
	volatile int32_t t86 = 419033998;

    t86 = ((x661<<(x662<=x663))==x664);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x673 = 2U;
	static volatile uint8_t x674 = 29U;
	static volatile int32_t x675 = INT32_MIN;
	volatile int32_t t87 = -33;

    t87 = ((x673<<(x674<=x675))==x676);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MIN;
	int32_t t88 = -953481;

    t88 = ((x677<<(x678<=x679))==x680);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x681 = UINT8_MAX;
	static int32_t x682 = INT32_MIN;
	int16_t x683 = INT16_MIN;
	int32_t t89 = -426874045;

    t89 = ((x681<<(x682<=x683))==x684);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x697 = 91372022566440LLU;
	static volatile int32_t x698 = INT32_MIN;
	static uint8_t x699 = 49U;
	int64_t x700 = -1LL;
	static volatile int32_t t90 = -26462;

    t90 = ((x697<<(x698<=x699))==x700);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x702 = UINT16_MAX;
	int16_t x703 = INT16_MIN;
	uint8_t x704 = 14U;
	volatile int32_t t91 = 7;

    t91 = ((x701<<(x702<=x703))==x704);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x714 = -1;
	static int64_t x715 = 30846574LL;
	uint16_t x716 = 11517U;
	int32_t t92 = 625432031;

    t92 = ((x713<<(x714<=x715))==x716);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x718 = INT64_MAX;
	uint8_t x720 = UINT8_MAX;
	volatile int32_t t93 = -73;

    t93 = ((x717<<(x718<=x719))==x720);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x721 = INT16_MAX;
	static int8_t x722 = -1;
	uint64_t x723 = 2828342681221784LLU;
	volatile int16_t x724 = INT16_MAX;

    t94 = ((x721<<(x722<=x723))==x724);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x726 = 3U;
	static uint64_t x728 = 1783LLU;
	static int32_t t95 = -83;

    t95 = ((x725<<(x726<=x727))==x728);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x733 = UINT32_MAX;
	uint8_t x735 = 3U;
	uint32_t x736 = 0U;
	int32_t t96 = 926253453;

    t96 = ((x733<<(x734<=x735))==x736);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x737 = INT16_MAX;
	int64_t x738 = 26423646014199LL;
	uint16_t x739 = UINT16_MAX;
	volatile int8_t x740 = -1;
	int32_t t97 = -3500163;

    t97 = ((x737<<(x738<=x739))==x740);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x745 = INT64_MAX;
	uint16_t x746 = 2533U;
	int8_t x747 = INT8_MIN;
	int64_t x748 = INT64_MAX;
	volatile int32_t t98 = -256169;

    t98 = ((x745<<(x746<=x747))==x748);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x750 = 0;
	static int64_t x752 = 17135533351619539LL;
	volatile int32_t t99 = 1;

    t99 = ((x749<<(x750<=x751))==x752);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x761 = 0U;
	int32_t t100 = 4752;

    t100 = ((x761<<(x762<=x763))==x764);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x769 = 6U;
	uint16_t x770 = 63U;
	static uint32_t x772 = UINT32_MAX;
	int32_t t101 = -835;

    t101 = ((x769<<(x770<=x771))==x772);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x773 = 14195;
	static uint64_t x776 = 117567648319238119LLU;
	volatile int32_t t102 = -57;

    t102 = ((x773<<(x774<=x775))==x776);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x777 = INT32_MAX;
	uint32_t x778 = UINT32_MAX;
	volatile int16_t x779 = -3067;
	int64_t x780 = INT64_MIN;
	int32_t t103 = -10;

    t103 = ((x777<<(x778<=x779))==x780);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x789 = 300LL;
	int8_t x791 = 6;
	int16_t x792 = -1;
	static int32_t t104 = 723845891;

    t104 = ((x789<<(x790<=x791))==x792);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x801 = 275104910258860LLU;
	int8_t x802 = INT8_MAX;
	int64_t x803 = 297448477669322LL;
	int8_t x804 = -1;
	volatile int32_t t105 = 1;

    t105 = ((x801<<(x802<=x803))==x804);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x809 = UINT8_MAX;
	int8_t x810 = -3;
	int64_t x812 = -5LL;
	int32_t t106 = -145;

    t106 = ((x809<<(x810<=x811))==x812);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x813 = 11821U;
	int16_t x814 = INT16_MIN;
	int32_t t107 = 23089218;

    t107 = ((x813<<(x814<=x815))==x816);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x817 = INT8_MAX;
	volatile uint16_t x818 = UINT16_MAX;
	int32_t x819 = INT32_MAX;
	int16_t x820 = INT16_MIN;
	volatile int32_t t108 = -170524;

    t108 = ((x817<<(x818<=x819))==x820);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x837 = 296396;
	int64_t x840 = -3LL;

    t109 = ((x837<<(x838<=x839))==x840);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	uint64_t x842 = UINT64_MAX;
	uint8_t x843 = UINT8_MAX;
	static uint32_t x844 = 9U;
	int32_t t110 = -46;

    t110 = ((x841<<(x842<=x843))==x844);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x870 = INT32_MAX;
	static int8_t x872 = -1;
	volatile int32_t t111 = -821;

    t111 = ((x869<<(x870<=x871))==x872);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x877 = UINT32_MAX;
	int64_t x878 = 1LL;
	uint64_t x879 = 227376447156445LLU;
	uint64_t x880 = 228005284703163LLU;
	static int32_t t112 = -1010;

    t112 = ((x877<<(x878<=x879))==x880);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x881 = 270U;
	volatile int64_t x884 = 432768073LL;
	volatile int32_t t113 = 48;

    t113 = ((x881<<(x882<=x883))==x884);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x885 = INT16_MAX;
	volatile int16_t x887 = -1611;
	volatile int32_t t114 = 5804640;

    t114 = ((x885<<(x886<=x887))==x888);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x890 = INT8_MAX;
	uint8_t x891 = 35U;
	uint16_t x892 = 1580U;
	volatile int32_t t115 = 10;

    t115 = ((x889<<(x890<=x891))==x892);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x893 = 5U;
	volatile int64_t x894 = INT64_MIN;
	int64_t x895 = INT64_MAX;
	uint64_t x896 = 92269639679LLU;
	static int32_t t116 = -7;

    t116 = ((x893<<(x894<=x895))==x896);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x897 = 29U;
	int64_t x898 = INT64_MAX;
	volatile int8_t x899 = -1;
	uint8_t x900 = 22U;
	int32_t t117 = 395986;

    t117 = ((x897<<(x898<=x899))==x900);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x905 = 5810U;
	int8_t x906 = -1;
	uint16_t x908 = 26U;
	volatile int32_t t118 = -1205;

    t118 = ((x905<<(x906<=x907))==x908);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x915 = -1;
	static volatile int32_t x916 = -300;
	static int32_t t119 = -77540;

    t119 = ((x913<<(x914<=x915))==x916);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x917 = 328LLU;
	static uint16_t x918 = UINT16_MAX;
	int64_t x919 = INT64_MAX;
	uint32_t x920 = 1789U;
	volatile int32_t t120 = -4315;

    t120 = ((x917<<(x918<=x919))==x920);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x929 = 3776U;
	int64_t x930 = INT64_MIN;
	static int32_t x931 = -1;
	int32_t t121 = -22521;

    t121 = ((x929<<(x930<=x931))==x932);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x937 = 1112268LLU;
	volatile int8_t x940 = -1;
	int32_t t122 = -8655;

    t122 = ((x937<<(x938<=x939))==x940);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x941 = INT8_MAX;
	static int16_t x942 = INT16_MAX;
	uint64_t x943 = 431LLU;
	uint8_t x944 = 59U;
	volatile int32_t t123 = -703277215;

    t123 = ((x941<<(x942<=x943))==x944);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x953 = 13U;
	int16_t x954 = INT16_MIN;
	static volatile int16_t x955 = INT16_MIN;
	volatile int32_t t124 = -35902722;

    t124 = ((x953<<(x954<=x955))==x956);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x961 = 28685U;
	static int64_t x962 = INT64_MIN;
	volatile uint8_t x964 = UINT8_MAX;
	int32_t t125 = -2300;

    t125 = ((x961<<(x962<=x963))==x964);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x969 = 23;
	int8_t x970 = -1;
	volatile uint8_t x971 = 57U;
	static int16_t x972 = INT16_MAX;
	volatile int32_t t126 = -12437;

    t126 = ((x969<<(x970<=x971))==x972);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x981 = UINT16_MAX;
	int32_t x983 = 34;
	int8_t x984 = -1;
	volatile int32_t t127 = 27;

    t127 = ((x981<<(x982<=x983))==x984);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x985 = 33867706238LLU;
	uint16_t x986 = 24U;
	volatile int32_t x987 = INT32_MIN;
	static int32_t x988 = INT32_MIN;
	volatile int32_t t128 = 1;

    t128 = ((x985<<(x986<=x987))==x988);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x993 = INT32_MAX;
	int32_t x994 = INT32_MAX;
	static int16_t x995 = -1;
	int32_t x996 = INT32_MAX;
	int32_t t129 = -10917;

    t129 = ((x993<<(x994<=x995))==x996);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x998 = INT32_MAX;
	uint64_t x999 = UINT64_MAX;
	int8_t x1000 = INT8_MAX;

    t130 = ((x997<<(x998<=x999))==x1000);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x1029 = 904140867748940477LLU;
	int8_t x1030 = -1;
	int8_t x1032 = INT8_MIN;
	static int32_t t131 = 2282012;

    t131 = ((x1029<<(x1030<=x1031))==x1032);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x1033 = UINT8_MAX;
	int32_t x1034 = INT32_MAX;
	volatile int64_t x1035 = -20701405763909012LL;
	uint64_t x1036 = 1754625715160LLU;
	volatile int32_t t132 = -52103783;

    t132 = ((x1033<<(x1034<=x1035))==x1036);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1045 = INT16_MAX;
	volatile int16_t x1047 = -1;
	uint32_t x1048 = 15724U;
	static int32_t t133 = -248;

    t133 = ((x1045<<(x1046<=x1047))==x1048);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1049 = 14730913LLU;
	volatile int64_t x1050 = INT64_MIN;
	int8_t x1051 = -1;
	uint8_t x1052 = 1U;
	volatile int32_t t134 = 18;

    t134 = ((x1049<<(x1050<=x1051))==x1052);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x1057 = 418156027LLU;
	uint8_t x1058 = 27U;
	int16_t x1059 = 20;
	volatile uint16_t x1060 = 2397U;
	volatile int32_t t135 = 2;

    t135 = ((x1057<<(x1058<=x1059))==x1060);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x1065 = UINT32_MAX;
	volatile int16_t x1066 = INT16_MIN;
	volatile int16_t x1067 = INT16_MAX;
	uint64_t x1068 = UINT64_MAX;
	int32_t t136 = -2118;

    t136 = ((x1065<<(x1066<=x1067))==x1068);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x1093 = INT8_MAX;
	volatile uint64_t x1094 = 1924054LLU;
	int8_t x1095 = -1;
	int32_t t137 = -2234113;

    t137 = ((x1093<<(x1094<=x1095))==x1096);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1098 = 26U;
	uint8_t x1099 = 3U;
	int16_t x1100 = -201;
	volatile int32_t t138 = 1966;

    t138 = ((x1097<<(x1098<=x1099))==x1100);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1101 = UINT64_MAX;
	int32_t x1102 = 319733420;
	uint32_t x1103 = 11U;
	int8_t x1104 = -1;
	int32_t t139 = 55753944;

    t139 = ((x1101<<(x1102<=x1103))==x1104);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x1105 = 898967630LL;
	uint32_t x1107 = UINT32_MAX;
	int64_t x1108 = INT64_MIN;
	static int32_t t140 = -44;

    t140 = ((x1105<<(x1106<=x1107))==x1108);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1113 = 36;
	volatile int8_t x1114 = -1;
	uint8_t x1115 = UINT8_MAX;
	volatile int32_t t141 = -40640661;

    t141 = ((x1113<<(x1114<=x1115))==x1116);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1117 = UINT64_MAX;
	volatile int16_t x1118 = INT16_MAX;
	int32_t x1119 = 200;
	static uint64_t x1120 = UINT64_MAX;
	static volatile int32_t t142 = 43423;

    t142 = ((x1117<<(x1118<=x1119))==x1120);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1138 = 6443595571LL;
	static int8_t x1139 = 14;
	int16_t x1140 = INT16_MIN;
	volatile int32_t t143 = -38;

    t143 = ((x1137<<(x1138<=x1139))==x1140);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x1149 = 19U;
	volatile int8_t x1150 = -5;
	int64_t x1151 = INT64_MIN;
	int32_t t144 = -36;

    t144 = ((x1149<<(x1150<=x1151))==x1152);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1158 = -2;
	uint64_t x1159 = UINT64_MAX;
	static int64_t x1160 = INT64_MAX;
	static int32_t t145 = 255787649;

    t145 = ((x1157<<(x1158<=x1159))==x1160);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1169 = INT64_MAX;
	static int32_t x1170 = 31992;
	int32_t x1171 = -1;
	int64_t x1172 = -3LL;
	volatile int32_t t146 = -283355;

    t146 = ((x1169<<(x1170<=x1171))==x1172);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x1177 = 0;
	int8_t x1178 = INT8_MIN;
	int32_t x1179 = -2;
	static volatile int32_t t147 = -24040097;

    t147 = ((x1177<<(x1178<=x1179))==x1180);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1185 = UINT8_MAX;
	int8_t x1187 = -1;
	int16_t x1188 = 1;
	volatile int32_t t148 = -62090;

    t148 = ((x1185<<(x1186<=x1187))==x1188);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x1190 = 2528LLU;
	int8_t x1191 = INT8_MAX;
	int32_t x1192 = INT32_MAX;
	int32_t t149 = -3;

    t149 = ((x1189<<(x1190<=x1191))==x1192);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1193 = UINT64_MAX;
	int64_t x1194 = INT64_MIN;
	volatile int32_t x1195 = INT32_MIN;
	static int64_t x1196 = INT64_MAX;

    t150 = ((x1193<<(x1194<=x1195))==x1196);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x1209 = 21622U;
	int8_t x1211 = -1;
	uint64_t x1212 = UINT64_MAX;

    t151 = ((x1209<<(x1210<=x1211))==x1212);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1217 = INT16_MAX;
	int16_t x1218 = -1;
	int32_t x1219 = INT32_MIN;
	volatile uint32_t x1220 = UINT32_MAX;
	static int32_t t152 = 149213851;

    t152 = ((x1217<<(x1218<=x1219))==x1220);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1222 = -1;
	static int16_t x1223 = 362;
	volatile int32_t t153 = 775031899;

    t153 = ((x1221<<(x1222<=x1223))==x1224);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x1229 = UINT64_MAX;
	uint8_t x1230 = UINT8_MAX;
	int32_t x1231 = 70751199;
	int64_t x1232 = INT64_MIN;
	int32_t t154 = 166822;

    t154 = ((x1229<<(x1230<=x1231))==x1232);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1249 = 435152654LLU;
	uint8_t x1250 = UINT8_MAX;
	int64_t x1252 = INT64_MAX;
	volatile int32_t t155 = 1600;

    t155 = ((x1249<<(x1250<=x1251))==x1252);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1257 = 1U;
	static int16_t x1258 = INT16_MIN;
	int64_t x1260 = INT64_MIN;
	int32_t t156 = -5595;

    t156 = ((x1257<<(x1258<=x1259))==x1260);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x1261 = 26436LLU;
	int32_t x1262 = 802630;
	int16_t x1264 = 0;
	volatile int32_t t157 = 30500015;

    t157 = ((x1261<<(x1262<=x1263))==x1264);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1265 = UINT8_MAX;
	int64_t x1266 = -4481257462LL;
	static int32_t x1267 = INT32_MAX;
	uint16_t x1268 = UINT16_MAX;
	static volatile int32_t t158 = 220669;

    t158 = ((x1265<<(x1266<=x1267))==x1268);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x1270 = -1;
	static volatile int32_t x1271 = INT32_MIN;
	int16_t x1272 = 186;

    t159 = ((x1269<<(x1270<=x1271))==x1272);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1289 = 14526617329905LLU;
	int32_t x1290 = INT32_MIN;
	int16_t x1291 = -1;
	int32_t t160 = 192;

    t160 = ((x1289<<(x1290<=x1291))==x1292);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1293 = 116156170;
	static volatile uint16_t x1294 = UINT16_MAX;
	static uint64_t x1295 = UINT64_MAX;
	uint32_t x1296 = 6608U;
	int32_t t161 = -21777;

    t161 = ((x1293<<(x1294<=x1295))==x1296);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x1305 = UINT32_MAX;
	int16_t x1306 = INT16_MIN;
	int16_t x1307 = INT16_MIN;
	uint16_t x1308 = UINT16_MAX;
	int32_t t162 = 5511;

    t162 = ((x1305<<(x1306<=x1307))==x1308);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x1309 = 220LL;
	volatile int16_t x1312 = INT16_MIN;

    t163 = ((x1309<<(x1310<=x1311))==x1312);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1321 = UINT8_MAX;
	static int32_t x1323 = 0;
	int16_t x1324 = INT16_MIN;
	static int32_t t164 = -1067;

    t164 = ((x1321<<(x1322<=x1323))==x1324);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x1326 = -9117;
	int8_t x1327 = INT8_MIN;
	static int64_t x1328 = INT64_MIN;
	volatile int32_t t165 = 1;

    t165 = ((x1325<<(x1326<=x1327))==x1328);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x1333 = 8281;
	int64_t x1334 = INT64_MIN;
	uint64_t x1335 = 2493220356122114LLU;
	static uint16_t x1336 = 1342U;

    t166 = ((x1333<<(x1334<=x1335))==x1336);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1337 = 0;
	uint8_t x1338 = UINT8_MAX;
	int16_t x1339 = -1;
	uint16_t x1340 = 24U;
	volatile int32_t t167 = -6608276;

    t167 = ((x1337<<(x1338<=x1339))==x1340);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1345 = 2051684866504879677LL;
	static uint64_t x1346 = 54082LLU;
	int8_t x1347 = INT8_MIN;
	uint8_t x1348 = UINT8_MAX;
	static int32_t t168 = 63;

    t168 = ((x1345<<(x1346<=x1347))==x1348);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint32_t x1349 = 7U;
	uint64_t x1350 = UINT64_MAX;
	uint32_t x1351 = UINT32_MAX;
	int32_t x1352 = 2409761;
	int32_t t169 = 16348808;

    t169 = ((x1349<<(x1350<=x1351))==x1352);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x1357 = UINT64_MAX;
	int16_t x1358 = -1;
	int64_t x1359 = INT64_MIN;
	static volatile int32_t x1360 = INT32_MAX;
	volatile int32_t t170 = -16;

    t170 = ((x1357<<(x1358<=x1359))==x1360);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x1381 = 4U;
	static uint16_t x1382 = 308U;
	volatile int64_t x1383 = INT64_MIN;
	volatile int16_t x1384 = 7704;
	volatile int32_t t171 = 0;

    t171 = ((x1381<<(x1382<=x1383))==x1384);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1391 = 3445817LL;
	uint32_t x1392 = 7806U;
	int32_t t172 = 128;

    t172 = ((x1389<<(x1390<=x1391))==x1392);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1393 = UINT16_MAX;
	volatile int8_t x1394 = INT8_MIN;
	int64_t x1395 = INT64_MIN;
	volatile int16_t x1396 = -1622;
	int32_t t173 = -232606158;

    t173 = ((x1393<<(x1394<=x1395))==x1396);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1397 = 36;
	uint32_t x1398 = 1027373U;
	int32_t x1399 = 499;
	static volatile uint64_t x1400 = 219193LLU;
	int32_t t174 = 1;

    t174 = ((x1397<<(x1398<=x1399))==x1400);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1413 = 70U;
	int64_t x1414 = 7830148LL;
	int16_t x1415 = INT16_MAX;
	static int8_t x1416 = -1;
	volatile int32_t t175 = -294675;

    t175 = ((x1413<<(x1414<=x1415))==x1416);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1417 = INT16_MAX;
	volatile uint32_t x1418 = UINT32_MAX;
	static int32_t x1419 = -1;
	static volatile int16_t x1420 = INT16_MIN;
	int32_t t176 = 135245;

    t176 = ((x1417<<(x1418<=x1419))==x1420);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1425 = UINT8_MAX;
	uint64_t x1427 = UINT64_MAX;
	int64_t x1428 = -2626236039LL;

    t177 = ((x1425<<(x1426<=x1427))==x1428);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1437 = 3;
	int16_t x1438 = -1;
	int16_t x1439 = -17;
	int8_t x1440 = -51;
	int32_t t178 = 0;

    t178 = ((x1437<<(x1438<=x1439))==x1440);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1441 = UINT64_MAX;
	volatile uint16_t x1442 = 10U;
	uint32_t x1443 = UINT32_MAX;
	volatile int32_t x1444 = INT32_MAX;
	volatile int32_t t179 = -98728;

    t179 = ((x1441<<(x1442<=x1443))==x1444);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1445 = 387U;
	int32_t x1446 = INT32_MIN;
	int64_t x1447 = -1LL;
	int32_t t180 = -15109;

    t180 = ((x1445<<(x1446<=x1447))==x1448);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1449 = 61U;
	static int32_t x1450 = INT32_MIN;
	uint64_t x1451 = UINT64_MAX;
	static int16_t x1452 = 429;
	volatile int32_t t181 = -109274112;

    t181 = ((x1449<<(x1450<=x1451))==x1452);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1462 = 257464832888LLU;
	volatile int64_t x1463 = 201497176834959294LL;
	volatile int32_t x1464 = INT32_MAX;
	volatile int32_t t182 = 16176;

    t182 = ((x1461<<(x1462<=x1463))==x1464);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1465 = 23;
	volatile int8_t x1466 = INT8_MAX;
	uint16_t x1467 = UINT16_MAX;

    t183 = ((x1465<<(x1466<=x1467))==x1468);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1473 = UINT64_MAX;
	uint32_t x1474 = 1366065U;

    t184 = ((x1473<<(x1474<=x1475))==x1476);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1477 = 0U;
	static uint16_t x1478 = 6340U;
	int8_t x1479 = 12;
	int64_t x1480 = -3907695LL;
	int32_t t185 = -7;

    t185 = ((x1477<<(x1478<=x1479))==x1480);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x1493 = 46;
	static int32_t x1494 = 59498;
	static uint16_t x1495 = UINT16_MAX;
	uint16_t x1496 = 29814U;
	int32_t t186 = 13;

    t186 = ((x1493<<(x1494<=x1495))==x1496);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1497 = UINT32_MAX;
	int32_t x1499 = 29734522;
	volatile int32_t t187 = -36;

    t187 = ((x1497<<(x1498<=x1499))==x1500);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1501 = 19U;
	volatile int64_t x1502 = INT64_MIN;
	int64_t x1503 = -1LL;
	int64_t x1504 = INT64_MIN;
	volatile int32_t t188 = -9;

    t188 = ((x1501<<(x1502<=x1503))==x1504);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1509 = UINT8_MAX;
	uint32_t x1510 = 208269U;
	uint32_t x1512 = UINT32_MAX;
	int32_t t189 = 29377;

    t189 = ((x1509<<(x1510<=x1511))==x1512);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1518 = INT32_MIN;
	volatile uint16_t x1519 = 22U;
	uint32_t x1520 = 7565U;
	int32_t t190 = 46;

    t190 = ((x1517<<(x1518<=x1519))==x1520);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1521 = 15U;
	uint64_t x1522 = 413800LLU;
	volatile int32_t x1523 = 18;
	volatile int16_t x1524 = -1;

    t191 = ((x1521<<(x1522<=x1523))==x1524);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1525 = 7U;
	static int8_t x1526 = -61;
	int8_t x1527 = INT8_MIN;
	int32_t x1528 = INT32_MIN;
	volatile int32_t t192 = 49600818;

    t192 = ((x1525<<(x1526<=x1527))==x1528);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1529 = 136U;
	volatile uint16_t x1530 = 749U;
	int64_t x1531 = 3918LL;
	int16_t x1532 = INT16_MAX;
	volatile int32_t t193 = -1;

    t193 = ((x1529<<(x1530<=x1531))==x1532);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1541 = 25880563LL;
	uint16_t x1542 = UINT16_MAX;
	uint64_t x1544 = 20844281LLU;
	static volatile int32_t t194 = 1;

    t194 = ((x1541<<(x1542<=x1543))==x1544);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1545 = 320U;
	uint32_t x1547 = 7247U;
	static volatile int8_t x1548 = INT8_MIN;
	int32_t t195 = 17;

    t195 = ((x1545<<(x1546<=x1547))==x1548);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1553 = 412U;
	static int64_t x1554 = 708622LL;
	int8_t x1555 = INT8_MIN;
	uint64_t x1556 = 2094866609129LLU;
	static int32_t t196 = 2;

    t196 = ((x1553<<(x1554<=x1555))==x1556);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x1565 = 220U;
	volatile uint16_t x1566 = 206U;
	static uint16_t x1567 = 10540U;
	static uint32_t x1568 = 184817726U;
	int32_t t197 = -30173362;

    t197 = ((x1565<<(x1566<=x1567))==x1568);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1573 = UINT32_MAX;
	uint64_t x1574 = 2053825039639LLU;
	static int64_t x1575 = -8070LL;
	static int32_t t198 = -29;

    t198 = ((x1573<<(x1574<=x1575))==x1576);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1581 = 30012U;
	uint32_t x1582 = 3558U;
	volatile int32_t x1583 = INT32_MAX;
	static int64_t x1584 = 24LL;
	int32_t t199 = 12683;

    t199 = ((x1581<<(x1582<=x1583))==x1584);

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

