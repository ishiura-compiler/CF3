
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

volatile uint8_t x1 = 28U;
int8_t x61 = INT8_MIN;
int16_t x77 = INT16_MAX;
int16_t x78 = 374;
volatile uint64_t x125 = 3747825443546LLU;
uint32_t x128 = 212574U;
uint16_t x202 = 570U;
int8_t x224 = INT8_MIN;
static uint16_t x281 = 11196U;
int32_t x282 = INT32_MAX;
volatile int64_t x469 = INT64_MIN;
int32_t t8 = 7;
volatile uint8_t x590 = 35U;
volatile int32_t t12 = -6;
volatile int8_t x639 = 25;
int32_t t13 = -944001279;
static int16_t x677 = 885;
volatile int16_t x749 = -1;
uint8_t x819 = 1U;
uint8_t x874 = UINT8_MAX;
volatile int32_t t20 = 64050161;
uint8_t x900 = 13U;
int32_t t24 = 7;
int64_t x1284 = -1LL;
uint64_t x1340 = UINT64_MAX;
int32_t x1428 = -1;
int32_t x1493 = INT32_MIN;
static uint32_t x1653 = UINT32_MAX;
int64_t x1670 = 245LL;
uint64_t x1751 = 4LLU;
int32_t t36 = -47100523;
int32_t x1817 = -20;
volatile uint64_t x1820 = 2210635181LLU;
uint8_t x2019 = 14U;
int32_t x2100 = INT32_MIN;
int8_t x2119 = 1;
int16_t x2144 = -1;
int32_t x2249 = 169642038;
volatile int32_t x2352 = 295965501;
static uint32_t x2394 = 58U;
uint16_t x2430 = 3U;
static int32_t t52 = 80983;
volatile int8_t x2473 = 3;
int64_t x2481 = INT64_MIN;
int64_t x2506 = INT64_MAX;
volatile int32_t t55 = 149187505;
uint16_t x2517 = UINT16_MAX;
volatile uint64_t x2518 = 17723358595647LLU;
volatile uint8_t x2697 = UINT8_MAX;
static uint16_t x3245 = 87U;
int16_t x3246 = 175;
static uint8_t x3247 = 17U;
volatile int32_t t69 = 110780;
int32_t t70 = -3227;
int32_t x3456 = INT32_MIN;
static int8_t x3513 = 49;
uint8_t x3694 = 22U;
uint8_t x3731 = 21U;
int32_t t78 = 78;
volatile uint64_t x3849 = 2680665LLU;
uint8_t x3850 = 1U;
volatile int32_t x3933 = -1;
static uint64_t x3934 = 69549169653822923LLU;
volatile int32_t t84 = -63781409;
int8_t x4103 = 2;
volatile int32_t t86 = 1011;
int8_t x4147 = 3;
static int16_t x4233 = INT16_MIN;
uint8_t x4359 = 2U;
int32_t t90 = 6571654;
static int32_t x4390 = 197767567;
uint16_t x4403 = 0U;
int64_t x4433 = INT64_MIN;
volatile int8_t x4434 = INT8_MAX;
uint8_t x4457 = 8U;
static volatile int32_t t97 = -457;
uint8_t x4633 = 39U;
uint16_t x4647 = 1U;


