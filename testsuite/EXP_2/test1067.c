
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

uint64_t x38 = 23583425759LLU;
volatile int16_t x61 = INT16_MIN;
uint8_t x63 = 1U;
uint32_t x109 = UINT32_MAX;
static int64_t x241 = -6849LL;
int32_t x242 = 14245;
int8_t x243 = 1;
uint8_t x351 = 3U;
static volatile uint64_t t9 = UINT64_MAX;
int16_t x729 = INT16_MIN;
static int8_t x732 = INT8_MAX;
volatile uint8_t x922 = 0U;
volatile int32_t x924 = -37;
uint64_t x946 = 3257861620300164939LLU;
static int32_t t14 = -372;
int8_t x975 = 1;
int16_t x1009 = INT16_MIN;
int16_t x1010 = INT16_MAX;
int32_t x1012 = INT32_MIN;
uint32_t x1020 = UINT32_MAX;
uint16_t x1296 = UINT16_MAX;
uint8_t x1317 = 5U;
static uint8_t x1319 = 0U;
volatile uint16_t x1320 = 1U;
int32_t t22 = -337657484;
uint64_t t24 = 117827867840309653LLU;
int8_t x1454 = 19;
volatile int64_t t25 = INT64_MAX;
static int32_t x1525 = -60577;
static uint16_t x1526 = 2622U;
uint8_t x1651 = 4U;
int32_t x1652 = INT32_MAX;
volatile uint64_t x1662 = 16467LLU;
int32_t x1765 = INT32_MAX;
int32_t x1768 = -1;
int32_t x1881 = -917;
uint32_t x2086 = 17080782U;
static int16_t x2116 = -1;
static int64_t x2197 = INT64_MIN;
uint16_t x2233 = 2007U;
static volatile int32_t t36 = INT32_MIN;
static volatile int64_t x2361 = 30563049LL;
static int16_t x2364 = INT16_MIN;
int8_t x2419 = 1;
uint16_t x2435 = 4U;
int32_t x2436 = -1;
int32_t t40 = 10716848;
int64_t x2470 = 6LL;
int8_t x2472 = -1;
int32_t x2630 = 235;
volatile int32_t x2632 = 9198201;
uint32_t x2693 = 49427U;
int32_t x2696 = -1;
int16_t x2753 = INT16_MAX;
int8_t x2754 = 3;
volatile int64_t x2756 = INT64_MAX;
int16_t x2873 = -1;
volatile int32_t x2997 = -1;
volatile int32_t t50 = 12867614;
static volatile uint8_t x3021 = 1U;
static uint32_t x3022 = 4255331U;
uint16_t x3105 = UINT16_MAX;
volatile uint8_t x3167 = 2U;
int8_t x3189 = -23;
volatile int16_t x3191 = 3;
uint32_t x3197 = UINT32_MAX;
uint8_t x3239 = 3U;
volatile uint32_t t58 = 49U;
uint8_t x3296 = 6U;
uint8_t x3342 = 2U;
uint32_t x3344 = UINT32_MAX;
volatile int8_t x3442 = 62;
uint8_t x3490 = 2U;
uint64_t x3492 = 3483709951LLU;
volatile int32_t x3549 = INT32_MAX;
uint16_t x3552 = 844U;
static int64_t x3568 = -75619852968LL;
static int32_t x3601 = INT32_MIN;
int8_t x3602 = INT8_MAX;
static uint32_t x3603 = 9U;
uint32_t x3604 = UINT32_MAX;
volatile uint32_t x3634 = 758650U;
int32_t x3724 = INT32_MIN;
volatile uint32_t x3746 = 121U;
uint8_t x3747 = 7U;
int16_t x3981 = INT16_MIN;
int16_t x3984 = INT16_MAX;
volatile int64_t t74 = INT64_MIN;
static uint64_t x4081 = 9020457288547210LLU;
int64_t x4148 = INT64_MAX;
volatile int32_t t78 = -21695804;
int64_t x4321 = -1LL;
uint8_t x4323 = 2U;
static int16_t x4389 = INT16_MAX;
static uint32_t x4391 = 0U;
uint64_t x4473 = 4LLU;
uint16_t x4475 = 26U;
int32_t x4613 = INT32_MIN;
int32_t t82 = -1843810;
uint8_t x4666 = UINT8_MAX;


