#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x66 = INT8_MIN;
static int32_t x67 = INT32_MIN;
int32_t x70 = -36967;
int32_t t1 = 1;
int64_t x165 = -49017492LL;
int16_t x175 = -1;
volatile int32_t t6 = 192071;
volatile int32_t x283 = -1;
uint8_t x334 = 13U;
static uint64_t x405 = 1627873LLU;
volatile int32_t t10 = 554643807;
uint32_t x469 = 495U;
volatile int32_t t12 = -3674570;
static volatile int8_t x613 = INT8_MAX;
volatile uint8_t x615 = 1U;
int32_t t15 = 13454804;
int8_t x628 = 28;
int16_t x719 = -1;
int32_t x894 = INT32_MIN;
static uint64_t x1013 = 97634841040323094LLU;
int32_t x1015 = INT32_MIN;
volatile int8_t x1056 = 0;
volatile int32_t t27 = -6490537;
int16_t x1177 = INT16_MAX;
int16_t x1178 = 414;
uint64_t x1283 = 77298LLU;
int32_t x1331 = -131130102;
int16_t x1363 = 117;
static volatile int32_t t34 = 1277;
int16_t x1417 = INT16_MIN;
uint32_t x1418 = UINT32_MAX;
int64_t x1430 = INT64_MAX;
int32_t t36 = -32915;
int64_t x1446 = 15063LL;
static int32_t x1555 = -2471700;
int8_t x1634 = INT8_MIN;
int32_t x1635 = INT32_MIN;
uint8_t x1662 = 10U;
uint32_t x1663 = 97598U;
int16_t x1683 = INT16_MIN;
uint8_t x1696 = 2U;
static int64_t x1733 = 65909014067LL;
uint32_t x1735 = UINT32_MAX;
int8_t x1741 = 0;
uint16_t x1878 = UINT16_MAX;
uint8_t x1880 = 0U;
static int64_t x1898 = INT64_MAX;
volatile uint8_t x1905 = 0U;
int16_t x1906 = -1;
uint64_t x1932 = 9LLU;
volatile uint16_t x1953 = 59U;
int32_t t51 = 37904306;
static int16_t x1969 = 0;
int32_t x1970 = 11657742;
static int16_t x1971 = -1;
uint32_t x2016 = 0U;
int32_t x2046 = INT32_MAX;
int16_t x2047 = -1;
volatile uint8_t x2048 = 1U;
int32_t t56 = -3760938;
int32_t x2234 = INT32_MIN;
uint8_t x2236 = 3U;
int32_t x2289 = INT32_MAX;
static int8_t x2291 = -4;
static int8_t x2346 = INT8_MAX;
int32_t t60 = -113718036;
static int8_t x2382 = 0;
int32_t x2383 = -1;
static volatile int32_t x2390 = 3084896;
uint16_t x2391 = UINT16_MAX;
static int32_t x2392 = 1;
static int8_t x2415 = INT8_MAX;
int64_t x2418 = -1LL;
volatile int32_t t64 = 52975;
int8_t x2445 = -1;
static int32_t t65 = -2107;
int64_t x2458 = INT64_MAX;
static uint16_t x2459 = UINT16_MAX;
static uint8_t x2597 = 1U;
static int32_t t70 = -6671;
uint64_t x2631 = 263949217662912852LLU;
int32_t x2665 = INT32_MIN;
int8_t x2669 = -6;
uint8_t x2670 = 0U;
int8_t x2783 = 8;
static volatile int32_t t75 = -15921;
int32_t t79 = -76392;
uint16_t x2924 = 0U;
volatile int32_t t81 = 642381;
volatile int32_t t83 = -114534;
uint8_t x2985 = 46U;
int8_t x2986 = -14;
volatile uint32_t x2988 = 1U;
volatile int32_t t85 = -1;
int8_t x3075 = -45;
static uint8_t x3076 = 21U;
uint32_t x3178 = 318174U;
uint64_t x3214 = 12660LLU;
int32_t t92 = -122559;
int32_t t93 = -12348;
int8_t x3269 = INT8_MIN;
int16_t x3271 = INT16_MAX;
static volatile int8_t x3332 = 1;
uint16_t x3438 = 1U;
uint64_t x3439 = 2713796343373LLU;
volatile int32_t t99 = -227557388;


