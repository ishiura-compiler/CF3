#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x94 = INT64_MAX;
volatile uint32_t x96 = 3U;
int64_t x178 = INT64_MIN;
static int32_t x226 = INT32_MAX;
int8_t x234 = INT8_MIN;
volatile int8_t x236 = 1;
int16_t x277 = INT16_MAX;
uint32_t x280 = 1U;
int32_t x312 = 0;
uint64_t x315 = 2194607536469LLU;
volatile uint64_t x333 = UINT64_MAX;
volatile int8_t x360 = 9;
volatile int8_t x370 = 0;
volatile int16_t x381 = INT16_MAX;
static int32_t t16 = -632174955;
uint8_t x558 = 1U;
uint16_t x559 = 796U;
volatile int32_t t21 = 28980621;
uint16_t x615 = 25U;
static int64_t x681 = INT64_MAX;
volatile int32_t x683 = 921;
static int32_t t24 = -983727445;
uint64_t x697 = 1021276810LLU;
uint64_t x699 = 2552393560810074LLU;
int16_t x845 = INT16_MAX;
int32_t x870 = INT32_MAX;
int8_t x885 = 1;
static int64_t x886 = -2399700LL;
int16_t x887 = INT16_MIN;
volatile int32_t t31 = -126;
uint16_t x960 = 0U;
volatile int32_t t35 = -1729;
int8_t x1214 = -10;
int8_t x1253 = 9;
int8_t x1323 = -1;
int8_t x1418 = INT8_MIN;
int32_t t42 = 3382126;
int64_t x1429 = -855166380323856409LL;
uint64_t x1430 = 2835050417666552LLU;
int32_t x1537 = -1;
int32_t x1548 = 3;
int32_t t51 = 506;
int16_t x1608 = 10;
int8_t x1622 = -57;
int64_t x1762 = 29827687514LL;
uint16_t x1928 = 3U;
int16_t x1961 = 0;
int64_t x1962 = INT64_MIN;
uint8_t x1963 = UINT8_MAX;
int64_t x1964 = 2LL;
volatile int32_t t62 = 2;
uint32_t x2043 = UINT32_MAX;
uint8_t x2044 = 1U;
int32_t x2076 = 0;
int32_t t64 = -13;
int16_t x2089 = INT16_MAX;
uint32_t x2186 = 8430U;
volatile int32_t t68 = -165957902;
int32_t t72 = -10;
static volatile int32_t x2241 = -1;
int64_t x2262 = 246589759821LL;
uint64_t x2263 = UINT64_MAX;
int8_t x2264 = 0;
static int8_t x2269 = INT8_MAX;
volatile uint16_t x2272 = 26U;
int32_t t76 = 1501920;
volatile int32_t t77 = 3;
int64_t x2461 = -7613499LL;
uint16_t x2464 = 22U;
uint32_t x2498 = 1333082U;
int32_t t79 = 143262;
int64_t x2565 = 812LL;
int32_t x2683 = 53;
static int64_t x2695 = -1846605408679LL;
int16_t x2725 = 334;
volatile int32_t t85 = -54064;
int16_t x2745 = INT16_MIN;
uint8_t x2748 = 0U;
int16_t x2782 = 126;
volatile int32_t x2874 = 14;
volatile int32_t t89 = -122;
int32_t x2940 = 5;
uint8_t x3032 = 1U;
int32_t t96 = -13;
uint8_t x3068 = 4U;


