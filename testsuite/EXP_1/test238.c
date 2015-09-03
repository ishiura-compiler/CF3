#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 18664813321613488LLU;
volatile uint64_t t3 = 549519793954LLU;
uint16_t x435 = 9U;
static uint16_t x575 = 1U;
volatile int8_t x586 = -6;
int8_t x588 = 63;
static uint8_t x611 = 3U;
uint16_t x733 = UINT16_MAX;
static uint32_t t11 = 961707U;
int32_t x753 = -1;
uint64_t t13 = 19466055401181LLU;
uint16_t x817 = 3552U;
int8_t x819 = 1;
uint8_t x820 = 63U;
uint64_t t15 = 20LLU;
int32_t x917 = 1296706;
volatile int32_t t16 = 553155;
volatile int64_t x1105 = 14689103LL;
volatile uint8_t x1235 = 17U;
int32_t t26 = 526684324;
static int32_t x1393 = 19;
uint16_t x1423 = 3U;
int64_t x1441 = 742463LL;
int8_t x1442 = -37;
volatile int32_t x1461 = INT32_MIN;
int64_t t32 = -63022584227LL;
uint32_t x1547 = 0U;
int64_t x1568 = -1838744547LL;
uint32_t x1619 = 3U;
int8_t x1786 = 15;
int8_t x1788 = INT8_MIN;
uint64_t x1842 = UINT64_MAX;
static uint16_t x1844 = 7U;
int8_t x1897 = 9;
int64_t x1953 = INT64_MIN;
int16_t x1955 = 1;
int8_t x1956 = -1;
volatile uint32_t t46 = 3447044U;
volatile uint64_t t50 = 36357LLU;
int32_t t51 = -3085;
static volatile int16_t x2545 = 1;
uint32_t x2548 = UINT32_MAX;
uint8_t x2694 = 57U;
uint64_t x2854 = 464564756087LLU;
int64_t x2856 = 14694004052716LL;
volatile uint64_t t56 = 29066173340LLU;
uint32_t x3142 = 58907U;
int64_t x3144 = INT64_MAX;
volatile int64_t t60 = 20093247074064LL;
volatile uint32_t t61 = 17U;
uint64_t x3165 = 3067LLU;
static uint32_t x3261 = UINT32_MAX;
static int32_t x3521 = INT32_MIN;
volatile int64_t t69 = 691100465417LL;
uint8_t x3575 = 3U;
int64_t x3662 = INT64_MIN;
int64_t t72 = 2118438470292924181LL;
volatile int64_t t73 = 160456281676LL;
uint32_t t75 = 261675U;
int32_t t76 = -1071286379;
static int32_t x3869 = -1;
volatile int8_t x3870 = -3;
volatile int64_t x3872 = -1LL;
int32_t x3944 = -1;
int8_t x4122 = INT8_MIN;
volatile uint8_t x4123 = 1U;
static volatile int32_t t80 = -489704172;
uint64_t x4161 = UINT64_MAX;
int16_t x4163 = 0;
volatile int8_t x4296 = INT8_MAX;
uint64_t x4397 = 1654501211LLU;
volatile int8_t x4399 = 15;
volatile uint16_t x4528 = 61U;
uint64_t x4753 = 9LLU;
uint16_t x4756 = 1890U;
uint32_t x4817 = 80U;
uint8_t x4892 = UINT8_MAX;
int32_t x4939 = 1;
uint32_t t95 = 3U;
int32_t x4945 = 196237122;
volatile uint16_t x4946 = 14110U;
uint8_t x4947 = 0U;
volatile int16_t x4962 = 22;
int32_t t97 = 3259;
int32_t t98 = 1;
uint32_t x5121 = UINT32_MAX;
int8_t x5123 = 2;


