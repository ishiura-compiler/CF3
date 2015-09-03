#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x34 = UINT32_MAX;
uint8_t x49 = 40U;
int8_t x128 = 0;
int8_t x176 = 50;
volatile uint64_t x298 = UINT64_MAX;
volatile int8_t x357 = INT8_MIN;
static uint8_t x360 = 51U;
int32_t x365 = 1752;
int32_t x366 = INT32_MIN;
uint64_t x367 = 613556249896180996LLU;
volatile uint64_t t13 = 11LLU;
static int32_t x879 = INT32_MIN;
uint8_t x880 = 0U;
int64_t t18 = -14LL;
uint16_t x893 = UINT16_MAX;
static volatile uint8_t x894 = UINT8_MAX;
static uint16_t x895 = 251U;
int8_t x896 = 1;
uint32_t x903 = 108U;
static uint32_t t20 = 12U;
uint8_t x908 = 0U;
int8_t x977 = INT8_MIN;
uint16_t x979 = 1U;
volatile uint32_t t22 = 0U;
static int16_t x1003 = -31;
int8_t x1097 = 11;
int8_t x1272 = 1;
uint32_t t30 = 658U;
uint16_t x1418 = 6591U;
int32_t x1431 = INT32_MIN;
static uint16_t x1445 = 1U;
static uint32_t x1448 = 0U;
uint64_t x1451 = 59385LLU;
int32_t x1510 = INT32_MIN;
uint8_t x1557 = 98U;
int32_t x1565 = 16084;
uint16_t x1568 = 1U;
int16_t x1583 = INT16_MIN;
int32_t x1615 = 219;
int32_t t44 = 4558114;
uint64_t t45 = 327LLU;
static int8_t x1662 = INT8_MAX;
uint8_t x1700 = 50U;
static uint32_t x1848 = 1U;
static uint64_t t49 = 11719164627652LLU;
uint32_t x1962 = 16979439U;
int64_t x2013 = 1040563LL;
volatile int16_t x2016 = 7;
volatile uint8_t x2030 = 96U;
uint32_t x2042 = UINT32_MAX;
volatile uint64_t x2043 = UINT64_MAX;
volatile uint8_t x2051 = 48U;
int8_t x2052 = 35;
volatile int64_t x2061 = INT64_MAX;
int16_t x2063 = INT16_MAX;
static volatile int64_t x2262 = INT64_MIN;
int64_t t62 = -461LL;
int32_t t65 = 49;
uint32_t x2486 = UINT32_MAX;
int8_t x2487 = -2;
uint16_t x2512 = 14U;
volatile int32_t x2548 = 3;
int32_t t71 = 5548935;
uint64_t t72 = 7640538294642481LLU;
int16_t x2630 = INT16_MIN;
volatile int64_t x2701 = 2570120211537441273LL;
uint32_t x2702 = 0U;
volatile int64_t x2703 = INT64_MIN;
int16_t x2835 = INT16_MIN;
static int32_t x2893 = -1;
int16_t x2950 = -3;
uint64_t x2951 = 20300382LLU;
volatile int8_t x3025 = 1;
int64_t x3026 = INT64_MIN;
static uint8_t x3028 = 17U;
static volatile int64_t t79 = 137519170LL;
uint64_t x3119 = 1761LLU;
uint8_t x3120 = 5U;
volatile uint64_t t82 = 121LLU;
uint8_t x3288 = 49U;
static uint64_t x3377 = 32489949570771LLU;
uint8_t x3409 = 3U;
int32_t t88 = -54782;
static volatile uint16_t x3500 = 31U;
static uint16_t x3529 = 4090U;
static uint64_t x3533 = 17554LLU;
uint32_t x3536 = 7U;
static uint64_t t91 = 1066828947LLU;
volatile uint32_t t92 = 0U;
volatile int32_t t93 = 220;
volatile uint32_t x3749 = UINT32_MAX;
int16_t x3750 = -1;
uint16_t x3752 = 2U;
volatile int32_t x3771 = -1;
uint16_t x3838 = 15U;
volatile uint16_t x3968 = 5U;


