
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

int16_t x1 = -1;
int16_t x9 = -30;
volatile int8_t x13 = INT8_MIN;
uint16_t x15 = 116U;
int32_t t3 = -61298737;
uint64_t x29 = 1640388LLU;
int32_t x31 = -1;
int32_t x32 = INT32_MAX;
int32_t t5 = 18936;
int16_t x73 = -1;
static int64_t x75 = -1950LL;
volatile int32_t t7 = -7222;
static int32_t x78 = 1;
int32_t x81 = INT32_MIN;
static int32_t t9 = -473;
static uint16_t x90 = UINT16_MAX;
int8_t x97 = INT8_MAX;
uint32_t x99 = UINT32_MAX;
uint8_t x121 = 46U;
int16_t x124 = -4343;
uint64_t x125 = 3379506132991834LLU;
uint16_t x133 = 17496U;
int8_t x134 = INT8_MIN;
volatile int32_t x138 = 549234419;
int32_t x144 = INT32_MAX;
static int16_t x146 = INT16_MIN;
volatile int8_t x163 = INT8_MIN;
int64_t x164 = -1LL;
uint16_t x165 = 205U;
volatile int32_t t22 = -397186720;
int32_t t23 = -21883744;
uint64_t x193 = 658791670870680LLU;
volatile int64_t x195 = INT64_MIN;
uint64_t x204 = UINT64_MAX;
int8_t x219 = 1;
static uint32_t x220 = 1899555130U;
static volatile int8_t x221 = INT8_MIN;
uint16_t x224 = UINT16_MAX;
volatile int64_t x231 = INT64_MIN;
volatile int32_t t30 = -653558;
int16_t x266 = INT16_MAX;
int32_t x272 = 482835;
uint8_t x297 = 11U;
int8_t x302 = -22;
volatile int32_t x303 = INT32_MIN;
int32_t t37 = 3212652;
int32_t x322 = 19;
int64_t x326 = INT64_MIN;
uint16_t x329 = 0U;
static int32_t x331 = -54744;
int16_t x344 = INT16_MIN;
volatile int32_t t41 = 41998;
volatile int32_t t42 = -649894;
uint32_t x364 = UINT32_MAX;
int8_t x379 = 44;
volatile int16_t x380 = INT16_MAX;
int32_t x382 = -147654515;
int32_t x388 = -1;
int64_t x398 = INT64_MIN;
uint16_t x411 = 1U;
uint8_t x413 = UINT8_MAX;
volatile uint64_t x425 = UINT64_MAX;
uint8_t x429 = 8U;
static volatile int32_t t55 = 24910966;
int8_t x445 = INT8_MAX;
volatile int32_t t57 = 10466885;
int32_t x462 = -1;
static volatile int32_t t62 = 3464753;
static int8_t x485 = INT8_MIN;
static volatile int16_t x510 = 2;
int32_t t66 = 2;
int8_t x513 = -1;
int8_t x514 = -1;
volatile int16_t x519 = 6084;
int64_t x520 = INT64_MAX;
static int64_t x533 = INT64_MIN;
static volatile int64_t x534 = INT64_MIN;
volatile int64_t x536 = INT64_MIN;
uint32_t x541 = UINT32_MAX;
volatile uint64_t x542 = UINT64_MAX;
int16_t x547 = INT16_MIN;
volatile uint32_t x551 = 2059U;
static uint32_t x583 = 69856U;
int32_t t78 = 218;
int64_t x587 = -1LL;
uint16_t x600 = 418U;
volatile int8_t x630 = 1;
int16_t x633 = INT16_MAX;
volatile int8_t x641 = -1;
static volatile uint16_t x643 = UINT16_MAX;
uint32_t x644 = UINT32_MAX;
int32_t x676 = -1;
volatile uint32_t x679 = 1389527U;
static uint32_t x680 = 2634885U;
int32_t x697 = -1;
int32_t x699 = INT32_MIN;
uint16_t x717 = 20627U;
uint32_t x718 = UINT32_MAX;
int8_t x731 = -21;
int32_t t94 = -1;
uint16_t x737 = 206U;
int16_t x738 = INT16_MIN;
volatile int32_t t96 = 7;
uint32_t x757 = UINT32_MAX;
volatile uint16_t x763 = 13U;
int8_t x765 = 6;
int32_t x767 = -1;
static int32_t x768 = INT32_MAX;
int64_t x773 = 714343816368184603LL;
uint64_t x776 = 416373315843458LLU;
uint32_t x790 = 125U;
uint32_t x791 = 338739975U;
int32_t t104 = 1;
int32_t t105 = 44352;
int16_t x810 = INT16_MIN;
int32_t t106 = -40;
volatile int32_t t107 = -345219580;
uint16_t x855 = 10763U;
volatile int8_t x870 = INT8_MAX;
int16_t x872 = INT16_MIN;
int8_t x877 = 35;
uint32_t x878 = 7416017U;
uint32_t x907 = 502688U;
int8_t x914 = INT8_MAX;
int16_t x934 = INT16_MIN;
volatile uint32_t x942 = UINT32_MAX;
volatile int32_t x944 = 1018046140;
uint8_t x947 = 14U;
volatile int32_t t121 = 1768;
static int64_t x951 = -11955162LL;
static int8_t x964 = INT8_MAX;
uint16_t x990 = 948U;
int32_t x993 = 1;
uint16_t x994 = UINT16_MAX;
uint16_t x1005 = 2733U;
volatile int8_t x1021 = -1;
static uint32_t x1023 = 5U;
int16_t x1025 = 0;
uint16_t x1026 = 293U;
volatile uint64_t x1028 = UINT64_MAX;
int32_t t131 = -3;
volatile uint16_t x1030 = 29U;
uint32_t x1032 = UINT32_MAX;
int32_t x1043 = INT32_MIN;
static volatile int32_t t135 = -35579174;
volatile int8_t x1051 = -1;
int32_t x1082 = -1;
volatile int32_t x1102 = INT32_MAX;
volatile int8_t x1118 = INT8_MIN;
static int16_t x1121 = INT16_MIN;
static uint32_t x1132 = UINT32_MAX;
int32_t t145 = -230;
int64_t x1138 = INT64_MIN;
int16_t x1139 = INT16_MIN;
uint32_t x1141 = UINT32_MAX;
int32_t x1142 = 1812;
uint32_t x1143 = 1771U;
int16_t x1145 = -1;
static volatile uint16_t x1163 = 55U;
int8_t x1176 = INT8_MAX;
static uint8_t x1206 = 6U;
int16_t x1210 = INT16_MAX;
int32_t t154 = -204;
int32_t x1214 = -1;
volatile int32_t t155 = -1;
uint8_t x1221 = 1U;
uint16_t x1222 = 28U;
static int32_t x1223 = INT32_MIN;
static uint32_t x1224 = UINT32_MAX;
uint16_t x1225 = 18397U;
volatile int16_t x1232 = INT16_MAX;
uint32_t x1244 = UINT32_MAX;
uint16_t x1268 = 3U;
int32_t x1283 = INT32_MIN;
int16_t x1303 = -1;
int32_t t166 = -952;
static volatile int8_t x1305 = 45;
uint8_t x1317 = 17U;
uint16_t x1321 = 9U;
int8_t x1330 = INT8_MIN;
static int32_t x1331 = -1;
volatile int16_t x1346 = 73;
int64_t x1347 = -6663599LL;
static int16_t x1348 = -1;
uint8_t x1352 = UINT8_MAX;
int32_t t175 = -3;
int16_t x1367 = INT16_MIN;
static int32_t x1373 = INT32_MIN;
int64_t x1374 = INT64_MIN;
static int64_t x1375 = INT64_MIN;
int16_t x1376 = INT16_MIN;
static uint8_t x1385 = 71U;
uint16_t x1386 = 244U;
static uint64_t x1389 = 0LLU;
static uint8_t x1391 = 0U;
volatile int32_t t181 = 177;
int32_t x1393 = INT32_MAX;
static volatile int16_t x1394 = -1;
volatile int8_t x1439 = -10;
int8_t x1451 = INT8_MIN;
static int32_t t187 = -773;
int64_t x1456 = -1LL;
uint64_t x1461 = UINT64_MAX;
static int64_t x1462 = INT64_MAX;
int64_t x1465 = 124308963692183568LL;
static int8_t x1466 = INT8_MIN;
int16_t x1471 = -1;
int16_t x1472 = -1;
volatile int8_t x1473 = 5;
uint16_t x1475 = 28286U;
uint16_t x1476 = UINT16_MAX;
int32_t x1491 = -1;
int16_t x1498 = INT16_MAX;
volatile int32_t t195 = 61085;
uint32_t x1504 = UINT32_MAX;
volatile int32_t t197 = -3070;
uint64_t x1512 = UINT64_MAX;


