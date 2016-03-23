
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

uint16_t x7 = 20U;
int8_t x8 = 54;
int64_t x13 = 5LL;
static int64_t x25 = 991023345494944LL;
static int64_t t3 = 253LL;
int16_t x36 = -1;
volatile int16_t x39 = 744;
int32_t t5 = -1527650;
uint64_t x43 = 739749LLU;
static int32_t x44 = 13;
volatile int32_t t6 = 2406;
uint32_t x57 = 1U;
volatile uint32_t t9 = 1155U;
static uint16_t x105 = UINT16_MAX;
int32_t x169 = 6942;
uint16_t x172 = 285U;
int16_t x174 = INT16_MAX;
int32_t x175 = 809207680;
int64_t x186 = INT64_MIN;
uint64_t x217 = UINT64_MAX;
volatile int16_t x219 = INT16_MIN;
int8_t x225 = INT8_MAX;
int8_t x226 = -11;
static int64_t x228 = INT64_MAX;
uint16_t x231 = 1U;
static int32_t x239 = -7339334;
uint32_t t21 = 13709067U;
volatile uint64_t x257 = 951813679LLU;
static int8_t x258 = -1;
int32_t x278 = -20767712;
volatile int64_t t25 = -784775616LL;
uint32_t x290 = UINT32_MAX;
static uint64_t x292 = 222122036507LLU;
int32_t x295 = INT32_MIN;
static volatile int32_t t28 = -1622;
static uint64_t t29 = 605LLU;
int16_t x321 = 0;
uint32_t x323 = UINT32_MAX;
int8_t x328 = -36;
static int64_t x336 = INT64_MIN;
volatile int32_t t33 = 4110;
uint32_t x354 = 97567U;
int8_t x355 = -1;
int16_t x356 = INT16_MIN;
uint32_t x357 = UINT32_MAX;
int32_t x359 = INT32_MIN;
uint16_t x390 = 29930U;
static uint8_t x405 = 1U;
volatile int8_t x429 = 0;
int32_t x431 = INT32_MIN;
static uint64_t x449 = UINT64_MAX;
uint16_t x451 = 301U;
volatile int64_t x452 = -1LL;
volatile uint64_t t44 = UINT64_MAX;
volatile int64_t x454 = 243207616LL;
int16_t x481 = INT16_MAX;
uint64_t x490 = 6813LLU;
static int64_t x506 = INT64_MIN;
static int64_t t52 = 3058704300710LL;
static uint64_t x516 = 46570LLU;
uint64_t t53 = 891055LLU;
int64_t x523 = 15214401LL;
uint16_t x526 = UINT16_MAX;
volatile uint64_t x535 = 14LLU;
int8_t x537 = INT8_MAX;
uint64_t x569 = UINT64_MAX;
int8_t x575 = -1;
static int8_t x577 = 23;
static volatile int32_t x578 = -1;
int64_t x580 = 219561LL;
int8_t x587 = INT8_MAX;
static uint8_t x588 = UINT8_MAX;
static volatile int32_t x590 = INT32_MIN;
volatile uint8_t x591 = UINT8_MAX;
int8_t x596 = INT8_MIN;
int8_t x606 = 8;
int16_t x608 = INT16_MAX;
volatile int64_t x618 = INT64_MAX;
static volatile uint64_t t69 = 256733935LLU;
volatile int32_t t72 = -1240;
uint32_t x642 = 2U;
int16_t x643 = -5207;
int8_t x644 = 2;
int32_t t75 = -3603;
uint64_t x666 = 6085150293024LLU;
static uint32_t x668 = UINT32_MAX;
static int32_t x682 = 3;
static int8_t x684 = 0;
int8_t x688 = 8;
volatile int32_t t80 = -29;
int64_t x703 = INT64_MIN;
uint8_t x742 = 1U;
uint32_t x744 = 51U;
volatile int64_t x764 = INT64_MAX;
static int16_t x784 = INT16_MIN;
volatile uint16_t x793 = UINT16_MAX;
int8_t x795 = -23;
static int32_t x796 = INT32_MAX;
uint16_t x803 = 1U;
uint16_t x804 = 1773U;
volatile uint32_t t94 = 11296574U;
volatile uint64_t x813 = UINT64_MAX;
static volatile int8_t x814 = INT8_MIN;
int8_t x815 = INT8_MAX;
static volatile int64_t t96 = 16990688325178LL;
uint32_t x823 = UINT32_MAX;
int32_t x827 = -1;
int16_t x849 = 1446;
int64_t x852 = 3946718207LL;
volatile int64_t t100 = 13565329LL;
volatile int64_t t103 = 18070LL;
static volatile int16_t x875 = -1;
int64_t t106 = 15050185438923LL;
static int16_t x905 = 11;
volatile int32_t t109 = -29612379;
uint16_t x913 = 9U;
int64_t x914 = 0LL;
int32_t x918 = INT32_MIN;
uint32_t t116 = 481430766U;
int8_t x987 = INT8_MAX;
int32_t t118 = 2351;
uint32_t x997 = 1424U;
int8_t x1018 = INT8_MIN;
uint16_t x1019 = 6U;
int64_t x1022 = INT64_MAX;
uint8_t x1023 = UINT8_MAX;
volatile int32_t t122 = 58;
static int64_t x1043 = 3924900966819802LL;
uint32_t x1046 = UINT32_MAX;
int64_t t125 = -11248842761083LL;
int8_t x1057 = INT8_MAX;
volatile uint32_t x1060 = 4679625U;
static uint32_t t126 = 27100214U;
int64_t x1064 = 136150869709523LL;
int16_t x1069 = INT16_MAX;
int16_t x1070 = INT16_MIN;
static uint64_t t128 = 19LLU;
uint64_t x1089 = 24720928253835LLU;
int32_t x1091 = INT32_MIN;
int16_t x1101 = 9267;
int32_t x1102 = -546;
volatile int64_t x1106 = INT64_MIN;
int32_t x1115 = INT32_MAX;
int16_t x1122 = INT16_MIN;
int16_t x1135 = 3787;
uint64_t t137 = 210101439458870LLU;
volatile int32_t t138 = -3847463;
int32_t x1145 = 3447031;
uint16_t x1156 = 27193U;
uint8_t x1166 = 14U;
uint64_t x1169 = 3333179132LLU;
uint8_t x1173 = 36U;
volatile uint32_t x1201 = 18092365U;
static volatile int16_t x1218 = 37;
int16_t x1223 = -1;
static int8_t x1233 = 4;
int32_t x1235 = INT32_MAX;
static uint64_t x1249 = 4909601LLU;
static volatile int16_t x1251 = -1;
volatile uint64_t t152 = 203055LLU;
uint64_t x1253 = 58688214LLU;
uint32_t x1259 = 222U;
volatile int8_t x1264 = -14;
int64_t x1266 = -181007100LL;
uint16_t x1267 = 30U;
volatile uint64_t t156 = 1LLU;
uint32_t x1269 = UINT32_MAX;
int16_t x1274 = -12907;
uint8_t x1275 = 17U;
uint64_t x1286 = 3850006776620659LLU;
int32_t x1293 = 49563297;
uint64_t x1294 = 3669015318693428111LLU;
static uint32_t t161 = 2473459U;
int8_t x1311 = INT8_MAX;
int16_t x1314 = INT16_MIN;
int8_t x1315 = -1;
uint8_t x1317 = 100U;
uint32_t x1323 = UINT32_MAX;
volatile int64_t t166 = 1112562665826110838LL;
int16_t x1329 = 447;
uint16_t x1334 = 1133U;
uint32_t x1367 = UINT32_MAX;
uint8_t x1369 = 0U;
int8_t x1370 = -47;
volatile int32_t x1399 = 35176644;
uint64_t x1400 = 14LLU;
uint64_t t173 = 5805938132905645LLU;
static int32_t x1401 = 30;
int32_t x1403 = 1;
uint8_t x1404 = 7U;
static uint16_t x1405 = 1U;
uint64_t x1410 = 1715181972241LLU;
static int64_t x1411 = INT64_MIN;
volatile uint8_t x1433 = UINT8_MAX;
int16_t x1442 = -1;
static uint32_t x1444 = 43582U;
uint16_t x1460 = 25312U;
volatile int64_t x1508 = INT64_MIN;
volatile uint64_t t188 = 11605245227522415LLU;
uint16_t x1541 = UINT16_MAX;
int16_t x1542 = INT16_MAX;
uint32_t x1545 = UINT32_MAX;
static int16_t x1555 = 332;
uint64_t x1556 = 41LLU;
uint8_t x1572 = UINT8_MAX;
uint64_t x1576 = 14519016LLU;
int32_t x1580 = INT32_MAX;
int64_t t195 = -17406567996LL;
volatile int64_t x1585 = 148040369LL;
uint64_t x1587 = 228LLU;
uint8_t x1611 = 6U;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint32_t x2 = 5U;
	static uint32_t x3 = 12093019U;
	uint8_t x4 = 1U;
	volatile int32_t t0 = -37926;

    t0 = ((x1<<(x2!=x3))-x4);

    if (t0 != 509) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	volatile uint64_t x6 = UINT64_MAX;
	uint64_t t1 = 4LLU;

    t1 = ((x5<<(x6!=x7))-x8);

    if (t1 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x14 = 1786760LLU;
	volatile int16_t x15 = -32;
	volatile uint64_t x16 = 4025LLU;
	uint64_t t2 = 10LLU;

    t2 = ((x13<<(x14!=x15))-x16);

    if (t2 != 18446744073709547601LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x26 = 61U;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = -1;

    t3 = ((x25<<(x26!=x27))-x28);

    if (t3 != 1982046690989889LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x33 = 11078063108692630LLU;
	uint8_t x34 = 43U;
	volatile int8_t x35 = INT8_MIN;
	volatile uint64_t t4 = 2LLU;

    t4 = ((x33<<(x34!=x35))-x36);

    if (t4 != 22156126217385261LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x37 = 101;
	static uint16_t x38 = 64U;
	int16_t x40 = -138;

    t5 = ((x37<<(x38!=x39))-x40);

    if (t5 != 340) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x41 = 1;
	int8_t x42 = INT8_MIN;

    t6 = ((x41<<(x42!=x43))-x44);

    if (t6 != -11) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x45 = 103U;
	static int16_t x46 = INT16_MIN;
	uint32_t x47 = 5U;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t7 = 152796453666303LLU;

    t7 = ((x45<<(x46!=x47))-x48);

    if (t7 != 207LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x58 = INT8_MIN;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;
	int64_t t8 = 8LL;

    t8 = ((x57<<(x58!=x59))-x60);

    if (t8 != 3LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x73 = 0U;
	int16_t x74 = 1;
	static int64_t x75 = INT64_MIN;
	uint32_t x76 = UINT32_MAX;

    t9 = ((x73<<(x74!=x75))-x76);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x81 = 1U;
	volatile int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MAX;
	int64_t t10 = 2LL;

    t10 = ((x81<<(x82!=x83))-x84);

    if (t10 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x106 = 45LLU;
	static int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;
	int32_t t11 = 4;

    t11 = ((x105<<(x106!=x107))-x108);

    if (t11 != 131198) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x117 = 7763274488LLU;
	int32_t x118 = -11;
	uint64_t x119 = 68972852173LLU;
	volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t12 = 24908763288970399LLU;

    t12 = ((x117<<(x118!=x119))-x120);

    if (t12 != 9223372052381324784LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x145 = 11;
	static int16_t x146 = -1;
	static int8_t x147 = -2;
	volatile int8_t x148 = 3;
	static volatile int32_t t13 = -475084;

    t13 = ((x145<<(x146!=x147))-x148);

    if (t13 != 19) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x161 = 53;
	int16_t x162 = -119;
	static int64_t x163 = INT64_MAX;
	int16_t x164 = INT16_MIN;
	static int32_t t14 = 167201;

    t14 = ((x161<<(x162!=x163))-x164);

    if (t14 != 32874) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x170 = -1;
	volatile int8_t x171 = INT8_MIN;
	static int32_t t15 = 0;

    t15 = ((x169<<(x170!=x171))-x172);

    if (t15 != 13599) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x173 = UINT32_MAX;
	int8_t x176 = 10;
	uint32_t t16 = 0U;

    t16 = ((x173<<(x174!=x175))-x176);

    if (t16 != 4294967284U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x185 = 206560958U;
	uint64_t x187 = 924380LLU;
	int16_t x188 = 611;
	volatile uint32_t t17 = 43368218U;

    t17 = ((x185<<(x186!=x187))-x188);

    if (t17 != 413121305U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x218 = INT16_MAX;
	volatile int16_t x220 = INT16_MIN;
	uint64_t t18 = 9099LLU;

    t18 = ((x217<<(x218!=x219))-x220);

    if (t18 != 32766LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x227 = INT16_MAX;
	volatile int64_t t19 = -278000107645918553LL;

    t19 = ((x225<<(x226!=x227))-x228);

    if (t19 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x229 = 2;
	int16_t x230 = INT16_MIN;
	static int32_t x232 = 397;
	volatile int32_t t20 = -735;

    t20 = ((x229<<(x230!=x231))-x232);

    if (t20 != -393) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x237 = UINT32_MAX;
	static int8_t x238 = -1;
	uint8_t x240 = UINT8_MAX;

    t21 = ((x237<<(x238!=x239))-x240);

    if (t21 != 4294967039U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x259 = 1394U;
	int16_t x260 = INT16_MIN;
	uint64_t t22 = 15357820171LLU;

    t22 = ((x257<<(x258!=x259))-x260);

    if (t22 != 1903660126LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x265 = INT16_MAX;
	uint64_t x266 = 6796385LLU;
	uint8_t x267 = 7U;
	uint8_t x268 = 30U;
	volatile int32_t t23 = -246623;

    t23 = ((x265<<(x266!=x267))-x268);

    if (t23 != 65504) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x277 = 0;
	uint8_t x279 = UINT8_MAX;
	uint64_t x280 = 129917397788687LLU;
	static uint64_t t24 = 229060991LLU;

    t24 = ((x277<<(x278!=x279))-x280);

    if (t24 != 18446614156311762929LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x281 = 164825LL;
	int32_t x282 = INT32_MAX;
	int8_t x283 = INT8_MIN;
	int8_t x284 = -14;

    t25 = ((x281<<(x282!=x283))-x284);

    if (t25 != 329664LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x289 = INT8_MAX;
	static int64_t x291 = INT64_MIN;
	static volatile uint64_t t26 = 12659498LLU;

    t26 = ((x289<<(x290!=x291))-x292);

    if (t26 != 18446743851587515363LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = UINT8_MAX;
	int64_t x296 = INT64_MAX;
	uint64_t t27 = 1LLU;

    t27 = ((x293<<(x294!=x295))-x296);

    if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x301 = 24U;
	int64_t x302 = INT64_MAX;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = -29624;

    t28 = ((x301<<(x302!=x303))-x304);

    if (t28 != 29672) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x317 = 3U;
	int64_t x318 = -1LL;
	volatile int8_t x319 = -5;
	uint64_t x320 = 1LLU;

    t29 = ((x317<<(x318!=x319))-x320);

    if (t29 != 5LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x322 = 70444002820LLU;
	volatile int8_t x324 = -1;
	int32_t t30 = 10700;

    t30 = ((x321<<(x322!=x323))-x324);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x325 = UINT64_MAX;
	int8_t x326 = -1;
	volatile int8_t x327 = INT8_MIN;
	uint64_t t31 = 4673008134006442555LLU;

    t31 = ((x325<<(x326!=x327))-x328);

    if (t31 != 34LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x333 = 144246816393510308LLU;
	int8_t x334 = -28;
	int32_t x335 = 13;
	uint64_t t32 = 50517LLU;

    t32 = ((x333<<(x334!=x335))-x336);

    if (t32 != 9511865669641796424LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x349 = 9;
	volatile uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 10U;
	uint8_t x352 = 75U;

    t33 = ((x349<<(x350!=x351))-x352);

    if (t33 != -57) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x353 = 496585610869LL;
	volatile int64_t t34 = 6446LL;

    t34 = ((x353<<(x354!=x355))-x356);

    if (t34 != 993171254506LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x358 = 6U;
	static volatile int8_t x360 = -1;
	volatile uint32_t t35 = UINT32_MAX;

    t35 = ((x357<<(x358!=x359))-x360);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x369 = 16U;
	int32_t x370 = INT32_MAX;
	static int16_t x371 = INT16_MIN;
	volatile uint64_t x372 = 568111174LLU;
	volatile uint64_t t36 = 61821540LLU;

    t36 = ((x369<<(x370!=x371))-x372);

    if (t36 != 18446744073141440474LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x377 = 0U;
	static int8_t x378 = -1;
	int8_t x379 = 3;
	uint32_t x380 = 267872437U;
	static volatile uint32_t t37 = 13516U;

    t37 = ((x377<<(x378!=x379))-x380);

    if (t37 != 4027094859U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x381 = UINT16_MAX;
	int8_t x382 = -1;
	static int16_t x383 = 1;
	int16_t x384 = INT16_MIN;
	volatile int32_t t38 = 7372;

    t38 = ((x381<<(x382!=x383))-x384);

    if (t38 != 163838) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x389 = 1524;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MAX;
	volatile int32_t t39 = 0;

    t39 = ((x389<<(x390!=x391))-x392);

    if (t39 != -2147480599) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x406 = INT16_MIN;
	static uint16_t x407 = 66U;
	volatile int8_t x408 = INT8_MIN;
	static int32_t t40 = 5744;

    t40 = ((x405<<(x406!=x407))-x408);

    if (t40 != 130) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x430 = UINT64_MAX;
	static uint64_t x432 = 696813838292LLU;
	static uint64_t t41 = 2663524325428653LLU;

    t41 = ((x429<<(x430!=x431))-x432);

    if (t41 != 18446743376895713324LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x433 = 7986;
	static volatile int32_t x434 = 631;
	static int8_t x435 = -1;
	uint64_t x436 = 565815988LLU;
	volatile uint64_t t42 = 444515579437LLU;

    t42 = ((x433<<(x434!=x435))-x436);

    if (t42 != 18446744073143751600LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x445 = 25U;
	int8_t x446 = INT8_MAX;
	int16_t x447 = -1;
	uint8_t x448 = 52U;
	static volatile int32_t t43 = 19571;

    t43 = ((x445<<(x446!=x447))-x448);

    if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x450 = 79U;

    t44 = ((x449<<(x450!=x451))-x452);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x453 = UINT32_MAX;
	static volatile uint32_t x455 = 2700295U;
	static int16_t x456 = INT16_MIN;
	uint32_t t45 = 29U;

    t45 = ((x453<<(x454!=x455))-x456);

    if (t45 != 32766U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x461 = 3;
	static volatile int64_t x462 = INT64_MIN;
	uint8_t x463 = 8U;
	uint16_t x464 = 574U;
	static volatile int32_t t46 = 2399319;

    t46 = ((x461<<(x462!=x463))-x464);

    if (t46 != -568) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x469 = UINT64_MAX;
	int16_t x470 = INT16_MIN;
	volatile int64_t x471 = INT64_MIN;
	static volatile uint64_t x472 = UINT64_MAX;
	uint64_t t47 = UINT64_MAX;

    t47 = ((x469<<(x470!=x471))-x472);

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x482 = UINT64_MAX;
	uint16_t x483 = UINT16_MAX;
	uint64_t x484 = UINT64_MAX;
	uint64_t t48 = 236995LLU;

    t48 = ((x481<<(x482!=x483))-x484);

    if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x485 = 85379U;
	static int32_t x486 = -1;
	uint32_t x487 = UINT32_MAX;
	uint8_t x488 = 3U;
	volatile uint32_t t49 = 52308U;

    t49 = ((x485<<(x486!=x487))-x488);

    if (t49 != 85376U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x489 = 3U;
	int16_t x491 = INT16_MAX;
	uint16_t x492 = UINT16_MAX;
	int32_t t50 = 17653856;

    t50 = ((x489<<(x490!=x491))-x492);

    if (t50 != -65529) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x501 = 347U;
	int32_t x502 = INT32_MAX;
	uint64_t x503 = 2715LLU;
	static uint16_t x504 = 5711U;
	volatile int32_t t51 = -4;

    t51 = ((x501<<(x502!=x503))-x504);

    if (t51 != -5017) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	volatile uint32_t x507 = 35175U;
	int64_t x508 = INT64_MAX;

    t52 = ((x505<<(x506!=x507))-x508);

    if (t52 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x513 = 1966;
	uint64_t x514 = 2390LLU;
	int32_t x515 = INT32_MIN;

    t53 = ((x513<<(x514!=x515))-x516);

    if (t53 != 18446744073709508978LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x517 = 11035929813LL;
	int32_t x518 = -3;
	uint32_t x519 = UINT32_MAX;
	int16_t x520 = -1563;
	static int64_t t54 = 189437611548558LL;

    t54 = ((x517<<(x518!=x519))-x520);

    if (t54 != 22071861189LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x521 = 38U;
	static int32_t x522 = INT32_MIN;
	volatile uint32_t x524 = UINT32_MAX;
	static uint32_t t55 = 941670U;

    t55 = ((x521<<(x522!=x523))-x524);

    if (t55 != 77U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x525 = INT32_MAX;
	uint16_t x527 = UINT16_MAX;
	int16_t x528 = INT16_MAX;
	volatile int32_t t56 = 43908881;

    t56 = ((x525<<(x526!=x527))-x528);

    if (t56 != 2147450880) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x533 = 1U;
	static volatile int16_t x534 = INT16_MIN;
	int8_t x536 = INT8_MIN;
	static uint32_t t57 = 610337574U;

    t57 = ((x533<<(x534!=x535))-x536);

    if (t57 != 130U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x538 = 1380400U;
	int32_t x539 = -1;
	int64_t x540 = INT64_MAX;
	int64_t t58 = 110665011164753LL;

    t58 = ((x537<<(x538!=x539))-x540);

    if (t58 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x561 = 125U;
	int64_t x562 = INT64_MIN;
	static uint16_t x563 = 125U;
	uint32_t x564 = UINT32_MAX;
	static volatile uint32_t t59 = 1279312U;

    t59 = ((x561<<(x562!=x563))-x564);

    if (t59 != 251U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x570 = 8;
	int8_t x571 = INT8_MIN;
	int8_t x572 = 4;
	static volatile uint64_t t60 = 6019250926197442105LLU;

    t60 = ((x569<<(x570!=x571))-x572);

    if (t60 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x573 = 8173796064LLU;
	volatile int16_t x574 = INT16_MIN;
	uint64_t x576 = 1071924750683927LLU;
	uint64_t t61 = 28135884LLU;

    t61 = ((x573<<(x574!=x575))-x576);

    if (t61 != 18445672165306459817LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x579 = 8162U;
	int64_t t62 = -28759641930030LL;

    t62 = ((x577<<(x578!=x579))-x580);

    if (t62 != -219515LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x586 = INT8_MIN;
	int32_t t63 = -42981;

    t63 = ((x585<<(x586!=x587))-x588);

    if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x589 = 245;
	int16_t x592 = 15079;
	int32_t t64 = -63;

    t64 = ((x589<<(x590!=x591))-x592);

    if (t64 != -14589) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x593 = 37492220U;
	int16_t x594 = INT16_MIN;
	uint16_t x595 = 1016U;
	volatile uint32_t t65 = 230306161U;

    t65 = ((x593<<(x594!=x595))-x596);

    if (t65 != 74984568U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x605 = 0U;
	uint32_t x607 = UINT32_MAX;
	int32_t t66 = -15555;

    t66 = ((x605<<(x606!=x607))-x608);

    if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x609 = 67508485235LL;
	static uint64_t x610 = 19LLU;
	static volatile int64_t x611 = INT64_MIN;
	int16_t x612 = -15609;
	volatile int64_t t67 = 15410LL;

    t67 = ((x609<<(x610!=x611))-x612);

    if (t67 != 135016986079LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x617 = 7U;
	static int32_t x619 = INT32_MIN;
	uint16_t x620 = 1922U;
	volatile int32_t t68 = 3933408;

    t68 = ((x617<<(x618!=x619))-x620);

    if (t68 != -1908) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x621 = 4377284LLU;
	volatile int64_t x622 = INT64_MIN;
	int16_t x623 = INT16_MIN;
	static volatile int8_t x624 = -49;

    t69 = ((x621<<(x622!=x623))-x624);

    if (t69 != 8754617LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x625 = 37;
	uint32_t x626 = UINT32_MAX;
	uint8_t x627 = UINT8_MAX;
	int8_t x628 = -1;
	int32_t t70 = -287984;

    t70 = ((x625<<(x626!=x627))-x628);

    if (t70 != 75) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x629 = INT16_MAX;
	static uint32_t x630 = UINT32_MAX;
	int32_t x631 = INT32_MIN;
	static uint16_t x632 = 1795U;
	volatile int32_t t71 = 19952;

    t71 = ((x629<<(x630!=x631))-x632);

    if (t71 != 63739) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x637 = 15;
	uint64_t x638 = UINT64_MAX;
	uint8_t x639 = 4U;
	uint16_t x640 = 214U;

    t72 = ((x637<<(x638!=x639))-x640);

    if (t72 != -184) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x641 = 124U;
	volatile int32_t t73 = -32723;

    t73 = ((x641<<(x642!=x643))-x644);

    if (t73 != 246) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x645 = INT16_MAX;
	int32_t x646 = 65468;
	uint64_t x647 = 317985623345462LLU;
	static uint32_t x648 = UINT32_MAX;
	uint32_t t74 = 45U;

    t74 = ((x645<<(x646!=x647))-x648);

    if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x661 = 70U;
	uint32_t x662 = UINT32_MAX;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MIN;

    t75 = ((x661<<(x662!=x663))-x664);

    if (t75 != 268) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x665 = 0;
	int64_t x667 = INT64_MIN;
	uint32_t t76 = 732893U;

    t76 = ((x665<<(x666!=x667))-x668);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x669 = 24LLU;
	uint32_t x670 = 59071U;
	int32_t x671 = INT32_MAX;
	uint64_t x672 = UINT64_MAX;
	uint64_t t77 = 215492272333978LLU;

    t77 = ((x669<<(x670!=x671))-x672);

    if (t77 != 49LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x677 = INT16_MAX;
	volatile int16_t x678 = -1;
	volatile int32_t x679 = -532721153;
	uint32_t x680 = 0U;
	static volatile uint32_t t78 = 1976424923U;

    t78 = ((x677<<(x678!=x679))-x680);

    if (t78 != 65534U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x681 = 2U;
	int32_t x683 = INT32_MAX;
	int32_t t79 = -6564829;

    t79 = ((x681<<(x682!=x683))-x684);

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x685 = 1;
	int32_t x686 = INT32_MAX;
	uint16_t x687 = 2381U;

    t80 = ((x685<<(x686!=x687))-x688);

    if (t80 != -6) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x693 = 20;
	static int16_t x694 = -1;
	int8_t x695 = INT8_MAX;
	uint8_t x696 = UINT8_MAX;
	volatile int32_t t81 = -1;

    t81 = ((x693<<(x694!=x695))-x696);

    if (t81 != -215) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x697 = 51U;
	int32_t x698 = -1;
	volatile uint64_t x699 = UINT64_MAX;
	int64_t x700 = -1LL;
	static int64_t t82 = -1031184575307133544LL;

    t82 = ((x697<<(x698!=x699))-x700);

    if (t82 != 52LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x701 = INT8_MAX;
	int8_t x702 = -1;
	int64_t x704 = -1LL;
	int64_t t83 = 52628060278LL;

    t83 = ((x701<<(x702!=x703))-x704);

    if (t83 != 255LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x705 = 6U;
	int32_t x706 = 354;
	static volatile int64_t x707 = -6875235624677111LL;
	uint16_t x708 = 5U;
	int32_t t84 = -57974;

    t84 = ((x705<<(x706!=x707))-x708);

    if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x733 = INT16_MAX;
	static int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MIN;
	int16_t x736 = 8577;
	static int32_t t85 = 1759035;

    t85 = ((x733<<(x734!=x735))-x736);

    if (t85 != 56957) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x741 = INT16_MAX;
	uint32_t x743 = 83U;
	volatile uint32_t t86 = 7U;

    t86 = ((x741<<(x742!=x743))-x744);

    if (t86 != 65483U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x745 = 56;
	uint8_t x746 = UINT8_MAX;
	static int32_t x747 = INT32_MIN;
	uint8_t x748 = UINT8_MAX;
	static volatile int32_t t87 = 221493;

    t87 = ((x745<<(x746!=x747))-x748);

    if (t87 != -143) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	static int8_t x750 = INT8_MIN;
	int32_t x751 = INT32_MAX;
	int32_t x752 = INT32_MIN;
	volatile uint64_t t88 = 0LLU;

    t88 = ((x749<<(x750!=x751))-x752);

    if (t88 != 2147483646LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x757 = INT16_MAX;
	volatile uint64_t x758 = 29909LLU;
	uint32_t x759 = UINT32_MAX;
	uint64_t x760 = 522755313749175LLU;
	volatile uint64_t t89 = 16LLU;

    t89 = ((x757<<(x758!=x759))-x760);

    if (t89 != 18446221318395867975LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x761 = 0U;
	static int8_t x762 = INT8_MAX;
	uint8_t x763 = UINT8_MAX;
	int64_t t90 = 5LL;

    t90 = ((x761<<(x762!=x763))-x764);

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x777 = 7U;
	uint64_t x778 = 1038963685528723376LLU;
	static uint8_t x779 = UINT8_MAX;
	int64_t x780 = -64292463LL;
	int64_t t91 = 57LL;

    t91 = ((x777<<(x778!=x779))-x780);

    if (t91 != 64292477LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x781 = INT8_MAX;
	int8_t x782 = -1;
	int32_t x783 = INT32_MIN;
	volatile int32_t t92 = 199005540;

    t92 = ((x781<<(x782!=x783))-x784);

    if (t92 != 33022) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x794 = 391U;
	int32_t t93 = 0;

    t93 = ((x793<<(x794!=x795))-x796);

    if (t93 != -2147352577) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x801 = 0U;
	int32_t x802 = INT32_MIN;

    t94 = ((x801<<(x802!=x803))-x804);

    if (t94 != 4294965523U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x816 = 461662507853251064LLU;
	uint64_t t95 = 2207689572735920887LLU;

    t95 = ((x813<<(x814!=x815))-x816);

    if (t95 != 17985081565856300550LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x817 = 7451U;
	uint32_t x818 = UINT32_MAX;
	int32_t x819 = INT32_MIN;
	volatile int64_t x820 = -15039447842084587LL;

    t96 = ((x817<<(x818!=x819))-x820);

    if (t96 != 15039447842099489LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x821 = UINT64_MAX;
	int8_t x822 = INT8_MAX;
	uint16_t x824 = 1744U;
	uint64_t t97 = 241132537100LLU;

    t97 = ((x821<<(x822!=x823))-x824);

    if (t97 != 18446744073709549870LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x825 = 15;
	uint64_t x826 = UINT64_MAX;
	int32_t x828 = 518;
	volatile int32_t t98 = 53;

    t98 = ((x825<<(x826!=x827))-x828);

    if (t98 != -503) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x845 = 27U;
	int16_t x846 = INT16_MIN;
	static int8_t x847 = INT8_MAX;
	volatile uint8_t x848 = 2U;
	uint32_t t99 = 17U;

    t99 = ((x845<<(x846!=x847))-x848);

    if (t99 != 52U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x850 = -11;
	uint16_t x851 = 2U;

    t100 = ((x849<<(x850!=x851))-x852);

    if (t100 != -3946715315LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x853 = UINT32_MAX;
	int8_t x854 = INT8_MIN;
	static int64_t x855 = 4389LL;
	int64_t x856 = INT64_MAX;
	int64_t t101 = 224LL;

    t101 = ((x853<<(x854!=x855))-x856);

    if (t101 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x857 = 2;
	volatile int8_t x858 = INT8_MAX;
	int8_t x859 = INT8_MIN;
	int8_t x860 = INT8_MIN;
	volatile int32_t t102 = 1720;

    t102 = ((x857<<(x858!=x859))-x860);

    if (t102 != 132) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x865 = 10965LL;
	static uint8_t x866 = 3U;
	static int16_t x867 = INT16_MIN;
	int64_t x868 = 8652338416053LL;

    t103 = ((x865<<(x866!=x867))-x868);

    if (t103 != -8652338394123LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x873 = UINT16_MAX;
	int32_t x874 = -10557936;
	uint8_t x876 = 94U;
	int32_t t104 = -13;

    t104 = ((x873<<(x874!=x875))-x876);

    if (t104 != 130976) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x885 = 2686818992LLU;
	int32_t x886 = 6;
	int8_t x887 = INT8_MIN;
	int64_t x888 = 2130367885070587488LL;
	volatile uint64_t t105 = 193789LLU;

    t105 = ((x885<<(x886!=x887))-x888);

    if (t105 != 16316376194012602112LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x889 = 212722234605086113LL;
	volatile int8_t x890 = INT8_MAX;
	static int8_t x891 = -1;
	int16_t x892 = 1;

    t106 = ((x889<<(x890!=x891))-x892);

    if (t106 != 425444469210172225LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x893 = UINT8_MAX;
	static int32_t x894 = -24317415;
	static uint32_t x895 = 65502U;
	volatile uint8_t x896 = 106U;
	volatile int32_t t107 = -15720142;

    t107 = ((x893<<(x894!=x895))-x896);

    if (t107 != 404) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x901 = UINT16_MAX;
	int8_t x902 = INT8_MIN;
	uint16_t x903 = 3028U;
	static int64_t x904 = 18144LL;
	volatile int64_t t108 = -804565LL;

    t108 = ((x901<<(x902!=x903))-x904);

    if (t108 != 112926LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x906 = -1;
	uint64_t x907 = 2867941LLU;
	static int16_t x908 = INT16_MIN;

    t109 = ((x905<<(x906!=x907))-x908);

    if (t109 != 32790) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x909 = 2851;
	int64_t x910 = INT64_MIN;
	int32_t x911 = INT32_MAX;
	int8_t x912 = 0;
	volatile int32_t t110 = 840948;

    t110 = ((x909<<(x910!=x911))-x912);

    if (t110 != 5702) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x915 = UINT16_MAX;
	volatile uint32_t x916 = UINT32_MAX;
	volatile uint32_t t111 = 708U;

    t111 = ((x913<<(x914!=x915))-x916);

    if (t111 != 19U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x917 = INT8_MAX;
	volatile uint64_t x919 = UINT64_MAX;
	static int32_t x920 = -1;
	volatile int32_t t112 = 216841700;

    t112 = ((x917<<(x918!=x919))-x920);

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x925 = 17U;
	uint64_t x926 = 1058563397630LLU;
	uint16_t x927 = 465U;
	uint64_t x928 = 1506209541105059LLU;
	static volatile uint64_t t113 = 395LLU;

    t113 = ((x925<<(x926!=x927))-x928);

    if (t113 != 18445237864168446591LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x933 = 265LL;
	volatile uint16_t x934 = UINT16_MAX;
	static uint16_t x935 = UINT16_MAX;
	volatile int8_t x936 = -1;
	int64_t t114 = -26560590LL;

    t114 = ((x933<<(x934!=x935))-x936);

    if (t114 != 266LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x949 = 10652U;
	int8_t x950 = -22;
	volatile uint64_t x951 = 3688428043507LLU;
	volatile uint8_t x952 = UINT8_MAX;
	uint32_t t115 = 46U;

    t115 = ((x949<<(x950!=x951))-x952);

    if (t115 != 21049U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x969 = UINT32_MAX;
	int8_t x970 = INT8_MAX;
	uint64_t x971 = UINT64_MAX;
	uint8_t x972 = 25U;

    t116 = ((x969<<(x970!=x971))-x972);

    if (t116 != 4294967269U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x985 = INT8_MAX;
	uint64_t x986 = UINT64_MAX;
	uint8_t x988 = UINT8_MAX;
	volatile int32_t t117 = -1;

    t117 = ((x985<<(x986!=x987))-x988);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x989 = INT8_MAX;
	static uint64_t x990 = UINT64_MAX;
	volatile uint16_t x991 = 26U;
	static volatile int16_t x992 = -184;

    t118 = ((x989<<(x990!=x991))-x992);

    if (t118 != 438) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x998 = -12;
	uint8_t x999 = 5U;
	volatile uint8_t x1000 = UINT8_MAX;
	volatile uint32_t t119 = 9151400U;

    t119 = ((x997<<(x998!=x999))-x1000);

    if (t119 != 2593U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x1013 = UINT64_MAX;
	static volatile int16_t x1014 = -1;
	int32_t x1015 = 12255;
	volatile int8_t x1016 = INT8_MIN;
	uint64_t t120 = 29145891879LLU;

    t120 = ((x1013<<(x1014!=x1015))-x1016);

    if (t120 != 126LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1017 = 1;
	static volatile uint16_t x1020 = 51U;
	volatile int32_t t121 = 2098805;

    t121 = ((x1017<<(x1018!=x1019))-x1020);

    if (t121 != -49) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1021 = INT16_MAX;
	static volatile int16_t x1024 = INT16_MAX;

    t122 = ((x1021<<(x1022!=x1023))-x1024);

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1029 = 56454511520LL;
	int8_t x1030 = INT8_MAX;
	int32_t x1031 = INT32_MIN;
	uint32_t x1032 = 30983270U;
	volatile int64_t t123 = 113975072597LL;

    t123 = ((x1029<<(x1030!=x1031))-x1032);

    if (t123 != 112878039770LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1041 = UINT16_MAX;
	static uint16_t x1042 = UINT16_MAX;
	int64_t x1044 = -1LL;
	static int64_t t124 = -4859472134LL;

    t124 = ((x1041<<(x1042!=x1043))-x1044);

    if (t124 != 131071LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x1045 = 1687U;
	int32_t x1047 = INT32_MIN;
	int64_t x1048 = -1661LL;

    t125 = ((x1045<<(x1046!=x1047))-x1048);

    if (t125 != 5035LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1058 = -3747608564734709693LL;
	static int8_t x1059 = INT8_MIN;

    t126 = ((x1057<<(x1058!=x1059))-x1060);

    if (t126 != 4290287925U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x1061 = 135LLU;
	volatile int32_t x1062 = -7;
	int16_t x1063 = -525;
	volatile uint64_t t127 = 43159581171LLU;

    t127 = ((x1061<<(x1062!=x1063))-x1064);

    if (t127 != 18446607922839842363LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1071 = 97532779573LL;
	uint64_t x1072 = 3LLU;

    t128 = ((x1069<<(x1070!=x1071))-x1072);

    if (t128 != 65531LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x1090 = INT64_MAX;
	int64_t x1092 = -1LL;
	volatile uint64_t t129 = 24LLU;

    t129 = ((x1089<<(x1090!=x1091))-x1092);

    if (t129 != 49441856507671LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x1103 = INT64_MAX;
	int16_t x1104 = INT16_MAX;
	int32_t t130 = -912585;

    t130 = ((x1101<<(x1102!=x1103))-x1104);

    if (t130 != -14233) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x1105 = UINT64_MAX;
	uint8_t x1107 = 19U;
	int8_t x1108 = -4;
	volatile uint64_t t131 = 24385LLU;

    t131 = ((x1105<<(x1106!=x1107))-x1108);

    if (t131 != 2LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1113 = UINT8_MAX;
	int8_t x1114 = -1;
	int64_t x1116 = INT64_MAX;
	volatile int64_t t132 = 1LL;

    t132 = ((x1113<<(x1114!=x1115))-x1116);

    if (t132 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x1117 = 49286146;
	int16_t x1118 = INT16_MAX;
	uint16_t x1119 = 1U;
	int32_t x1120 = -1;
	static volatile int32_t t133 = 7;

    t133 = ((x1117<<(x1118!=x1119))-x1120);

    if (t133 != 98572293) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1121 = UINT8_MAX;
	int64_t x1123 = -20565314940LL;
	static int64_t x1124 = 125777LL;
	int64_t t134 = -26420081LL;

    t134 = ((x1121<<(x1122!=x1123))-x1124);

    if (t134 != -125267LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1125 = 3063;
	int64_t x1126 = -30357323991552186LL;
	static int32_t x1127 = -1;
	uint32_t x1128 = 788685U;
	static uint32_t t135 = 106U;

    t135 = ((x1125<<(x1126!=x1127))-x1128);

    if (t135 != 4294184737U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x1133 = 14050U;
	uint16_t x1134 = UINT16_MAX;
	int16_t x1136 = INT16_MAX;
	volatile int32_t t136 = 3907290;

    t136 = ((x1133<<(x1134!=x1135))-x1136);

    if (t136 != -4667) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x1137 = UINT16_MAX;
	uint32_t x1138 = UINT32_MAX;
	int16_t x1139 = 0;
	uint64_t x1140 = 16836187385LLU;

    t137 = ((x1137<<(x1138!=x1139))-x1140);

    if (t137 != 18446744056873495301LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x1141 = 4474U;
	volatile int16_t x1142 = 0;
	volatile uint32_t x1143 = 1U;
	int16_t x1144 = INT16_MAX;

    t138 = ((x1141<<(x1142!=x1143))-x1144);

    if (t138 != -23819) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1146 = 211;
	int16_t x1147 = INT16_MIN;
	int8_t x1148 = 0;
	int32_t t139 = 1;

    t139 = ((x1145<<(x1146!=x1147))-x1148);

    if (t139 != 6894062) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1149 = UINT16_MAX;
	static uint16_t x1150 = 4U;
	uint64_t x1151 = UINT64_MAX;
	int64_t x1152 = INT64_MAX;
	volatile int64_t t140 = -1948506LL;

    t140 = ((x1149<<(x1150!=x1151))-x1152);

    if (t140 != -9223372036854644737LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x1153 = UINT16_MAX;
	int64_t x1154 = INT64_MAX;
	int32_t x1155 = INT32_MIN;
	volatile int32_t t141 = -7569861;

    t141 = ((x1153<<(x1154!=x1155))-x1156);

    if (t141 != 103877) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1165 = 3530U;
	uint16_t x1167 = UINT16_MAX;
	int32_t x1168 = -1;
	volatile uint32_t t142 = 20187854U;

    t142 = ((x1165<<(x1166!=x1167))-x1168);

    if (t142 != 7061U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x1170 = INT32_MIN;
	int64_t x1171 = -1LL;
	static uint32_t x1172 = UINT32_MAX;
	static uint64_t t143 = 625658LLU;

    t143 = ((x1169<<(x1170!=x1171))-x1172);

    if (t143 != 2371390969LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1174 = 844;
	uint32_t x1175 = 6U;
	int32_t x1176 = INT32_MAX;
	volatile int32_t t144 = 211;

    t144 = ((x1173<<(x1174!=x1175))-x1176);

    if (t144 != -2147483575) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1193 = 709507608U;
	int8_t x1194 = -1;
	int8_t x1195 = -1;
	int8_t x1196 = -23;
	uint32_t t145 = 10556U;

    t145 = ((x1193<<(x1194!=x1195))-x1196);

    if (t145 != 709507631U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1202 = INT64_MAX;
	uint64_t x1203 = 265044322134450308LLU;
	int8_t x1204 = 2;
	volatile uint32_t t146 = 2U;

    t146 = ((x1201<<(x1202!=x1203))-x1204);

    if (t146 != 36184728U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1209 = 67U;
	volatile int16_t x1210 = -1;
	int32_t x1211 = 15;
	int8_t x1212 = INT8_MIN;
	volatile int32_t t147 = -882856;

    t147 = ((x1209<<(x1210!=x1211))-x1212);

    if (t147 != 262) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1217 = UINT16_MAX;
	int8_t x1219 = INT8_MAX;
	static int64_t x1220 = 72675267508LL;
	int64_t t148 = 10868605062581392LL;

    t148 = ((x1217<<(x1218!=x1219))-x1220);

    if (t148 != -72675136438LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1221 = 4419U;
	int64_t x1222 = 43507363LL;
	volatile uint8_t x1224 = UINT8_MAX;
	static int32_t t149 = -55832364;

    t149 = ((x1221<<(x1222!=x1223))-x1224);

    if (t149 != 8583) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1229 = 414U;
	uint64_t x1230 = 24LLU;
	volatile uint16_t x1231 = UINT16_MAX;
	int32_t x1232 = INT32_MIN;
	volatile uint32_t t150 = 839504705U;

    t150 = ((x1229<<(x1230!=x1231))-x1232);

    if (t150 != 2147484476U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1234 = INT32_MIN;
	static uint32_t x1236 = 425398417U;
	uint32_t t151 = 1162332U;

    t151 = ((x1233<<(x1234!=x1235))-x1236);

    if (t151 != 3869568887U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1250 = 1214U;
	volatile uint64_t x1252 = 46414055426LLU;

    t152 = ((x1249<<(x1250!=x1251))-x1252);

    if (t152 != 18446744027305315392LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x1254 = INT32_MIN;
	int32_t x1255 = -21437;
	volatile uint8_t x1256 = UINT8_MAX;
	uint64_t t153 = 72699343LLU;

    t153 = ((x1253<<(x1254!=x1255))-x1256);

    if (t153 != 117376173LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1257 = INT16_MAX;
	int16_t x1258 = -10;
	int32_t x1260 = INT32_MAX;
	static volatile int32_t t154 = -1120;

    t154 = ((x1257<<(x1258!=x1259))-x1260);

    if (t154 != -2147418113) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1261 = 1013908LLU;
	uint32_t x1262 = 80U;
	int16_t x1263 = -7;
	volatile uint64_t t155 = 13LLU;

    t155 = ((x1261<<(x1262!=x1263))-x1264);

    if (t155 != 2027830LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1265 = 3963319911822LLU;
	volatile int64_t x1268 = -7264766888007191LL;

    t156 = ((x1265<<(x1266!=x1267))-x1268);

    if (t156 != 7272693527830835LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1270 = -6530729121170LL;
	int16_t x1271 = 13508;
	int8_t x1272 = INT8_MAX;
	uint32_t t157 = 3U;

    t157 = ((x1269<<(x1270!=x1271))-x1272);

    if (t157 != 4294967167U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1273 = 123;
	int16_t x1276 = 427;
	int32_t t158 = -50;

    t158 = ((x1273<<(x1274!=x1275))-x1276);

    if (t158 != -181) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1277 = 14U;
	volatile uint8_t x1278 = 37U;
	uint8_t x1279 = UINT8_MAX;
	uint16_t x1280 = 9715U;
	static int32_t t159 = 570474;

    t159 = ((x1277<<(x1278!=x1279))-x1280);

    if (t159 != -9687) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1285 = INT8_MAX;
	uint64_t x1287 = 727LLU;
	volatile int32_t x1288 = INT32_MAX;
	int32_t t160 = -2596140;

    t160 = ((x1285<<(x1286!=x1287))-x1288);

    if (t160 != -2147483393) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1295 = UINT32_MAX;
	volatile uint32_t x1296 = 164914U;

    t161 = ((x1293<<(x1294!=x1295))-x1296);

    if (t161 != 98961680U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1305 = 31233LL;
	int8_t x1306 = INT8_MIN;
	int64_t x1307 = INT64_MIN;
	int16_t x1308 = INT16_MIN;
	volatile int64_t t162 = -743LL;

    t162 = ((x1305<<(x1306!=x1307))-x1308);

    if (t162 != 95234LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1309 = 4;
	volatile uint16_t x1310 = UINT16_MAX;
	static int32_t x1312 = -1601250;
	static volatile int32_t t163 = -67394;

    t163 = ((x1309<<(x1310!=x1311))-x1312);

    if (t163 != 1601258) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1313 = 28U;
	int64_t x1316 = -1LL;
	volatile int64_t t164 = -287052058703LL;

    t164 = ((x1313<<(x1314!=x1315))-x1316);

    if (t164 != 57LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1318 = UINT8_MAX;
	int16_t x1319 = INT16_MIN;
	uint16_t x1320 = 15076U;
	static int32_t t165 = -297;

    t165 = ((x1317<<(x1318!=x1319))-x1320);

    if (t165 != -14876) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1321 = UINT8_MAX;
	int8_t x1322 = -1;
	int64_t x1324 = INT64_MAX;

    t166 = ((x1321<<(x1322!=x1323))-x1324);

    if (t166 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x1330 = 4;
	static uint64_t x1331 = 5737531418823LLU;
	int16_t x1332 = 0;
	volatile int32_t t167 = -1630616;

    t167 = ((x1329<<(x1330!=x1331))-x1332);

    if (t167 != 894) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x1333 = 110U;
	volatile int8_t x1335 = INT8_MAX;
	int16_t x1336 = INT16_MAX;
	volatile int32_t t168 = -1;

    t168 = ((x1333<<(x1334!=x1335))-x1336);

    if (t168 != -32547) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x1345 = 36682;
	static int8_t x1346 = -1;
	int8_t x1347 = -1;
	int32_t x1348 = -27171;
	volatile int32_t t169 = 25;

    t169 = ((x1345<<(x1346!=x1347))-x1348);

    if (t169 != 63853) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1365 = 2689;
	int16_t x1366 = 12767;
	volatile uint64_t x1368 = 52248211437LLU;
	uint64_t t170 = 6LLU;

    t170 = ((x1365<<(x1366!=x1367))-x1368);

    if (t170 != 18446744021461345557LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1371 = INT32_MIN;
	volatile uint64_t x1372 = 123560146813415LLU;
	volatile uint64_t t171 = 1853LLU;

    t171 = ((x1369<<(x1370!=x1371))-x1372);

    if (t171 != 18446620513562738201LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x1373 = 504014015LLU;
	uint64_t x1374 = UINT64_MAX;
	static volatile int32_t x1375 = INT32_MAX;
	int64_t x1376 = INT64_MIN;
	volatile uint64_t t172 = 213LLU;

    t172 = ((x1373<<(x1374!=x1375))-x1376);

    if (t172 != 9223372037862803838LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x1397 = 4072U;
	uint64_t x1398 = 18986425423835LLU;

    t173 = ((x1397<<(x1398!=x1399))-x1400);

    if (t173 != 8130LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1402 = UINT16_MAX;
	volatile int32_t t174 = 11740;

    t174 = ((x1401<<(x1402!=x1403))-x1404);

    if (t174 != 53) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1406 = 38949215501913876LLU;
	static int32_t x1407 = 10044;
	volatile int32_t x1408 = -2264087;
	volatile int32_t t175 = -11347861;

    t175 = ((x1405<<(x1406!=x1407))-x1408);

    if (t175 != 2264089) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1409 = UINT32_MAX;
	uint32_t x1412 = 12604U;
	uint32_t t176 = 6781U;

    t176 = ((x1409<<(x1410!=x1411))-x1412);

    if (t176 != 4294954690U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1413 = 1U;
	int16_t x1414 = -1854;
	int32_t x1415 = INT32_MAX;
	uint64_t x1416 = 30435924284LLU;
	volatile uint64_t t177 = 2367982177LLU;

    t177 = ((x1413<<(x1414!=x1415))-x1416);

    if (t177 != 18446744043273627334LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1417 = 2U;
	uint32_t x1418 = UINT32_MAX;
	uint16_t x1419 = 1936U;
	uint8_t x1420 = UINT8_MAX;
	int32_t t178 = -2721934;

    t178 = ((x1417<<(x1418!=x1419))-x1420);

    if (t178 != -251) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x1429 = 177803569U;
	int32_t x1430 = INT32_MIN;
	volatile int8_t x1431 = INT8_MIN;
	int32_t x1432 = INT32_MIN;
	volatile uint32_t t179 = 431385U;

    t179 = ((x1429<<(x1430!=x1431))-x1432);

    if (t179 != 2503090786U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1434 = -1;
	uint64_t x1435 = 1936234LLU;
	int16_t x1436 = 46;
	int32_t t180 = -424160998;

    t180 = ((x1433<<(x1434!=x1435))-x1436);

    if (t180 != 464) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1441 = UINT16_MAX;
	uint32_t x1443 = 60152U;
	uint32_t t181 = 175611U;

    t181 = ((x1441<<(x1442!=x1443))-x1444);

    if (t181 != 87488U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1445 = 1369580135331LLU;
	int64_t x1446 = INT64_MIN;
	static uint64_t x1447 = UINT64_MAX;
	uint64_t x1448 = UINT64_MAX;
	static volatile uint64_t t182 = 7LLU;

    t182 = ((x1445<<(x1446!=x1447))-x1448);

    if (t182 != 2739160270663LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1457 = 40232242LLU;
	static uint8_t x1458 = UINT8_MAX;
	int8_t x1459 = INT8_MIN;
	uint64_t t183 = 35069190LLU;

    t183 = ((x1457<<(x1458!=x1459))-x1460);

    if (t183 != 80439172LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1461 = INT64_MAX;
	int8_t x1462 = INT8_MAX;
	static int8_t x1463 = INT8_MAX;
	volatile int32_t x1464 = INT32_MAX;
	volatile int64_t t184 = -14551LL;

    t184 = ((x1461<<(x1462!=x1463))-x1464);

    if (t184 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1493 = 10292LL;
	int16_t x1494 = INT16_MIN;
	int8_t x1495 = -1;
	uint16_t x1496 = 14801U;
	static int64_t t185 = -21037630LL;

    t185 = ((x1493<<(x1494!=x1495))-x1496);

    if (t185 != 5783LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1505 = 1369978LLU;
	int8_t x1506 = -1;
	uint32_t x1507 = 10255U;
	volatile uint64_t t186 = 98184074263906LLU;

    t186 = ((x1505<<(x1506!=x1507))-x1508);

    if (t186 != 9223372036857515764LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1529 = UINT16_MAX;
	volatile int32_t x1530 = INT32_MIN;
	int64_t x1531 = 634082606969792LL;
	uint8_t x1532 = 7U;
	static int32_t t187 = 4836933;

    t187 = ((x1529<<(x1530!=x1531))-x1532);

    if (t187 != 131063) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x1533 = 1990U;
	int8_t x1534 = INT8_MIN;
	int16_t x1535 = -1;
	static volatile uint64_t x1536 = UINT64_MAX;

    t188 = ((x1533<<(x1534!=x1535))-x1536);

    if (t188 != 3981LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1543 = INT8_MAX;
	static uint16_t x1544 = UINT16_MAX;
	static volatile int32_t t189 = 126;

    t189 = ((x1541<<(x1542!=x1543))-x1544);

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1546 = 1U;
	uint8_t x1547 = 11U;
	volatile uint16_t x1548 = UINT16_MAX;
	volatile uint32_t t190 = 2U;

    t190 = ((x1545<<(x1546!=x1547))-x1548);

    if (t190 != 4294901759U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1553 = 4U;
	int8_t x1554 = INT8_MAX;
	volatile uint64_t t191 = 3586308LLU;

    t191 = ((x1553<<(x1554!=x1555))-x1556);

    if (t191 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1569 = UINT64_MAX;
	static volatile uint64_t x1570 = 52LLU;
	int8_t x1571 = 0;
	volatile uint64_t t192 = 39004794LLU;

    t192 = ((x1569<<(x1570!=x1571))-x1572);

    if (t192 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1573 = 6U;
	volatile int64_t x1574 = -1LL;
	int32_t x1575 = -1;
	uint64_t t193 = 6248322008LLU;

    t193 = ((x1573<<(x1574!=x1575))-x1576);

    if (t193 != 18446744073695032606LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1577 = 502694531U;
	uint32_t x1578 = 9U;
	int16_t x1579 = -1;
	uint32_t t194 = 45U;

    t194 = ((x1577<<(x1578!=x1579))-x1580);

    if (t194 != 3152872711U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1581 = 33U;
	uint16_t x1582 = 20948U;
	int64_t x1583 = INT64_MIN;
	int64_t x1584 = -2LL;

    t195 = ((x1581<<(x1582!=x1583))-x1584);

    if (t195 != 68LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1586 = -3;
	int64_t x1588 = -1LL;
	volatile int64_t t196 = -12402LL;

    t196 = ((x1585<<(x1586!=x1587))-x1588);

    if (t196 != 296080739LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x1601 = 1022U;
	int64_t x1602 = 2561215133195LL;
	int16_t x1603 = 547;
	int32_t x1604 = -1;
	uint32_t t197 = 2986075U;

    t197 = ((x1601<<(x1602!=x1603))-x1604);

    if (t197 != 2045U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1609 = 7U;
	uint32_t x1610 = UINT32_MAX;
	static uint16_t x1612 = 1U;
	int32_t t198 = -182242375;

    t198 = ((x1609<<(x1610!=x1611))-x1612);

    if (t198 != 13) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1617 = 15163U;
	volatile uint8_t x1618 = 0U;
	int64_t x1619 = INT64_MAX;
	uint64_t x1620 = 24000705LLU;
	static volatile uint64_t t199 = 47LLU;

    t199 = ((x1617<<(x1618!=x1619))-x1620);

    if (t199 != 18446744073685581237LLU) { NG(); } else { ; }
	
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