void f0(void) {
	static volatile int8_t x1 = -1;
	int8_t x2 = 39;
	int8_t x3 = 61;
	volatile int64_t x4 = 9LL;
	int32_t t0 = -4362433;

	t0 = ((x1&(x2|x3))<<x4);

	if (t0 != 32256) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = -1;
	int8_t x22 = 0;
	int16_t x23 = INT16_MAX;
	static uint64_t x24 = 6LLU;
	int32_t t1 = -933270764;

	t1 = ((x21&(x22|x23))<<x24);

	if (t1 != 2097088) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x33 = 5U;
	int16_t x35 = 1;
	uint16_t x36 = 3U;
	uint32_t t2 = 479588U;

	t2 = ((x33&(x34|x35))<<x36);

	if (t2 != 40U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x50 = 4213328U;
	int16_t x51 = -17;
	static volatile uint8_t x52 = 1U;
	uint32_t t3 = 0U;

	t3 = ((x49&(x50|x51))<<x52);

	if (t3 != 80U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x57 = 6U;
	uint8_t x58 = UINT8_MAX;
	int32_t x59 = INT32_MIN;
	static uint32_t x60 = 6U;
	int32_t t4 = -97;

	t4 = ((x57&(x58|x59))<<x60);

	if (t4 != 384) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x85 = UINT16_MAX;
	int16_t x86 = INT16_MAX;
	int16_t x87 = -93;
	uint8_t x88 = 3U;
	volatile int32_t t5 = -1;

	t5 = ((x85&(x86|x87))<<x88);

	if (t5 != 524280) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x125 = 4U;
	uint8_t x126 = 22U;
	int32_t x127 = INT32_MAX;
	volatile int32_t t6 = -408;

	t6 = ((x125&(x126|x127))<<x128);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = 53U;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t t7 = 376604513242LLU;

	t7 = ((x173&(x174|x175))<<x176);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x237 = 715LLU;
	volatile int32_t x238 = 28399;
	int8_t x239 = -1;
	volatile int8_t x240 = 1;
	static volatile uint64_t t8 = 801LLU;

	t8 = ((x237&(x238|x239))<<x240);

	if (t8 != 1430LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x297 = INT32_MIN;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = 0;
	volatile uint64_t t9 = 734245536830LLU;

	t9 = ((x297&(x298|x299))<<x300);

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x358 = UINT64_MAX;
	volatile int64_t x359 = 93LL;
	uint64_t t10 = 13LLU;

	t10 = ((x357&(x358|x359))<<x360);

	if (t10 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x368 = 2;
	uint64_t t11 = 1880967638LLU;

	t11 = ((x365&(x366|x367))<<x368);

	if (t11 != 4096LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x497 = INT16_MAX;
	volatile int64_t x498 = 45414544LL;
	int8_t x499 = 1;
	int16_t x500 = 14;
	int64_t t12 = -2660937LL;

	t12 = ((x497&(x498|x499))<<x500);

	if (t12 != 505692160LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x625 = UINT64_MAX;
	uint64_t x626 = 50LLU;
	static int8_t x627 = 23;
	static uint16_t x628 = 2U;

	t13 = ((x625&(x626|x627))<<x628);

	if (t13 != 220LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x669 = UINT32_MAX;
	int32_t x670 = INT32_MIN;
	uint16_t x671 = 8076U;
	uint32_t x672 = 10U;
	uint32_t t14 = 2231706U;

	t14 = ((x669&(x670|x671))<<x672);

	if (t14 != 8269824U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x689 = -1LL;
	uint64_t x690 = 2053135LLU;
	uint8_t x691 = 0U;
	int16_t x692 = 0;
	uint64_t t15 = 17258512770900477LLU;

	t15 = ((x689&(x690|x691))<<x692);

	if (t15 != 2053135LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x749 = INT32_MIN;
	uint64_t x750 = UINT64_MAX;
	static int64_t x751 = INT64_MIN;
	static uint16_t x752 = 1U;
	uint64_t t16 = 0LLU;

	t16 = ((x749&(x750|x751))<<x752);

	if (t16 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x877 = -3512416416281LL;
	uint64_t x878 = UINT64_MAX;
	uint64_t t17 = 30719096353619544LLU;

	t17 = ((x877&(x878|x879))<<x880);

	if (t17 != 18446740561293135335LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x885 = 40U;
	static uint16_t x886 = 531U;
	static int64_t x887 = INT64_MIN;
	int8_t x888 = 38;

	t18 = ((x885&(x886|x887))<<x888);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t t19 = -787167263;

	t19 = ((x893&(x894|x895))<<x896);

	if (t19 != 510) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x901 = -1;
	volatile uint8_t x902 = 28U;
	int8_t x904 = 11;

	t20 = ((x901&(x902|x903))<<x904);

	if (t20 != 253952U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x905 = 3U;
	volatile int64_t x906 = -1518238LL;
	volatile int64_t x907 = INT64_MIN;
	volatile int64_t t21 = -250LL;

	t21 = ((x905&(x906|x907))<<x908);

	if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x978 = UINT32_MAX;
	int32_t x980 = 0;

	t22 = ((x977&(x978|x979))<<x980);

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x997 = UINT32_MAX;
	int32_t x998 = INT32_MIN;
	int8_t x999 = INT8_MAX;
	uint32_t x1000 = 3U;
	uint32_t t23 = 4383925U;

	t23 = ((x997&(x998|x999))<<x1000);

	if (t23 != 1016U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1001 = 1;
	volatile int32_t x1002 = -10;
	uint8_t x1004 = 22U;
	volatile int32_t t24 = 1;

	t24 = ((x1001&(x1002|x1003))<<x1004);

	if (t24 != 4194304) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1021 = UINT16_MAX;
	static int8_t x1022 = 1;
	int32_t x1023 = INT32_MAX;
	uint8_t x1024 = 1U;
	static int32_t t25 = 912;

	t25 = ((x1021&(x1022|x1023))<<x1024);

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1089 = INT8_MIN;
	uint64_t x1090 = 71LLU;
	static int32_t x1091 = INT32_MAX;
	static uint8_t x1092 = 14U;
	volatile uint64_t t26 = 14290LLU;

	t26 = ((x1089&(x1090|x1091))<<x1092);

	if (t26 != 35184369991680LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1098 = 54053420374476332LLU;
	int8_t x1099 = -3;
	uint16_t x1100 = 1U;
	volatile uint64_t t27 = 508551682318459LLU;

	t27 = ((x1097&(x1098|x1099))<<x1100);

	if (t27 != 18LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1237 = -1;
	uint16_t x1238 = 3U;
	int8_t x1239 = INT8_MAX;
	int16_t x1240 = 1;
	int32_t t28 = -1410;

	t28 = ((x1237&(x1238|x1239))<<x1240);

	if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1241 = -721847026389053409LL;
	uint32_t x1242 = UINT32_MAX;
	volatile int16_t x1243 = -1;
	uint8_t x1244 = 3U;
	volatile int64_t t29 = -3361LL;

	t29 = ((x1241&(x1242|x1243))<<x1244);

	if (t29 != 7772340472LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1269 = 11342404U;
	static int8_t x1270 = -1;
	volatile int32_t x1271 = INT32_MIN;

	t30 = ((x1269&(x1270|x1271))<<x1272);

	if (t30 != 22684808U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1313 = 2800U;
	uint8_t x1314 = UINT8_MAX;
	static int32_t x1315 = INT32_MIN;
	static uint8_t x1316 = 7U;
	volatile int32_t t31 = -212400;

	t31 = ((x1313&(x1314|x1315))<<x1316);

	if (t31 != 30720) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1401 = 1687U;
	uint64_t x1402 = 7100692465816832626LLU;
	int16_t x1403 = -1;
	int8_t x1404 = 0;
	uint64_t t32 = 67LLU;

	t32 = ((x1401&(x1402|x1403))<<x1404);

	if (t32 != 1687LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1417 = 59LL;
	int16_t x1419 = INT16_MAX;
	static volatile uint8_t x1420 = 0U;
	int64_t t33 = 14985645LL;

	t33 = ((x1417&(x1418|x1419))<<x1420);

	if (t33 != 59LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1429 = 3382U;
	uint32_t x1430 = 1720U;
	uint8_t x1432 = 4U;
	volatile uint32_t t34 = 1408U;

	t34 = ((x1429&(x1430|x1431))<<x1432);

	if (t34 != 17152U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1446 = 873830392LLU;
	static int8_t x1447 = 1;
	volatile uint64_t t35 = 2095LLU;

	t35 = ((x1445&(x1446|x1447))<<x1448);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1449 = -172;
	uint32_t x1450 = UINT32_MAX;
	static uint8_t x1452 = 9U;
	uint64_t t36 = 5LLU;

	t36 = ((x1449&(x1450|x1451))<<x1452);

	if (t36 != 2199023167488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1457 = UINT16_MAX;
	volatile uint32_t x1458 = 63544U;
	int8_t x1459 = INT8_MIN;
	volatile uint64_t x1460 = 14LLU;
	uint32_t t37 = 168261174U;

	t37 = ((x1457&(x1458|x1459))<<x1460);

	if (t37 != 1072562176U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1489 = INT32_MAX;
	int64_t x1490 = INT64_MAX;
	int64_t x1491 = INT64_MIN;
	int8_t x1492 = 7;
	volatile int64_t t38 = -529533LL;

	t38 = ((x1489&(x1490|x1491))<<x1492);

	if (t38 != 274877906816LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1509 = INT64_MIN;
	uint32_t x1511 = 3U;
	uint8_t x1512 = 7U;
	int64_t t39 = 1LL;

	t39 = ((x1509&(x1510|x1511))<<x1512);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1553 = 1720236440362752LLU;
	int64_t x1554 = -1LL;
	int64_t x1555 = INT64_MAX;
	volatile uint8_t x1556 = 0U;
	uint64_t t40 = 9179473454799098LLU;

	t40 = ((x1553&(x1554|x1555))<<x1556);

	if (t40 != 1720236440362752LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1558 = 60U;
	uint8_t x1559 = UINT8_MAX;
	volatile uint8_t x1560 = 9U;
	volatile int32_t t41 = 1;

	t41 = ((x1557&(x1558|x1559))<<x1560);

	if (t41 != 50176) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1566 = 26;
	uint16_t x1567 = 4025U;
	int32_t t42 = -20;

	t42 = ((x1565&(x1566|x1567))<<x1568);

	if (t42 != 7456) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1581 = -241LL;
	uint64_t x1582 = 3854219LLU;
	int32_t x1584 = 17;
	volatile uint64_t t43 = 165057620640589696LLU;

	t43 = ((x1581&(x1582|x1583))<<x1584);

	if (t43 != 18446744072066826240LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1613 = INT16_MIN;
	int16_t x1614 = INT16_MAX;
	volatile uint64_t x1616 = 14LLU;

	t44 = ((x1613&(x1614|x1615))<<x1616);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1637 = 46214279325961LLU;
	int32_t x1638 = INT32_MAX;
	static uint32_t x1639 = 20U;
	volatile int8_t x1640 = 13;

	t45 = ((x1637&(x1638|x1639))<<x1640);

	if (t45 != 3532562440192LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1661 = 50334U;
	static int16_t x1663 = INT16_MIN;
	volatile int32_t x1664 = 0;
	volatile uint32_t t46 = 76272U;

	t46 = ((x1661&(x1662|x1663))<<x1664);

	if (t46 != 32798U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1697 = -422;
	static int64_t x1698 = INT64_MIN;
	static volatile uint64_t x1699 = UINT64_MAX;
	volatile uint64_t t47 = 171089915046376LLU;

	t47 = ((x1697&(x1698|x1699))<<x1700);

	if (t47 != 17971614313021964288LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1813 = UINT8_MAX;
	static int8_t x1814 = 2;
	int64_t x1815 = INT64_MAX;
	int16_t x1816 = 2;
	volatile int64_t t48 = -19129LL;

	t48 = ((x1813&(x1814|x1815))<<x1816);

	if (t48 != 1020LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x1845 = UINT64_MAX;
	static uint8_t x1846 = 20U;
	static uint16_t x1847 = UINT16_MAX;

	t49 = ((x1845&(x1846|x1847))<<x1848);

	if (t49 != 131070LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1869 = -1;
	int64_t x1870 = 385294324587455879LL;
	static uint8_t x1871 = 13U;
	uint8_t x1872 = 0U;
	int64_t t50 = -1982032864LL;

	t50 = ((x1869&(x1870|x1871))<<x1872);

	if (t50 != 385294324587455887LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1873 = INT32_MAX;
	int32_t x1874 = -1;
	uint64_t x1875 = 111550216999959127LLU;
	volatile uint16_t x1876 = 3U;
	volatile uint64_t t51 = 2792LLU;

	t51 = ((x1873&(x1874|x1875))<<x1876);

	if (t51 != 17179869176LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1961 = 5098440;
	uint64_t x1963 = 1875939638126711349LLU;
	int8_t x1964 = 4;
	uint64_t t52 = 343335246458126403LLU;

	t52 = ((x1961&(x1962|x1963))<<x1964);

	if (t52 != 13646976LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2014 = INT16_MAX;
	int32_t x2015 = -4657;
	int64_t t53 = 8269793LL;

	t53 = ((x2013&(x2014|x2015))<<x2016);

	if (t53 != 133192064LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2029 = INT16_MIN;
	uint32_t x2031 = 0U;
	static uint32_t x2032 = 1U;
	static uint32_t t54 = 2076118041U;

	t54 = ((x2029&(x2030|x2031))<<x2032);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2037 = UINT32_MAX;
	int8_t x2038 = 37;
	uint32_t x2039 = UINT32_MAX;
	uint8_t x2040 = 11U;
	uint32_t t55 = 18U;

	t55 = ((x2037&(x2038|x2039))<<x2040);

	if (t55 != 4294965248U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2041 = 1577;
	uint16_t x2044 = 62U;
	uint64_t t56 = 2223755153907520900LLU;

	t56 = ((x2041&(x2042|x2043))<<x2044);

	if (t56 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2049 = INT64_MIN;
	int32_t x2050 = 254;
	static int64_t t57 = 234245LL;

	t57 = ((x2049&(x2050|x2051))<<x2052);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2062 = INT16_MAX;
	uint8_t x2064 = 11U;
	volatile int64_t t58 = 503652745763LL;

	t58 = ((x2061&(x2062|x2063))<<x2064);

	if (t58 != 67106816LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2093 = INT64_MAX;
	volatile int32_t x2094 = -79;
	uint32_t x2095 = 4U;
	static volatile uint32_t x2096 = 0U;
	static volatile int64_t t59 = 26072814LL;

	t59 = ((x2093&(x2094|x2095))<<x2096);

	if (t59 != 4294967221LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2105 = INT8_MIN;
	uint64_t x2106 = UINT64_MAX;
	uint8_t x2107 = 1U;
	int16_t x2108 = 5;
	volatile uint64_t t60 = 24348LLU;

	t60 = ((x2105&(x2106|x2107))<<x2108);

	if (t60 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2261 = 5;
	uint64_t x2263 = 17552479504LLU;
	uint32_t x2264 = 0U;
	uint64_t t61 = 415896850LLU;

	t61 = ((x2261&(x2262|x2263))<<x2264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x2397 = INT16_MAX;
	int64_t x2398 = INT64_MIN;
	int8_t x2399 = INT8_MIN;
	volatile uint32_t x2400 = 0U;

	t62 = ((x2397&(x2398|x2399))<<x2400);

	if (t62 != 32640LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2401 = UINT8_MAX;
	volatile int16_t x2402 = -821;
	uint32_t x2403 = 9814U;
	uint8_t x2404 = 6U;
	uint32_t t63 = 0U;

	t63 = ((x2401&(x2402|x2403))<<x2404);

	if (t63 != 14272U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2429 = 15U;
	uint32_t x2430 = UINT32_MAX;
	volatile uint8_t x2431 = 87U;
	int16_t x2432 = 3;
	volatile uint32_t t64 = 7745654U;

	t64 = ((x2429&(x2430|x2431))<<x2432);

	if (t64 != 120U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2437 = INT16_MIN;
	int32_t x2438 = INT32_MAX;
	int32_t x2439 = 1880580;
	uint16_t x2440 = 0U;

	t65 = ((x2437&(x2438|x2439))<<x2440);

	if (t65 != 2147450880) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x2449 = 50U;
	static volatile int64_t x2450 = -3912849492315213LL;
	volatile int16_t x2451 = 3267;
	uint32_t x2452 = 8U;
	volatile int64_t t66 = -19086595LL;

	t66 = ((x2449&(x2450|x2451))<<x2452);

	if (t66 != 12800LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2485 = 2466696LLU;
	static volatile int64_t x2488 = 41LL;
	volatile uint64_t t67 = 479650812722986441LLU;

	t67 = ((x2485&(x2486|x2487))<<x2488);

	if (t67 != 5424321868377096192LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2509 = -5;
	volatile int32_t x2510 = INT32_MIN;
	static uint64_t x2511 = 92884853381LLU;
	static uint64_t t68 = 470654LLU;

	t68 = ((x2509&(x2510|x2511))<<x2512);

	if (t68 != 18446717786775371776LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2545 = INT8_MAX;
	int64_t x2546 = INT64_MIN;
	volatile int64_t x2547 = INT64_MIN;
	int64_t t69 = 1277068615954745LL;

	t69 = ((x2545&(x2546|x2547))<<x2548);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2585 = 3U;
	uint32_t x2586 = 1876U;
	int64_t x2587 = INT64_MIN;
	static uint16_t x2588 = 15U;
	volatile int64_t t70 = 1LL;

	t70 = ((x2585&(x2586|x2587))<<x2588);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2597 = UINT16_MAX;
	int8_t x2598 = -48;
	int16_t x2599 = INT16_MIN;
	uint8_t x2600 = 1U;

	t71 = ((x2597&(x2598|x2599))<<x2600);

	if (t71 != 130976) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2605 = INT32_MIN;
	uint64_t x2606 = 825832426444915LLU;
	uint32_t x2607 = 27482398U;
	uint8_t x2608 = 2U;

	t72 = ((x2605&(x2606|x2607))<<x2608);

	if (t72 != 3303328066830336LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2629 = 19U;
	int16_t x2631 = -870;
	volatile uint8_t x2632 = 17U;
	int32_t t73 = 189737;

	t73 = ((x2629&(x2630|x2631))<<x2632);

	if (t73 != 2359296) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x2697 = 21452U;
	int8_t x2698 = INT8_MIN;
	static int64_t x2699 = INT64_MIN;
	int8_t x2700 = 8;
	volatile int64_t t74 = 22200623131750763LL;

	t74 = ((x2697&(x2698|x2699))<<x2700);

	if (t74 != 5472256LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x2704 = 5;
	volatile int64_t t75 = -26467LL;

	t75 = ((x2701&(x2702|x2703))<<x2704);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2833 = INT32_MIN;
	uint32_t x2834 = UINT32_MAX;
	static uint16_t x2836 = 7U;
	volatile uint32_t t76 = 1755264087U;

	t76 = ((x2833&(x2834|x2835))<<x2836);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x2894 = UINT64_MAX;
	int32_t x2895 = INT32_MIN;
	static volatile uint16_t x2896 = 26U;
	static volatile uint64_t t77 = 16649687LLU;

	t77 = ((x2893&(x2894|x2895))<<x2896);

	if (t77 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2949 = INT16_MIN;
	uint16_t x2952 = 1U;
	static uint64_t t78 = 746132LLU;

	t78 = ((x2949&(x2950|x2951))<<x2952);

	if (t78 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x3027 = -2902138140336LL;

	t79 = ((x3025&(x3026|x3027))<<x3028);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3117 = INT8_MAX;
	uint32_t x3118 = 119309U;
	volatile uint64_t t80 = 218456054LLU;

	t80 = ((x3117&(x3118|x3119))<<x3120);

	if (t80 != 3488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3145 = 58U;
	volatile uint8_t x3146 = UINT8_MAX;
	int16_t x3147 = -20;
	uint8_t x3148 = 1U;
	int32_t t81 = -724833809;

	t81 = ((x3145&(x3146|x3147))<<x3148);

	if (t81 != 116) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3241 = INT8_MIN;
	int16_t x3242 = INT16_MIN;
	volatile uint64_t x3243 = 5LLU;
	static int16_t x3244 = 4;

	t82 = ((x3241&(x3242|x3243))<<x3244);

	if (t82 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3261 = 12;
	volatile uint32_t x3262 = UINT32_MAX;
	static volatile int8_t x3263 = 14;
	uint8_t x3264 = 27U;
	volatile uint32_t t83 = 61733U;

	t83 = ((x3261&(x3262|x3263))<<x3264);

	if (t83 != 1610612736U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3265 = UINT16_MAX;
	static int16_t x3266 = 118;
	int64_t x3267 = -502224LL;
	static uint8_t x3268 = 1U;
	volatile int64_t t84 = 1796520LL;

	t84 = ((x3265&(x3266|x3267))<<x3268);

	if (t84 != 44268LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3285 = -120;
	volatile int64_t x3286 = -139202330139065LL;
	volatile uint64_t x3287 = 10701662LLU;
	static uint64_t t85 = 1993861649265398LLU;

	t85 = ((x3285&(x3286|x3287))<<x3288);

	if (t85 != 16001289476047372288LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3341 = -1;
	static uint8_t x3342 = UINT8_MAX;
	uint16_t x3343 = UINT16_MAX;
	uint32_t x3344 = 0U;
	static volatile int32_t t86 = 488282;

	t86 = ((x3341&(x3342|x3343))<<x3344);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3378 = INT64_MIN;
	static int32_t x3379 = -1;
	uint8_t x3380 = 11U;
	volatile uint64_t t87 = 82558450659773LLU;

	t87 = ((x3377&(x3378|x3379))<<x3380);

	if (t87 != 66539416720939008LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x3410 = UINT16_MAX;
	int16_t x3411 = -1;
	static volatile int8_t x3412 = 1;

	t88 = ((x3409&(x3410|x3411))<<x3412);

	if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x3497 = -1LL;
	int16_t x3498 = 1;
	static uint32_t x3499 = 2684980U;
	int64_t t89 = 16630637080754LL;

	t89 = ((x3497&(x3498|x3499))<<x3500);

	if (t89 != 5765952792690688LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3530 = INT8_MIN;
	int32_t x3531 = INT32_MIN;
	int8_t x3532 = 13;
	volatile int32_t t90 = 7621124;

	t90 = ((x3529&(x3530|x3531))<<x3532);

	if (t90 != 32505856) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3534 = -1;
	uint32_t x3535 = 1212U;

	t91 = ((x3533&(x3534|x3535))<<x3536);

	if (t91 != 2246912LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3573 = 274;
	uint32_t x3574 = 1455959904U;
	uint8_t x3575 = 7U;
	static uint8_t x3576 = 6U;

	t92 = ((x3573&(x3574|x3575))<<x3576);

	if (t92 != 16512U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3661 = 1;
	int32_t x3662 = INT32_MIN;
	int8_t x3663 = 0;
	volatile uint8_t x3664 = 8U;

	t93 = ((x3661&(x3662|x3663))<<x3664);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x3751 = 51;
	static uint32_t t94 = 15831285U;

	t94 = ((x3749&(x3750|x3751))<<x3752);

	if (t94 != 4294967292U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3769 = INT16_MAX;
	static int8_t x3770 = INT8_MIN;
	static uint8_t x3772 = 0U;
	int32_t t95 = 1818686;

	t95 = ((x3769&(x3770|x3771))<<x3772);

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3837 = 0U;
	int16_t x3839 = 3856;
	uint16_t x3840 = 7U;
	volatile int32_t t96 = -977227288;

	t96 = ((x3837&(x3838|x3839))<<x3840);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3845 = -1;
	uint16_t x3846 = 0U;
	int16_t x3847 = INT16_MAX;
	volatile uint8_t x3848 = 4U;
	static volatile int32_t t97 = -518664351;

	t97 = ((x3845&(x3846|x3847))<<x3848);

	if (t97 != 524272) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x3965 = 69U;
	static int16_t x3966 = -8;
	int8_t x3967 = INT8_MAX;
	volatile int32_t t98 = 20884230;

	t98 = ((x3965&(x3966|x3967))<<x3968);

	if (t98 != 2208) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3973 = UINT32_MAX;
	static uint8_t x3974 = 0U;
	int64_t x3975 = INT64_MIN;
	int8_t x3976 = 0;
	int64_t t99 = -6436LL;

	t99 = ((x3973&(x3974|x3975))<<x3976);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