void f0(void) {
	uint32_t x65 = 4U;
	volatile int16_t x68 = 1;
	volatile int32_t t0 = 616141;

	t0 = (((x65-x66)<=x67)>>x68);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x69 = INT32_MIN;
	int16_t x71 = -162;
	int8_t x72 = 31;

	t1 = (((x69-x70)<=x71)>>x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x73 = INT16_MIN;
	uint64_t x74 = 25LLU;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 4U;
	int32_t t2 = 43176;

	t2 = (((x73-x74)<=x75)>>x76);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = 20241LL;
	int16_t x111 = INT16_MIN;
	volatile int8_t x112 = 1;
	static int32_t t3 = 1062375;

	t3 = (((x109-x110)<=x111)>>x112);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x166 = 820600545705819291LL;
	static int32_t x167 = INT32_MAX;
	static uint64_t x168 = 0LLU;
	static volatile int32_t t4 = -318478697;

	t4 = (((x165-x166)<=x167)>>x168);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x173 = -1;
	static uint64_t x174 = 26256LLU;
	static volatile int32_t x176 = 3;
	int32_t t5 = 129;

	t5 = (((x173-x174)<=x175)>>x176);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x177 = 6827U;
	volatile uint16_t x178 = UINT16_MAX;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = 13;

	t6 = (((x177-x178)<=x179)>>x180);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x261 = UINT16_MAX;
	int16_t x262 = -347;
	static int8_t x263 = -1;
	int8_t x264 = 13;
	static int32_t t7 = 167276357;

	t7 = (((x261-x262)<=x263)>>x264);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x281 = INT16_MIN;
	volatile uint32_t x282 = 1161297U;
	static volatile int64_t x284 = 2LL;
	int32_t t8 = -1035867;

	t8 = (((x281-x282)<=x283)>>x284);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x333 = 679140304U;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = 2U;
	int32_t t9 = -18;

	t9 = (((x333-x334)<=x335)>>x336);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x406 = -2568886806255LL;
	int16_t x407 = -3838;
	static volatile int32_t x408 = 10;

	t10 = (((x405-x406)<=x407)>>x408);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x413 = INT8_MAX;
	uint8_t x414 = 50U;
	static int16_t x415 = 1;
	volatile int8_t x416 = 0;
	int32_t t11 = -255213068;

	t11 = (((x413-x414)<=x415)>>x416);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x470 = -1LL;
	int32_t x471 = INT32_MIN;
	uint16_t x472 = 7U;

	t12 = (((x469-x470)<=x471)>>x472);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x477 = UINT16_MAX;
	static int64_t x478 = -11LL;
	uint8_t x479 = 12U;
	static int8_t x480 = 0;
	int32_t t13 = 410;

	t13 = (((x477-x478)<=x479)>>x480);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x597 = -1;
	int8_t x598 = -1;
	static int8_t x599 = -10;
	volatile uint8_t x600 = 12U;
	static int32_t t14 = 3;

	t14 = (((x597-x598)<=x599)>>x600);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x614 = UINT32_MAX;
	int8_t x616 = 2;

	t15 = (((x613-x614)<=x615)>>x616);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x625 = -394142;
	uint32_t x626 = UINT32_MAX;
	int64_t x627 = -1LL;
	volatile int32_t t16 = -129068524;

	t16 = (((x625-x626)<=x627)>>x628);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x693 = UINT32_MAX;
	static uint8_t x694 = UINT8_MAX;
	int64_t x695 = -1LL;
	volatile int16_t x696 = 1;
	volatile int32_t t17 = 144;

	t17 = (((x693-x694)<=x695)>>x696);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x697 = -57;
	static uint64_t x698 = 1265657606LLU;
	uint64_t x699 = 283391LLU;
	volatile int16_t x700 = 3;
	volatile int32_t t18 = 49596;

	t18 = (((x697-x698)<=x699)>>x700);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x717 = 3U;
	volatile uint8_t x718 = 58U;
	uint8_t x720 = 0U;
	volatile int32_t t19 = -14923;

	t19 = (((x717-x718)<=x719)>>x720);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x741 = 468U;
	volatile int8_t x742 = INT8_MIN;
	int16_t x743 = INT16_MAX;
	static uint8_t x744 = 1U;
	static int32_t t20 = -1;

	t20 = (((x741-x742)<=x743)>>x744);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x809 = 0U;
	int64_t x810 = -1LL;
	uint8_t x811 = 50U;
	uint32_t x812 = 0U;
	int32_t t21 = 5;

	t21 = (((x809-x810)<=x811)>>x812);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x893 = INT32_MIN;
	int32_t x895 = INT32_MIN;
	uint32_t x896 = 10U;
	int32_t t22 = -624119759;

	t22 = (((x893-x894)<=x895)>>x896);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x913 = INT32_MIN;
	static int64_t x914 = -1LL;
	volatile int16_t x915 = -764;
	static uint16_t x916 = 1U;
	volatile int32_t t23 = 412642092;

	t23 = (((x913-x914)<=x915)>>x916);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1014 = INT32_MIN;
	uint8_t x1016 = 13U;
	int32_t t24 = -1;

	t24 = (((x1013-x1014)<=x1015)>>x1016);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1053 = INT64_MIN;
	int32_t x1054 = -1;
	uint8_t x1055 = 1U;
	int32_t t25 = 57380;

	t25 = (((x1053-x1054)<=x1055)>>x1056);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1057 = UINT16_MAX;
	int16_t x1058 = -1553;
	int32_t x1059 = -8303092;
	uint8_t x1060 = 3U;
	int32_t t26 = -435879;

	t26 = (((x1057-x1058)<=x1059)>>x1060);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1113 = INT32_MIN;
	int8_t x1114 = -1;
	uint16_t x1115 = UINT16_MAX;
	int32_t x1116 = 10;

	t27 = (((x1113-x1114)<=x1115)>>x1116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1121 = -1;
	static uint32_t x1122 = 2923U;
	uint8_t x1123 = 74U;
	volatile uint64_t x1124 = 5LLU;
	int32_t t28 = -363;

	t28 = (((x1121-x1122)<=x1123)>>x1124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1179 = UINT8_MAX;
	uint8_t x1180 = 17U;
	volatile int32_t t29 = 72;

	t29 = (((x1177-x1178)<=x1179)>>x1180);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1277 = 0;
	uint32_t x1278 = 470712U;
	uint32_t x1279 = 5U;
	static uint16_t x1280 = 2U;
	int32_t t30 = -11062;

	t30 = (((x1277-x1278)<=x1279)>>x1280);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1281 = 10264U;
	static uint8_t x1282 = 2U;
	static uint8_t x1284 = 3U;
	int32_t t31 = -2991925;

	t31 = (((x1281-x1282)<=x1283)>>x1284);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1329 = 2;
	static volatile int8_t x1330 = -7;
	static uint16_t x1332 = 1U;
	static int32_t t32 = 4840498;

	t32 = (((x1329-x1330)<=x1331)>>x1332);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1361 = INT16_MAX;
	int32_t x1362 = 630823;
	static uint16_t x1364 = 3U;
	volatile int32_t t33 = -1;

	t33 = (((x1361-x1362)<=x1363)>>x1364);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1377 = INT32_MIN;
	uint64_t x1378 = 999LLU;
	static int64_t x1379 = INT64_MIN;
	uint32_t x1380 = 1U;

	t34 = (((x1377-x1378)<=x1379)>>x1380);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1419 = UINT64_MAX;
	uint64_t x1420 = 6LLU;
	volatile int32_t t35 = 255773343;

	t35 = (((x1417-x1418)<=x1419)>>x1420);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1429 = 275956867259002114LL;
	uint16_t x1431 = UINT16_MAX;
	int16_t x1432 = 0;

	t36 = (((x1429-x1430)<=x1431)>>x1432);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1445 = INT8_MAX;
	uint32_t x1447 = 100499U;
	uint8_t x1448 = 2U;
	volatile int32_t t37 = 1;

	t37 = (((x1445-x1446)<=x1447)>>x1448);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1521 = 0;
	uint16_t x1522 = 2143U;
	int8_t x1523 = 19;
	uint32_t x1524 = 0U;
	volatile int32_t t38 = 15;

	t38 = (((x1521-x1522)<=x1523)>>x1524);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1553 = INT32_MAX;
	volatile uint64_t x1554 = 2LLU;
	uint8_t x1556 = 11U;
	int32_t t39 = 1;

	t39 = (((x1553-x1554)<=x1555)>>x1556);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1633 = UINT64_MAX;
	int8_t x1636 = 26;
	volatile int32_t t40 = 7481670;

	t40 = (((x1633-x1634)<=x1635)>>x1636);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1661 = 4341;
	volatile int32_t x1664 = 1;
	int32_t t41 = 64692;

	t41 = (((x1661-x1662)<=x1663)>>x1664);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1681 = -10;
	int8_t x1682 = INT8_MAX;
	int8_t x1684 = 1;
	int32_t t42 = 314810591;

	t42 = (((x1681-x1682)<=x1683)>>x1684);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1693 = 44433901U;
	int32_t x1694 = -1;
	int64_t x1695 = INT64_MIN;
	static int32_t t43 = -1349;

	t43 = (((x1693-x1694)<=x1695)>>x1696);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1701 = 146872U;
	static uint32_t x1702 = 3299U;
	volatile int64_t x1703 = INT64_MIN;
	int32_t x1704 = 0;
	int32_t t44 = -34982107;

	t44 = (((x1701-x1702)<=x1703)>>x1704);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1734 = 3660439U;
	static uint64_t x1736 = 5LLU;
	volatile int32_t t45 = -10869;

	t45 = (((x1733-x1734)<=x1735)>>x1736);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1742 = 2U;
	int32_t x1743 = INT32_MAX;
	static uint64_t x1744 = 8LLU;
	volatile int32_t t46 = -37200156;

	t46 = (((x1741-x1742)<=x1743)>>x1744);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1877 = 122665397192671354LLU;
	uint32_t x1879 = UINT32_MAX;
	static volatile int32_t t47 = 564;

	t47 = (((x1877-x1878)<=x1879)>>x1880);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1897 = -1;
	volatile uint64_t x1899 = UINT64_MAX;
	volatile uint16_t x1900 = 8U;
	volatile int32_t t48 = -1067;

	t48 = (((x1897-x1898)<=x1899)>>x1900);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1907 = UINT16_MAX;
	uint8_t x1908 = 31U;
	volatile int32_t t49 = -58;

	t49 = (((x1905-x1906)<=x1907)>>x1908);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x1929 = 55813096LL;
	static int8_t x1930 = INT8_MIN;
	uint64_t x1931 = UINT64_MAX;
	volatile int32_t t50 = -403366052;

	t50 = (((x1929-x1930)<=x1931)>>x1932);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1954 = 2;
	uint64_t x1955 = 964LLU;
	int16_t x1956 = 15;

	t51 = (((x1953-x1954)<=x1955)>>x1956);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1972 = 1;
	int32_t t52 = 0;

	t52 = (((x1969-x1970)<=x1971)>>x1972);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2013 = 0LL;
	volatile int8_t x2014 = -1;
	int32_t x2015 = INT32_MIN;
	volatile int32_t t53 = -3423;

	t53 = (((x2013-x2014)<=x2015)>>x2016);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2045 = UINT64_MAX;
	volatile int32_t t54 = 31098;

	t54 = (((x2045-x2046)<=x2047)>>x2048);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2077 = 40622866U;
	uint32_t x2078 = UINT32_MAX;
	uint32_t x2079 = 1585113U;
	uint64_t x2080 = 3LLU;
	int32_t t55 = -1706257;

	t55 = (((x2077-x2078)<=x2079)>>x2080);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2117 = INT32_MIN;
	int64_t x2118 = INT64_MIN;
	uint64_t x2119 = 702594678LLU;
	int64_t x2120 = 1LL;

	t56 = (((x2117-x2118)<=x2119)>>x2120);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2169 = 6U;
	static uint8_t x2170 = 0U;
	volatile uint16_t x2171 = UINT16_MAX;
	static uint8_t x2172 = 2U;
	volatile int32_t t57 = 36;

	t57 = (((x2169-x2170)<=x2171)>>x2172);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2233 = 27958U;
	uint64_t x2235 = 8016751755178404649LLU;
	static volatile int32_t t58 = 830;

	t58 = (((x2233-x2234)<=x2235)>>x2236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2290 = 478241LL;
	int8_t x2292 = 0;
	int32_t t59 = -10178677;

	t59 = (((x2289-x2290)<=x2291)>>x2292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2345 = 1U;
	int32_t x2347 = -5574;
	volatile int16_t x2348 = 0;

	t60 = (((x2345-x2346)<=x2347)>>x2348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2381 = INT32_MAX;
	volatile uint8_t x2384 = 5U;
	int32_t t61 = -1;

	t61 = (((x2381-x2382)<=x2383)>>x2384);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2389 = UINT16_MAX;
	volatile int32_t t62 = 246;

	t62 = (((x2389-x2390)<=x2391)>>x2392);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2413 = 502659826U;
	int64_t x2414 = 31LL;
	int16_t x2416 = 0;
	volatile int32_t t63 = -33127298;

	t63 = (((x2413-x2414)<=x2415)>>x2416);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2417 = 27;
	uint8_t x2419 = UINT8_MAX;
	uint32_t x2420 = 5U;

	t64 = (((x2417-x2418)<=x2419)>>x2420);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2446 = 1;
	int64_t x2447 = INT64_MAX;
	uint16_t x2448 = 0U;

	t65 = (((x2445-x2446)<=x2447)>>x2448);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x2457 = UINT64_MAX;
	static volatile uint16_t x2460 = 29U;
	volatile int32_t t66 = -1237;

	t66 = (((x2457-x2458)<=x2459)>>x2460);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2477 = -1;
	int8_t x2478 = INT8_MIN;
	volatile uint64_t x2479 = UINT64_MAX;
	uint8_t x2480 = 0U;
	static volatile int32_t t67 = 26310;

	t67 = (((x2477-x2478)<=x2479)>>x2480);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2501 = UINT32_MAX;
	static int8_t x2502 = 1;
	uint8_t x2503 = 8U;
	uint8_t x2504 = 2U;
	volatile int32_t t68 = 31;

	t68 = (((x2501-x2502)<=x2503)>>x2504);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2513 = INT16_MIN;
	int64_t x2514 = 3LL;
	static volatile int64_t x2515 = INT64_MAX;
	static uint8_t x2516 = 10U;
	int32_t t69 = 41;

	t69 = (((x2513-x2514)<=x2515)>>x2516);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2598 = UINT8_MAX;
	int64_t x2599 = INT64_MAX;
	uint8_t x2600 = 0U;

	t70 = (((x2597-x2598)<=x2599)>>x2600);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2629 = 37175U;
	int64_t x2630 = INT64_MAX;
	uint64_t x2632 = 0LLU;
	static int32_t t71 = 135;

	t71 = (((x2629-x2630)<=x2631)>>x2632);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2666 = UINT32_MAX;
	static int64_t x2667 = INT64_MAX;
	static uint8_t x2668 = 2U;
	int32_t t72 = 188;

	t72 = (((x2665-x2666)<=x2667)>>x2668);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2671 = INT16_MAX;
	volatile uint8_t x2672 = 1U;
	int32_t t73 = 112856428;

	t73 = (((x2669-x2670)<=x2671)>>x2672);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2725 = INT8_MIN;
	int8_t x2726 = -1;
	uint8_t x2727 = 9U;
	int32_t x2728 = 3;
	int32_t t74 = 31580233;

	t74 = (((x2725-x2726)<=x2727)>>x2728);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2781 = 662578719045LLU;
	int64_t x2782 = 70581064688521239LL;
	uint8_t x2784 = 5U;

	t75 = (((x2781-x2782)<=x2783)>>x2784);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2833 = INT16_MIN;
	static int8_t x2834 = 12;
	int64_t x2835 = INT64_MIN;
	static int8_t x2836 = 1;
	int32_t t76 = -5;

	t76 = (((x2833-x2834)<=x2835)>>x2836);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2869 = -1;
	static volatile int8_t x2870 = INT8_MIN;
	int8_t x2871 = INT8_MAX;
	int16_t x2872 = 1;
	static int32_t t77 = 7239992;

	t77 = (((x2869-x2870)<=x2871)>>x2872);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2877 = -1;
	static uint32_t x2878 = UINT32_MAX;
	int64_t x2879 = -1LL;
	uint8_t x2880 = 6U;
	volatile int32_t t78 = 989;

	t78 = (((x2877-x2878)<=x2879)>>x2880);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2897 = -1;
	uint32_t x2898 = UINT32_MAX;
	int32_t x2899 = INT32_MIN;
	uint32_t x2900 = 2U;

	t79 = (((x2897-x2898)<=x2899)>>x2900);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x2901 = 29U;
	int64_t x2902 = INT64_MAX;
	uint32_t x2903 = 65011U;
	volatile uint8_t x2904 = 3U;
	volatile int32_t t80 = -1;

	t80 = (((x2901-x2902)<=x2903)>>x2904);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2921 = INT32_MIN;
	uint64_t x2922 = UINT64_MAX;
	uint32_t x2923 = 139830432U;

	t81 = (((x2921-x2922)<=x2923)>>x2924);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2961 = 4350;
	static uint64_t x2962 = 38427127765080LLU;
	volatile uint64_t x2963 = 83407529754825780LLU;
	uint8_t x2964 = 15U;
	int32_t t82 = -24;

	t82 = (((x2961-x2962)<=x2963)>>x2964);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2973 = INT16_MIN;
	static int16_t x2974 = INT16_MIN;
	uint16_t x2975 = 146U;
	uint8_t x2976 = 31U;

	t83 = (((x2973-x2974)<=x2975)>>x2976);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x2977 = -7;
	int32_t x2978 = 213;
	static volatile uint64_t x2979 = 253063683545LLU;
	int8_t x2980 = 6;
	int32_t t84 = 55;

	t84 = (((x2977-x2978)<=x2979)>>x2980);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2987 = 0U;

	t85 = (((x2985-x2986)<=x2987)>>x2988);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x3073 = -1;
	uint8_t x3074 = 1U;
	int32_t t86 = 506;

	t86 = (((x3073-x3074)<=x3075)>>x3076);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3133 = 1U;
	volatile int64_t x3134 = -15225353349LL;
	int16_t x3135 = INT16_MAX;
	uint8_t x3136 = 1U;
	static int32_t t87 = -22;

	t87 = (((x3133-x3134)<=x3135)>>x3136);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x3137 = -1246601;
	uint64_t x3138 = UINT64_MAX;
	uint32_t x3139 = 9657U;
	int8_t x3140 = 3;
	static volatile int32_t t88 = 24254;

	t88 = (((x3137-x3138)<=x3139)>>x3140);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3177 = INT32_MIN;
	int64_t x3179 = -54499093LL;
	static int64_t x3180 = 1LL;
	int32_t t89 = 30;

	t89 = (((x3177-x3178)<=x3179)>>x3180);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3201 = -1;
	uint16_t x3202 = UINT16_MAX;
	int8_t x3203 = INT8_MIN;
	static uint16_t x3204 = 4U;
	static volatile int32_t t90 = -166985;

	t90 = (((x3201-x3202)<=x3203)>>x3204);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x3213 = 2971511029LLU;
	int64_t x3215 = INT64_MIN;
	int8_t x3216 = 1;
	int32_t t91 = 170;

	t91 = (((x3213-x3214)<=x3215)>>x3216);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x3233 = 3U;
	int64_t x3234 = INT64_MAX;
	uint64_t x3235 = UINT64_MAX;
	uint16_t x3236 = 7U;

	t92 = (((x3233-x3234)<=x3235)>>x3236);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3249 = INT64_MAX;
	volatile uint16_t x3250 = UINT16_MAX;
	volatile int16_t x3251 = -7;
	int8_t x3252 = 0;

	t93 = (((x3249-x3250)<=x3251)>>x3252);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3270 = 8U;
	static int8_t x3272 = 3;
	volatile int32_t t94 = 98;

	t94 = (((x3269-x3270)<=x3271)>>x3272);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x3281 = INT16_MIN;
	volatile int32_t x3282 = 513700281;
	uint16_t x3283 = UINT16_MAX;
	uint8_t x3284 = 5U;
	int32_t t95 = 52599199;

	t95 = (((x3281-x3282)<=x3283)>>x3284);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3329 = INT64_MIN;
	int32_t x3330 = INT32_MIN;
	int64_t x3331 = INT64_MAX;
	volatile int32_t t96 = 805;

	t96 = (((x3329-x3330)<=x3331)>>x3332);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3413 = -1;
	int8_t x3414 = 0;
	int16_t x3415 = INT16_MAX;
	uint8_t x3416 = 19U;
	volatile int32_t t97 = -10437139;

	t97 = (((x3413-x3414)<=x3415)>>x3416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3417 = 5577593694160153LL;
	int8_t x3418 = INT8_MAX;
	uint16_t x3419 = 44U;
	volatile int8_t x3420 = 3;
	int32_t t98 = -11614760;

	t98 = (((x3417-x3418)<=x3419)>>x3420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3437 = 22229379763108LL;
	uint8_t x3440 = 25U;

	t99 = (((x3437-x3438)<=x3439)>>x3440);

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

