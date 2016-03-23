
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

volatile int32_t x167 = -1;
static int16_t x168 = -1;
uint8_t x225 = 110U;
int8_t x378 = INT8_MIN;
uint64_t x379 = UINT64_MAX;
int16_t x514 = -5326;
volatile int32_t t4 = 275756;
int64_t x816 = INT64_MIN;
int8_t x1068 = -1;
volatile uint16_t x1174 = 5184U;
int8_t x1550 = INT8_MIN;
volatile int16_t x1551 = -1;
volatile int32_t t12 = -139946720;
uint8_t x1900 = 0U;
static uint16_t x1913 = 0U;
int32_t t14 = 6375;
int8_t x1918 = -13;
uint64_t x1919 = UINT64_MAX;
int64_t x1920 = -1LL;
int32_t x1999 = -1;
uint8_t x2362 = 4U;
static volatile int16_t x2441 = -1;
int32_t t21 = 109985777;
int64_t x2498 = -1LL;
int16_t x2513 = -400;
uint8_t x3176 = 10U;
int32_t x3570 = INT32_MIN;
static int64_t x3930 = 7136142965LL;
uint8_t x3931 = UINT8_MAX;
uint32_t x4224 = UINT32_MAX;
static uint32_t t39 = 7524913U;
uint32_t x4234 = UINT32_MAX;
static int32_t x4236 = -1;
volatile uint32_t t40 = 932492U;
static int32_t t41 = 28566;
int64_t x4301 = -1LL;
int16_t x4381 = INT16_MAX;
volatile int8_t x4384 = INT8_MIN;
int32_t x4453 = 26;
volatile int32_t x4456 = INT32_MIN;
static volatile uint8_t x4465 = 5U;
volatile int16_t x4483 = -1;
int32_t x4484 = -1;
static int64_t x4553 = INT64_MIN;
int8_t x4555 = INT8_MIN;
static uint32_t x4562 = 97116919U;
volatile int8_t x4564 = -1;
static volatile uint32_t t48 = 3996660U;
int32_t x4689 = -37019;
volatile int64_t x4692 = -1LL;
int32_t x4734 = INT32_MIN;
static int16_t x5069 = -1;
uint64_t x5139 = UINT64_MAX;
volatile int32_t t56 = INT32_MAX;
volatile uint64_t t57 = 19028795LLU;
static int32_t x5429 = 201;
int64_t x5505 = INT64_MAX;
int16_t x5754 = -1;
uint64_t x5755 = UINT64_MAX;
volatile int64_t t63 = 3632230488412738LL;
int32_t x5838 = -80149971;
uint64_t x6053 = 30512051883LLU;
int16_t x6054 = -18;
int64_t x6488 = -1LL;
uint8_t x6593 = 46U;


