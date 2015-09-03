#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = 19;
int8_t x30 = 0;
int64_t x33 = INT64_MAX;
uint64_t x170 = 18LLU;
static int64_t x172 = INT64_MIN;
int8_t x190 = 0;
int32_t t6 = -3;
static int8_t x235 = INT8_MIN;
int16_t x322 = 6;
int32_t x337 = INT32_MAX;
static int32_t t10 = INT32_MAX;
int32_t x374 = 1;
int32_t t12 = 1964152;
uint8_t x458 = 23U;
volatile uint64_t t13 = 58683521LLU;
int8_t x470 = 4;
uint64_t x496 = 1182456LLU;
int8_t x500 = -4;
int32_t x591 = INT32_MIN;
volatile uint32_t t17 = 17290968U;
volatile int32_t t18 = -3578187;
volatile int8_t x684 = 19;
static volatile int32_t t20 = 485;
int8_t x827 = -9;
static volatile int32_t x931 = INT32_MAX;
int16_t x932 = 54;
int32_t x978 = 4;
volatile uint64_t x979 = 80958932076870081LLU;
static uint8_t x1120 = 7U;
volatile int32_t t25 = -1184;
volatile uint32_t x1133 = UINT32_MAX;
uint8_t x1153 = 1U;
static int16_t x1155 = -123;
static volatile int64_t x1156 = 6980685LL;
volatile int64_t t29 = 933485LL;
static int32_t x1389 = INT32_MAX;
int32_t x1430 = 7;
static int8_t x1432 = 2;
volatile uint64_t t31 = 3099074162LLU;
volatile int8_t x1460 = -5;
int16_t x1466 = 3;
int8_t x1467 = INT8_MIN;
int32_t x1718 = 2;
uint64_t x1725 = 55284031LLU;
uint8_t x1726 = 3U;
volatile int32_t x1728 = INT32_MIN;
uint32_t x1797 = 1285576U;
int32_t x1799 = -1;
volatile uint32_t t38 = 2745U;
volatile uint32_t x1945 = 765U;
int32_t x1947 = INT32_MAX;
static uint8_t x2058 = 0U;
uint32_t x2059 = 50915149U;
int32_t x2093 = 196077763;
int16_t x2095 = -1;
int8_t x2222 = 7;
int8_t x2224 = 16;
static volatile uint64_t t44 = 21LLU;
volatile int64_t t45 = 627227511123456LL;
int32_t t49 = -2702;
static uint32_t x2726 = 5U;
static uint8_t x2730 = 14U;
int64_t x2732 = 103843970LL;
static int64_t x2812 = INT64_MIN;
static uint8_t x2976 = 0U;
uint64_t x3065 = 751162LLU;
static int32_t x3067 = 121;
int16_t x3068 = -190;
uint64_t t58 = 2216487157045178100LLU;
int8_t x3136 = 50;
volatile int64_t x3193 = INT64_MAX;
static int8_t x3329 = INT8_MAX;
int8_t x3331 = INT8_MIN;
uint8_t x3350 = 25U;
volatile int16_t x3352 = 7;
int32_t t64 = -61889;
uint32_t x3374 = 20U;
volatile uint64_t x3376 = UINT64_MAX;
uint16_t x3465 = 100U;
int32_t t69 = -90490;
int64_t x3545 = 470905615903297025LL;
uint64_t x3561 = UINT64_MAX;
int64_t x3577 = INT64_MAX;
volatile uint32_t t76 = 333U;
volatile int64_t x3876 = INT64_MAX;
uint8_t x3882 = 14U;
uint64_t x3917 = UINT64_MAX;
volatile int8_t x3918 = 1;
int8_t x3919 = INT8_MIN;
uint8_t x3921 = 3U;
int64_t x3923 = INT64_MAX;
int64_t x3924 = -52146554446LL;
int64_t x4029 = 2858618743347166LL;
volatile int16_t x4031 = -1;
int64_t x4048 = 10268436604LL;
volatile int32_t t84 = -370312698;
volatile int32_t t86 = -4600;
int16_t x4165 = 7;
uint64_t x4189 = UINT64_MAX;
uint64_t x4297 = 1425151265074939238LLU;
int8_t x4300 = INT8_MIN;
volatile int16_t x4410 = 28;
int32_t t93 = 0;
int32_t x4448 = 33615425;
int32_t x4449 = INT32_MAX;
int32_t t96 = -101;
int16_t x4502 = 27;
int16_t x4503 = INT16_MAX;
uint32_t t97 = 1763758915U;
uint32_t x4513 = 368959412U;
int16_t x4515 = INT16_MAX;