void f0(void) {
    	static int64_t x2 = -23LL;
	static int16_t x3 = -107;
	int64_t x4 = 3415LL;
	static int32_t t0 = -517393;

    t0 = ((x1>x2)/(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 3;
	int8_t x6 = -1;
	volatile int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 3;

    t1 = ((x5>x6)/(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MAX;
	int8_t x11 = 9;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 5476863;

    t2 = ((x9>x10)/(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 260440879160525046LLU;
	int64_t x16 = INT64_MAX;

    t3 = ((x13>x14)/(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x30 = 3;
	static int32_t t4 = -2441508;

    t4 = ((x29>x30)/(x31<=x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x37 = INT16_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	int32_t x39 = -1;
	volatile int16_t x40 = 0;

    t5 = ((x37>x38)/(x39<=x40));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x61 = -1;
	int8_t x62 = 10;
	volatile int32_t x63 = -1;
	int32_t x64 = 5;
	int32_t t6 = 492562225;

    t6 = ((x61>x62)/(x63<=x64));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x74 = 1993667707U;
	int16_t x76 = -1;

    t7 = ((x73>x74)/(x75<=x76));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x77 = -1;
	volatile int16_t x79 = INT16_MAX;
	uint32_t x80 = 517996U;
	int32_t t8 = 6102201;

    t8 = ((x77>x78)/(x79<=x80));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x82 = 170U;
	int8_t x83 = INT8_MAX;
	volatile uint64_t x84 = 1168025LLU;

    t9 = ((x81>x82)/(x83<=x84));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x89 = 262594LLU;
	int8_t x91 = INT8_MIN;
	uint8_t x92 = 2U;
	int32_t t10 = 15142;

    t10 = ((x89>x90)/(x91<=x92));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x98 = INT8_MAX;
	volatile int64_t x100 = INT64_MAX;
	int32_t t11 = -1465435;

    t11 = ((x97>x98)/(x99<=x100));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = 17490U;
	volatile int32_t t12 = 9104994;

    t12 = ((x105>x106)/(x107<=x108));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x117 = -1LL;
	volatile uint32_t x118 = UINT32_MAX;
	int16_t x119 = 5;
	int16_t x120 = INT16_MAX;
	static int32_t t13 = -89024020;

    t13 = ((x117>x118)/(x119<=x120));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x122 = INT16_MAX;
	int32_t x123 = INT32_MIN;
	int32_t t14 = 4762;

    t14 = ((x121>x122)/(x123<=x124));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x126 = INT8_MIN;
	static int8_t x127 = INT8_MIN;
	uint8_t x128 = 21U;
	int32_t t15 = -324;

    t15 = ((x125>x126)/(x127<=x128));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x135 = -72351274084514LL;
	int64_t x136 = INT64_MAX;
	static volatile int32_t t16 = -1;

    t16 = ((x133>x134)/(x135<=x136));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x137 = 1LLU;
	uint32_t x139 = 145U;
	int8_t x140 = INT8_MIN;
	int32_t t17 = -578574;

    t17 = ((x137>x138)/(x139<=x140));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x141 = 181U;
	volatile int16_t x142 = -1;
	static int8_t x143 = -14;
	int32_t t18 = -7717994;

    t18 = ((x141>x142)/(x143<=x144));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x145 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MAX;
	volatile int32_t t19 = 70696675;

    t19 = ((x145>x146)/(x147<=x148));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x157 = 13LLU;
	volatile uint8_t x158 = 30U;
	int8_t x159 = 52;
	uint64_t x160 = 334181706431LLU;
	static int32_t t20 = 131;

    t20 = ((x157>x158)/(x159<=x160));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x161 = INT64_MAX;
	uint16_t x162 = UINT16_MAX;
	int32_t t21 = 564840;

    t21 = ((x161>x162)/(x163<=x164));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x166 = INT64_MIN;
	static int16_t x167 = 23;
	static uint8_t x168 = UINT8_MAX;

    t22 = ((x165>x166)/(x167<=x168));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x173 = UINT16_MAX;
	int32_t x174 = 973;
	int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MAX;

    t23 = ((x173>x174)/(x175<=x176));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x194 = INT64_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t24 = 2473715;

    t24 = ((x193>x194)/(x195<=x196));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x201 = 2U;
	uint8_t x202 = 10U;
	static uint64_t x203 = 21647931LLU;
	int32_t t25 = 0;

    t25 = ((x201>x202)/(x203<=x204));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x217 = INT32_MAX;
	uint32_t x218 = 608U;
	static int32_t t26 = 465541804;

    t26 = ((x217>x218)/(x219<=x220));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x222 = 77562985830914LL;
	volatile int8_t x223 = -25;
	int32_t t27 = -12445167;

    t27 = ((x221>x222)/(x223<=x224));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x229 = INT16_MIN;
	uint64_t x230 = 389286LLU;
	int8_t x232 = INT8_MAX;
	volatile int32_t t28 = -58;

    t28 = ((x229>x230)/(x231<=x232));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x241 = -1LL;
	volatile uint16_t x242 = 65U;
	int32_t x243 = -1;
	int8_t x244 = INT8_MAX;
	volatile int32_t t29 = -377;

    t29 = ((x241>x242)/(x243<=x244));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x253 = -6;
	uint16_t x254 = 661U;
	static int32_t x255 = INT32_MIN;
	volatile uint8_t x256 = 13U;

    t30 = ((x253>x254)/(x255<=x256));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x261 = -1;
	static int16_t x262 = 2635;
	static volatile int64_t x263 = INT64_MIN;
	uint16_t x264 = 4013U;
	static int32_t t31 = -25;

    t31 = ((x261>x262)/(x263<=x264));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	uint16_t x267 = 0U;
	uint64_t x268 = 100051031010LLU;
	static int32_t t32 = 911509;

    t32 = ((x265>x266)/(x267<=x268));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x269 = 9160;
	static volatile int8_t x270 = -1;
	static int16_t x271 = INT16_MAX;
	volatile int32_t t33 = -3230325;

    t33 = ((x269>x270)/(x271<=x272));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x298 = INT16_MIN;
	int8_t x299 = -31;
	volatile int16_t x300 = 1;
	volatile int32_t t34 = -1;

    t34 = ((x297>x298)/(x299<=x300));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x301 = 989;
	volatile int8_t x304 = -1;
	int32_t t35 = 2212;

    t35 = ((x301>x302)/(x303<=x304));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x313 = 403LL;
	int32_t x314 = -1;
	static int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MAX;
	volatile int32_t t36 = -210;

    t36 = ((x313>x314)/(x315<=x316));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MIN;
	int64_t x319 = -1LL;
	int8_t x320 = INT8_MAX;

    t37 = ((x317>x318)/(x319<=x320));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x321 = INT8_MIN;
	int32_t x323 = -1;
	uint8_t x324 = 29U;
	static volatile int32_t t38 = 590561;

    t38 = ((x321>x322)/(x323<=x324));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x325 = 125217LLU;
	int64_t x327 = INT64_MIN;
	int8_t x328 = 1;
	int32_t t39 = 41387958;

    t39 = ((x325>x326)/(x327<=x328));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x330 = 278944U;
	volatile uint16_t x332 = UINT16_MAX;
	static volatile int32_t t40 = -11430;

    t40 = ((x329>x330)/(x331<=x332));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x341 = 0;
	int16_t x342 = 2698;
	static int16_t x343 = INT16_MIN;

    t41 = ((x341>x342)/(x343<=x344));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x349 = -1;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = -1;
	int64_t x352 = INT64_MAX;

    t42 = ((x349>x350)/(x351<=x352));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x361 = -1;
	uint16_t x362 = 1U;
	static int32_t x363 = 3258;
	volatile int32_t t43 = 2650016;

    t43 = ((x361>x362)/(x363<=x364));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 0U;
	uint16_t x368 = 96U;
	int32_t t44 = 0;

    t44 = ((x365>x366)/(x367<=x368));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x377 = INT32_MAX;
	static uint16_t x378 = UINT16_MAX;
	static int32_t t45 = -105;

    t45 = ((x377>x378)/(x379<=x380));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x381 = UINT8_MAX;
	int64_t x383 = INT64_MIN;
	int64_t x384 = -3LL;
	int32_t t46 = 1;

    t46 = ((x381>x382)/(x383<=x384));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x385 = 0;
	static int8_t x386 = INT8_MAX;
	static int32_t x387 = -100401;
	int32_t t47 = 1453;

    t47 = ((x385>x386)/(x387<=x388));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x397 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t48 = -30;

    t48 = ((x397>x398)/(x399<=x400));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 35U;
	uint16_t x404 = UINT16_MAX;
	static volatile int32_t t49 = 43071;

    t49 = ((x401>x402)/(x403<=x404));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x409 = -1;
	static volatile int16_t x410 = -1;
	volatile uint32_t x412 = 1579603U;
	static int32_t t50 = -8353240;

    t50 = ((x409>x410)/(x411<=x412));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x414 = -1;
	int16_t x415 = 3594;
	int32_t x416 = 271123;
	static volatile int32_t t51 = 118004;

    t51 = ((x413>x414)/(x415<=x416));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x421 = 243U;
	volatile uint64_t x422 = 1180LLU;
	static int32_t x423 = -1;
	int16_t x424 = -1;
	int32_t t52 = 46792031;

    t52 = ((x421>x422)/(x423<=x424));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x426 = UINT8_MAX;
	static volatile int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MAX;
	volatile int32_t t53 = -61;

    t53 = ((x425>x426)/(x427<=x428));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x430 = 3073665928641214LLU;
	static int32_t x431 = -1;
	int32_t x432 = 65763162;
	int32_t t54 = -34165;

    t54 = ((x429>x430)/(x431<=x432));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x437 = INT8_MAX;
	volatile int16_t x438 = INT16_MIN;
	static int16_t x439 = 1;
	uint64_t x440 = 907LLU;

    t55 = ((x437>x438)/(x439<=x440));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x441 = 3U;
	uint16_t x442 = 18U;
	uint16_t x443 = 18U;
	int64_t x444 = 381LL;
	int32_t t56 = -341123;

    t56 = ((x441>x442)/(x443<=x444));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x446 = -1;
	static int8_t x447 = INT8_MIN;
	static int16_t x448 = INT16_MAX;

    t57 = ((x445>x446)/(x447<=x448));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MAX;
	static int32_t t58 = -660310;

    t58 = ((x457>x458)/(x459<=x460));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x461 = INT8_MIN;
	static volatile int32_t x463 = -5513;
	volatile int8_t x464 = INT8_MIN;
	volatile int32_t t59 = -698028;

    t59 = ((x461>x462)/(x463<=x464));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x469 = -103LL;
	uint64_t x470 = 1744053376070060LLU;
	int32_t x471 = -6;
	static volatile int32_t x472 = 117181168;
	volatile int32_t t60 = -10807067;

    t60 = ((x469>x470)/(x471<=x472));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x477 = INT32_MIN;
	uint64_t x478 = UINT64_MAX;
	static int8_t x479 = -1;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t61 = 46;

    t61 = ((x477>x478)/(x479<=x480));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x481 = -3909177;
	int64_t x482 = INT64_MAX;
	volatile uint32_t x483 = 3712113U;
	uint32_t x484 = UINT32_MAX;

    t62 = ((x481>x482)/(x483<=x484));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x486 = UINT8_MAX;
	int8_t x487 = INT8_MIN;
	volatile int8_t x488 = 4;
	int32_t t63 = -278;

    t63 = ((x485>x486)/(x487<=x488));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x493 = INT8_MAX;
	static volatile int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	volatile int32_t x496 = -1;
	static volatile int32_t t64 = -1;

    t64 = ((x493>x494)/(x495<=x496));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x505 = 0U;
	uint64_t x506 = UINT64_MAX;
	uint64_t x507 = 109011202LLU;
	static int32_t x508 = INT32_MAX;
	static int32_t t65 = 3852;

    t65 = ((x505>x506)/(x507<=x508));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x511 = INT32_MIN;
	int32_t x512 = 17706105;

    t66 = ((x509>x510)/(x511<=x512));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x515 = INT8_MIN;
	volatile int64_t x516 = INT64_MAX;
	volatile int32_t t67 = -3;

    t67 = ((x513>x514)/(x515<=x516));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x517 = 14655;
	int32_t x518 = -3261;
	volatile int32_t t68 = 1500;

    t68 = ((x517>x518)/(x519<=x520));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = INT64_MAX;
	int16_t x523 = INT16_MIN;
	int8_t x524 = 1;
	static volatile int32_t t69 = -1;

    t69 = ((x521>x522)/(x523<=x524));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x525 = 2045U;
	static int8_t x526 = -1;
	int16_t x527 = INT16_MIN;
	int8_t x528 = -1;
	volatile int32_t t70 = 1528805;

    t70 = ((x525>x526)/(x527<=x528));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x535 = 1330553190747077LLU;
	static int32_t t71 = -5610886;

    t71 = ((x533>x534)/(x535<=x536));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x537 = -5;
	int32_t x538 = -1;
	uint8_t x539 = UINT8_MAX;
	int32_t x540 = INT32_MAX;
	int32_t t72 = 226065722;

    t72 = ((x537>x538)/(x539<=x540));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x543 = -1LL;
	volatile uint64_t x544 = UINT64_MAX;
	static int32_t t73 = 35542885;

    t73 = ((x541>x542)/(x543<=x544));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x545 = INT32_MAX;
	uint16_t x546 = 322U;
	int16_t x548 = INT16_MIN;
	volatile int32_t t74 = 6663983;

    t74 = ((x545>x546)/(x547<=x548));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x549 = INT16_MIN;
	uint8_t x550 = 29U;
	int64_t x552 = 28092177369671261LL;
	int32_t t75 = -4926395;

    t75 = ((x549>x550)/(x551<=x552));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x569 = UINT16_MAX;
	int8_t x570 = INT8_MAX;
	volatile int16_t x571 = INT16_MIN;
	static uint8_t x572 = 1U;
	int32_t t76 = -2;

    t76 = ((x569>x570)/(x571<=x572));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x573 = INT8_MAX;
	int16_t x574 = INT16_MIN;
	uint16_t x575 = 0U;
	uint16_t x576 = 36U;
	int32_t t77 = -19899;

    t77 = ((x573>x574)/(x575<=x576));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x581 = -1LL;
	int16_t x582 = 1;
	int8_t x584 = INT8_MIN;

    t78 = ((x581>x582)/(x583<=x584));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x585 = -1LL;
	volatile int8_t x586 = INT8_MAX;
	static uint16_t x588 = 17U;
	volatile int32_t t79 = -31;

    t79 = ((x585>x586)/(x587<=x588));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x597 = 36516754109167LLU;
	static uint32_t x598 = UINT32_MAX;
	volatile int8_t x599 = 30;
	volatile int32_t t80 = -16294;

    t80 = ((x597>x598)/(x599<=x600));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x601 = INT64_MAX;
	uint16_t x602 = 19451U;
	int64_t x603 = -854813480321LL;
	volatile int8_t x604 = 28;
	volatile int32_t t81 = 65524942;

    t81 = ((x601>x602)/(x603<=x604));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x605 = 19910;
	volatile uint8_t x606 = 0U;
	uint64_t x607 = 14793977427902LLU;
	int64_t x608 = INT64_MIN;
	volatile int32_t t82 = 532862359;

    t82 = ((x605>x606)/(x607<=x608));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = INT8_MIN;
	uint16_t x615 = UINT16_MAX;
	int64_t x616 = INT64_MAX;
	volatile int32_t t83 = 91;

    t83 = ((x613>x614)/(x615<=x616));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x631 = -1LL;
	int8_t x632 = INT8_MAX;
	static int32_t t84 = 97911;

    t84 = ((x629>x630)/(x631<=x632));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x634 = -1LL;
	volatile int64_t x635 = -205891240647067LL;
	int32_t x636 = INT32_MAX;
	volatile int32_t t85 = 31833;

    t85 = ((x633>x634)/(x635<=x636));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x642 = -1LL;
	volatile int32_t t86 = 842;

    t86 = ((x641>x642)/(x643<=x644));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x661 = 15LL;
	uint64_t x662 = UINT64_MAX;
	uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MAX;
	volatile int32_t t87 = -11945636;

    t87 = ((x661>x662)/(x663<=x664));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x673 = INT16_MIN;
	int64_t x674 = INT64_MIN;
	static int16_t x675 = INT16_MIN;
	volatile int32_t t88 = 172852291;

    t88 = ((x673>x674)/(x675<=x676));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x677 = -2292357864LL;
	static int64_t x678 = 1170113LL;
	static volatile int32_t t89 = -634;

    t89 = ((x677>x678)/(x679<=x680));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x693 = 0U;
	int8_t x694 = INT8_MIN;
	int8_t x695 = INT8_MAX;
	static uint64_t x696 = UINT64_MAX;
	int32_t t90 = 20;

    t90 = ((x693>x694)/(x695<=x696));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x698 = UINT32_MAX;
	int32_t x700 = INT32_MIN;
	volatile int32_t t91 = 0;

    t91 = ((x697>x698)/(x699<=x700));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x709 = UINT64_MAX;
	int16_t x710 = -1;
	int64_t x711 = 13LL;
	int8_t x712 = INT8_MAX;
	int32_t t92 = -72;

    t92 = ((x709>x710)/(x711<=x712));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x719 = INT16_MAX;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t93 = -4540;

    t93 = ((x717>x718)/(x719<=x720));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x729 = -16;
	int32_t x730 = -1;
	uint64_t x732 = UINT64_MAX;

    t94 = ((x729>x730)/(x731<=x732));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x739 = -778544LL;
	uint32_t x740 = 16840U;
	volatile int32_t t95 = -25;

    t95 = ((x737>x738)/(x739<=x740));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x749 = 1611618U;
	volatile uint16_t x750 = 1U;
	uint32_t x751 = 13476U;
	int8_t x752 = -1;

    t96 = ((x749>x750)/(x751<=x752));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x753 = 3696979LL;
	int64_t x754 = -12LL;
	int8_t x755 = INT8_MIN;
	int32_t x756 = -1;
	int32_t t97 = 14281113;

    t97 = ((x753>x754)/(x755<=x756));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x758 = -23;
	int32_t x759 = -996964629;
	static uint8_t x760 = 2U;
	int32_t t98 = -1856;

    t98 = ((x757>x758)/(x759<=x760));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x761 = -1;
	int16_t x762 = 5739;
	uint64_t x764 = 1987334LLU;
	int32_t t99 = -124030432;

    t99 = ((x761>x762)/(x763<=x764));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x766 = 73889410LLU;
	volatile int32_t t100 = 282;

    t100 = ((x765>x766)/(x767<=x768));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x774 = -1LL;
	static uint8_t x775 = 16U;
	int32_t t101 = -1835806;

    t101 = ((x773>x774)/(x775<=x776));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = INT64_MIN;
	static int64_t x783 = -1LL;
	volatile uint8_t x784 = 38U;
	int32_t t102 = 9;

    t102 = ((x781>x782)/(x783<=x784));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x785 = INT8_MIN;
	volatile int64_t x786 = -1LL;
	uint32_t x787 = UINT32_MAX;
	uint32_t x788 = UINT32_MAX;
	volatile int32_t t103 = -477898;

    t103 = ((x785>x786)/(x787<=x788));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x789 = -1;
	int32_t x792 = INT32_MAX;

    t104 = ((x789>x790)/(x791<=x792));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x805 = INT32_MIN;
	int8_t x806 = INT8_MIN;
	static int16_t x807 = -1;
	uint8_t x808 = UINT8_MAX;

    t105 = ((x805>x806)/(x807<=x808));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x809 = UINT32_MAX;
	uint64_t x811 = 25718680LLU;
	int16_t x812 = -5399;

    t106 = ((x809>x810)/(x811<=x812));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x817 = INT16_MAX;
	int16_t x818 = INT16_MIN;
	static volatile int64_t x819 = INT64_MIN;
	int16_t x820 = INT16_MIN;

    t107 = ((x817>x818)/(x819<=x820));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x821 = UINT16_MAX;
	int16_t x822 = 677;
	int8_t x823 = 1;
	uint8_t x824 = 94U;
	static volatile int32_t t108 = -2256671;

    t108 = ((x821>x822)/(x823<=x824));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x833 = UINT32_MAX;
	int64_t x834 = INT64_MAX;
	volatile uint64_t x835 = 1057113575LLU;
	volatile int64_t x836 = INT64_MAX;
	volatile int32_t t109 = -127791933;

    t109 = ((x833>x834)/(x835<=x836));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x853 = 421;
	static volatile uint16_t x854 = UINT16_MAX;
	int64_t x856 = 7619397594LL;
	volatile int32_t t110 = -6946389;

    t110 = ((x853>x854)/(x855<=x856));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x857 = -931263LL;
	volatile uint16_t x858 = 70U;
	static int8_t x859 = 40;
	static uint64_t x860 = 17558252050792LLU;
	int32_t t111 = -441875084;

    t111 = ((x857>x858)/(x859<=x860));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x865 = 4590;
	uint32_t x866 = 233191U;
	int32_t x867 = INT32_MIN;
	volatile uint8_t x868 = 0U;
	static volatile int32_t t112 = -321888012;

    t112 = ((x865>x866)/(x867<=x868));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x869 = UINT16_MAX;
	uint64_t x871 = 2779992829399375541LLU;
	static int32_t t113 = 32645;

    t113 = ((x869>x870)/(x871<=x872));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x879 = INT8_MIN;
	uint16_t x880 = 15396U;
	volatile int32_t t114 = 12353;

    t114 = ((x877>x878)/(x879<=x880));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x905 = INT32_MIN;
	static int16_t x906 = INT16_MIN;
	volatile int32_t x908 = -1358;
	int32_t t115 = -1905257;

    t115 = ((x905>x906)/(x907<=x908));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x913 = INT16_MAX;
	volatile int64_t x915 = INT64_MIN;
	uint16_t x916 = 26U;
	int32_t t116 = 241;

    t116 = ((x913>x914)/(x915<=x916));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x921 = -1;
	volatile uint8_t x922 = UINT8_MAX;
	int8_t x923 = -1;
	int64_t x924 = 340LL;
	int32_t t117 = -222;

    t117 = ((x921>x922)/(x923<=x924));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x925 = 6U;
	static int64_t x926 = -1LL;
	int8_t x927 = INT8_MIN;
	int32_t x928 = -1;
	int32_t t118 = 77872;

    t118 = ((x925>x926)/(x927<=x928));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x933 = INT32_MIN;
	uint64_t x935 = 267801255LLU;
	int32_t x936 = -1;
	int32_t t119 = 604917792;

    t119 = ((x933>x934)/(x935<=x936));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x941 = 39;
	uint8_t x943 = 1U;
	volatile int32_t t120 = -1;

    t120 = ((x941>x942)/(x943<=x944));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x945 = 79U;
	int16_t x946 = INT16_MIN;
	static uint16_t x948 = 23U;

    t121 = ((x945>x946)/(x947<=x948));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x949 = -1;
	int32_t x950 = INT32_MAX;
	int16_t x952 = 1;
	int32_t t122 = -326262;

    t122 = ((x949>x950)/(x951<=x952));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x961 = INT32_MIN;
	volatile int16_t x962 = -1;
	static int64_t x963 = INT64_MIN;
	int32_t t123 = -507492;

    t123 = ((x961>x962)/(x963<=x964));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x981 = 79177U;
	volatile uint64_t x982 = 26646115090388994LLU;
	static int16_t x983 = INT16_MIN;
	int16_t x984 = INT16_MAX;
	volatile int32_t t124 = -4879;

    t124 = ((x981>x982)/(x983<=x984));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x985 = -107;
	int8_t x986 = -8;
	static volatile int32_t x987 = INT32_MIN;
	int16_t x988 = INT16_MAX;
	int32_t t125 = -34;

    t125 = ((x985>x986)/(x987<=x988));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x989 = -1LL;
	volatile uint16_t x991 = 847U;
	int16_t x992 = INT16_MAX;
	volatile int32_t t126 = -1;

    t126 = ((x989>x990)/(x991<=x992));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x995 = -1;
	volatile uint16_t x996 = UINT16_MAX;
	volatile int32_t t127 = -5497432;

    t127 = ((x993>x994)/(x995<=x996));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x997 = -1;
	int16_t x998 = -1;
	int64_t x999 = -2007327LL;
	volatile int64_t x1000 = 293663189304890LL;
	int32_t t128 = -1920;

    t128 = ((x997>x998)/(x999<=x1000));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x1006 = 1538LLU;
	uint32_t x1007 = 8417423U;
	static int64_t x1008 = 1640048860331LL;
	volatile int32_t t129 = -22651;

    t129 = ((x1005>x1006)/(x1007<=x1008));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x1022 = INT8_MAX;
	uint8_t x1024 = UINT8_MAX;
	static volatile int32_t t130 = -3;

    t130 = ((x1021>x1022)/(x1023<=x1024));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1027 = INT32_MAX;

    t131 = ((x1025>x1026)/(x1027<=x1028));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1029 = INT8_MIN;
	static int8_t x1031 = INT8_MIN;
	static int32_t t132 = 305023;

    t132 = ((x1029>x1030)/(x1031<=x1032));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1033 = -148;
	int32_t x1034 = -239546086;
	int64_t x1035 = INT64_MIN;
	uint16_t x1036 = 7754U;
	volatile int32_t t133 = 19181;

    t133 = ((x1033>x1034)/(x1035<=x1036));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1037 = INT64_MIN;
	uint64_t x1038 = 70079026594LLU;
	int8_t x1039 = INT8_MAX;
	int32_t x1040 = INT32_MAX;
	static int32_t t134 = -947779434;

    t134 = ((x1037>x1038)/(x1039<=x1040));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1041 = INT16_MIN;
	volatile uint32_t x1042 = 183304533U;
	volatile int64_t x1044 = INT64_MAX;

    t135 = ((x1041>x1042)/(x1043<=x1044));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1045 = 873U;
	static int64_t x1046 = -1LL;
	uint64_t x1047 = 5046LLU;
	int16_t x1048 = -1;
	volatile int32_t t136 = 298337560;

    t136 = ((x1045>x1046)/(x1047<=x1048));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x1049 = UINT32_MAX;
	int32_t x1050 = INT32_MIN;
	uint8_t x1052 = UINT8_MAX;
	int32_t t137 = -2;

    t137 = ((x1049>x1050)/(x1051<=x1052));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x1061 = 3U;
	int32_t x1062 = INT32_MIN;
	int8_t x1063 = INT8_MAX;
	int32_t x1064 = 128292;
	int32_t t138 = -185140956;

    t138 = ((x1061>x1062)/(x1063<=x1064));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x1065 = -3472683286463LL;
	static volatile int16_t x1066 = -1;
	int64_t x1067 = -3801LL;
	int8_t x1068 = 1;
	int32_t t139 = -25465472;

    t139 = ((x1065>x1066)/(x1067<=x1068));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1081 = INT16_MIN;
	int64_t x1083 = INT64_MIN;
	static volatile int32_t x1084 = 0;
	int32_t t140 = 57003878;

    t140 = ((x1081>x1082)/(x1083<=x1084));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1101 = UINT16_MAX;
	int16_t x1103 = 0;
	uint64_t x1104 = 120LLU;
	int32_t t141 = 3549814;

    t141 = ((x1101>x1102)/(x1103<=x1104));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1109 = 5583;
	volatile int64_t x1110 = 1LL;
	static int32_t x1111 = 0;
	volatile uint8_t x1112 = UINT8_MAX;
	volatile int32_t t142 = -15614183;

    t142 = ((x1109>x1110)/(x1111<=x1112));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x1117 = INT32_MIN;
	int64_t x1119 = INT64_MIN;
	int64_t x1120 = INT64_MIN;
	static int32_t t143 = -1384;

    t143 = ((x1117>x1118)/(x1119<=x1120));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1122 = UINT8_MAX;
	static int8_t x1123 = INT8_MIN;
	uint64_t x1124 = UINT64_MAX;
	static int32_t t144 = -1;

    t144 = ((x1121>x1122)/(x1123<=x1124));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x1129 = 2138U;
	volatile int16_t x1130 = INT16_MAX;
	static int8_t x1131 = -1;

    t145 = ((x1129>x1130)/(x1131<=x1132));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x1133 = INT32_MAX;
	uint32_t x1134 = UINT32_MAX;
	int64_t x1135 = INT64_MIN;
	int16_t x1136 = -7;
	int32_t t146 = -251;

    t146 = ((x1133>x1134)/(x1135<=x1136));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1137 = -3266;
	int8_t x1140 = INT8_MIN;
	int32_t t147 = -14738407;

    t147 = ((x1137>x1138)/(x1139<=x1140));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1144 = 537867474LLU;
	static int32_t t148 = 3943;

    t148 = ((x1141>x1142)/(x1143<=x1144));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x1146 = INT8_MIN;
	int8_t x1147 = INT8_MIN;
	int64_t x1148 = 220111434076840482LL;
	volatile int32_t t149 = -219170;

    t149 = ((x1145>x1146)/(x1147<=x1148));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1161 = INT16_MIN;
	static int8_t x1162 = INT8_MAX;
	uint16_t x1164 = UINT16_MAX;
	volatile int32_t t150 = 435311710;

    t150 = ((x1161>x1162)/(x1163<=x1164));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x1173 = INT16_MAX;
	int16_t x1174 = INT16_MIN;
	static int8_t x1175 = -1;
	int32_t t151 = 320947239;

    t151 = ((x1173>x1174)/(x1175<=x1176));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x1201 = 1915U;
	uint8_t x1202 = 6U;
	int16_t x1203 = -1;
	uint16_t x1204 = 3959U;
	int32_t t152 = 1432218;

    t152 = ((x1201>x1202)/(x1203<=x1204));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x1205 = INT64_MAX;
	volatile int16_t x1207 = INT16_MAX;
	static volatile uint64_t x1208 = 8298417891890320286LLU;
	int32_t t153 = 1026242332;

    t153 = ((x1205>x1206)/(x1207<=x1208));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1209 = 3228U;
	int32_t x1211 = INT32_MIN;
	static int32_t x1212 = INT32_MAX;

    t154 = ((x1209>x1210)/(x1211<=x1212));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x1213 = INT32_MIN;
	volatile uint32_t x1215 = 2800U;
	static int32_t x1216 = INT32_MIN;

    t155 = ((x1213>x1214)/(x1215<=x1216));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t t156 = 103892987;

    t156 = ((x1221>x1222)/(x1223<=x1224));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x1226 = -27;
	int8_t x1227 = -1;
	static int8_t x1228 = INT8_MAX;
	int32_t t157 = 252;

    t157 = ((x1225>x1226)/(x1227<=x1228));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1229 = -181LL;
	volatile uint32_t x1230 = 234U;
	int64_t x1231 = INT64_MIN;
	int32_t t158 = 2;

    t158 = ((x1229>x1230)/(x1231<=x1232));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x1233 = INT16_MIN;
	volatile uint16_t x1234 = 21U;
	int32_t x1235 = -24595062;
	int64_t x1236 = -1LL;
	int32_t t159 = -81494;

    t159 = ((x1233>x1234)/(x1235<=x1236));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x1241 = UINT64_MAX;
	volatile uint8_t x1242 = 118U;
	volatile int16_t x1243 = 15504;
	int32_t t160 = -280484475;

    t160 = ((x1241>x1242)/(x1243<=x1244));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1265 = -1;
	volatile int8_t x1266 = -1;
	int32_t x1267 = INT32_MIN;
	int32_t t161 = -58650;

    t161 = ((x1265>x1266)/(x1267<=x1268));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1269 = INT16_MIN;
	static int64_t x1270 = 453LL;
	int32_t x1271 = INT32_MIN;
	int8_t x1272 = INT8_MIN;
	static int32_t t162 = 1067975;

    t162 = ((x1269>x1270)/(x1271<=x1272));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x1281 = 0U;
	uint64_t x1282 = 458684584654LLU;
	static volatile int16_t x1284 = -1;
	volatile int32_t t163 = 195;

    t163 = ((x1281>x1282)/(x1283<=x1284));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1285 = 1907U;
	uint16_t x1286 = 0U;
	uint16_t x1287 = 15808U;
	int64_t x1288 = 197911771609204LL;
	int32_t t164 = -30;

    t164 = ((x1285>x1286)/(x1287<=x1288));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x1289 = 1U;
	int64_t x1290 = INT64_MIN;
	int64_t x1291 = INT64_MIN;
	static int16_t x1292 = INT16_MIN;
	int32_t t165 = 34;

    t165 = ((x1289>x1290)/(x1291<=x1292));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1301 = 40324874U;
	uint16_t x1302 = UINT16_MAX;
	int16_t x1304 = -1;

    t166 = ((x1301>x1302)/(x1303<=x1304));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1306 = -60397;
	volatile uint32_t x1307 = 60U;
	int16_t x1308 = -1;
	static int32_t t167 = 10978880;

    t167 = ((x1305>x1306)/(x1307<=x1308));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x1313 = 5775979LLU;
	int16_t x1314 = 38;
	int8_t x1315 = -4;
	volatile uint16_t x1316 = 939U;
	volatile int32_t t168 = -1938489;

    t168 = ((x1313>x1314)/(x1315<=x1316));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1318 = INT64_MIN;
	int32_t x1319 = -1;
	int16_t x1320 = -1;
	int32_t t169 = -3;

    t169 = ((x1317>x1318)/(x1319<=x1320));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x1322 = 39;
	static int16_t x1323 = -7;
	int8_t x1324 = INT8_MAX;
	volatile int32_t t170 = -1811;

    t170 = ((x1321>x1322)/(x1323<=x1324));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1329 = 22U;
	int64_t x1332 = INT64_MAX;
	volatile int32_t t171 = -37;

    t171 = ((x1329>x1330)/(x1331<=x1332));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1333 = INT16_MAX;
	int8_t x1334 = 4;
	int32_t x1335 = -1;
	uint16_t x1336 = 15933U;
	volatile int32_t t172 = 4;

    t172 = ((x1333>x1334)/(x1335<=x1336));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1345 = 899U;
	int32_t t173 = -1039711;

    t173 = ((x1345>x1346)/(x1347<=x1348));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x1349 = INT64_MIN;
	uint32_t x1350 = UINT32_MAX;
	volatile int16_t x1351 = INT16_MIN;
	int32_t t174 = -1714;

    t174 = ((x1349>x1350)/(x1351<=x1352));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1357 = -1;
	uint32_t x1358 = 4248305U;
	int16_t x1359 = INT16_MIN;
	static int32_t x1360 = -10888;

    t175 = ((x1357>x1358)/(x1359<=x1360));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1365 = UINT64_MAX;
	int8_t x1366 = 8;
	int32_t x1368 = -1;
	int32_t t176 = 13475;

    t176 = ((x1365>x1366)/(x1367<=x1368));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1369 = INT32_MIN;
	static volatile int32_t x1370 = INT32_MIN;
	static uint64_t x1371 = 2981420LLU;
	static volatile int8_t x1372 = INT8_MIN;
	volatile int32_t t177 = -58983579;

    t177 = ((x1369>x1370)/(x1371<=x1372));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t t178 = 15232;

    t178 = ((x1373>x1374)/(x1375<=x1376));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x1381 = 100U;
	uint32_t x1382 = 33U;
	uint32_t x1383 = 570U;
	int32_t x1384 = -3;
	int32_t t179 = 1;

    t179 = ((x1381>x1382)/(x1383<=x1384));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1387 = INT8_MIN;
	static uint8_t x1388 = 10U;
	int32_t t180 = -17528624;

    t180 = ((x1385>x1386)/(x1387<=x1388));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1390 = 5;
	int8_t x1392 = 15;

    t181 = ((x1389>x1390)/(x1391<=x1392));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1395 = INT64_MIN;
	volatile int16_t x1396 = INT16_MIN;
	volatile int32_t t182 = -967754722;

    t182 = ((x1393>x1394)/(x1395<=x1396));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x1397 = UINT16_MAX;
	int32_t x1398 = -1;
	static uint8_t x1399 = 20U;
	volatile uint64_t x1400 = 977134808LLU;
	volatile int32_t t183 = -1;

    t183 = ((x1397>x1398)/(x1399<=x1400));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1401 = UINT32_MAX;
	uint16_t x1402 = 975U;
	int64_t x1403 = INT64_MIN;
	static volatile int32_t x1404 = -1;
	volatile int32_t t184 = 118074;

    t184 = ((x1401>x1402)/(x1403<=x1404));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1437 = 50;
	static int16_t x1438 = INT16_MIN;
	uint16_t x1440 = 31106U;
	static volatile int32_t t185 = 41;

    t185 = ((x1437>x1438)/(x1439<=x1440));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x1445 = 18U;
	int32_t x1446 = INT32_MIN;
	static int64_t x1447 = INT64_MIN;
	static int8_t x1448 = INT8_MIN;
	volatile int32_t t186 = 713763;

    t186 = ((x1445>x1446)/(x1447<=x1448));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1449 = -3690;
	int8_t x1450 = INT8_MIN;
	int32_t x1452 = INT32_MAX;

    t187 = ((x1449>x1450)/(x1451<=x1452));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1453 = INT8_MIN;
	int64_t x1454 = INT64_MIN;
	volatile int32_t x1455 = INT32_MIN;
	static int32_t t188 = 25170;

    t188 = ((x1453>x1454)/(x1455<=x1456));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1463 = -1LL;
	int64_t x1464 = 545965703957LL;
	volatile int32_t t189 = -534642;

    t189 = ((x1461>x1462)/(x1463<=x1464));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1467 = 60353098LLU;
	volatile uint64_t x1468 = UINT64_MAX;
	static volatile int32_t t190 = -1835;

    t190 = ((x1465>x1466)/(x1467<=x1468));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1469 = UINT8_MAX;
	static int16_t x1470 = INT16_MIN;
	int32_t t191 = -219;

    t191 = ((x1469>x1470)/(x1471<=x1472));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x1474 = INT32_MIN;
	static int32_t t192 = -61;

    t192 = ((x1473>x1474)/(x1475<=x1476));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1481 = -47;
	int32_t x1482 = INT32_MIN;
	volatile int64_t x1483 = -1LL;
	int8_t x1484 = -1;
	volatile int32_t t193 = -21;

    t193 = ((x1481>x1482)/(x1483<=x1484));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1489 = 1550493U;
	static uint64_t x1490 = 14785907LLU;
	uint16_t x1492 = UINT16_MAX;
	int32_t t194 = -216627;

    t194 = ((x1489>x1490)/(x1491<=x1492));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1497 = 0;
	int8_t x1499 = 7;
	uint32_t x1500 = UINT32_MAX;

    t195 = ((x1497>x1498)/(x1499<=x1500));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1501 = INT8_MAX;
	int8_t x1502 = 10;
	uint16_t x1503 = 0U;
	static int32_t t196 = -7;

    t196 = ((x1501>x1502)/(x1503<=x1504));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1505 = 6;
	int16_t x1506 = -1;
	volatile uint8_t x1507 = 51U;
	uint8_t x1508 = UINT8_MAX;

    t197 = ((x1505>x1506)/(x1507<=x1508));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1509 = INT8_MIN;
	volatile uint8_t x1510 = UINT8_MAX;
	volatile int32_t x1511 = 6;
	volatile int32_t t198 = -1317131;

    t198 = ((x1509>x1510)/(x1511<=x1512));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1513 = UINT8_MAX;
	volatile int8_t x1514 = INT8_MIN;
	volatile int8_t x1515 = 0;
	int16_t x1516 = INT16_MAX;
	static volatile int32_t t199 = -681;

    t199 = ((x1513>x1514)/(x1515<=x1516));

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

