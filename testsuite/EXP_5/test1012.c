#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = -1;
static uint32_t x4 = UINT32_MAX;
int32_t x102 = 7489710;
static int64_t x121 = INT64_MAX;
int32_t x289 = INT32_MIN;
uint32_t x358 = UINT32_MAX;
int64_t x360 = INT64_MIN;
int8_t x456 = -1;
static int8_t x585 = 55;
uint8_t x587 = 1U;
static volatile uint32_t t8 = 27564U;
volatile uint64_t x625 = 590072LLU;
uint32_t x627 = 0U;
volatile uint64_t t9 = 1645907524737LLU;
uint8_t x699 = 0U;
uint32_t x986 = 10U;
uint64_t t15 = 336LLU;
static int8_t x1237 = INT8_MIN;
volatile int32_t x1285 = INT32_MIN;
volatile uint8_t x1314 = 9U;
int8_t x1315 = 0;
int64_t x1337 = INT64_MIN;
uint8_t x1375 = 7U;
int64_t x1381 = INT64_MAX;
static uint8_t x1383 = 26U;
int8_t x1403 = 10;
volatile uint8_t x1477 = UINT8_MAX;
uint8_t x1480 = 36U;
static uint8_t x1583 = 15U;
uint8_t x1615 = 6U;
volatile uint16_t x1812 = 251U;
volatile int32_t t36 = 843;
int8_t x1857 = INT8_MAX;
int64_t x2125 = INT64_MIN;
volatile uint8_t x2193 = 7U;
uint32_t t40 = 1U;
int64_t x2417 = INT64_MAX;
static uint16_t x2423 = 3U;
int16_t x2703 = 2;
int32_t t46 = -7;
volatile uint64_t t48 = 264335706LLU;
static volatile int64_t x2869 = 65946838LL;
int8_t x2871 = 0;
uint16_t x3014 = 3U;
static int32_t t51 = 241761807;
volatile uint16_t x3224 = 1U;
uint8_t x3695 = 10U;
volatile int8_t x3739 = 1;
int8_t x3767 = 9;
static uint8_t x3931 = 0U;
volatile uint64_t x3932 = 95917606LLU;
volatile uint64_t t57 = 262034029032280913LLU;
uint64_t t59 = 877414355725LLU;
int64_t x4233 = 1765287227288209LL;
static volatile int64_t t61 = 172421726160LL;
static int16_t x4281 = INT16_MIN;
static int16_t x4282 = INT16_MAX;
volatile int32_t t62 = -963;
uint16_t x4287 = 0U;
uint64_t x4364 = UINT64_MAX;
uint8_t x4481 = UINT8_MAX;
uint32_t x4557 = 14388816U;
volatile uint16_t x4592 = UINT16_MAX;
int32_t t68 = -1613505;
uint64_t x4593 = 7922231626882LLU;
int16_t x4595 = 1;
uint64_t x4666 = UINT64_MAX;
uint64_t x4685 = UINT64_MAX;
int32_t x4686 = 52617;
uint8_t x4687 = 4U;
uint64_t x4765 = UINT64_MAX;
volatile uint32_t x4770 = 1818U;
static volatile uint32_t t74 = 215820U;
volatile int16_t x4873 = -1;
int16_t x4874 = 5588;
uint16_t x4875 = 1U;
int32_t x4876 = INT32_MIN;
uint64_t x4878 = 11787053992LLU;
int64_t x4880 = -1LL;
volatile uint64_t t77 = 763LLU;
uint8_t x4958 = 4U;
int16_t x4970 = 568;
volatile int64_t t79 = 1211169843967675LL;
int16_t x5073 = 14;
int8_t x5075 = 1;
uint8_t x5076 = UINT8_MAX;
volatile uint32_t x5135 = 0U;
static volatile uint32_t x5194 = UINT32_MAX;
volatile int8_t x5222 = 54;
volatile int64_t t87 = -97117LL;
int16_t x5394 = INT16_MAX;
uint8_t x5395 = 0U;
int16_t x5396 = 2037;
static volatile uint8_t x5436 = 58U;
uint64_t t89 = 20079595LLU;
volatile uint8_t x5469 = 0U;
uint8_t x5471 = 14U;
uint16_t x5484 = UINT16_MAX;
uint32_t t92 = 142609768U;
int8_t x5497 = -10;
volatile int64_t x5499 = 1LL;
int32_t t94 = 2;
volatile int64_t x5662 = 1LL;
int16_t x5975 = 3;
volatile uint8_t x5982 = 7U;
static int32_t x5984 = INT32_MIN;
int64_t x6074 = INT64_MAX;
volatile uint64_t x6075 = 0LLU;


