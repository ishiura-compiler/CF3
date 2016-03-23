
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

volatile uint16_t x2 = 3173U;
volatile int32_t x24 = 1;
static int32_t t1 = 7;
uint16_t x136 = UINT16_MAX;
int32_t t2 = 3;
int8_t x138 = 1;
int16_t x257 = -7001;
int32_t t4 = 0;
static int16_t x321 = INT16_MIN;
volatile uint64_t x322 = 84633785LLU;
volatile int64_t x325 = INT64_MIN;
volatile int16_t x327 = 0;
static int32_t x328 = INT32_MAX;
volatile int32_t t6 = 373028;
int64_t x665 = INT64_MIN;
static uint8_t x771 = 1U;
int32_t x804 = -238093;
volatile int32_t t13 = 1;
uint8_t x841 = UINT8_MAX;
int32_t t15 = 344;
uint16_t x933 = 0U;
int32_t t17 = 175;
volatile int64_t x990 = 237561LL;
int32_t t20 = 241395575;
static uint64_t x1110 = UINT64_MAX;
uint64_t x1166 = UINT64_MAX;
int8_t x1215 = 0;
int32_t t26 = 1;
int32_t t28 = 60493978;
int8_t x1377 = -58;
int16_t x1378 = 183;
static int32_t x1429 = INT32_MIN;
static int64_t x1559 = 1LL;
volatile int32_t t33 = -6;
static uint32_t x1587 = 15U;
volatile int32_t t35 = 171;
uint32_t x1641 = 257700U;
uint16_t x1642 = 395U;
uint8_t x1712 = 37U;
static uint8_t x1789 = UINT8_MAX;
uint8_t x1948 = 19U;
static uint8_t x2015 = 10U;
volatile int32_t t41 = 61637492;
volatile int8_t x2076 = -6;
uint8_t x2106 = UINT8_MAX;
int16_t x2113 = INT16_MIN;
uint32_t x2114 = 53094620U;
static int32_t t44 = -37240;
volatile int32_t t46 = 293954;
int16_t x2422 = 1;
int8_t x2423 = 2;
static int32_t t50 = -9263949;
int32_t x2534 = 48502452;
int32_t t51 = -210217466;
volatile uint8_t x2608 = 18U;
volatile int64_t x2669 = 503LL;
volatile int32_t t53 = 103978917;
int32_t t54 = 2;
uint8_t x2711 = 0U;
uint8_t x2727 = 1U;
int64_t x2789 = INT64_MIN;
int64_t x2848 = INT64_MIN;
uint16_t x2952 = UINT16_MAX;
int64_t x2997 = INT64_MAX;
uint8_t x3039 = 10U;
int8_t x3083 = 28;
static int64_t x3169 = INT64_MIN;
volatile int8_t x3170 = 43;
static int8_t x3253 = INT8_MAX;
uint8_t x3254 = UINT8_MAX;
volatile int8_t x3315 = 0;
int32_t t74 = -257195;
static volatile uint8_t x3422 = UINT8_MAX;
uint64_t x3424 = 1677222696LLU;
static volatile uint8_t x3445 = 13U;
uint8_t x3446 = UINT8_MAX;
volatile uint64_t x3449 = UINT64_MAX;
volatile int64_t x3585 = -1LL;
uint32_t x3649 = 384428U;
volatile int32_t t81 = 6057;
int64_t x3692 = 584611167LL;
volatile int32_t x3716 = -1;
int16_t x3741 = INT16_MIN;
static volatile uint8_t x3743 = 1U;
static int16_t x3775 = 1;
volatile int16_t x3812 = INT16_MIN;
static volatile int32_t t90 = 1;
int8_t x3861 = INT8_MIN;
volatile uint8_t x4082 = 47U;
uint16_t x4084 = 0U;
uint8_t x4127 = 22U;
int64_t x4133 = INT64_MIN;
int32_t t96 = -7391;
volatile uint8_t x4266 = UINT8_MAX;
int32_t x4268 = INT32_MIN;
uint32_t x4270 = 9385716U;
volatile uint16_t x4358 = 5700U;
uint8_t x4359 = 17U;
int16_t x4620 = INT16_MIN;
int8_t x4737 = INT8_MAX;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	volatile int8_t x3 = 1;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -7133;

    t0 = ((x1&(x2<<x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x21 = -1;
	int64_t x22 = INT64_MAX;
	volatile int8_t x23 = 0;

    t1 = ((x21&(x22<<x23))!=x24);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x133 = 12;
	volatile int16_t x134 = 2;
	int8_t x135 = 6;

    t2 = ((x133&(x134<<x135))!=x136);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile int8_t x139 = 3;
	volatile uint8_t x140 = UINT8_MAX;
	volatile int32_t t3 = 4186785;

    t3 = ((x137&(x138<<x139))!=x140);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x258 = 3073U;
	uint16_t x259 = 2U;
	int64_t x260 = -1LL;

    t4 = ((x257&(x258<<x259))!=x260);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x323 = 34U;
	static int32_t x324 = 42;
	volatile int32_t t5 = -4577145;

    t5 = ((x321&(x322<<x323))!=x324);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x326 = 10U;

    t6 = ((x325&(x326<<x327))!=x328);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x553 = -9418;
	uint32_t x554 = UINT32_MAX;
	static uint16_t x555 = 7U;
	int32_t x556 = -1;
	int32_t t7 = -5490;

    t7 = ((x553&(x554<<x555))!=x556);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x666 = INT8_MAX;
	uint8_t x667 = 0U;
	int8_t x668 = -3;
	volatile int32_t t8 = 90059864;

    t8 = ((x665&(x666<<x667))!=x668);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x677 = INT8_MIN;
	uint8_t x678 = 42U;
	volatile uint16_t x679 = 21U;
	int8_t x680 = -1;
	volatile int32_t t9 = -13022;

    t9 = ((x677&(x678<<x679))!=x680);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x749 = 2719U;
	uint64_t x750 = 1791045842828284609LLU;
	int8_t x751 = 27;
	int16_t x752 = INT16_MAX;
	int32_t t10 = 663667618;

    t10 = ((x749&(x750<<x751))!=x752);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x753 = 13857063;
	uint32_t x754 = 2770067U;
	int32_t x755 = 26;
	int32_t x756 = 5498913;
	static int32_t t11 = -4209316;

    t11 = ((x753&(x754<<x755))!=x756);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x769 = UINT16_MAX;
	static volatile uint8_t x770 = 13U;
	int16_t x772 = INT16_MAX;
	int32_t t12 = -958;

    t12 = ((x769&(x770<<x771))!=x772);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x801 = INT32_MAX;
	uint8_t x802 = UINT8_MAX;
	static uint8_t x803 = 9U;

    t13 = ((x801&(x802<<x803))!=x804);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x842 = INT8_MAX;
	uint16_t x843 = 1U;
	uint64_t x844 = 32253654054LLU;
	volatile int32_t t14 = 304302;

    t14 = ((x841&(x842<<x843))!=x844);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x929 = INT16_MIN;
	int16_t x930 = 1;
	volatile int8_t x931 = 1;
	static int8_t x932 = INT8_MAX;

    t15 = ((x929&(x930<<x931))!=x932);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x934 = 1632541LLU;
	volatile int8_t x935 = 9;
	int8_t x936 = INT8_MIN;
	int32_t t16 = -217;

    t16 = ((x933&(x934<<x935))!=x936);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x961 = INT8_MIN;
	static uint32_t x962 = 44151U;
	uint8_t x963 = 5U;
	static int64_t x964 = INT64_MIN;

    t17 = ((x961&(x962<<x963))!=x964);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x965 = 29846336LL;
	static uint32_t x966 = UINT32_MAX;
	uint16_t x967 = 12U;
	volatile int32_t x968 = INT32_MAX;
	int32_t t18 = -1;

    t18 = ((x965&(x966<<x967))!=x968);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x969 = INT16_MIN;
	volatile uint16_t x970 = UINT16_MAX;
	uint8_t x971 = 1U;
	volatile uint8_t x972 = UINT8_MAX;
	static volatile int32_t t19 = -1;

    t19 = ((x969&(x970<<x971))!=x972);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x989 = 21316U;
	uint16_t x991 = 44U;
	int32_t x992 = 30394139;

    t20 = ((x989&(x990<<x991))!=x992);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x1001 = 1;
	volatile uint32_t x1002 = 1179U;
	uint8_t x1003 = 1U;
	static int64_t x1004 = INT64_MIN;
	int32_t t21 = 1325;

    t21 = ((x1001&(x1002<<x1003))!=x1004);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x1109 = INT32_MIN;
	static uint16_t x1111 = 29U;
	uint64_t x1112 = UINT64_MAX;
	int32_t t22 = -141013249;

    t22 = ((x1109&(x1110<<x1111))!=x1112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1113 = INT8_MIN;
	static uint64_t x1114 = 2819962723516194040LLU;
	int16_t x1115 = 0;
	static uint16_t x1116 = UINT16_MAX;
	volatile int32_t t23 = 5;

    t23 = ((x1113&(x1114<<x1115))!=x1116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x1117 = 68U;
	volatile int32_t x1118 = 2494;
	int16_t x1119 = 7;
	static int64_t x1120 = 32758405LL;
	volatile int32_t t24 = 378;

    t24 = ((x1117&(x1118<<x1119))!=x1120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1165 = -1095360194755365750LL;
	uint8_t x1167 = 2U;
	uint16_t x1168 = 16844U;
	volatile int32_t t25 = 2;

    t25 = ((x1165&(x1166<<x1167))!=x1168);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1213 = 12;
	volatile int8_t x1214 = 37;
	static uint8_t x1216 = UINT8_MAX;

    t26 = ((x1213&(x1214<<x1215))!=x1216);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1301 = -1;
	uint16_t x1302 = 5U;
	uint8_t x1303 = 23U;
	int32_t x1304 = -973885;
	volatile int32_t t27 = -506477;

    t27 = ((x1301&(x1302<<x1303))!=x1304);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x1365 = -1LL;
	int32_t x1366 = 21278;
	volatile uint8_t x1367 = 0U;
	uint8_t x1368 = UINT8_MAX;

    t28 = ((x1365&(x1366<<x1367))!=x1368);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1369 = INT8_MIN;
	uint32_t x1370 = 3149071U;
	volatile uint32_t x1371 = 0U;
	static volatile int64_t x1372 = INT64_MIN;
	volatile int32_t t29 = 459267;

    t29 = ((x1369&(x1370<<x1371))!=x1372);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1379 = 0;
	static int32_t x1380 = 129;
	volatile int32_t t30 = -63559775;

    t30 = ((x1377&(x1378<<x1379))!=x1380);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1430 = UINT16_MAX;
	volatile uint8_t x1431 = 1U;
	volatile int8_t x1432 = 0;
	volatile int32_t t31 = 3;

    t31 = ((x1429&(x1430<<x1431))!=x1432);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x1449 = -1;
	volatile uint32_t x1450 = UINT32_MAX;
	static int32_t x1451 = 1;
	volatile uint16_t x1452 = 872U;
	static volatile int32_t t32 = 1177605;

    t32 = ((x1449&(x1450<<x1451))!=x1452);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x1557 = 20U;
	uint64_t x1558 = UINT64_MAX;
	int32_t x1560 = -754;

    t33 = ((x1557&(x1558<<x1559))!=x1560);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x1577 = -1;
	uint8_t x1578 = 29U;
	volatile uint8_t x1579 = 17U;
	int64_t x1580 = INT64_MAX;
	volatile int32_t t34 = -56012;

    t34 = ((x1577&(x1578<<x1579))!=x1580);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1585 = -1;
	volatile int32_t x1586 = 251;
	int32_t x1588 = -1;

    t35 = ((x1585&(x1586<<x1587))!=x1588);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x1643 = 5U;
	uint32_t x1644 = UINT32_MAX;
	volatile int32_t t36 = -4;

    t36 = ((x1641&(x1642<<x1643))!=x1644);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x1645 = -1;
	uint16_t x1646 = 13U;
	uint8_t x1647 = 2U;
	int8_t x1648 = INT8_MIN;
	static int32_t t37 = 11;

    t37 = ((x1645&(x1646<<x1647))!=x1648);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1709 = -1;
	int64_t x1710 = 75LL;
	volatile uint32_t x1711 = 1U;
	int32_t t38 = -66371;

    t38 = ((x1709&(x1710<<x1711))!=x1712);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1790 = 409344U;
	uint32_t x1791 = 15U;
	int64_t x1792 = -382740723LL;
	int32_t t39 = 1015;

    t39 = ((x1789&(x1790<<x1791))!=x1792);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x1945 = 51;
	int64_t x1946 = 259LL;
	volatile uint8_t x1947 = 42U;
	int32_t t40 = 7346;

    t40 = ((x1945&(x1946<<x1947))!=x1948);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2013 = INT64_MAX;
	static volatile int8_t x2014 = 1;
	int64_t x2016 = INT64_MIN;

    t41 = ((x2013&(x2014<<x2015))!=x2016);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2073 = -1;
	uint64_t x2074 = UINT64_MAX;
	uint16_t x2075 = 49U;
	volatile int32_t t42 = -382151667;

    t42 = ((x2073&(x2074<<x2075))!=x2076);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2105 = UINT32_MAX;
	uint64_t x2107 = 1LLU;
	volatile int16_t x2108 = -3;
	volatile int32_t t43 = -1410055;

    t43 = ((x2105&(x2106<<x2107))!=x2108);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2115 = 0U;
	int8_t x2116 = INT8_MIN;

    t44 = ((x2113&(x2114<<x2115))!=x2116);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2137 = 9284U;
	static uint32_t x2138 = 285U;
	int16_t x2139 = 16;
	volatile int8_t x2140 = INT8_MIN;
	int32_t t45 = -108351314;

    t45 = ((x2137&(x2138<<x2139))!=x2140);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2281 = 5;
	uint32_t x2282 = 520079739U;
	uint8_t x2283 = 25U;
	static volatile uint32_t x2284 = 151151U;

    t46 = ((x2281&(x2282<<x2283))!=x2284);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x2421 = INT64_MIN;
	static int64_t x2424 = INT64_MIN;
	int32_t t47 = 456;

    t47 = ((x2421&(x2422<<x2423))!=x2424);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x2433 = 8281;
	static uint8_t x2434 = 24U;
	uint8_t x2435 = 1U;
	int8_t x2436 = INT8_MIN;
	int32_t t48 = 509;

    t48 = ((x2433&(x2434<<x2435))!=x2436);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x2445 = 1473LLU;
	static uint8_t x2446 = UINT8_MAX;
	uint8_t x2447 = 3U;
	uint16_t x2448 = 0U;
	static volatile int32_t t49 = 62;

    t49 = ((x2445&(x2446<<x2447))!=x2448);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x2457 = 1;
	int16_t x2458 = 1;
	uint8_t x2459 = 0U;
	int16_t x2460 = -1;

    t50 = ((x2457&(x2458<<x2459))!=x2460);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2533 = INT16_MAX;
	volatile int8_t x2535 = 0;
	static uint8_t x2536 = 9U;

    t51 = ((x2533&(x2534<<x2535))!=x2536);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2605 = -1;
	volatile uint64_t x2606 = UINT64_MAX;
	uint8_t x2607 = 12U;
	volatile int32_t t52 = -319;

    t52 = ((x2605&(x2606<<x2607))!=x2608);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x2670 = UINT32_MAX;
	int16_t x2671 = 7;
	int16_t x2672 = INT16_MAX;

    t53 = ((x2669&(x2670<<x2671))!=x2672);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x2673 = -1;
	static uint32_t x2674 = 1U;
	int8_t x2675 = 0;
	static uint32_t x2676 = 564U;

    t54 = ((x2673&(x2674<<x2675))!=x2676);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2709 = -1;
	volatile uint32_t x2710 = 13214847U;
	static uint16_t x2712 = 72U;
	volatile int32_t t55 = -1;

    t55 = ((x2709&(x2710<<x2711))!=x2712);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x2717 = INT8_MAX;
	static uint16_t x2718 = 0U;
	int16_t x2719 = 1;
	uint16_t x2720 = 1564U;
	int32_t t56 = -13;

    t56 = ((x2717&(x2718<<x2719))!=x2720);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2725 = INT8_MAX;
	int8_t x2726 = 5;
	int32_t x2728 = -15594;
	static int32_t t57 = 306;

    t57 = ((x2725&(x2726<<x2727))!=x2728);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x2733 = 135;
	uint32_t x2734 = 6U;
	int8_t x2735 = 9;
	int32_t x2736 = -173;
	int32_t t58 = 439159904;

    t58 = ((x2733&(x2734<<x2735))!=x2736);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x2790 = INT16_MAX;
	static uint8_t x2791 = 7U;
	int8_t x2792 = -3;
	volatile int32_t t59 = -6968366;

    t59 = ((x2789&(x2790<<x2791))!=x2792);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x2845 = 14U;
	uint8_t x2846 = 126U;
	uint8_t x2847 = 3U;
	int32_t t60 = 178;

    t60 = ((x2845&(x2846<<x2847))!=x2848);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x2889 = -1LL;
	static int8_t x2890 = INT8_MAX;
	uint64_t x2891 = 14LLU;
	int16_t x2892 = 19;
	volatile int32_t t61 = -119503432;

    t61 = ((x2889&(x2890<<x2891))!=x2892);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x2933 = 48705842210LLU;
	uint8_t x2934 = 6U;
	uint8_t x2935 = 4U;
	volatile int32_t x2936 = 50;
	volatile int32_t t62 = 1;

    t62 = ((x2933&(x2934<<x2935))!=x2936);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2949 = -3;
	uint8_t x2950 = 7U;
	volatile uint8_t x2951 = 1U;
	int32_t t63 = 652217;

    t63 = ((x2949&(x2950<<x2951))!=x2952);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2961 = 0U;
	int8_t x2962 = INT8_MAX;
	uint16_t x2963 = 18U;
	int64_t x2964 = INT64_MIN;
	volatile int32_t t64 = -16832;

    t64 = ((x2961&(x2962<<x2963))!=x2964);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x2998 = 12093437U;
	uint16_t x2999 = 6U;
	int8_t x3000 = INT8_MIN;
	int32_t t65 = 293560;

    t65 = ((x2997&(x2998<<x2999))!=x3000);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3033 = -1;
	volatile int8_t x3034 = 21;
	static int16_t x3035 = 14;
	uint8_t x3036 = 11U;
	static int32_t t66 = 882;

    t66 = ((x3033&(x3034<<x3035))!=x3036);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3037 = 3;
	int8_t x3038 = 52;
	uint64_t x3040 = 241924345153LLU;
	static volatile int32_t t67 = -268618;

    t67 = ((x3037&(x3038<<x3039))!=x3040);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x3081 = INT64_MIN;
	uint64_t x3082 = 931078123LLU;
	static int32_t x3084 = -7593484;
	int32_t t68 = -6211;

    t68 = ((x3081&(x3082<<x3083))!=x3084);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x3171 = 23U;
	int16_t x3172 = 1;
	int32_t t69 = -53;

    t69 = ((x3169&(x3170<<x3171))!=x3172);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x3255 = 20U;
	volatile int8_t x3256 = 1;
	int32_t t70 = 9245;

    t70 = ((x3253&(x3254<<x3255))!=x3256);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x3297 = INT8_MIN;
	int8_t x3298 = INT8_MAX;
	uint16_t x3299 = 14U;
	int64_t x3300 = -86520869072907LL;
	volatile int32_t t71 = 30816238;

    t71 = ((x3297&(x3298<<x3299))!=x3300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x3301 = -1;
	uint32_t x3302 = 9U;
	volatile uint16_t x3303 = 4U;
	volatile uint16_t x3304 = 1132U;
	int32_t t72 = 4804733;

    t72 = ((x3301&(x3302<<x3303))!=x3304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x3313 = INT16_MIN;
	uint32_t x3314 = UINT32_MAX;
	int64_t x3316 = INT64_MIN;
	int32_t t73 = -95;

    t73 = ((x3313&(x3314<<x3315))!=x3316);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3385 = INT32_MIN;
	int8_t x3386 = 1;
	uint32_t x3387 = 10U;
	uint32_t x3388 = UINT32_MAX;

    t74 = ((x3385&(x3386<<x3387))!=x3388);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x3421 = UINT16_MAX;
	volatile uint16_t x3423 = 12U;
	volatile int32_t t75 = -2133;

    t75 = ((x3421&(x3422<<x3423))!=x3424);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x3447 = 1U;
	static int32_t x3448 = INT32_MAX;
	int32_t t76 = -1510389;

    t76 = ((x3445&(x3446<<x3447))!=x3448);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x3450 = 35568356852394968LL;
	uint8_t x3451 = 6U;
	int64_t x3452 = 1420245111LL;
	volatile int32_t t77 = -90;

    t77 = ((x3449&(x3450<<x3451))!=x3452);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x3481 = 23392U;
	volatile uint64_t x3482 = 387100445681593115LLU;
	volatile uint16_t x3483 = 9U;
	int8_t x3484 = INT8_MAX;
	volatile int32_t t78 = -1;

    t78 = ((x3481&(x3482<<x3483))!=x3484);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x3586 = 143;
	uint8_t x3587 = 15U;
	int64_t x3588 = -1LL;
	int32_t t79 = 481634236;

    t79 = ((x3585&(x3586<<x3587))!=x3588);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x3613 = INT32_MIN;
	uint64_t x3614 = UINT64_MAX;
	static int32_t x3615 = 0;
	uint16_t x3616 = 2U;
	static volatile int32_t t80 = 1741;

    t80 = ((x3613&(x3614<<x3615))!=x3616);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x3650 = INT16_MAX;
	static volatile uint16_t x3651 = 6U;
	int8_t x3652 = -1;

    t81 = ((x3649&(x3650<<x3651))!=x3652);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x3669 = UINT8_MAX;
	int32_t x3670 = 2291;
	uint8_t x3671 = 15U;
	static volatile int32_t x3672 = INT32_MAX;
	static int32_t t82 = 428060695;

    t82 = ((x3669&(x3670<<x3671))!=x3672);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x3685 = 10U;
	volatile int64_t x3686 = 128959LL;
	uint32_t x3687 = 3U;
	int64_t x3688 = -1LL;
	volatile int32_t t83 = 991;

    t83 = ((x3685&(x3686<<x3687))!=x3688);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x3689 = INT16_MIN;
	static int8_t x3690 = 3;
	int8_t x3691 = 1;
	volatile int32_t t84 = -76897094;

    t84 = ((x3689&(x3690<<x3691))!=x3692);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x3713 = UINT8_MAX;
	uint32_t x3714 = 21U;
	uint8_t x3715 = 31U;
	volatile int32_t t85 = 7029;

    t85 = ((x3713&(x3714<<x3715))!=x3716);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x3742 = 3864110587LLU;
	uint8_t x3744 = 1U;
	int32_t t86 = -153428;

    t86 = ((x3741&(x3742<<x3743))!=x3744);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x3769 = UINT32_MAX;
	volatile uint64_t x3770 = UINT64_MAX;
	volatile uint8_t x3771 = 12U;
	int32_t x3772 = 401;
	int32_t t87 = 444303;

    t87 = ((x3769&(x3770<<x3771))!=x3772);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x3773 = 181546739321161LL;
	uint64_t x3774 = 3LLU;
	int16_t x3776 = INT16_MIN;
	int32_t t88 = 422;

    t88 = ((x3773&(x3774<<x3775))!=x3776);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x3805 = 7928U;
	volatile uint8_t x3806 = 39U;
	volatile uint32_t x3807 = 2U;
	uint64_t x3808 = UINT64_MAX;
	int32_t t89 = -26879844;

    t89 = ((x3805&(x3806<<x3807))!=x3808);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x3809 = INT16_MIN;
	static int8_t x3810 = 0;
	uint8_t x3811 = 5U;

    t90 = ((x3809&(x3810<<x3811))!=x3812);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x3862 = 1U;
	int8_t x3863 = 16;
	uint8_t x3864 = 17U;
	volatile int32_t t91 = 0;

    t91 = ((x3861&(x3862<<x3863))!=x3864);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x4069 = INT16_MIN;
	uint16_t x4070 = 0U;
	uint8_t x4071 = 1U;
	uint32_t x4072 = 1U;
	static volatile int32_t t92 = 1;

    t92 = ((x4069&(x4070<<x4071))!=x4072);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4081 = UINT8_MAX;
	uint8_t x4083 = 22U;
	volatile int32_t t93 = -664732;

    t93 = ((x4081&(x4082<<x4083))!=x4084);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x4125 = -230210058129LL;
	static uint16_t x4126 = 22U;
	uint64_t x4128 = 7383387738836338LLU;
	int32_t t94 = -3388;

    t94 = ((x4125&(x4126<<x4127))!=x4128);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x4134 = 33929782031LLU;
	volatile uint8_t x4135 = 2U;
	int8_t x4136 = INT8_MIN;
	int32_t t95 = -1;

    t95 = ((x4133&(x4134<<x4135))!=x4136);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x4137 = -1LL;
	static uint64_t x4138 = 172522602206LLU;
	uint16_t x4139 = 3U;
	int8_t x4140 = 0;

    t96 = ((x4137&(x4138<<x4139))!=x4140);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x4229 = INT16_MIN;
	uint16_t x4230 = UINT16_MAX;
	volatile uint8_t x4231 = 15U;
	int64_t x4232 = INT64_MIN;
	volatile int32_t t97 = -79;

    t97 = ((x4229&(x4230<<x4231))!=x4232);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x4265 = -298LL;
	static int16_t x4267 = 7;
	int32_t t98 = 597097031;

    t98 = ((x4265&(x4266<<x4267))!=x4268);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x4269 = 1;
	uint8_t x4271 = 4U;
	int8_t x4272 = INT8_MIN;
	volatile int32_t t99 = -158115;

    t99 = ((x4269&(x4270<<x4271))!=x4272);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x4357 = INT64_MAX;
	static int32_t x4360 = INT32_MIN;
	int32_t t100 = -368817945;

    t100 = ((x4357&(x4358<<x4359))!=x4360);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x4589 = INT64_MAX;
	int8_t x4590 = 0;
	static volatile uint8_t x4591 = 2U;
	volatile uint16_t x4592 = 166U;
	int32_t t101 = 940;

    t101 = ((x4589&(x4590<<x4591))!=x4592);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x4617 = 14LLU;
	uint16_t x4618 = 1U;
	static uint8_t x4619 = 12U;
	volatile int32_t t102 = 5641058;

    t102 = ((x4617&(x4618<<x4619))!=x4620);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x4693 = 151LL;
	int8_t x4694 = 1;
	static int8_t x4695 = 10;
	uint32_t x4696 = UINT32_MAX;
	int32_t t103 = -56;

    t103 = ((x4693&(x4694<<x4695))!=x4696);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x4738 = 1265;
	static int8_t x4739 = 3;
	uint8_t x4740 = 14U;
	static volatile int32_t t104 = -28855676;

    t104 = ((x4737&(x4738<<x4739))!=x4740);

    if (t104 != 1) { NG(); } else { ; }
	
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


    return 0;
}