void f0(void) {
	uint8_t x69 = 95U;
	uint32_t x70 = 56U;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = 1;
	int32_t t0 = 221295652;

	t0 = (((x69|x70)==x71)>>x72);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x93 = 0U;
	int32_t x95 = -1;
	static int32_t t1 = -95856;

	t1 = (((x93|x94)==x95)>>x96);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x177 = 2;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = 3;
	volatile int32_t t2 = 4;

	t2 = (((x177|x178)==x179)>>x180);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x225 = INT32_MIN;
	volatile int64_t x227 = -538356994LL;
	volatile int16_t x228 = 5;
	volatile int32_t t3 = 68795;

	t3 = (((x225|x226)==x227)>>x228);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x233 = 36;
	uint8_t x235 = UINT8_MAX;
	static volatile int32_t t4 = 87689391;

	t4 = (((x233|x234)==x235)>>x236);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = 8296053473470589LL;
	int8_t x263 = INT8_MAX;
	int32_t x264 = 1;
	volatile int32_t t5 = -2;

	t5 = (((x261|x262)==x263)>>x264);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x273 = 212;
	volatile int8_t x274 = INT8_MIN;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = 0;
	int32_t t6 = 1;

	t6 = (((x273|x274)==x275)>>x276);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = -1LL;
	volatile int32_t t7 = 0;

	t7 = (((x277|x278)==x279)>>x280);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x309 = -488;
	int16_t x310 = -201;
	static uint64_t x311 = UINT64_MAX;
	volatile int32_t t8 = -13;

	t8 = (((x309|x310)==x311)>>x312);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x313 = 0;
	static uint16_t x314 = 2U;
	static uint32_t x316 = 1U;
	volatile int32_t t9 = 5;

	t9 = (((x313|x314)==x315)>>x316);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x329 = 19775233581863111LLU;
	static uint64_t x330 = UINT64_MAX;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = 4;
	volatile int32_t t10 = 1;

	t10 = (((x329|x330)==x331)>>x332);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = 1;
	int32_t t11 = 0;

	t11 = (((x333|x334)==x335)>>x336);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x357 = -1;
	uint64_t x358 = 13255221214429706LLU;
	uint64_t x359 = 50620976452LLU;
	static int32_t t12 = -280439;

	t12 = (((x357|x358)==x359)>>x360);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x361 = 22757673;
	static volatile uint32_t x362 = 3071U;
	int8_t x363 = INT8_MAX;
	static volatile uint8_t x364 = 5U;
	static int32_t t13 = 130;

	t13 = (((x361|x362)==x363)>>x364);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x369 = UINT16_MAX;
	static uint64_t x371 = 2063693312750544330LLU;
	uint8_t x372 = 0U;
	volatile int32_t t14 = 2;

	t14 = (((x369|x370)==x371)>>x372);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x382 = INT32_MAX;
	volatile uint64_t x383 = 1649613669629814LLU;
	volatile uint16_t x384 = 6U;
	int32_t t15 = 71072192;

	t15 = (((x381|x382)==x383)>>x384);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x433 = 7U;
	int8_t x434 = -1;
	int16_t x435 = INT16_MIN;
	uint8_t x436 = 13U;

	t16 = (((x433|x434)==x435)>>x436);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x477 = 4137;
	static volatile int16_t x478 = INT16_MIN;
	volatile int16_t x479 = 181;
	uint16_t x480 = 3U;
	volatile int32_t t17 = 1848;

	t17 = (((x477|x478)==x479)>>x480);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x485 = 2U;
	uint8_t x486 = 120U;
	int64_t x487 = -30349826348279541LL;
	uint32_t x488 = 3U;
	int32_t t18 = 1;

	t18 = (((x485|x486)==x487)>>x488);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x505 = INT8_MIN;
	volatile int32_t x506 = INT32_MAX;
	int64_t x507 = INT64_MAX;
	int16_t x508 = 1;
	int32_t t19 = 84152979;

	t19 = (((x505|x506)==x507)>>x508);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x541 = 0LL;
	uint32_t x542 = 1740269769U;
	static uint32_t x543 = 0U;
	uint16_t x544 = 10U;
	static int32_t t20 = 47181;

	t20 = (((x541|x542)==x543)>>x544);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x557 = UINT32_MAX;
	int16_t x560 = 7;

	t21 = (((x557|x558)==x559)>>x560);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x613 = -89703764;
	volatile int32_t x614 = 50111485;
	int64_t x616 = 0LL;
	int32_t t22 = -3;

	t22 = (((x613|x614)==x615)>>x616);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x625 = INT32_MAX;
	uint16_t x626 = 0U;
	int32_t x627 = -1;
	uint8_t x628 = 8U;
	volatile int32_t t23 = 1;

	t23 = (((x625|x626)==x627)>>x628);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x682 = 50962240484330119LLU;
	static uint8_t x684 = 1U;

	t24 = (((x681|x682)==x683)>>x684);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x698 = 254234525316617LL;
	static uint8_t x700 = 1U;
	int32_t t25 = -27321;

	t25 = (((x697|x698)==x699)>>x700);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x749 = 221376LLU;
	int8_t x750 = INT8_MIN;
	int64_t x751 = INT64_MIN;
	volatile int16_t x752 = 24;
	static volatile int32_t t26 = 2;

	t26 = (((x749|x750)==x751)>>x752);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x765 = -186042;
	volatile int16_t x766 = -1;
	int8_t x767 = -7;
	int8_t x768 = 0;
	volatile int32_t t27 = -298303;

	t27 = (((x765|x766)==x767)>>x768);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x846 = -562;
	static int64_t x847 = -18597722165362476LL;
	uint16_t x848 = 1U;
	volatile int32_t t28 = 25250;

	t28 = (((x845|x846)==x847)>>x848);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x869 = -1;
	int32_t x871 = 5;
	int32_t x872 = 1;
	int32_t t29 = -656;

	t29 = (((x869|x870)==x871)>>x872);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x873 = -1;
	int16_t x874 = 30;
	int64_t x875 = INT64_MAX;
	volatile int16_t x876 = 1;
	volatile int32_t t30 = 43;

	t30 = (((x873|x874)==x875)>>x876);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x888 = 4U;

	t31 = (((x885|x886)==x887)>>x888);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x957 = 53LL;
	static int8_t x958 = 23;
	int8_t x959 = 0;
	volatile int32_t t32 = 454;

	t32 = (((x957|x958)==x959)>>x960);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x1009 = UINT16_MAX;
	uint16_t x1010 = 3U;
	static int64_t x1011 = 28393LL;
	static uint8_t x1012 = 1U;
	static volatile int32_t t33 = 1;

	t33 = (((x1009|x1010)==x1011)>>x1012);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1021 = -1;
	int16_t x1022 = -1;
	int8_t x1023 = -1;
	static int16_t x1024 = 20;
	int32_t t34 = 15;

	t34 = (((x1021|x1022)==x1023)>>x1024);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1049 = INT32_MIN;
	uint64_t x1050 = UINT64_MAX;
	volatile uint16_t x1051 = 0U;
	static uint8_t x1052 = 21U;

	t35 = (((x1049|x1050)==x1051)>>x1052);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1077 = 28U;
	int32_t x1078 = -1;
	uint16_t x1079 = UINT16_MAX;
	uint16_t x1080 = 0U;
	volatile int32_t t36 = -13;

	t36 = (((x1077|x1078)==x1079)>>x1080);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1185 = INT16_MAX;
	static int16_t x1186 = INT16_MIN;
	int32_t x1187 = INT32_MIN;
	uint8_t x1188 = 4U;
	volatile int32_t t37 = 12049047;

	t37 = (((x1185|x1186)==x1187)>>x1188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1213 = -18610419LL;
	int32_t x1215 = -3359733;
	uint32_t x1216 = 7U;
	int32_t t38 = -12223;

	t38 = (((x1213|x1214)==x1215)>>x1216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1254 = 68984983873338909LLU;
	static uint64_t x1255 = 94987962587539044LLU;
	int16_t x1256 = 0;
	volatile int32_t t39 = -208;

	t39 = (((x1253|x1254)==x1255)>>x1256);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1317 = 18306U;
	int16_t x1318 = -945;
	uint32_t x1319 = 0U;
	static uint8_t x1320 = 2U;
	static int32_t t40 = -102102570;

	t40 = (((x1317|x1318)==x1319)>>x1320);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1321 = 18U;
	int32_t x1322 = INT32_MIN;
	uint8_t x1324 = 10U;
	volatile int32_t t41 = -101;

	t41 = (((x1321|x1322)==x1323)>>x1324);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1417 = UINT64_MAX;
	int64_t x1419 = -584810877155852LL;
	uint64_t x1420 = 1LLU;

	t42 = (((x1417|x1418)==x1419)>>x1420);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1431 = -2790199;
	uint8_t x1432 = 6U;
	int32_t t43 = -548070;

	t43 = (((x1429|x1430)==x1431)>>x1432);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1481 = INT64_MIN;
	uint16_t x1482 = 8U;
	int64_t x1483 = INT64_MAX;
	uint8_t x1484 = 2U;
	int32_t t44 = -11698;

	t44 = (((x1481|x1482)==x1483)>>x1484);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1493 = INT16_MAX;
	int8_t x1494 = INT8_MIN;
	static int64_t x1495 = INT64_MIN;
	uint64_t x1496 = 11LLU;
	int32_t t45 = 60;

	t45 = (((x1493|x1494)==x1495)>>x1496);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1538 = -5872;
	uint32_t x1539 = UINT32_MAX;
	uint8_t x1540 = 3U;
	static int32_t t46 = 1265763;

	t46 = (((x1537|x1538)==x1539)>>x1540);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1545 = 488U;
	int64_t x1546 = -1LL;
	uint64_t x1547 = UINT64_MAX;
	int32_t t47 = -207567;

	t47 = (((x1545|x1546)==x1547)>>x1548);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1565 = UINT16_MAX;
	uint8_t x1566 = 3U;
	volatile int16_t x1567 = -577;
	int8_t x1568 = 0;
	int32_t t48 = -302708;

	t48 = (((x1565|x1566)==x1567)>>x1568);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1585 = -34244;
	int16_t x1586 = INT16_MIN;
	static int32_t x1587 = -1;
	int8_t x1588 = 1;
	volatile int32_t t49 = 932;

	t49 = (((x1585|x1586)==x1587)>>x1588);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1589 = INT16_MIN;
	int16_t x1590 = INT16_MAX;
	uint16_t x1591 = 1U;
	uint64_t x1592 = 0LLU;
	int32_t t50 = 0;

	t50 = (((x1589|x1590)==x1591)>>x1592);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1597 = 9U;
	int64_t x1598 = INT64_MIN;
	int64_t x1599 = INT64_MAX;
	int32_t x1600 = 0;

	t51 = (((x1597|x1598)==x1599)>>x1600);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1605 = 28415LLU;
	int64_t x1606 = INT64_MIN;
	uint16_t x1607 = 27U;
	int32_t t52 = -25862970;

	t52 = (((x1605|x1606)==x1607)>>x1608);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1621 = 9U;
	static int16_t x1623 = INT16_MIN;
	static uint8_t x1624 = 6U;
	volatile int32_t t53 = 336492;

	t53 = (((x1621|x1622)==x1623)>>x1624);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1669 = -1;
	static volatile uint64_t x1670 = 4068182185936162LLU;
	volatile int16_t x1671 = INT16_MIN;
	uint8_t x1672 = 6U;
	static int32_t t54 = 1051773;

	t54 = (((x1669|x1670)==x1671)>>x1672);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x1721 = 36080798290LLU;
	static uint32_t x1722 = UINT32_MAX;
	static int64_t x1723 = -1LL;
	int64_t x1724 = 0LL;
	volatile int32_t t55 = 153395244;

	t55 = (((x1721|x1722)==x1723)>>x1724);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1761 = -34;
	uint64_t x1763 = 13265LLU;
	int8_t x1764 = 2;
	int32_t t56 = 67982;

	t56 = (((x1761|x1762)==x1763)>>x1764);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1881 = 105U;
	uint8_t x1882 = 86U;
	int32_t x1883 = -1;
	static uint8_t x1884 = 0U;
	static int32_t t57 = 511769;

	t57 = (((x1881|x1882)==x1883)>>x1884);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1901 = 3146;
	int64_t x1902 = INT64_MIN;
	static int32_t x1903 = INT32_MIN;
	volatile uint8_t x1904 = 5U;
	volatile int32_t t58 = 0;

	t58 = (((x1901|x1902)==x1903)>>x1904);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1925 = INT64_MAX;
	static uint64_t x1926 = UINT64_MAX;
	volatile int16_t x1927 = -22;
	int32_t t59 = 16868507;

	t59 = (((x1925|x1926)==x1927)>>x1928);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x1957 = 24U;
	static volatile uint8_t x1958 = 3U;
	int8_t x1959 = 52;
	volatile int8_t x1960 = 1;
	volatile int32_t t60 = -92465;

	t60 = (((x1957|x1958)==x1959)>>x1960);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t t61 = -77;

	t61 = (((x1961|x1962)==x1963)>>x1964);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1981 = -323324383LL;
	static volatile int32_t x1982 = -3851598;
	static int8_t x1983 = INT8_MAX;
	uint16_t x1984 = 0U;

	t62 = (((x1981|x1982)==x1983)>>x1984);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2041 = UINT64_MAX;
	uint64_t x2042 = UINT64_MAX;
	volatile int32_t t63 = 31455035;

	t63 = (((x2041|x2042)==x2043)>>x2044);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x2073 = UINT16_MAX;
	int64_t x2074 = INT64_MAX;
	int64_t x2075 = -1LL;

	t64 = (((x2073|x2074)==x2075)>>x2076);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x2090 = INT32_MIN;
	int32_t x2091 = 190458;
	static volatile uint8_t x2092 = 16U;
	volatile int32_t t65 = -795268;

	t65 = (((x2089|x2090)==x2091)>>x2092);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2145 = UINT16_MAX;
	uint8_t x2146 = UINT8_MAX;
	int8_t x2147 = INT8_MAX;
	volatile uint8_t x2148 = 30U;
	volatile int32_t t66 = 254;

	t66 = (((x2145|x2146)==x2147)>>x2148);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2169 = UINT64_MAX;
	int16_t x2170 = -1;
	volatile uint64_t x2171 = 17772850623307LLU;
	uint64_t x2172 = 3LLU;
	int32_t t67 = -441;

	t67 = (((x2169|x2170)==x2171)>>x2172);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2185 = 0;
	int32_t x2187 = -6977216;
	uint8_t x2188 = 16U;

	t68 = (((x2185|x2186)==x2187)>>x2188);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2189 = 11U;
	int32_t x2190 = INT32_MAX;
	int32_t x2191 = INT32_MIN;
	uint8_t x2192 = 2U;
	int32_t t69 = 140;

	t69 = (((x2189|x2190)==x2191)>>x2192);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2217 = 1141U;
	int8_t x2218 = INT8_MIN;
	static uint32_t x2219 = UINT32_MAX;
	uint32_t x2220 = 2U;
	int32_t t70 = -171363634;

	t70 = (((x2217|x2218)==x2219)>>x2220);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2221 = -1;
	int16_t x2222 = 6123;
	int32_t x2223 = -1;
	uint16_t x2224 = 0U;
	volatile int32_t t71 = 33047;

	t71 = (((x2221|x2222)==x2223)>>x2224);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2237 = INT64_MIN;
	static int64_t x2238 = 1614803LL;
	int8_t x2239 = INT8_MIN;
	int8_t x2240 = 30;

	t72 = (((x2237|x2238)==x2239)>>x2240);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2242 = INT64_MIN;
	volatile uint16_t x2243 = 10U;
	static uint8_t x2244 = 5U;
	volatile int32_t t73 = -3;

	t73 = (((x2241|x2242)==x2243)>>x2244);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x2261 = INT64_MIN;
	volatile int32_t t74 = 13009706;

	t74 = (((x2261|x2262)==x2263)>>x2264);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2270 = INT64_MIN;
	int32_t x2271 = 292;
	volatile int32_t t75 = 3946611;

	t75 = (((x2269|x2270)==x2271)>>x2272);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2349 = -1;
	int16_t x2350 = INT16_MAX;
	static int16_t x2351 = -1;
	uint8_t x2352 = 0U;

	t76 = (((x2349|x2350)==x2351)>>x2352);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2357 = -1;
	uint64_t x2358 = UINT64_MAX;
	uint64_t x2359 = 5094120493663346LLU;
	static volatile uint8_t x2360 = 24U;

	t77 = (((x2357|x2358)==x2359)>>x2360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x2462 = 3U;
	uint16_t x2463 = 38U;
	static int32_t t78 = -1;

	t78 = (((x2461|x2462)==x2463)>>x2464);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2497 = UINT8_MAX;
	int8_t x2499 = INT8_MAX;
	uint8_t x2500 = 18U;

	t79 = (((x2497|x2498)==x2499)>>x2500);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2566 = -1;
	uint32_t x2567 = 53238270U;
	int32_t x2568 = 7;
	volatile int32_t t80 = 7069750;

	t80 = (((x2565|x2566)==x2567)>>x2568);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2637 = 6973U;
	int16_t x2638 = -19;
	int64_t x2639 = 385115610LL;
	uint16_t x2640 = 1U;
	int32_t t81 = -10210;

	t81 = (((x2637|x2638)==x2639)>>x2640);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2681 = 43;
	uint16_t x2682 = 11U;
	int16_t x2684 = 0;
	static volatile int32_t t82 = -820098;

	t82 = (((x2681|x2682)==x2683)>>x2684);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2693 = 46U;
	int64_t x2694 = -1LL;
	volatile uint8_t x2696 = 21U;
	static volatile int32_t t83 = 597241;

	t83 = (((x2693|x2694)==x2695)>>x2696);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x2697 = 3428U;
	volatile uint16_t x2698 = 14558U;
	int64_t x2699 = -1LL;
	uint8_t x2700 = 19U;
	int32_t t84 = -26254;

	t84 = (((x2697|x2698)==x2699)>>x2700);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2726 = INT16_MIN;
	volatile int32_t x2727 = -12953667;
	static volatile uint32_t x2728 = 0U;

	t85 = (((x2725|x2726)==x2727)>>x2728);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2746 = INT32_MIN;
	int16_t x2747 = -1;
	int32_t t86 = -134955;

	t86 = (((x2745|x2746)==x2747)>>x2748);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x2761 = 4914711833504600LLU;
	int16_t x2762 = -1;
	int64_t x2763 = INT64_MIN;
	static volatile uint8_t x2764 = 6U;
	int32_t t87 = -28;

	t87 = (((x2761|x2762)==x2763)>>x2764);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2781 = -16;
	static volatile int64_t x2783 = INT64_MIN;
	int8_t x2784 = 1;
	volatile int32_t t88 = -25775;

	t88 = (((x2781|x2782)==x2783)>>x2784);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2873 = UINT64_MAX;
	static volatile int16_t x2875 = -67;
	static uint8_t x2876 = 17U;

	t89 = (((x2873|x2874)==x2875)>>x2876);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2933 = 15U;
	uint64_t x2934 = UINT64_MAX;
	uint8_t x2935 = UINT8_MAX;
	static volatile int8_t x2936 = 17;
	int32_t t90 = -4;

	t90 = (((x2933|x2934)==x2935)>>x2936);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x2937 = INT16_MIN;
	int16_t x2938 = -1;
	uint8_t x2939 = UINT8_MAX;
	static volatile int32_t t91 = 91921;

	t91 = (((x2937|x2938)==x2939)>>x2940);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x2945 = -1;
	int32_t x2946 = INT32_MIN;
	uint16_t x2947 = 6U;
	static uint16_t x2948 = 3U;
	volatile int32_t t92 = 89415;

	t92 = (((x2945|x2946)==x2947)>>x2948);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x2949 = 252418307521LL;
	int8_t x2950 = INT8_MIN;
	int8_t x2951 = -1;
	int64_t x2952 = 0LL;
	volatile int32_t t93 = -879504509;

	t93 = (((x2949|x2950)==x2951)>>x2952);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x2997 = INT32_MIN;
	int8_t x2998 = 0;
	static int32_t x2999 = -4347;
	int16_t x3000 = 27;
	volatile int32_t t94 = 43;

	t94 = (((x2997|x2998)==x2999)>>x3000);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3013 = -1;
	uint32_t x3014 = 2594U;
	uint8_t x3015 = 4U;
	static uint8_t x3016 = 7U;
	int32_t t95 = 288041504;

	t95 = (((x3013|x3014)==x3015)>>x3016);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3029 = INT32_MIN;
	uint64_t x3030 = 861025331384505LLU;
	int16_t x3031 = INT16_MAX;

	t96 = (((x3029|x3030)==x3031)>>x3032);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x3057 = UINT32_MAX;
	volatile int16_t x3058 = 90;
	static int64_t x3059 = INT64_MIN;
	volatile int32_t x3060 = 13;
	int32_t t97 = 13452;

	t97 = (((x3057|x3058)==x3059)>>x3060);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3065 = -1LL;
	static int8_t x3066 = INT8_MIN;
	volatile uint32_t x3067 = UINT32_MAX;
	volatile int32_t t98 = -64376;

	t98 = (((x3065|x3066)==x3067)>>x3068);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3073 = -1LL;
	int32_t x3074 = INT32_MAX;
	volatile int64_t x3075 = INT64_MIN;
	uint32_t x3076 = 1U;
	static int32_t t99 = -2216;

	t99 = (((x3073|x3074)==x3075)>>x3076);

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

