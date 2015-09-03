#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MAX;
int8_t x107 = 0;
static int64_t x108 = 370941LL;
int64_t t1 = 2726810442LL;
uint16_t x169 = 230U;
uint16_t x170 = 7U;
int16_t x214 = 12;
uint64_t x635 = UINT64_MAX;
volatile uint64_t x704 = 1038345864334LLU;
static int16_t x917 = 12321;
uint8_t x918 = 15U;
int64_t x920 = INT64_MIN;
uint8_t x967 = 50U;
static int16_t x1059 = -51;
uint64_t x1401 = UINT64_MAX;
uint32_t x1455 = 98651409U;
int32_t t16 = 136525;
int8_t x1647 = INT8_MIN;
int64_t x1713 = INT64_MAX;
static int8_t x1788 = 4;
volatile int32_t t22 = 57;
uint64_t x1855 = 1LLU;
uint32_t t24 = 179952031U;
uint32_t x2010 = 21U;
int32_t x2011 = INT32_MIN;
uint8_t x2181 = 12U;
volatile uint8_t x2282 = 7U;
volatile int32_t t31 = -994176417;
uint16_t x2309 = 3U;
int64_t x2311 = INT64_MAX;
volatile uint8_t x2312 = 2U;
int8_t x2335 = -1;
uint8_t x2350 = 0U;
volatile int32_t t34 = 6;
uint8_t x2537 = 18U;
uint32_t x2538 = 0U;
volatile int32_t t38 = 34950097;
uint64_t x2680 = 1385886184004366154LLU;
volatile uint64_t t39 = 7LLU;
uint8_t x2686 = 1U;
volatile int16_t x2797 = INT16_MAX;
int32_t t44 = -2140;
volatile int8_t x2814 = 23;
int32_t t47 = -1;
int32_t t48 = -952;
volatile uint64_t x3061 = 5238725790555LLU;
int32_t t50 = 917;
int64_t x3293 = INT64_MAX;
static uint64_t x3295 = UINT64_MAX;
uint64_t x3296 = 11599LLU;
static volatile uint32_t x3384 = UINT32_MAX;
volatile uint32_t t54 = UINT32_MAX;
uint8_t x3518 = 1U;
static int16_t x3520 = INT16_MAX;
uint16_t x3542 = 2U;
volatile int64_t x3547 = 7360007760683LL;
uint32_t x3601 = 25928U;
volatile int64_t x3604 = -1LL;
volatile int32_t t59 = 30027437;
static int32_t t60 = -1069;
volatile int32_t t63 = -833378;
uint8_t x3811 = UINT8_MAX;
int32_t x3812 = INT32_MIN;
volatile int8_t x3847 = -1;
int32_t t67 = 457087;
uint64_t x3999 = 1937863162964305682LLU;
uint32_t x4041 = 65525U;
uint16_t x4044 = 8U;
volatile int32_t t72 = -7;
int8_t x4105 = INT8_MAX;
int32_t t73 = -247416448;
int64_t x4354 = 8LL;
uint8_t x4546 = 1U;
int16_t x4548 = 4327;
volatile int16_t x4710 = 0;
static int32_t t79 = 871601212;
uint8_t x4729 = UINT8_MAX;
int16_t x4736 = 27;
volatile int64_t x4737 = 72461LL;
int16_t x4739 = 0;
volatile uint32_t t87 = 1332415643U;
uint8_t x4906 = 0U;
uint64_t x5075 = UINT64_MAX;
static uint64_t x5076 = 635766783947LLU;
uint8_t x5094 = 42U;
volatile uint32_t x5095 = UINT32_MAX;
uint32_t x5100 = 13766945U;
uint64_t x5229 = UINT64_MAX;
uint32_t x5230 = 1U;
static int8_t x5235 = INT8_MIN;
volatile uint64_t x5236 = UINT64_MAX;
int16_t x5317 = 188;
int32_t x5320 = 26;
static int64_t x5323 = INT64_MIN;
static int64_t x5429 = 12059LL;
int32_t x5431 = -1;


