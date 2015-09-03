#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x109 = 6674U;
uint8_t x112 = 2U;
volatile int32_t x150 = INT32_MIN;
static uint8_t x152 = 6U;
int64_t x221 = INT64_MIN;
int32_t x222 = INT32_MIN;
int16_t x241 = 0;
int64_t x243 = INT64_MAX;
volatile int8_t x405 = INT8_MIN;
volatile int32_t x407 = INT32_MAX;
uint8_t x492 = 5U;
uint64_t t11 = 1402763484660LLU;
int16_t x670 = 4;
uint32_t t12 = 172U;
uint64_t t14 = 1892050957826LLU;
uint32_t x923 = 1U;
static uint64_t t15 = 66LLU;
int8_t x1031 = INT8_MAX;
volatile int32_t t19 = 33711257;
int64_t x1393 = INT64_MIN;
int16_t x1427 = INT16_MAX;
volatile int32_t t25 = 7;
uint8_t x1480 = 0U;
uint8_t x1549 = 5U;
int8_t x1758 = 60;
int32_t x1759 = 38352;
int8_t x1760 = 0;
volatile int64_t x1817 = 30594781856372LL;
static volatile uint16_t x1841 = 0U;
static int32_t x1843 = 13240;
uint8_t x1859 = UINT8_MAX;
volatile int8_t x1912 = 1;
static int64_t x2037 = INT64_MIN;
static int64_t t35 = -92507LL;
uint32_t t36 = 1672836754U;
static volatile int32_t x2357 = INT32_MIN;
int8_t x2359 = 21;
int32_t t37 = -86702986;
int8_t x2477 = 1;
volatile int8_t x2479 = 10;
uint32_t x2480 = 0U;
static int32_t t39 = -14115430;
int8_t x2500 = 1;
int64_t t40 = 857200437798796803LL;
uint32_t x2581 = UINT32_MAX;
volatile int64_t t42 = 18871183LL;
static volatile uint8_t x2598 = UINT8_MAX;
static uint64_t t44 = 147734955360700LLU;
static int8_t x2792 = 0;
volatile uint64_t x2799 = 951940792LLU;
int32_t x2977 = -1;
int16_t x3198 = INT16_MIN;
int8_t x3200 = 4;
int16_t x3314 = INT16_MIN;
static uint64_t x3316 = 0LLU;
int64_t x3343 = INT64_MAX;
int64_t x3721 = INT64_MIN;
int8_t x3739 = 1;
static volatile int64_t t57 = 61335646353LL;
volatile uint32_t x3939 = 21321829U;
uint32_t t58 = 61U;
static uint16_t x3974 = 22620U;
volatile int64_t t59 = 4093906973809598396LL;
static volatile uint32_t x3995 = 387913U;
int64_t x4007 = INT64_MAX;
int64_t t64 = 253722308LL;
uint64_t x4091 = UINT64_MAX;
volatile int64_t x4174 = INT64_MIN;
static uint64_t t67 = 267947852055653091LLU;
uint64_t t69 = 2993998063LLU;
static int16_t x4569 = 70;
int32_t x4572 = 1;
static uint16_t x4807 = UINT16_MAX;
int16_t x4808 = 5;
uint8_t x4856 = 2U;
uint32_t x4967 = 20158147U;
uint8_t x4968 = 2U;
volatile uint32_t t76 = 1753329U;
volatile int16_t x4969 = 3933;
int16_t x5133 = INT16_MAX;
int8_t x5136 = 23;
int32_t x5383 = INT32_MAX;
uint8_t x5392 = 0U;
int64_t t83 = -3600164704228LL;
static int64_t x5529 = -57450354565928LL;
uint8_t x5751 = UINT8_MAX;
int32_t t88 = -144711;
volatile int32_t x5766 = INT32_MAX;
static uint8_t x5769 = 2U;
volatile int32_t t90 = 209849;
uint16_t x6024 = 0U;


