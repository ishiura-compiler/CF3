#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x123 = INT32_MAX;
static volatile uint32_t x131 = UINT32_MAX;
volatile uint8_t x157 = UINT8_MAX;
static uint16_t x159 = UINT16_MAX;
uint16_t x461 = 8638U;
static int32_t x463 = INT32_MAX;
static volatile int32_t x512 = 6;
int64_t x775 = INT64_MAX;
volatile int16_t x914 = 10;
uint64_t x939 = 454441359LLU;
volatile int32_t x1025 = INT32_MIN;
volatile int32_t t12 = -5;
int16_t x1078 = INT16_MAX;
uint16_t x1079 = 146U;
static int16_t x1197 = -2452;
int32_t t15 = 2;
int8_t x1337 = INT8_MIN;
uint32_t x1572 = 1U;
volatile int64_t t17 = 17026634398LL;
uint32_t x1577 = 121978U;
int64_t x1617 = INT64_MIN;
int8_t x1620 = 1;
volatile uint32_t t19 = 117U;
uint8_t x1682 = 19U;
volatile uint16_t x1704 = 0U;
static volatile int32_t t21 = -2;
uint16_t x1722 = 5U;
int64_t x1735 = 35637716110357995LL;
static volatile int64_t t23 = -3LL;
uint32_t x1743 = 1418U;
int32_t t26 = -63;
static uint8_t x1904 = 4U;
int16_t x2146 = -12;
int32_t x2227 = 28094;
uint8_t x2228 = 6U;
uint16_t x2259 = 2419U;
volatile int64_t x2321 = INT64_MIN;
int8_t x2324 = 7;
uint64_t x2357 = UINT64_MAX;
static volatile uint32_t t37 = 328U;
static uint16_t x2396 = 1U;
uint32_t t38 = 10968U;
volatile int32_t t39 = -1519;
uint16_t x2514 = 5U;
static uint16_t x2516 = 9U;
volatile uint32_t x2529 = UINT32_MAX;
uint16_t x2530 = UINT16_MAX;
int8_t x2532 = 0;
int8_t x2666 = -6;
static int32_t t45 = -1040937684;
int32_t x2977 = 266467744;
uint16_t x2984 = 1U;
static int64_t x3049 = 2093882LL;
uint32_t x3319 = UINT32_MAX;
volatile int16_t x3390 = INT16_MIN;
static int32_t x3539 = INT32_MAX;
int16_t x3666 = INT16_MIN;
static volatile int32_t x3668 = 1;
volatile int32_t t57 = -2622616;
int64_t x3702 = INT64_MAX;
int8_t x3778 = 1;
static int8_t x3808 = 0;
static uint32_t t61 = 13728303U;
volatile int16_t x3984 = 1;
int32_t x4101 = INT32_MAX;
volatile int16_t x4233 = -1;
static volatile int32_t t65 = -375793;
uint64_t x4285 = 114328223070686981LLU;
static uint16_t x4344 = 16U;
volatile uint64_t t68 = 22951LLU;
int8_t x4353 = INT8_MIN;
volatile uint64_t x4383 = 113122737767294930LLU;
uint64_t t72 = 2900525158120269LLU;
static volatile int32_t t73 = -15420947;
volatile int64_t x4805 = 15505837LL;
int32_t t77 = 7;
int8_t x5038 = INT8_MIN;
uint8_t x5085 = 12U;
int64_t x5217 = 109LL;
int32_t x5257 = -34;
volatile int32_t t88 = 7;
uint32_t t89 = 3U;
static uint32_t x5429 = 1U;
static uint64_t x5432 = 2LLU;
int32_t t90 = -96075;
uint8_t x5449 = UINT8_MAX;
uint32_t t91 = 12344050U;
uint16_t x5456 = 0U;
int32_t t92 = -688039;
uint32_t x5630 = 827U;
int64_t t97 = -3052LL;
int64_t x5798 = -178291485055LL;
static int8_t x5933 = INT8_MAX;


