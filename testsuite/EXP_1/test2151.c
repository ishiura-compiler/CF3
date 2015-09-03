#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x165 = -1;
int16_t x166 = INT16_MIN;
int64_t x261 = -1LL;
static int32_t x353 = 8329206;
volatile uint8_t x355 = 113U;
uint16_t x494 = 5431U;
int16_t x584 = 1;
uint32_t x658 = 307173U;
int32_t x659 = -509732547;
int8_t x704 = 5;
static uint64_t x710 = 63432273086LLU;
int64_t x754 = -1LL;
volatile int32_t t21 = -6220;
int8_t x765 = INT8_MAX;
int8_t x767 = 11;
volatile int8_t x905 = INT8_MIN;
int8_t x907 = 1;
volatile int32_t t25 = 5710984;
uint16_t x980 = 1U;
int32_t x1001 = 4;
int16_t x1003 = INT16_MIN;
static uint8_t x1017 = 32U;
volatile int64_t x1018 = -1LL;
int8_t x1022 = INT8_MAX;
volatile int32_t x1057 = INT32_MAX;
uint8_t x1060 = 0U;
uint32_t x1206 = 519950U;
int64_t x1307 = -1LL;
uint32_t x1346 = 5048U;
int32_t t40 = 1;
volatile int32_t x1374 = -1;
uint16_t x1440 = 2U;
int32_t t42 = 967709344;
static int8_t x1505 = INT8_MAX;
int64_t x1514 = INT64_MIN;
uint8_t x1515 = 7U;
volatile int32_t t46 = 36;
volatile int32_t t47 = -34;
uint8_t x1548 = 2U;
int32_t x1594 = -110032356;
volatile uint32_t x1601 = 20U;
int64_t x1606 = INT64_MIN;
uint16_t x1649 = 3U;
uint32_t x1693 = 110523666U;
static volatile int8_t x1694 = INT8_MAX;
volatile uint64_t x1695 = 3362463724LLU;
uint8_t x1696 = 13U;
int64_t x1706 = INT64_MAX;
int64_t x1711 = INT64_MIN;
int8_t x1712 = 28;
static int16_t x1760 = 3;
static uint64_t x1787 = UINT64_MAX;
volatile int32_t t58 = 1520;
uint8_t x1810 = 24U;
static uint8_t x1811 = 5U;
static int64_t x1853 = 16251LL;
int16_t x1854 = INT16_MIN;
uint8_t x1863 = 13U;
static int32_t t62 = -1;
static volatile int8_t x1873 = INT8_MIN;
volatile uint8_t x1985 = UINT8_MAX;
static int64_t x1987 = INT64_MAX;
int16_t x1988 = 3;
volatile int32_t t68 = 24488;
uint16_t x2054 = 13795U;
uint16_t x2127 = 3774U;
uint16_t x2132 = 2U;
int32_t x2155 = 77;
volatile uint8_t x2156 = 6U;
uint32_t x2161 = 70U;
int16_t x2162 = -1;
uint32_t x2274 = 88781U;
uint8_t x2316 = 9U;
int16_t x2342 = INT16_MIN;
int16_t x2343 = 2792;
int32_t x2345 = 3;
volatile int16_t x2408 = 6;
static volatile uint32_t x2522 = 196349532U;
uint8_t x2553 = 48U;
int8_t x2559 = -1;
int32_t t84 = -616;
int64_t x2577 = -1041926562218793LL;
int32_t t85 = -273529397;
static volatile int16_t x2609 = INT16_MAX;
volatile int32_t t88 = 323054189;
volatile int32_t t89 = 18909;
uint64_t x2745 = 10279LLU;
int32_t t92 = 75574;
uint32_t x2891 = UINT32_MAX;
uint32_t x2939 = 2U;
volatile uint64_t x2957 = 10354345192948220LLU;
static volatile uint16_t x2959 = 45U;
int8_t x2964 = 1;
volatile int32_t t98 = 1203;