void f0(void) {
	uint64_t x65 = 5458579401LLU;
	static uint64_t x66 = UINT64_MAX;
	uint64_t x67 = 25577800654LLU;
	static uint16_t x68 = 0U;
	volatile uint64_t t0 = 226587372187805LLU;

	t0 = ((x65%x66)/(x67>>x68));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x110 = UINT8_MAX;
	static int64_t x111 = INT64_MAX;
	int64_t t1 = -821469723593LL;

	t1 = ((x109%x110)/(x111>>x112));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x149 = INT32_MAX;
	uint64_t x151 = 405110773564LLU;
	volatile uint64_t t2 = 2731166568LLU;

	t2 = ((x149%x150)/(x151>>x152));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x223 = 5U;
	static uint8_t x224 = 2U;
	volatile int64_t t3 = -6627174943LL;

	t3 = ((x221%x222)/(x223>>x224));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x242 = INT8_MIN;
	volatile uint8_t x244 = 1U;
	int64_t t4 = -382954LL;

	t4 = ((x241%x242)/(x243>>x244));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = 3588LL;
	volatile uint64_t x399 = 59175865207LLU;
	volatile int32_t x400 = 11;
	volatile uint64_t t5 = 1065156086819085130LLU;

	t5 = ((x397%x398)/(x399>>x400));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x406 = 88U;
	uint8_t x408 = 5U;
	int32_t t6 = 0;

	t6 = ((x405%x406)/(x407>>x408));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x469 = 13U;
	int16_t x470 = 21;
	volatile uint32_t x471 = 241U;
	uint8_t x472 = 7U;
	volatile uint32_t t7 = 97982060U;

	t7 = ((x469%x470)/(x471>>x472));

	if (t7 != 13U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x489 = -2658599;
	int16_t x490 = 4;
	volatile uint32_t x491 = UINT32_MAX;
	volatile uint32_t t8 = 425U;

	t8 = ((x489%x490)/(x491>>x492));

	if (t8 != 32U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x493 = 2U;
	static uint8_t x494 = 7U;
	uint32_t x495 = 22511U;
	int8_t x496 = 2;
	uint32_t t9 = 0U;

	t9 = ((x493%x494)/(x495>>x496));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x585 = -65404616376LL;
	int64_t x586 = -1LL;
	uint16_t x587 = 24968U;
	uint16_t x588 = 0U;
	int64_t t10 = -830829LL;

	t10 = ((x585%x586)/(x587>>x588));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x609 = INT32_MIN;
	static uint16_t x610 = UINT16_MAX;
	uint64_t x611 = 6322451021707871754LLU;
	int32_t x612 = 1;

	t11 = ((x609%x610)/(x611>>x612));

	if (t11 != 5LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x669 = 20429155U;
	uint8_t x671 = 15U;
	volatile int8_t x672 = 3;

	t12 = ((x669%x670)/(x671>>x672));

	if (t12 != 3U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x721 = 30927660LLU;
	int64_t x722 = -253569023703440294LL;
	int64_t x723 = INT64_MAX;
	uint8_t x724 = 24U;
	uint64_t t13 = 3125LLU;

	t13 = ((x721%x722)/(x723>>x724));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x757 = 44832785505718245LLU;
	uint64_t x758 = UINT64_MAX;
	int32_t x759 = INT32_MAX;
	int8_t x760 = 16;

	t14 = ((x757%x758)/(x759>>x760));

	if (t14 != 1368229789291LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x921 = 232485847002LLU;
	volatile int8_t x922 = INT8_MIN;
	int64_t x924 = 0LL;

	t15 = ((x921%x922)/(x923>>x924));

	if (t15 != 232485847002LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1029 = -1;
	volatile uint16_t x1030 = 80U;
	int16_t x1032 = 1;
	int32_t t16 = -15;

	t16 = ((x1029%x1030)/(x1031>>x1032));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1165 = -1;
	volatile int8_t x1166 = -1;
	uint32_t x1167 = 2373954U;
	volatile int8_t x1168 = 1;
	static volatile uint32_t t17 = 285U;

	t17 = ((x1165%x1166)/(x1167>>x1168));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1225 = INT16_MIN;
	volatile int64_t x1226 = -1LL;
	uint32_t x1227 = 44540U;
	static volatile uint64_t x1228 = 5LLU;
	int64_t t18 = -147LL;

	t18 = ((x1225%x1226)/(x1227>>x1228));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x1261 = 7U;
	int16_t x1262 = INT16_MIN;
	uint8_t x1263 = UINT8_MAX;
	uint8_t x1264 = 0U;

	t19 = ((x1261%x1262)/(x1263>>x1264));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1377 = INT16_MAX;
	uint8_t x1378 = 88U;
	volatile int16_t x1379 = 940;
	int16_t x1380 = 1;
	volatile int32_t t20 = 1;

	t20 = ((x1377%x1378)/(x1379>>x1380));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1394 = INT8_MIN;
	uint64_t x1395 = 85760277572326LLU;
	volatile int16_t x1396 = 46;
	uint64_t t21 = 14915747348411LLU;

	t21 = ((x1393%x1394)/(x1395>>x1396));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1409 = INT64_MIN;
	int32_t x1410 = -1;
	uint8_t x1411 = UINT8_MAX;
	int8_t x1412 = 0;
	volatile int64_t t22 = -422433917027788LL;

	t22 = ((x1409%x1410)/(x1411>>x1412));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1421 = UINT8_MAX;
	int16_t x1422 = INT16_MIN;
	int8_t x1423 = 31;
	int8_t x1424 = 2;
	volatile int32_t t23 = 9413;

	t23 = ((x1421%x1422)/(x1423>>x1424));

	if (t23 != 36) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1425 = -1LL;
	int32_t x1426 = -1;
	int8_t x1428 = 1;
	volatile int64_t t24 = 42539709LL;

	t24 = ((x1425%x1426)/(x1427>>x1428));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1473 = 5929U;
	volatile uint16_t x1474 = UINT16_MAX;
	int16_t x1475 = INT16_MAX;
	volatile uint32_t x1476 = 1U;

	t25 = ((x1473%x1474)/(x1475>>x1476));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1477 = 7644U;
	uint16_t x1478 = 557U;
	uint16_t x1479 = 2162U;
	volatile int32_t t26 = 21;

	t26 = ((x1477%x1478)/(x1479>>x1480));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1525 = UINT32_MAX;
	static int64_t x1526 = -1LL;
	uint16_t x1527 = UINT16_MAX;
	int64_t x1528 = 2LL;
	volatile int64_t t27 = -1LL;

	t27 = ((x1525%x1526)/(x1527>>x1528));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1550 = -1774;
	int16_t x1551 = INT16_MAX;
	int8_t x1552 = 2;
	static volatile int32_t t28 = -17;

	t28 = ((x1549%x1550)/(x1551>>x1552));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1625 = UINT32_MAX;
	uint16_t x1626 = UINT16_MAX;
	static uint64_t x1627 = UINT64_MAX;
	int8_t x1628 = 0;
	volatile uint64_t t29 = 96818946861LLU;

	t29 = ((x1625%x1626)/(x1627>>x1628));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1757 = -4227046140LL;
	volatile int64_t t30 = 66498052616809LL;

	t30 = ((x1757%x1758)/(x1759>>x1760));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1818 = INT8_MIN;
	uint16_t x1819 = 309U;
	uint16_t x1820 = 6U;
	int64_t t31 = -7500LL;

	t31 = ((x1817%x1818)/(x1819>>x1820));

	if (t31 != 29LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1842 = 4;
	uint8_t x1844 = 5U;
	volatile int32_t t32 = 54405;

	t32 = ((x1841%x1842)/(x1843>>x1844));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1857 = INT16_MIN;
	static volatile int64_t x1858 = 492681965LL;
	uint8_t x1860 = 1U;
	int64_t t33 = 1542116LL;

	t33 = ((x1857%x1858)/(x1859>>x1860));

	if (t33 != -258LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1909 = 33810797377000867LLU;
	int16_t x1910 = INT16_MIN;
	uint32_t x1911 = 256888U;
	volatile uint64_t t34 = 1224075888891483195LLU;

	t34 = ((x1909%x1910)/(x1911>>x1912));

	if (t34 != 263233762394LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2038 = INT32_MAX;
	int64_t x2039 = 181917LL;
	int16_t x2040 = 1;

	t35 = ((x2037%x2038)/(x2039>>x2040));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2269 = -342;
	int16_t x2270 = -404;
	uint32_t x2271 = 8528000U;
	int32_t x2272 = 1;

	t36 = ((x2269%x2270)/(x2271>>x2272));

	if (t36 != 1007U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2358 = -1;
	uint16_t x2360 = 4U;

	t37 = ((x2357%x2358)/(x2359>>x2360));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2421 = 54U;
	static uint16_t x2422 = 1U;
	static int16_t x2423 = 725;
	int16_t x2424 = 7;
	volatile int32_t t38 = -30;

	t38 = ((x2421%x2422)/(x2423>>x2424));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2478 = -1;

	t39 = ((x2477%x2478)/(x2479>>x2480));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2497 = -22;
	uint32_t x2498 = 1U;
	int64_t x2499 = 5183173LL;

	t40 = ((x2497%x2498)/(x2499>>x2500));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2569 = INT8_MIN;
	static volatile int16_t x2570 = INT16_MIN;
	int32_t x2571 = 36;
	int8_t x2572 = 5;
	int32_t t41 = 246696;

	t41 = ((x2569%x2570)/(x2571>>x2572));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2582 = INT64_MIN;
	uint16_t x2583 = 22U;
	uint16_t x2584 = 0U;

	t42 = ((x2581%x2582)/(x2583>>x2584));

	if (t42 != 195225786LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2597 = -10;
	int16_t x2599 = INT16_MAX;
	int8_t x2600 = 1;
	volatile int32_t t43 = -78;

	t43 = ((x2597%x2598)/(x2599>>x2600));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2761 = -1;
	volatile uint32_t x2762 = UINT32_MAX;
	uint64_t x2763 = 21441506368942LLU;
	uint8_t x2764 = 21U;

	t44 = ((x2761%x2762)/(x2763>>x2764));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2765 = 64180640077595951LLU;
	static int32_t x2766 = INT32_MAX;
	uint64_t x2767 = 452917LLU;
	volatile uint16_t x2768 = 1U;
	uint64_t t45 = 21995115LLU;

	t45 = ((x2765%x2766)/(x2767>>x2768));

	if (t45 != 4672LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x2789 = -26;
	int64_t x2790 = INT64_MIN;
	static int8_t x2791 = INT8_MAX;
	volatile int64_t t46 = -16LL;

	t46 = ((x2789%x2790)/(x2791>>x2792));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2797 = INT64_MIN;
	uint32_t x2798 = 994812760U;
	uint32_t x2800 = 0U;
	uint64_t t47 = 114LLU;

	t47 = ((x2797%x2798)/(x2799>>x2800));

	if (t47 != 19378037193LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2978 = -1;
	uint32_t x2979 = 169412U;
	static int16_t x2980 = 0;
	static volatile uint32_t t48 = 443U;

	t48 = ((x2977%x2978)/(x2979>>x2980));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x3049 = -1LL;
	int16_t x3050 = -1;
	int64_t x3051 = INT64_MAX;
	static int16_t x3052 = 0;
	int64_t t49 = 666731481LL;

	t49 = ((x3049%x3050)/(x3051>>x3052));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x3197 = -58;
	uint8_t x3199 = 18U;
	int32_t t50 = 23626718;

	t50 = ((x3197%x3198)/(x3199>>x3200));

	if (t50 != -58) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x3313 = 1U;
	int64_t x3315 = INT64_MAX;
	volatile int64_t t51 = 12689090793509751LL;

	t51 = ((x3313%x3314)/(x3315>>x3316));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3337 = 0;
	int32_t x3338 = INT32_MIN;
	uint64_t x3339 = 654155LLU;
	int16_t x3340 = 0;
	static uint64_t t52 = 1LLU;

	t52 = ((x3337%x3338)/(x3339>>x3340));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3341 = UINT16_MAX;
	int64_t x3342 = INT64_MIN;
	int8_t x3344 = 27;
	volatile int64_t t53 = -194033425215018902LL;

	t53 = ((x3341%x3342)/(x3343>>x3344));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3705 = 1;
	static int16_t x3706 = -1;
	static int16_t x3707 = INT16_MAX;
	uint16_t x3708 = 0U;
	int32_t t54 = -16413;

	t54 = ((x3705%x3706)/(x3707>>x3708));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x3717 = UINT16_MAX;
	int64_t x3718 = -1LL;
	uint32_t x3719 = UINT32_MAX;
	static volatile int8_t x3720 = 5;
	volatile int64_t t55 = -178583963LL;

	t55 = ((x3717%x3718)/(x3719>>x3720));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3722 = INT64_MIN;
	volatile int64_t x3723 = INT64_MAX;
	uint8_t x3724 = 12U;
	int64_t t56 = -443LL;

	t56 = ((x3721%x3722)/(x3723>>x3724));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3737 = INT8_MIN;
	int64_t x3738 = INT64_MIN;
	volatile int8_t x3740 = 0;

	t57 = ((x3737%x3738)/(x3739>>x3740));

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3937 = -9;
	int32_t x3938 = -1;
	int8_t x3940 = 24;

	t58 = ((x3937%x3938)/(x3939>>x3940));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3973 = INT64_MIN;
	int64_t x3975 = INT64_MAX;
	int8_t x3976 = 2;

	t59 = ((x3973%x3974)/(x3975>>x3976));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x3981 = 2U;
	volatile uint64_t x3982 = UINT64_MAX;
	int16_t x3983 = INT16_MAX;
	static volatile int8_t x3984 = 0;
	uint64_t t60 = 3342883846038LLU;

	t60 = ((x3981%x3982)/(x3983>>x3984));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3989 = INT16_MIN;
	static int64_t x3990 = INT64_MAX;
	volatile uint32_t x3991 = UINT32_MAX;
	uint16_t x3992 = 30U;
	volatile int64_t t61 = -105541013LL;

	t61 = ((x3989%x3990)/(x3991>>x3992));

	if (t61 != -10922LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3993 = 121U;
	static int32_t x3994 = INT32_MAX;
	uint8_t x3996 = 13U;
	volatile uint32_t t62 = 208U;

	t62 = ((x3993%x3994)/(x3995>>x3996));

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4005 = -1;
	int16_t x4006 = -1;
	uint8_t x4008 = 6U;
	static volatile int64_t t63 = -77537998LL;

	t63 = ((x4005%x4006)/(x4007>>x4008));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4053 = 8002802;
	int32_t x4054 = INT32_MIN;
	int64_t x4055 = INT64_MAX;
	static uint8_t x4056 = 42U;

	t64 = ((x4053%x4054)/(x4055>>x4056));

	if (t64 != 3LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4089 = 1LLU;
	int64_t x4090 = INT64_MIN;
	int8_t x4092 = 2;
	volatile uint64_t t65 = 51622498639142LLU;

	t65 = ((x4089%x4090)/(x4091>>x4092));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4157 = INT8_MIN;
	int16_t x4158 = 1;
	volatile uint32_t x4159 = UINT32_MAX;
	int8_t x4160 = 3;
	uint32_t t66 = 14223U;

	t66 = ((x4157%x4158)/(x4159>>x4160));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x4173 = UINT16_MAX;
	uint64_t x4175 = UINT64_MAX;
	static int8_t x4176 = 1;

	t67 = ((x4173%x4174)/(x4175>>x4176));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4245 = 53U;
	volatile uint16_t x4246 = 4509U;
	uint8_t x4247 = 59U;
	static uint32_t x4248 = 3U;
	volatile int32_t t68 = -27961864;

	t68 = ((x4245%x4246)/(x4247>>x4248));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x4269 = 347LLU;
	int16_t x4270 = INT16_MIN;
	volatile int64_t x4271 = INT64_MAX;
	uint64_t x4272 = 15LLU;

	t69 = ((x4269%x4270)/(x4271>>x4272));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4457 = -2;
	uint32_t x4458 = 2U;
	int16_t x4459 = INT16_MAX;
	uint64_t x4460 = 4LLU;
	uint32_t t70 = 250662326U;

	t70 = ((x4457%x4458)/(x4459>>x4460));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4570 = INT16_MAX;
	int64_t x4571 = INT64_MAX;
	int64_t t71 = 4296LL;

	t71 = ((x4569%x4570)/(x4571>>x4572));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4585 = 10U;
	int8_t x4586 = INT8_MIN;
	static volatile uint32_t x4587 = 635U;
	int8_t x4588 = 0;
	static uint32_t t72 = 95U;

	t72 = ((x4585%x4586)/(x4587>>x4588));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4725 = 6U;
	volatile int8_t x4726 = -1;
	uint8_t x4727 = UINT8_MAX;
	uint16_t x4728 = 1U;
	volatile int32_t t73 = 68254232;

	t73 = ((x4725%x4726)/(x4727>>x4728));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4805 = 0U;
	static int32_t x4806 = INT32_MIN;
	static int32_t t74 = 50477;

	t74 = ((x4805%x4806)/(x4807>>x4808));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4853 = INT64_MIN;
	volatile int8_t x4854 = INT8_MIN;
	uint16_t x4855 = UINT16_MAX;
	volatile int64_t t75 = -80725588LL;

	t75 = ((x4853%x4854)/(x4855>>x4856));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x4965 = 2U;
	volatile int16_t x4966 = -1;

	t76 = ((x4965%x4966)/(x4967>>x4968));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4970 = INT32_MAX;
	int32_t x4971 = 1562654;
	uint16_t x4972 = 3U;
	static int32_t t77 = -57987;

	t77 = ((x4969%x4970)/(x4971>>x4972));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x5021 = 92007018869LL;
	volatile int8_t x5022 = INT8_MAX;
	volatile uint16_t x5023 = UINT16_MAX;
	uint8_t x5024 = 1U;
	int64_t t78 = -1068827662751430LL;

	t78 = ((x5021%x5022)/(x5023>>x5024));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x5033 = UINT32_MAX;
	volatile int32_t x5034 = INT32_MAX;
	volatile uint8_t x5035 = 60U;
	static int8_t x5036 = 1;
	volatile uint32_t t79 = 10311750U;

	t79 = ((x5033%x5034)/(x5035>>x5036));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5134 = 3018U;
	uint64_t x5135 = 1740931680721526452LLU;
	uint64_t t80 = 7627LLU;

	t80 = ((x5133%x5134)/(x5135>>x5136));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5381 = INT64_MAX;
	static int8_t x5382 = 1;
	static int32_t x5384 = 12;
	volatile int64_t t81 = 85444LL;

	t81 = ((x5381%x5382)/(x5383>>x5384));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5389 = INT64_MIN;
	int8_t x5390 = -1;
	int64_t x5391 = INT64_MAX;
	volatile int64_t t82 = 794LL;

	t82 = ((x5389%x5390)/(x5391>>x5392));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5397 = INT32_MIN;
	int64_t x5398 = INT64_MIN;
	uint32_t x5399 = UINT32_MAX;
	uint16_t x5400 = 15U;

	t83 = ((x5397%x5398)/(x5399>>x5400));

	if (t83 != -16384LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x5481 = INT32_MIN;
	int32_t x5482 = INT32_MIN;
	int8_t x5483 = 42;
	static uint8_t x5484 = 2U;
	volatile int32_t t84 = 0;

	t84 = ((x5481%x5482)/(x5483>>x5484));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5530 = UINT8_MAX;
	static int64_t x5531 = INT64_MAX;
	int32_t x5532 = 0;
	volatile int64_t t85 = 28LL;

	t85 = ((x5529%x5530)/(x5531>>x5532));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5585 = 71LLU;
	uint32_t x5586 = 121567643U;
	uint16_t x5587 = UINT16_MAX;
	int32_t x5588 = 9;
	volatile uint64_t t86 = 15616LLU;

	t86 = ((x5585%x5586)/(x5587>>x5588));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5745 = 1638U;
	static int32_t x5746 = INT32_MAX;
	int16_t x5747 = INT16_MAX;
	static uint16_t x5748 = 2U;
	static int32_t t87 = 7122737;

	t87 = ((x5745%x5746)/(x5747>>x5748));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5749 = INT32_MIN;
	volatile int8_t x5750 = 38;
	int16_t x5752 = 2;

	t88 = ((x5749%x5750)/(x5751>>x5752));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5765 = 9U;
	int64_t x5767 = INT64_MAX;
	static uint16_t x5768 = 12U;
	int64_t t89 = -8083044124817LL;

	t89 = ((x5765%x5766)/(x5767>>x5768));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5770 = 156;
	static volatile uint16_t x5771 = UINT16_MAX;
	static volatile int8_t x5772 = 0;

	t90 = ((x5769%x5770)/(x5771>>x5772));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5925 = UINT32_MAX;
	uint32_t x5926 = UINT32_MAX;
	static uint64_t x5927 = 37251640958LLU;
	static volatile int16_t x5928 = 30;
	uint64_t t91 = 2731355596902430LLU;

	t91 = ((x5925%x5926)/(x5927>>x5928));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6021 = 12873954LLU;
	int8_t x6022 = INT8_MIN;
	int32_t x6023 = INT32_MAX;
	static uint64_t t92 = 19113863827473369LLU;

	t92 = ((x6021%x6022)/(x6023>>x6024));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6041 = 2U;
	static volatile int8_t x6042 = INT8_MIN;
	int16_t x6043 = 13;
	static uint16_t x6044 = 0U;
	volatile int32_t t93 = 7126;

	t93 = ((x6041%x6042)/(x6043>>x6044));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6045 = -12;
	uint16_t x6046 = 92U;
	uint32_t x6047 = 4416U;
	static uint8_t x6048 = 4U;
	uint32_t t94 = 1841847U;

	t94 = ((x6045%x6046)/(x6047>>x6048));

	if (t94 != 15561475U) { NG(); } else { ; }
	
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


    return 0;
}