void f0(void) {
	int8_t x85 = INT8_MIN;
	static int64_t x86 = -1LL;
	uint32_t x87 = 3547254U;
	static uint16_t x88 = 0U;
	volatile uint32_t t0 = 7219U;

	t0 = ((x85<=x86)/(x87>>x88));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MAX;
	uint16_t x99 = 675U;
	int8_t x100 = 1;
	int32_t t1 = 718770422;

	t1 = ((x97<=x98)/(x99>>x100));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x121 = 40825881497256742LLU;
	int32_t x122 = 117041;
	uint8_t x124 = 0U;
	int32_t t2 = 40907;

	t2 = ((x121<=x122)/(x123>>x124));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x129 = INT8_MAX;
	uint16_t x130 = 725U;
	uint8_t x132 = 6U;
	uint32_t t3 = 106480190U;

	t3 = ((x129<=x130)/(x131>>x132));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x158 = 8245U;
	uint8_t x160 = 1U;
	int32_t t4 = 3921205;

	t4 = ((x157<=x158)/(x159>>x160));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x462 = 1670;
	uint64_t x464 = 20LLU;
	int32_t t5 = -32520;

	t5 = ((x461<=x462)/(x463>>x464));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x465 = INT32_MAX;
	volatile int64_t x466 = INT64_MIN;
	static int32_t x467 = 2508;
	uint8_t x468 = 0U;
	volatile int32_t t6 = 1972;

	t6 = ((x465<=x466)/(x467>>x468));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x509 = INT64_MAX;
	uint32_t x510 = UINT32_MAX;
	uint64_t x511 = 186110856572LLU;
	static uint64_t t7 = 944LLU;

	t7 = ((x509<=x510)/(x511>>x512));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x553 = 160270;
	volatile uint32_t x554 = UINT32_MAX;
	uint16_t x555 = UINT16_MAX;
	static int16_t x556 = 15;
	static int32_t t8 = 1580034;

	t8 = ((x553<=x554)/(x555>>x556));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x773 = 3;
	uint32_t x774 = 65U;
	uint8_t x776 = 1U;
	int64_t t9 = -227133801611585LL;

	t9 = ((x773<=x774)/(x775>>x776));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x913 = UINT64_MAX;
	static int8_t x915 = INT8_MAX;
	uint32_t x916 = 3U;
	volatile int32_t t10 = -136;

	t10 = ((x913<=x914)/(x915>>x916));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x937 = -1;
	volatile int32_t x938 = -5;
	static uint8_t x940 = 3U;
	static uint64_t t11 = 6558956296LLU;

	t11 = ((x937<=x938)/(x939>>x940));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1026 = 1U;
	static volatile int32_t x1027 = 3;
	int16_t x1028 = 1;

	t12 = ((x1025<=x1026)/(x1027>>x1028));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1077 = -1;
	volatile int32_t x1080 = 1;
	volatile int32_t t13 = -4206;

	t13 = ((x1077<=x1078)/(x1079>>x1080));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x1198 = INT16_MIN;
	volatile uint32_t x1199 = UINT32_MAX;
	uint8_t x1200 = 3U;
	uint32_t t14 = 4466U;

	t14 = ((x1197<=x1198)/(x1199>>x1200));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1233 = INT64_MIN;
	static volatile int8_t x1234 = 42;
	volatile uint16_t x1235 = 7573U;
	int32_t x1236 = 3;

	t15 = ((x1233<=x1234)/(x1235>>x1236));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1338 = -1;
	uint16_t x1339 = 117U;
	int32_t x1340 = 0;
	static int32_t t16 = 27056707;

	t16 = ((x1337<=x1338)/(x1339>>x1340));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1569 = INT8_MIN;
	int32_t x1570 = -7988;
	int64_t x1571 = 4774448258639369LL;

	t17 = ((x1569<=x1570)/(x1571>>x1572));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1578 = 2417956U;
	static uint32_t x1579 = 5U;
	volatile int8_t x1580 = 2;
	uint32_t t18 = 386U;

	t18 = ((x1577<=x1578)/(x1579>>x1580));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1618 = -1;
	uint32_t x1619 = 18656096U;

	t19 = ((x1617<=x1618)/(x1619>>x1620));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1681 = 0;
	int32_t x1683 = 23;
	static uint16_t x1684 = 3U;
	static volatile int32_t t20 = -348;

	t20 = ((x1681<=x1682)/(x1683>>x1684));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1701 = -1;
	int16_t x1702 = INT16_MAX;
	static volatile uint8_t x1703 = 18U;

	t21 = ((x1701<=x1702)/(x1703>>x1704));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1721 = 7;
	uint16_t x1723 = 627U;
	volatile uint16_t x1724 = 2U;
	int32_t t22 = 1953;

	t22 = ((x1721<=x1722)/(x1723>>x1724));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1733 = INT64_MAX;
	volatile int16_t x1734 = INT16_MIN;
	uint8_t x1736 = 1U;

	t23 = ((x1733<=x1734)/(x1735>>x1736));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1741 = INT64_MAX;
	int32_t x1742 = 711;
	static volatile int8_t x1744 = 7;
	uint32_t t24 = 994137U;

	t24 = ((x1741<=x1742)/(x1743>>x1744));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1757 = 526U;
	int32_t x1758 = INT32_MIN;
	int32_t x1759 = INT32_MAX;
	static uint16_t x1760 = 8U;
	int32_t t25 = -30612;

	t25 = ((x1757<=x1758)/(x1759>>x1760));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1765 = -3;
	int32_t x1766 = -1;
	uint8_t x1767 = UINT8_MAX;
	volatile int8_t x1768 = 0;

	t26 = ((x1765<=x1766)/(x1767>>x1768));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1901 = INT64_MAX;
	static int8_t x1902 = INT8_MAX;
	int8_t x1903 = INT8_MAX;
	int32_t t27 = -341283334;

	t27 = ((x1901<=x1902)/(x1903>>x1904));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2017 = 10252U;
	int64_t x2018 = INT64_MAX;
	uint32_t x2019 = UINT32_MAX;
	uint8_t x2020 = 26U;
	static volatile uint32_t t28 = 82155U;

	t28 = ((x2017<=x2018)/(x2019>>x2020));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2109 = 1942LL;
	static int8_t x2110 = INT8_MIN;
	volatile uint32_t x2111 = UINT32_MAX;
	uint8_t x2112 = 13U;
	uint32_t t29 = 77994573U;

	t29 = ((x2109<=x2110)/(x2111>>x2112));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2141 = -46949;
	uint8_t x2142 = 44U;
	uint32_t x2143 = UINT32_MAX;
	volatile uint64_t x2144 = 0LLU;
	static uint32_t t30 = 1167670539U;

	t30 = ((x2141<=x2142)/(x2143>>x2144));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2145 = 840U;
	static uint8_t x2147 = 24U;
	uint8_t x2148 = 1U;
	int32_t t31 = 1026440;

	t31 = ((x2145<=x2146)/(x2147>>x2148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x2165 = -1;
	int32_t x2166 = INT32_MIN;
	uint16_t x2167 = 2U;
	static int16_t x2168 = 1;
	int32_t t32 = -364318264;

	t32 = ((x2165<=x2166)/(x2167>>x2168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2225 = 9890920590591LLU;
	uint8_t x2226 = 5U;
	static volatile int32_t t33 = -43;

	t33 = ((x2225<=x2226)/(x2227>>x2228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x2257 = -1LL;
	int8_t x2258 = 0;
	uint8_t x2260 = 0U;
	int32_t t34 = -10936;

	t34 = ((x2257<=x2258)/(x2259>>x2260));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2277 = INT64_MIN;
	uint32_t x2278 = UINT32_MAX;
	int8_t x2279 = 3;
	int32_t x2280 = 1;
	int32_t t35 = -227877;

	t35 = ((x2277<=x2278)/(x2279>>x2280));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2322 = 1U;
	uint32_t x2323 = UINT32_MAX;
	uint32_t t36 = 16254U;

	t36 = ((x2321<=x2322)/(x2323>>x2324));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2358 = INT32_MIN;
	uint32_t x2359 = UINT32_MAX;
	static uint8_t x2360 = 1U;

	t37 = ((x2357<=x2358)/(x2359>>x2360));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2393 = -1;
	uint8_t x2394 = 7U;
	uint32_t x2395 = 3026U;

	t38 = ((x2393<=x2394)/(x2395>>x2396));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2421 = 54;
	static int8_t x2422 = INT8_MIN;
	uint16_t x2423 = UINT16_MAX;
	static uint8_t x2424 = 1U;

	t39 = ((x2421<=x2422)/(x2423>>x2424));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2449 = 10U;
	volatile uint16_t x2450 = UINT16_MAX;
	static volatile int8_t x2451 = INT8_MAX;
	int8_t x2452 = 0;
	volatile int32_t t40 = 24946274;

	t40 = ((x2449<=x2450)/(x2451>>x2452));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2513 = -1715681108249194LL;
	int32_t x2515 = 3067423;
	static int32_t t41 = 884825;

	t41 = ((x2513<=x2514)/(x2515>>x2516));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2531 = 6;
	int32_t t42 = -50185441;

	t42 = ((x2529<=x2530)/(x2531>>x2532));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2545 = UINT64_MAX;
	int64_t x2546 = INT64_MAX;
	int32_t x2547 = 1628570;
	int8_t x2548 = 0;
	int32_t t43 = -4802;

	t43 = ((x2545<=x2546)/(x2547>>x2548));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2577 = 2U;
	uint8_t x2578 = UINT8_MAX;
	int64_t x2579 = INT64_MAX;
	static uint16_t x2580 = 19U;
	volatile int64_t t44 = 57378902552883227LL;

	t44 = ((x2577<=x2578)/(x2579>>x2580));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2665 = 1263470U;
	volatile int16_t x2667 = 3547;
	volatile int8_t x2668 = 10;

	t45 = ((x2665<=x2666)/(x2667>>x2668));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2697 = 7998U;
	uint16_t x2698 = 271U;
	int8_t x2699 = 27;
	uint8_t x2700 = 1U;
	volatile int32_t t46 = 57;

	t46 = ((x2697<=x2698)/(x2699>>x2700));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2869 = INT16_MIN;
	uint16_t x2870 = UINT16_MAX;
	volatile uint16_t x2871 = UINT16_MAX;
	int16_t x2872 = 1;
	int32_t t47 = 620;

	t47 = ((x2869<=x2870)/(x2871>>x2872));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2877 = -1LL;
	static int64_t x2878 = INT64_MAX;
	uint64_t x2879 = 15445126979LLU;
	static uint8_t x2880 = 14U;
	uint64_t t48 = 66096662622LLU;

	t48 = ((x2877<=x2878)/(x2879>>x2880));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2978 = 1002038748543245633LLU;
	int16_t x2979 = INT16_MAX;
	static volatile int8_t x2980 = 2;
	static volatile int32_t t49 = -29152989;

	t49 = ((x2977<=x2978)/(x2979>>x2980));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2981 = INT8_MIN;
	uint16_t x2982 = 801U;
	int8_t x2983 = 4;
	volatile int32_t t50 = 18083;

	t50 = ((x2981<=x2982)/(x2983>>x2984));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x3050 = -1;
	uint64_t x3051 = 6838184501974454121LLU;
	static int8_t x3052 = 4;
	static uint64_t t51 = 770299536802923LLU;

	t51 = ((x3049<=x3050)/(x3051>>x3052));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3269 = 1661LL;
	uint32_t x3270 = UINT32_MAX;
	volatile uint16_t x3271 = UINT16_MAX;
	static volatile uint8_t x3272 = 0U;
	int32_t t52 = 17506;

	t52 = ((x3269<=x3270)/(x3271>>x3272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3317 = -1LL;
	uint8_t x3318 = 13U;
	int64_t x3320 = 1LL;
	uint32_t t53 = 1770288641U;

	t53 = ((x3317<=x3318)/(x3319>>x3320));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3389 = UINT64_MAX;
	static uint64_t x3391 = UINT64_MAX;
	static uint64_t x3392 = 1LLU;
	uint64_t t54 = 24561524LLU;

	t54 = ((x3389<=x3390)/(x3391>>x3392));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3537 = 1897;
	int64_t x3538 = INT64_MAX;
	int8_t x3540 = 2;
	int32_t t55 = 172817064;

	t55 = ((x3537<=x3538)/(x3539>>x3540));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x3585 = UINT32_MAX;
	static int32_t x3586 = INT32_MIN;
	uint64_t x3587 = UINT64_MAX;
	int16_t x3588 = 6;
	uint64_t t56 = 189699900839027LLU;

	t56 = ((x3585<=x3586)/(x3587>>x3588));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3665 = 0;
	uint8_t x3667 = 8U;

	t57 = ((x3665<=x3666)/(x3667>>x3668));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3701 = UINT16_MAX;
	int64_t x3703 = INT64_MAX;
	uint32_t x3704 = 7U;
	int64_t t58 = 84338795977581LL;

	t58 = ((x3701<=x3702)/(x3703>>x3704));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3777 = -1LL;
	volatile uint64_t x3779 = UINT64_MAX;
	int16_t x3780 = 6;
	uint64_t t59 = 307066599632LLU;

	t59 = ((x3777<=x3778)/(x3779>>x3780));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3805 = -3530398025LL;
	static volatile uint64_t x3806 = 2955888135LLU;
	static int16_t x3807 = 364;
	int32_t t60 = 0;

	t60 = ((x3805<=x3806)/(x3807>>x3808));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3877 = 100884136454611771LLU;
	static uint16_t x3878 = 255U;
	uint32_t x3879 = UINT32_MAX;
	uint16_t x3880 = 30U;

	t61 = ((x3877<=x3878)/(x3879>>x3880));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3981 = UINT32_MAX;
	static int32_t x3982 = -1;
	int16_t x3983 = INT16_MAX;
	int32_t t62 = 934709000;

	t62 = ((x3981<=x3982)/(x3983>>x3984));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4029 = 22583;
	static uint32_t x4030 = UINT32_MAX;
	volatile uint32_t x4031 = 248038310U;
	int16_t x4032 = 1;
	uint32_t t63 = 338U;

	t63 = ((x4029<=x4030)/(x4031>>x4032));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x4102 = 0LL;
	int64_t x4103 = INT64_MAX;
	uint8_t x4104 = 29U;
	int64_t t64 = -1776513LL;

	t64 = ((x4101<=x4102)/(x4103>>x4104));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4234 = INT16_MIN;
	volatile int32_t x4235 = 766;
	uint8_t x4236 = 1U;

	t65 = ((x4233<=x4234)/(x4235>>x4236));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4286 = 4822405135880LLU;
	static int32_t x4287 = 416401;
	uint8_t x4288 = 11U;
	int32_t t66 = 79185;

	t66 = ((x4285<=x4286)/(x4287>>x4288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x4341 = 7486LLU;
	volatile uint16_t x4342 = UINT16_MAX;
	int32_t x4343 = 663961;
	int32_t t67 = 473365683;

	t67 = ((x4341<=x4342)/(x4343>>x4344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x4349 = 833U;
	int64_t x4350 = INT64_MAX;
	uint64_t x4351 = 93089800LLU;
	int32_t x4352 = 2;

	t68 = ((x4349<=x4350)/(x4351>>x4352));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x4354 = -31;
	int16_t x4355 = 14028;
	int8_t x4356 = 9;
	int32_t t69 = 268595;

	t69 = ((x4353<=x4354)/(x4355>>x4356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4373 = 5003497616LL;
	volatile uint16_t x4374 = 7812U;
	volatile uint8_t x4375 = UINT8_MAX;
	int8_t x4376 = 0;
	volatile int32_t t70 = -125;

	t70 = ((x4373<=x4374)/(x4375>>x4376));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4381 = -5;
	int8_t x4382 = INT8_MIN;
	volatile int8_t x4384 = 1;
	volatile uint64_t t71 = 5681958LLU;

	t71 = ((x4381<=x4382)/(x4383>>x4384));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4493 = -1;
	static int8_t x4494 = -1;
	static uint64_t x4495 = 14698LLU;
	static int32_t x4496 = 1;

	t72 = ((x4493<=x4494)/(x4495>>x4496));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4569 = INT32_MIN;
	int32_t x4570 = INT32_MIN;
	int16_t x4571 = INT16_MAX;
	int8_t x4572 = 12;

	t73 = ((x4569<=x4570)/(x4571>>x4572));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4645 = INT64_MIN;
	static int64_t x4646 = -41527884437LL;
	uint8_t x4647 = UINT8_MAX;
	uint32_t x4648 = 6U;
	int32_t t74 = 51228;

	t74 = ((x4645<=x4646)/(x4647>>x4648));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4725 = 399;
	uint32_t x4726 = 2U;
	static int16_t x4727 = INT16_MAX;
	static int8_t x4728 = 2;
	static int32_t t75 = -6756075;

	t75 = ((x4725<=x4726)/(x4727>>x4728));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4789 = 29;
	volatile int64_t x4790 = -1LL;
	uint64_t x4791 = UINT64_MAX;
	int8_t x4792 = 2;
	uint64_t t76 = 4LLU;

	t76 = ((x4789<=x4790)/(x4791>>x4792));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4806 = 16;
	static uint16_t x4807 = UINT16_MAX;
	uint8_t x4808 = 1U;

	t77 = ((x4805<=x4806)/(x4807>>x4808));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4813 = INT32_MAX;
	int16_t x4814 = 7034;
	uint64_t x4815 = 1175294504646LLU;
	int16_t x4816 = 1;
	uint64_t t78 = 459436488877876383LLU;

	t78 = ((x4813<=x4814)/(x4815>>x4816));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4929 = -1;
	int8_t x4930 = INT8_MIN;
	uint64_t x4931 = 106267391115612417LLU;
	uint8_t x4932 = 3U;
	volatile uint64_t t79 = 16530010228699LLU;

	t79 = ((x4929<=x4930)/(x4931>>x4932));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5005 = INT8_MIN;
	volatile int32_t x5006 = -1;
	int64_t x5007 = 1325986456LL;
	int8_t x5008 = 1;
	int64_t t80 = -14935641286LL;

	t80 = ((x5005<=x5006)/(x5007>>x5008));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5037 = 0;
	int16_t x5039 = INT16_MAX;
	static volatile uint8_t x5040 = 0U;
	static volatile int32_t t81 = 0;

	t81 = ((x5037<=x5038)/(x5039>>x5040));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5045 = 0U;
	int64_t x5046 = INT64_MAX;
	int64_t x5047 = 3262LL;
	static uint8_t x5048 = 2U;
	static int64_t t82 = 2161LL;

	t82 = ((x5045<=x5046)/(x5047>>x5048));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5086 = 45LLU;
	uint64_t x5087 = 1843837133202625416LLU;
	static int8_t x5088 = 3;
	volatile uint64_t t83 = 29717683310849LLU;

	t83 = ((x5085<=x5086)/(x5087>>x5088));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5218 = 63U;
	int32_t x5219 = INT32_MAX;
	uint8_t x5220 = 30U;
	int32_t t84 = -14;

	t84 = ((x5217<=x5218)/(x5219>>x5220));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x5237 = INT32_MIN;
	int16_t x5238 = 6;
	int64_t x5239 = 457209LL;
	int32_t x5240 = 1;
	int64_t t85 = 1734722953LL;

	t85 = ((x5237<=x5238)/(x5239>>x5240));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5258 = UINT16_MAX;
	static int32_t x5259 = INT32_MAX;
	uint8_t x5260 = 1U;
	volatile int32_t t86 = -8907467;

	t86 = ((x5257<=x5258)/(x5259>>x5260));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x5321 = UINT32_MAX;
	int64_t x5322 = -1LL;
	uint16_t x5323 = 13206U;
	uint8_t x5324 = 9U;
	static volatile int32_t t87 = -4;

	t87 = ((x5321<=x5322)/(x5323>>x5324));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5325 = INT8_MAX;
	static int64_t x5326 = -172389LL;
	uint8_t x5327 = 26U;
	static int32_t x5328 = 2;

	t88 = ((x5325<=x5326)/(x5327>>x5328));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5417 = -1;
	int8_t x5418 = INT8_MAX;
	static uint32_t x5419 = 32438U;
	static uint16_t x5420 = 9U;

	t89 = ((x5417<=x5418)/(x5419>>x5420));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5430 = 10959372;
	volatile uint16_t x5431 = 129U;

	t90 = ((x5429<=x5430)/(x5431>>x5432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x5450 = -659;
	static uint32_t x5451 = 478389U;
	int8_t x5452 = 0;

	t91 = ((x5449<=x5450)/(x5451>>x5452));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5453 = INT64_MAX;
	int16_t x5454 = INT16_MAX;
	int16_t x5455 = INT16_MAX;

	t92 = ((x5453<=x5454)/(x5455>>x5456));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5497 = INT8_MAX;
	uint8_t x5498 = 115U;
	uint16_t x5499 = 141U;
	static uint16_t x5500 = 0U;
	int32_t t93 = 40;

	t93 = ((x5497<=x5498)/(x5499>>x5500));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5541 = 209771;
	int32_t x5542 = INT32_MAX;
	uint16_t x5543 = UINT16_MAX;
	static uint32_t x5544 = 4U;
	int32_t t94 = -74;

	t94 = ((x5541<=x5542)/(x5543>>x5544));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5549 = 1916;
	uint64_t x5550 = 183346031133662668LLU;
	int8_t x5551 = INT8_MAX;
	int8_t x5552 = 0;
	volatile int32_t t95 = -50;

	t95 = ((x5549<=x5550)/(x5551>>x5552));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5629 = 63230LLU;
	int64_t x5631 = INT64_MAX;
	static int16_t x5632 = 38;
	volatile int64_t t96 = -57722164LL;

	t96 = ((x5629<=x5630)/(x5631>>x5632));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x5685 = INT64_MAX;
	int8_t x5686 = INT8_MIN;
	int64_t x5687 = 11009950969156154LL;
	int8_t x5688 = 3;

	t97 = ((x5685<=x5686)/(x5687>>x5688));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5797 = 217U;
	int64_t x5799 = INT64_MAX;
	volatile uint8_t x5800 = 0U;
	volatile int64_t t98 = -102684LL;

	t98 = ((x5797<=x5798)/(x5799>>x5800));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x5934 = INT8_MIN;
	uint16_t x5935 = 7U;
	uint8_t x5936 = 0U;
	int32_t t99 = 5588216;

	t99 = ((x5933<=x5934)/(x5935>>x5936));

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