void f0(void) {
    	static uint16_t x165 = UINT16_MAX;
	uint32_t x166 = 93362037U;
	uint32_t t0 = 37650U;

    t0 = ((x165-x166)/(x167==x168));

    if (t0 != 4201670794U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x226 = 19U;
	int16_t x227 = -1;
	int16_t x228 = -1;
	volatile int32_t t1 = -1;

    t1 = ((x225-x226)/(x227==x228));

    if (t1 != 91) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x377 = INT8_MIN;
	int32_t x380 = -1;
	volatile int32_t t2 = 409307;

    t2 = ((x377-x378)/(x379==x380));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x397 = 829U;
	int8_t x398 = -1;
	int8_t x399 = INT8_MIN;
	static volatile int8_t x400 = INT8_MIN;
	static uint32_t t3 = 60103U;

    t3 = ((x397-x398)/(x399==x400));

    if (t3 != 830U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x513 = INT8_MIN;
	int8_t x515 = -1;
	volatile int32_t x516 = -1;

    t4 = ((x513-x514)/(x515==x516));

    if (t4 != 5198) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x813 = 11U;
	uint16_t x814 = UINT16_MAX;
	static int64_t x815 = INT64_MIN;
	volatile int32_t t5 = 97677215;

    t5 = ((x813-x814)/(x815==x816));

    if (t5 != -65524) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x1065 = 1;
	static int16_t x1066 = 1526;
	int32_t x1067 = -1;
	int32_t t6 = -128109;

    t6 = ((x1065-x1066)/(x1067==x1068));

    if (t6 != -1525) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x1173 = INT8_MIN;
	uint32_t x1175 = UINT32_MAX;
	static uint32_t x1176 = UINT32_MAX;
	volatile int32_t t7 = -5;

    t7 = ((x1173-x1174)/(x1175==x1176));

    if (t7 != -5312) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x1309 = INT16_MIN;
	int16_t x1310 = -1;
	uint32_t x1311 = UINT32_MAX;
	volatile int8_t x1312 = -1;
	int32_t t8 = -6379;

    t8 = ((x1309-x1310)/(x1311==x1312));

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x1549 = INT16_MIN;
	uint32_t x1552 = UINT32_MAX;
	int32_t t9 = -96889978;

    t9 = ((x1549-x1550)/(x1551==x1552));

    if (t9 != -32640) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x1617 = INT8_MAX;
	static int8_t x1618 = INT8_MIN;
	int32_t x1619 = -1;
	int16_t x1620 = -1;
	static volatile int32_t t10 = -1;

    t10 = ((x1617-x1618)/(x1619==x1620));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1637 = INT8_MIN;
	uint16_t x1638 = 3U;
	static int16_t x1639 = INT16_MIN;
	volatile int16_t x1640 = INT16_MIN;
	volatile int32_t t11 = 1146157;

    t11 = ((x1637-x1638)/(x1639==x1640));

    if (t11 != -131) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x1641 = 24U;
	int32_t x1642 = -1;
	int16_t x1643 = -1;
	int8_t x1644 = -1;

    t12 = ((x1641-x1642)/(x1643==x1644));

    if (t12 != 25) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x1897 = -486041935989159LL;
	int32_t x1898 = INT32_MIN;
	uint8_t x1899 = 0U;
	int64_t t13 = 67391094418LL;

    t13 = ((x1897-x1898)/(x1899==x1900));

    if (t13 != -486039788505511LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1914 = INT16_MIN;
	volatile int8_t x1915 = -1;
	int16_t x1916 = -1;

    t14 = ((x1913-x1914)/(x1915==x1916));

    if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1917 = UINT64_MAX;
	uint64_t t15 = 20LLU;

    t15 = ((x1917-x1918)/(x1919==x1920));

    if (t15 != 12LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x1997 = -342;
	volatile int8_t x1998 = 0;
	int8_t x2000 = -1;
	volatile int32_t t16 = -165845811;

    t16 = ((x1997-x1998)/(x1999==x2000));

    if (t16 != -342) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x2017 = 22350261LLU;
	static int32_t x2018 = -1;
	int16_t x2019 = -1;
	int32_t x2020 = -1;
	uint64_t t17 = 20649476LLU;

    t17 = ((x2017-x2018)/(x2019==x2020));

    if (t17 != 22350262LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x2085 = 111118351LLU;
	static int16_t x2086 = INT16_MIN;
	int16_t x2087 = -1;
	volatile int32_t x2088 = -1;
	uint64_t t18 = 787LLU;

    t18 = ((x2085-x2086)/(x2087==x2088));

    if (t18 != 111151119LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x2361 = 3902U;
	uint32_t x2363 = UINT32_MAX;
	int8_t x2364 = -1;
	volatile int32_t t19 = 2;

    t19 = ((x2361-x2362)/(x2363==x2364));

    if (t19 != 3898) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x2433 = 6;
	uint32_t x2434 = 20784U;
	int64_t x2435 = -1LL;
	int32_t x2436 = -1;
	uint32_t t20 = 0U;

    t20 = ((x2433-x2434)/(x2435==x2436));

    if (t20 != 4294946518U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x2442 = INT8_MIN;
	uint64_t x2443 = UINT64_MAX;
	volatile int32_t x2444 = -1;

    t21 = ((x2441-x2442)/(x2443==x2444));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x2497 = 460911764885621110LLU;
	int64_t x2499 = -1LL;
	static int8_t x2500 = -1;
	uint64_t t22 = 5LLU;

    t22 = ((x2497-x2498)/(x2499==x2500));

    if (t22 != 460911764885621111LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x2514 = INT8_MIN;
	volatile int8_t x2515 = -1;
	int64_t x2516 = -1LL;
	volatile int32_t t23 = -9787167;

    t23 = ((x2513-x2514)/(x2515==x2516));

    if (t23 != -272) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2745 = -1;
	uint64_t x2746 = 2101740115512LLU;
	int16_t x2747 = INT16_MIN;
	int16_t x2748 = INT16_MIN;
	uint64_t t24 = 1258402170LLU;

    t24 = ((x2745-x2746)/(x2747==x2748));

    if (t24 != 18446741971969436103LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2841 = UINT8_MAX;
	int8_t x2842 = INT8_MIN;
	static volatile int64_t x2843 = -1LL;
	int16_t x2844 = -1;
	volatile int32_t t25 = 11266906;

    t25 = ((x2841-x2842)/(x2843==x2844));

    if (t25 != 383) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x3173 = 1479991U;
	int64_t x3174 = -7689LL;
	static uint8_t x3175 = 10U;
	volatile int64_t t26 = -2077711443LL;

    t26 = ((x3173-x3174)/(x3175==x3176));

    if (t26 != 1487680LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x3317 = INT64_MIN;
	int16_t x3318 = -9887;
	static int8_t x3319 = -1;
	uint64_t x3320 = UINT64_MAX;
	volatile int64_t t27 = -1LL;

    t27 = ((x3317-x3318)/(x3319==x3320));

    if (t27 != -9223372036854765921LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x3401 = 3766;
	int8_t x3402 = -1;
	int8_t x3403 = -1;
	int8_t x3404 = -1;
	volatile int32_t t28 = -1515;

    t28 = ((x3401-x3402)/(x3403==x3404));

    if (t28 != 3767) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x3509 = 1U;
	volatile int32_t x3510 = -1;
	int32_t x3511 = -1;
	volatile uint64_t x3512 = UINT64_MAX;
	static int32_t t29 = 25186;

    t29 = ((x3509-x3510)/(x3511==x3512));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x3521 = 0;
	uint64_t x3522 = UINT64_MAX;
	int32_t x3523 = -1;
	int32_t x3524 = -1;
	volatile uint64_t t30 = 1246611355563230282LLU;

    t30 = ((x3521-x3522)/(x3523==x3524));

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x3569 = UINT64_MAX;
	int32_t x3571 = INT32_MIN;
	int32_t x3572 = INT32_MIN;
	volatile uint64_t t31 = 589202396620940199LLU;

    t31 = ((x3569-x3570)/(x3571==x3572));

    if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x3773 = 4;
	uint32_t x3774 = 8U;
	volatile int32_t x3775 = -1;
	static int16_t x3776 = -1;
	uint32_t t32 = 176199U;

    t32 = ((x3773-x3774)/(x3775==x3776));

    if (t32 != 4294967292U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x3893 = UINT32_MAX;
	int16_t x3894 = 651;
	static volatile int8_t x3895 = -1;
	static int64_t x3896 = -1LL;
	static uint32_t t33 = 2U;

    t33 = ((x3893-x3894)/(x3895==x3896));

    if (t33 != 4294966644U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x3901 = UINT32_MAX;
	static int64_t x3902 = -1546904LL;
	int64_t x3903 = -1LL;
	volatile int32_t x3904 = -1;
	volatile int64_t t34 = 29392727737981LL;

    t34 = ((x3901-x3902)/(x3903==x3904));

    if (t34 != 4296514199LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x3929 = -1;
	volatile uint8_t x3932 = UINT8_MAX;
	int64_t t35 = -105218LL;

    t35 = ((x3929-x3930)/(x3931==x3932));

    if (t35 != -7136142966LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x4009 = INT32_MAX;
	int64_t x4010 = -1LL;
	int8_t x4011 = INT8_MIN;
	volatile int8_t x4012 = INT8_MIN;
	volatile int64_t t36 = -105398LL;

    t36 = ((x4009-x4010)/(x4011==x4012));

    if (t36 != 2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x4021 = 229U;
	int16_t x4022 = INT16_MIN;
	volatile int32_t x4023 = -1;
	int16_t x4024 = -1;
	int32_t t37 = 807;

    t37 = ((x4021-x4022)/(x4023==x4024));

    if (t37 != 32997) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x4125 = 3386;
	static volatile int16_t x4126 = -13;
	int16_t x4127 = -1;
	static int16_t x4128 = -1;
	volatile int32_t t38 = -3636519;

    t38 = ((x4125-x4126)/(x4127==x4128));

    if (t38 != 3399) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x4221 = 115U;
	uint8_t x4222 = 2U;
	static int16_t x4223 = -1;

    t39 = ((x4221-x4222)/(x4223==x4224));

    if (t39 != 113U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x4233 = INT32_MIN;
	volatile int32_t x4235 = -1;

    t40 = ((x4233-x4234)/(x4235==x4236));

    if (t40 != 2147483649U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x4253 = 24U;
	int16_t x4254 = -2971;
	static int16_t x4255 = -1;
	volatile int64_t x4256 = -1LL;

    t41 = ((x4253-x4254)/(x4255==x4256));

    if (t41 != 2995) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x4302 = INT32_MAX;
	static int8_t x4303 = INT8_MIN;
	int8_t x4304 = INT8_MIN;
	int64_t t42 = 14LL;

    t42 = ((x4301-x4302)/(x4303==x4304));

    if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x4382 = 0;
	static volatile int8_t x4383 = INT8_MIN;
	volatile int32_t t43 = 2;

    t43 = ((x4381-x4382)/(x4383==x4384));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x4454 = 16346307740039292LL;
	int32_t x4455 = INT32_MIN;
	int64_t t44 = -47944215450LL;

    t44 = ((x4453-x4454)/(x4455==x4456));

    if (t44 != -16346307740039266LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x4466 = -1;
	uint32_t x4467 = UINT32_MAX;
	volatile uint32_t x4468 = UINT32_MAX;
	volatile int32_t t45 = -1;

    t45 = ((x4465-x4466)/(x4467==x4468));

    if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x4481 = INT16_MIN;
	uint8_t x4482 = 12U;
	int32_t t46 = -1;

    t46 = ((x4481-x4482)/(x4483==x4484));

    if (t46 != -32780) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4554 = INT32_MIN;
	static int8_t x4556 = INT8_MIN;
	volatile int64_t t47 = 499150495308728LL;

    t47 = ((x4553-x4554)/(x4555==x4556));

    if (t47 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x4561 = -1;
	int64_t x4563 = -1LL;

    t48 = ((x4561-x4562)/(x4563==x4564));

    if (t48 != 4197850376U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x4629 = 7016490820LLU;
	int8_t x4630 = INT8_MIN;
	int16_t x4631 = -1;
	uint32_t x4632 = UINT32_MAX;
	uint64_t t49 = 427813LLU;

    t49 = ((x4629-x4630)/(x4631==x4632));

    if (t49 != 7016490948LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x4690 = -37;
	int8_t x4691 = -1;
	int32_t t50 = -1231;

    t50 = ((x4689-x4690)/(x4691==x4692));

    if (t50 != -36982) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x4733 = 1014495368U;
	int8_t x4735 = INT8_MIN;
	int8_t x4736 = INT8_MIN;
	static volatile uint32_t t51 = 35U;

    t51 = ((x4733-x4734)/(x4735==x4736));

    if (t51 != 3161979016U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x4829 = 81U;
	static volatile uint16_t x4830 = 0U;
	static uint16_t x4831 = UINT16_MAX;
	static uint16_t x4832 = UINT16_MAX;
	int32_t t52 = 1080;

    t52 = ((x4829-x4830)/(x4831==x4832));

    if (t52 != 81) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x5070 = -1;
	int8_t x5071 = -1;
	static int16_t x5072 = -1;
	static volatile int32_t t53 = 2064449;

    t53 = ((x5069-x5070)/(x5071==x5072));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x5137 = 20U;
	int16_t x5138 = -1;
	uint64_t x5140 = UINT64_MAX;
	volatile int32_t t54 = 3;

    t54 = ((x5137-x5138)/(x5139==x5140));

    if (t54 != 21) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x5257 = INT64_MIN;
	int8_t x5258 = -1;
	static int32_t x5259 = INT32_MIN;
	int32_t x5260 = INT32_MIN;
	int64_t t55 = -43LL;

    t55 = ((x5257-x5258)/(x5259==x5260));

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x5289 = -1;
	int32_t x5290 = INT32_MIN;
	int64_t x5291 = INT64_MAX;
	int64_t x5292 = INT64_MAX;

    t56 = ((x5289-x5290)/(x5291==x5292));

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x5349 = UINT64_MAX;
	uint16_t x5350 = UINT16_MAX;
	int64_t x5351 = INT64_MIN;
	int64_t x5352 = INT64_MIN;

    t57 = ((x5349-x5350)/(x5351==x5352));

    if (t57 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x5353 = -1;
	static volatile int32_t x5354 = 18200016;
	int32_t x5355 = INT32_MIN;
	int32_t x5356 = INT32_MIN;
	static int32_t t58 = 7;

    t58 = ((x5353-x5354)/(x5355==x5356));

    if (t58 != -18200017) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x5430 = 0;
	static int16_t x5431 = -1;
	static uint32_t x5432 = UINT32_MAX;
	static volatile int32_t t59 = -476144;

    t59 = ((x5429-x5430)/(x5431==x5432));

    if (t59 != 201) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x5506 = 3;
	int8_t x5507 = -1;
	uint64_t x5508 = UINT64_MAX;
	int64_t t60 = -4875118360466LL;

    t60 = ((x5505-x5506)/(x5507==x5508));

    if (t60 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x5541 = 618U;
	volatile int32_t x5542 = -51505622;
	int8_t x5543 = -1;
	int32_t x5544 = -1;
	volatile uint32_t t61 = 0U;

    t61 = ((x5541-x5542)/(x5543==x5544));

    if (t61 != 51506240U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x5629 = -1;
	int16_t x5630 = 930;
	volatile uint8_t x5631 = 0U;
	static uint8_t x5632 = 0U;
	static volatile int32_t t62 = 41;

    t62 = ((x5629-x5630)/(x5631==x5632));

    if (t62 != -931) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x5753 = INT64_MIN;
	volatile int16_t x5756 = -1;

    t63 = ((x5753-x5754)/(x5755==x5756));

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x5837 = 58101307500411587LLU;
	int8_t x5839 = -1;
	int32_t x5840 = -1;
	volatile uint64_t t64 = 1035782292535151357LLU;

    t64 = ((x5837-x5838)/(x5839==x5840));

    if (t64 != 58101307580561558LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x5933 = INT16_MIN;
	uint32_t x5934 = 1883307911U;
	int32_t x5935 = INT32_MIN;
	int32_t x5936 = INT32_MIN;
	uint32_t t65 = 91267U;

    t65 = ((x5933-x5934)/(x5935==x5936));

    if (t65 != 2411626617U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x6055 = -1;
	volatile int8_t x6056 = -1;
	static volatile uint64_t t66 = 552LLU;

    t66 = ((x6053-x6054)/(x6055==x6056));

    if (t66 != 30512051901LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x6173 = INT16_MIN;
	static int8_t x6174 = INT8_MAX;
	int32_t x6175 = -1;
	int16_t x6176 = -1;
	volatile int32_t t67 = -649859;

    t67 = ((x6173-x6174)/(x6175==x6176));

    if (t67 != -32895) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x6485 = -1LL;
	uint16_t x6486 = UINT16_MAX;
	static int16_t x6487 = -1;
	static int64_t t68 = -482470291LL;

    t68 = ((x6485-x6486)/(x6487==x6488));

    if (t68 != -65536LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x6594 = 83;
	int8_t x6595 = INT8_MIN;
	int8_t x6596 = INT8_MIN;
	volatile int32_t t69 = -418;

    t69 = ((x6593-x6594)/(x6595==x6596));

    if (t69 != -37) { NG(); } else { ; }
	
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


    return 0;
}

