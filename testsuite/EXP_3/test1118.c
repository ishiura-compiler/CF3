#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -1;
volatile int8_t x25 = INT8_MIN;
volatile int32_t x81 = INT32_MAX;
uint8_t x262 = 40U;
uint16_t x263 = 0U;
uint32_t x359 = 13046U;
uint8_t x360 = 7U;
int64_t x369 = INT64_MAX;
static uint64_t x371 = UINT64_MAX;
volatile int8_t x477 = -1;
static int16_t x479 = 627;
volatile uint16_t x480 = 11U;
int32_t t8 = -227;
uint64_t x526 = 11414437798317LLU;
int32_t x557 = -1;
volatile int16_t x558 = -1;
volatile uint32_t x559 = 76U;
int16_t x606 = -4675;
int32_t x658 = -1;
volatile int16_t x709 = -70;
volatile int32_t t16 = -1856;
int8_t x804 = 0;
int64_t x906 = INT64_MIN;
static volatile int32_t t22 = -118116;
int16_t x976 = 30;
volatile int32_t t24 = 0;
uint16_t x1068 = 5U;
volatile int8_t x1329 = INT8_MIN;
static int8_t x1567 = INT8_MAX;
int32_t x1638 = 9468182;
int8_t x1668 = 1;
uint64_t x1704 = 7LLU;
uint8_t x1740 = 1U;
volatile int32_t x1741 = INT32_MIN;
volatile uint64_t x1744 = 19LLU;
static volatile uint64_t x1763 = UINT64_MAX;
uint32_t x1774 = 422145U;
uint16_t x1775 = 17U;
uint8_t x1776 = 3U;
static int32_t t38 = 92;
static uint32_t t40 = 1U;
int8_t x2005 = 7;
uint8_t x2007 = 1U;
static uint32_t x2053 = 3692077U;
int8_t x2054 = 0;
uint16_t x2056 = 3U;
static uint8_t x2120 = 10U;
uint16_t x2218 = UINT16_MAX;
volatile int8_t x2220 = 5;
volatile int16_t x2262 = INT16_MAX;
static volatile int64_t x2271 = INT64_MAX;
uint8_t x2302 = 118U;
int8_t x2303 = INT8_MAX;
volatile int32_t t48 = -1;
static int32_t t50 = -6;
uint32_t x2397 = 335193U;
uint64_t t51 = 3729LLU;
uint64_t x2551 = UINT64_MAX;
uint64_t t54 = UINT64_MAX;
int64_t x2658 = INT64_MIN;
static volatile int8_t x2666 = -5;
uint16_t x2667 = UINT16_MAX;
uint32_t x2846 = 178U;
static uint32_t t57 = 1U;
int16_t x2857 = 0;
int32_t x2878 = 85798;
volatile uint64_t x2883 = 131LLU;
volatile int32_t t62 = 9150;
uint16_t x2999 = 45U;
uint8_t x3017 = 22U;
int16_t x3020 = 1;
volatile uint8_t x3070 = 60U;
volatile int32_t t67 = 6784871;
volatile int32_t x3105 = -1;
static volatile uint32_t t69 = 427U;
volatile int32_t t71 = 7;
uint16_t x3159 = UINT16_MAX;
volatile uint32_t t75 = 303U;
uint8_t x3474 = UINT8_MAX;
uint8_t x3476 = 3U;
int16_t x3605 = INT16_MAX;
uint32_t x3607 = UINT32_MAX;
int32_t t83 = 734227905;
uint64_t t84 = 470886LLU;
int8_t x4080 = 4;
static int64_t t88 = 13173151729253LL;
uint8_t x4285 = 6U;
int64_t x4393 = INT64_MIN;
volatile uint32_t t90 = 1U;
volatile int32_t t91 = 234;
volatile uint32_t x4467 = 773U;
int32_t x4493 = INT32_MIN;
int8_t x4614 = INT8_MIN;
volatile int8_t x4750 = 5;
volatile uint32_t x4751 = 507684000U;
int8_t x4777 = INT8_MIN;
static uint8_t x4786 = UINT8_MAX;