void f0(void) {
    	int32_t x9 = 631926;
	volatile int8_t x10 = 15;
	int8_t x11 = 1;
	int32_t x12 = -267846207;
	volatile int32_t t0 = 125;

    t0 = ((x9!=(x10<<x11))*x12);

    if (t0 != -267846207) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x37 = -7;
	uint64_t x39 = 21LLU;
	uint64_t x40 = 6983LLU;
	uint64_t t1 = 1384277177LLU;

    t1 = ((x37!=(x38<<x39))*x40);

    if (t1 != 6983LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x62 = 38LLU;
	int32_t x64 = 351064;
	static int32_t t2 = -169572035;

    t2 = ((x61!=(x62<<x63))*x64);

    if (t2 != 351064) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x110 = 2;
	uint8_t x111 = 1U;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

    t3 = ((x109!=(x110<<x111))*x112);

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x244 = 63191783;
	static int32_t t4 = 0;

    t4 = ((x241!=(x242<<x243))*x244);

    if (t4 != 63191783) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile uint64_t x286 = 481138325LLU;
	uint32_t x287 = 1U;
	int64_t x288 = INT64_MAX;
	volatile int64_t t5 = INT64_MAX;

    t5 = ((x285!=(x286<<x287))*x288);

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x349 = -1LL;
	int8_t x350 = INT8_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t6 = 610641;

    t6 = ((x349!=(x350<<x351))*x352);

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x357 = 20543885U;
	uint64_t x358 = 211462285LLU;
	uint16_t x359 = 5U;
	static volatile int8_t x360 = INT8_MIN;
	int32_t t7 = 3180;

    t7 = ((x357!=(x358<<x359))*x360);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x365 = INT8_MAX;
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 0U;
	static uint32_t x368 = 52761743U;
	volatile uint32_t t8 = 573494594U;

    t8 = ((x365!=(x366<<x367))*x368);

    if (t8 != 52761743U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x409 = 14U;
	int16_t x410 = INT16_MAX;
	int8_t x411 = 0;
	static uint64_t x412 = UINT64_MAX;

    t9 = ((x409!=(x410<<x411))*x412);

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x561 = -115;
	int16_t x562 = INT16_MAX;
	static volatile int8_t x563 = 15;
	int64_t x564 = -1LL;
	volatile int64_t t10 = 11385354364LL;

    t10 = ((x561!=(x562<<x563))*x564);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x721 = -82690LL;
	static int32_t x722 = 0;
	static int16_t x723 = 0;
	int64_t x724 = -1LL;
	int64_t t11 = 13014759LL;

    t11 = ((x721!=(x722<<x723))*x724);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x730 = UINT16_MAX;
	int8_t x731 = 1;
	int32_t t12 = 0;

    t12 = ((x729!=(x730<<x731))*x732);

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x921 = INT16_MIN;
	uint8_t x923 = 16U;
	volatile int32_t t13 = -85305;

    t13 = ((x921!=(x922<<x923))*x924);

    if (t13 != -37) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x945 = 3U;
	uint8_t x947 = 31U;
	uint8_t x948 = UINT8_MAX;

    t14 = ((x945!=(x946<<x947))*x948);

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x949 = INT8_MIN;
	static uint8_t x950 = 119U;
	uint16_t x951 = 4U;
	static int8_t x952 = INT8_MAX;
	volatile int32_t t15 = -159;

    t15 = ((x949!=(x950<<x951))*x952);

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x973 = INT64_MIN;
	int8_t x974 = INT8_MAX;
	static uint64_t x976 = 2993800757823LLU;
	volatile uint64_t t16 = 247408799LLU;

    t16 = ((x973!=(x974<<x975))*x976);

    if (t16 != 2993800757823LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x997 = 13114541092763LLU;
	uint64_t x998 = UINT64_MAX;
	static int8_t x999 = 0;
	int16_t x1000 = 918;
	int32_t t17 = 610379;

    t17 = ((x997!=(x998<<x999))*x1000);

    if (t17 != 918) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1011 = 1U;
	volatile int32_t t18 = INT32_MIN;

    t18 = ((x1009!=(x1010<<x1011))*x1012);

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1017 = -1LL;
	volatile uint32_t x1018 = 37U;
	static uint8_t x1019 = 24U;
	static uint32_t t19 = UINT32_MAX;

    t19 = ((x1017!=(x1018<<x1019))*x1020);

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1281 = 0;
	int16_t x1282 = 0;
	uint32_t x1283 = 1U;
	uint8_t x1284 = 5U;
	volatile int32_t t20 = 1;

    t20 = ((x1281!=(x1282<<x1283))*x1284);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1293 = INT8_MAX;
	uint64_t x1294 = UINT64_MAX;
	int16_t x1295 = 11;
	int32_t t21 = -53;

    t21 = ((x1293!=(x1294<<x1295))*x1296);

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1318 = 23277231594855585LLU;

    t22 = ((x1317!=(x1318<<x1319))*x1320);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1429 = -1;
	static int32_t x1430 = 7988;
	uint16_t x1431 = 9U;
	uint16_t x1432 = 1U;
	int32_t t23 = 6042939;

    t23 = ((x1429!=(x1430<<x1431))*x1432);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1433 = INT32_MIN;
	volatile uint16_t x1434 = UINT16_MAX;
	uint8_t x1435 = 3U;
	uint64_t x1436 = 14539923077947LLU;

    t24 = ((x1433!=(x1434<<x1435))*x1436);

    if (t24 != 14539923077947LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1453 = 4;
	volatile uint8_t x1455 = 12U;
	int64_t x1456 = INT64_MAX;

    t25 = ((x1453!=(x1454<<x1455))*x1456);

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1493 = INT64_MAX;
	volatile uint32_t x1494 = 22535745U;
	static uint16_t x1495 = 19U;
	int8_t x1496 = INT8_MIN;
	int32_t t26 = -48826211;

    t26 = ((x1493!=(x1494<<x1495))*x1496);

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1527 = 0U;
	static volatile uint8_t x1528 = 118U;
	volatile int32_t t27 = 7;

    t27 = ((x1525!=(x1526<<x1527))*x1528);

    if (t27 != 118) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1649 = 96U;
	uint16_t x1650 = UINT16_MAX;
	static int32_t t28 = INT32_MAX;

    t28 = ((x1649!=(x1650<<x1651))*x1652);

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x1661 = -2;
	static volatile int16_t x1663 = 0;
	static uint8_t x1664 = 0U;
	int32_t t29 = 32224562;

    t29 = ((x1661!=(x1662<<x1663))*x1664);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1745 = 113295580824LL;
	int16_t x1746 = 1001;
	uint8_t x1747 = 10U;
	int32_t x1748 = INT32_MIN;
	volatile int32_t t30 = INT32_MIN;

    t30 = ((x1745!=(x1746<<x1747))*x1748);

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1766 = UINT64_MAX;
	static volatile int8_t x1767 = 23;
	static int32_t t31 = 27484;

    t31 = ((x1765!=(x1766<<x1767))*x1768);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x1882 = 106499277364755114LLU;
	int8_t x1883 = 12;
	int8_t x1884 = 26;
	int32_t t32 = 31977;

    t32 = ((x1881!=(x1882<<x1883))*x1884);

    if (t32 != 26) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x2085 = -1;
	int32_t x2087 = 1;
	uint32_t x2088 = 429606237U;
	uint32_t t33 = 835842424U;

    t33 = ((x2085!=(x2086<<x2087))*x2088);

    if (t33 != 429606237U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x2113 = -624;
	uint32_t x2114 = 6U;
	volatile int16_t x2115 = 23;
	volatile int32_t t34 = 0;

    t34 = ((x2113!=(x2114<<x2115))*x2116);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2198 = 15011;
	uint64_t x2199 = 7LLU;
	int32_t x2200 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

    t35 = ((x2197!=(x2198<<x2199))*x2200);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x2234 = 2U;
	int8_t x2235 = 0;
	int32_t x2236 = INT32_MIN;

    t36 = ((x2233!=(x2234<<x2235))*x2236);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2362 = 7U;
	uint16_t x2363 = 11U;
	volatile int32_t t37 = 430;

    t37 = ((x2361!=(x2362<<x2363))*x2364);

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x2405 = UINT8_MAX;
	static uint32_t x2406 = UINT32_MAX;
	int8_t x2407 = 3;
	int16_t x2408 = INT16_MIN;
	static int32_t t38 = -126;

    t38 = ((x2405!=(x2406<<x2407))*x2408);

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x2417 = -1;
	int32_t x2418 = 3433;
	static int64_t x2420 = INT64_MAX;
	int64_t t39 = INT64_MAX;

    t39 = ((x2417!=(x2418<<x2419))*x2420);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x2433 = 4;
	uint64_t x2434 = UINT64_MAX;

    t40 = ((x2433!=(x2434<<x2435))*x2436);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x2469 = INT32_MIN;
	static int8_t x2471 = 31;
	volatile int32_t t41 = 1;

    t41 = ((x2469!=(x2470<<x2471))*x2472);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2541 = -7;
	uint64_t x2542 = 1723560081LLU;
	static int8_t x2543 = 1;
	volatile int64_t x2544 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

    t42 = ((x2541!=(x2542<<x2543))*x2544);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x2629 = INT64_MAX;
	volatile int16_t x2631 = 13;
	static volatile int32_t t43 = -569965;

    t43 = ((x2629!=(x2630<<x2631))*x2632);

    if (t43 != 9198201) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x2661 = 15;
	uint8_t x2662 = UINT8_MAX;
	uint64_t x2663 = 8LLU;
	int32_t x2664 = -1;
	volatile int32_t t44 = -97814;

    t44 = ((x2661!=(x2662<<x2663))*x2664);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x2694 = 54;
	int8_t x2695 = 1;
	int32_t t45 = 224905612;

    t45 = ((x2693!=(x2694<<x2695))*x2696);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2755 = 23U;
	volatile int64_t t46 = INT64_MAX;

    t46 = ((x2753!=(x2754<<x2755))*x2756);

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x2874 = 2473U;
	int8_t x2875 = 2;
	uint16_t x2876 = 434U;
	int32_t t47 = 3146;

    t47 = ((x2873!=(x2874<<x2875))*x2876);

    if (t47 != 434) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x2881 = 0U;
	uint16_t x2882 = UINT16_MAX;
	static int8_t x2883 = 1;
	uint64_t x2884 = 2LLU;
	uint64_t t48 = 2619LLU;

    t48 = ((x2881!=(x2882<<x2883))*x2884);

    if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x2973 = 26740528088389716LL;
	uint8_t x2974 = 63U;
	static uint8_t x2975 = 0U;
	uint32_t x2976 = 863U;
	static uint32_t t49 = 2223U;

    t49 = ((x2973!=(x2974<<x2975))*x2976);

    if (t49 != 863U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x2998 = 2864204743LLU;
	static int8_t x2999 = 3;
	uint8_t x3000 = 79U;

    t50 = ((x2997!=(x2998<<x2999))*x3000);

    if (t50 != 79) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3023 = 2;
	volatile int32_t x3024 = -1;
	int32_t t51 = -10;

    t51 = ((x3021!=(x3022<<x3023))*x3024);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x3065 = 5;
	uint64_t x3066 = 476681340669869LLU;
	volatile uint8_t x3067 = 1U;
	int8_t x3068 = INT8_MAX;
	volatile int32_t t52 = -59499;

    t52 = ((x3065!=(x3066<<x3067))*x3068);

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x3106 = 666LL;
	int32_t x3107 = 1;
	volatile int32_t x3108 = 3;
	int32_t t53 = 2376;

    t53 = ((x3105!=(x3106<<x3107))*x3108);

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x3165 = 3U;
	static int16_t x3166 = INT16_MAX;
	uint32_t x3168 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

    t54 = ((x3165!=(x3166<<x3167))*x3168);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3173 = INT64_MAX;
	uint16_t x3174 = 15962U;
	uint16_t x3175 = 1U;
	uint16_t x3176 = 402U;
	int32_t t55 = -1;

    t55 = ((x3173!=(x3174<<x3175))*x3176);

    if (t55 != 402) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3190 = 1;
	int32_t x3192 = -28375763;
	int32_t t56 = -1;

    t56 = ((x3189!=(x3190<<x3191))*x3192);

    if (t56 != -28375763) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3198 = 19451U;
	uint8_t x3199 = 0U;
	volatile int64_t x3200 = 29379668673244203LL;
	static int64_t t57 = 814094913247877LL;

    t57 = ((x3197!=(x3198<<x3199))*x3200);

    if (t57 != 29379668673244203LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x3237 = 21LL;
	uint8_t x3238 = 3U;
	uint32_t x3240 = 3417285U;

    t58 = ((x3237!=(x3238<<x3239))*x3240);

    if (t58 != 3417285U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x3245 = INT64_MIN;
	uint32_t x3246 = 4559679U;
	static volatile uint32_t x3247 = 0U;
	volatile uint8_t x3248 = 55U;
	int32_t t59 = 14615;

    t59 = ((x3245!=(x3246<<x3247))*x3248);

    if (t59 != 55) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x3293 = INT64_MAX;
	int8_t x3294 = 1;
	int16_t x3295 = 22;
	int32_t t60 = 14;

    t60 = ((x3293!=(x3294<<x3295))*x3296);

    if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x3341 = -1;
	uint16_t x3343 = 1U;
	uint32_t t61 = UINT32_MAX;

    t61 = ((x3341!=(x3342<<x3343))*x3344);

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x3365 = 6;
	volatile int16_t x3366 = 81;
	uint8_t x3367 = 9U;
	int64_t x3368 = INT64_MIN;
	static volatile int64_t t62 = INT64_MIN;

    t62 = ((x3365!=(x3366<<x3367))*x3368);

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x3441 = UINT32_MAX;
	static volatile uint8_t x3443 = 11U;
	int16_t x3444 = -5341;
	static volatile int32_t t63 = 59567245;

    t63 = ((x3441!=(x3442<<x3443))*x3444);

    if (t63 != -5341) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3489 = INT8_MIN;
	volatile uint8_t x3491 = 0U;
	static volatile uint64_t t64 = 184595321955527500LLU;

    t64 = ((x3489!=(x3490<<x3491))*x3492);

    if (t64 != 3483709951LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x3550 = 1;
	uint8_t x3551 = 2U;
	volatile int32_t t65 = 197;

    t65 = ((x3549!=(x3550<<x3551))*x3552);

    if (t65 != 844) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x3565 = UINT16_MAX;
	uint64_t x3566 = UINT64_MAX;
	uint8_t x3567 = 26U;
	volatile int64_t t66 = 5LL;

    t66 = ((x3565!=(x3566<<x3567))*x3568);

    if (t66 != -75619852968LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t t67 = UINT32_MAX;

    t67 = ((x3601!=(x3602<<x3603))*x3604);

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x3633 = 5230228448783073LL;
	uint8_t x3635 = 2U;
	int64_t x3636 = -13451LL;
	int64_t t68 = -261421209021352LL;

    t68 = ((x3633!=(x3634<<x3635))*x3636);

    if (t68 != -13451LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3721 = INT16_MAX;
	uint8_t x3722 = 90U;
	uint16_t x3723 = 6U;
	int32_t t69 = INT32_MIN;

    t69 = ((x3721!=(x3722<<x3723))*x3724);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x3745 = INT64_MAX;
	static volatile uint16_t x3748 = UINT16_MAX;
	static volatile int32_t t70 = -59;

    t70 = ((x3745!=(x3746<<x3747))*x3748);

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x3761 = INT16_MIN;
	uint8_t x3762 = 44U;
	uint32_t x3763 = 20U;
	int8_t x3764 = INT8_MIN;
	int32_t t71 = 937758641;

    t71 = ((x3761!=(x3762<<x3763))*x3764);

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3789 = -77LL;
	int8_t x3790 = INT8_MAX;
	static uint8_t x3791 = 10U;
	volatile uint32_t x3792 = 233306U;
	uint32_t t72 = 204U;

    t72 = ((x3789!=(x3790<<x3791))*x3792);

    if (t72 != 233306U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x3982 = 27U;
	static volatile uint16_t x3983 = 10U;
	int32_t t73 = 15;

    t73 = ((x3981!=(x3982<<x3983))*x3984);

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x4013 = -1LL;
	uint64_t x4014 = 2348977057536397189LLU;
	uint16_t x4015 = 9U;
	int64_t x4016 = INT64_MIN;

    t74 = ((x4013!=(x4014<<x4015))*x4016);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x4082 = 4936LLU;
	uint8_t x4083 = 13U;
	static volatile int64_t x4084 = 42333944679LL;
	volatile int64_t t75 = 5221828LL;

    t75 = ((x4081!=(x4082<<x4083))*x4084);

    if (t75 != 42333944679LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x4145 = 21U;
	uint64_t x4146 = 1978658LLU;
	int64_t x4147 = 1LL;
	volatile int64_t t76 = INT64_MAX;

    t76 = ((x4145!=(x4146<<x4147))*x4148);

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x4197 = 11;
	uint64_t x4198 = 3LLU;
	int8_t x4199 = 1;
	static uint64_t x4200 = 2495191132LLU;
	uint64_t t77 = 1LLU;

    t77 = ((x4197!=(x4198<<x4199))*x4200);

    if (t77 != 2495191132LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x4209 = -1;
	volatile uint64_t x4210 = UINT64_MAX;
	static int16_t x4211 = 3;
	int16_t x4212 = 15296;

    t78 = ((x4209!=(x4210<<x4211))*x4212);

    if (t78 != 15296) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x4322 = 3910151036802055LLU;
	volatile int16_t x4324 = INT16_MAX;
	int32_t t79 = 110;

    t79 = ((x4321!=(x4322<<x4323))*x4324);

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x4390 = 134426051162299LLU;
	static int64_t x4392 = -1LL;
	volatile int64_t t80 = 100537692996264LL;

    t80 = ((x4389!=(x4390<<x4391))*x4392);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x4474 = 0U;
	int64_t x4476 = -1LL;
	static volatile int64_t t81 = -17LL;

    t81 = ((x4473!=(x4474<<x4475))*x4476);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4614 = UINT8_MAX;
	volatile uint8_t x4615 = 18U;
	int16_t x4616 = -1;

    t82 = ((x4613!=(x4614<<x4615))*x4616);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x4665 = 387484256793LLU;
	volatile int8_t x4667 = 1;
	volatile int8_t x4668 = INT8_MIN;
	int32_t t83 = 17215;

    t83 = ((x4665!=(x4666<<x4667))*x4668);

    if (t83 != -128) { NG(); } else { ; }
	
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


    return 0;
}