void f0(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = 1;
	volatile int64_t x39 = -1LL;
	int32_t x40 = INT32_MAX;

	t0 = (((x37>>x38)<=x39)^x40);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x105 = 13;
	static uint16_t x106 = 16U;

	t1 = (((x105>>x106)<=x107)^x108);

	if (t1 != 370940LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x165 = 238187U;
	uint64_t x166 = 24LLU;
	static int32_t x167 = INT32_MIN;
	int16_t x168 = -1;
	volatile int32_t t2 = 1821023;

	t2 = (((x165>>x166)<=x167)^x168);

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MAX;
	int32_t t3 = INT32_MAX;

	t3 = (((x169>>x170)<=x171)^x172);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x213 = 7U;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 47U;
	volatile int32_t t4 = -1;

	t4 = (((x213>>x214)<=x215)^x216);

	if (t4 != 47) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x337 = INT64_MAX;
	int64_t x338 = 2LL;
	volatile int8_t x339 = INT8_MIN;
	int8_t x340 = 19;
	volatile int32_t t5 = -1;

	t5 = (((x337>>x338)<=x339)^x340);

	if (t5 != 19) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x633 = INT16_MAX;
	uint16_t x634 = 9U;
	static uint64_t x636 = 79276120LLU;
	volatile uint64_t t6 = 277049LLU;

	t6 = (((x633>>x634)<=x635)^x636);

	if (t6 != 79276121LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x697 = 14U;
	int8_t x698 = 0;
	int64_t x699 = INT64_MAX;
	volatile int8_t x700 = 6;
	volatile int32_t t7 = 6193;

	t7 = (((x697>>x698)<=x699)^x700);

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x701 = INT64_MAX;
	volatile uint16_t x702 = 8U;
	int64_t x703 = -13LL;
	volatile uint64_t t8 = 19246737753858LLU;

	t8 = (((x701>>x702)<=x703)^x704);

	if (t8 != 1038345864334LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x919 = 0U;
	int64_t t9 = -48179111108731714LL;

	t9 = (((x917>>x918)<=x919)^x920);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x965 = 19261;
	static int16_t x966 = 23;
	volatile uint32_t x968 = UINT32_MAX;
	static volatile uint32_t t10 = 191040U;

	t10 = (((x965>>x966)<=x967)^x968);

	if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1057 = 4055899272LLU;
	static uint8_t x1058 = 32U;
	uint16_t x1060 = UINT16_MAX;
	static int32_t t11 = 107;

	t11 = (((x1057>>x1058)<=x1059)^x1060);

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1402 = 3U;
	uint16_t x1403 = 1U;
	uint32_t x1404 = UINT32_MAX;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (((x1401>>x1402)<=x1403)^x1404);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x1409 = INT8_MAX;
	volatile uint32_t x1410 = 4U;
	int16_t x1411 = 1;
	int32_t x1412 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (((x1409>>x1410)<=x1411)^x1412);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1453 = 2;
	volatile uint8_t x1454 = 1U;
	static int64_t x1456 = INT64_MAX;
	int64_t t14 = 1787114018838LL;

	t14 = (((x1453>>x1454)<=x1455)^x1456);

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1521 = 329105295LLU;
	volatile uint16_t x1522 = 1U;
	uint8_t x1523 = 29U;
	static volatile uint16_t x1524 = 3U;
	volatile int32_t t15 = 34485;

	t15 = (((x1521>>x1522)<=x1523)^x1524);

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x1565 = UINT8_MAX;
	volatile uint16_t x1566 = 17U;
	int32_t x1567 = -1;
	static volatile int32_t x1568 = -43608;

	t16 = (((x1565>>x1566)<=x1567)^x1568);

	if (t16 != -43608) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x1569 = UINT8_MAX;
	uint32_t x1570 = 0U;
	uint32_t x1571 = 60U;
	int8_t x1572 = INT8_MAX;
	static volatile int32_t t17 = -3477;

	t17 = (((x1569>>x1570)<=x1571)^x1572);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1573 = INT32_MAX;
	uint16_t x1574 = 5U;
	static uint64_t x1575 = UINT64_MAX;
	volatile int32_t x1576 = INT32_MAX;
	int32_t t18 = -6134206;

	t18 = (((x1573>>x1574)<=x1575)^x1576);

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1613 = UINT8_MAX;
	int8_t x1614 = 2;
	uint32_t x1615 = UINT32_MAX;
	uint16_t x1616 = 22U;
	volatile int32_t t19 = 1;

	t19 = (((x1613>>x1614)<=x1615)^x1616);

	if (t19 != 23) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1645 = 512;
	volatile int8_t x1646 = 4;
	int64_t x1648 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = (((x1645>>x1646)<=x1647)^x1648);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1714 = 3LLU;
	int16_t x1715 = -1;
	int32_t x1716 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = (((x1713>>x1714)<=x1715)^x1716);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1785 = UINT8_MAX;
	static int32_t x1786 = 3;
	int64_t x1787 = INT64_MAX;

	t22 = (((x1785>>x1786)<=x1787)^x1788);

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1813 = 917045529LLU;
	uint32_t x1814 = 2U;
	volatile int16_t x1815 = -1;
	volatile uint64_t x1816 = UINT64_MAX;
	volatile uint64_t t23 = 427729LLU;

	t23 = (((x1813>>x1814)<=x1815)^x1816);

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1853 = INT32_MAX;
	int8_t x1854 = 6;
	volatile uint32_t x1856 = 178519932U;

	t24 = (((x1853>>x1854)<=x1855)^x1856);

	if (t24 != 178519932U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2009 = 30U;
	uint16_t x2012 = 3830U;
	static volatile int32_t t25 = 0;

	t25 = (((x2009>>x2010)<=x2011)^x2012);

	if (t25 != 3830) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x2073 = UINT16_MAX;
	int16_t x2074 = 13;
	int16_t x2075 = INT16_MIN;
	volatile int32_t x2076 = 431547;
	volatile int32_t t26 = 9730;

	t26 = (((x2073>>x2074)<=x2075)^x2076);

	if (t26 != 431547) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x2182 = 2;
	int16_t x2183 = -1;
	int8_t x2184 = 1;
	static int32_t t27 = 310022;

	t27 = (((x2181>>x2182)<=x2183)^x2184);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2213 = INT32_MAX;
	int32_t x2214 = 27;
	int32_t x2215 = 6;
	int32_t x2216 = -2619;
	int32_t t28 = -13;

	t28 = (((x2213>>x2214)<=x2215)^x2216);

	if (t28 != -2619) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x2265 = UINT8_MAX;
	volatile uint8_t x2266 = 9U;
	volatile int32_t x2267 = INT32_MAX;
	int64_t x2268 = INT64_MAX;
	static volatile int64_t t29 = 57895410001791LL;

	t29 = (((x2265>>x2266)<=x2267)^x2268);

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2281 = 2885405176LLU;
	int16_t x2283 = INT16_MIN;
	uint32_t x2284 = 554311U;
	uint32_t t30 = 6725U;

	t30 = (((x2281>>x2282)<=x2283)^x2284);

	if (t30 != 554310U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2301 = 57U;
	volatile int8_t x2302 = 13;
	int32_t x2303 = INT32_MAX;
	uint16_t x2304 = UINT16_MAX;

	t31 = (((x2301>>x2302)<=x2303)^x2304);

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2310 = 3LLU;
	int32_t t32 = -25992450;

	t32 = (((x2309>>x2310)<=x2311)^x2312);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2333 = 0;
	uint8_t x2334 = 2U;
	int16_t x2336 = INT16_MIN;
	volatile int32_t t33 = -765;

	t33 = (((x2333>>x2334)<=x2335)^x2336);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2349 = INT32_MAX;
	int64_t x2351 = INT64_MIN;
	static int16_t x2352 = 11;

	t34 = (((x2349>>x2350)<=x2351)^x2352);

	if (t34 != 11) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2389 = 698U;
	static uint8_t x2390 = 8U;
	volatile uint16_t x2391 = 12244U;
	int32_t x2392 = INT32_MAX;
	int32_t t35 = 1;

	t35 = (((x2389>>x2390)<=x2391)^x2392);

	if (t35 != 2147483646) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2501 = 3075LLU;
	uint64_t x2502 = 0LLU;
	int8_t x2503 = -18;
	volatile uint64_t x2504 = 4227862LLU;
	uint64_t t36 = 902933564158LLU;

	t36 = (((x2501>>x2502)<=x2503)^x2504);

	if (t36 != 4227863LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2533 = 3U;
	uint16_t x2534 = 3U;
	int8_t x2535 = INT8_MIN;
	int64_t x2536 = INT64_MAX;
	volatile int64_t t37 = 59178335495364LL;

	t37 = (((x2533>>x2534)<=x2535)^x2536);

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2539 = INT32_MIN;
	uint8_t x2540 = 54U;

	t38 = (((x2537>>x2538)<=x2539)^x2540);

	if (t38 != 54) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2677 = INT8_MAX;
	uint8_t x2678 = 4U;
	volatile uint16_t x2679 = 0U;

	t39 = (((x2677>>x2678)<=x2679)^x2680);

	if (t39 != 1385886184004366154LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x2685 = 93U;
	int64_t x2687 = -1LL;
	int64_t x2688 = INT64_MIN;
	static volatile int64_t t40 = INT64_MIN;

	t40 = (((x2685>>x2686)<=x2687)^x2688);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2705 = 7;
	uint8_t x2706 = 0U;
	volatile int32_t x2707 = 3;
	int8_t x2708 = -1;
	int32_t t41 = -512100;

	t41 = (((x2705>>x2706)<=x2707)^x2708);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2741 = INT64_MAX;
	uint16_t x2742 = 52U;
	int8_t x2743 = -1;
	static volatile int32_t x2744 = INT32_MIN;
	volatile int32_t t42 = INT32_MIN;

	t42 = (((x2741>>x2742)<=x2743)^x2744);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2769 = UINT8_MAX;
	uint8_t x2770 = 5U;
	uint32_t x2771 = 247U;
	uint64_t x2772 = UINT64_MAX;
	volatile uint64_t t43 = 22103254592LLU;

	t43 = (((x2769>>x2770)<=x2771)^x2772);

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2798 = 16U;
	static uint16_t x2799 = 7233U;
	static volatile int8_t x2800 = 1;

	t44 = (((x2797>>x2798)<=x2799)^x2800);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2801 = UINT64_MAX;
	static int8_t x2802 = 54;
	static int64_t x2803 = INT64_MIN;
	static int16_t x2804 = 0;
	int32_t t45 = 7;

	t45 = (((x2801>>x2802)<=x2803)^x2804);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2813 = 5025806LLU;
	int32_t x2815 = -207860;
	volatile uint8_t x2816 = UINT8_MAX;
	int32_t t46 = -144930;

	t46 = (((x2813>>x2814)<=x2815)^x2816);

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2905 = 1U;
	uint64_t x2906 = 0LLU;
	static uint32_t x2907 = UINT32_MAX;
	uint8_t x2908 = 20U;

	t47 = (((x2905>>x2906)<=x2907)^x2908);

	if (t47 != 21) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2921 = 1U;
	static volatile uint8_t x2922 = 2U;
	static int16_t x2923 = -1;
	int32_t x2924 = 60;

	t48 = (((x2921>>x2922)<=x2923)^x2924);

	if (t48 != 60) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3062 = 12LLU;
	uint32_t x3063 = 31609U;
	int32_t x3064 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = (((x3061>>x3062)<=x3063)^x3064);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3289 = 8339U;
	uint8_t x3290 = 1U;
	int16_t x3291 = INT16_MIN;
	int16_t x3292 = 41;

	t50 = (((x3289>>x3290)<=x3291)^x3292);

	if (t50 != 40) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3294 = 6LL;
	uint64_t t51 = 45349LLU;

	t51 = (((x3293>>x3294)<=x3295)^x3296);

	if (t51 != 11598LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3337 = 18;
	uint8_t x3338 = 1U;
	static int32_t x3339 = -1213;
	int16_t x3340 = -3;
	volatile int32_t t52 = 93;

	t52 = (((x3337>>x3338)<=x3339)^x3340);

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3345 = 10U;
	volatile uint32_t x3346 = 2U;
	int64_t x3347 = 1157504989LL;
	volatile int32_t x3348 = INT32_MAX;
	int32_t t53 = 226;

	t53 = (((x3345>>x3346)<=x3347)^x3348);

	if (t53 != 2147483646) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3381 = 25562962LL;
	volatile uint8_t x3382 = 15U;
	static int64_t x3383 = -5825LL;

	t54 = (((x3381>>x3382)<=x3383)^x3384);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x3517 = 147035372U;
	int8_t x3519 = 1;
	static int32_t t55 = -512269879;

	t55 = (((x3517>>x3518)<=x3519)^x3520);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x3541 = 267999063LLU;
	volatile int16_t x3543 = INT16_MIN;
	static volatile uint64_t x3544 = 4905LLU;
	volatile uint64_t t56 = 438LLU;

	t56 = (((x3541>>x3542)<=x3543)^x3544);

	if (t56 != 4904LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3545 = 33;
	static uint8_t x3546 = 15U;
	static int16_t x3548 = INT16_MIN;
	volatile int32_t t57 = -21;

	t57 = (((x3545>>x3546)<=x3547)^x3548);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3602 = 1U;
	int16_t x3603 = 41;
	int64_t t58 = 34440505LL;

	t58 = (((x3601>>x3602)<=x3603)^x3604);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3621 = 14939964U;
	int8_t x3622 = 3;
	volatile int64_t x3623 = INT64_MAX;
	static int8_t x3624 = -1;

	t59 = (((x3621>>x3622)<=x3623)^x3624);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3649 = 2LLU;
	volatile int32_t x3650 = 2;
	int16_t x3651 = 9;
	uint16_t x3652 = 12307U;

	t60 = (((x3649>>x3650)<=x3651)^x3652);

	if (t60 != 12306) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3657 = UINT16_MAX;
	static uint8_t x3658 = 11U;
	static uint8_t x3659 = 3U;
	int32_t x3660 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = (((x3657>>x3658)<=x3659)^x3660);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3773 = 800U;
	uint16_t x3774 = 3U;
	volatile int16_t x3775 = INT16_MIN;
	int32_t x3776 = 7370;
	volatile int32_t t62 = 3765;

	t62 = (((x3773>>x3774)<=x3775)^x3776);

	if (t62 != 7370) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3797 = 218255LL;
	int16_t x3798 = 41;
	int16_t x3799 = INT16_MAX;
	static volatile int16_t x3800 = -5452;

	t63 = (((x3797>>x3798)<=x3799)^x3800);

	if (t63 != -5451) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3809 = INT32_MAX;
	int8_t x3810 = 19;
	int32_t t64 = INT32_MIN;

	t64 = (((x3809>>x3810)<=x3811)^x3812);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3845 = 4572757U;
	volatile uint8_t x3846 = 13U;
	int16_t x3848 = INT16_MIN;
	volatile int32_t t65 = 0;

	t65 = (((x3845>>x3846)<=x3847)^x3848);

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3881 = UINT8_MAX;
	volatile uint8_t x3882 = 3U;
	uint32_t x3883 = 736U;
	volatile int32_t x3884 = INT32_MAX;
	volatile int32_t t66 = 76;

	t66 = (((x3881>>x3882)<=x3883)^x3884);

	if (t66 != 2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3933 = INT8_MAX;
	uint8_t x3934 = 12U;
	uint8_t x3935 = 41U;
	int16_t x3936 = INT16_MAX;

	t67 = (((x3933>>x3934)<=x3935)^x3936);

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x3961 = UINT64_MAX;
	int16_t x3962 = 1;
	static int16_t x3963 = -1;
	static uint32_t x3964 = UINT32_MAX;
	volatile uint32_t t68 = 124864121U;

	t68 = (((x3961>>x3962)<=x3963)^x3964);

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3989 = INT16_MAX;
	static int8_t x3990 = 1;
	static volatile int16_t x3991 = -4;
	int16_t x3992 = 23;
	int32_t t69 = 375790;

	t69 = (((x3989>>x3990)<=x3991)^x3992);

	if (t69 != 23) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3997 = 811396319LL;
	int16_t x3998 = 5;
	int64_t x4000 = -1LL;
	static volatile int64_t t70 = 495101LL;

	t70 = (((x3997>>x3998)<=x3999)^x4000);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x4033 = 92025;
	uint8_t x4034 = 10U;
	volatile uint16_t x4035 = 27727U;
	uint32_t x4036 = 15379U;
	volatile uint32_t t71 = 298U;

	t71 = (((x4033>>x4034)<=x4035)^x4036);

	if (t71 != 15378U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4042 = 5U;
	volatile int16_t x4043 = INT16_MIN;

	t72 = (((x4041>>x4042)<=x4043)^x4044);

	if (t72 != 9) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4106 = 7U;
	volatile uint8_t x4107 = 3U;
	static int8_t x4108 = INT8_MIN;

	t73 = (((x4105>>x4106)<=x4107)^x4108);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4157 = UINT64_MAX;
	uint8_t x4158 = 1U;
	int64_t x4159 = -1LL;
	static uint16_t x4160 = 61U;
	volatile int32_t t74 = -230251;

	t74 = (((x4157>>x4158)<=x4159)^x4160);

	if (t74 != 60) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4309 = UINT64_MAX;
	uint16_t x4310 = 14U;
	static int8_t x4311 = -3;
	uint32_t x4312 = UINT32_MAX;
	volatile uint32_t t75 = 6U;

	t75 = (((x4309>>x4310)<=x4311)^x4312);

	if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4353 = 6631U;
	static int32_t x4355 = INT32_MIN;
	int64_t x4356 = 12133730LL;
	volatile int64_t t76 = -23LL;

	t76 = (((x4353>>x4354)<=x4355)^x4356);

	if (t76 != 12133730LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4545 = UINT64_MAX;
	uint32_t x4547 = UINT32_MAX;
	int32_t t77 = 0;

	t77 = (((x4545>>x4546)<=x4547)^x4548);

	if (t77 != 4327) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4601 = INT32_MAX;
	uint8_t x4602 = 0U;
	static int32_t x4603 = 326;
	static int32_t x4604 = INT32_MIN;
	int32_t t78 = INT32_MIN;

	t78 = (((x4601>>x4602)<=x4603)^x4604);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4709 = 179;
	int16_t x4711 = 275;
	int8_t x4712 = 1;

	t79 = (((x4709>>x4710)<=x4711)^x4712);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4730 = 5U;
	int16_t x4731 = INT16_MIN;
	static volatile int8_t x4732 = -1;
	volatile int32_t t80 = 0;

	t80 = (((x4729>>x4730)<=x4731)^x4732);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x4733 = 2913817719316LLU;
	uint16_t x4734 = 28U;
	int64_t x4735 = -23115158632595819LL;
	volatile int32_t t81 = 1;

	t81 = (((x4733>>x4734)<=x4735)^x4736);

	if (t81 != 26) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x4738 = 7;
	uint64_t x4740 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (((x4737>>x4738)<=x4739)^x4740);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x4773 = 0;
	uint16_t x4774 = 14U;
	int64_t x4775 = -16869404016630LL;
	uint16_t x4776 = 70U;
	int32_t t83 = 5599;

	t83 = (((x4773>>x4774)<=x4775)^x4776);

	if (t83 != 70) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4801 = INT16_MAX;
	static int16_t x4802 = 10;
	static volatile uint16_t x4803 = 5651U;
	uint8_t x4804 = 70U;
	volatile int32_t t84 = 76;

	t84 = (((x4801>>x4802)<=x4803)^x4804);

	if (t84 != 71) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4841 = INT16_MAX;
	uint8_t x4842 = 1U;
	int16_t x4843 = -1;
	static int64_t x4844 = INT64_MAX;
	static volatile int64_t t85 = INT64_MAX;

	t85 = (((x4841>>x4842)<=x4843)^x4844);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x4869 = INT32_MAX;
	uint8_t x4870 = 1U;
	uint64_t x4871 = 26628538091909021LLU;
	int8_t x4872 = 5;
	int32_t t86 = 16026;

	t86 = (((x4869>>x4870)<=x4871)^x4872);

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4885 = 6165724874310632LLU;
	volatile int8_t x4886 = 8;
	static int32_t x4887 = -1;
	uint32_t x4888 = UINT32_MAX;

	t87 = (((x4885>>x4886)<=x4887)^x4888);

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4905 = UINT8_MAX;
	int64_t x4907 = -486137052345437LL;
	uint8_t x4908 = UINT8_MAX;
	static int32_t t88 = -6;

	t88 = (((x4905>>x4906)<=x4907)^x4908);

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5073 = 222;
	uint16_t x5074 = 0U;
	uint64_t t89 = 383411755883708714LLU;

	t89 = (((x5073>>x5074)<=x5075)^x5076);

	if (t89 != 635766783946LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x5093 = 4102491911LLU;
	uint8_t x5096 = 29U;
	volatile int32_t t90 = 53;

	t90 = (((x5093>>x5094)<=x5095)^x5096);

	if (t90 != 28) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5097 = 1U;
	uint16_t x5098 = 13U;
	int8_t x5099 = INT8_MIN;
	uint32_t t91 = 29713U;

	t91 = (((x5097>>x5098)<=x5099)^x5100);

	if (t91 != 13766945U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5231 = UINT32_MAX;
	volatile uint32_t x5232 = UINT32_MAX;
	static uint32_t t92 = UINT32_MAX;

	t92 = (((x5229>>x5230)<=x5231)^x5232);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5233 = UINT16_MAX;
	int64_t x5234 = 2LL;
	uint64_t t93 = UINT64_MAX;

	t93 = (((x5233>>x5234)<=x5235)^x5236);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5241 = 7U;
	int16_t x5242 = 11;
	int16_t x5243 = INT16_MIN;
	uint8_t x5244 = 54U;
	int32_t t94 = -4877;

	t94 = (((x5241>>x5242)<=x5243)^x5244);

	if (t94 != 54) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5257 = 17799879054791517LLU;
	uint8_t x5258 = 14U;
	static int32_t x5259 = -448474;
	static volatile uint32_t x5260 = UINT32_MAX;
	volatile uint32_t t95 = 518U;

	t95 = (((x5257>>x5258)<=x5259)^x5260);

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x5318 = 18U;
	static int8_t x5319 = INT8_MIN;
	volatile int32_t t96 = 4;

	t96 = (((x5317>>x5318)<=x5319)^x5320);

	if (t96 != 26) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5321 = 819LLU;
	int8_t x5322 = 59;
	static volatile int8_t x5324 = 15;
	int32_t t97 = 1849;

	t97 = (((x5321>>x5322)<=x5323)^x5324);

	if (t97 != 14) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5430 = 1;
	int32_t x5432 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = (((x5429>>x5430)<=x5431)^x5432);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5541 = 2892U;
	int32_t x5542 = 5;
	int8_t x5543 = 13;
	int16_t x5544 = INT16_MAX;
	volatile int32_t t99 = 15;

	t99 = (((x5541>>x5542)<=x5543)^x5544);

	if (t99 != 32767) { NG(); } else { ; }
	
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