void f0(void) {
	uint32_t x9 = 187195461U;
	int32_t x11 = 7;
	int32_t x12 = INT32_MIN;
	uint32_t t0 = 524939571U;

	t0 = ((x9>>x10)+(x11<=x12));

	if (t0 != 357U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	uint32_t t1 = 4310U;

	t1 = ((x29>>x30)+(x31<=x32));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x34 = 0;
	int16_t x35 = INT16_MAX;
	uint32_t x36 = 0U;
	static int64_t t2 = INT64_MAX;

	t2 = ((x33>>x34)+(x35<=x36));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x121 = UINT32_MAX;
	uint16_t x122 = 7U;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;
	static volatile uint32_t t3 = 1800789060U;

	t3 = ((x121>>x122)+(x123<=x124));

	if (t3 != 33554432U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x137 = 8U;
	volatile uint8_t x138 = 3U;
	static int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t4 = -16645595;

	t4 = ((x137>>x138)+(x139<=x140));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x169 = INT32_MAX;
	int64_t x171 = -5869924LL;
	int32_t t5 = -2567;

	t5 = ((x169>>x170)+(x171<=x172));

	if (t5 != 8191) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x189 = UINT16_MAX;
	volatile int16_t x191 = 47;
	int32_t x192 = INT32_MIN;

	t6 = ((x189>>x190)+(x191<=x192));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x233 = 140711322237615773LL;
	static volatile uint64_t x234 = 2LLU;
	uint32_t x236 = UINT32_MAX;
	volatile int64_t t7 = -18294147087297896LL;

	t7 = ((x233>>x234)+(x235<=x236));

	if (t7 != 35177830559403944LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x281 = 0;
	uint8_t x282 = 27U;
	uint64_t x283 = 8231810631839180659LLU;
	uint16_t x284 = 45U;
	static int32_t t8 = 0;

	t8 = ((x281>>x282)+(x283<=x284));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x321 = 25;
	volatile uint8_t x323 = UINT8_MAX;
	uint8_t x324 = 9U;
	int32_t t9 = 95452;

	t9 = ((x321>>x322)+(x323<=x324));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x338 = 0;
	int16_t x339 = INT16_MAX;
	volatile uint8_t x340 = 60U;

	t10 = ((x337>>x338)+(x339<=x340));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x373 = 16592LL;
	int64_t x375 = INT64_MAX;
	int16_t x376 = INT16_MIN;
	int64_t t11 = -2575LL;

	t11 = ((x373>>x374)+(x375<=x376));

	if (t11 != 8296LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x433 = 5808U;
	int32_t x434 = 6;
	int64_t x435 = 1329459589979460LL;
	static volatile int16_t x436 = 3479;

	t12 = ((x433>>x434)+(x435<=x436));

	if (t12 != 90) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x457 = 35LLU;
	int64_t x459 = INT64_MIN;
	uint32_t x460 = 5177225U;

	t13 = ((x457>>x458)+(x459<=x460));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x469 = 18895LLU;
	int32_t x471 = 92;
	volatile int64_t x472 = -55LL;
	uint64_t t14 = 8016318712LLU;

	t14 = ((x469>>x470)+(x471<=x472));

	if (t14 != 1180LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x493 = 51754405171LL;
	static uint8_t x494 = 30U;
	int8_t x495 = INT8_MIN;
	volatile int64_t t15 = 842581032LL;

	t15 = ((x493>>x494)+(x495<=x496));

	if (t15 != 48LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x497 = 122U;
	uint32_t x498 = 7U;
	int8_t x499 = INT8_MAX;
	int32_t t16 = -647970;

	t16 = ((x497>>x498)+(x499<=x500));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x589 = 10U;
	volatile uint8_t x590 = 1U;
	int16_t x592 = -138;

	t17 = ((x589>>x590)+(x591<=x592));

	if (t17 != 6U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x649 = UINT8_MAX;
	uint8_t x650 = 4U;
	uint8_t x651 = 8U;
	uint16_t x652 = 32U;

	t18 = ((x649>>x650)+(x651<=x652));

	if (t18 != 16) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x681 = UINT8_MAX;
	int8_t x682 = 2;
	static int32_t x683 = INT32_MIN;
	static int32_t t19 = 56385;

	t19 = ((x681>>x682)+(x683<=x684));

	if (t19 != 64) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x809 = INT8_MAX;
	uint8_t x810 = 8U;
	static int32_t x811 = -9237;
	static uint64_t x812 = 57LLU;

	t20 = ((x809>>x810)+(x811<=x812));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x825 = INT8_MAX;
	volatile uint32_t x826 = 13U;
	int64_t x828 = INT64_MAX;
	int32_t t21 = 15107471;

	t21 = ((x825>>x826)+(x827<=x828));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x921 = UINT16_MAX;
	int8_t x922 = 2;
	volatile int64_t x923 = INT64_MIN;
	volatile uint32_t x924 = UINT32_MAX;
	int32_t t22 = 52413;

	t22 = ((x921>>x922)+(x923<=x924));

	if (t22 != 16384) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x929 = 2557180U;
	static uint8_t x930 = 2U;
	volatile uint32_t t23 = 608475159U;

	t23 = ((x929>>x930)+(x931<=x932));

	if (t23 != 639295U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x977 = INT16_MAX;
	volatile uint32_t x980 = 91980967U;
	volatile int32_t t24 = -2;

	t24 = ((x977>>x978)+(x979<=x980));

	if (t24 != 2047) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1117 = UINT8_MAX;
	volatile uint16_t x1118 = 2U;
	int32_t x1119 = INT32_MAX;

	t25 = ((x1117>>x1118)+(x1119<=x1120));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1134 = 0U;
	int8_t x1135 = INT8_MIN;
	volatile int16_t x1136 = INT16_MAX;
	uint32_t t26 = 6493U;

	t26 = ((x1133>>x1134)+(x1135<=x1136));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1154 = 2;
	int32_t t27 = -145406374;

	t27 = ((x1153>>x1154)+(x1155<=x1156));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1253 = 2045857U;
	uint32_t x1254 = 0U;
	static int16_t x1255 = INT16_MAX;
	static uint16_t x1256 = UINT16_MAX;
	uint32_t t28 = 3U;

	t28 = ((x1253>>x1254)+(x1255<=x1256));

	if (t28 != 2045858U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1329 = 785794LL;
	uint8_t x1330 = 47U;
	static uint64_t x1331 = 2069920232622LLU;
	int16_t x1332 = INT16_MAX;

	t29 = ((x1329>>x1330)+(x1331<=x1332));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1390 = 31LLU;
	int32_t x1391 = INT32_MAX;
	int16_t x1392 = 5304;
	volatile int32_t t30 = -7345280;

	t30 = ((x1389>>x1390)+(x1391<=x1392));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1429 = 9034482751523433LLU;
	uint16_t x1431 = UINT16_MAX;

	t31 = ((x1429>>x1430)+(x1431<=x1432));

	if (t31 != 70581896496276LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1433 = 1;
	int16_t x1434 = 2;
	static int8_t x1435 = INT8_MAX;
	volatile uint64_t x1436 = 1982131240119013LLU;
	int32_t t32 = 18524383;

	t32 = ((x1433>>x1434)+(x1435<=x1436));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1457 = 243;
	volatile uint64_t x1458 = 0LLU;
	int8_t x1459 = 4;
	volatile int32_t t33 = 166;

	t33 = ((x1457>>x1458)+(x1459<=x1460));

	if (t33 != 243) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1465 = INT8_MAX;
	static int32_t x1468 = INT32_MIN;
	volatile int32_t t34 = -1942208;

	t34 = ((x1465>>x1466)+(x1467<=x1468));

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1513 = 24265115;
	static uint16_t x1514 = 1U;
	volatile uint64_t x1515 = UINT64_MAX;
	uint16_t x1516 = 52U;
	int32_t t35 = 0;

	t35 = ((x1513>>x1514)+(x1515<=x1516));

	if (t35 != 12132557) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1717 = UINT32_MAX;
	int32_t x1719 = -1;
	volatile int8_t x1720 = -15;
	volatile uint32_t t36 = 2U;

	t36 = ((x1717>>x1718)+(x1719<=x1720));

	if (t36 != 1073741823U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1727 = -5;
	static uint64_t t37 = 138802185027971744LLU;

	t37 = ((x1725>>x1726)+(x1727<=x1728));

	if (t37 != 6910503LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1798 = 1LLU;
	int32_t x1800 = -1;

	t38 = ((x1797>>x1798)+(x1799<=x1800));

	if (t38 != 642789U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1929 = UINT32_MAX;
	volatile int8_t x1930 = 1;
	static uint8_t x1931 = 77U;
	uint32_t x1932 = 1264U;
	volatile uint32_t t39 = 45U;

	t39 = ((x1929>>x1930)+(x1931<=x1932));

	if (t39 != 2147483648U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1946 = 0U;
	uint8_t x1948 = UINT8_MAX;
	uint32_t t40 = 110229790U;

	t40 = ((x1945>>x1946)+(x1947<=x1948));

	if (t40 != 765U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1961 = UINT64_MAX;
	int16_t x1962 = 3;
	static int8_t x1963 = INT8_MIN;
	int8_t x1964 = INT8_MIN;
	volatile uint64_t t41 = 3906LLU;

	t41 = ((x1961>>x1962)+(x1963<=x1964));

	if (t41 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2057 = 1;
	static int32_t x2060 = -96651621;
	int32_t t42 = 48742513;

	t42 = ((x2057>>x2058)+(x2059<=x2060));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2094 = 3;
	uint16_t x2096 = UINT16_MAX;
	volatile int32_t t43 = -995;

	t43 = ((x2093>>x2094)+(x2095<=x2096));

	if (t43 != 24509721) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x2221 = UINT64_MAX;
	int16_t x2223 = -1;

	t44 = ((x2221>>x2222)+(x2223<=x2224));

	if (t44 != 144115188075855872LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2305 = 0LL;
	volatile int16_t x2306 = 55;
	uint64_t x2307 = 31LLU;
	volatile int8_t x2308 = -1;

	t45 = ((x2305>>x2306)+(x2307<=x2308));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2313 = INT64_MAX;
	uint16_t x2314 = 0U;
	int64_t x2315 = 47559776145535619LL;
	uint8_t x2316 = 30U;
	volatile int64_t t46 = INT64_MAX;

	t46 = ((x2313>>x2314)+(x2315<=x2316));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2441 = 3433656003LL;
	int8_t x2442 = 1;
	uint32_t x2443 = 1869559585U;
	volatile int8_t x2444 = -1;
	int64_t t47 = -1564196LL;

	t47 = ((x2441>>x2442)+(x2443<=x2444));

	if (t47 != 1716828002LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2489 = 18;
	volatile int32_t x2490 = 24;
	int16_t x2491 = INT16_MAX;
	uint64_t x2492 = 1241457LLU;
	static int32_t t48 = -43605254;

	t48 = ((x2489>>x2490)+(x2491<=x2492));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2689 = 14U;
	int32_t x2690 = 1;
	int64_t x2691 = INT64_MIN;
	static volatile int32_t x2692 = -39;

	t49 = ((x2689>>x2690)+(x2691<=x2692));

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2725 = 5985LLU;
	volatile uint16_t x2727 = UINT16_MAX;
	int8_t x2728 = -1;
	uint64_t t50 = 472832139LLU;

	t50 = ((x2725>>x2726)+(x2727<=x2728));

	if (t50 != 187LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2729 = 6;
	int32_t x2731 = 6654;
	volatile int32_t t51 = 49594;

	t51 = ((x2729>>x2730)+(x2731<=x2732));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2809 = 33;
	uint8_t x2810 = 20U;
	uint16_t x2811 = UINT16_MAX;
	static int32_t t52 = 349245172;

	t52 = ((x2809>>x2810)+(x2811<=x2812));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2861 = 1U;
	uint64_t x2862 = 2LLU;
	static uint64_t x2863 = UINT64_MAX;
	static int32_t x2864 = 8;
	volatile int32_t t53 = -1881;

	t53 = ((x2861>>x2862)+(x2863<=x2864));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2917 = INT64_MAX;
	static uint8_t x2918 = 2U;
	static int16_t x2919 = 162;
	int8_t x2920 = INT8_MIN;
	volatile int64_t t54 = 17385185123926LL;

	t54 = ((x2917>>x2918)+(x2919<=x2920));

	if (t54 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2921 = UINT8_MAX;
	volatile uint16_t x2922 = 8U;
	uint64_t x2923 = UINT64_MAX;
	uint16_t x2924 = 86U;
	volatile int32_t t55 = 3670021;

	t55 = ((x2921>>x2922)+(x2923<=x2924));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2965 = 0;
	uint8_t x2966 = 6U;
	int64_t x2967 = 716LL;
	int8_t x2968 = INT8_MIN;
	int32_t t56 = -2346;

	t56 = ((x2965>>x2966)+(x2967<=x2968));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2973 = 0U;
	volatile uint8_t x2974 = 2U;
	static uint32_t x2975 = 1U;
	int32_t t57 = -374678630;

	t57 = ((x2973>>x2974)+(x2975<=x2976));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3066 = 4U;

	t58 = ((x3065>>x3066)+(x3067<=x3068));

	if (t58 != 46947LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3097 = 127806957983398LLU;
	uint16_t x3098 = 5U;
	int64_t x3099 = INT64_MIN;
	static volatile int16_t x3100 = 1;
	volatile uint64_t t59 = 3795491LLU;

	t59 = ((x3097>>x3098)+(x3099<=x3100));

	if (t59 != 3993967436982LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3133 = 705883819LL;
	uint8_t x3134 = 40U;
	int8_t x3135 = 10;
	int64_t t60 = 137237983160806777LL;

	t60 = ((x3133>>x3134)+(x3135<=x3136));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3153 = UINT16_MAX;
	uint16_t x3154 = 23U;
	uint8_t x3155 = UINT8_MAX;
	static int32_t x3156 = INT32_MAX;
	volatile int32_t t61 = -25601;

	t61 = ((x3153>>x3154)+(x3155<=x3156));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x3194 = 1U;
	static uint16_t x3195 = UINT16_MAX;
	int32_t x3196 = INT32_MIN;
	int64_t t62 = -300598438225LL;

	t62 = ((x3193>>x3194)+(x3195<=x3196));

	if (t62 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3330 = 1U;
	static uint64_t x3332 = 1LLU;
	int32_t t63 = -2270;

	t63 = ((x3329>>x3330)+(x3331<=x3332));

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3349 = 396;
	int32_t x3351 = 1;

	t64 = ((x3349>>x3350)+(x3351<=x3352));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3357 = 218U;
	volatile uint8_t x3358 = 0U;
	int32_t x3359 = INT32_MAX;
	static int16_t x3360 = -1;
	uint32_t t65 = 1073972359U;

	t65 = ((x3357>>x3358)+(x3359<=x3360));

	if (t65 != 218U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3373 = 0;
	int16_t x3375 = INT16_MAX;
	int32_t t66 = 70;

	t66 = ((x3373>>x3374)+(x3375<=x3376));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3457 = 1;
	uint8_t x3458 = 3U;
	uint64_t x3459 = UINT64_MAX;
	int16_t x3460 = INT16_MIN;
	volatile int32_t t67 = 7220;

	t67 = ((x3457>>x3458)+(x3459<=x3460));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3461 = INT32_MAX;
	uint8_t x3462 = 31U;
	static int8_t x3463 = INT8_MAX;
	uint32_t x3464 = 5U;
	volatile int32_t t68 = -32488;

	t68 = ((x3461>>x3462)+(x3463<=x3464));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3466 = 2U;
	uint8_t x3467 = UINT8_MAX;
	static int8_t x3468 = INT8_MIN;

	t69 = ((x3465>>x3466)+(x3467<=x3468));

	if (t69 != 25) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3546 = 42U;
	int32_t x3547 = INT32_MIN;
	uint16_t x3548 = 4717U;
	volatile int64_t t70 = 9445258604833LL;

	t70 = ((x3545>>x3546)+(x3547<=x3548));

	if (t70 != 107072LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3562 = 1;
	int64_t x3563 = INT64_MAX;
	volatile int8_t x3564 = -1;
	static uint64_t t71 = 4258344744130169LLU;

	t71 = ((x3561>>x3562)+(x3563<=x3564));

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3578 = 16U;
	static int64_t x3579 = -1LL;
	uint16_t x3580 = 53U;
	int64_t t72 = 528866662934LL;

	t72 = ((x3577>>x3578)+(x3579<=x3580));

	if (t72 != 140737488355328LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3713 = 503;
	uint8_t x3714 = 15U;
	volatile int64_t x3715 = INT64_MIN;
	static int16_t x3716 = INT16_MAX;
	int32_t t73 = 247746;

	t73 = ((x3713>>x3714)+(x3715<=x3716));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x3793 = INT16_MAX;
	int64_t x3794 = 0LL;
	int16_t x3795 = 1;
	uint32_t x3796 = 308U;
	volatile int32_t t74 = -65019938;

	t74 = ((x3793>>x3794)+(x3795<=x3796));

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3801 = 7U;
	static volatile uint32_t x3802 = 4U;
	static int32_t x3803 = -1;
	static uint32_t x3804 = 103873U;
	static volatile int32_t t75 = -656174619;

	t75 = ((x3801>>x3802)+(x3803<=x3804));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x3813 = 60248612U;
	static uint8_t x3814 = 10U;
	int8_t x3815 = -1;
	int32_t x3816 = INT32_MIN;

	t76 = ((x3813>>x3814)+(x3815<=x3816));

	if (t76 != 58836U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3849 = 1108602LLU;
	static uint16_t x3850 = 6U;
	static int64_t x3851 = 59885825328LL;
	volatile int16_t x3852 = INT16_MAX;
	uint64_t t77 = 124299842931025672LLU;

	t77 = ((x3849>>x3850)+(x3851<=x3852));

	if (t77 != 17321LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x3873 = 16539612U;
	static int16_t x3874 = 0;
	static uint8_t x3875 = UINT8_MAX;
	uint32_t t78 = 1316660U;

	t78 = ((x3873>>x3874)+(x3875<=x3876));

	if (t78 != 16539613U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3881 = 16532U;
	int8_t x3883 = -1;
	int16_t x3884 = 23;
	uint32_t t79 = 173248937U;

	t79 = ((x3881>>x3882)+(x3883<=x3884));

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3920 = INT32_MIN;
	volatile uint64_t t80 = 3386519543384471514LLU;

	t80 = ((x3917>>x3918)+(x3919<=x3920));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3922 = 22U;
	int32_t t81 = -52;

	t81 = ((x3921>>x3922)+(x3923<=x3924));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4030 = 0U;
	uint8_t x4032 = 2U;
	int64_t t82 = 38495644614578972LL;

	t82 = ((x4029>>x4030)+(x4031<=x4032));

	if (t82 != 2858618743347167LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4045 = INT32_MAX;
	int64_t x4046 = 1LL;
	uint16_t x4047 = 242U;
	static int32_t t83 = 0;

	t83 = ((x4045>>x4046)+(x4047<=x4048));

	if (t83 != 1073741824) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4049 = 5;
	uint16_t x4050 = 1U;
	static int32_t x4051 = INT32_MIN;
	uint16_t x4052 = UINT16_MAX;

	t84 = ((x4049>>x4050)+(x4051<=x4052));

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4069 = UINT16_MAX;
	uint32_t x4070 = 10U;
	uint64_t x4071 = 123229295794LLU;
	int8_t x4072 = INT8_MIN;
	int32_t t85 = -155631;

	t85 = ((x4069>>x4070)+(x4071<=x4072));

	if (t85 != 64) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4081 = UINT16_MAX;
	static uint8_t x4082 = 0U;
	static int16_t x4083 = -1;
	volatile uint8_t x4084 = 0U;

	t86 = ((x4081>>x4082)+(x4083<=x4084));

	if (t86 != 65536) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4097 = UINT8_MAX;
	int16_t x4098 = 1;
	uint16_t x4099 = 2U;
	static uint16_t x4100 = 5368U;
	int32_t t87 = -759;

	t87 = ((x4097>>x4098)+(x4099<=x4100));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4166 = 10LLU;
	int8_t x4167 = INT8_MIN;
	uint64_t x4168 = 9203305131022965LLU;
	volatile int32_t t88 = -8356998;

	t88 = ((x4165>>x4166)+(x4167<=x4168));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x4190 = 0U;
	volatile int64_t x4191 = INT64_MIN;
	int32_t x4192 = -1;
	volatile uint64_t t89 = 6LLU;

	t89 = ((x4189>>x4190)+(x4191<=x4192));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4298 = 7U;
	int8_t x4299 = INT8_MIN;
	uint64_t t90 = 23LLU;

	t90 = ((x4297>>x4298)+(x4299<=x4300));

	if (t90 != 11133994258397963LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4341 = 63264107LL;
	int32_t x4342 = 6;
	uint32_t x4343 = UINT32_MAX;
	static int8_t x4344 = -3;
	volatile int64_t t91 = -24910769179273587LL;

	t91 = ((x4341>>x4342)+(x4343<=x4344));

	if (t91 != 988501LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4409 = INT64_MAX;
	volatile uint8_t x4411 = 97U;
	volatile int64_t x4412 = INT64_MIN;
	int64_t t92 = 561460052655105566LL;

	t92 = ((x4409>>x4410)+(x4411<=x4412));

	if (t92 != 34359738367LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4421 = UINT16_MAX;
	volatile int64_t x4422 = 3LL;
	int32_t x4423 = INT32_MAX;
	int16_t x4424 = -176;

	t93 = ((x4421>>x4422)+(x4423<=x4424));

	if (t93 != 8191) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4445 = INT32_MAX;
	volatile uint8_t x4446 = 2U;
	int8_t x4447 = INT8_MIN;
	int32_t t94 = -2;

	t94 = ((x4445>>x4446)+(x4447<=x4448));

	if (t94 != 536870912) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x4450 = 2U;
	int64_t x4451 = 5LL;
	uint8_t x4452 = 2U;
	int32_t t95 = 102350179;

	t95 = ((x4449>>x4450)+(x4451<=x4452));

	if (t95 != 536870911) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4473 = 13U;
	uint8_t x4474 = 1U;
	static uint64_t x4475 = 15163177LLU;
	static int64_t x4476 = INT64_MAX;

	t96 = ((x4473>>x4474)+(x4475<=x4476));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4501 = UINT32_MAX;
	int64_t x4504 = INT64_MIN;

	t97 = ((x4501>>x4502)+(x4503<=x4504));

	if (t97 != 31U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4514 = 1;
	static int16_t x4516 = -1156;
	volatile uint32_t t98 = 22U;

	t98 = ((x4513>>x4514)+(x4515<=x4516));

	if (t98 != 184479706U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x4641 = 414505U;
	int8_t x4642 = 13;
	static int32_t x4643 = INT32_MIN;
	int32_t x4644 = INT32_MAX;
	volatile uint32_t t99 = 7471U;

	t99 = ((x4641>>x4642)+(x4643<=x4644));

	if (t99 != 51U) { NG(); } else { ; }
	
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

