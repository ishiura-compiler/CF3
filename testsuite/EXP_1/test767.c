#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x341 = 592701995017737LLU;
volatile uint8_t x343 = 1U;
int16_t x344 = -1;
uint8_t x371 = 3U;
int8_t x372 = -1;
volatile int32_t x373 = 5778;
volatile int64_t t3 = INT64_MIN;
int16_t x572 = -1;
uint16_t x782 = 27U;
static volatile uint8_t x809 = UINT8_MAX;
uint8_t x847 = 6U;
int8_t x848 = INT8_MIN;
volatile int64_t t9 = 5071169LL;
volatile int64_t t12 = 11LL;
int16_t x960 = -1;
int64_t t13 = 51LL;
static uint16_t x1015 = 2U;
int8_t x1064 = -22;
static uint64_t t17 = 9928728503225LLU;
static volatile int8_t x1234 = -1;
static volatile int32_t t18 = -1821916;
static int8_t x1262 = -1;
static int32_t x1267 = 0;
int16_t x1268 = INT16_MIN;
int8_t x1380 = -2;
uint32_t t26 = 2103101564U;
volatile int8_t x1398 = INT8_MAX;
int64_t t27 = -4084997619LL;
uint16_t x1417 = UINT16_MAX;
int8_t x1419 = 1;
uint16_t x1611 = 6U;
int32_t x1674 = -1;
uint8_t x1675 = 8U;
int32_t x1729 = -1;
int8_t x1731 = 10;
int32_t x2022 = INT32_MIN;
volatile int64_t t40 = 24749563725LL;
int32_t t41 = 505391703;
int8_t x2222 = INT8_MIN;
volatile uint16_t x2246 = 31923U;
volatile int32_t x2248 = -13;
int32_t x2274 = -1;
uint8_t x2275 = 0U;
int16_t x2277 = INT16_MAX;
volatile int64_t t46 = INT64_MAX;
volatile uint32_t t47 = 70919967U;
uint16_t x2355 = 8U;
uint8_t x2379 = 27U;
int32_t x2445 = 1921511;
uint64_t x2446 = 272847819570LLU;
int16_t x2454 = -1;
static int64_t x2505 = INT64_MAX;
uint64_t x2552 = 2881001983LLU;
volatile int16_t x2728 = -1;
uint64_t x2774 = UINT64_MAX;
int16_t x2869 = INT16_MIN;
uint8_t x2875 = 28U;
uint32_t x2962 = UINT32_MAX;
static int64_t t66 = -4LL;
uint32_t t67 = 10U;
static uint32_t x3151 = 15U;
static int8_t x3152 = INT8_MIN;
static int16_t x3161 = 56;
uint16_t x3164 = UINT16_MAX;
int64_t x3182 = INT64_MIN;
uint32_t x3184 = 396460U;
int8_t x3247 = 43;
uint32_t x3293 = 14671943U;
volatile int64_t x3294 = -9712LL;
static volatile uint32_t x3295 = 11U;
static volatile uint64_t x3297 = 14195217LLU;
int32_t x3298 = INT32_MIN;
volatile int32_t x3332 = INT32_MIN;
int16_t x3339 = 10;
volatile int16_t x3417 = -1;
uint16_t x3418 = 1U;
int32_t t79 = -2645967;
volatile int64_t x3433 = INT64_MAX;
int64_t x3434 = -7434670556070LL;
int8_t x3435 = 2;
uint64_t x3530 = UINT64_MAX;
uint8_t x3531 = 24U;
int32_t x3532 = INT32_MIN;
int8_t x3546 = 14;
volatile int8_t x3547 = 8;
static int64_t t85 = 5LL;
static int64_t x3577 = INT64_MIN;
int32_t x3602 = INT32_MIN;
static volatile uint16_t x3604 = 8U;
volatile uint16_t x3663 = 1U;
static int16_t x3685 = -1;
int16_t x3687 = 1;
int64_t x3688 = INT64_MAX;
volatile int64_t t89 = INT64_MAX;
uint64_t x3774 = 2293041863LLU;
volatile int16_t x3857 = INT16_MAX;
static volatile int32_t t96 = -4807919;
int8_t x3953 = INT8_MAX;
volatile int8_t x3954 = -1;
uint16_t x3983 = 2U;
int32_t x4037 = -1;