void f0(void) {
	int64_t x2 = 3229538494LL;
	int8_t x3 = 5;
	volatile int64_t t0 = 0LL;

	t0 = (x1&((x2<<x3)^x4));

	if (t0 != 107108165695LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -26LL;
	uint64_t x14 = 9LLU;
	volatile uint64_t x15 = 5LLU;
	int16_t x16 = INT16_MIN;
	static uint64_t t1 = 54LLU;

	t1 = (x13&((x14<<x15)^x16));

	if (t1 != 18446744073709519136LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x101 = INT8_MIN;
	volatile int16_t x103 = 2;
	int16_t x104 = INT16_MIN;
	volatile int32_t t2 = 0;

	t2 = (x101&((x102<<x103)^x104));

	if (t2 != -29973888) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x122 = INT16_MAX;
	int16_t x123 = 0;
	int16_t x124 = -14324;
	int64_t t3 = 13LL;

	t3 = (x121&((x122<<x123)^x124));

	if (t3 != 9223372036854757363LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x290 = 365;
	uint16_t x291 = 3U;
	uint64_t x292 = UINT64_MAX;
	uint64_t t4 = 71847LLU;

	t4 = (x289&((x290<<x291)^x292));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x359 = 22;
	static volatile int64_t t5 = 731LL;

	t5 = (x357&((x358<<x359)^x360));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x453 = -76629896043239LL;
	uint16_t x454 = UINT16_MAX;
	uint8_t x455 = 5U;
	static int64_t t6 = -13874863094466668LL;

	t6 = (x453&((x454<<x455)^x456));

	if (t6 != -76629896331239LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x586 = INT8_MAX;
	uint16_t x588 = 3U;
	int32_t t7 = -1037149;

	t7 = (x585&((x586<<x587)^x588));

	if (t7 != 53) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x589 = UINT8_MAX;
	uint32_t x590 = UINT32_MAX;
	uint64_t x591 = 5LLU;
	volatile int32_t x592 = INT32_MIN;

	t8 = (x589&((x590<<x591)^x592));

	if (t8 != 224U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x626 = UINT8_MAX;
	uint16_t x628 = 320U;

	t9 = (x625&((x626<<x627)^x628));

	if (t9 != 184LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x697 = 2103172LLU;
	volatile uint32_t x698 = 3812U;
	int32_t x700 = 105115;
	volatile uint64_t t10 = 23273091LLU;

	t10 = (x697&((x698<<x699)^x700));

	if (t10 != 5124LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x741 = -33001980;
	uint64_t x742 = 5942LLU;
	int8_t x743 = 1;
	int8_t x744 = -1;
	static volatile uint64_t t11 = 227612LLU;

	t11 = (x741&((x742<<x743)^x744));

	if (t11 != 18446744073676537856LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x845 = 0U;
	static int8_t x846 = INT8_MAX;
	uint8_t x847 = 11U;
	volatile uint16_t x848 = 129U;
	volatile int32_t t12 = 247080;

	t12 = (x845&((x846<<x847)^x848));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x929 = INT16_MIN;
	static volatile uint64_t x930 = 119410773319276178LLU;
	uint64_t x931 = 1LLU;
	int8_t x932 = INT8_MIN;
	volatile uint64_t t13 = 4393793179240190012LLU;

	t13 = (x929&((x930<<x931)^x932));

	if (t13 != 18207922527070978048LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x985 = INT32_MAX;
	uint32_t x987 = 25U;
	int64_t x988 = INT64_MAX;
	volatile int64_t t14 = 1099672403LL;

	t14 = (x985&((x986<<x987)^x988));

	if (t14 != 1811939327LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1025 = 152686364981LLU;
	volatile int32_t x1026 = INT32_MAX;
	static volatile uint8_t x1027 = 0U;
	uint64_t x1028 = UINT64_MAX;

	t15 = (x1025&((x1026<<x1027)^x1028));

	if (t15 != 152471339008LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1238 = INT8_MAX;
	uint16_t x1239 = 0U;
	int16_t x1240 = INT16_MIN;
	volatile int32_t t16 = 1020556;

	t16 = (x1237&((x1238<<x1239)^x1240));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1286 = 24U;
	uint8_t x1287 = 2U;
	volatile int16_t x1288 = 191;
	volatile int32_t t17 = 452274;

	t17 = (x1285&((x1286<<x1287)^x1288));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1313 = INT32_MIN;
	uint8_t x1316 = 1U;
	volatile int32_t t18 = 9;

	t18 = (x1313&((x1314<<x1315)^x1316));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1317 = 7464;
	uint8_t x1318 = 4U;
	int8_t x1319 = 5;
	volatile int16_t x1320 = -1;
	int32_t t19 = -1;

	t19 = (x1317&((x1318<<x1319)^x1320));

	if (t19 != 7464) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1333 = 1U;
	int16_t x1334 = INT16_MAX;
	uint16_t x1335 = 14U;
	int16_t x1336 = -1;
	int32_t t20 = -31460;

	t20 = (x1333&((x1334<<x1335)^x1336));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1338 = UINT16_MAX;
	volatile uint8_t x1339 = 3U;
	volatile uint32_t x1340 = UINT32_MAX;
	int64_t t21 = 1654300743LL;

	t21 = (x1337&((x1338<<x1339)^x1340));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1373 = -1;
	static volatile uint32_t x1374 = UINT32_MAX;
	uint8_t x1376 = 105U;
	static volatile uint32_t t22 = 1U;

	t22 = (x1373&((x1374<<x1375)^x1376));

	if (t22 != 4294967273U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1382 = 1000238U;
	int64_t x1384 = 0LL;
	static int64_t t23 = -10955LL;

	t23 = (x1381&((x1382<<x1383)^x1384));

	if (t23 != 3087007744LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1393 = UINT16_MAX;
	uint8_t x1394 = 118U;
	uint16_t x1395 = 15U;
	volatile int16_t x1396 = INT16_MAX;
	int32_t t24 = 3;

	t24 = (x1393&((x1394<<x1395)^x1396));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1401 = INT16_MIN;
	uint16_t x1402 = UINT16_MAX;
	int16_t x1404 = -1;
	int32_t t25 = 233;

	t25 = (x1401&((x1402<<x1403)^x1404));

	if (t25 != -67108864) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1413 = 3U;
	static uint8_t x1414 = 27U;
	static int8_t x1415 = 8;
	int32_t x1416 = -1;
	static volatile int32_t t26 = 251;

	t26 = (x1413&((x1414<<x1415)^x1416));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1437 = 577231197504LL;
	uint16_t x1438 = UINT16_MAX;
	uint8_t x1439 = 0U;
	int64_t x1440 = 13LL;
	volatile int64_t t27 = -3LL;

	t27 = (x1437&((x1438<<x1439)^x1440));

	if (t27 != 5440LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1473 = INT16_MIN;
	int32_t x1474 = 509021926;
	static volatile uint8_t x1475 = 2U;
	int32_t x1476 = INT32_MIN;
	int32_t t28 = 26309233;

	t28 = (x1473&((x1474<<x1475)^x1476));

	if (t28 != -111411200) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1478 = UINT8_MAX;
	volatile uint64_t x1479 = 2LLU;
	int32_t t29 = -1404947;

	t29 = (x1477&((x1478<<x1479)^x1480));

	if (t29 != 216) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1549 = 89671;
	uint32_t x1550 = UINT32_MAX;
	int8_t x1551 = 1;
	volatile int16_t x1552 = INT16_MIN;
	static uint32_t t30 = 3880U;

	t30 = (x1549&((x1550<<x1551)^x1552));

	if (t30 != 24134U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1565 = 9;
	int16_t x1566 = INT16_MAX;
	uint8_t x1567 = 1U;
	int16_t x1568 = INT16_MIN;
	int32_t t31 = 1;

	t31 = (x1565&((x1566<<x1567)^x1568));

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1581 = INT8_MAX;
	static volatile uint16_t x1582 = UINT16_MAX;
	volatile uint64_t x1584 = 185717LLU;
	volatile uint64_t t32 = 766685271347LLU;

	t32 = (x1581&((x1582<<x1583)^x1584));

	if (t32 != 117LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1613 = INT16_MIN;
	static volatile uint16_t x1614 = 193U;
	int8_t x1616 = 1;
	volatile int32_t t33 = 0;

	t33 = (x1613&((x1614<<x1615)^x1616));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1717 = 628;
	uint64_t x1718 = 24971142LLU;
	static uint8_t x1719 = 15U;
	int16_t x1720 = INT16_MIN;
	volatile uint64_t t34 = 89019677LLU;

	t34 = (x1717&((x1718<<x1719)^x1720));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1745 = -495;
	uint32_t x1746 = UINT32_MAX;
	int16_t x1747 = 24;
	uint32_t x1748 = 14405082U;
	static volatile uint32_t t35 = 331758U;

	t35 = (x1745&((x1746<<x1747)^x1748));

	if (t35 != 4292594704U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1809 = 104463;
	uint8_t x1810 = 8U;
	int16_t x1811 = 5;

	t36 = (x1809&((x1810<<x1811)^x1812));

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1858 = INT64_MAX;
	static int8_t x1859 = 0;
	volatile uint8_t x1860 = UINT8_MAX;
	int64_t t37 = 81LL;

	t37 = (x1857&((x1858<<x1859)^x1860));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2037 = UINT8_MAX;
	uint64_t x2038 = UINT64_MAX;
	uint64_t x2039 = 5LLU;
	int64_t x2040 = INT64_MAX;
	volatile uint64_t t38 = 523081984LLU;

	t38 = (x2037&((x2038<<x2039)^x2040));

	if (t38 != 31LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2126 = UINT32_MAX;
	volatile uint8_t x2127 = 3U;
	uint8_t x2128 = UINT8_MAX;
	int64_t t39 = 0LL;

	t39 = (x2125&((x2126<<x2127)^x2128));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2194 = 940U;
	int32_t x2195 = 3;
	volatile int16_t x2196 = 1;

	t40 = (x2193&((x2194<<x2195)^x2196));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2361 = -1;
	volatile int16_t x2362 = 935;
	int16_t x2363 = 2;
	volatile uint64_t x2364 = 3566630229LLU;
	static uint64_t t41 = 327615177LLU;

	t41 = (x2361&((x2362<<x2363)^x2364));

	if (t41 != 3566631881LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2418 = 0U;
	volatile int8_t x2419 = 11;
	uint16_t x2420 = 0U;
	volatile int64_t t42 = 4840702200352LL;

	t42 = (x2417&((x2418<<x2419)^x2420));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2421 = -1;
	int64_t x2422 = 1439636764148LL;
	uint64_t x2424 = 470770704LLU;
	static uint64_t t43 = 65817408LLU;

	t43 = (x2421&((x2422<<x2423)^x2424));

	if (t43 != 11517294726064LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2429 = INT32_MAX;
	uint16_t x2430 = 6U;
	uint64_t x2431 = 7LLU;
	volatile int64_t x2432 = INT64_MIN;
	volatile int64_t t44 = 10LL;

	t44 = (x2429&((x2430<<x2431)^x2432));

	if (t44 != 768LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2549 = -1;
	uint64_t x2550 = 2195041994417280922LLU;
	static int16_t x2551 = 2;
	volatile uint16_t x2552 = 21U;
	static uint64_t t45 = 191645921501LLU;

	t45 = (x2549&((x2550<<x2551)^x2552));

	if (t45 != 8780167977669123709LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2701 = 0U;
	uint16_t x2702 = 20316U;
	uint16_t x2704 = 12U;

	t46 = (x2701&((x2702<<x2703)^x2704));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x2733 = 6U;
	uint32_t x2734 = UINT32_MAX;
	int8_t x2735 = 0;
	int64_t x2736 = -20400268147454LL;
	int64_t t47 = 2436240448LL;

	t47 = (x2733&((x2734<<x2735)^x2736));

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2841 = 1076U;
	uint64_t x2842 = 438574474253LLU;
	uint16_t x2843 = 33U;
	uint16_t x2844 = UINT16_MAX;

	t48 = (x2841&((x2842<<x2843)^x2844));

	if (t48 != 1076LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2870 = INT8_MAX;
	uint8_t x2872 = UINT8_MAX;
	int64_t t49 = 2912059662356148LL;

	t49 = (x2869&((x2870<<x2871)^x2872));

	if (t49 != 128LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2881 = INT64_MIN;
	int32_t x2882 = 32218321;
	static int64_t x2883 = 1LL;
	int8_t x2884 = INT8_MIN;
	int64_t t50 = INT64_MIN;

	t50 = (x2881&((x2882<<x2883)^x2884));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3013 = -1;
	uint64_t x3015 = 1LLU;
	uint8_t x3016 = UINT8_MAX;

	t51 = (x3013&((x3014<<x3015)^x3016));

	if (t51 != 249) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3221 = 63;
	volatile uint64_t x3222 = UINT64_MAX;
	volatile int8_t x3223 = 46;
	uint64_t t52 = 1513745917957074LLU;

	t52 = (x3221&((x3222<<x3223)^x3224));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3453 = UINT16_MAX;
	uint64_t x3454 = UINT64_MAX;
	static uint16_t x3455 = 31U;
	uint16_t x3456 = UINT16_MAX;
	static uint64_t t53 = 0LLU;

	t53 = (x3453&((x3454<<x3455)^x3456));

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3693 = 0;
	uint32_t x3694 = 6284847U;
	int32_t x3696 = -12;
	volatile uint32_t t54 = 3410624U;

	t54 = (x3693&((x3694<<x3695)^x3696));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3737 = INT16_MAX;
	uint64_t x3738 = UINT64_MAX;
	volatile uint16_t x3740 = 3389U;
	volatile uint64_t t55 = 3LLU;

	t55 = (x3737&((x3738<<x3739)^x3740));

	if (t55 != 29379LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3765 = INT64_MIN;
	volatile uint32_t x3766 = 68U;
	volatile int8_t x3768 = INT8_MAX;
	int64_t t56 = 12218814950280LL;

	t56 = (x3765&((x3766<<x3767)^x3768));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3929 = 3U;
	uint8_t x3930 = 1U;

	t57 = (x3929&((x3930<<x3931)^x3932));

	if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4053 = 15;
	uint64_t x4054 = UINT64_MAX;
	static uint8_t x4055 = 0U;
	static volatile uint64_t x4056 = 7LLU;
	static volatile uint64_t t58 = 116628225522LLU;

	t58 = (x4053&((x4054<<x4055)^x4056));

	if (t58 != 8LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4105 = INT64_MIN;
	volatile uint64_t x4106 = 529623263075375LLU;
	uint64_t x4107 = 63LLU;
	static uint32_t x4108 = 224700U;

	t59 = (x4105&((x4106<<x4107)^x4108));

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x4234 = 5;
	uint16_t x4235 = 21U;
	int64_t x4236 = INT64_MIN;
	volatile int64_t t60 = 1505295949LL;

	t60 = (x4233&((x4234<<x4235)^x4236));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4257 = INT32_MIN;
	int16_t x4258 = 11;
	volatile int16_t x4259 = 0;
	int64_t x4260 = -9835382550149LL;

	t61 = (x4257&((x4258<<x4259)^x4260));

	if (t61 != -9835475107840LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4283 = 13U;
	static int16_t x4284 = -1;

	t62 = (x4281&((x4282<<x4283)^x4284));

	if (t62 != -268435456) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4285 = -1;
	uint8_t x4286 = 76U;
	static int16_t x4288 = -1;
	volatile int32_t t63 = -11;

	t63 = (x4285&((x4286<<x4287)^x4288));

	if (t63 != -77) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4361 = INT8_MAX;
	volatile int64_t x4362 = 6LL;
	uint8_t x4363 = 4U;
	uint64_t t64 = 1579183968115448LLU;

	t64 = (x4361&((x4362<<x4363)^x4364));

	if (t64 != 31LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4473 = UINT64_MAX;
	int8_t x4474 = 0;
	static uint32_t x4475 = 3U;
	int16_t x4476 = -2962;
	uint64_t t65 = 27914248335LLU;

	t65 = (x4473&((x4474<<x4475)^x4476));

	if (t65 != 18446744073709548654LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4482 = INT16_MAX;
	uint8_t x4483 = 0U;
	static volatile int16_t x4484 = INT16_MAX;
	static int32_t t66 = 37;

	t66 = (x4481&((x4482<<x4483)^x4484));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4558 = UINT64_MAX;
	static int8_t x4559 = 48;
	volatile int32_t x4560 = 146665657;
	uint64_t t67 = 61479831664583LLU;

	t67 = (x4557&((x4558<<x4559)^x4560));

	if (t67 != 10059792LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4589 = 0;
	uint16_t x4590 = 5U;
	static uint16_t x4591 = 14U;

	t68 = (x4589&((x4590<<x4591)^x4592));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4594 = 166927LLU;
	int64_t x4596 = 779420971169237LL;
	volatile uint64_t t69 = 85295022844LLU;

	t69 = (x4593&((x4594<<x4595)^x4596));

	if (t69 != 4535486008450LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x4665 = INT16_MIN;
	uint16_t x4667 = 1U;
	int32_t x4668 = -1;
	volatile uint64_t t70 = 3604149201919LLU;

	t70 = (x4665&((x4666<<x4667)^x4668));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4688 = 4U;
	uint64_t t71 = 1769973514419962LLU;

	t71 = (x4685&((x4686<<x4687)^x4688));

	if (t71 != 841876LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4766 = 1U;
	uint8_t x4767 = 2U;
	volatile int32_t x4768 = 49;
	volatile uint64_t t72 = 0LLU;

	t72 = (x4765&((x4766<<x4767)^x4768));

	if (t72 != 53LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4769 = 27U;
	uint8_t x4771 = 0U;
	volatile int64_t x4772 = INT64_MIN;
	volatile int64_t t73 = 4267233379928513LL;

	t73 = (x4769&((x4770<<x4771)^x4772));

	if (t73 != 26LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4797 = 58U;
	uint32_t x4798 = 26U;
	uint8_t x4799 = 0U;
	volatile uint8_t x4800 = UINT8_MAX;

	t74 = (x4797&((x4798<<x4799)^x4800));

	if (t74 != 32U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t t75 = 63474335;

	t75 = (x4873&((x4874<<x4875)^x4876));

	if (t75 != -2147472472) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4877 = 6014610U;
	static volatile uint32_t x4879 = 9U;
	uint64_t t76 = 7117LLU;

	t76 = (x4877&((x4878<<x4879)^x4880));

	if (t76 != 558738LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4933 = 408U;
	uint64_t x4934 = UINT64_MAX;
	volatile uint8_t x4935 = 1U;
	static int64_t x4936 = INT64_MAX;

	t77 = (x4933&((x4934<<x4935)^x4936));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4957 = 19134701887868LLU;
	int16_t x4959 = 0;
	static uint8_t x4960 = UINT8_MAX;
	volatile uint64_t t78 = 121013534LLU;

	t78 = (x4957&((x4958<<x4959)^x4960));

	if (t78 != 120LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4969 = -1LL;
	int8_t x4971 = 14;
	static int16_t x4972 = -1;

	t79 = (x4969&((x4970<<x4971)^x4972));

	if (t79 != -9306113LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x5053 = INT8_MIN;
	uint32_t x5054 = UINT32_MAX;
	uint8_t x5055 = 4U;
	static uint16_t x5056 = 288U;
	volatile uint32_t t80 = 86694240U;

	t80 = (x5053&((x5054<<x5055)^x5056));

	if (t80 != 4294966912U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5074 = 35;
	int32_t t81 = -422;

	t81 = (x5073&((x5074<<x5075)^x5076));

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5133 = -1;
	uint8_t x5134 = UINT8_MAX;
	uint32_t x5136 = 93U;
	uint32_t t82 = 127726U;

	t82 = (x5133&((x5134<<x5135)^x5136));

	if (t82 != 162U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5193 = -1LL;
	static int8_t x5195 = 28;
	static int8_t x5196 = INT8_MIN;
	volatile int64_t t83 = -226250488592LL;

	t83 = (x5193&((x5194<<x5195)^x5196));

	if (t83 != 268435328LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5221 = INT64_MAX;
	uint16_t x5223 = 19U;
	int16_t x5224 = -8;
	volatile int64_t t84 = 1133286624595637804LL;

	t84 = (x5221&((x5222<<x5223)^x5224));

	if (t84 != 9223372036826464248LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x5281 = -1LL;
	volatile uint32_t x5282 = 420382U;
	int64_t x5283 = 26LL;
	volatile int8_t x5284 = INT8_MAX;
	int64_t t85 = -2451LL;

	t85 = (x5281&((x5282<<x5283)^x5284));

	if (t85 != 2013266047LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x5293 = 59U;
	uint8_t x5294 = UINT8_MAX;
	uint32_t x5295 = 0U;
	uint16_t x5296 = UINT16_MAX;
	volatile int32_t t86 = -243457;

	t86 = (x5293&((x5294<<x5295)^x5296));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5345 = -9LL;
	int64_t x5346 = 2272LL;
	uint32_t x5347 = 3U;
	static int16_t x5348 = INT16_MIN;

	t87 = (x5345&((x5346<<x5347)^x5348));

	if (t87 != -14592LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5393 = INT16_MIN;
	int32_t t88 = 0;

	t88 = (x5393&((x5394<<x5395)^x5396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5433 = UINT32_MAX;
	static uint64_t x5434 = UINT64_MAX;
	volatile uint8_t x5435 = 1U;

	t89 = (x5433&((x5434<<x5435)^x5436));

	if (t89 != 4294967236LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x5470 = 377;
	int16_t x5472 = 1;
	static int32_t t90 = -433440;

	t90 = (x5469&((x5470<<x5471)^x5472));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x5481 = INT8_MIN;
	uint64_t x5482 = 1530367865884138457LLU;
	uint32_t x5483 = 57U;
	uint64_t t91 = 180292820LLU;

	t91 = (x5481&((x5482<<x5483)^x5484));

	if (t91 != 12826251738751238016LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5489 = UINT32_MAX;
	volatile int32_t x5490 = 2525;
	static int16_t x5491 = 1;
	volatile int16_t x5492 = -1;

	t92 = (x5489&((x5490<<x5491)^x5492));

	if (t92 != 4294962245U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5498 = 1;
	int8_t x5500 = INT8_MIN;
	int32_t t93 = -131650426;

	t93 = (x5497&((x5498<<x5499)^x5500));

	if (t93 != -126) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5537 = INT32_MIN;
	uint8_t x5538 = 22U;
	int8_t x5539 = 1;
	int16_t x5540 = 2;

	t94 = (x5537&((x5538<<x5539)^x5540));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x5613 = 0LLU;
	uint32_t x5614 = 59U;
	static int8_t x5615 = 0;
	int32_t x5616 = INT32_MAX;
	uint64_t t95 = 2092586141347744LLU;

	t95 = (x5613&((x5614<<x5615)^x5616));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5661 = -115455;
	uint16_t x5663 = 23U;
	volatile int8_t x5664 = -1;
	static volatile int64_t t96 = -105LL;

	t96 = (x5661&((x5662<<x5663)^x5664));

	if (t96 != -8504063LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5973 = -11482477;
	uint32_t x5974 = 0U;
	uint8_t x5976 = 32U;
	volatile uint32_t t97 = 73U;

	t97 = (x5973&((x5974<<x5975)^x5976));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5981 = 828U;
	int32_t x5983 = 0;
	int32_t t98 = -1873566;

	t98 = (x5981&((x5982<<x5983)^x5984));

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x6073 = -1;
	uint64_t x6076 = 125955829994LLU;
	uint64_t t99 = 1880059278LLU;

	t99 = (x6073&((x6074<<x6075)^x6076));

	if (t99 != 9223371910898945813LLU) { NG(); } else { ; }
	
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

