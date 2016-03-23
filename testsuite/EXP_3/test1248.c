
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

static uint64_t x32 = UINT64_MAX;
int16_t x36 = -54;
int16_t x285 = INT16_MAX;
int32_t t5 = 1649261;
static uint16_t x377 = UINT16_MAX;
int16_t x379 = -14;
volatile int32_t t7 = -18145;
uint64_t x381 = 10LLU;
uint8_t x558 = 3U;
uint8_t x627 = UINT8_MAX;
volatile uint32_t t11 = 1938271872U;
uint8_t x678 = 1U;
int32_t x687 = 3776;
int32_t t14 = 500370623;
volatile int8_t x759 = INT8_MAX;
int8_t x775 = INT8_MIN;
volatile int32_t x896 = INT32_MIN;
static volatile uint8_t x898 = 0U;
volatile uint8_t x1015 = UINT8_MAX;
volatile int32_t t21 = 96073;
volatile uint16_t x1451 = UINT16_MAX;
static uint64_t x1477 = UINT64_MAX;
int8_t x1478 = 0;
uint8_t x1479 = 12U;
int32_t x1480 = 838412059;
int16_t x1563 = 1;
volatile int64_t x1624 = -1LL;
static int8_t x1637 = 1;
volatile uint8_t x1638 = 5U;
static uint8_t x1910 = 0U;
uint32_t x2043 = 41U;
int32_t x2044 = INT32_MIN;
static int32_t t34 = -1989664;
int8_t x2101 = INT8_MAX;
int16_t x2102 = 12;
volatile int32_t x2111 = INT32_MIN;
static uint8_t x2149 = 0U;
uint16_t x2297 = 511U;
int8_t x2299 = INT8_MIN;
volatile int32_t t38 = 74698177;
int8_t x2306 = 1;
uint64_t x2317 = 3080012096LLU;
uint16_t x2374 = 12U;
volatile int16_t x2482 = 1;
volatile int32_t t43 = -1931;
uint32_t t44 = 2824U;
volatile int32_t x2508 = INT32_MIN;
volatile uint64_t x2581 = 0LLU;
int8_t x2684 = INT8_MIN;
static volatile int16_t x2686 = 22;
static int64_t x2947 = -59315007761LL;
static int64_t x2948 = -1LL;
uint32_t x3005 = 0U;
uint32_t x3085 = UINT32_MAX;
volatile uint32_t t53 = 116069U;
uint8_t x3150 = 7U;
int8_t x3285 = 0;
static uint32_t x3433 = UINT32_MAX;
int8_t x3435 = 1;
volatile uint8_t x3436 = 5U;
volatile uint32_t t57 = 42U;
volatile uint32_t t58 = 274707319U;
volatile uint32_t t62 = 0U;
int8_t x3852 = -1;
int8_t x3858 = 0;
int32_t x3859 = INT32_MIN;
static uint8_t x4086 = 0U;
uint32_t x4125 = 103392760U;
uint16_t x4163 = 687U;
volatile uint32_t t68 = 33U;
uint64_t t69 = 872941615LLU;
uint16_t x4393 = UINT16_MAX;
static uint16_t x4437 = 7091U;
static uint64_t x4440 = 402374941990469108LLU;
static uint64_t x4485 = UINT64_MAX;
int8_t x4498 = 20;
int32_t t75 = -2703;
int32_t x4502 = 52;
volatile uint64_t t76 = 39722874174004LLU;
uint16_t x4570 = 0U;
uint8_t x4582 = 9U;
int64_t x4584 = -1LL;
int32_t x4653 = 1;
volatile uint8_t x4694 = 25U;
int64_t x4696 = INT64_MIN;
int64_t x4740 = 4603288LL;
static volatile uint32_t t83 = 46378810U;
int64_t x4748 = INT64_MAX;
static int16_t x4793 = 52;
int8_t x4794 = 0;
int32_t x4795 = INT32_MAX;
static int32_t x4807 = INT32_MIN;
uint32_t x4809 = UINT32_MAX;
uint32_t x5200 = UINT32_MAX;
uint64_t x5235 = UINT64_MAX;
uint16_t x5261 = 55U;
int32_t x5263 = INT32_MIN;
volatile int8_t x5276 = INT8_MAX;
int32_t t97 = -20652883;
int8_t x5351 = INT8_MAX;
int32_t t98 = 325546;
uint16_t x5402 = 7U;
int32_t t99 = -4;
volatile uint32_t t100 = 5863716U;
volatile int16_t x5547 = -1;
volatile uint64_t x5617 = UINT64_MAX;
uint8_t x5666 = 60U;
int32_t x5668 = -1;
static volatile uint64_t t106 = 459301LLU;
static int64_t x5711 = INT64_MAX;
static uint32_t x5712 = UINT32_MAX;
static uint64_t x5757 = 116463LLU;
int64_t x5824 = 343956269678737351LL;
uint16_t x5969 = 0U;
int32_t t113 = 57060360;
volatile int16_t x6183 = 0;
int32_t t118 = 7053131;
int32_t x6407 = 2;
uint16_t x6525 = 30U;
uint64_t x6600 = 8LLU;
uint8_t x6754 = 3U;
volatile uint8_t x6787 = 45U;
uint32_t x6829 = 1U;
uint64_t x6909 = UINT64_MAX;
volatile int16_t x6912 = INT16_MIN;
uint32_t x7181 = 618645U;
volatile int8_t x7232 = INT8_MAX;
uint8_t x7329 = 13U;
volatile uint32_t x7331 = UINT32_MAX;
uint64_t x7411 = 11LLU;
uint32_t x7517 = UINT32_MAX;
int32_t x7520 = INT32_MIN;
int16_t x7571 = INT16_MIN;
int32_t x7572 = -1;
static volatile int32_t t136 = 884;
int16_t x7639 = INT16_MIN;
volatile int16_t x7640 = INT16_MIN;
int32_t x7647 = INT32_MIN;
volatile uint32_t t140 = 130242U;
int32_t x7733 = 2;
static uint64_t x7735 = UINT64_MAX;
volatile int32_t x7736 = INT32_MAX;
uint64_t x7777 = UINT64_MAX;
static uint16_t x7779 = 11U;
int8_t x7839 = -1;
volatile uint16_t x8002 = 2U;
int8_t x8330 = 6;
int64_t x8417 = 369595913411941LL;
static int64_t t149 = 99262326469975654LL;
static uint16_t x8641 = 11334U;
uint64_t x8681 = 1116LLU;
static int64_t x8781 = 3218503480LL;
int64_t t154 = -466LL;
int32_t x8789 = 1012;
volatile int32_t x8790 = 1;
int32_t x8861 = INT32_MAX;
static uint16_t x8863 = 30148U;
volatile int32_t t156 = -389;
uint16_t x9074 = 7U;
static volatile uint32_t t157 = 1U;
volatile uint8_t x9085 = 15U;
uint8_t x9345 = 14U;
uint8_t x9366 = 1U;
uint8_t x9473 = UINT8_MAX;
int16_t x9474 = 0;
uint32_t x9501 = 895851531U;
static int8_t x9693 = INT8_MAX;
uint8_t x9696 = UINT8_MAX;
int64_t x9799 = 290686008659LL;
static volatile int32_t x9800 = INT32_MIN;
int16_t x9892 = 2887;
static uint8_t x9900 = 52U;
int32_t t171 = 7433;
volatile int32_t x10045 = 0;
volatile int32_t x10047 = -1;
int8_t x10057 = INT8_MAX;
static uint16_t x10265 = UINT16_MAX;
uint8_t x10282 = 28U;
volatile int32_t x10476 = INT32_MIN;
uint16_t x10545 = UINT16_MAX;
int16_t x10548 = INT16_MIN;
int32_t t183 = -6782021;
uint16_t x10593 = 11894U;
volatile int32_t x10667 = INT32_MAX;
static uint16_t x10668 = 843U;
static int64_t x10740 = INT64_MIN;
int8_t x10745 = INT8_MAX;
uint16_t x10747 = 23104U;
int8_t x10842 = 1;
uint8_t x10877 = UINT8_MAX;
static uint8_t x10879 = 1U;
volatile int16_t x10894 = 4;
volatile uint16_t x10895 = 42U;
int32_t x10897 = 39051614;
uint8_t x10898 = 2U;
uint64_t x10900 = UINT64_MAX;
static int8_t x11081 = INT8_MAX;
static volatile int32_t x11089 = INT32_MAX;
int16_t x11158 = 0;
int16_t x11160 = -39;
volatile int16_t x11296 = -9354;