void f0(void) {
	static volatile int16_t x37 = 0;
	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	volatile uint8_t x40 = 2U;
	int32_t t0 = -726325;

	t0 = (((x37^x38)<=x39)<<x40);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x57 = 40U;
	int64_t x58 = INT64_MAX;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = 5;
	int32_t t1 = 2;

	t1 = (((x57^x58)<=x59)<<x60);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x61 = 1240;
	uint64_t x62 = 22LLU;
	static int64_t x63 = -1LL;
	static uint8_t x64 = 5U;
	volatile int32_t t2 = 2555;

	t2 = (((x61^x62)<=x63)<<x64);

	if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x113 = INT32_MIN;
	volatile int32_t x114 = INT32_MIN;
	volatile int32_t x115 = INT32_MIN;
	int8_t x116 = 30;
	static volatile int32_t t3 = -2845385;

	t3 = (((x113^x114)<=x115)<<x116);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x167 = -1;
	uint8_t x168 = 3U;
	static int32_t t4 = -1;

	t4 = (((x165^x166)<=x167)<<x168);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x181 = -1;
	uint16_t x182 = 14089U;
	int32_t x183 = 1096888;
	uint16_t x184 = 1U;
	volatile int32_t t5 = -2;

	t5 = (((x181^x182)<=x183)<<x184);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x253 = -1986026415291LL;
	int8_t x254 = 27;
	int64_t x255 = INT64_MAX;
	uint8_t x256 = 2U;
	volatile int32_t t6 = -5;

	t6 = (((x253^x254)<=x255)<<x256);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x262 = 12;
	static int8_t x263 = INT8_MIN;
	uint8_t x264 = 0U;
	volatile int32_t t7 = -12110567;

	t7 = (((x261^x262)<=x263)<<x264);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x309 = -205371;
	volatile uint32_t x310 = 5U;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = 23U;
	static int32_t t8 = 16786;

	t8 = (((x309^x310)<=x311)<<x312);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x354 = INT64_MIN;
	int32_t x356 = 1;
	volatile int32_t t9 = -25269;

	t9 = (((x353^x354)<=x355)<<x356);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x357 = -702219;
	int16_t x358 = -65;
	volatile int8_t x359 = -1;
	uint64_t x360 = 0LLU;
	static int32_t t10 = -869324719;

	t10 = (((x357^x358)<=x359)<<x360);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x485 = 14539272153680LLU;
	volatile uint32_t x486 = 6153U;
	static volatile int8_t x487 = 20;
	volatile int32_t x488 = 8;
	volatile int32_t t11 = -109;

	t11 = (((x485^x486)<=x487)<<x488);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x493 = -1481;
	static int64_t x495 = -1LL;
	int8_t x496 = 1;
	int32_t t12 = 3;

	t12 = (((x493^x494)<=x495)<<x496);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x581 = 8572U;
	int64_t x582 = INT64_MAX;
	int16_t x583 = INT16_MIN;
	volatile int32_t t13 = 0;

	t13 = (((x581^x582)<=x583)<<x584);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x617 = 19236306U;
	int16_t x618 = INT16_MIN;
	static int64_t x619 = INT64_MAX;
	int16_t x620 = 0;
	int32_t t14 = 1;

	t14 = (((x617^x618)<=x619)<<x620);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x621 = UINT32_MAX;
	static uint16_t x622 = UINT16_MAX;
	int8_t x623 = -1;
	int64_t x624 = 3LL;
	int32_t t15 = -53527;

	t15 = (((x621^x622)<=x623)<<x624);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x629 = UINT32_MAX;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = UINT64_MAX;
	uint8_t x632 = 14U;
	volatile int32_t t16 = 98884359;

	t16 = (((x629^x630)<=x631)<<x632);

	if (t16 != 16384) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x657 = 771U;
	uint8_t x660 = 29U;
	static int32_t t17 = 2;

	t17 = (((x657^x658)<=x659)<<x660);

	if (t17 != 536870912) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x701 = 74906LL;
	int64_t x702 = INT64_MAX;
	static int16_t x703 = INT16_MAX;
	static volatile int32_t t18 = 22805444;

	t18 = (((x701^x702)<=x703)<<x704);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x709 = 3307LLU;
	int8_t x711 = INT8_MIN;
	volatile uint8_t x712 = 29U;
	static int32_t t19 = 6;

	t19 = (((x709^x710)<=x711)<<x712);

	if (t19 != 536870912) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x753 = -6;
	static int8_t x755 = 0;
	uint16_t x756 = 1U;
	int32_t t20 = 1285;

	t20 = (((x753^x754)<=x755)<<x756);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x757 = UINT8_MAX;
	uint16_t x758 = UINT16_MAX;
	int64_t x759 = 346LL;
	static uint64_t x760 = 2LLU;

	t21 = (((x757^x758)<=x759)<<x760);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x766 = INT64_MIN;
	int8_t x768 = 10;
	volatile int32_t t22 = 79406;

	t22 = (((x765^x766)<=x767)<<x768);

	if (t22 != 1024) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x793 = INT8_MAX;
	uint64_t x794 = UINT64_MAX;
	int16_t x795 = -596;
	int8_t x796 = 29;
	int32_t t23 = -2055361;

	t23 = (((x793^x794)<=x795)<<x796);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x906 = INT8_MIN;
	static volatile int8_t x908 = 10;
	int32_t t24 = 1327;

	t24 = (((x905^x906)<=x907)<<x908);

	if (t24 != 1024) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x929 = INT8_MIN;
	int8_t x930 = -1;
	int32_t x931 = 236;
	int8_t x932 = 0;

	t25 = (((x929^x930)<=x931)<<x932);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x933 = -1;
	int32_t x934 = 1;
	int32_t x935 = INT32_MIN;
	uint32_t x936 = 0U;
	volatile int32_t t26 = 471231;

	t26 = (((x933^x934)<=x935)<<x936);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x941 = -1;
	static uint32_t x942 = 70404U;
	uint8_t x943 = UINT8_MAX;
	uint8_t x944 = 7U;
	int32_t t27 = -55874456;

	t27 = (((x941^x942)<=x943)<<x944);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x965 = 75528LLU;
	int16_t x966 = INT16_MIN;
	static uint64_t x967 = 556352LLU;
	volatile uint32_t x968 = 1U;
	volatile int32_t t28 = 50750;

	t28 = (((x965^x966)<=x967)<<x968);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x977 = INT8_MIN;
	int16_t x978 = -1;
	int64_t x979 = INT64_MIN;
	int32_t t29 = 684;

	t29 = (((x977^x978)<=x979)<<x980);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x985 = 0;
	int16_t x986 = -1;
	uint16_t x987 = UINT16_MAX;
	int8_t x988 = 0;
	int32_t t30 = -105;

	t30 = (((x985^x986)<=x987)<<x988);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x1002 = INT64_MIN;
	uint8_t x1004 = 3U;
	volatile int32_t t31 = 72498385;

	t31 = (((x1001^x1002)<=x1003)<<x1004);

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1019 = 26745633426LLU;
	static uint16_t x1020 = 11U;
	volatile int32_t t32 = 43826;

	t32 = (((x1017^x1018)<=x1019)<<x1020);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1021 = -1LL;
	uint16_t x1023 = 6820U;
	volatile int16_t x1024 = 7;
	volatile int32_t t33 = 31767;

	t33 = (((x1021^x1022)<=x1023)<<x1024);

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1058 = UINT16_MAX;
	int64_t x1059 = INT64_MIN;
	static volatile int32_t t34 = 124;

	t34 = (((x1057^x1058)<=x1059)<<x1060);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x1205 = INT8_MIN;
	int32_t x1207 = -18433836;
	volatile int8_t x1208 = 16;
	static volatile int32_t t35 = 832746419;

	t35 = (((x1205^x1206)<=x1207)<<x1208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1225 = INT32_MAX;
	int32_t x1226 = INT32_MIN;
	volatile uint8_t x1227 = 1U;
	int8_t x1228 = 0;
	static volatile int32_t t36 = -218;

	t36 = (((x1225^x1226)<=x1227)<<x1228);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1277 = 54U;
	int32_t x1278 = 48231934;
	int8_t x1279 = 0;
	volatile uint16_t x1280 = 0U;
	volatile int32_t t37 = 32;

	t37 = (((x1277^x1278)<=x1279)<<x1280);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1305 = -1;
	volatile int64_t x1306 = INT64_MIN;
	static int8_t x1308 = 7;
	int32_t t38 = 5693905;

	t38 = (((x1305^x1306)<=x1307)<<x1308);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1321 = INT64_MAX;
	static uint64_t x1322 = UINT64_MAX;
	int64_t x1323 = -1LL;
	volatile uint16_t x1324 = 0U;
	volatile int32_t t39 = 4485281;

	t39 = (((x1321^x1322)<=x1323)<<x1324);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1345 = INT32_MAX;
	int16_t x1347 = 422;
	int8_t x1348 = 2;

	t40 = (((x1345^x1346)<=x1347)<<x1348);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x1373 = 20U;
	static int32_t x1375 = INT32_MAX;
	uint8_t x1376 = 11U;
	volatile int32_t t41 = -182053563;

	t41 = (((x1373^x1374)<=x1375)<<x1376);

	if (t41 != 2048) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1437 = 48;
	volatile int32_t x1438 = -2526776;
	static volatile int8_t x1439 = INT8_MIN;

	t42 = (((x1437^x1438)<=x1439)<<x1440);

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x1449 = 1U;
	int16_t x1450 = INT16_MIN;
	int64_t x1451 = INT64_MIN;
	uint16_t x1452 = 2U;
	volatile int32_t t43 = -1838274;

	t43 = (((x1449^x1450)<=x1451)<<x1452);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1489 = 1U;
	int64_t x1490 = INT64_MAX;
	int16_t x1491 = 5;
	uint16_t x1492 = 30U;
	volatile int32_t t44 = 1;

	t44 = (((x1489^x1490)<=x1491)<<x1492);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1506 = 1;
	static uint32_t x1507 = 107808U;
	uint64_t x1508 = 14LLU;
	volatile int32_t t45 = -7;

	t45 = (((x1505^x1506)<=x1507)<<x1508);

	if (t45 != 16384) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1513 = INT8_MIN;
	volatile int8_t x1516 = 0;

	t46 = (((x1513^x1514)<=x1515)<<x1516);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1533 = 6681870621321845706LLU;
	uint64_t x1534 = 2214023LLU;
	int64_t x1535 = -1LL;
	uint8_t x1536 = 3U;

	t47 = (((x1533^x1534)<=x1535)<<x1536);

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1545 = INT16_MIN;
	int16_t x1546 = INT16_MIN;
	uint8_t x1547 = 20U;
	int32_t t48 = 123;

	t48 = (((x1545^x1546)<=x1547)<<x1548);

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1593 = UINT64_MAX;
	int16_t x1595 = 258;
	uint8_t x1596 = 5U;
	int32_t t49 = -122411462;

	t49 = (((x1593^x1594)<=x1595)<<x1596);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1602 = 388U;
	uint32_t x1603 = UINT32_MAX;
	int64_t x1604 = 25LL;
	volatile int32_t t50 = 3;

	t50 = (((x1601^x1602)<=x1603)<<x1604);

	if (t50 != 33554432) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1605 = INT32_MAX;
	int8_t x1607 = INT8_MIN;
	uint64_t x1608 = 2LLU;
	int32_t t51 = -4751;

	t51 = (((x1605^x1606)<=x1607)<<x1608);

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x1650 = UINT32_MAX;
	static int32_t x1651 = INT32_MIN;
	static int32_t x1652 = 15;
	volatile int32_t t52 = 871539361;

	t52 = (((x1649^x1650)<=x1651)<<x1652);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t t53 = -13;

	t53 = (((x1693^x1694)<=x1695)<<x1696);

	if (t53 != 8192) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1705 = INT64_MAX;
	static volatile uint16_t x1707 = 0U;
	static uint16_t x1708 = 8U;
	int32_t t54 = 167069;

	t54 = (((x1705^x1706)<=x1707)<<x1708);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1709 = INT32_MIN;
	int16_t x1710 = -1;
	volatile int32_t t55 = -7637807;

	t55 = (((x1709^x1710)<=x1711)<<x1712);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x1721 = 10759477U;
	volatile int32_t x1722 = 48;
	int64_t x1723 = 23809772LL;
	int16_t x1724 = 0;
	volatile int32_t t56 = -471589431;

	t56 = (((x1721^x1722)<=x1723)<<x1724);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x1757 = 42LLU;
	static int64_t x1758 = -1LL;
	int64_t x1759 = INT64_MIN;
	int32_t t57 = 13;

	t57 = (((x1757^x1758)<=x1759)<<x1760);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1785 = UINT16_MAX;
	int16_t x1786 = INT16_MAX;
	uint16_t x1788 = 0U;

	t58 = (((x1785^x1786)<=x1787)<<x1788);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1809 = INT8_MIN;
	uint16_t x1812 = 0U;
	volatile int32_t t59 = -45828925;

	t59 = (((x1809^x1810)<=x1811)<<x1812);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1813 = INT32_MAX;
	int8_t x1814 = 27;
	uint32_t x1815 = 9U;
	volatile uint8_t x1816 = 0U;
	volatile int32_t t60 = 29054655;

	t60 = (((x1813^x1814)<=x1815)<<x1816);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1855 = 5U;
	int8_t x1856 = 0;
	int32_t t61 = 0;

	t61 = (((x1853^x1854)<=x1855)<<x1856);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1861 = 54U;
	static int8_t x1862 = INT8_MIN;
	int32_t x1864 = 18;

	t62 = (((x1861^x1862)<=x1863)<<x1864);

	if (t62 != 262144) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1874 = 835;
	int32_t x1875 = INT32_MIN;
	static uint8_t x1876 = 0U;
	volatile int32_t t63 = -4787;

	t63 = (((x1873^x1874)<=x1875)<<x1876);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1913 = UINT16_MAX;
	int32_t x1914 = INT32_MIN;
	int16_t x1915 = INT16_MIN;
	volatile uint8_t x1916 = 27U;
	int32_t t64 = 60746;

	t64 = (((x1913^x1914)<=x1915)<<x1916);

	if (t64 != 134217728) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1933 = INT32_MIN;
	uint8_t x1934 = 27U;
	volatile int8_t x1935 = -2;
	volatile uint8_t x1936 = 8U;
	int32_t t65 = 6246;

	t65 = (((x1933^x1934)<=x1935)<<x1936);

	if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1969 = INT8_MIN;
	int64_t x1970 = -1LL;
	uint16_t x1971 = 1U;
	static uint8_t x1972 = 2U;
	int32_t t66 = -1054766228;

	t66 = (((x1969^x1970)<=x1971)<<x1972);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x1986 = UINT64_MAX;
	int32_t t67 = -150889123;

	t67 = (((x1985^x1986)<=x1987)<<x1988);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1993 = 28U;
	uint8_t x1994 = UINT8_MAX;
	static volatile uint16_t x1995 = UINT16_MAX;
	volatile int64_t x1996 = 1LL;

	t68 = (((x1993^x1994)<=x1995)<<x1996);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2053 = INT32_MAX;
	int64_t x2055 = INT64_MIN;
	int16_t x2056 = 0;
	static int32_t t69 = -2;

	t69 = (((x2053^x2054)<=x2055)<<x2056);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2109 = INT32_MIN;
	static uint64_t x2110 = UINT64_MAX;
	int32_t x2111 = INT32_MIN;
	uint16_t x2112 = 26U;
	volatile int32_t t70 = 1;

	t70 = (((x2109^x2110)<=x2111)<<x2112);

	if (t70 != 67108864) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2125 = 195312644;
	volatile int64_t x2126 = -120461546747LL;
	uint8_t x2128 = 2U;
	volatile int32_t t71 = -178589835;

	t71 = (((x2125^x2126)<=x2127)<<x2128);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x2129 = 1641LLU;
	static int8_t x2130 = INT8_MAX;
	static int64_t x2131 = 2772306633LL;
	int32_t t72 = -1980362;

	t72 = (((x2129^x2130)<=x2131)<<x2132);

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2153 = INT16_MIN;
	int16_t x2154 = -1;
	int32_t t73 = 0;

	t73 = (((x2153^x2154)<=x2155)<<x2156);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2163 = 11314;
	uint8_t x2164 = 0U;
	volatile int32_t t74 = -7317279;

	t74 = (((x2161^x2162)<=x2163)<<x2164);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2273 = 2398U;
	uint16_t x2275 = 22U;
	uint32_t x2276 = 28U;
	int32_t t75 = -25;

	t75 = (((x2273^x2274)<=x2275)<<x2276);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2313 = 1867529U;
	static uint8_t x2314 = UINT8_MAX;
	uint8_t x2315 = 14U;
	int32_t t76 = 30;

	t76 = (((x2313^x2314)<=x2315)<<x2316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x2321 = UINT32_MAX;
	static int16_t x2322 = 1;
	int32_t x2323 = -25142;
	uint32_t x2324 = 1U;
	volatile int32_t t77 = 2427;

	t77 = (((x2321^x2322)<=x2323)<<x2324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x2341 = 19913U;
	uint16_t x2344 = 20U;
	int32_t t78 = 335510030;

	t78 = (((x2341^x2342)<=x2343)<<x2344);

	if (t78 != 1048576) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x2346 = 470U;
	volatile int64_t x2347 = INT64_MIN;
	static volatile uint8_t x2348 = 9U;
	int32_t t79 = 2040;

	t79 = (((x2345^x2346)<=x2347)<<x2348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2405 = INT16_MIN;
	int32_t x2406 = -1;
	uint32_t x2407 = 206422U;
	volatile int32_t t80 = 29774;

	t80 = (((x2405^x2406)<=x2407)<<x2408);

	if (t80 != 64) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2501 = 8U;
	int8_t x2502 = -1;
	static int64_t x2503 = INT64_MIN;
	volatile int16_t x2504 = 20;
	static volatile int32_t t81 = 3691;

	t81 = (((x2501^x2502)<=x2503)<<x2504);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x2521 = INT64_MIN;
	static int64_t x2523 = INT64_MIN;
	int8_t x2524 = 7;
	int32_t t82 = -213895292;

	t82 = (((x2521^x2522)<=x2523)<<x2524);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x2554 = 4408;
	int8_t x2555 = 62;
	uint32_t x2556 = 19U;
	volatile int32_t t83 = 22;

	t83 = (((x2553^x2554)<=x2555)<<x2556);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2557 = 10U;
	static int64_t x2558 = -258277244LL;
	volatile uint8_t x2560 = 12U;

	t84 = (((x2557^x2558)<=x2559)<<x2560);

	if (t84 != 4096) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x2578 = 6;
	int16_t x2579 = INT16_MIN;
	static uint32_t x2580 = 11U;

	t85 = (((x2577^x2578)<=x2579)<<x2580);

	if (t85 != 2048) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x2581 = INT16_MAX;
	volatile int8_t x2582 = -9;
	uint8_t x2583 = UINT8_MAX;
	uint8_t x2584 = 0U;
	int32_t t86 = -419001102;

	t86 = (((x2581^x2582)<=x2583)<<x2584);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2593 = -1638;
	uint64_t x2594 = UINT64_MAX;
	uint32_t x2595 = 19308887U;
	int8_t x2596 = 1;
	static volatile int32_t t87 = 28;

	t87 = (((x2593^x2594)<=x2595)<<x2596);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2610 = INT8_MIN;
	uint8_t x2611 = 69U;
	static uint64_t x2612 = 13LLU;

	t88 = (((x2609^x2610)<=x2611)<<x2612);

	if (t88 != 8192) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2713 = -236805;
	static uint8_t x2714 = UINT8_MAX;
	static int16_t x2715 = INT16_MIN;
	int8_t x2716 = 1;

	t89 = (((x2713^x2714)<=x2715)<<x2716);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2746 = UINT64_MAX;
	uint16_t x2747 = 986U;
	volatile int8_t x2748 = 25;
	int32_t t90 = 680;

	t90 = (((x2745^x2746)<=x2747)<<x2748);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2797 = 304975977527291LLU;
	uint8_t x2798 = 12U;
	volatile int64_t x2799 = -99630709057LL;
	static int64_t x2800 = 1LL;
	int32_t t91 = -96;

	t91 = (((x2797^x2798)<=x2799)<<x2800);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2873 = INT64_MIN;
	static int32_t x2874 = INT32_MIN;
	int16_t x2875 = 237;
	uint16_t x2876 = 3U;

	t92 = (((x2873^x2874)<=x2875)<<x2876);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2889 = 5760121LL;
	uint32_t x2890 = 62413904U;
	static uint8_t x2892 = 1U;
	static int32_t t93 = -125941;

	t93 = (((x2889^x2890)<=x2891)<<x2892);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2933 = INT64_MIN;
	int16_t x2934 = 10;
	int32_t x2935 = -718;
	int8_t x2936 = 2;
	int32_t t94 = 327;

	t94 = (((x2933^x2934)<=x2935)<<x2936);

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x2937 = 1;
	int64_t x2938 = INT64_MIN;
	volatile int16_t x2940 = 2;
	int32_t t95 = 2121647;

	t95 = (((x2937^x2938)<=x2939)<<x2940);

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2958 = 0U;
	uint16_t x2960 = 2U;
	static volatile int32_t t96 = -224;

	t96 = (((x2957^x2958)<=x2959)<<x2960);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2961 = 2693477887342347037LL;
	uint8_t x2962 = 53U;
	uint64_t x2963 = UINT64_MAX;
	volatile int32_t t97 = 139326;

	t97 = (((x2961^x2962)<=x2963)<<x2964);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3041 = INT8_MIN;
	int64_t x3042 = INT64_MIN;
	volatile int8_t x3043 = 34;
	volatile uint32_t x3044 = 0U;

	t98 = (((x3041^x3042)<=x3043)<<x3044);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3065 = INT32_MIN;
	uint32_t x3066 = UINT32_MAX;
	int8_t x3067 = -1;
	int32_t x3068 = 0;
	int32_t t99 = -6;

	t99 = (((x3065^x3066)<=x3067)<<x3068);

	if (t99 != 1) { NG(); } else { ; }
	
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