void f0(void) {
    	int16_t x2 = 189;
	volatile int32_t x3 = 15;
	volatile int16_t x4 = -12;
	volatile int32_t t0 = 2947019;

    t0 = ((x1==(x2>>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x62 = UINT64_MAX;
	uint8_t x63 = 7U;
	static int64_t x64 = INT64_MIN;
	int32_t t1 = 10;

    t1 = ((x61==(x62>>x63))==x64);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x79 = 0;
	volatile int64_t x80 = 16500LL;
	volatile int32_t t2 = -1;

    t2 = ((x77==(x78>>x79))==x80);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x126 = 3807;
	uint8_t x127 = 0U;
	volatile int32_t t3 = -318615932;

    t3 = ((x125==(x126>>x127))==x128);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x201 = UINT8_MAX;
	uint8_t x203 = 5U;
	int16_t x204 = -312;
	volatile int32_t t4 = 571;

    t4 = ((x201==(x202>>x203))==x204);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x221 = INT32_MAX;
	volatile int64_t x222 = INT64_MAX;
	uint32_t x223 = 25U;
	volatile int32_t t5 = 22341;

    t5 = ((x221==(x222>>x223))==x224);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x237 = INT16_MIN;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 1U;
	int32_t x240 = INT32_MIN;
	int32_t t6 = 11424653;

    t6 = ((x237==(x238>>x239))==x240);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x283 = 0;
	uint32_t x284 = 51615724U;
	volatile int32_t t7 = 1934;

    t7 = ((x281==(x282>>x283))==x284);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x470 = 1;
	static uint32_t x471 = 1U;
	int64_t x472 = INT64_MIN;

    t8 = ((x469==(x470>>x471))==x472);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x565 = -27;
	int16_t x566 = 0;
	int8_t x567 = 1;
	static volatile uint8_t x568 = 46U;
	volatile int32_t t9 = 7;

    t9 = ((x565==(x566>>x567))==x568);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x573 = INT32_MIN;
	uint64_t x574 = 1534027121LLU;
	volatile int16_t x575 = 5;
	int32_t x576 = 20;
	volatile int32_t t10 = 0;

    t10 = ((x573==(x574>>x575))==x576);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x589 = INT32_MIN;
	volatile uint16_t x591 = 1U;
	int16_t x592 = -1;
	int32_t t11 = 241;

    t11 = ((x589==(x590>>x591))==x592);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x625 = 15;
	int16_t x626 = INT16_MAX;
	int32_t x627 = 0;
	uint16_t x628 = UINT16_MAX;

    t12 = ((x625==(x626>>x627))==x628);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x637 = 1320186912895853LL;
	uint64_t x638 = 107708768LLU;
	uint16_t x640 = 21251U;

    t13 = ((x637==(x638>>x639))==x640);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x678 = 8433947930075825032LLU;
	uint8_t x679 = 21U;
	int32_t x680 = -22555907;
	int32_t t14 = -106;

    t14 = ((x677==(x678>>x679))==x680);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x725 = 353351307287775LLU;
	volatile uint16_t x726 = 6246U;
	uint8_t x727 = 0U;
	volatile uint32_t x728 = 4U;
	int32_t t15 = -11896;

    t15 = ((x725==(x726>>x727))==x728);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x750 = INT32_MAX;
	volatile uint8_t x751 = 6U;
	int8_t x752 = -6;
	int32_t t16 = -468104;

    t16 = ((x749==(x750>>x751))==x752);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x817 = INT64_MAX;
	uint8_t x818 = 55U;
	static int16_t x820 = INT16_MIN;
	int32_t t17 = -34298;

    t17 = ((x817==(x818>>x819))==x820);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x845 = -94013;
	static uint16_t x846 = 1U;
	int16_t x847 = 2;
	int32_t x848 = 0;
	volatile int32_t t18 = 466710903;

    t18 = ((x845==(x846>>x847))==x848);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x873 = INT8_MIN;
	uint8_t x875 = 6U;
	int16_t x876 = INT16_MAX;
	static int32_t t19 = 136509;

    t19 = ((x873==(x874>>x875))==x876);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x881 = -1;
	volatile uint16_t x882 = UINT16_MAX;
	int16_t x883 = 6;
	int16_t x884 = INT16_MAX;

    t20 = ((x881==(x882>>x883))==x884);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x897 = UINT8_MAX;
	uint64_t x898 = UINT64_MAX;
	uint16_t x899 = 3U;
	volatile int32_t t21 = 972;

    t21 = ((x897==(x898>>x899))==x900);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x973 = 87;
	int32_t x974 = 16690;
	uint32_t x975 = 27U;
	int8_t x976 = -4;
	int32_t t22 = 1;

    t22 = ((x973==(x974>>x975))==x976);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x981 = 33428005101653843LLU;
	static uint64_t x982 = 294032884838651154LLU;
	uint8_t x983 = 22U;
	static volatile int64_t x984 = -1LL;
	int32_t t23 = -1;

    t23 = ((x981==(x982>>x983))==x984);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x1221 = INT8_MIN;
	int8_t x1222 = INT8_MAX;
	volatile int64_t x1223 = 4LL;
	int64_t x1224 = INT64_MIN;

    t24 = ((x1221==(x1222>>x1223))==x1224);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1281 = 2U;
	volatile int64_t x1282 = INT64_MAX;
	static int8_t x1283 = 19;
	volatile int32_t t25 = 13;

    t25 = ((x1281==(x1282>>x1283))==x1284);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1337 = -2168;
	int64_t x1338 = 4LL;
	uint16_t x1339 = 0U;
	int32_t t26 = -11;

    t26 = ((x1337==(x1338>>x1339))==x1340);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1425 = INT32_MIN;
	uint8_t x1426 = 3U;
	int8_t x1427 = 29;
	static int32_t t27 = -10347;

    t27 = ((x1425==(x1426>>x1427))==x1428);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x1477 = INT8_MIN;
	uint64_t x1478 = 783479909133LLU;
	static uint32_t x1479 = 23U;
	int64_t x1480 = INT64_MAX;
	static int32_t t28 = -10977;

    t28 = ((x1477==(x1478>>x1479))==x1480);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1494 = 183;
	uint8_t x1495 = 1U;
	int64_t x1496 = 3519958443208LL;
	int32_t t29 = -45;

    t29 = ((x1493==(x1494>>x1495))==x1496);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1517 = 15U;
	uint64_t x1518 = UINT64_MAX;
	static int8_t x1519 = 1;
	static volatile int32_t x1520 = INT32_MAX;
	int32_t t30 = -232175035;

    t30 = ((x1517==(x1518>>x1519))==x1520);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x1629 = UINT8_MAX;
	int16_t x1630 = 1;
	int8_t x1631 = 4;
	int16_t x1632 = -1;
	static int32_t t31 = 2212;

    t31 = ((x1629==(x1630>>x1631))==x1632);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x1654 = UINT16_MAX;
	uint8_t x1655 = 1U;
	volatile int64_t x1656 = INT64_MAX;
	int32_t t32 = 1;

    t32 = ((x1653==(x1654>>x1655))==x1656);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x1669 = INT8_MIN;
	uint8_t x1671 = 4U;
	int16_t x1672 = -465;
	volatile int32_t t33 = 47;

    t33 = ((x1669==(x1670>>x1671))==x1672);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x1725 = 1U;
	uint8_t x1726 = 1U;
	int8_t x1727 = 1;
	uint64_t x1728 = UINT64_MAX;
	static int32_t t34 = 2;

    t34 = ((x1725==(x1726>>x1727))==x1728);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1749 = -1;
	int64_t x1750 = 6LL;
	int32_t x1752 = -1;
	static int32_t t35 = -1;

    t35 = ((x1749==(x1750>>x1751))==x1752);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1773 = -1LL;
	int64_t x1774 = 7325LL;
	static volatile int8_t x1775 = 0;
	int16_t x1776 = INT16_MIN;

    t36 = ((x1773==(x1774>>x1775))==x1776);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x1793 = 19523LLU;
	int64_t x1794 = INT64_MAX;
	static uint8_t x1795 = 0U;
	int16_t x1796 = 90;
	static int32_t t37 = -109;

    t37 = ((x1793==(x1794>>x1795))==x1796);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x1818 = 0U;
	uint16_t x1819 = 4U;
	int32_t t38 = -25;

    t38 = ((x1817==(x1818>>x1819))==x1820);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x1873 = UINT8_MAX;
	volatile int32_t x1874 = 13;
	static uint8_t x1875 = 0U;
	static int64_t x1876 = -1LL;
	int32_t t39 = -383;

    t39 = ((x1873==(x1874>>x1875))==x1876);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x2009 = 130U;
	int32_t x2010 = 20076569;
	int16_t x2011 = 29;
	int8_t x2012 = INT8_MAX;
	volatile int32_t t40 = 784;

    t40 = ((x2009==(x2010>>x2011))==x2012);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x2017 = 730U;
	uint16_t x2018 = 0U;
	static uint32_t x2020 = 3012862U;
	int32_t t41 = -98640;

    t41 = ((x2017==(x2018>>x2019))==x2020);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x2097 = INT8_MAX;
	int8_t x2098 = INT8_MAX;
	static uint8_t x2099 = 6U;
	volatile int32_t t42 = -4217;

    t42 = ((x2097==(x2098>>x2099))==x2100);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2117 = UINT64_MAX;
	static uint32_t x2118 = 1159191U;
	uint16_t x2120 = UINT16_MAX;
	static int32_t t43 = 996391852;

    t43 = ((x2117==(x2118>>x2119))==x2120);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2141 = INT16_MAX;
	int16_t x2142 = INT16_MAX;
	uint32_t x2143 = 0U;
	volatile int32_t t44 = -926733840;

    t44 = ((x2141==(x2142>>x2143))==x2144);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2233 = -853511739370665383LL;
	static uint8_t x2234 = UINT8_MAX;
	int8_t x2235 = 10;
	uint64_t x2236 = 20852835LLU;
	volatile int32_t t45 = -19;

    t45 = ((x2233==(x2234>>x2235))==x2236);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2250 = 40U;
	int8_t x2251 = 24;
	volatile uint32_t x2252 = 358080U;
	int32_t t46 = 14;

    t46 = ((x2249==(x2250>>x2251))==x2252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2349 = INT32_MAX;
	volatile int64_t x2350 = 1407994253667625829LL;
	static uint16_t x2351 = 5U;
	int32_t t47 = 28524680;

    t47 = ((x2349==(x2350>>x2351))==x2352);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x2373 = -20;
	uint8_t x2374 = UINT8_MAX;
	uint16_t x2375 = 7U;
	static int16_t x2376 = 591;
	static volatile int32_t t48 = 30026685;

    t48 = ((x2373==(x2374>>x2375))==x2376);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x2393 = -15560;
	int8_t x2395 = 0;
	volatile uint32_t x2396 = 21843407U;
	volatile int32_t t49 = -17499336;

    t49 = ((x2393==(x2394>>x2395))==x2396);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2397 = 1355;
	int8_t x2398 = INT8_MAX;
	volatile uint8_t x2399 = 0U;
	uint16_t x2400 = 15534U;
	static int32_t t50 = -52;

    t50 = ((x2397==(x2398>>x2399))==x2400);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x2405 = UINT16_MAX;
	int32_t x2406 = 397;
	uint8_t x2407 = 3U;
	int64_t x2408 = -273LL;
	int32_t t51 = -149;

    t51 = ((x2405==(x2406>>x2407))==x2408);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2429 = UINT8_MAX;
	uint8_t x2431 = 0U;
	int16_t x2432 = -1;

    t52 = ((x2429==(x2430>>x2431))==x2432);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2474 = 1;
	int8_t x2475 = 12;
	uint8_t x2476 = UINT8_MAX;
	volatile int32_t t53 = -114;

    t53 = ((x2473==(x2474>>x2475))==x2476);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x2482 = 3;
	volatile uint32_t x2483 = 18U;
	volatile uint64_t x2484 = 26LLU;
	static int32_t t54 = 3467;

    t54 = ((x2481==(x2482>>x2483))==x2484);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2505 = -1;
	int8_t x2507 = 0;
	static int16_t x2508 = INT16_MIN;

    t55 = ((x2505==(x2506>>x2507))==x2508);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x2519 = 0U;
	static int64_t x2520 = -1LL;
	volatile int32_t t56 = -5261;

    t56 = ((x2517==(x2518>>x2519))==x2520);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x2581 = 2U;
	uint16_t x2582 = 1U;
	static uint16_t x2583 = 2U;
	int32_t x2584 = -1;
	int32_t t57 = -871;

    t57 = ((x2581==(x2582>>x2583))==x2584);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x2649 = INT64_MIN;
	static int64_t x2650 = 98704502094549LL;
	static uint32_t x2651 = 28U;
	int64_t x2652 = -1LL;
	volatile int32_t t58 = 176248064;

    t58 = ((x2649==(x2650>>x2651))==x2652);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x2698 = 1484132U;
	int8_t x2699 = 16;
	uint32_t x2700 = UINT32_MAX;
	volatile int32_t t59 = 244;

    t59 = ((x2697==(x2698>>x2699))==x2700);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x2761 = 399766361189LLU;
	int8_t x2762 = INT8_MAX;
	volatile int8_t x2763 = 10;
	volatile int64_t x2764 = 33568151303759113LL;
	volatile int32_t t60 = 59061;

    t60 = ((x2761==(x2762>>x2763))==x2764);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x2921 = INT32_MIN;
	uint8_t x2922 = 10U;
	uint8_t x2923 = 26U;
	uint64_t x2924 = 747156424LLU;
	int32_t t61 = -1406;

    t61 = ((x2921==(x2922>>x2923))==x2924);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x2945 = 23861U;
	int8_t x2946 = INT8_MAX;
	uint8_t x2947 = 0U;
	static volatile uint32_t x2948 = 574938021U;
	volatile int32_t t62 = -7316;

    t62 = ((x2945==(x2946>>x2947))==x2948);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x2977 = INT8_MIN;
	static uint16_t x2978 = 4148U;
	uint8_t x2979 = 11U;
	int64_t x2980 = -1LL;
	volatile int32_t t63 = -2289;

    t63 = ((x2977==(x2978>>x2979))==x2980);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x3025 = -1;
	uint32_t x3026 = 8865U;
	int64_t x3027 = 2LL;
	int16_t x3028 = -95;
	int32_t t64 = 12;

    t64 = ((x3025==(x3026>>x3027))==x3028);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x3093 = 4;
	int8_t x3094 = INT8_MAX;
	static uint8_t x3095 = 24U;
	int8_t x3096 = -1;
	volatile int32_t t65 = 251237255;

    t65 = ((x3093==(x3094>>x3095))==x3096);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x3248 = 24499U;
	int32_t t66 = 7245;

    t66 = ((x3245==(x3246>>x3247))==x3248);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3273 = INT8_MIN;
	static int8_t x3274 = INT8_MAX;
	int8_t x3275 = 7;
	int64_t x3276 = -1LL;
	volatile int32_t t67 = 29496897;

    t67 = ((x3273==(x3274>>x3275))==x3276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x3313 = 26;
	uint8_t x3314 = 15U;
	volatile int16_t x3315 = 15;
	int64_t x3316 = 238856121LL;
	int32_t t68 = 6;

    t68 = ((x3313==(x3314>>x3315))==x3316);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x3337 = INT64_MIN;
	int8_t x3338 = 1;
	volatile int8_t x3339 = 10;
	int8_t x3340 = -1;

    t69 = ((x3337==(x3338>>x3339))==x3340);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x3385 = INT8_MIN;
	static volatile uint32_t x3386 = UINT32_MAX;
	volatile uint8_t x3387 = 10U;
	static int16_t x3388 = INT16_MAX;

    t70 = ((x3385==(x3386>>x3387))==x3388);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3453 = 202;
	int64_t x3454 = INT64_MAX;
	uint16_t x3455 = 0U;
	int32_t t71 = -5;

    t71 = ((x3453==(x3454>>x3455))==x3456);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x3509 = 12252398U;
	static volatile uint64_t x3510 = UINT64_MAX;
	int32_t x3511 = 13;
	uint8_t x3512 = 40U;
	int32_t t72 = 25;

    t72 = ((x3509==(x3510>>x3511))==x3512);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x3514 = UINT8_MAX;
	uint16_t x3515 = 15U;
	uint16_t x3516 = 7532U;
	volatile int32_t t73 = -7188735;

    t73 = ((x3513==(x3514>>x3515))==x3516);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x3533 = 84372825433639LL;
	static uint64_t x3534 = 55262LLU;
	volatile int64_t x3535 = 43LL;
	volatile uint16_t x3536 = 0U;
	static volatile int32_t t74 = 56;

    t74 = ((x3533==(x3534>>x3535))==x3536);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x3693 = INT8_MIN;
	volatile uint16_t x3695 = 0U;
	int64_t x3696 = INT64_MIN;
	int32_t t75 = 0;

    t75 = ((x3693==(x3694>>x3695))==x3696);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x3717 = INT32_MIN;
	int16_t x3718 = 1571;
	uint32_t x3719 = 1U;
	volatile int32_t x3720 = INT32_MIN;
	volatile int32_t t76 = 2494609;

    t76 = ((x3717==(x3718>>x3719))==x3720);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x3729 = -1;
	uint64_t x3730 = 2239681700913687LLU;
	int32_t x3732 = INT32_MAX;
	static volatile int32_t t77 = 115034056;

    t77 = ((x3729==(x3730>>x3731))==x3732);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3733 = 3893U;
	static int16_t x3734 = INT16_MAX;
	uint16_t x3735 = 3U;
	int32_t x3736 = 0;

    t78 = ((x3733==(x3734>>x3735))==x3736);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x3851 = 26U;
	int16_t x3852 = INT16_MIN;
	int32_t t79 = 0;

    t79 = ((x3849==(x3850>>x3851))==x3852);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x3935 = 30U;
	int8_t x3936 = INT8_MAX;
	static int32_t t80 = 58;

    t80 = ((x3933==(x3934>>x3935))==x3936);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x3941 = -3738715LL;
	uint64_t x3942 = 90120198081LLU;
	uint8_t x3943 = 0U;
	volatile uint32_t x3944 = UINT32_MAX;
	int32_t t81 = -637255421;

    t81 = ((x3941==(x3942>>x3943))==x3944);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x3985 = INT64_MAX;
	uint32_t x3986 = 284U;
	volatile uint8_t x3987 = 0U;
	int16_t x3988 = INT16_MAX;
	int32_t t82 = -9182;

    t82 = ((x3985==(x3986>>x3987))==x3988);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x3989 = 252056U;
	uint64_t x3990 = 101348LLU;
	volatile uint8_t x3991 = 0U;
	uint64_t x3992 = 3LLU;
	volatile int32_t t83 = -1462;

    t83 = ((x3989==(x3990>>x3991))==x3992);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x4049 = -1LL;
	uint64_t x4050 = 6953413056877555396LLU;
	static volatile int8_t x4051 = 1;
	int8_t x4052 = INT8_MIN;

    t84 = ((x4049==(x4050>>x4051))==x4052);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4101 = INT8_MIN;
	volatile uint32_t x4102 = 433U;
	static int16_t x4104 = INT16_MIN;
	volatile int32_t t85 = 408237;

    t85 = ((x4101==(x4102>>x4103))==x4104);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x4105 = -4118427;
	uint64_t x4106 = 1487087313349811LLU;
	uint8_t x4107 = 1U;
	int8_t x4108 = INT8_MIN;

    t86 = ((x4105==(x4106>>x4107))==x4108);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4121 = INT32_MAX;
	int16_t x4122 = INT16_MAX;
	int8_t x4123 = 1;
	static int16_t x4124 = INT16_MIN;
	static int32_t t87 = 67352151;

    t87 = ((x4121==(x4122>>x4123))==x4124);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x4145 = 585227LL;
	int32_t x4146 = 2170;
	int16_t x4148 = INT16_MIN;
	int32_t t88 = 1012;

    t88 = ((x4145==(x4146>>x4147))==x4148);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4234 = INT16_MAX;
	uint16_t x4235 = 17U;
	static volatile uint16_t x4236 = UINT16_MAX;
	volatile int32_t t89 = 108;

    t89 = ((x4233==(x4234>>x4235))==x4236);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x4357 = INT32_MAX;
	uint64_t x4358 = 19LLU;
	static int64_t x4360 = -1246LL;

    t90 = ((x4357==(x4358>>x4359))==x4360);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x4389 = 9569U;
	uint16_t x4391 = 0U;
	uint32_t x4392 = 1516333U;
	static int32_t t91 = 7075;

    t91 = ((x4389==(x4390>>x4391))==x4392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4401 = 5LLU;
	static int8_t x4402 = INT8_MAX;
	static uint16_t x4404 = 166U;
	static int32_t t92 = -1002;

    t92 = ((x4401==(x4402>>x4403))==x4404);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x4435 = 3;
	int8_t x4436 = INT8_MIN;
	static volatile int32_t t93 = 196636;

    t93 = ((x4433==(x4434>>x4435))==x4436);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x4458 = 106122490877271147LLU;
	static uint8_t x4459 = 7U;
	int16_t x4460 = INT16_MIN;
	volatile int32_t t94 = 413;

    t94 = ((x4457==(x4458>>x4459))==x4460);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x4481 = -1;
	static int32_t x4482 = INT32_MAX;
	volatile int8_t x4483 = 1;
	int16_t x4484 = -1;
	volatile int32_t t95 = 129320093;

    t95 = ((x4481==(x4482>>x4483))==x4484);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4529 = 52U;
	int32_t x4530 = INT32_MAX;
	static uint8_t x4531 = 25U;
	uint8_t x4532 = 19U;
	static volatile int32_t t96 = 314;

    t96 = ((x4529==(x4530>>x4531))==x4532);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x4565 = 545549090953938879LLU;
	uint8_t x4566 = 0U;
	uint16_t x4567 = 7U;
	volatile int8_t x4568 = 4;

    t97 = ((x4565==(x4566>>x4567))==x4568);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x4634 = 57041U;
	uint8_t x4635 = 5U;
	int32_t x4636 = 1;
	int32_t t98 = 1740366;

    t98 = ((x4633==(x4634>>x4635))==x4636);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x4645 = UINT8_MAX;
	static uint32_t x4646 = 1963133U;
	int64_t x4648 = INT64_MAX;
	static int32_t t99 = -65073311;

    t99 = ((x4645==(x4646>>x4647))==x4648);

    if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