void f0(void) {
    	volatile uint16_t x29 = 0U;
	uint8_t x30 = 13U;
	uint64_t x31 = 546866LLU;
	volatile int32_t t0 = 27457;

    t0 = ((x29<<x30)-(x31!=x32));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x33 = INT8_MAX;
	uint8_t x34 = 3U;
	uint16_t x35 = 323U;
	static int32_t t1 = -45676745;

    t1 = ((x33<<x34)-(x35!=x36));

    if (t1 != 1015) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x57 = 26;
	uint8_t x58 = 5U;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t2 = -679574;

    t2 = ((x57<<x58)-(x59!=x60));

    if (t2 != 831) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x169 = 1316487192400919410LL;
	int64_t x170 = 1LL;
	static uint16_t x171 = 8075U;
	uint32_t x172 = 4U;
	static int64_t t3 = 793019LL;

    t3 = ((x169<<x170)-(x171!=x172));

    if (t3 != 2632974384801838819LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x229 = 7U;
	uint16_t x230 = 5U;
	volatile int16_t x231 = INT16_MIN;
	volatile int8_t x232 = 1;
	int32_t t4 = -44196929;

    t4 = ((x229<<x230)-(x231!=x232));

    if (t4 != 223) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x286 = 0U;
	static uint64_t x287 = UINT64_MAX;
	uint16_t x288 = 0U;

    t5 = ((x285<<x286)-(x287!=x288));

    if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x297 = 252;
	int8_t x298 = 4;
	static int8_t x299 = -17;
	int32_t x300 = INT32_MIN;
	volatile int32_t t6 = -2426;

    t6 = ((x297<<x298)-(x299!=x300));

    if (t6 != 4031) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x378 = 2LLU;
	uint16_t x380 = 1386U;

    t7 = ((x377<<x378)-(x379!=x380));

    if (t7 != 262139) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x382 = 1U;
	int32_t x383 = INT32_MAX;
	static int8_t x384 = 0;
	uint64_t t8 = 534LLU;

    t8 = ((x381<<x382)-(x383!=x384));

    if (t8 != 19LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint8_t x478 = 12U;
	static int32_t x479 = INT32_MIN;
	uint16_t x480 = UINT16_MAX;
	static volatile uint64_t t9 = 6LLU;

    t9 = ((x477<<x478)-(x479!=x480));

    if (t9 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x559 = -1LL;
	int8_t x560 = 1;
	int32_t t10 = -14;

    t10 = ((x557<<x558)-(x559!=x560));

    if (t10 != 1015) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x625 = UINT32_MAX;
	int32_t x626 = 3;
	uint64_t x628 = 62313520LLU;

    t11 = ((x625<<x626)-(x627!=x628));

    if (t11 != 4294967287U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x677 = UINT64_MAX;
	int64_t x679 = -500681LL;
	volatile int64_t x680 = INT64_MIN;
	volatile uint64_t t12 = 13349364LLU;

    t12 = ((x677<<x678)-(x679!=x680));

    if (t12 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x685 = 55757166LL;
	volatile uint8_t x686 = 1U;
	int16_t x688 = -1;
	static int64_t t13 = 110136291098288LL;

    t13 = ((x685<<x686)-(x687!=x688));

    if (t13 != 111514331LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x725 = 41U;
	uint16_t x726 = 8U;
	int64_t x727 = 1304LL;
	int32_t x728 = INT32_MAX;

    t14 = ((x725<<x726)-(x727!=x728));

    if (t14 != 10495) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x757 = 8;
	int8_t x758 = 0;
	volatile int8_t x760 = INT8_MAX;
	static volatile int32_t t15 = -25705003;

    t15 = ((x757<<x758)-(x759!=x760));

    if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x773 = 5U;
	uint8_t x774 = 4U;
	static int16_t x776 = 157;
	int32_t t16 = -3;

    t16 = ((x773<<x774)-(x775!=x776));

    if (t16 != 79) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x893 = INT16_MAX;
	volatile int8_t x894 = 0;
	static volatile uint16_t x895 = 4U;
	volatile int32_t t17 = -57;

    t17 = ((x893<<x894)-(x895!=x896));

    if (t17 != 32766) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x897 = 2U;
	int32_t x899 = -1;
	volatile int32_t x900 = INT32_MIN;
	static int32_t t18 = -76;

    t18 = ((x897<<x898)-(x899!=x900));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1013 = 10U;
	int64_t x1014 = 10LL;
	static int32_t x1016 = INT32_MAX;
	volatile int32_t t19 = 0;

    t19 = ((x1013<<x1014)-(x1015!=x1016));

    if (t19 != 10239) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1017 = 3916;
	volatile int8_t x1018 = 5;
	static int64_t x1019 = INT64_MIN;
	static int8_t x1020 = INT8_MAX;
	volatile int32_t t20 = -34012;

    t20 = ((x1017<<x1018)-(x1019!=x1020));

    if (t20 != 125311) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1041 = 65U;
	static int64_t x1042 = 17LL;
	volatile int8_t x1043 = -8;
	volatile uint8_t x1044 = 96U;

    t21 = ((x1041<<x1042)-(x1043!=x1044));

    if (t21 != 8519679) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1173 = 2;
	volatile int16_t x1174 = 0;
	int16_t x1175 = 9;
	int64_t x1176 = INT64_MAX;
	volatile int32_t t22 = -41013956;

    t22 = ((x1173<<x1174)-(x1175!=x1176));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1181 = 1U;
	volatile int8_t x1182 = 2;
	int32_t x1183 = -15;
	uint32_t x1184 = UINT32_MAX;
	int32_t t23 = 186722;

    t23 = ((x1181<<x1182)-(x1183!=x1184));

    if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x1449 = UINT32_MAX;
	uint8_t x1450 = 1U;
	static uint64_t x1452 = 810703LLU;
	static volatile uint32_t t24 = 63183065U;

    t24 = ((x1449<<x1450)-(x1451!=x1452));

    if (t24 != 4294967293U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t t25 = 848856488392953LLU;

    t25 = ((x1477<<x1478)-(x1479!=x1480));

    if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1561 = 3U;
	int64_t x1562 = 23LL;
	volatile int8_t x1564 = -1;
	int32_t t26 = -10;

    t26 = ((x1561<<x1562)-(x1563!=x1564));

    if (t26 != 25165823) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x1597 = UINT32_MAX;
	static uint8_t x1598 = 0U;
	static int8_t x1599 = INT8_MIN;
	static volatile int64_t x1600 = -9703951655LL;
	volatile uint32_t t27 = 1386U;

    t27 = ((x1597<<x1598)-(x1599!=x1600));

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1621 = 1U;
	int8_t x1622 = 0;
	uint16_t x1623 = 1750U;
	int32_t t28 = 17923;

    t28 = ((x1621<<x1622)-(x1623!=x1624));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1639 = 30;
	int16_t x1640 = INT16_MAX;
	static int32_t t29 = 335;

    t29 = ((x1637<<x1638)-(x1639!=x1640));

    if (t29 != 31) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x1649 = 14U;
	uint8_t x1650 = 3U;
	int8_t x1651 = -1;
	volatile int32_t x1652 = -1;
	int32_t t30 = 33;

    t30 = ((x1649<<x1650)-(x1651!=x1652));

    if (t30 != 112) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1757 = 0;
	static volatile int8_t x1758 = 1;
	static int64_t x1759 = -28844867LL;
	static uint64_t x1760 = 152520LLU;
	int32_t t31 = 26329492;

    t31 = ((x1757<<x1758)-(x1759!=x1760));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1909 = 2;
	int8_t x1911 = -1;
	uint16_t x1912 = 203U;
	volatile int32_t t32 = -3454;

    t32 = ((x1909<<x1910)-(x1911!=x1912));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2021 = 427315LLU;
	int8_t x2022 = 18;
	int32_t x2023 = INT32_MIN;
	volatile int16_t x2024 = -1;
	uint64_t t33 = 5LLU;

    t33 = ((x2021<<x2022)-(x2023!=x2024));

    if (t33 != 112018063359LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x2041 = 7;
	int8_t x2042 = 0;

    t34 = ((x2041<<x2042)-(x2043!=x2044));

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2103 = -2;
	uint64_t x2104 = 14228LLU;
	int32_t t35 = 1735337;

    t35 = ((x2101<<x2102)-(x2103!=x2104));

    if (t35 != 520191) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x2109 = UINT16_MAX;
	int8_t x2110 = 1;
	int64_t x2112 = -1LL;
	int32_t t36 = -1013;

    t36 = ((x2109<<x2110)-(x2111!=x2112));

    if (t36 != 131069) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x2150 = 8U;
	uint8_t x2151 = 0U;
	int64_t x2152 = INT64_MAX;
	volatile int32_t t37 = 579031;

    t37 = ((x2149<<x2150)-(x2151!=x2152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x2298 = 0;
	static uint32_t x2300 = 2026491751U;

    t38 = ((x2297<<x2298)-(x2299!=x2300));

    if (t38 != 510) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2305 = UINT8_MAX;
	static int8_t x2307 = INT8_MAX;
	uint64_t x2308 = 329978LLU;
	volatile int32_t t39 = -1;

    t39 = ((x2305<<x2306)-(x2307!=x2308));

    if (t39 != 509) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2318 = 7;
	uint64_t x2319 = 257204605362587LLU;
	int8_t x2320 = INT8_MIN;
	uint64_t t40 = 25LLU;

    t40 = ((x2317<<x2318)-(x2319!=x2320));

    if (t40 != 394241548287LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2373 = 1U;
	volatile uint32_t x2375 = UINT32_MAX;
	int32_t x2376 = INT32_MIN;
	int32_t t41 = 484;

    t41 = ((x2373<<x2374)-(x2375!=x2376));

    if (t41 != 4095) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x2405 = 7921417196555786433LLU;
	volatile uint8_t x2406 = 2U;
	uint16_t x2407 = UINT16_MAX;
	int32_t x2408 = -1;
	uint64_t t42 = 68497046147102LLU;

    t42 = ((x2405<<x2406)-(x2407!=x2408));

    if (t42 != 13238924712513594115LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2481 = INT8_MAX;
	int32_t x2483 = INT32_MAX;
	int32_t x2484 = INT32_MIN;

    t43 = ((x2481<<x2482)-(x2483!=x2484));

    if (t43 != 253) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2497 = UINT32_MAX;
	uint8_t x2498 = 13U;
	int32_t x2499 = -1;
	int16_t x2500 = 10;

    t44 = ((x2497<<x2498)-(x2499!=x2500));

    if (t44 != 4294959103U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x2505 = 9U;
	uint8_t x2506 = 11U;
	static int64_t x2507 = INT64_MAX;
	static volatile int32_t t45 = -1011717;

    t45 = ((x2505<<x2506)-(x2507!=x2508));

    if (t45 != 18431) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2582 = 6;
	uint64_t x2583 = UINT64_MAX;
	int32_t x2584 = INT32_MAX;
	uint64_t t46 = UINT64_MAX;

    t46 = ((x2581<<x2582)-(x2583!=x2584));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x2681 = 915762770;
	uint16_t x2682 = 1U;
	volatile int16_t x2683 = INT16_MAX;
	volatile int32_t t47 = -3045;

    t47 = ((x2681<<x2682)-(x2683!=x2684));

    if (t47 != 1831525539) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x2685 = 32756030LLU;
	volatile uint32_t x2687 = 979193232U;
	int16_t x2688 = 38;
	volatile uint64_t t48 = 35621LLU;

    t48 = ((x2685<<x2686)-(x2687!=x2688));

    if (t48 != 137388747653119LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x2945 = INT64_MAX;
	int64_t x2946 = 0LL;
	volatile int64_t t49 = -615517796LL;

    t49 = ((x2945<<x2946)-(x2947!=x2948));

    if (t49 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2981 = 54;
	uint8_t x2982 = 1U;
	uint32_t x2983 = 1U;
	static int16_t x2984 = INT16_MIN;
	static int32_t t50 = -80740;

    t50 = ((x2981<<x2982)-(x2983!=x2984));

    if (t50 != 107) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x2989 = 2U;
	volatile int16_t x2990 = 0;
	uint16_t x2991 = 134U;
	static volatile int8_t x2992 = -1;
	volatile int32_t t51 = 1;

    t51 = ((x2989<<x2990)-(x2991!=x2992));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x3006 = 6;
	uint64_t x3007 = UINT64_MAX;
	int8_t x3008 = INT8_MIN;
	volatile uint32_t t52 = UINT32_MAX;

    t52 = ((x3005<<x3006)-(x3007!=x3008));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x3086 = 25U;
	uint32_t x3087 = 32048220U;
	int8_t x3088 = -1;

    t53 = ((x3085<<x3086)-(x3087!=x3088));

    if (t53 != 4261412863U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x3149 = 1U;
	int32_t x3151 = -123;
	volatile int16_t x3152 = INT16_MAX;
	uint32_t t54 = 0U;

    t54 = ((x3149<<x3150)-(x3151!=x3152));

    if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3237 = 2165161415364LL;
	uint8_t x3238 = 10U;
	uint64_t x3239 = 831913LLU;
	int64_t x3240 = INT64_MAX;
	volatile int64_t t55 = 4617069596LL;

    t55 = ((x3237<<x3238)-(x3239!=x3240));

    if (t55 != 2217125289332735LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x3286 = 5U;
	volatile uint8_t x3287 = 18U;
	static volatile uint64_t x3288 = UINT64_MAX;
	volatile int32_t t56 = -3268;

    t56 = ((x3285<<x3286)-(x3287!=x3288));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x3434 = 0U;

    t57 = ((x3433<<x3434)-(x3435!=x3436));

    if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x3457 = 842957445U;
	uint64_t x3458 = 13LLU;
	volatile int32_t x3459 = -1;
	int32_t x3460 = -1;

    t58 = ((x3457<<x3458)-(x3459!=x3460));

    if (t58 != 3494944768U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x3521 = 407068376247699700LLU;
	static uint16_t x3522 = 0U;
	static int8_t x3523 = INT8_MAX;
	int8_t x3524 = INT8_MIN;
	volatile uint64_t t59 = 1023LLU;

    t59 = ((x3521<<x3522)-(x3523!=x3524));

    if (t59 != 407068376247699699LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3597 = UINT64_MAX;
	int16_t x3598 = 1;
	int8_t x3599 = -1;
	uint64_t x3600 = 383590640LLU;
	uint64_t t60 = 259627486696104976LLU;

    t60 = ((x3597<<x3598)-(x3599!=x3600));

    if (t60 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x3685 = 30;
	static int8_t x3686 = 0;
	volatile int16_t x3687 = -1;
	static uint32_t x3688 = UINT32_MAX;
	int32_t t61 = 3029247;

    t61 = ((x3685<<x3686)-(x3687!=x3688));

    if (t61 != 30) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x3785 = 16099U;
	int16_t x3786 = 22;
	int32_t x3787 = INT32_MAX;
	uint64_t x3788 = 106505895LLU;

    t62 = ((x3785<<x3786)-(x3787!=x3788));

    if (t62 != 3099590655U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3849 = 2U;
	static uint8_t x3850 = 6U;
	static volatile int8_t x3851 = -1;
	volatile int32_t t63 = -74481;

    t63 = ((x3849<<x3850)-(x3851!=x3852));

    if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3857 = 161U;
	int32_t x3860 = -58263;
	int32_t t64 = -939492;

    t64 = ((x3857<<x3858)-(x3859!=x3860));

    if (t64 != 160) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x4085 = 0;
	static int16_t x4087 = -1;
	uint64_t x4088 = UINT64_MAX;
	int32_t t65 = 1;

    t65 = ((x4085<<x4086)-(x4087!=x4088));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x4126 = 14U;
	uint64_t x4127 = UINT64_MAX;
	static int32_t x4128 = INT32_MIN;
	volatile uint32_t t66 = 420019U;

    t66 = ((x4125<<x4126)-(x4127!=x4128));

    if (t66 != 1769865215U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x4137 = UINT64_MAX;
	static uint16_t x4138 = 3U;
	int64_t x4139 = INT64_MIN;
	int16_t x4140 = -1;
	volatile uint64_t t67 = 41LLU;

    t67 = ((x4137<<x4138)-(x4139!=x4140));

    if (t67 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x4161 = 431U;
	static int16_t x4162 = 6;
	volatile int32_t x4164 = -3135;

    t68 = ((x4161<<x4162)-(x4163!=x4164));

    if (t68 != 27583U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x4317 = 27618040LLU;
	uint16_t x4318 = 32U;
	static uint32_t x4319 = UINT32_MAX;
	int16_t x4320 = INT16_MAX;

    t69 = ((x4317<<x4318)-(x4319!=x4320));

    if (t69 != 118618578579619839LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x4373 = 1300126253U;
	volatile int8_t x4374 = 5;
	volatile int16_t x4375 = -193;
	int64_t x4376 = 4LL;
	volatile uint32_t t70 = 45394762U;

    t70 = ((x4373<<x4374)-(x4375!=x4376));

    if (t70 != 2949334431U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x4394 = 1U;
	volatile int32_t x4395 = INT32_MIN;
	volatile int16_t x4396 = 574;
	volatile int32_t t71 = -61741;

    t71 = ((x4393<<x4394)-(x4395!=x4396));

    if (t71 != 131069) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x4438 = 0;
	int32_t x4439 = -22802;
	volatile int32_t t72 = 0;

    t72 = ((x4437<<x4438)-(x4439!=x4440));

    if (t72 != 7090) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x4453 = 17;
	int8_t x4454 = 8;
	uint64_t x4455 = UINT64_MAX;
	static int64_t x4456 = 5730LL;
	volatile int32_t t73 = 452;

    t73 = ((x4453<<x4454)-(x4455!=x4456));

    if (t73 != 4351) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4486 = 1;
	uint32_t x4487 = 89445U;
	int8_t x4488 = -29;
	static uint64_t t74 = 2053361451LLU;

    t74 = ((x4485<<x4486)-(x4487!=x4488));

    if (t74 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x4497 = 10U;
	int64_t x4499 = 24LL;
	static volatile uint8_t x4500 = UINT8_MAX;

    t75 = ((x4497<<x4498)-(x4499!=x4500));

    if (t75 != 10485759) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x4501 = 3LLU;
	volatile uint64_t x4503 = 366804031629585LLU;
	uint32_t x4504 = 342U;

    t76 = ((x4501<<x4502)-(x4503!=x4504));

    if (t76 != 13510798882111487LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x4561 = INT64_MAX;
	uint16_t x4562 = 0U;
	volatile int32_t x4563 = -1;
	volatile int8_t x4564 = INT8_MIN;
	volatile int64_t t77 = -2249211429298120LL;

    t77 = ((x4561<<x4562)-(x4563!=x4564));

    if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x4565 = 3U;
	uint32_t x4566 = 1U;
	uint64_t x4567 = UINT64_MAX;
	static volatile uint64_t x4568 = 35155936394LLU;
	int32_t t78 = 5;

    t78 = ((x4565<<x4566)-(x4567!=x4568));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x4569 = 28U;
	int8_t x4571 = INT8_MIN;
	static uint32_t x4572 = UINT32_MAX;
	volatile int32_t t79 = 1177;

    t79 = ((x4569<<x4570)-(x4571!=x4572));

    if (t79 != 27) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x4581 = 10649;
	int8_t x4583 = -1;
	volatile int32_t t80 = -59754619;

    t80 = ((x4581<<x4582)-(x4583!=x4584));

    if (t80 != 5452288) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x4654 = 0;
	int8_t x4655 = INT8_MIN;
	int32_t x4656 = INT32_MIN;
	int32_t t81 = -2;

    t81 = ((x4653<<x4654)-(x4655!=x4656));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x4693 = UINT64_MAX;
	int8_t x4695 = -1;
	uint64_t t82 = 178152180923LLU;

    t82 = ((x4693<<x4694)-(x4695!=x4696));

    if (t82 != 18446744073675997183LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4737 = 1U;
	volatile uint16_t x4738 = 3U;
	int8_t x4739 = INT8_MAX;

    t83 = ((x4737<<x4738)-(x4739!=x4740));

    if (t83 != 7U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x4745 = 5169U;
	int8_t x4746 = 2;
	int64_t x4747 = -57176639LL;
	int32_t t84 = -17573559;

    t84 = ((x4745<<x4746)-(x4747!=x4748));

    if (t84 != 20675) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x4796 = INT8_MAX;
	volatile int32_t t85 = 152;

    t85 = ((x4793<<x4794)-(x4795!=x4796));

    if (t85 != 51) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x4805 = UINT64_MAX;
	int8_t x4806 = 34;
	int8_t x4808 = -1;
	uint64_t t86 = 24590667LLU;

    t86 = ((x4805<<x4806)-(x4807!=x4808));

    if (t86 != 18446744056529682431LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x4810 = 1;
	static int64_t x4811 = INT64_MIN;
	volatile int8_t x4812 = -45;
	static volatile uint32_t t87 = 91313U;

    t87 = ((x4809<<x4810)-(x4811!=x4812));

    if (t87 != 4294967293U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x4817 = 31U;
	volatile uint32_t x4818 = 5U;
	uint8_t x4819 = 8U;
	int64_t x4820 = -1LL;
	volatile int32_t t88 = 47;

    t88 = ((x4817<<x4818)-(x4819!=x4820));

    if (t88 != 991) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x5053 = 4U;
	int8_t x5054 = 7;
	static int16_t x5055 = INT16_MAX;
	static uint64_t x5056 = UINT64_MAX;
	int32_t t89 = 1545;

    t89 = ((x5053<<x5054)-(x5055!=x5056));

    if (t89 != 511) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x5133 = 0U;
	uint16_t x5134 = 10U;
	volatile int16_t x5135 = 2847;
	uint32_t x5136 = 1526996U;
	volatile int32_t t90 = -3764;

    t90 = ((x5133<<x5134)-(x5135!=x5136));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5145 = INT8_MAX;
	uint8_t x5146 = 1U;
	volatile int64_t x5147 = INT64_MIN;
	uint8_t x5148 = UINT8_MAX;
	static volatile int32_t t91 = -59776;

    t91 = ((x5145<<x5146)-(x5147!=x5148));

    if (t91 != 253) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x5173 = UINT32_MAX;
	uint16_t x5174 = 5U;
	uint64_t x5175 = 59944999767047LLU;
	volatile uint16_t x5176 = UINT16_MAX;
	uint32_t t92 = 53960055U;

    t92 = ((x5173<<x5174)-(x5175!=x5176));

    if (t92 != 4294967263U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x5177 = 62603668948LLU;
	static int16_t x5178 = 3;
	uint64_t x5179 = UINT64_MAX;
	int64_t x5180 = -3850476LL;
	volatile uint64_t t93 = 1230LLU;

    t93 = ((x5177<<x5178)-(x5179!=x5180));

    if (t93 != 500829351583LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x5197 = 13U;
	static int8_t x5198 = 1;
	int16_t x5199 = -1;
	static volatile int32_t t94 = 3400;

    t94 = ((x5197<<x5198)-(x5199!=x5200));

    if (t94 != 26) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x5233 = 46632695605558635LLU;
	uint8_t x5234 = 2U;
	volatile int8_t x5236 = INT8_MIN;
	static uint64_t t95 = 2217708847086LLU;

    t95 = ((x5233<<x5234)-(x5235!=x5236));

    if (t95 != 186530782422234539LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x5262 = 20LL;
	volatile uint16_t x5264 = 165U;
	static int32_t t96 = 699733;

    t96 = ((x5261<<x5262)-(x5263!=x5264));

    if (t96 != 57671679) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x5273 = 80;
	static int16_t x5274 = 0;
	int8_t x5275 = -7;

    t97 = ((x5273<<x5274)-(x5275!=x5276));

    if (t97 != 79) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x5349 = INT16_MAX;
	int8_t x5350 = 1;
	static uint8_t x5352 = UINT8_MAX;

    t98 = ((x5349<<x5350)-(x5351!=x5352));

    if (t98 != 65533) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5401 = 582578;
	int8_t x5403 = 22;
	int8_t x5404 = INT8_MIN;

    t99 = ((x5401<<x5402)-(x5403!=x5404));

    if (t99 != 74569983) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x5457 = 264550964U;
	static int64_t x5458 = 1LL;
	uint16_t x5459 = 838U;
	volatile int32_t x5460 = INT32_MAX;

    t100 = ((x5457<<x5458)-(x5459!=x5460));

    if (t100 != 529101927U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x5485 = 14U;
	uint32_t x5486 = 14U;
	int32_t x5487 = INT32_MAX;
	uint32_t x5488 = UINT32_MAX;
	volatile int32_t t101 = -61021203;

    t101 = ((x5485<<x5486)-(x5487!=x5488));

    if (t101 != 229375) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x5545 = 0U;
	int8_t x5546 = 3;
	int32_t x5548 = -2179533;
	volatile int32_t t102 = -421;

    t102 = ((x5545<<x5546)-(x5547!=x5548));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x5561 = UINT32_MAX;
	int8_t x5562 = 13;
	int64_t x5563 = -1LL;
	static uint32_t x5564 = UINT32_MAX;
	uint32_t t103 = 8U;

    t103 = ((x5561<<x5562)-(x5563!=x5564));

    if (t103 != 4294959103U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x5618 = 49;
	int16_t x5619 = INT16_MAX;
	volatile uint64_t x5620 = 538LLU;
	volatile uint64_t t104 = 0LLU;

    t104 = ((x5617<<x5618)-(x5619!=x5620));

    if (t104 != 18446181123756130303LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x5653 = 1LL;
	uint8_t x5654 = 3U;
	int32_t x5655 = INT32_MAX;
	int32_t x5656 = INT32_MIN;
	volatile int64_t t105 = -1444685LL;

    t105 = ((x5653<<x5654)-(x5655!=x5656));

    if (t105 != 7LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x5665 = UINT64_MAX;
	uint64_t x5667 = UINT64_MAX;

    t106 = ((x5665<<x5666)-(x5667!=x5668));

    if (t106 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x5681 = 375LL;
	uint32_t x5682 = 0U;
	volatile int64_t x5683 = INT64_MIN;
	int64_t x5684 = INT64_MAX;
	volatile int64_t t107 = -7210LL;

    t107 = ((x5681<<x5682)-(x5683!=x5684));

    if (t107 != 374LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x5709 = 3505LLU;
	static uint8_t x5710 = 2U;
	static volatile uint64_t t108 = 2238110071448LLU;

    t108 = ((x5709<<x5710)-(x5711!=x5712));

    if (t108 != 14019LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x5758 = 24;
	static int8_t x5759 = -1;
	uint64_t x5760 = 3936178493LLU;
	uint64_t t109 = 1LLU;

    t109 = ((x5757<<x5758)-(x5759!=x5760));

    if (t109 != 1953924907007LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x5821 = UINT8_MAX;
	int16_t x5822 = 10;
	int8_t x5823 = INT8_MAX;
	int32_t t110 = 1979512;

    t110 = ((x5821<<x5822)-(x5823!=x5824));

    if (t110 != 261119) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x5957 = UINT8_MAX;
	uint8_t x5958 = 7U;
	uint8_t x5959 = 1U;
	static uint8_t x5960 = 3U;
	int32_t t111 = -141882214;

    t111 = ((x5957<<x5958)-(x5959!=x5960));

    if (t111 != 32639) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5970 = 0;
	uint32_t x5971 = 2309809U;
	uint32_t x5972 = 580U;
	volatile int32_t t112 = -14;

    t112 = ((x5969<<x5970)-(x5971!=x5972));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x6077 = 24117U;
	uint16_t x6078 = 6U;
	volatile int8_t x6079 = 7;
	int8_t x6080 = INT8_MAX;

    t113 = ((x6077<<x6078)-(x6079!=x6080));

    if (t113 != 1543487) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x6101 = UINT16_MAX;
	int16_t x6102 = 5;
	uint32_t x6103 = 27U;
	static volatile int16_t x6104 = INT16_MAX;
	volatile int32_t t114 = -3191;

    t114 = ((x6101<<x6102)-(x6103!=x6104));

    if (t114 != 2097119) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x6117 = INT8_MAX;
	uint32_t x6118 = 1U;
	int8_t x6119 = 0;
	volatile uint8_t x6120 = UINT8_MAX;
	volatile int32_t t115 = 5;

    t115 = ((x6117<<x6118)-(x6119!=x6120));

    if (t115 != 253) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x6165 = 77U;
	uint8_t x6166 = 11U;
	int32_t x6167 = INT32_MIN;
	uint16_t x6168 = 2U;
	static int32_t t116 = -26;

    t116 = ((x6165<<x6166)-(x6167!=x6168));

    if (t116 != 157695) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x6173 = 3U;
	uint8_t x6174 = 24U;
	static int32_t x6175 = 1;
	int32_t x6176 = -5475890;
	volatile int32_t t117 = 24919;

    t117 = ((x6173<<x6174)-(x6175!=x6176));

    if (t117 != 50331647) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x6181 = UINT8_MAX;
	int16_t x6182 = 11;
	int16_t x6184 = INT16_MIN;

    t118 = ((x6181<<x6182)-(x6183!=x6184));

    if (t118 != 522239) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x6405 = 22;
	uint16_t x6406 = 2U;
	uint64_t x6408 = UINT64_MAX;
	volatile int32_t t119 = -90;

    t119 = ((x6405<<x6406)-(x6407!=x6408));

    if (t119 != 87) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x6526 = 5U;
	uint32_t x6527 = 40503458U;
	int64_t x6528 = INT64_MIN;
	static int32_t t120 = 0;

    t120 = ((x6525<<x6526)-(x6527!=x6528));

    if (t120 != 959) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x6533 = UINT32_MAX;
	volatile int8_t x6534 = 14;
	uint8_t x6535 = 34U;
	volatile int32_t x6536 = INT32_MIN;
	uint32_t t121 = 0U;

    t121 = ((x6533<<x6534)-(x6535!=x6536));

    if (t121 != 4294950911U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x6589 = 2;
	static uint16_t x6590 = 0U;
	int32_t x6591 = 13952;
	int8_t x6592 = INT8_MIN;
	volatile int32_t t122 = 247720045;

    t122 = ((x6589<<x6590)-(x6591!=x6592));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x6597 = 3086087;
	uint8_t x6598 = 7U;
	uint32_t x6599 = 53425U;
	static int32_t t123 = -41296;

    t123 = ((x6597<<x6598)-(x6599!=x6600));

    if (t123 != 395019135) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x6753 = 5U;
	uint32_t x6755 = 86476463U;
	static uint8_t x6756 = 14U;
	int32_t t124 = -65;

    t124 = ((x6753<<x6754)-(x6755!=x6756));

    if (t124 != 39) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x6785 = 5U;
	uint8_t x6786 = 12U;
	static uint32_t x6788 = 6364701U;
	static volatile int32_t t125 = -1;

    t125 = ((x6785<<x6786)-(x6787!=x6788));

    if (t125 != 20479) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x6830 = 5;
	int16_t x6831 = 451;
	int16_t x6832 = INT16_MIN;
	uint32_t t126 = 781188006U;

    t126 = ((x6829<<x6830)-(x6831!=x6832));

    if (t126 != 31U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x6910 = 12U;
	volatile uint64_t x6911 = 5967LLU;
	volatile uint64_t t127 = 28573LLU;

    t127 = ((x6909<<x6910)-(x6911!=x6912));

    if (t127 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x7109 = 0U;
	uint8_t x7110 = 8U;
	int8_t x7111 = INT8_MAX;
	volatile int16_t x7112 = INT16_MIN;
	uint32_t t128 = UINT32_MAX;

    t128 = ((x7109<<x7110)-(x7111!=x7112));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x7182 = 0;
	int32_t x7183 = INT32_MIN;
	volatile int8_t x7184 = INT8_MIN;
	static volatile uint32_t t129 = 2782805U;

    t129 = ((x7181<<x7182)-(x7183!=x7184));

    if (t129 != 618644U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x7197 = 1U;
	uint8_t x7198 = 1U;
	static int64_t x7199 = INT64_MIN;
	static uint16_t x7200 = UINT16_MAX;
	static volatile uint32_t t130 = 4697336U;

    t130 = ((x7197<<x7198)-(x7199!=x7200));

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x7229 = 91U;
	int8_t x7230 = 8;
	int64_t x7231 = INT64_MIN;
	int32_t t131 = -3;

    t131 = ((x7229<<x7230)-(x7231!=x7232));

    if (t131 != 23295) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x7330 = 0;
	static int8_t x7332 = -28;
	int32_t t132 = -80563090;

    t132 = ((x7329<<x7330)-(x7331!=x7332));

    if (t132 != 12) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x7409 = 962723598LL;
	uint32_t x7410 = 9U;
	int64_t x7412 = 44LL;
	int64_t t133 = 380763LL;

    t133 = ((x7409<<x7410)-(x7411!=x7412));

    if (t133 != 492914482175LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x7518 = 22U;
	int8_t x7519 = INT8_MAX;
	volatile uint32_t t134 = 0U;

    t134 = ((x7517<<x7518)-(x7519!=x7520));

    if (t134 != 4290772991U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x7565 = INT32_MAX;
	int8_t x7566 = 0;
	uint8_t x7567 = 0U;
	int16_t x7568 = 1005;
	int32_t t135 = -9194;

    t135 = ((x7565<<x7566)-(x7567!=x7568));

    if (t135 != 2147483646) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x7569 = UINT16_MAX;
	uint8_t x7570 = 0U;

    t136 = ((x7569<<x7570)-(x7571!=x7572));

    if (t136 != 65534) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x7589 = 307U;
	static volatile uint8_t x7590 = 7U;
	int16_t x7591 = INT16_MAX;
	int16_t x7592 = -1;
	volatile uint32_t t137 = 23U;

    t137 = ((x7589<<x7590)-(x7591!=x7592));

    if (t137 != 39295U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x7633 = INT16_MAX;
	int8_t x7634 = 0;
	int8_t x7635 = -49;
	static int32_t x7636 = -1034889031;
	volatile int32_t t138 = 30;

    t138 = ((x7633<<x7634)-(x7635!=x7636));

    if (t138 != 32766) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x7637 = 737872316LL;
	uint32_t x7638 = 11U;
	volatile int64_t t139 = -54LL;

    t139 = ((x7637<<x7638)-(x7639!=x7640));

    if (t139 != 1511162503168LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x7645 = 372380960U;
	volatile uint8_t x7646 = 9U;
	int64_t x7648 = 6894476LL;

    t140 = ((x7645<<x7646)-(x7647!=x7648));

    if (t140 != 1680490495U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x7734 = 2;
	volatile int32_t t141 = -1084119;

    t141 = ((x7733<<x7734)-(x7735!=x7736));

    if (t141 != 7) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x7737 = 7381502614LLU;
	uint8_t x7738 = 0U;
	int64_t x7739 = 7LL;
	static int16_t x7740 = INT16_MIN;
	static uint64_t t142 = 2201549185563640566LLU;

    t142 = ((x7737<<x7738)-(x7739!=x7740));

    if (t142 != 7381502613LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x7773 = UINT8_MAX;
	uint32_t x7774 = 3U;
	volatile uint8_t x7775 = 86U;
	int16_t x7776 = INT16_MIN;
	volatile int32_t t143 = 4188;

    t143 = ((x7773<<x7774)-(x7775!=x7776));

    if (t143 != 2039) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x7778 = 4U;
	int8_t x7780 = -1;
	volatile uint64_t t144 = 66056982658LLU;

    t144 = ((x7777<<x7778)-(x7779!=x7780));

    if (t144 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x7837 = 3U;
	uint8_t x7838 = 22U;
	int16_t x7840 = -1;
	volatile int32_t t145 = -1096142;

    t145 = ((x7837<<x7838)-(x7839!=x7840));

    if (t145 != 12582912) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x8001 = 27435840LLU;
	uint8_t x8003 = UINT8_MAX;
	uint64_t x8004 = 1LLU;
	volatile uint64_t t146 = 17247050LLU;

    t146 = ((x8001<<x8002)-(x8003!=x8004));

    if (t146 != 109743359LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x8329 = UINT32_MAX;
	int8_t x8331 = -1;
	static uint32_t x8332 = 132875163U;
	volatile uint32_t t147 = 46918128U;

    t147 = ((x8329<<x8330)-(x8331!=x8332));

    if (t147 != 4294967231U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x8349 = UINT64_MAX;
	int8_t x8350 = 14;
	static int16_t x8351 = -1;
	uint64_t x8352 = UINT64_MAX;
	static uint64_t t148 = 143170LLU;

    t148 = ((x8349<<x8350)-(x8351!=x8352));

    if (t148 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x8418 = 0;
	static uint16_t x8419 = 175U;
	static volatile int32_t x8420 = INT32_MIN;

    t149 = ((x8417<<x8418)-(x8419!=x8420));

    if (t149 != 369595913411940LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x8457 = UINT8_MAX;
	uint16_t x8458 = 0U;
	int8_t x8459 = -1;
	uint64_t x8460 = 187LLU;
	int32_t t150 = -357;

    t150 = ((x8457<<x8458)-(x8459!=x8460));

    if (t150 != 254) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x8513 = 59U;
	int8_t x8514 = 1;
	volatile uint64_t x8515 = 8052676011062442LLU;
	volatile int16_t x8516 = INT16_MAX;
	static int32_t t151 = 166;

    t151 = ((x8513<<x8514)-(x8515!=x8516));

    if (t151 != 117) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x8642 = 7;
	uint8_t x8643 = 0U;
	uint32_t x8644 = 11U;
	volatile int32_t t152 = -13;

    t152 = ((x8641<<x8642)-(x8643!=x8644));

    if (t152 != 1450751) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x8682 = 13U;
	int32_t x8683 = INT32_MIN;
	int16_t x8684 = INT16_MIN;
	volatile uint64_t t153 = 65627376LLU;

    t153 = ((x8681<<x8682)-(x8683!=x8684));

    if (t153 != 9142271LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x8782 = 1;
	volatile int32_t x8783 = INT32_MIN;
	int32_t x8784 = -5509;

    t154 = ((x8781<<x8782)-(x8783!=x8784));

    if (t154 != 6437006959LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x8791 = INT8_MIN;
	int32_t x8792 = INT32_MIN;
	volatile int32_t t155 = 624349799;

    t155 = ((x8789<<x8790)-(x8791!=x8792));

    if (t155 != 2023) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x8862 = 0U;
	static volatile int32_t x8864 = INT32_MIN;

    t156 = ((x8861<<x8862)-(x8863!=x8864));

    if (t156 != 2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x9073 = 1021577U;
	volatile int64_t x9075 = -4119LL;
	volatile int16_t x9076 = -1;

    t157 = ((x9073<<x9074)-(x9075!=x9076));

    if (t157 != 130761855U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x9086 = 3U;
	static int8_t x9087 = -1;
	int8_t x9088 = INT8_MAX;
	volatile int32_t t158 = -722;

    t158 = ((x9085<<x9086)-(x9087!=x9088));

    if (t158 != 119) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x9153 = 15144;
	volatile int8_t x9154 = 5;
	int8_t x9155 = -57;
	static int8_t x9156 = INT8_MIN;
	volatile int32_t t159 = -104203082;

    t159 = ((x9153<<x9154)-(x9155!=x9156));

    if (t159 != 484607) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x9346 = 5U;
	volatile int32_t x9347 = INT32_MAX;
	int32_t x9348 = 234855;
	int32_t t160 = -3;

    t160 = ((x9345<<x9346)-(x9347!=x9348));

    if (t160 != 447) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x9365 = UINT8_MAX;
	volatile int16_t x9367 = 20;
	uint16_t x9368 = 250U;
	static int32_t t161 = 247263;

    t161 = ((x9365<<x9366)-(x9367!=x9368));

    if (t161 != 509) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x9475 = UINT32_MAX;
	int16_t x9476 = INT16_MIN;
	int32_t t162 = 793;

    t162 = ((x9473<<x9474)-(x9475!=x9476));

    if (t162 != 254) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x9502 = 31;
	uint16_t x9503 = 80U;
	static int8_t x9504 = INT8_MIN;
	volatile uint32_t t163 = 75043189U;

    t163 = ((x9501<<x9502)-(x9503!=x9504));

    if (t163 != 2147483647U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x9694 = 6U;
	static volatile int64_t x9695 = INT64_MAX;
	volatile int32_t t164 = -11551;

    t164 = ((x9693<<x9694)-(x9695!=x9696));

    if (t164 != 8127) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x9725 = UINT16_MAX;
	int8_t x9726 = 1;
	int8_t x9727 = INT8_MIN;
	int16_t x9728 = INT16_MIN;
	volatile int32_t t165 = -77520036;

    t165 = ((x9725<<x9726)-(x9727!=x9728));

    if (t165 != 131069) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x9773 = 0U;
	volatile int8_t x9774 = 13;
	volatile int64_t x9775 = INT64_MIN;
	int8_t x9776 = -1;
	int32_t t166 = -361378;

    t166 = ((x9773<<x9774)-(x9775!=x9776));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x9797 = 3532346363746857439LLU;
	uint64_t x9798 = 34LLU;
	volatile uint64_t t167 = 105LLU;

    t167 = ((x9797<<x9798)-(x9799!=x9800));

    if (t167 != 16940509333743992831LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x9805 = 80U;
	int8_t x9806 = 1;
	volatile uint32_t x9807 = 203U;
	uint64_t x9808 = 20932610411LLU;
	volatile int32_t t168 = 199152;

    t168 = ((x9805<<x9806)-(x9807!=x9808));

    if (t168 != 159) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x9809 = 4U;
	uint8_t x9810 = 6U;
	int8_t x9811 = 6;
	int16_t x9812 = INT16_MIN;
	static volatile int32_t t169 = 237073987;

    t169 = ((x9809<<x9810)-(x9811!=x9812));

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x9889 = 7LLU;
	uint16_t x9890 = 2U;
	volatile int32_t x9891 = -1;
	volatile uint64_t t170 = 76526LLU;

    t170 = ((x9889<<x9890)-(x9891!=x9892));

    if (t170 != 27LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x9897 = INT16_MAX;
	static volatile uint8_t x9898 = 0U;
	uint32_t x9899 = 441196016U;

    t171 = ((x9897<<x9898)-(x9899!=x9900));

    if (t171 != 32766) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x10046 = 0U;
	static volatile int64_t x10048 = -1227437348899784LL;
	volatile int32_t t172 = 257223524;

    t172 = ((x10045<<x10046)-(x10047!=x10048));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x10058 = 0U;
	int32_t x10059 = INT32_MAX;
	volatile int16_t x10060 = 1304;
	int32_t t173 = -71;

    t173 = ((x10057<<x10058)-(x10059!=x10060));

    if (t173 != 126) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x10073 = UINT64_MAX;
	volatile uint16_t x10074 = 29U;
	int16_t x10075 = INT16_MIN;
	static int8_t x10076 = INT8_MAX;
	uint64_t t174 = 48583884LLU;

    t174 = ((x10073<<x10074)-(x10075!=x10076));

    if (t174 != 18446744073172680703LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x10121 = INT16_MAX;
	uint8_t x10122 = 2U;
	int32_t x10123 = -1;
	int32_t x10124 = -1;
	volatile int32_t t175 = -1558;

    t175 = ((x10121<<x10122)-(x10123!=x10124));

    if (t175 != 131068) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x10133 = INT8_MAX;
	uint8_t x10134 = 1U;
	int16_t x10135 = INT16_MAX;
	int64_t x10136 = 11748629LL;
	volatile int32_t t176 = -1094;

    t176 = ((x10133<<x10134)-(x10135!=x10136));

    if (t176 != 253) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x10245 = 63;
	uint16_t x10246 = 20U;
	volatile uint16_t x10247 = UINT16_MAX;
	int8_t x10248 = 0;
	volatile int32_t t177 = -450277;

    t177 = ((x10245<<x10246)-(x10247!=x10248));

    if (t177 != 66060287) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x10266 = 2;
	static int32_t x10267 = INT32_MIN;
	int16_t x10268 = INT16_MAX;
	volatile int32_t t178 = -13217;

    t178 = ((x10265<<x10266)-(x10267!=x10268));

    if (t178 != 262139) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x10281 = UINT32_MAX;
	int32_t x10283 = -434;
	int8_t x10284 = -1;
	volatile uint32_t t179 = 173371U;

    t179 = ((x10281<<x10282)-(x10283!=x10284));

    if (t179 != 4026531839U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x10293 = UINT64_MAX;
	static uint8_t x10294 = 2U;
	int16_t x10295 = -1;
	int8_t x10296 = INT8_MAX;
	uint64_t t180 = 6361391053460LLU;

    t180 = ((x10293<<x10294)-(x10295!=x10296));

    if (t180 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x10413 = 17461102114785LLU;
	uint8_t x10414 = 7U;
	int32_t x10415 = -1;
	static int64_t x10416 = INT64_MIN;
	volatile uint64_t t181 = 633LLU;

    t181 = ((x10413<<x10414)-(x10415!=x10416));

    if (t181 != 2235021070692479LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x10473 = 0U;
	uint16_t x10474 = 10U;
	volatile int64_t x10475 = INT64_MIN;
	int32_t t182 = -164148;

    t182 = ((x10473<<x10474)-(x10475!=x10476));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x10546 = 2U;
	int16_t x10547 = INT16_MIN;

    t183 = ((x10545<<x10546)-(x10547!=x10548));

    if (t183 != 262140) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x10594 = 0U;
	volatile int8_t x10595 = INT8_MIN;
	uint16_t x10596 = UINT16_MAX;
	static volatile int32_t t184 = 8;

    t184 = ((x10593<<x10594)-(x10595!=x10596));

    if (t184 != 11893) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x10665 = 14232954U;
	int16_t x10666 = 0;
	uint32_t t185 = 124U;

    t185 = ((x10665<<x10666)-(x10667!=x10668));

    if (t185 != 14232953U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x10737 = 862416U;
	uint8_t x10738 = 0U;
	int64_t x10739 = -2315983805271013711LL;
	static volatile uint32_t t186 = 31505338U;

    t186 = ((x10737<<x10738)-(x10739!=x10740));

    if (t186 != 862415U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x10746 = 19U;
	int32_t x10748 = INT32_MIN;
	static volatile int32_t t187 = -55;

    t187 = ((x10745<<x10746)-(x10747!=x10748));

    if (t187 != 66584575) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x10789 = UINT16_MAX;
	uint8_t x10790 = 0U;
	int16_t x10791 = 909;
	int32_t x10792 = 1601902;
	volatile int32_t t188 = -977173;

    t188 = ((x10789<<x10790)-(x10791!=x10792));

    if (t188 != 65534) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x10841 = UINT8_MAX;
	int16_t x10843 = INT16_MIN;
	uint8_t x10844 = UINT8_MAX;
	int32_t t189 = -9881472;

    t189 = ((x10841<<x10842)-(x10843!=x10844));

    if (t189 != 509) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x10878 = 1;
	int16_t x10880 = 2;
	volatile int32_t t190 = 951;

    t190 = ((x10877<<x10878)-(x10879!=x10880));

    if (t190 != 509) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x10893 = 2471642LLU;
	static volatile uint64_t x10896 = UINT64_MAX;
	static volatile uint64_t t191 = 178LLU;

    t191 = ((x10893<<x10894)-(x10895!=x10896));

    if (t191 != 39546271LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x10899 = 8365461004LL;
	static int32_t t192 = -3969476;

    t192 = ((x10897<<x10898)-(x10899!=x10900));

    if (t192 != 156206455) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x11021 = 76;
	uint8_t x11022 = 1U;
	uint64_t x11023 = 632181577337956LLU;
	static int32_t x11024 = INT32_MIN;
	static volatile int32_t t193 = -1;

    t193 = ((x11021<<x11022)-(x11023!=x11024));

    if (t193 != 151) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x11073 = 298U;
	static volatile int8_t x11074 = 9;
	volatile uint64_t x11075 = 13848176255934LLU;
	int32_t x11076 = INT32_MIN;
	volatile int32_t t194 = 181840;

    t194 = ((x11073<<x11074)-(x11075!=x11076));

    if (t194 != 152575) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x11082 = 12U;
	int8_t x11083 = INT8_MIN;
	uint32_t x11084 = 1530648U;
	int32_t t195 = -230686;

    t195 = ((x11081<<x11082)-(x11083!=x11084));

    if (t195 != 520191) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x11090 = 0U;
	int8_t x11091 = INT8_MAX;
	uint16_t x11092 = 3993U;
	volatile int32_t t196 = 14;

    t196 = ((x11089<<x11090)-(x11091!=x11092));

    if (t196 != 2147483646) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x11109 = 6265LLU;
	uint16_t x11110 = 3U;
	int16_t x11111 = INT16_MIN;
	uint8_t x11112 = 95U;
	uint64_t t197 = 8LLU;

    t197 = ((x11109<<x11110)-(x11111!=x11112));

    if (t197 != 50119LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x11157 = 0U;
	int8_t x11159 = -1;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = ((x11157<<x11158)-(x11159!=x11160));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x11293 = 1181938784U;
	static int8_t x11294 = 1;
	int32_t x11295 = -17429077;
	uint32_t t199 = 52U;

    t199 = ((x11293<<x11294)-(x11295!=x11296));

    if (t199 != 2363877567U) { NG(); } else { ; }
	
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