void f0(void) {
	int64_t x9 = INT64_MAX;
	int32_t x11 = INT32_MAX;
	volatile int8_t x12 = 10;
	int32_t t0 = 0;

	t0 = ((x9==x10)^(x11>>x12));

	if (t0 != 2097151) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 2LLU;
	uint64_t t1 = 4178612512074590853LLU;

	t1 = ((x25==x26)^(x27>>x28));

	if (t1 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x82 = UINT32_MAX;
	int16_t x83 = 0;
	volatile int64_t x84 = 1LL;
	int32_t t2 = -4073;

	t2 = ((x81==x82)^(x83>>x84));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = 12275171630041056LLU;
	uint16_t x144 = 10U;
	uint64_t t3 = 1LLU;

	t3 = ((x141==x142)^(x143>>x144));

	if (t3 != 11987472294961LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x189 = -7364;
	volatile int64_t x190 = INT64_MAX;
	int64_t x191 = 2998521383188LL;
	uint8_t x192 = 22U;
	int64_t t4 = 4567LL;

	t4 = ((x189==x190)^(x191>>x192));

	if (t4 != 714903LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x261 = 378;
	uint16_t x264 = 0U;
	int32_t t5 = -417;

	t5 = ((x261==x262)^(x263>>x264));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x357 = -1;
	volatile int8_t x358 = 38;
	uint32_t t6 = 34U;

	t6 = ((x357==x358)^(x359>>x360));

	if (t6 != 101U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x370 = INT16_MAX;
	static uint8_t x372 = 19U;
	uint64_t t7 = 359608606541733LLU;

	t7 = ((x369==x370)^(x371>>x372));

	if (t7 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x478 = 548004786U;

	t8 = ((x477==x478)^(x479>>x480));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x505 = 37609U;
	volatile uint64_t x506 = 27345157606517089LLU;
	int32_t x507 = 1;
	int32_t x508 = 1;
	static int32_t t9 = -705023;

	t9 = ((x505==x506)^(x507>>x508));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x525 = 119U;
	uint32_t x527 = 52143784U;
	int8_t x528 = 0;
	volatile uint32_t t10 = 41894945U;

	t10 = ((x525==x526)^(x527>>x528));

	if (t10 != 52143784U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x560 = 0U;
	static volatile uint32_t t11 = 3341U;

	t11 = ((x557==x558)^(x559>>x560));

	if (t11 != 77U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x593 = INT64_MIN;
	int64_t x594 = INT64_MIN;
	static uint16_t x595 = UINT16_MAX;
	int8_t x596 = 1;
	static volatile int32_t t12 = -50689;

	t12 = ((x593==x594)^(x595>>x596));

	if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x605 = 2144988249446600LLU;
	int16_t x607 = INT16_MAX;
	uint8_t x608 = 1U;
	int32_t t13 = -15477946;

	t13 = ((x605==x606)^(x607>>x608));

	if (t13 != 16383) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x657 = 2409567891289LL;
	int32_t x659 = INT32_MAX;
	int8_t x660 = 0;
	volatile int32_t t14 = INT32_MAX;

	t14 = ((x657==x658)^(x659>>x660));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x693 = 2;
	volatile int64_t x694 = INT64_MIN;
	uint16_t x695 = UINT16_MAX;
	uint32_t x696 = 1U;
	volatile int32_t t15 = 7660;

	t15 = ((x693==x694)^(x695>>x696));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x710 = 1U;
	volatile int8_t x711 = INT8_MAX;
	static int8_t x712 = 1;

	t16 = ((x709==x710)^(x711>>x712));

	if (t16 != 63) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x765 = 7;
	volatile uint8_t x766 = 4U;
	int32_t x767 = INT32_MAX;
	uint8_t x768 = 15U;
	int32_t t17 = -1949;

	t17 = ((x765==x766)^(x767>>x768));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x801 = INT16_MAX;
	volatile uint64_t x802 = 20060445121LLU;
	int16_t x803 = INT16_MAX;
	volatile int32_t t18 = 88429221;

	t18 = ((x801==x802)^(x803>>x804));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x849 = 3U;
	int16_t x850 = 0;
	uint32_t x851 = 0U;
	int16_t x852 = 1;
	volatile uint32_t t19 = 1780985U;

	t19 = ((x849==x850)^(x851>>x852));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x893 = INT64_MIN;
	uint16_t x894 = UINT16_MAX;
	volatile int8_t x895 = 0;
	volatile uint8_t x896 = 10U;
	static volatile int32_t t20 = 89047;

	t20 = ((x893==x894)^(x895>>x896));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x905 = UINT32_MAX;
	uint8_t x907 = 2U;
	uint16_t x908 = 2U;
	static volatile int32_t t21 = -4;

	t21 = ((x905==x906)^(x907>>x908));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x937 = 0;
	volatile int32_t x938 = INT32_MIN;
	static uint16_t x939 = 4U;
	static int8_t x940 = 0;

	t22 = ((x937==x938)^(x939>>x940));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x969 = UINT64_MAX;
	static int32_t x970 = INT32_MAX;
	uint32_t x971 = UINT32_MAX;
	int16_t x972 = 13;
	volatile uint32_t t23 = 30516591U;

	t23 = ((x969==x970)^(x971>>x972));

	if (t23 != 524287U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x973 = 12U;
	uint32_t x974 = UINT32_MAX;
	volatile uint8_t x975 = UINT8_MAX;

	t24 = ((x973==x974)^(x975>>x976));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1065 = 6409938LL;
	static int8_t x1066 = INT8_MIN;
	uint8_t x1067 = UINT8_MAX;
	int32_t t25 = 18825777;

	t25 = ((x1065==x1066)^(x1067>>x1068));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1269 = -1;
	int16_t x1270 = 647;
	uint16_t x1271 = 0U;
	static uint8_t x1272 = 7U;
	static int32_t t26 = -4309;

	t26 = ((x1269==x1270)^(x1271>>x1272));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1277 = INT8_MAX;
	static uint64_t x1278 = 7128641184380833846LLU;
	int32_t x1279 = INT32_MAX;
	uint8_t x1280 = 0U;
	volatile int32_t t27 = INT32_MAX;

	t27 = ((x1277==x1278)^(x1279>>x1280));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1330 = 0U;
	volatile int8_t x1331 = 0;
	uint64_t x1332 = 1LLU;
	volatile int32_t t28 = -295856558;

	t28 = ((x1329==x1330)^(x1331>>x1332));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1385 = -1;
	static uint32_t x1386 = 121U;
	int64_t x1387 = INT64_MAX;
	uint8_t x1388 = 1U;
	volatile int64_t t29 = -738330LL;

	t29 = ((x1385==x1386)^(x1387>>x1388));

	if (t29 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1565 = 54239LLU;
	uint32_t x1566 = 1020282U;
	uint8_t x1568 = 1U;
	int32_t t30 = -223;

	t30 = ((x1565==x1566)^(x1567>>x1568));

	if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1637 = 11493U;
	volatile int32_t x1639 = INT32_MAX;
	uint16_t x1640 = 6U;
	volatile int32_t t31 = -1;

	t31 = ((x1637==x1638)^(x1639>>x1640));

	if (t31 != 33554431) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1665 = UINT8_MAX;
	int64_t x1666 = -1775196LL;
	int32_t x1667 = 1913;
	volatile int32_t t32 = 831391969;

	t32 = ((x1665==x1666)^(x1667>>x1668));

	if (t32 != 956) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1701 = INT8_MIN;
	int16_t x1702 = INT16_MIN;
	uint8_t x1703 = 1U;
	int32_t t33 = 7795;

	t33 = ((x1701==x1702)^(x1703>>x1704));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1737 = INT8_MIN;
	volatile int8_t x1738 = -3;
	int32_t x1739 = 1;
	int32_t t34 = -14;

	t34 = ((x1737==x1738)^(x1739>>x1740));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1742 = -1LL;
	static int64_t x1743 = 7679112062LL;
	int64_t t35 = 93856LL;

	t35 = ((x1741==x1742)^(x1743>>x1744));

	if (t35 != 14646LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1761 = 8LL;
	int16_t x1762 = 3971;
	uint16_t x1764 = 9U;
	uint64_t t36 = 151622893341LLU;

	t36 = ((x1761==x1762)^(x1763>>x1764));

	if (t36 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1773 = -1;
	static volatile int32_t t37 = 5;

	t37 = ((x1773==x1774)^(x1775>>x1776));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1785 = -1LL;
	uint64_t x1786 = 4119049316217132LLU;
	uint16_t x1787 = 23025U;
	static uint8_t x1788 = 4U;

	t38 = ((x1785==x1786)^(x1787>>x1788));

	if (t38 != 1439) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1917 = 0;
	int16_t x1918 = INT16_MIN;
	int64_t x1919 = 302LL;
	uint64_t x1920 = 7LLU;
	volatile int64_t t39 = -1016LL;

	t39 = ((x1917==x1918)^(x1919>>x1920));

	if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1989 = INT32_MIN;
	static int8_t x1990 = INT8_MIN;
	volatile uint32_t x1991 = 16094U;
	static uint8_t x1992 = 5U;

	t40 = ((x1989==x1990)^(x1991>>x1992));

	if (t40 != 502U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2006 = INT16_MIN;
	volatile uint32_t x2008 = 0U;
	static volatile int32_t t41 = 5382808;

	t41 = ((x2005==x2006)^(x2007>>x2008));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2055 = 3;
	int32_t t42 = -894;

	t42 = ((x2053==x2054)^(x2055>>x2056));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2117 = 116;
	int16_t x2118 = 885;
	uint8_t x2119 = 5U;
	volatile int32_t t43 = 3570793;

	t43 = ((x2117==x2118)^(x2119>>x2120));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2217 = INT32_MIN;
	uint32_t x2219 = UINT32_MAX;
	volatile uint32_t t44 = 1U;

	t44 = ((x2217==x2218)^(x2219>>x2220));

	if (t44 != 134217727U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2261 = 1;
	int32_t x2263 = 29730885;
	uint16_t x2264 = 0U;
	static int32_t t45 = -838812090;

	t45 = ((x2261==x2262)^(x2263>>x2264));

	if (t45 != 29730885) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2269 = INT32_MIN;
	int64_t x2270 = 5052LL;
	int32_t x2272 = 2;
	int64_t t46 = 29768232702LL;

	t46 = ((x2269==x2270)^(x2271>>x2272));

	if (t46 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2285 = -1;
	uint64_t x2286 = UINT64_MAX;
	volatile uint32_t x2287 = 21U;
	uint16_t x2288 = 25U;
	uint32_t t47 = 1878U;

	t47 = ((x2285==x2286)^(x2287>>x2288));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2301 = 4U;
	uint8_t x2304 = 0U;

	t48 = ((x2301==x2302)^(x2303>>x2304));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2341 = 111LL;
	volatile int8_t x2342 = 63;
	int8_t x2343 = INT8_MAX;
	volatile int16_t x2344 = 0;
	volatile int32_t t49 = 24234;

	t49 = ((x2341==x2342)^(x2343>>x2344));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2385 = -15063843751199806LL;
	int32_t x2386 = INT32_MAX;
	int16_t x2387 = 0;
	static volatile int16_t x2388 = 0;

	t50 = ((x2385==x2386)^(x2387>>x2388));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2398 = INT8_MIN;
	static uint64_t x2399 = UINT64_MAX;
	static int8_t x2400 = 14;

	t51 = ((x2397==x2398)^(x2399>>x2400));

	if (t51 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2433 = INT32_MIN;
	int64_t x2434 = INT64_MAX;
	uint64_t x2435 = UINT64_MAX;
	volatile uint64_t x2436 = 1LLU;
	uint64_t t52 = 317723122LLU;

	t52 = ((x2433==x2434)^(x2435>>x2436));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2497 = INT32_MAX;
	int8_t x2498 = INT8_MAX;
	uint8_t x2499 = 7U;
	static int64_t x2500 = 1LL;
	volatile int32_t t53 = -474;

	t53 = ((x2497==x2498)^(x2499>>x2500));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2549 = -1;
	uint8_t x2550 = 25U;
	int16_t x2552 = 0;

	t54 = ((x2549==x2550)^(x2551>>x2552));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2657 = 7687;
	uint64_t x2659 = 160567136LLU;
	int16_t x2660 = 9;
	static uint64_t t55 = 17434905283458835LLU;

	t55 = ((x2657==x2658)^(x2659>>x2660));

	if (t55 != 313607LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2665 = INT32_MIN;
	uint8_t x2668 = 8U;
	volatile int32_t t56 = 1;

	t56 = ((x2665==x2666)^(x2667>>x2668));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2845 = -3;
	uint32_t x2847 = UINT32_MAX;
	uint8_t x2848 = 3U;

	t57 = ((x2845==x2846)^(x2847>>x2848));

	if (t57 != 536870911U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x2858 = 1;
	uint16_t x2859 = 974U;
	static int8_t x2860 = 14;
	volatile int32_t t58 = 172;

	t58 = ((x2857==x2858)^(x2859>>x2860));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2877 = 0;
	volatile int32_t x2879 = INT32_MAX;
	uint16_t x2880 = 24U;
	int32_t t59 = 46211878;

	t59 = ((x2877==x2878)^(x2879>>x2880));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2881 = -1;
	int16_t x2882 = -1;
	uint8_t x2884 = 0U;
	uint64_t t60 = 1012183196186LLU;

	t60 = ((x2881==x2882)^(x2883>>x2884));

	if (t60 != 130LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2949 = 1U;
	static uint64_t x2950 = UINT64_MAX;
	static uint8_t x2951 = UINT8_MAX;
	uint8_t x2952 = 12U;
	static volatile int32_t t61 = 352;

	t61 = ((x2949==x2950)^(x2951>>x2952));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2969 = INT8_MAX;
	uint8_t x2970 = 12U;
	uint8_t x2971 = 46U;
	int16_t x2972 = 0;

	t62 = ((x2969==x2970)^(x2971>>x2972));

	if (t62 != 46) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2997 = INT8_MIN;
	int64_t x2998 = INT64_MIN;
	volatile int8_t x3000 = 2;
	int32_t t63 = 75;

	t63 = ((x2997==x2998)^(x2999>>x3000));

	if (t63 != 11) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3013 = -1LL;
	static int16_t x3014 = -22;
	uint8_t x3015 = UINT8_MAX;
	static int8_t x3016 = 0;
	volatile int32_t t64 = -3;

	t64 = ((x3013==x3014)^(x3015>>x3016));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3018 = UINT16_MAX;
	uint32_t x3019 = 7062614U;
	uint32_t t65 = 41U;

	t65 = ((x3017==x3018)^(x3019>>x3020));

	if (t65 != 3531307U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3033 = 951667;
	volatile int8_t x3034 = 3;
	int16_t x3035 = INT16_MAX;
	static int8_t x3036 = 0;
	static volatile int32_t t66 = -1;

	t66 = ((x3033==x3034)^(x3035>>x3036));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x3069 = -1LL;
	uint16_t x3071 = 424U;
	static uint64_t x3072 = 4LLU;

	t67 = ((x3069==x3070)^(x3071>>x3072));

	if (t67 != 26) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3106 = -188;
	uint32_t x3107 = UINT32_MAX;
	volatile int64_t x3108 = 1LL;
	static volatile uint32_t t68 = 8U;

	t68 = ((x3105==x3106)^(x3107>>x3108));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3109 = UINT16_MAX;
	uint32_t x3110 = UINT32_MAX;
	uint32_t x3111 = 19545U;
	int16_t x3112 = 2;

	t69 = ((x3109==x3110)^(x3111>>x3112));

	if (t69 != 4886U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3137 = 306325123LL;
	static uint16_t x3138 = UINT16_MAX;
	int8_t x3139 = 1;
	volatile int64_t x3140 = 21LL;
	volatile int32_t t70 = -130052664;

	t70 = ((x3137==x3138)^(x3139>>x3140));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3149 = 1807U;
	int8_t x3150 = -1;
	volatile uint8_t x3151 = 1U;
	uint8_t x3152 = 0U;

	t71 = ((x3149==x3150)^(x3151>>x3152));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3157 = 13070948U;
	static volatile int16_t x3158 = -1;
	int16_t x3160 = 0;
	volatile int32_t t72 = 93017;

	t72 = ((x3157==x3158)^(x3159>>x3160));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3229 = -232325;
	volatile uint8_t x3230 = 3U;
	static uint8_t x3231 = 59U;
	volatile uint8_t x3232 = 0U;
	static volatile int32_t t73 = 29936262;

	t73 = ((x3229==x3230)^(x3231>>x3232));

	if (t73 != 59) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3433 = 0;
	int16_t x3434 = -33;
	int32_t x3435 = INT32_MAX;
	int8_t x3436 = 4;
	int32_t t74 = -6308;

	t74 = ((x3433==x3434)^(x3435>>x3436));

	if (t74 != 134217727) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x3457 = -12003;
	int64_t x3458 = -1LL;
	uint32_t x3459 = 40U;
	uint16_t x3460 = 22U;

	t75 = ((x3457==x3458)^(x3459>>x3460));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3473 = UINT8_MAX;
	volatile uint64_t x3475 = 56512174222768LLU;
	static volatile uint64_t t76 = 261906774963284LLU;

	t76 = ((x3473==x3474)^(x3475>>x3476));

	if (t76 != 7064021777847LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3606 = -15985632019069456LL;
	static uint16_t x3608 = 3U;
	static volatile uint32_t t77 = 9U;

	t77 = ((x3605==x3606)^(x3607>>x3608));

	if (t77 != 536870911U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3737 = UINT64_MAX;
	static int64_t x3738 = INT64_MIN;
	int8_t x3739 = 6;
	int16_t x3740 = 1;
	int32_t t78 = -21308;

	t78 = ((x3737==x3738)^(x3739>>x3740));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3789 = UINT32_MAX;
	static int64_t x3790 = INT64_MIN;
	volatile uint32_t x3791 = 61304U;
	int8_t x3792 = 9;
	uint32_t t79 = 487U;

	t79 = ((x3789==x3790)^(x3791>>x3792));

	if (t79 != 119U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3801 = -1;
	uint32_t x3802 = 7274971U;
	static uint64_t x3803 = 86313838507952404LLU;
	int16_t x3804 = 1;
	uint64_t t80 = 2LLU;

	t80 = ((x3801==x3802)^(x3803>>x3804));

	if (t80 != 43156919253976202LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3877 = INT16_MIN;
	volatile int32_t x3878 = INT32_MIN;
	uint8_t x3879 = UINT8_MAX;
	volatile int8_t x3880 = 0;
	volatile int32_t t81 = -2359748;

	t81 = ((x3877==x3878)^(x3879>>x3880));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3885 = 335009452822770LLU;
	volatile int64_t x3886 = -55LL;
	uint8_t x3887 = 110U;
	int8_t x3888 = 11;
	static volatile int32_t t82 = -755294;

	t82 = ((x3885==x3886)^(x3887>>x3888));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3901 = INT16_MIN;
	uint16_t x3902 = 49U;
	int16_t x3903 = INT16_MAX;
	static uint8_t x3904 = 4U;

	t83 = ((x3901==x3902)^(x3903>>x3904));

	if (t83 != 2047) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4073 = 4;
	static int8_t x4074 = INT8_MIN;
	uint64_t x4075 = UINT64_MAX;
	volatile uint32_t x4076 = 6U;

	t84 = ((x4073==x4074)^(x4075>>x4076));

	if (t84 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x4077 = -1;
	uint16_t x4078 = 12U;
	uint8_t x4079 = UINT8_MAX;
	int32_t t85 = -20481;

	t85 = ((x4077==x4078)^(x4079>>x4080));

	if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4109 = INT64_MIN;
	uint8_t x4110 = 0U;
	int8_t x4111 = 0;
	uint8_t x4112 = 9U;
	static volatile int32_t t86 = 130377083;

	t86 = ((x4109==x4110)^(x4111>>x4112));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4137 = -587336965545LL;
	static int64_t x4138 = -1LL;
	uint32_t x4139 = 5910654U;
	volatile uint32_t x4140 = 2U;
	volatile uint32_t t87 = 93U;

	t87 = ((x4137==x4138)^(x4139>>x4140));

	if (t87 != 1477663U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4277 = 11529LLU;
	int8_t x4278 = -1;
	int64_t x4279 = INT64_MAX;
	uint16_t x4280 = 9U;

	t88 = ((x4277==x4278)^(x4279>>x4280));

	if (t88 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4286 = -1LL;
	uint64_t x4287 = 293LLU;
	uint8_t x4288 = 29U;
	uint64_t t89 = 31LLU;

	t89 = ((x4285==x4286)^(x4287>>x4288));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4394 = 2;
	uint32_t x4395 = 134832262U;
	uint8_t x4396 = 7U;

	t90 = ((x4393==x4394)^(x4395>>x4396));

	if (t90 != 1053377U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4437 = -14206;
	int64_t x4438 = 708LL;
	volatile int8_t x4439 = INT8_MAX;
	int8_t x4440 = 1;

	t91 = ((x4437==x4438)^(x4439>>x4440));

	if (t91 != 63) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x4465 = 10930486LLU;
	uint64_t x4466 = UINT64_MAX;
	int8_t x4468 = 1;
	volatile uint32_t t92 = 134375U;

	t92 = ((x4465==x4466)^(x4467>>x4468));

	if (t92 != 386U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4494 = -245838477683156595LL;
	uint8_t x4495 = 1U;
	uint8_t x4496 = 1U;
	int32_t t93 = -452556250;

	t93 = ((x4493==x4494)^(x4495>>x4496));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x4613 = 1U;
	int16_t x4615 = INT16_MAX;
	uint8_t x4616 = 11U;
	int32_t t94 = 9442068;

	t94 = ((x4613==x4614)^(x4615>>x4616));

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4661 = 1U;
	volatile int64_t x4662 = -286390761921LL;
	uint16_t x4663 = UINT16_MAX;
	static uint32_t x4664 = 1U;
	static int32_t t95 = 46706902;

	t95 = ((x4661==x4662)^(x4663>>x4664));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x4717 = 63U;
	uint64_t x4718 = UINT64_MAX;
	int64_t x4719 = INT64_MAX;
	uint16_t x4720 = 20U;
	int64_t t96 = -928LL;

	t96 = ((x4717==x4718)^(x4719>>x4720));

	if (t96 != 8796093022207LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4749 = 1508481LLU;
	uint8_t x4752 = 0U;
	static uint32_t t97 = 494U;

	t97 = ((x4749==x4750)^(x4751>>x4752));

	if (t97 != 507684000U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4778 = -880498LL;
	static int32_t x4779 = INT32_MAX;
	int8_t x4780 = 0;
	volatile int32_t t98 = INT32_MAX;

	t98 = ((x4777==x4778)^(x4779>>x4780));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4785 = INT64_MAX;
	uint32_t x4787 = UINT32_MAX;
	uint8_t x4788 = 13U;
	volatile uint32_t t99 = 4269U;

	t99 = ((x4785==x4786)^(x4787>>x4788));

	if (t99 != 524287U) { NG(); } else { ; }
	
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