void f0(void) {
	volatile int8_t x237 = INT8_MAX;
	uint8_t x238 = 113U;
	int8_t x239 = 22;
	int32_t x240 = INT32_MAX;
	static int32_t t0 = INT32_MAX;

	t0 = (((x237%x238)>>x239)^x240);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x342 = 18U;
	uint64_t t1 = 49236266110LLU;

	t1 = (((x341%x342)>>x343)^x344);

	if (t1 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = -496;
	volatile int32_t t2 = 1466;

	t2 = (((x369%x370)>>x371)^x372);

	if (t2 != -4) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x374 = -1;
	volatile uint8_t x375 = 4U;
	int64_t x376 = INT64_MIN;

	t3 = (((x373%x374)>>x375)^x376);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x453 = -1;
	uint32_t x454 = 35298011U;
	volatile uint16_t x455 = 12U;
	static int8_t x456 = -1;
	uint32_t t4 = 292143U;

	t4 = (((x453%x454)>>x455)^x456);

	if (t4 != 4294961459U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x569 = INT8_MAX;
	uint64_t x570 = UINT64_MAX;
	static int8_t x571 = 0;
	volatile uint64_t t5 = 1300267958862361462LLU;

	t5 = (((x569%x570)>>x571)^x572);

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x781 = INT32_MAX;
	volatile int8_t x783 = 1;
	static int64_t x784 = INT64_MAX;
	int64_t t6 = -476349054119634656LL;

	t6 = (((x781%x782)>>x783)^x784);

	if (t6 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x789 = INT8_MAX;
	static int64_t x790 = INT64_MAX;
	static int8_t x791 = 2;
	volatile int16_t x792 = INT16_MIN;
	int64_t t7 = -47164334393180317LL;

	t7 = (((x789%x790)>>x791)^x792);

	if (t7 != -32737LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x810 = INT8_MAX;
	uint8_t x811 = 0U;
	static int32_t x812 = INT32_MIN;
	volatile int32_t t8 = 0;

	t8 = (((x809%x810)>>x811)^x812);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x845 = -67417725665LL;
	int32_t x846 = 1;

	t9 = (((x845%x846)>>x847)^x848);

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x865 = 16;
	volatile int16_t x866 = INT16_MIN;
	static int8_t x867 = 8;
	int8_t x868 = -1;
	int32_t t10 = -1;

	t10 = (((x865%x866)>>x867)^x868);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x905 = 32U;
	static int32_t x906 = INT32_MIN;
	volatile uint16_t x907 = 1U;
	int8_t x908 = 1;
	static volatile uint32_t t11 = 207U;

	t11 = (((x905%x906)>>x907)^x908);

	if (t11 != 17U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x909 = UINT8_MAX;
	int64_t x910 = INT64_MIN;
	static int16_t x911 = 2;
	uint16_t x912 = 2381U;

	t12 = (((x909%x910)>>x911)^x912);

	if (t12 != 2418LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x957 = -1;
	static int64_t x958 = -1LL;
	static uint16_t x959 = 1U;

	t13 = (((x957%x958)>>x959)^x960);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x973 = INT32_MAX;
	volatile int8_t x974 = INT8_MIN;
	int32_t x975 = 3;
	static uint64_t x976 = UINT64_MAX;
	volatile uint64_t t14 = 2747702LLU;

	t14 = (((x973%x974)>>x975)^x976);

	if (t14 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1013 = -1;
	uint64_t x1014 = UINT64_MAX;
	int64_t x1016 = INT64_MIN;
	uint64_t t15 = 479828LLU;

	t15 = (((x1013%x1014)>>x1015)^x1016);

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1061 = INT8_MAX;
	int8_t x1062 = INT8_MIN;
	int8_t x1063 = 1;
	int32_t t16 = 2077190;

	t16 = (((x1061%x1062)>>x1063)^x1064);

	if (t16 != -43) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1141 = INT64_MAX;
	int16_t x1142 = -1;
	volatile uint32_t x1143 = 36U;
	uint64_t x1144 = 16643662334649016LLU;

	t17 = (((x1141%x1142)>>x1143)^x1144);

	if (t17 != 16643662334649016LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x1233 = INT8_MIN;
	static int8_t x1235 = 5;
	int16_t x1236 = INT16_MIN;

	t18 = (((x1233%x1234)>>x1235)^x1236);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1261 = 3384U;
	int16_t x1263 = 5;
	volatile uint32_t x1264 = 3U;
	volatile uint32_t t19 = 560U;

	t19 = (((x1261%x1262)>>x1263)^x1264);

	if (t19 != 106U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1265 = UINT16_MAX;
	int64_t x1266 = -57598720LL;
	int64_t t20 = -283161LL;

	t20 = (((x1265%x1266)>>x1267)^x1268);

	if (t20 != -32769LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x1285 = 21U;
	volatile uint32_t x1286 = 95774U;
	uint8_t x1287 = 0U;
	int64_t x1288 = -1LL;
	int64_t t21 = -921668222665709LL;

	t21 = (((x1285%x1286)>>x1287)^x1288);

	if (t21 != -22LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1297 = UINT64_MAX;
	volatile int64_t x1298 = INT64_MIN;
	int64_t x1299 = 1LL;
	static uint8_t x1300 = 69U;
	static uint64_t t22 = 51402979931443175LLU;

	t22 = (((x1297%x1298)>>x1299)^x1300);

	if (t22 != 4611686018427387834LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1357 = UINT32_MAX;
	uint32_t x1358 = UINT32_MAX;
	uint16_t x1359 = 1U;
	uint32_t x1360 = 374021031U;
	static uint32_t t23 = 453191U;

	t23 = (((x1357%x1358)>>x1359)^x1360);

	if (t23 != 374021031U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1377 = 25951523039473419LL;
	uint16_t x1378 = 104U;
	uint8_t x1379 = 0U;
	int64_t t24 = 157319568972LL;

	t24 = (((x1377%x1378)>>x1379)^x1380);

	if (t24 != -11LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1385 = 3U;
	int16_t x1386 = INT16_MIN;
	uint8_t x1387 = 2U;
	volatile uint32_t x1388 = 1U;
	volatile uint32_t t25 = 9423742U;

	t25 = (((x1385%x1386)>>x1387)^x1388);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1389 = INT8_MIN;
	volatile uint32_t x1390 = 50390145U;
	volatile int8_t x1391 = 13;
	static int32_t x1392 = INT32_MAX;

	t26 = (((x1389%x1390)>>x1391)^x1392);

	if (t26 != 2147482206U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1397 = UINT32_MAX;
	volatile uint16_t x1399 = 0U;
	int64_t x1400 = INT64_MAX;

	t27 = (((x1397%x1398)>>x1399)^x1400);

	if (t27 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1401 = UINT8_MAX;
	int32_t x1402 = -1;
	uint8_t x1403 = 23U;
	int64_t x1404 = INT64_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = (((x1401%x1402)>>x1403)^x1404);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1409 = -13720LL;
	uint8_t x1410 = 20U;
	static uint16_t x1411 = 15U;
	uint32_t x1412 = 18771U;
	int64_t t29 = 1972678955532LL;

	t29 = (((x1409%x1410)>>x1411)^x1412);

	if (t29 != 18771LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1418 = 26U;
	uint64_t x1420 = UINT64_MAX;
	volatile uint64_t t30 = 892436822LLU;

	t30 = (((x1417%x1418)>>x1419)^x1420);

	if (t30 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1433 = 5009677U;
	static int8_t x1434 = INT8_MIN;
	int8_t x1435 = 1;
	volatile int8_t x1436 = 0;
	volatile uint32_t t31 = 1285877148U;

	t31 = (((x1433%x1434)>>x1435)^x1436);

	if (t31 != 2504838U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1609 = 3595;
	int16_t x1610 = -487;
	static volatile int32_t x1612 = -192485;
	volatile int32_t t32 = -2968;

	t32 = (((x1609%x1610)>>x1611)^x1612);

	if (t32 != -192487) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x1613 = -204448;
	int16_t x1614 = -1;
	volatile uint32_t x1615 = 5U;
	int64_t x1616 = INT64_MIN;
	static volatile int64_t t33 = INT64_MIN;

	t33 = (((x1613%x1614)>>x1615)^x1616);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1625 = 561;
	volatile int16_t x1626 = -7;
	volatile int8_t x1627 = 11;
	uint32_t x1628 = 383991U;
	volatile uint32_t t34 = 556082U;

	t34 = (((x1625%x1626)>>x1627)^x1628);

	if (t34 != 383991U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1673 = INT64_MAX;
	uint8_t x1676 = 5U;
	int64_t t35 = -3941895561LL;

	t35 = (((x1673%x1674)>>x1675)^x1676);

	if (t35 != 5LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1730 = 1U;
	volatile uint32_t x1732 = UINT32_MAX;
	uint32_t t36 = UINT32_MAX;

	t36 = (((x1729%x1730)>>x1731)^x1732);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1749 = INT64_MIN;
	volatile int32_t x1750 = -1;
	uint16_t x1751 = 11U;
	volatile int8_t x1752 = -1;
	int64_t t37 = -128868676682LL;

	t37 = (((x1749%x1750)>>x1751)^x1752);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1853 = 1313;
	volatile uint8_t x1854 = 12U;
	volatile uint16_t x1855 = 20U;
	volatile uint64_t x1856 = 8076946124349235616LLU;
	uint64_t t38 = 28641618756654201LLU;

	t38 = (((x1853%x1854)>>x1855)^x1856);

	if (t38 != 8076946124349235616LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1913 = INT8_MAX;
	int16_t x1914 = INT16_MAX;
	uint8_t x1915 = 6U;
	volatile int32_t x1916 = INT32_MIN;
	int32_t t39 = 355173567;

	t39 = (((x1913%x1914)>>x1915)^x1916);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2021 = 5349870708152LL;
	volatile int16_t x2023 = 23;
	uint8_t x2024 = 26U;

	t40 = (((x2021%x2022)>>x2023)^x2024);

	if (t40 != 32LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2101 = INT32_MAX;
	int16_t x2102 = -62;
	int8_t x2103 = 5;
	static uint8_t x2104 = UINT8_MAX;

	t41 = (((x2101%x2102)>>x2103)^x2104);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2221 = INT32_MIN;
	uint8_t x2223 = 7U;
	uint32_t x2224 = 3U;
	uint32_t t42 = 1U;

	t42 = (((x2221%x2222)>>x2223)^x2224);

	if (t42 != 3U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2245 = INT64_MAX;
	uint64_t x2247 = 60LLU;
	volatile int64_t t43 = -49658666063282081LL;

	t43 = (((x2245%x2246)>>x2247)^x2248);

	if (t43 != -13LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2273 = 45;
	volatile int16_t x2276 = 1;
	static int32_t t44 = -459717;

	t44 = (((x2273%x2274)>>x2275)^x2276);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2278 = INT16_MIN;
	uint32_t x2279 = 0U;
	int16_t x2280 = -1;
	volatile int32_t t45 = -471;

	t45 = (((x2277%x2278)>>x2279)^x2280);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2285 = UINT8_MAX;
	int16_t x2286 = -3;
	volatile uint64_t x2287 = 3LLU;
	int64_t x2288 = INT64_MAX;

	t46 = (((x2285%x2286)>>x2287)^x2288);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2329 = 106399U;
	static int8_t x2330 = -1;
	volatile int64_t x2331 = 1LL;
	volatile uint16_t x2332 = UINT16_MAX;

	t47 = (((x2329%x2330)>>x2331)^x2332);

	if (t47 != 12336U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2353 = INT32_MAX;
	int8_t x2354 = INT8_MAX;
	int16_t x2356 = INT16_MAX;
	static int32_t t48 = 1846;

	t48 = (((x2353%x2354)>>x2355)^x2356);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2377 = INT64_MIN;
	int64_t x2378 = INT64_MIN;
	uint64_t x2380 = 813LLU;
	volatile uint64_t t49 = 408942726460LLU;

	t49 = (((x2377%x2378)>>x2379)^x2380);

	if (t49 != 813LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2447 = 1;
	volatile uint64_t x2448 = 13105270460812238LLU;
	volatile uint64_t t50 = 508420215LLU;

	t50 = (((x2445%x2446)>>x2447)^x2448);

	if (t50 != 13105270461702973LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2453 = -1;
	volatile uint8_t x2455 = 3U;
	static int8_t x2456 = -1;
	int32_t t51 = -38;

	t51 = (((x2453%x2454)>>x2455)^x2456);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2506 = 442120;
	uint8_t x2507 = 2U;
	volatile int64_t x2508 = 1139404255330LL;
	static volatile int64_t t52 = 9LL;

	t52 = (((x2505%x2506)>>x2507)^x2508);

	if (t52 != 1139404181591LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2525 = UINT32_MAX;
	int8_t x2526 = -1;
	uint8_t x2527 = 10U;
	uint16_t x2528 = 2U;
	static volatile uint32_t t53 = 508U;

	t53 = (((x2525%x2526)>>x2527)^x2528);

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2549 = -1;
	uint32_t x2550 = 711074U;
	uint8_t x2551 = 22U;
	volatile uint64_t t54 = 1063963220LLU;

	t54 = (((x2549%x2550)>>x2551)^x2552);

	if (t54 != 2881001983LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2569 = 6;
	volatile int16_t x2570 = -168;
	int32_t x2571 = 12;
	int8_t x2572 = INT8_MAX;
	int32_t t55 = 503809617;

	t55 = (((x2569%x2570)>>x2571)^x2572);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2637 = UINT16_MAX;
	uint32_t x2638 = 7498337U;
	int16_t x2639 = 0;
	volatile uint8_t x2640 = 101U;
	static uint32_t t56 = 21775U;

	t56 = (((x2637%x2638)>>x2639)^x2640);

	if (t56 != 65434U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2725 = INT16_MAX;
	int64_t x2726 = -5466745490816276LL;
	static int8_t x2727 = 2;
	volatile int64_t t57 = 34636303337589LL;

	t57 = (((x2725%x2726)>>x2727)^x2728);

	if (t57 != -8192LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2741 = 123284U;
	volatile int8_t x2742 = INT8_MAX;
	static int8_t x2743 = 0;
	static int32_t x2744 = -1;
	volatile uint32_t t58 = 43691U;

	t58 = (((x2741%x2742)>>x2743)^x2744);

	if (t58 != 4294967201U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2769 = INT8_MIN;
	int8_t x2770 = INT8_MIN;
	int8_t x2771 = 3;
	uint32_t x2772 = UINT32_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = (((x2769%x2770)>>x2771)^x2772);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2773 = 284109U;
	uint8_t x2775 = 1U;
	static volatile int64_t x2776 = INT64_MIN;
	volatile uint64_t t60 = 3LLU;

	t60 = (((x2773%x2774)>>x2775)^x2776);

	if (t60 != 9223372036854917862LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2849 = INT32_MIN;
	int32_t x2850 = INT32_MIN;
	int16_t x2851 = 1;
	int8_t x2852 = -1;
	static int32_t t61 = -5620;

	t61 = (((x2849%x2850)>>x2851)^x2852);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2870 = 2;
	uint8_t x2871 = 0U;
	static volatile int16_t x2872 = INT16_MAX;
	int32_t t62 = -6954773;

	t62 = (((x2869%x2870)>>x2871)^x2872);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x2873 = -1;
	static uint64_t x2874 = 4659014477LLU;
	volatile int64_t x2876 = INT64_MIN;
	uint64_t t63 = 147LLU;

	t63 = (((x2873%x2874)>>x2875)^x2876);

	if (t63 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2957 = INT32_MAX;
	int16_t x2958 = -1;
	uint8_t x2959 = 13U;
	volatile int32_t x2960 = 163;
	int32_t t64 = 355;

	t64 = (((x2957%x2958)>>x2959)^x2960);

	if (t64 != 163) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2961 = 7528862LLU;
	volatile uint16_t x2963 = 3U;
	int32_t x2964 = INT32_MIN;
	uint64_t t65 = 4049300LLU;

	t65 = (((x2961%x2962)>>x2963)^x2964);

	if (t65 != 18446744071563009075LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2985 = INT16_MIN;
	static int64_t x2986 = -1LL;
	int8_t x2987 = 1;
	int64_t x2988 = 12312119LL;

	t66 = (((x2985%x2986)>>x2987)^x2988);

	if (t66 != 12312119LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3001 = UINT32_MAX;
	static int32_t x3002 = INT32_MAX;
	uint32_t x3003 = 5U;
	volatile int8_t x3004 = -18;

	t67 = (((x3001%x3002)>>x3003)^x3004);

	if (t67 != 4294967278U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3109 = INT64_MAX;
	volatile int64_t x3110 = -1LL;
	static int16_t x3111 = 7;
	volatile int8_t x3112 = -1;
	static volatile int64_t t68 = -3109765583475LL;

	t68 = (((x3109%x3110)>>x3111)^x3112);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3141 = -1927672;
	int64_t x3142 = -1LL;
	int16_t x3143 = 3;
	uint64_t x3144 = UINT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x3141%x3142)>>x3143)^x3144);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3149 = INT64_MIN;
	int16_t x3150 = INT16_MIN;
	int64_t t70 = -2684884LL;

	t70 = (((x3149%x3150)>>x3151)^x3152);

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3162 = INT8_MAX;
	volatile uint8_t x3163 = 1U;
	int32_t t71 = -19;

	t71 = (((x3161%x3162)>>x3163)^x3164);

	if (t71 != 65507) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3181 = UINT32_MAX;
	static uint64_t x3183 = 0LLU;
	volatile int64_t t72 = 30542452678996LL;

	t72 = (((x3181%x3182)>>x3183)^x3184);

	if (t72 != 4294570835LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3233 = 3368744530740LLU;
	volatile int16_t x3234 = 62;
	uint16_t x3235 = 6U;
	volatile int16_t x3236 = -4462;
	volatile uint64_t t73 = 1328376325397LLU;

	t73 = (((x3233%x3234)>>x3235)^x3236);

	if (t73 != 18446744073709547154LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3245 = 330327091LLU;
	uint8_t x3246 = 51U;
	static int16_t x3248 = -1;
	uint64_t t74 = UINT64_MAX;

	t74 = (((x3245%x3246)>>x3247)^x3248);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3296 = UINT16_MAX;
	static int64_t t75 = -168076236489773457LL;

	t75 = (((x3293%x3294)>>x3295)^x3296);

	if (t75 != 65532LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x3299 = 14U;
	int32_t x3300 = INT32_MIN;
	volatile uint64_t t76 = 431456LLU;

	t76 = (((x3297%x3298)>>x3299)^x3300);

	if (t76 != 18446744071562068834LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3329 = 3086009U;
	int16_t x3330 = 44;
	int8_t x3331 = 24;
	static volatile uint32_t t77 = 20652U;

	t77 = (((x3329%x3330)>>x3331)^x3332);

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3337 = UINT16_MAX;
	uint8_t x3338 = UINT8_MAX;
	uint32_t x3340 = 7U;
	volatile uint32_t t78 = 1677U;

	t78 = (((x3337%x3338)>>x3339)^x3340);

	if (t78 != 7U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3419 = 0U;
	int8_t x3420 = INT8_MIN;

	t79 = (((x3417%x3418)>>x3419)^x3420);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3436 = INT8_MAX;
	int64_t t80 = 989714LL;

	t80 = (((x3433%x3434)>>x3435)^x3436);

	if (t80 != 381592612699LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3509 = INT16_MAX;
	volatile int64_t x3510 = INT64_MIN;
	uint16_t x3511 = 0U;
	int32_t x3512 = -7572;
	int64_t t81 = -963929723LL;

	t81 = (((x3509%x3510)>>x3511)^x3512);

	if (t81 != -25197LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3517 = UINT64_MAX;
	int16_t x3518 = 1514;
	volatile uint8_t x3519 = 2U;
	volatile int16_t x3520 = INT16_MIN;
	static uint64_t t82 = 10402993710841629LLU;

	t82 = (((x3517%x3518)>>x3519)^x3520);

	if (t82 != 18446744073709519187LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x3529 = UINT64_MAX;
	uint64_t t83 = 719021572278466672LLU;

	t83 = (((x3529%x3530)>>x3531)^x3532);

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x3545 = 676875756280557LLU;
	volatile int64_t x3548 = 5309992862LL;
	volatile uint64_t t84 = 1054685033LLU;

	t84 = (((x3545%x3546)>>x3547)^x3548);

	if (t84 != 5309992862LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x3553 = INT8_MIN;
	static int16_t x3554 = -1;
	volatile int8_t x3555 = 0;
	int64_t x3556 = -1LL;

	t85 = (((x3553%x3554)>>x3555)^x3556);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3578 = INT64_MIN;
	static int16_t x3579 = 15;
	int16_t x3580 = INT16_MIN;
	static volatile int64_t t86 = 0LL;

	t86 = (((x3577%x3578)>>x3579)^x3580);

	if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3601 = INT32_MIN;
	static int8_t x3603 = 1;
	static volatile int32_t t87 = 52;

	t87 = (((x3601%x3602)>>x3603)^x3604);

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3661 = INT64_MIN;
	int8_t x3662 = INT8_MIN;
	static int8_t x3664 = 1;
	static int64_t t88 = 1LL;

	t88 = (((x3661%x3662)>>x3663)^x3664);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x3686 = -1;

	t89 = (((x3685%x3686)>>x3687)^x3688);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3689 = -231;
	volatile int8_t x3690 = -1;
	static uint16_t x3691 = 24U;
	int64_t x3692 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (((x3689%x3690)>>x3691)^x3692);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3733 = 1088596305LLU;
	int16_t x3734 = INT16_MAX;
	static uint64_t x3735 = 14LLU;
	int8_t x3736 = -1;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x3733%x3734)>>x3735)^x3736);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3773 = UINT16_MAX;
	static volatile uint8_t x3775 = 13U;
	volatile int64_t x3776 = INT64_MAX;
	volatile uint64_t t92 = 3LLU;

	t92 = (((x3773%x3774)>>x3775)^x3776);

	if (t92 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3781 = -1;
	uint64_t x3782 = 23176344760136LLU;
	int32_t x3783 = 52;
	int16_t x3784 = 0;
	volatile uint64_t t93 = 13027LLU;

	t93 = (((x3781%x3782)>>x3783)^x3784);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x3837 = UINT32_MAX;
	uint64_t x3838 = UINT64_MAX;
	uint32_t x3839 = 0U;
	static volatile uint16_t x3840 = UINT16_MAX;
	volatile uint64_t t94 = 8093013219816LLU;

	t94 = (((x3837%x3838)>>x3839)^x3840);

	if (t94 != 4294901760LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3845 = INT8_MIN;
	uint32_t x3846 = 329032506U;
	uint16_t x3847 = 3U;
	int32_t x3848 = INT32_MAX;
	static volatile uint32_t t95 = 4U;

	t95 = (((x3845%x3846)>>x3847)^x3848);

	if (t95 != 2145290574U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x3858 = 2U;
	uint8_t x3859 = 6U;
	volatile uint8_t x3860 = UINT8_MAX;

	t96 = (((x3857%x3858)>>x3859)^x3860);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3955 = 2U;
	static uint8_t x3956 = UINT8_MAX;
	int32_t t97 = -14216;

	t97 = (((x3953%x3954)>>x3955)^x3956);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x3981 = UINT8_MAX;
	int16_t x3982 = -5;
	int8_t x3984 = INT8_MIN;
	static int32_t t98 = 0;

	t98 = (((x3981%x3982)>>x3983)^x3984);

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4038 = UINT64_MAX;
	uint8_t x4039 = 35U;
	static int8_t x4040 = INT8_MIN;
	uint64_t t99 = 6927940871019872LLU;

	t99 = (((x4037%x4038)>>x4039)^x4040);

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