void f0(void) {
	int32_t x249 = -111962;
	int64_t x250 = INT64_MIN;
	static int64_t x251 = 0LL;
	uint8_t x252 = UINT8_MAX;
	int64_t t0 = 1063725197LL;

	t0 = (((x249-x250)<<x251)/x252);

	if (t0 != 36170086419037897LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x341 = 70641504056847372LLU;
	int64_t x342 = INT64_MIN;
	int8_t x343 = 28;
	static int32_t x344 = INT32_MIN;

	t1 = (((x341-x342)<<x343)/x344);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x373 = 3;
	int16_t x374 = INT16_MIN;
	static volatile uint8_t x375 = 2U;
	int64_t x376 = -1LL;
	volatile int64_t t2 = -144998156056492LL;

	t2 = (((x373-x374)<<x375)/x376);

	if (t2 != -131084LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x397 = -1;
	static uint64_t x398 = UINT64_MAX;
	uint8_t x399 = 3U;
	int8_t x400 = INT8_MAX;

	t3 = (((x397-x398)<<x399)/x400);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x433 = 1407381LL;
	uint16_t x434 = 39U;
	int8_t x436 = INT8_MAX;
	volatile int64_t t4 = -432553065329LL;

	t4 = (((x433-x434)<<x435)/x436);

	if (t4 != 5673693LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x457 = 21U;
	int32_t x458 = 1;
	uint16_t x459 = 7U;
	int16_t x460 = -1;
	volatile int32_t t5 = -8;

	t5 = (((x457-x458)<<x459)/x460);

	if (t5 != -2560) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x505 = UINT8_MAX;
	uint16_t x506 = 0U;
	static uint8_t x507 = 2U;
	int8_t x508 = INT8_MIN;
	int32_t t6 = -7309;

	t6 = (((x505-x506)<<x507)/x508);

	if (t6 != -7) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x573 = 42;
	static volatile int64_t x574 = -808921301037789LL;
	int16_t x576 = -1;
	volatile int64_t t7 = 176953370563122LL;

	t7 = (((x573-x574)<<x575)/x576);

	if (t7 != -1617842602075662LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x585 = -1;
	int32_t x587 = 1;
	static int32_t t8 = -38249794;

	t8 = (((x585-x586)<<x587)/x588);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x609 = UINT8_MAX;
	uint64_t x610 = 7368647157128LLU;
	int16_t x612 = INT16_MIN;
	static uint64_t t9 = 89LLU;

	t9 = (((x609-x610)<<x611)/x612);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x673 = 1;
	int64_t x674 = -1LL;
	int8_t x675 = 11;
	volatile int32_t x676 = INT32_MIN;
	int64_t t10 = -10591859775288LL;

	t10 = (((x673-x674)<<x675)/x676);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x734 = UINT32_MAX;
	uint32_t x735 = 31U;
	volatile int16_t x736 = INT16_MAX;

	t11 = (((x733-x734)<<x735)/x736);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x754 = INT16_MIN;
	static uint8_t x755 = 11U;
	int64_t x756 = -1LL;
	int64_t t12 = -512034025178525LL;

	t12 = (((x753-x754)<<x755)/x756);

	if (t12 != -67106816LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x769 = INT16_MAX;
	volatile uint64_t x770 = 6410478898147200902LLU;
	uint16_t x771 = 0U;
	int64_t x772 = 10205847709589472LL;

	t13 = (((x769-x770)<<x771)/x772);

	if (t13 != 1179LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x818 = 16140786437LLU;
	uint64_t t14 = 2130931262204542689LLU;

	t14 = (((x817-x818)<<x819)/x820);

	if (t14 != 292805460975047394LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x909 = INT32_MIN;
	uint64_t x910 = 1554766795LLU;
	volatile uint32_t x911 = 2U;
	uint16_t x912 = 13668U;

	t15 = (((x909-x910)<<x911)/x912);

	if (t15 != 1349630089179144LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x918 = 27938U;
	int8_t x919 = 1;
	int32_t x920 = -5;

	t16 = (((x917-x918)<<x919)/x920);

	if (t16 != -507507) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1013 = INT8_MIN;
	uint32_t x1014 = 65U;
	uint8_t x1015 = 4U;
	static int16_t x1016 = INT16_MAX;
	volatile uint32_t t17 = 1096662566U;

	t17 = (((x1013-x1014)<<x1015)/x1016);

	if (t17 != 131075U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1045 = -1LL;
	int8_t x1046 = INT8_MIN;
	int16_t x1047 = 0;
	int64_t x1048 = INT64_MIN;
	volatile int64_t t18 = 276687182366LL;

	t18 = (((x1045-x1046)<<x1047)/x1048);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1073 = UINT16_MAX;
	static int32_t x1074 = -2878772;
	volatile uint8_t x1075 = 0U;
	uint16_t x1076 = 2U;
	volatile int32_t t19 = 3931;

	t19 = (((x1073-x1074)<<x1075)/x1076);

	if (t19 != 1472153) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1081 = 725345058645005LLU;
	volatile int16_t x1082 = INT16_MIN;
	int8_t x1083 = 15;
	int64_t x1084 = -2197496145LL;
	uint64_t t20 = 79841LLU;

	t20 = (((x1081-x1082)<<x1083)/x1084);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1106 = INT16_MAX;
	int8_t x1107 = 36;
	volatile uint64_t x1108 = 2763055652579LLU;
	uint64_t t21 = 288155274093LLU;

	t21 = (((x1105-x1106)<<x1107)/x1108);

	if (t21 != 364515LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1169 = 9110U;
	volatile uint64_t x1170 = 1024218364740155707LLU;
	static int8_t x1171 = 16;
	int64_t x1172 = INT64_MIN;
	static volatile uint64_t t22 = 896496064106877964LLU;

	t22 = (((x1169-x1170)<<x1171)/x1172);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1193 = INT16_MIN;
	uint64_t x1194 = UINT64_MAX;
	static int32_t x1195 = 11;
	int8_t x1196 = INT8_MIN;
	uint64_t t23 = 250322LLU;

	t23 = (((x1193-x1194)<<x1195)/x1196);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1233 = UINT8_MAX;
	int8_t x1234 = INT8_MAX;
	uint8_t x1236 = 25U;
	volatile int32_t t24 = 23304390;

	t24 = (((x1233-x1234)<<x1235)/x1236);

	if (t24 != 671088) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1345 = 3544364U;
	uint64_t x1346 = UINT64_MAX;
	int8_t x1347 = 13;
	int16_t x1348 = -1;
	volatile uint64_t t25 = 31450445LLU;

	t25 = (((x1345-x1346)<<x1347)/x1348);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1373 = INT8_MAX;
	int8_t x1374 = INT8_MIN;
	uint64_t x1375 = 3LLU;
	static int32_t x1376 = INT32_MIN;

	t26 = (((x1373-x1374)<<x1375)/x1376);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1381 = -1LL;
	uint64_t x1382 = 23477828779782213LLU;
	uint32_t x1383 = 1U;
	int8_t x1384 = -5;
	static volatile uint64_t t27 = 24360191702LLU;

	t27 = (((x1381-x1382)<<x1383)/x1384);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1394 = 0;
	volatile uint8_t x1395 = 23U;
	uint32_t x1396 = UINT32_MAX;
	volatile uint32_t t28 = 1883479822U;

	t28 = (((x1393-x1394)<<x1395)/x1396);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1421 = 10974870U;
	volatile int64_t x1422 = -1LL;
	volatile int64_t x1424 = INT64_MAX;
	int64_t t29 = 21458565743LL;

	t29 = (((x1421-x1422)<<x1423)/x1424);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1443 = 1;
	int8_t x1444 = INT8_MIN;
	static volatile int64_t t30 = -755021623083LL;

	t30 = (((x1441-x1442)<<x1443)/x1444);

	if (t30 != -11601LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1462 = 4509384938513692583LLU;
	static uint8_t x1463 = 47U;
	int32_t x1464 = INT32_MIN;
	static uint64_t t31 = 78294188793LLU;

	t31 = (((x1461-x1462)<<x1463)/x1464);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1469 = -3734;
	int64_t x1470 = -20193431LL;
	int8_t x1471 = 6;
	int64_t x1472 = INT64_MAX;

	t32 = (((x1469-x1470)<<x1471)/x1472);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1477 = 192050419LLU;
	static int8_t x1478 = 15;
	int8_t x1479 = 9;
	uint8_t x1480 = 5U;
	uint64_t t33 = 3841229590627178078LLU;

	t33 = (((x1477-x1478)<<x1479)/x1480);

	if (t33 != 19665961369LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1545 = 32457U;
	int16_t x1546 = -60;
	int16_t x1548 = INT16_MIN;
	int32_t t34 = -326;

	t34 = (((x1545-x1546)<<x1547)/x1548);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1565 = 86U;
	volatile uint8_t x1566 = UINT8_MAX;
	uint32_t x1567 = 0U;
	static int64_t t35 = 3LL;

	t35 = (((x1565-x1566)<<x1567)/x1568);

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1585 = 8765451303769LL;
	static volatile int32_t x1586 = 12222;
	uint8_t x1587 = 20U;
	static int64_t x1588 = INT64_MIN;
	volatile int64_t t36 = 934466LL;

	t36 = (((x1585-x1586)<<x1587)/x1588);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1617 = -1LL;
	int16_t x1618 = -1;
	volatile int64_t x1620 = INT64_MIN;
	volatile int64_t t37 = -7620208678143LL;

	t37 = (((x1617-x1618)<<x1619)/x1620);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1637 = INT64_MIN;
	int64_t x1638 = INT64_MIN;
	int8_t x1639 = 7;
	static volatile uint64_t x1640 = UINT64_MAX;
	uint64_t t38 = 4720569455403686LLU;

	t38 = (((x1637-x1638)<<x1639)/x1640);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1749 = INT8_MIN;
	uint64_t x1750 = UINT64_MAX;
	uint8_t x1751 = 20U;
	static volatile int32_t x1752 = INT32_MIN;
	uint64_t t39 = 1493LLU;

	t39 = (((x1749-x1750)<<x1751)/x1752);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1785 = 196U;
	static uint16_t x1787 = 1U;
	int32_t t40 = -3;

	t40 = (((x1785-x1786)<<x1787)/x1788);

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1841 = 2;
	int32_t x1843 = 15;
	volatile uint64_t t41 = 1LLU;

	t41 = (((x1841-x1842)<<x1843)/x1844);

	if (t41 != 14043LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1898 = 2U;
	static uint8_t x1899 = 1U;
	static int16_t x1900 = -9;
	int32_t t42 = 388304;

	t42 = (((x1897-x1898)<<x1899)/x1900);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1949 = -1;
	int16_t x1950 = INT16_MIN;
	volatile uint8_t x1951 = 2U;
	uint8_t x1952 = UINT8_MAX;
	static int32_t t43 = 54370061;

	t43 = (((x1949-x1950)<<x1951)/x1952);

	if (t43 != 513) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1954 = 173121445536592LLU;
	volatile uint64_t t44 = 2439597LLU;

	t44 = (((x1953-x1954)<<x1955)/x1956);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2157 = 45U;
	uint16_t x2158 = 0U;
	int8_t x2159 = 8;
	int16_t x2160 = INT16_MIN;
	int32_t t45 = -52;

	t45 = (((x2157-x2158)<<x2159)/x2160);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2209 = INT8_MAX;
	int32_t x2210 = -14346783;
	int8_t x2211 = 1;
	uint32_t x2212 = 74400U;

	t46 = (((x2209-x2210)<<x2211)/x2212);

	if (t46 != 385U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x2261 = 7U;
	volatile uint32_t x2262 = 1U;
	static uint16_t x2263 = 3U;
	int8_t x2264 = -3;
	volatile uint32_t t47 = 178429U;

	t47 = (((x2261-x2262)<<x2263)/x2264);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2265 = 0U;
	volatile int32_t x2266 = INT32_MAX;
	uint8_t x2267 = 3U;
	int64_t x2268 = -1LL;
	int64_t t48 = -85041LL;

	t48 = (((x2265-x2266)<<x2267)/x2268);

	if (t48 != -8LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2349 = 81878287355797LLU;
	int32_t x2350 = -4124115;
	static int16_t x2351 = 0;
	uint16_t x2352 = 88U;
	volatile uint64_t t49 = 1925291243LLU;

	t49 = (((x2349-x2350)<<x2351)/x2352);

	if (t49 != 930435130453LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2417 = 267U;
	volatile int16_t x2418 = 1;
	uint8_t x2419 = 5U;
	static uint64_t x2420 = UINT64_MAX;

	t50 = (((x2417-x2418)<<x2419)/x2420);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2433 = INT16_MAX;
	int8_t x2434 = 0;
	volatile uint8_t x2435 = 6U;
	int32_t x2436 = -1;

	t51 = (((x2433-x2434)<<x2435)/x2436);

	if (t51 != -2097088) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x2445 = INT64_MIN;
	uint64_t x2446 = UINT64_MAX;
	uint32_t x2447 = 13U;
	int32_t x2448 = 30;
	uint64_t t52 = 65667663478LLU;

	t52 = (((x2445-x2446)<<x2447)/x2448);

	if (t52 != 273LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2546 = INT8_MIN;
	uint8_t x2547 = 10U;
	volatile uint32_t t53 = 467586204U;

	t53 = (((x2545-x2546)<<x2547)/x2548);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2693 = UINT32_MAX;
	int16_t x2695 = 0;
	volatile int16_t x2696 = INT16_MIN;
	uint32_t t54 = 1U;

	t54 = (((x2693-x2694)<<x2695)/x2696);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2853 = UINT64_MAX;
	uint16_t x2855 = 2U;
	uint64_t t55 = 87451LLU;

	t55 = (((x2853-x2854)<<x2855)/x2856);

	if (t55 != 1255392LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2905 = UINT64_MAX;
	int32_t x2906 = INT32_MAX;
	int16_t x2907 = 1;
	int32_t x2908 = INT32_MIN;

	t56 = (((x2905-x2906)<<x2907)/x2908);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2913 = 6;
	int8_t x2914 = -1;
	static uint8_t x2915 = 3U;
	uint32_t x2916 = 25U;
	uint32_t t57 = 80357039U;

	t57 = (((x2913-x2914)<<x2915)/x2916);

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3017 = 29888091LLU;
	int16_t x3018 = INT16_MAX;
	uint16_t x3019 = 1U;
	uint8_t x3020 = UINT8_MAX;
	uint64_t t58 = 6292276333609LLU;

	t58 = (((x3017-x3018)<<x3019)/x3020);

	if (t58 != 234159LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3049 = INT32_MAX;
	uint64_t x3050 = 12349047LLU;
	int16_t x3051 = 0;
	static int16_t x3052 = -596;
	uint64_t t59 = 1024496LLU;

	t59 = (((x3049-x3050)<<x3051)/x3052);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3141 = -1;
	static int8_t x3143 = 5;

	t60 = (((x3141-x3142)<<x3143)/x3144);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3149 = UINT32_MAX;
	int32_t x3150 = INT32_MAX;
	volatile int16_t x3151 = 16;
	volatile uint8_t x3152 = UINT8_MAX;

	t61 = (((x3149-x3150)<<x3151)/x3152);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3166 = 12U;
	int16_t x3167 = 1;
	int8_t x3168 = 1;
	uint64_t t62 = 19488LLU;

	t62 = (((x3165-x3166)<<x3167)/x3168);

	if (t62 != 6110LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3177 = -851;
	static uint32_t x3178 = 81353605U;
	uint8_t x3179 = 1U;
	uint32_t x3180 = 141914033U;
	volatile uint32_t t63 = 490U;

	t63 = (((x3177-x3178)<<x3179)/x3180);

	if (t63 != 29U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3197 = INT64_MIN;
	static int64_t x3198 = INT64_MIN;
	uint64_t x3199 = 27LLU;
	int32_t x3200 = -1;
	int64_t t64 = -2250331949926235LL;

	t64 = (((x3197-x3198)<<x3199)/x3200);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3262 = INT16_MIN;
	uint8_t x3263 = 0U;
	volatile uint16_t x3264 = UINT16_MAX;
	volatile uint32_t t65 = 1759916935U;

	t65 = (((x3261-x3262)<<x3263)/x3264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3285 = 26U;
	volatile int8_t x3286 = 1;
	static volatile uint8_t x3287 = 10U;
	int16_t x3288 = -1;
	int32_t t66 = 83203;

	t66 = (((x3285-x3286)<<x3287)/x3288);

	if (t66 != -25600) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3429 = INT64_MAX;
	uint64_t x3430 = UINT64_MAX;
	uint16_t x3431 = 1U;
	volatile int32_t x3432 = -1;
	uint64_t t67 = 1981947LLU;

	t67 = (((x3429-x3430)<<x3431)/x3432);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3485 = -55;
	int16_t x3486 = INT16_MIN;
	uint16_t x3487 = 1U;
	int32_t x3488 = INT32_MAX;
	volatile int32_t t68 = 6747175;

	t68 = (((x3485-x3486)<<x3487)/x3488);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3522 = INT32_MIN;
	static uint8_t x3523 = 7U;
	int64_t x3524 = INT64_MIN;

	t69 = (((x3521-x3522)<<x3523)/x3524);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3573 = -30;
	int16_t x3574 = INT16_MIN;
	volatile int8_t x3576 = -1;
	volatile int32_t t70 = 1;

	t70 = (((x3573-x3574)<<x3575)/x3576);

	if (t70 != -261904) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3581 = INT32_MIN;
	static uint64_t x3582 = 1941LLU;
	int8_t x3583 = 8;
	int8_t x3584 = INT8_MIN;
	uint64_t t71 = 119785LLU;

	t71 = (((x3581-x3582)<<x3583)/x3584);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3661 = -1;
	int16_t x3663 = 0;
	volatile uint32_t x3664 = 606357U;

	t72 = (((x3661-x3662)<<x3663)/x3664);

	if (t72 != 15211124860197LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3677 = INT16_MAX;
	int16_t x3678 = INT16_MIN;
	static int8_t x3679 = 0;
	static volatile int64_t x3680 = INT64_MIN;

	t73 = (((x3677-x3678)<<x3679)/x3680);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3741 = 455;
	volatile uint16_t x3742 = 1U;
	uint32_t x3743 = 0U;
	int8_t x3744 = INT8_MIN;
	int32_t t74 = 114279957;

	t74 = (((x3741-x3742)<<x3743)/x3744);

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3753 = 1;
	uint32_t x3754 = 1116173464U;
	int8_t x3755 = 4;
	static int32_t x3756 = INT32_MAX;

	t75 = (((x3753-x3754)<<x3755)/x3756);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3829 = INT8_MAX;
	int16_t x3830 = -1;
	uint64_t x3831 = 17LLU;
	volatile int16_t x3832 = -1;

	t76 = (((x3829-x3830)<<x3831)/x3832);

	if (t76 != -16777216) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3871 = 1U;
	volatile int64_t t77 = 1971716LL;

	t77 = (((x3869-x3870)<<x3871)/x3872);

	if (t77 != -4LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x3941 = UINT32_MAX;
	static int16_t x3942 = 6499;
	volatile uint16_t x3943 = 0U;
	volatile uint32_t t78 = 11U;

	t78 = (((x3941-x3942)<<x3943)/x3944);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4101 = -24;
	int64_t x4102 = INT64_MIN;
	static int16_t x4103 = 0;
	uint64_t x4104 = 14674988419LLU;
	uint64_t t79 = 3538042LLU;

	t79 = (((x4101-x4102)<<x4103)/x4104);

	if (t79 != 628509663LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x4121 = 12U;
	int16_t x4124 = INT16_MAX;

	t80 = (((x4121-x4122)<<x4123)/x4124);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4162 = INT64_MIN;
	int16_t x4164 = 1;
	static volatile uint64_t t81 = 29694194259669608LLU;

	t81 = (((x4161-x4162)<<x4163)/x4164);

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4293 = UINT16_MAX;
	int8_t x4294 = 5;
	uint32_t x4295 = 7U;
	int32_t t82 = -6932645;

	t82 = (((x4293-x4294)<<x4295)/x4296);

	if (t82 != 66045) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4329 = UINT64_MAX;
	static uint32_t x4330 = 6U;
	int16_t x4331 = 25;
	int64_t x4332 = INT64_MIN;
	static volatile uint64_t t83 = 774LLU;

	t83 = (((x4329-x4330)<<x4331)/x4332);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4337 = INT64_MIN;
	uint64_t x4338 = 6182317715868LLU;
	uint16_t x4339 = 40U;
	uint64_t x4340 = UINT64_MAX;
	uint64_t t84 = 16470898LLU;

	t84 = (((x4337-x4338)<<x4339)/x4340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4353 = INT32_MAX;
	uint32_t x4354 = 97U;
	int32_t x4355 = 4;
	uint32_t x4356 = UINT32_MAX;
	uint32_t t85 = 3292U;

	t85 = (((x4353-x4354)<<x4355)/x4356);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4398 = 1816;
	static int16_t x4400 = INT16_MAX;
	uint64_t t86 = 70758526229702597LLU;

	t86 = (((x4397-x4398)<<x4399)/x4400);

	if (t86 != 1654549887LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4525 = 21U;
	static uint32_t x4526 = 359597001U;
	int8_t x4527 = 3;
	uint32_t t87 = 146292U;

	t87 = (((x4525-x4526)<<x4527)/x4528);

	if (t87 != 23249040U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x4553 = UINT16_MAX;
	volatile int16_t x4554 = INT16_MIN;
	static uint16_t x4555 = 4U;
	int8_t x4556 = 37;
	int32_t t88 = 6516995;

	t88 = (((x4553-x4554)<<x4555)/x4556);

	if (t88 != 42509) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4601 = 1592U;
	volatile uint8_t x4602 = UINT8_MAX;
	int8_t x4603 = 1;
	uint32_t x4604 = 19723U;
	volatile uint32_t t89 = 3449U;

	t89 = (((x4601-x4602)<<x4603)/x4604);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4677 = -15576;
	volatile uint64_t x4678 = 71685099391LLU;
	volatile uint16_t x4679 = 1U;
	int16_t x4680 = -1;
	volatile uint64_t t90 = 279LLU;

	t90 = (((x4677-x4678)<<x4679)/x4680);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4754 = -1;
	int32_t x4755 = 4;
	uint64_t t91 = 39LLU;

	t91 = (((x4753-x4754)<<x4755)/x4756);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x4818 = 28U;
	volatile uint8_t x4819 = 4U;
	int64_t x4820 = 37259215326729LL;
	int64_t t92 = -6274485795LL;

	t92 = (((x4817-x4818)<<x4819)/x4820);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4889 = -1;
	static volatile uint32_t x4890 = UINT32_MAX;
	static uint32_t x4891 = 15U;
	static uint32_t t93 = 471130U;

	t93 = (((x4889-x4890)<<x4891)/x4892);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4893 = UINT32_MAX;
	volatile uint64_t x4894 = UINT64_MAX;
	uint8_t x4895 = 1U;
	static int16_t x4896 = INT16_MAX;
	uint64_t t94 = 133597556743669LLU;

	t94 = (((x4893-x4894)<<x4895)/x4896);

	if (t94 != 262152LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4937 = 1;
	volatile uint32_t x4938 = 5U;
	int8_t x4940 = 6;

	t95 = (((x4937-x4938)<<x4939)/x4940);

	if (t95 != 715827881U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x4948 = 1U;
	volatile int32_t t96 = 1;

	t96 = (((x4945-x4946)<<x4947)/x4948);

	if (t96 != 196223012) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x4961 = 46U;
	uint32_t x4963 = 3U;
	volatile int16_t x4964 = 21;

	t97 = (((x4961-x4962)<<x4963)/x4964);

	if (t97 != 9) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5041 = 21U;
	int32_t x5042 = -1;
	uint32_t x5043 = 3U;
	int32_t x5044 = INT32_MAX;

	t98 = (((x5041-x5042)<<x5043)/x5044);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5122 = -25;
	int16_t x5124 = INT16_MIN;
	volatile uint32_t t99 = 0U;

	t99 = (((x5121-x5122)<<x5123)/x5124);

	if (t99 != 0U) { NG(); } else { ; }
	
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

